#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "NetworkWorker.h"
#include "MyGameInstance.generated.h"

UCLASS()
class MYPROJECT_START_API UMyGameInstance : public UGameInstance
{
    GENERATED_BODY()

public:
    FNetworkWorker* NetworkWorker;

    UPROPERTY(BlueprintReadWrite)
    uint8 LocalSelectedRole;


    virtual void Init() override;

    UFUNCTION(BlueprintCallable)
    void SelectKiller();

    UFUNCTION(BlueprintCallable)
    void SelectSurvivor();

    UFUNCTION(BlueprintCallable)
    void SendReady();

    virtual void Shutdown() override;
};