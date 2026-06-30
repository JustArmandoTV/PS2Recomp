#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00352D50
// Address: 0x352d50 - 0x353450
void sub_00352D50_0x352d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352D50_0x352d50");
#endif

    switch (ctx->pc) {
        case 0x352d50u: goto label_352d50;
        case 0x352d54u: goto label_352d54;
        case 0x352d58u: goto label_352d58;
        case 0x352d5cu: goto label_352d5c;
        case 0x352d60u: goto label_352d60;
        case 0x352d64u: goto label_352d64;
        case 0x352d68u: goto label_352d68;
        case 0x352d6cu: goto label_352d6c;
        case 0x352d70u: goto label_352d70;
        case 0x352d74u: goto label_352d74;
        case 0x352d78u: goto label_352d78;
        case 0x352d7cu: goto label_352d7c;
        case 0x352d80u: goto label_352d80;
        case 0x352d84u: goto label_352d84;
        case 0x352d88u: goto label_352d88;
        case 0x352d8cu: goto label_352d8c;
        case 0x352d90u: goto label_352d90;
        case 0x352d94u: goto label_352d94;
        case 0x352d98u: goto label_352d98;
        case 0x352d9cu: goto label_352d9c;
        case 0x352da0u: goto label_352da0;
        case 0x352da4u: goto label_352da4;
        case 0x352da8u: goto label_352da8;
        case 0x352dacu: goto label_352dac;
        case 0x352db0u: goto label_352db0;
        case 0x352db4u: goto label_352db4;
        case 0x352db8u: goto label_352db8;
        case 0x352dbcu: goto label_352dbc;
        case 0x352dc0u: goto label_352dc0;
        case 0x352dc4u: goto label_352dc4;
        case 0x352dc8u: goto label_352dc8;
        case 0x352dccu: goto label_352dcc;
        case 0x352dd0u: goto label_352dd0;
        case 0x352dd4u: goto label_352dd4;
        case 0x352dd8u: goto label_352dd8;
        case 0x352ddcu: goto label_352ddc;
        case 0x352de0u: goto label_352de0;
        case 0x352de4u: goto label_352de4;
        case 0x352de8u: goto label_352de8;
        case 0x352decu: goto label_352dec;
        case 0x352df0u: goto label_352df0;
        case 0x352df4u: goto label_352df4;
        case 0x352df8u: goto label_352df8;
        case 0x352dfcu: goto label_352dfc;
        case 0x352e00u: goto label_352e00;
        case 0x352e04u: goto label_352e04;
        case 0x352e08u: goto label_352e08;
        case 0x352e0cu: goto label_352e0c;
        case 0x352e10u: goto label_352e10;
        case 0x352e14u: goto label_352e14;
        case 0x352e18u: goto label_352e18;
        case 0x352e1cu: goto label_352e1c;
        case 0x352e20u: goto label_352e20;
        case 0x352e24u: goto label_352e24;
        case 0x352e28u: goto label_352e28;
        case 0x352e2cu: goto label_352e2c;
        case 0x352e30u: goto label_352e30;
        case 0x352e34u: goto label_352e34;
        case 0x352e38u: goto label_352e38;
        case 0x352e3cu: goto label_352e3c;
        case 0x352e40u: goto label_352e40;
        case 0x352e44u: goto label_352e44;
        case 0x352e48u: goto label_352e48;
        case 0x352e4cu: goto label_352e4c;
        case 0x352e50u: goto label_352e50;
        case 0x352e54u: goto label_352e54;
        case 0x352e58u: goto label_352e58;
        case 0x352e5cu: goto label_352e5c;
        case 0x352e60u: goto label_352e60;
        case 0x352e64u: goto label_352e64;
        case 0x352e68u: goto label_352e68;
        case 0x352e6cu: goto label_352e6c;
        case 0x352e70u: goto label_352e70;
        case 0x352e74u: goto label_352e74;
        case 0x352e78u: goto label_352e78;
        case 0x352e7cu: goto label_352e7c;
        case 0x352e80u: goto label_352e80;
        case 0x352e84u: goto label_352e84;
        case 0x352e88u: goto label_352e88;
        case 0x352e8cu: goto label_352e8c;
        case 0x352e90u: goto label_352e90;
        case 0x352e94u: goto label_352e94;
        case 0x352e98u: goto label_352e98;
        case 0x352e9cu: goto label_352e9c;
        case 0x352ea0u: goto label_352ea0;
        case 0x352ea4u: goto label_352ea4;
        case 0x352ea8u: goto label_352ea8;
        case 0x352eacu: goto label_352eac;
        case 0x352eb0u: goto label_352eb0;
        case 0x352eb4u: goto label_352eb4;
        case 0x352eb8u: goto label_352eb8;
        case 0x352ebcu: goto label_352ebc;
        case 0x352ec0u: goto label_352ec0;
        case 0x352ec4u: goto label_352ec4;
        case 0x352ec8u: goto label_352ec8;
        case 0x352eccu: goto label_352ecc;
        case 0x352ed0u: goto label_352ed0;
        case 0x352ed4u: goto label_352ed4;
        case 0x352ed8u: goto label_352ed8;
        case 0x352edcu: goto label_352edc;
        case 0x352ee0u: goto label_352ee0;
        case 0x352ee4u: goto label_352ee4;
        case 0x352ee8u: goto label_352ee8;
        case 0x352eecu: goto label_352eec;
        case 0x352ef0u: goto label_352ef0;
        case 0x352ef4u: goto label_352ef4;
        case 0x352ef8u: goto label_352ef8;
        case 0x352efcu: goto label_352efc;
        case 0x352f00u: goto label_352f00;
        case 0x352f04u: goto label_352f04;
        case 0x352f08u: goto label_352f08;
        case 0x352f0cu: goto label_352f0c;
        case 0x352f10u: goto label_352f10;
        case 0x352f14u: goto label_352f14;
        case 0x352f18u: goto label_352f18;
        case 0x352f1cu: goto label_352f1c;
        case 0x352f20u: goto label_352f20;
        case 0x352f24u: goto label_352f24;
        case 0x352f28u: goto label_352f28;
        case 0x352f2cu: goto label_352f2c;
        case 0x352f30u: goto label_352f30;
        case 0x352f34u: goto label_352f34;
        case 0x352f38u: goto label_352f38;
        case 0x352f3cu: goto label_352f3c;
        case 0x352f40u: goto label_352f40;
        case 0x352f44u: goto label_352f44;
        case 0x352f48u: goto label_352f48;
        case 0x352f4cu: goto label_352f4c;
        case 0x352f50u: goto label_352f50;
        case 0x352f54u: goto label_352f54;
        case 0x352f58u: goto label_352f58;
        case 0x352f5cu: goto label_352f5c;
        case 0x352f60u: goto label_352f60;
        case 0x352f64u: goto label_352f64;
        case 0x352f68u: goto label_352f68;
        case 0x352f6cu: goto label_352f6c;
        case 0x352f70u: goto label_352f70;
        case 0x352f74u: goto label_352f74;
        case 0x352f78u: goto label_352f78;
        case 0x352f7cu: goto label_352f7c;
        case 0x352f80u: goto label_352f80;
        case 0x352f84u: goto label_352f84;
        case 0x352f88u: goto label_352f88;
        case 0x352f8cu: goto label_352f8c;
        case 0x352f90u: goto label_352f90;
        case 0x352f94u: goto label_352f94;
        case 0x352f98u: goto label_352f98;
        case 0x352f9cu: goto label_352f9c;
        case 0x352fa0u: goto label_352fa0;
        case 0x352fa4u: goto label_352fa4;
        case 0x352fa8u: goto label_352fa8;
        case 0x352facu: goto label_352fac;
        case 0x352fb0u: goto label_352fb0;
        case 0x352fb4u: goto label_352fb4;
        case 0x352fb8u: goto label_352fb8;
        case 0x352fbcu: goto label_352fbc;
        case 0x352fc0u: goto label_352fc0;
        case 0x352fc4u: goto label_352fc4;
        case 0x352fc8u: goto label_352fc8;
        case 0x352fccu: goto label_352fcc;
        case 0x352fd0u: goto label_352fd0;
        case 0x352fd4u: goto label_352fd4;
        case 0x352fd8u: goto label_352fd8;
        case 0x352fdcu: goto label_352fdc;
        case 0x352fe0u: goto label_352fe0;
        case 0x352fe4u: goto label_352fe4;
        case 0x352fe8u: goto label_352fe8;
        case 0x352fecu: goto label_352fec;
        case 0x352ff0u: goto label_352ff0;
        case 0x352ff4u: goto label_352ff4;
        case 0x352ff8u: goto label_352ff8;
        case 0x352ffcu: goto label_352ffc;
        case 0x353000u: goto label_353000;
        case 0x353004u: goto label_353004;
        case 0x353008u: goto label_353008;
        case 0x35300cu: goto label_35300c;
        case 0x353010u: goto label_353010;
        case 0x353014u: goto label_353014;
        case 0x353018u: goto label_353018;
        case 0x35301cu: goto label_35301c;
        case 0x353020u: goto label_353020;
        case 0x353024u: goto label_353024;
        case 0x353028u: goto label_353028;
        case 0x35302cu: goto label_35302c;
        case 0x353030u: goto label_353030;
        case 0x353034u: goto label_353034;
        case 0x353038u: goto label_353038;
        case 0x35303cu: goto label_35303c;
        case 0x353040u: goto label_353040;
        case 0x353044u: goto label_353044;
        case 0x353048u: goto label_353048;
        case 0x35304cu: goto label_35304c;
        case 0x353050u: goto label_353050;
        case 0x353054u: goto label_353054;
        case 0x353058u: goto label_353058;
        case 0x35305cu: goto label_35305c;
        case 0x353060u: goto label_353060;
        case 0x353064u: goto label_353064;
        case 0x353068u: goto label_353068;
        case 0x35306cu: goto label_35306c;
        case 0x353070u: goto label_353070;
        case 0x353074u: goto label_353074;
        case 0x353078u: goto label_353078;
        case 0x35307cu: goto label_35307c;
        case 0x353080u: goto label_353080;
        case 0x353084u: goto label_353084;
        case 0x353088u: goto label_353088;
        case 0x35308cu: goto label_35308c;
        case 0x353090u: goto label_353090;
        case 0x353094u: goto label_353094;
        case 0x353098u: goto label_353098;
        case 0x35309cu: goto label_35309c;
        case 0x3530a0u: goto label_3530a0;
        case 0x3530a4u: goto label_3530a4;
        case 0x3530a8u: goto label_3530a8;
        case 0x3530acu: goto label_3530ac;
        case 0x3530b0u: goto label_3530b0;
        case 0x3530b4u: goto label_3530b4;
        case 0x3530b8u: goto label_3530b8;
        case 0x3530bcu: goto label_3530bc;
        case 0x3530c0u: goto label_3530c0;
        case 0x3530c4u: goto label_3530c4;
        case 0x3530c8u: goto label_3530c8;
        case 0x3530ccu: goto label_3530cc;
        case 0x3530d0u: goto label_3530d0;
        case 0x3530d4u: goto label_3530d4;
        case 0x3530d8u: goto label_3530d8;
        case 0x3530dcu: goto label_3530dc;
        case 0x3530e0u: goto label_3530e0;
        case 0x3530e4u: goto label_3530e4;
        case 0x3530e8u: goto label_3530e8;
        case 0x3530ecu: goto label_3530ec;
        case 0x3530f0u: goto label_3530f0;
        case 0x3530f4u: goto label_3530f4;
        case 0x3530f8u: goto label_3530f8;
        case 0x3530fcu: goto label_3530fc;
        case 0x353100u: goto label_353100;
        case 0x353104u: goto label_353104;
        case 0x353108u: goto label_353108;
        case 0x35310cu: goto label_35310c;
        case 0x353110u: goto label_353110;
        case 0x353114u: goto label_353114;
        case 0x353118u: goto label_353118;
        case 0x35311cu: goto label_35311c;
        case 0x353120u: goto label_353120;
        case 0x353124u: goto label_353124;
        case 0x353128u: goto label_353128;
        case 0x35312cu: goto label_35312c;
        case 0x353130u: goto label_353130;
        case 0x353134u: goto label_353134;
        case 0x353138u: goto label_353138;
        case 0x35313cu: goto label_35313c;
        case 0x353140u: goto label_353140;
        case 0x353144u: goto label_353144;
        case 0x353148u: goto label_353148;
        case 0x35314cu: goto label_35314c;
        case 0x353150u: goto label_353150;
        case 0x353154u: goto label_353154;
        case 0x353158u: goto label_353158;
        case 0x35315cu: goto label_35315c;
        case 0x353160u: goto label_353160;
        case 0x353164u: goto label_353164;
        case 0x353168u: goto label_353168;
        case 0x35316cu: goto label_35316c;
        case 0x353170u: goto label_353170;
        case 0x353174u: goto label_353174;
        case 0x353178u: goto label_353178;
        case 0x35317cu: goto label_35317c;
        case 0x353180u: goto label_353180;
        case 0x353184u: goto label_353184;
        case 0x353188u: goto label_353188;
        case 0x35318cu: goto label_35318c;
        case 0x353190u: goto label_353190;
        case 0x353194u: goto label_353194;
        case 0x353198u: goto label_353198;
        case 0x35319cu: goto label_35319c;
        case 0x3531a0u: goto label_3531a0;
        case 0x3531a4u: goto label_3531a4;
        case 0x3531a8u: goto label_3531a8;
        case 0x3531acu: goto label_3531ac;
        case 0x3531b0u: goto label_3531b0;
        case 0x3531b4u: goto label_3531b4;
        case 0x3531b8u: goto label_3531b8;
        case 0x3531bcu: goto label_3531bc;
        case 0x3531c0u: goto label_3531c0;
        case 0x3531c4u: goto label_3531c4;
        case 0x3531c8u: goto label_3531c8;
        case 0x3531ccu: goto label_3531cc;
        case 0x3531d0u: goto label_3531d0;
        case 0x3531d4u: goto label_3531d4;
        case 0x3531d8u: goto label_3531d8;
        case 0x3531dcu: goto label_3531dc;
        case 0x3531e0u: goto label_3531e0;
        case 0x3531e4u: goto label_3531e4;
        case 0x3531e8u: goto label_3531e8;
        case 0x3531ecu: goto label_3531ec;
        case 0x3531f0u: goto label_3531f0;
        case 0x3531f4u: goto label_3531f4;
        case 0x3531f8u: goto label_3531f8;
        case 0x3531fcu: goto label_3531fc;
        case 0x353200u: goto label_353200;
        case 0x353204u: goto label_353204;
        case 0x353208u: goto label_353208;
        case 0x35320cu: goto label_35320c;
        case 0x353210u: goto label_353210;
        case 0x353214u: goto label_353214;
        case 0x353218u: goto label_353218;
        case 0x35321cu: goto label_35321c;
        case 0x353220u: goto label_353220;
        case 0x353224u: goto label_353224;
        case 0x353228u: goto label_353228;
        case 0x35322cu: goto label_35322c;
        case 0x353230u: goto label_353230;
        case 0x353234u: goto label_353234;
        case 0x353238u: goto label_353238;
        case 0x35323cu: goto label_35323c;
        case 0x353240u: goto label_353240;
        case 0x353244u: goto label_353244;
        case 0x353248u: goto label_353248;
        case 0x35324cu: goto label_35324c;
        case 0x353250u: goto label_353250;
        case 0x353254u: goto label_353254;
        case 0x353258u: goto label_353258;
        case 0x35325cu: goto label_35325c;
        case 0x353260u: goto label_353260;
        case 0x353264u: goto label_353264;
        case 0x353268u: goto label_353268;
        case 0x35326cu: goto label_35326c;
        case 0x353270u: goto label_353270;
        case 0x353274u: goto label_353274;
        case 0x353278u: goto label_353278;
        case 0x35327cu: goto label_35327c;
        case 0x353280u: goto label_353280;
        case 0x353284u: goto label_353284;
        case 0x353288u: goto label_353288;
        case 0x35328cu: goto label_35328c;
        case 0x353290u: goto label_353290;
        case 0x353294u: goto label_353294;
        case 0x353298u: goto label_353298;
        case 0x35329cu: goto label_35329c;
        case 0x3532a0u: goto label_3532a0;
        case 0x3532a4u: goto label_3532a4;
        case 0x3532a8u: goto label_3532a8;
        case 0x3532acu: goto label_3532ac;
        case 0x3532b0u: goto label_3532b0;
        case 0x3532b4u: goto label_3532b4;
        case 0x3532b8u: goto label_3532b8;
        case 0x3532bcu: goto label_3532bc;
        case 0x3532c0u: goto label_3532c0;
        case 0x3532c4u: goto label_3532c4;
        case 0x3532c8u: goto label_3532c8;
        case 0x3532ccu: goto label_3532cc;
        case 0x3532d0u: goto label_3532d0;
        case 0x3532d4u: goto label_3532d4;
        case 0x3532d8u: goto label_3532d8;
        case 0x3532dcu: goto label_3532dc;
        case 0x3532e0u: goto label_3532e0;
        case 0x3532e4u: goto label_3532e4;
        case 0x3532e8u: goto label_3532e8;
        case 0x3532ecu: goto label_3532ec;
        case 0x3532f0u: goto label_3532f0;
        case 0x3532f4u: goto label_3532f4;
        case 0x3532f8u: goto label_3532f8;
        case 0x3532fcu: goto label_3532fc;
        case 0x353300u: goto label_353300;
        case 0x353304u: goto label_353304;
        case 0x353308u: goto label_353308;
        case 0x35330cu: goto label_35330c;
        case 0x353310u: goto label_353310;
        case 0x353314u: goto label_353314;
        case 0x353318u: goto label_353318;
        case 0x35331cu: goto label_35331c;
        case 0x353320u: goto label_353320;
        case 0x353324u: goto label_353324;
        case 0x353328u: goto label_353328;
        case 0x35332cu: goto label_35332c;
        case 0x353330u: goto label_353330;
        case 0x353334u: goto label_353334;
        case 0x353338u: goto label_353338;
        case 0x35333cu: goto label_35333c;
        case 0x353340u: goto label_353340;
        case 0x353344u: goto label_353344;
        case 0x353348u: goto label_353348;
        case 0x35334cu: goto label_35334c;
        case 0x353350u: goto label_353350;
        case 0x353354u: goto label_353354;
        case 0x353358u: goto label_353358;
        case 0x35335cu: goto label_35335c;
        case 0x353360u: goto label_353360;
        case 0x353364u: goto label_353364;
        case 0x353368u: goto label_353368;
        case 0x35336cu: goto label_35336c;
        case 0x353370u: goto label_353370;
        case 0x353374u: goto label_353374;
        case 0x353378u: goto label_353378;
        case 0x35337cu: goto label_35337c;
        case 0x353380u: goto label_353380;
        case 0x353384u: goto label_353384;
        case 0x353388u: goto label_353388;
        case 0x35338cu: goto label_35338c;
        case 0x353390u: goto label_353390;
        case 0x353394u: goto label_353394;
        case 0x353398u: goto label_353398;
        case 0x35339cu: goto label_35339c;
        case 0x3533a0u: goto label_3533a0;
        case 0x3533a4u: goto label_3533a4;
        case 0x3533a8u: goto label_3533a8;
        case 0x3533acu: goto label_3533ac;
        case 0x3533b0u: goto label_3533b0;
        case 0x3533b4u: goto label_3533b4;
        case 0x3533b8u: goto label_3533b8;
        case 0x3533bcu: goto label_3533bc;
        case 0x3533c0u: goto label_3533c0;
        case 0x3533c4u: goto label_3533c4;
        case 0x3533c8u: goto label_3533c8;
        case 0x3533ccu: goto label_3533cc;
        case 0x3533d0u: goto label_3533d0;
        case 0x3533d4u: goto label_3533d4;
        case 0x3533d8u: goto label_3533d8;
        case 0x3533dcu: goto label_3533dc;
        case 0x3533e0u: goto label_3533e0;
        case 0x3533e4u: goto label_3533e4;
        case 0x3533e8u: goto label_3533e8;
        case 0x3533ecu: goto label_3533ec;
        case 0x3533f0u: goto label_3533f0;
        case 0x3533f4u: goto label_3533f4;
        case 0x3533f8u: goto label_3533f8;
        case 0x3533fcu: goto label_3533fc;
        case 0x353400u: goto label_353400;
        case 0x353404u: goto label_353404;
        case 0x353408u: goto label_353408;
        case 0x35340cu: goto label_35340c;
        case 0x353410u: goto label_353410;
        case 0x353414u: goto label_353414;
        case 0x353418u: goto label_353418;
        case 0x35341cu: goto label_35341c;
        case 0x353420u: goto label_353420;
        case 0x353424u: goto label_353424;
        case 0x353428u: goto label_353428;
        case 0x35342cu: goto label_35342c;
        case 0x353430u: goto label_353430;
        case 0x353434u: goto label_353434;
        case 0x353438u: goto label_353438;
        case 0x35343cu: goto label_35343c;
        case 0x353440u: goto label_353440;
        case 0x353444u: goto label_353444;
        case 0x353448u: goto label_353448;
        case 0x35344cu: goto label_35344c;
        default: break;
    }

    ctx->pc = 0x352d50u;

label_352d50:
    // 0x352d50: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x352d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_352d54:
    // 0x352d54: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x352d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_352d58:
    // 0x352d58: 0x8c424220  lw          $v0, 0x4220($v0)
    ctx->pc = 0x352d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16928)));
label_352d5c:
    // 0x352d5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x352d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352d60:
    // 0x352d60: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x352d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_352d64:
    // 0x352d64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x352d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_352d68:
    // 0x352d68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x352d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_352d6c:
    // 0x352d6c: 0x3e00008  jr          $ra
label_352d70:
    if (ctx->pc == 0x352D70u) {
        ctx->pc = 0x352D70u;
            // 0x352d70: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x352D74u;
        goto label_352d74;
    }
    ctx->pc = 0x352D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352D6Cu;
            // 0x352d70: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352D74u;
label_352d74:
    // 0x352d74: 0x0  nop
    ctx->pc = 0x352d74u;
    // NOP
label_352d78:
    // 0x352d78: 0x0  nop
    ctx->pc = 0x352d78u;
    // NOP
label_352d7c:
    // 0x352d7c: 0x0  nop
    ctx->pc = 0x352d7cu;
    // NOP
label_352d80:
    // 0x352d80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x352d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_352d84:
    // 0x352d84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x352d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_352d88:
    // 0x352d88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x352d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_352d8c:
    // 0x352d8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x352d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_352d90:
    // 0x352d90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x352d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_352d94:
    // 0x352d94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x352d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_352d98:
    // 0x352d98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x352d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_352d9c:
    // 0x352d9c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x352d9cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_352da0:
    // 0x352da0: 0x10a3003f  beq         $a1, $v1, . + 4 + (0x3F << 2)
label_352da4:
    if (ctx->pc == 0x352DA4u) {
        ctx->pc = 0x352DA4u;
            // 0x352da4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x352DA8u;
        goto label_352da8;
    }
    ctx->pc = 0x352DA0u;
    {
        const bool branch_taken_0x352da0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x352DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352DA0u;
            // 0x352da4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352da0) {
            ctx->pc = 0x352EA0u;
            goto label_352ea0;
        }
    }
    ctx->pc = 0x352DA8u;
label_352da8:
    // 0x352da8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x352da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_352dac:
    // 0x352dac: 0x50a30039  beql        $a1, $v1, . + 4 + (0x39 << 2)
label_352db0:
    if (ctx->pc == 0x352DB0u) {
        ctx->pc = 0x352DB0u;
            // 0x352db0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x352DB4u;
        goto label_352db4;
    }
    ctx->pc = 0x352DACu;
    {
        const bool branch_taken_0x352dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x352dac) {
            ctx->pc = 0x352DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x352DACu;
            // 0x352db0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352E94u;
            goto label_352e94;
        }
    }
    ctx->pc = 0x352DB4u;
label_352db4:
    // 0x352db4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x352db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_352db8:
    // 0x352db8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_352dbc:
    if (ctx->pc == 0x352DBCu) {
        ctx->pc = 0x352DC0u;
        goto label_352dc0;
    }
    ctx->pc = 0x352DB8u;
    {
        const bool branch_taken_0x352db8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x352db8) {
            ctx->pc = 0x352DC8u;
            goto label_352dc8;
        }
    }
    ctx->pc = 0x352DC0u;
label_352dc0:
    // 0x352dc0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_352dc4:
    if (ctx->pc == 0x352DC4u) {
        ctx->pc = 0x352DC8u;
        goto label_352dc8;
    }
    ctx->pc = 0x352DC0u;
    {
        const bool branch_taken_0x352dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352dc0) {
            ctx->pc = 0x352F30u;
            goto label_352f30;
        }
    }
    ctx->pc = 0x352DC8u;
label_352dc8:
    // 0x352dc8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x352dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_352dcc:
    // 0x352dcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x352dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352dd0:
    // 0x352dd0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x352dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_352dd4:
    // 0x352dd4: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x352dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_352dd8:
    // 0x352dd8: 0x10640055  beq         $v1, $a0, . + 4 + (0x55 << 2)
label_352ddc:
    if (ctx->pc == 0x352DDCu) {
        ctx->pc = 0x352DE0u;
        goto label_352de0;
    }
    ctx->pc = 0x352DD8u;
    {
        const bool branch_taken_0x352dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x352dd8) {
            ctx->pc = 0x352F30u;
            goto label_352f30;
        }
    }
    ctx->pc = 0x352DE0u;
label_352de0:
    // 0x352de0: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x352de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_352de4:
    // 0x352de4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x352de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_352de8:
    // 0x352de8: 0x8c641718  lw          $a0, 0x1718($v1)
    ctx->pc = 0x352de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5912)));
label_352dec:
    // 0x352dec: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x352decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_352df0:
    // 0x352df0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x352df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_352df4:
    // 0x352df4: 0x802827  not         $a1, $a0
    ctx->pc = 0x352df4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_352df8:
    // 0x352df8: 0x8cc40090  lw          $a0, 0x90($a2)
    ctx->pc = 0x352df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
label_352dfc:
    // 0x352dfc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x352dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_352e00:
    // 0x352e00: 0xacc40090  sw          $a0, 0x90($a2)
    ctx->pc = 0x352e00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 4));
label_352e04:
    // 0x352e04: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x352e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_352e08:
    // 0x352e08: 0x8c631720  lw          $v1, 0x1720($v1)
    ctx->pc = 0x352e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5920)));
label_352e0c:
    // 0x352e0c: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x352e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_352e10:
    // 0x352e10: 0x602027  not         $a0, $v1
    ctx->pc = 0x352e10u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_352e14:
    // 0x352e14: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x352e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_352e18:
    // 0x352e18: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x352e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_352e1c:
    // 0x352e1c: 0xaca30090  sw          $v1, 0x90($a1)
    ctx->pc = 0x352e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
label_352e20:
    // 0x352e20: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x352e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_352e24:
    // 0x352e24: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x352e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_352e28:
    // 0x352e28: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x352e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_352e2c:
    // 0x352e2c: 0x24630056  addiu       $v1, $v1, 0x56
    ctx->pc = 0x352e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 86));
label_352e30:
    // 0x352e30: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x352e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
label_352e34:
    // 0x352e34: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x352e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_352e38:
    // 0x352e38: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x352e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_352e3c:
    // 0x352e3c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x352e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_352e40:
    // 0x352e40: 0x24630056  addiu       $v1, $v1, 0x56
    ctx->pc = 0x352e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 86));
label_352e44:
    // 0x352e44: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x352e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_352e48:
    // 0x352e48: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x352e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_352e4c:
    // 0x352e4c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x352e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_352e50:
    // 0x352e50: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x352e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_352e54:
    // 0x352e54: 0x24630056  addiu       $v1, $v1, 0x56
    ctx->pc = 0x352e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 86));
label_352e58:
    // 0x352e58: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x352e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_352e5c:
    // 0x352e5c: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x352e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_352e60:
    // 0x352e60: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x352e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_352e64:
    // 0x352e64: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x352e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_352e68:
    // 0x352e68: 0x24630056  addiu       $v1, $v1, 0x56
    ctx->pc = 0x352e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 86));
label_352e6c:
    // 0x352e6c: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x352e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_352e70:
    // 0x352e70: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x352e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_352e74:
    // 0x352e74: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x352e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_352e78:
    // 0x352e78: 0x246300ac  addiu       $v1, $v1, 0xAC
    ctx->pc = 0x352e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 172));
label_352e7c:
    // 0x352e7c: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x352e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_352e80:
    // 0x352e80: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x352e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_352e84:
    // 0x352e84: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x352e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_352e88:
    // 0x352e88: 0x246300ac  addiu       $v1, $v1, 0xAC
    ctx->pc = 0x352e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 172));
label_352e8c:
    // 0x352e8c: 0x10000028  b           . + 4 + (0x28 << 2)
label_352e90:
    if (ctx->pc == 0x352E90u) {
        ctx->pc = 0x352E90u;
            // 0x352e90: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x352E94u;
        goto label_352e94;
    }
    ctx->pc = 0x352E8Cu;
    {
        const bool branch_taken_0x352e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352E8Cu;
            // 0x352e90: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352e8c) {
            ctx->pc = 0x352F30u;
            goto label_352f30;
        }
    }
    ctx->pc = 0x352E94u;
label_352e94:
    // 0x352e94: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x352e94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_352e98:
    // 0x352e98: 0x320f809  jalr        $t9
label_352e9c:
    if (ctx->pc == 0x352E9Cu) {
        ctx->pc = 0x352EA0u;
        goto label_352ea0;
    }
    ctx->pc = 0x352E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x352EA0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x352EA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x352EA0u; }
            if (ctx->pc != 0x352EA0u) { return; }
        }
        }
    }
    ctx->pc = 0x352EA0u;
label_352ea0:
    // 0x352ea0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x352ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_352ea4:
    // 0x352ea4: 0x3c04449f  lui         $a0, 0x449F
    ctx->pc = 0x352ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17567 << 16));
label_352ea8:
    // 0x352ea8: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x352ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_352eac:
    // 0x352eac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_352eb0:
    // 0x352eb0: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x352eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_352eb4:
    // 0x352eb4: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x352eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_352eb8:
    // 0x352eb8: 0xc4a30018  lwc1        $f3, 0x18($a1)
    ctx->pc = 0x352eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_352ebc:
    // 0x352ebc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x352ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_352ec0:
    // 0x352ec0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x352ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_352ec4:
    // 0x352ec4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x352ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_352ec8:
    // 0x352ec8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x352ec8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_352ecc:
    // 0x352ecc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x352eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_352ed0:
    // 0x352ed0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x352ed0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_352ed4:
    // 0x352ed4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x352ed4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_352ed8:
    // 0x352ed8: 0x0  nop
    ctx->pc = 0x352ed8u;
    // NOP
label_352edc:
    // 0x352edc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x352edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_352ee0:
    // 0x352ee0: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x352ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_352ee4:
    // 0x352ee4: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x352ee4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_352ee8:
    // 0x352ee8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x352ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_352eec:
    // 0x352eec: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x352eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_352ef0:
    // 0x352ef0: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x352ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_352ef4:
    // 0x352ef4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x352ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_352ef8:
    // 0x352ef8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x352ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_352efc:
    // 0x352efc: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x352efcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_352f00:
    // 0x352f00: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_352f04:
    if (ctx->pc == 0x352F04u) {
        ctx->pc = 0x352F08u;
        goto label_352f08;
    }
    ctx->pc = 0x352F00u;
    {
        const bool branch_taken_0x352f00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x352f00) {
            ctx->pc = 0x352F30u;
            goto label_352f30;
        }
    }
    ctx->pc = 0x352F08u;
label_352f08:
    // 0x352f08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x352f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352f0c:
    // 0x352f0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x352f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352f10:
    // 0x352f10: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x352f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_352f14:
    // 0x352f14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x352f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_352f18:
    // 0x352f18: 0xc0d53b8  jal         func_354EE0
label_352f1c:
    if (ctx->pc == 0x352F1Cu) {
        ctx->pc = 0x352F1Cu;
            // 0x352f1c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x352F20u;
        goto label_352f20;
    }
    ctx->pc = 0x352F18u;
    SET_GPR_U32(ctx, 31, 0x352F20u);
    ctx->pc = 0x352F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352F18u;
            // 0x352f1c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x354EE0u;
    if (runtime->hasFunction(0x354EE0u)) {
        auto targetFn = runtime->lookupFunction(0x354EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352F20u; }
        if (ctx->pc != 0x352F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00354EE0_0x354ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352F20u; }
        if (ctx->pc != 0x352F20u) { return; }
    }
    ctx->pc = 0x352F20u;
label_352f20:
    // 0x352f20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x352f20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_352f24:
    // 0x352f24: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x352f24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_352f28:
    // 0x352f28: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_352f2c:
    if (ctx->pc == 0x352F2Cu) {
        ctx->pc = 0x352F2Cu;
            // 0x352f2c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x352F30u;
        goto label_352f30;
    }
    ctx->pc = 0x352F28u;
    {
        const bool branch_taken_0x352f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x352F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352F28u;
            // 0x352f2c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352f28) {
            ctx->pc = 0x352F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_352f10;
        }
    }
    ctx->pc = 0x352F30u;
label_352f30:
    // 0x352f30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x352f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_352f34:
    // 0x352f34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x352f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_352f38:
    // 0x352f38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x352f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_352f3c:
    // 0x352f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x352f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_352f40:
    // 0x352f40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x352f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_352f44:
    // 0x352f44: 0x3e00008  jr          $ra
label_352f48:
    if (ctx->pc == 0x352F48u) {
        ctx->pc = 0x352F48u;
            // 0x352f48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x352F4Cu;
        goto label_352f4c;
    }
    ctx->pc = 0x352F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352F44u;
            // 0x352f48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352F4Cu;
label_352f4c:
    // 0x352f4c: 0x0  nop
    ctx->pc = 0x352f4cu;
    // NOP
label_352f50:
    // 0x352f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x352f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_352f54:
    // 0x352f54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x352f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_352f58:
    // 0x352f58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x352f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_352f5c:
    // 0x352f5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x352f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_352f60:
    // 0x352f60: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x352f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_352f64:
    // 0x352f64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x352f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_352f68:
    // 0x352f68: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x352f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_352f6c:
    // 0x352f6c: 0x106000c4  beqz        $v1, . + 4 + (0xC4 << 2)
label_352f70:
    if (ctx->pc == 0x352F70u) {
        ctx->pc = 0x352F70u;
            // 0x352f70: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->pc = 0x352F74u;
        goto label_352f74;
    }
    ctx->pc = 0x352F6Cu;
    {
        const bool branch_taken_0x352f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352F6Cu;
            // 0x352f70: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352f6c) {
            ctx->pc = 0x353280u;
            goto label_353280;
        }
    }
    ctx->pc = 0x352F74u;
label_352f74:
    // 0x352f74: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x352f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_352f78:
    // 0x352f78: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x352f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_352f7c:
    // 0x352f7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x352f7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_352f80:
    // 0x352f80: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x352f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_352f84:
    // 0x352f84: 0x320f809  jalr        $t9
label_352f88:
    if (ctx->pc == 0x352F88u) {
        ctx->pc = 0x352F8Cu;
        goto label_352f8c;
    }
    ctx->pc = 0x352F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x352F8Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x352F8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x352F8Cu; }
            if (ctx->pc != 0x352F8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x352F8Cu;
label_352f8c:
    // 0x352f8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x352f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_352f90:
    // 0x352f90: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x352f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_352f94:
    // 0x352f94: 0xc075128  jal         func_1D44A0
label_352f98:
    if (ctx->pc == 0x352F98u) {
        ctx->pc = 0x352F98u;
            // 0x352f98: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x352F9Cu;
        goto label_352f9c;
    }
    ctx->pc = 0x352F94u;
    SET_GPR_U32(ctx, 31, 0x352F9Cu);
    ctx->pc = 0x352F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x352F94u;
            // 0x352f98: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352F9Cu; }
        if (ctx->pc != 0x352F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352F9Cu; }
        if (ctx->pc != 0x352F9Cu) { return; }
    }
    ctx->pc = 0x352F9Cu;
label_352f9c:
    // 0x352f9c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x352f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_352fa0:
    // 0x352fa0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x352fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_352fa4:
    // 0x352fa4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x352fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_352fa8:
    // 0x352fa8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x352fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_352fac:
    // 0x352fac: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x352facu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_352fb0:
    // 0x352fb0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_352fb4:
    if (ctx->pc == 0x352FB4u) {
        ctx->pc = 0x352FB4u;
            // 0x352fb4: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x352FB8u;
        goto label_352fb8;
    }
    ctx->pc = 0x352FB0u;
    {
        const bool branch_taken_0x352fb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x352fb0) {
            ctx->pc = 0x352FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x352FB0u;
            // 0x352fb4: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352FC4u;
            goto label_352fc4;
        }
    }
    ctx->pc = 0x352FB8u;
label_352fb8:
    // 0x352fb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x352fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_352fbc:
    // 0x352fbc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x352fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_352fc0:
    // 0x352fc0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x352fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_352fc4:
    // 0x352fc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x352fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_352fc8:
    // 0x352fc8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x352fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_352fcc:
    // 0x352fcc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x352fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_352fd0:
    // 0x352fd0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x352fd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_352fd4:
    // 0x352fd4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_352fd8:
    if (ctx->pc == 0x352FD8u) {
        ctx->pc = 0x352FD8u;
            // 0x352fd8: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x352FDCu;
        goto label_352fdc;
    }
    ctx->pc = 0x352FD4u;
    {
        const bool branch_taken_0x352fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x352fd4) {
            ctx->pc = 0x352FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x352FD4u;
            // 0x352fd8: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x352FE8u;
            goto label_352fe8;
        }
    }
    ctx->pc = 0x352FDCu;
label_352fdc:
    // 0x352fdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x352fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_352fe0:
    // 0x352fe0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x352fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_352fe4:
    // 0x352fe4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x352fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_352fe8:
    // 0x352fe8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x352fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_352fec:
    // 0x352fec: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x352fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_352ff0:
    // 0x352ff0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x352ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_352ff4:
    // 0x352ff4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x352ff4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_352ff8:
    // 0x352ff8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_352ffc:
    if (ctx->pc == 0x352FFCu) {
        ctx->pc = 0x352FFCu;
            // 0x352ffc: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x353000u;
        goto label_353000;
    }
    ctx->pc = 0x352FF8u;
    {
        const bool branch_taken_0x352ff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x352ff8) {
            ctx->pc = 0x352FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x352FF8u;
            // 0x352ffc: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35300Cu;
            goto label_35300c;
        }
    }
    ctx->pc = 0x353000u;
label_353000:
    // 0x353000: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x353000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_353004:
    // 0x353004: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x353004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_353008:
    // 0x353008: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x353008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_35300c:
    // 0x35300c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35300cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_353010:
    // 0x353010: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x353010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_353014:
    // 0x353014: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x353014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_353018:
    // 0x353018: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x353018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_35301c:
    // 0x35301c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x35301cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_353020:
    // 0x353020: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_353024:
    if (ctx->pc == 0x353024u) {
        ctx->pc = 0x353024u;
            // 0x353024: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x353028u;
        goto label_353028;
    }
    ctx->pc = 0x353020u;
    {
        const bool branch_taken_0x353020 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x353020) {
            ctx->pc = 0x353024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353020u;
            // 0x353024: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353034u;
            goto label_353034;
        }
    }
    ctx->pc = 0x353028u;
label_353028:
    // 0x353028: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x353028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35302c:
    // 0x35302c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x35302cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_353030:
    // 0x353030: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x353030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_353034:
    // 0x353034: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x353034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_353038:
    // 0x353038: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x353038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_35303c:
    // 0x35303c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x35303cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_353040:
    // 0x353040: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x353040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_353044:
    // 0x353044: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x353044u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_353048:
    // 0x353048: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35304c:
    if (ctx->pc == 0x35304Cu) {
        ctx->pc = 0x35304Cu;
            // 0x35304c: 0x8e45001c  lw          $a1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x353050u;
        goto label_353050;
    }
    ctx->pc = 0x353048u;
    {
        const bool branch_taken_0x353048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x353048) {
            ctx->pc = 0x35304Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353048u;
            // 0x35304c: 0x8e45001c  lw          $a1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35305Cu;
            goto label_35305c;
        }
    }
    ctx->pc = 0x353050u;
label_353050:
    // 0x353050: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x353050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_353054:
    // 0x353054: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x353054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_353058:
    // 0x353058: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x353058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_35305c:
    // 0x35305c: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x35305cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_353060:
    // 0x353060: 0xc0750c4  jal         func_1D4310
label_353064:
    if (ctx->pc == 0x353064u) {
        ctx->pc = 0x353064u;
            // 0x353064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x353068u;
        goto label_353068;
    }
    ctx->pc = 0x353060u;
    SET_GPR_U32(ctx, 31, 0x353068u);
    ctx->pc = 0x353064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353060u;
            // 0x353064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4310u;
    if (runtime->hasFunction(0x1D4310u)) {
        auto targetFn = runtime->lookupFunction(0x1D4310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353068u; }
        if (ctx->pc != 0x353068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4310_0x1d4310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353068u; }
        if (ctx->pc != 0x353068u) { return; }
    }
    ctx->pc = 0x353068u;
label_353068:
    // 0x353068: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x353068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35306c:
    // 0x35306c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35306cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_353070:
    // 0x353070: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x353070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_353074:
    // 0x353074: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x353074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_353078:
    // 0x353078: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x353078u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35307c:
    // 0x35307c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_353080:
    if (ctx->pc == 0x353080u) {
        ctx->pc = 0x353080u;
            // 0x353080: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x353084u;
        goto label_353084;
    }
    ctx->pc = 0x35307Cu;
    {
        const bool branch_taken_0x35307c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35307c) {
            ctx->pc = 0x353080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35307Cu;
            // 0x353080: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353090u;
            goto label_353090;
        }
    }
    ctx->pc = 0x353084u;
label_353084:
    // 0x353084: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x353084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_353088:
    // 0x353088: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x353088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_35308c:
    // 0x35308c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x35308cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_353090:
    // 0x353090: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x353090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_353094:
    // 0x353094: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x353094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_353098:
    // 0x353098: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x353098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_35309c:
    // 0x35309c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x35309cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3530a0:
    // 0x3530a0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3530a4:
    if (ctx->pc == 0x3530A4u) {
        ctx->pc = 0x3530A4u;
            // 0x3530a4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3530A8u;
        goto label_3530a8;
    }
    ctx->pc = 0x3530A0u;
    {
        const bool branch_taken_0x3530a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3530a0) {
            ctx->pc = 0x3530A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3530A0u;
            // 0x3530a4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3530B4u;
            goto label_3530b4;
        }
    }
    ctx->pc = 0x3530A8u;
label_3530a8:
    // 0x3530a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3530a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3530ac:
    // 0x3530ac: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3530acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3530b0:
    // 0x3530b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3530b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3530b4:
    // 0x3530b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3530b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3530b8:
    // 0x3530b8: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3530b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3530bc:
    // 0x3530bc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3530bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3530c0:
    // 0x3530c0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3530c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3530c4:
    // 0x3530c4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3530c8:
    if (ctx->pc == 0x3530C8u) {
        ctx->pc = 0x3530C8u;
            // 0x3530c8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3530CCu;
        goto label_3530cc;
    }
    ctx->pc = 0x3530C4u;
    {
        const bool branch_taken_0x3530c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3530c4) {
            ctx->pc = 0x3530C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3530C4u;
            // 0x3530c8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3530D8u;
            goto label_3530d8;
        }
    }
    ctx->pc = 0x3530CCu;
label_3530cc:
    // 0x3530cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3530ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3530d0:
    // 0x3530d0: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3530d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3530d4:
    // 0x3530d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3530d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3530d8:
    // 0x3530d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3530d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3530dc:
    // 0x3530dc: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3530dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3530e0:
    // 0x3530e0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3530e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3530e4:
    // 0x3530e4: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x3530e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3530e8:
    // 0x3530e8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3530e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3530ec:
    // 0x3530ec: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3530f0:
    if (ctx->pc == 0x3530F0u) {
        ctx->pc = 0x3530F0u;
            // 0x3530f0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3530F4u;
        goto label_3530f4;
    }
    ctx->pc = 0x3530ECu;
    {
        const bool branch_taken_0x3530ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3530ec) {
            ctx->pc = 0x3530F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3530ECu;
            // 0x3530f0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353100u;
            goto label_353100;
        }
    }
    ctx->pc = 0x3530F4u;
label_3530f4:
    // 0x3530f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3530f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3530f8:
    // 0x3530f8: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3530f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3530fc:
    // 0x3530fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3530fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_353100:
    // 0x353100: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x353100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_353104:
    // 0x353104: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x353104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_353108:
    // 0x353108: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x353108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_35310c:
    // 0x35310c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x35310cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_353110:
    // 0x353110: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x353110u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_353114:
    // 0x353114: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_353118:
    if (ctx->pc == 0x353118u) {
        ctx->pc = 0x353118u;
            // 0x353118: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->pc = 0x35311Cu;
        goto label_35311c;
    }
    ctx->pc = 0x353114u;
    {
        const bool branch_taken_0x353114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x353114) {
            ctx->pc = 0x353118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353114u;
            // 0x353118: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353128u;
            goto label_353128;
        }
    }
    ctx->pc = 0x35311Cu;
label_35311c:
    // 0x35311c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35311cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_353120:
    // 0x353120: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x353120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_353124:
    // 0x353124: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x353124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_353128:
    // 0x353128: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x353128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_35312c:
    // 0x35312c: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x35312cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
label_353130:
    // 0x353130: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x353130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_353134:
    // 0x353134: 0xc0750c4  jal         func_1D4310
label_353138:
    if (ctx->pc == 0x353138u) {
        ctx->pc = 0x353138u;
            // 0x353138: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x35313Cu;
        goto label_35313c;
    }
    ctx->pc = 0x353134u;
    SET_GPR_U32(ctx, 31, 0x35313Cu);
    ctx->pc = 0x353138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353134u;
            // 0x353138: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4310u;
    if (runtime->hasFunction(0x1D4310u)) {
        auto targetFn = runtime->lookupFunction(0x1D4310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35313Cu; }
        if (ctx->pc != 0x35313Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4310_0x1d4310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35313Cu; }
        if (ctx->pc != 0x35313Cu) { return; }
    }
    ctx->pc = 0x35313Cu;
label_35313c:
    // 0x35313c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x35313cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_353140:
    // 0x353140: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x353140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_353144:
    // 0x353144: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x353144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_353148:
    // 0x353148: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x353148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_35314c:
    // 0x35314c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x35314cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_353150:
    // 0x353150: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_353154:
    if (ctx->pc == 0x353154u) {
        ctx->pc = 0x353154u;
            // 0x353154: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x353158u;
        goto label_353158;
    }
    ctx->pc = 0x353150u;
    {
        const bool branch_taken_0x353150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x353150) {
            ctx->pc = 0x353154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353150u;
            // 0x353154: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353164u;
            goto label_353164;
        }
    }
    ctx->pc = 0x353158u;
label_353158:
    // 0x353158: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x353158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35315c:
    // 0x35315c: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x35315cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_353160:
    // 0x353160: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x353160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_353164:
    // 0x353164: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x353164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_353168:
    // 0x353168: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x353168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_35316c:
    // 0x35316c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x35316cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_353170:
    // 0x353170: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x353170u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_353174:
    // 0x353174: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_353178:
    if (ctx->pc == 0x353178u) {
        ctx->pc = 0x353178u;
            // 0x353178: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x35317Cu;
        goto label_35317c;
    }
    ctx->pc = 0x353174u;
    {
        const bool branch_taken_0x353174 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x353174) {
            ctx->pc = 0x353178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353174u;
            // 0x353178: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353188u;
            goto label_353188;
        }
    }
    ctx->pc = 0x35317Cu;
label_35317c:
    // 0x35317c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35317cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_353180:
    // 0x353180: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x353180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_353184:
    // 0x353184: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x353184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_353188:
    // 0x353188: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x353188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35318c:
    // 0x35318c: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x35318cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_353190:
    // 0x353190: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x353190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_353194:
    // 0x353194: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x353194u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_353198:
    // 0x353198: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35319c:
    if (ctx->pc == 0x35319Cu) {
        ctx->pc = 0x35319Cu;
            // 0x35319c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x3531A0u;
        goto label_3531a0;
    }
    ctx->pc = 0x353198u;
    {
        const bool branch_taken_0x353198 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x353198) {
            ctx->pc = 0x35319Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353198u;
            // 0x35319c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3531ACu;
            goto label_3531ac;
        }
    }
    ctx->pc = 0x3531A0u;
label_3531a0:
    // 0x3531a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3531a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3531a4:
    // 0x3531a4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3531a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3531a8:
    // 0x3531a8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3531a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3531ac:
    // 0x3531ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3531acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3531b0:
    // 0x3531b0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3531b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3531b4:
    // 0x3531b4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3531b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3531b8:
    // 0x3531b8: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x3531b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3531bc:
    // 0x3531bc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3531bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3531c0:
    // 0x3531c0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3531c4:
    if (ctx->pc == 0x3531C4u) {
        ctx->pc = 0x3531C4u;
            // 0x3531c4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x3531C8u;
        goto label_3531c8;
    }
    ctx->pc = 0x3531C0u;
    {
        const bool branch_taken_0x3531c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3531c0) {
            ctx->pc = 0x3531C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3531C0u;
            // 0x3531c4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3531D4u;
            goto label_3531d4;
        }
    }
    ctx->pc = 0x3531C8u;
label_3531c8:
    // 0x3531c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3531c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3531cc:
    // 0x3531cc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3531ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3531d0:
    // 0x3531d0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3531d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3531d4:
    // 0x3531d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3531d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3531d8:
    // 0x3531d8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3531d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3531dc:
    // 0x3531dc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3531dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3531e0:
    // 0x3531e0: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x3531e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3531e4:
    // 0x3531e4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3531e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3531e8:
    // 0x3531e8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3531ec:
    if (ctx->pc == 0x3531ECu) {
        ctx->pc = 0x3531ECu;
            // 0x3531ec: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x3531F0u;
        goto label_3531f0;
    }
    ctx->pc = 0x3531E8u;
    {
        const bool branch_taken_0x3531e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3531e8) {
            ctx->pc = 0x3531ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3531E8u;
            // 0x3531ec: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3531FCu;
            goto label_3531fc;
        }
    }
    ctx->pc = 0x3531F0u;
label_3531f0:
    // 0x3531f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3531f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3531f4:
    // 0x3531f4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3531f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3531f8:
    // 0x3531f8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3531f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3531fc:
    // 0x3531fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3531fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_353200:
    // 0x353200: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x353200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_353204:
    // 0x353204: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x353204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_353208:
    // 0x353208: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x353208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_35320c:
    // 0x35320c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x35320cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_353210:
    // 0x353210: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_353214:
    if (ctx->pc == 0x353214u) {
        ctx->pc = 0x353214u;
            // 0x353214: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x353218u;
        goto label_353218;
    }
    ctx->pc = 0x353210u;
    {
        const bool branch_taken_0x353210 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x353210) {
            ctx->pc = 0x353214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353210u;
            // 0x353214: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353224u;
            goto label_353224;
        }
    }
    ctx->pc = 0x353218u;
label_353218:
    // 0x353218: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x353218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35321c:
    // 0x35321c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x35321cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_353220:
    // 0x353220: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x353220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_353224:
    // 0x353224: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x353224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_353228:
    // 0x353228: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x353228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_35322c:
    // 0x35322c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x35322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_353230:
    // 0x353230: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x353230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_353234:
    // 0x353234: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x353234u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_353238:
    // 0x353238: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_35323c:
    if (ctx->pc == 0x35323Cu) {
        ctx->pc = 0x353240u;
        goto label_353240;
    }
    ctx->pc = 0x353238u;
    {
        const bool branch_taken_0x353238 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x353238) {
            ctx->pc = 0x353248u;
            goto label_353248;
        }
    }
    ctx->pc = 0x353240u;
label_353240:
    // 0x353240: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x353240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_353244:
    // 0x353244: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x353244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_353248:
    // 0x353248: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x353248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35324c:
    // 0x35324c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x35324cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_353250:
    // 0x353250: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x353250u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_353254:
    // 0x353254: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_353258:
    if (ctx->pc == 0x353258u) {
        ctx->pc = 0x35325Cu;
        goto label_35325c;
    }
    ctx->pc = 0x353254u;
    {
        const bool branch_taken_0x353254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x353254) {
            ctx->pc = 0x353264u;
            goto label_353264;
        }
    }
    ctx->pc = 0x35325Cu;
label_35325c:
    // 0x35325c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35325cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_353260:
    // 0x353260: 0xac70e3c8  sw          $s0, -0x1C38($v1)
    ctx->pc = 0x353260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 16));
label_353264:
    // 0x353264: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x353264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_353268:
    // 0x353268: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x353268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_35326c:
    // 0x35326c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x35326cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_353270:
    // 0x353270: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_353274:
    if (ctx->pc == 0x353274u) {
        ctx->pc = 0x353274u;
            // 0x353274: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x353278u;
        goto label_353278;
    }
    ctx->pc = 0x353270u;
    {
        const bool branch_taken_0x353270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x353270) {
            ctx->pc = 0x353274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x353270u;
            // 0x353274: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x353284u;
            goto label_353284;
        }
    }
    ctx->pc = 0x353278u;
label_353278:
    // 0x353278: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x353278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35327c:
    // 0x35327c: 0xac70e3d0  sw          $s0, -0x1C30($v1)
    ctx->pc = 0x35327cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 16));
label_353280:
    // 0x353280: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x353280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_353284:
    // 0x353284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x353284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_353288:
    // 0x353288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x353288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35328c:
    // 0x35328c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35328cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_353290:
    // 0x353290: 0x3e00008  jr          $ra
label_353294:
    if (ctx->pc == 0x353294u) {
        ctx->pc = 0x353294u;
            // 0x353294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x353298u;
        goto label_353298;
    }
    ctx->pc = 0x353290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353290u;
            // 0x353294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x353298u;
label_353298:
    // 0x353298: 0x0  nop
    ctx->pc = 0x353298u;
    // NOP
label_35329c:
    // 0x35329c: 0x0  nop
    ctx->pc = 0x35329cu;
    // NOP
label_3532a0:
    // 0x3532a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3532a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3532a4:
    // 0x3532a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3532a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3532a8:
    // 0x3532a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3532a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3532ac:
    // 0x3532ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3532acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3532b0:
    // 0x3532b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3532b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3532b4:
    // 0x3532b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3532b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3532b8:
    // 0x3532b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3532b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3532bc:
    // 0x3532bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3532bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3532c0:
    // 0x3532c0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3532c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3532c4:
    // 0x3532c4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3532c8:
    if (ctx->pc == 0x3532C8u) {
        ctx->pc = 0x3532C8u;
            // 0x3532c8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3532CCu;
        goto label_3532cc;
    }
    ctx->pc = 0x3532C4u;
    {
        const bool branch_taken_0x3532c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3532C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3532C4u;
            // 0x3532c8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3532c4) {
            ctx->pc = 0x353308u;
            goto label_353308;
        }
    }
    ctx->pc = 0x3532CCu;
label_3532cc:
    // 0x3532cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3532ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3532d0:
    // 0x3532d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3532d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3532d4:
    // 0x3532d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3532d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3532d8:
    // 0x3532d8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3532d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3532dc:
    // 0x3532dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3532dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3532e0:
    // 0x3532e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3532e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3532e4:
    // 0x3532e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3532e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3532e8:
    // 0x3532e8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3532e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3532ec:
    // 0x3532ec: 0x320f809  jalr        $t9
label_3532f0:
    if (ctx->pc == 0x3532F0u) {
        ctx->pc = 0x3532F4u;
        goto label_3532f4;
    }
    ctx->pc = 0x3532ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3532F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3532F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3532F4u; }
            if (ctx->pc != 0x3532F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3532F4u;
label_3532f4:
    // 0x3532f4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3532f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3532f8:
    // 0x3532f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3532f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3532fc:
    // 0x3532fc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3532fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_353300:
    // 0x353300: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_353304:
    if (ctx->pc == 0x353304u) {
        ctx->pc = 0x353304u;
            // 0x353304: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x353308u;
        goto label_353308;
    }
    ctx->pc = 0x353300u;
    {
        const bool branch_taken_0x353300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353300u;
            // 0x353304: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353300) {
            ctx->pc = 0x3532D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3532d8;
        }
    }
    ctx->pc = 0x353308u;
label_353308:
    // 0x353308: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x353308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35330c:
    // 0x35330c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x35330cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_353310:
    // 0x353310: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x353310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_353314:
    // 0x353314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x353314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_353318:
    // 0x353318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x353318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35331c:
    // 0x35331c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35331cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_353320:
    // 0x353320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x353320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_353324:
    // 0x353324: 0x3e00008  jr          $ra
label_353328:
    if (ctx->pc == 0x353328u) {
        ctx->pc = 0x353328u;
            // 0x353328: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x35332Cu;
        goto label_35332c;
    }
    ctx->pc = 0x353324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353324u;
            // 0x353328: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35332Cu;
label_35332c:
    // 0x35332c: 0x0  nop
    ctx->pc = 0x35332cu;
    // NOP
label_353330:
    // 0x353330: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x353330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_353334:
    // 0x353334: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x353334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_353338:
    // 0x353338: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x353338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_35333c:
    // 0x35333c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_353340:
    // 0x353340: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x353340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_353344:
    // 0x353344: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x353344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_353348:
    // 0x353348: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x353348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35334c:
    // 0x35334c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_353350:
    // 0x353350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x353350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_353354:
    // 0x353354: 0x8c920070  lw          $s2, 0x70($a0)
    ctx->pc = 0x353354u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_353358:
    // 0x353358: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
label_35335c:
    if (ctx->pc == 0x35335Cu) {
        ctx->pc = 0x35335Cu;
            // 0x35335c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x353360u;
        goto label_353360;
    }
    ctx->pc = 0x353358u;
    {
        const bool branch_taken_0x353358 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35335Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353358u;
            // 0x35335c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353358) {
            ctx->pc = 0x353428u;
            goto label_353428;
        }
    }
    ctx->pc = 0x353360u;
label_353360:
    // 0x353360: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x353360u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353364:
    // 0x353364: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x353364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353368:
    // 0x353368: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x353368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_35336c:
    // 0x35336c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x35336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_353370:
    // 0x353370: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x353370u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_353374:
    // 0x353374: 0xc0d4d3c  jal         func_3534F0
label_353378:
    if (ctx->pc == 0x353378u) {
        ctx->pc = 0x353378u;
            // 0x353378: 0x26840050  addiu       $a0, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->pc = 0x35337Cu;
        goto label_35337c;
    }
    ctx->pc = 0x353374u;
    SET_GPR_U32(ctx, 31, 0x35337Cu);
    ctx->pc = 0x353378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353374u;
            // 0x353378: 0x26840050  addiu       $a0, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3534F0u;
    if (runtime->hasFunction(0x3534F0u)) {
        auto targetFn = runtime->lookupFunction(0x3534F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35337Cu; }
        if (ctx->pc != 0x35337Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003534F0_0x3534f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35337Cu; }
        if (ctx->pc != 0x35337Cu) { return; }
    }
    ctx->pc = 0x35337Cu;
label_35337c:
    // 0x35337c: 0xc0d4b50  jal         func_352D40
label_353380:
    if (ctx->pc == 0x353380u) {
        ctx->pc = 0x353380u;
            // 0x353380: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x353384u;
        goto label_353384;
    }
    ctx->pc = 0x35337Cu;
    SET_GPR_U32(ctx, 31, 0x353384u);
    ctx->pc = 0x353380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35337Cu;
            // 0x353380: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352D40u;
    if (runtime->hasFunction(0x352D40u)) {
        auto targetFn = runtime->lookupFunction(0x352D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353384u; }
        if (ctx->pc != 0x353384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352D40_0x352d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x353384u; }
        if (ctx->pc != 0x353384u) { return; }
    }
    ctx->pc = 0x353384u;
label_353384:
    // 0x353384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x353384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_353388:
    // 0x353388: 0xc0d4b54  jal         func_352D50
label_35338c:
    if (ctx->pc == 0x35338Cu) {
        ctx->pc = 0x35338Cu;
            // 0x35338c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x353390u;
        goto label_353390;
    }
    ctx->pc = 0x353388u;
    SET_GPR_U32(ctx, 31, 0x353390u);
    ctx->pc = 0x35338Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353388u;
            // 0x35338c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352D50u;
    goto label_352d50;
    ctx->pc = 0x353390u;
label_353390:
    // 0x353390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_353394:
    // 0x353394: 0xc0d4d34  jal         func_3534D0
label_353398:
    if (ctx->pc == 0x353398u) {
        ctx->pc = 0x353398u;
            // 0x353398: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35339Cu;
        goto label_35339c;
    }
    ctx->pc = 0x353394u;
    SET_GPR_U32(ctx, 31, 0x35339Cu);
    ctx->pc = 0x353398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x353394u;
            // 0x353398: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3534D0u;
    if (runtime->hasFunction(0x3534D0u)) {
        auto targetFn = runtime->lookupFunction(0x3534D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35339Cu; }
        if (ctx->pc != 0x35339Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003534D0_0x3534d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35339Cu; }
        if (ctx->pc != 0x35339Cu) { return; }
    }
    ctx->pc = 0x35339Cu;
label_35339c:
    // 0x35339c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x35339cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3533a0:
    // 0x3533a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3533a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3533a4:
    // 0x3533a4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3533a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3533a8:
    // 0x3533a8: 0x320f809  jalr        $t9
label_3533ac:
    if (ctx->pc == 0x3533ACu) {
        ctx->pc = 0x3533ACu;
            // 0x3533ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3533B0u;
        goto label_3533b0;
    }
    ctx->pc = 0x3533A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3533B0u);
        ctx->pc = 0x3533ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3533A8u;
            // 0x3533ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3533B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3533B0u; }
            if (ctx->pc != 0x3533B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3533B0u;
label_3533b0:
    // 0x3533b0: 0xc0d4d3c  jal         func_3534F0
label_3533b4:
    if (ctx->pc == 0x3533B4u) {
        ctx->pc = 0x3533B4u;
            // 0x3533b4: 0x26840050  addiu       $a0, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->pc = 0x3533B8u;
        goto label_3533b8;
    }
    ctx->pc = 0x3533B0u;
    SET_GPR_U32(ctx, 31, 0x3533B8u);
    ctx->pc = 0x3533B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3533B0u;
            // 0x3533b4: 0x26840050  addiu       $a0, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3534F0u;
    if (runtime->hasFunction(0x3534F0u)) {
        auto targetFn = runtime->lookupFunction(0x3534F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3533B8u; }
        if (ctx->pc != 0x3533B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003534F0_0x3534f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3533B8u; }
        if (ctx->pc != 0x3533B8u) { return; }
    }
    ctx->pc = 0x3533B8u;
label_3533b8:
    // 0x3533b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3533b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3533bc:
    // 0x3533bc: 0xc0d4d1c  jal         func_353470
label_3533c0:
    if (ctx->pc == 0x3533C0u) {
        ctx->pc = 0x3533C0u;
            // 0x3533c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3533C4u;
        goto label_3533c4;
    }
    ctx->pc = 0x3533BCu;
    SET_GPR_U32(ctx, 31, 0x3533C4u);
    ctx->pc = 0x3533C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3533BCu;
            // 0x3533c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353470u;
    if (runtime->hasFunction(0x353470u)) {
        auto targetFn = runtime->lookupFunction(0x353470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3533C4u; }
        if (ctx->pc != 0x3533C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353470_0x353470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3533C4u; }
        if (ctx->pc != 0x3533C4u) { return; }
    }
    ctx->pc = 0x3533C4u;
label_3533c4:
    // 0x3533c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3533c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3533c8:
    // 0x3533c8: 0xc0d4d14  jal         func_353450
label_3533cc:
    if (ctx->pc == 0x3533CCu) {
        ctx->pc = 0x3533CCu;
            // 0x3533cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3533D0u;
        goto label_3533d0;
    }
    ctx->pc = 0x3533C8u;
    SET_GPR_U32(ctx, 31, 0x3533D0u);
    ctx->pc = 0x3533CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3533C8u;
            // 0x3533cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353450u;
    if (runtime->hasFunction(0x353450u)) {
        auto targetFn = runtime->lookupFunction(0x353450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3533D0u; }
        if (ctx->pc != 0x3533D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353450_0x353450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3533D0u; }
        if (ctx->pc != 0x3533D0u) { return; }
    }
    ctx->pc = 0x3533D0u;
label_3533d0:
    // 0x3533d0: 0xc0d4d3c  jal         func_3534F0
label_3533d4:
    if (ctx->pc == 0x3533D4u) {
        ctx->pc = 0x3533D4u;
            // 0x3533d4: 0x26840050  addiu       $a0, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->pc = 0x3533D8u;
        goto label_3533d8;
    }
    ctx->pc = 0x3533D0u;
    SET_GPR_U32(ctx, 31, 0x3533D8u);
    ctx->pc = 0x3533D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3533D0u;
            // 0x3533d4: 0x26840050  addiu       $a0, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3534F0u;
    if (runtime->hasFunction(0x3534F0u)) {
        auto targetFn = runtime->lookupFunction(0x3534F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3533D8u; }
        if (ctx->pc != 0x3533D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003534F0_0x3534f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3533D8u; }
        if (ctx->pc != 0x3533D8u) { return; }
    }
    ctx->pc = 0x3533D8u;
label_3533d8:
    // 0x3533d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3533d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3533dc:
    // 0x3533dc: 0xc0b6dd0  jal         func_2DB740
label_3533e0:
    if (ctx->pc == 0x3533E0u) {
        ctx->pc = 0x3533E0u;
            // 0x3533e0: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->pc = 0x3533E4u;
        goto label_3533e4;
    }
    ctx->pc = 0x3533DCu;
    SET_GPR_U32(ctx, 31, 0x3533E4u);
    ctx->pc = 0x3533E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3533DCu;
            // 0x3533e0: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB740u;
    if (runtime->hasFunction(0x2DB740u)) {
        auto targetFn = runtime->lookupFunction(0x2DB740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3533E4u; }
        if (ctx->pc != 0x3533E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB740_0x2db740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3533E4u; }
        if (ctx->pc != 0x3533E4u) { return; }
    }
    ctx->pc = 0x3533E4u;
label_3533e4:
    // 0x3533e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3533e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3533e8:
    // 0x3533e8: 0xc0d4d1c  jal         func_353470
label_3533ec:
    if (ctx->pc == 0x3533ECu) {
        ctx->pc = 0x3533ECu;
            // 0x3533ec: 0xae80006c  sw          $zero, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x3533F0u;
        goto label_3533f0;
    }
    ctx->pc = 0x3533E8u;
    SET_GPR_U32(ctx, 31, 0x3533F0u);
    ctx->pc = 0x3533ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3533E8u;
            // 0x3533ec: 0xae80006c  sw          $zero, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353470u;
    if (runtime->hasFunction(0x353470u)) {
        auto targetFn = runtime->lookupFunction(0x353470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3533F0u; }
        if (ctx->pc != 0x3533F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353470_0x353470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3533F0u; }
        if (ctx->pc != 0x3533F0u) { return; }
    }
    ctx->pc = 0x3533F0u;
label_3533f0:
    // 0x3533f0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_3533f4:
    if (ctx->pc == 0x3533F4u) {
        ctx->pc = 0x3533F4u;
            // 0x3533f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3533F8u;
        goto label_3533f8;
    }
    ctx->pc = 0x3533F0u;
    {
        const bool branch_taken_0x3533f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3533f0) {
            ctx->pc = 0x3533F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3533F0u;
            // 0x3533f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3533FCu;
            goto label_3533fc;
        }
    }
    ctx->pc = 0x3533F8u;
label_3533f8:
    // 0x3533f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3533f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3533fc:
    // 0x3533fc: 0xae830068  sw          $v1, 0x68($s4)
    ctx->pc = 0x3533fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 3));
label_353400:
    // 0x353400: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x353400u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_353404:
    // 0x353404: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x353404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_353408:
    // 0x353408: 0xae800094  sw          $zero, 0x94($s4)
    ctx->pc = 0x353408u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 0));
label_35340c:
    // 0x35340c: 0xae83009c  sw          $v1, 0x9C($s4)
    ctx->pc = 0x35340cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 3));
label_353410:
    // 0x353410: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x353410u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_353414:
    // 0x353414: 0xae800098  sw          $zero, 0x98($s4)
    ctx->pc = 0x353414u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 0));
label_353418:
    // 0x353418: 0x2b2182b  sltu        $v1, $s5, $s2
    ctx->pc = 0x353418u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_35341c:
    // 0x35341c: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_353420:
    if (ctx->pc == 0x353420u) {
        ctx->pc = 0x353420u;
            // 0x353420: 0xae800090  sw          $zero, 0x90($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 0));
        ctx->pc = 0x353424u;
        goto label_353424;
    }
    ctx->pc = 0x35341Cu;
    {
        const bool branch_taken_0x35341c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x353420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35341Cu;
            // 0x353420: 0xae800090  sw          $zero, 0x90($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35341c) {
            ctx->pc = 0x353368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_353368;
        }
    }
    ctx->pc = 0x353424u;
label_353424:
    // 0x353424: 0x0  nop
    ctx->pc = 0x353424u;
    // NOP
label_353428:
    // 0x353428: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x353428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_35342c:
    // 0x35342c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35342cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_353430:
    // 0x353430: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x353430u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_353434:
    // 0x353434: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x353434u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_353438:
    // 0x353438: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x353438u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35343c:
    // 0x35343c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35343cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_353440:
    // 0x353440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x353440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_353444:
    // 0x353444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x353444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_353448:
    // 0x353448: 0x3e00008  jr          $ra
label_35344c:
    if (ctx->pc == 0x35344Cu) {
        ctx->pc = 0x35344Cu;
            // 0x35344c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x353450u;
        goto label_fallthrough_0x353448;
    }
    ctx->pc = 0x353448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35344Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353448u;
            // 0x35344c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x353448:
    ctx->pc = 0x353450u;
}
