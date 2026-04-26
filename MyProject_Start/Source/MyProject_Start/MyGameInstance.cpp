#include "MyGameInstance.h"
#include "HAL/RunnableThread.h"
#include "Shared.h"


void UMyGameInstance::Init()
{
    Super::Init();

    NetworkWorker = new FNetworkWorker("127.0.0.1", 7777);

    if (NetworkWorker->Init())
    {
        FRunnableThread::Create(
            NetworkWorker,
            TEXT("NetworkThread")
        );
    }
}
void UMyGameInstance::SelectKiller()

{
    LocalSelectedRole = 1;
    if (NetworkWorker)
    {
        NetworkWorker->SendRolePacket(ROLE_KILLER);
    }
}
void UMyGameInstance::SelectSurvivor()
{
    LocalSelectedRole = 2;
    if (NetworkWorker)
    {
        NetworkWorker->SendRolePacket(ROLE_SURVIVOR);
    }
}
void UMyGameInstance::SendReady()
{
    if (NetworkWorker)
    {
        NetworkWorker->SendReadyPacket(true);
    }
}

void UMyGameInstance::Shutdown()
{
    Super::Shutdown();

    if (NetworkWorker)
    {
        NetworkWorker->Stop();
        delete NetworkWorker;
        NetworkWorker = nullptr;
    }
}