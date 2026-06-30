#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052C040
// Address: 0x52c040 - 0x52c680
void sub_0052C040_0x52c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052C040_0x52c040");
#endif

    switch (ctx->pc) {
        case 0x52c040u: goto label_52c040;
        case 0x52c044u: goto label_52c044;
        case 0x52c048u: goto label_52c048;
        case 0x52c04cu: goto label_52c04c;
        case 0x52c050u: goto label_52c050;
        case 0x52c054u: goto label_52c054;
        case 0x52c058u: goto label_52c058;
        case 0x52c05cu: goto label_52c05c;
        case 0x52c060u: goto label_52c060;
        case 0x52c064u: goto label_52c064;
        case 0x52c068u: goto label_52c068;
        case 0x52c06cu: goto label_52c06c;
        case 0x52c070u: goto label_52c070;
        case 0x52c074u: goto label_52c074;
        case 0x52c078u: goto label_52c078;
        case 0x52c07cu: goto label_52c07c;
        case 0x52c080u: goto label_52c080;
        case 0x52c084u: goto label_52c084;
        case 0x52c088u: goto label_52c088;
        case 0x52c08cu: goto label_52c08c;
        case 0x52c090u: goto label_52c090;
        case 0x52c094u: goto label_52c094;
        case 0x52c098u: goto label_52c098;
        case 0x52c09cu: goto label_52c09c;
        case 0x52c0a0u: goto label_52c0a0;
        case 0x52c0a4u: goto label_52c0a4;
        case 0x52c0a8u: goto label_52c0a8;
        case 0x52c0acu: goto label_52c0ac;
        case 0x52c0b0u: goto label_52c0b0;
        case 0x52c0b4u: goto label_52c0b4;
        case 0x52c0b8u: goto label_52c0b8;
        case 0x52c0bcu: goto label_52c0bc;
        case 0x52c0c0u: goto label_52c0c0;
        case 0x52c0c4u: goto label_52c0c4;
        case 0x52c0c8u: goto label_52c0c8;
        case 0x52c0ccu: goto label_52c0cc;
        case 0x52c0d0u: goto label_52c0d0;
        case 0x52c0d4u: goto label_52c0d4;
        case 0x52c0d8u: goto label_52c0d8;
        case 0x52c0dcu: goto label_52c0dc;
        case 0x52c0e0u: goto label_52c0e0;
        case 0x52c0e4u: goto label_52c0e4;
        case 0x52c0e8u: goto label_52c0e8;
        case 0x52c0ecu: goto label_52c0ec;
        case 0x52c0f0u: goto label_52c0f0;
        case 0x52c0f4u: goto label_52c0f4;
        case 0x52c0f8u: goto label_52c0f8;
        case 0x52c0fcu: goto label_52c0fc;
        case 0x52c100u: goto label_52c100;
        case 0x52c104u: goto label_52c104;
        case 0x52c108u: goto label_52c108;
        case 0x52c10cu: goto label_52c10c;
        case 0x52c110u: goto label_52c110;
        case 0x52c114u: goto label_52c114;
        case 0x52c118u: goto label_52c118;
        case 0x52c11cu: goto label_52c11c;
        case 0x52c120u: goto label_52c120;
        case 0x52c124u: goto label_52c124;
        case 0x52c128u: goto label_52c128;
        case 0x52c12cu: goto label_52c12c;
        case 0x52c130u: goto label_52c130;
        case 0x52c134u: goto label_52c134;
        case 0x52c138u: goto label_52c138;
        case 0x52c13cu: goto label_52c13c;
        case 0x52c140u: goto label_52c140;
        case 0x52c144u: goto label_52c144;
        case 0x52c148u: goto label_52c148;
        case 0x52c14cu: goto label_52c14c;
        case 0x52c150u: goto label_52c150;
        case 0x52c154u: goto label_52c154;
        case 0x52c158u: goto label_52c158;
        case 0x52c15cu: goto label_52c15c;
        case 0x52c160u: goto label_52c160;
        case 0x52c164u: goto label_52c164;
        case 0x52c168u: goto label_52c168;
        case 0x52c16cu: goto label_52c16c;
        case 0x52c170u: goto label_52c170;
        case 0x52c174u: goto label_52c174;
        case 0x52c178u: goto label_52c178;
        case 0x52c17cu: goto label_52c17c;
        case 0x52c180u: goto label_52c180;
        case 0x52c184u: goto label_52c184;
        case 0x52c188u: goto label_52c188;
        case 0x52c18cu: goto label_52c18c;
        case 0x52c190u: goto label_52c190;
        case 0x52c194u: goto label_52c194;
        case 0x52c198u: goto label_52c198;
        case 0x52c19cu: goto label_52c19c;
        case 0x52c1a0u: goto label_52c1a0;
        case 0x52c1a4u: goto label_52c1a4;
        case 0x52c1a8u: goto label_52c1a8;
        case 0x52c1acu: goto label_52c1ac;
        case 0x52c1b0u: goto label_52c1b0;
        case 0x52c1b4u: goto label_52c1b4;
        case 0x52c1b8u: goto label_52c1b8;
        case 0x52c1bcu: goto label_52c1bc;
        case 0x52c1c0u: goto label_52c1c0;
        case 0x52c1c4u: goto label_52c1c4;
        case 0x52c1c8u: goto label_52c1c8;
        case 0x52c1ccu: goto label_52c1cc;
        case 0x52c1d0u: goto label_52c1d0;
        case 0x52c1d4u: goto label_52c1d4;
        case 0x52c1d8u: goto label_52c1d8;
        case 0x52c1dcu: goto label_52c1dc;
        case 0x52c1e0u: goto label_52c1e0;
        case 0x52c1e4u: goto label_52c1e4;
        case 0x52c1e8u: goto label_52c1e8;
        case 0x52c1ecu: goto label_52c1ec;
        case 0x52c1f0u: goto label_52c1f0;
        case 0x52c1f4u: goto label_52c1f4;
        case 0x52c1f8u: goto label_52c1f8;
        case 0x52c1fcu: goto label_52c1fc;
        case 0x52c200u: goto label_52c200;
        case 0x52c204u: goto label_52c204;
        case 0x52c208u: goto label_52c208;
        case 0x52c20cu: goto label_52c20c;
        case 0x52c210u: goto label_52c210;
        case 0x52c214u: goto label_52c214;
        case 0x52c218u: goto label_52c218;
        case 0x52c21cu: goto label_52c21c;
        case 0x52c220u: goto label_52c220;
        case 0x52c224u: goto label_52c224;
        case 0x52c228u: goto label_52c228;
        case 0x52c22cu: goto label_52c22c;
        case 0x52c230u: goto label_52c230;
        case 0x52c234u: goto label_52c234;
        case 0x52c238u: goto label_52c238;
        case 0x52c23cu: goto label_52c23c;
        case 0x52c240u: goto label_52c240;
        case 0x52c244u: goto label_52c244;
        case 0x52c248u: goto label_52c248;
        case 0x52c24cu: goto label_52c24c;
        case 0x52c250u: goto label_52c250;
        case 0x52c254u: goto label_52c254;
        case 0x52c258u: goto label_52c258;
        case 0x52c25cu: goto label_52c25c;
        case 0x52c260u: goto label_52c260;
        case 0x52c264u: goto label_52c264;
        case 0x52c268u: goto label_52c268;
        case 0x52c26cu: goto label_52c26c;
        case 0x52c270u: goto label_52c270;
        case 0x52c274u: goto label_52c274;
        case 0x52c278u: goto label_52c278;
        case 0x52c27cu: goto label_52c27c;
        case 0x52c280u: goto label_52c280;
        case 0x52c284u: goto label_52c284;
        case 0x52c288u: goto label_52c288;
        case 0x52c28cu: goto label_52c28c;
        case 0x52c290u: goto label_52c290;
        case 0x52c294u: goto label_52c294;
        case 0x52c298u: goto label_52c298;
        case 0x52c29cu: goto label_52c29c;
        case 0x52c2a0u: goto label_52c2a0;
        case 0x52c2a4u: goto label_52c2a4;
        case 0x52c2a8u: goto label_52c2a8;
        case 0x52c2acu: goto label_52c2ac;
        case 0x52c2b0u: goto label_52c2b0;
        case 0x52c2b4u: goto label_52c2b4;
        case 0x52c2b8u: goto label_52c2b8;
        case 0x52c2bcu: goto label_52c2bc;
        case 0x52c2c0u: goto label_52c2c0;
        case 0x52c2c4u: goto label_52c2c4;
        case 0x52c2c8u: goto label_52c2c8;
        case 0x52c2ccu: goto label_52c2cc;
        case 0x52c2d0u: goto label_52c2d0;
        case 0x52c2d4u: goto label_52c2d4;
        case 0x52c2d8u: goto label_52c2d8;
        case 0x52c2dcu: goto label_52c2dc;
        case 0x52c2e0u: goto label_52c2e0;
        case 0x52c2e4u: goto label_52c2e4;
        case 0x52c2e8u: goto label_52c2e8;
        case 0x52c2ecu: goto label_52c2ec;
        case 0x52c2f0u: goto label_52c2f0;
        case 0x52c2f4u: goto label_52c2f4;
        case 0x52c2f8u: goto label_52c2f8;
        case 0x52c2fcu: goto label_52c2fc;
        case 0x52c300u: goto label_52c300;
        case 0x52c304u: goto label_52c304;
        case 0x52c308u: goto label_52c308;
        case 0x52c30cu: goto label_52c30c;
        case 0x52c310u: goto label_52c310;
        case 0x52c314u: goto label_52c314;
        case 0x52c318u: goto label_52c318;
        case 0x52c31cu: goto label_52c31c;
        case 0x52c320u: goto label_52c320;
        case 0x52c324u: goto label_52c324;
        case 0x52c328u: goto label_52c328;
        case 0x52c32cu: goto label_52c32c;
        case 0x52c330u: goto label_52c330;
        case 0x52c334u: goto label_52c334;
        case 0x52c338u: goto label_52c338;
        case 0x52c33cu: goto label_52c33c;
        case 0x52c340u: goto label_52c340;
        case 0x52c344u: goto label_52c344;
        case 0x52c348u: goto label_52c348;
        case 0x52c34cu: goto label_52c34c;
        case 0x52c350u: goto label_52c350;
        case 0x52c354u: goto label_52c354;
        case 0x52c358u: goto label_52c358;
        case 0x52c35cu: goto label_52c35c;
        case 0x52c360u: goto label_52c360;
        case 0x52c364u: goto label_52c364;
        case 0x52c368u: goto label_52c368;
        case 0x52c36cu: goto label_52c36c;
        case 0x52c370u: goto label_52c370;
        case 0x52c374u: goto label_52c374;
        case 0x52c378u: goto label_52c378;
        case 0x52c37cu: goto label_52c37c;
        case 0x52c380u: goto label_52c380;
        case 0x52c384u: goto label_52c384;
        case 0x52c388u: goto label_52c388;
        case 0x52c38cu: goto label_52c38c;
        case 0x52c390u: goto label_52c390;
        case 0x52c394u: goto label_52c394;
        case 0x52c398u: goto label_52c398;
        case 0x52c39cu: goto label_52c39c;
        case 0x52c3a0u: goto label_52c3a0;
        case 0x52c3a4u: goto label_52c3a4;
        case 0x52c3a8u: goto label_52c3a8;
        case 0x52c3acu: goto label_52c3ac;
        case 0x52c3b0u: goto label_52c3b0;
        case 0x52c3b4u: goto label_52c3b4;
        case 0x52c3b8u: goto label_52c3b8;
        case 0x52c3bcu: goto label_52c3bc;
        case 0x52c3c0u: goto label_52c3c0;
        case 0x52c3c4u: goto label_52c3c4;
        case 0x52c3c8u: goto label_52c3c8;
        case 0x52c3ccu: goto label_52c3cc;
        case 0x52c3d0u: goto label_52c3d0;
        case 0x52c3d4u: goto label_52c3d4;
        case 0x52c3d8u: goto label_52c3d8;
        case 0x52c3dcu: goto label_52c3dc;
        case 0x52c3e0u: goto label_52c3e0;
        case 0x52c3e4u: goto label_52c3e4;
        case 0x52c3e8u: goto label_52c3e8;
        case 0x52c3ecu: goto label_52c3ec;
        case 0x52c3f0u: goto label_52c3f0;
        case 0x52c3f4u: goto label_52c3f4;
        case 0x52c3f8u: goto label_52c3f8;
        case 0x52c3fcu: goto label_52c3fc;
        case 0x52c400u: goto label_52c400;
        case 0x52c404u: goto label_52c404;
        case 0x52c408u: goto label_52c408;
        case 0x52c40cu: goto label_52c40c;
        case 0x52c410u: goto label_52c410;
        case 0x52c414u: goto label_52c414;
        case 0x52c418u: goto label_52c418;
        case 0x52c41cu: goto label_52c41c;
        case 0x52c420u: goto label_52c420;
        case 0x52c424u: goto label_52c424;
        case 0x52c428u: goto label_52c428;
        case 0x52c42cu: goto label_52c42c;
        case 0x52c430u: goto label_52c430;
        case 0x52c434u: goto label_52c434;
        case 0x52c438u: goto label_52c438;
        case 0x52c43cu: goto label_52c43c;
        case 0x52c440u: goto label_52c440;
        case 0x52c444u: goto label_52c444;
        case 0x52c448u: goto label_52c448;
        case 0x52c44cu: goto label_52c44c;
        case 0x52c450u: goto label_52c450;
        case 0x52c454u: goto label_52c454;
        case 0x52c458u: goto label_52c458;
        case 0x52c45cu: goto label_52c45c;
        case 0x52c460u: goto label_52c460;
        case 0x52c464u: goto label_52c464;
        case 0x52c468u: goto label_52c468;
        case 0x52c46cu: goto label_52c46c;
        case 0x52c470u: goto label_52c470;
        case 0x52c474u: goto label_52c474;
        case 0x52c478u: goto label_52c478;
        case 0x52c47cu: goto label_52c47c;
        case 0x52c480u: goto label_52c480;
        case 0x52c484u: goto label_52c484;
        case 0x52c488u: goto label_52c488;
        case 0x52c48cu: goto label_52c48c;
        case 0x52c490u: goto label_52c490;
        case 0x52c494u: goto label_52c494;
        case 0x52c498u: goto label_52c498;
        case 0x52c49cu: goto label_52c49c;
        case 0x52c4a0u: goto label_52c4a0;
        case 0x52c4a4u: goto label_52c4a4;
        case 0x52c4a8u: goto label_52c4a8;
        case 0x52c4acu: goto label_52c4ac;
        case 0x52c4b0u: goto label_52c4b0;
        case 0x52c4b4u: goto label_52c4b4;
        case 0x52c4b8u: goto label_52c4b8;
        case 0x52c4bcu: goto label_52c4bc;
        case 0x52c4c0u: goto label_52c4c0;
        case 0x52c4c4u: goto label_52c4c4;
        case 0x52c4c8u: goto label_52c4c8;
        case 0x52c4ccu: goto label_52c4cc;
        case 0x52c4d0u: goto label_52c4d0;
        case 0x52c4d4u: goto label_52c4d4;
        case 0x52c4d8u: goto label_52c4d8;
        case 0x52c4dcu: goto label_52c4dc;
        case 0x52c4e0u: goto label_52c4e0;
        case 0x52c4e4u: goto label_52c4e4;
        case 0x52c4e8u: goto label_52c4e8;
        case 0x52c4ecu: goto label_52c4ec;
        case 0x52c4f0u: goto label_52c4f0;
        case 0x52c4f4u: goto label_52c4f4;
        case 0x52c4f8u: goto label_52c4f8;
        case 0x52c4fcu: goto label_52c4fc;
        case 0x52c500u: goto label_52c500;
        case 0x52c504u: goto label_52c504;
        case 0x52c508u: goto label_52c508;
        case 0x52c50cu: goto label_52c50c;
        case 0x52c510u: goto label_52c510;
        case 0x52c514u: goto label_52c514;
        case 0x52c518u: goto label_52c518;
        case 0x52c51cu: goto label_52c51c;
        case 0x52c520u: goto label_52c520;
        case 0x52c524u: goto label_52c524;
        case 0x52c528u: goto label_52c528;
        case 0x52c52cu: goto label_52c52c;
        case 0x52c530u: goto label_52c530;
        case 0x52c534u: goto label_52c534;
        case 0x52c538u: goto label_52c538;
        case 0x52c53cu: goto label_52c53c;
        case 0x52c540u: goto label_52c540;
        case 0x52c544u: goto label_52c544;
        case 0x52c548u: goto label_52c548;
        case 0x52c54cu: goto label_52c54c;
        case 0x52c550u: goto label_52c550;
        case 0x52c554u: goto label_52c554;
        case 0x52c558u: goto label_52c558;
        case 0x52c55cu: goto label_52c55c;
        case 0x52c560u: goto label_52c560;
        case 0x52c564u: goto label_52c564;
        case 0x52c568u: goto label_52c568;
        case 0x52c56cu: goto label_52c56c;
        case 0x52c570u: goto label_52c570;
        case 0x52c574u: goto label_52c574;
        case 0x52c578u: goto label_52c578;
        case 0x52c57cu: goto label_52c57c;
        case 0x52c580u: goto label_52c580;
        case 0x52c584u: goto label_52c584;
        case 0x52c588u: goto label_52c588;
        case 0x52c58cu: goto label_52c58c;
        case 0x52c590u: goto label_52c590;
        case 0x52c594u: goto label_52c594;
        case 0x52c598u: goto label_52c598;
        case 0x52c59cu: goto label_52c59c;
        case 0x52c5a0u: goto label_52c5a0;
        case 0x52c5a4u: goto label_52c5a4;
        case 0x52c5a8u: goto label_52c5a8;
        case 0x52c5acu: goto label_52c5ac;
        case 0x52c5b0u: goto label_52c5b0;
        case 0x52c5b4u: goto label_52c5b4;
        case 0x52c5b8u: goto label_52c5b8;
        case 0x52c5bcu: goto label_52c5bc;
        case 0x52c5c0u: goto label_52c5c0;
        case 0x52c5c4u: goto label_52c5c4;
        case 0x52c5c8u: goto label_52c5c8;
        case 0x52c5ccu: goto label_52c5cc;
        case 0x52c5d0u: goto label_52c5d0;
        case 0x52c5d4u: goto label_52c5d4;
        case 0x52c5d8u: goto label_52c5d8;
        case 0x52c5dcu: goto label_52c5dc;
        case 0x52c5e0u: goto label_52c5e0;
        case 0x52c5e4u: goto label_52c5e4;
        case 0x52c5e8u: goto label_52c5e8;
        case 0x52c5ecu: goto label_52c5ec;
        case 0x52c5f0u: goto label_52c5f0;
        case 0x52c5f4u: goto label_52c5f4;
        case 0x52c5f8u: goto label_52c5f8;
        case 0x52c5fcu: goto label_52c5fc;
        case 0x52c600u: goto label_52c600;
        case 0x52c604u: goto label_52c604;
        case 0x52c608u: goto label_52c608;
        case 0x52c60cu: goto label_52c60c;
        case 0x52c610u: goto label_52c610;
        case 0x52c614u: goto label_52c614;
        case 0x52c618u: goto label_52c618;
        case 0x52c61cu: goto label_52c61c;
        case 0x52c620u: goto label_52c620;
        case 0x52c624u: goto label_52c624;
        case 0x52c628u: goto label_52c628;
        case 0x52c62cu: goto label_52c62c;
        case 0x52c630u: goto label_52c630;
        case 0x52c634u: goto label_52c634;
        case 0x52c638u: goto label_52c638;
        case 0x52c63cu: goto label_52c63c;
        case 0x52c640u: goto label_52c640;
        case 0x52c644u: goto label_52c644;
        case 0x52c648u: goto label_52c648;
        case 0x52c64cu: goto label_52c64c;
        case 0x52c650u: goto label_52c650;
        case 0x52c654u: goto label_52c654;
        case 0x52c658u: goto label_52c658;
        case 0x52c65cu: goto label_52c65c;
        case 0x52c660u: goto label_52c660;
        case 0x52c664u: goto label_52c664;
        case 0x52c668u: goto label_52c668;
        case 0x52c66cu: goto label_52c66c;
        case 0x52c670u: goto label_52c670;
        case 0x52c674u: goto label_52c674;
        case 0x52c678u: goto label_52c678;
        case 0x52c67cu: goto label_52c67c;
        default: break;
    }

    ctx->pc = 0x52c040u;

label_52c040:
    // 0x52c040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52c044:
    // 0x52c044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52c048:
    // 0x52c048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52c048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52c04c:
    // 0x52c04c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52c04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52c050:
    // 0x52c050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x52c050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52c054:
    // 0x52c054: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_52c058:
    if (ctx->pc == 0x52C058u) {
        ctx->pc = 0x52C058u;
            // 0x52c058: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C05Cu;
        goto label_52c05c;
    }
    ctx->pc = 0x52C054u;
    {
        const bool branch_taken_0x52c054 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x52C058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C054u;
            // 0x52c058: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c054) {
            ctx->pc = 0x52C188u;
            goto label_52c188;
        }
    }
    ctx->pc = 0x52C05Cu;
label_52c05c:
    // 0x52c05c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52c060:
    // 0x52c060: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52c060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52c064:
    // 0x52c064: 0x24636910  addiu       $v1, $v1, 0x6910
    ctx->pc = 0x52c064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26896));
label_52c068:
    // 0x52c068: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x52c068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_52c06c:
    // 0x52c06c: 0x24426948  addiu       $v0, $v0, 0x6948
    ctx->pc = 0x52c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26952));
label_52c070:
    // 0x52c070: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x52c070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_52c074:
    // 0x52c074: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x52c074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_52c078:
    // 0x52c078: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x52c078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_52c07c:
    // 0x52c07c: 0xc0407c0  jal         func_101F00
label_52c080:
    if (ctx->pc == 0x52C080u) {
        ctx->pc = 0x52C080u;
            // 0x52c080: 0x24a5c1a0  addiu       $a1, $a1, -0x3E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951328));
        ctx->pc = 0x52C084u;
        goto label_52c084;
    }
    ctx->pc = 0x52C07Cu;
    SET_GPR_U32(ctx, 31, 0x52C084u);
    ctx->pc = 0x52C080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C07Cu;
            // 0x52c080: 0x24a5c1a0  addiu       $a1, $a1, -0x3E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C084u; }
        if (ctx->pc != 0x52C084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C084u; }
        if (ctx->pc != 0x52C084u) { return; }
    }
    ctx->pc = 0x52C084u;
label_52c084:
    // 0x52c084: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x52c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_52c088:
    // 0x52c088: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_52c08c:
    if (ctx->pc == 0x52C08Cu) {
        ctx->pc = 0x52C08Cu;
            // 0x52c08c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x52C090u;
        goto label_52c090;
    }
    ctx->pc = 0x52C088u;
    {
        const bool branch_taken_0x52c088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c088) {
            ctx->pc = 0x52C08Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C088u;
            // 0x52c08c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C09Cu;
            goto label_52c09c;
        }
    }
    ctx->pc = 0x52C090u;
label_52c090:
    // 0x52c090: 0xc07507c  jal         func_1D41F0
label_52c094:
    if (ctx->pc == 0x52C094u) {
        ctx->pc = 0x52C094u;
            // 0x52c094: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x52C098u;
        goto label_52c098;
    }
    ctx->pc = 0x52C090u;
    SET_GPR_U32(ctx, 31, 0x52C098u);
    ctx->pc = 0x52C094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C090u;
            // 0x52c094: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C098u; }
        if (ctx->pc != 0x52C098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C098u; }
        if (ctx->pc != 0x52C098u) { return; }
    }
    ctx->pc = 0x52C098u;
label_52c098:
    // 0x52c098: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x52c098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_52c09c:
    // 0x52c09c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_52c0a0:
    if (ctx->pc == 0x52C0A0u) {
        ctx->pc = 0x52C0A0u;
            // 0x52c0a0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x52C0A4u;
        goto label_52c0a4;
    }
    ctx->pc = 0x52C09Cu;
    {
        const bool branch_taken_0x52c09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c09c) {
            ctx->pc = 0x52C0A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C09Cu;
            // 0x52c0a0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C0CCu;
            goto label_52c0cc;
        }
    }
    ctx->pc = 0x52C0A4u;
label_52c0a4:
    // 0x52c0a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_52c0a8:
    if (ctx->pc == 0x52C0A8u) {
        ctx->pc = 0x52C0ACu;
        goto label_52c0ac;
    }
    ctx->pc = 0x52C0A4u;
    {
        const bool branch_taken_0x52c0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c0a4) {
            ctx->pc = 0x52C0C8u;
            goto label_52c0c8;
        }
    }
    ctx->pc = 0x52C0ACu;
label_52c0ac:
    // 0x52c0ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_52c0b0:
    if (ctx->pc == 0x52C0B0u) {
        ctx->pc = 0x52C0B4u;
        goto label_52c0b4;
    }
    ctx->pc = 0x52C0ACu;
    {
        const bool branch_taken_0x52c0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c0ac) {
            ctx->pc = 0x52C0C8u;
            goto label_52c0c8;
        }
    }
    ctx->pc = 0x52C0B4u;
label_52c0b4:
    // 0x52c0b4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x52c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_52c0b8:
    // 0x52c0b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_52c0bc:
    if (ctx->pc == 0x52C0BCu) {
        ctx->pc = 0x52C0C0u;
        goto label_52c0c0;
    }
    ctx->pc = 0x52C0B8u;
    {
        const bool branch_taken_0x52c0b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c0b8) {
            ctx->pc = 0x52C0C8u;
            goto label_52c0c8;
        }
    }
    ctx->pc = 0x52C0C0u;
label_52c0c0:
    // 0x52c0c0: 0xc0400a8  jal         func_1002A0
label_52c0c4:
    if (ctx->pc == 0x52C0C4u) {
        ctx->pc = 0x52C0C8u;
        goto label_52c0c8;
    }
    ctx->pc = 0x52C0C0u;
    SET_GPR_U32(ctx, 31, 0x52C0C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C0C8u; }
        if (ctx->pc != 0x52C0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C0C8u; }
        if (ctx->pc != 0x52C0C8u) { return; }
    }
    ctx->pc = 0x52C0C8u;
label_52c0c8:
    // 0x52c0c8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x52c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_52c0cc:
    // 0x52c0cc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_52c0d0:
    if (ctx->pc == 0x52C0D0u) {
        ctx->pc = 0x52C0D0u;
            // 0x52c0d0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x52C0D4u;
        goto label_52c0d4;
    }
    ctx->pc = 0x52C0CCu;
    {
        const bool branch_taken_0x52c0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c0cc) {
            ctx->pc = 0x52C0D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C0CCu;
            // 0x52c0d0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C0FCu;
            goto label_52c0fc;
        }
    }
    ctx->pc = 0x52C0D4u;
label_52c0d4:
    // 0x52c0d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_52c0d8:
    if (ctx->pc == 0x52C0D8u) {
        ctx->pc = 0x52C0DCu;
        goto label_52c0dc;
    }
    ctx->pc = 0x52C0D4u;
    {
        const bool branch_taken_0x52c0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c0d4) {
            ctx->pc = 0x52C0F8u;
            goto label_52c0f8;
        }
    }
    ctx->pc = 0x52C0DCu;
label_52c0dc:
    // 0x52c0dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_52c0e0:
    if (ctx->pc == 0x52C0E0u) {
        ctx->pc = 0x52C0E4u;
        goto label_52c0e4;
    }
    ctx->pc = 0x52C0DCu;
    {
        const bool branch_taken_0x52c0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c0dc) {
            ctx->pc = 0x52C0F8u;
            goto label_52c0f8;
        }
    }
    ctx->pc = 0x52C0E4u;
label_52c0e4:
    // 0x52c0e4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x52c0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_52c0e8:
    // 0x52c0e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_52c0ec:
    if (ctx->pc == 0x52C0ECu) {
        ctx->pc = 0x52C0F0u;
        goto label_52c0f0;
    }
    ctx->pc = 0x52C0E8u;
    {
        const bool branch_taken_0x52c0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c0e8) {
            ctx->pc = 0x52C0F8u;
            goto label_52c0f8;
        }
    }
    ctx->pc = 0x52C0F0u;
label_52c0f0:
    // 0x52c0f0: 0xc0400a8  jal         func_1002A0
label_52c0f4:
    if (ctx->pc == 0x52C0F4u) {
        ctx->pc = 0x52C0F8u;
        goto label_52c0f8;
    }
    ctx->pc = 0x52C0F0u;
    SET_GPR_U32(ctx, 31, 0x52C0F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C0F8u; }
        if (ctx->pc != 0x52C0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C0F8u; }
        if (ctx->pc != 0x52C0F8u) { return; }
    }
    ctx->pc = 0x52C0F8u;
label_52c0f8:
    // 0x52c0f8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x52c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_52c0fc:
    // 0x52c0fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_52c100:
    if (ctx->pc == 0x52C100u) {
        ctx->pc = 0x52C104u;
        goto label_52c104;
    }
    ctx->pc = 0x52C0FCu;
    {
        const bool branch_taken_0x52c0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c0fc) {
            ctx->pc = 0x52C118u;
            goto label_52c118;
        }
    }
    ctx->pc = 0x52C104u;
label_52c104:
    // 0x52c104: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52c104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52c108:
    // 0x52c108: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x52c108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_52c10c:
    // 0x52c10c: 0x246368f8  addiu       $v1, $v1, 0x68F8
    ctx->pc = 0x52c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26872));
label_52c110:
    // 0x52c110: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x52c110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_52c114:
    // 0x52c114: 0xac40b608  sw          $zero, -0x49F8($v0)
    ctx->pc = 0x52c114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948360), GPR_U32(ctx, 0));
label_52c118:
    // 0x52c118: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_52c11c:
    if (ctx->pc == 0x52C11Cu) {
        ctx->pc = 0x52C11Cu;
            // 0x52c11c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x52C120u;
        goto label_52c120;
    }
    ctx->pc = 0x52C118u;
    {
        const bool branch_taken_0x52c118 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c118) {
            ctx->pc = 0x52C11Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C118u;
            // 0x52c11c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C174u;
            goto label_52c174;
        }
    }
    ctx->pc = 0x52C120u;
label_52c120:
    // 0x52c120: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52c120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52c124:
    // 0x52c124: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x52c124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_52c128:
    // 0x52c128: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x52c128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_52c12c:
    // 0x52c12c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x52c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_52c130:
    // 0x52c130: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_52c134:
    if (ctx->pc == 0x52C134u) {
        ctx->pc = 0x52C134u;
            // 0x52c134: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x52C138u;
        goto label_52c138;
    }
    ctx->pc = 0x52C130u;
    {
        const bool branch_taken_0x52c130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c130) {
            ctx->pc = 0x52C134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C130u;
            // 0x52c134: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C14Cu;
            goto label_52c14c;
        }
    }
    ctx->pc = 0x52C138u;
label_52c138:
    // 0x52c138: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52c138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52c13c:
    // 0x52c13c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x52c13cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52c140:
    // 0x52c140: 0x320f809  jalr        $t9
label_52c144:
    if (ctx->pc == 0x52C144u) {
        ctx->pc = 0x52C144u;
            // 0x52c144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52C148u;
        goto label_52c148;
    }
    ctx->pc = 0x52C140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52C148u);
        ctx->pc = 0x52C144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C140u;
            // 0x52c144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52C148u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52C148u; }
            if (ctx->pc != 0x52C148u) { return; }
        }
        }
    }
    ctx->pc = 0x52C148u;
label_52c148:
    // 0x52c148: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x52c148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_52c14c:
    // 0x52c14c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_52c150:
    if (ctx->pc == 0x52C150u) {
        ctx->pc = 0x52C150u;
            // 0x52c150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C154u;
        goto label_52c154;
    }
    ctx->pc = 0x52C14Cu;
    {
        const bool branch_taken_0x52c14c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c14c) {
            ctx->pc = 0x52C150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C14Cu;
            // 0x52c150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C168u;
            goto label_52c168;
        }
    }
    ctx->pc = 0x52C154u;
label_52c154:
    // 0x52c154: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52c154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52c158:
    // 0x52c158: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x52c158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52c15c:
    // 0x52c15c: 0x320f809  jalr        $t9
label_52c160:
    if (ctx->pc == 0x52C160u) {
        ctx->pc = 0x52C160u;
            // 0x52c160: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52C164u;
        goto label_52c164;
    }
    ctx->pc = 0x52C15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52C164u);
        ctx->pc = 0x52C160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C15Cu;
            // 0x52c160: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52C164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52C164u; }
            if (ctx->pc != 0x52C164u) { return; }
        }
        }
    }
    ctx->pc = 0x52C164u;
label_52c164:
    // 0x52c164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x52c164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52c168:
    // 0x52c168: 0xc075bf8  jal         func_1D6FE0
label_52c16c:
    if (ctx->pc == 0x52C16Cu) {
        ctx->pc = 0x52C16Cu;
            // 0x52c16c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C170u;
        goto label_52c170;
    }
    ctx->pc = 0x52C168u;
    SET_GPR_U32(ctx, 31, 0x52C170u);
    ctx->pc = 0x52C16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C168u;
            // 0x52c16c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C170u; }
        if (ctx->pc != 0x52C170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C170u; }
        if (ctx->pc != 0x52C170u) { return; }
    }
    ctx->pc = 0x52C170u;
label_52c170:
    // 0x52c170: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x52c170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_52c174:
    // 0x52c174: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52c174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_52c178:
    // 0x52c178: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52c17c:
    if (ctx->pc == 0x52C17Cu) {
        ctx->pc = 0x52C17Cu;
            // 0x52c17c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C180u;
        goto label_52c180;
    }
    ctx->pc = 0x52C178u;
    {
        const bool branch_taken_0x52c178 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52c178) {
            ctx->pc = 0x52C17Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C178u;
            // 0x52c17c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C18Cu;
            goto label_52c18c;
        }
    }
    ctx->pc = 0x52C180u;
label_52c180:
    // 0x52c180: 0xc0400a8  jal         func_1002A0
label_52c184:
    if (ctx->pc == 0x52C184u) {
        ctx->pc = 0x52C184u;
            // 0x52c184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C188u;
        goto label_52c188;
    }
    ctx->pc = 0x52C180u;
    SET_GPR_U32(ctx, 31, 0x52C188u);
    ctx->pc = 0x52C184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C180u;
            // 0x52c184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C188u; }
        if (ctx->pc != 0x52C188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C188u; }
        if (ctx->pc != 0x52C188u) { return; }
    }
    ctx->pc = 0x52C188u;
label_52c188:
    // 0x52c188: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x52c188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52c18c:
    // 0x52c18c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52c18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52c190:
    // 0x52c190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52c190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52c194:
    // 0x52c194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52c194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52c198:
    // 0x52c198: 0x3e00008  jr          $ra
label_52c19c:
    if (ctx->pc == 0x52C19Cu) {
        ctx->pc = 0x52C19Cu;
            // 0x52c19c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52C1A0u;
        goto label_52c1a0;
    }
    ctx->pc = 0x52C198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52C19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C198u;
            // 0x52c19c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52C1A0u;
label_52c1a0:
    // 0x52c1a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52c1a4:
    // 0x52c1a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52c1a8:
    // 0x52c1a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52c1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52c1ac:
    // 0x52c1ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52c1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52c1b0:
    // 0x52c1b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x52c1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52c1b4:
    // 0x52c1b4: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_52c1b8:
    if (ctx->pc == 0x52C1B8u) {
        ctx->pc = 0x52C1B8u;
            // 0x52c1b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C1BCu;
        goto label_52c1bc;
    }
    ctx->pc = 0x52C1B4u;
    {
        const bool branch_taken_0x52c1b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x52C1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C1B4u;
            // 0x52c1b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c1b4) {
            ctx->pc = 0x52C22Cu;
            goto label_52c22c;
        }
    }
    ctx->pc = 0x52C1BCu;
label_52c1bc:
    // 0x52c1bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52c1c0:
    // 0x52c1c0: 0x244269b0  addiu       $v0, $v0, 0x69B0
    ctx->pc = 0x52c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27056));
label_52c1c4:
    // 0x52c1c4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x52c1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_52c1c8:
    // 0x52c1c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52c1c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52c1cc:
    // 0x52c1cc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x52c1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_52c1d0:
    // 0x52c1d0: 0x320f809  jalr        $t9
label_52c1d4:
    if (ctx->pc == 0x52C1D4u) {
        ctx->pc = 0x52C1D8u;
        goto label_52c1d8;
    }
    ctx->pc = 0x52C1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52C1D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x52C1D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52C1D8u; }
            if (ctx->pc != 0x52C1D8u) { return; }
        }
        }
    }
    ctx->pc = 0x52C1D8u;
label_52c1d8:
    // 0x52c1d8: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x52c1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_52c1dc:
    // 0x52c1dc: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x52c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_52c1e0:
    // 0x52c1e0: 0x24a5c250  addiu       $a1, $a1, -0x3DB0
    ctx->pc = 0x52c1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951504));
label_52c1e4:
    // 0x52c1e4: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x52c1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_52c1e8:
    // 0x52c1e8: 0xc0407e8  jal         func_101FA0
label_52c1ec:
    if (ctx->pc == 0x52C1ECu) {
        ctx->pc = 0x52C1ECu;
            // 0x52c1ec: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x52C1F0u;
        goto label_52c1f0;
    }
    ctx->pc = 0x52C1E8u;
    SET_GPR_U32(ctx, 31, 0x52C1F0u);
    ctx->pc = 0x52C1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C1E8u;
            // 0x52c1ec: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C1F0u; }
        if (ctx->pc != 0x52C1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C1F0u; }
        if (ctx->pc != 0x52C1F0u) { return; }
    }
    ctx->pc = 0x52C1F0u;
label_52c1f0:
    // 0x52c1f0: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_52c1f4:
    if (ctx->pc == 0x52C1F4u) {
        ctx->pc = 0x52C1F4u;
            // 0x52c1f4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x52C1F8u;
        goto label_52c1f8;
    }
    ctx->pc = 0x52C1F0u;
    {
        const bool branch_taken_0x52c1f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c1f0) {
            ctx->pc = 0x52C1F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C1F0u;
            // 0x52c1f4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C218u;
            goto label_52c218;
        }
    }
    ctx->pc = 0x52C1F8u;
label_52c1f8:
    // 0x52c1f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52c1fc:
    // 0x52c1fc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x52c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_52c200:
    // 0x52c200: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_52c204:
    if (ctx->pc == 0x52C204u) {
        ctx->pc = 0x52C204u;
            // 0x52c204: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x52C208u;
        goto label_52c208;
    }
    ctx->pc = 0x52C200u;
    {
        const bool branch_taken_0x52c200 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x52C204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C200u;
            // 0x52c204: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c200) {
            ctx->pc = 0x52C214u;
            goto label_52c214;
        }
    }
    ctx->pc = 0x52C208u;
label_52c208:
    // 0x52c208: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52c208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52c20c:
    // 0x52c20c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x52c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_52c210:
    // 0x52c210: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x52c210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_52c214:
    // 0x52c214: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x52c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_52c218:
    // 0x52c218: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52c218u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_52c21c:
    // 0x52c21c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52c220:
    if (ctx->pc == 0x52C220u) {
        ctx->pc = 0x52C220u;
            // 0x52c220: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C224u;
        goto label_52c224;
    }
    ctx->pc = 0x52C21Cu;
    {
        const bool branch_taken_0x52c21c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52c21c) {
            ctx->pc = 0x52C220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C21Cu;
            // 0x52c220: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C230u;
            goto label_52c230;
        }
    }
    ctx->pc = 0x52C224u;
label_52c224:
    // 0x52c224: 0xc0400a8  jal         func_1002A0
label_52c228:
    if (ctx->pc == 0x52C228u) {
        ctx->pc = 0x52C228u;
            // 0x52c228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C22Cu;
        goto label_52c22c;
    }
    ctx->pc = 0x52C224u;
    SET_GPR_U32(ctx, 31, 0x52C22Cu);
    ctx->pc = 0x52C228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C224u;
            // 0x52c228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C22Cu; }
        if (ctx->pc != 0x52C22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C22Cu; }
        if (ctx->pc != 0x52C22Cu) { return; }
    }
    ctx->pc = 0x52C22Cu;
label_52c22c:
    // 0x52c22c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x52c22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52c230:
    // 0x52c230: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52c230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52c234:
    // 0x52c234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52c234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52c238:
    // 0x52c238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52c238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52c23c:
    // 0x52c23c: 0x3e00008  jr          $ra
label_52c240:
    if (ctx->pc == 0x52C240u) {
        ctx->pc = 0x52C240u;
            // 0x52c240: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52C244u;
        goto label_52c244;
    }
    ctx->pc = 0x52C23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52C240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C23Cu;
            // 0x52c240: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52C244u;
label_52c244:
    // 0x52c244: 0x0  nop
    ctx->pc = 0x52c244u;
    // NOP
label_52c248:
    // 0x52c248: 0x0  nop
    ctx->pc = 0x52c248u;
    // NOP
label_52c24c:
    // 0x52c24c: 0x0  nop
    ctx->pc = 0x52c24cu;
    // NOP
label_52c250:
    // 0x52c250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52c250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52c254:
    // 0x52c254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52c254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52c258:
    // 0x52c258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52c258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52c25c:
    // 0x52c25c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52c25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52c260:
    // 0x52c260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52c260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52c264:
    // 0x52c264: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_52c268:
    if (ctx->pc == 0x52C268u) {
        ctx->pc = 0x52C268u;
            // 0x52c268: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C26Cu;
        goto label_52c26c;
    }
    ctx->pc = 0x52C264u;
    {
        const bool branch_taken_0x52c264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52C268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C264u;
            // 0x52c268: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c264) {
            ctx->pc = 0x52C318u;
            goto label_52c318;
        }
    }
    ctx->pc = 0x52C26Cu;
label_52c26c:
    // 0x52c26c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52c270:
    // 0x52c270: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52c270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52c274:
    // 0x52c274: 0x24636a00  addiu       $v1, $v1, 0x6A00
    ctx->pc = 0x52c274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27136));
label_52c278:
    // 0x52c278: 0x24426a40  addiu       $v0, $v0, 0x6A40
    ctx->pc = 0x52c278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27200));
label_52c27c:
    // 0x52c27c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52c280:
    // 0x52c280: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_52c284:
    if (ctx->pc == 0x52C284u) {
        ctx->pc = 0x52C284u;
            // 0x52c284: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x52C288u;
        goto label_52c288;
    }
    ctx->pc = 0x52C280u;
    {
        const bool branch_taken_0x52c280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52C284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C280u;
            // 0x52c284: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c280) {
            ctx->pc = 0x52C300u;
            goto label_52c300;
        }
    }
    ctx->pc = 0x52C288u;
label_52c288:
    // 0x52c288: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52c288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_52c28c:
    // 0x52c28c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52c290:
    // 0x52c290: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x52c290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_52c294:
    // 0x52c294: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x52c294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_52c298:
    // 0x52c298: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52c298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52c29c:
    // 0x52c29c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x52c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_52c2a0:
    // 0x52c2a0: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x52c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_52c2a4:
    // 0x52c2a4: 0xc0aecc4  jal         func_2BB310
label_52c2a8:
    if (ctx->pc == 0x52C2A8u) {
        ctx->pc = 0x52C2A8u;
            // 0x52c2a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52C2ACu;
        goto label_52c2ac;
    }
    ctx->pc = 0x52C2A4u;
    SET_GPR_U32(ctx, 31, 0x52C2ACu);
    ctx->pc = 0x52C2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C2A4u;
            // 0x52c2a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C2ACu; }
        if (ctx->pc != 0x52C2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C2ACu; }
        if (ctx->pc != 0x52C2ACu) { return; }
    }
    ctx->pc = 0x52C2ACu;
label_52c2ac:
    // 0x52c2ac: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x52c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_52c2b0:
    // 0x52c2b0: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x52c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_52c2b4:
    // 0x52c2b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_52c2b8:
    if (ctx->pc == 0x52C2B8u) {
        ctx->pc = 0x52C2B8u;
            // 0x52c2b8: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x52C2BCu;
        goto label_52c2bc;
    }
    ctx->pc = 0x52C2B4u;
    {
        const bool branch_taken_0x52c2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c2b4) {
            ctx->pc = 0x52C2B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C2B4u;
            // 0x52c2b8: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C2D0u;
            goto label_52c2d0;
        }
    }
    ctx->pc = 0x52C2BCu;
label_52c2bc:
    // 0x52c2bc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x52c2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_52c2c0:
    // 0x52c2c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x52c2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52c2c4:
    // 0x52c2c4: 0x320f809  jalr        $t9
label_52c2c8:
    if (ctx->pc == 0x52C2C8u) {
        ctx->pc = 0x52C2C8u;
            // 0x52c2c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52C2CCu;
        goto label_52c2cc;
    }
    ctx->pc = 0x52C2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52C2CCu);
        ctx->pc = 0x52C2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C2C4u;
            // 0x52c2c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52C2CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52C2CCu; }
            if (ctx->pc != 0x52C2CCu) { return; }
        }
        }
    }
    ctx->pc = 0x52C2CCu;
label_52c2cc:
    // 0x52c2cc: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x52c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_52c2d0:
    // 0x52c2d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x52c2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_52c2d4:
    // 0x52c2d4: 0xc0aec9c  jal         func_2BB270
label_52c2d8:
    if (ctx->pc == 0x52C2D8u) {
        ctx->pc = 0x52C2D8u;
            // 0x52c2d8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x52C2DCu;
        goto label_52c2dc;
    }
    ctx->pc = 0x52C2D4u;
    SET_GPR_U32(ctx, 31, 0x52C2DCu);
    ctx->pc = 0x52C2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C2D4u;
            // 0x52c2d8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C2DCu; }
        if (ctx->pc != 0x52C2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C2DCu; }
        if (ctx->pc != 0x52C2DCu) { return; }
    }
    ctx->pc = 0x52C2DCu;
label_52c2dc:
    // 0x52c2dc: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x52c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_52c2e0:
    // 0x52c2e0: 0xc0aec88  jal         func_2BB220
label_52c2e4:
    if (ctx->pc == 0x52C2E4u) {
        ctx->pc = 0x52C2E4u;
            // 0x52c2e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x52C2E8u;
        goto label_52c2e8;
    }
    ctx->pc = 0x52C2E0u;
    SET_GPR_U32(ctx, 31, 0x52C2E8u);
    ctx->pc = 0x52C2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C2E0u;
            // 0x52c2e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C2E8u; }
        if (ctx->pc != 0x52C2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C2E8u; }
        if (ctx->pc != 0x52C2E8u) { return; }
    }
    ctx->pc = 0x52C2E8u;
label_52c2e8:
    // 0x52c2e8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x52c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_52c2ec:
    // 0x52c2ec: 0xc0aec0c  jal         func_2BB030
label_52c2f0:
    if (ctx->pc == 0x52C2F0u) {
        ctx->pc = 0x52C2F0u;
            // 0x52c2f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C2F4u;
        goto label_52c2f4;
    }
    ctx->pc = 0x52C2ECu;
    SET_GPR_U32(ctx, 31, 0x52C2F4u);
    ctx->pc = 0x52C2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C2ECu;
            // 0x52c2f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C2F4u; }
        if (ctx->pc != 0x52C2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C2F4u; }
        if (ctx->pc != 0x52C2F4u) { return; }
    }
    ctx->pc = 0x52C2F4u;
label_52c2f4:
    // 0x52c2f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52c2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52c2f8:
    // 0x52c2f8: 0xc0aeaa8  jal         func_2BAAA0
label_52c2fc:
    if (ctx->pc == 0x52C2FCu) {
        ctx->pc = 0x52C2FCu;
            // 0x52c2fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C300u;
        goto label_52c300;
    }
    ctx->pc = 0x52C2F8u;
    SET_GPR_U32(ctx, 31, 0x52C300u);
    ctx->pc = 0x52C2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C2F8u;
            // 0x52c2fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C300u; }
        if (ctx->pc != 0x52C300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C300u; }
        if (ctx->pc != 0x52C300u) { return; }
    }
    ctx->pc = 0x52C300u;
label_52c300:
    // 0x52c300: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x52c300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_52c304:
    // 0x52c304: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52c304u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_52c308:
    // 0x52c308: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52c30c:
    if (ctx->pc == 0x52C30Cu) {
        ctx->pc = 0x52C30Cu;
            // 0x52c30c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C310u;
        goto label_52c310;
    }
    ctx->pc = 0x52C308u;
    {
        const bool branch_taken_0x52c308 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52c308) {
            ctx->pc = 0x52C30Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C308u;
            // 0x52c30c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C31Cu;
            goto label_52c31c;
        }
    }
    ctx->pc = 0x52C310u;
label_52c310:
    // 0x52c310: 0xc0400a8  jal         func_1002A0
label_52c314:
    if (ctx->pc == 0x52C314u) {
        ctx->pc = 0x52C314u;
            // 0x52c314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C318u;
        goto label_52c318;
    }
    ctx->pc = 0x52C310u;
    SET_GPR_U32(ctx, 31, 0x52C318u);
    ctx->pc = 0x52C314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C310u;
            // 0x52c314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C318u; }
        if (ctx->pc != 0x52C318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C318u; }
        if (ctx->pc != 0x52C318u) { return; }
    }
    ctx->pc = 0x52C318u;
label_52c318:
    // 0x52c318: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52c318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52c31c:
    // 0x52c31c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52c31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52c320:
    // 0x52c320: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52c320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52c324:
    // 0x52c324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52c324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52c328:
    // 0x52c328: 0x3e00008  jr          $ra
label_52c32c:
    if (ctx->pc == 0x52C32Cu) {
        ctx->pc = 0x52C32Cu;
            // 0x52c32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52C330u;
        goto label_52c330;
    }
    ctx->pc = 0x52C328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52C32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C328u;
            // 0x52c32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52C330u;
label_52c330:
    // 0x52c330: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x52c330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_52c334:
    // 0x52c334: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x52c334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_52c338:
    // 0x52c338: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x52c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_52c33c:
    // 0x52c33c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x52c33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_52c340:
    // 0x52c340: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x52c340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_52c344:
    // 0x52c344: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x52c344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_52c348:
    // 0x52c348: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x52c348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52c34c:
    // 0x52c34c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52c34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52c350:
    // 0x52c350: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52c350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52c354:
    // 0x52c354: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52c354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52c358:
    // 0x52c358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52c358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52c35c:
    // 0x52c35c: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x52c35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_52c360:
    // 0x52c360: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x52c360u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_52c364:
    // 0x52c364: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x52c364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52c368:
    // 0x52c368: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_52c36c:
    if (ctx->pc == 0x52C36Cu) {
        ctx->pc = 0x52C36Cu;
            // 0x52c36c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C370u;
        goto label_52c370;
    }
    ctx->pc = 0x52C368u;
    {
        const bool branch_taken_0x52c368 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x52C36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C368u;
            // 0x52c36c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c368) {
            ctx->pc = 0x52C3ACu;
            goto label_52c3ac;
        }
    }
    ctx->pc = 0x52C370u;
label_52c370:
    // 0x52c370: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x52c370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52c374:
    // 0x52c374: 0x50a30042  beql        $a1, $v1, . + 4 + (0x42 << 2)
label_52c378:
    if (ctx->pc == 0x52C378u) {
        ctx->pc = 0x52C378u;
            // 0x52c378: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x52C37Cu;
        goto label_52c37c;
    }
    ctx->pc = 0x52C374u;
    {
        const bool branch_taken_0x52c374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52c374) {
            ctx->pc = 0x52C378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C374u;
            // 0x52c378: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C480u;
            goto label_52c480;
        }
    }
    ctx->pc = 0x52C37Cu;
label_52c37c:
    // 0x52c37c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52c380:
    // 0x52c380: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_52c384:
    if (ctx->pc == 0x52C384u) {
        ctx->pc = 0x52C384u;
            // 0x52c384: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x52C388u;
        goto label_52c388;
    }
    ctx->pc = 0x52C380u;
    {
        const bool branch_taken_0x52c380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52c380) {
            ctx->pc = 0x52C384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C380u;
            // 0x52c384: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C390u;
            goto label_52c390;
        }
    }
    ctx->pc = 0x52C388u;
label_52c388:
    // 0x52c388: 0x1000003c  b           . + 4 + (0x3C << 2)
label_52c38c:
    if (ctx->pc == 0x52C38Cu) {
        ctx->pc = 0x52C390u;
        goto label_52c390;
    }
    ctx->pc = 0x52C388u;
    {
        const bool branch_taken_0x52c388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c388) {
            ctx->pc = 0x52C47Cu;
            goto label_52c47c;
        }
    }
    ctx->pc = 0x52C390u;
label_52c390:
    // 0x52c390: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x52c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_52c394:
    // 0x52c394: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x52c394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_52c398:
    // 0x52c398: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x52c398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_52c39c:
    // 0x52c39c: 0x320f809  jalr        $t9
label_52c3a0:
    if (ctx->pc == 0x52C3A0u) {
        ctx->pc = 0x52C3A0u;
            // 0x52c3a0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x52C3A4u;
        goto label_52c3a4;
    }
    ctx->pc = 0x52C39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52C3A4u);
        ctx->pc = 0x52C3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C39Cu;
            // 0x52c3a0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52C3A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52C3A4u; }
            if (ctx->pc != 0x52C3A4u) { return; }
        }
        }
    }
    ctx->pc = 0x52C3A4u;
label_52c3a4:
    // 0x52c3a4: 0x10000035  b           . + 4 + (0x35 << 2)
label_52c3a8:
    if (ctx->pc == 0x52C3A8u) {
        ctx->pc = 0x52C3ACu;
        goto label_52c3ac;
    }
    ctx->pc = 0x52C3A4u;
    {
        const bool branch_taken_0x52c3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c3a4) {
            ctx->pc = 0x52C47Cu;
            goto label_52c47c;
        }
    }
    ctx->pc = 0x52C3ACu;
label_52c3ac:
    // 0x52c3ac: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x52c3acu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_52c3b0:
    // 0x52c3b0: 0x12c00032  beqz        $s6, . + 4 + (0x32 << 2)
label_52c3b4:
    if (ctx->pc == 0x52C3B4u) {
        ctx->pc = 0x52C3B8u;
        goto label_52c3b8;
    }
    ctx->pc = 0x52C3B0u;
    {
        const bool branch_taken_0x52c3b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c3b0) {
            ctx->pc = 0x52C47Cu;
            goto label_52c47c;
        }
    }
    ctx->pc = 0x52C3B8u;
label_52c3b8:
    // 0x52c3b8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x52c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_52c3bc:
    // 0x52c3bc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x52c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_52c3c0:
    // 0x52c3c0: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x52c3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_52c3c4:
    // 0x52c3c4: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x52c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_52c3c8:
    // 0x52c3c8: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x52c3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_52c3cc:
    // 0x52c3cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52c3d0:
    // 0x52c3d0: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x52c3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_52c3d4:
    // 0x52c3d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52c3d8:
    // 0x52c3d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x52c3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_52c3dc:
    // 0x52c3dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x52c3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_52c3e0:
    // 0x52c3e0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x52c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52c3e4:
    // 0x52c3e4: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x52c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_52c3e8:
    // 0x52c3e8: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x52c3e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_52c3ec:
    // 0x52c3ec: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x52c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_52c3f0:
    // 0x52c3f0: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x52c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_52c3f4:
    // 0x52c3f4: 0xc04e738  jal         func_139CE0
label_52c3f8:
    if (ctx->pc == 0x52C3F8u) {
        ctx->pc = 0x52C3F8u;
            // 0x52c3f8: 0x26b40084  addiu       $s4, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->pc = 0x52C3FCu;
        goto label_52c3fc;
    }
    ctx->pc = 0x52C3F4u;
    SET_GPR_U32(ctx, 31, 0x52C3FCu);
    ctx->pc = 0x52C3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C3F4u;
            // 0x52c3f8: 0x26b40084  addiu       $s4, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C3FCu; }
        if (ctx->pc != 0x52C3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C3FCu; }
        if (ctx->pc != 0x52C3FCu) { return; }
    }
    ctx->pc = 0x52C3FCu;
label_52c3fc:
    // 0x52c3fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x52c3fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52c400:
    // 0x52c400: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x52c400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52c404:
    // 0x52c404: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x52c404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_52c408:
    // 0x52c408: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x52c408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52c40c:
    // 0x52c40c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x52c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_52c410:
    // 0x52c410: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x52c410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52c414:
    // 0x52c414: 0x24510060  addiu       $s1, $v0, 0x60
    ctx->pc = 0x52c414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_52c418:
    // 0x52c418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x52c418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52c41c:
    // 0x52c41c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x52c41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_52c420:
    // 0x52c420: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x52c420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_52c424:
    // 0x52c424: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x52c424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_52c428:
    // 0x52c428: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x52c428u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_52c42c:
    // 0x52c42c: 0xc14b40c  jal         func_52D030
label_52c430:
    if (ctx->pc == 0x52C430u) {
        ctx->pc = 0x52C430u;
            // 0x52c430: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x52C434u;
        goto label_52c434;
    }
    ctx->pc = 0x52C42Cu;
    SET_GPR_U32(ctx, 31, 0x52C434u);
    ctx->pc = 0x52C430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C42Cu;
            // 0x52c430: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52D030u;
    if (runtime->hasFunction(0x52D030u)) {
        auto targetFn = runtime->lookupFunction(0x52D030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C434u; }
        if (ctx->pc != 0x52C434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052D030_0x52d030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C434u; }
        if (ctx->pc != 0x52C434u) { return; }
    }
    ctx->pc = 0x52C434u;
label_52c434:
    // 0x52c434: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x52c434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_52c438:
    // 0x52c438: 0x1640fff7  bnez        $s2, . + 4 + (-0x9 << 2)
label_52c43c:
    if (ctx->pc == 0x52C43Cu) {
        ctx->pc = 0x52C43Cu;
            // 0x52c43c: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->pc = 0x52C440u;
        goto label_52c440;
    }
    ctx->pc = 0x52C438u;
    {
        const bool branch_taken_0x52c438 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x52C43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C438u;
            // 0x52c43c: 0x26310110  addiu       $s1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c438) {
            ctx->pc = 0x52C418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52c418;
        }
    }
    ctx->pc = 0x52C440u;
label_52c440:
    // 0x52c440: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x52c440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_52c444:
    // 0x52c444: 0x276182b  sltu        $v1, $s3, $s6
    ctx->pc = 0x52c444u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_52c448:
    // 0x52c448: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_52c44c:
    if (ctx->pc == 0x52C44Cu) {
        ctx->pc = 0x52C44Cu;
            // 0x52c44c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x52C450u;
        goto label_52c450;
    }
    ctx->pc = 0x52C448u;
    {
        const bool branch_taken_0x52c448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52C44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C448u;
            // 0x52c44c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c448) {
            ctx->pc = 0x52C404u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52c404;
        }
    }
    ctx->pc = 0x52C450u;
label_52c450:
    // 0x52c450: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52c450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52c454:
    // 0x52c454: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x52c454u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_52c458:
    // 0x52c458: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_52c45c:
    if (ctx->pc == 0x52C45Cu) {
        ctx->pc = 0x52C45Cu;
            // 0x52c45c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x52C460u;
        goto label_52c460;
    }
    ctx->pc = 0x52C458u;
    {
        const bool branch_taken_0x52c458 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x52C45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C458u;
            // 0x52c45c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c458) {
            ctx->pc = 0x52C47Cu;
            goto label_52c47c;
        }
    }
    ctx->pc = 0x52C460u;
label_52c460:
    // 0x52c460: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52c460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52c464:
    // 0x52c464: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52c464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52c468:
    // 0x52c468: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x52c468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_52c46c:
    // 0x52c46c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x52c46cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_52c470:
    // 0x52c470: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x52c470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_52c474:
    // 0x52c474: 0xc055990  jal         func_156640
label_52c478:
    if (ctx->pc == 0x52C478u) {
        ctx->pc = 0x52C478u;
            // 0x52c478: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C47Cu;
        goto label_52c47c;
    }
    ctx->pc = 0x52C474u;
    SET_GPR_U32(ctx, 31, 0x52C47Cu);
    ctx->pc = 0x52C478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C474u;
            // 0x52c478: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C47Cu; }
        if (ctx->pc != 0x52C47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C47Cu; }
        if (ctx->pc != 0x52C47Cu) { return; }
    }
    ctx->pc = 0x52C47Cu;
label_52c47c:
    // 0x52c47c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x52c47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_52c480:
    // 0x52c480: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x52c480u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_52c484:
    // 0x52c484: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x52c484u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_52c488:
    // 0x52c488: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x52c488u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_52c48c:
    // 0x52c48c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x52c48cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_52c490:
    // 0x52c490: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52c490u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52c494:
    // 0x52c494: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52c494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52c498:
    // 0x52c498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52c498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52c49c:
    // 0x52c49c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52c49cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52c4a0:
    // 0x52c4a0: 0x3e00008  jr          $ra
label_52c4a4:
    if (ctx->pc == 0x52C4A4u) {
        ctx->pc = 0x52C4A4u;
            // 0x52c4a4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x52C4A8u;
        goto label_52c4a8;
    }
    ctx->pc = 0x52C4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52C4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C4A0u;
            // 0x52c4a4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52C4A8u;
label_52c4a8:
    // 0x52c4a8: 0x0  nop
    ctx->pc = 0x52c4a8u;
    // NOP
label_52c4ac:
    // 0x52c4ac: 0x0  nop
    ctx->pc = 0x52c4acu;
    // NOP
label_52c4b0:
    // 0x52c4b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x52c4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_52c4b4:
    // 0x52c4b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x52c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52c4b8:
    // 0x52c4b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x52c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_52c4bc:
    // 0x52c4bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x52c4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_52c4c0:
    // 0x52c4c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x52c4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52c4c4:
    // 0x52c4c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52c4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52c4c8:
    // 0x52c4c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52c4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52c4cc:
    // 0x52c4cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52c4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52c4d0:
    // 0x52c4d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52c4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52c4d4:
    // 0x52c4d4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x52c4d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_52c4d8:
    // 0x52c4d8: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_52c4dc:
    if (ctx->pc == 0x52C4DCu) {
        ctx->pc = 0x52C4DCu;
            // 0x52c4dc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C4E0u;
        goto label_52c4e0;
    }
    ctx->pc = 0x52C4D8u;
    {
        const bool branch_taken_0x52c4d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x52C4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C4D8u;
            // 0x52c4dc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c4d8) {
            ctx->pc = 0x52C50Cu;
            goto label_52c50c;
        }
    }
    ctx->pc = 0x52C4E0u;
label_52c4e0:
    // 0x52c4e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x52c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_52c4e4:
    // 0x52c4e4: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_52c4e8:
    if (ctx->pc == 0x52C4E8u) {
        ctx->pc = 0x52C4E8u;
            // 0x52c4e8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x52C4ECu;
        goto label_52c4ec;
    }
    ctx->pc = 0x52C4E4u;
    {
        const bool branch_taken_0x52c4e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52c4e4) {
            ctx->pc = 0x52C4E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C4E4u;
            // 0x52c4e8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C500u;
            goto label_52c500;
        }
    }
    ctx->pc = 0x52C4ECu;
label_52c4ec:
    // 0x52c4ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52c4f0:
    // 0x52c4f0: 0x10a30039  beq         $a1, $v1, . + 4 + (0x39 << 2)
label_52c4f4:
    if (ctx->pc == 0x52C4F4u) {
        ctx->pc = 0x52C4F8u;
        goto label_52c4f8;
    }
    ctx->pc = 0x52C4F0u;
    {
        const bool branch_taken_0x52c4f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52c4f0) {
            ctx->pc = 0x52C5D8u;
            goto label_52c5d8;
        }
    }
    ctx->pc = 0x52C4F8u;
label_52c4f8:
    // 0x52c4f8: 0x10000037  b           . + 4 + (0x37 << 2)
label_52c4fc:
    if (ctx->pc == 0x52C4FCu) {
        ctx->pc = 0x52C500u;
        goto label_52c500;
    }
    ctx->pc = 0x52C4F8u;
    {
        const bool branch_taken_0x52c4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c4f8) {
            ctx->pc = 0x52C5D8u;
            goto label_52c5d8;
        }
    }
    ctx->pc = 0x52C500u;
label_52c500:
    // 0x52c500: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x52c500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_52c504:
    // 0x52c504: 0x320f809  jalr        $t9
label_52c508:
    if (ctx->pc == 0x52C508u) {
        ctx->pc = 0x52C50Cu;
        goto label_52c50c;
    }
    ctx->pc = 0x52C504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52C50Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x52C50Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52C50Cu; }
            if (ctx->pc != 0x52C50Cu) { return; }
        }
        }
    }
    ctx->pc = 0x52C50Cu;
label_52c50c:
    // 0x52c50c: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x52c50cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_52c510:
    // 0x52c510: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_52c514:
    if (ctx->pc == 0x52C514u) {
        ctx->pc = 0x52C518u;
        goto label_52c518;
    }
    ctx->pc = 0x52C510u;
    {
        const bool branch_taken_0x52c510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c510) {
            ctx->pc = 0x52C5D8u;
            goto label_52c5d8;
        }
    }
    ctx->pc = 0x52C518u;
label_52c518:
    // 0x52c518: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x52c518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52c51c:
    // 0x52c51c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x52c51cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52c520:
    // 0x52c520: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x52c520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_52c524:
    // 0x52c524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x52c524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52c528:
    // 0x52c528: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x52c528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_52c52c:
    // 0x52c52c: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x52c52cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_52c530:
    // 0x52c530: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x52c530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_52c534:
    // 0x52c534: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_52c538:
    if (ctx->pc == 0x52C538u) {
        ctx->pc = 0x52C53Cu;
        goto label_52c53c;
    }
    ctx->pc = 0x52C534u;
    {
        const bool branch_taken_0x52c534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x52c534) {
            ctx->pc = 0x52C558u;
            goto label_52c558;
        }
    }
    ctx->pc = 0x52C53Cu;
label_52c53c:
    // 0x52c53c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_52c540:
    if (ctx->pc == 0x52C540u) {
        ctx->pc = 0x52C544u;
        goto label_52c544;
    }
    ctx->pc = 0x52C53Cu;
    {
        const bool branch_taken_0x52c53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c53c) {
            ctx->pc = 0x52C550u;
            goto label_52c550;
        }
    }
    ctx->pc = 0x52C544u;
label_52c544:
    // 0x52c544: 0x10000004  b           . + 4 + (0x4 << 2)
label_52c548:
    if (ctx->pc == 0x52C548u) {
        ctx->pc = 0x52C54Cu;
        goto label_52c54c;
    }
    ctx->pc = 0x52C544u;
    {
        const bool branch_taken_0x52c544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c544) {
            ctx->pc = 0x52C558u;
            goto label_52c558;
        }
    }
    ctx->pc = 0x52C54Cu;
label_52c54c:
    // 0x52c54c: 0x0  nop
    ctx->pc = 0x52c54cu;
    // NOP
label_52c550:
    // 0x52c550: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x52c550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_52c554:
    // 0x52c554: 0x0  nop
    ctx->pc = 0x52c554u;
    // NOP
label_52c558:
    // 0x52c558: 0xc64204a0  lwc1        $f2, 0x4A0($s2)
    ctx->pc = 0x52c558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_52c55c:
    // 0x52c55c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x52c55cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_52c560:
    // 0x52c560: 0x0  nop
    ctx->pc = 0x52c560u;
    // NOP
label_52c564:
    // 0x52c564: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x52c564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52c568:
    // 0x52c568: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_52c56c:
    if (ctx->pc == 0x52C56Cu) {
        ctx->pc = 0x52C570u;
        goto label_52c570;
    }
    ctx->pc = 0x52C568u;
    {
        const bool branch_taken_0x52c568 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x52c568) {
            ctx->pc = 0x52C5A0u;
            goto label_52c5a0;
        }
    }
    ctx->pc = 0x52C570u;
label_52c570:
    // 0x52c570: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x52c570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_52c574:
    // 0x52c574: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x52c574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_52c578:
    // 0x52c578: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x52c578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52c57c:
    // 0x52c57c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x52c57cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_52c580:
    // 0x52c580: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x52c580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_52c584:
    // 0x52c584: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_52c588:
    if (ctx->pc == 0x52C588u) {
        ctx->pc = 0x52C588u;
            // 0x52c588: 0xe64004a0  swc1        $f0, 0x4A0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1184), bits); }
        ctx->pc = 0x52C58Cu;
        goto label_52c58c;
    }
    ctx->pc = 0x52C584u;
    {
        const bool branch_taken_0x52c584 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x52C588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C584u;
            // 0x52c588: 0xe64004a0  swc1        $f0, 0x4A0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c584) {
            ctx->pc = 0x52C5A0u;
            goto label_52c5a0;
        }
    }
    ctx->pc = 0x52C58Cu;
label_52c58c:
    // 0x52c58c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x52c58cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_52c590:
    // 0x52c590: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x52c590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_52c594:
    // 0x52c594: 0x320f809  jalr        $t9
label_52c598:
    if (ctx->pc == 0x52C598u) {
        ctx->pc = 0x52C598u;
            // 0x52c598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C59Cu;
        goto label_52c59c;
    }
    ctx->pc = 0x52C594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52C59Cu);
        ctx->pc = 0x52C598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C594u;
            // 0x52c598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52C59Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52C59Cu; }
            if (ctx->pc != 0x52C59Cu) { return; }
        }
        }
    }
    ctx->pc = 0x52C59Cu;
label_52c59c:
    // 0x52c59c: 0x0  nop
    ctx->pc = 0x52c59cu;
    // NOP
label_52c5a0:
    // 0x52c5a0: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x52c5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_52c5a4:
    // 0x52c5a4: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x52c5a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52c5a8:
    // 0x52c5a8: 0xc0e3658  jal         func_38D960
label_52c5ac:
    if (ctx->pc == 0x52C5ACu) {
        ctx->pc = 0x52C5ACu;
            // 0x52c5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C5B0u;
        goto label_52c5b0;
    }
    ctx->pc = 0x52C5A8u;
    SET_GPR_U32(ctx, 31, 0x52C5B0u);
    ctx->pc = 0x52C5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C5A8u;
            // 0x52c5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C5B0u; }
        if (ctx->pc != 0x52C5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C5B0u; }
        if (ctx->pc != 0x52C5B0u) { return; }
    }
    ctx->pc = 0x52C5B0u;
label_52c5b0:
    // 0x52c5b0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x52c5b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_52c5b4:
    // 0x52c5b4: 0x26520110  addiu       $s2, $s2, 0x110
    ctx->pc = 0x52c5b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_52c5b8:
    // 0x52c5b8: 0x0  nop
    ctx->pc = 0x52c5b8u;
    // NOP
label_52c5bc:
    // 0x52c5bc: 0x16a0fffa  bnez        $s5, . + 4 + (-0x6 << 2)
label_52c5c0:
    if (ctx->pc == 0x52C5C0u) {
        ctx->pc = 0x52C5C4u;
        goto label_52c5c4;
    }
    ctx->pc = 0x52C5BCu;
    {
        const bool branch_taken_0x52c5bc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x52c5bc) {
            ctx->pc = 0x52C5A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52c5a8;
        }
    }
    ctx->pc = 0x52C5C4u;
label_52c5c4:
    // 0x52c5c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x52c5c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_52c5c8:
    // 0x52c5c8: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x52c5c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_52c5cc:
    // 0x52c5cc: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_52c5d0:
    if (ctx->pc == 0x52C5D0u) {
        ctx->pc = 0x52C5D0u;
            // 0x52c5d0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x52C5D4u;
        goto label_52c5d4;
    }
    ctx->pc = 0x52C5CCu;
    {
        const bool branch_taken_0x52c5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52C5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C5CCu;
            // 0x52c5d0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c5cc) {
            ctx->pc = 0x52C520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52c520;
        }
    }
    ctx->pc = 0x52C5D4u;
label_52c5d4:
    // 0x52c5d4: 0x0  nop
    ctx->pc = 0x52c5d4u;
    // NOP
label_52c5d8:
    // 0x52c5d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x52c5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_52c5dc:
    // 0x52c5dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x52c5dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_52c5e0:
    // 0x52c5e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x52c5e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_52c5e4:
    // 0x52c5e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52c5e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52c5e8:
    // 0x52c5e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52c5e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52c5ec:
    // 0x52c5ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52c5ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52c5f0:
    // 0x52c5f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52c5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52c5f4:
    // 0x52c5f4: 0x3e00008  jr          $ra
label_52c5f8:
    if (ctx->pc == 0x52C5F8u) {
        ctx->pc = 0x52C5F8u;
            // 0x52c5f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x52C5FCu;
        goto label_52c5fc;
    }
    ctx->pc = 0x52C5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52C5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C5F4u;
            // 0x52c5f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52C5FCu;
label_52c5fc:
    // 0x52c5fc: 0x0  nop
    ctx->pc = 0x52c5fcu;
    // NOP
label_52c600:
    // 0x52c600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x52c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_52c604:
    // 0x52c604: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x52c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_52c608:
    // 0x52c608: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52c608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52c60c:
    // 0x52c60c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52c60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52c610:
    // 0x52c610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52c610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52c614:
    // 0x52c614: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52c614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52c618:
    // 0x52c618: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x52c618u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52c61c:
    // 0x52c61c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_52c620:
    if (ctx->pc == 0x52C620u) {
        ctx->pc = 0x52C620u;
            // 0x52c620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52C624u;
        goto label_52c624;
    }
    ctx->pc = 0x52C61Cu;
    {
        const bool branch_taken_0x52c61c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x52C620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C61Cu;
            // 0x52c620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c61c) {
            ctx->pc = 0x52C658u;
            goto label_52c658;
        }
    }
    ctx->pc = 0x52C624u;
label_52c624:
    // 0x52c624: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x52c624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52c628:
    // 0x52c628: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x52c628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52c62c:
    // 0x52c62c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x52c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_52c630:
    // 0x52c630: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x52c630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_52c634:
    // 0x52c634: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x52c634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52c638:
    // 0x52c638: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52c638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52c63c:
    // 0x52c63c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x52c63cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_52c640:
    // 0x52c640: 0x320f809  jalr        $t9
label_52c644:
    if (ctx->pc == 0x52C644u) {
        ctx->pc = 0x52C648u;
        goto label_52c648;
    }
    ctx->pc = 0x52C640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52C648u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x52C648u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52C648u; }
            if (ctx->pc != 0x52C648u) { return; }
        }
        }
    }
    ctx->pc = 0x52C648u;
label_52c648:
    // 0x52c648: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x52c648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_52c64c:
    // 0x52c64c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x52c64cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_52c650:
    // 0x52c650: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_52c654:
    if (ctx->pc == 0x52C654u) {
        ctx->pc = 0x52C654u;
            // 0x52c654: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x52C658u;
        goto label_52c658;
    }
    ctx->pc = 0x52C650u;
    {
        const bool branch_taken_0x52c650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52C654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C650u;
            // 0x52c654: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c650) {
            ctx->pc = 0x52C62Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52c62c;
        }
    }
    ctx->pc = 0x52C658u;
label_52c658:
    // 0x52c658: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x52c658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_52c65c:
    // 0x52c65c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52c65cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52c660:
    // 0x52c660: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52c660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52c664:
    // 0x52c664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52c664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52c668:
    // 0x52c668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52c668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52c66c:
    // 0x52c66c: 0x3e00008  jr          $ra
label_52c670:
    if (ctx->pc == 0x52C670u) {
        ctx->pc = 0x52C670u;
            // 0x52c670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x52C674u;
        goto label_52c674;
    }
    ctx->pc = 0x52C66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52C670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C66Cu;
            // 0x52c670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52C674u;
label_52c674:
    // 0x52c674: 0x0  nop
    ctx->pc = 0x52c674u;
    // NOP
label_52c678:
    // 0x52c678: 0x0  nop
    ctx->pc = 0x52c678u;
    // NOP
label_52c67c:
    // 0x52c67c: 0x0  nop
    ctx->pc = 0x52c67cu;
    // NOP
}
