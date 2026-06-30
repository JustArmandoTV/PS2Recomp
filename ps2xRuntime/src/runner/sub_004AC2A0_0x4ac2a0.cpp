#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AC2A0
// Address: 0x4ac2a0 - 0x4aca10
void sub_004AC2A0_0x4ac2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC2A0_0x4ac2a0");
#endif

    switch (ctx->pc) {
        case 0x4ac2a0u: goto label_4ac2a0;
        case 0x4ac2a4u: goto label_4ac2a4;
        case 0x4ac2a8u: goto label_4ac2a8;
        case 0x4ac2acu: goto label_4ac2ac;
        case 0x4ac2b0u: goto label_4ac2b0;
        case 0x4ac2b4u: goto label_4ac2b4;
        case 0x4ac2b8u: goto label_4ac2b8;
        case 0x4ac2bcu: goto label_4ac2bc;
        case 0x4ac2c0u: goto label_4ac2c0;
        case 0x4ac2c4u: goto label_4ac2c4;
        case 0x4ac2c8u: goto label_4ac2c8;
        case 0x4ac2ccu: goto label_4ac2cc;
        case 0x4ac2d0u: goto label_4ac2d0;
        case 0x4ac2d4u: goto label_4ac2d4;
        case 0x4ac2d8u: goto label_4ac2d8;
        case 0x4ac2dcu: goto label_4ac2dc;
        case 0x4ac2e0u: goto label_4ac2e0;
        case 0x4ac2e4u: goto label_4ac2e4;
        case 0x4ac2e8u: goto label_4ac2e8;
        case 0x4ac2ecu: goto label_4ac2ec;
        case 0x4ac2f0u: goto label_4ac2f0;
        case 0x4ac2f4u: goto label_4ac2f4;
        case 0x4ac2f8u: goto label_4ac2f8;
        case 0x4ac2fcu: goto label_4ac2fc;
        case 0x4ac300u: goto label_4ac300;
        case 0x4ac304u: goto label_4ac304;
        case 0x4ac308u: goto label_4ac308;
        case 0x4ac30cu: goto label_4ac30c;
        case 0x4ac310u: goto label_4ac310;
        case 0x4ac314u: goto label_4ac314;
        case 0x4ac318u: goto label_4ac318;
        case 0x4ac31cu: goto label_4ac31c;
        case 0x4ac320u: goto label_4ac320;
        case 0x4ac324u: goto label_4ac324;
        case 0x4ac328u: goto label_4ac328;
        case 0x4ac32cu: goto label_4ac32c;
        case 0x4ac330u: goto label_4ac330;
        case 0x4ac334u: goto label_4ac334;
        case 0x4ac338u: goto label_4ac338;
        case 0x4ac33cu: goto label_4ac33c;
        case 0x4ac340u: goto label_4ac340;
        case 0x4ac344u: goto label_4ac344;
        case 0x4ac348u: goto label_4ac348;
        case 0x4ac34cu: goto label_4ac34c;
        case 0x4ac350u: goto label_4ac350;
        case 0x4ac354u: goto label_4ac354;
        case 0x4ac358u: goto label_4ac358;
        case 0x4ac35cu: goto label_4ac35c;
        case 0x4ac360u: goto label_4ac360;
        case 0x4ac364u: goto label_4ac364;
        case 0x4ac368u: goto label_4ac368;
        case 0x4ac36cu: goto label_4ac36c;
        case 0x4ac370u: goto label_4ac370;
        case 0x4ac374u: goto label_4ac374;
        case 0x4ac378u: goto label_4ac378;
        case 0x4ac37cu: goto label_4ac37c;
        case 0x4ac380u: goto label_4ac380;
        case 0x4ac384u: goto label_4ac384;
        case 0x4ac388u: goto label_4ac388;
        case 0x4ac38cu: goto label_4ac38c;
        case 0x4ac390u: goto label_4ac390;
        case 0x4ac394u: goto label_4ac394;
        case 0x4ac398u: goto label_4ac398;
        case 0x4ac39cu: goto label_4ac39c;
        case 0x4ac3a0u: goto label_4ac3a0;
        case 0x4ac3a4u: goto label_4ac3a4;
        case 0x4ac3a8u: goto label_4ac3a8;
        case 0x4ac3acu: goto label_4ac3ac;
        case 0x4ac3b0u: goto label_4ac3b0;
        case 0x4ac3b4u: goto label_4ac3b4;
        case 0x4ac3b8u: goto label_4ac3b8;
        case 0x4ac3bcu: goto label_4ac3bc;
        case 0x4ac3c0u: goto label_4ac3c0;
        case 0x4ac3c4u: goto label_4ac3c4;
        case 0x4ac3c8u: goto label_4ac3c8;
        case 0x4ac3ccu: goto label_4ac3cc;
        case 0x4ac3d0u: goto label_4ac3d0;
        case 0x4ac3d4u: goto label_4ac3d4;
        case 0x4ac3d8u: goto label_4ac3d8;
        case 0x4ac3dcu: goto label_4ac3dc;
        case 0x4ac3e0u: goto label_4ac3e0;
        case 0x4ac3e4u: goto label_4ac3e4;
        case 0x4ac3e8u: goto label_4ac3e8;
        case 0x4ac3ecu: goto label_4ac3ec;
        case 0x4ac3f0u: goto label_4ac3f0;
        case 0x4ac3f4u: goto label_4ac3f4;
        case 0x4ac3f8u: goto label_4ac3f8;
        case 0x4ac3fcu: goto label_4ac3fc;
        case 0x4ac400u: goto label_4ac400;
        case 0x4ac404u: goto label_4ac404;
        case 0x4ac408u: goto label_4ac408;
        case 0x4ac40cu: goto label_4ac40c;
        case 0x4ac410u: goto label_4ac410;
        case 0x4ac414u: goto label_4ac414;
        case 0x4ac418u: goto label_4ac418;
        case 0x4ac41cu: goto label_4ac41c;
        case 0x4ac420u: goto label_4ac420;
        case 0x4ac424u: goto label_4ac424;
        case 0x4ac428u: goto label_4ac428;
        case 0x4ac42cu: goto label_4ac42c;
        case 0x4ac430u: goto label_4ac430;
        case 0x4ac434u: goto label_4ac434;
        case 0x4ac438u: goto label_4ac438;
        case 0x4ac43cu: goto label_4ac43c;
        case 0x4ac440u: goto label_4ac440;
        case 0x4ac444u: goto label_4ac444;
        case 0x4ac448u: goto label_4ac448;
        case 0x4ac44cu: goto label_4ac44c;
        case 0x4ac450u: goto label_4ac450;
        case 0x4ac454u: goto label_4ac454;
        case 0x4ac458u: goto label_4ac458;
        case 0x4ac45cu: goto label_4ac45c;
        case 0x4ac460u: goto label_4ac460;
        case 0x4ac464u: goto label_4ac464;
        case 0x4ac468u: goto label_4ac468;
        case 0x4ac46cu: goto label_4ac46c;
        case 0x4ac470u: goto label_4ac470;
        case 0x4ac474u: goto label_4ac474;
        case 0x4ac478u: goto label_4ac478;
        case 0x4ac47cu: goto label_4ac47c;
        case 0x4ac480u: goto label_4ac480;
        case 0x4ac484u: goto label_4ac484;
        case 0x4ac488u: goto label_4ac488;
        case 0x4ac48cu: goto label_4ac48c;
        case 0x4ac490u: goto label_4ac490;
        case 0x4ac494u: goto label_4ac494;
        case 0x4ac498u: goto label_4ac498;
        case 0x4ac49cu: goto label_4ac49c;
        case 0x4ac4a0u: goto label_4ac4a0;
        case 0x4ac4a4u: goto label_4ac4a4;
        case 0x4ac4a8u: goto label_4ac4a8;
        case 0x4ac4acu: goto label_4ac4ac;
        case 0x4ac4b0u: goto label_4ac4b0;
        case 0x4ac4b4u: goto label_4ac4b4;
        case 0x4ac4b8u: goto label_4ac4b8;
        case 0x4ac4bcu: goto label_4ac4bc;
        case 0x4ac4c0u: goto label_4ac4c0;
        case 0x4ac4c4u: goto label_4ac4c4;
        case 0x4ac4c8u: goto label_4ac4c8;
        case 0x4ac4ccu: goto label_4ac4cc;
        case 0x4ac4d0u: goto label_4ac4d0;
        case 0x4ac4d4u: goto label_4ac4d4;
        case 0x4ac4d8u: goto label_4ac4d8;
        case 0x4ac4dcu: goto label_4ac4dc;
        case 0x4ac4e0u: goto label_4ac4e0;
        case 0x4ac4e4u: goto label_4ac4e4;
        case 0x4ac4e8u: goto label_4ac4e8;
        case 0x4ac4ecu: goto label_4ac4ec;
        case 0x4ac4f0u: goto label_4ac4f0;
        case 0x4ac4f4u: goto label_4ac4f4;
        case 0x4ac4f8u: goto label_4ac4f8;
        case 0x4ac4fcu: goto label_4ac4fc;
        case 0x4ac500u: goto label_4ac500;
        case 0x4ac504u: goto label_4ac504;
        case 0x4ac508u: goto label_4ac508;
        case 0x4ac50cu: goto label_4ac50c;
        case 0x4ac510u: goto label_4ac510;
        case 0x4ac514u: goto label_4ac514;
        case 0x4ac518u: goto label_4ac518;
        case 0x4ac51cu: goto label_4ac51c;
        case 0x4ac520u: goto label_4ac520;
        case 0x4ac524u: goto label_4ac524;
        case 0x4ac528u: goto label_4ac528;
        case 0x4ac52cu: goto label_4ac52c;
        case 0x4ac530u: goto label_4ac530;
        case 0x4ac534u: goto label_4ac534;
        case 0x4ac538u: goto label_4ac538;
        case 0x4ac53cu: goto label_4ac53c;
        case 0x4ac540u: goto label_4ac540;
        case 0x4ac544u: goto label_4ac544;
        case 0x4ac548u: goto label_4ac548;
        case 0x4ac54cu: goto label_4ac54c;
        case 0x4ac550u: goto label_4ac550;
        case 0x4ac554u: goto label_4ac554;
        case 0x4ac558u: goto label_4ac558;
        case 0x4ac55cu: goto label_4ac55c;
        case 0x4ac560u: goto label_4ac560;
        case 0x4ac564u: goto label_4ac564;
        case 0x4ac568u: goto label_4ac568;
        case 0x4ac56cu: goto label_4ac56c;
        case 0x4ac570u: goto label_4ac570;
        case 0x4ac574u: goto label_4ac574;
        case 0x4ac578u: goto label_4ac578;
        case 0x4ac57cu: goto label_4ac57c;
        case 0x4ac580u: goto label_4ac580;
        case 0x4ac584u: goto label_4ac584;
        case 0x4ac588u: goto label_4ac588;
        case 0x4ac58cu: goto label_4ac58c;
        case 0x4ac590u: goto label_4ac590;
        case 0x4ac594u: goto label_4ac594;
        case 0x4ac598u: goto label_4ac598;
        case 0x4ac59cu: goto label_4ac59c;
        case 0x4ac5a0u: goto label_4ac5a0;
        case 0x4ac5a4u: goto label_4ac5a4;
        case 0x4ac5a8u: goto label_4ac5a8;
        case 0x4ac5acu: goto label_4ac5ac;
        case 0x4ac5b0u: goto label_4ac5b0;
        case 0x4ac5b4u: goto label_4ac5b4;
        case 0x4ac5b8u: goto label_4ac5b8;
        case 0x4ac5bcu: goto label_4ac5bc;
        case 0x4ac5c0u: goto label_4ac5c0;
        case 0x4ac5c4u: goto label_4ac5c4;
        case 0x4ac5c8u: goto label_4ac5c8;
        case 0x4ac5ccu: goto label_4ac5cc;
        case 0x4ac5d0u: goto label_4ac5d0;
        case 0x4ac5d4u: goto label_4ac5d4;
        case 0x4ac5d8u: goto label_4ac5d8;
        case 0x4ac5dcu: goto label_4ac5dc;
        case 0x4ac5e0u: goto label_4ac5e0;
        case 0x4ac5e4u: goto label_4ac5e4;
        case 0x4ac5e8u: goto label_4ac5e8;
        case 0x4ac5ecu: goto label_4ac5ec;
        case 0x4ac5f0u: goto label_4ac5f0;
        case 0x4ac5f4u: goto label_4ac5f4;
        case 0x4ac5f8u: goto label_4ac5f8;
        case 0x4ac5fcu: goto label_4ac5fc;
        case 0x4ac600u: goto label_4ac600;
        case 0x4ac604u: goto label_4ac604;
        case 0x4ac608u: goto label_4ac608;
        case 0x4ac60cu: goto label_4ac60c;
        case 0x4ac610u: goto label_4ac610;
        case 0x4ac614u: goto label_4ac614;
        case 0x4ac618u: goto label_4ac618;
        case 0x4ac61cu: goto label_4ac61c;
        case 0x4ac620u: goto label_4ac620;
        case 0x4ac624u: goto label_4ac624;
        case 0x4ac628u: goto label_4ac628;
        case 0x4ac62cu: goto label_4ac62c;
        case 0x4ac630u: goto label_4ac630;
        case 0x4ac634u: goto label_4ac634;
        case 0x4ac638u: goto label_4ac638;
        case 0x4ac63cu: goto label_4ac63c;
        case 0x4ac640u: goto label_4ac640;
        case 0x4ac644u: goto label_4ac644;
        case 0x4ac648u: goto label_4ac648;
        case 0x4ac64cu: goto label_4ac64c;
        case 0x4ac650u: goto label_4ac650;
        case 0x4ac654u: goto label_4ac654;
        case 0x4ac658u: goto label_4ac658;
        case 0x4ac65cu: goto label_4ac65c;
        case 0x4ac660u: goto label_4ac660;
        case 0x4ac664u: goto label_4ac664;
        case 0x4ac668u: goto label_4ac668;
        case 0x4ac66cu: goto label_4ac66c;
        case 0x4ac670u: goto label_4ac670;
        case 0x4ac674u: goto label_4ac674;
        case 0x4ac678u: goto label_4ac678;
        case 0x4ac67cu: goto label_4ac67c;
        case 0x4ac680u: goto label_4ac680;
        case 0x4ac684u: goto label_4ac684;
        case 0x4ac688u: goto label_4ac688;
        case 0x4ac68cu: goto label_4ac68c;
        case 0x4ac690u: goto label_4ac690;
        case 0x4ac694u: goto label_4ac694;
        case 0x4ac698u: goto label_4ac698;
        case 0x4ac69cu: goto label_4ac69c;
        case 0x4ac6a0u: goto label_4ac6a0;
        case 0x4ac6a4u: goto label_4ac6a4;
        case 0x4ac6a8u: goto label_4ac6a8;
        case 0x4ac6acu: goto label_4ac6ac;
        case 0x4ac6b0u: goto label_4ac6b0;
        case 0x4ac6b4u: goto label_4ac6b4;
        case 0x4ac6b8u: goto label_4ac6b8;
        case 0x4ac6bcu: goto label_4ac6bc;
        case 0x4ac6c0u: goto label_4ac6c0;
        case 0x4ac6c4u: goto label_4ac6c4;
        case 0x4ac6c8u: goto label_4ac6c8;
        case 0x4ac6ccu: goto label_4ac6cc;
        case 0x4ac6d0u: goto label_4ac6d0;
        case 0x4ac6d4u: goto label_4ac6d4;
        case 0x4ac6d8u: goto label_4ac6d8;
        case 0x4ac6dcu: goto label_4ac6dc;
        case 0x4ac6e0u: goto label_4ac6e0;
        case 0x4ac6e4u: goto label_4ac6e4;
        case 0x4ac6e8u: goto label_4ac6e8;
        case 0x4ac6ecu: goto label_4ac6ec;
        case 0x4ac6f0u: goto label_4ac6f0;
        case 0x4ac6f4u: goto label_4ac6f4;
        case 0x4ac6f8u: goto label_4ac6f8;
        case 0x4ac6fcu: goto label_4ac6fc;
        case 0x4ac700u: goto label_4ac700;
        case 0x4ac704u: goto label_4ac704;
        case 0x4ac708u: goto label_4ac708;
        case 0x4ac70cu: goto label_4ac70c;
        case 0x4ac710u: goto label_4ac710;
        case 0x4ac714u: goto label_4ac714;
        case 0x4ac718u: goto label_4ac718;
        case 0x4ac71cu: goto label_4ac71c;
        case 0x4ac720u: goto label_4ac720;
        case 0x4ac724u: goto label_4ac724;
        case 0x4ac728u: goto label_4ac728;
        case 0x4ac72cu: goto label_4ac72c;
        case 0x4ac730u: goto label_4ac730;
        case 0x4ac734u: goto label_4ac734;
        case 0x4ac738u: goto label_4ac738;
        case 0x4ac73cu: goto label_4ac73c;
        case 0x4ac740u: goto label_4ac740;
        case 0x4ac744u: goto label_4ac744;
        case 0x4ac748u: goto label_4ac748;
        case 0x4ac74cu: goto label_4ac74c;
        case 0x4ac750u: goto label_4ac750;
        case 0x4ac754u: goto label_4ac754;
        case 0x4ac758u: goto label_4ac758;
        case 0x4ac75cu: goto label_4ac75c;
        case 0x4ac760u: goto label_4ac760;
        case 0x4ac764u: goto label_4ac764;
        case 0x4ac768u: goto label_4ac768;
        case 0x4ac76cu: goto label_4ac76c;
        case 0x4ac770u: goto label_4ac770;
        case 0x4ac774u: goto label_4ac774;
        case 0x4ac778u: goto label_4ac778;
        case 0x4ac77cu: goto label_4ac77c;
        case 0x4ac780u: goto label_4ac780;
        case 0x4ac784u: goto label_4ac784;
        case 0x4ac788u: goto label_4ac788;
        case 0x4ac78cu: goto label_4ac78c;
        case 0x4ac790u: goto label_4ac790;
        case 0x4ac794u: goto label_4ac794;
        case 0x4ac798u: goto label_4ac798;
        case 0x4ac79cu: goto label_4ac79c;
        case 0x4ac7a0u: goto label_4ac7a0;
        case 0x4ac7a4u: goto label_4ac7a4;
        case 0x4ac7a8u: goto label_4ac7a8;
        case 0x4ac7acu: goto label_4ac7ac;
        case 0x4ac7b0u: goto label_4ac7b0;
        case 0x4ac7b4u: goto label_4ac7b4;
        case 0x4ac7b8u: goto label_4ac7b8;
        case 0x4ac7bcu: goto label_4ac7bc;
        case 0x4ac7c0u: goto label_4ac7c0;
        case 0x4ac7c4u: goto label_4ac7c4;
        case 0x4ac7c8u: goto label_4ac7c8;
        case 0x4ac7ccu: goto label_4ac7cc;
        case 0x4ac7d0u: goto label_4ac7d0;
        case 0x4ac7d4u: goto label_4ac7d4;
        case 0x4ac7d8u: goto label_4ac7d8;
        case 0x4ac7dcu: goto label_4ac7dc;
        case 0x4ac7e0u: goto label_4ac7e0;
        case 0x4ac7e4u: goto label_4ac7e4;
        case 0x4ac7e8u: goto label_4ac7e8;
        case 0x4ac7ecu: goto label_4ac7ec;
        case 0x4ac7f0u: goto label_4ac7f0;
        case 0x4ac7f4u: goto label_4ac7f4;
        case 0x4ac7f8u: goto label_4ac7f8;
        case 0x4ac7fcu: goto label_4ac7fc;
        case 0x4ac800u: goto label_4ac800;
        case 0x4ac804u: goto label_4ac804;
        case 0x4ac808u: goto label_4ac808;
        case 0x4ac80cu: goto label_4ac80c;
        case 0x4ac810u: goto label_4ac810;
        case 0x4ac814u: goto label_4ac814;
        case 0x4ac818u: goto label_4ac818;
        case 0x4ac81cu: goto label_4ac81c;
        case 0x4ac820u: goto label_4ac820;
        case 0x4ac824u: goto label_4ac824;
        case 0x4ac828u: goto label_4ac828;
        case 0x4ac82cu: goto label_4ac82c;
        case 0x4ac830u: goto label_4ac830;
        case 0x4ac834u: goto label_4ac834;
        case 0x4ac838u: goto label_4ac838;
        case 0x4ac83cu: goto label_4ac83c;
        case 0x4ac840u: goto label_4ac840;
        case 0x4ac844u: goto label_4ac844;
        case 0x4ac848u: goto label_4ac848;
        case 0x4ac84cu: goto label_4ac84c;
        case 0x4ac850u: goto label_4ac850;
        case 0x4ac854u: goto label_4ac854;
        case 0x4ac858u: goto label_4ac858;
        case 0x4ac85cu: goto label_4ac85c;
        case 0x4ac860u: goto label_4ac860;
        case 0x4ac864u: goto label_4ac864;
        case 0x4ac868u: goto label_4ac868;
        case 0x4ac86cu: goto label_4ac86c;
        case 0x4ac870u: goto label_4ac870;
        case 0x4ac874u: goto label_4ac874;
        case 0x4ac878u: goto label_4ac878;
        case 0x4ac87cu: goto label_4ac87c;
        case 0x4ac880u: goto label_4ac880;
        case 0x4ac884u: goto label_4ac884;
        case 0x4ac888u: goto label_4ac888;
        case 0x4ac88cu: goto label_4ac88c;
        case 0x4ac890u: goto label_4ac890;
        case 0x4ac894u: goto label_4ac894;
        case 0x4ac898u: goto label_4ac898;
        case 0x4ac89cu: goto label_4ac89c;
        case 0x4ac8a0u: goto label_4ac8a0;
        case 0x4ac8a4u: goto label_4ac8a4;
        case 0x4ac8a8u: goto label_4ac8a8;
        case 0x4ac8acu: goto label_4ac8ac;
        case 0x4ac8b0u: goto label_4ac8b0;
        case 0x4ac8b4u: goto label_4ac8b4;
        case 0x4ac8b8u: goto label_4ac8b8;
        case 0x4ac8bcu: goto label_4ac8bc;
        case 0x4ac8c0u: goto label_4ac8c0;
        case 0x4ac8c4u: goto label_4ac8c4;
        case 0x4ac8c8u: goto label_4ac8c8;
        case 0x4ac8ccu: goto label_4ac8cc;
        case 0x4ac8d0u: goto label_4ac8d0;
        case 0x4ac8d4u: goto label_4ac8d4;
        case 0x4ac8d8u: goto label_4ac8d8;
        case 0x4ac8dcu: goto label_4ac8dc;
        case 0x4ac8e0u: goto label_4ac8e0;
        case 0x4ac8e4u: goto label_4ac8e4;
        case 0x4ac8e8u: goto label_4ac8e8;
        case 0x4ac8ecu: goto label_4ac8ec;
        case 0x4ac8f0u: goto label_4ac8f0;
        case 0x4ac8f4u: goto label_4ac8f4;
        case 0x4ac8f8u: goto label_4ac8f8;
        case 0x4ac8fcu: goto label_4ac8fc;
        case 0x4ac900u: goto label_4ac900;
        case 0x4ac904u: goto label_4ac904;
        case 0x4ac908u: goto label_4ac908;
        case 0x4ac90cu: goto label_4ac90c;
        case 0x4ac910u: goto label_4ac910;
        case 0x4ac914u: goto label_4ac914;
        case 0x4ac918u: goto label_4ac918;
        case 0x4ac91cu: goto label_4ac91c;
        case 0x4ac920u: goto label_4ac920;
        case 0x4ac924u: goto label_4ac924;
        case 0x4ac928u: goto label_4ac928;
        case 0x4ac92cu: goto label_4ac92c;
        case 0x4ac930u: goto label_4ac930;
        case 0x4ac934u: goto label_4ac934;
        case 0x4ac938u: goto label_4ac938;
        case 0x4ac93cu: goto label_4ac93c;
        case 0x4ac940u: goto label_4ac940;
        case 0x4ac944u: goto label_4ac944;
        case 0x4ac948u: goto label_4ac948;
        case 0x4ac94cu: goto label_4ac94c;
        case 0x4ac950u: goto label_4ac950;
        case 0x4ac954u: goto label_4ac954;
        case 0x4ac958u: goto label_4ac958;
        case 0x4ac95cu: goto label_4ac95c;
        case 0x4ac960u: goto label_4ac960;
        case 0x4ac964u: goto label_4ac964;
        case 0x4ac968u: goto label_4ac968;
        case 0x4ac96cu: goto label_4ac96c;
        case 0x4ac970u: goto label_4ac970;
        case 0x4ac974u: goto label_4ac974;
        case 0x4ac978u: goto label_4ac978;
        case 0x4ac97cu: goto label_4ac97c;
        case 0x4ac980u: goto label_4ac980;
        case 0x4ac984u: goto label_4ac984;
        case 0x4ac988u: goto label_4ac988;
        case 0x4ac98cu: goto label_4ac98c;
        case 0x4ac990u: goto label_4ac990;
        case 0x4ac994u: goto label_4ac994;
        case 0x4ac998u: goto label_4ac998;
        case 0x4ac99cu: goto label_4ac99c;
        case 0x4ac9a0u: goto label_4ac9a0;
        case 0x4ac9a4u: goto label_4ac9a4;
        case 0x4ac9a8u: goto label_4ac9a8;
        case 0x4ac9acu: goto label_4ac9ac;
        case 0x4ac9b0u: goto label_4ac9b0;
        case 0x4ac9b4u: goto label_4ac9b4;
        case 0x4ac9b8u: goto label_4ac9b8;
        case 0x4ac9bcu: goto label_4ac9bc;
        case 0x4ac9c0u: goto label_4ac9c0;
        case 0x4ac9c4u: goto label_4ac9c4;
        case 0x4ac9c8u: goto label_4ac9c8;
        case 0x4ac9ccu: goto label_4ac9cc;
        case 0x4ac9d0u: goto label_4ac9d0;
        case 0x4ac9d4u: goto label_4ac9d4;
        case 0x4ac9d8u: goto label_4ac9d8;
        case 0x4ac9dcu: goto label_4ac9dc;
        case 0x4ac9e0u: goto label_4ac9e0;
        case 0x4ac9e4u: goto label_4ac9e4;
        case 0x4ac9e8u: goto label_4ac9e8;
        case 0x4ac9ecu: goto label_4ac9ec;
        case 0x4ac9f0u: goto label_4ac9f0;
        case 0x4ac9f4u: goto label_4ac9f4;
        case 0x4ac9f8u: goto label_4ac9f8;
        case 0x4ac9fcu: goto label_4ac9fc;
        case 0x4aca00u: goto label_4aca00;
        case 0x4aca04u: goto label_4aca04;
        case 0x4aca08u: goto label_4aca08;
        case 0x4aca0cu: goto label_4aca0c;
        default: break;
    }

    ctx->pc = 0x4ac2a0u;

label_4ac2a0:
    // 0x4ac2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ac2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ac2a4:
    // 0x4ac2a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ac2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ac2a8:
    // 0x4ac2a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ac2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ac2ac:
    // 0x4ac2ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ac2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ac2b0:
    // 0x4ac2b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ac2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ac2b4:
    // 0x4ac2b4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4ac2b8:
    if (ctx->pc == 0x4AC2B8u) {
        ctx->pc = 0x4AC2B8u;
            // 0x4ac2b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC2BCu;
        goto label_4ac2bc;
    }
    ctx->pc = 0x4AC2B4u;
    {
        const bool branch_taken_0x4ac2b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC2B4u;
            // 0x4ac2b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac2b4) {
            ctx->pc = 0x4AC3E8u;
            goto label_4ac3e8;
        }
    }
    ctx->pc = 0x4AC2BCu;
label_4ac2bc:
    // 0x4ac2bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ac2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ac2c0:
    // 0x4ac2c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ac2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ac2c4:
    // 0x4ac2c4: 0x24630490  addiu       $v1, $v1, 0x490
    ctx->pc = 0x4ac2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
label_4ac2c8:
    // 0x4ac2c8: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4ac2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_4ac2cc:
    // 0x4ac2cc: 0x244204c8  addiu       $v0, $v0, 0x4C8
    ctx->pc = 0x4ac2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1224));
label_4ac2d0:
    // 0x4ac2d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ac2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ac2d4:
    // 0x4ac2d4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4ac2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4ac2d8:
    // 0x4ac2d8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4ac2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4ac2dc:
    // 0x4ac2dc: 0xc0407c0  jal         func_101F00
label_4ac2e0:
    if (ctx->pc == 0x4AC2E0u) {
        ctx->pc = 0x4AC2E0u;
            // 0x4ac2e0: 0x24a5c400  addiu       $a1, $a1, -0x3C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951936));
        ctx->pc = 0x4AC2E4u;
        goto label_4ac2e4;
    }
    ctx->pc = 0x4AC2DCu;
    SET_GPR_U32(ctx, 31, 0x4AC2E4u);
    ctx->pc = 0x4AC2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC2DCu;
            // 0x4ac2e0: 0x24a5c400  addiu       $a1, $a1, -0x3C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC2E4u; }
        if (ctx->pc != 0x4AC2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC2E4u; }
        if (ctx->pc != 0x4AC2E4u) { return; }
    }
    ctx->pc = 0x4AC2E4u;
label_4ac2e4:
    // 0x4ac2e4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4ac2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4ac2e8:
    // 0x4ac2e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4ac2ec:
    if (ctx->pc == 0x4AC2ECu) {
        ctx->pc = 0x4AC2ECu;
            // 0x4ac2ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4AC2F0u;
        goto label_4ac2f0;
    }
    ctx->pc = 0x4AC2E8u;
    {
        const bool branch_taken_0x4ac2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac2e8) {
            ctx->pc = 0x4AC2ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC2E8u;
            // 0x4ac2ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC2FCu;
            goto label_4ac2fc;
        }
    }
    ctx->pc = 0x4AC2F0u;
label_4ac2f0:
    // 0x4ac2f0: 0xc07507c  jal         func_1D41F0
label_4ac2f4:
    if (ctx->pc == 0x4AC2F4u) {
        ctx->pc = 0x4AC2F4u;
            // 0x4ac2f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4AC2F8u;
        goto label_4ac2f8;
    }
    ctx->pc = 0x4AC2F0u;
    SET_GPR_U32(ctx, 31, 0x4AC2F8u);
    ctx->pc = 0x4AC2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC2F0u;
            // 0x4ac2f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC2F8u; }
        if (ctx->pc != 0x4AC2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC2F8u; }
        if (ctx->pc != 0x4AC2F8u) { return; }
    }
    ctx->pc = 0x4AC2F8u;
label_4ac2f8:
    // 0x4ac2f8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4ac2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4ac2fc:
    // 0x4ac2fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4ac300:
    if (ctx->pc == 0x4AC300u) {
        ctx->pc = 0x4AC300u;
            // 0x4ac300: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4AC304u;
        goto label_4ac304;
    }
    ctx->pc = 0x4AC2FCu;
    {
        const bool branch_taken_0x4ac2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac2fc) {
            ctx->pc = 0x4AC300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC2FCu;
            // 0x4ac300: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC32Cu;
            goto label_4ac32c;
        }
    }
    ctx->pc = 0x4AC304u;
label_4ac304:
    // 0x4ac304: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4ac308:
    if (ctx->pc == 0x4AC308u) {
        ctx->pc = 0x4AC30Cu;
        goto label_4ac30c;
    }
    ctx->pc = 0x4AC304u;
    {
        const bool branch_taken_0x4ac304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac304) {
            ctx->pc = 0x4AC328u;
            goto label_4ac328;
        }
    }
    ctx->pc = 0x4AC30Cu;
label_4ac30c:
    // 0x4ac30c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4ac310:
    if (ctx->pc == 0x4AC310u) {
        ctx->pc = 0x4AC314u;
        goto label_4ac314;
    }
    ctx->pc = 0x4AC30Cu;
    {
        const bool branch_taken_0x4ac30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac30c) {
            ctx->pc = 0x4AC328u;
            goto label_4ac328;
        }
    }
    ctx->pc = 0x4AC314u;
label_4ac314:
    // 0x4ac314: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4ac314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4ac318:
    // 0x4ac318: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4ac31c:
    if (ctx->pc == 0x4AC31Cu) {
        ctx->pc = 0x4AC320u;
        goto label_4ac320;
    }
    ctx->pc = 0x4AC318u;
    {
        const bool branch_taken_0x4ac318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac318) {
            ctx->pc = 0x4AC328u;
            goto label_4ac328;
        }
    }
    ctx->pc = 0x4AC320u;
label_4ac320:
    // 0x4ac320: 0xc0400a8  jal         func_1002A0
label_4ac324:
    if (ctx->pc == 0x4AC324u) {
        ctx->pc = 0x4AC328u;
        goto label_4ac328;
    }
    ctx->pc = 0x4AC320u;
    SET_GPR_U32(ctx, 31, 0x4AC328u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC328u; }
        if (ctx->pc != 0x4AC328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC328u; }
        if (ctx->pc != 0x4AC328u) { return; }
    }
    ctx->pc = 0x4AC328u;
label_4ac328:
    // 0x4ac328: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4ac328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4ac32c:
    // 0x4ac32c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4ac330:
    if (ctx->pc == 0x4AC330u) {
        ctx->pc = 0x4AC330u;
            // 0x4ac330: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4AC334u;
        goto label_4ac334;
    }
    ctx->pc = 0x4AC32Cu;
    {
        const bool branch_taken_0x4ac32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac32c) {
            ctx->pc = 0x4AC330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC32Cu;
            // 0x4ac330: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC35Cu;
            goto label_4ac35c;
        }
    }
    ctx->pc = 0x4AC334u;
label_4ac334:
    // 0x4ac334: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4ac338:
    if (ctx->pc == 0x4AC338u) {
        ctx->pc = 0x4AC33Cu;
        goto label_4ac33c;
    }
    ctx->pc = 0x4AC334u;
    {
        const bool branch_taken_0x4ac334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac334) {
            ctx->pc = 0x4AC358u;
            goto label_4ac358;
        }
    }
    ctx->pc = 0x4AC33Cu;
label_4ac33c:
    // 0x4ac33c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4ac340:
    if (ctx->pc == 0x4AC340u) {
        ctx->pc = 0x4AC344u;
        goto label_4ac344;
    }
    ctx->pc = 0x4AC33Cu;
    {
        const bool branch_taken_0x4ac33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac33c) {
            ctx->pc = 0x4AC358u;
            goto label_4ac358;
        }
    }
    ctx->pc = 0x4AC344u;
label_4ac344:
    // 0x4ac344: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4ac344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4ac348:
    // 0x4ac348: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4ac34c:
    if (ctx->pc == 0x4AC34Cu) {
        ctx->pc = 0x4AC350u;
        goto label_4ac350;
    }
    ctx->pc = 0x4AC348u;
    {
        const bool branch_taken_0x4ac348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac348) {
            ctx->pc = 0x4AC358u;
            goto label_4ac358;
        }
    }
    ctx->pc = 0x4AC350u;
label_4ac350:
    // 0x4ac350: 0xc0400a8  jal         func_1002A0
label_4ac354:
    if (ctx->pc == 0x4AC354u) {
        ctx->pc = 0x4AC358u;
        goto label_4ac358;
    }
    ctx->pc = 0x4AC350u;
    SET_GPR_U32(ctx, 31, 0x4AC358u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC358u; }
        if (ctx->pc != 0x4AC358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC358u; }
        if (ctx->pc != 0x4AC358u) { return; }
    }
    ctx->pc = 0x4AC358u;
label_4ac358:
    // 0x4ac358: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4ac358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4ac35c:
    // 0x4ac35c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4ac360:
    if (ctx->pc == 0x4AC360u) {
        ctx->pc = 0x4AC364u;
        goto label_4ac364;
    }
    ctx->pc = 0x4AC35Cu;
    {
        const bool branch_taken_0x4ac35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac35c) {
            ctx->pc = 0x4AC378u;
            goto label_4ac378;
        }
    }
    ctx->pc = 0x4AC364u;
label_4ac364:
    // 0x4ac364: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ac364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ac368:
    // 0x4ac368: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4ac368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4ac36c:
    // 0x4ac36c: 0x24630478  addiu       $v1, $v1, 0x478
    ctx->pc = 0x4ac36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1144));
label_4ac370:
    // 0x4ac370: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4ac370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4ac374:
    // 0x4ac374: 0xac40a990  sw          $zero, -0x5670($v0)
    ctx->pc = 0x4ac374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945168), GPR_U32(ctx, 0));
label_4ac378:
    // 0x4ac378: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4ac37c:
    if (ctx->pc == 0x4AC37Cu) {
        ctx->pc = 0x4AC37Cu;
            // 0x4ac37c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4AC380u;
        goto label_4ac380;
    }
    ctx->pc = 0x4AC378u;
    {
        const bool branch_taken_0x4ac378 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac378) {
            ctx->pc = 0x4AC37Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC378u;
            // 0x4ac37c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC3D4u;
            goto label_4ac3d4;
        }
    }
    ctx->pc = 0x4AC380u;
label_4ac380:
    // 0x4ac380: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ac380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ac384:
    // 0x4ac384: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4ac384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4ac388:
    // 0x4ac388: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ac388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4ac38c:
    // 0x4ac38c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4ac38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4ac390:
    // 0x4ac390: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4ac394:
    if (ctx->pc == 0x4AC394u) {
        ctx->pc = 0x4AC394u;
            // 0x4ac394: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4AC398u;
        goto label_4ac398;
    }
    ctx->pc = 0x4AC390u;
    {
        const bool branch_taken_0x4ac390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac390) {
            ctx->pc = 0x4AC394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC390u;
            // 0x4ac394: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC3ACu;
            goto label_4ac3ac;
        }
    }
    ctx->pc = 0x4AC398u;
label_4ac398:
    // 0x4ac398: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ac398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ac39c:
    // 0x4ac39c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4ac39cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4ac3a0:
    // 0x4ac3a0: 0x320f809  jalr        $t9
label_4ac3a4:
    if (ctx->pc == 0x4AC3A4u) {
        ctx->pc = 0x4AC3A4u;
            // 0x4ac3a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4AC3A8u;
        goto label_4ac3a8;
    }
    ctx->pc = 0x4AC3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AC3A8u);
        ctx->pc = 0x4AC3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC3A0u;
            // 0x4ac3a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AC3A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AC3A8u; }
            if (ctx->pc != 0x4AC3A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4AC3A8u;
label_4ac3a8:
    // 0x4ac3a8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4ac3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4ac3ac:
    // 0x4ac3ac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4ac3b0:
    if (ctx->pc == 0x4AC3B0u) {
        ctx->pc = 0x4AC3B0u;
            // 0x4ac3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC3B4u;
        goto label_4ac3b4;
    }
    ctx->pc = 0x4AC3ACu;
    {
        const bool branch_taken_0x4ac3ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac3ac) {
            ctx->pc = 0x4AC3B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC3ACu;
            // 0x4ac3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC3C8u;
            goto label_4ac3c8;
        }
    }
    ctx->pc = 0x4AC3B4u;
label_4ac3b4:
    // 0x4ac3b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ac3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ac3b8:
    // 0x4ac3b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4ac3b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4ac3bc:
    // 0x4ac3bc: 0x320f809  jalr        $t9
label_4ac3c0:
    if (ctx->pc == 0x4AC3C0u) {
        ctx->pc = 0x4AC3C0u;
            // 0x4ac3c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4AC3C4u;
        goto label_4ac3c4;
    }
    ctx->pc = 0x4AC3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AC3C4u);
        ctx->pc = 0x4AC3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC3BCu;
            // 0x4ac3c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AC3C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AC3C4u; }
            if (ctx->pc != 0x4AC3C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4AC3C4u;
label_4ac3c4:
    // 0x4ac3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ac3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ac3c8:
    // 0x4ac3c8: 0xc075bf8  jal         func_1D6FE0
label_4ac3cc:
    if (ctx->pc == 0x4AC3CCu) {
        ctx->pc = 0x4AC3CCu;
            // 0x4ac3cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC3D0u;
        goto label_4ac3d0;
    }
    ctx->pc = 0x4AC3C8u;
    SET_GPR_U32(ctx, 31, 0x4AC3D0u);
    ctx->pc = 0x4AC3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC3C8u;
            // 0x4ac3cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC3D0u; }
        if (ctx->pc != 0x4AC3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC3D0u; }
        if (ctx->pc != 0x4AC3D0u) { return; }
    }
    ctx->pc = 0x4AC3D0u;
label_4ac3d0:
    // 0x4ac3d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4ac3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4ac3d4:
    // 0x4ac3d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ac3d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ac3d8:
    // 0x4ac3d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4ac3dc:
    if (ctx->pc == 0x4AC3DCu) {
        ctx->pc = 0x4AC3DCu;
            // 0x4ac3dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC3E0u;
        goto label_4ac3e0;
    }
    ctx->pc = 0x4AC3D8u;
    {
        const bool branch_taken_0x4ac3d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ac3d8) {
            ctx->pc = 0x4AC3DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC3D8u;
            // 0x4ac3dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC3ECu;
            goto label_4ac3ec;
        }
    }
    ctx->pc = 0x4AC3E0u;
label_4ac3e0:
    // 0x4ac3e0: 0xc0400a8  jal         func_1002A0
label_4ac3e4:
    if (ctx->pc == 0x4AC3E4u) {
        ctx->pc = 0x4AC3E4u;
            // 0x4ac3e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC3E8u;
        goto label_4ac3e8;
    }
    ctx->pc = 0x4AC3E0u;
    SET_GPR_U32(ctx, 31, 0x4AC3E8u);
    ctx->pc = 0x4AC3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC3E0u;
            // 0x4ac3e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC3E8u; }
        if (ctx->pc != 0x4AC3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC3E8u; }
        if (ctx->pc != 0x4AC3E8u) { return; }
    }
    ctx->pc = 0x4AC3E8u;
label_4ac3e8:
    // 0x4ac3e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ac3e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ac3ec:
    // 0x4ac3ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ac3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ac3f0:
    // 0x4ac3f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ac3f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ac3f4:
    // 0x4ac3f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ac3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ac3f8:
    // 0x4ac3f8: 0x3e00008  jr          $ra
label_4ac3fc:
    if (ctx->pc == 0x4AC3FCu) {
        ctx->pc = 0x4AC3FCu;
            // 0x4ac3fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4AC400u;
        goto label_4ac400;
    }
    ctx->pc = 0x4AC3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC3F8u;
            // 0x4ac3fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AC400u;
label_4ac400:
    // 0x4ac400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ac400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ac404:
    // 0x4ac404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ac404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ac408:
    // 0x4ac408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ac408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ac40c:
    // 0x4ac40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ac40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ac410:
    // 0x4ac410: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ac410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ac414:
    // 0x4ac414: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_4ac418:
    if (ctx->pc == 0x4AC418u) {
        ctx->pc = 0x4AC418u;
            // 0x4ac418: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC41Cu;
        goto label_4ac41c;
    }
    ctx->pc = 0x4AC414u;
    {
        const bool branch_taken_0x4ac414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC414u;
            // 0x4ac418: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac414) {
            ctx->pc = 0x4AC4DCu;
            goto label_4ac4dc;
        }
    }
    ctx->pc = 0x4AC41Cu;
label_4ac41c:
    // 0x4ac41c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ac41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ac420:
    // 0x4ac420: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ac420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ac424:
    // 0x4ac424: 0x24630530  addiu       $v1, $v1, 0x530
    ctx->pc = 0x4ac424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1328));
label_4ac428:
    // 0x4ac428: 0x24420570  addiu       $v0, $v0, 0x570
    ctx->pc = 0x4ac428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
label_4ac42c:
    // 0x4ac42c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ac42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ac430:
    // 0x4ac430: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4ac430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4ac434:
    // 0x4ac434: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ac434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ac438:
    // 0x4ac438: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4ac438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4ac43c:
    // 0x4ac43c: 0x320f809  jalr        $t9
label_4ac440:
    if (ctx->pc == 0x4AC440u) {
        ctx->pc = 0x4AC444u;
        goto label_4ac444;
    }
    ctx->pc = 0x4AC43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AC444u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AC444u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AC444u; }
            if (ctx->pc != 0x4AC444u) { return; }
        }
        }
    }
    ctx->pc = 0x4AC444u;
label_4ac444:
    // 0x4ac444: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_4ac448:
    if (ctx->pc == 0x4AC448u) {
        ctx->pc = 0x4AC448u;
            // 0x4ac448: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4AC44Cu;
        goto label_4ac44c;
    }
    ctx->pc = 0x4AC444u;
    {
        const bool branch_taken_0x4ac444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac444) {
            ctx->pc = 0x4AC448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC444u;
            // 0x4ac448: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC4C8u;
            goto label_4ac4c8;
        }
    }
    ctx->pc = 0x4AC44Cu;
label_4ac44c:
    // 0x4ac44c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ac44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ac450:
    // 0x4ac450: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4ac450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4ac454:
    // 0x4ac454: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x4ac454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_4ac458:
    // 0x4ac458: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x4ac458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_4ac45c:
    // 0x4ac45c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ac45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4ac460:
    // 0x4ac460: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x4ac460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_4ac464:
    // 0x4ac464: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4ac468:
    if (ctx->pc == 0x4AC468u) {
        ctx->pc = 0x4AC468u;
            // 0x4ac468: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x4AC46Cu;
        goto label_4ac46c;
    }
    ctx->pc = 0x4AC464u;
    {
        const bool branch_taken_0x4ac464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC464u;
            // 0x4ac468: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac464) {
            ctx->pc = 0x4AC4A0u;
            goto label_4ac4a0;
        }
    }
    ctx->pc = 0x4AC46Cu;
label_4ac46c:
    // 0x4ac46c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ac46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ac470:
    // 0x4ac470: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x4ac470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_4ac474:
    // 0x4ac474: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4ac474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4ac478:
    // 0x4ac478: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4ac478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4ac47c:
    // 0x4ac47c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_4ac480:
    if (ctx->pc == 0x4AC480u) {
        ctx->pc = 0x4AC484u;
        goto label_4ac484;
    }
    ctx->pc = 0x4AC47Cu;
    {
        const bool branch_taken_0x4ac47c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac47c) {
            ctx->pc = 0x4AC4A0u;
            goto label_4ac4a0;
        }
    }
    ctx->pc = 0x4AC484u;
label_4ac484:
    // 0x4ac484: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4ac488:
    if (ctx->pc == 0x4AC488u) {
        ctx->pc = 0x4AC488u;
            // 0x4ac488: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4AC48Cu;
        goto label_4ac48c;
    }
    ctx->pc = 0x4AC484u;
    {
        const bool branch_taken_0x4ac484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac484) {
            ctx->pc = 0x4AC488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC484u;
            // 0x4ac488: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC4A0u;
            goto label_4ac4a0;
        }
    }
    ctx->pc = 0x4AC48Cu;
label_4ac48c:
    // 0x4ac48c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ac48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ac490:
    // 0x4ac490: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4ac490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4ac494:
    // 0x4ac494: 0x320f809  jalr        $t9
label_4ac498:
    if (ctx->pc == 0x4AC498u) {
        ctx->pc = 0x4AC498u;
            // 0x4ac498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4AC49Cu;
        goto label_4ac49c;
    }
    ctx->pc = 0x4AC494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AC49Cu);
        ctx->pc = 0x4AC498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC494u;
            // 0x4ac498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AC49Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AC49Cu; }
            if (ctx->pc != 0x4AC49Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4AC49Cu;
label_4ac49c:
    // 0x4ac49c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x4ac49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_4ac4a0:
    // 0x4ac4a0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_4ac4a4:
    if (ctx->pc == 0x4AC4A4u) {
        ctx->pc = 0x4AC4A8u;
        goto label_4ac4a8;
    }
    ctx->pc = 0x4AC4A0u;
    {
        const bool branch_taken_0x4ac4a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac4a0) {
            ctx->pc = 0x4AC4C4u;
            goto label_4ac4c4;
        }
    }
    ctx->pc = 0x4AC4A8u;
label_4ac4a8:
    // 0x4ac4a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ac4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ac4ac:
    // 0x4ac4ac: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x4ac4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_4ac4b0:
    // 0x4ac4b0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_4ac4b4:
    if (ctx->pc == 0x4AC4B4u) {
        ctx->pc = 0x4AC4B4u;
            // 0x4ac4b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4AC4B8u;
        goto label_4ac4b8;
    }
    ctx->pc = 0x4AC4B0u;
    {
        const bool branch_taken_0x4ac4b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC4B0u;
            // 0x4ac4b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac4b0) {
            ctx->pc = 0x4AC4C4u;
            goto label_4ac4c4;
        }
    }
    ctx->pc = 0x4AC4B8u;
label_4ac4b8:
    // 0x4ac4b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ac4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ac4bc:
    // 0x4ac4bc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4ac4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4ac4c0:
    // 0x4ac4c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ac4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4ac4c4:
    // 0x4ac4c4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4ac4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4ac4c8:
    // 0x4ac4c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ac4c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ac4cc:
    // 0x4ac4cc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4ac4d0:
    if (ctx->pc == 0x4AC4D0u) {
        ctx->pc = 0x4AC4D0u;
            // 0x4ac4d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC4D4u;
        goto label_4ac4d4;
    }
    ctx->pc = 0x4AC4CCu;
    {
        const bool branch_taken_0x4ac4cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ac4cc) {
            ctx->pc = 0x4AC4D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC4CCu;
            // 0x4ac4d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC4E0u;
            goto label_4ac4e0;
        }
    }
    ctx->pc = 0x4AC4D4u;
label_4ac4d4:
    // 0x4ac4d4: 0xc0400a8  jal         func_1002A0
label_4ac4d8:
    if (ctx->pc == 0x4AC4D8u) {
        ctx->pc = 0x4AC4D8u;
            // 0x4ac4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC4DCu;
        goto label_4ac4dc;
    }
    ctx->pc = 0x4AC4D4u;
    SET_GPR_U32(ctx, 31, 0x4AC4DCu);
    ctx->pc = 0x4AC4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC4D4u;
            // 0x4ac4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC4DCu; }
        if (ctx->pc != 0x4AC4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC4DCu; }
        if (ctx->pc != 0x4AC4DCu) { return; }
    }
    ctx->pc = 0x4AC4DCu;
label_4ac4dc:
    // 0x4ac4dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ac4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ac4e0:
    // 0x4ac4e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ac4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ac4e4:
    // 0x4ac4e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ac4e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ac4e8:
    // 0x4ac4e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ac4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ac4ec:
    // 0x4ac4ec: 0x3e00008  jr          $ra
label_4ac4f0:
    if (ctx->pc == 0x4AC4F0u) {
        ctx->pc = 0x4AC4F0u;
            // 0x4ac4f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4AC4F4u;
        goto label_4ac4f4;
    }
    ctx->pc = 0x4AC4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC4ECu;
            // 0x4ac4f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AC4F4u;
label_4ac4f4:
    // 0x4ac4f4: 0x0  nop
    ctx->pc = 0x4ac4f4u;
    // NOP
label_4ac4f8:
    // 0x4ac4f8: 0x0  nop
    ctx->pc = 0x4ac4f8u;
    // NOP
label_4ac4fc:
    // 0x4ac4fc: 0x0  nop
    ctx->pc = 0x4ac4fcu;
    // NOP
label_4ac500:
    // 0x4ac500: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4ac500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4ac504:
    // 0x4ac504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ac504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac508:
    // 0x4ac508: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ac508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4ac50c:
    // 0x4ac50c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ac50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ac510:
    // 0x4ac510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ac510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ac514:
    // 0x4ac514: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ac514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ac518:
    // 0x4ac518: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ac518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ac51c:
    // 0x4ac51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ac51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ac520:
    // 0x4ac520: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ac520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ac524:
    // 0x4ac524: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4ac524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4ac528:
    // 0x4ac528: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4ac528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac52c:
    // 0x4ac52c: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x4ac52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4ac530:
    // 0x4ac530: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4ac530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4ac534:
    // 0x4ac534: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ac534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4ac538:
    // 0x4ac538: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x4ac538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_4ac53c:
    // 0x4ac53c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ac53cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ac540:
    // 0x4ac540: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4ac544:
    if (ctx->pc == 0x4AC544u) {
        ctx->pc = 0x4AC548u;
        goto label_4ac548;
    }
    ctx->pc = 0x4AC540u;
    {
        const bool branch_taken_0x4ac540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ac540) {
            ctx->pc = 0x4AC560u;
            goto label_4ac560;
        }
    }
    ctx->pc = 0x4AC548u;
label_4ac548:
    // 0x4ac548: 0x2e010003  sltiu       $at, $s0, 0x3
    ctx->pc = 0x4ac548u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4ac54c:
    // 0x4ac54c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_4ac550:
    if (ctx->pc == 0x4AC550u) {
        ctx->pc = 0x4AC550u;
            // 0x4ac550: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->pc = 0x4AC554u;
        goto label_4ac554;
    }
    ctx->pc = 0x4AC54Cu;
    {
        const bool branch_taken_0x4ac54c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC54Cu;
            // 0x4ac550: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac54c) {
            ctx->pc = 0x4AC560u;
            goto label_4ac560;
        }
    }
    ctx->pc = 0x4AC554u;
label_4ac554:
    // 0x4ac554: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4ac554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4ac558:
    // 0x4ac558: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4ac558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4ac55c:
    // 0x4ac55c: 0x0  nop
    ctx->pc = 0x4ac55cu;
    // NOP
label_4ac560:
    // 0x4ac560: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4ac560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4ac564:
    // 0x4ac564: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x4ac564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ac568:
    // 0x4ac568: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_4ac56c:
    if (ctx->pc == 0x4AC56Cu) {
        ctx->pc = 0x4AC56Cu;
            // 0x4ac56c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4AC570u;
        goto label_4ac570;
    }
    ctx->pc = 0x4AC568u;
    {
        const bool branch_taken_0x4ac568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AC56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC568u;
            // 0x4ac56c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac568) {
            ctx->pc = 0x4AC534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ac534;
        }
    }
    ctx->pc = 0x4AC570u;
label_4ac570:
    // 0x4ac570: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ac570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ac574:
    // 0x4ac574: 0xc074740  jal         func_1D1D00
label_4ac578:
    if (ctx->pc == 0x4AC578u) {
        ctx->pc = 0x4AC578u;
            // 0x4ac578: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x4AC57Cu;
        goto label_4ac57c;
    }
    ctx->pc = 0x4AC574u;
    SET_GPR_U32(ctx, 31, 0x4AC57Cu);
    ctx->pc = 0x4AC578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC574u;
            // 0x4ac578: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC57Cu; }
        if (ctx->pc != 0x4AC57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC57Cu; }
        if (ctx->pc != 0x4AC57Cu) { return; }
    }
    ctx->pc = 0x4AC57Cu;
label_4ac57c:
    // 0x4ac57c: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x4ac57cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_4ac580:
    // 0x4ac580: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x4ac580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_4ac584:
    // 0x4ac584: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x4ac584u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_4ac588:
    // 0x4ac588: 0x8010  mfhi        $s0
    ctx->pc = 0x4ac588u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_4ac58c:
    // 0x4ac58c: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
label_4ac590:
    if (ctx->pc == 0x4AC590u) {
        ctx->pc = 0x4AC590u;
            // 0x4ac590: 0x8e230da0  lw          $v1, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->pc = 0x4AC594u;
        goto label_4ac594;
    }
    ctx->pc = 0x4AC58Cu;
    {
        const bool branch_taken_0x4ac58c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ac58c) {
            ctx->pc = 0x4AC590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC58Cu;
            // 0x4ac590: 0x8e230da0  lw          $v1, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC5A4u;
            goto label_4ac5a4;
        }
    }
    ctx->pc = 0x4AC594u;
label_4ac594:
    // 0x4ac594: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4ac594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4ac598:
    // 0x4ac598: 0x54830068  bnel        $a0, $v1, . + 4 + (0x68 << 2)
label_4ac59c:
    if (ctx->pc == 0x4AC59Cu) {
        ctx->pc = 0x4AC59Cu;
            // 0x4ac59c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4AC5A0u;
        goto label_4ac5a0;
    }
    ctx->pc = 0x4AC598u;
    {
        const bool branch_taken_0x4ac598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ac598) {
            ctx->pc = 0x4AC59Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC598u;
            // 0x4ac59c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC73Cu;
            goto label_4ac73c;
        }
    }
    ctx->pc = 0x4AC5A0u;
label_4ac5a0:
    // 0x4ac5a0: 0x8e230da0  lw          $v1, 0xDA0($s1)
    ctx->pc = 0x4ac5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_4ac5a4:
    // 0x4ac5a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4ac5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4ac5a8:
    // 0x4ac5a8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_4ac5ac:
    if (ctx->pc == 0x4AC5ACu) {
        ctx->pc = 0x4AC5ACu;
            // 0x4ac5ac: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x4AC5B0u;
        goto label_4ac5b0;
    }
    ctx->pc = 0x4AC5A8u;
    {
        const bool branch_taken_0x4ac5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ac5a8) {
            ctx->pc = 0x4AC5ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC5A8u;
            // 0x4ac5ac: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC5BCu;
            goto label_4ac5bc;
        }
    }
    ctx->pc = 0x4AC5B0u;
label_4ac5b0:
    // 0x4ac5b0: 0x10000061  b           . + 4 + (0x61 << 2)
label_4ac5b4:
    if (ctx->pc == 0x4AC5B4u) {
        ctx->pc = 0x4AC5B8u;
        goto label_4ac5b8;
    }
    ctx->pc = 0x4AC5B0u;
    {
        const bool branch_taken_0x4ac5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac5b0) {
            ctx->pc = 0x4AC738u;
            goto label_4ac738;
        }
    }
    ctx->pc = 0x4AC5B8u;
label_4ac5b8:
    // 0x4ac5b8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x4ac5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4ac5bc:
    // 0x4ac5bc: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
label_4ac5c0:
    if (ctx->pc == 0x4AC5C0u) {
        ctx->pc = 0x4AC5C0u;
            // 0x4ac5c0: 0xae20118c  sw          $zero, 0x118C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 0));
        ctx->pc = 0x4AC5C4u;
        goto label_4ac5c4;
    }
    ctx->pc = 0x4AC5BCu;
    {
        const bool branch_taken_0x4ac5bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ac5bc) {
            ctx->pc = 0x4AC5C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC5BCu;
            // 0x4ac5c0: 0xae20118c  sw          $zero, 0x118C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC5D0u;
            goto label_4ac5d0;
        }
    }
    ctx->pc = 0x4AC5C4u;
label_4ac5c4:
    // 0x4ac5c4: 0xc0b6764  jal         func_2D9D90
label_4ac5c8:
    if (ctx->pc == 0x4AC5C8u) {
        ctx->pc = 0x4AC5C8u;
            // 0x4ac5c8: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->pc = 0x4AC5CCu;
        goto label_4ac5cc;
    }
    ctx->pc = 0x4AC5C4u;
    SET_GPR_U32(ctx, 31, 0x4AC5CCu);
    ctx->pc = 0x4AC5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC5C4u;
            // 0x4ac5c8: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC5CCu; }
        if (ctx->pc != 0x4AC5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC5CCu; }
        if (ctx->pc != 0x4AC5CCu) { return; }
    }
    ctx->pc = 0x4AC5CCu;
label_4ac5cc:
    // 0x4ac5cc: 0xae20118c  sw          $zero, 0x118C($s1)
    ctx->pc = 0x4ac5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 0));
label_4ac5d0:
    // 0x4ac5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ac5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ac5d4:
    // 0x4ac5d4: 0x8e220d60  lw          $v0, 0xD60($s1)
    ctx->pc = 0x4ac5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_4ac5d8:
    // 0x4ac5d8: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x4ac5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
label_4ac5dc:
    // 0x4ac5dc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4ac5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac5e0:
    // 0x4ac5e0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4ac5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4ac5e4:
    // 0x4ac5e4: 0x320f809  jalr        $t9
label_4ac5e8:
    if (ctx->pc == 0x4AC5E8u) {
        ctx->pc = 0x4AC5E8u;
            // 0x4ac5e8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4AC5ECu;
        goto label_4ac5ec;
    }
    ctx->pc = 0x4AC5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AC5ECu);
        ctx->pc = 0x4AC5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC5E4u;
            // 0x4ac5e8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AC5ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AC5ECu; }
            if (ctx->pc != 0x4AC5ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4AC5ECu;
label_4ac5ec:
    // 0x4ac5ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ac5ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ac5f0:
    // 0x4ac5f0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4ac5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4ac5f4:
    // 0x4ac5f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ac5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ac5f8:
    // 0x4ac5f8: 0x24a55670  addiu       $a1, $a1, 0x5670
    ctx->pc = 0x4ac5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22128));
label_4ac5fc:
    // 0x4ac5fc: 0xc0767f0  jal         func_1D9FC0
label_4ac600:
    if (ctx->pc == 0x4AC600u) {
        ctx->pc = 0x4AC600u;
            // 0x4ac600: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4AC604u;
        goto label_4ac604;
    }
    ctx->pc = 0x4AC5FCu;
    SET_GPR_U32(ctx, 31, 0x4AC604u);
    ctx->pc = 0x4AC600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC5FCu;
            // 0x4ac600: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC604u; }
        if (ctx->pc != 0x4AC604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC604u; }
        if (ctx->pc != 0x4AC604u) { return; }
    }
    ctx->pc = 0x4AC604u;
label_4ac604:
    // 0x4ac604: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4ac604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4ac608:
    // 0x4ac608: 0x3c033f31  lui         $v1, 0x3F31
    ctx->pc = 0x4ac608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16177 << 16));
label_4ac60c:
    // 0x4ac60c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4ac60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_4ac610:
    // 0x4ac610: 0x3463c71c  ori         $v1, $v1, 0xC71C
    ctx->pc = 0x4ac610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50972);
label_4ac614:
    // 0x4ac614: 0x245000b0  addiu       $s0, $v0, 0xB0
    ctx->pc = 0x4ac614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_4ac618:
    // 0x4ac618: 0xae230de4  sw          $v1, 0xDE4($s1)
    ctx->pc = 0x4ac618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 3));
label_4ac61c:
    // 0x4ac61c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4ac61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ac620:
    // 0x4ac620: 0x3c02c0b3  lui         $v0, 0xC0B3
    ctx->pc = 0x4ac620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49331 << 16));
label_4ac624:
    // 0x4ac624: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x4ac624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_4ac628:
    // 0x4ac628: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x4ac628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_4ac62c:
    // 0x4ac62c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x4ac62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_4ac630:
    // 0x4ac630: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4ac630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4ac634:
    // 0x4ac634: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4ac634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4ac638:
    // 0x4ac638: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x4ac638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4ac63c:
    // 0x4ac63c: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x4ac63cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4ac640:
    // 0x4ac640: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ac640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ac644:
    // 0x4ac644: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4ac644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4ac648:
    // 0x4ac648: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4ac648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ac64c:
    // 0x4ac64c: 0xc04cbd8  jal         func_132F60
label_4ac650:
    if (ctx->pc == 0x4AC650u) {
        ctx->pc = 0x4AC650u;
            // 0x4ac650: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4AC654u;
        goto label_4ac654;
    }
    ctx->pc = 0x4AC64Cu;
    SET_GPR_U32(ctx, 31, 0x4AC654u);
    ctx->pc = 0x4AC650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC64Cu;
            // 0x4ac650: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC654u; }
        if (ctx->pc != 0x4AC654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC654u; }
        if (ctx->pc != 0x4AC654u) { return; }
    }
    ctx->pc = 0x4AC654u;
label_4ac654:
    // 0x4ac654: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4ac654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4ac658:
    // 0x4ac658: 0xc04f278  jal         func_13C9E0
label_4ac65c:
    if (ctx->pc == 0x4AC65Cu) {
        ctx->pc = 0x4AC65Cu;
            // 0x4ac65c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x4AC660u;
        goto label_4ac660;
    }
    ctx->pc = 0x4AC658u;
    SET_GPR_U32(ctx, 31, 0x4AC660u);
    ctx->pc = 0x4AC65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC658u;
            // 0x4ac65c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC660u; }
        if (ctx->pc != 0x4AC660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC660u; }
        if (ctx->pc != 0x4AC660u) { return; }
    }
    ctx->pc = 0x4AC660u;
label_4ac660:
    // 0x4ac660: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4ac660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4ac664:
    // 0x4ac664: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4ac664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4ac668:
    // 0x4ac668: 0xc04cca0  jal         func_133280
label_4ac66c:
    if (ctx->pc == 0x4AC66Cu) {
        ctx->pc = 0x4AC66Cu;
            // 0x4ac66c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC670u;
        goto label_4ac670;
    }
    ctx->pc = 0x4AC668u;
    SET_GPR_U32(ctx, 31, 0x4AC670u);
    ctx->pc = 0x4AC66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC668u;
            // 0x4ac66c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC670u; }
        if (ctx->pc != 0x4AC670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC670u; }
        if (ctx->pc != 0x4AC670u) { return; }
    }
    ctx->pc = 0x4AC670u;
label_4ac670:
    // 0x4ac670: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4ac670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4ac674:
    // 0x4ac674: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x4ac674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_4ac678:
    // 0x4ac678: 0xc04cbe0  jal         func_132F80
label_4ac67c:
    if (ctx->pc == 0x4AC67Cu) {
        ctx->pc = 0x4AC67Cu;
            // 0x4ac67c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC680u;
        goto label_4ac680;
    }
    ctx->pc = 0x4AC678u;
    SET_GPR_U32(ctx, 31, 0x4AC680u);
    ctx->pc = 0x4AC67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC678u;
            // 0x4ac67c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC680u; }
        if (ctx->pc != 0x4AC680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC680u; }
        if (ctx->pc != 0x4AC680u) { return; }
    }
    ctx->pc = 0x4AC680u;
label_4ac680:
    // 0x4ac680: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4ac680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4ac684:
    // 0x4ac684: 0xc04cc04  jal         func_133010
label_4ac688:
    if (ctx->pc == 0x4AC688u) {
        ctx->pc = 0x4AC688u;
            // 0x4ac688: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4AC68Cu;
        goto label_4ac68c;
    }
    ctx->pc = 0x4AC684u;
    SET_GPR_U32(ctx, 31, 0x4AC68Cu);
    ctx->pc = 0x4AC688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC684u;
            // 0x4ac688: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC68Cu; }
        if (ctx->pc != 0x4AC68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC68Cu; }
        if (ctx->pc != 0x4AC68Cu) { return; }
    }
    ctx->pc = 0x4AC68Cu;
label_4ac68c:
    // 0x4ac68c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4ac68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4ac690:
    // 0x4ac690: 0x262602c0  addiu       $a2, $s1, 0x2C0
    ctx->pc = 0x4ac690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_4ac694:
    // 0x4ac694: 0xc04cc90  jal         func_133240
label_4ac698:
    if (ctx->pc == 0x4AC698u) {
        ctx->pc = 0x4AC698u;
            // 0x4ac698: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC69Cu;
        goto label_4ac69c;
    }
    ctx->pc = 0x4AC694u;
    SET_GPR_U32(ctx, 31, 0x4AC69Cu);
    ctx->pc = 0x4AC698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC694u;
            // 0x4ac698: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC69Cu; }
        if (ctx->pc != 0x4AC69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC69Cu; }
        if (ctx->pc != 0x4AC69Cu) { return; }
    }
    ctx->pc = 0x4AC69Cu;
label_4ac69c:
    // 0x4ac69c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4ac69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4ac6a0:
    // 0x4ac6a0: 0xc04cc44  jal         func_133110
label_4ac6a4:
    if (ctx->pc == 0x4AC6A4u) {
        ctx->pc = 0x4AC6A4u;
            // 0x4ac6a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC6A8u;
        goto label_4ac6a8;
    }
    ctx->pc = 0x4AC6A0u;
    SET_GPR_U32(ctx, 31, 0x4AC6A8u);
    ctx->pc = 0x4AC6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC6A0u;
            // 0x4ac6a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC6A8u; }
        if (ctx->pc != 0x4AC6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC6A8u; }
        if (ctx->pc != 0x4AC6A8u) { return; }
    }
    ctx->pc = 0x4AC6A8u;
label_4ac6a8:
    // 0x4ac6a8: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x4ac6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_4ac6ac:
    // 0x4ac6ac: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x4ac6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4ac6b0:
    // 0x4ac6b0: 0xc075378  jal         func_1D4DE0
label_4ac6b4:
    if (ctx->pc == 0x4AC6B4u) {
        ctx->pc = 0x4AC6B4u;
            // 0x4ac6b4: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->pc = 0x4AC6B8u;
        goto label_4ac6b8;
    }
    ctx->pc = 0x4AC6B0u;
    SET_GPR_U32(ctx, 31, 0x4AC6B8u);
    ctx->pc = 0x4AC6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC6B0u;
            // 0x4ac6b4: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC6B8u; }
        if (ctx->pc != 0x4AC6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC6B8u; }
        if (ctx->pc != 0x4AC6B8u) { return; }
    }
    ctx->pc = 0x4AC6B8u;
label_4ac6b8:
    // 0x4ac6b8: 0xc6210880  lwc1        $f1, 0x880($s1)
    ctx->pc = 0x4ac6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ac6bc:
    // 0x4ac6bc: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x4ac6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_4ac6c0:
    // 0x4ac6c0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4ac6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ac6c4:
    // 0x4ac6c4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x4ac6c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4ac6c8:
    // 0x4ac6c8: 0xc0c753c  jal         func_31D4F0
label_4ac6cc:
    if (ctx->pc == 0x4AC6CCu) {
        ctx->pc = 0x4AC6CCu;
            // 0x4ac6cc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4AC6D0u;
        goto label_4ac6d0;
    }
    ctx->pc = 0x4AC6C8u;
    SET_GPR_U32(ctx, 31, 0x4AC6D0u);
    ctx->pc = 0x4AC6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC6C8u;
            // 0x4ac6cc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC6D0u; }
        if (ctx->pc != 0x4AC6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC6D0u; }
        if (ctx->pc != 0x4AC6D0u) { return; }
    }
    ctx->pc = 0x4AC6D0u;
label_4ac6d0:
    // 0x4ac6d0: 0xc62c0930  lwc1        $f12, 0x930($s1)
    ctx->pc = 0x4ac6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4ac6d4:
    // 0x4ac6d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4ac6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4ac6d8:
    // 0x4ac6d8: 0xc62d0880  lwc1        $f13, 0x880($s1)
    ctx->pc = 0x4ac6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4ac6dc:
    // 0x4ac6dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4ac6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ac6e0:
    // 0x4ac6e0: 0xc0c753c  jal         func_31D4F0
label_4ac6e4:
    if (ctx->pc == 0x4AC6E4u) {
        ctx->pc = 0x4AC6E4u;
            // 0x4ac6e4: 0x2624092c  addiu       $a0, $s1, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
        ctx->pc = 0x4AC6E8u;
        goto label_4ac6e8;
    }
    ctx->pc = 0x4AC6E0u;
    SET_GPR_U32(ctx, 31, 0x4AC6E8u);
    ctx->pc = 0x4AC6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC6E0u;
            // 0x4ac6e4: 0x2624092c  addiu       $a0, $s1, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC6E8u; }
        if (ctx->pc != 0x4AC6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC6E8u; }
        if (ctx->pc != 0x4AC6E8u) { return; }
    }
    ctx->pc = 0x4AC6E8u;
label_4ac6e8:
    // 0x4ac6e8: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x4ac6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_4ac6ec:
    // 0x4ac6ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4ac6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4ac6f0:
    // 0x4ac6f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ac6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ac6f4:
    // 0x4ac6f4: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x4ac6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_4ac6f8:
    // 0x4ac6f8: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x4ac6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_4ac6fc:
    // 0x4ac6fc: 0xc0c6250  jal         func_318940
label_4ac700:
    if (ctx->pc == 0x4AC700u) {
        ctx->pc = 0x4AC700u;
            // 0x4ac700: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x4AC704u;
        goto label_4ac704;
    }
    ctx->pc = 0x4AC6FCu;
    SET_GPR_U32(ctx, 31, 0x4AC704u);
    ctx->pc = 0x4AC700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC6FCu;
            // 0x4ac700: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC704u; }
        if (ctx->pc != 0x4AC704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC704u; }
        if (ctx->pc != 0x4AC704u) { return; }
    }
    ctx->pc = 0x4AC704u;
label_4ac704:
    // 0x4ac704: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4ac704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ac708:
    // 0x4ac708: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ac708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ac70c:
    // 0x4ac70c: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x4ac70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_4ac710:
    // 0x4ac710: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4ac710u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4ac714:
    // 0x4ac714: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4ac714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4ac718:
    // 0x4ac718: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4ac718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ac71c:
    // 0x4ac71c: 0xac7100a8  sw          $s1, 0xA8($v1)
    ctx->pc = 0x4ac71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 17));
label_4ac720:
    // 0x4ac720: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x4ac720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_4ac724:
    // 0x4ac724: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4ac724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4ac728:
    // 0x4ac728: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4ac728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ac72c:
    // 0x4ac72c: 0xac6400a4  sw          $a0, 0xA4($v1)
    ctx->pc = 0x4ac72cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 4));
label_4ac730:
    // 0x4ac730: 0x8e230d70  lw          $v1, 0xD70($s1)
    ctx->pc = 0x4ac730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_4ac734:
    // 0x4ac734: 0xa06400dd  sb          $a0, 0xDD($v1)
    ctx->pc = 0x4ac734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 221), (uint8_t)GPR_U32(ctx, 4));
label_4ac738:
    // 0x4ac738: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ac738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ac73c:
    // 0x4ac73c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ac73cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ac740:
    // 0x4ac740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ac740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ac744:
    // 0x4ac744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ac744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ac748:
    // 0x4ac748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ac748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ac74c:
    // 0x4ac74c: 0x3e00008  jr          $ra
label_4ac750:
    if (ctx->pc == 0x4AC750u) {
        ctx->pc = 0x4AC750u;
            // 0x4ac750: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4AC754u;
        goto label_4ac754;
    }
    ctx->pc = 0x4AC74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC74Cu;
            // 0x4ac750: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AC754u;
label_4ac754:
    // 0x4ac754: 0x0  nop
    ctx->pc = 0x4ac754u;
    // NOP
label_4ac758:
    // 0x4ac758: 0x0  nop
    ctx->pc = 0x4ac758u;
    // NOP
label_4ac75c:
    // 0x4ac75c: 0x0  nop
    ctx->pc = 0x4ac75cu;
    // NOP
label_4ac760:
    // 0x4ac760: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x4ac760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_4ac764:
    // 0x4ac764: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4ac764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4ac768:
    // 0x4ac768: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4ac768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4ac76c:
    // 0x4ac76c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4ac76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4ac770:
    // 0x4ac770: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4ac770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4ac774:
    // 0x4ac774: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4ac774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4ac778:
    // 0x4ac778: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4ac778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4ac77c:
    // 0x4ac77c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4ac77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4ac780:
    // 0x4ac780: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4ac780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4ac784:
    // 0x4ac784: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ac784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4ac788:
    // 0x4ac788: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ac788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ac78c:
    // 0x4ac78c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ac78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4ac790:
    // 0x4ac790: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4ac790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4ac794:
    // 0x4ac794: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4ac794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4ac798:
    // 0x4ac798: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4ac798u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4ac79c:
    // 0x4ac79c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ac79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ac7a0:
    // 0x4ac7a0: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_4ac7a4:
    if (ctx->pc == 0x4AC7A4u) {
        ctx->pc = 0x4AC7A4u;
            // 0x4ac7a4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC7A8u;
        goto label_4ac7a8;
    }
    ctx->pc = 0x4AC7A0u;
    {
        const bool branch_taken_0x4ac7a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4AC7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC7A0u;
            // 0x4ac7a4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac7a0) {
            ctx->pc = 0x4AC7E4u;
            goto label_4ac7e4;
        }
    }
    ctx->pc = 0x4AC7A8u;
label_4ac7a8:
    // 0x4ac7a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4ac7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ac7ac:
    // 0x4ac7ac: 0x50a3008a  beql        $a1, $v1, . + 4 + (0x8A << 2)
label_4ac7b0:
    if (ctx->pc == 0x4AC7B0u) {
        ctx->pc = 0x4AC7B0u;
            // 0x4ac7b0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4AC7B4u;
        goto label_4ac7b4;
    }
    ctx->pc = 0x4AC7ACu;
    {
        const bool branch_taken_0x4ac7ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ac7ac) {
            ctx->pc = 0x4AC7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC7ACu;
            // 0x4ac7b0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC9D8u;
            goto label_4ac9d8;
        }
    }
    ctx->pc = 0x4AC7B4u;
label_4ac7b4:
    // 0x4ac7b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ac7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ac7b8:
    // 0x4ac7b8: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4ac7bc:
    if (ctx->pc == 0x4AC7BCu) {
        ctx->pc = 0x4AC7BCu;
            // 0x4ac7bc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4AC7C0u;
        goto label_4ac7c0;
    }
    ctx->pc = 0x4AC7B8u;
    {
        const bool branch_taken_0x4ac7b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ac7b8) {
            ctx->pc = 0x4AC7BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC7B8u;
            // 0x4ac7bc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC7C8u;
            goto label_4ac7c8;
        }
    }
    ctx->pc = 0x4AC7C0u;
label_4ac7c0:
    // 0x4ac7c0: 0x10000084  b           . + 4 + (0x84 << 2)
label_4ac7c4:
    if (ctx->pc == 0x4AC7C4u) {
        ctx->pc = 0x4AC7C8u;
        goto label_4ac7c8;
    }
    ctx->pc = 0x4AC7C0u;
    {
        const bool branch_taken_0x4ac7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac7c0) {
            ctx->pc = 0x4AC9D4u;
            goto label_4ac9d4;
        }
    }
    ctx->pc = 0x4AC7C8u;
label_4ac7c8:
    // 0x4ac7c8: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x4ac7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_4ac7cc:
    // 0x4ac7cc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4ac7ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4ac7d0:
    // 0x4ac7d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4ac7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4ac7d4:
    // 0x4ac7d4: 0x320f809  jalr        $t9
label_4ac7d8:
    if (ctx->pc == 0x4AC7D8u) {
        ctx->pc = 0x4AC7D8u;
            // 0x4ac7d8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4AC7DCu;
        goto label_4ac7dc;
    }
    ctx->pc = 0x4AC7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AC7DCu);
        ctx->pc = 0x4AC7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC7D4u;
            // 0x4ac7d8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AC7DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AC7DCu; }
            if (ctx->pc != 0x4AC7DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4AC7DCu;
label_4ac7dc:
    // 0x4ac7dc: 0x1000007d  b           . + 4 + (0x7D << 2)
label_4ac7e0:
    if (ctx->pc == 0x4AC7E0u) {
        ctx->pc = 0x4AC7E4u;
        goto label_4ac7e4;
    }
    ctx->pc = 0x4AC7DCu;
    {
        const bool branch_taken_0x4ac7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac7dc) {
            ctx->pc = 0x4AC9D4u;
            goto label_4ac9d4;
        }
    }
    ctx->pc = 0x4AC7E4u;
label_4ac7e4:
    // 0x4ac7e4: 0x8ebe0070  lw          $fp, 0x70($s5)
    ctx->pc = 0x4ac7e4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_4ac7e8:
    // 0x4ac7e8: 0x13c0007a  beqz        $fp, . + 4 + (0x7A << 2)
label_4ac7ec:
    if (ctx->pc == 0x4AC7ECu) {
        ctx->pc = 0x4AC7F0u;
        goto label_4ac7f0;
    }
    ctx->pc = 0x4AC7E8u;
    {
        const bool branch_taken_0x4ac7e8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac7e8) {
            ctx->pc = 0x4AC9D4u;
            goto label_4ac9d4;
        }
    }
    ctx->pc = 0x4AC7F0u;
label_4ac7f0:
    // 0x4ac7f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ac7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ac7f4:
    // 0x4ac7f4: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x4ac7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_4ac7f8:
    // 0x4ac7f8: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x4ac7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4ac7fc:
    // 0x4ac7fc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4ac7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4ac800:
    // 0x4ac800: 0x8c85d130  lw          $a1, -0x2ED0($a0)
    ctx->pc = 0x4ac800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_4ac804:
    // 0x4ac804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ac804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac808:
    // 0x4ac808: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4ac808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4ac80c:
    // 0x4ac80c: 0x26b70084  addiu       $s7, $s5, 0x84
    ctx->pc = 0x4ac80cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_4ac810:
    // 0x4ac810: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x4ac810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_4ac814:
    // 0x4ac814: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ac814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ac818:
    // 0x4ac818: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x4ac818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4ac81c:
    // 0x4ac81c: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x4ac81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4ac820:
    // 0x4ac820: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4ac820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4ac824:
    // 0x4ac824: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4ac824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4ac828:
    // 0x4ac828: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x4ac828u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4ac82c:
    // 0x4ac82c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x4ac82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_4ac830:
    // 0x4ac830: 0x8ea2008c  lw          $v0, 0x8C($s5)
    ctx->pc = 0x4ac830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_4ac834:
    // 0x4ac834: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4ac834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4ac838:
    // 0x4ac838: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4ac838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ac83c:
    // 0x4ac83c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x4ac83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_4ac840:
    // 0x4ac840: 0x8ea20084  lw          $v0, 0x84($s5)
    ctx->pc = 0x4ac840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_4ac844:
    // 0x4ac844: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4ac844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4ac848:
    // 0x4ac848: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4ac848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4ac84c:
    // 0x4ac84c: 0xc04e4a4  jal         func_139290
label_4ac850:
    if (ctx->pc == 0x4AC850u) {
        ctx->pc = 0x4AC850u;
            // 0x4ac850: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x4AC854u;
        goto label_4ac854;
    }
    ctx->pc = 0x4AC84Cu;
    SET_GPR_U32(ctx, 31, 0x4AC854u);
    ctx->pc = 0x4AC850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC84Cu;
            // 0x4ac850: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC854u; }
        if (ctx->pc != 0x4AC854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC854u; }
        if (ctx->pc != 0x4AC854u) { return; }
    }
    ctx->pc = 0x4AC854u;
label_4ac854:
    // 0x4ac854: 0xc04e738  jal         func_139CE0
label_4ac858:
    if (ctx->pc == 0x4AC858u) {
        ctx->pc = 0x4AC858u;
            // 0x4ac858: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->pc = 0x4AC85Cu;
        goto label_4ac85c;
    }
    ctx->pc = 0x4AC854u;
    SET_GPR_U32(ctx, 31, 0x4AC85Cu);
    ctx->pc = 0x4AC858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC854u;
            // 0x4ac858: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC85Cu; }
        if (ctx->pc != 0x4AC85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC85Cu; }
        if (ctx->pc != 0x4AC85Cu) { return; }
    }
    ctx->pc = 0x4AC85Cu;
label_4ac85c:
    // 0x4ac85c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ac85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ac860:
    // 0x4ac860: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ac860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ac864:
    // 0x4ac864: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4ac864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4ac868:
    // 0x4ac868: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4ac868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac86c:
    // 0x4ac86c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ac86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4ac870:
    // 0x4ac870: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4ac870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4ac874:
    // 0x4ac874: 0xc4545630  lwc1        $f20, 0x5630($v0)
    ctx->pc = 0x4ac874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ac878:
    // 0x4ac878: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4ac878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac87c:
    // 0x4ac87c: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x4ac87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4ac880:
    // 0x4ac880: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4ac880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4ac884:
    // 0x4ac884: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4ac884u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ac888:
    // 0x4ac888: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x4ac888u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4ac88c:
    // 0x4ac88c: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x4ac88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_4ac890:
    // 0x4ac890: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x4ac890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4ac894:
    // 0x4ac894: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4ac894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4ac898:
    // 0x4ac898: 0x8ef30000  lw          $s3, 0x0($s7)
    ctx->pc = 0x4ac898u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4ac89c:
    // 0x4ac89c: 0xc0d1c14  jal         func_347050
label_4ac8a0:
    if (ctx->pc == 0x4AC8A0u) {
        ctx->pc = 0x4AC8A0u;
            // 0x4ac8a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC8A4u;
        goto label_4ac8a4;
    }
    ctx->pc = 0x4AC89Cu;
    SET_GPR_U32(ctx, 31, 0x4AC8A4u);
    ctx->pc = 0x4AC8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC89Cu;
            // 0x4ac8a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC8A4u; }
        if (ctx->pc != 0x4AC8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC8A4u; }
        if (ctx->pc != 0x4AC8A4u) { return; }
    }
    ctx->pc = 0x4AC8A4u;
label_4ac8a4:
    // 0x4ac8a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ac8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ac8a8:
    // 0x4ac8a8: 0xc04f278  jal         func_13C9E0
label_4ac8ac:
    if (ctx->pc == 0x4AC8ACu) {
        ctx->pc = 0x4AC8ACu;
            // 0x4ac8ac: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4AC8B0u;
        goto label_4ac8b0;
    }
    ctx->pc = 0x4AC8A8u;
    SET_GPR_U32(ctx, 31, 0x4AC8B0u);
    ctx->pc = 0x4AC8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC8A8u;
            // 0x4ac8ac: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC8B0u; }
        if (ctx->pc != 0x4AC8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC8B0u; }
        if (ctx->pc != 0x4AC8B0u) { return; }
    }
    ctx->pc = 0x4AC8B0u;
label_4ac8b0:
    // 0x4ac8b0: 0xc0d1c10  jal         func_347040
label_4ac8b4:
    if (ctx->pc == 0x4AC8B4u) {
        ctx->pc = 0x4AC8B4u;
            // 0x4ac8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC8B8u;
        goto label_4ac8b8;
    }
    ctx->pc = 0x4AC8B0u;
    SET_GPR_U32(ctx, 31, 0x4AC8B8u);
    ctx->pc = 0x4AC8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC8B0u;
            // 0x4ac8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC8B8u; }
        if (ctx->pc != 0x4AC8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC8B8u; }
        if (ctx->pc != 0x4AC8B8u) { return; }
    }
    ctx->pc = 0x4AC8B8u;
label_4ac8b8:
    // 0x4ac8b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ac8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ac8bc:
    // 0x4ac8bc: 0xc04ce80  jal         func_133A00
label_4ac8c0:
    if (ctx->pc == 0x4AC8C0u) {
        ctx->pc = 0x4AC8C0u;
            // 0x4ac8c0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4AC8C4u;
        goto label_4ac8c4;
    }
    ctx->pc = 0x4AC8BCu;
    SET_GPR_U32(ctx, 31, 0x4AC8C4u);
    ctx->pc = 0x4AC8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC8BCu;
            // 0x4ac8c0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC8C4u; }
        if (ctx->pc != 0x4AC8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC8C4u; }
        if (ctx->pc != 0x4AC8C4u) { return; }
    }
    ctx->pc = 0x4AC8C4u;
label_4ac8c4:
    // 0x4ac8c4: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x4ac8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_4ac8c8:
    // 0x4ac8c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ac8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ac8cc:
    // 0x4ac8cc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_4ac8d0:
    if (ctx->pc == 0x4AC8D0u) {
        ctx->pc = 0x4AC8D4u;
        goto label_4ac8d4;
    }
    ctx->pc = 0x4AC8CCu;
    {
        const bool branch_taken_0x4ac8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ac8cc) {
            ctx->pc = 0x4AC8E0u;
            goto label_4ac8e0;
        }
    }
    ctx->pc = 0x4AC8D4u;
label_4ac8d4:
    // 0x4ac8d4: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x4ac8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_4ac8d8:
    // 0x4ac8d8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_4ac8dc:
    if (ctx->pc == 0x4AC8DCu) {
        ctx->pc = 0x4AC8E0u;
        goto label_4ac8e0;
    }
    ctx->pc = 0x4AC8D8u;
    {
        const bool branch_taken_0x4ac8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ac8d8) {
            ctx->pc = 0x4AC930u;
            goto label_4ac930;
        }
    }
    ctx->pc = 0x4AC8E0u;
label_4ac8e0:
    // 0x4ac8e0: 0xc0d4108  jal         func_350420
label_4ac8e4:
    if (ctx->pc == 0x4AC8E4u) {
        ctx->pc = 0x4AC8E8u;
        goto label_4ac8e8;
    }
    ctx->pc = 0x4AC8E0u;
    SET_GPR_U32(ctx, 31, 0x4AC8E8u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC8E8u; }
        if (ctx->pc != 0x4AC8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC8E8u; }
        if (ctx->pc != 0x4AC8E8u) { return; }
    }
    ctx->pc = 0x4AC8E8u;
label_4ac8e8:
    // 0x4ac8e8: 0xc0b36b4  jal         func_2CDAD0
label_4ac8ec:
    if (ctx->pc == 0x4AC8ECu) {
        ctx->pc = 0x4AC8ECu;
            // 0x4ac8ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC8F0u;
        goto label_4ac8f0;
    }
    ctx->pc = 0x4AC8E8u;
    SET_GPR_U32(ctx, 31, 0x4AC8F0u);
    ctx->pc = 0x4AC8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC8E8u;
            // 0x4ac8ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC8F0u; }
        if (ctx->pc != 0x4AC8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC8F0u; }
        if (ctx->pc != 0x4AC8F0u) { return; }
    }
    ctx->pc = 0x4AC8F0u;
label_4ac8f0:
    // 0x4ac8f0: 0xc0b9c64  jal         func_2E7190
label_4ac8f4:
    if (ctx->pc == 0x4AC8F4u) {
        ctx->pc = 0x4AC8F4u;
            // 0x4ac8f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC8F8u;
        goto label_4ac8f8;
    }
    ctx->pc = 0x4AC8F0u;
    SET_GPR_U32(ctx, 31, 0x4AC8F8u);
    ctx->pc = 0x4AC8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC8F0u;
            // 0x4ac8f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC8F8u; }
        if (ctx->pc != 0x4AC8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC8F8u; }
        if (ctx->pc != 0x4AC8F8u) { return; }
    }
    ctx->pc = 0x4AC8F8u;
label_4ac8f8:
    // 0x4ac8f8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4ac8f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ac8fc:
    // 0x4ac8fc: 0xc0d4104  jal         func_350410
label_4ac900:
    if (ctx->pc == 0x4AC900u) {
        ctx->pc = 0x4AC900u;
            // 0x4ac900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC904u;
        goto label_4ac904;
    }
    ctx->pc = 0x4AC8FCu;
    SET_GPR_U32(ctx, 31, 0x4AC904u);
    ctx->pc = 0x4AC900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC8FCu;
            // 0x4ac900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC904u; }
        if (ctx->pc != 0x4AC904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC904u; }
        if (ctx->pc != 0x4AC904u) { return; }
    }
    ctx->pc = 0x4AC904u;
label_4ac904:
    // 0x4ac904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ac904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ac908:
    // 0x4ac908: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4ac908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4ac90c:
    // 0x4ac90c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4ac90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ac910:
    // 0x4ac910: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4ac910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4ac914:
    // 0x4ac914: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4ac914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ac918:
    // 0x4ac918: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4ac918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac91c:
    // 0x4ac91c: 0xc0d40ac  jal         func_3502B0
label_4ac920:
    if (ctx->pc == 0x4AC920u) {
        ctx->pc = 0x4AC920u;
            // 0x4ac920: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4AC924u;
        goto label_4ac924;
    }
    ctx->pc = 0x4AC91Cu;
    SET_GPR_U32(ctx, 31, 0x4AC924u);
    ctx->pc = 0x4AC920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC91Cu;
            // 0x4ac920: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC924u; }
        if (ctx->pc != 0x4AC924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC924u; }
        if (ctx->pc != 0x4AC924u) { return; }
    }
    ctx->pc = 0x4AC924u;
label_4ac924:
    // 0x4ac924: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4ac924u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4ac928:
    // 0x4ac928: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_4ac92c:
    if (ctx->pc == 0x4AC92Cu) {
        ctx->pc = 0x4AC92Cu;
            // 0x4ac92c: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4AC930u;
        goto label_4ac930;
    }
    ctx->pc = 0x4AC928u;
    {
        const bool branch_taken_0x4ac928 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC928u;
            // 0x4ac92c: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac928) {
            ctx->pc = 0x4AC998u;
            goto label_4ac998;
        }
    }
    ctx->pc = 0x4AC930u;
label_4ac930:
    // 0x4ac930: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ac930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ac934:
    // 0x4ac934: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4ac934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4ac938:
    // 0x4ac938: 0xc12b284  jal         func_4ACA10
label_4ac93c:
    if (ctx->pc == 0x4AC93Cu) {
        ctx->pc = 0x4AC93Cu;
            // 0x4ac93c: 0x27a6014c  addiu       $a2, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->pc = 0x4AC940u;
        goto label_4ac940;
    }
    ctx->pc = 0x4AC938u;
    SET_GPR_U32(ctx, 31, 0x4AC940u);
    ctx->pc = 0x4AC93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC938u;
            // 0x4ac93c: 0x27a6014c  addiu       $a2, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ACA10u;
    if (runtime->hasFunction(0x4ACA10u)) {
        auto targetFn = runtime->lookupFunction(0x4ACA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC940u; }
        if (ctx->pc != 0x4AC940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ACA10_0x4aca10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC940u; }
        if (ctx->pc != 0x4AC940u) { return; }
    }
    ctx->pc = 0x4AC940u;
label_4ac940:
    // 0x4ac940: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x4ac940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_4ac944:
    // 0x4ac944: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x4ac944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_4ac948:
    // 0x4ac948: 0xc04e4a4  jal         func_139290
label_4ac94c:
    if (ctx->pc == 0x4AC94Cu) {
        ctx->pc = 0x4AC94Cu;
            // 0x4ac94c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC950u;
        goto label_4ac950;
    }
    ctx->pc = 0x4AC948u;
    SET_GPR_U32(ctx, 31, 0x4AC950u);
    ctx->pc = 0x4AC94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC948u;
            // 0x4ac94c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC950u; }
        if (ctx->pc != 0x4AC950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC950u; }
        if (ctx->pc != 0x4AC950u) { return; }
    }
    ctx->pc = 0x4AC950u;
label_4ac950:
    // 0x4ac950: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x4ac950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_4ac954:
    // 0x4ac954: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x4ac954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4ac958:
    // 0x4ac958: 0xc04cd60  jal         func_133580
label_4ac95c:
    if (ctx->pc == 0x4AC95Cu) {
        ctx->pc = 0x4AC95Cu;
            // 0x4ac95c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC960u;
        goto label_4ac960;
    }
    ctx->pc = 0x4AC958u;
    SET_GPR_U32(ctx, 31, 0x4AC960u);
    ctx->pc = 0x4AC95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC958u;
            // 0x4ac95c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC960u; }
        if (ctx->pc != 0x4AC960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC960u; }
        if (ctx->pc != 0x4AC960u) { return; }
    }
    ctx->pc = 0x4AC960u;
label_4ac960:
    // 0x4ac960: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4ac960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac964:
    // 0x4ac964: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4ac964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4ac968:
    // 0x4ac968: 0x320f809  jalr        $t9
label_4ac96c:
    if (ctx->pc == 0x4AC96Cu) {
        ctx->pc = 0x4AC96Cu;
            // 0x4ac96c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC970u;
        goto label_4ac970;
    }
    ctx->pc = 0x4AC968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AC970u);
        ctx->pc = 0x4AC96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC968u;
            // 0x4ac96c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AC970u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AC970u; }
            if (ctx->pc != 0x4AC970u) { return; }
        }
        }
    }
    ctx->pc = 0x4AC970u;
label_4ac970:
    // 0x4ac970: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4ac970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4ac974:
    // 0x4ac974: 0xc64c008c  lwc1        $f12, 0x8C($s2)
    ctx->pc = 0x4ac974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4ac978:
    // 0x4ac978: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4ac978u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4ac97c:
    // 0x4ac97c: 0x8fa5014c  lw          $a1, 0x14C($sp)
    ctx->pc = 0x4ac97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_4ac980:
    // 0x4ac980: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x4ac980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_4ac984:
    // 0x4ac984: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4ac984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ac988:
    // 0x4ac988: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x4ac988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4ac98c:
    // 0x4ac98c: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x4ac98cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_4ac990:
    // 0x4ac990: 0xc04cff4  jal         func_133FD0
label_4ac994:
    if (ctx->pc == 0x4AC994u) {
        ctx->pc = 0x4AC994u;
            // 0x4ac994: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC998u;
        goto label_4ac998;
    }
    ctx->pc = 0x4AC990u;
    SET_GPR_U32(ctx, 31, 0x4AC998u);
    ctx->pc = 0x4AC994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC990u;
            // 0x4ac994: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC998u; }
        if (ctx->pc != 0x4AC998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC998u; }
        if (ctx->pc != 0x4AC998u) { return; }
    }
    ctx->pc = 0x4AC998u;
label_4ac998:
    // 0x4ac998: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4ac998u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4ac99c:
    // 0x4ac99c: 0x29e182b  sltu        $v1, $s4, $fp
    ctx->pc = 0x4ac99cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_4ac9a0:
    // 0x4ac9a0: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
label_4ac9a4:
    if (ctx->pc == 0x4AC9A4u) {
        ctx->pc = 0x4AC9A4u;
            // 0x4ac9a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4AC9A8u;
        goto label_4ac9a8;
    }
    ctx->pc = 0x4AC9A0u;
    {
        const bool branch_taken_0x4ac9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AC9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC9A0u;
            // 0x4ac9a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac9a0) {
            ctx->pc = 0x4AC87Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ac87c;
        }
    }
    ctx->pc = 0x4AC9A8u;
label_4ac9a8:
    // 0x4ac9a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ac9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ac9ac:
    // 0x4ac9ac: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4ac9acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4ac9b0:
    // 0x4ac9b0: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_4ac9b4:
    if (ctx->pc == 0x4AC9B4u) {
        ctx->pc = 0x4AC9B4u;
            // 0x4ac9b4: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->pc = 0x4AC9B8u;
        goto label_4ac9b8;
    }
    ctx->pc = 0x4AC9B0u;
    {
        const bool branch_taken_0x4ac9b0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4AC9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC9B0u;
            // 0x4ac9b4: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac9b0) {
            ctx->pc = 0x4AC9D4u;
            goto label_4ac9d4;
        }
    }
    ctx->pc = 0x4AC9B8u;
label_4ac9b8:
    // 0x4ac9b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ac9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ac9bc:
    // 0x4ac9bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ac9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ac9c0:
    // 0x4ac9c0: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4ac9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4ac9c4:
    // 0x4ac9c4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4ac9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4ac9c8:
    // 0x4ac9c8: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4ac9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4ac9cc:
    // 0x4ac9cc: 0xc055754  jal         func_155D50
label_4ac9d0:
    if (ctx->pc == 0x4AC9D0u) {
        ctx->pc = 0x4AC9D0u;
            // 0x4ac9d0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4AC9D4u;
        goto label_4ac9d4;
    }
    ctx->pc = 0x4AC9CCu;
    SET_GPR_U32(ctx, 31, 0x4AC9D4u);
    ctx->pc = 0x4AC9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC9CCu;
            // 0x4ac9d0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC9D4u; }
        if (ctx->pc != 0x4AC9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC9D4u; }
        if (ctx->pc != 0x4AC9D4u) { return; }
    }
    ctx->pc = 0x4AC9D4u;
label_4ac9d4:
    // 0x4ac9d4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4ac9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4ac9d8:
    // 0x4ac9d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4ac9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ac9dc:
    // 0x4ac9dc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4ac9dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4ac9e0:
    // 0x4ac9e0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4ac9e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4ac9e4:
    // 0x4ac9e4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4ac9e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4ac9e8:
    // 0x4ac9e8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4ac9e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4ac9ec:
    // 0x4ac9ec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4ac9ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ac9f0:
    // 0x4ac9f0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ac9f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ac9f4:
    // 0x4ac9f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ac9f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ac9f8:
    // 0x4ac9f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ac9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ac9fc:
    // 0x4ac9fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ac9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4aca00:
    // 0x4aca00: 0x3e00008  jr          $ra
label_4aca04:
    if (ctx->pc == 0x4ACA04u) {
        ctx->pc = 0x4ACA04u;
            // 0x4aca04: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x4ACA08u;
        goto label_4aca08;
    }
    ctx->pc = 0x4ACA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACA00u;
            // 0x4aca04: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ACA08u;
label_4aca08:
    // 0x4aca08: 0x0  nop
    ctx->pc = 0x4aca08u;
    // NOP
label_4aca0c:
    // 0x4aca0c: 0x0  nop
    ctx->pc = 0x4aca0cu;
    // NOP
}
