#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036BF10
// Address: 0x36bf10 - 0x36d220
void sub_0036BF10_0x36bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BF10_0x36bf10");
#endif

    switch (ctx->pc) {
        case 0x36bf10u: goto label_36bf10;
        case 0x36bf14u: goto label_36bf14;
        case 0x36bf18u: goto label_36bf18;
        case 0x36bf1cu: goto label_36bf1c;
        case 0x36bf20u: goto label_36bf20;
        case 0x36bf24u: goto label_36bf24;
        case 0x36bf28u: goto label_36bf28;
        case 0x36bf2cu: goto label_36bf2c;
        case 0x36bf30u: goto label_36bf30;
        case 0x36bf34u: goto label_36bf34;
        case 0x36bf38u: goto label_36bf38;
        case 0x36bf3cu: goto label_36bf3c;
        case 0x36bf40u: goto label_36bf40;
        case 0x36bf44u: goto label_36bf44;
        case 0x36bf48u: goto label_36bf48;
        case 0x36bf4cu: goto label_36bf4c;
        case 0x36bf50u: goto label_36bf50;
        case 0x36bf54u: goto label_36bf54;
        case 0x36bf58u: goto label_36bf58;
        case 0x36bf5cu: goto label_36bf5c;
        case 0x36bf60u: goto label_36bf60;
        case 0x36bf64u: goto label_36bf64;
        case 0x36bf68u: goto label_36bf68;
        case 0x36bf6cu: goto label_36bf6c;
        case 0x36bf70u: goto label_36bf70;
        case 0x36bf74u: goto label_36bf74;
        case 0x36bf78u: goto label_36bf78;
        case 0x36bf7cu: goto label_36bf7c;
        case 0x36bf80u: goto label_36bf80;
        case 0x36bf84u: goto label_36bf84;
        case 0x36bf88u: goto label_36bf88;
        case 0x36bf8cu: goto label_36bf8c;
        case 0x36bf90u: goto label_36bf90;
        case 0x36bf94u: goto label_36bf94;
        case 0x36bf98u: goto label_36bf98;
        case 0x36bf9cu: goto label_36bf9c;
        case 0x36bfa0u: goto label_36bfa0;
        case 0x36bfa4u: goto label_36bfa4;
        case 0x36bfa8u: goto label_36bfa8;
        case 0x36bfacu: goto label_36bfac;
        case 0x36bfb0u: goto label_36bfb0;
        case 0x36bfb4u: goto label_36bfb4;
        case 0x36bfb8u: goto label_36bfb8;
        case 0x36bfbcu: goto label_36bfbc;
        case 0x36bfc0u: goto label_36bfc0;
        case 0x36bfc4u: goto label_36bfc4;
        case 0x36bfc8u: goto label_36bfc8;
        case 0x36bfccu: goto label_36bfcc;
        case 0x36bfd0u: goto label_36bfd0;
        case 0x36bfd4u: goto label_36bfd4;
        case 0x36bfd8u: goto label_36bfd8;
        case 0x36bfdcu: goto label_36bfdc;
        case 0x36bfe0u: goto label_36bfe0;
        case 0x36bfe4u: goto label_36bfe4;
        case 0x36bfe8u: goto label_36bfe8;
        case 0x36bfecu: goto label_36bfec;
        case 0x36bff0u: goto label_36bff0;
        case 0x36bff4u: goto label_36bff4;
        case 0x36bff8u: goto label_36bff8;
        case 0x36bffcu: goto label_36bffc;
        case 0x36c000u: goto label_36c000;
        case 0x36c004u: goto label_36c004;
        case 0x36c008u: goto label_36c008;
        case 0x36c00cu: goto label_36c00c;
        case 0x36c010u: goto label_36c010;
        case 0x36c014u: goto label_36c014;
        case 0x36c018u: goto label_36c018;
        case 0x36c01cu: goto label_36c01c;
        case 0x36c020u: goto label_36c020;
        case 0x36c024u: goto label_36c024;
        case 0x36c028u: goto label_36c028;
        case 0x36c02cu: goto label_36c02c;
        case 0x36c030u: goto label_36c030;
        case 0x36c034u: goto label_36c034;
        case 0x36c038u: goto label_36c038;
        case 0x36c03cu: goto label_36c03c;
        case 0x36c040u: goto label_36c040;
        case 0x36c044u: goto label_36c044;
        case 0x36c048u: goto label_36c048;
        case 0x36c04cu: goto label_36c04c;
        case 0x36c050u: goto label_36c050;
        case 0x36c054u: goto label_36c054;
        case 0x36c058u: goto label_36c058;
        case 0x36c05cu: goto label_36c05c;
        case 0x36c060u: goto label_36c060;
        case 0x36c064u: goto label_36c064;
        case 0x36c068u: goto label_36c068;
        case 0x36c06cu: goto label_36c06c;
        case 0x36c070u: goto label_36c070;
        case 0x36c074u: goto label_36c074;
        case 0x36c078u: goto label_36c078;
        case 0x36c07cu: goto label_36c07c;
        case 0x36c080u: goto label_36c080;
        case 0x36c084u: goto label_36c084;
        case 0x36c088u: goto label_36c088;
        case 0x36c08cu: goto label_36c08c;
        case 0x36c090u: goto label_36c090;
        case 0x36c094u: goto label_36c094;
        case 0x36c098u: goto label_36c098;
        case 0x36c09cu: goto label_36c09c;
        case 0x36c0a0u: goto label_36c0a0;
        case 0x36c0a4u: goto label_36c0a4;
        case 0x36c0a8u: goto label_36c0a8;
        case 0x36c0acu: goto label_36c0ac;
        case 0x36c0b0u: goto label_36c0b0;
        case 0x36c0b4u: goto label_36c0b4;
        case 0x36c0b8u: goto label_36c0b8;
        case 0x36c0bcu: goto label_36c0bc;
        case 0x36c0c0u: goto label_36c0c0;
        case 0x36c0c4u: goto label_36c0c4;
        case 0x36c0c8u: goto label_36c0c8;
        case 0x36c0ccu: goto label_36c0cc;
        case 0x36c0d0u: goto label_36c0d0;
        case 0x36c0d4u: goto label_36c0d4;
        case 0x36c0d8u: goto label_36c0d8;
        case 0x36c0dcu: goto label_36c0dc;
        case 0x36c0e0u: goto label_36c0e0;
        case 0x36c0e4u: goto label_36c0e4;
        case 0x36c0e8u: goto label_36c0e8;
        case 0x36c0ecu: goto label_36c0ec;
        case 0x36c0f0u: goto label_36c0f0;
        case 0x36c0f4u: goto label_36c0f4;
        case 0x36c0f8u: goto label_36c0f8;
        case 0x36c0fcu: goto label_36c0fc;
        case 0x36c100u: goto label_36c100;
        case 0x36c104u: goto label_36c104;
        case 0x36c108u: goto label_36c108;
        case 0x36c10cu: goto label_36c10c;
        case 0x36c110u: goto label_36c110;
        case 0x36c114u: goto label_36c114;
        case 0x36c118u: goto label_36c118;
        case 0x36c11cu: goto label_36c11c;
        case 0x36c120u: goto label_36c120;
        case 0x36c124u: goto label_36c124;
        case 0x36c128u: goto label_36c128;
        case 0x36c12cu: goto label_36c12c;
        case 0x36c130u: goto label_36c130;
        case 0x36c134u: goto label_36c134;
        case 0x36c138u: goto label_36c138;
        case 0x36c13cu: goto label_36c13c;
        case 0x36c140u: goto label_36c140;
        case 0x36c144u: goto label_36c144;
        case 0x36c148u: goto label_36c148;
        case 0x36c14cu: goto label_36c14c;
        case 0x36c150u: goto label_36c150;
        case 0x36c154u: goto label_36c154;
        case 0x36c158u: goto label_36c158;
        case 0x36c15cu: goto label_36c15c;
        case 0x36c160u: goto label_36c160;
        case 0x36c164u: goto label_36c164;
        case 0x36c168u: goto label_36c168;
        case 0x36c16cu: goto label_36c16c;
        case 0x36c170u: goto label_36c170;
        case 0x36c174u: goto label_36c174;
        case 0x36c178u: goto label_36c178;
        case 0x36c17cu: goto label_36c17c;
        case 0x36c180u: goto label_36c180;
        case 0x36c184u: goto label_36c184;
        case 0x36c188u: goto label_36c188;
        case 0x36c18cu: goto label_36c18c;
        case 0x36c190u: goto label_36c190;
        case 0x36c194u: goto label_36c194;
        case 0x36c198u: goto label_36c198;
        case 0x36c19cu: goto label_36c19c;
        case 0x36c1a0u: goto label_36c1a0;
        case 0x36c1a4u: goto label_36c1a4;
        case 0x36c1a8u: goto label_36c1a8;
        case 0x36c1acu: goto label_36c1ac;
        case 0x36c1b0u: goto label_36c1b0;
        case 0x36c1b4u: goto label_36c1b4;
        case 0x36c1b8u: goto label_36c1b8;
        case 0x36c1bcu: goto label_36c1bc;
        case 0x36c1c0u: goto label_36c1c0;
        case 0x36c1c4u: goto label_36c1c4;
        case 0x36c1c8u: goto label_36c1c8;
        case 0x36c1ccu: goto label_36c1cc;
        case 0x36c1d0u: goto label_36c1d0;
        case 0x36c1d4u: goto label_36c1d4;
        case 0x36c1d8u: goto label_36c1d8;
        case 0x36c1dcu: goto label_36c1dc;
        case 0x36c1e0u: goto label_36c1e0;
        case 0x36c1e4u: goto label_36c1e4;
        case 0x36c1e8u: goto label_36c1e8;
        case 0x36c1ecu: goto label_36c1ec;
        case 0x36c1f0u: goto label_36c1f0;
        case 0x36c1f4u: goto label_36c1f4;
        case 0x36c1f8u: goto label_36c1f8;
        case 0x36c1fcu: goto label_36c1fc;
        case 0x36c200u: goto label_36c200;
        case 0x36c204u: goto label_36c204;
        case 0x36c208u: goto label_36c208;
        case 0x36c20cu: goto label_36c20c;
        case 0x36c210u: goto label_36c210;
        case 0x36c214u: goto label_36c214;
        case 0x36c218u: goto label_36c218;
        case 0x36c21cu: goto label_36c21c;
        case 0x36c220u: goto label_36c220;
        case 0x36c224u: goto label_36c224;
        case 0x36c228u: goto label_36c228;
        case 0x36c22cu: goto label_36c22c;
        case 0x36c230u: goto label_36c230;
        case 0x36c234u: goto label_36c234;
        case 0x36c238u: goto label_36c238;
        case 0x36c23cu: goto label_36c23c;
        case 0x36c240u: goto label_36c240;
        case 0x36c244u: goto label_36c244;
        case 0x36c248u: goto label_36c248;
        case 0x36c24cu: goto label_36c24c;
        case 0x36c250u: goto label_36c250;
        case 0x36c254u: goto label_36c254;
        case 0x36c258u: goto label_36c258;
        case 0x36c25cu: goto label_36c25c;
        case 0x36c260u: goto label_36c260;
        case 0x36c264u: goto label_36c264;
        case 0x36c268u: goto label_36c268;
        case 0x36c26cu: goto label_36c26c;
        case 0x36c270u: goto label_36c270;
        case 0x36c274u: goto label_36c274;
        case 0x36c278u: goto label_36c278;
        case 0x36c27cu: goto label_36c27c;
        case 0x36c280u: goto label_36c280;
        case 0x36c284u: goto label_36c284;
        case 0x36c288u: goto label_36c288;
        case 0x36c28cu: goto label_36c28c;
        case 0x36c290u: goto label_36c290;
        case 0x36c294u: goto label_36c294;
        case 0x36c298u: goto label_36c298;
        case 0x36c29cu: goto label_36c29c;
        case 0x36c2a0u: goto label_36c2a0;
        case 0x36c2a4u: goto label_36c2a4;
        case 0x36c2a8u: goto label_36c2a8;
        case 0x36c2acu: goto label_36c2ac;
        case 0x36c2b0u: goto label_36c2b0;
        case 0x36c2b4u: goto label_36c2b4;
        case 0x36c2b8u: goto label_36c2b8;
        case 0x36c2bcu: goto label_36c2bc;
        case 0x36c2c0u: goto label_36c2c0;
        case 0x36c2c4u: goto label_36c2c4;
        case 0x36c2c8u: goto label_36c2c8;
        case 0x36c2ccu: goto label_36c2cc;
        case 0x36c2d0u: goto label_36c2d0;
        case 0x36c2d4u: goto label_36c2d4;
        case 0x36c2d8u: goto label_36c2d8;
        case 0x36c2dcu: goto label_36c2dc;
        case 0x36c2e0u: goto label_36c2e0;
        case 0x36c2e4u: goto label_36c2e4;
        case 0x36c2e8u: goto label_36c2e8;
        case 0x36c2ecu: goto label_36c2ec;
        case 0x36c2f0u: goto label_36c2f0;
        case 0x36c2f4u: goto label_36c2f4;
        case 0x36c2f8u: goto label_36c2f8;
        case 0x36c2fcu: goto label_36c2fc;
        case 0x36c300u: goto label_36c300;
        case 0x36c304u: goto label_36c304;
        case 0x36c308u: goto label_36c308;
        case 0x36c30cu: goto label_36c30c;
        case 0x36c310u: goto label_36c310;
        case 0x36c314u: goto label_36c314;
        case 0x36c318u: goto label_36c318;
        case 0x36c31cu: goto label_36c31c;
        case 0x36c320u: goto label_36c320;
        case 0x36c324u: goto label_36c324;
        case 0x36c328u: goto label_36c328;
        case 0x36c32cu: goto label_36c32c;
        case 0x36c330u: goto label_36c330;
        case 0x36c334u: goto label_36c334;
        case 0x36c338u: goto label_36c338;
        case 0x36c33cu: goto label_36c33c;
        case 0x36c340u: goto label_36c340;
        case 0x36c344u: goto label_36c344;
        case 0x36c348u: goto label_36c348;
        case 0x36c34cu: goto label_36c34c;
        case 0x36c350u: goto label_36c350;
        case 0x36c354u: goto label_36c354;
        case 0x36c358u: goto label_36c358;
        case 0x36c35cu: goto label_36c35c;
        case 0x36c360u: goto label_36c360;
        case 0x36c364u: goto label_36c364;
        case 0x36c368u: goto label_36c368;
        case 0x36c36cu: goto label_36c36c;
        case 0x36c370u: goto label_36c370;
        case 0x36c374u: goto label_36c374;
        case 0x36c378u: goto label_36c378;
        case 0x36c37cu: goto label_36c37c;
        case 0x36c380u: goto label_36c380;
        case 0x36c384u: goto label_36c384;
        case 0x36c388u: goto label_36c388;
        case 0x36c38cu: goto label_36c38c;
        case 0x36c390u: goto label_36c390;
        case 0x36c394u: goto label_36c394;
        case 0x36c398u: goto label_36c398;
        case 0x36c39cu: goto label_36c39c;
        case 0x36c3a0u: goto label_36c3a0;
        case 0x36c3a4u: goto label_36c3a4;
        case 0x36c3a8u: goto label_36c3a8;
        case 0x36c3acu: goto label_36c3ac;
        case 0x36c3b0u: goto label_36c3b0;
        case 0x36c3b4u: goto label_36c3b4;
        case 0x36c3b8u: goto label_36c3b8;
        case 0x36c3bcu: goto label_36c3bc;
        case 0x36c3c0u: goto label_36c3c0;
        case 0x36c3c4u: goto label_36c3c4;
        case 0x36c3c8u: goto label_36c3c8;
        case 0x36c3ccu: goto label_36c3cc;
        case 0x36c3d0u: goto label_36c3d0;
        case 0x36c3d4u: goto label_36c3d4;
        case 0x36c3d8u: goto label_36c3d8;
        case 0x36c3dcu: goto label_36c3dc;
        case 0x36c3e0u: goto label_36c3e0;
        case 0x36c3e4u: goto label_36c3e4;
        case 0x36c3e8u: goto label_36c3e8;
        case 0x36c3ecu: goto label_36c3ec;
        case 0x36c3f0u: goto label_36c3f0;
        case 0x36c3f4u: goto label_36c3f4;
        case 0x36c3f8u: goto label_36c3f8;
        case 0x36c3fcu: goto label_36c3fc;
        case 0x36c400u: goto label_36c400;
        case 0x36c404u: goto label_36c404;
        case 0x36c408u: goto label_36c408;
        case 0x36c40cu: goto label_36c40c;
        case 0x36c410u: goto label_36c410;
        case 0x36c414u: goto label_36c414;
        case 0x36c418u: goto label_36c418;
        case 0x36c41cu: goto label_36c41c;
        case 0x36c420u: goto label_36c420;
        case 0x36c424u: goto label_36c424;
        case 0x36c428u: goto label_36c428;
        case 0x36c42cu: goto label_36c42c;
        case 0x36c430u: goto label_36c430;
        case 0x36c434u: goto label_36c434;
        case 0x36c438u: goto label_36c438;
        case 0x36c43cu: goto label_36c43c;
        case 0x36c440u: goto label_36c440;
        case 0x36c444u: goto label_36c444;
        case 0x36c448u: goto label_36c448;
        case 0x36c44cu: goto label_36c44c;
        case 0x36c450u: goto label_36c450;
        case 0x36c454u: goto label_36c454;
        case 0x36c458u: goto label_36c458;
        case 0x36c45cu: goto label_36c45c;
        case 0x36c460u: goto label_36c460;
        case 0x36c464u: goto label_36c464;
        case 0x36c468u: goto label_36c468;
        case 0x36c46cu: goto label_36c46c;
        case 0x36c470u: goto label_36c470;
        case 0x36c474u: goto label_36c474;
        case 0x36c478u: goto label_36c478;
        case 0x36c47cu: goto label_36c47c;
        case 0x36c480u: goto label_36c480;
        case 0x36c484u: goto label_36c484;
        case 0x36c488u: goto label_36c488;
        case 0x36c48cu: goto label_36c48c;
        case 0x36c490u: goto label_36c490;
        case 0x36c494u: goto label_36c494;
        case 0x36c498u: goto label_36c498;
        case 0x36c49cu: goto label_36c49c;
        case 0x36c4a0u: goto label_36c4a0;
        case 0x36c4a4u: goto label_36c4a4;
        case 0x36c4a8u: goto label_36c4a8;
        case 0x36c4acu: goto label_36c4ac;
        case 0x36c4b0u: goto label_36c4b0;
        case 0x36c4b4u: goto label_36c4b4;
        case 0x36c4b8u: goto label_36c4b8;
        case 0x36c4bcu: goto label_36c4bc;
        case 0x36c4c0u: goto label_36c4c0;
        case 0x36c4c4u: goto label_36c4c4;
        case 0x36c4c8u: goto label_36c4c8;
        case 0x36c4ccu: goto label_36c4cc;
        case 0x36c4d0u: goto label_36c4d0;
        case 0x36c4d4u: goto label_36c4d4;
        case 0x36c4d8u: goto label_36c4d8;
        case 0x36c4dcu: goto label_36c4dc;
        case 0x36c4e0u: goto label_36c4e0;
        case 0x36c4e4u: goto label_36c4e4;
        case 0x36c4e8u: goto label_36c4e8;
        case 0x36c4ecu: goto label_36c4ec;
        case 0x36c4f0u: goto label_36c4f0;
        case 0x36c4f4u: goto label_36c4f4;
        case 0x36c4f8u: goto label_36c4f8;
        case 0x36c4fcu: goto label_36c4fc;
        case 0x36c500u: goto label_36c500;
        case 0x36c504u: goto label_36c504;
        case 0x36c508u: goto label_36c508;
        case 0x36c50cu: goto label_36c50c;
        case 0x36c510u: goto label_36c510;
        case 0x36c514u: goto label_36c514;
        case 0x36c518u: goto label_36c518;
        case 0x36c51cu: goto label_36c51c;
        case 0x36c520u: goto label_36c520;
        case 0x36c524u: goto label_36c524;
        case 0x36c528u: goto label_36c528;
        case 0x36c52cu: goto label_36c52c;
        case 0x36c530u: goto label_36c530;
        case 0x36c534u: goto label_36c534;
        case 0x36c538u: goto label_36c538;
        case 0x36c53cu: goto label_36c53c;
        case 0x36c540u: goto label_36c540;
        case 0x36c544u: goto label_36c544;
        case 0x36c548u: goto label_36c548;
        case 0x36c54cu: goto label_36c54c;
        case 0x36c550u: goto label_36c550;
        case 0x36c554u: goto label_36c554;
        case 0x36c558u: goto label_36c558;
        case 0x36c55cu: goto label_36c55c;
        case 0x36c560u: goto label_36c560;
        case 0x36c564u: goto label_36c564;
        case 0x36c568u: goto label_36c568;
        case 0x36c56cu: goto label_36c56c;
        case 0x36c570u: goto label_36c570;
        case 0x36c574u: goto label_36c574;
        case 0x36c578u: goto label_36c578;
        case 0x36c57cu: goto label_36c57c;
        case 0x36c580u: goto label_36c580;
        case 0x36c584u: goto label_36c584;
        case 0x36c588u: goto label_36c588;
        case 0x36c58cu: goto label_36c58c;
        case 0x36c590u: goto label_36c590;
        case 0x36c594u: goto label_36c594;
        case 0x36c598u: goto label_36c598;
        case 0x36c59cu: goto label_36c59c;
        case 0x36c5a0u: goto label_36c5a0;
        case 0x36c5a4u: goto label_36c5a4;
        case 0x36c5a8u: goto label_36c5a8;
        case 0x36c5acu: goto label_36c5ac;
        case 0x36c5b0u: goto label_36c5b0;
        case 0x36c5b4u: goto label_36c5b4;
        case 0x36c5b8u: goto label_36c5b8;
        case 0x36c5bcu: goto label_36c5bc;
        case 0x36c5c0u: goto label_36c5c0;
        case 0x36c5c4u: goto label_36c5c4;
        case 0x36c5c8u: goto label_36c5c8;
        case 0x36c5ccu: goto label_36c5cc;
        case 0x36c5d0u: goto label_36c5d0;
        case 0x36c5d4u: goto label_36c5d4;
        case 0x36c5d8u: goto label_36c5d8;
        case 0x36c5dcu: goto label_36c5dc;
        case 0x36c5e0u: goto label_36c5e0;
        case 0x36c5e4u: goto label_36c5e4;
        case 0x36c5e8u: goto label_36c5e8;
        case 0x36c5ecu: goto label_36c5ec;
        case 0x36c5f0u: goto label_36c5f0;
        case 0x36c5f4u: goto label_36c5f4;
        case 0x36c5f8u: goto label_36c5f8;
        case 0x36c5fcu: goto label_36c5fc;
        case 0x36c600u: goto label_36c600;
        case 0x36c604u: goto label_36c604;
        case 0x36c608u: goto label_36c608;
        case 0x36c60cu: goto label_36c60c;
        case 0x36c610u: goto label_36c610;
        case 0x36c614u: goto label_36c614;
        case 0x36c618u: goto label_36c618;
        case 0x36c61cu: goto label_36c61c;
        case 0x36c620u: goto label_36c620;
        case 0x36c624u: goto label_36c624;
        case 0x36c628u: goto label_36c628;
        case 0x36c62cu: goto label_36c62c;
        case 0x36c630u: goto label_36c630;
        case 0x36c634u: goto label_36c634;
        case 0x36c638u: goto label_36c638;
        case 0x36c63cu: goto label_36c63c;
        case 0x36c640u: goto label_36c640;
        case 0x36c644u: goto label_36c644;
        case 0x36c648u: goto label_36c648;
        case 0x36c64cu: goto label_36c64c;
        case 0x36c650u: goto label_36c650;
        case 0x36c654u: goto label_36c654;
        case 0x36c658u: goto label_36c658;
        case 0x36c65cu: goto label_36c65c;
        case 0x36c660u: goto label_36c660;
        case 0x36c664u: goto label_36c664;
        case 0x36c668u: goto label_36c668;
        case 0x36c66cu: goto label_36c66c;
        case 0x36c670u: goto label_36c670;
        case 0x36c674u: goto label_36c674;
        case 0x36c678u: goto label_36c678;
        case 0x36c67cu: goto label_36c67c;
        case 0x36c680u: goto label_36c680;
        case 0x36c684u: goto label_36c684;
        case 0x36c688u: goto label_36c688;
        case 0x36c68cu: goto label_36c68c;
        case 0x36c690u: goto label_36c690;
        case 0x36c694u: goto label_36c694;
        case 0x36c698u: goto label_36c698;
        case 0x36c69cu: goto label_36c69c;
        case 0x36c6a0u: goto label_36c6a0;
        case 0x36c6a4u: goto label_36c6a4;
        case 0x36c6a8u: goto label_36c6a8;
        case 0x36c6acu: goto label_36c6ac;
        case 0x36c6b0u: goto label_36c6b0;
        case 0x36c6b4u: goto label_36c6b4;
        case 0x36c6b8u: goto label_36c6b8;
        case 0x36c6bcu: goto label_36c6bc;
        case 0x36c6c0u: goto label_36c6c0;
        case 0x36c6c4u: goto label_36c6c4;
        case 0x36c6c8u: goto label_36c6c8;
        case 0x36c6ccu: goto label_36c6cc;
        case 0x36c6d0u: goto label_36c6d0;
        case 0x36c6d4u: goto label_36c6d4;
        case 0x36c6d8u: goto label_36c6d8;
        case 0x36c6dcu: goto label_36c6dc;
        case 0x36c6e0u: goto label_36c6e0;
        case 0x36c6e4u: goto label_36c6e4;
        case 0x36c6e8u: goto label_36c6e8;
        case 0x36c6ecu: goto label_36c6ec;
        case 0x36c6f0u: goto label_36c6f0;
        case 0x36c6f4u: goto label_36c6f4;
        case 0x36c6f8u: goto label_36c6f8;
        case 0x36c6fcu: goto label_36c6fc;
        case 0x36c700u: goto label_36c700;
        case 0x36c704u: goto label_36c704;
        case 0x36c708u: goto label_36c708;
        case 0x36c70cu: goto label_36c70c;
        case 0x36c710u: goto label_36c710;
        case 0x36c714u: goto label_36c714;
        case 0x36c718u: goto label_36c718;
        case 0x36c71cu: goto label_36c71c;
        case 0x36c720u: goto label_36c720;
        case 0x36c724u: goto label_36c724;
        case 0x36c728u: goto label_36c728;
        case 0x36c72cu: goto label_36c72c;
        case 0x36c730u: goto label_36c730;
        case 0x36c734u: goto label_36c734;
        case 0x36c738u: goto label_36c738;
        case 0x36c73cu: goto label_36c73c;
        case 0x36c740u: goto label_36c740;
        case 0x36c744u: goto label_36c744;
        case 0x36c748u: goto label_36c748;
        case 0x36c74cu: goto label_36c74c;
        case 0x36c750u: goto label_36c750;
        case 0x36c754u: goto label_36c754;
        case 0x36c758u: goto label_36c758;
        case 0x36c75cu: goto label_36c75c;
        case 0x36c760u: goto label_36c760;
        case 0x36c764u: goto label_36c764;
        case 0x36c768u: goto label_36c768;
        case 0x36c76cu: goto label_36c76c;
        case 0x36c770u: goto label_36c770;
        case 0x36c774u: goto label_36c774;
        case 0x36c778u: goto label_36c778;
        case 0x36c77cu: goto label_36c77c;
        case 0x36c780u: goto label_36c780;
        case 0x36c784u: goto label_36c784;
        case 0x36c788u: goto label_36c788;
        case 0x36c78cu: goto label_36c78c;
        case 0x36c790u: goto label_36c790;
        case 0x36c794u: goto label_36c794;
        case 0x36c798u: goto label_36c798;
        case 0x36c79cu: goto label_36c79c;
        case 0x36c7a0u: goto label_36c7a0;
        case 0x36c7a4u: goto label_36c7a4;
        case 0x36c7a8u: goto label_36c7a8;
        case 0x36c7acu: goto label_36c7ac;
        case 0x36c7b0u: goto label_36c7b0;
        case 0x36c7b4u: goto label_36c7b4;
        case 0x36c7b8u: goto label_36c7b8;
        case 0x36c7bcu: goto label_36c7bc;
        case 0x36c7c0u: goto label_36c7c0;
        case 0x36c7c4u: goto label_36c7c4;
        case 0x36c7c8u: goto label_36c7c8;
        case 0x36c7ccu: goto label_36c7cc;
        case 0x36c7d0u: goto label_36c7d0;
        case 0x36c7d4u: goto label_36c7d4;
        case 0x36c7d8u: goto label_36c7d8;
        case 0x36c7dcu: goto label_36c7dc;
        case 0x36c7e0u: goto label_36c7e0;
        case 0x36c7e4u: goto label_36c7e4;
        case 0x36c7e8u: goto label_36c7e8;
        case 0x36c7ecu: goto label_36c7ec;
        case 0x36c7f0u: goto label_36c7f0;
        case 0x36c7f4u: goto label_36c7f4;
        case 0x36c7f8u: goto label_36c7f8;
        case 0x36c7fcu: goto label_36c7fc;
        case 0x36c800u: goto label_36c800;
        case 0x36c804u: goto label_36c804;
        case 0x36c808u: goto label_36c808;
        case 0x36c80cu: goto label_36c80c;
        case 0x36c810u: goto label_36c810;
        case 0x36c814u: goto label_36c814;
        case 0x36c818u: goto label_36c818;
        case 0x36c81cu: goto label_36c81c;
        case 0x36c820u: goto label_36c820;
        case 0x36c824u: goto label_36c824;
        case 0x36c828u: goto label_36c828;
        case 0x36c82cu: goto label_36c82c;
        case 0x36c830u: goto label_36c830;
        case 0x36c834u: goto label_36c834;
        case 0x36c838u: goto label_36c838;
        case 0x36c83cu: goto label_36c83c;
        case 0x36c840u: goto label_36c840;
        case 0x36c844u: goto label_36c844;
        case 0x36c848u: goto label_36c848;
        case 0x36c84cu: goto label_36c84c;
        case 0x36c850u: goto label_36c850;
        case 0x36c854u: goto label_36c854;
        case 0x36c858u: goto label_36c858;
        case 0x36c85cu: goto label_36c85c;
        case 0x36c860u: goto label_36c860;
        case 0x36c864u: goto label_36c864;
        case 0x36c868u: goto label_36c868;
        case 0x36c86cu: goto label_36c86c;
        case 0x36c870u: goto label_36c870;
        case 0x36c874u: goto label_36c874;
        case 0x36c878u: goto label_36c878;
        case 0x36c87cu: goto label_36c87c;
        case 0x36c880u: goto label_36c880;
        case 0x36c884u: goto label_36c884;
        case 0x36c888u: goto label_36c888;
        case 0x36c88cu: goto label_36c88c;
        case 0x36c890u: goto label_36c890;
        case 0x36c894u: goto label_36c894;
        case 0x36c898u: goto label_36c898;
        case 0x36c89cu: goto label_36c89c;
        case 0x36c8a0u: goto label_36c8a0;
        case 0x36c8a4u: goto label_36c8a4;
        case 0x36c8a8u: goto label_36c8a8;
        case 0x36c8acu: goto label_36c8ac;
        case 0x36c8b0u: goto label_36c8b0;
        case 0x36c8b4u: goto label_36c8b4;
        case 0x36c8b8u: goto label_36c8b8;
        case 0x36c8bcu: goto label_36c8bc;
        case 0x36c8c0u: goto label_36c8c0;
        case 0x36c8c4u: goto label_36c8c4;
        case 0x36c8c8u: goto label_36c8c8;
        case 0x36c8ccu: goto label_36c8cc;
        case 0x36c8d0u: goto label_36c8d0;
        case 0x36c8d4u: goto label_36c8d4;
        case 0x36c8d8u: goto label_36c8d8;
        case 0x36c8dcu: goto label_36c8dc;
        case 0x36c8e0u: goto label_36c8e0;
        case 0x36c8e4u: goto label_36c8e4;
        case 0x36c8e8u: goto label_36c8e8;
        case 0x36c8ecu: goto label_36c8ec;
        case 0x36c8f0u: goto label_36c8f0;
        case 0x36c8f4u: goto label_36c8f4;
        case 0x36c8f8u: goto label_36c8f8;
        case 0x36c8fcu: goto label_36c8fc;
        case 0x36c900u: goto label_36c900;
        case 0x36c904u: goto label_36c904;
        case 0x36c908u: goto label_36c908;
        case 0x36c90cu: goto label_36c90c;
        case 0x36c910u: goto label_36c910;
        case 0x36c914u: goto label_36c914;
        case 0x36c918u: goto label_36c918;
        case 0x36c91cu: goto label_36c91c;
        case 0x36c920u: goto label_36c920;
        case 0x36c924u: goto label_36c924;
        case 0x36c928u: goto label_36c928;
        case 0x36c92cu: goto label_36c92c;
        case 0x36c930u: goto label_36c930;
        case 0x36c934u: goto label_36c934;
        case 0x36c938u: goto label_36c938;
        case 0x36c93cu: goto label_36c93c;
        case 0x36c940u: goto label_36c940;
        case 0x36c944u: goto label_36c944;
        case 0x36c948u: goto label_36c948;
        case 0x36c94cu: goto label_36c94c;
        case 0x36c950u: goto label_36c950;
        case 0x36c954u: goto label_36c954;
        case 0x36c958u: goto label_36c958;
        case 0x36c95cu: goto label_36c95c;
        case 0x36c960u: goto label_36c960;
        case 0x36c964u: goto label_36c964;
        case 0x36c968u: goto label_36c968;
        case 0x36c96cu: goto label_36c96c;
        case 0x36c970u: goto label_36c970;
        case 0x36c974u: goto label_36c974;
        case 0x36c978u: goto label_36c978;
        case 0x36c97cu: goto label_36c97c;
        case 0x36c980u: goto label_36c980;
        case 0x36c984u: goto label_36c984;
        case 0x36c988u: goto label_36c988;
        case 0x36c98cu: goto label_36c98c;
        case 0x36c990u: goto label_36c990;
        case 0x36c994u: goto label_36c994;
        case 0x36c998u: goto label_36c998;
        case 0x36c99cu: goto label_36c99c;
        case 0x36c9a0u: goto label_36c9a0;
        case 0x36c9a4u: goto label_36c9a4;
        case 0x36c9a8u: goto label_36c9a8;
        case 0x36c9acu: goto label_36c9ac;
        case 0x36c9b0u: goto label_36c9b0;
        case 0x36c9b4u: goto label_36c9b4;
        case 0x36c9b8u: goto label_36c9b8;
        case 0x36c9bcu: goto label_36c9bc;
        case 0x36c9c0u: goto label_36c9c0;
        case 0x36c9c4u: goto label_36c9c4;
        case 0x36c9c8u: goto label_36c9c8;
        case 0x36c9ccu: goto label_36c9cc;
        case 0x36c9d0u: goto label_36c9d0;
        case 0x36c9d4u: goto label_36c9d4;
        case 0x36c9d8u: goto label_36c9d8;
        case 0x36c9dcu: goto label_36c9dc;
        case 0x36c9e0u: goto label_36c9e0;
        case 0x36c9e4u: goto label_36c9e4;
        case 0x36c9e8u: goto label_36c9e8;
        case 0x36c9ecu: goto label_36c9ec;
        case 0x36c9f0u: goto label_36c9f0;
        case 0x36c9f4u: goto label_36c9f4;
        case 0x36c9f8u: goto label_36c9f8;
        case 0x36c9fcu: goto label_36c9fc;
        case 0x36ca00u: goto label_36ca00;
        case 0x36ca04u: goto label_36ca04;
        case 0x36ca08u: goto label_36ca08;
        case 0x36ca0cu: goto label_36ca0c;
        case 0x36ca10u: goto label_36ca10;
        case 0x36ca14u: goto label_36ca14;
        case 0x36ca18u: goto label_36ca18;
        case 0x36ca1cu: goto label_36ca1c;
        case 0x36ca20u: goto label_36ca20;
        case 0x36ca24u: goto label_36ca24;
        case 0x36ca28u: goto label_36ca28;
        case 0x36ca2cu: goto label_36ca2c;
        case 0x36ca30u: goto label_36ca30;
        case 0x36ca34u: goto label_36ca34;
        case 0x36ca38u: goto label_36ca38;
        case 0x36ca3cu: goto label_36ca3c;
        case 0x36ca40u: goto label_36ca40;
        case 0x36ca44u: goto label_36ca44;
        case 0x36ca48u: goto label_36ca48;
        case 0x36ca4cu: goto label_36ca4c;
        case 0x36ca50u: goto label_36ca50;
        case 0x36ca54u: goto label_36ca54;
        case 0x36ca58u: goto label_36ca58;
        case 0x36ca5cu: goto label_36ca5c;
        case 0x36ca60u: goto label_36ca60;
        case 0x36ca64u: goto label_36ca64;
        case 0x36ca68u: goto label_36ca68;
        case 0x36ca6cu: goto label_36ca6c;
        case 0x36ca70u: goto label_36ca70;
        case 0x36ca74u: goto label_36ca74;
        case 0x36ca78u: goto label_36ca78;
        case 0x36ca7cu: goto label_36ca7c;
        case 0x36ca80u: goto label_36ca80;
        case 0x36ca84u: goto label_36ca84;
        case 0x36ca88u: goto label_36ca88;
        case 0x36ca8cu: goto label_36ca8c;
        case 0x36ca90u: goto label_36ca90;
        case 0x36ca94u: goto label_36ca94;
        case 0x36ca98u: goto label_36ca98;
        case 0x36ca9cu: goto label_36ca9c;
        case 0x36caa0u: goto label_36caa0;
        case 0x36caa4u: goto label_36caa4;
        case 0x36caa8u: goto label_36caa8;
        case 0x36caacu: goto label_36caac;
        case 0x36cab0u: goto label_36cab0;
        case 0x36cab4u: goto label_36cab4;
        case 0x36cab8u: goto label_36cab8;
        case 0x36cabcu: goto label_36cabc;
        case 0x36cac0u: goto label_36cac0;
        case 0x36cac4u: goto label_36cac4;
        case 0x36cac8u: goto label_36cac8;
        case 0x36caccu: goto label_36cacc;
        case 0x36cad0u: goto label_36cad0;
        case 0x36cad4u: goto label_36cad4;
        case 0x36cad8u: goto label_36cad8;
        case 0x36cadcu: goto label_36cadc;
        case 0x36cae0u: goto label_36cae0;
        case 0x36cae4u: goto label_36cae4;
        case 0x36cae8u: goto label_36cae8;
        case 0x36caecu: goto label_36caec;
        case 0x36caf0u: goto label_36caf0;
        case 0x36caf4u: goto label_36caf4;
        case 0x36caf8u: goto label_36caf8;
        case 0x36cafcu: goto label_36cafc;
        case 0x36cb00u: goto label_36cb00;
        case 0x36cb04u: goto label_36cb04;
        case 0x36cb08u: goto label_36cb08;
        case 0x36cb0cu: goto label_36cb0c;
        case 0x36cb10u: goto label_36cb10;
        case 0x36cb14u: goto label_36cb14;
        case 0x36cb18u: goto label_36cb18;
        case 0x36cb1cu: goto label_36cb1c;
        case 0x36cb20u: goto label_36cb20;
        case 0x36cb24u: goto label_36cb24;
        case 0x36cb28u: goto label_36cb28;
        case 0x36cb2cu: goto label_36cb2c;
        case 0x36cb30u: goto label_36cb30;
        case 0x36cb34u: goto label_36cb34;
        case 0x36cb38u: goto label_36cb38;
        case 0x36cb3cu: goto label_36cb3c;
        case 0x36cb40u: goto label_36cb40;
        case 0x36cb44u: goto label_36cb44;
        case 0x36cb48u: goto label_36cb48;
        case 0x36cb4cu: goto label_36cb4c;
        case 0x36cb50u: goto label_36cb50;
        case 0x36cb54u: goto label_36cb54;
        case 0x36cb58u: goto label_36cb58;
        case 0x36cb5cu: goto label_36cb5c;
        case 0x36cb60u: goto label_36cb60;
        case 0x36cb64u: goto label_36cb64;
        case 0x36cb68u: goto label_36cb68;
        case 0x36cb6cu: goto label_36cb6c;
        case 0x36cb70u: goto label_36cb70;
        case 0x36cb74u: goto label_36cb74;
        case 0x36cb78u: goto label_36cb78;
        case 0x36cb7cu: goto label_36cb7c;
        case 0x36cb80u: goto label_36cb80;
        case 0x36cb84u: goto label_36cb84;
        case 0x36cb88u: goto label_36cb88;
        case 0x36cb8cu: goto label_36cb8c;
        case 0x36cb90u: goto label_36cb90;
        case 0x36cb94u: goto label_36cb94;
        case 0x36cb98u: goto label_36cb98;
        case 0x36cb9cu: goto label_36cb9c;
        case 0x36cba0u: goto label_36cba0;
        case 0x36cba4u: goto label_36cba4;
        case 0x36cba8u: goto label_36cba8;
        case 0x36cbacu: goto label_36cbac;
        case 0x36cbb0u: goto label_36cbb0;
        case 0x36cbb4u: goto label_36cbb4;
        case 0x36cbb8u: goto label_36cbb8;
        case 0x36cbbcu: goto label_36cbbc;
        case 0x36cbc0u: goto label_36cbc0;
        case 0x36cbc4u: goto label_36cbc4;
        case 0x36cbc8u: goto label_36cbc8;
        case 0x36cbccu: goto label_36cbcc;
        case 0x36cbd0u: goto label_36cbd0;
        case 0x36cbd4u: goto label_36cbd4;
        case 0x36cbd8u: goto label_36cbd8;
        case 0x36cbdcu: goto label_36cbdc;
        case 0x36cbe0u: goto label_36cbe0;
        case 0x36cbe4u: goto label_36cbe4;
        case 0x36cbe8u: goto label_36cbe8;
        case 0x36cbecu: goto label_36cbec;
        case 0x36cbf0u: goto label_36cbf0;
        case 0x36cbf4u: goto label_36cbf4;
        case 0x36cbf8u: goto label_36cbf8;
        case 0x36cbfcu: goto label_36cbfc;
        case 0x36cc00u: goto label_36cc00;
        case 0x36cc04u: goto label_36cc04;
        case 0x36cc08u: goto label_36cc08;
        case 0x36cc0cu: goto label_36cc0c;
        case 0x36cc10u: goto label_36cc10;
        case 0x36cc14u: goto label_36cc14;
        case 0x36cc18u: goto label_36cc18;
        case 0x36cc1cu: goto label_36cc1c;
        case 0x36cc20u: goto label_36cc20;
        case 0x36cc24u: goto label_36cc24;
        case 0x36cc28u: goto label_36cc28;
        case 0x36cc2cu: goto label_36cc2c;
        case 0x36cc30u: goto label_36cc30;
        case 0x36cc34u: goto label_36cc34;
        case 0x36cc38u: goto label_36cc38;
        case 0x36cc3cu: goto label_36cc3c;
        case 0x36cc40u: goto label_36cc40;
        case 0x36cc44u: goto label_36cc44;
        case 0x36cc48u: goto label_36cc48;
        case 0x36cc4cu: goto label_36cc4c;
        case 0x36cc50u: goto label_36cc50;
        case 0x36cc54u: goto label_36cc54;
        case 0x36cc58u: goto label_36cc58;
        case 0x36cc5cu: goto label_36cc5c;
        case 0x36cc60u: goto label_36cc60;
        case 0x36cc64u: goto label_36cc64;
        case 0x36cc68u: goto label_36cc68;
        case 0x36cc6cu: goto label_36cc6c;
        case 0x36cc70u: goto label_36cc70;
        case 0x36cc74u: goto label_36cc74;
        case 0x36cc78u: goto label_36cc78;
        case 0x36cc7cu: goto label_36cc7c;
        case 0x36cc80u: goto label_36cc80;
        case 0x36cc84u: goto label_36cc84;
        case 0x36cc88u: goto label_36cc88;
        case 0x36cc8cu: goto label_36cc8c;
        case 0x36cc90u: goto label_36cc90;
        case 0x36cc94u: goto label_36cc94;
        case 0x36cc98u: goto label_36cc98;
        case 0x36cc9cu: goto label_36cc9c;
        case 0x36cca0u: goto label_36cca0;
        case 0x36cca4u: goto label_36cca4;
        case 0x36cca8u: goto label_36cca8;
        case 0x36ccacu: goto label_36ccac;
        case 0x36ccb0u: goto label_36ccb0;
        case 0x36ccb4u: goto label_36ccb4;
        case 0x36ccb8u: goto label_36ccb8;
        case 0x36ccbcu: goto label_36ccbc;
        case 0x36ccc0u: goto label_36ccc0;
        case 0x36ccc4u: goto label_36ccc4;
        case 0x36ccc8u: goto label_36ccc8;
        case 0x36ccccu: goto label_36cccc;
        case 0x36ccd0u: goto label_36ccd0;
        case 0x36ccd4u: goto label_36ccd4;
        case 0x36ccd8u: goto label_36ccd8;
        case 0x36ccdcu: goto label_36ccdc;
        case 0x36cce0u: goto label_36cce0;
        case 0x36cce4u: goto label_36cce4;
        case 0x36cce8u: goto label_36cce8;
        case 0x36ccecu: goto label_36ccec;
        case 0x36ccf0u: goto label_36ccf0;
        case 0x36ccf4u: goto label_36ccf4;
        case 0x36ccf8u: goto label_36ccf8;
        case 0x36ccfcu: goto label_36ccfc;
        case 0x36cd00u: goto label_36cd00;
        case 0x36cd04u: goto label_36cd04;
        case 0x36cd08u: goto label_36cd08;
        case 0x36cd0cu: goto label_36cd0c;
        case 0x36cd10u: goto label_36cd10;
        case 0x36cd14u: goto label_36cd14;
        case 0x36cd18u: goto label_36cd18;
        case 0x36cd1cu: goto label_36cd1c;
        case 0x36cd20u: goto label_36cd20;
        case 0x36cd24u: goto label_36cd24;
        case 0x36cd28u: goto label_36cd28;
        case 0x36cd2cu: goto label_36cd2c;
        case 0x36cd30u: goto label_36cd30;
        case 0x36cd34u: goto label_36cd34;
        case 0x36cd38u: goto label_36cd38;
        case 0x36cd3cu: goto label_36cd3c;
        case 0x36cd40u: goto label_36cd40;
        case 0x36cd44u: goto label_36cd44;
        case 0x36cd48u: goto label_36cd48;
        case 0x36cd4cu: goto label_36cd4c;
        case 0x36cd50u: goto label_36cd50;
        case 0x36cd54u: goto label_36cd54;
        case 0x36cd58u: goto label_36cd58;
        case 0x36cd5cu: goto label_36cd5c;
        case 0x36cd60u: goto label_36cd60;
        case 0x36cd64u: goto label_36cd64;
        case 0x36cd68u: goto label_36cd68;
        case 0x36cd6cu: goto label_36cd6c;
        case 0x36cd70u: goto label_36cd70;
        case 0x36cd74u: goto label_36cd74;
        case 0x36cd78u: goto label_36cd78;
        case 0x36cd7cu: goto label_36cd7c;
        case 0x36cd80u: goto label_36cd80;
        case 0x36cd84u: goto label_36cd84;
        case 0x36cd88u: goto label_36cd88;
        case 0x36cd8cu: goto label_36cd8c;
        case 0x36cd90u: goto label_36cd90;
        case 0x36cd94u: goto label_36cd94;
        case 0x36cd98u: goto label_36cd98;
        case 0x36cd9cu: goto label_36cd9c;
        case 0x36cda0u: goto label_36cda0;
        case 0x36cda4u: goto label_36cda4;
        case 0x36cda8u: goto label_36cda8;
        case 0x36cdacu: goto label_36cdac;
        case 0x36cdb0u: goto label_36cdb0;
        case 0x36cdb4u: goto label_36cdb4;
        case 0x36cdb8u: goto label_36cdb8;
        case 0x36cdbcu: goto label_36cdbc;
        case 0x36cdc0u: goto label_36cdc0;
        case 0x36cdc4u: goto label_36cdc4;
        case 0x36cdc8u: goto label_36cdc8;
        case 0x36cdccu: goto label_36cdcc;
        case 0x36cdd0u: goto label_36cdd0;
        case 0x36cdd4u: goto label_36cdd4;
        case 0x36cdd8u: goto label_36cdd8;
        case 0x36cddcu: goto label_36cddc;
        case 0x36cde0u: goto label_36cde0;
        case 0x36cde4u: goto label_36cde4;
        case 0x36cde8u: goto label_36cde8;
        case 0x36cdecu: goto label_36cdec;
        case 0x36cdf0u: goto label_36cdf0;
        case 0x36cdf4u: goto label_36cdf4;
        case 0x36cdf8u: goto label_36cdf8;
        case 0x36cdfcu: goto label_36cdfc;
        case 0x36ce00u: goto label_36ce00;
        case 0x36ce04u: goto label_36ce04;
        case 0x36ce08u: goto label_36ce08;
        case 0x36ce0cu: goto label_36ce0c;
        case 0x36ce10u: goto label_36ce10;
        case 0x36ce14u: goto label_36ce14;
        case 0x36ce18u: goto label_36ce18;
        case 0x36ce1cu: goto label_36ce1c;
        case 0x36ce20u: goto label_36ce20;
        case 0x36ce24u: goto label_36ce24;
        case 0x36ce28u: goto label_36ce28;
        case 0x36ce2cu: goto label_36ce2c;
        case 0x36ce30u: goto label_36ce30;
        case 0x36ce34u: goto label_36ce34;
        case 0x36ce38u: goto label_36ce38;
        case 0x36ce3cu: goto label_36ce3c;
        case 0x36ce40u: goto label_36ce40;
        case 0x36ce44u: goto label_36ce44;
        case 0x36ce48u: goto label_36ce48;
        case 0x36ce4cu: goto label_36ce4c;
        case 0x36ce50u: goto label_36ce50;
        case 0x36ce54u: goto label_36ce54;
        case 0x36ce58u: goto label_36ce58;
        case 0x36ce5cu: goto label_36ce5c;
        case 0x36ce60u: goto label_36ce60;
        case 0x36ce64u: goto label_36ce64;
        case 0x36ce68u: goto label_36ce68;
        case 0x36ce6cu: goto label_36ce6c;
        case 0x36ce70u: goto label_36ce70;
        case 0x36ce74u: goto label_36ce74;
        case 0x36ce78u: goto label_36ce78;
        case 0x36ce7cu: goto label_36ce7c;
        case 0x36ce80u: goto label_36ce80;
        case 0x36ce84u: goto label_36ce84;
        case 0x36ce88u: goto label_36ce88;
        case 0x36ce8cu: goto label_36ce8c;
        case 0x36ce90u: goto label_36ce90;
        case 0x36ce94u: goto label_36ce94;
        case 0x36ce98u: goto label_36ce98;
        case 0x36ce9cu: goto label_36ce9c;
        case 0x36cea0u: goto label_36cea0;
        case 0x36cea4u: goto label_36cea4;
        case 0x36cea8u: goto label_36cea8;
        case 0x36ceacu: goto label_36ceac;
        case 0x36ceb0u: goto label_36ceb0;
        case 0x36ceb4u: goto label_36ceb4;
        case 0x36ceb8u: goto label_36ceb8;
        case 0x36cebcu: goto label_36cebc;
        case 0x36cec0u: goto label_36cec0;
        case 0x36cec4u: goto label_36cec4;
        case 0x36cec8u: goto label_36cec8;
        case 0x36ceccu: goto label_36cecc;
        case 0x36ced0u: goto label_36ced0;
        case 0x36ced4u: goto label_36ced4;
        case 0x36ced8u: goto label_36ced8;
        case 0x36cedcu: goto label_36cedc;
        case 0x36cee0u: goto label_36cee0;
        case 0x36cee4u: goto label_36cee4;
        case 0x36cee8u: goto label_36cee8;
        case 0x36ceecu: goto label_36ceec;
        case 0x36cef0u: goto label_36cef0;
        case 0x36cef4u: goto label_36cef4;
        case 0x36cef8u: goto label_36cef8;
        case 0x36cefcu: goto label_36cefc;
        case 0x36cf00u: goto label_36cf00;
        case 0x36cf04u: goto label_36cf04;
        case 0x36cf08u: goto label_36cf08;
        case 0x36cf0cu: goto label_36cf0c;
        case 0x36cf10u: goto label_36cf10;
        case 0x36cf14u: goto label_36cf14;
        case 0x36cf18u: goto label_36cf18;
        case 0x36cf1cu: goto label_36cf1c;
        case 0x36cf20u: goto label_36cf20;
        case 0x36cf24u: goto label_36cf24;
        case 0x36cf28u: goto label_36cf28;
        case 0x36cf2cu: goto label_36cf2c;
        case 0x36cf30u: goto label_36cf30;
        case 0x36cf34u: goto label_36cf34;
        case 0x36cf38u: goto label_36cf38;
        case 0x36cf3cu: goto label_36cf3c;
        case 0x36cf40u: goto label_36cf40;
        case 0x36cf44u: goto label_36cf44;
        case 0x36cf48u: goto label_36cf48;
        case 0x36cf4cu: goto label_36cf4c;
        case 0x36cf50u: goto label_36cf50;
        case 0x36cf54u: goto label_36cf54;
        case 0x36cf58u: goto label_36cf58;
        case 0x36cf5cu: goto label_36cf5c;
        case 0x36cf60u: goto label_36cf60;
        case 0x36cf64u: goto label_36cf64;
        case 0x36cf68u: goto label_36cf68;
        case 0x36cf6cu: goto label_36cf6c;
        case 0x36cf70u: goto label_36cf70;
        case 0x36cf74u: goto label_36cf74;
        case 0x36cf78u: goto label_36cf78;
        case 0x36cf7cu: goto label_36cf7c;
        case 0x36cf80u: goto label_36cf80;
        case 0x36cf84u: goto label_36cf84;
        case 0x36cf88u: goto label_36cf88;
        case 0x36cf8cu: goto label_36cf8c;
        case 0x36cf90u: goto label_36cf90;
        case 0x36cf94u: goto label_36cf94;
        case 0x36cf98u: goto label_36cf98;
        case 0x36cf9cu: goto label_36cf9c;
        case 0x36cfa0u: goto label_36cfa0;
        case 0x36cfa4u: goto label_36cfa4;
        case 0x36cfa8u: goto label_36cfa8;
        case 0x36cfacu: goto label_36cfac;
        case 0x36cfb0u: goto label_36cfb0;
        case 0x36cfb4u: goto label_36cfb4;
        case 0x36cfb8u: goto label_36cfb8;
        case 0x36cfbcu: goto label_36cfbc;
        case 0x36cfc0u: goto label_36cfc0;
        case 0x36cfc4u: goto label_36cfc4;
        case 0x36cfc8u: goto label_36cfc8;
        case 0x36cfccu: goto label_36cfcc;
        case 0x36cfd0u: goto label_36cfd0;
        case 0x36cfd4u: goto label_36cfd4;
        case 0x36cfd8u: goto label_36cfd8;
        case 0x36cfdcu: goto label_36cfdc;
        case 0x36cfe0u: goto label_36cfe0;
        case 0x36cfe4u: goto label_36cfe4;
        case 0x36cfe8u: goto label_36cfe8;
        case 0x36cfecu: goto label_36cfec;
        case 0x36cff0u: goto label_36cff0;
        case 0x36cff4u: goto label_36cff4;
        case 0x36cff8u: goto label_36cff8;
        case 0x36cffcu: goto label_36cffc;
        case 0x36d000u: goto label_36d000;
        case 0x36d004u: goto label_36d004;
        case 0x36d008u: goto label_36d008;
        case 0x36d00cu: goto label_36d00c;
        case 0x36d010u: goto label_36d010;
        case 0x36d014u: goto label_36d014;
        case 0x36d018u: goto label_36d018;
        case 0x36d01cu: goto label_36d01c;
        case 0x36d020u: goto label_36d020;
        case 0x36d024u: goto label_36d024;
        case 0x36d028u: goto label_36d028;
        case 0x36d02cu: goto label_36d02c;
        case 0x36d030u: goto label_36d030;
        case 0x36d034u: goto label_36d034;
        case 0x36d038u: goto label_36d038;
        case 0x36d03cu: goto label_36d03c;
        case 0x36d040u: goto label_36d040;
        case 0x36d044u: goto label_36d044;
        case 0x36d048u: goto label_36d048;
        case 0x36d04cu: goto label_36d04c;
        case 0x36d050u: goto label_36d050;
        case 0x36d054u: goto label_36d054;
        case 0x36d058u: goto label_36d058;
        case 0x36d05cu: goto label_36d05c;
        case 0x36d060u: goto label_36d060;
        case 0x36d064u: goto label_36d064;
        case 0x36d068u: goto label_36d068;
        case 0x36d06cu: goto label_36d06c;
        case 0x36d070u: goto label_36d070;
        case 0x36d074u: goto label_36d074;
        case 0x36d078u: goto label_36d078;
        case 0x36d07cu: goto label_36d07c;
        case 0x36d080u: goto label_36d080;
        case 0x36d084u: goto label_36d084;
        case 0x36d088u: goto label_36d088;
        case 0x36d08cu: goto label_36d08c;
        case 0x36d090u: goto label_36d090;
        case 0x36d094u: goto label_36d094;
        case 0x36d098u: goto label_36d098;
        case 0x36d09cu: goto label_36d09c;
        case 0x36d0a0u: goto label_36d0a0;
        case 0x36d0a4u: goto label_36d0a4;
        case 0x36d0a8u: goto label_36d0a8;
        case 0x36d0acu: goto label_36d0ac;
        case 0x36d0b0u: goto label_36d0b0;
        case 0x36d0b4u: goto label_36d0b4;
        case 0x36d0b8u: goto label_36d0b8;
        case 0x36d0bcu: goto label_36d0bc;
        case 0x36d0c0u: goto label_36d0c0;
        case 0x36d0c4u: goto label_36d0c4;
        case 0x36d0c8u: goto label_36d0c8;
        case 0x36d0ccu: goto label_36d0cc;
        case 0x36d0d0u: goto label_36d0d0;
        case 0x36d0d4u: goto label_36d0d4;
        case 0x36d0d8u: goto label_36d0d8;
        case 0x36d0dcu: goto label_36d0dc;
        case 0x36d0e0u: goto label_36d0e0;
        case 0x36d0e4u: goto label_36d0e4;
        case 0x36d0e8u: goto label_36d0e8;
        case 0x36d0ecu: goto label_36d0ec;
        case 0x36d0f0u: goto label_36d0f0;
        case 0x36d0f4u: goto label_36d0f4;
        case 0x36d0f8u: goto label_36d0f8;
        case 0x36d0fcu: goto label_36d0fc;
        case 0x36d100u: goto label_36d100;
        case 0x36d104u: goto label_36d104;
        case 0x36d108u: goto label_36d108;
        case 0x36d10cu: goto label_36d10c;
        case 0x36d110u: goto label_36d110;
        case 0x36d114u: goto label_36d114;
        case 0x36d118u: goto label_36d118;
        case 0x36d11cu: goto label_36d11c;
        case 0x36d120u: goto label_36d120;
        case 0x36d124u: goto label_36d124;
        case 0x36d128u: goto label_36d128;
        case 0x36d12cu: goto label_36d12c;
        case 0x36d130u: goto label_36d130;
        case 0x36d134u: goto label_36d134;
        case 0x36d138u: goto label_36d138;
        case 0x36d13cu: goto label_36d13c;
        case 0x36d140u: goto label_36d140;
        case 0x36d144u: goto label_36d144;
        case 0x36d148u: goto label_36d148;
        case 0x36d14cu: goto label_36d14c;
        case 0x36d150u: goto label_36d150;
        case 0x36d154u: goto label_36d154;
        case 0x36d158u: goto label_36d158;
        case 0x36d15cu: goto label_36d15c;
        case 0x36d160u: goto label_36d160;
        case 0x36d164u: goto label_36d164;
        case 0x36d168u: goto label_36d168;
        case 0x36d16cu: goto label_36d16c;
        case 0x36d170u: goto label_36d170;
        case 0x36d174u: goto label_36d174;
        case 0x36d178u: goto label_36d178;
        case 0x36d17cu: goto label_36d17c;
        case 0x36d180u: goto label_36d180;
        case 0x36d184u: goto label_36d184;
        case 0x36d188u: goto label_36d188;
        case 0x36d18cu: goto label_36d18c;
        case 0x36d190u: goto label_36d190;
        case 0x36d194u: goto label_36d194;
        case 0x36d198u: goto label_36d198;
        case 0x36d19cu: goto label_36d19c;
        case 0x36d1a0u: goto label_36d1a0;
        case 0x36d1a4u: goto label_36d1a4;
        case 0x36d1a8u: goto label_36d1a8;
        case 0x36d1acu: goto label_36d1ac;
        case 0x36d1b0u: goto label_36d1b0;
        case 0x36d1b4u: goto label_36d1b4;
        case 0x36d1b8u: goto label_36d1b8;
        case 0x36d1bcu: goto label_36d1bc;
        case 0x36d1c0u: goto label_36d1c0;
        case 0x36d1c4u: goto label_36d1c4;
        case 0x36d1c8u: goto label_36d1c8;
        case 0x36d1ccu: goto label_36d1cc;
        case 0x36d1d0u: goto label_36d1d0;
        case 0x36d1d4u: goto label_36d1d4;
        case 0x36d1d8u: goto label_36d1d8;
        case 0x36d1dcu: goto label_36d1dc;
        case 0x36d1e0u: goto label_36d1e0;
        case 0x36d1e4u: goto label_36d1e4;
        case 0x36d1e8u: goto label_36d1e8;
        case 0x36d1ecu: goto label_36d1ec;
        case 0x36d1f0u: goto label_36d1f0;
        case 0x36d1f4u: goto label_36d1f4;
        case 0x36d1f8u: goto label_36d1f8;
        case 0x36d1fcu: goto label_36d1fc;
        case 0x36d200u: goto label_36d200;
        case 0x36d204u: goto label_36d204;
        case 0x36d208u: goto label_36d208;
        case 0x36d20cu: goto label_36d20c;
        case 0x36d210u: goto label_36d210;
        case 0x36d214u: goto label_36d214;
        case 0x36d218u: goto label_36d218;
        case 0x36d21cu: goto label_36d21c;
        default: break;
    }

    ctx->pc = 0x36bf10u;

label_36bf10:
    // 0x36bf10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36bf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_36bf14:
    // 0x36bf14: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x36bf14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36bf18:
    // 0x36bf18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_36bf1c:
    // 0x36bf1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36bf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_36bf20:
    // 0x36bf20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36bf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36bf24:
    // 0x36bf24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x36bf24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36bf28:
    // 0x36bf28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36bf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36bf2c:
    // 0x36bf2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36bf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36bf30:
    // 0x36bf30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36bf30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36bf34:
    // 0x36bf34: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x36bf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36bf38:
    // 0x36bf38: 0xc10ca68  jal         func_4329A0
label_36bf3c:
    if (ctx->pc == 0x36BF3Cu) {
        ctx->pc = 0x36BF3Cu;
            // 0x36bf3c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x36BF40u;
        goto label_36bf40;
    }
    ctx->pc = 0x36BF38u;
    SET_GPR_U32(ctx, 31, 0x36BF40u);
    ctx->pc = 0x36BF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BF38u;
            // 0x36bf3c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BF40u; }
        if (ctx->pc != 0x36BF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BF40u; }
        if (ctx->pc != 0x36BF40u) { return; }
    }
    ctx->pc = 0x36BF40u;
label_36bf40:
    // 0x36bf40: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36bf44:
    // 0x36bf44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36bf48:
    // 0x36bf48: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x36bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_36bf4c:
    // 0x36bf4c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x36bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_36bf50:
    // 0x36bf50: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x36bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_36bf54:
    // 0x36bf54: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x36bf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_36bf58:
    // 0x36bf58: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x36bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_36bf5c:
    // 0x36bf5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36bf60:
    // 0x36bf60: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x36bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_36bf64:
    // 0x36bf64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36bf68:
    // 0x36bf68: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x36bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_36bf6c:
    // 0x36bf6c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x36bf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_36bf70:
    // 0x36bf70: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x36bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_36bf74:
    // 0x36bf74: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x36bf74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_36bf78:
    // 0x36bf78: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x36bf78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_36bf7c:
    // 0x36bf7c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x36bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_36bf80:
    // 0x36bf80: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x36bf80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_36bf84:
    // 0x36bf84: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x36bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_36bf88:
    // 0x36bf88: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x36bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_36bf8c:
    // 0x36bf8c: 0xc0582cc  jal         func_160B30
label_36bf90:
    if (ctx->pc == 0x36BF90u) {
        ctx->pc = 0x36BF90u;
            // 0x36bf90: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x36BF94u;
        goto label_36bf94;
    }
    ctx->pc = 0x36BF8Cu;
    SET_GPR_U32(ctx, 31, 0x36BF94u);
    ctx->pc = 0x36BF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BF8Cu;
            // 0x36bf90: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BF94u; }
        if (ctx->pc != 0x36BF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BF94u; }
        if (ctx->pc != 0x36BF94u) { return; }
    }
    ctx->pc = 0x36BF94u;
label_36bf94:
    // 0x36bf94: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36bf98:
    // 0x36bf98: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x36bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_36bf9c:
    // 0x36bf9c: 0x24636a28  addiu       $v1, $v1, 0x6A28
    ctx->pc = 0x36bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27176));
label_36bfa0:
    // 0x36bfa0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x36bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_36bfa4:
    // 0x36bfa4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x36bfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_36bfa8:
    // 0x36bfa8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36bfac:
    // 0x36bfac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36bfb0:
    // 0x36bfb0: 0xac446040  sw          $a0, 0x6040($v0)
    ctx->pc = 0x36bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24640), GPR_U32(ctx, 4));
label_36bfb4:
    // 0x36bfb4: 0x24636a40  addiu       $v1, $v1, 0x6A40
    ctx->pc = 0x36bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27200));
label_36bfb8:
    // 0x36bfb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36bfbc:
    // 0x36bfbc: 0x24426a78  addiu       $v0, $v0, 0x6A78
    ctx->pc = 0x36bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27256));
label_36bfc0:
    // 0x36bfc0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x36bfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_36bfc4:
    // 0x36bfc4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x36bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_36bfc8:
    // 0x36bfc8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x36bfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_36bfcc:
    // 0x36bfcc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x36bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_36bfd0:
    // 0x36bfd0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x36bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_36bfd4:
    // 0x36bfd4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x36bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_36bfd8:
    // 0x36bfd8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x36bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_36bfdc:
    // 0x36bfdc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x36bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_36bfe0:
    // 0x36bfe0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x36bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_36bfe4:
    // 0x36bfe4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x36bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_36bfe8:
    // 0x36bfe8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x36bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_36bfec:
    // 0x36bfec: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x36bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_36bff0:
    // 0x36bff0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x36bff0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_36bff4:
    // 0x36bff4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_36bff8:
    if (ctx->pc == 0x36BFF8u) {
        ctx->pc = 0x36BFFCu;
        goto label_36bffc;
    }
    ctx->pc = 0x36BFF4u;
    {
        const bool branch_taken_0x36bff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bff4) {
            ctx->pc = 0x36C088u;
            goto label_36c088;
        }
    }
    ctx->pc = 0x36BFFCu;
label_36bffc:
    // 0x36bffc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x36bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_36c000:
    // 0x36c000: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x36c000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_36c004:
    // 0x36c004: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x36c004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_36c008:
    // 0x36c008: 0xc040138  jal         func_1004E0
label_36c00c:
    if (ctx->pc == 0x36C00Cu) {
        ctx->pc = 0x36C00Cu;
            // 0x36c00c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x36C010u;
        goto label_36c010;
    }
    ctx->pc = 0x36C008u;
    SET_GPR_U32(ctx, 31, 0x36C010u);
    ctx->pc = 0x36C00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C008u;
            // 0x36c00c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C010u; }
        if (ctx->pc != 0x36C010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C010u; }
        if (ctx->pc != 0x36C010u) { return; }
    }
    ctx->pc = 0x36C010u;
label_36c010:
    // 0x36c010: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x36c010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_36c014:
    // 0x36c014: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x36c014u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_36c018:
    // 0x36c018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36c018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36c01c:
    // 0x36c01c: 0x24a5c0b0  addiu       $a1, $a1, -0x3F50
    ctx->pc = 0x36c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951088));
label_36c020:
    // 0x36c020: 0x24c6afb0  addiu       $a2, $a2, -0x5050
    ctx->pc = 0x36c020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946736));
label_36c024:
    // 0x36c024: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x36c024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_36c028:
    // 0x36c028: 0xc040840  jal         func_102100
label_36c02c:
    if (ctx->pc == 0x36C02Cu) {
        ctx->pc = 0x36C02Cu;
            // 0x36c02c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C030u;
        goto label_36c030;
    }
    ctx->pc = 0x36C028u;
    SET_GPR_U32(ctx, 31, 0x36C030u);
    ctx->pc = 0x36C02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C028u;
            // 0x36c02c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C030u; }
        if (ctx->pc != 0x36C030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C030u; }
        if (ctx->pc != 0x36C030u) { return; }
    }
    ctx->pc = 0x36C030u;
label_36c030:
    // 0x36c030: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x36c030u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_36c034:
    // 0x36c034: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36c034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36c038:
    // 0x36c038: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x36c038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_36c03c:
    // 0x36c03c: 0xc0788fc  jal         func_1E23F0
label_36c040:
    if (ctx->pc == 0x36C040u) {
        ctx->pc = 0x36C040u;
            // 0x36c040: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C044u;
        goto label_36c044;
    }
    ctx->pc = 0x36C03Cu;
    SET_GPR_U32(ctx, 31, 0x36C044u);
    ctx->pc = 0x36C040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C03Cu;
            // 0x36c040: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C044u; }
        if (ctx->pc != 0x36C044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C044u; }
        if (ctx->pc != 0x36C044u) { return; }
    }
    ctx->pc = 0x36C044u;
label_36c044:
    // 0x36c044: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x36c044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_36c048:
    // 0x36c048: 0xc0788fc  jal         func_1E23F0
label_36c04c:
    if (ctx->pc == 0x36C04Cu) {
        ctx->pc = 0x36C04Cu;
            // 0x36c04c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C050u;
        goto label_36c050;
    }
    ctx->pc = 0x36C048u;
    SET_GPR_U32(ctx, 31, 0x36C050u);
    ctx->pc = 0x36C04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C048u;
            // 0x36c04c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C050u; }
        if (ctx->pc != 0x36C050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C050u; }
        if (ctx->pc != 0x36C050u) { return; }
    }
    ctx->pc = 0x36C050u;
label_36c050:
    // 0x36c050: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36c050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36c054:
    // 0x36c054: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x36c054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_36c058:
    // 0x36c058: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x36c058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_36c05c:
    // 0x36c05c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x36c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_36c060:
    // 0x36c060: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36c060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36c064:
    // 0x36c064: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x36c064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_36c068:
    // 0x36c068: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x36c068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_36c06c:
    // 0x36c06c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_36c070:
    // 0x36c070: 0xc0a997c  jal         func_2A65F0
label_36c074:
    if (ctx->pc == 0x36C074u) {
        ctx->pc = 0x36C074u;
            // 0x36c074: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x36C078u;
        goto label_36c078;
    }
    ctx->pc = 0x36C070u;
    SET_GPR_U32(ctx, 31, 0x36C078u);
    ctx->pc = 0x36C074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C070u;
            // 0x36c074: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C078u; }
        if (ctx->pc != 0x36C078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C078u; }
        if (ctx->pc != 0x36C078u) { return; }
    }
    ctx->pc = 0x36C078u;
label_36c078:
    // 0x36c078: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36c078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_36c07c:
    // 0x36c07c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x36c07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_36c080:
    // 0x36c080: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_36c084:
    if (ctx->pc == 0x36C084u) {
        ctx->pc = 0x36C084u;
            // 0x36c084: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x36C088u;
        goto label_36c088;
    }
    ctx->pc = 0x36C080u;
    {
        const bool branch_taken_0x36c080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C080u;
            // 0x36c084: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c080) {
            ctx->pc = 0x36C054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36c054;
        }
    }
    ctx->pc = 0x36C088u;
label_36c088:
    // 0x36c088: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x36c088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36c08c:
    // 0x36c08c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36c08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_36c090:
    // 0x36c090: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36c090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36c094:
    // 0x36c094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36c094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36c098:
    // 0x36c098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36c09c:
    // 0x36c09c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36c0a0:
    // 0x36c0a0: 0x3e00008  jr          $ra
label_36c0a4:
    if (ctx->pc == 0x36C0A4u) {
        ctx->pc = 0x36C0A4u;
            // 0x36c0a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x36C0A8u;
        goto label_36c0a8;
    }
    ctx->pc = 0x36C0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C0A0u;
            // 0x36c0a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36C0A8u;
label_36c0a8:
    // 0x36c0a8: 0x0  nop
    ctx->pc = 0x36c0a8u;
    // NOP
label_36c0ac:
    // 0x36c0ac: 0x0  nop
    ctx->pc = 0x36c0acu;
    // NOP
label_36c0b0:
    // 0x36c0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36c0b4:
    // 0x36c0b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36c0b8:
    // 0x36c0b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36c0bc:
    // 0x36c0bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36c0bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36c0c0:
    // 0x36c0c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36c0c4:
    // 0x36c0c4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x36c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_36c0c8:
    // 0x36c0c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36c0cc:
    // 0x36c0cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_36c0d0:
    // 0x36c0d0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x36c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_36c0d4:
    // 0x36c0d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36c0d8:
    // 0x36c0d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x36c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_36c0dc:
    // 0x36c0dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36c0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36c0e0:
    // 0x36c0e0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x36c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_36c0e4:
    // 0x36c0e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x36c0e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_36c0e8:
    // 0x36c0e8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x36c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_36c0ec:
    // 0x36c0ec: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x36c0ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_36c0f0:
    // 0x36c0f0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x36c0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_36c0f4:
    // 0x36c0f4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x36c0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_36c0f8:
    // 0x36c0f8: 0xc04cbd8  jal         func_132F60
label_36c0fc:
    if (ctx->pc == 0x36C0FCu) {
        ctx->pc = 0x36C0FCu;
            // 0x36c0fc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x36C100u;
        goto label_36c100;
    }
    ctx->pc = 0x36C0F8u;
    SET_GPR_U32(ctx, 31, 0x36C100u);
    ctx->pc = 0x36C0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C0F8u;
            // 0x36c0fc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C100u; }
        if (ctx->pc != 0x36C100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C100u; }
        if (ctx->pc != 0x36C100u) { return; }
    }
    ctx->pc = 0x36C100u;
label_36c100:
    // 0x36c100: 0xc04c968  jal         func_1325A0
label_36c104:
    if (ctx->pc == 0x36C104u) {
        ctx->pc = 0x36C104u;
            // 0x36c104: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x36C108u;
        goto label_36c108;
    }
    ctx->pc = 0x36C100u;
    SET_GPR_U32(ctx, 31, 0x36C108u);
    ctx->pc = 0x36C104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C100u;
            // 0x36c104: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C108u; }
        if (ctx->pc != 0x36C108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C108u; }
        if (ctx->pc != 0x36C108u) { return; }
    }
    ctx->pc = 0x36C108u;
label_36c108:
    // 0x36c108: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36c108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36c10c:
    // 0x36c10c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x36c10cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_36c110:
    // 0x36c110: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x36c110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_36c114:
    // 0x36c114: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x36c114u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_36c118:
    // 0x36c118: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x36c118u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_36c11c:
    // 0x36c11c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x36c11cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_36c120:
    // 0x36c120: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x36c120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_36c124:
    // 0x36c124: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36c124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36c128:
    // 0x36c128: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x36c128u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_36c12c:
    // 0x36c12c: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x36c12cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
label_36c130:
    // 0x36c130: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x36c130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
label_36c134:
    // 0x36c134: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x36c134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
label_36c138:
    // 0x36c138: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x36c138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
label_36c13c:
    // 0x36c13c: 0x24846ae0  addiu       $a0, $a0, 0x6AE0
    ctx->pc = 0x36c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27360));
label_36c140:
    // 0x36c140: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x36c140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_36c144:
    // 0x36c144: 0x24636b20  addiu       $v1, $v1, 0x6B20
    ctx->pc = 0x36c144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27424));
label_36c148:
    // 0x36c148: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x36c148u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_36c14c:
    // 0x36c14c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36c14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36c150:
    // 0x36c150: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x36c150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
label_36c154:
    // 0x36c154: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x36c154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_36c158:
    // 0x36c158: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x36c158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_36c15c:
    // 0x36c15c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x36c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_36c160:
    // 0x36c160: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x36c160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_36c164:
    // 0x36c164: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x36c164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_36c168:
    // 0x36c168: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x36c168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_36c16c:
    // 0x36c16c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x36c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_36c170:
    // 0x36c170: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x36c170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_36c174:
    // 0x36c174: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x36c174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_36c178:
    // 0x36c178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36c17c:
    // 0x36c17c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36c180:
    // 0x36c180: 0x3e00008  jr          $ra
label_36c184:
    if (ctx->pc == 0x36C184u) {
        ctx->pc = 0x36C184u;
            // 0x36c184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36C188u;
        goto label_36c188;
    }
    ctx->pc = 0x36C180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C180u;
            // 0x36c184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36C188u;
label_36c188:
    // 0x36c188: 0x0  nop
    ctx->pc = 0x36c188u;
    // NOP
label_36c18c:
    // 0x36c18c: 0x0  nop
    ctx->pc = 0x36c18cu;
    // NOP
label_36c190:
    // 0x36c190: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x36c190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_36c194:
    // 0x36c194: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x36c194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_36c198:
    // 0x36c198: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x36c198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_36c19c:
    // 0x36c19c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x36c19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_36c1a0:
    // 0x36c1a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36c1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_36c1a4:
    // 0x36c1a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36c1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_36c1a8:
    // 0x36c1a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36c1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36c1ac:
    // 0x36c1ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36c1b0:
    // 0x36c1b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36c1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36c1b4:
    // 0x36c1b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36c1b8:
    // 0x36c1b8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x36c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_36c1bc:
    // 0x36c1bc: 0xc4801970  lwc1        $f0, 0x1970($a0)
    ctx->pc = 0x36c1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36c1c0:
    // 0x36c1c0: 0xc4621974  lwc1        $f2, 0x1974($v1)
    ctx->pc = 0x36c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36c1c4:
    // 0x36c1c4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x36c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_36c1c8:
    // 0x36c1c8: 0xc4811978  lwc1        $f1, 0x1978($a0)
    ctx->pc = 0x36c1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36c1cc:
    // 0x36c1cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x36c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_36c1d0:
    // 0x36c1d0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x36c1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_36c1d4:
    // 0x36c1d4: 0xc460197c  lwc1        $f0, 0x197C($v1)
    ctx->pc = 0x36c1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36c1d8:
    // 0x36c1d8: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x36c1d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_36c1dc:
    // 0x36c1dc: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x36c1dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_36c1e0:
    // 0x36c1e0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x36c1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_36c1e4:
    // 0x36c1e4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x36c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_36c1e8:
    // 0x36c1e8: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x36c1e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_36c1ec:
    // 0x36c1ec: 0x7fa400b0  sq          $a0, 0xB0($sp)
    ctx->pc = 0x36c1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 4));
label_36c1f0:
    // 0x36c1f0: 0x8cc40db0  lw          $a0, 0xDB0($a2)
    ctx->pc = 0x36c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3504)));
label_36c1f4:
    // 0x36c1f4: 0x148300d2  bne         $a0, $v1, . + 4 + (0xD2 << 2)
label_36c1f8:
    if (ctx->pc == 0x36C1F8u) {
        ctx->pc = 0x36C1F8u;
            // 0x36c1f8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C1FCu;
        goto label_36c1fc;
    }
    ctx->pc = 0x36C1F4u;
    {
        const bool branch_taken_0x36c1f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x36C1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C1F4u;
            // 0x36c1f8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c1f4) {
            ctx->pc = 0x36C540u;
            goto label_36c540;
        }
    }
    ctx->pc = 0x36C1FCu;
label_36c1fc:
    // 0x36c1fc: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x36c1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_36c200:
    // 0x36c200: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36c204:
    // 0x36c204: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x36c204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_36c208:
    // 0x36c208: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x36c208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_36c20c:
    // 0x36c20c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x36c20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_36c210:
    // 0x36c210: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_36c214:
    if (ctx->pc == 0x36C214u) {
        ctx->pc = 0x36C214u;
            // 0x36c214: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x36C218u;
        goto label_36c218;
    }
    ctx->pc = 0x36C210u;
    {
        const bool branch_taken_0x36c210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c210) {
            ctx->pc = 0x36C214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36C210u;
            // 0x36c214: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36C224u;
            goto label_36c224;
        }
    }
    ctx->pc = 0x36C218u;
label_36c218:
    // 0x36c218: 0x100000ca  b           . + 4 + (0xCA << 2)
label_36c21c:
    if (ctx->pc == 0x36C21Cu) {
        ctx->pc = 0x36C21Cu;
            // 0x36c21c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x36C220u;
        goto label_36c220;
    }
    ctx->pc = 0x36C218u;
    {
        const bool branch_taken_0x36c218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C218u;
            // 0x36c21c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c218) {
            ctx->pc = 0x36C544u;
            goto label_36c544;
        }
    }
    ctx->pc = 0x36C220u;
label_36c220:
    // 0x36c220: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x36c220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_36c224:
    // 0x36c224: 0xc04f278  jal         func_13C9E0
label_36c228:
    if (ctx->pc == 0x36C228u) {
        ctx->pc = 0x36C228u;
            // 0x36c228: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x36C22Cu;
        goto label_36c22c;
    }
    ctx->pc = 0x36C224u;
    SET_GPR_U32(ctx, 31, 0x36C22Cu);
    ctx->pc = 0x36C228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C224u;
            // 0x36c228: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C22Cu; }
        if (ctx->pc != 0x36C22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C22Cu; }
        if (ctx->pc != 0x36C22Cu) { return; }
    }
    ctx->pc = 0x36C22Cu;
label_36c22c:
    // 0x36c22c: 0x8e460064  lw          $a2, 0x64($s2)
    ctx->pc = 0x36c22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_36c230:
    // 0x36c230: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x36c230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_36c234:
    // 0x36c234: 0xc04cdd0  jal         func_133740
label_36c238:
    if (ctx->pc == 0x36C238u) {
        ctx->pc = 0x36C238u;
            // 0x36c238: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x36C23Cu;
        goto label_36c23c;
    }
    ctx->pc = 0x36C234u;
    SET_GPR_U32(ctx, 31, 0x36C23Cu);
    ctx->pc = 0x36C238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C234u;
            // 0x36c238: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C23Cu; }
        if (ctx->pc != 0x36C23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C23Cu; }
        if (ctx->pc != 0x36C23Cu) { return; }
    }
    ctx->pc = 0x36C23Cu;
label_36c23c:
    // 0x36c23c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x36c23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_36c240:
    // 0x36c240: 0xc04ce80  jal         func_133A00
label_36c244:
    if (ctx->pc == 0x36C244u) {
        ctx->pc = 0x36C244u;
            // 0x36c244: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x36C248u;
        goto label_36c248;
    }
    ctx->pc = 0x36C240u;
    SET_GPR_U32(ctx, 31, 0x36C248u);
    ctx->pc = 0x36C244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C240u;
            // 0x36c244: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C248u; }
        if (ctx->pc != 0x36C248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C248u; }
        if (ctx->pc != 0x36C248u) { return; }
    }
    ctx->pc = 0x36C248u;
label_36c248:
    // 0x36c248: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x36c248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_36c24c:
    // 0x36c24c: 0xc04ccf4  jal         func_1333D0
label_36c250:
    if (ctx->pc == 0x36C250u) {
        ctx->pc = 0x36C250u;
            // 0x36c250: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x36C254u;
        goto label_36c254;
    }
    ctx->pc = 0x36C24Cu;
    SET_GPR_U32(ctx, 31, 0x36C254u);
    ctx->pc = 0x36C250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C24Cu;
            // 0x36c250: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C254u; }
        if (ctx->pc != 0x36C254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C254u; }
        if (ctx->pc != 0x36C254u) { return; }
    }
    ctx->pc = 0x36C254u;
label_36c254:
    // 0x36c254: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x36c254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_36c258:
    // 0x36c258: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36c258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_36c25c:
    // 0x36c25c: 0xc04cc04  jal         func_133010
label_36c260:
    if (ctx->pc == 0x36C260u) {
        ctx->pc = 0x36C260u;
            // 0x36c260: 0x24a54d20  addiu       $a1, $a1, 0x4D20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19744));
        ctx->pc = 0x36C264u;
        goto label_36c264;
    }
    ctx->pc = 0x36C25Cu;
    SET_GPR_U32(ctx, 31, 0x36C264u);
    ctx->pc = 0x36C260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C25Cu;
            // 0x36c260: 0x24a54d20  addiu       $a1, $a1, 0x4D20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C264u; }
        if (ctx->pc != 0x36C264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C264u; }
        if (ctx->pc != 0x36C264u) { return; }
    }
    ctx->pc = 0x36C264u;
label_36c264:
    // 0x36c264: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x36c264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_36c268:
    // 0x36c268: 0xc04f2b8  jal         func_13CAE0
label_36c26c:
    if (ctx->pc == 0x36C26Cu) {
        ctx->pc = 0x36C26Cu;
            // 0x36c26c: 0x24051fff  addiu       $a1, $zero, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
        ctx->pc = 0x36C270u;
        goto label_36c270;
    }
    ctx->pc = 0x36C268u;
    SET_GPR_U32(ctx, 31, 0x36C270u);
    ctx->pc = 0x36C26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C268u;
            // 0x36c26c: 0x24051fff  addiu       $a1, $zero, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C270u; }
        if (ctx->pc != 0x36C270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C270u; }
        if (ctx->pc != 0x36C270u) { return; }
    }
    ctx->pc = 0x36C270u;
label_36c270:
    // 0x36c270: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x36c270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_36c274:
    // 0x36c274: 0xc04f2b8  jal         func_13CAE0
label_36c278:
    if (ctx->pc == 0x36C278u) {
        ctx->pc = 0x36C278u;
            // 0x36c278: 0x2405038e  addiu       $a1, $zero, 0x38E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 910));
        ctx->pc = 0x36C27Cu;
        goto label_36c27c;
    }
    ctx->pc = 0x36C274u;
    SET_GPR_U32(ctx, 31, 0x36C27Cu);
    ctx->pc = 0x36C278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C274u;
            // 0x36c278: 0x2405038e  addiu       $a1, $zero, 0x38E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 910));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C27Cu; }
        if (ctx->pc != 0x36C27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C27Cu; }
        if (ctx->pc != 0x36C27Cu) { return; }
    }
    ctx->pc = 0x36C27Cu;
label_36c27c:
    // 0x36c27c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36c27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_36c280:
    // 0x36c280: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x36c280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_36c284:
    // 0x36c284: 0xc04cca0  jal         func_133280
label_36c288:
    if (ctx->pc == 0x36C288u) {
        ctx->pc = 0x36C288u;
            // 0x36c288: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C28Cu;
        goto label_36c28c;
    }
    ctx->pc = 0x36C284u;
    SET_GPR_U32(ctx, 31, 0x36C28Cu);
    ctx->pc = 0x36C288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C284u;
            // 0x36c288: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C28Cu; }
        if (ctx->pc != 0x36C28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C28Cu; }
        if (ctx->pc != 0x36C28Cu) { return; }
    }
    ctx->pc = 0x36C28Cu;
label_36c28c:
    // 0x36c28c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_36c290:
    // 0x36c290: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x36c290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_36c294:
    // 0x36c294: 0xc04cca0  jal         func_133280
label_36c298:
    if (ctx->pc == 0x36C298u) {
        ctx->pc = 0x36C298u;
            // 0x36c298: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x36C29Cu;
        goto label_36c29c;
    }
    ctx->pc = 0x36C294u;
    SET_GPR_U32(ctx, 31, 0x36C29Cu);
    ctx->pc = 0x36C298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C294u;
            // 0x36c298: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C29Cu; }
        if (ctx->pc != 0x36C29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C29Cu; }
        if (ctx->pc != 0x36C29Cu) { return; }
    }
    ctx->pc = 0x36C29Cu;
label_36c29c:
    // 0x36c29c: 0x8e530078  lw          $s3, 0x78($s2)
    ctx->pc = 0x36c29cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_36c2a0:
    // 0x36c2a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36c2a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36c2a4:
    // 0x36c2a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36c2a8:
    // 0x36c2a8: 0x222a004  sllv        $s4, $v0, $s1
    ctx->pc = 0x36c2a8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_36c2ac:
    // 0x36c2ac: 0x2741024  and         $v0, $s3, $s4
    ctx->pc = 0x36c2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 20));
label_36c2b0:
    // 0x36c2b0: 0x54400098  bnel        $v0, $zero, . + 4 + (0x98 << 2)
label_36c2b4:
    if (ctx->pc == 0x36C2B4u) {
        ctx->pc = 0x36C2B4u;
            // 0x36c2b4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x36C2B8u;
        goto label_36c2b8;
    }
    ctx->pc = 0x36C2B0u;
    {
        const bool branch_taken_0x36c2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c2b0) {
            ctx->pc = 0x36C2B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36C2B0u;
            // 0x36c2b4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36C514u;
            goto label_36c514;
        }
    }
    ctx->pc = 0x36C2B8u;
label_36c2b8:
    // 0x36c2b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36c2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_36c2bc:
    // 0x36c2bc: 0xc04cc34  jal         func_1330D0
label_36c2c0:
    if (ctx->pc == 0x36C2C0u) {
        ctx->pc = 0x36C2C0u;
            // 0x36c2c0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x36C2C4u;
        goto label_36c2c4;
    }
    ctx->pc = 0x36C2BCu;
    SET_GPR_U32(ctx, 31, 0x36C2C4u);
    ctx->pc = 0x36C2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C2BCu;
            // 0x36c2c0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C2C4u; }
        if (ctx->pc != 0x36C2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C2C4u; }
        if (ctx->pc != 0x36C2C4u) { return; }
    }
    ctx->pc = 0x36C2C4u;
label_36c2c4:
    // 0x36c2c4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x36c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_36c2c8:
    // 0x36c2c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36c2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_36c2cc:
    // 0x36c2cc: 0x0  nop
    ctx->pc = 0x36c2ccu;
    // NOP
label_36c2d0:
    // 0x36c2d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x36c2d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36c2d4:
    // 0x36c2d4: 0x4500008e  bc1f        . + 4 + (0x8E << 2)
label_36c2d8:
    if (ctx->pc == 0x36C2D8u) {
        ctx->pc = 0x36C2DCu;
        goto label_36c2dc;
    }
    ctx->pc = 0x36C2D4u;
    {
        const bool branch_taken_0x36c2d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36c2d4) {
            ctx->pc = 0x36C510u;
            goto label_36c510;
        }
    }
    ctx->pc = 0x36C2DCu;
label_36c2dc:
    // 0x36c2dc: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x36c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_36c2e0:
    // 0x36c2e0: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x36c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_36c2e4:
    // 0x36c2e4: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x36c2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
label_36c2e8:
    // 0x36c2e8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x36c2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_36c2ec:
    // 0x36c2ec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x36c2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_36c2f0:
    // 0x36c2f0: 0x320f809  jalr        $t9
label_36c2f4:
    if (ctx->pc == 0x36C2F4u) {
        ctx->pc = 0x36C2F4u;
            // 0x36c2f4: 0x34450ba9  ori         $a1, $v0, 0xBA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2985);
        ctx->pc = 0x36C2F8u;
        goto label_36c2f8;
    }
    ctx->pc = 0x36C2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36C2F8u);
        ctx->pc = 0x36C2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C2F0u;
            // 0x36c2f4: 0x34450ba9  ori         $a1, $v0, 0xBA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2985);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36C2F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36C2F8u; }
            if (ctx->pc != 0x36C2F8u) { return; }
        }
        }
    }
    ctx->pc = 0x36C2F8u;
label_36c2f8:
    // 0x36c2f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36c2f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36c2fc:
    // 0x36c2fc: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x36c2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_36c300:
    // 0x36c300: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x36c300u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_36c304:
    // 0x36c304: 0xc04cbd8  jal         func_132F60
label_36c308:
    if (ctx->pc == 0x36C308u) {
        ctx->pc = 0x36C308u;
            // 0x36c308: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x36C30Cu;
        goto label_36c30c;
    }
    ctx->pc = 0x36C304u;
    SET_GPR_U32(ctx, 31, 0x36C30Cu);
    ctx->pc = 0x36C308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C304u;
            // 0x36c308: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C30Cu; }
        if (ctx->pc != 0x36C30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C30Cu; }
        if (ctx->pc != 0x36C30Cu) { return; }
    }
    ctx->pc = 0x36C30Cu;
label_36c30c:
    // 0x36c30c: 0xae000de8  sw          $zero, 0xDE8($s0)
    ctx->pc = 0x36c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 0));
label_36c310:
    // 0x36c310: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x36c310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_36c314:
    // 0x36c314: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x36c314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
label_36c318:
    // 0x36c318: 0x8e130d74  lw          $s3, 0xD74($s0)
    ctx->pc = 0x36c318u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_36c31c:
    // 0x36c31c: 0x3c02ffdb  lui         $v0, 0xFFDB
    ctx->pc = 0x36c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65499 << 16));
label_36c320:
    // 0x36c320: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x36c320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_36c324:
    // 0x36c324: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x36c324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_36c328:
    // 0x36c328: 0x8e6202c8  lw          $v0, 0x2C8($s3)
    ctx->pc = 0x36c328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
label_36c32c:
    // 0x36c32c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x36c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_36c330:
    // 0x36c330: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x36c330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_36c334:
    // 0x36c334: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x36c334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_36c338:
    // 0x36c338: 0xc0a545c  jal         func_295170
label_36c33c:
    if (ctx->pc == 0x36C33Cu) {
        ctx->pc = 0x36C33Cu;
            // 0x36c33c: 0x62a824  and         $s5, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x36C340u;
        goto label_36c340;
    }
    ctx->pc = 0x36C338u;
    SET_GPR_U32(ctx, 31, 0x36C340u);
    ctx->pc = 0x36C33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C338u;
            // 0x36c33c: 0x62a824  and         $s5, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C340u; }
        if (ctx->pc != 0x36C340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C340u; }
        if (ctx->pc != 0x36C340u) { return; }
    }
    ctx->pc = 0x36C340u;
label_36c340:
    // 0x36c340: 0xac55002c  sw          $s5, 0x2C($v0)
    ctx->pc = 0x36c340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 21));
label_36c344:
    // 0x36c344: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36c344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36c348:
    // 0x36c348: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x36c348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_36c34c:
    // 0x36c34c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x36c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_36c350:
    // 0x36c350: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_36c354:
    // 0x36c354: 0xc08bf20  jal         func_22FC80
label_36c358:
    if (ctx->pc == 0x36C358u) {
        ctx->pc = 0x36C358u;
            // 0x36c358: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C35Cu;
        goto label_36c35c;
    }
    ctx->pc = 0x36C354u;
    SET_GPR_U32(ctx, 31, 0x36C35Cu);
    ctx->pc = 0x36C358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C354u;
            // 0x36c358: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C35Cu; }
        if (ctx->pc != 0x36C35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C35Cu; }
        if (ctx->pc != 0x36C35Cu) { return; }
    }
    ctx->pc = 0x36C35Cu;
label_36c35c:
    // 0x36c35c: 0x260403a0  addiu       $a0, $s0, 0x3A0
    ctx->pc = 0x36c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
label_36c360:
    // 0x36c360: 0xc04cc04  jal         func_133010
label_36c364:
    if (ctx->pc == 0x36C364u) {
        ctx->pc = 0x36C364u;
            // 0x36c364: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x36C368u;
        goto label_36c368;
    }
    ctx->pc = 0x36C360u;
    SET_GPR_U32(ctx, 31, 0x36C368u);
    ctx->pc = 0x36C364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C360u;
            // 0x36c364: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C368u; }
        if (ctx->pc != 0x36C368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C368u; }
        if (ctx->pc != 0x36C368u) { return; }
    }
    ctx->pc = 0x36C368u;
label_36c368:
    // 0x36c368: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x36c368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36c36c:
    // 0x36c36c: 0x111b40  sll         $v1, $s1, 13
    ctx->pc = 0x36c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 13));
label_36c370:
    // 0x36c370: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x36c370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_36c374:
    // 0x36c374: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x36c374u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_36c378:
    // 0x36c378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36c37c:
    // 0x36c37c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36c37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36c380:
    // 0x36c380: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x36c380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_36c384:
    // 0x36c384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36c388:
    // 0x36c388: 0x320f809  jalr        $t9
label_36c38c:
    if (ctx->pc == 0x36C38Cu) {
        ctx->pc = 0x36C38Cu;
            // 0x36c38c: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x36C390u;
        goto label_36c390;
    }
    ctx->pc = 0x36C388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36C390u);
        ctx->pc = 0x36C38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C388u;
            // 0x36c38c: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36C390u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36C390u; }
            if (ctx->pc != 0x36C390u) { return; }
        }
        }
    }
    ctx->pc = 0x36C390u;
label_36c390:
    // 0x36c390: 0x8e150550  lw          $s5, 0x550($s0)
    ctx->pc = 0x36c390u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_36c394:
    // 0x36c394: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x36c394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_36c398:
    // 0x36c398: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36c398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_36c39c:
    // 0x36c39c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36c3a0:
    // 0x36c3a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x36c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36c3a4:
    // 0x36c3a4: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x36c3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_36c3a8:
    // 0x36c3a8: 0x82a2010c  lb          $v0, 0x10C($s5)
    ctx->pc = 0x36c3a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 268)));
label_36c3ac:
    // 0x36c3ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36c3acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36c3b0:
    // 0x36c3b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x36c3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_36c3b4:
    // 0x36c3b4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x36c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_36c3b8:
    // 0x36c3b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x36c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_36c3bc:
    // 0x36c3bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36c3c0:
    // 0x36c3c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x36c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_36c3c4:
    // 0x36c3c4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x36c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_36c3c8:
    // 0x36c3c8: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x36c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_36c3cc:
    // 0x36c3cc: 0x8eb90058  lw          $t9, 0x58($s5)
    ctx->pc = 0x36c3ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_36c3d0:
    // 0x36c3d0: 0x82a5010d  lb          $a1, 0x10D($s5)
    ctx->pc = 0x36c3d0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 269)));
label_36c3d4:
    // 0x36c3d4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x36c3d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_36c3d8:
    // 0x36c3d8: 0x320f809  jalr        $t9
label_36c3dc:
    if (ctx->pc == 0x36C3DCu) {
        ctx->pc = 0x36C3DCu;
            // 0x36c3dc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x36C3E0u;
        goto label_36c3e0;
    }
    ctx->pc = 0x36C3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36C3E0u);
        ctx->pc = 0x36C3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C3D8u;
            // 0x36c3dc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36C3E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36C3E0u; }
            if (ctx->pc != 0x36C3E0u) { return; }
        }
        }
    }
    ctx->pc = 0x36C3E0u;
label_36c3e0:
    // 0x36c3e0: 0x8eb90058  lw          $t9, 0x58($s5)
    ctx->pc = 0x36c3e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_36c3e4:
    // 0x36c3e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36c3e8:
    // 0x36c3e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x36c3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_36c3ec:
    // 0x36c3ec: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x36c3ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_36c3f0:
    // 0x36c3f0: 0x320f809  jalr        $t9
label_36c3f4:
    if (ctx->pc == 0x36C3F4u) {
        ctx->pc = 0x36C3F4u;
            // 0x36c3f4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C3F8u;
        goto label_36c3f8;
    }
    ctx->pc = 0x36C3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36C3F8u);
        ctx->pc = 0x36C3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C3F0u;
            // 0x36c3f4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36C3F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36C3F8u; }
            if (ctx->pc != 0x36C3F8u) { return; }
        }
        }
    }
    ctx->pc = 0x36C3F8u;
label_36c3f8:
    // 0x36c3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36c3fc:
    // 0x36c3fc: 0xc07649c  jal         func_1D9270
label_36c400:
    if (ctx->pc == 0x36C400u) {
        ctx->pc = 0x36C400u;
            // 0x36c400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C404u;
        goto label_36c404;
    }
    ctx->pc = 0x36C3FCu;
    SET_GPR_U32(ctx, 31, 0x36C404u);
    ctx->pc = 0x36C400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C3FCu;
            // 0x36c400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C404u; }
        if (ctx->pc != 0x36C404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C404u; }
        if (ctx->pc != 0x36C404u) { return; }
    }
    ctx->pc = 0x36C404u;
label_36c404:
    // 0x36c404: 0x8e450078  lw          $a1, 0x78($s2)
    ctx->pc = 0x36c404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_36c408:
    // 0x36c408: 0x2663c667  addiu       $v1, $s3, -0x3999
    ctx->pc = 0x36c408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952551));
label_36c40c:
    // 0x36c40c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x36c40cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_36c410:
    // 0x36c410: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36c410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36c414:
    // 0x36c414: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x36c414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_36c418:
    // 0x36c418: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x36c418u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_36c41c:
    // 0x36c41c: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x36c41cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
label_36c420:
    // 0x36c420: 0xae450078  sw          $a1, 0x78($s2)
    ctx->pc = 0x36c420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 5));
label_36c424:
    // 0x36c424: 0x8e070d98  lw          $a3, 0xD98($s0)
    ctx->pc = 0x36c424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_36c428:
    // 0x36c428: 0x8e45007c  lw          $a1, 0x7C($s2)
    ctx->pc = 0x36c428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_36c42c:
    // 0x36c42c: 0xe63004  sllv        $a2, $a2, $a3
    ctx->pc = 0x36c42cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
label_36c430:
    // 0x36c430: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x36c430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_36c434:
    // 0x36c434: 0xae45007c  sw          $a1, 0x7C($s2)
    ctx->pc = 0x36c434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 5));
label_36c438:
    // 0x36c438: 0x8e470070  lw          $a3, 0x70($s2)
    ctx->pc = 0x36c438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_36c43c:
    // 0x36c43c: 0x8e45006c  lw          $a1, 0x6C($s2)
    ctx->pc = 0x36c43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_36c440:
    // 0x36c440: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x36c440u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_36c444:
    // 0x36c444: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x36c444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_36c448:
    // 0x36c448: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x36c448u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_36c44c:
    // 0x36c44c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x36c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_36c450:
    // 0x36c450: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x36c450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_36c454:
    // 0x36c454: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x36c454u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_36c458:
    // 0x36c458: 0xacb00008  sw          $s0, 0x8($a1)
    ctx->pc = 0x36c458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
label_36c45c:
    // 0x36c45c: 0xacb1000c  sw          $s1, 0xC($a1)
    ctx->pc = 0x36c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
label_36c460:
    // 0x36c460: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x36c460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_36c464:
    // 0x36c464: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x36c464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_36c468:
    // 0x36c468: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36c468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_36c46c:
    // 0x36c46c: 0xae430070  sw          $v1, 0x70($s2)
    ctx->pc = 0x36c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
label_36c470:
    // 0x36c470: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x36c470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_36c474:
    // 0x36c474: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_36c478:
    if (ctx->pc == 0x36C478u) {
        ctx->pc = 0x36C478u;
            // 0x36c478: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C47Cu;
        goto label_36c47c;
    }
    ctx->pc = 0x36C474u;
    {
        const bool branch_taken_0x36c474 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x36C478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C474u;
            // 0x36c478: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c474) {
            ctx->pc = 0x36C48Cu;
            goto label_36c48c;
        }
    }
    ctx->pc = 0x36C47Cu;
label_36c47c:
    // 0x36c47c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x36c47cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_36c480:
    // 0x36c480: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_36c484:
    if (ctx->pc == 0x36C484u) {
        ctx->pc = 0x36C488u;
        goto label_36c488;
    }
    ctx->pc = 0x36C480u;
    {
        const bool branch_taken_0x36c480 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c480) {
            ctx->pc = 0x36C48Cu;
            goto label_36c48c;
        }
    }
    ctx->pc = 0x36C488u;
label_36c488:
    // 0x36c488: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x36c488u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36c48c:
    // 0x36c48c: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
label_36c490:
    if (ctx->pc == 0x36C490u) {
        ctx->pc = 0x36C494u;
        goto label_36c494;
    }
    ctx->pc = 0x36C48Cu;
    {
        const bool branch_taken_0x36c48c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c48c) {
            ctx->pc = 0x36C4A8u;
            goto label_36c4a8;
        }
    }
    ctx->pc = 0x36C494u;
label_36c494:
    // 0x36c494: 0xc075eb4  jal         func_1D7AD0
label_36c498:
    if (ctx->pc == 0x36C498u) {
        ctx->pc = 0x36C498u;
            // 0x36c498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C49Cu;
        goto label_36c49c;
    }
    ctx->pc = 0x36C494u;
    SET_GPR_U32(ctx, 31, 0x36C49Cu);
    ctx->pc = 0x36C498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C494u;
            // 0x36c498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C49Cu; }
        if (ctx->pc != 0x36C49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C49Cu; }
        if (ctx->pc != 0x36C49Cu) { return; }
    }
    ctx->pc = 0x36C49Cu;
label_36c49c:
    // 0x36c49c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_36c4a0:
    if (ctx->pc == 0x36C4A0u) {
        ctx->pc = 0x36C4A4u;
        goto label_36c4a4;
    }
    ctx->pc = 0x36C49Cu;
    {
        const bool branch_taken_0x36c49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c49c) {
            ctx->pc = 0x36C4A8u;
            goto label_36c4a8;
        }
    }
    ctx->pc = 0x36C4A4u;
label_36c4a4:
    // 0x36c4a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x36c4a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36c4a8:
    // 0x36c4a8: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_36c4ac:
    if (ctx->pc == 0x36C4ACu) {
        ctx->pc = 0x36C4ACu;
            // 0x36c4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C4B0u;
        goto label_36c4b0;
    }
    ctx->pc = 0x36C4A8u;
    {
        const bool branch_taken_0x36c4a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c4a8) {
            ctx->pc = 0x36C4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36C4A8u;
            // 0x36c4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36C4C4u;
            goto label_36c4c4;
        }
    }
    ctx->pc = 0x36C4B0u;
label_36c4b0:
    // 0x36c4b0: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x36c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_36c4b4:
    // 0x36c4b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x36c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_36c4b8:
    // 0x36c4b8: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_36c4bc:
    if (ctx->pc == 0x36C4BCu) {
        ctx->pc = 0x36C4C0u;
        goto label_36c4c0;
    }
    ctx->pc = 0x36C4B8u;
    {
        const bool branch_taken_0x36c4b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x36c4b8) {
            ctx->pc = 0x36C540u;
            goto label_36c540;
        }
    }
    ctx->pc = 0x36C4C0u;
label_36c4c0:
    // 0x36c4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36c4c4:
    // 0x36c4c4: 0xc07626c  jal         func_1D89B0
label_36c4c8:
    if (ctx->pc == 0x36C4C8u) {
        ctx->pc = 0x36C4C8u;
            // 0x36c4c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C4CCu;
        goto label_36c4cc;
    }
    ctx->pc = 0x36C4C4u;
    SET_GPR_U32(ctx, 31, 0x36C4CCu);
    ctx->pc = 0x36C4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C4C4u;
            // 0x36c4c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C4CCu; }
        if (ctx->pc != 0x36C4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C4CCu; }
        if (ctx->pc != 0x36C4CCu) { return; }
    }
    ctx->pc = 0x36C4CCu;
label_36c4cc:
    // 0x36c4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36c4d0:
    // 0x36c4d0: 0xc07626c  jal         func_1D89B0
label_36c4d4:
    if (ctx->pc == 0x36C4D4u) {
        ctx->pc = 0x36C4D4u;
            // 0x36c4d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36C4D8u;
        goto label_36c4d8;
    }
    ctx->pc = 0x36C4D0u;
    SET_GPR_U32(ctx, 31, 0x36C4D8u);
    ctx->pc = 0x36C4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C4D0u;
            // 0x36c4d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C4D8u; }
        if (ctx->pc != 0x36C4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C4D8u; }
        if (ctx->pc != 0x36C4D8u) { return; }
    }
    ctx->pc = 0x36C4D8u;
label_36c4d8:
    // 0x36c4d8: 0x820611aa  lb          $a2, 0x11AA($s0)
    ctx->pc = 0x36c4d8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_36c4dc:
    // 0x36c4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36c4e0:
    // 0x36c4e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36c4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36c4e4:
    // 0x36c4e4: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x36c4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_36c4e8:
    // 0x36c4e8: 0xc0762b4  jal         func_1D8AD0
label_36c4ec:
    if (ctx->pc == 0x36C4ECu) {
        ctx->pc = 0x36C4ECu;
            // 0x36c4ec: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x36C4F0u;
        goto label_36c4f0;
    }
    ctx->pc = 0x36C4E8u;
    SET_GPR_U32(ctx, 31, 0x36C4F0u);
    ctx->pc = 0x36C4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C4E8u;
            // 0x36c4ec: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AD0u;
    if (runtime->hasFunction(0x1D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C4F0u; }
        if (ctx->pc != 0x36C4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AD0_0x1d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C4F0u; }
        if (ctx->pc != 0x36C4F0u) { return; }
    }
    ctx->pc = 0x36C4F0u;
label_36c4f0:
    // 0x36c4f0: 0x820611aa  lb          $a2, 0x11AA($s0)
    ctx->pc = 0x36c4f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_36c4f4:
    // 0x36c4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36c4f8:
    // 0x36c4f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36c4fc:
    // 0x36c4fc: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x36c4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_36c500:
    // 0x36c500: 0xc0762b4  jal         func_1D8AD0
label_36c504:
    if (ctx->pc == 0x36C504u) {
        ctx->pc = 0x36C504u;
            // 0x36c504: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x36C508u;
        goto label_36c508;
    }
    ctx->pc = 0x36C500u;
    SET_GPR_U32(ctx, 31, 0x36C508u);
    ctx->pc = 0x36C504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C500u;
            // 0x36c504: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AD0u;
    if (runtime->hasFunction(0x1D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C508u; }
        if (ctx->pc != 0x36C508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AD0_0x1d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C508u; }
        if (ctx->pc != 0x36C508u) { return; }
    }
    ctx->pc = 0x36C508u;
label_36c508:
    // 0x36c508: 0x1000000d  b           . + 4 + (0xD << 2)
label_36c50c:
    if (ctx->pc == 0x36C50Cu) {
        ctx->pc = 0x36C510u;
        goto label_36c510;
    }
    ctx->pc = 0x36C508u;
    {
        const bool branch_taken_0x36c508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c508) {
            ctx->pc = 0x36C540u;
            goto label_36c540;
        }
    }
    ctx->pc = 0x36C510u;
label_36c510:
    // 0x36c510: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x36c510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_36c514:
    // 0x36c514: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x36c514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_36c518:
    // 0x36c518: 0xc04cca0  jal         func_133280
label_36c51c:
    if (ctx->pc == 0x36C51Cu) {
        ctx->pc = 0x36C51Cu;
            // 0x36c51c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C520u;
        goto label_36c520;
    }
    ctx->pc = 0x36C518u;
    SET_GPR_U32(ctx, 31, 0x36C520u);
    ctx->pc = 0x36C51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C518u;
            // 0x36c51c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C520u; }
        if (ctx->pc != 0x36C520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C520u; }
        if (ctx->pc != 0x36C520u) { return; }
    }
    ctx->pc = 0x36C520u;
label_36c520:
    // 0x36c520: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36c520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_36c524:
    // 0x36c524: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x36c524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_36c528:
    // 0x36c528: 0xc04cca0  jal         func_133280
label_36c52c:
    if (ctx->pc == 0x36C52Cu) {
        ctx->pc = 0x36C52Cu;
            // 0x36c52c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C530u;
        goto label_36c530;
    }
    ctx->pc = 0x36C528u;
    SET_GPR_U32(ctx, 31, 0x36C530u);
    ctx->pc = 0x36C52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C528u;
            // 0x36c52c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C530u; }
        if (ctx->pc != 0x36C530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C530u; }
        if (ctx->pc != 0x36C530u) { return; }
    }
    ctx->pc = 0x36C530u;
label_36c530:
    // 0x36c530: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36c530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_36c534:
    // 0x36c534: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x36c534u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_36c538:
    // 0x36c538: 0x5460ff5b  bnel        $v1, $zero, . + 4 + (-0xA5 << 2)
label_36c53c:
    if (ctx->pc == 0x36C53Cu) {
        ctx->pc = 0x36C53Cu;
            // 0x36c53c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36C540u;
        goto label_36c540;
    }
    ctx->pc = 0x36C538u;
    {
        const bool branch_taken_0x36c538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c538) {
            ctx->pc = 0x36C53Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36C538u;
            // 0x36c53c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36C2A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36c2a8;
        }
    }
    ctx->pc = 0x36C540u;
label_36c540:
    // 0x36c540: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x36c540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_36c544:
    // 0x36c544: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36c544u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_36c548:
    // 0x36c548: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36c548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_36c54c:
    // 0x36c54c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36c54cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36c550:
    // 0x36c550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36c550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36c554:
    // 0x36c554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36c558:
    // 0x36c558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36c55c:
    // 0x36c55c: 0x3e00008  jr          $ra
label_36c560:
    if (ctx->pc == 0x36C560u) {
        ctx->pc = 0x36C560u;
            // 0x36c560: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x36C564u;
        goto label_36c564;
    }
    ctx->pc = 0x36C55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C55Cu;
            // 0x36c560: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36C564u;
label_36c564:
    // 0x36c564: 0x0  nop
    ctx->pc = 0x36c564u;
    // NOP
label_36c568:
    // 0x36c568: 0x0  nop
    ctx->pc = 0x36c568u;
    // NOP
label_36c56c:
    // 0x36c56c: 0x0  nop
    ctx->pc = 0x36c56cu;
    // NOP
label_36c570:
    // 0x36c570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36c574:
    // 0x36c574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36c578:
    // 0x36c578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36c57c:
    // 0x36c57c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36c57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36c580:
    // 0x36c580: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x36c580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_36c584:
    // 0x36c584: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_36c588:
    if (ctx->pc == 0x36C588u) {
        ctx->pc = 0x36C588u;
            // 0x36c588: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->pc = 0x36C58Cu;
        goto label_36c58c;
    }
    ctx->pc = 0x36C584u;
    {
        const bool branch_taken_0x36c584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c584) {
            ctx->pc = 0x36C588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36C584u;
            // 0x36c588: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36C5ACu;
            goto label_36c5ac;
        }
    }
    ctx->pc = 0x36C58Cu;
label_36c58c:
    // 0x36c58c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36c590:
    if (ctx->pc == 0x36C590u) {
        ctx->pc = 0x36C590u;
            // 0x36c590: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x36C594u;
        goto label_36c594;
    }
    ctx->pc = 0x36C58Cu;
    {
        const bool branch_taken_0x36c58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c58c) {
            ctx->pc = 0x36C590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36C58Cu;
            // 0x36c590: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36C5A8u;
            goto label_36c5a8;
        }
    }
    ctx->pc = 0x36C594u;
label_36c594:
    // 0x36c594: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36c594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36c598:
    // 0x36c598: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36c598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36c59c:
    // 0x36c59c: 0x320f809  jalr        $t9
label_36c5a0:
    if (ctx->pc == 0x36C5A0u) {
        ctx->pc = 0x36C5A0u;
            // 0x36c5a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36C5A4u;
        goto label_36c5a4;
    }
    ctx->pc = 0x36C59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36C5A4u);
        ctx->pc = 0x36C5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C59Cu;
            // 0x36c5a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36C5A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36C5A4u; }
            if (ctx->pc != 0x36C5A4u) { return; }
        }
        }
    }
    ctx->pc = 0x36C5A4u;
label_36c5a4:
    // 0x36c5a4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x36c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_36c5a8:
    // 0x36c5a8: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x36c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_36c5ac:
    // 0x36c5ac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_36c5b0:
    if (ctx->pc == 0x36C5B0u) {
        ctx->pc = 0x36C5B0u;
            // 0x36c5b0: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x36C5B4u;
        goto label_36c5b4;
    }
    ctx->pc = 0x36C5ACu;
    {
        const bool branch_taken_0x36c5ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c5ac) {
            ctx->pc = 0x36C5B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36C5ACu;
            // 0x36c5b0: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36C5C0u;
            goto label_36c5c0;
        }
    }
    ctx->pc = 0x36C5B4u;
label_36c5b4:
    // 0x36c5b4: 0xc04008c  jal         func_100230
label_36c5b8:
    if (ctx->pc == 0x36C5B8u) {
        ctx->pc = 0x36C5BCu;
        goto label_36c5bc;
    }
    ctx->pc = 0x36C5B4u;
    SET_GPR_U32(ctx, 31, 0x36C5BCu);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C5BCu; }
        if (ctx->pc != 0x36C5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C5BCu; }
        if (ctx->pc != 0x36C5BCu) { return; }
    }
    ctx->pc = 0x36C5BCu;
label_36c5bc:
    // 0x36c5bc: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x36c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_36c5c0:
    // 0x36c5c0: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x36c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_36c5c4:
    // 0x36c5c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36c5c8:
    if (ctx->pc == 0x36C5C8u) {
        ctx->pc = 0x36C5C8u;
            // 0x36c5c8: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->pc = 0x36C5CCu;
        goto label_36c5cc;
    }
    ctx->pc = 0x36C5C4u;
    {
        const bool branch_taken_0x36c5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c5c4) {
            ctx->pc = 0x36C5C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36C5C4u;
            // 0x36c5c8: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36C5E0u;
            goto label_36c5e0;
        }
    }
    ctx->pc = 0x36C5CCu;
label_36c5cc:
    // 0x36c5cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36c5ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36c5d0:
    // 0x36c5d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36c5d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36c5d4:
    // 0x36c5d4: 0x320f809  jalr        $t9
label_36c5d8:
    if (ctx->pc == 0x36C5D8u) {
        ctx->pc = 0x36C5D8u;
            // 0x36c5d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36C5DCu;
        goto label_36c5dc;
    }
    ctx->pc = 0x36C5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36C5DCu);
        ctx->pc = 0x36C5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C5D4u;
            // 0x36c5d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36C5DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36C5DCu; }
            if (ctx->pc != 0x36C5DCu) { return; }
        }
        }
    }
    ctx->pc = 0x36C5DCu;
label_36c5dc:
    // 0x36c5dc: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x36c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_36c5e0:
    // 0x36c5e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36c5e4:
    // 0x36c5e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36c5e8:
    // 0x36c5e8: 0x3e00008  jr          $ra
label_36c5ec:
    if (ctx->pc == 0x36C5ECu) {
        ctx->pc = 0x36C5ECu;
            // 0x36c5ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36C5F0u;
        goto label_36c5f0;
    }
    ctx->pc = 0x36C5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C5E8u;
            // 0x36c5ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36C5F0u;
label_36c5f0:
    // 0x36c5f0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x36c5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_36c5f4:
    // 0x36c5f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36c5f8:
    // 0x36c5f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36c5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_36c5fc:
    // 0x36c5fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36c5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36c600:
    // 0x36c600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36c604:
    // 0x36c604: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36c604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36c608:
    // 0x36c608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36c60c:
    // 0x36c60c: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x36c60cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_36c610:
    // 0x36c610: 0xc04f26c  jal         func_13C9B0
label_36c614:
    if (ctx->pc == 0x36C614u) {
        ctx->pc = 0x36C614u;
            // 0x36c614: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x36C618u;
        goto label_36c618;
    }
    ctx->pc = 0x36C610u;
    SET_GPR_U32(ctx, 31, 0x36C618u);
    ctx->pc = 0x36C614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C610u;
            // 0x36c614: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C618u; }
        if (ctx->pc != 0x36C618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C618u; }
        if (ctx->pc != 0x36C618u) { return; }
    }
    ctx->pc = 0x36C618u;
label_36c618:
    // 0x36c618: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x36c618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_36c61c:
    // 0x36c61c: 0xc04f278  jal         func_13C9E0
label_36c620:
    if (ctx->pc == 0x36C620u) {
        ctx->pc = 0x36C620u;
            // 0x36c620: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x36C624u;
        goto label_36c624;
    }
    ctx->pc = 0x36C61Cu;
    SET_GPR_U32(ctx, 31, 0x36C624u);
    ctx->pc = 0x36C620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C61Cu;
            // 0x36c620: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C624u; }
        if (ctx->pc != 0x36C624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C624u; }
        if (ctx->pc != 0x36C624u) { return; }
    }
    ctx->pc = 0x36C624u;
label_36c624:
    // 0x36c624: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x36c624u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_36c628:
    // 0x36c628: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x36c628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_36c62c:
    // 0x36c62c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x36c62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_36c630:
    // 0x36c630: 0xc04cca0  jal         func_133280
label_36c634:
    if (ctx->pc == 0x36C634u) {
        ctx->pc = 0x36C634u;
            // 0x36c634: 0x24c64d50  addiu       $a2, $a2, 0x4D50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19792));
        ctx->pc = 0x36C638u;
        goto label_36c638;
    }
    ctx->pc = 0x36C630u;
    SET_GPR_U32(ctx, 31, 0x36C638u);
    ctx->pc = 0x36C634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C630u;
            // 0x36c634: 0x24c64d50  addiu       $a2, $a2, 0x4D50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C638u; }
        if (ctx->pc != 0x36C638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C638u; }
        if (ctx->pc != 0x36C638u) { return; }
    }
    ctx->pc = 0x36C638u;
label_36c638:
    // 0x36c638: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x36c638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
label_36c63c:
    // 0x36c63c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x36c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_36c640:
    // 0x36c640: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36c640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36c644:
    // 0x36c644: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x36c644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_36c648:
    // 0x36c648: 0xc04cc7c  jal         func_1331F0
label_36c64c:
    if (ctx->pc == 0x36C64Cu) {
        ctx->pc = 0x36C64Cu;
            // 0x36c64c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C650u;
        goto label_36c650;
    }
    ctx->pc = 0x36C648u;
    SET_GPR_U32(ctx, 31, 0x36C650u);
    ctx->pc = 0x36C64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C648u;
            // 0x36c64c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C650u; }
        if (ctx->pc != 0x36C650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C650u; }
        if (ctx->pc != 0x36C650u) { return; }
    }
    ctx->pc = 0x36C650u;
label_36c650:
    // 0x36c650: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x36c650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36c654:
    // 0x36c654: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x36c654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_36c658:
    // 0x36c658: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x36c658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36c65c:
    // 0x36c65c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x36c65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_36c660:
    // 0x36c660: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x36c660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36c664:
    // 0x36c664: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x36c664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_36c668:
    // 0x36c668: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x36c668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_36c66c:
    // 0x36c66c: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x36c66cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_36c670:
    // 0x36c670: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x36c670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_36c674:
    // 0x36c674: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x36c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_36c678:
    // 0x36c678: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x36c678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36c67c:
    // 0x36c67c: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x36c67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36c680:
    // 0x36c680: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x36c680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36c684:
    // 0x36c684: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x36c684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_36c688:
    // 0x36c688: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x36c688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_36c68c:
    // 0x36c68c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x36c68cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_36c690:
    // 0x36c690: 0xc0a3830  jal         func_28E0C0
label_36c694:
    if (ctx->pc == 0x36C694u) {
        ctx->pc = 0x36C694u;
            // 0x36c694: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x36C698u;
        goto label_36c698;
    }
    ctx->pc = 0x36C690u;
    SET_GPR_U32(ctx, 31, 0x36C698u);
    ctx->pc = 0x36C694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C690u;
            // 0x36c694: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C698u; }
        if (ctx->pc != 0x36C698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C698u; }
        if (ctx->pc != 0x36C698u) { return; }
    }
    ctx->pc = 0x36C698u;
label_36c698:
    // 0x36c698: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36c698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36c69c:
    // 0x36c69c: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x36c69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_36c6a0:
    // 0x36c6a0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x36c6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_36c6a4:
    // 0x36c6a4: 0xc0a7a88  jal         func_29EA20
label_36c6a8:
    if (ctx->pc == 0x36C6A8u) {
        ctx->pc = 0x36C6A8u;
            // 0x36c6a8: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x36C6ACu;
        goto label_36c6ac;
    }
    ctx->pc = 0x36C6A4u;
    SET_GPR_U32(ctx, 31, 0x36C6ACu);
    ctx->pc = 0x36C6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C6A4u;
            // 0x36c6a8: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C6ACu; }
        if (ctx->pc != 0x36C6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C6ACu; }
        if (ctx->pc != 0x36C6ACu) { return; }
    }
    ctx->pc = 0x36C6ACu;
label_36c6ac:
    // 0x36c6ac: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x36c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_36c6b0:
    // 0x36c6b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36c6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36c6b4:
    // 0x36c6b4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_36c6b8:
    if (ctx->pc == 0x36C6B8u) {
        ctx->pc = 0x36C6B8u;
            // 0x36c6b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x36C6BCu;
        goto label_36c6bc;
    }
    ctx->pc = 0x36C6B4u;
    {
        const bool branch_taken_0x36c6b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C6B4u;
            // 0x36c6b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c6b4) {
            ctx->pc = 0x36C6F0u;
            goto label_36c6f0;
        }
    }
    ctx->pc = 0x36C6BCu;
label_36c6bc:
    // 0x36c6bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36c6c0:
    // 0x36c6c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36c6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36c6c4:
    // 0x36c6c4: 0x8c436040  lw          $v1, 0x6040($v0)
    ctx->pc = 0x36c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24640)));
label_36c6c8:
    // 0x36c6c8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x36c6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_36c6cc:
    // 0x36c6cc: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x36c6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_36c6d0:
    // 0x36c6d0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x36c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_36c6d4:
    // 0x36c6d4: 0xc08afe0  jal         func_22BF80
label_36c6d8:
    if (ctx->pc == 0x36C6D8u) {
        ctx->pc = 0x36C6D8u;
            // 0x36c6d8: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->pc = 0x36C6DCu;
        goto label_36c6dc;
    }
    ctx->pc = 0x36C6D4u;
    SET_GPR_U32(ctx, 31, 0x36C6DCu);
    ctx->pc = 0x36C6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C6D4u;
            // 0x36c6d8: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C6DCu; }
        if (ctx->pc != 0x36C6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C6DCu; }
        if (ctx->pc != 0x36C6DCu) { return; }
    }
    ctx->pc = 0x36C6DCu;
label_36c6dc:
    // 0x36c6dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36c6e0:
    // 0x36c6e0: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x36c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_36c6e4:
    // 0x36c6e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_36c6e8:
    // 0x36c6e8: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x36c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_36c6ec:
    // 0x36c6ec: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x36c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_36c6f0:
    // 0x36c6f0: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x36c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_36c6f4:
    // 0x36c6f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x36c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_36c6f8:
    // 0x36c6f8: 0xc08c798  jal         func_231E60
label_36c6fc:
    if (ctx->pc == 0x36C6FCu) {
        ctx->pc = 0x36C6FCu;
            // 0x36c6fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C700u;
        goto label_36c700;
    }
    ctx->pc = 0x36C6F8u;
    SET_GPR_U32(ctx, 31, 0x36C700u);
    ctx->pc = 0x36C6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C6F8u;
            // 0x36c6fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C700u; }
        if (ctx->pc != 0x36C700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C700u; }
        if (ctx->pc != 0x36C700u) { return; }
    }
    ctx->pc = 0x36C700u;
label_36c700:
    // 0x36c700: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36c700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36c704:
    // 0x36c704: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x36c704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_36c708:
    // 0x36c708: 0x8c50077c  lw          $s0, 0x77C($v0)
    ctx->pc = 0x36c708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_36c70c:
    // 0x36c70c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36c710:
    // 0x36c710: 0xae500074  sw          $s0, 0x74($s2)
    ctx->pc = 0x36c710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 16));
label_36c714:
    // 0x36c714: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x36c714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_36c718:
    // 0x36c718: 0xc040138  jal         func_1004E0
label_36c71c:
    if (ctx->pc == 0x36C71Cu) {
        ctx->pc = 0x36C71Cu;
            // 0x36c71c: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x36C720u;
        goto label_36c720;
    }
    ctx->pc = 0x36C718u;
    SET_GPR_U32(ctx, 31, 0x36C720u);
    ctx->pc = 0x36C71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C718u;
            // 0x36c71c: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C720u; }
        if (ctx->pc != 0x36C720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C720u; }
        if (ctx->pc != 0x36C720u) { return; }
    }
    ctx->pc = 0x36C720u;
label_36c720:
    // 0x36c720: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x36c720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
label_36c724:
    // 0x36c724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36c724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36c728:
    // 0x36c728: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36c728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36c72c:
    // 0x36c72c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36c72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36c730:
    // 0x36c730: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x36c730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_36c734:
    // 0x36c734: 0xc04a576  jal         func_1295D8
label_36c738:
    if (ctx->pc == 0x36C738u) {
        ctx->pc = 0x36C738u;
            // 0x36c738: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x36C73Cu;
        goto label_36c73c;
    }
    ctx->pc = 0x36C734u;
    SET_GPR_U32(ctx, 31, 0x36C73Cu);
    ctx->pc = 0x36C738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C734u;
            // 0x36c738: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C73Cu; }
        if (ctx->pc != 0x36C73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C73Cu; }
        if (ctx->pc != 0x36C73Cu) { return; }
    }
    ctx->pc = 0x36C73Cu;
label_36c73c:
    // 0x36c73c: 0xc040180  jal         func_100600
label_36c740:
    if (ctx->pc == 0x36C740u) {
        ctx->pc = 0x36C740u;
            // 0x36c740: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x36C744u;
        goto label_36c744;
    }
    ctx->pc = 0x36C73Cu;
    SET_GPR_U32(ctx, 31, 0x36C744u);
    ctx->pc = 0x36C740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C73Cu;
            // 0x36c740: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C744u; }
        if (ctx->pc != 0x36C744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C744u; }
        if (ctx->pc != 0x36C744u) { return; }
    }
    ctx->pc = 0x36C744u;
label_36c744:
    // 0x36c744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36c744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36c748:
    // 0x36c748: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_36c74c:
    if (ctx->pc == 0x36C74Cu) {
        ctx->pc = 0x36C74Cu;
            // 0x36c74c: 0xae500080  sw          $s0, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 16));
        ctx->pc = 0x36C750u;
        goto label_36c750;
    }
    ctx->pc = 0x36C748u;
    {
        const bool branch_taken_0x36c748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c748) {
            ctx->pc = 0x36C74Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36C748u;
            // 0x36c74c: 0xae500080  sw          $s0, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36C78Cu;
            goto label_36c78c;
        }
    }
    ctx->pc = 0x36C750u;
label_36c750:
    // 0x36c750: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36c750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_36c754:
    // 0x36c754: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x36c754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_36c758:
    // 0x36c758: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x36c758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_36c75c:
    // 0x36c75c: 0x34650ba9  ori         $a1, $v1, 0xBA9
    ctx->pc = 0x36c75cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2985);
label_36c760:
    // 0x36c760: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x36c760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_36c764:
    // 0x36c764: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x36c764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_36c768:
    // 0x36c768: 0x320f809  jalr        $t9
label_36c76c:
    if (ctx->pc == 0x36C76Cu) {
        ctx->pc = 0x36C76Cu;
            // 0x36c76c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x36C770u;
        goto label_36c770;
    }
    ctx->pc = 0x36C768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36C770u);
        ctx->pc = 0x36C76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C768u;
            // 0x36c76c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36C770u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36C770u; }
            if (ctx->pc != 0x36C770u) { return; }
        }
        }
    }
    ctx->pc = 0x36C770u;
label_36c770:
    // 0x36c770: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x36c770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_36c774:
    // 0x36c774: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x36c774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_36c778:
    // 0x36c778: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36c778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_36c77c:
    // 0x36c77c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x36c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_36c780:
    // 0x36c780: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x36c780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_36c784:
    // 0x36c784: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x36c784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_36c788:
    // 0x36c788: 0xae500080  sw          $s0, 0x80($s2)
    ctx->pc = 0x36c788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 16));
label_36c78c:
    // 0x36c78c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36c78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_36c790:
    // 0x36c790: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36c790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36c794:
    // 0x36c794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36c798:
    // 0x36c798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36c79c:
    // 0x36c79c: 0x3e00008  jr          $ra
label_36c7a0:
    if (ctx->pc == 0x36C7A0u) {
        ctx->pc = 0x36C7A0u;
            // 0x36c7a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x36C7A4u;
        goto label_36c7a4;
    }
    ctx->pc = 0x36C79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C79Cu;
            // 0x36c7a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36C7A4u;
label_36c7a4:
    // 0x36c7a4: 0x0  nop
    ctx->pc = 0x36c7a4u;
    // NOP
label_36c7a8:
    // 0x36c7a8: 0x0  nop
    ctx->pc = 0x36c7a8u;
    // NOP
label_36c7ac:
    // 0x36c7ac: 0x0  nop
    ctx->pc = 0x36c7acu;
    // NOP
label_36c7b0:
    // 0x36c7b0: 0x3e00008  jr          $ra
label_36c7b4:
    if (ctx->pc == 0x36C7B4u) {
        ctx->pc = 0x36C7B4u;
            // 0x36c7b4: 0x24022f08  addiu       $v0, $zero, 0x2F08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12040));
        ctx->pc = 0x36C7B8u;
        goto label_36c7b8;
    }
    ctx->pc = 0x36C7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C7B0u;
            // 0x36c7b4: 0x24022f08  addiu       $v0, $zero, 0x2F08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36C7B8u;
label_36c7b8:
    // 0x36c7b8: 0x0  nop
    ctx->pc = 0x36c7b8u;
    // NOP
label_36c7bc:
    // 0x36c7bc: 0x0  nop
    ctx->pc = 0x36c7bcu;
    // NOP
label_36c7c0:
    // 0x36c7c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36c7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_36c7c4:
    // 0x36c7c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x36c7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_36c7c8:
    // 0x36c7c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36c7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_36c7cc:
    // 0x36c7cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36c7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_36c7d0:
    // 0x36c7d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x36c7d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36c7d4:
    // 0x36c7d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36c7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36c7d8:
    // 0x36c7d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36c7dc:
    // 0x36c7dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36c7e0:
    // 0x36c7e0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x36c7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_36c7e4:
    // 0x36c7e4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_36c7e8:
    if (ctx->pc == 0x36C7E8u) {
        ctx->pc = 0x36C7E8u;
            // 0x36c7e8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C7ECu;
        goto label_36c7ec;
    }
    ctx->pc = 0x36C7E4u;
    {
        const bool branch_taken_0x36c7e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C7E4u;
            // 0x36c7e8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c7e4) {
            ctx->pc = 0x36C828u;
            goto label_36c828;
        }
    }
    ctx->pc = 0x36C7ECu;
label_36c7ec:
    // 0x36c7ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36c7ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36c7f0:
    // 0x36c7f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x36c7f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36c7f4:
    // 0x36c7f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36c7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36c7f8:
    // 0x36c7f8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x36c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_36c7fc:
    // 0x36c7fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x36c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_36c800:
    // 0x36c800: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36c800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36c804:
    // 0x36c804: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36c804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36c808:
    // 0x36c808: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x36c808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_36c80c:
    // 0x36c80c: 0x320f809  jalr        $t9
label_36c810:
    if (ctx->pc == 0x36C810u) {
        ctx->pc = 0x36C814u;
        goto label_36c814;
    }
    ctx->pc = 0x36C80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36C814u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x36C814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36C814u; }
            if (ctx->pc != 0x36C814u) { return; }
        }
        }
    }
    ctx->pc = 0x36C814u;
label_36c814:
    // 0x36c814: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x36c814u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_36c818:
    // 0x36c818: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36c818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_36c81c:
    // 0x36c81c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x36c81cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_36c820:
    // 0x36c820: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_36c824:
    if (ctx->pc == 0x36C824u) {
        ctx->pc = 0x36C824u;
            // 0x36c824: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x36C828u;
        goto label_36c828;
    }
    ctx->pc = 0x36C820u;
    {
        const bool branch_taken_0x36c820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C820u;
            // 0x36c824: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c820) {
            ctx->pc = 0x36C7F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36c7f8;
        }
    }
    ctx->pc = 0x36C828u;
label_36c828:
    // 0x36c828: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x36c828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36c82c:
    // 0x36c82c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x36c82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_36c830:
    // 0x36c830: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36c830u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_36c834:
    // 0x36c834: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36c834u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36c838:
    // 0x36c838: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36c838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36c83c:
    // 0x36c83c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c83cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36c840:
    // 0x36c840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36c844:
    // 0x36c844: 0x3e00008  jr          $ra
label_36c848:
    if (ctx->pc == 0x36C848u) {
        ctx->pc = 0x36C848u;
            // 0x36c848: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x36C84Cu;
        goto label_36c84c;
    }
    ctx->pc = 0x36C844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C844u;
            // 0x36c848: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36C84Cu;
label_36c84c:
    // 0x36c84c: 0x0  nop
    ctx->pc = 0x36c84cu;
    // NOP
label_36c850:
    // 0x36c850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36c850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36c854:
    // 0x36c854: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36c854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36c858:
    // 0x36c858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36c85c:
    // 0x36c85c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x36c85cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_36c860:
    // 0x36c860: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36c864:
    // 0x36c864: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x36c864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_36c868:
    // 0x36c868: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36c868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36c86c:
    // 0x36c86c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x36c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_36c870:
    // 0x36c870: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36c870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_36c874:
    // 0x36c874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36c874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36c878:
    // 0x36c878: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x36c878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_36c87c:
    // 0x36c87c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x36c87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36c880:
    // 0x36c880: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x36c880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_36c884:
    // 0x36c884: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x36c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_36c888:
    // 0x36c888: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x36c888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_36c88c:
    // 0x36c88c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x36c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_36c890:
    // 0x36c890: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x36c890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_36c894:
    // 0x36c894: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36c894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_36c898:
    // 0x36c898: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x36c898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_36c89c:
    // 0x36c89c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x36c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_36c8a0:
    // 0x36c8a0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x36c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_36c8a4:
    // 0x36c8a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_36c8a8:
    // 0x36c8a8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x36c8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36c8ac:
    // 0x36c8ac: 0xc0a997c  jal         func_2A65F0
label_36c8b0:
    if (ctx->pc == 0x36C8B0u) {
        ctx->pc = 0x36C8B0u;
            // 0x36c8b0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x36C8B4u;
        goto label_36c8b4;
    }
    ctx->pc = 0x36C8ACu;
    SET_GPR_U32(ctx, 31, 0x36C8B4u);
    ctx->pc = 0x36C8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C8ACu;
            // 0x36c8b0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C8B4u; }
        if (ctx->pc != 0x36C8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C8B4u; }
        if (ctx->pc != 0x36C8B4u) { return; }
    }
    ctx->pc = 0x36C8B4u;
label_36c8b4:
    // 0x36c8b4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x36c8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_36c8b8:
    // 0x36c8b8: 0xc0d879c  jal         func_361E70
label_36c8bc:
    if (ctx->pc == 0x36C8BCu) {
        ctx->pc = 0x36C8BCu;
            // 0x36c8bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C8C0u;
        goto label_36c8c0;
    }
    ctx->pc = 0x36C8B8u;
    SET_GPR_U32(ctx, 31, 0x36C8C0u);
    ctx->pc = 0x36C8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C8B8u;
            // 0x36c8bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C8C0u; }
        if (ctx->pc != 0x36C8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C8C0u; }
        if (ctx->pc != 0x36C8C0u) { return; }
    }
    ctx->pc = 0x36C8C0u;
label_36c8c0:
    // 0x36c8c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36c8c4:
    // 0x36c8c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36c8c8:
    // 0x36c8c8: 0x3e00008  jr          $ra
label_36c8cc:
    if (ctx->pc == 0x36C8CCu) {
        ctx->pc = 0x36C8CCu;
            // 0x36c8cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x36C8D0u;
        goto label_36c8d0;
    }
    ctx->pc = 0x36C8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C8C8u;
            // 0x36c8cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36C8D0u;
label_36c8d0:
    // 0x36c8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36c8d4:
    // 0x36c8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36c8d8:
    // 0x36c8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36c8dc:
    // 0x36c8dc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x36c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_36c8e0:
    // 0x36c8e0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_36c8e4:
    if (ctx->pc == 0x36C8E4u) {
        ctx->pc = 0x36C8E4u;
            // 0x36c8e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C8E8u;
        goto label_36c8e8;
    }
    ctx->pc = 0x36C8E0u;
    {
        const bool branch_taken_0x36c8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C8E0u;
            // 0x36c8e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c8e0) {
            ctx->pc = 0x36CA00u;
            goto label_36ca00;
        }
    }
    ctx->pc = 0x36C8E8u;
label_36c8e8:
    // 0x36c8e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_36c8ec:
    // 0x36c8ec: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x36c8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_36c8f0:
    // 0x36c8f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x36c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_36c8f4:
    // 0x36c8f4: 0xc075128  jal         func_1D44A0
label_36c8f8:
    if (ctx->pc == 0x36C8F8u) {
        ctx->pc = 0x36C8F8u;
            // 0x36c8f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x36C8FCu;
        goto label_36c8fc;
    }
    ctx->pc = 0x36C8F4u;
    SET_GPR_U32(ctx, 31, 0x36C8FCu);
    ctx->pc = 0x36C8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36C8F4u;
            // 0x36c8f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C8FCu; }
        if (ctx->pc != 0x36C8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36C8FCu; }
        if (ctx->pc != 0x36C8FCu) { return; }
    }
    ctx->pc = 0x36C8FCu;
label_36c8fc:
    // 0x36c8fc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x36c8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_36c900:
    // 0x36c900: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36c904:
    // 0x36c904: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x36c904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_36c908:
    // 0x36c908: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x36c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_36c90c:
    // 0x36c90c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x36c90cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_36c910:
    // 0x36c910: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_36c914:
    if (ctx->pc == 0x36C914u) {
        ctx->pc = 0x36C914u;
            // 0x36c914: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x36C918u;
        goto label_36c918;
    }
    ctx->pc = 0x36C910u;
    {
        const bool branch_taken_0x36c910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C910u;
            // 0x36c914: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c910) {
            ctx->pc = 0x36C920u;
            goto label_36c920;
        }
    }
    ctx->pc = 0x36C918u;
label_36c918:
    // 0x36c918: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36c918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36c91c:
    // 0x36c91c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x36c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_36c920:
    // 0x36c920: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x36c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36c924:
    // 0x36c924: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36c924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36c928:
    // 0x36c928: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x36c928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_36c92c:
    // 0x36c92c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x36c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_36c930:
    // 0x36c930: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x36c930u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_36c934:
    // 0x36c934: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_36c938:
    if (ctx->pc == 0x36C938u) {
        ctx->pc = 0x36C938u;
            // 0x36c938: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x36C93Cu;
        goto label_36c93c;
    }
    ctx->pc = 0x36C934u;
    {
        const bool branch_taken_0x36c934 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c934) {
            ctx->pc = 0x36C938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36C934u;
            // 0x36c938: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36C948u;
            goto label_36c948;
        }
    }
    ctx->pc = 0x36C93Cu;
label_36c93c:
    // 0x36c93c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36c940:
    // 0x36c940: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x36c940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_36c944:
    // 0x36c944: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x36c944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36c948:
    // 0x36c948: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36c948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36c94c:
    // 0x36c94c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x36c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_36c950:
    // 0x36c950: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x36c950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_36c954:
    // 0x36c954: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x36c954u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_36c958:
    // 0x36c958: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_36c95c:
    if (ctx->pc == 0x36C95Cu) {
        ctx->pc = 0x36C95Cu;
            // 0x36c95c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x36C960u;
        goto label_36c960;
    }
    ctx->pc = 0x36C958u;
    {
        const bool branch_taken_0x36c958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c958) {
            ctx->pc = 0x36C95Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36C958u;
            // 0x36c95c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36C96Cu;
            goto label_36c96c;
        }
    }
    ctx->pc = 0x36C960u;
label_36c960:
    // 0x36c960: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36c960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36c964:
    // 0x36c964: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x36c964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_36c968:
    // 0x36c968: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x36c968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36c96c:
    // 0x36c96c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x36c96cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_36c970:
    // 0x36c970: 0x320f809  jalr        $t9
label_36c974:
    if (ctx->pc == 0x36C974u) {
        ctx->pc = 0x36C974u;
            // 0x36c974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36C978u;
        goto label_36c978;
    }
    ctx->pc = 0x36C970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36C978u);
        ctx->pc = 0x36C974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36C970u;
            // 0x36c974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36C978u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36C978u; }
            if (ctx->pc != 0x36C978u) { return; }
        }
        }
    }
    ctx->pc = 0x36C978u;
label_36c978:
    // 0x36c978: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x36c978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_36c97c:
    // 0x36c97c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36c980:
    // 0x36c980: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x36c980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_36c984:
    // 0x36c984: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36c984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_36c988:
    // 0x36c988: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x36c988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_36c98c:
    // 0x36c98c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36c98cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_36c990:
    // 0x36c990: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_36c994:
    if (ctx->pc == 0x36C994u) {
        ctx->pc = 0x36C994u;
            // 0x36c994: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x36C998u;
        goto label_36c998;
    }
    ctx->pc = 0x36C990u;
    {
        const bool branch_taken_0x36c990 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c990) {
            ctx->pc = 0x36C994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36C990u;
            // 0x36c994: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36C9A4u;
            goto label_36c9a4;
        }
    }
    ctx->pc = 0x36C998u;
label_36c998:
    // 0x36c998: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36c998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36c99c:
    // 0x36c99c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x36c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_36c9a0:
    // 0x36c9a0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x36c9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_36c9a4:
    // 0x36c9a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36c9a8:
    // 0x36c9a8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x36c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_36c9ac:
    // 0x36c9ac: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_36c9b0:
    // 0x36c9b0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x36c9b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_36c9b4:
    // 0x36c9b4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36c9b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_36c9b8:
    // 0x36c9b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_36c9bc:
    if (ctx->pc == 0x36C9BCu) {
        ctx->pc = 0x36C9C0u;
        goto label_36c9c0;
    }
    ctx->pc = 0x36C9B8u;
    {
        const bool branch_taken_0x36c9b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c9b8) {
            ctx->pc = 0x36C9C8u;
            goto label_36c9c8;
        }
    }
    ctx->pc = 0x36C9C0u;
label_36c9c0:
    // 0x36c9c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36c9c4:
    // 0x36c9c4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_36c9c8:
    // 0x36c9c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36c9cc:
    // 0x36c9cc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x36c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_36c9d0:
    // 0x36c9d0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x36c9d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_36c9d4:
    // 0x36c9d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_36c9d8:
    if (ctx->pc == 0x36C9D8u) {
        ctx->pc = 0x36C9DCu;
        goto label_36c9dc;
    }
    ctx->pc = 0x36C9D4u;
    {
        const bool branch_taken_0x36c9d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c9d4) {
            ctx->pc = 0x36C9E4u;
            goto label_36c9e4;
        }
    }
    ctx->pc = 0x36C9DCu;
label_36c9dc:
    // 0x36c9dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36c9e0:
    // 0x36c9e0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x36c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_36c9e4:
    // 0x36c9e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36c9e8:
    // 0x36c9e8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x36c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_36c9ec:
    // 0x36c9ec: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x36c9ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_36c9f0:
    // 0x36c9f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_36c9f4:
    if (ctx->pc == 0x36C9F4u) {
        ctx->pc = 0x36C9F4u;
            // 0x36c9f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x36C9F8u;
        goto label_36c9f8;
    }
    ctx->pc = 0x36C9F0u;
    {
        const bool branch_taken_0x36c9f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c9f0) {
            ctx->pc = 0x36C9F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36C9F0u;
            // 0x36c9f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36CA04u;
            goto label_36ca04;
        }
    }
    ctx->pc = 0x36C9F8u;
label_36c9f8:
    // 0x36c9f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36c9fc:
    // 0x36c9fc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x36c9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_36ca00:
    // 0x36ca00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36ca00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36ca04:
    // 0x36ca04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36ca04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36ca08:
    // 0x36ca08: 0x3e00008  jr          $ra
label_36ca0c:
    if (ctx->pc == 0x36CA0Cu) {
        ctx->pc = 0x36CA0Cu;
            // 0x36ca0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36CA10u;
        goto label_36ca10;
    }
    ctx->pc = 0x36CA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36CA08u;
            // 0x36ca0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36CA10u;
label_36ca10:
    // 0x36ca10: 0x80dabec  j           func_36AFB0
label_36ca14:
    if (ctx->pc == 0x36CA14u) {
        ctx->pc = 0x36CA14u;
            // 0x36ca14: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x36CA18u;
        goto label_36ca18;
    }
    ctx->pc = 0x36CA10u;
    ctx->pc = 0x36CA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CA10u;
            // 0x36ca14: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36AFB0u;
    {
        auto targetFn = runtime->lookupFunction(0x36AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x36CA18u;
label_36ca18:
    // 0x36ca18: 0x0  nop
    ctx->pc = 0x36ca18u;
    // NOP
label_36ca1c:
    // 0x36ca1c: 0x0  nop
    ctx->pc = 0x36ca1cu;
    // NOP
label_36ca20:
    // 0x36ca20: 0x80daf58  j           func_36BD60
label_36ca24:
    if (ctx->pc == 0x36CA24u) {
        ctx->pc = 0x36CA24u;
            // 0x36ca24: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x36CA28u;
        goto label_36ca28;
    }
    ctx->pc = 0x36CA20u;
    ctx->pc = 0x36CA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CA20u;
            // 0x36ca24: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BD60u;
    {
        auto targetFn = runtime->lookupFunction(0x36BD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x36CA28u;
label_36ca28:
    // 0x36ca28: 0x0  nop
    ctx->pc = 0x36ca28u;
    // NOP
label_36ca2c:
    // 0x36ca2c: 0x0  nop
    ctx->pc = 0x36ca2cu;
    // NOP
label_36ca30:
    // 0x36ca30: 0x80dab94  j           func_36AE50
label_36ca34:
    if (ctx->pc == 0x36CA34u) {
        ctx->pc = 0x36CA34u;
            // 0x36ca34: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x36CA38u;
        goto label_36ca38;
    }
    ctx->pc = 0x36CA30u;
    ctx->pc = 0x36CA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CA30u;
            // 0x36ca34: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36AE50u;
    if (runtime->hasFunction(0x36AE50u)) {
        auto targetFn = runtime->lookupFunction(0x36AE50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0036AE50_0x36ae50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x36CA38u;
label_36ca38:
    // 0x36ca38: 0x0  nop
    ctx->pc = 0x36ca38u;
    // NOP
label_36ca3c:
    // 0x36ca3c: 0x0  nop
    ctx->pc = 0x36ca3cu;
    // NOP
label_36ca40:
    // 0x36ca40: 0x80dab70  j           func_36ADC0
label_36ca44:
    if (ctx->pc == 0x36CA44u) {
        ctx->pc = 0x36CA44u;
            // 0x36ca44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x36CA48u;
        goto label_36ca48;
    }
    ctx->pc = 0x36CA40u;
    ctx->pc = 0x36CA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CA40u;
            // 0x36ca44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36ADC0u;
    {
        auto targetFn = runtime->lookupFunction(0x36ADC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x36CA48u;
label_36ca48:
    // 0x36ca48: 0x0  nop
    ctx->pc = 0x36ca48u;
    // NOP
label_36ca4c:
    // 0x36ca4c: 0x0  nop
    ctx->pc = 0x36ca4cu;
    // NOP
label_36ca50:
    // 0x36ca50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36ca54:
    // 0x36ca54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36ca54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_36ca58:
    // 0x36ca58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36ca58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36ca5c:
    // 0x36ca5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36ca5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36ca60:
    // 0x36ca60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36ca60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36ca64:
    // 0x36ca64: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_36ca68:
    if (ctx->pc == 0x36CA68u) {
        ctx->pc = 0x36CA68u;
            // 0x36ca68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36CA6Cu;
        goto label_36ca6c;
    }
    ctx->pc = 0x36CA64u;
    {
        const bool branch_taken_0x36ca64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36CA64u;
            // 0x36ca68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ca64) {
            ctx->pc = 0x36CACCu;
            goto label_36cacc;
        }
    }
    ctx->pc = 0x36CA6Cu;
label_36ca6c:
    // 0x36ca6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36ca70:
    // 0x36ca70: 0x24426b30  addiu       $v0, $v0, 0x6B30
    ctx->pc = 0x36ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27440));
label_36ca74:
    // 0x36ca74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_36ca78:
    // 0x36ca78: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x36ca78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_36ca7c:
    // 0x36ca7c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_36ca80:
    if (ctx->pc == 0x36CA80u) {
        ctx->pc = 0x36CA84u;
        goto label_36ca84;
    }
    ctx->pc = 0x36CA7Cu;
    {
        const bool branch_taken_0x36ca7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ca7c) {
            ctx->pc = 0x36CA94u;
            goto label_36ca94;
        }
    }
    ctx->pc = 0x36CA84u;
label_36ca84:
    // 0x36ca84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36ca88:
    // 0x36ca88: 0xc0fe48c  jal         func_3F9230
label_36ca8c:
    if (ctx->pc == 0x36CA8Cu) {
        ctx->pc = 0x36CA8Cu;
            // 0x36ca8c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x36CA90u;
        goto label_36ca90;
    }
    ctx->pc = 0x36CA88u;
    SET_GPR_U32(ctx, 31, 0x36CA90u);
    ctx->pc = 0x36CA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CA88u;
            // 0x36ca8c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CA90u; }
        if (ctx->pc != 0x36CA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CA90u; }
        if (ctx->pc != 0x36CA90u) { return; }
    }
    ctx->pc = 0x36CA90u;
label_36ca90:
    // 0x36ca90: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x36ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_36ca94:
    // 0x36ca94: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_36ca98:
    if (ctx->pc == 0x36CA98u) {
        ctx->pc = 0x36CA98u;
            // 0x36ca98: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x36CA9Cu;
        goto label_36ca9c;
    }
    ctx->pc = 0x36CA94u;
    {
        const bool branch_taken_0x36ca94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ca94) {
            ctx->pc = 0x36CA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36CA94u;
            // 0x36ca98: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36CAB8u;
            goto label_36cab8;
        }
    }
    ctx->pc = 0x36CA9Cu;
label_36ca9c:
    // 0x36ca9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36caa0:
    // 0x36caa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36caa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36caa4:
    // 0x36caa4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x36caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_36caa8:
    // 0x36caa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36caa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36caac:
    // 0x36caac: 0xc057a68  jal         func_15E9A0
label_36cab0:
    if (ctx->pc == 0x36CAB0u) {
        ctx->pc = 0x36CAB0u;
            // 0x36cab0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x36CAB4u;
        goto label_36cab4;
    }
    ctx->pc = 0x36CAACu;
    SET_GPR_U32(ctx, 31, 0x36CAB4u);
    ctx->pc = 0x36CAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CAACu;
            // 0x36cab0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CAB4u; }
        if (ctx->pc != 0x36CAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CAB4u; }
        if (ctx->pc != 0x36CAB4u) { return; }
    }
    ctx->pc = 0x36CAB4u;
label_36cab4:
    // 0x36cab4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x36cab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_36cab8:
    // 0x36cab8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36cab8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_36cabc:
    // 0x36cabc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_36cac0:
    if (ctx->pc == 0x36CAC0u) {
        ctx->pc = 0x36CAC0u;
            // 0x36cac0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36CAC4u;
        goto label_36cac4;
    }
    ctx->pc = 0x36CABCu;
    {
        const bool branch_taken_0x36cabc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x36cabc) {
            ctx->pc = 0x36CAC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36CABCu;
            // 0x36cac0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36CAD0u;
            goto label_36cad0;
        }
    }
    ctx->pc = 0x36CAC4u;
label_36cac4:
    // 0x36cac4: 0xc0400a8  jal         func_1002A0
label_36cac8:
    if (ctx->pc == 0x36CAC8u) {
        ctx->pc = 0x36CAC8u;
            // 0x36cac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36CACCu;
        goto label_36cacc;
    }
    ctx->pc = 0x36CAC4u;
    SET_GPR_U32(ctx, 31, 0x36CACCu);
    ctx->pc = 0x36CAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CAC4u;
            // 0x36cac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CACCu; }
        if (ctx->pc != 0x36CACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CACCu; }
        if (ctx->pc != 0x36CACCu) { return; }
    }
    ctx->pc = 0x36CACCu;
label_36cacc:
    // 0x36cacc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x36caccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36cad0:
    // 0x36cad0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36cad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36cad4:
    // 0x36cad4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36cad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36cad8:
    // 0x36cad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36cad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36cadc:
    // 0x36cadc: 0x3e00008  jr          $ra
label_36cae0:
    if (ctx->pc == 0x36CAE0u) {
        ctx->pc = 0x36CAE0u;
            // 0x36cae0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x36CAE4u;
        goto label_36cae4;
    }
    ctx->pc = 0x36CADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36CADCu;
            // 0x36cae0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36CAE4u;
label_36cae4:
    // 0x36cae4: 0x0  nop
    ctx->pc = 0x36cae4u;
    // NOP
label_36cae8:
    // 0x36cae8: 0x0  nop
    ctx->pc = 0x36cae8u;
    // NOP
label_36caec:
    // 0x36caec: 0x0  nop
    ctx->pc = 0x36caecu;
    // NOP
label_36caf0:
    // 0x36caf0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x36caf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_36caf4:
    // 0x36caf4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x36caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_36caf8:
    // 0x36caf8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x36caf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_36cafc:
    // 0x36cafc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x36cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_36cb00:
    // 0x36cb00: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x36cb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_36cb04:
    // 0x36cb04: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x36cb04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_36cb08:
    // 0x36cb08: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x36cb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_36cb0c:
    // 0x36cb0c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x36cb0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36cb10:
    // 0x36cb10: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x36cb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_36cb14:
    // 0x36cb14: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x36cb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_36cb18:
    // 0x36cb18: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x36cb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_36cb1c:
    // 0x36cb1c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x36cb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_36cb20:
    // 0x36cb20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x36cb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_36cb24:
    // 0x36cb24: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36cb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_36cb28:
    // 0x36cb28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36cb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_36cb2c:
    // 0x36cb2c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x36cb2cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_36cb30:
    // 0x36cb30: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x36cb30u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_36cb34:
    // 0x36cb34: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x36cb34u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_36cb38:
    // 0x36cb38: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x36cb38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_36cb3c:
    // 0x36cb3c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x36cb3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_36cb40:
    // 0x36cb40: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x36cb40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_36cb44:
    // 0x36cb44: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x36cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_36cb48:
    // 0x36cb48: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x36cb48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_36cb4c:
    // 0x36cb4c: 0x8c950054  lw          $s5, 0x54($a0)
    ctx->pc = 0x36cb4cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_36cb50:
    // 0x36cb50: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x36cb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_36cb54:
    // 0x36cb54: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_36cb58:
    // 0x36cb58: 0x8cb489f0  lw          $s4, -0x7610($a1)
    ctx->pc = 0x36cb58u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937072)));
label_36cb5c:
    // 0x36cb5c: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x36cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_36cb60:
    // 0x36cb60: 0x8c6414d8  lw          $a0, 0x14D8($v1)
    ctx->pc = 0x36cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5336)));
label_36cb64:
    // 0x36cb64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36cb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36cb68:
    // 0x36cb68: 0xc0506ac  jal         func_141AB0
label_36cb6c:
    if (ctx->pc == 0x36CB6Cu) {
        ctx->pc = 0x36CB6Cu;
            // 0x36cb6c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x36CB70u;
        goto label_36cb70;
    }
    ctx->pc = 0x36CB68u;
    SET_GPR_U32(ctx, 31, 0x36CB70u);
    ctx->pc = 0x36CB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CB68u;
            // 0x36cb6c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CB70u; }
        if (ctx->pc != 0x36CB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CB70u; }
        if (ctx->pc != 0x36CB70u) { return; }
    }
    ctx->pc = 0x36CB70u;
label_36cb70:
    // 0x36cb70: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x36cb70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_36cb74:
    // 0x36cb74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36cb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_36cb78:
    // 0x36cb78: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x36cb78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_36cb7c:
    // 0x36cb7c: 0x320f809  jalr        $t9
label_36cb80:
    if (ctx->pc == 0x36CB80u) {
        ctx->pc = 0x36CB80u;
            // 0x36cb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36CB84u;
        goto label_36cb84;
    }
    ctx->pc = 0x36CB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36CB84u);
        ctx->pc = 0x36CB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36CB7Cu;
            // 0x36cb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36CB84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36CB84u; }
            if (ctx->pc != 0x36CB84u) { return; }
        }
        }
    }
    ctx->pc = 0x36CB84u;
label_36cb84:
    // 0x36cb84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36cb88:
    // 0x36cb88: 0xc0506cc  jal         func_141B30
label_36cb8c:
    if (ctx->pc == 0x36CB8Cu) {
        ctx->pc = 0x36CB8Cu;
            // 0x36cb8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36CB90u;
        goto label_36cb90;
    }
    ctx->pc = 0x36CB88u;
    SET_GPR_U32(ctx, 31, 0x36CB90u);
    ctx->pc = 0x36CB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CB88u;
            // 0x36cb8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141B30u;
    if (runtime->hasFunction(0x141B30u)) {
        auto targetFn = runtime->lookupFunction(0x141B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CB90u; }
        if (ctx->pc != 0x36CB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141B30_0x141b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CB90u; }
        if (ctx->pc != 0x36CB90u) { return; }
    }
    ctx->pc = 0x36CB90u;
label_36cb90:
    // 0x36cb90: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x36cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_36cb94:
    // 0x36cb94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36cb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36cb98:
    // 0x36cb98: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x36cb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_36cb9c:
    // 0x36cb9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x36cb9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36cba0:
    // 0x36cba0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x36cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_36cba4:
    // 0x36cba4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36cba8:
    // 0x36cba8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x36cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_36cbac:
    // 0x36cbac: 0x2a3b021  addu        $s6, $s5, $v1
    ctx->pc = 0x36cbacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_36cbb0:
    // 0x36cbb0: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x36cbb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_36cbb4:
    // 0x36cbb4: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x36cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_36cbb8:
    // 0x36cbb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36cbbc:
    // 0x36cbbc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x36cbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_36cbc0:
    // 0x36cbc0: 0x92a200ac  lbu         $v0, 0xAC($s5)
    ctx->pc = 0x36cbc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 172)));
label_36cbc4:
    // 0x36cbc4: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
label_36cbc8:
    if (ctx->pc == 0x36CBC8u) {
        ctx->pc = 0x36CBCCu;
        goto label_36cbcc;
    }
    ctx->pc = 0x36CBC4u;
    {
        const bool branch_taken_0x36cbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cbc4) {
            ctx->pc = 0x36CE58u;
            goto label_36ce58;
        }
    }
    ctx->pc = 0x36CBCCu;
label_36cbcc:
    // 0x36cbcc: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x36cbccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_36cbd0:
    // 0x36cbd0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x36cbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_36cbd4:
    // 0x36cbd4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x36cbd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_36cbd8:
    // 0x36cbd8: 0x26d2009c  addiu       $s2, $s6, 0x9C
    ctx->pc = 0x36cbd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 156));
label_36cbdc:
    // 0x36cbdc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x36cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_36cbe0:
    // 0x36cbe0: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x36cbe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_36cbe4:
    // 0x36cbe4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x36cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_36cbe8:
    // 0x36cbe8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36cbec:
    // 0x36cbec: 0xc075094  jal         func_1D4250
label_36cbf0:
    if (ctx->pc == 0x36CBF0u) {
        ctx->pc = 0x36CBF0u;
            // 0x36cbf0: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->pc = 0x36CBF4u;
        goto label_36cbf4;
    }
    ctx->pc = 0x36CBECu;
    SET_GPR_U32(ctx, 31, 0x36CBF4u);
    ctx->pc = 0x36CBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CBECu;
            // 0x36cbf0: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CBF4u; }
        if (ctx->pc != 0x36CBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CBF4u; }
        if (ctx->pc != 0x36CBF4u) { return; }
    }
    ctx->pc = 0x36CBF4u;
label_36cbf4:
    // 0x36cbf4: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x36cbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36cbf8:
    // 0x36cbf8: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x36cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_36cbfc:
    // 0x36cbfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x36cbfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_36cc00:
    // 0x36cc00: 0x0  nop
    ctx->pc = 0x36cc00u;
    // NOP
label_36cc04:
    // 0x36cc04: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x36cc04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36cc08:
    // 0x36cc08: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_36cc0c:
    if (ctx->pc == 0x36CC0Cu) {
        ctx->pc = 0x36CC0Cu;
            // 0x36cc0c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x36CC10u;
        goto label_36cc10;
    }
    ctx->pc = 0x36CC08u;
    {
        const bool branch_taken_0x36cc08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36CC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36CC08u;
            // 0x36cc0c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cc08) {
            ctx->pc = 0x36CC68u;
            goto label_36cc68;
        }
    }
    ctx->pc = 0x36CC10u;
label_36cc10:
    // 0x36cc10: 0xc7c00060  lwc1        $f0, 0x60($fp)
    ctx->pc = 0x36cc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36cc14:
    // 0x36cc14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36cc14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36cc18:
    // 0x36cc18: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_36cc1c:
    if (ctx->pc == 0x36CC1Cu) {
        ctx->pc = 0x36CC20u;
        goto label_36cc20;
    }
    ctx->pc = 0x36CC18u;
    {
        const bool branch_taken_0x36cc18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36cc18) {
            ctx->pc = 0x36CC68u;
            goto label_36cc68;
        }
    }
    ctx->pc = 0x36CC20u;
label_36cc20:
    // 0x36cc20: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x36cc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36cc24:
    // 0x36cc24: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x36cc24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36cc28:
    // 0x36cc28: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_36cc2c:
    if (ctx->pc == 0x36CC2Cu) {
        ctx->pc = 0x36CC30u;
        goto label_36cc30;
    }
    ctx->pc = 0x36CC28u;
    {
        const bool branch_taken_0x36cc28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36cc28) {
            ctx->pc = 0x36CC68u;
            goto label_36cc68;
        }
    }
    ctx->pc = 0x36CC30u;
label_36cc30:
    // 0x36cc30: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x36cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_36cc34:
    // 0x36cc34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36cc34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_36cc38:
    // 0x36cc38: 0x0  nop
    ctx->pc = 0x36cc38u;
    // NOP
label_36cc3c:
    // 0x36cc3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x36cc3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36cc40:
    // 0x36cc40: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_36cc44:
    if (ctx->pc == 0x36CC44u) {
        ctx->pc = 0x36CC48u;
        goto label_36cc48;
    }
    ctx->pc = 0x36CC40u;
    {
        const bool branch_taken_0x36cc40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36cc40) {
            ctx->pc = 0x36CC68u;
            goto label_36cc68;
        }
    }
    ctx->pc = 0x36CC48u;
label_36cc48:
    // 0x36cc48: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x36cc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36cc4c:
    // 0x36cc4c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x36cc4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36cc50:
    // 0x36cc50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_36cc54:
    if (ctx->pc == 0x36CC54u) {
        ctx->pc = 0x36CC58u;
        goto label_36cc58;
    }
    ctx->pc = 0x36CC50u;
    {
        const bool branch_taken_0x36cc50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36cc50) {
            ctx->pc = 0x36CC68u;
            goto label_36cc68;
        }
    }
    ctx->pc = 0x36CC58u;
label_36cc58:
    // 0x36cc58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x36cc58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36cc5c:
    // 0x36cc5c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_36cc60:
    if (ctx->pc == 0x36CC60u) {
        ctx->pc = 0x36CC64u;
        goto label_36cc64;
    }
    ctx->pc = 0x36CC5Cu;
    {
        const bool branch_taken_0x36cc5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36cc5c) {
            ctx->pc = 0x36CC70u;
            goto label_36cc70;
        }
    }
    ctx->pc = 0x36CC64u;
label_36cc64:
    // 0x36cc64: 0x0  nop
    ctx->pc = 0x36cc64u;
    // NOP
label_36cc68:
    // 0x36cc68: 0x1000007b  b           . + 4 + (0x7B << 2)
label_36cc6c:
    if (ctx->pc == 0x36CC6Cu) {
        ctx->pc = 0x36CC6Cu;
            // 0x36cc6c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x36CC70u;
        goto label_36cc70;
    }
    ctx->pc = 0x36CC68u;
    {
        const bool branch_taken_0x36cc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36CC68u;
            // 0x36cc6c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cc68) {
            ctx->pc = 0x36CE58u;
            goto label_36ce58;
        }
    }
    ctx->pc = 0x36CC70u;
label_36cc70:
    // 0x36cc70: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x36cc70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_36cc74:
    // 0x36cc74: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x36cc74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_36cc78:
    // 0x36cc78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36cc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_36cc7c:
    // 0x36cc7c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x36cc7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_36cc80:
    // 0x36cc80: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x36cc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_36cc84:
    // 0x36cc84: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x36cc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_36cc88:
    // 0x36cc88: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x36cc88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_36cc8c:
    // 0x36cc8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_36cc90:
    // 0x36cc90: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x36cc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_36cc94:
    // 0x36cc94: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x36cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_36cc98:
    // 0x36cc98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36cc9c:
    // 0x36cc9c: 0x2470001c  addiu       $s0, $v1, 0x1C
    ctx->pc = 0x36cc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_36cca0:
    // 0x36cca0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x36cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_36cca4:
    // 0x36cca4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x36cca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_36cca8:
    // 0x36cca8: 0x2457001c  addiu       $s7, $v0, 0x1C
    ctx->pc = 0x36cca8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_36ccac:
    // 0x36ccac: 0x320f809  jalr        $t9
label_36ccb0:
    if (ctx->pc == 0x36CCB0u) {
        ctx->pc = 0x36CCB0u;
            // 0x36ccb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36CCB4u;
        goto label_36ccb4;
    }
    ctx->pc = 0x36CCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36CCB4u);
        ctx->pc = 0x36CCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36CCACu;
            // 0x36ccb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36CCB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36CCB4u; }
            if (ctx->pc != 0x36CCB4u) { return; }
        }
        }
    }
    ctx->pc = 0x36CCB4u;
label_36ccb4:
    // 0x36ccb4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x36ccb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_36ccb8:
    // 0x36ccb8: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x36ccb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_36ccbc:
    // 0x36ccbc: 0x86e40000  lh          $a0, 0x0($s7)
    ctx->pc = 0x36ccbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_36ccc0:
    // 0x36ccc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ccc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36ccc4:
    // 0x36ccc4: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x36ccc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_36ccc8:
    // 0x36ccc8: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x36ccc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_36cccc:
    // 0x36cccc: 0x92a200ae  lbu         $v0, 0xAE($s5)
    ctx->pc = 0x36ccccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 174)));
label_36ccd0:
    // 0x36ccd0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x36ccd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36ccd4:
    // 0x36ccd4: 0x0  nop
    ctx->pc = 0x36ccd4u;
    // NOP
label_36ccd8:
    // 0x36ccd8: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x36ccd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_36ccdc:
    // 0x36ccdc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x36ccdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36cce0:
    // 0x36cce0: 0x0  nop
    ctx->pc = 0x36cce0u;
    // NOP
label_36cce4:
    // 0x36cce4: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x36cce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_36cce8:
    // 0x36cce8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36cce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36ccec:
    // 0x36ccec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_36ccf0:
    if (ctx->pc == 0x36CCF0u) {
        ctx->pc = 0x36CCF0u;
            // 0x36ccf0: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x36CCF4u;
        goto label_36ccf4;
    }
    ctx->pc = 0x36CCECu;
    {
        const bool branch_taken_0x36ccec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x36CCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36CCECu;
            // 0x36ccf0: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ccec) {
            ctx->pc = 0x36CD00u;
            goto label_36cd00;
        }
    }
    ctx->pc = 0x36CCF4u;
label_36ccf4:
    // 0x36ccf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ccf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36ccf8:
    // 0x36ccf8: 0x10000008  b           . + 4 + (0x8 << 2)
label_36ccfc:
    if (ctx->pc == 0x36CCFCu) {
        ctx->pc = 0x36CCFCu;
            // 0x36ccfc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x36CD00u;
        goto label_36cd00;
    }
    ctx->pc = 0x36CCF8u;
    {
        const bool branch_taken_0x36ccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36CCF8u;
            // 0x36ccfc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ccf8) {
            ctx->pc = 0x36CD1Cu;
            goto label_36cd1c;
        }
    }
    ctx->pc = 0x36CD00u;
label_36cd00:
    // 0x36cd00: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x36cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_36cd04:
    // 0x36cd04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x36cd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_36cd08:
    // 0x36cd08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36cd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_36cd0c:
    // 0x36cd0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36cd0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36cd10:
    // 0x36cd10: 0x0  nop
    ctx->pc = 0x36cd10u;
    // NOP
label_36cd14:
    // 0x36cd14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36cd14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_36cd18:
    // 0x36cd18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x36cd18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_36cd1c:
    // 0x36cd1c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x36cd1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_36cd20:
    // 0x36cd20: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x36cd20u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_36cd24:
    // 0x36cd24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x36cd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_36cd28:
    // 0x36cd28: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x36cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_36cd2c:
    // 0x36cd2c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x36cd2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_36cd30:
    // 0x36cd30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x36cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_36cd34:
    // 0x36cd34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36cd38:
    // 0x36cd38: 0xc04cc1c  jal         func_133070
label_36cd3c:
    if (ctx->pc == 0x36CD3Cu) {
        ctx->pc = 0x36CD3Cu;
            // 0x36cd3c: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x36CD40u;
        goto label_36cd40;
    }
    ctx->pc = 0x36CD38u;
    SET_GPR_U32(ctx, 31, 0x36CD40u);
    ctx->pc = 0x36CD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CD38u;
            // 0x36cd3c: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CD40u; }
        if (ctx->pc != 0x36CD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CD40u; }
        if (ctx->pc != 0x36CD40u) { return; }
    }
    ctx->pc = 0x36CD40u;
label_36cd40:
    // 0x36cd40: 0x46000647  neg.s       $f25, $f0
    ctx->pc = 0x36cd40u;
    ctx->f[25] = FPU_NEG_S(ctx->f[0]);
label_36cd44:
    // 0x36cd44: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36cd48:
    // 0x36cd48: 0x4614b801  sub.s       $f0, $f23, $f20
    ctx->pc = 0x36cd48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
label_36cd4c:
    // 0x36cd4c: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x36cd4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_36cd50:
    // 0x36cd50: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x36cd50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_36cd54:
    // 0x36cd54: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x36cd54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_36cd58:
    // 0x36cd58: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x36cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_36cd5c:
    // 0x36cd5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36cd60:
    // 0x36cd60: 0x24a51980  addiu       $a1, $a1, 0x1980
    ctx->pc = 0x36cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6528));
label_36cd64:
    // 0x36cd64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x36cd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36cd68:
    // 0x36cd68: 0xe5001984  swc1        $f0, 0x1984($t0)
    ctx->pc = 0x36cd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 6532), bits); }
label_36cd6c:
    // 0x36cd6c: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x36cd6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_36cd70:
    // 0x36cd70: 0xe4e01998  swc1        $f0, 0x1998($a3)
    ctx->pc = 0x36cd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 6552), bits); }
label_36cd74:
    // 0x36cd74: 0x4614b800  add.s       $f0, $f23, $f20
    ctx->pc = 0x36cd74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
label_36cd78:
    // 0x36cd78: 0xe45819a8  swc1        $f24, 0x19A8($v0)
    ctx->pc = 0x36cd78u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6568), bits); }
label_36cd7c:
    // 0x36cd7c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36cd80:
    // 0x36cd80: 0xe4581980  swc1        $f24, 0x1980($v0)
    ctx->pc = 0x36cd80u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6528), bits); }
label_36cd84:
    // 0x36cd84: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36cd88:
    // 0x36cd88: 0xe46019ac  swc1        $f0, 0x19AC($v1)
    ctx->pc = 0x36cd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6572), bits); }
label_36cd8c:
    // 0x36cd8c: 0xe45619bc  swc1        $f22, 0x19BC($v0)
    ctx->pc = 0x36cd8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6588), bits); }
label_36cd90:
    // 0x36cd90: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36cd94:
    // 0x36cd94: 0xe4561994  swc1        $f22, 0x1994($v0)
    ctx->pc = 0x36cd94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6548), bits); }
label_36cd98:
    // 0x36cd98: 0x4614a800  add.s       $f0, $f21, $f20
    ctx->pc = 0x36cd98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_36cd9c:
    // 0x36cd9c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36cda0:
    // 0x36cda0: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x36cda0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_36cda4:
    // 0x36cda4: 0xc050780  jal         func_141E00
label_36cda8:
    if (ctx->pc == 0x36CDA8u) {
        ctx->pc = 0x36CDA8u;
            // 0x36cda8: 0xe44019c0  swc1        $f0, 0x19C0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6592), bits); }
        ctx->pc = 0x36CDACu;
        goto label_36cdac;
    }
    ctx->pc = 0x36CDA4u;
    SET_GPR_U32(ctx, 31, 0x36CDACu);
    ctx->pc = 0x36CDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CDA4u;
            // 0x36cda8: 0xe44019c0  swc1        $f0, 0x19C0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6592), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CDACu; }
        if (ctx->pc != 0x36CDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E00_0x141e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CDACu; }
        if (ctx->pc != 0x36CDACu) { return; }
    }
    ctx->pc = 0x36CDACu;
label_36cdac:
    // 0x36cdac: 0x4614c000  add.s       $f0, $f24, $f20
    ctx->pc = 0x36cdacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
label_36cdb0:
    // 0x36cdb0: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x36cdb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_36cdb4:
    // 0x36cdb4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36cdb8:
    // 0x36cdb8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x36cdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_36cdbc:
    // 0x36cdbc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x36cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_36cdc0:
    // 0x36cdc0: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x36cdc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_36cdc4:
    // 0x36cdc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36cdc8:
    // 0x36cdc8: 0x24a51980  addiu       $a1, $a1, 0x1980
    ctx->pc = 0x36cdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6528));
label_36cdcc:
    // 0x36cdcc: 0xe5001980  swc1        $f0, 0x1980($t0)
    ctx->pc = 0x36cdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 6528), bits); }
label_36cdd0:
    // 0x36cdd0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x36cdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36cdd4:
    // 0x36cdd4: 0x4614c001  sub.s       $f0, $f24, $f20
    ctx->pc = 0x36cdd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[20]);
label_36cdd8:
    // 0x36cdd8: 0xe46019a8  swc1        $f0, 0x19A8($v1)
    ctx->pc = 0x36cdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6568), bits); }
label_36cddc:
    // 0x36cddc: 0x4614b000  add.s       $f0, $f22, $f20
    ctx->pc = 0x36cddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_36cde0:
    // 0x36cde0: 0xe45719ac  swc1        $f23, 0x19AC($v0)
    ctx->pc = 0x36cde0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6572), bits); }
label_36cde4:
    // 0x36cde4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36cde8:
    // 0x36cde8: 0xe4571984  swc1        $f23, 0x1984($v0)
    ctx->pc = 0x36cde8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6532), bits); }
label_36cdec:
    // 0x36cdec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36cdf0:
    // 0x36cdf0: 0xe4e01994  swc1        $f0, 0x1994($a3)
    ctx->pc = 0x36cdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 6548), bits); }
label_36cdf4:
    // 0x36cdf4: 0xe45519c0  swc1        $f21, 0x19C0($v0)
    ctx->pc = 0x36cdf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6592), bits); }
label_36cdf8:
    // 0x36cdf8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36cdfc:
    // 0x36cdfc: 0xe4551998  swc1        $f21, 0x1998($v0)
    ctx->pc = 0x36cdfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6552), bits); }
label_36ce00:
    // 0x36ce00: 0x4614b001  sub.s       $f0, $f22, $f20
    ctx->pc = 0x36ce00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
label_36ce04:
    // 0x36ce04: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36ce08:
    // 0x36ce08: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x36ce08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_36ce0c:
    // 0x36ce0c: 0xc050780  jal         func_141E00
label_36ce10:
    if (ctx->pc == 0x36CE10u) {
        ctx->pc = 0x36CE10u;
            // 0x36ce10: 0xe44019bc  swc1        $f0, 0x19BC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6588), bits); }
        ctx->pc = 0x36CE14u;
        goto label_36ce14;
    }
    ctx->pc = 0x36CE0Cu;
    SET_GPR_U32(ctx, 31, 0x36CE14u);
    ctx->pc = 0x36CE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CE0Cu;
            // 0x36ce10: 0xe44019bc  swc1        $f0, 0x19BC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6588), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CE14u; }
        if (ctx->pc != 0x36CE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E00_0x141e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CE14u; }
        if (ctx->pc != 0x36CE14u) { return; }
    }
    ctx->pc = 0x36CE14u;
label_36ce14:
    // 0x36ce14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_36ce18:
    // 0x36ce18: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x36ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_36ce1c:
    // 0x36ce1c: 0x9042007e  lbu         $v0, 0x7E($v0)
    ctx->pc = 0x36ce1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 126)));
label_36ce20:
    // 0x36ce20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_36ce24:
    if (ctx->pc == 0x36CE24u) {
        ctx->pc = 0x36CE28u;
        goto label_36ce28;
    }
    ctx->pc = 0x36CE20u;
    {
        const bool branch_taken_0x36ce20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ce20) {
            ctx->pc = 0x36CE50u;
            goto label_36ce50;
        }
    }
    ctx->pc = 0x36CE28u;
label_36ce28:
    // 0x36ce28: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x36ce28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_36ce2c:
    // 0x36ce2c: 0x92a300af  lbu         $v1, 0xAF($s5)
    ctx->pc = 0x36ce2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 175)));
label_36ce30:
    // 0x36ce30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_36ce34:
    // 0x36ce34: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x36ce34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_36ce38:
    // 0x36ce38: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x36ce38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_36ce3c:
    // 0x36ce3c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x36ce3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_36ce40:
    // 0x36ce40: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x36ce40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_36ce44:
    // 0x36ce44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36ce48:
    // 0x36ce48: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x36ce48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
label_36ce4c:
    // 0x36ce4c: 0x0  nop
    ctx->pc = 0x36ce4cu;
    // NOP
label_36ce50:
    // 0x36ce50: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x36ce50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36ce54:
    // 0x36ce54: 0x0  nop
    ctx->pc = 0x36ce54u;
    // NOP
label_36ce58:
    // 0x36ce58: 0x97c20070  lhu         $v0, 0x70($fp)
    ctx->pc = 0x36ce58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 112)));
label_36ce5c:
    // 0x36ce5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36ce5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36ce60:
    // 0x36ce60: 0x26d600b0  addiu       $s6, $s6, 0xB0
    ctx->pc = 0x36ce60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 176));
label_36ce64:
    // 0x36ce64: 0x263100b0  addiu       $s1, $s1, 0xB0
    ctx->pc = 0x36ce64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_36ce68:
    // 0x36ce68: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x36ce68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_36ce6c:
    // 0x36ce6c: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
label_36ce70:
    if (ctx->pc == 0x36CE70u) {
        ctx->pc = 0x36CE70u;
            // 0x36ce70: 0x26b500b0  addiu       $s5, $s5, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
        ctx->pc = 0x36CE74u;
        goto label_36ce74;
    }
    ctx->pc = 0x36CE6Cu;
    {
        const bool branch_taken_0x36ce6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36CE6Cu;
            // 0x36ce70: 0x26b500b0  addiu       $s5, $s5, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ce6c) {
            ctx->pc = 0x36CBC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36cbc0;
        }
    }
    ctx->pc = 0x36CE74u;
label_36ce74:
    // 0x36ce74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36ce78:
    // 0x36ce78: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
label_36ce7c:
    if (ctx->pc == 0x36CE7Cu) {
        ctx->pc = 0x36CE7Cu;
            // 0x36ce7c: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x36CE80u;
        goto label_36ce80;
    }
    ctx->pc = 0x36CE78u;
    {
        const bool branch_taken_0x36ce78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x36ce78) {
            ctx->pc = 0x36CE7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36CE78u;
            // 0x36ce7c: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36CE8Cu;
            goto label_36ce8c;
        }
    }
    ctx->pc = 0x36CE80u;
label_36ce80:
    // 0x36ce80: 0xc0508a4  jal         func_142290
label_36ce84:
    if (ctx->pc == 0x36CE84u) {
        ctx->pc = 0x36CE88u;
        goto label_36ce88;
    }
    ctx->pc = 0x36CE80u;
    SET_GPR_U32(ctx, 31, 0x36CE88u);
    ctx->pc = 0x142290u;
    if (runtime->hasFunction(0x142290u)) {
        auto targetFn = runtime->lookupFunction(0x142290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CE88u; }
        if (ctx->pc != 0x36CE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142290_0x142290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CE88u; }
        if (ctx->pc != 0x36CE88u) { return; }
    }
    ctx->pc = 0x36CE88u;
label_36ce88:
    // 0x36ce88: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x36ce88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_36ce8c:
    // 0x36ce8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36ce8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_36ce90:
    // 0x36ce90: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x36ce90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_36ce94:
    // 0x36ce94: 0x320f809  jalr        $t9
label_36ce98:
    if (ctx->pc == 0x36CE98u) {
        ctx->pc = 0x36CE98u;
            // 0x36ce98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36CE9Cu;
        goto label_36ce9c;
    }
    ctx->pc = 0x36CE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36CE9Cu);
        ctx->pc = 0x36CE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36CE94u;
            // 0x36ce98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36CE9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36CE9Cu; }
            if (ctx->pc != 0x36CE9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36CE9Cu;
label_36ce9c:
    // 0x36ce9c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x36ce9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_36cea0:
    // 0x36cea0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x36cea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_36cea4:
    // 0x36cea4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x36cea4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_36cea8:
    // 0x36cea8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x36cea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_36ceac:
    // 0x36ceac: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x36ceacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_36ceb0:
    // 0x36ceb0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x36ceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_36ceb4:
    // 0x36ceb4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x36ceb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_36ceb8:
    // 0x36ceb8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x36ceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_36cebc:
    // 0x36cebc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x36cebcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_36cec0:
    // 0x36cec0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x36cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_36cec4:
    // 0x36cec4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x36cec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_36cec8:
    // 0x36cec8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x36cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_36cecc:
    // 0x36cecc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x36ceccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_36ced0:
    // 0x36ced0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x36ced0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_36ced4:
    // 0x36ced4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x36ced4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36ced8:
    // 0x36ced8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36ced8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36cedc:
    // 0x36cedc: 0x3e00008  jr          $ra
label_36cee0:
    if (ctx->pc == 0x36CEE0u) {
        ctx->pc = 0x36CEE0u;
            // 0x36cee0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x36CEE4u;
        goto label_36cee4;
    }
    ctx->pc = 0x36CEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36CEDCu;
            // 0x36cee0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36CEE4u;
label_36cee4:
    // 0x36cee4: 0x0  nop
    ctx->pc = 0x36cee4u;
    // NOP
label_36cee8:
    // 0x36cee8: 0x0  nop
    ctx->pc = 0x36cee8u;
    // NOP
label_36ceec:
    // 0x36ceec: 0x0  nop
    ctx->pc = 0x36ceecu;
    // NOP
label_36cef0:
    // 0x36cef0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36cef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_36cef4:
    // 0x36cef4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x36cef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_36cef8:
    // 0x36cef8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36cef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_36cefc:
    // 0x36cefc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36cefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_36cf00:
    // 0x36cf00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36cf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36cf04:
    // 0x36cf04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x36cf04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36cf08:
    // 0x36cf08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36cf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36cf0c:
    // 0x36cf0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36cf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36cf10:
    // 0x36cf10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36cf10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36cf14:
    // 0x36cf14: 0x8c920054  lw          $s2, 0x54($a0)
    ctx->pc = 0x36cf14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_36cf18:
    // 0x36cf18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36cf18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36cf1c:
    // 0x36cf1c: 0x924300ac  lbu         $v1, 0xAC($s2)
    ctx->pc = 0x36cf1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
label_36cf20:
    // 0x36cf20: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_36cf24:
    if (ctx->pc == 0x36CF24u) {
        ctx->pc = 0x36CF28u;
        goto label_36cf28;
    }
    ctx->pc = 0x36CF20u;
    {
        const bool branch_taken_0x36cf20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36cf20) {
            ctx->pc = 0x36CF30u;
            goto label_36cf30;
        }
    }
    ctx->pc = 0x36CF28u;
label_36cf28:
    // 0x36cf28: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_36cf2c:
    if (ctx->pc == 0x36CF2Cu) {
        ctx->pc = 0x36CF2Cu;
            // 0x36cf2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x36CF30u;
        goto label_36cf30;
    }
    ctx->pc = 0x36CF28u;
    {
        const bool branch_taken_0x36cf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36CF28u;
            // 0x36cf2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cf28) {
            ctx->pc = 0x36D1B8u;
            goto label_36d1b8;
        }
    }
    ctx->pc = 0x36CF30u;
label_36cf30:
    // 0x36cf30: 0x3c033b32  lui         $v1, 0x3B32
    ctx->pc = 0x36cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15154 << 16));
label_36cf34:
    // 0x36cf34: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x36cf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36cf38:
    // 0x36cf38: 0x3464864d  ori         $a0, $v1, 0x864D
    ctx->pc = 0x36cf38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34381);
label_36cf3c:
    // 0x36cf3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x36cf3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_36cf40:
    // 0x36cf40: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x36cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_36cf44:
    // 0x36cf44: 0xc664006c  lwc1        $f4, 0x6C($s3)
    ctx->pc = 0x36cf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_36cf48:
    // 0x36cf48: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x36cf48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_36cf4c:
    // 0x36cf4c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x36cf4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_36cf50:
    // 0x36cf50: 0x0  nop
    ctx->pc = 0x36cf50u;
    // NOP
label_36cf54:
    // 0x36cf54: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x36cf54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_36cf58:
    // 0x36cf58: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x36cf58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_36cf5c:
    // 0x36cf5c: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x36cf5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_36cf60:
    // 0x36cf60: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x36cf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36cf64:
    // 0x36cf64: 0xc6610064  lwc1        $f1, 0x64($s3)
    ctx->pc = 0x36cf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36cf68:
    // 0x36cf68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36cf68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36cf6c:
    // 0x36cf6c: 0x0  nop
    ctx->pc = 0x36cf6cu;
    // NOP
label_36cf70:
    // 0x36cf70: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x36cf70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_36cf74:
    // 0x36cf74: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x36cf74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_36cf78:
    // 0x36cf78: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x36cf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36cf7c:
    // 0x36cf7c: 0xc6610064  lwc1        $f1, 0x64($s3)
    ctx->pc = 0x36cf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36cf80:
    // 0x36cf80: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x36cf80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_36cf84:
    // 0x36cf84: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x36cf84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_36cf88:
    // 0x36cf88: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x36cf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36cf8c:
    // 0x36cf8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36cf8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36cf90:
    // 0x36cf90: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
label_36cf94:
    if (ctx->pc == 0x36CF94u) {
        ctx->pc = 0x36CF98u;
        goto label_36cf98;
    }
    ctx->pc = 0x36CF90u;
    {
        const bool branch_taken_0x36cf90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36cf90) {
            ctx->pc = 0x36D140u;
            goto label_36d140;
        }
    }
    ctx->pc = 0x36CF98u;
label_36cf98:
    // 0x36cf98: 0x924300ad  lbu         $v1, 0xAD($s2)
    ctx->pc = 0x36cf98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 173)));
label_36cf9c:
    // 0x36cf9c: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_36cfa0:
    if (ctx->pc == 0x36CFA0u) {
        ctx->pc = 0x36CFA4u;
        goto label_36cfa4;
    }
    ctx->pc = 0x36CF9Cu;
    {
        const bool branch_taken_0x36cf9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cf9c) {
            ctx->pc = 0x36D140u;
            goto label_36d140;
        }
    }
    ctx->pc = 0x36CFA4u;
label_36cfa4:
    // 0x36cfa4: 0xc04ab66  jal         func_12AD98
label_36cfa8:
    if (ctx->pc == 0x36CFA8u) {
        ctx->pc = 0x36CFACu;
        goto label_36cfac;
    }
    ctx->pc = 0x36CFA4u;
    SET_GPR_U32(ctx, 31, 0x36CFACu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CFACu; }
        if (ctx->pc != 0x36CFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CFACu; }
        if (ctx->pc != 0x36CFACu) { return; }
    }
    ctx->pc = 0x36CFACu;
label_36cfac:
    // 0x36cfac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36cfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_36cfb0:
    // 0x36cfb0: 0xc04ab66  jal         func_12AD98
label_36cfb4:
    if (ctx->pc == 0x36CFB4u) {
        ctx->pc = 0x36CFB4u;
            // 0x36cfb4: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x36CFB8u;
        goto label_36cfb8;
    }
    ctx->pc = 0x36CFB0u;
    SET_GPR_U32(ctx, 31, 0x36CFB8u);
    ctx->pc = 0x36CFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CFB0u;
            // 0x36cfb4: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CFB8u; }
        if (ctx->pc != 0x36CFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CFB8u; }
        if (ctx->pc != 0x36CFB8u) { return; }
    }
    ctx->pc = 0x36CFB8u;
label_36cfb8:
    // 0x36cfb8: 0x542025  or          $a0, $v0, $s4
    ctx->pc = 0x36cfb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_36cfbc:
    // 0x36cfbc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x36cfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_36cfc0:
    // 0x36cfc0: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x36cfc0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_36cfc4:
    // 0x36cfc4: 0x1810  mfhi        $v1
    ctx->pc = 0x36cfc4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_36cfc8:
    // 0x36cfc8: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
label_36cfcc:
    if (ctx->pc == 0x36CFCCu) {
        ctx->pc = 0x36CFD0u;
        goto label_36cfd0;
    }
    ctx->pc = 0x36CFC8u;
    {
        const bool branch_taken_0x36cfc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36cfc8) {
            ctx->pc = 0x36D140u;
            goto label_36d140;
        }
    }
    ctx->pc = 0x36CFD0u;
label_36cfd0:
    // 0x36cfd0: 0xc04ab66  jal         func_12AD98
label_36cfd4:
    if (ctx->pc == 0x36CFD4u) {
        ctx->pc = 0x36CFD8u;
        goto label_36cfd8;
    }
    ctx->pc = 0x36CFD0u;
    SET_GPR_U32(ctx, 31, 0x36CFD8u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CFD8u; }
        if (ctx->pc != 0x36CFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CFD8u; }
        if (ctx->pc != 0x36CFD8u) { return; }
    }
    ctx->pc = 0x36CFD8u;
label_36cfd8:
    // 0x36cfd8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36cfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_36cfdc:
    // 0x36cfdc: 0xc04ab66  jal         func_12AD98
label_36cfe0:
    if (ctx->pc == 0x36CFE0u) {
        ctx->pc = 0x36CFE0u;
            // 0x36cfe0: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x36CFE4u;
        goto label_36cfe4;
    }
    ctx->pc = 0x36CFDCu;
    SET_GPR_U32(ctx, 31, 0x36CFE4u);
    ctx->pc = 0x36CFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36CFDCu;
            // 0x36cfe0: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CFE4u; }
        if (ctx->pc != 0x36CFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36CFE4u; }
        if (ctx->pc != 0x36CFE4u) { return; }
    }
    ctx->pc = 0x36CFE4u;
label_36cfe4:
    // 0x36cfe4: 0x542025  or          $a0, $v0, $s4
    ctx->pc = 0x36cfe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_36cfe8:
    // 0x36cfe8: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x36cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_36cfec:
    // 0x36cfec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36cfecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_36cff0:
    // 0x36cff0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_36cff4:
    if (ctx->pc == 0x36CFF4u) {
        ctx->pc = 0x36CFF4u;
            // 0x36cff4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x36CFF8u;
        goto label_36cff8;
    }
    ctx->pc = 0x36CFF0u;
    {
        const bool branch_taken_0x36cff0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x36cff0) {
            ctx->pc = 0x36CFF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36CFF0u;
            // 0x36cff4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36D004u;
            goto label_36d004;
        }
    }
    ctx->pc = 0x36CFF8u;
label_36cff8:
    // 0x36cff8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x36cff8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36cffc:
    // 0x36cffc: 0x10000007  b           . + 4 + (0x7 << 2)
label_36d000:
    if (ctx->pc == 0x36D000u) {
        ctx->pc = 0x36D000u;
            // 0x36d000: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x36D004u;
        goto label_36d004;
    }
    ctx->pc = 0x36CFFCu;
    {
        const bool branch_taken_0x36cffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36CFFCu;
            // 0x36d000: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cffc) {
            ctx->pc = 0x36D01Cu;
            goto label_36d01c;
        }
    }
    ctx->pc = 0x36D004u;
label_36d004:
    // 0x36d004: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x36d004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_36d008:
    // 0x36d008: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36d008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_36d00c:
    // 0x36d00c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36d00cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36d010:
    // 0x36d010: 0x0  nop
    ctx->pc = 0x36d010u;
    // NOP
label_36d014:
    // 0x36d014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_36d018:
    // 0x36d018: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x36d018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_36d01c:
    // 0x36d01c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x36d01cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_36d020:
    // 0x36d020: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x36d020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_36d024:
    // 0x36d024: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x36d024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_36d028:
    // 0x36d028: 0x3c023dcd  lui         $v0, 0x3DCD
    ctx->pc = 0x36d028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15821 << 16));
label_36d02c:
    // 0x36d02c: 0x3442013b  ori         $v0, $v0, 0x13B
    ctx->pc = 0x36d02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)315);
label_36d030:
    // 0x36d030: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36d030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36d034:
    // 0x36d034: 0x0  nop
    ctx->pc = 0x36d034u;
    // NOP
label_36d038:
    // 0x36d038: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x36d038u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_36d03c:
    // 0x36d03c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36d040:
    // 0x36d040: 0x0  nop
    ctx->pc = 0x36d040u;
    // NOP
label_36d044:
    // 0x36d044: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36d044u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_36d048:
    // 0x36d048: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x36d048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36d04c:
    // 0x36d04c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d04cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_36d050:
    // 0x36d050: 0xc04ab66  jal         func_12AD98
label_36d054:
    if (ctx->pc == 0x36D054u) {
        ctx->pc = 0x36D054u;
            // 0x36d054: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->pc = 0x36D058u;
        goto label_36d058;
    }
    ctx->pc = 0x36D050u;
    SET_GPR_U32(ctx, 31, 0x36D058u);
    ctx->pc = 0x36D054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D050u;
            // 0x36d054: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D058u; }
        if (ctx->pc != 0x36D058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D058u; }
        if (ctx->pc != 0x36D058u) { return; }
    }
    ctx->pc = 0x36D058u;
label_36d058:
    // 0x36d058: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36d058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_36d05c:
    // 0x36d05c: 0xc04ab66  jal         func_12AD98
label_36d060:
    if (ctx->pc == 0x36D060u) {
        ctx->pc = 0x36D060u;
            // 0x36d060: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x36D064u;
        goto label_36d064;
    }
    ctx->pc = 0x36D05Cu;
    SET_GPR_U32(ctx, 31, 0x36D064u);
    ctx->pc = 0x36D060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D05Cu;
            // 0x36d060: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D064u; }
        if (ctx->pc != 0x36D064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D064u; }
        if (ctx->pc != 0x36D064u) { return; }
    }
    ctx->pc = 0x36D064u;
label_36d064:
    // 0x36d064: 0x542025  or          $a0, $v0, $s4
    ctx->pc = 0x36d064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_36d068:
    // 0x36d068: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x36d068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_36d06c:
    // 0x36d06c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36d06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_36d070:
    // 0x36d070: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_36d074:
    if (ctx->pc == 0x36D074u) {
        ctx->pc = 0x36D074u;
            // 0x36d074: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x36D078u;
        goto label_36d078;
    }
    ctx->pc = 0x36D070u;
    {
        const bool branch_taken_0x36d070 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x36d070) {
            ctx->pc = 0x36D074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36D070u;
            // 0x36d074: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36D084u;
            goto label_36d084;
        }
    }
    ctx->pc = 0x36D078u;
label_36d078:
    // 0x36d078: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x36d078u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36d07c:
    // 0x36d07c: 0x10000007  b           . + 4 + (0x7 << 2)
label_36d080:
    if (ctx->pc == 0x36D080u) {
        ctx->pc = 0x36D080u;
            // 0x36d080: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x36D084u;
        goto label_36d084;
    }
    ctx->pc = 0x36D07Cu;
    {
        const bool branch_taken_0x36d07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D07Cu;
            // 0x36d080: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d07c) {
            ctx->pc = 0x36D09Cu;
            goto label_36d09c;
        }
    }
    ctx->pc = 0x36D084u;
label_36d084:
    // 0x36d084: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x36d084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_36d088:
    // 0x36d088: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36d088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_36d08c:
    // 0x36d08c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36d08cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36d090:
    // 0x36d090: 0x0  nop
    ctx->pc = 0x36d090u;
    // NOP
label_36d094:
    // 0x36d094: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_36d098:
    // 0x36d098: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x36d098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_36d09c:
    // 0x36d09c: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x36d09cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_36d0a0:
    // 0x36d0a0: 0x3c023e57  lui         $v0, 0x3E57
    ctx->pc = 0x36d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15959 << 16));
label_36d0a4:
    // 0x36d0a4: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x36d0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
label_36d0a8:
    // 0x36d0a8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x36d0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36d0ac:
    // 0x36d0ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36d0acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36d0b0:
    // 0x36d0b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x36d0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_36d0b4:
    // 0x36d0b4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x36d0b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_36d0b8:
    // 0x36d0b8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x36d0b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_36d0bc:
    // 0x36d0bc: 0xc04ab66  jal         func_12AD98
label_36d0c0:
    if (ctx->pc == 0x36D0C0u) {
        ctx->pc = 0x36D0C0u;
            // 0x36d0c0: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->pc = 0x36D0C4u;
        goto label_36d0c4;
    }
    ctx->pc = 0x36D0BCu;
    SET_GPR_U32(ctx, 31, 0x36D0C4u);
    ctx->pc = 0x36D0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D0BCu;
            // 0x36d0c0: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D0C4u; }
        if (ctx->pc != 0x36D0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D0C4u; }
        if (ctx->pc != 0x36D0C4u) { return; }
    }
    ctx->pc = 0x36D0C4u;
label_36d0c4:
    // 0x36d0c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36d0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_36d0c8:
    // 0x36d0c8: 0xc04ab66  jal         func_12AD98
label_36d0cc:
    if (ctx->pc == 0x36D0CCu) {
        ctx->pc = 0x36D0CCu;
            // 0x36d0cc: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x36D0D0u;
        goto label_36d0d0;
    }
    ctx->pc = 0x36D0C8u;
    SET_GPR_U32(ctx, 31, 0x36D0D0u);
    ctx->pc = 0x36D0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D0C8u;
            // 0x36d0cc: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D0D0u; }
        if (ctx->pc != 0x36D0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D0D0u; }
        if (ctx->pc != 0x36D0D0u) { return; }
    }
    ctx->pc = 0x36D0D0u;
label_36d0d0:
    // 0x36d0d0: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x36d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_36d0d4:
    // 0x36d0d4: 0x542825  or          $a1, $v0, $s4
    ctx->pc = 0x36d0d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_36d0d8:
    // 0x36d0d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x36d0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_36d0dc:
    // 0x36d0dc: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_36d0e0:
    if (ctx->pc == 0x36D0E0u) {
        ctx->pc = 0x36D0E0u;
            // 0x36d0e0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x36D0E4u;
        goto label_36d0e4;
    }
    ctx->pc = 0x36D0DCu;
    {
        const bool branch_taken_0x36d0dc = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x36d0dc) {
            ctx->pc = 0x36D0E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36D0DCu;
            // 0x36d0e0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36D0F0u;
            goto label_36d0f0;
        }
    }
    ctx->pc = 0x36D0E4u;
label_36d0e4:
    // 0x36d0e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x36d0e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36d0e8:
    // 0x36d0e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_36d0ec:
    if (ctx->pc == 0x36D0ECu) {
        ctx->pc = 0x36D0ECu;
            // 0x36d0ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x36D0F0u;
        goto label_36d0f0;
    }
    ctx->pc = 0x36D0E8u;
    {
        const bool branch_taken_0x36d0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D0E8u;
            // 0x36d0ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d0e8) {
            ctx->pc = 0x36D108u;
            goto label_36d108;
        }
    }
    ctx->pc = 0x36D0F0u;
label_36d0f0:
    // 0x36d0f0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x36d0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_36d0f4:
    // 0x36d0f4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x36d0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_36d0f8:
    // 0x36d0f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x36d0f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36d0fc:
    // 0x36d0fc: 0x0  nop
    ctx->pc = 0x36d0fcu;
    // NOP
label_36d100:
    // 0x36d100: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_36d104:
    // 0x36d104: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x36d104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_36d108:
    // 0x36d108: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x36d108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_36d10c:
    // 0x36d10c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x36d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_36d110:
    // 0x36d110: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x36d110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_36d114:
    // 0x36d114: 0x3c033dcd  lui         $v1, 0x3DCD
    ctx->pc = 0x36d114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15821 << 16));
label_36d118:
    // 0x36d118: 0x3463013b  ori         $v1, $v1, 0x13B
    ctx->pc = 0x36d118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)315);
label_36d11c:
    // 0x36d11c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x36d11cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36d120:
    // 0x36d120: 0x0  nop
    ctx->pc = 0x36d120u;
    // NOP
label_36d124:
    // 0x36d124: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x36d124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_36d128:
    // 0x36d128: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36d128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36d12c:
    // 0x36d12c: 0x0  nop
    ctx->pc = 0x36d12cu;
    // NOP
label_36d130:
    // 0x36d130: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36d130u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_36d134:
    // 0x36d134: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x36d134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36d138:
    // 0x36d138: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_36d13c:
    // 0x36d13c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x36d13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_36d140:
    // 0x36d140: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x36d140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36d144:
    // 0x36d144: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x36d144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36d148:
    // 0x36d148: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_36d14c:
    // 0x36d14c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x36d14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_36d150:
    // 0x36d150: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x36d150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36d154:
    // 0x36d154: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x36d154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36d158:
    // 0x36d158: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_36d15c:
    // 0x36d15c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x36d15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_36d160:
    // 0x36d160: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x36d160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36d164:
    // 0x36d164: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x36d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36d168:
    // 0x36d168: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_36d16c:
    // 0x36d16c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x36d16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_36d170:
    // 0x36d170: 0xc6610058  lwc1        $f1, 0x58($s3)
    ctx->pc = 0x36d170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36d174:
    // 0x36d174: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x36d174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36d178:
    // 0x36d178: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x36d178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36d17c:
    // 0x36d17c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_36d180:
    if (ctx->pc == 0x36D180u) {
        ctx->pc = 0x36D184u;
        goto label_36d184;
    }
    ctx->pc = 0x36D17Cu;
    {
        const bool branch_taken_0x36d17c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36d17c) {
            ctx->pc = 0x36D1B8u;
            goto label_36d1b8;
        }
    }
    ctx->pc = 0x36D184u;
label_36d184:
    // 0x36d184: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x36d184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_36d188:
    // 0x36d188: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x36d188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
label_36d18c:
    // 0x36d18c: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x36d18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36d190:
    // 0x36d190: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x36d190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
label_36d194:
    // 0x36d194: 0xc6610068  lwc1        $f1, 0x68($s3)
    ctx->pc = 0x36d194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36d198:
    // 0x36d198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36d198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36d19c:
    // 0x36d19c: 0x0  nop
    ctx->pc = 0x36d19cu;
    // NOP
label_36d1a0:
    // 0x36d1a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x36d1a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_36d1a4:
    // 0x36d1a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36d1a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36d1a8:
    // 0x36d1a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_36d1ac:
    if (ctx->pc == 0x36D1ACu) {
        ctx->pc = 0x36D1ACu;
            // 0x36d1ac: 0xe6410014  swc1        $f1, 0x14($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->pc = 0x36D1B0u;
        goto label_36d1b0;
    }
    ctx->pc = 0x36D1A8u;
    {
        const bool branch_taken_0x36d1a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36D1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D1A8u;
            // 0x36d1ac: 0xe6410014  swc1        $f1, 0x14($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d1a8) {
            ctx->pc = 0x36D1B8u;
            goto label_36d1b8;
        }
    }
    ctx->pc = 0x36D1B0u;
label_36d1b0:
    // 0x36d1b0: 0xa24000ac  sb          $zero, 0xAC($s2)
    ctx->pc = 0x36d1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 172), (uint8_t)GPR_U32(ctx, 0));
label_36d1b4:
    // 0x36d1b4: 0x0  nop
    ctx->pc = 0x36d1b4u;
    // NOP
label_36d1b8:
    // 0x36d1b8: 0x96640070  lhu         $a0, 0x70($s3)
    ctx->pc = 0x36d1b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 112)));
label_36d1bc:
    // 0x36d1bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36d1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_36d1c0:
    // 0x36d1c0: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x36d1c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_36d1c4:
    // 0x36d1c4: 0x1460ff55  bnez        $v1, . + 4 + (-0xAB << 2)
label_36d1c8:
    if (ctx->pc == 0x36D1C8u) {
        ctx->pc = 0x36D1C8u;
            // 0x36d1c8: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->pc = 0x36D1CCu;
        goto label_36d1cc;
    }
    ctx->pc = 0x36D1C4u;
    {
        const bool branch_taken_0x36d1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D1C4u;
            // 0x36d1c8: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d1c4) {
            ctx->pc = 0x36CF1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36cf1c;
        }
    }
    ctx->pc = 0x36D1CCu;
label_36d1cc:
    // 0x36d1cc: 0x12240005  beq         $s1, $a0, . + 4 + (0x5 << 2)
label_36d1d0:
    if (ctx->pc == 0x36D1D0u) {
        ctx->pc = 0x36D1D4u;
        goto label_36d1d4;
    }
    ctx->pc = 0x36D1CCu;
    {
        const bool branch_taken_0x36d1cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x36d1cc) {
            ctx->pc = 0x36D1E4u;
            goto label_36d1e4;
        }
    }
    ctx->pc = 0x36D1D4u;
label_36d1d4:
    // 0x36d1d4: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x36d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_36d1d8:
    // 0x36d1d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_36d1dc:
    // 0x36d1dc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_36d1e0:
    if (ctx->pc == 0x36D1E0u) {
        ctx->pc = 0x36D1E0u;
            // 0x36d1e0: 0xae63005c  sw          $v1, 0x5C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
        ctx->pc = 0x36D1E4u;
        goto label_36d1e4;
    }
    ctx->pc = 0x36D1DCu;
    {
        const bool branch_taken_0x36d1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D1DCu;
            // 0x36d1e0: 0xae63005c  sw          $v1, 0x5C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d1dc) {
            ctx->pc = 0x36D1F8u;
            goto label_36d1f8;
        }
    }
    ctx->pc = 0x36D1E4u;
label_36d1e4:
    // 0x36d1e4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x36d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_36d1e8:
    // 0x36d1e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36d1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36d1ec:
    // 0x36d1ec: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x36d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_36d1f0:
    // 0x36d1f0: 0xc057b7c  jal         func_15EDF0
label_36d1f4:
    if (ctx->pc == 0x36D1F4u) {
        ctx->pc = 0x36D1F4u;
            // 0x36d1f4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x36D1F8u;
        goto label_36d1f8;
    }
    ctx->pc = 0x36D1F0u;
    SET_GPR_U32(ctx, 31, 0x36D1F8u);
    ctx->pc = 0x36D1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D1F0u;
            // 0x36d1f4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D1F8u; }
        if (ctx->pc != 0x36D1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D1F8u; }
        if (ctx->pc != 0x36D1F8u) { return; }
    }
    ctx->pc = 0x36D1F8u;
label_36d1f8:
    // 0x36d1f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x36d1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_36d1fc:
    // 0x36d1fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36d1fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_36d200:
    // 0x36d200: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36d200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36d204:
    // 0x36d204: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36d204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36d208:
    // 0x36d208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36d208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36d20c:
    // 0x36d20c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36d20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36d210:
    // 0x36d210: 0x3e00008  jr          $ra
label_36d214:
    if (ctx->pc == 0x36D214u) {
        ctx->pc = 0x36D214u;
            // 0x36d214: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x36D218u;
        goto label_36d218;
    }
    ctx->pc = 0x36D210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D210u;
            // 0x36d214: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36D218u;
label_36d218:
    // 0x36d218: 0x0  nop
    ctx->pc = 0x36d218u;
    // NOP
label_36d21c:
    // 0x36d21c: 0x0  nop
    ctx->pc = 0x36d21cu;
    // NOP
}
