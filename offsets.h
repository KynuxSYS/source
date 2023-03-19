#pragma once
namespace Offsets
{
    constexpr auto
        State = 0x926CB00, //+
        Key = State + 0x38,
        ProcessEvent = 0x34B3BD0, //+
        StaticFindObject = 0x34C7F50, //+
        TriggerVEH = 0x1C62DE0, //+
        SetAresOutlineMode = 0x4AD40F0, //+
        bone_matrix = 0x4B228F0, //+
        GetActorBounds = 0x49061D0, //+
        portrait_map = 0x1120, //+
        character_map = portrait_map + 0x8; //+
}
