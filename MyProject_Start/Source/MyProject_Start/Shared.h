#pragma once

#pragma pack(push, 1)

// 플랫폼별 타입 처리
#ifdef _WIN32
#include <cstdint>
typedef uint8_t uint8;
typedef int32_t int32;
#else
#include "CoreMinimal.h"
#endif

enum EPacketType : uint8 {
    PKT_JOIN = 1,
    PKT_MOVE = 2,
    PKT_ROLE_SELECT = 3,
    PKT_READY = 4,
    PKT_GAME_START = 5
};

struct FPacketRoleSelect {
    uint8 Type;
    int32 PlayerId;
    uint8 Role;
};

enum EPlayerRole : uint8 {
    ROLE_NONE = 0,
    ROLE_KILLER = 1,
    ROLE_SURVIVOR = 2
};

struct FPacketReady {
    uint8 Type;
    int32 PlayerId;
    bool bReady;
};

enum ECharacterType : uint8 {
    CHARACTER_SURVIVOR = 1,
    CHARACTER_KILLER = 2,
};

struct FPlayerData {
    int32 PlayerId;
    uint8 CharacterType;
    float X, Y, Z;
    float RotationYaw;
    float ForwardValue; // 앞뒤 입력 (-1.0 ~ 1.0)
    float RightValue;   // 좌우 입력 (-1.0 ~ 1.0)
    bool bIsSprinting;  // 달리기 상태
};

struct FPacketJoin {
    uint8 Type;
    int32 MyId;
};

struct FPacketMove {
    uint8 Type;
    FPlayerData Data;
};

#pragma pack(pop)