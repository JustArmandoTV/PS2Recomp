#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CDF10
// Address: 0x4cdf10 - 0x4ce9f0
void sub_004CDF10_0x4cdf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CDF10_0x4cdf10");
#endif

    switch (ctx->pc) {
        case 0x4cdf10u: goto label_4cdf10;
        case 0x4cdf14u: goto label_4cdf14;
        case 0x4cdf18u: goto label_4cdf18;
        case 0x4cdf1cu: goto label_4cdf1c;
        case 0x4cdf20u: goto label_4cdf20;
        case 0x4cdf24u: goto label_4cdf24;
        case 0x4cdf28u: goto label_4cdf28;
        case 0x4cdf2cu: goto label_4cdf2c;
        case 0x4cdf30u: goto label_4cdf30;
        case 0x4cdf34u: goto label_4cdf34;
        case 0x4cdf38u: goto label_4cdf38;
        case 0x4cdf3cu: goto label_4cdf3c;
        case 0x4cdf40u: goto label_4cdf40;
        case 0x4cdf44u: goto label_4cdf44;
        case 0x4cdf48u: goto label_4cdf48;
        case 0x4cdf4cu: goto label_4cdf4c;
        case 0x4cdf50u: goto label_4cdf50;
        case 0x4cdf54u: goto label_4cdf54;
        case 0x4cdf58u: goto label_4cdf58;
        case 0x4cdf5cu: goto label_4cdf5c;
        case 0x4cdf60u: goto label_4cdf60;
        case 0x4cdf64u: goto label_4cdf64;
        case 0x4cdf68u: goto label_4cdf68;
        case 0x4cdf6cu: goto label_4cdf6c;
        case 0x4cdf70u: goto label_4cdf70;
        case 0x4cdf74u: goto label_4cdf74;
        case 0x4cdf78u: goto label_4cdf78;
        case 0x4cdf7cu: goto label_4cdf7c;
        case 0x4cdf80u: goto label_4cdf80;
        case 0x4cdf84u: goto label_4cdf84;
        case 0x4cdf88u: goto label_4cdf88;
        case 0x4cdf8cu: goto label_4cdf8c;
        case 0x4cdf90u: goto label_4cdf90;
        case 0x4cdf94u: goto label_4cdf94;
        case 0x4cdf98u: goto label_4cdf98;
        case 0x4cdf9cu: goto label_4cdf9c;
        case 0x4cdfa0u: goto label_4cdfa0;
        case 0x4cdfa4u: goto label_4cdfa4;
        case 0x4cdfa8u: goto label_4cdfa8;
        case 0x4cdfacu: goto label_4cdfac;
        case 0x4cdfb0u: goto label_4cdfb0;
        case 0x4cdfb4u: goto label_4cdfb4;
        case 0x4cdfb8u: goto label_4cdfb8;
        case 0x4cdfbcu: goto label_4cdfbc;
        case 0x4cdfc0u: goto label_4cdfc0;
        case 0x4cdfc4u: goto label_4cdfc4;
        case 0x4cdfc8u: goto label_4cdfc8;
        case 0x4cdfccu: goto label_4cdfcc;
        case 0x4cdfd0u: goto label_4cdfd0;
        case 0x4cdfd4u: goto label_4cdfd4;
        case 0x4cdfd8u: goto label_4cdfd8;
        case 0x4cdfdcu: goto label_4cdfdc;
        case 0x4cdfe0u: goto label_4cdfe0;
        case 0x4cdfe4u: goto label_4cdfe4;
        case 0x4cdfe8u: goto label_4cdfe8;
        case 0x4cdfecu: goto label_4cdfec;
        case 0x4cdff0u: goto label_4cdff0;
        case 0x4cdff4u: goto label_4cdff4;
        case 0x4cdff8u: goto label_4cdff8;
        case 0x4cdffcu: goto label_4cdffc;
        case 0x4ce000u: goto label_4ce000;
        case 0x4ce004u: goto label_4ce004;
        case 0x4ce008u: goto label_4ce008;
        case 0x4ce00cu: goto label_4ce00c;
        case 0x4ce010u: goto label_4ce010;
        case 0x4ce014u: goto label_4ce014;
        case 0x4ce018u: goto label_4ce018;
        case 0x4ce01cu: goto label_4ce01c;
        case 0x4ce020u: goto label_4ce020;
        case 0x4ce024u: goto label_4ce024;
        case 0x4ce028u: goto label_4ce028;
        case 0x4ce02cu: goto label_4ce02c;
        case 0x4ce030u: goto label_4ce030;
        case 0x4ce034u: goto label_4ce034;
        case 0x4ce038u: goto label_4ce038;
        case 0x4ce03cu: goto label_4ce03c;
        case 0x4ce040u: goto label_4ce040;
        case 0x4ce044u: goto label_4ce044;
        case 0x4ce048u: goto label_4ce048;
        case 0x4ce04cu: goto label_4ce04c;
        case 0x4ce050u: goto label_4ce050;
        case 0x4ce054u: goto label_4ce054;
        case 0x4ce058u: goto label_4ce058;
        case 0x4ce05cu: goto label_4ce05c;
        case 0x4ce060u: goto label_4ce060;
        case 0x4ce064u: goto label_4ce064;
        case 0x4ce068u: goto label_4ce068;
        case 0x4ce06cu: goto label_4ce06c;
        case 0x4ce070u: goto label_4ce070;
        case 0x4ce074u: goto label_4ce074;
        case 0x4ce078u: goto label_4ce078;
        case 0x4ce07cu: goto label_4ce07c;
        case 0x4ce080u: goto label_4ce080;
        case 0x4ce084u: goto label_4ce084;
        case 0x4ce088u: goto label_4ce088;
        case 0x4ce08cu: goto label_4ce08c;
        case 0x4ce090u: goto label_4ce090;
        case 0x4ce094u: goto label_4ce094;
        case 0x4ce098u: goto label_4ce098;
        case 0x4ce09cu: goto label_4ce09c;
        case 0x4ce0a0u: goto label_4ce0a0;
        case 0x4ce0a4u: goto label_4ce0a4;
        case 0x4ce0a8u: goto label_4ce0a8;
        case 0x4ce0acu: goto label_4ce0ac;
        case 0x4ce0b0u: goto label_4ce0b0;
        case 0x4ce0b4u: goto label_4ce0b4;
        case 0x4ce0b8u: goto label_4ce0b8;
        case 0x4ce0bcu: goto label_4ce0bc;
        case 0x4ce0c0u: goto label_4ce0c0;
        case 0x4ce0c4u: goto label_4ce0c4;
        case 0x4ce0c8u: goto label_4ce0c8;
        case 0x4ce0ccu: goto label_4ce0cc;
        case 0x4ce0d0u: goto label_4ce0d0;
        case 0x4ce0d4u: goto label_4ce0d4;
        case 0x4ce0d8u: goto label_4ce0d8;
        case 0x4ce0dcu: goto label_4ce0dc;
        case 0x4ce0e0u: goto label_4ce0e0;
        case 0x4ce0e4u: goto label_4ce0e4;
        case 0x4ce0e8u: goto label_4ce0e8;
        case 0x4ce0ecu: goto label_4ce0ec;
        case 0x4ce0f0u: goto label_4ce0f0;
        case 0x4ce0f4u: goto label_4ce0f4;
        case 0x4ce0f8u: goto label_4ce0f8;
        case 0x4ce0fcu: goto label_4ce0fc;
        case 0x4ce100u: goto label_4ce100;
        case 0x4ce104u: goto label_4ce104;
        case 0x4ce108u: goto label_4ce108;
        case 0x4ce10cu: goto label_4ce10c;
        case 0x4ce110u: goto label_4ce110;
        case 0x4ce114u: goto label_4ce114;
        case 0x4ce118u: goto label_4ce118;
        case 0x4ce11cu: goto label_4ce11c;
        case 0x4ce120u: goto label_4ce120;
        case 0x4ce124u: goto label_4ce124;
        case 0x4ce128u: goto label_4ce128;
        case 0x4ce12cu: goto label_4ce12c;
        case 0x4ce130u: goto label_4ce130;
        case 0x4ce134u: goto label_4ce134;
        case 0x4ce138u: goto label_4ce138;
        case 0x4ce13cu: goto label_4ce13c;
        case 0x4ce140u: goto label_4ce140;
        case 0x4ce144u: goto label_4ce144;
        case 0x4ce148u: goto label_4ce148;
        case 0x4ce14cu: goto label_4ce14c;
        case 0x4ce150u: goto label_4ce150;
        case 0x4ce154u: goto label_4ce154;
        case 0x4ce158u: goto label_4ce158;
        case 0x4ce15cu: goto label_4ce15c;
        case 0x4ce160u: goto label_4ce160;
        case 0x4ce164u: goto label_4ce164;
        case 0x4ce168u: goto label_4ce168;
        case 0x4ce16cu: goto label_4ce16c;
        case 0x4ce170u: goto label_4ce170;
        case 0x4ce174u: goto label_4ce174;
        case 0x4ce178u: goto label_4ce178;
        case 0x4ce17cu: goto label_4ce17c;
        case 0x4ce180u: goto label_4ce180;
        case 0x4ce184u: goto label_4ce184;
        case 0x4ce188u: goto label_4ce188;
        case 0x4ce18cu: goto label_4ce18c;
        case 0x4ce190u: goto label_4ce190;
        case 0x4ce194u: goto label_4ce194;
        case 0x4ce198u: goto label_4ce198;
        case 0x4ce19cu: goto label_4ce19c;
        case 0x4ce1a0u: goto label_4ce1a0;
        case 0x4ce1a4u: goto label_4ce1a4;
        case 0x4ce1a8u: goto label_4ce1a8;
        case 0x4ce1acu: goto label_4ce1ac;
        case 0x4ce1b0u: goto label_4ce1b0;
        case 0x4ce1b4u: goto label_4ce1b4;
        case 0x4ce1b8u: goto label_4ce1b8;
        case 0x4ce1bcu: goto label_4ce1bc;
        case 0x4ce1c0u: goto label_4ce1c0;
        case 0x4ce1c4u: goto label_4ce1c4;
        case 0x4ce1c8u: goto label_4ce1c8;
        case 0x4ce1ccu: goto label_4ce1cc;
        case 0x4ce1d0u: goto label_4ce1d0;
        case 0x4ce1d4u: goto label_4ce1d4;
        case 0x4ce1d8u: goto label_4ce1d8;
        case 0x4ce1dcu: goto label_4ce1dc;
        case 0x4ce1e0u: goto label_4ce1e0;
        case 0x4ce1e4u: goto label_4ce1e4;
        case 0x4ce1e8u: goto label_4ce1e8;
        case 0x4ce1ecu: goto label_4ce1ec;
        case 0x4ce1f0u: goto label_4ce1f0;
        case 0x4ce1f4u: goto label_4ce1f4;
        case 0x4ce1f8u: goto label_4ce1f8;
        case 0x4ce1fcu: goto label_4ce1fc;
        case 0x4ce200u: goto label_4ce200;
        case 0x4ce204u: goto label_4ce204;
        case 0x4ce208u: goto label_4ce208;
        case 0x4ce20cu: goto label_4ce20c;
        case 0x4ce210u: goto label_4ce210;
        case 0x4ce214u: goto label_4ce214;
        case 0x4ce218u: goto label_4ce218;
        case 0x4ce21cu: goto label_4ce21c;
        case 0x4ce220u: goto label_4ce220;
        case 0x4ce224u: goto label_4ce224;
        case 0x4ce228u: goto label_4ce228;
        case 0x4ce22cu: goto label_4ce22c;
        case 0x4ce230u: goto label_4ce230;
        case 0x4ce234u: goto label_4ce234;
        case 0x4ce238u: goto label_4ce238;
        case 0x4ce23cu: goto label_4ce23c;
        case 0x4ce240u: goto label_4ce240;
        case 0x4ce244u: goto label_4ce244;
        case 0x4ce248u: goto label_4ce248;
        case 0x4ce24cu: goto label_4ce24c;
        case 0x4ce250u: goto label_4ce250;
        case 0x4ce254u: goto label_4ce254;
        case 0x4ce258u: goto label_4ce258;
        case 0x4ce25cu: goto label_4ce25c;
        case 0x4ce260u: goto label_4ce260;
        case 0x4ce264u: goto label_4ce264;
        case 0x4ce268u: goto label_4ce268;
        case 0x4ce26cu: goto label_4ce26c;
        case 0x4ce270u: goto label_4ce270;
        case 0x4ce274u: goto label_4ce274;
        case 0x4ce278u: goto label_4ce278;
        case 0x4ce27cu: goto label_4ce27c;
        case 0x4ce280u: goto label_4ce280;
        case 0x4ce284u: goto label_4ce284;
        case 0x4ce288u: goto label_4ce288;
        case 0x4ce28cu: goto label_4ce28c;
        case 0x4ce290u: goto label_4ce290;
        case 0x4ce294u: goto label_4ce294;
        case 0x4ce298u: goto label_4ce298;
        case 0x4ce29cu: goto label_4ce29c;
        case 0x4ce2a0u: goto label_4ce2a0;
        case 0x4ce2a4u: goto label_4ce2a4;
        case 0x4ce2a8u: goto label_4ce2a8;
        case 0x4ce2acu: goto label_4ce2ac;
        case 0x4ce2b0u: goto label_4ce2b0;
        case 0x4ce2b4u: goto label_4ce2b4;
        case 0x4ce2b8u: goto label_4ce2b8;
        case 0x4ce2bcu: goto label_4ce2bc;
        case 0x4ce2c0u: goto label_4ce2c0;
        case 0x4ce2c4u: goto label_4ce2c4;
        case 0x4ce2c8u: goto label_4ce2c8;
        case 0x4ce2ccu: goto label_4ce2cc;
        case 0x4ce2d0u: goto label_4ce2d0;
        case 0x4ce2d4u: goto label_4ce2d4;
        case 0x4ce2d8u: goto label_4ce2d8;
        case 0x4ce2dcu: goto label_4ce2dc;
        case 0x4ce2e0u: goto label_4ce2e0;
        case 0x4ce2e4u: goto label_4ce2e4;
        case 0x4ce2e8u: goto label_4ce2e8;
        case 0x4ce2ecu: goto label_4ce2ec;
        case 0x4ce2f0u: goto label_4ce2f0;
        case 0x4ce2f4u: goto label_4ce2f4;
        case 0x4ce2f8u: goto label_4ce2f8;
        case 0x4ce2fcu: goto label_4ce2fc;
        case 0x4ce300u: goto label_4ce300;
        case 0x4ce304u: goto label_4ce304;
        case 0x4ce308u: goto label_4ce308;
        case 0x4ce30cu: goto label_4ce30c;
        case 0x4ce310u: goto label_4ce310;
        case 0x4ce314u: goto label_4ce314;
        case 0x4ce318u: goto label_4ce318;
        case 0x4ce31cu: goto label_4ce31c;
        case 0x4ce320u: goto label_4ce320;
        case 0x4ce324u: goto label_4ce324;
        case 0x4ce328u: goto label_4ce328;
        case 0x4ce32cu: goto label_4ce32c;
        case 0x4ce330u: goto label_4ce330;
        case 0x4ce334u: goto label_4ce334;
        case 0x4ce338u: goto label_4ce338;
        case 0x4ce33cu: goto label_4ce33c;
        case 0x4ce340u: goto label_4ce340;
        case 0x4ce344u: goto label_4ce344;
        case 0x4ce348u: goto label_4ce348;
        case 0x4ce34cu: goto label_4ce34c;
        case 0x4ce350u: goto label_4ce350;
        case 0x4ce354u: goto label_4ce354;
        case 0x4ce358u: goto label_4ce358;
        case 0x4ce35cu: goto label_4ce35c;
        case 0x4ce360u: goto label_4ce360;
        case 0x4ce364u: goto label_4ce364;
        case 0x4ce368u: goto label_4ce368;
        case 0x4ce36cu: goto label_4ce36c;
        case 0x4ce370u: goto label_4ce370;
        case 0x4ce374u: goto label_4ce374;
        case 0x4ce378u: goto label_4ce378;
        case 0x4ce37cu: goto label_4ce37c;
        case 0x4ce380u: goto label_4ce380;
        case 0x4ce384u: goto label_4ce384;
        case 0x4ce388u: goto label_4ce388;
        case 0x4ce38cu: goto label_4ce38c;
        case 0x4ce390u: goto label_4ce390;
        case 0x4ce394u: goto label_4ce394;
        case 0x4ce398u: goto label_4ce398;
        case 0x4ce39cu: goto label_4ce39c;
        case 0x4ce3a0u: goto label_4ce3a0;
        case 0x4ce3a4u: goto label_4ce3a4;
        case 0x4ce3a8u: goto label_4ce3a8;
        case 0x4ce3acu: goto label_4ce3ac;
        case 0x4ce3b0u: goto label_4ce3b0;
        case 0x4ce3b4u: goto label_4ce3b4;
        case 0x4ce3b8u: goto label_4ce3b8;
        case 0x4ce3bcu: goto label_4ce3bc;
        case 0x4ce3c0u: goto label_4ce3c0;
        case 0x4ce3c4u: goto label_4ce3c4;
        case 0x4ce3c8u: goto label_4ce3c8;
        case 0x4ce3ccu: goto label_4ce3cc;
        case 0x4ce3d0u: goto label_4ce3d0;
        case 0x4ce3d4u: goto label_4ce3d4;
        case 0x4ce3d8u: goto label_4ce3d8;
        case 0x4ce3dcu: goto label_4ce3dc;
        case 0x4ce3e0u: goto label_4ce3e0;
        case 0x4ce3e4u: goto label_4ce3e4;
        case 0x4ce3e8u: goto label_4ce3e8;
        case 0x4ce3ecu: goto label_4ce3ec;
        case 0x4ce3f0u: goto label_4ce3f0;
        case 0x4ce3f4u: goto label_4ce3f4;
        case 0x4ce3f8u: goto label_4ce3f8;
        case 0x4ce3fcu: goto label_4ce3fc;
        case 0x4ce400u: goto label_4ce400;
        case 0x4ce404u: goto label_4ce404;
        case 0x4ce408u: goto label_4ce408;
        case 0x4ce40cu: goto label_4ce40c;
        case 0x4ce410u: goto label_4ce410;
        case 0x4ce414u: goto label_4ce414;
        case 0x4ce418u: goto label_4ce418;
        case 0x4ce41cu: goto label_4ce41c;
        case 0x4ce420u: goto label_4ce420;
        case 0x4ce424u: goto label_4ce424;
        case 0x4ce428u: goto label_4ce428;
        case 0x4ce42cu: goto label_4ce42c;
        case 0x4ce430u: goto label_4ce430;
        case 0x4ce434u: goto label_4ce434;
        case 0x4ce438u: goto label_4ce438;
        case 0x4ce43cu: goto label_4ce43c;
        case 0x4ce440u: goto label_4ce440;
        case 0x4ce444u: goto label_4ce444;
        case 0x4ce448u: goto label_4ce448;
        case 0x4ce44cu: goto label_4ce44c;
        case 0x4ce450u: goto label_4ce450;
        case 0x4ce454u: goto label_4ce454;
        case 0x4ce458u: goto label_4ce458;
        case 0x4ce45cu: goto label_4ce45c;
        case 0x4ce460u: goto label_4ce460;
        case 0x4ce464u: goto label_4ce464;
        case 0x4ce468u: goto label_4ce468;
        case 0x4ce46cu: goto label_4ce46c;
        case 0x4ce470u: goto label_4ce470;
        case 0x4ce474u: goto label_4ce474;
        case 0x4ce478u: goto label_4ce478;
        case 0x4ce47cu: goto label_4ce47c;
        case 0x4ce480u: goto label_4ce480;
        case 0x4ce484u: goto label_4ce484;
        case 0x4ce488u: goto label_4ce488;
        case 0x4ce48cu: goto label_4ce48c;
        case 0x4ce490u: goto label_4ce490;
        case 0x4ce494u: goto label_4ce494;
        case 0x4ce498u: goto label_4ce498;
        case 0x4ce49cu: goto label_4ce49c;
        case 0x4ce4a0u: goto label_4ce4a0;
        case 0x4ce4a4u: goto label_4ce4a4;
        case 0x4ce4a8u: goto label_4ce4a8;
        case 0x4ce4acu: goto label_4ce4ac;
        case 0x4ce4b0u: goto label_4ce4b0;
        case 0x4ce4b4u: goto label_4ce4b4;
        case 0x4ce4b8u: goto label_4ce4b8;
        case 0x4ce4bcu: goto label_4ce4bc;
        case 0x4ce4c0u: goto label_4ce4c0;
        case 0x4ce4c4u: goto label_4ce4c4;
        case 0x4ce4c8u: goto label_4ce4c8;
        case 0x4ce4ccu: goto label_4ce4cc;
        case 0x4ce4d0u: goto label_4ce4d0;
        case 0x4ce4d4u: goto label_4ce4d4;
        case 0x4ce4d8u: goto label_4ce4d8;
        case 0x4ce4dcu: goto label_4ce4dc;
        case 0x4ce4e0u: goto label_4ce4e0;
        case 0x4ce4e4u: goto label_4ce4e4;
        case 0x4ce4e8u: goto label_4ce4e8;
        case 0x4ce4ecu: goto label_4ce4ec;
        case 0x4ce4f0u: goto label_4ce4f0;
        case 0x4ce4f4u: goto label_4ce4f4;
        case 0x4ce4f8u: goto label_4ce4f8;
        case 0x4ce4fcu: goto label_4ce4fc;
        case 0x4ce500u: goto label_4ce500;
        case 0x4ce504u: goto label_4ce504;
        case 0x4ce508u: goto label_4ce508;
        case 0x4ce50cu: goto label_4ce50c;
        case 0x4ce510u: goto label_4ce510;
        case 0x4ce514u: goto label_4ce514;
        case 0x4ce518u: goto label_4ce518;
        case 0x4ce51cu: goto label_4ce51c;
        case 0x4ce520u: goto label_4ce520;
        case 0x4ce524u: goto label_4ce524;
        case 0x4ce528u: goto label_4ce528;
        case 0x4ce52cu: goto label_4ce52c;
        case 0x4ce530u: goto label_4ce530;
        case 0x4ce534u: goto label_4ce534;
        case 0x4ce538u: goto label_4ce538;
        case 0x4ce53cu: goto label_4ce53c;
        case 0x4ce540u: goto label_4ce540;
        case 0x4ce544u: goto label_4ce544;
        case 0x4ce548u: goto label_4ce548;
        case 0x4ce54cu: goto label_4ce54c;
        case 0x4ce550u: goto label_4ce550;
        case 0x4ce554u: goto label_4ce554;
        case 0x4ce558u: goto label_4ce558;
        case 0x4ce55cu: goto label_4ce55c;
        case 0x4ce560u: goto label_4ce560;
        case 0x4ce564u: goto label_4ce564;
        case 0x4ce568u: goto label_4ce568;
        case 0x4ce56cu: goto label_4ce56c;
        case 0x4ce570u: goto label_4ce570;
        case 0x4ce574u: goto label_4ce574;
        case 0x4ce578u: goto label_4ce578;
        case 0x4ce57cu: goto label_4ce57c;
        case 0x4ce580u: goto label_4ce580;
        case 0x4ce584u: goto label_4ce584;
        case 0x4ce588u: goto label_4ce588;
        case 0x4ce58cu: goto label_4ce58c;
        case 0x4ce590u: goto label_4ce590;
        case 0x4ce594u: goto label_4ce594;
        case 0x4ce598u: goto label_4ce598;
        case 0x4ce59cu: goto label_4ce59c;
        case 0x4ce5a0u: goto label_4ce5a0;
        case 0x4ce5a4u: goto label_4ce5a4;
        case 0x4ce5a8u: goto label_4ce5a8;
        case 0x4ce5acu: goto label_4ce5ac;
        case 0x4ce5b0u: goto label_4ce5b0;
        case 0x4ce5b4u: goto label_4ce5b4;
        case 0x4ce5b8u: goto label_4ce5b8;
        case 0x4ce5bcu: goto label_4ce5bc;
        case 0x4ce5c0u: goto label_4ce5c0;
        case 0x4ce5c4u: goto label_4ce5c4;
        case 0x4ce5c8u: goto label_4ce5c8;
        case 0x4ce5ccu: goto label_4ce5cc;
        case 0x4ce5d0u: goto label_4ce5d0;
        case 0x4ce5d4u: goto label_4ce5d4;
        case 0x4ce5d8u: goto label_4ce5d8;
        case 0x4ce5dcu: goto label_4ce5dc;
        case 0x4ce5e0u: goto label_4ce5e0;
        case 0x4ce5e4u: goto label_4ce5e4;
        case 0x4ce5e8u: goto label_4ce5e8;
        case 0x4ce5ecu: goto label_4ce5ec;
        case 0x4ce5f0u: goto label_4ce5f0;
        case 0x4ce5f4u: goto label_4ce5f4;
        case 0x4ce5f8u: goto label_4ce5f8;
        case 0x4ce5fcu: goto label_4ce5fc;
        case 0x4ce600u: goto label_4ce600;
        case 0x4ce604u: goto label_4ce604;
        case 0x4ce608u: goto label_4ce608;
        case 0x4ce60cu: goto label_4ce60c;
        case 0x4ce610u: goto label_4ce610;
        case 0x4ce614u: goto label_4ce614;
        case 0x4ce618u: goto label_4ce618;
        case 0x4ce61cu: goto label_4ce61c;
        case 0x4ce620u: goto label_4ce620;
        case 0x4ce624u: goto label_4ce624;
        case 0x4ce628u: goto label_4ce628;
        case 0x4ce62cu: goto label_4ce62c;
        case 0x4ce630u: goto label_4ce630;
        case 0x4ce634u: goto label_4ce634;
        case 0x4ce638u: goto label_4ce638;
        case 0x4ce63cu: goto label_4ce63c;
        case 0x4ce640u: goto label_4ce640;
        case 0x4ce644u: goto label_4ce644;
        case 0x4ce648u: goto label_4ce648;
        case 0x4ce64cu: goto label_4ce64c;
        case 0x4ce650u: goto label_4ce650;
        case 0x4ce654u: goto label_4ce654;
        case 0x4ce658u: goto label_4ce658;
        case 0x4ce65cu: goto label_4ce65c;
        case 0x4ce660u: goto label_4ce660;
        case 0x4ce664u: goto label_4ce664;
        case 0x4ce668u: goto label_4ce668;
        case 0x4ce66cu: goto label_4ce66c;
        case 0x4ce670u: goto label_4ce670;
        case 0x4ce674u: goto label_4ce674;
        case 0x4ce678u: goto label_4ce678;
        case 0x4ce67cu: goto label_4ce67c;
        case 0x4ce680u: goto label_4ce680;
        case 0x4ce684u: goto label_4ce684;
        case 0x4ce688u: goto label_4ce688;
        case 0x4ce68cu: goto label_4ce68c;
        case 0x4ce690u: goto label_4ce690;
        case 0x4ce694u: goto label_4ce694;
        case 0x4ce698u: goto label_4ce698;
        case 0x4ce69cu: goto label_4ce69c;
        case 0x4ce6a0u: goto label_4ce6a0;
        case 0x4ce6a4u: goto label_4ce6a4;
        case 0x4ce6a8u: goto label_4ce6a8;
        case 0x4ce6acu: goto label_4ce6ac;
        case 0x4ce6b0u: goto label_4ce6b0;
        case 0x4ce6b4u: goto label_4ce6b4;
        case 0x4ce6b8u: goto label_4ce6b8;
        case 0x4ce6bcu: goto label_4ce6bc;
        case 0x4ce6c0u: goto label_4ce6c0;
        case 0x4ce6c4u: goto label_4ce6c4;
        case 0x4ce6c8u: goto label_4ce6c8;
        case 0x4ce6ccu: goto label_4ce6cc;
        case 0x4ce6d0u: goto label_4ce6d0;
        case 0x4ce6d4u: goto label_4ce6d4;
        case 0x4ce6d8u: goto label_4ce6d8;
        case 0x4ce6dcu: goto label_4ce6dc;
        case 0x4ce6e0u: goto label_4ce6e0;
        case 0x4ce6e4u: goto label_4ce6e4;
        case 0x4ce6e8u: goto label_4ce6e8;
        case 0x4ce6ecu: goto label_4ce6ec;
        case 0x4ce6f0u: goto label_4ce6f0;
        case 0x4ce6f4u: goto label_4ce6f4;
        case 0x4ce6f8u: goto label_4ce6f8;
        case 0x4ce6fcu: goto label_4ce6fc;
        case 0x4ce700u: goto label_4ce700;
        case 0x4ce704u: goto label_4ce704;
        case 0x4ce708u: goto label_4ce708;
        case 0x4ce70cu: goto label_4ce70c;
        case 0x4ce710u: goto label_4ce710;
        case 0x4ce714u: goto label_4ce714;
        case 0x4ce718u: goto label_4ce718;
        case 0x4ce71cu: goto label_4ce71c;
        case 0x4ce720u: goto label_4ce720;
        case 0x4ce724u: goto label_4ce724;
        case 0x4ce728u: goto label_4ce728;
        case 0x4ce72cu: goto label_4ce72c;
        case 0x4ce730u: goto label_4ce730;
        case 0x4ce734u: goto label_4ce734;
        case 0x4ce738u: goto label_4ce738;
        case 0x4ce73cu: goto label_4ce73c;
        case 0x4ce740u: goto label_4ce740;
        case 0x4ce744u: goto label_4ce744;
        case 0x4ce748u: goto label_4ce748;
        case 0x4ce74cu: goto label_4ce74c;
        case 0x4ce750u: goto label_4ce750;
        case 0x4ce754u: goto label_4ce754;
        case 0x4ce758u: goto label_4ce758;
        case 0x4ce75cu: goto label_4ce75c;
        case 0x4ce760u: goto label_4ce760;
        case 0x4ce764u: goto label_4ce764;
        case 0x4ce768u: goto label_4ce768;
        case 0x4ce76cu: goto label_4ce76c;
        case 0x4ce770u: goto label_4ce770;
        case 0x4ce774u: goto label_4ce774;
        case 0x4ce778u: goto label_4ce778;
        case 0x4ce77cu: goto label_4ce77c;
        case 0x4ce780u: goto label_4ce780;
        case 0x4ce784u: goto label_4ce784;
        case 0x4ce788u: goto label_4ce788;
        case 0x4ce78cu: goto label_4ce78c;
        case 0x4ce790u: goto label_4ce790;
        case 0x4ce794u: goto label_4ce794;
        case 0x4ce798u: goto label_4ce798;
        case 0x4ce79cu: goto label_4ce79c;
        case 0x4ce7a0u: goto label_4ce7a0;
        case 0x4ce7a4u: goto label_4ce7a4;
        case 0x4ce7a8u: goto label_4ce7a8;
        case 0x4ce7acu: goto label_4ce7ac;
        case 0x4ce7b0u: goto label_4ce7b0;
        case 0x4ce7b4u: goto label_4ce7b4;
        case 0x4ce7b8u: goto label_4ce7b8;
        case 0x4ce7bcu: goto label_4ce7bc;
        case 0x4ce7c0u: goto label_4ce7c0;
        case 0x4ce7c4u: goto label_4ce7c4;
        case 0x4ce7c8u: goto label_4ce7c8;
        case 0x4ce7ccu: goto label_4ce7cc;
        case 0x4ce7d0u: goto label_4ce7d0;
        case 0x4ce7d4u: goto label_4ce7d4;
        case 0x4ce7d8u: goto label_4ce7d8;
        case 0x4ce7dcu: goto label_4ce7dc;
        case 0x4ce7e0u: goto label_4ce7e0;
        case 0x4ce7e4u: goto label_4ce7e4;
        case 0x4ce7e8u: goto label_4ce7e8;
        case 0x4ce7ecu: goto label_4ce7ec;
        case 0x4ce7f0u: goto label_4ce7f0;
        case 0x4ce7f4u: goto label_4ce7f4;
        case 0x4ce7f8u: goto label_4ce7f8;
        case 0x4ce7fcu: goto label_4ce7fc;
        case 0x4ce800u: goto label_4ce800;
        case 0x4ce804u: goto label_4ce804;
        case 0x4ce808u: goto label_4ce808;
        case 0x4ce80cu: goto label_4ce80c;
        case 0x4ce810u: goto label_4ce810;
        case 0x4ce814u: goto label_4ce814;
        case 0x4ce818u: goto label_4ce818;
        case 0x4ce81cu: goto label_4ce81c;
        case 0x4ce820u: goto label_4ce820;
        case 0x4ce824u: goto label_4ce824;
        case 0x4ce828u: goto label_4ce828;
        case 0x4ce82cu: goto label_4ce82c;
        case 0x4ce830u: goto label_4ce830;
        case 0x4ce834u: goto label_4ce834;
        case 0x4ce838u: goto label_4ce838;
        case 0x4ce83cu: goto label_4ce83c;
        case 0x4ce840u: goto label_4ce840;
        case 0x4ce844u: goto label_4ce844;
        case 0x4ce848u: goto label_4ce848;
        case 0x4ce84cu: goto label_4ce84c;
        case 0x4ce850u: goto label_4ce850;
        case 0x4ce854u: goto label_4ce854;
        case 0x4ce858u: goto label_4ce858;
        case 0x4ce85cu: goto label_4ce85c;
        case 0x4ce860u: goto label_4ce860;
        case 0x4ce864u: goto label_4ce864;
        case 0x4ce868u: goto label_4ce868;
        case 0x4ce86cu: goto label_4ce86c;
        case 0x4ce870u: goto label_4ce870;
        case 0x4ce874u: goto label_4ce874;
        case 0x4ce878u: goto label_4ce878;
        case 0x4ce87cu: goto label_4ce87c;
        case 0x4ce880u: goto label_4ce880;
        case 0x4ce884u: goto label_4ce884;
        case 0x4ce888u: goto label_4ce888;
        case 0x4ce88cu: goto label_4ce88c;
        case 0x4ce890u: goto label_4ce890;
        case 0x4ce894u: goto label_4ce894;
        case 0x4ce898u: goto label_4ce898;
        case 0x4ce89cu: goto label_4ce89c;
        case 0x4ce8a0u: goto label_4ce8a0;
        case 0x4ce8a4u: goto label_4ce8a4;
        case 0x4ce8a8u: goto label_4ce8a8;
        case 0x4ce8acu: goto label_4ce8ac;
        case 0x4ce8b0u: goto label_4ce8b0;
        case 0x4ce8b4u: goto label_4ce8b4;
        case 0x4ce8b8u: goto label_4ce8b8;
        case 0x4ce8bcu: goto label_4ce8bc;
        case 0x4ce8c0u: goto label_4ce8c0;
        case 0x4ce8c4u: goto label_4ce8c4;
        case 0x4ce8c8u: goto label_4ce8c8;
        case 0x4ce8ccu: goto label_4ce8cc;
        case 0x4ce8d0u: goto label_4ce8d0;
        case 0x4ce8d4u: goto label_4ce8d4;
        case 0x4ce8d8u: goto label_4ce8d8;
        case 0x4ce8dcu: goto label_4ce8dc;
        case 0x4ce8e0u: goto label_4ce8e0;
        case 0x4ce8e4u: goto label_4ce8e4;
        case 0x4ce8e8u: goto label_4ce8e8;
        case 0x4ce8ecu: goto label_4ce8ec;
        case 0x4ce8f0u: goto label_4ce8f0;
        case 0x4ce8f4u: goto label_4ce8f4;
        case 0x4ce8f8u: goto label_4ce8f8;
        case 0x4ce8fcu: goto label_4ce8fc;
        case 0x4ce900u: goto label_4ce900;
        case 0x4ce904u: goto label_4ce904;
        case 0x4ce908u: goto label_4ce908;
        case 0x4ce90cu: goto label_4ce90c;
        case 0x4ce910u: goto label_4ce910;
        case 0x4ce914u: goto label_4ce914;
        case 0x4ce918u: goto label_4ce918;
        case 0x4ce91cu: goto label_4ce91c;
        case 0x4ce920u: goto label_4ce920;
        case 0x4ce924u: goto label_4ce924;
        case 0x4ce928u: goto label_4ce928;
        case 0x4ce92cu: goto label_4ce92c;
        case 0x4ce930u: goto label_4ce930;
        case 0x4ce934u: goto label_4ce934;
        case 0x4ce938u: goto label_4ce938;
        case 0x4ce93cu: goto label_4ce93c;
        case 0x4ce940u: goto label_4ce940;
        case 0x4ce944u: goto label_4ce944;
        case 0x4ce948u: goto label_4ce948;
        case 0x4ce94cu: goto label_4ce94c;
        case 0x4ce950u: goto label_4ce950;
        case 0x4ce954u: goto label_4ce954;
        case 0x4ce958u: goto label_4ce958;
        case 0x4ce95cu: goto label_4ce95c;
        case 0x4ce960u: goto label_4ce960;
        case 0x4ce964u: goto label_4ce964;
        case 0x4ce968u: goto label_4ce968;
        case 0x4ce96cu: goto label_4ce96c;
        case 0x4ce970u: goto label_4ce970;
        case 0x4ce974u: goto label_4ce974;
        case 0x4ce978u: goto label_4ce978;
        case 0x4ce97cu: goto label_4ce97c;
        case 0x4ce980u: goto label_4ce980;
        case 0x4ce984u: goto label_4ce984;
        case 0x4ce988u: goto label_4ce988;
        case 0x4ce98cu: goto label_4ce98c;
        case 0x4ce990u: goto label_4ce990;
        case 0x4ce994u: goto label_4ce994;
        case 0x4ce998u: goto label_4ce998;
        case 0x4ce99cu: goto label_4ce99c;
        case 0x4ce9a0u: goto label_4ce9a0;
        case 0x4ce9a4u: goto label_4ce9a4;
        case 0x4ce9a8u: goto label_4ce9a8;
        case 0x4ce9acu: goto label_4ce9ac;
        case 0x4ce9b0u: goto label_4ce9b0;
        case 0x4ce9b4u: goto label_4ce9b4;
        case 0x4ce9b8u: goto label_4ce9b8;
        case 0x4ce9bcu: goto label_4ce9bc;
        case 0x4ce9c0u: goto label_4ce9c0;
        case 0x4ce9c4u: goto label_4ce9c4;
        case 0x4ce9c8u: goto label_4ce9c8;
        case 0x4ce9ccu: goto label_4ce9cc;
        case 0x4ce9d0u: goto label_4ce9d0;
        case 0x4ce9d4u: goto label_4ce9d4;
        case 0x4ce9d8u: goto label_4ce9d8;
        case 0x4ce9dcu: goto label_4ce9dc;
        case 0x4ce9e0u: goto label_4ce9e0;
        case 0x4ce9e4u: goto label_4ce9e4;
        case 0x4ce9e8u: goto label_4ce9e8;
        case 0x4ce9ecu: goto label_4ce9ec;
        default: break;
    }

    ctx->pc = 0x4cdf10u;

label_4cdf10:
    // 0x4cdf10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4cdf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4cdf14:
    // 0x4cdf14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4cdf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4cdf18:
    // 0x4cdf18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4cdf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4cdf1c:
    // 0x4cdf1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4cdf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4cdf20:
    // 0x4cdf20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4cdf20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cdf24:
    // 0x4cdf24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4cdf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4cdf28:
    // 0x4cdf28: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4cdf28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4cdf2c:
    // 0x4cdf2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cdf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cdf30:
    // 0x4cdf30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4cdf30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4cdf34:
    // 0x4cdf34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cdf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cdf38:
    // 0x4cdf38: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4cdf38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4cdf3c:
    // 0x4cdf3c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4cdf3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4cdf40:
    // 0x4cdf40: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4cdf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4cdf44:
    // 0x4cdf44: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4cdf44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4cdf48:
    // 0x4cdf48: 0xc10ca68  jal         func_4329A0
label_4cdf4c:
    if (ctx->pc == 0x4CDF4Cu) {
        ctx->pc = 0x4CDF4Cu;
            // 0x4cdf4c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4CDF50u;
        goto label_4cdf50;
    }
    ctx->pc = 0x4CDF48u;
    SET_GPR_U32(ctx, 31, 0x4CDF50u);
    ctx->pc = 0x4CDF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDF48u;
            // 0x4cdf4c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CDF50u; }
        if (ctx->pc != 0x4CDF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CDF50u; }
        if (ctx->pc != 0x4CDF50u) { return; }
    }
    ctx->pc = 0x4CDF50u;
label_4cdf50:
    // 0x4cdf50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4cdf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4cdf54:
    // 0x4cdf54: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cdf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4cdf58:
    // 0x4cdf58: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4cdf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4cdf5c:
    // 0x4cdf5c: 0x24421d00  addiu       $v0, $v0, 0x1D00
    ctx->pc = 0x4cdf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7424));
label_4cdf60:
    // 0x4cdf60: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4cdf60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_4cdf64:
    // 0x4cdf64: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x4cdf64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_4cdf68:
    // 0x4cdf68: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4cdf68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_4cdf6c:
    // 0x4cdf6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4cdf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4cdf70:
    // 0x4cdf70: 0xae920054  sw          $s2, 0x54($s4)
    ctx->pc = 0x4cdf70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 18));
label_4cdf74:
    // 0x4cdf74: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x4cdf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4cdf78:
    // 0x4cdf78: 0xae930058  sw          $s3, 0x58($s4)
    ctx->pc = 0x4cdf78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 19));
label_4cdf7c:
    // 0x4cdf7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cdf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4cdf80:
    // 0x4cdf80: 0xae90005c  sw          $s0, 0x5C($s4)
    ctx->pc = 0x4cdf80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 16));
label_4cdf84:
    // 0x4cdf84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4cdf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4cdf88:
    // 0x4cdf88: 0xae910060  sw          $s1, 0x60($s4)
    ctx->pc = 0x4cdf88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 17));
label_4cdf8c:
    // 0x4cdf8c: 0xae800200  sw          $zero, 0x200($s4)
    ctx->pc = 0x4cdf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 512), GPR_U32(ctx, 0));
label_4cdf90:
    // 0x4cdf90: 0xae800204  sw          $zero, 0x204($s4)
    ctx->pc = 0x4cdf90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 516), GPR_U32(ctx, 0));
label_4cdf94:
    // 0x4cdf94: 0xae800208  sw          $zero, 0x208($s4)
    ctx->pc = 0x4cdf94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 520), GPR_U32(ctx, 0));
label_4cdf98:
    // 0x4cdf98: 0xae86020c  sw          $a2, 0x20C($s4)
    ctx->pc = 0x4cdf98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 524), GPR_U32(ctx, 6));
label_4cdf9c:
    // 0x4cdf9c: 0xae800210  sw          $zero, 0x210($s4)
    ctx->pc = 0x4cdf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 528), GPR_U32(ctx, 0));
label_4cdfa0:
    // 0x4cdfa0: 0xae800214  sw          $zero, 0x214($s4)
    ctx->pc = 0x4cdfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 532), GPR_U32(ctx, 0));
label_4cdfa4:
    // 0x4cdfa4: 0xae800218  sw          $zero, 0x218($s4)
    ctx->pc = 0x4cdfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 536), GPR_U32(ctx, 0));
label_4cdfa8:
    // 0x4cdfa8: 0xae80021c  sw          $zero, 0x21C($s4)
    ctx->pc = 0x4cdfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 540), GPR_U32(ctx, 0));
label_4cdfac:
    // 0x4cdfac: 0xae850220  sw          $a1, 0x220($s4)
    ctx->pc = 0x4cdfacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 544), GPR_U32(ctx, 5));
label_4cdfb0:
    // 0x4cdfb0: 0xae800224  sw          $zero, 0x224($s4)
    ctx->pc = 0x4cdfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 548), GPR_U32(ctx, 0));
label_4cdfb4:
    // 0x4cdfb4: 0xae800228  sw          $zero, 0x228($s4)
    ctx->pc = 0x4cdfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 552), GPR_U32(ctx, 0));
label_4cdfb8:
    // 0x4cdfb8: 0xae84022c  sw          $a0, 0x22C($s4)
    ctx->pc = 0x4cdfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 556), GPR_U32(ctx, 4));
label_4cdfbc:
    // 0x4cdfbc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4cdfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4cdfc0:
    // 0x4cdfc0: 0x8c440780  lw          $a0, 0x780($v0)
    ctx->pc = 0x4cdfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
label_4cdfc4:
    // 0x4cdfc4: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_4cdfc8:
    if (ctx->pc == 0x4CDFC8u) {
        ctx->pc = 0x4CDFC8u;
            // 0x4cdfc8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x4CDFCCu;
        goto label_4cdfcc;
    }
    ctx->pc = 0x4CDFC4u;
    {
        const bool branch_taken_0x4cdfc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cdfc4) {
            ctx->pc = 0x4CDFC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDFC4u;
            // 0x4cdfc8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CDFE4u;
            goto label_4cdfe4;
        }
    }
    ctx->pc = 0x4CDFCCu;
label_4cdfcc:
    // 0x4cdfcc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4cdfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cdfd0:
    // 0x4cdfd0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_4cdfd4:
    if (ctx->pc == 0x4CDFD4u) {
        ctx->pc = 0x4CDFD8u;
        goto label_4cdfd8;
    }
    ctx->pc = 0x4CDFD0u;
    {
        const bool branch_taken_0x4cdfd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4cdfd0) {
            ctx->pc = 0x4CDFE0u;
            goto label_4cdfe0;
        }
    }
    ctx->pc = 0x4CDFD8u;
label_4cdfd8:
    // 0x4cdfd8: 0x10000004  b           . + 4 + (0x4 << 2)
label_4cdfdc:
    if (ctx->pc == 0x4CDFDCu) {
        ctx->pc = 0x4CDFDCu;
            // 0x4cdfdc: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->pc = 0x4CDFE0u;
        goto label_4cdfe0;
    }
    ctx->pc = 0x4CDFD8u;
    {
        const bool branch_taken_0x4cdfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CDFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDFD8u;
            // 0x4cdfdc: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cdfd8) {
            ctx->pc = 0x4CDFECu;
            goto label_4cdfec;
        }
    }
    ctx->pc = 0x4CDFE0u;
label_4cdfe0:
    // 0x4cdfe0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4cdfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4cdfe4:
    // 0x4cdfe4: 0xae82022c  sw          $v0, 0x22C($s4)
    ctx->pc = 0x4cdfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 556), GPR_U32(ctx, 2));
label_4cdfe8:
    // 0x4cdfe8: 0x8e830058  lw          $v1, 0x58($s4)
    ctx->pc = 0x4cdfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_4cdfec:
    // 0x4cdfec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4cdfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cdff0:
    // 0x4cdff0: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
label_4cdff4:
    if (ctx->pc == 0x4CDFF4u) {
        ctx->pc = 0x4CDFF4u;
            // 0x4cdff4: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->pc = 0x4CDFF8u;
        goto label_4cdff8;
    }
    ctx->pc = 0x4CDFF0u;
    {
        const bool branch_taken_0x4cdff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4cdff0) {
            ctx->pc = 0x4CDFF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDFF0u;
            // 0x4cdff4: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CE04Cu;
            goto label_4ce04c;
        }
    }
    ctx->pc = 0x4CDFF8u;
label_4cdff8:
    // 0x4cdff8: 0xc040180  jal         func_100600
label_4cdffc:
    if (ctx->pc == 0x4CDFFCu) {
        ctx->pc = 0x4CDFFCu;
            // 0x4cdffc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x4CE000u;
        goto label_4ce000;
    }
    ctx->pc = 0x4CDFF8u;
    SET_GPR_U32(ctx, 31, 0x4CE000u);
    ctx->pc = 0x4CDFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CDFF8u;
            // 0x4cdffc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE000u; }
        if (ctx->pc != 0x4CE000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE000u; }
        if (ctx->pc != 0x4CE000u) { return; }
    }
    ctx->pc = 0x4CE000u;
label_4ce000:
    // 0x4ce000: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ce000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ce004:
    // 0x4ce004: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_4ce008:
    if (ctx->pc == 0x4CE008u) {
        ctx->pc = 0x4CE008u;
            // 0x4ce008: 0xae900200  sw          $s0, 0x200($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 512), GPR_U32(ctx, 16));
        ctx->pc = 0x4CE00Cu;
        goto label_4ce00c;
    }
    ctx->pc = 0x4CE004u;
    {
        const bool branch_taken_0x4ce004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce004) {
            ctx->pc = 0x4CE008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE004u;
            // 0x4ce008: 0xae900200  sw          $s0, 0x200($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 512), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CE048u;
            goto label_4ce048;
        }
    }
    ctx->pc = 0x4CE00Cu;
label_4ce00c:
    // 0x4ce00c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ce00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ce010:
    // 0x4ce010: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x4ce010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
label_4ce014:
    // 0x4ce014: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x4ce014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4ce018:
    // 0x4ce018: 0x346501a9  ori         $a1, $v1, 0x1A9
    ctx->pc = 0x4ce018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
label_4ce01c:
    // 0x4ce01c: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x4ce01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4ce020:
    // 0x4ce020: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4ce020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4ce024:
    // 0x4ce024: 0x320f809  jalr        $t9
label_4ce028:
    if (ctx->pc == 0x4CE028u) {
        ctx->pc = 0x4CE028u;
            // 0x4ce028: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4CE02Cu;
        goto label_4ce02c;
    }
    ctx->pc = 0x4CE024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE02Cu);
        ctx->pc = 0x4CE028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE024u;
            // 0x4ce028: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE02Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE02Cu; }
            if (ctx->pc != 0x4CE02Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4CE02Cu;
label_4ce02c:
    // 0x4ce02c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ce02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ce030:
    // 0x4ce030: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x4ce030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_4ce034:
    // 0x4ce034: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ce034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4ce038:
    // 0x4ce038: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4ce038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4ce03c:
    // 0x4ce03c: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x4ce03cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_4ce040:
    // 0x4ce040: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x4ce040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_4ce044:
    // 0x4ce044: 0xae900200  sw          $s0, 0x200($s4)
    ctx->pc = 0x4ce044u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 512), GPR_U32(ctx, 16));
label_4ce048:
    // 0x4ce048: 0x26840070  addiu       $a0, $s4, 0x70
    ctx->pc = 0x4ce048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_4ce04c:
    // 0x4ce04c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ce04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce050:
    // 0x4ce050: 0xc04a576  jal         func_1295D8
label_4ce054:
    if (ctx->pc == 0x4CE054u) {
        ctx->pc = 0x4CE054u;
            // 0x4ce054: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->pc = 0x4CE058u;
        goto label_4ce058;
    }
    ctx->pc = 0x4CE050u;
    SET_GPR_U32(ctx, 31, 0x4CE058u);
    ctx->pc = 0x4CE054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE050u;
            // 0x4ce054: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE058u; }
        if (ctx->pc != 0x4CE058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE058u; }
        if (ctx->pc != 0x4CE058u) { return; }
    }
    ctx->pc = 0x4CE058u;
label_4ce058:
    // 0x4ce058: 0x268401b0  addiu       $a0, $s4, 0x1B0
    ctx->pc = 0x4ce058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 432));
label_4ce05c:
    // 0x4ce05c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ce05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce060:
    // 0x4ce060: 0xc04a576  jal         func_1295D8
label_4ce064:
    if (ctx->pc == 0x4CE064u) {
        ctx->pc = 0x4CE064u;
            // 0x4ce064: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x4CE068u;
        goto label_4ce068;
    }
    ctx->pc = 0x4CE060u;
    SET_GPR_U32(ctx, 31, 0x4CE068u);
    ctx->pc = 0x4CE064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE060u;
            // 0x4ce064: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE068u; }
        if (ctx->pc != 0x4CE068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE068u; }
        if (ctx->pc != 0x4CE068u) { return; }
    }
    ctx->pc = 0x4CE068u;
label_4ce068:
    // 0x4ce068: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4ce068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ce06c:
    // 0x4ce06c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4ce06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4ce070:
    // 0x4ce070: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4ce070u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ce074:
    // 0x4ce074: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ce074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ce078:
    // 0x4ce078: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ce078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ce07c:
    // 0x4ce07c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ce07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ce080:
    // 0x4ce080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ce080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ce084:
    // 0x4ce084: 0x3e00008  jr          $ra
label_4ce088:
    if (ctx->pc == 0x4CE088u) {
        ctx->pc = 0x4CE088u;
            // 0x4ce088: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4CE08Cu;
        goto label_4ce08c;
    }
    ctx->pc = 0x4CE084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE084u;
            // 0x4ce088: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CE08Cu;
label_4ce08c:
    // 0x4ce08c: 0x0  nop
    ctx->pc = 0x4ce08cu;
    // NOP
label_4ce090:
    // 0x4ce090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ce090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ce094:
    // 0x4ce094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ce094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ce098:
    // 0x4ce098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ce098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ce09c:
    // 0x4ce09c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ce09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ce0a0:
    // 0x4ce0a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ce0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ce0a4:
    // 0x4ce0a4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4ce0a8:
    if (ctx->pc == 0x4CE0A8u) {
        ctx->pc = 0x4CE0A8u;
            // 0x4ce0a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE0ACu;
        goto label_4ce0ac;
    }
    ctx->pc = 0x4CE0A4u;
    {
        const bool branch_taken_0x4ce0a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE0A4u;
            // 0x4ce0a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce0a4) {
            ctx->pc = 0x4CE0E8u;
            goto label_4ce0e8;
        }
    }
    ctx->pc = 0x4CE0ACu;
label_4ce0ac:
    // 0x4ce0ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ce0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ce0b0:
    // 0x4ce0b0: 0x24421d30  addiu       $v0, $v0, 0x1D30
    ctx->pc = 0x4ce0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
label_4ce0b4:
    // 0x4ce0b4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4ce0b8:
    if (ctx->pc == 0x4CE0B8u) {
        ctx->pc = 0x4CE0B8u;
            // 0x4ce0b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4CE0BCu;
        goto label_4ce0bc;
    }
    ctx->pc = 0x4CE0B4u;
    {
        const bool branch_taken_0x4ce0b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE0B4u;
            // 0x4ce0b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce0b4) {
            ctx->pc = 0x4CE0D0u;
            goto label_4ce0d0;
        }
    }
    ctx->pc = 0x4CE0BCu;
label_4ce0bc:
    // 0x4ce0bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ce0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ce0c0:
    // 0x4ce0c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ce0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce0c4:
    // 0x4ce0c4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4ce0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4ce0c8:
    // 0x4ce0c8: 0xc057a68  jal         func_15E9A0
label_4ce0cc:
    if (ctx->pc == 0x4CE0CCu) {
        ctx->pc = 0x4CE0CCu;
            // 0x4ce0cc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4CE0D0u;
        goto label_4ce0d0;
    }
    ctx->pc = 0x4CE0C8u;
    SET_GPR_U32(ctx, 31, 0x4CE0D0u);
    ctx->pc = 0x4CE0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE0C8u;
            // 0x4ce0cc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE0D0u; }
        if (ctx->pc != 0x4CE0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE0D0u; }
        if (ctx->pc != 0x4CE0D0u) { return; }
    }
    ctx->pc = 0x4CE0D0u;
label_4ce0d0:
    // 0x4ce0d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4ce0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4ce0d4:
    // 0x4ce0d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ce0d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ce0d8:
    // 0x4ce0d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4ce0dc:
    if (ctx->pc == 0x4CE0DCu) {
        ctx->pc = 0x4CE0DCu;
            // 0x4ce0dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE0E0u;
        goto label_4ce0e0;
    }
    ctx->pc = 0x4CE0D8u;
    {
        const bool branch_taken_0x4ce0d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ce0d8) {
            ctx->pc = 0x4CE0DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE0D8u;
            // 0x4ce0dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CE0ECu;
            goto label_4ce0ec;
        }
    }
    ctx->pc = 0x4CE0E0u;
label_4ce0e0:
    // 0x4ce0e0: 0xc0400a8  jal         func_1002A0
label_4ce0e4:
    if (ctx->pc == 0x4CE0E4u) {
        ctx->pc = 0x4CE0E4u;
            // 0x4ce0e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE0E8u;
        goto label_4ce0e8;
    }
    ctx->pc = 0x4CE0E0u;
    SET_GPR_U32(ctx, 31, 0x4CE0E8u);
    ctx->pc = 0x4CE0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE0E0u;
            // 0x4ce0e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE0E8u; }
        if (ctx->pc != 0x4CE0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE0E8u; }
        if (ctx->pc != 0x4CE0E8u) { return; }
    }
    ctx->pc = 0x4CE0E8u;
label_4ce0e8:
    // 0x4ce0e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ce0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ce0ec:
    // 0x4ce0ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ce0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ce0f0:
    // 0x4ce0f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ce0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ce0f4:
    // 0x4ce0f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ce0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ce0f8:
    // 0x4ce0f8: 0x3e00008  jr          $ra
label_4ce0fc:
    if (ctx->pc == 0x4CE0FCu) {
        ctx->pc = 0x4CE0FCu;
            // 0x4ce0fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CE100u;
        goto label_4ce100;
    }
    ctx->pc = 0x4CE0F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE0F8u;
            // 0x4ce0fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CE100u;
label_4ce100:
    // 0x4ce100: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4ce100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4ce104:
    // 0x4ce104: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4ce104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4ce108:
    // 0x4ce108: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4ce108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4ce10c:
    // 0x4ce10c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4ce10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4ce110:
    // 0x4ce110: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4ce110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4ce114:
    // 0x4ce114: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4ce114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4ce118:
    // 0x4ce118: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4ce118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4ce11c:
    // 0x4ce11c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4ce11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4ce120:
    // 0x4ce120: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ce120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4ce124:
    // 0x4ce124: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ce124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ce128:
    // 0x4ce128: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ce128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4ce12c:
    // 0x4ce12c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4ce12cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4ce130:
    // 0x4ce130: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4ce130u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4ce134:
    // 0x4ce134: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4ce134u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4ce138:
    // 0x4ce138: 0x8c760e80  lw          $s6, 0xE80($v1)
    ctx->pc = 0x4ce138u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4ce13c:
    // 0x4ce13c: 0x8ec30cb4  lw          $v1, 0xCB4($s6)
    ctx->pc = 0x4ce13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3252)));
label_4ce140:
    // 0x4ce140: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x4ce140u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_4ce144:
    // 0x4ce144: 0x546000d9  bnel        $v1, $zero, . + 4 + (0xD9 << 2)
label_4ce148:
    if (ctx->pc == 0x4CE148u) {
        ctx->pc = 0x4CE148u;
            // 0x4ce148: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4CE14Cu;
        goto label_4ce14c;
    }
    ctx->pc = 0x4CE144u;
    {
        const bool branch_taken_0x4ce144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ce144) {
            ctx->pc = 0x4CE148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE144u;
            // 0x4ce148: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CE4ACu;
            goto label_4ce4ac;
        }
    }
    ctx->pc = 0x4CE14Cu;
label_4ce14c:
    // 0x4ce14c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4ce14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4ce150:
    // 0x4ce150: 0x8c630cd0  lw          $v1, 0xCD0($v1)
    ctx->pc = 0x4ce150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3280)));
label_4ce154:
    // 0x4ce154: 0x106000d4  beqz        $v1, . + 4 + (0xD4 << 2)
label_4ce158:
    if (ctx->pc == 0x4CE158u) {
        ctx->pc = 0x4CE15Cu;
        goto label_4ce15c;
    }
    ctx->pc = 0x4CE154u;
    {
        const bool branch_taken_0x4ce154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce154) {
            ctx->pc = 0x4CE4A8u;
            goto label_4ce4a8;
        }
    }
    ctx->pc = 0x4CE15Cu;
label_4ce15c:
    // 0x4ce15c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ce15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ce160:
    // 0x4ce160: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4ce160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ce164:
    // 0x4ce164: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x4ce164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_4ce168:
    // 0x4ce168: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x4ce168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_4ce16c:
    // 0x4ce16c: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x4ce16cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4ce170:
    // 0x4ce170: 0x10c5000f  beq         $a2, $a1, . + 4 + (0xF << 2)
label_4ce174:
    if (ctx->pc == 0x4CE174u) {
        ctx->pc = 0x4CE178u;
        goto label_4ce178;
    }
    ctx->pc = 0x4CE170u;
    {
        const bool branch_taken_0x4ce170 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4ce170) {
            ctx->pc = 0x4CE1B0u;
            goto label_4ce1b0;
        }
    }
    ctx->pc = 0x4CE178u;
label_4ce178:
    // 0x4ce178: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ce178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ce17c:
    // 0x4ce17c: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_4ce180:
    if (ctx->pc == 0x4CE180u) {
        ctx->pc = 0x4CE180u;
            // 0x4ce180: 0x8ec50cb4  lw          $a1, 0xCB4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3252)));
        ctx->pc = 0x4CE184u;
        goto label_4ce184;
    }
    ctx->pc = 0x4CE17Cu;
    {
        const bool branch_taken_0x4ce17c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ce17c) {
            ctx->pc = 0x4CE180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE17Cu;
            // 0x4ce180: 0x8ec50cb4  lw          $a1, 0xCB4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CE18Cu;
            goto label_4ce18c;
        }
    }
    ctx->pc = 0x4CE184u;
label_4ce184:
    // 0x4ce184: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_4ce188:
    if (ctx->pc == 0x4CE188u) {
        ctx->pc = 0x4CE18Cu;
        goto label_4ce18c;
    }
    ctx->pc = 0x4CE184u;
    {
        const bool branch_taken_0x4ce184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce184) {
            ctx->pc = 0x4CE498u;
            goto label_4ce498;
        }
    }
    ctx->pc = 0x4CE18Cu;
label_4ce18c:
    // 0x4ce18c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ce18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ce190:
    // 0x4ce190: 0x10a300c1  beq         $a1, $v1, . + 4 + (0xC1 << 2)
label_4ce194:
    if (ctx->pc == 0x4CE194u) {
        ctx->pc = 0x4CE198u;
        goto label_4ce198;
    }
    ctx->pc = 0x4CE190u;
    {
        const bool branch_taken_0x4ce190 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ce190) {
            ctx->pc = 0x4CE498u;
            goto label_4ce498;
        }
    }
    ctx->pc = 0x4CE198u;
label_4ce198:
    // 0x4ce198: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ce198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ce19c:
    // 0x4ce19c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ce19cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ce1a0:
    // 0x4ce1a0: 0x320f809  jalr        $t9
label_4ce1a4:
    if (ctx->pc == 0x4CE1A4u) {
        ctx->pc = 0x4CE1A8u;
        goto label_4ce1a8;
    }
    ctx->pc = 0x4CE1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE1A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE1A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE1A8u; }
            if (ctx->pc != 0x4CE1A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE1A8u;
label_4ce1a8:
    // 0x4ce1a8: 0x100000bb  b           . + 4 + (0xBB << 2)
label_4ce1ac:
    if (ctx->pc == 0x4CE1ACu) {
        ctx->pc = 0x4CE1B0u;
        goto label_4ce1b0;
    }
    ctx->pc = 0x4CE1A8u;
    {
        const bool branch_taken_0x4ce1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce1a8) {
            ctx->pc = 0x4CE498u;
            goto label_4ce498;
        }
    }
    ctx->pc = 0x4CE1B0u;
label_4ce1b0:
    // 0x4ce1b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ce1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ce1b4:
    // 0x4ce1b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ce1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ce1b8:
    // 0x4ce1b8: 0x8c5489e0  lw          $s4, -0x7620($v0)
    ctx->pc = 0x4ce1b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4ce1bc:
    // 0x4ce1bc: 0x3c170066  lui         $s7, 0x66
    ctx->pc = 0x4ce1bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)102 << 16));
label_4ce1c0:
    // 0x4ce1c0: 0x8c7389f0  lw          $s3, -0x7610($v1)
    ctx->pc = 0x4ce1c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_4ce1c4:
    // 0x4ce1c4: 0x3c150066  lui         $s5, 0x66
    ctx->pc = 0x4ce1c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)102 << 16));
label_4ce1c8:
    // 0x4ce1c8: 0x26f77718  addiu       $s7, $s7, 0x7718
    ctx->pc = 0x4ce1c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 30488));
label_4ce1cc:
    // 0x4ce1cc: 0x26b57870  addiu       $s5, $s5, 0x7870
    ctx->pc = 0x4ce1ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 30832));
label_4ce1d0:
    // 0x4ce1d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ce1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ce1d4:
    // 0x4ce1d4: 0x8c450cd0  lw          $a1, 0xCD0($v0)
    ctx->pc = 0x4ce1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
label_4ce1d8:
    // 0x4ce1d8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4ce1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4ce1dc:
    // 0x4ce1dc: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x4ce1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4ce1e0:
    // 0x4ce1e0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4ce1e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4ce1e4:
    // 0x4ce1e4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4ce1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4ce1e8:
    // 0x4ce1e8: 0x8ca50074  lw          $a1, 0x74($a1)
    ctx->pc = 0x4ce1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
label_4ce1ec:
    // 0x4ce1ec: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x4ce1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4ce1f0:
    // 0x4ce1f0: 0x8c660130  lw          $a2, 0x130($v1)
    ctx->pc = 0x4ce1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_4ce1f4:
    // 0x4ce1f4: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x4ce1f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4ce1f8:
    // 0x4ce1f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ce1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ce1fc:
    // 0x4ce1fc: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x4ce1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4ce200:
    // 0x4ce200: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4ce200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4ce204:
    // 0x4ce204: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4ce204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4ce208:
    // 0x4ce208: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4ce208u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4ce20c:
    // 0x4ce20c: 0x246378dc  addiu       $v1, $v1, 0x78DC
    ctx->pc = 0x4ce20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30940));
label_4ce210:
    // 0x4ce210: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x4ce210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_4ce214:
    // 0x4ce214: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x4ce214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_4ce218:
    // 0x4ce218: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x4ce218u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_4ce21c:
    // 0x4ce21c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ce21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ce220:
    // 0x4ce220: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4ce220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4ce224:
    // 0x4ce224: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ce224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ce228:
    // 0x4ce228: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ce228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ce22c:
    // 0x4ce22c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4ce22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ce230:
    // 0x4ce230: 0x24d00150  addiu       $s0, $a2, 0x150
    ctx->pc = 0x4ce230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 336));
label_4ce234:
    // 0x4ce234: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x4ce234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4ce238:
    // 0x4ce238: 0x320f809  jalr        $t9
label_4ce23c:
    if (ctx->pc == 0x4CE23Cu) {
        ctx->pc = 0x4CE23Cu;
            // 0x4ce23c: 0x24d10200  addiu       $s1, $a2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
        ctx->pc = 0x4CE240u;
        goto label_4ce240;
    }
    ctx->pc = 0x4CE238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE240u);
        ctx->pc = 0x4CE23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE238u;
            // 0x4ce23c: 0x24d10200  addiu       $s1, $a2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE240u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE240u; }
            if (ctx->pc != 0x4CE240u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE240u;
label_4ce240:
    // 0x4ce240: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4ce240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4ce244:
    // 0x4ce244: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ce244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ce248:
    // 0x4ce248: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4ce248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4ce24c:
    // 0x4ce24c: 0x320f809  jalr        $t9
label_4ce250:
    if (ctx->pc == 0x4CE250u) {
        ctx->pc = 0x4CE250u;
            // 0x4ce250: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CE254u;
        goto label_4ce254;
    }
    ctx->pc = 0x4CE24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE254u);
        ctx->pc = 0x4CE250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE24Cu;
            // 0x4ce250: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE254u; }
            if (ctx->pc != 0x4CE254u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE254u;
label_4ce254:
    // 0x4ce254: 0xc049514  jal         func_125450
label_4ce258:
    if (ctx->pc == 0x4CE258u) {
        ctx->pc = 0x4CE258u;
            // 0x4ce258: 0xc64c0014  lwc1        $f12, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4CE25Cu;
        goto label_4ce25c;
    }
    ctx->pc = 0x4CE254u;
    SET_GPR_U32(ctx, 31, 0x4CE25Cu);
    ctx->pc = 0x4CE258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE254u;
            // 0x4ce258: 0xc64c0014  lwc1        $f12, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE25Cu; }
        if (ctx->pc != 0x4CE25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE25Cu; }
        if (ctx->pc != 0x4CE25Cu) { return; }
    }
    ctx->pc = 0x4CE25Cu;
label_4ce25c:
    // 0x4ce25c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x4ce25cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_4ce260:
    // 0x4ce260: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x4ce260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_4ce264:
    // 0x4ce264: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4ce264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_4ce268:
    // 0x4ce268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ce268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ce26c:
    // 0x4ce26c: 0xc04960a  jal         func_125828
label_4ce270:
    if (ctx->pc == 0x4CE270u) {
        ctx->pc = 0x4CE270u;
            // 0x4ce270: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->pc = 0x4CE274u;
        goto label_4ce274;
    }
    ctx->pc = 0x4CE26Cu;
    SET_GPR_U32(ctx, 31, 0x4CE274u);
    ctx->pc = 0x4CE270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE26Cu;
            // 0x4ce270: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE274u; }
        if (ctx->pc != 0x4CE274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE274u; }
        if (ctx->pc != 0x4CE274u) { return; }
    }
    ctx->pc = 0x4CE274u;
label_4ce274:
    // 0x4ce274: 0xc0497dc  jal         func_125F70
label_4ce278:
    if (ctx->pc == 0x4CE278u) {
        ctx->pc = 0x4CE278u;
            // 0x4ce278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE27Cu;
        goto label_4ce27c;
    }
    ctx->pc = 0x4CE274u;
    SET_GPR_U32(ctx, 31, 0x4CE27Cu);
    ctx->pc = 0x4CE278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE274u;
            // 0x4ce278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE27Cu; }
        if (ctx->pc != 0x4CE27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE27Cu; }
        if (ctx->pc != 0x4CE27Cu) { return; }
    }
    ctx->pc = 0x4CE27Cu;
label_4ce27c:
    // 0x4ce27c: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x4ce27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4ce280:
    // 0x4ce280: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4ce280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4ce284:
    // 0x4ce284: 0xc64e0018  lwc1        $f14, 0x18($s2)
    ctx->pc = 0x4ce284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4ce288:
    // 0x4ce288: 0xc04cbd8  jal         func_132F60
label_4ce28c:
    if (ctx->pc == 0x4CE28Cu) {
        ctx->pc = 0x4CE28Cu;
            // 0x4ce28c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4CE290u;
        goto label_4ce290;
    }
    ctx->pc = 0x4CE288u;
    SET_GPR_U32(ctx, 31, 0x4CE290u);
    ctx->pc = 0x4CE28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE288u;
            // 0x4ce28c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE290u; }
        if (ctx->pc != 0x4CE290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE290u; }
        if (ctx->pc != 0x4CE290u) { return; }
    }
    ctx->pc = 0x4CE290u;
label_4ce290:
    // 0x4ce290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ce290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ce294:
    // 0x4ce294: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4ce294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4ce298:
    // 0x4ce298: 0xc075094  jal         func_1D4250
label_4ce29c:
    if (ctx->pc == 0x4CE29Cu) {
        ctx->pc = 0x4CE29Cu;
            // 0x4ce29c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4CE2A0u;
        goto label_4ce2a0;
    }
    ctx->pc = 0x4CE298u;
    SET_GPR_U32(ctx, 31, 0x4CE2A0u);
    ctx->pc = 0x4CE29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE298u;
            // 0x4ce29c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE2A0u; }
        if (ctx->pc != 0x4CE2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE2A0u; }
        if (ctx->pc != 0x4CE2A0u) { return; }
    }
    ctx->pc = 0x4CE2A0u;
label_4ce2a0:
    // 0x4ce2a0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4ce2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4ce2a4:
    // 0x4ce2a4: 0xc440c058  lwc1        $f0, -0x3FA8($v0)
    ctx->pc = 0x4ce2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ce2a8:
    // 0x4ce2a8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x4ce2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ce2ac:
    // 0x4ce2ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ce2acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ce2b0:
    // 0x4ce2b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4ce2b4:
    if (ctx->pc == 0x4CE2B4u) {
        ctx->pc = 0x4CE2B4u;
            // 0x4ce2b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CE2B8u;
        goto label_4ce2b8;
    }
    ctx->pc = 0x4CE2B0u;
    {
        const bool branch_taken_0x4ce2b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4CE2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE2B0u;
            // 0x4ce2b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce2b0) {
            ctx->pc = 0x4CE2BCu;
            goto label_4ce2bc;
        }
    }
    ctx->pc = 0x4CE2B8u;
label_4ce2b8:
    // 0x4ce2b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ce2b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce2bc:
    // 0x4ce2bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x4ce2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4ce2c0:
    // 0x4ce2c0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4ce2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4ce2c4:
    // 0x4ce2c4: 0xc440c060  lwc1        $f0, -0x3FA0($v0)
    ctx->pc = 0x4ce2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ce2c8:
    // 0x4ce2c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4ce2c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ce2cc:
    // 0x4ce2cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4ce2d0:
    if (ctx->pc == 0x4CE2D0u) {
        ctx->pc = 0x4CE2D0u;
            // 0x4ce2d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CE2D4u;
        goto label_4ce2d4;
    }
    ctx->pc = 0x4CE2CCu;
    {
        const bool branch_taken_0x4ce2cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4CE2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE2CCu;
            // 0x4ce2d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce2cc) {
            ctx->pc = 0x4CE2D8u;
            goto label_4ce2d8;
        }
    }
    ctx->pc = 0x4CE2D4u;
label_4ce2d4:
    // 0x4ce2d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ce2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce2d8:
    // 0x4ce2d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4ce2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4ce2dc:
    // 0x4ce2dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4ce2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ce2e0:
    // 0x4ce2e0: 0x50400064  beql        $v0, $zero, . + 4 + (0x64 << 2)
label_4ce2e4:
    if (ctx->pc == 0x4CE2E4u) {
        ctx->pc = 0x4CE2E4u;
            // 0x4ce2e4: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4CE2E8u;
        goto label_4ce2e8;
    }
    ctx->pc = 0x4CE2E0u;
    {
        const bool branch_taken_0x4ce2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce2e0) {
            ctx->pc = 0x4CE2E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE2E0u;
            // 0x4ce2e4: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CE474u;
            goto label_4ce474;
        }
    }
    ctx->pc = 0x4CE2E8u;
label_4ce2e8:
    // 0x4ce2e8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4ce2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4ce2ec:
    // 0x4ce2ec: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4ce2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4ce2f0:
    // 0x4ce2f0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4ce2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4ce2f4:
    // 0x4ce2f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ce2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ce2f8:
    // 0x4ce2f8: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x4ce2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_4ce2fc:
    // 0x4ce2fc: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x4ce2fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_4ce300:
    // 0x4ce300: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x4ce300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_4ce304:
    // 0x4ce304: 0x320f809  jalr        $t9
label_4ce308:
    if (ctx->pc == 0x4CE308u) {
        ctx->pc = 0x4CE308u;
            // 0x4ce308: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4CE30Cu;
        goto label_4ce30c;
    }
    ctx->pc = 0x4CE304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE30Cu);
        ctx->pc = 0x4CE308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE304u;
            // 0x4ce308: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE30Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE30Cu; }
            if (ctx->pc != 0x4CE30Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4CE30Cu;
label_4ce30c:
    // 0x4ce30c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ce30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ce310:
    // 0x4ce310: 0x87b000ce  lh          $s0, 0xCE($sp)
    ctx->pc = 0x4ce310u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 206)));
label_4ce314:
    // 0x4ce314: 0x87b100cc  lh          $s1, 0xCC($sp)
    ctx->pc = 0x4ce314u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
label_4ce318:
    // 0x4ce318: 0xc04cc1c  jal         func_133070
label_4ce31c:
    if (ctx->pc == 0x4CE31Cu) {
        ctx->pc = 0x4CE31Cu;
            // 0x4ce31c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4CE320u;
        goto label_4ce320;
    }
    ctx->pc = 0x4CE318u;
    SET_GPR_U32(ctx, 31, 0x4CE320u);
    ctx->pc = 0x4CE31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE318u;
            // 0x4ce31c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE320u; }
        if (ctx->pc != 0x4CE320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE320u; }
        if (ctx->pc != 0x4CE320u) { return; }
    }
    ctx->pc = 0x4CE320u;
label_4ce320:
    // 0x4ce320: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ce320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ce324:
    // 0x4ce324: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4ce324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4ce328:
    // 0x4ce328: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x4ce328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4ce32c:
    // 0x4ce32c: 0x1a200050  blez        $s1, . + 4 + (0x50 << 2)
label_4ce330:
    if (ctx->pc == 0x4CE330u) {
        ctx->pc = 0x4CE330u;
            // 0x4ce330: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->pc = 0x4CE334u;
        goto label_4ce334;
    }
    ctx->pc = 0x4CE32Cu;
    {
        const bool branch_taken_0x4ce32c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x4CE330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE32Cu;
            // 0x4ce330: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce32c) {
            ctx->pc = 0x4CE470u;
            goto label_4ce470;
        }
    }
    ctx->pc = 0x4CE334u;
label_4ce334:
    // 0x4ce334: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x4ce334u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4ce338:
    // 0x4ce338: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
label_4ce33c:
    if (ctx->pc == 0x4CE33Cu) {
        ctx->pc = 0x4CE340u;
        goto label_4ce340;
    }
    ctx->pc = 0x4CE338u;
    {
        const bool branch_taken_0x4ce338 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce338) {
            ctx->pc = 0x4CE470u;
            goto label_4ce470;
        }
    }
    ctx->pc = 0x4CE340u;
label_4ce340:
    // 0x4ce340: 0x1a00004b  blez        $s0, . + 4 + (0x4B << 2)
label_4ce344:
    if (ctx->pc == 0x4CE344u) {
        ctx->pc = 0x4CE348u;
        goto label_4ce348;
    }
    ctx->pc = 0x4CE340u;
    {
        const bool branch_taken_0x4ce340 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x4ce340) {
            ctx->pc = 0x4CE470u;
            goto label_4ce470;
        }
    }
    ctx->pc = 0x4CE348u;
label_4ce348:
    // 0x4ce348: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x4ce348u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4ce34c:
    // 0x4ce34c: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
label_4ce350:
    if (ctx->pc == 0x4CE350u) {
        ctx->pc = 0x4CE354u;
        goto label_4ce354;
    }
    ctx->pc = 0x4CE34Cu;
    {
        const bool branch_taken_0x4ce34c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce34c) {
            ctx->pc = 0x4CE470u;
            goto label_4ce470;
        }
    }
    ctx->pc = 0x4CE354u;
label_4ce354:
    // 0x4ce354: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x4ce354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ce358:
    // 0x4ce358: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4ce358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4ce35c:
    // 0x4ce35c: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x4ce35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ce360:
    // 0x4ce360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ce360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce364:
    // 0x4ce364: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ce364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ce368:
    // 0x4ce368: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x4ce368u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_4ce36c:
    // 0x4ce36c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ce36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ce370:
    // 0x4ce370: 0x8c447c30  lw          $a0, 0x7C30($v0)
    ctx->pc = 0x4ce370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31792)));
label_4ce374:
    // 0x4ce374: 0x46020d82  mul.s       $f22, $f1, $f2
    ctx->pc = 0x4ce374u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4ce378:
    // 0x4ce378: 0xc0506ac  jal         func_141AB0
label_4ce37c:
    if (ctx->pc == 0x4CE37Cu) {
        ctx->pc = 0x4CE37Cu;
            // 0x4ce37c: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x4CE380u;
        goto label_4ce380;
    }
    ctx->pc = 0x4CE378u;
    SET_GPR_U32(ctx, 31, 0x4CE380u);
    ctx->pc = 0x4CE37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE378u;
            // 0x4ce37c: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE380u; }
        if (ctx->pc != 0x4CE380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE380u; }
        if (ctx->pc != 0x4CE380u) { return; }
    }
    ctx->pc = 0x4CE380u;
label_4ce380:
    // 0x4ce380: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4ce380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4ce384:
    // 0x4ce384: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ce384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ce388:
    // 0x4ce388: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4ce388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4ce38c:
    // 0x4ce38c: 0x320f809  jalr        $t9
label_4ce390:
    if (ctx->pc == 0x4CE390u) {
        ctx->pc = 0x4CE390u;
            // 0x4ce390: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4CE394u;
        goto label_4ce394;
    }
    ctx->pc = 0x4CE38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE394u);
        ctx->pc = 0x4CE390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE38Cu;
            // 0x4ce390: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE394u; }
            if (ctx->pc != 0x4CE394u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE394u;
label_4ce394:
    // 0x4ce394: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4ce394u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ce398:
    // 0x4ce398: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ce398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ce39c:
    // 0x4ce39c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4ce39cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4ce3a0:
    // 0x4ce3a0: 0x86e80000  lh          $t0, 0x0($s7)
    ctx->pc = 0x4ce3a0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4ce3a4:
    // 0x4ce3a4: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x4ce3a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_4ce3a8:
    // 0x4ce3a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4ce3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ce3ac:
    // 0x4ce3ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4ce3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ce3b0:
    // 0x4ce3b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4ce3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ce3b4:
    // 0x4ce3b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ce3b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce3b8:
    // 0x4ce3b8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4ce3b8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ce3bc:
    // 0x4ce3bc: 0x0  nop
    ctx->pc = 0x4ce3bcu;
    // NOP
label_4ce3c0:
    // 0x4ce3c0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4ce3c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4ce3c4:
    // 0x4ce3c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ce3c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ce3c8:
    // 0x4ce3c8: 0x0  nop
    ctx->pc = 0x4ce3c8u;
    // NOP
label_4ce3cc:
    // 0x4ce3cc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4ce3ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4ce3d0:
    // 0x4ce3d0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4ce3d0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ce3d4:
    // 0x4ce3d4: 0x0  nop
    ctx->pc = 0x4ce3d4u;
    // NOP
label_4ce3d8:
    // 0x4ce3d8: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4ce3d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4ce3dc:
    // 0x4ce3dc: 0x46160b01  sub.s       $f12, $f1, $f22
    ctx->pc = 0x4ce3dcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_4ce3e0:
    // 0x4ce3e0: 0x46160b80  add.s       $f14, $f1, $f22
    ctx->pc = 0x4ce3e0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_4ce3e4:
    // 0x4ce3e4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4ce3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4ce3e8:
    // 0x4ce3e8: 0xc0bc284  jal         func_2F0A10
label_4ce3ec:
    if (ctx->pc == 0x4CE3ECu) {
        ctx->pc = 0x4CE3ECu;
            // 0x4ce3ec: 0x46147b41  sub.s       $f13, $f15, $f20 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[20]);
        ctx->pc = 0x4CE3F0u;
        goto label_4ce3f0;
    }
    ctx->pc = 0x4CE3E8u;
    SET_GPR_U32(ctx, 31, 0x4CE3F0u);
    ctx->pc = 0x4CE3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE3E8u;
            // 0x4ce3ec: 0x46147b41  sub.s       $f13, $f15, $f20 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE3F0u; }
        if (ctx->pc != 0x4CE3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE3F0u; }
        if (ctx->pc != 0x4CE3F0u) { return; }
    }
    ctx->pc = 0x4CE3F0u;
label_4ce3f0:
    // 0x4ce3f0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4ce3f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4ce3f4:
    // 0x4ce3f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4ce3f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4ce3f8:
    // 0x4ce3f8: 0x320f809  jalr        $t9
label_4ce3fc:
    if (ctx->pc == 0x4CE3FCu) {
        ctx->pc = 0x4CE3FCu;
            // 0x4ce3fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE400u;
        goto label_4ce400;
    }
    ctx->pc = 0x4CE3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE400u);
        ctx->pc = 0x4CE3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE3F8u;
            // 0x4ce3fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE400u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE400u; }
            if (ctx->pc != 0x4CE400u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE400u;
label_4ce400:
    // 0x4ce400: 0x8ec30968  lw          $v1, 0x968($s6)
    ctx->pc = 0x4ce400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2408)));
label_4ce404:
    // 0x4ce404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ce404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ce408:
    // 0x4ce408: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_4ce40c:
    if (ctx->pc == 0x4CE40Cu) {
        ctx->pc = 0x4CE410u;
        goto label_4ce410;
    }
    ctx->pc = 0x4CE408u;
    {
        const bool branch_taken_0x4ce408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ce408) {
            ctx->pc = 0x4CE470u;
            goto label_4ce470;
        }
    }
    ctx->pc = 0x4CE410u;
label_4ce410:
    // 0x4ce410: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4ce410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4ce414:
    // 0x4ce414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ce414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ce418:
    // 0x4ce418: 0x0  nop
    ctx->pc = 0x4ce418u;
    // NOP
label_4ce41c:
    // 0x4ce41c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x4ce41cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ce420:
    // 0x4ce420: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4ce424:
    if (ctx->pc == 0x4CE424u) {
        ctx->pc = 0x4CE428u;
        goto label_4ce428;
    }
    ctx->pc = 0x4CE420u;
    {
        const bool branch_taken_0x4ce420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce420) {
            ctx->pc = 0x4CE42Cu;
            goto label_4ce42c;
        }
    }
    ctx->pc = 0x4CE428u;
label_4ce428:
    // 0x4ce428: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4ce428u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_4ce42c:
    // 0x4ce42c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4ce42cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ce430:
    // 0x4ce430: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x4ce430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_4ce434:
    // 0x4ce434: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4ce434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4ce438:
    // 0x4ce438: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ce438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ce43c:
    // 0x4ce43c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4ce43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ce440:
    // 0x4ce440: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4ce440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4ce444:
    // 0x4ce444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ce444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ce448:
    // 0x4ce448: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x4ce448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4ce44c:
    // 0x4ce44c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4ce44cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ce450:
    // 0x4ce450: 0x0  nop
    ctx->pc = 0x4ce450u;
    // NOP
label_4ce454:
    // 0x4ce454: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ce454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4ce458:
    // 0x4ce458: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x4ce458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ce45c:
    // 0x4ce45c: 0x46140341  sub.s       $f13, $f0, $f20
    ctx->pc = 0x4ce45cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_4ce460:
    // 0x4ce460: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x4ce460u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_4ce464:
    // 0x4ce464: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4ce464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4ce468:
    // 0x4ce468: 0xc156bfc  jal         func_55AFF0
label_4ce46c:
    if (ctx->pc == 0x4CE46Cu) {
        ctx->pc = 0x4CE46Cu;
            // 0x4ce46c: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4CE470u;
        goto label_4ce470;
    }
    ctx->pc = 0x4CE468u;
    SET_GPR_U32(ctx, 31, 0x4CE470u);
    ctx->pc = 0x4CE46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE468u;
            // 0x4ce46c: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55AFF0u;
    if (runtime->hasFunction(0x55AFF0u)) {
        auto targetFn = runtime->lookupFunction(0x55AFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE470u; }
        if (ctx->pc != 0x4CE470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055AFF0_0x55aff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE470u; }
        if (ctx->pc != 0x4CE470u) { return; }
    }
    ctx->pc = 0x4CE470u;
label_4ce470:
    // 0x4ce470: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4ce470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4ce474:
    // 0x4ce474: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ce474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ce478:
    // 0x4ce478: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x4ce478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_4ce47c:
    // 0x4ce47c: 0x320f809  jalr        $t9
label_4ce480:
    if (ctx->pc == 0x4CE480u) {
        ctx->pc = 0x4CE480u;
            // 0x4ce480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CE484u;
        goto label_4ce484;
    }
    ctx->pc = 0x4CE47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE484u);
        ctx->pc = 0x4CE480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE47Cu;
            // 0x4ce480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE484u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE484u; }
            if (ctx->pc != 0x4CE484u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE484u;
label_4ce484:
    // 0x4ce484: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4ce484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4ce488:
    // 0x4ce488: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ce488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ce48c:
    // 0x4ce48c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4ce48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4ce490:
    // 0x4ce490: 0x320f809  jalr        $t9
label_4ce494:
    if (ctx->pc == 0x4CE494u) {
        ctx->pc = 0x4CE494u;
            // 0x4ce494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE498u;
        goto label_4ce498;
    }
    ctx->pc = 0x4CE490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE498u);
        ctx->pc = 0x4CE494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE490u;
            // 0x4ce494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE498u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE498u; }
            if (ctx->pc != 0x4CE498u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE498u;
label_4ce498:
    // 0x4ce498: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ce498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ce49c:
    // 0x4ce49c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ce49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ce4a0:
    // 0x4ce4a0: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x4ce4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_4ce4a4:
    // 0x4ce4a4: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x4ce4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_4ce4a8:
    // 0x4ce4a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4ce4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4ce4ac:
    // 0x4ce4ac: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4ce4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4ce4b0:
    // 0x4ce4b0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4ce4b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4ce4b4:
    // 0x4ce4b4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4ce4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4ce4b8:
    // 0x4ce4b8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4ce4b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4ce4bc:
    // 0x4ce4bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4ce4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ce4c0:
    // 0x4ce4c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4ce4c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4ce4c4:
    // 0x4ce4c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4ce4c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ce4c8:
    // 0x4ce4c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ce4c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ce4cc:
    // 0x4ce4cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ce4ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ce4d0:
    // 0x4ce4d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ce4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ce4d4:
    // 0x4ce4d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ce4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ce4d8:
    // 0x4ce4d8: 0x3e00008  jr          $ra
label_4ce4dc:
    if (ctx->pc == 0x4CE4DCu) {
        ctx->pc = 0x4CE4DCu;
            // 0x4ce4dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4CE4E0u;
        goto label_4ce4e0;
    }
    ctx->pc = 0x4CE4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE4D8u;
            // 0x4ce4dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CE4E0u;
label_4ce4e0:
    // 0x4ce4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ce4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ce4e4:
    // 0x4ce4e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ce4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ce4e8:
    // 0x4ce4e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ce4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ce4ec:
    // 0x4ce4ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ce4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ce4f0:
    // 0x4ce4f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ce4f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ce4f4:
    // 0x4ce4f4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4ce4f8:
    if (ctx->pc == 0x4CE4F8u) {
        ctx->pc = 0x4CE4F8u;
            // 0x4ce4f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE4FCu;
        goto label_4ce4fc;
    }
    ctx->pc = 0x4CE4F4u;
    {
        const bool branch_taken_0x4ce4f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE4F4u;
            // 0x4ce4f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce4f4) {
            ctx->pc = 0x4CE538u;
            goto label_4ce538;
        }
    }
    ctx->pc = 0x4CE4FCu;
label_4ce4fc:
    // 0x4ce4fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ce4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ce500:
    // 0x4ce500: 0x24421d60  addiu       $v0, $v0, 0x1D60
    ctx->pc = 0x4ce500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7520));
label_4ce504:
    // 0x4ce504: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4ce508:
    if (ctx->pc == 0x4CE508u) {
        ctx->pc = 0x4CE508u;
            // 0x4ce508: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4CE50Cu;
        goto label_4ce50c;
    }
    ctx->pc = 0x4CE504u;
    {
        const bool branch_taken_0x4ce504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE504u;
            // 0x4ce508: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce504) {
            ctx->pc = 0x4CE520u;
            goto label_4ce520;
        }
    }
    ctx->pc = 0x4CE50Cu;
label_4ce50c:
    // 0x4ce50c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ce50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ce510:
    // 0x4ce510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ce510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce514:
    // 0x4ce514: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4ce514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4ce518:
    // 0x4ce518: 0xc057a68  jal         func_15E9A0
label_4ce51c:
    if (ctx->pc == 0x4CE51Cu) {
        ctx->pc = 0x4CE51Cu;
            // 0x4ce51c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4CE520u;
        goto label_4ce520;
    }
    ctx->pc = 0x4CE518u;
    SET_GPR_U32(ctx, 31, 0x4CE520u);
    ctx->pc = 0x4CE51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE518u;
            // 0x4ce51c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE520u; }
        if (ctx->pc != 0x4CE520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE520u; }
        if (ctx->pc != 0x4CE520u) { return; }
    }
    ctx->pc = 0x4CE520u;
label_4ce520:
    // 0x4ce520: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4ce520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4ce524:
    // 0x4ce524: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ce524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ce528:
    // 0x4ce528: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4ce52c:
    if (ctx->pc == 0x4CE52Cu) {
        ctx->pc = 0x4CE52Cu;
            // 0x4ce52c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE530u;
        goto label_4ce530;
    }
    ctx->pc = 0x4CE528u;
    {
        const bool branch_taken_0x4ce528 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ce528) {
            ctx->pc = 0x4CE52Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE528u;
            // 0x4ce52c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CE53Cu;
            goto label_4ce53c;
        }
    }
    ctx->pc = 0x4CE530u;
label_4ce530:
    // 0x4ce530: 0xc0400a8  jal         func_1002A0
label_4ce534:
    if (ctx->pc == 0x4CE534u) {
        ctx->pc = 0x4CE534u;
            // 0x4ce534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE538u;
        goto label_4ce538;
    }
    ctx->pc = 0x4CE530u;
    SET_GPR_U32(ctx, 31, 0x4CE538u);
    ctx->pc = 0x4CE534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE530u;
            // 0x4ce534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE538u; }
        if (ctx->pc != 0x4CE538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE538u; }
        if (ctx->pc != 0x4CE538u) { return; }
    }
    ctx->pc = 0x4CE538u;
label_4ce538:
    // 0x4ce538: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ce538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ce53c:
    // 0x4ce53c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ce53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ce540:
    // 0x4ce540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ce540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ce544:
    // 0x4ce544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ce544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ce548:
    // 0x4ce548: 0x3e00008  jr          $ra
label_4ce54c:
    if (ctx->pc == 0x4CE54Cu) {
        ctx->pc = 0x4CE54Cu;
            // 0x4ce54c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CE550u;
        goto label_4ce550;
    }
    ctx->pc = 0x4CE548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE548u;
            // 0x4ce54c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CE550u;
label_4ce550:
    // 0x4ce550: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4ce550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4ce554:
    // 0x4ce554: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4ce554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ce558:
    // 0x4ce558: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4ce558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4ce55c:
    // 0x4ce55c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4ce55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4ce560:
    // 0x4ce560: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4ce560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4ce564:
    // 0x4ce564: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ce564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4ce568:
    // 0x4ce568: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ce568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ce56c:
    // 0x4ce56c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ce56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4ce570:
    // 0x4ce570: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4ce570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4ce574:
    // 0x4ce574: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4ce574u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4ce578:
    // 0x4ce578: 0x14a30112  bne         $a1, $v1, . + 4 + (0x112 << 2)
label_4ce57c:
    if (ctx->pc == 0x4CE57Cu) {
        ctx->pc = 0x4CE57Cu;
            // 0x4ce57c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE580u;
        goto label_4ce580;
    }
    ctx->pc = 0x4CE578u;
    {
        const bool branch_taken_0x4ce578 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x4CE57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE578u;
            // 0x4ce57c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce578) {
            ctx->pc = 0x4CE9C4u;
            goto label_4ce9c4;
        }
    }
    ctx->pc = 0x4CE580u;
label_4ce580:
    // 0x4ce580: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ce580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ce584:
    // 0x4ce584: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x4ce584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_4ce588:
    // 0x4ce588: 0x8c738a08  lw          $s3, -0x75F8($v1)
    ctx->pc = 0x4ce588u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4ce58c:
    // 0x4ce58c: 0x8cb289e0  lw          $s2, -0x7620($a1)
    ctx->pc = 0x4ce58cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937056)));
label_4ce590:
    // 0x4ce590: 0x8e060054  lw          $a2, 0x54($s0)
    ctx->pc = 0x4ce590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4ce594:
    // 0x4ce594: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ce594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ce598:
    // 0x4ce598: 0x8c6589f0  lw          $a1, -0x7610($v1)
    ctx->pc = 0x4ce598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_4ce59c:
    // 0x4ce59c: 0x90c30d74  lbu         $v1, 0xD74($a2)
    ctx->pc = 0x4ce59cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3444)));
label_4ce5a0:
    // 0x4ce5a0: 0x506000a9  beql        $v1, $zero, . + 4 + (0xA9 << 2)
label_4ce5a4:
    if (ctx->pc == 0x4CE5A4u) {
        ctx->pc = 0x4CE5A4u;
            // 0x4ce5a4: 0x9263007d  lbu         $v1, 0x7D($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 125)));
        ctx->pc = 0x4CE5A8u;
        goto label_4ce5a8;
    }
    ctx->pc = 0x4CE5A0u;
    {
        const bool branch_taken_0x4ce5a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce5a0) {
            ctx->pc = 0x4CE5A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE5A0u;
            // 0x4ce5a4: 0x9263007d  lbu         $v1, 0x7D($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 125)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CE848u;
            goto label_4ce848;
        }
    }
    ctx->pc = 0x4CE5A8u;
label_4ce5a8:
    // 0x4ce5a8: 0x8cc20d58  lw          $v0, 0xD58($a2)
    ctx->pc = 0x4ce5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3416)));
label_4ce5ac:
    // 0x4ce5ac: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x4ce5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_4ce5b0:
    // 0x4ce5b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4ce5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4ce5b4:
    // 0x4ce5b4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_4ce5b8:
    if (ctx->pc == 0x4CE5B8u) {
        ctx->pc = 0x4CE5BCu;
        goto label_4ce5bc;
    }
    ctx->pc = 0x4CE5B4u;
    {
        const bool branch_taken_0x4ce5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce5b4) {
            ctx->pc = 0x4CE6C0u;
            goto label_4ce6c0;
        }
    }
    ctx->pc = 0x4CE5BCu;
label_4ce5bc:
    // 0x4ce5bc: 0x8cb4001c  lw          $s4, 0x1C($a1)
    ctx->pc = 0x4ce5bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_4ce5c0:
    // 0x4ce5c0: 0x8cc40d4c  lw          $a0, 0xD4C($a2)
    ctx->pc = 0x4ce5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3404)));
label_4ce5c4:
    // 0x4ce5c4: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x4ce5c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_4ce5c8:
    // 0x4ce5c8: 0xc0506ac  jal         func_141AB0
label_4ce5cc:
    if (ctx->pc == 0x4CE5CCu) {
        ctx->pc = 0x4CE5CCu;
            // 0x4ce5cc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4CE5D0u;
        goto label_4ce5d0;
    }
    ctx->pc = 0x4CE5C8u;
    SET_GPR_U32(ctx, 31, 0x4CE5D0u);
    ctx->pc = 0x4CE5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE5C8u;
            // 0x4ce5cc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE5D0u; }
        if (ctx->pc != 0x4CE5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE5D0u; }
        if (ctx->pc != 0x4CE5D0u) { return; }
    }
    ctx->pc = 0x4CE5D0u;
label_4ce5d0:
    // 0x4ce5d0: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x4ce5d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4ce5d4:
    // 0x4ce5d4: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4ce5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4ce5d8:
    // 0x4ce5d8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4ce5d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4ce5dc:
    // 0x4ce5dc: 0x320f809  jalr        $t9
label_4ce5e0:
    if (ctx->pc == 0x4CE5E0u) {
        ctx->pc = 0x4CE5E0u;
            // 0x4ce5e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CE5E4u;
        goto label_4ce5e4;
    }
    ctx->pc = 0x4CE5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE5E4u);
        ctx->pc = 0x4CE5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE5DCu;
            // 0x4ce5e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE5E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE5E4u; }
            if (ctx->pc != 0x4CE5E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE5E4u;
label_4ce5e4:
    // 0x4ce5e4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x4ce5e4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ce5e8:
    // 0x4ce5e8: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x4ce5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4ce5ec:
    // 0x4ce5ec: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4ce5ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4ce5f0:
    // 0x4ce5f0: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x4ce5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
label_4ce5f4:
    // 0x4ce5f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ce5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ce5f8:
    // 0x4ce5f8: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4ce5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4ce5fc:
    // 0x4ce5fc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4ce5fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4ce600:
    // 0x4ce600: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4ce600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ce604:
    // 0x4ce604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ce604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce608:
    // 0x4ce608: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ce608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce60c:
    // 0x4ce60c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ce60cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ce610:
    // 0x4ce610: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4ce610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ce614:
    // 0x4ce614: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x4ce614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4ce618:
    // 0x4ce618: 0x320f809  jalr        $t9
label_4ce61c:
    if (ctx->pc == 0x4CE61Cu) {
        ctx->pc = 0x4CE61Cu;
            // 0x4ce61c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4CE620u;
        goto label_4ce620;
    }
    ctx->pc = 0x4CE618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE620u);
        ctx->pc = 0x4CE61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE618u;
            // 0x4ce61c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE620u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE620u; }
            if (ctx->pc != 0x4CE620u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE620u;
label_4ce620:
    // 0x4ce620: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x4ce620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4ce624:
    // 0x4ce624: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ce624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ce628:
    // 0x4ce628: 0x320f809  jalr        $t9
label_4ce62c:
    if (ctx->pc == 0x4CE62Cu) {
        ctx->pc = 0x4CE62Cu;
            // 0x4ce62c: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4CE630u;
        goto label_4ce630;
    }
    ctx->pc = 0x4CE628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE630u);
        ctx->pc = 0x4CE62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE628u;
            // 0x4ce62c: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE630u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE630u; }
            if (ctx->pc != 0x4CE630u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE630u;
label_4ce630:
    // 0x4ce630: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x4ce630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4ce634:
    // 0x4ce634: 0x8c440d50  lw          $a0, 0xD50($v0)
    ctx->pc = 0x4ce634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3408)));
label_4ce638:
    // 0x4ce638: 0xc0506ac  jal         func_141AB0
label_4ce63c:
    if (ctx->pc == 0x4CE63Cu) {
        ctx->pc = 0x4CE63Cu;
            // 0x4ce63c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE640u;
        goto label_4ce640;
    }
    ctx->pc = 0x4CE638u;
    SET_GPR_U32(ctx, 31, 0x4CE640u);
    ctx->pc = 0x4CE63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE638u;
            // 0x4ce63c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE640u; }
        if (ctx->pc != 0x4CE640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE640u; }
        if (ctx->pc != 0x4CE640u) { return; }
    }
    ctx->pc = 0x4CE640u;
label_4ce640:
    // 0x4ce640: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x4ce640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4ce644:
    // 0x4ce644: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4ce644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4ce648:
    // 0x4ce648: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4ce648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4ce64c:
    // 0x4ce64c: 0x320f809  jalr        $t9
label_4ce650:
    if (ctx->pc == 0x4CE650u) {
        ctx->pc = 0x4CE650u;
            // 0x4ce650: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4CE654u;
        goto label_4ce654;
    }
    ctx->pc = 0x4CE64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE654u);
        ctx->pc = 0x4CE650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE64Cu;
            // 0x4ce650: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE654u; }
            if (ctx->pc != 0x4CE654u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE654u;
label_4ce654:
    // 0x4ce654: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x4ce654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_4ce658:
    // 0x4ce658: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x4ce658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4ce65c:
    // 0x4ce65c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4ce65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4ce660:
    // 0x4ce660: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4ce660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4ce664:
    // 0x4ce664: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x4ce664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_4ce668:
    // 0x4ce668: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4ce668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ce66c:
    // 0x4ce66c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4ce66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ce670:
    // 0x4ce670: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4ce670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4ce674:
    // 0x4ce674: 0x3c02438a  lui         $v0, 0x438A
    ctx->pc = 0x4ce674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17290 << 16));
label_4ce678:
    // 0x4ce678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ce678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce67c:
    // 0x4ce67c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4ce67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4ce680:
    // 0x4ce680: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ce680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ce684:
    // 0x4ce684: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ce684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ce688:
    // 0x4ce688: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x4ce688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4ce68c:
    // 0x4ce68c: 0x320f809  jalr        $t9
label_4ce690:
    if (ctx->pc == 0x4CE690u) {
        ctx->pc = 0x4CE690u;
            // 0x4ce690: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE694u;
        goto label_4ce694;
    }
    ctx->pc = 0x4CE68Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE694u);
        ctx->pc = 0x4CE690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE68Cu;
            // 0x4ce690: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE694u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE694u; }
            if (ctx->pc != 0x4CE694u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE694u;
label_4ce694:
    // 0x4ce694: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x4ce694u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4ce698:
    // 0x4ce698: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ce698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ce69c:
    // 0x4ce69c: 0x320f809  jalr        $t9
label_4ce6a0:
    if (ctx->pc == 0x4CE6A0u) {
        ctx->pc = 0x4CE6A0u;
            // 0x4ce6a0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4CE6A4u;
        goto label_4ce6a4;
    }
    ctx->pc = 0x4CE69Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE6A4u);
        ctx->pc = 0x4CE6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE69Cu;
            // 0x4ce6a0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE6A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6A4u; }
            if (ctx->pc != 0x4CE6A4u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE6A4u;
label_4ce6a4:
    // 0x4ce6a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ce6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ce6a8:
    // 0x4ce6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ce6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ce6ac:
    // 0x4ce6ac: 0x240500fd  addiu       $a1, $zero, 0xFD
    ctx->pc = 0x4ce6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
label_4ce6b0:
    // 0x4ce6b0: 0xc133a80  jal         func_4CEA00
label_4ce6b4:
    if (ctx->pc == 0x4CE6B4u) {
        ctx->pc = 0x4CE6B4u;
            // 0x4ce6b4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE6B8u;
        goto label_4ce6b8;
    }
    ctx->pc = 0x4CE6B0u;
    SET_GPR_U32(ctx, 31, 0x4CE6B8u);
    ctx->pc = 0x4CE6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE6B0u;
            // 0x4ce6b4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CEA00u;
    if (runtime->hasFunction(0x4CEA00u)) {
        auto targetFn = runtime->lookupFunction(0x4CEA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6B8u; }
        if (ctx->pc != 0x4CE6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CEA00_0x4cea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6B8u; }
        if (ctx->pc != 0x4CE6B8u) { return; }
    }
    ctx->pc = 0x4CE6B8u;
label_4ce6b8:
    // 0x4ce6b8: 0x1000006a  b           . + 4 + (0x6A << 2)
label_4ce6bc:
    if (ctx->pc == 0x4CE6BCu) {
        ctx->pc = 0x4CE6BCu;
            // 0x4ce6bc: 0x9263007d  lbu         $v1, 0x7D($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 125)));
        ctx->pc = 0x4CE6C0u;
        goto label_4ce6c0;
    }
    ctx->pc = 0x4CE6B8u;
    {
        const bool branch_taken_0x4ce6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE6B8u;
            // 0x4ce6bc: 0x9263007d  lbu         $v1, 0x7D($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 125)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce6b8) {
            ctx->pc = 0x4CE864u;
            goto label_4ce864;
        }
    }
    ctx->pc = 0x4CE6C0u;
label_4ce6c0:
    // 0x4ce6c0: 0xc077318  jal         func_1DCC60
label_4ce6c4:
    if (ctx->pc == 0x4CE6C4u) {
        ctx->pc = 0x4CE6C8u;
        goto label_4ce6c8;
    }
    ctx->pc = 0x4CE6C0u;
    SET_GPR_U32(ctx, 31, 0x4CE6C8u);
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6C8u; }
        if (ctx->pc != 0x4CE6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6C8u; }
        if (ctx->pc != 0x4CE6C8u) { return; }
    }
    ctx->pc = 0x4CE6C8u;
label_4ce6c8:
    // 0x4ce6c8: 0xc0d105c  jal         func_344170
label_4ce6cc:
    if (ctx->pc == 0x4CE6CCu) {
        ctx->pc = 0x4CE6D0u;
        goto label_4ce6d0;
    }
    ctx->pc = 0x4CE6C8u;
    SET_GPR_U32(ctx, 31, 0x4CE6D0u);
    ctx->pc = 0x344170u;
    if (runtime->hasFunction(0x344170u)) {
        auto targetFn = runtime->lookupFunction(0x344170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6D0u; }
        if (ctx->pc != 0x4CE6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00344170_0x344170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6D0u; }
        if (ctx->pc != 0x4CE6D0u) { return; }
    }
    ctx->pc = 0x4CE6D0u;
label_4ce6d0:
    // 0x4ce6d0: 0xc0f1110  jal         func_3C4440
label_4ce6d4:
    if (ctx->pc == 0x4CE6D4u) {
        ctx->pc = 0x4CE6D4u;
            // 0x4ce6d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE6D8u;
        goto label_4ce6d8;
    }
    ctx->pc = 0x4CE6D0u;
    SET_GPR_U32(ctx, 31, 0x4CE6D8u);
    ctx->pc = 0x4CE6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE6D0u;
            // 0x4ce6d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4440u;
    if (runtime->hasFunction(0x3C4440u)) {
        auto targetFn = runtime->lookupFunction(0x3C4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6D8u; }
        if (ctx->pc != 0x4CE6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4440_0x3c4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6D8u; }
        if (ctx->pc != 0x4CE6D8u) { return; }
    }
    ctx->pc = 0x4CE6D8u;
label_4ce6d8:
    // 0x4ce6d8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4ce6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4ce6dc:
    // 0x4ce6dc: 0xc0d2fe0  jal         func_34BF80
label_4ce6e0:
    if (ctx->pc == 0x4CE6E0u) {
        ctx->pc = 0x4CE6E0u;
            // 0x4ce6e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE6E4u;
        goto label_4ce6e4;
    }
    ctx->pc = 0x4CE6DCu;
    SET_GPR_U32(ctx, 31, 0x4CE6E4u);
    ctx->pc = 0x4CE6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE6DCu;
            // 0x4ce6e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BF80u;
    if (runtime->hasFunction(0x34BF80u)) {
        auto targetFn = runtime->lookupFunction(0x34BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6E4u; }
        if (ctx->pc != 0x4CE6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BF80_0x34bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6E4u; }
        if (ctx->pc != 0x4CE6E4u) { return; }
    }
    ctx->pc = 0x4CE6E4u;
label_4ce6e4:
    // 0x4ce6e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4ce6e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ce6e8:
    // 0x4ce6e8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4ce6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4ce6ec:
    // 0x4ce6ec: 0xc0f110c  jal         func_3C4430
label_4ce6f0:
    if (ctx->pc == 0x4CE6F0u) {
        ctx->pc = 0x4CE6F0u;
            // 0x4ce6f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE6F4u;
        goto label_4ce6f4;
    }
    ctx->pc = 0x4CE6ECu;
    SET_GPR_U32(ctx, 31, 0x4CE6F4u);
    ctx->pc = 0x4CE6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE6ECu;
            // 0x4ce6f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4430u;
    if (runtime->hasFunction(0x3C4430u)) {
        auto targetFn = runtime->lookupFunction(0x3C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6F4u; }
        if (ctx->pc != 0x4CE6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4430_0x3c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6F4u; }
        if (ctx->pc != 0x4CE6F4u) { return; }
    }
    ctx->pc = 0x4CE6F4u;
label_4ce6f4:
    // 0x4ce6f4: 0xc133a7c  jal         func_4CE9F0
label_4ce6f8:
    if (ctx->pc == 0x4CE6F8u) {
        ctx->pc = 0x4CE6F8u;
            // 0x4ce6f8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x4CE6FCu;
        goto label_4ce6fc;
    }
    ctx->pc = 0x4CE6F4u;
    SET_GPR_U32(ctx, 31, 0x4CE6FCu);
    ctx->pc = 0x4CE6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE6F4u;
            // 0x4ce6f8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CE9F0u;
    if (runtime->hasFunction(0x4CE9F0u)) {
        auto targetFn = runtime->lookupFunction(0x4CE9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6FCu; }
        if (ctx->pc != 0x4CE6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CE9F0_0x4ce9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE6FCu; }
        if (ctx->pc != 0x4CE6FCu) { return; }
    }
    ctx->pc = 0x4CE6FCu;
label_4ce6fc:
    // 0x4ce6fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ce6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ce700:
    // 0x4ce700: 0xc0506ac  jal         func_141AB0
label_4ce704:
    if (ctx->pc == 0x4CE704u) {
        ctx->pc = 0x4CE704u;
            // 0x4ce704: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x4CE708u;
        goto label_4ce708;
    }
    ctx->pc = 0x4CE700u;
    SET_GPR_U32(ctx, 31, 0x4CE708u);
    ctx->pc = 0x4CE704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE700u;
            // 0x4ce704: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE708u; }
        if (ctx->pc != 0x4CE708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE708u; }
        if (ctx->pc != 0x4CE708u) { return; }
    }
    ctx->pc = 0x4CE708u;
label_4ce708:
    // 0x4ce708: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x4ce708u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ce70c:
    // 0x4ce70c: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x4ce70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
label_4ce710:
    // 0x4ce710: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4ce710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4ce714:
    // 0x4ce714: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ce714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ce718:
    // 0x4ce718: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4ce718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4ce71c:
    // 0x4ce71c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4ce71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ce720:
    // 0x4ce720: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ce720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ce724:
    // 0x4ce724: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ce724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce728:
    // 0x4ce728: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ce728u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce72c:
    // 0x4ce72c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ce72cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ce730:
    // 0x4ce730: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4ce730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ce734:
    // 0x4ce734: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x4ce734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4ce738:
    // 0x4ce738: 0xc0f10b4  jal         func_3C42D0
label_4ce73c:
    if (ctx->pc == 0x4CE73Cu) {
        ctx->pc = 0x4CE73Cu;
            // 0x4ce73c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4CE740u;
        goto label_4ce740;
    }
    ctx->pc = 0x4CE738u;
    SET_GPR_U32(ctx, 31, 0x4CE740u);
    ctx->pc = 0x4CE73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE738u;
            // 0x4ce73c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C42D0u;
    if (runtime->hasFunction(0x3C42D0u)) {
        auto targetFn = runtime->lookupFunction(0x3C42D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE740u; }
        if (ctx->pc != 0x4CE740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C42D0_0x3c42d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE740u; }
        if (ctx->pc != 0x4CE740u) { return; }
    }
    ctx->pc = 0x4CE740u;
label_4ce740:
    // 0x4ce740: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4ce740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4ce744:
    // 0x4ce744: 0xc0f110c  jal         func_3C4430
label_4ce748:
    if (ctx->pc == 0x4CE748u) {
        ctx->pc = 0x4CE748u;
            // 0x4ce748: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CE74Cu;
        goto label_4ce74c;
    }
    ctx->pc = 0x4CE744u;
    SET_GPR_U32(ctx, 31, 0x4CE74Cu);
    ctx->pc = 0x4CE748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE744u;
            // 0x4ce748: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4430u;
    if (runtime->hasFunction(0x3C4430u)) {
        auto targetFn = runtime->lookupFunction(0x3C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE74Cu; }
        if (ctx->pc != 0x4CE74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4430_0x3c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE74Cu; }
        if (ctx->pc != 0x4CE74Cu) { return; }
    }
    ctx->pc = 0x4CE74Cu;
label_4ce74c:
    // 0x4ce74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ce74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ce750:
    // 0x4ce750: 0x240500ae  addiu       $a1, $zero, 0xAE
    ctx->pc = 0x4ce750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
label_4ce754:
    // 0x4ce754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ce754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce758:
    // 0x4ce758: 0xc133a80  jal         func_4CEA00
label_4ce75c:
    if (ctx->pc == 0x4CE75Cu) {
        ctx->pc = 0x4CE75Cu;
            // 0x4ce75c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE760u;
        goto label_4ce760;
    }
    ctx->pc = 0x4CE758u;
    SET_GPR_U32(ctx, 31, 0x4CE760u);
    ctx->pc = 0x4CE75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE758u;
            // 0x4ce75c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CEA00u;
    if (runtime->hasFunction(0x4CEA00u)) {
        auto targetFn = runtime->lookupFunction(0x4CEA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE760u; }
        if (ctx->pc != 0x4CE760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CEA00_0x4cea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE760u; }
        if (ctx->pc != 0x4CE760u) { return; }
    }
    ctx->pc = 0x4CE760u;
label_4ce760:
    // 0x4ce760: 0xc0c8f7c  jal         func_323DF0
label_4ce764:
    if (ctx->pc == 0x4CE764u) {
        ctx->pc = 0x4CE768u;
        goto label_4ce768;
    }
    ctx->pc = 0x4CE760u;
    SET_GPR_U32(ctx, 31, 0x4CE768u);
    ctx->pc = 0x323DF0u;
    if (runtime->hasFunction(0x323DF0u)) {
        auto targetFn = runtime->lookupFunction(0x323DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE768u; }
        if (ctx->pc != 0x4CE768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323DF0_0x323df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE768u; }
        if (ctx->pc != 0x4CE768u) { return; }
    }
    ctx->pc = 0x4CE768u;
label_4ce768:
    // 0x4ce768: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4ce768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ce76c:
    // 0x4ce76c: 0x8203005d  lb          $v1, 0x5D($s0)
    ctx->pc = 0x4ce76cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
label_4ce770:
    // 0x4ce770: 0x9202005c  lbu         $v0, 0x5C($s0)
    ctx->pc = 0x4ce770u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
label_4ce774:
    // 0x4ce774: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ce774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ce778:
    // 0x4ce778: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4ce778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4ce77c:
    // 0x4ce77c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x4ce77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4ce780:
    // 0x4ce780: 0x246302b5  addiu       $v1, $v1, 0x2B5
    ctx->pc = 0x4ce780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 693));
label_4ce784:
    // 0x4ce784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ce784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce788:
    // 0x4ce788: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x4ce788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ce78c:
    // 0x4ce78c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x4ce78cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ce790:
    // 0x4ce790: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4ce790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ce794:
    // 0x4ce794: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4ce794u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce798:
    // 0x4ce798: 0xc0f111c  jal         func_3C4470
label_4ce79c:
    if (ctx->pc == 0x4CE79Cu) {
        ctx->pc = 0x4CE79Cu;
            // 0x4ce79c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE7A0u;
        goto label_4ce7a0;
    }
    ctx->pc = 0x4CE798u;
    SET_GPR_U32(ctx, 31, 0x4CE7A0u);
    ctx->pc = 0x4CE79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE798u;
            // 0x4ce79c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4470u;
    if (runtime->hasFunction(0x3C4470u)) {
        auto targetFn = runtime->lookupFunction(0x3C4470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE7A0u; }
        if (ctx->pc != 0x4CE7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4470_0x3c4470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE7A0u; }
        if (ctx->pc != 0x4CE7A0u) { return; }
    }
    ctx->pc = 0x4CE7A0u;
label_4ce7a0:
    // 0x4ce7a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4ce7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4ce7a4:
    // 0x4ce7a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4ce7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4ce7a8:
    // 0x4ce7a8: 0x3c024372  lui         $v0, 0x4372
    ctx->pc = 0x4ce7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17266 << 16));
label_4ce7ac:
    // 0x4ce7ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4ce7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4ce7b0:
    // 0x4ce7b0: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x4ce7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ce7b4:
    // 0x4ce7b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ce7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ce7b8:
    // 0x4ce7b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ce7b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ce7bc:
    // 0x4ce7bc: 0x0  nop
    ctx->pc = 0x4ce7bcu;
    // NOP
label_4ce7c0:
    // 0x4ce7c0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4ce7c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4ce7c4:
    // 0x4ce7c4: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x4ce7c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_4ce7c8:
    // 0x4ce7c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ce7c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ce7cc:
    // 0x4ce7cc: 0xc0f1118  jal         func_3C4460
label_4ce7d0:
    if (ctx->pc == 0x4CE7D0u) {
        ctx->pc = 0x4CE7D0u;
            // 0x4ce7d0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4CE7D4u;
        goto label_4ce7d4;
    }
    ctx->pc = 0x4CE7CCu;
    SET_GPR_U32(ctx, 31, 0x4CE7D4u);
    ctx->pc = 0x4CE7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE7CCu;
            // 0x4ce7d0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4460u;
    if (runtime->hasFunction(0x3C4460u)) {
        auto targetFn = runtime->lookupFunction(0x3C4460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE7D4u; }
        if (ctx->pc != 0x4CE7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4460_0x3c4460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE7D4u; }
        if (ctx->pc != 0x4CE7D4u) { return; }
    }
    ctx->pc = 0x4CE7D4u;
label_4ce7d4:
    // 0x4ce7d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ce7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ce7d8:
    // 0x4ce7d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4ce7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4ce7dc:
    // 0x4ce7dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4ce7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4ce7e0:
    // 0x4ce7e0: 0x3c024391  lui         $v0, 0x4391
    ctx->pc = 0x4ce7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17297 << 16));
label_4ce7e4:
    // 0x4ce7e4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4ce7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4ce7e8:
    // 0x4ce7e8: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x4ce7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ce7ec:
    // 0x4ce7ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ce7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ce7f0:
    // 0x4ce7f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ce7f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ce7f4:
    // 0x4ce7f4: 0x0  nop
    ctx->pc = 0x4ce7f4u;
    // NOP
label_4ce7f8:
    // 0x4ce7f8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4ce7f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4ce7fc:
    // 0x4ce7fc: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x4ce7fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_4ce800:
    // 0x4ce800: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ce800u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ce804:
    // 0x4ce804: 0xc0f10e8  jal         func_3C43A0
label_4ce808:
    if (ctx->pc == 0x4CE808u) {
        ctx->pc = 0x4CE808u;
            // 0x4ce808: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4CE80Cu;
        goto label_4ce80c;
    }
    ctx->pc = 0x4CE804u;
    SET_GPR_U32(ctx, 31, 0x4CE80Cu);
    ctx->pc = 0x4CE808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE804u;
            // 0x4ce808: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C43A0u;
    if (runtime->hasFunction(0x3C43A0u)) {
        auto targetFn = runtime->lookupFunction(0x3C43A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE80Cu; }
        if (ctx->pc != 0x4CE80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C43A0_0x3c43a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE80Cu; }
        if (ctx->pc != 0x4CE80Cu) { return; }
    }
    ctx->pc = 0x4CE80Cu;
label_4ce80c:
    // 0x4ce80c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ce80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ce810:
    // 0x4ce810: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ce810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ce814:
    // 0x4ce814: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ce814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ce818:
    // 0x4ce818: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x4ce818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4ce81c:
    // 0x4ce81c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4ce81cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4ce820:
    // 0x4ce820: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4ce820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ce824:
    // 0x4ce824: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x4ce824u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_4ce828:
    // 0x4ce828: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ce828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce82c:
    // 0x4ce82c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4ce82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ce830:
    // 0x4ce830: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4ce830u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce834:
    // 0x4ce834: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4ce834u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce838:
    // 0x4ce838: 0xc0f1094  jal         func_3C4250
label_4ce83c:
    if (ctx->pc == 0x4CE83Cu) {
        ctx->pc = 0x4CE83Cu;
            // 0x4ce83c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE840u;
        goto label_4ce840;
    }
    ctx->pc = 0x4CE838u;
    SET_GPR_U32(ctx, 31, 0x4CE840u);
    ctx->pc = 0x4CE83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE838u;
            // 0x4ce83c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4250u;
    if (runtime->hasFunction(0x3C4250u)) {
        auto targetFn = runtime->lookupFunction(0x3C4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE840u; }
        if (ctx->pc != 0x4CE840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4250_0x3c4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE840u; }
        if (ctx->pc != 0x4CE840u) { return; }
    }
    ctx->pc = 0x4CE840u;
label_4ce840:
    // 0x4ce840: 0x10000007  b           . + 4 + (0x7 << 2)
label_4ce844:
    if (ctx->pc == 0x4CE844u) {
        ctx->pc = 0x4CE848u;
        goto label_4ce848;
    }
    ctx->pc = 0x4CE840u;
    {
        const bool branch_taken_0x4ce840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce840) {
            ctx->pc = 0x4CE860u;
            goto label_4ce860;
        }
    }
    ctx->pc = 0x4CE848u;
label_4ce848:
    // 0x4ce848: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4ce84c:
    if (ctx->pc == 0x4CE84Cu) {
        ctx->pc = 0x4CE850u;
        goto label_4ce850;
    }
    ctx->pc = 0x4CE848u;
    {
        const bool branch_taken_0x4ce848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce848) {
            ctx->pc = 0x4CE860u;
            goto label_4ce860;
        }
    }
    ctx->pc = 0x4CE850u;
label_4ce850:
    // 0x4ce850: 0x24050133  addiu       $a1, $zero, 0x133
    ctx->pc = 0x4ce850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 307));
label_4ce854:
    // 0x4ce854: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ce854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ce858:
    // 0x4ce858: 0xc133a80  jal         func_4CEA00
label_4ce85c:
    if (ctx->pc == 0x4CE85Cu) {
        ctx->pc = 0x4CE85Cu;
            // 0x4ce85c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CE860u;
        goto label_4ce860;
    }
    ctx->pc = 0x4CE858u;
    SET_GPR_U32(ctx, 31, 0x4CE860u);
    ctx->pc = 0x4CE85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE858u;
            // 0x4ce85c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CEA00u;
    if (runtime->hasFunction(0x4CEA00u)) {
        auto targetFn = runtime->lookupFunction(0x4CEA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE860u; }
        if (ctx->pc != 0x4CE860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CEA00_0x4cea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE860u; }
        if (ctx->pc != 0x4CE860u) { return; }
    }
    ctx->pc = 0x4CE860u;
label_4ce860:
    // 0x4ce860: 0x9263007d  lbu         $v1, 0x7D($s3)
    ctx->pc = 0x4ce860u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 125)));
label_4ce864:
    // 0x4ce864: 0x54600058  bnel        $v1, $zero, . + 4 + (0x58 << 2)
label_4ce868:
    if (ctx->pc == 0x4CE868u) {
        ctx->pc = 0x4CE868u;
            // 0x4ce868: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x4CE86Cu;
        goto label_4ce86c;
    }
    ctx->pc = 0x4CE864u;
    {
        const bool branch_taken_0x4ce864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ce864) {
            ctx->pc = 0x4CE868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE864u;
            // 0x4ce868: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CE9C8u;
            goto label_4ce9c8;
        }
    }
    ctx->pc = 0x4CE86Cu;
label_4ce86c:
    // 0x4ce86c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x4ce86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4ce870:
    // 0x4ce870: 0x90630d75  lbu         $v1, 0xD75($v1)
    ctx->pc = 0x4ce870u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3445)));
label_4ce874:
    // 0x4ce874: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
label_4ce878:
    if (ctx->pc == 0x4CE878u) {
        ctx->pc = 0x4CE87Cu;
        goto label_4ce87c;
    }
    ctx->pc = 0x4CE874u;
    {
        const bool branch_taken_0x4ce874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce874) {
            ctx->pc = 0x4CE9C4u;
            goto label_4ce9c4;
        }
    }
    ctx->pc = 0x4CE87Cu;
label_4ce87c:
    // 0x4ce87c: 0xa2400004  sb          $zero, 0x4($s2)
    ctx->pc = 0x4ce87cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 0));
label_4ce880:
    // 0x4ce880: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ce880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4ce884:
    // 0x4ce884: 0xc440c9b0  lwc1        $f0, -0x3650($v0)
    ctx->pc = 0x4ce884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ce888:
    // 0x4ce888: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ce888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4ce88c:
    // 0x4ce88c: 0xc442c9b4  lwc1        $f2, -0x364C($v0)
    ctx->pc = 0x4ce88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ce890:
    // 0x4ce890: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x4ce890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4ce894:
    // 0x4ce894: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ce894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4ce898:
    // 0x4ce898: 0xc441c9b8  lwc1        $f1, -0x3648($v0)
    ctx->pc = 0x4ce898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ce89c:
    // 0x4ce89c: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x4ce89cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4ce8a0:
    // 0x4ce8a0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ce8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4ce8a4:
    // 0x4ce8a4: 0xc440c9bc  lwc1        $f0, -0x3644($v0)
    ctx->pc = 0x4ce8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ce8a8:
    // 0x4ce8a8: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x4ce8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_4ce8ac:
    // 0x4ce8ac: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x4ce8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_4ce8b0:
    // 0x4ce8b0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4ce8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4ce8b4:
    // 0x4ce8b4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x4ce8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_4ce8b8:
    // 0x4ce8b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ce8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ce8bc:
    // 0x4ce8bc: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x4ce8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_4ce8c0:
    // 0x4ce8c0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4ce8c4:
    if (ctx->pc == 0x4CE8C4u) {
        ctx->pc = 0x4CE8C4u;
            // 0x4ce8c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4CE8C8u;
        goto label_4ce8c8;
    }
    ctx->pc = 0x4CE8C0u;
    {
        const bool branch_taken_0x4ce8c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4ce8c0) {
            ctx->pc = 0x4CE8C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE8C0u;
            // 0x4ce8c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CE8D4u;
            goto label_4ce8d4;
        }
    }
    ctx->pc = 0x4CE8C8u;
label_4ce8c8:
    // 0x4ce8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ce8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ce8cc:
    // 0x4ce8cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_4ce8d0:
    if (ctx->pc == 0x4CE8D0u) {
        ctx->pc = 0x4CE8D0u;
            // 0x4ce8d0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4CE8D4u;
        goto label_4ce8d4;
    }
    ctx->pc = 0x4CE8CCu;
    {
        const bool branch_taken_0x4ce8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE8CCu;
            // 0x4ce8d0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce8cc) {
            ctx->pc = 0x4CE8ECu;
            goto label_4ce8ec;
        }
    }
    ctx->pc = 0x4CE8D4u;
label_4ce8d4:
    // 0x4ce8d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4ce8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4ce8d8:
    // 0x4ce8d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ce8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4ce8dc:
    // 0x4ce8dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ce8dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ce8e0:
    // 0x4ce8e0: 0x0  nop
    ctx->pc = 0x4ce8e0u;
    // NOP
label_4ce8e4:
    // 0x4ce8e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ce8e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4ce8e8:
    // 0x4ce8e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4ce8e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4ce8ec:
    // 0x4ce8ec: 0xc0477a8  jal         func_11DEA0
label_4ce8f0:
    if (ctx->pc == 0x4CE8F0u) {
        ctx->pc = 0x4CE8F0u;
            // 0x4ce8f0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4CE8F4u;
        goto label_4ce8f4;
    }
    ctx->pc = 0x4CE8ECu;
    SET_GPR_U32(ctx, 31, 0x4CE8F4u);
    ctx->pc = 0x4CE8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE8ECu;
            // 0x4ce8f0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE8F4u; }
        if (ctx->pc != 0x4CE8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE8F4u; }
        if (ctx->pc != 0x4CE8F4u) { return; }
    }
    ctx->pc = 0x4CE8F4u;
label_4ce8f4:
    // 0x4ce8f4: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x4ce8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_4ce8f8:
    // 0x4ce8f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ce8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ce8fc:
    // 0x4ce8fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4ce8fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ce900:
    // 0x4ce900: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x4ce900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_4ce904:
    // 0x4ce904: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4ce904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4ce908:
    // 0x4ce908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ce908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce90c:
    // 0x4ce90c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ce90cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ce910:
    // 0x4ce910: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4ce910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_4ce914:
    // 0x4ce914: 0xc0506ac  jal         func_141AB0
label_4ce918:
    if (ctx->pc == 0x4CE918u) {
        ctx->pc = 0x4CE918u;
            // 0x4ce918: 0x2451007f  addiu       $s1, $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
        ctx->pc = 0x4CE91Cu;
        goto label_4ce91c;
    }
    ctx->pc = 0x4CE914u;
    SET_GPR_U32(ctx, 31, 0x4CE91Cu);
    ctx->pc = 0x4CE918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE914u;
            // 0x4ce918: 0x2451007f  addiu       $s1, $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE91Cu; }
        if (ctx->pc != 0x4CE91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CE91Cu; }
        if (ctx->pc != 0x4CE91Cu) { return; }
    }
    ctx->pc = 0x4CE91Cu;
label_4ce91c:
    // 0x4ce91c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ce91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ce920:
    // 0x4ce920: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ce920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ce924:
    // 0x4ce924: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x4ce924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4ce928:
    // 0x4ce928: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ce928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ce92c:
    // 0x4ce92c: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x4ce92cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_4ce930:
    // 0x4ce930: 0x320f809  jalr        $t9
label_4ce934:
    if (ctx->pc == 0x4CE934u) {
        ctx->pc = 0x4CE934u;
            // 0x4ce934: 0x8c7089d8  lw          $s0, -0x7628($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937048)));
        ctx->pc = 0x4CE938u;
        goto label_4ce938;
    }
    ctx->pc = 0x4CE930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE938u);
        ctx->pc = 0x4CE934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE930u;
            // 0x4ce934: 0x8c7089d8  lw          $s0, -0x7628($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937048)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE938u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE938u; }
            if (ctx->pc != 0x4CE938u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE938u;
label_4ce938:
    // 0x4ce938: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x4ce938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ce93c:
    // 0x4ce93c: 0x3c0243a5  lui         $v0, 0x43A5
    ctx->pc = 0x4ce93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17317 << 16));
label_4ce940:
    // 0x4ce940: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4ce940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ce944:
    // 0x4ce944: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x4ce944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4ce948:
    // 0x4ce948: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4ce948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4ce94c:
    // 0x4ce94c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4ce94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ce950:
    // 0x4ce950: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4ce950u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4ce954:
    // 0x4ce954: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4ce954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4ce958:
    // 0x4ce958: 0x320f809  jalr        $t9
label_4ce95c:
    if (ctx->pc == 0x4CE95Cu) {
        ctx->pc = 0x4CE95Cu;
            // 0x4ce95c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4CE960u;
        goto label_4ce960;
    }
    ctx->pc = 0x4CE958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE960u);
        ctx->pc = 0x4CE95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE958u;
            // 0x4ce95c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE960u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE960u; }
            if (ctx->pc != 0x4CE960u) { return; }
        }
        }
    }
    ctx->pc = 0x4CE960u;
label_4ce960:
    // 0x4ce960: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x4ce960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_4ce964:
    // 0x4ce964: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x4ce964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4ce968:
    // 0x4ce968: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ce968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ce96c:
    // 0x4ce96c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x4ce96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_4ce970:
    // 0x4ce970: 0x3c024411  lui         $v0, 0x4411
    ctx->pc = 0x4ce970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17425 << 16));
label_4ce974:
    // 0x4ce974: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4ce974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4ce978:
    // 0x4ce978: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4ce978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ce97c:
    // 0x4ce97c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4ce97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4ce980:
    // 0x4ce980: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x4ce980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_4ce984:
    // 0x4ce984: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x4ce984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4ce988:
    // 0x4ce988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ce988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ce98c:
    // 0x4ce98c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ce98cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ce990:
    // 0x4ce990: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4ce990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4ce994:
    // 0x4ce994: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x4ce994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4ce998:
    // 0x4ce998: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ce998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ce99c:
    // 0x4ce99c: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x4ce99cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4ce9a0:
    // 0x4ce9a0: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x4ce9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4ce9a4:
    // 0x4ce9a4: 0x320f809  jalr        $t9
label_4ce9a8:
    if (ctx->pc == 0x4CE9A8u) {
        ctx->pc = 0x4CE9A8u;
            // 0x4ce9a8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4CE9ACu;
        goto label_4ce9ac;
    }
    ctx->pc = 0x4CE9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE9ACu);
        ctx->pc = 0x4CE9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE9A4u;
            // 0x4ce9a8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE9ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE9ACu; }
            if (ctx->pc != 0x4CE9ACu) { return; }
        }
        }
    }
    ctx->pc = 0x4CE9ACu;
label_4ce9ac:
    // 0x4ce9ac: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x4ce9acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4ce9b0:
    // 0x4ce9b0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ce9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ce9b4:
    // 0x4ce9b4: 0x320f809  jalr        $t9
label_4ce9b8:
    if (ctx->pc == 0x4CE9B8u) {
        ctx->pc = 0x4CE9B8u;
            // 0x4ce9b8: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4CE9BCu;
        goto label_4ce9bc;
    }
    ctx->pc = 0x4CE9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CE9BCu);
        ctx->pc = 0x4CE9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE9B4u;
            // 0x4ce9b8: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CE9BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CE9BCu; }
            if (ctx->pc != 0x4CE9BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4CE9BCu;
label_4ce9bc:
    // 0x4ce9bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ce9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ce9c0:
    // 0x4ce9c0: 0xa2430004  sb          $v1, 0x4($s2)
    ctx->pc = 0x4ce9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
label_4ce9c4:
    // 0x4ce9c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4ce9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4ce9c8:
    // 0x4ce9c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4ce9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ce9cc:
    // 0x4ce9cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4ce9ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ce9d0:
    // 0x4ce9d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ce9d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ce9d4:
    // 0x4ce9d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ce9d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ce9d8:
    // 0x4ce9d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ce9d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ce9dc:
    // 0x4ce9dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ce9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ce9e0:
    // 0x4ce9e0: 0x3e00008  jr          $ra
label_4ce9e4:
    if (ctx->pc == 0x4CE9E4u) {
        ctx->pc = 0x4CE9E4u;
            // 0x4ce9e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4CE9E8u;
        goto label_4ce9e8;
    }
    ctx->pc = 0x4CE9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE9E0u;
            // 0x4ce9e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CE9E8u;
label_4ce9e8:
    // 0x4ce9e8: 0x0  nop
    ctx->pc = 0x4ce9e8u;
    // NOP
label_4ce9ec:
    // 0x4ce9ec: 0x0  nop
    ctx->pc = 0x4ce9ecu;
    // NOP
}
