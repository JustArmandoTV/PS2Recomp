#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00262D80
// Address: 0x262d80 - 0x264540
void sub_00262D80_0x262d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262D80_0x262d80");
#endif

    switch (ctx->pc) {
        case 0x262d80u: goto label_262d80;
        case 0x262d84u: goto label_262d84;
        case 0x262d88u: goto label_262d88;
        case 0x262d8cu: goto label_262d8c;
        case 0x262d90u: goto label_262d90;
        case 0x262d94u: goto label_262d94;
        case 0x262d98u: goto label_262d98;
        case 0x262d9cu: goto label_262d9c;
        case 0x262da0u: goto label_262da0;
        case 0x262da4u: goto label_262da4;
        case 0x262da8u: goto label_262da8;
        case 0x262dacu: goto label_262dac;
        case 0x262db0u: goto label_262db0;
        case 0x262db4u: goto label_262db4;
        case 0x262db8u: goto label_262db8;
        case 0x262dbcu: goto label_262dbc;
        case 0x262dc0u: goto label_262dc0;
        case 0x262dc4u: goto label_262dc4;
        case 0x262dc8u: goto label_262dc8;
        case 0x262dccu: goto label_262dcc;
        case 0x262dd0u: goto label_262dd0;
        case 0x262dd4u: goto label_262dd4;
        case 0x262dd8u: goto label_262dd8;
        case 0x262ddcu: goto label_262ddc;
        case 0x262de0u: goto label_262de0;
        case 0x262de4u: goto label_262de4;
        case 0x262de8u: goto label_262de8;
        case 0x262decu: goto label_262dec;
        case 0x262df0u: goto label_262df0;
        case 0x262df4u: goto label_262df4;
        case 0x262df8u: goto label_262df8;
        case 0x262dfcu: goto label_262dfc;
        case 0x262e00u: goto label_262e00;
        case 0x262e04u: goto label_262e04;
        case 0x262e08u: goto label_262e08;
        case 0x262e0cu: goto label_262e0c;
        case 0x262e10u: goto label_262e10;
        case 0x262e14u: goto label_262e14;
        case 0x262e18u: goto label_262e18;
        case 0x262e1cu: goto label_262e1c;
        case 0x262e20u: goto label_262e20;
        case 0x262e24u: goto label_262e24;
        case 0x262e28u: goto label_262e28;
        case 0x262e2cu: goto label_262e2c;
        case 0x262e30u: goto label_262e30;
        case 0x262e34u: goto label_262e34;
        case 0x262e38u: goto label_262e38;
        case 0x262e3cu: goto label_262e3c;
        case 0x262e40u: goto label_262e40;
        case 0x262e44u: goto label_262e44;
        case 0x262e48u: goto label_262e48;
        case 0x262e4cu: goto label_262e4c;
        case 0x262e50u: goto label_262e50;
        case 0x262e54u: goto label_262e54;
        case 0x262e58u: goto label_262e58;
        case 0x262e5cu: goto label_262e5c;
        case 0x262e60u: goto label_262e60;
        case 0x262e64u: goto label_262e64;
        case 0x262e68u: goto label_262e68;
        case 0x262e6cu: goto label_262e6c;
        case 0x262e70u: goto label_262e70;
        case 0x262e74u: goto label_262e74;
        case 0x262e78u: goto label_262e78;
        case 0x262e7cu: goto label_262e7c;
        case 0x262e80u: goto label_262e80;
        case 0x262e84u: goto label_262e84;
        case 0x262e88u: goto label_262e88;
        case 0x262e8cu: goto label_262e8c;
        case 0x262e90u: goto label_262e90;
        case 0x262e94u: goto label_262e94;
        case 0x262e98u: goto label_262e98;
        case 0x262e9cu: goto label_262e9c;
        case 0x262ea0u: goto label_262ea0;
        case 0x262ea4u: goto label_262ea4;
        case 0x262ea8u: goto label_262ea8;
        case 0x262eacu: goto label_262eac;
        case 0x262eb0u: goto label_262eb0;
        case 0x262eb4u: goto label_262eb4;
        case 0x262eb8u: goto label_262eb8;
        case 0x262ebcu: goto label_262ebc;
        case 0x262ec0u: goto label_262ec0;
        case 0x262ec4u: goto label_262ec4;
        case 0x262ec8u: goto label_262ec8;
        case 0x262eccu: goto label_262ecc;
        case 0x262ed0u: goto label_262ed0;
        case 0x262ed4u: goto label_262ed4;
        case 0x262ed8u: goto label_262ed8;
        case 0x262edcu: goto label_262edc;
        case 0x262ee0u: goto label_262ee0;
        case 0x262ee4u: goto label_262ee4;
        case 0x262ee8u: goto label_262ee8;
        case 0x262eecu: goto label_262eec;
        case 0x262ef0u: goto label_262ef0;
        case 0x262ef4u: goto label_262ef4;
        case 0x262ef8u: goto label_262ef8;
        case 0x262efcu: goto label_262efc;
        case 0x262f00u: goto label_262f00;
        case 0x262f04u: goto label_262f04;
        case 0x262f08u: goto label_262f08;
        case 0x262f0cu: goto label_262f0c;
        case 0x262f10u: goto label_262f10;
        case 0x262f14u: goto label_262f14;
        case 0x262f18u: goto label_262f18;
        case 0x262f1cu: goto label_262f1c;
        case 0x262f20u: goto label_262f20;
        case 0x262f24u: goto label_262f24;
        case 0x262f28u: goto label_262f28;
        case 0x262f2cu: goto label_262f2c;
        case 0x262f30u: goto label_262f30;
        case 0x262f34u: goto label_262f34;
        case 0x262f38u: goto label_262f38;
        case 0x262f3cu: goto label_262f3c;
        case 0x262f40u: goto label_262f40;
        case 0x262f44u: goto label_262f44;
        case 0x262f48u: goto label_262f48;
        case 0x262f4cu: goto label_262f4c;
        case 0x262f50u: goto label_262f50;
        case 0x262f54u: goto label_262f54;
        case 0x262f58u: goto label_262f58;
        case 0x262f5cu: goto label_262f5c;
        case 0x262f60u: goto label_262f60;
        case 0x262f64u: goto label_262f64;
        case 0x262f68u: goto label_262f68;
        case 0x262f6cu: goto label_262f6c;
        case 0x262f70u: goto label_262f70;
        case 0x262f74u: goto label_262f74;
        case 0x262f78u: goto label_262f78;
        case 0x262f7cu: goto label_262f7c;
        case 0x262f80u: goto label_262f80;
        case 0x262f84u: goto label_262f84;
        case 0x262f88u: goto label_262f88;
        case 0x262f8cu: goto label_262f8c;
        case 0x262f90u: goto label_262f90;
        case 0x262f94u: goto label_262f94;
        case 0x262f98u: goto label_262f98;
        case 0x262f9cu: goto label_262f9c;
        case 0x262fa0u: goto label_262fa0;
        case 0x262fa4u: goto label_262fa4;
        case 0x262fa8u: goto label_262fa8;
        case 0x262facu: goto label_262fac;
        case 0x262fb0u: goto label_262fb0;
        case 0x262fb4u: goto label_262fb4;
        case 0x262fb8u: goto label_262fb8;
        case 0x262fbcu: goto label_262fbc;
        case 0x262fc0u: goto label_262fc0;
        case 0x262fc4u: goto label_262fc4;
        case 0x262fc8u: goto label_262fc8;
        case 0x262fccu: goto label_262fcc;
        case 0x262fd0u: goto label_262fd0;
        case 0x262fd4u: goto label_262fd4;
        case 0x262fd8u: goto label_262fd8;
        case 0x262fdcu: goto label_262fdc;
        case 0x262fe0u: goto label_262fe0;
        case 0x262fe4u: goto label_262fe4;
        case 0x262fe8u: goto label_262fe8;
        case 0x262fecu: goto label_262fec;
        case 0x262ff0u: goto label_262ff0;
        case 0x262ff4u: goto label_262ff4;
        case 0x262ff8u: goto label_262ff8;
        case 0x262ffcu: goto label_262ffc;
        case 0x263000u: goto label_263000;
        case 0x263004u: goto label_263004;
        case 0x263008u: goto label_263008;
        case 0x26300cu: goto label_26300c;
        case 0x263010u: goto label_263010;
        case 0x263014u: goto label_263014;
        case 0x263018u: goto label_263018;
        case 0x26301cu: goto label_26301c;
        case 0x263020u: goto label_263020;
        case 0x263024u: goto label_263024;
        case 0x263028u: goto label_263028;
        case 0x26302cu: goto label_26302c;
        case 0x263030u: goto label_263030;
        case 0x263034u: goto label_263034;
        case 0x263038u: goto label_263038;
        case 0x26303cu: goto label_26303c;
        case 0x263040u: goto label_263040;
        case 0x263044u: goto label_263044;
        case 0x263048u: goto label_263048;
        case 0x26304cu: goto label_26304c;
        case 0x263050u: goto label_263050;
        case 0x263054u: goto label_263054;
        case 0x263058u: goto label_263058;
        case 0x26305cu: goto label_26305c;
        case 0x263060u: goto label_263060;
        case 0x263064u: goto label_263064;
        case 0x263068u: goto label_263068;
        case 0x26306cu: goto label_26306c;
        case 0x263070u: goto label_263070;
        case 0x263074u: goto label_263074;
        case 0x263078u: goto label_263078;
        case 0x26307cu: goto label_26307c;
        case 0x263080u: goto label_263080;
        case 0x263084u: goto label_263084;
        case 0x263088u: goto label_263088;
        case 0x26308cu: goto label_26308c;
        case 0x263090u: goto label_263090;
        case 0x263094u: goto label_263094;
        case 0x263098u: goto label_263098;
        case 0x26309cu: goto label_26309c;
        case 0x2630a0u: goto label_2630a0;
        case 0x2630a4u: goto label_2630a4;
        case 0x2630a8u: goto label_2630a8;
        case 0x2630acu: goto label_2630ac;
        case 0x2630b0u: goto label_2630b0;
        case 0x2630b4u: goto label_2630b4;
        case 0x2630b8u: goto label_2630b8;
        case 0x2630bcu: goto label_2630bc;
        case 0x2630c0u: goto label_2630c0;
        case 0x2630c4u: goto label_2630c4;
        case 0x2630c8u: goto label_2630c8;
        case 0x2630ccu: goto label_2630cc;
        case 0x2630d0u: goto label_2630d0;
        case 0x2630d4u: goto label_2630d4;
        case 0x2630d8u: goto label_2630d8;
        case 0x2630dcu: goto label_2630dc;
        case 0x2630e0u: goto label_2630e0;
        case 0x2630e4u: goto label_2630e4;
        case 0x2630e8u: goto label_2630e8;
        case 0x2630ecu: goto label_2630ec;
        case 0x2630f0u: goto label_2630f0;
        case 0x2630f4u: goto label_2630f4;
        case 0x2630f8u: goto label_2630f8;
        case 0x2630fcu: goto label_2630fc;
        case 0x263100u: goto label_263100;
        case 0x263104u: goto label_263104;
        case 0x263108u: goto label_263108;
        case 0x26310cu: goto label_26310c;
        case 0x263110u: goto label_263110;
        case 0x263114u: goto label_263114;
        case 0x263118u: goto label_263118;
        case 0x26311cu: goto label_26311c;
        case 0x263120u: goto label_263120;
        case 0x263124u: goto label_263124;
        case 0x263128u: goto label_263128;
        case 0x26312cu: goto label_26312c;
        case 0x263130u: goto label_263130;
        case 0x263134u: goto label_263134;
        case 0x263138u: goto label_263138;
        case 0x26313cu: goto label_26313c;
        case 0x263140u: goto label_263140;
        case 0x263144u: goto label_263144;
        case 0x263148u: goto label_263148;
        case 0x26314cu: goto label_26314c;
        case 0x263150u: goto label_263150;
        case 0x263154u: goto label_263154;
        case 0x263158u: goto label_263158;
        case 0x26315cu: goto label_26315c;
        case 0x263160u: goto label_263160;
        case 0x263164u: goto label_263164;
        case 0x263168u: goto label_263168;
        case 0x26316cu: goto label_26316c;
        case 0x263170u: goto label_263170;
        case 0x263174u: goto label_263174;
        case 0x263178u: goto label_263178;
        case 0x26317cu: goto label_26317c;
        case 0x263180u: goto label_263180;
        case 0x263184u: goto label_263184;
        case 0x263188u: goto label_263188;
        case 0x26318cu: goto label_26318c;
        case 0x263190u: goto label_263190;
        case 0x263194u: goto label_263194;
        case 0x263198u: goto label_263198;
        case 0x26319cu: goto label_26319c;
        case 0x2631a0u: goto label_2631a0;
        case 0x2631a4u: goto label_2631a4;
        case 0x2631a8u: goto label_2631a8;
        case 0x2631acu: goto label_2631ac;
        case 0x2631b0u: goto label_2631b0;
        case 0x2631b4u: goto label_2631b4;
        case 0x2631b8u: goto label_2631b8;
        case 0x2631bcu: goto label_2631bc;
        case 0x2631c0u: goto label_2631c0;
        case 0x2631c4u: goto label_2631c4;
        case 0x2631c8u: goto label_2631c8;
        case 0x2631ccu: goto label_2631cc;
        case 0x2631d0u: goto label_2631d0;
        case 0x2631d4u: goto label_2631d4;
        case 0x2631d8u: goto label_2631d8;
        case 0x2631dcu: goto label_2631dc;
        case 0x2631e0u: goto label_2631e0;
        case 0x2631e4u: goto label_2631e4;
        case 0x2631e8u: goto label_2631e8;
        case 0x2631ecu: goto label_2631ec;
        case 0x2631f0u: goto label_2631f0;
        case 0x2631f4u: goto label_2631f4;
        case 0x2631f8u: goto label_2631f8;
        case 0x2631fcu: goto label_2631fc;
        case 0x263200u: goto label_263200;
        case 0x263204u: goto label_263204;
        case 0x263208u: goto label_263208;
        case 0x26320cu: goto label_26320c;
        case 0x263210u: goto label_263210;
        case 0x263214u: goto label_263214;
        case 0x263218u: goto label_263218;
        case 0x26321cu: goto label_26321c;
        case 0x263220u: goto label_263220;
        case 0x263224u: goto label_263224;
        case 0x263228u: goto label_263228;
        case 0x26322cu: goto label_26322c;
        case 0x263230u: goto label_263230;
        case 0x263234u: goto label_263234;
        case 0x263238u: goto label_263238;
        case 0x26323cu: goto label_26323c;
        case 0x263240u: goto label_263240;
        case 0x263244u: goto label_263244;
        case 0x263248u: goto label_263248;
        case 0x26324cu: goto label_26324c;
        case 0x263250u: goto label_263250;
        case 0x263254u: goto label_263254;
        case 0x263258u: goto label_263258;
        case 0x26325cu: goto label_26325c;
        case 0x263260u: goto label_263260;
        case 0x263264u: goto label_263264;
        case 0x263268u: goto label_263268;
        case 0x26326cu: goto label_26326c;
        case 0x263270u: goto label_263270;
        case 0x263274u: goto label_263274;
        case 0x263278u: goto label_263278;
        case 0x26327cu: goto label_26327c;
        case 0x263280u: goto label_263280;
        case 0x263284u: goto label_263284;
        case 0x263288u: goto label_263288;
        case 0x26328cu: goto label_26328c;
        case 0x263290u: goto label_263290;
        case 0x263294u: goto label_263294;
        case 0x263298u: goto label_263298;
        case 0x26329cu: goto label_26329c;
        case 0x2632a0u: goto label_2632a0;
        case 0x2632a4u: goto label_2632a4;
        case 0x2632a8u: goto label_2632a8;
        case 0x2632acu: goto label_2632ac;
        case 0x2632b0u: goto label_2632b0;
        case 0x2632b4u: goto label_2632b4;
        case 0x2632b8u: goto label_2632b8;
        case 0x2632bcu: goto label_2632bc;
        case 0x2632c0u: goto label_2632c0;
        case 0x2632c4u: goto label_2632c4;
        case 0x2632c8u: goto label_2632c8;
        case 0x2632ccu: goto label_2632cc;
        case 0x2632d0u: goto label_2632d0;
        case 0x2632d4u: goto label_2632d4;
        case 0x2632d8u: goto label_2632d8;
        case 0x2632dcu: goto label_2632dc;
        case 0x2632e0u: goto label_2632e0;
        case 0x2632e4u: goto label_2632e4;
        case 0x2632e8u: goto label_2632e8;
        case 0x2632ecu: goto label_2632ec;
        case 0x2632f0u: goto label_2632f0;
        case 0x2632f4u: goto label_2632f4;
        case 0x2632f8u: goto label_2632f8;
        case 0x2632fcu: goto label_2632fc;
        case 0x263300u: goto label_263300;
        case 0x263304u: goto label_263304;
        case 0x263308u: goto label_263308;
        case 0x26330cu: goto label_26330c;
        case 0x263310u: goto label_263310;
        case 0x263314u: goto label_263314;
        case 0x263318u: goto label_263318;
        case 0x26331cu: goto label_26331c;
        case 0x263320u: goto label_263320;
        case 0x263324u: goto label_263324;
        case 0x263328u: goto label_263328;
        case 0x26332cu: goto label_26332c;
        case 0x263330u: goto label_263330;
        case 0x263334u: goto label_263334;
        case 0x263338u: goto label_263338;
        case 0x26333cu: goto label_26333c;
        case 0x263340u: goto label_263340;
        case 0x263344u: goto label_263344;
        case 0x263348u: goto label_263348;
        case 0x26334cu: goto label_26334c;
        case 0x263350u: goto label_263350;
        case 0x263354u: goto label_263354;
        case 0x263358u: goto label_263358;
        case 0x26335cu: goto label_26335c;
        case 0x263360u: goto label_263360;
        case 0x263364u: goto label_263364;
        case 0x263368u: goto label_263368;
        case 0x26336cu: goto label_26336c;
        case 0x263370u: goto label_263370;
        case 0x263374u: goto label_263374;
        case 0x263378u: goto label_263378;
        case 0x26337cu: goto label_26337c;
        case 0x263380u: goto label_263380;
        case 0x263384u: goto label_263384;
        case 0x263388u: goto label_263388;
        case 0x26338cu: goto label_26338c;
        case 0x263390u: goto label_263390;
        case 0x263394u: goto label_263394;
        case 0x263398u: goto label_263398;
        case 0x26339cu: goto label_26339c;
        case 0x2633a0u: goto label_2633a0;
        case 0x2633a4u: goto label_2633a4;
        case 0x2633a8u: goto label_2633a8;
        case 0x2633acu: goto label_2633ac;
        case 0x2633b0u: goto label_2633b0;
        case 0x2633b4u: goto label_2633b4;
        case 0x2633b8u: goto label_2633b8;
        case 0x2633bcu: goto label_2633bc;
        case 0x2633c0u: goto label_2633c0;
        case 0x2633c4u: goto label_2633c4;
        case 0x2633c8u: goto label_2633c8;
        case 0x2633ccu: goto label_2633cc;
        case 0x2633d0u: goto label_2633d0;
        case 0x2633d4u: goto label_2633d4;
        case 0x2633d8u: goto label_2633d8;
        case 0x2633dcu: goto label_2633dc;
        case 0x2633e0u: goto label_2633e0;
        case 0x2633e4u: goto label_2633e4;
        case 0x2633e8u: goto label_2633e8;
        case 0x2633ecu: goto label_2633ec;
        case 0x2633f0u: goto label_2633f0;
        case 0x2633f4u: goto label_2633f4;
        case 0x2633f8u: goto label_2633f8;
        case 0x2633fcu: goto label_2633fc;
        case 0x263400u: goto label_263400;
        case 0x263404u: goto label_263404;
        case 0x263408u: goto label_263408;
        case 0x26340cu: goto label_26340c;
        case 0x263410u: goto label_263410;
        case 0x263414u: goto label_263414;
        case 0x263418u: goto label_263418;
        case 0x26341cu: goto label_26341c;
        case 0x263420u: goto label_263420;
        case 0x263424u: goto label_263424;
        case 0x263428u: goto label_263428;
        case 0x26342cu: goto label_26342c;
        case 0x263430u: goto label_263430;
        case 0x263434u: goto label_263434;
        case 0x263438u: goto label_263438;
        case 0x26343cu: goto label_26343c;
        case 0x263440u: goto label_263440;
        case 0x263444u: goto label_263444;
        case 0x263448u: goto label_263448;
        case 0x26344cu: goto label_26344c;
        case 0x263450u: goto label_263450;
        case 0x263454u: goto label_263454;
        case 0x263458u: goto label_263458;
        case 0x26345cu: goto label_26345c;
        case 0x263460u: goto label_263460;
        case 0x263464u: goto label_263464;
        case 0x263468u: goto label_263468;
        case 0x26346cu: goto label_26346c;
        case 0x263470u: goto label_263470;
        case 0x263474u: goto label_263474;
        case 0x263478u: goto label_263478;
        case 0x26347cu: goto label_26347c;
        case 0x263480u: goto label_263480;
        case 0x263484u: goto label_263484;
        case 0x263488u: goto label_263488;
        case 0x26348cu: goto label_26348c;
        case 0x263490u: goto label_263490;
        case 0x263494u: goto label_263494;
        case 0x263498u: goto label_263498;
        case 0x26349cu: goto label_26349c;
        case 0x2634a0u: goto label_2634a0;
        case 0x2634a4u: goto label_2634a4;
        case 0x2634a8u: goto label_2634a8;
        case 0x2634acu: goto label_2634ac;
        case 0x2634b0u: goto label_2634b0;
        case 0x2634b4u: goto label_2634b4;
        case 0x2634b8u: goto label_2634b8;
        case 0x2634bcu: goto label_2634bc;
        case 0x2634c0u: goto label_2634c0;
        case 0x2634c4u: goto label_2634c4;
        case 0x2634c8u: goto label_2634c8;
        case 0x2634ccu: goto label_2634cc;
        case 0x2634d0u: goto label_2634d0;
        case 0x2634d4u: goto label_2634d4;
        case 0x2634d8u: goto label_2634d8;
        case 0x2634dcu: goto label_2634dc;
        case 0x2634e0u: goto label_2634e0;
        case 0x2634e4u: goto label_2634e4;
        case 0x2634e8u: goto label_2634e8;
        case 0x2634ecu: goto label_2634ec;
        case 0x2634f0u: goto label_2634f0;
        case 0x2634f4u: goto label_2634f4;
        case 0x2634f8u: goto label_2634f8;
        case 0x2634fcu: goto label_2634fc;
        case 0x263500u: goto label_263500;
        case 0x263504u: goto label_263504;
        case 0x263508u: goto label_263508;
        case 0x26350cu: goto label_26350c;
        case 0x263510u: goto label_263510;
        case 0x263514u: goto label_263514;
        case 0x263518u: goto label_263518;
        case 0x26351cu: goto label_26351c;
        case 0x263520u: goto label_263520;
        case 0x263524u: goto label_263524;
        case 0x263528u: goto label_263528;
        case 0x26352cu: goto label_26352c;
        case 0x263530u: goto label_263530;
        case 0x263534u: goto label_263534;
        case 0x263538u: goto label_263538;
        case 0x26353cu: goto label_26353c;
        case 0x263540u: goto label_263540;
        case 0x263544u: goto label_263544;
        case 0x263548u: goto label_263548;
        case 0x26354cu: goto label_26354c;
        case 0x263550u: goto label_263550;
        case 0x263554u: goto label_263554;
        case 0x263558u: goto label_263558;
        case 0x26355cu: goto label_26355c;
        case 0x263560u: goto label_263560;
        case 0x263564u: goto label_263564;
        case 0x263568u: goto label_263568;
        case 0x26356cu: goto label_26356c;
        case 0x263570u: goto label_263570;
        case 0x263574u: goto label_263574;
        case 0x263578u: goto label_263578;
        case 0x26357cu: goto label_26357c;
        case 0x263580u: goto label_263580;
        case 0x263584u: goto label_263584;
        case 0x263588u: goto label_263588;
        case 0x26358cu: goto label_26358c;
        case 0x263590u: goto label_263590;
        case 0x263594u: goto label_263594;
        case 0x263598u: goto label_263598;
        case 0x26359cu: goto label_26359c;
        case 0x2635a0u: goto label_2635a0;
        case 0x2635a4u: goto label_2635a4;
        case 0x2635a8u: goto label_2635a8;
        case 0x2635acu: goto label_2635ac;
        case 0x2635b0u: goto label_2635b0;
        case 0x2635b4u: goto label_2635b4;
        case 0x2635b8u: goto label_2635b8;
        case 0x2635bcu: goto label_2635bc;
        case 0x2635c0u: goto label_2635c0;
        case 0x2635c4u: goto label_2635c4;
        case 0x2635c8u: goto label_2635c8;
        case 0x2635ccu: goto label_2635cc;
        case 0x2635d0u: goto label_2635d0;
        case 0x2635d4u: goto label_2635d4;
        case 0x2635d8u: goto label_2635d8;
        case 0x2635dcu: goto label_2635dc;
        case 0x2635e0u: goto label_2635e0;
        case 0x2635e4u: goto label_2635e4;
        case 0x2635e8u: goto label_2635e8;
        case 0x2635ecu: goto label_2635ec;
        case 0x2635f0u: goto label_2635f0;
        case 0x2635f4u: goto label_2635f4;
        case 0x2635f8u: goto label_2635f8;
        case 0x2635fcu: goto label_2635fc;
        case 0x263600u: goto label_263600;
        case 0x263604u: goto label_263604;
        case 0x263608u: goto label_263608;
        case 0x26360cu: goto label_26360c;
        case 0x263610u: goto label_263610;
        case 0x263614u: goto label_263614;
        case 0x263618u: goto label_263618;
        case 0x26361cu: goto label_26361c;
        case 0x263620u: goto label_263620;
        case 0x263624u: goto label_263624;
        case 0x263628u: goto label_263628;
        case 0x26362cu: goto label_26362c;
        case 0x263630u: goto label_263630;
        case 0x263634u: goto label_263634;
        case 0x263638u: goto label_263638;
        case 0x26363cu: goto label_26363c;
        case 0x263640u: goto label_263640;
        case 0x263644u: goto label_263644;
        case 0x263648u: goto label_263648;
        case 0x26364cu: goto label_26364c;
        case 0x263650u: goto label_263650;
        case 0x263654u: goto label_263654;
        case 0x263658u: goto label_263658;
        case 0x26365cu: goto label_26365c;
        case 0x263660u: goto label_263660;
        case 0x263664u: goto label_263664;
        case 0x263668u: goto label_263668;
        case 0x26366cu: goto label_26366c;
        case 0x263670u: goto label_263670;
        case 0x263674u: goto label_263674;
        case 0x263678u: goto label_263678;
        case 0x26367cu: goto label_26367c;
        case 0x263680u: goto label_263680;
        case 0x263684u: goto label_263684;
        case 0x263688u: goto label_263688;
        case 0x26368cu: goto label_26368c;
        case 0x263690u: goto label_263690;
        case 0x263694u: goto label_263694;
        case 0x263698u: goto label_263698;
        case 0x26369cu: goto label_26369c;
        case 0x2636a0u: goto label_2636a0;
        case 0x2636a4u: goto label_2636a4;
        case 0x2636a8u: goto label_2636a8;
        case 0x2636acu: goto label_2636ac;
        case 0x2636b0u: goto label_2636b0;
        case 0x2636b4u: goto label_2636b4;
        case 0x2636b8u: goto label_2636b8;
        case 0x2636bcu: goto label_2636bc;
        case 0x2636c0u: goto label_2636c0;
        case 0x2636c4u: goto label_2636c4;
        case 0x2636c8u: goto label_2636c8;
        case 0x2636ccu: goto label_2636cc;
        case 0x2636d0u: goto label_2636d0;
        case 0x2636d4u: goto label_2636d4;
        case 0x2636d8u: goto label_2636d8;
        case 0x2636dcu: goto label_2636dc;
        case 0x2636e0u: goto label_2636e0;
        case 0x2636e4u: goto label_2636e4;
        case 0x2636e8u: goto label_2636e8;
        case 0x2636ecu: goto label_2636ec;
        case 0x2636f0u: goto label_2636f0;
        case 0x2636f4u: goto label_2636f4;
        case 0x2636f8u: goto label_2636f8;
        case 0x2636fcu: goto label_2636fc;
        case 0x263700u: goto label_263700;
        case 0x263704u: goto label_263704;
        case 0x263708u: goto label_263708;
        case 0x26370cu: goto label_26370c;
        case 0x263710u: goto label_263710;
        case 0x263714u: goto label_263714;
        case 0x263718u: goto label_263718;
        case 0x26371cu: goto label_26371c;
        case 0x263720u: goto label_263720;
        case 0x263724u: goto label_263724;
        case 0x263728u: goto label_263728;
        case 0x26372cu: goto label_26372c;
        case 0x263730u: goto label_263730;
        case 0x263734u: goto label_263734;
        case 0x263738u: goto label_263738;
        case 0x26373cu: goto label_26373c;
        case 0x263740u: goto label_263740;
        case 0x263744u: goto label_263744;
        case 0x263748u: goto label_263748;
        case 0x26374cu: goto label_26374c;
        case 0x263750u: goto label_263750;
        case 0x263754u: goto label_263754;
        case 0x263758u: goto label_263758;
        case 0x26375cu: goto label_26375c;
        case 0x263760u: goto label_263760;
        case 0x263764u: goto label_263764;
        case 0x263768u: goto label_263768;
        case 0x26376cu: goto label_26376c;
        case 0x263770u: goto label_263770;
        case 0x263774u: goto label_263774;
        case 0x263778u: goto label_263778;
        case 0x26377cu: goto label_26377c;
        case 0x263780u: goto label_263780;
        case 0x263784u: goto label_263784;
        case 0x263788u: goto label_263788;
        case 0x26378cu: goto label_26378c;
        case 0x263790u: goto label_263790;
        case 0x263794u: goto label_263794;
        case 0x263798u: goto label_263798;
        case 0x26379cu: goto label_26379c;
        case 0x2637a0u: goto label_2637a0;
        case 0x2637a4u: goto label_2637a4;
        case 0x2637a8u: goto label_2637a8;
        case 0x2637acu: goto label_2637ac;
        case 0x2637b0u: goto label_2637b0;
        case 0x2637b4u: goto label_2637b4;
        case 0x2637b8u: goto label_2637b8;
        case 0x2637bcu: goto label_2637bc;
        case 0x2637c0u: goto label_2637c0;
        case 0x2637c4u: goto label_2637c4;
        case 0x2637c8u: goto label_2637c8;
        case 0x2637ccu: goto label_2637cc;
        case 0x2637d0u: goto label_2637d0;
        case 0x2637d4u: goto label_2637d4;
        case 0x2637d8u: goto label_2637d8;
        case 0x2637dcu: goto label_2637dc;
        case 0x2637e0u: goto label_2637e0;
        case 0x2637e4u: goto label_2637e4;
        case 0x2637e8u: goto label_2637e8;
        case 0x2637ecu: goto label_2637ec;
        case 0x2637f0u: goto label_2637f0;
        case 0x2637f4u: goto label_2637f4;
        case 0x2637f8u: goto label_2637f8;
        case 0x2637fcu: goto label_2637fc;
        case 0x263800u: goto label_263800;
        case 0x263804u: goto label_263804;
        case 0x263808u: goto label_263808;
        case 0x26380cu: goto label_26380c;
        case 0x263810u: goto label_263810;
        case 0x263814u: goto label_263814;
        case 0x263818u: goto label_263818;
        case 0x26381cu: goto label_26381c;
        case 0x263820u: goto label_263820;
        case 0x263824u: goto label_263824;
        case 0x263828u: goto label_263828;
        case 0x26382cu: goto label_26382c;
        case 0x263830u: goto label_263830;
        case 0x263834u: goto label_263834;
        case 0x263838u: goto label_263838;
        case 0x26383cu: goto label_26383c;
        case 0x263840u: goto label_263840;
        case 0x263844u: goto label_263844;
        case 0x263848u: goto label_263848;
        case 0x26384cu: goto label_26384c;
        case 0x263850u: goto label_263850;
        case 0x263854u: goto label_263854;
        case 0x263858u: goto label_263858;
        case 0x26385cu: goto label_26385c;
        case 0x263860u: goto label_263860;
        case 0x263864u: goto label_263864;
        case 0x263868u: goto label_263868;
        case 0x26386cu: goto label_26386c;
        case 0x263870u: goto label_263870;
        case 0x263874u: goto label_263874;
        case 0x263878u: goto label_263878;
        case 0x26387cu: goto label_26387c;
        case 0x263880u: goto label_263880;
        case 0x263884u: goto label_263884;
        case 0x263888u: goto label_263888;
        case 0x26388cu: goto label_26388c;
        case 0x263890u: goto label_263890;
        case 0x263894u: goto label_263894;
        case 0x263898u: goto label_263898;
        case 0x26389cu: goto label_26389c;
        case 0x2638a0u: goto label_2638a0;
        case 0x2638a4u: goto label_2638a4;
        case 0x2638a8u: goto label_2638a8;
        case 0x2638acu: goto label_2638ac;
        case 0x2638b0u: goto label_2638b0;
        case 0x2638b4u: goto label_2638b4;
        case 0x2638b8u: goto label_2638b8;
        case 0x2638bcu: goto label_2638bc;
        case 0x2638c0u: goto label_2638c0;
        case 0x2638c4u: goto label_2638c4;
        case 0x2638c8u: goto label_2638c8;
        case 0x2638ccu: goto label_2638cc;
        case 0x2638d0u: goto label_2638d0;
        case 0x2638d4u: goto label_2638d4;
        case 0x2638d8u: goto label_2638d8;
        case 0x2638dcu: goto label_2638dc;
        case 0x2638e0u: goto label_2638e0;
        case 0x2638e4u: goto label_2638e4;
        case 0x2638e8u: goto label_2638e8;
        case 0x2638ecu: goto label_2638ec;
        case 0x2638f0u: goto label_2638f0;
        case 0x2638f4u: goto label_2638f4;
        case 0x2638f8u: goto label_2638f8;
        case 0x2638fcu: goto label_2638fc;
        case 0x263900u: goto label_263900;
        case 0x263904u: goto label_263904;
        case 0x263908u: goto label_263908;
        case 0x26390cu: goto label_26390c;
        case 0x263910u: goto label_263910;
        case 0x263914u: goto label_263914;
        case 0x263918u: goto label_263918;
        case 0x26391cu: goto label_26391c;
        case 0x263920u: goto label_263920;
        case 0x263924u: goto label_263924;
        case 0x263928u: goto label_263928;
        case 0x26392cu: goto label_26392c;
        case 0x263930u: goto label_263930;
        case 0x263934u: goto label_263934;
        case 0x263938u: goto label_263938;
        case 0x26393cu: goto label_26393c;
        case 0x263940u: goto label_263940;
        case 0x263944u: goto label_263944;
        case 0x263948u: goto label_263948;
        case 0x26394cu: goto label_26394c;
        case 0x263950u: goto label_263950;
        case 0x263954u: goto label_263954;
        case 0x263958u: goto label_263958;
        case 0x26395cu: goto label_26395c;
        case 0x263960u: goto label_263960;
        case 0x263964u: goto label_263964;
        case 0x263968u: goto label_263968;
        case 0x26396cu: goto label_26396c;
        case 0x263970u: goto label_263970;
        case 0x263974u: goto label_263974;
        case 0x263978u: goto label_263978;
        case 0x26397cu: goto label_26397c;
        case 0x263980u: goto label_263980;
        case 0x263984u: goto label_263984;
        case 0x263988u: goto label_263988;
        case 0x26398cu: goto label_26398c;
        case 0x263990u: goto label_263990;
        case 0x263994u: goto label_263994;
        case 0x263998u: goto label_263998;
        case 0x26399cu: goto label_26399c;
        case 0x2639a0u: goto label_2639a0;
        case 0x2639a4u: goto label_2639a4;
        case 0x2639a8u: goto label_2639a8;
        case 0x2639acu: goto label_2639ac;
        case 0x2639b0u: goto label_2639b0;
        case 0x2639b4u: goto label_2639b4;
        case 0x2639b8u: goto label_2639b8;
        case 0x2639bcu: goto label_2639bc;
        case 0x2639c0u: goto label_2639c0;
        case 0x2639c4u: goto label_2639c4;
        case 0x2639c8u: goto label_2639c8;
        case 0x2639ccu: goto label_2639cc;
        case 0x2639d0u: goto label_2639d0;
        case 0x2639d4u: goto label_2639d4;
        case 0x2639d8u: goto label_2639d8;
        case 0x2639dcu: goto label_2639dc;
        case 0x2639e0u: goto label_2639e0;
        case 0x2639e4u: goto label_2639e4;
        case 0x2639e8u: goto label_2639e8;
        case 0x2639ecu: goto label_2639ec;
        case 0x2639f0u: goto label_2639f0;
        case 0x2639f4u: goto label_2639f4;
        case 0x2639f8u: goto label_2639f8;
        case 0x2639fcu: goto label_2639fc;
        case 0x263a00u: goto label_263a00;
        case 0x263a04u: goto label_263a04;
        case 0x263a08u: goto label_263a08;
        case 0x263a0cu: goto label_263a0c;
        case 0x263a10u: goto label_263a10;
        case 0x263a14u: goto label_263a14;
        case 0x263a18u: goto label_263a18;
        case 0x263a1cu: goto label_263a1c;
        case 0x263a20u: goto label_263a20;
        case 0x263a24u: goto label_263a24;
        case 0x263a28u: goto label_263a28;
        case 0x263a2cu: goto label_263a2c;
        case 0x263a30u: goto label_263a30;
        case 0x263a34u: goto label_263a34;
        case 0x263a38u: goto label_263a38;
        case 0x263a3cu: goto label_263a3c;
        case 0x263a40u: goto label_263a40;
        case 0x263a44u: goto label_263a44;
        case 0x263a48u: goto label_263a48;
        case 0x263a4cu: goto label_263a4c;
        case 0x263a50u: goto label_263a50;
        case 0x263a54u: goto label_263a54;
        case 0x263a58u: goto label_263a58;
        case 0x263a5cu: goto label_263a5c;
        case 0x263a60u: goto label_263a60;
        case 0x263a64u: goto label_263a64;
        case 0x263a68u: goto label_263a68;
        case 0x263a6cu: goto label_263a6c;
        case 0x263a70u: goto label_263a70;
        case 0x263a74u: goto label_263a74;
        case 0x263a78u: goto label_263a78;
        case 0x263a7cu: goto label_263a7c;
        case 0x263a80u: goto label_263a80;
        case 0x263a84u: goto label_263a84;
        case 0x263a88u: goto label_263a88;
        case 0x263a8cu: goto label_263a8c;
        case 0x263a90u: goto label_263a90;
        case 0x263a94u: goto label_263a94;
        case 0x263a98u: goto label_263a98;
        case 0x263a9cu: goto label_263a9c;
        case 0x263aa0u: goto label_263aa0;
        case 0x263aa4u: goto label_263aa4;
        case 0x263aa8u: goto label_263aa8;
        case 0x263aacu: goto label_263aac;
        case 0x263ab0u: goto label_263ab0;
        case 0x263ab4u: goto label_263ab4;
        case 0x263ab8u: goto label_263ab8;
        case 0x263abcu: goto label_263abc;
        case 0x263ac0u: goto label_263ac0;
        case 0x263ac4u: goto label_263ac4;
        case 0x263ac8u: goto label_263ac8;
        case 0x263accu: goto label_263acc;
        case 0x263ad0u: goto label_263ad0;
        case 0x263ad4u: goto label_263ad4;
        case 0x263ad8u: goto label_263ad8;
        case 0x263adcu: goto label_263adc;
        case 0x263ae0u: goto label_263ae0;
        case 0x263ae4u: goto label_263ae4;
        case 0x263ae8u: goto label_263ae8;
        case 0x263aecu: goto label_263aec;
        case 0x263af0u: goto label_263af0;
        case 0x263af4u: goto label_263af4;
        case 0x263af8u: goto label_263af8;
        case 0x263afcu: goto label_263afc;
        case 0x263b00u: goto label_263b00;
        case 0x263b04u: goto label_263b04;
        case 0x263b08u: goto label_263b08;
        case 0x263b0cu: goto label_263b0c;
        case 0x263b10u: goto label_263b10;
        case 0x263b14u: goto label_263b14;
        case 0x263b18u: goto label_263b18;
        case 0x263b1cu: goto label_263b1c;
        case 0x263b20u: goto label_263b20;
        case 0x263b24u: goto label_263b24;
        case 0x263b28u: goto label_263b28;
        case 0x263b2cu: goto label_263b2c;
        case 0x263b30u: goto label_263b30;
        case 0x263b34u: goto label_263b34;
        case 0x263b38u: goto label_263b38;
        case 0x263b3cu: goto label_263b3c;
        case 0x263b40u: goto label_263b40;
        case 0x263b44u: goto label_263b44;
        case 0x263b48u: goto label_263b48;
        case 0x263b4cu: goto label_263b4c;
        case 0x263b50u: goto label_263b50;
        case 0x263b54u: goto label_263b54;
        case 0x263b58u: goto label_263b58;
        case 0x263b5cu: goto label_263b5c;
        case 0x263b60u: goto label_263b60;
        case 0x263b64u: goto label_263b64;
        case 0x263b68u: goto label_263b68;
        case 0x263b6cu: goto label_263b6c;
        case 0x263b70u: goto label_263b70;
        case 0x263b74u: goto label_263b74;
        case 0x263b78u: goto label_263b78;
        case 0x263b7cu: goto label_263b7c;
        case 0x263b80u: goto label_263b80;
        case 0x263b84u: goto label_263b84;
        case 0x263b88u: goto label_263b88;
        case 0x263b8cu: goto label_263b8c;
        case 0x263b90u: goto label_263b90;
        case 0x263b94u: goto label_263b94;
        case 0x263b98u: goto label_263b98;
        case 0x263b9cu: goto label_263b9c;
        case 0x263ba0u: goto label_263ba0;
        case 0x263ba4u: goto label_263ba4;
        case 0x263ba8u: goto label_263ba8;
        case 0x263bacu: goto label_263bac;
        case 0x263bb0u: goto label_263bb0;
        case 0x263bb4u: goto label_263bb4;
        case 0x263bb8u: goto label_263bb8;
        case 0x263bbcu: goto label_263bbc;
        case 0x263bc0u: goto label_263bc0;
        case 0x263bc4u: goto label_263bc4;
        case 0x263bc8u: goto label_263bc8;
        case 0x263bccu: goto label_263bcc;
        case 0x263bd0u: goto label_263bd0;
        case 0x263bd4u: goto label_263bd4;
        case 0x263bd8u: goto label_263bd8;
        case 0x263bdcu: goto label_263bdc;
        case 0x263be0u: goto label_263be0;
        case 0x263be4u: goto label_263be4;
        case 0x263be8u: goto label_263be8;
        case 0x263becu: goto label_263bec;
        case 0x263bf0u: goto label_263bf0;
        case 0x263bf4u: goto label_263bf4;
        case 0x263bf8u: goto label_263bf8;
        case 0x263bfcu: goto label_263bfc;
        case 0x263c00u: goto label_263c00;
        case 0x263c04u: goto label_263c04;
        case 0x263c08u: goto label_263c08;
        case 0x263c0cu: goto label_263c0c;
        case 0x263c10u: goto label_263c10;
        case 0x263c14u: goto label_263c14;
        case 0x263c18u: goto label_263c18;
        case 0x263c1cu: goto label_263c1c;
        case 0x263c20u: goto label_263c20;
        case 0x263c24u: goto label_263c24;
        case 0x263c28u: goto label_263c28;
        case 0x263c2cu: goto label_263c2c;
        case 0x263c30u: goto label_263c30;
        case 0x263c34u: goto label_263c34;
        case 0x263c38u: goto label_263c38;
        case 0x263c3cu: goto label_263c3c;
        case 0x263c40u: goto label_263c40;
        case 0x263c44u: goto label_263c44;
        case 0x263c48u: goto label_263c48;
        case 0x263c4cu: goto label_263c4c;
        case 0x263c50u: goto label_263c50;
        case 0x263c54u: goto label_263c54;
        case 0x263c58u: goto label_263c58;
        case 0x263c5cu: goto label_263c5c;
        case 0x263c60u: goto label_263c60;
        case 0x263c64u: goto label_263c64;
        case 0x263c68u: goto label_263c68;
        case 0x263c6cu: goto label_263c6c;
        case 0x263c70u: goto label_263c70;
        case 0x263c74u: goto label_263c74;
        case 0x263c78u: goto label_263c78;
        case 0x263c7cu: goto label_263c7c;
        case 0x263c80u: goto label_263c80;
        case 0x263c84u: goto label_263c84;
        case 0x263c88u: goto label_263c88;
        case 0x263c8cu: goto label_263c8c;
        case 0x263c90u: goto label_263c90;
        case 0x263c94u: goto label_263c94;
        case 0x263c98u: goto label_263c98;
        case 0x263c9cu: goto label_263c9c;
        case 0x263ca0u: goto label_263ca0;
        case 0x263ca4u: goto label_263ca4;
        case 0x263ca8u: goto label_263ca8;
        case 0x263cacu: goto label_263cac;
        case 0x263cb0u: goto label_263cb0;
        case 0x263cb4u: goto label_263cb4;
        case 0x263cb8u: goto label_263cb8;
        case 0x263cbcu: goto label_263cbc;
        case 0x263cc0u: goto label_263cc0;
        case 0x263cc4u: goto label_263cc4;
        case 0x263cc8u: goto label_263cc8;
        case 0x263cccu: goto label_263ccc;
        case 0x263cd0u: goto label_263cd0;
        case 0x263cd4u: goto label_263cd4;
        case 0x263cd8u: goto label_263cd8;
        case 0x263cdcu: goto label_263cdc;
        case 0x263ce0u: goto label_263ce0;
        case 0x263ce4u: goto label_263ce4;
        case 0x263ce8u: goto label_263ce8;
        case 0x263cecu: goto label_263cec;
        case 0x263cf0u: goto label_263cf0;
        case 0x263cf4u: goto label_263cf4;
        case 0x263cf8u: goto label_263cf8;
        case 0x263cfcu: goto label_263cfc;
        case 0x263d00u: goto label_263d00;
        case 0x263d04u: goto label_263d04;
        case 0x263d08u: goto label_263d08;
        case 0x263d0cu: goto label_263d0c;
        case 0x263d10u: goto label_263d10;
        case 0x263d14u: goto label_263d14;
        case 0x263d18u: goto label_263d18;
        case 0x263d1cu: goto label_263d1c;
        case 0x263d20u: goto label_263d20;
        case 0x263d24u: goto label_263d24;
        case 0x263d28u: goto label_263d28;
        case 0x263d2cu: goto label_263d2c;
        case 0x263d30u: goto label_263d30;
        case 0x263d34u: goto label_263d34;
        case 0x263d38u: goto label_263d38;
        case 0x263d3cu: goto label_263d3c;
        case 0x263d40u: goto label_263d40;
        case 0x263d44u: goto label_263d44;
        case 0x263d48u: goto label_263d48;
        case 0x263d4cu: goto label_263d4c;
        case 0x263d50u: goto label_263d50;
        case 0x263d54u: goto label_263d54;
        case 0x263d58u: goto label_263d58;
        case 0x263d5cu: goto label_263d5c;
        case 0x263d60u: goto label_263d60;
        case 0x263d64u: goto label_263d64;
        case 0x263d68u: goto label_263d68;
        case 0x263d6cu: goto label_263d6c;
        case 0x263d70u: goto label_263d70;
        case 0x263d74u: goto label_263d74;
        case 0x263d78u: goto label_263d78;
        case 0x263d7cu: goto label_263d7c;
        case 0x263d80u: goto label_263d80;
        case 0x263d84u: goto label_263d84;
        case 0x263d88u: goto label_263d88;
        case 0x263d8cu: goto label_263d8c;
        case 0x263d90u: goto label_263d90;
        case 0x263d94u: goto label_263d94;
        case 0x263d98u: goto label_263d98;
        case 0x263d9cu: goto label_263d9c;
        case 0x263da0u: goto label_263da0;
        case 0x263da4u: goto label_263da4;
        case 0x263da8u: goto label_263da8;
        case 0x263dacu: goto label_263dac;
        case 0x263db0u: goto label_263db0;
        case 0x263db4u: goto label_263db4;
        case 0x263db8u: goto label_263db8;
        case 0x263dbcu: goto label_263dbc;
        case 0x263dc0u: goto label_263dc0;
        case 0x263dc4u: goto label_263dc4;
        case 0x263dc8u: goto label_263dc8;
        case 0x263dccu: goto label_263dcc;
        case 0x263dd0u: goto label_263dd0;
        case 0x263dd4u: goto label_263dd4;
        case 0x263dd8u: goto label_263dd8;
        case 0x263ddcu: goto label_263ddc;
        case 0x263de0u: goto label_263de0;
        case 0x263de4u: goto label_263de4;
        case 0x263de8u: goto label_263de8;
        case 0x263decu: goto label_263dec;
        case 0x263df0u: goto label_263df0;
        case 0x263df4u: goto label_263df4;
        case 0x263df8u: goto label_263df8;
        case 0x263dfcu: goto label_263dfc;
        case 0x263e00u: goto label_263e00;
        case 0x263e04u: goto label_263e04;
        case 0x263e08u: goto label_263e08;
        case 0x263e0cu: goto label_263e0c;
        case 0x263e10u: goto label_263e10;
        case 0x263e14u: goto label_263e14;
        case 0x263e18u: goto label_263e18;
        case 0x263e1cu: goto label_263e1c;
        case 0x263e20u: goto label_263e20;
        case 0x263e24u: goto label_263e24;
        case 0x263e28u: goto label_263e28;
        case 0x263e2cu: goto label_263e2c;
        case 0x263e30u: goto label_263e30;
        case 0x263e34u: goto label_263e34;
        case 0x263e38u: goto label_263e38;
        case 0x263e3cu: goto label_263e3c;
        case 0x263e40u: goto label_263e40;
        case 0x263e44u: goto label_263e44;
        case 0x263e48u: goto label_263e48;
        case 0x263e4cu: goto label_263e4c;
        case 0x263e50u: goto label_263e50;
        case 0x263e54u: goto label_263e54;
        case 0x263e58u: goto label_263e58;
        case 0x263e5cu: goto label_263e5c;
        case 0x263e60u: goto label_263e60;
        case 0x263e64u: goto label_263e64;
        case 0x263e68u: goto label_263e68;
        case 0x263e6cu: goto label_263e6c;
        case 0x263e70u: goto label_263e70;
        case 0x263e74u: goto label_263e74;
        case 0x263e78u: goto label_263e78;
        case 0x263e7cu: goto label_263e7c;
        case 0x263e80u: goto label_263e80;
        case 0x263e84u: goto label_263e84;
        case 0x263e88u: goto label_263e88;
        case 0x263e8cu: goto label_263e8c;
        case 0x263e90u: goto label_263e90;
        case 0x263e94u: goto label_263e94;
        case 0x263e98u: goto label_263e98;
        case 0x263e9cu: goto label_263e9c;
        case 0x263ea0u: goto label_263ea0;
        case 0x263ea4u: goto label_263ea4;
        case 0x263ea8u: goto label_263ea8;
        case 0x263eacu: goto label_263eac;
        case 0x263eb0u: goto label_263eb0;
        case 0x263eb4u: goto label_263eb4;
        case 0x263eb8u: goto label_263eb8;
        case 0x263ebcu: goto label_263ebc;
        case 0x263ec0u: goto label_263ec0;
        case 0x263ec4u: goto label_263ec4;
        case 0x263ec8u: goto label_263ec8;
        case 0x263eccu: goto label_263ecc;
        case 0x263ed0u: goto label_263ed0;
        case 0x263ed4u: goto label_263ed4;
        case 0x263ed8u: goto label_263ed8;
        case 0x263edcu: goto label_263edc;
        case 0x263ee0u: goto label_263ee0;
        case 0x263ee4u: goto label_263ee4;
        case 0x263ee8u: goto label_263ee8;
        case 0x263eecu: goto label_263eec;
        case 0x263ef0u: goto label_263ef0;
        case 0x263ef4u: goto label_263ef4;
        case 0x263ef8u: goto label_263ef8;
        case 0x263efcu: goto label_263efc;
        case 0x263f00u: goto label_263f00;
        case 0x263f04u: goto label_263f04;
        case 0x263f08u: goto label_263f08;
        case 0x263f0cu: goto label_263f0c;
        case 0x263f10u: goto label_263f10;
        case 0x263f14u: goto label_263f14;
        case 0x263f18u: goto label_263f18;
        case 0x263f1cu: goto label_263f1c;
        case 0x263f20u: goto label_263f20;
        case 0x263f24u: goto label_263f24;
        case 0x263f28u: goto label_263f28;
        case 0x263f2cu: goto label_263f2c;
        case 0x263f30u: goto label_263f30;
        case 0x263f34u: goto label_263f34;
        case 0x263f38u: goto label_263f38;
        case 0x263f3cu: goto label_263f3c;
        case 0x263f40u: goto label_263f40;
        case 0x263f44u: goto label_263f44;
        case 0x263f48u: goto label_263f48;
        case 0x263f4cu: goto label_263f4c;
        case 0x263f50u: goto label_263f50;
        case 0x263f54u: goto label_263f54;
        case 0x263f58u: goto label_263f58;
        case 0x263f5cu: goto label_263f5c;
        case 0x263f60u: goto label_263f60;
        case 0x263f64u: goto label_263f64;
        case 0x263f68u: goto label_263f68;
        case 0x263f6cu: goto label_263f6c;
        case 0x263f70u: goto label_263f70;
        case 0x263f74u: goto label_263f74;
        case 0x263f78u: goto label_263f78;
        case 0x263f7cu: goto label_263f7c;
        case 0x263f80u: goto label_263f80;
        case 0x263f84u: goto label_263f84;
        case 0x263f88u: goto label_263f88;
        case 0x263f8cu: goto label_263f8c;
        case 0x263f90u: goto label_263f90;
        case 0x263f94u: goto label_263f94;
        case 0x263f98u: goto label_263f98;
        case 0x263f9cu: goto label_263f9c;
        case 0x263fa0u: goto label_263fa0;
        case 0x263fa4u: goto label_263fa4;
        case 0x263fa8u: goto label_263fa8;
        case 0x263facu: goto label_263fac;
        case 0x263fb0u: goto label_263fb0;
        case 0x263fb4u: goto label_263fb4;
        case 0x263fb8u: goto label_263fb8;
        case 0x263fbcu: goto label_263fbc;
        case 0x263fc0u: goto label_263fc0;
        case 0x263fc4u: goto label_263fc4;
        case 0x263fc8u: goto label_263fc8;
        case 0x263fccu: goto label_263fcc;
        case 0x263fd0u: goto label_263fd0;
        case 0x263fd4u: goto label_263fd4;
        case 0x263fd8u: goto label_263fd8;
        case 0x263fdcu: goto label_263fdc;
        case 0x263fe0u: goto label_263fe0;
        case 0x263fe4u: goto label_263fe4;
        case 0x263fe8u: goto label_263fe8;
        case 0x263fecu: goto label_263fec;
        case 0x263ff0u: goto label_263ff0;
        case 0x263ff4u: goto label_263ff4;
        case 0x263ff8u: goto label_263ff8;
        case 0x263ffcu: goto label_263ffc;
        case 0x264000u: goto label_264000;
        case 0x264004u: goto label_264004;
        case 0x264008u: goto label_264008;
        case 0x26400cu: goto label_26400c;
        case 0x264010u: goto label_264010;
        case 0x264014u: goto label_264014;
        case 0x264018u: goto label_264018;
        case 0x26401cu: goto label_26401c;
        case 0x264020u: goto label_264020;
        case 0x264024u: goto label_264024;
        case 0x264028u: goto label_264028;
        case 0x26402cu: goto label_26402c;
        case 0x264030u: goto label_264030;
        case 0x264034u: goto label_264034;
        case 0x264038u: goto label_264038;
        case 0x26403cu: goto label_26403c;
        case 0x264040u: goto label_264040;
        case 0x264044u: goto label_264044;
        case 0x264048u: goto label_264048;
        case 0x26404cu: goto label_26404c;
        case 0x264050u: goto label_264050;
        case 0x264054u: goto label_264054;
        case 0x264058u: goto label_264058;
        case 0x26405cu: goto label_26405c;
        case 0x264060u: goto label_264060;
        case 0x264064u: goto label_264064;
        case 0x264068u: goto label_264068;
        case 0x26406cu: goto label_26406c;
        case 0x264070u: goto label_264070;
        case 0x264074u: goto label_264074;
        case 0x264078u: goto label_264078;
        case 0x26407cu: goto label_26407c;
        case 0x264080u: goto label_264080;
        case 0x264084u: goto label_264084;
        case 0x264088u: goto label_264088;
        case 0x26408cu: goto label_26408c;
        case 0x264090u: goto label_264090;
        case 0x264094u: goto label_264094;
        case 0x264098u: goto label_264098;
        case 0x26409cu: goto label_26409c;
        case 0x2640a0u: goto label_2640a0;
        case 0x2640a4u: goto label_2640a4;
        case 0x2640a8u: goto label_2640a8;
        case 0x2640acu: goto label_2640ac;
        case 0x2640b0u: goto label_2640b0;
        case 0x2640b4u: goto label_2640b4;
        case 0x2640b8u: goto label_2640b8;
        case 0x2640bcu: goto label_2640bc;
        case 0x2640c0u: goto label_2640c0;
        case 0x2640c4u: goto label_2640c4;
        case 0x2640c8u: goto label_2640c8;
        case 0x2640ccu: goto label_2640cc;
        case 0x2640d0u: goto label_2640d0;
        case 0x2640d4u: goto label_2640d4;
        case 0x2640d8u: goto label_2640d8;
        case 0x2640dcu: goto label_2640dc;
        case 0x2640e0u: goto label_2640e0;
        case 0x2640e4u: goto label_2640e4;
        case 0x2640e8u: goto label_2640e8;
        case 0x2640ecu: goto label_2640ec;
        case 0x2640f0u: goto label_2640f0;
        case 0x2640f4u: goto label_2640f4;
        case 0x2640f8u: goto label_2640f8;
        case 0x2640fcu: goto label_2640fc;
        case 0x264100u: goto label_264100;
        case 0x264104u: goto label_264104;
        case 0x264108u: goto label_264108;
        case 0x26410cu: goto label_26410c;
        case 0x264110u: goto label_264110;
        case 0x264114u: goto label_264114;
        case 0x264118u: goto label_264118;
        case 0x26411cu: goto label_26411c;
        case 0x264120u: goto label_264120;
        case 0x264124u: goto label_264124;
        case 0x264128u: goto label_264128;
        case 0x26412cu: goto label_26412c;
        case 0x264130u: goto label_264130;
        case 0x264134u: goto label_264134;
        case 0x264138u: goto label_264138;
        case 0x26413cu: goto label_26413c;
        case 0x264140u: goto label_264140;
        case 0x264144u: goto label_264144;
        case 0x264148u: goto label_264148;
        case 0x26414cu: goto label_26414c;
        case 0x264150u: goto label_264150;
        case 0x264154u: goto label_264154;
        case 0x264158u: goto label_264158;
        case 0x26415cu: goto label_26415c;
        case 0x264160u: goto label_264160;
        case 0x264164u: goto label_264164;
        case 0x264168u: goto label_264168;
        case 0x26416cu: goto label_26416c;
        case 0x264170u: goto label_264170;
        case 0x264174u: goto label_264174;
        case 0x264178u: goto label_264178;
        case 0x26417cu: goto label_26417c;
        case 0x264180u: goto label_264180;
        case 0x264184u: goto label_264184;
        case 0x264188u: goto label_264188;
        case 0x26418cu: goto label_26418c;
        case 0x264190u: goto label_264190;
        case 0x264194u: goto label_264194;
        case 0x264198u: goto label_264198;
        case 0x26419cu: goto label_26419c;
        case 0x2641a0u: goto label_2641a0;
        case 0x2641a4u: goto label_2641a4;
        case 0x2641a8u: goto label_2641a8;
        case 0x2641acu: goto label_2641ac;
        case 0x2641b0u: goto label_2641b0;
        case 0x2641b4u: goto label_2641b4;
        case 0x2641b8u: goto label_2641b8;
        case 0x2641bcu: goto label_2641bc;
        case 0x2641c0u: goto label_2641c0;
        case 0x2641c4u: goto label_2641c4;
        case 0x2641c8u: goto label_2641c8;
        case 0x2641ccu: goto label_2641cc;
        case 0x2641d0u: goto label_2641d0;
        case 0x2641d4u: goto label_2641d4;
        case 0x2641d8u: goto label_2641d8;
        case 0x2641dcu: goto label_2641dc;
        case 0x2641e0u: goto label_2641e0;
        case 0x2641e4u: goto label_2641e4;
        case 0x2641e8u: goto label_2641e8;
        case 0x2641ecu: goto label_2641ec;
        case 0x2641f0u: goto label_2641f0;
        case 0x2641f4u: goto label_2641f4;
        case 0x2641f8u: goto label_2641f8;
        case 0x2641fcu: goto label_2641fc;
        case 0x264200u: goto label_264200;
        case 0x264204u: goto label_264204;
        case 0x264208u: goto label_264208;
        case 0x26420cu: goto label_26420c;
        case 0x264210u: goto label_264210;
        case 0x264214u: goto label_264214;
        case 0x264218u: goto label_264218;
        case 0x26421cu: goto label_26421c;
        case 0x264220u: goto label_264220;
        case 0x264224u: goto label_264224;
        case 0x264228u: goto label_264228;
        case 0x26422cu: goto label_26422c;
        case 0x264230u: goto label_264230;
        case 0x264234u: goto label_264234;
        case 0x264238u: goto label_264238;
        case 0x26423cu: goto label_26423c;
        case 0x264240u: goto label_264240;
        case 0x264244u: goto label_264244;
        case 0x264248u: goto label_264248;
        case 0x26424cu: goto label_26424c;
        case 0x264250u: goto label_264250;
        case 0x264254u: goto label_264254;
        case 0x264258u: goto label_264258;
        case 0x26425cu: goto label_26425c;
        case 0x264260u: goto label_264260;
        case 0x264264u: goto label_264264;
        case 0x264268u: goto label_264268;
        case 0x26426cu: goto label_26426c;
        case 0x264270u: goto label_264270;
        case 0x264274u: goto label_264274;
        case 0x264278u: goto label_264278;
        case 0x26427cu: goto label_26427c;
        case 0x264280u: goto label_264280;
        case 0x264284u: goto label_264284;
        case 0x264288u: goto label_264288;
        case 0x26428cu: goto label_26428c;
        case 0x264290u: goto label_264290;
        case 0x264294u: goto label_264294;
        case 0x264298u: goto label_264298;
        case 0x26429cu: goto label_26429c;
        case 0x2642a0u: goto label_2642a0;
        case 0x2642a4u: goto label_2642a4;
        case 0x2642a8u: goto label_2642a8;
        case 0x2642acu: goto label_2642ac;
        case 0x2642b0u: goto label_2642b0;
        case 0x2642b4u: goto label_2642b4;
        case 0x2642b8u: goto label_2642b8;
        case 0x2642bcu: goto label_2642bc;
        case 0x2642c0u: goto label_2642c0;
        case 0x2642c4u: goto label_2642c4;
        case 0x2642c8u: goto label_2642c8;
        case 0x2642ccu: goto label_2642cc;
        case 0x2642d0u: goto label_2642d0;
        case 0x2642d4u: goto label_2642d4;
        case 0x2642d8u: goto label_2642d8;
        case 0x2642dcu: goto label_2642dc;
        case 0x2642e0u: goto label_2642e0;
        case 0x2642e4u: goto label_2642e4;
        case 0x2642e8u: goto label_2642e8;
        case 0x2642ecu: goto label_2642ec;
        case 0x2642f0u: goto label_2642f0;
        case 0x2642f4u: goto label_2642f4;
        case 0x2642f8u: goto label_2642f8;
        case 0x2642fcu: goto label_2642fc;
        case 0x264300u: goto label_264300;
        case 0x264304u: goto label_264304;
        case 0x264308u: goto label_264308;
        case 0x26430cu: goto label_26430c;
        case 0x264310u: goto label_264310;
        case 0x264314u: goto label_264314;
        case 0x264318u: goto label_264318;
        case 0x26431cu: goto label_26431c;
        case 0x264320u: goto label_264320;
        case 0x264324u: goto label_264324;
        case 0x264328u: goto label_264328;
        case 0x26432cu: goto label_26432c;
        case 0x264330u: goto label_264330;
        case 0x264334u: goto label_264334;
        case 0x264338u: goto label_264338;
        case 0x26433cu: goto label_26433c;
        case 0x264340u: goto label_264340;
        case 0x264344u: goto label_264344;
        case 0x264348u: goto label_264348;
        case 0x26434cu: goto label_26434c;
        case 0x264350u: goto label_264350;
        case 0x264354u: goto label_264354;
        case 0x264358u: goto label_264358;
        case 0x26435cu: goto label_26435c;
        case 0x264360u: goto label_264360;
        case 0x264364u: goto label_264364;
        case 0x264368u: goto label_264368;
        case 0x26436cu: goto label_26436c;
        case 0x264370u: goto label_264370;
        case 0x264374u: goto label_264374;
        case 0x264378u: goto label_264378;
        case 0x26437cu: goto label_26437c;
        case 0x264380u: goto label_264380;
        case 0x264384u: goto label_264384;
        case 0x264388u: goto label_264388;
        case 0x26438cu: goto label_26438c;
        case 0x264390u: goto label_264390;
        case 0x264394u: goto label_264394;
        case 0x264398u: goto label_264398;
        case 0x26439cu: goto label_26439c;
        case 0x2643a0u: goto label_2643a0;
        case 0x2643a4u: goto label_2643a4;
        case 0x2643a8u: goto label_2643a8;
        case 0x2643acu: goto label_2643ac;
        case 0x2643b0u: goto label_2643b0;
        case 0x2643b4u: goto label_2643b4;
        case 0x2643b8u: goto label_2643b8;
        case 0x2643bcu: goto label_2643bc;
        case 0x2643c0u: goto label_2643c0;
        case 0x2643c4u: goto label_2643c4;
        case 0x2643c8u: goto label_2643c8;
        case 0x2643ccu: goto label_2643cc;
        case 0x2643d0u: goto label_2643d0;
        case 0x2643d4u: goto label_2643d4;
        case 0x2643d8u: goto label_2643d8;
        case 0x2643dcu: goto label_2643dc;
        case 0x2643e0u: goto label_2643e0;
        case 0x2643e4u: goto label_2643e4;
        case 0x2643e8u: goto label_2643e8;
        case 0x2643ecu: goto label_2643ec;
        case 0x2643f0u: goto label_2643f0;
        case 0x2643f4u: goto label_2643f4;
        case 0x2643f8u: goto label_2643f8;
        case 0x2643fcu: goto label_2643fc;
        case 0x264400u: goto label_264400;
        case 0x264404u: goto label_264404;
        case 0x264408u: goto label_264408;
        case 0x26440cu: goto label_26440c;
        case 0x264410u: goto label_264410;
        case 0x264414u: goto label_264414;
        case 0x264418u: goto label_264418;
        case 0x26441cu: goto label_26441c;
        case 0x264420u: goto label_264420;
        case 0x264424u: goto label_264424;
        case 0x264428u: goto label_264428;
        case 0x26442cu: goto label_26442c;
        case 0x264430u: goto label_264430;
        case 0x264434u: goto label_264434;
        case 0x264438u: goto label_264438;
        case 0x26443cu: goto label_26443c;
        case 0x264440u: goto label_264440;
        case 0x264444u: goto label_264444;
        case 0x264448u: goto label_264448;
        case 0x26444cu: goto label_26444c;
        case 0x264450u: goto label_264450;
        case 0x264454u: goto label_264454;
        case 0x264458u: goto label_264458;
        case 0x26445cu: goto label_26445c;
        case 0x264460u: goto label_264460;
        case 0x264464u: goto label_264464;
        case 0x264468u: goto label_264468;
        case 0x26446cu: goto label_26446c;
        case 0x264470u: goto label_264470;
        case 0x264474u: goto label_264474;
        case 0x264478u: goto label_264478;
        case 0x26447cu: goto label_26447c;
        case 0x264480u: goto label_264480;
        case 0x264484u: goto label_264484;
        case 0x264488u: goto label_264488;
        case 0x26448cu: goto label_26448c;
        case 0x264490u: goto label_264490;
        case 0x264494u: goto label_264494;
        case 0x264498u: goto label_264498;
        case 0x26449cu: goto label_26449c;
        case 0x2644a0u: goto label_2644a0;
        case 0x2644a4u: goto label_2644a4;
        case 0x2644a8u: goto label_2644a8;
        case 0x2644acu: goto label_2644ac;
        case 0x2644b0u: goto label_2644b0;
        case 0x2644b4u: goto label_2644b4;
        case 0x2644b8u: goto label_2644b8;
        case 0x2644bcu: goto label_2644bc;
        case 0x2644c0u: goto label_2644c0;
        case 0x2644c4u: goto label_2644c4;
        case 0x2644c8u: goto label_2644c8;
        case 0x2644ccu: goto label_2644cc;
        case 0x2644d0u: goto label_2644d0;
        case 0x2644d4u: goto label_2644d4;
        case 0x2644d8u: goto label_2644d8;
        case 0x2644dcu: goto label_2644dc;
        case 0x2644e0u: goto label_2644e0;
        case 0x2644e4u: goto label_2644e4;
        case 0x2644e8u: goto label_2644e8;
        case 0x2644ecu: goto label_2644ec;
        case 0x2644f0u: goto label_2644f0;
        case 0x2644f4u: goto label_2644f4;
        case 0x2644f8u: goto label_2644f8;
        case 0x2644fcu: goto label_2644fc;
        case 0x264500u: goto label_264500;
        case 0x264504u: goto label_264504;
        case 0x264508u: goto label_264508;
        case 0x26450cu: goto label_26450c;
        case 0x264510u: goto label_264510;
        case 0x264514u: goto label_264514;
        case 0x264518u: goto label_264518;
        case 0x26451cu: goto label_26451c;
        case 0x264520u: goto label_264520;
        case 0x264524u: goto label_264524;
        case 0x264528u: goto label_264528;
        case 0x26452cu: goto label_26452c;
        case 0x264530u: goto label_264530;
        case 0x264534u: goto label_264534;
        case 0x264538u: goto label_264538;
        case 0x26453cu: goto label_26453c;
        default: break;
    }

    ctx->pc = 0x262d80u;

label_262d80:
    // 0x262d80: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x262d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_262d84:
    // 0x262d84: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x262d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_262d88:
    // 0x262d88: 0x27a30230  addiu       $v1, $sp, 0x230
    ctx->pc = 0x262d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_262d8c:
    // 0x262d8c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x262d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_262d90:
    // 0x262d90: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x262d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_262d94:
    // 0x262d94: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x262d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_262d98:
    // 0x262d98: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x262d98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_262d9c:
    // 0x262d9c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x262d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_262da0:
    // 0x262da0: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x262da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_262da4:
    // 0x262da4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x262da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_262da8:
    // 0x262da8: 0x27af02a0  addiu       $t7, $sp, 0x2A0
    ctx->pc = 0x262da8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_262dac:
    // 0x262dac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x262dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_262db0:
    // 0x262db0: 0x27ae02b0  addiu       $t6, $sp, 0x2B0
    ctx->pc = 0x262db0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_262db4:
    // 0x262db4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x262db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_262db8:
    // 0x262db8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x262db8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_262dbc:
    // 0x262dbc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x262dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_262dc0:
    // 0x262dc0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x262dc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_262dc4:
    // 0x262dc4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x262dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_262dc8:
    // 0x262dc8: 0x27ad0294  addiu       $t5, $sp, 0x294
    ctx->pc = 0x262dc8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
label_262dcc:
    // 0x262dcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x262dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_262dd0:
    // 0x262dd0: 0x27ac0284  addiu       $t4, $sp, 0x284
    ctx->pc = 0x262dd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_262dd4:
    // 0x262dd4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x262dd4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_262dd8:
    // 0x262dd8: 0x27b00290  addiu       $s0, $sp, 0x290
    ctx->pc = 0x262dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_262ddc:
    // 0x262ddc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x262ddcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_262de0:
    // 0x262de0: 0x27ab02a4  addiu       $t3, $sp, 0x2A4
    ctx->pc = 0x262de0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 676));
label_262de4:
    // 0x262de4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x262de4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_262de8:
    // 0x262de8: 0x27aa02b4  addiu       $t2, $sp, 0x2B4
    ctx->pc = 0x262de8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_262dec:
    // 0x262dec: 0xafa80218  sw          $t0, 0x218($sp)
    ctx->pc = 0x262decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 8));
label_262df0:
    // 0x262df0: 0xafa6021c  sw          $a2, 0x21C($sp)
    ctx->pc = 0x262df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 6));
label_262df4:
    // 0x262df4: 0x27a80250  addiu       $t0, $sp, 0x250
    ctx->pc = 0x262df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_262df8:
    // 0x262df8: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x262df8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_262dfc:
    // 0x262dfc: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x262dfcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_262e00:
    // 0x262e00: 0x2533ffff  addiu       $s3, $t1, -0x1
    ctx->pc = 0x262e00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_262e04:
    // 0x262e04: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x262e04u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
label_262e08:
    // 0x262e08: 0x27a90298  addiu       $t1, $sp, 0x298
    ctx->pc = 0x262e08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_262e0c:
    // 0x262e0c: 0x78f60010  lq          $s6, 0x10($a3)
    ctx->pc = 0x262e0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_262e10:
    // 0x262e10: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x262e10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_262e14:
    // 0x262e14: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x262e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_262e18:
    // 0x262e18: 0x27a80288  addiu       $t0, $sp, 0x288
    ctx->pc = 0x262e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_262e1c:
    // 0x262e1c: 0x249200e0  addiu       $s2, $a0, 0xE0
    ctx->pc = 0x262e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_262e20:
    // 0x262e20: 0x249100a0  addiu       $s1, $a0, 0xA0
    ctx->pc = 0x262e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_262e24:
    // 0x262e24: 0x27a602a8  addiu       $a2, $sp, 0x2A8
    ctx->pc = 0x262e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_262e28:
    // 0x262e28: 0x27a402b8  addiu       $a0, $sp, 0x2B8
    ctx->pc = 0x262e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_262e2c:
    // 0x262e2c: 0x7cb60000  sq          $s6, 0x0($a1)
    ctx->pc = 0x262e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 22));
label_262e30:
    // 0x262e30: 0x78e50020  lq          $a1, 0x20($a3)
    ctx->pc = 0x262e30u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_262e34:
    // 0x262e34: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x262e34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_262e38:
    // 0x262e38: 0x78e30030  lq          $v1, 0x30($a3)
    ctx->pc = 0x262e38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_262e3c:
    // 0x262e3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x262e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_262e40:
    // 0x262e40: 0xc7a40250  lwc1        $f4, 0x250($sp)
    ctx->pc = 0x262e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_262e44:
    // 0x262e44: 0xc7a30254  lwc1        $f3, 0x254($sp)
    ctx->pc = 0x262e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_262e48:
    // 0x262e48: 0xc7a20258  lwc1        $f2, 0x258($sp)
    ctx->pc = 0x262e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_262e4c:
    // 0x262e4c: 0xc7a1025c  lwc1        $f1, 0x25C($sp)
    ctx->pc = 0x262e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_262e50:
    // 0x262e50: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x262e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262e54:
    // 0x262e54: 0xe7a40280  swc1        $f4, 0x280($sp)
    ctx->pc = 0x262e54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_262e58:
    // 0x262e58: 0xe7a30284  swc1        $f3, 0x284($sp)
    ctx->pc = 0x262e58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_262e5c:
    // 0x262e5c: 0xe7a20288  swc1        $f2, 0x288($sp)
    ctx->pc = 0x262e5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_262e60:
    // 0x262e60: 0xe7a1028c  swc1        $f1, 0x28C($sp)
    ctx->pc = 0x262e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
label_262e64:
    // 0x262e64: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x262e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_262e68:
    // 0x262e68: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x262e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262e6c:
    // 0x262e6c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x262e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_262e70:
    // 0x262e70: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x262e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262e74:
    // 0x262e74: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x262e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_262e78:
    // 0x262e78: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x262e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262e7c:
    // 0x262e7c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x262e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_262e80:
    // 0x262e80: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x262e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262e84:
    // 0x262e84: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x262e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
label_262e88:
    // 0x262e88: 0xc7a00234  lwc1        $f0, 0x234($sp)
    ctx->pc = 0x262e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262e8c:
    // 0x262e8c: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x262e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
label_262e90:
    // 0x262e90: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x262e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262e94:
    // 0x262e94: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x262e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
label_262e98:
    // 0x262e98: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x262e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262e9c:
    // 0x262e9c: 0xe5e0000c  swc1        $f0, 0xC($t7)
    ctx->pc = 0x262e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
label_262ea0:
    // 0x262ea0: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x262ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262ea4:
    // 0x262ea4: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x262ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_262ea8:
    // 0x262ea8: 0xc7a00224  lwc1        $f0, 0x224($sp)
    ctx->pc = 0x262ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262eac:
    // 0x262eac: 0xe5c00004  swc1        $f0, 0x4($t6)
    ctx->pc = 0x262eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
label_262eb0:
    // 0x262eb0: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x262eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262eb4:
    // 0x262eb4: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x262eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
label_262eb8:
    // 0x262eb8: 0xc7a0022c  lwc1        $f0, 0x22C($sp)
    ctx->pc = 0x262eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262ebc:
    // 0x262ebc: 0xe5c0000c  swc1        $f0, 0xC($t6)
    ctx->pc = 0x262ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
label_262ec0:
    // 0x262ec0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x262ec0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_262ec4:
    // 0x262ec4: 0xc6460000  lwc1        $f6, 0x0($s2)
    ctx->pc = 0x262ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_262ec8:
    // 0x262ec8: 0xc7a30280  lwc1        $f3, 0x280($sp)
    ctx->pc = 0x262ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_262ecc:
    // 0x262ecc: 0xc6450004  lwc1        $f5, 0x4($s2)
    ctx->pc = 0x262eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_262ed0:
    // 0x262ed0: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x262ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_262ed4:
    // 0x262ed4: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x262ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_262ed8:
    // 0x262ed8: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x262ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_262edc:
    // 0x262edc: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x262edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262ee0:
    // 0x262ee0: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x262ee0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_262ee4:
    // 0x262ee4: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x262ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
label_262ee8:
    // 0x262ee8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x262ee8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_262eec:
    // 0x262eec: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x262eecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_262ef0:
    // 0x262ef0: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x262ef0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_262ef4:
    // 0x262ef4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x262ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_262ef8:
    // 0x262ef8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x262ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_262efc:
    // 0x262efc: 0xc5830000  lwc1        $f3, 0x0($t4)
    ctx->pc = 0x262efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_262f00:
    // 0x262f00: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x262f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_262f04:
    // 0x262f04: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x262f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_262f08:
    // 0x262f08: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x262f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262f0c:
    // 0x262f0c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x262f0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_262f10:
    // 0x262f10: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x262f10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_262f14:
    // 0x262f14: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x262f14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_262f18:
    // 0x262f18: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x262f18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_262f1c:
    // 0x262f1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x262f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_262f20:
    // 0x262f20: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x262f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_262f24:
    // 0x262f24: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x262f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_262f28:
    // 0x262f28: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x262f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_262f2c:
    // 0x262f2c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x262f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_262f30:
    // 0x262f30: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x262f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262f34:
    // 0x262f34: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x262f34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_262f38:
    // 0x262f38: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x262f38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_262f3c:
    // 0x262f3c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x262f3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_262f40:
    // 0x262f40: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x262f40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_262f44:
    // 0x262f44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x262f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_262f48:
    // 0x262f48: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x262f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_262f4c:
    // 0x262f4c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x262f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_262f50:
    // 0x262f50: 0x661ffdb  bgez        $s3, . + 4 + (-0x25 << 2)
label_262f54:
    if (ctx->pc == 0x262F54u) {
        ctx->pc = 0x262F54u;
            // 0x262f54: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->pc = 0x262F58u;
        goto label_262f58;
    }
    ctx->pc = 0x262F50u;
    {
        const bool branch_taken_0x262f50 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x262F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262F50u;
            // 0x262f54: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f50) {
            ctx->pc = 0x262EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262ec0;
        }
    }
    ctx->pc = 0x262F58u;
label_262f58:
    // 0x262f58: 0x3c022edb  lui         $v0, 0x2EDB
    ctx->pc = 0x262f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11995 << 16));
label_262f5c:
    // 0x262f5c: 0xafa00200  sw          $zero, 0x200($sp)
    ctx->pc = 0x262f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 0));
label_262f60:
    // 0x262f60: 0x3442e6ff  ori         $v0, $v0, 0xE6FF
    ctx->pc = 0x262f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59135);
label_262f64:
    // 0x262f64: 0x27b30274  addiu       $s3, $sp, 0x274
    ctx->pc = 0x262f64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 628));
label_262f68:
    // 0x262f68: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x262f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_262f6c:
    // 0x262f6c: 0x27b20278  addiu       $s2, $sp, 0x278
    ctx->pc = 0x262f6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_262f70:
    // 0x262f70: 0x27b60264  addiu       $s6, $sp, 0x264
    ctx->pc = 0x262f70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
label_262f74:
    // 0x262f74: 0x27b70268  addiu       $s7, $sp, 0x268
    ctx->pc = 0x262f74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
label_262f78:
    // 0x262f78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x262f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_262f7c:
    // 0x262f7c: 0x26b10024  addiu       $s1, $s5, 0x24
    ctx->pc = 0x262f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
label_262f80:
    // 0x262f80: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x262f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_262f84:
    // 0x262f84: 0x26b00028  addiu       $s0, $s5, 0x28
    ctx->pc = 0x262f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
label_262f88:
    // 0x262f88: 0x26a2002c  addiu       $v0, $s5, 0x2C
    ctx->pc = 0x262f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 44));
label_262f8c:
    // 0x262f8c: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x262f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_262f90:
    // 0x262f90: 0x26a20030  addiu       $v0, $s5, 0x30
    ctx->pc = 0x262f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_262f94:
    // 0x262f94: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x262f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_262f98:
    // 0x262f98: 0x26a20034  addiu       $v0, $s5, 0x34
    ctx->pc = 0x262f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
label_262f9c:
    // 0x262f9c: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x262f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_262fa0:
    // 0x262fa0: 0x26a20038  addiu       $v0, $s5, 0x38
    ctx->pc = 0x262fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
label_262fa4:
    // 0x262fa4: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x262fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_262fa8:
    // 0x262fa8: 0x26a2003c  addiu       $v0, $s5, 0x3C
    ctx->pc = 0x262fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
label_262fac:
    // 0x262fac: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x262facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_262fb0:
    // 0x262fb0: 0x26a20070  addiu       $v0, $s5, 0x70
    ctx->pc = 0x262fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_262fb4:
    // 0x262fb4: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x262fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_262fb8:
    // 0x262fb8: 0x26a20060  addiu       $v0, $s5, 0x60
    ctx->pc = 0x262fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_262fbc:
    // 0x262fbc: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x262fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_262fc0:
    // 0x262fc0: 0x26a20074  addiu       $v0, $s5, 0x74
    ctx->pc = 0x262fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
label_262fc4:
    // 0x262fc4: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x262fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_262fc8:
    // 0x262fc8: 0x26a20064  addiu       $v0, $s5, 0x64
    ctx->pc = 0x262fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
label_262fcc:
    // 0x262fcc: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x262fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_262fd0:
    // 0x262fd0: 0x26a20078  addiu       $v0, $s5, 0x78
    ctx->pc = 0x262fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 120));
label_262fd4:
    // 0x262fd4: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x262fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_262fd8:
    // 0x262fd8: 0x26a20068  addiu       $v0, $s5, 0x68
    ctx->pc = 0x262fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 104));
label_262fdc:
    // 0x262fdc: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x262fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_262fe0:
    // 0x262fe0: 0x26a2007c  addiu       $v0, $s5, 0x7C
    ctx->pc = 0x262fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 124));
label_262fe4:
    // 0x262fe4: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x262fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_262fe8:
    // 0x262fe8: 0x26a2006c  addiu       $v0, $s5, 0x6C
    ctx->pc = 0x262fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
label_262fec:
    // 0x262fec: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x262fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_262ff0:
    // 0x262ff0: 0x26a20124  addiu       $v0, $s5, 0x124
    ctx->pc = 0x262ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 292));
label_262ff4:
    // 0x262ff4: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x262ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_262ff8:
    // 0x262ff8: 0x26a20128  addiu       $v0, $s5, 0x128
    ctx->pc = 0x262ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 296));
label_262ffc:
    // 0x262ffc: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x262ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_263000:
    // 0x263000: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x263000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_263004:
    // 0x263004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x263004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_263008:
    // 0x263008: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x263008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_26300c:
    // 0x26300c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x26300cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_263010:
    // 0x263010: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x263010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_263014:
    // 0x263014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_263018:
    // 0x263018: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x263018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_26301c:
    // 0x26301c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x26301cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_263020:
    // 0x263020: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x263020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_263024:
    // 0x263024: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x263024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_263028:
    // 0x263028: 0xaea00174  sw          $zero, 0x174($s5)
    ctx->pc = 0x263028u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 372), GPR_U32(ctx, 0));
label_26302c:
    // 0x26302c: 0x0  nop
    ctx->pc = 0x26302cu;
    // NOP
label_263030:
    // 0x263030: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x263030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_263034:
    // 0x263034: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x263034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_263038:
    // 0x263038: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x263038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_26303c:
    // 0x26303c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26303cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_263040:
    // 0x263040: 0x10600319  beqz        $v1, . + 4 + (0x319 << 2)
label_263044:
    if (ctx->pc == 0x263044u) {
        ctx->pc = 0x263044u;
            // 0x263044: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x263048u;
        goto label_263048;
    }
    ctx->pc = 0x263040u;
    {
        const bool branch_taken_0x263040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x263044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263040u;
            // 0x263044: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263040) {
            ctx->pc = 0x263CA8u;
            goto label_263ca8;
        }
    }
    ctx->pc = 0x263048u;
label_263048:
    // 0x263048: 0x10620301  beq         $v1, $v0, . + 4 + (0x301 << 2)
label_26304c:
    if (ctx->pc == 0x26304Cu) {
        ctx->pc = 0x263050u;
        goto label_263050;
    }
    ctx->pc = 0x263048u;
    {
        const bool branch_taken_0x263048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x263048) {
            ctx->pc = 0x263C50u;
            goto label_263c50;
        }
    }
    ctx->pc = 0x263050u;
label_263050:
    // 0x263050: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x263050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_263054:
    // 0x263054: 0x106202e0  beq         $v1, $v0, . + 4 + (0x2E0 << 2)
label_263058:
    if (ctx->pc == 0x263058u) {
        ctx->pc = 0x263058u;
            // 0x263058: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x26305Cu;
        goto label_26305c;
    }
    ctx->pc = 0x263054u;
    {
        const bool branch_taken_0x263054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x263058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263054u;
            // 0x263058: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263054) {
            ctx->pc = 0x263BD8u;
            goto label_263bd8;
        }
    }
    ctx->pc = 0x26305Cu;
label_26305c:
    // 0x26305c: 0x10620254  beq         $v1, $v0, . + 4 + (0x254 << 2)
label_263060:
    if (ctx->pc == 0x263060u) {
        ctx->pc = 0x263064u;
        goto label_263064;
    }
    ctx->pc = 0x26305Cu;
    {
        const bool branch_taken_0x26305c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26305c) {
            ctx->pc = 0x2639B0u;
            goto label_2639b0;
        }
    }
    ctx->pc = 0x263064u;
label_263064:
    // 0x263064: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x263064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_263068:
    // 0x263068: 0x1062023b  beq         $v1, $v0, . + 4 + (0x23B << 2)
label_26306c:
    if (ctx->pc == 0x26306Cu) {
        ctx->pc = 0x26306Cu;
            // 0x26306c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x263070u;
        goto label_263070;
    }
    ctx->pc = 0x263068u;
    {
        const bool branch_taken_0x263068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26306Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263068u;
            // 0x26306c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263068) {
            ctx->pc = 0x263958u;
            goto label_263958;
        }
    }
    ctx->pc = 0x263070u;
label_263070:
    // 0x263070: 0x10620223  beq         $v1, $v0, . + 4 + (0x223 << 2)
label_263074:
    if (ctx->pc == 0x263074u) {
        ctx->pc = 0x263078u;
        goto label_263078;
    }
    ctx->pc = 0x263070u;
    {
        const bool branch_taken_0x263070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x263070) {
            ctx->pc = 0x263900u;
            goto label_263900;
        }
    }
    ctx->pc = 0x263078u;
label_263078:
    // 0x263078: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x263078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_26307c:
    // 0x26307c: 0x1062019a  beq         $v1, $v0, . + 4 + (0x19A << 2)
label_263080:
    if (ctx->pc == 0x263080u) {
        ctx->pc = 0x263080u;
            // 0x263080: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x263084u;
        goto label_263084;
    }
    ctx->pc = 0x26307Cu;
    {
        const bool branch_taken_0x26307c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x263080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26307Cu;
            // 0x263080: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26307c) {
            ctx->pc = 0x2636E8u;
            goto label_2636e8;
        }
    }
    ctx->pc = 0x263084u;
label_263084:
    // 0x263084: 0x106200ee  beq         $v1, $v0, . + 4 + (0xEE << 2)
label_263088:
    if (ctx->pc == 0x263088u) {
        ctx->pc = 0x26308Cu;
        goto label_26308c;
    }
    ctx->pc = 0x263084u;
    {
        const bool branch_taken_0x263084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x263084) {
            ctx->pc = 0x263440u;
            goto label_263440;
        }
    }
    ctx->pc = 0x26308Cu;
label_26308c:
    // 0x26308c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x26308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_263090:
    // 0x263090: 0x1062007b  beq         $v1, $v0, . + 4 + (0x7B << 2)
label_263094:
    if (ctx->pc == 0x263094u) {
        ctx->pc = 0x263094u;
            // 0x263094: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x263098u;
        goto label_263098;
    }
    ctx->pc = 0x263090u;
    {
        const bool branch_taken_0x263090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x263094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263090u;
            // 0x263094: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263090) {
            ctx->pc = 0x263280u;
            goto label_263280;
        }
    }
    ctx->pc = 0x263098u;
label_263098:
    // 0x263098: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_26309c:
    if (ctx->pc == 0x26309Cu) {
        ctx->pc = 0x2630A0u;
        goto label_2630a0;
    }
    ctx->pc = 0x263098u;
    {
        const bool branch_taken_0x263098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x263098) {
            ctx->pc = 0x263100u;
            goto label_263100;
        }
    }
    ctx->pc = 0x2630A0u;
label_2630a0:
    // 0x2630a0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2630a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2630a4:
    // 0x2630a4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2630a8:
    if (ctx->pc == 0x2630A8u) {
        ctx->pc = 0x2630ACu;
        goto label_2630ac;
    }
    ctx->pc = 0x2630A4u;
    {
        const bool branch_taken_0x2630a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2630a4) {
            ctx->pc = 0x2630B8u;
            goto label_2630b8;
        }
    }
    ctx->pc = 0x2630ACu;
label_2630ac:
    // 0x2630ac: 0x100002fe  b           . + 4 + (0x2FE << 2)
label_2630b0:
    if (ctx->pc == 0x2630B0u) {
        ctx->pc = 0x2630B4u;
        goto label_2630b4;
    }
    ctx->pc = 0x2630ACu;
    {
        const bool branch_taken_0x2630ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2630ac) {
            ctx->pc = 0x263CA8u;
            goto label_263ca8;
        }
    }
    ctx->pc = 0x2630B4u;
label_2630b4:
    // 0x2630b4: 0x0  nop
    ctx->pc = 0x2630b4u;
    // NOP
label_2630b8:
    // 0x2630b8: 0xc6a10020  lwc1        $f1, 0x20($s5)
    ctx->pc = 0x2630b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2630bc:
    // 0x2630bc: 0xc6a000a0  lwc1        $f0, 0xA0($s5)
    ctx->pc = 0x2630bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2630c0:
    // 0x2630c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2630c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2630c4:
    // 0x2630c4: 0xe6a00120  swc1        $f0, 0x120($s5)
    ctx->pc = 0x2630c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 288), bits); }
label_2630c8:
    // 0x2630c8: 0xc6a10024  lwc1        $f1, 0x24($s5)
    ctx->pc = 0x2630c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2630cc:
    // 0x2630cc: 0xc6a000a4  lwc1        $f0, 0xA4($s5)
    ctx->pc = 0x2630ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2630d0:
    // 0x2630d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2630d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2630d4:
    // 0x2630d4: 0xe6a00124  swc1        $f0, 0x124($s5)
    ctx->pc = 0x2630d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 292), bits); }
label_2630d8:
    // 0x2630d8: 0xc6a10028  lwc1        $f1, 0x28($s5)
    ctx->pc = 0x2630d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2630dc:
    // 0x2630dc: 0xc6a000a8  lwc1        $f0, 0xA8($s5)
    ctx->pc = 0x2630dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2630e0:
    // 0x2630e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2630e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2630e4:
    // 0x2630e4: 0xe6a00128  swc1        $f0, 0x128($s5)
    ctx->pc = 0x2630e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 296), bits); }
label_2630e8:
    // 0x2630e8: 0xc6a1002c  lwc1        $f1, 0x2C($s5)
    ctx->pc = 0x2630e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2630ec:
    // 0x2630ec: 0xc6a000ac  lwc1        $f0, 0xAC($s5)
    ctx->pc = 0x2630ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2630f0:
    // 0x2630f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2630f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2630f4:
    // 0x2630f4: 0x100002ee  b           . + 4 + (0x2EE << 2)
label_2630f8:
    if (ctx->pc == 0x2630F8u) {
        ctx->pc = 0x2630F8u;
            // 0x2630f8: 0xe6a0012c  swc1        $f0, 0x12C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
        ctx->pc = 0x2630FCu;
        goto label_2630fc;
    }
    ctx->pc = 0x2630F4u;
    {
        const bool branch_taken_0x2630f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2630F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2630F4u;
            // 0x2630f8: 0xe6a0012c  swc1        $f0, 0x12C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2630f4) {
            ctx->pc = 0x263CB0u;
            goto label_263cb0;
        }
    }
    ctx->pc = 0x2630FCu;
label_2630fc:
    // 0x2630fc: 0x0  nop
    ctx->pc = 0x2630fcu;
    // NOP
label_263100:
    // 0x263100: 0xc6a500a0  lwc1        $f5, 0xA0($s5)
    ctx->pc = 0x263100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_263104:
    // 0x263104: 0xc6a900b0  lwc1        $f9, 0xB0($s5)
    ctx->pc = 0x263104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_263108:
    // 0x263108: 0xc6a300a4  lwc1        $f3, 0xA4($s5)
    ctx->pc = 0x263108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26310c:
    // 0x26310c: 0xc6a800b4  lwc1        $f8, 0xB4($s5)
    ctx->pc = 0x26310cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_263110:
    // 0x263110: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x263110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_263114:
    // 0x263114: 0xc6a60020  lwc1        $f6, 0x20($s5)
    ctx->pc = 0x263114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_263118:
    // 0x263118: 0xc6a100a8  lwc1        $f1, 0xA8($s5)
    ctx->pc = 0x263118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26311c:
    // 0x26311c: 0x46054b81  sub.s       $f14, $f9, $f5
    ctx->pc = 0x26311cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
label_263120:
    // 0x263120: 0xc6a700b8  lwc1        $f7, 0xB8($s5)
    ctx->pc = 0x263120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_263124:
    // 0x263124: 0x46034341  sub.s       $f13, $f8, $f3
    ctx->pc = 0x263124u;
    ctx->f[13] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
label_263128:
    // 0x263128: 0x46044281  sub.s       $f10, $f8, $f4
    ctx->pc = 0x263128u;
    ctx->f[10] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
label_26312c:
    // 0x26312c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x26312cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_263130:
    // 0x263130: 0x46041a01  sub.s       $f8, $f3, $f4
    ctx->pc = 0x263130u;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_263134:
    // 0x263134: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x263134u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_263138:
    // 0x263138: 0x46064ac1  sub.s       $f11, $f9, $f6
    ctx->pc = 0x263138u;
    ctx->f[11] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
label_26313c:
    // 0x26313c: 0x46013b01  sub.s       $f12, $f7, $f1
    ctx->pc = 0x26313cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_263140:
    // 0x263140: 0x46020901  sub.s       $f4, $f1, $f2
    ctx->pc = 0x263140u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_263144:
    // 0x263144: 0x46023981  sub.s       $f6, $f7, $f2
    ctx->pc = 0x263144u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
label_263148:
    // 0x263148: 0x460e2882  mul.s       $f2, $f5, $f14
    ctx->pc = 0x263148u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[14]);
label_26314c:
    // 0x26314c: 0x460d4042  mul.s       $f1, $f8, $f13
    ctx->pc = 0x26314cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
label_263150:
    // 0x263150: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x263150u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_263154:
    // 0x263154: 0x460e5882  mul.s       $f2, $f11, $f14
    ctx->pc = 0x263154u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[14]);
label_263158:
    // 0x263158: 0x460d5042  mul.s       $f1, $f10, $f13
    ctx->pc = 0x263158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
label_26315c:
    // 0x26315c: 0x460c20dc  madd.s      $f3, $f4, $f12
    ctx->pc = 0x26315cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[12]));
label_263160:
    // 0x263160: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x263160u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_263164:
    // 0x263164: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x263164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_263168:
    // 0x263168: 0x460c305c  madd.s      $f1, $f6, $f12
    ctx->pc = 0x263168u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[12]));
label_26316c:
    // 0x26316c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26316cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263170:
    // 0x263170: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_263174:
    if (ctx->pc == 0x263174u) {
        ctx->pc = 0x263174u;
            // 0x263174: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263178u;
        goto label_263178;
    }
    ctx->pc = 0x263170u;
    {
        const bool branch_taken_0x263170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263170u;
            // 0x263174: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263170) {
            ctx->pc = 0x26317Cu;
            goto label_26317c;
        }
    }
    ctx->pc = 0x263178u;
label_263178:
    // 0x263178: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x263178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_26317c:
    // 0x26317c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26317cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_263180:
    // 0x263180: 0x0  nop
    ctx->pc = 0x263180u;
    // NOP
label_263184:
    // 0x263184: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x263184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263188:
    // 0x263188: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_26318c:
    if (ctx->pc == 0x26318Cu) {
        ctx->pc = 0x26318Cu;
            // 0x26318c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263190u;
        goto label_263190;
    }
    ctx->pc = 0x263188u;
    {
        const bool branch_taken_0x263188 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26318Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263188u;
            // 0x26318c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263188) {
            ctx->pc = 0x263194u;
            goto label_263194;
        }
    }
    ctx->pc = 0x263190u;
label_263190:
    // 0x263190: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x263190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_263194:
    // 0x263194: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_263198:
    if (ctx->pc == 0x263198u) {
        ctx->pc = 0x26319Cu;
        goto label_26319c;
    }
    ctx->pc = 0x263194u;
    {
        const bool branch_taken_0x263194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x263194) {
            ctx->pc = 0x2631E0u;
            goto label_2631e0;
        }
    }
    ctx->pc = 0x26319Cu;
label_26319c:
    // 0x26319c: 0x4604501a  mula.s      $f10, $f4
    ctx->pc = 0x26319cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_2631a0:
    // 0x2631a0: 0x460830dd  msub.s      $f3, $f6, $f8
    ctx->pc = 0x2631a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[8]));
label_2631a4:
    // 0x2631a4: 0x4605301a  mula.s      $f6, $f5
    ctx->pc = 0x2631a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_2631a8:
    // 0x2631a8: 0x4604589d  msub.s      $f2, $f11, $f4
    ctx->pc = 0x2631a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[4]));
label_2631ac:
    // 0x2631ac: 0x4608581a  mula.s      $f11, $f8
    ctx->pc = 0x2631acu;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[8]);
label_2631b0:
    // 0x2631b0: 0x4605505d  msub.s      $f1, $f10, $f5
    ctx->pc = 0x2631b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[5]));
label_2631b4:
    // 0x2631b4: 0x4601681a  mula.s      $f13, $f1
    ctx->pc = 0x2631b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
label_2631b8:
    // 0x2631b8: 0x4602601d  msub.s      $f0, $f12, $f2
    ctx->pc = 0x2631b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[2]));
label_2631bc:
    // 0x2631bc: 0xe6a00120  swc1        $f0, 0x120($s5)
    ctx->pc = 0x2631bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 288), bits); }
label_2631c0:
    // 0x2631c0: 0x4603601a  mula.s      $f12, $f3
    ctx->pc = 0x2631c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_2631c4:
    // 0x2631c4: 0x4601701d  msub.s      $f0, $f14, $f1
    ctx->pc = 0x2631c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[1]));
label_2631c8:
    // 0x2631c8: 0x4602701a  mula.s      $f14, $f2
    ctx->pc = 0x2631c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_2631cc:
    // 0x2631cc: 0xe6a00124  swc1        $f0, 0x124($s5)
    ctx->pc = 0x2631ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 292), bits); }
label_2631d0:
    // 0x2631d0: 0x4603681d  msub.s      $f0, $f13, $f3
    ctx->pc = 0x2631d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[3]));
label_2631d4:
    // 0x2631d4: 0xe6a00128  swc1        $f0, 0x128($s5)
    ctx->pc = 0x2631d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 296), bits); }
label_2631d8:
    // 0x2631d8: 0x100002b5  b           . + 4 + (0x2B5 << 2)
label_2631dc:
    if (ctx->pc == 0x2631DCu) {
        ctx->pc = 0x2631DCu;
            // 0x2631dc: 0xaea0012c  sw          $zero, 0x12C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 300), GPR_U32(ctx, 0));
        ctx->pc = 0x2631E0u;
        goto label_2631e0;
    }
    ctx->pc = 0x2631D8u;
    {
        const bool branch_taken_0x2631d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2631DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2631D8u;
            // 0x2631dc: 0xaea0012c  sw          $zero, 0x12C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2631d8) {
            ctx->pc = 0x263CB0u;
            goto label_263cb0;
        }
    }
    ctx->pc = 0x2631E0u;
label_2631e0:
    // 0x2631e0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_2631e4:
    if (ctx->pc == 0x2631E4u) {
        ctx->pc = 0x2631E8u;
        goto label_2631e8;
    }
    ctx->pc = 0x2631E0u;
    {
        const bool branch_taken_0x2631e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2631e0) {
            ctx->pc = 0x263228u;
            goto label_263228;
        }
    }
    ctx->pc = 0x2631E8u;
label_2631e8:
    // 0x2631e8: 0xe6a900a0  swc1        $f9, 0xA0($s5)
    ctx->pc = 0x2631e8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 160), bits); }
label_2631ec:
    // 0x2631ec: 0xc6a000b4  lwc1        $f0, 0xB4($s5)
    ctx->pc = 0x2631ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2631f0:
    // 0x2631f0: 0xe6a000a4  swc1        $f0, 0xA4($s5)
    ctx->pc = 0x2631f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 164), bits); }
label_2631f4:
    // 0x2631f4: 0xc6a000b8  lwc1        $f0, 0xB8($s5)
    ctx->pc = 0x2631f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2631f8:
    // 0x2631f8: 0xe6a000a8  swc1        $f0, 0xA8($s5)
    ctx->pc = 0x2631f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 168), bits); }
label_2631fc:
    // 0x2631fc: 0xc6a000bc  lwc1        $f0, 0xBC($s5)
    ctx->pc = 0x2631fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263200:
    // 0x263200: 0xe6a000ac  swc1        $f0, 0xAC($s5)
    ctx->pc = 0x263200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 172), bits); }
label_263204:
    // 0x263204: 0xc6a000f0  lwc1        $f0, 0xF0($s5)
    ctx->pc = 0x263204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263208:
    // 0x263208: 0xe6a000e0  swc1        $f0, 0xE0($s5)
    ctx->pc = 0x263208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 224), bits); }
label_26320c:
    // 0x26320c: 0xc6a000f4  lwc1        $f0, 0xF4($s5)
    ctx->pc = 0x26320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263210:
    // 0x263210: 0xe6a000e4  swc1        $f0, 0xE4($s5)
    ctx->pc = 0x263210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 228), bits); }
label_263214:
    // 0x263214: 0xc6a000f8  lwc1        $f0, 0xF8($s5)
    ctx->pc = 0x263214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263218:
    // 0x263218: 0xe6a000e8  swc1        $f0, 0xE8($s5)
    ctx->pc = 0x263218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 232), bits); }
label_26321c:
    // 0x26321c: 0xc6a000fc  lwc1        $f0, 0xFC($s5)
    ctx->pc = 0x26321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263220:
    // 0x263220: 0xe6a000ec  swc1        $f0, 0xEC($s5)
    ctx->pc = 0x263220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 236), bits); }
label_263224:
    // 0x263224: 0x0  nop
    ctx->pc = 0x263224u;
    // NOP
label_263228:
    // 0x263228: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x263228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_26322c:
    // 0x26322c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26322cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_263230:
    // 0x263230: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x263230u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_263234:
    // 0x263234: 0xc6a10020  lwc1        $f1, 0x20($s5)
    ctx->pc = 0x263234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263238:
    // 0x263238: 0xc6a000a0  lwc1        $f0, 0xA0($s5)
    ctx->pc = 0x263238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26323c:
    // 0x26323c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26323cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263240:
    // 0x263240: 0xe6a00120  swc1        $f0, 0x120($s5)
    ctx->pc = 0x263240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 288), bits); }
label_263244:
    // 0x263244: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x263244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263248:
    // 0x263248: 0xc6a000a4  lwc1        $f0, 0xA4($s5)
    ctx->pc = 0x263248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26324c:
    // 0x26324c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26324cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263250:
    // 0x263250: 0xe6a00124  swc1        $f0, 0x124($s5)
    ctx->pc = 0x263250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 292), bits); }
label_263254:
    // 0x263254: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x263254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263258:
    // 0x263258: 0xc6a000a8  lwc1        $f0, 0xA8($s5)
    ctx->pc = 0x263258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26325c:
    // 0x26325c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26325cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263260:
    // 0x263260: 0xe6a00128  swc1        $f0, 0x128($s5)
    ctx->pc = 0x263260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 296), bits); }
label_263264:
    // 0x263264: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x263264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_263268:
    // 0x263268: 0xc6a000ac  lwc1        $f0, 0xAC($s5)
    ctx->pc = 0x263268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26326c:
    // 0x26326c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x26326cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263270:
    // 0x263270: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x263270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263274:
    // 0x263274: 0x1000028e  b           . + 4 + (0x28E << 2)
label_263278:
    if (ctx->pc == 0x263278u) {
        ctx->pc = 0x263278u;
            // 0x263278: 0xe6a0012c  swc1        $f0, 0x12C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
        ctx->pc = 0x26327Cu;
        goto label_26327c;
    }
    ctx->pc = 0x263274u;
    {
        const bool branch_taken_0x263274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263274u;
            // 0x263278: 0xe6a0012c  swc1        $f0, 0x12C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263274) {
            ctx->pc = 0x263CB0u;
            goto label_263cb0;
        }
    }
    ctx->pc = 0x26327Cu;
label_26327c:
    // 0x26327c: 0x0  nop
    ctx->pc = 0x26327cu;
    // NOP
label_263280:
    // 0x263280: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x263280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_263284:
    // 0x263284: 0xc6a50020  lwc1        $f5, 0x20($s5)
    ctx->pc = 0x263284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_263288:
    // 0x263288: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x263288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26328c:
    // 0x26328c: 0xc6a400a4  lwc1        $f4, 0xA4($s5)
    ctx->pc = 0x26328cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_263290:
    // 0x263290: 0xc6a600a0  lwc1        $f6, 0xA0($s5)
    ctx->pc = 0x263290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_263294:
    // 0x263294: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x263294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263298:
    // 0x263298: 0xc4490000  lwc1        $f9, 0x0($v0)
    ctx->pc = 0x263298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_26329c:
    // 0x26329c: 0xc6a200a8  lwc1        $f2, 0xA8($s5)
    ctx->pc = 0x26329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2632a0:
    // 0x2632a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2632a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2632a4:
    // 0x2632a4: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x2632a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_2632a8:
    // 0x2632a8: 0x46054b81  sub.s       $f14, $f9, $f5
    ctx->pc = 0x2632a8u;
    ctx->f[14] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
label_2632ac:
    // 0x2632ac: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x2632acu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_2632b0:
    // 0x2632b0: 0xc4480000  lwc1        $f8, 0x0($v0)
    ctx->pc = 0x2632b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2632b4:
    // 0x2632b4: 0x46064ac1  sub.s       $f11, $f9, $f6
    ctx->pc = 0x2632b4u;
    ctx->f[11] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
label_2632b8:
    // 0x2632b8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2632b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2632bc:
    // 0x2632bc: 0x46034341  sub.s       $f13, $f8, $f3
    ctx->pc = 0x2632bcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
label_2632c0:
    // 0x2632c0: 0x46044281  sub.s       $f10, $f8, $f4
    ctx->pc = 0x2632c0u;
    ctx->f[10] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
label_2632c4:
    // 0x2632c4: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x2632c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2632c8:
    // 0x2632c8: 0x46041a01  sub.s       $f8, $f3, $f4
    ctx->pc = 0x2632c8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_2632cc:
    // 0x2632cc: 0x46020901  sub.s       $f4, $f1, $f2
    ctx->pc = 0x2632ccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2632d0:
    // 0x2632d0: 0x46013b01  sub.s       $f12, $f7, $f1
    ctx->pc = 0x2632d0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_2632d4:
    // 0x2632d4: 0x46023981  sub.s       $f6, $f7, $f2
    ctx->pc = 0x2632d4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
label_2632d8:
    // 0x2632d8: 0x460e2882  mul.s       $f2, $f5, $f14
    ctx->pc = 0x2632d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[14]);
label_2632dc:
    // 0x2632dc: 0x460d4042  mul.s       $f1, $f8, $f13
    ctx->pc = 0x2632dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
label_2632e0:
    // 0x2632e0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2632e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2632e4:
    // 0x2632e4: 0x460e5882  mul.s       $f2, $f11, $f14
    ctx->pc = 0x2632e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[14]);
label_2632e8:
    // 0x2632e8: 0x460d5042  mul.s       $f1, $f10, $f13
    ctx->pc = 0x2632e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
label_2632ec:
    // 0x2632ec: 0x460c20dc  madd.s      $f3, $f4, $f12
    ctx->pc = 0x2632ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[12]));
label_2632f0:
    // 0x2632f0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2632f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2632f4:
    // 0x2632f4: 0x460c305c  madd.s      $f1, $f6, $f12
    ctx->pc = 0x2632f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[12]));
label_2632f8:
    // 0x2632f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2632f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2632fc:
    // 0x2632fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_263300:
    if (ctx->pc == 0x263300u) {
        ctx->pc = 0x263300u;
            // 0x263300: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263304u;
        goto label_263304;
    }
    ctx->pc = 0x2632FCu;
    {
        const bool branch_taken_0x2632fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2632FCu;
            // 0x263300: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2632fc) {
            ctx->pc = 0x263308u;
            goto label_263308;
        }
    }
    ctx->pc = 0x263304u;
label_263304:
    // 0x263304: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x263304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_263308:
    // 0x263308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x263308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26330c:
    // 0x26330c: 0x0  nop
    ctx->pc = 0x26330cu;
    // NOP
label_263310:
    // 0x263310: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x263310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263314:
    // 0x263314: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_263318:
    if (ctx->pc == 0x263318u) {
        ctx->pc = 0x263318u;
            // 0x263318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26331Cu;
        goto label_26331c;
    }
    ctx->pc = 0x263314u;
    {
        const bool branch_taken_0x263314 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263314u;
            // 0x263318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263314) {
            ctx->pc = 0x263320u;
            goto label_263320;
        }
    }
    ctx->pc = 0x26331Cu;
label_26331c:
    // 0x26331c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x26331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_263320:
    // 0x263320: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_263324:
    if (ctx->pc == 0x263324u) {
        ctx->pc = 0x263328u;
        goto label_263328;
    }
    ctx->pc = 0x263320u;
    {
        const bool branch_taken_0x263320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x263320) {
            ctx->pc = 0x263370u;
            goto label_263370;
        }
    }
    ctx->pc = 0x263328u;
label_263328:
    // 0x263328: 0x4604501a  mula.s      $f10, $f4
    ctx->pc = 0x263328u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_26332c:
    // 0x26332c: 0x460830dd  msub.s      $f3, $f6, $f8
    ctx->pc = 0x26332cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[8]));
label_263330:
    // 0x263330: 0x4605301a  mula.s      $f6, $f5
    ctx->pc = 0x263330u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_263334:
    // 0x263334: 0x4604589d  msub.s      $f2, $f11, $f4
    ctx->pc = 0x263334u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[4]));
label_263338:
    // 0x263338: 0x4608581a  mula.s      $f11, $f8
    ctx->pc = 0x263338u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[8]);
label_26333c:
    // 0x26333c: 0x4605505d  msub.s      $f1, $f10, $f5
    ctx->pc = 0x26333cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[5]));
label_263340:
    // 0x263340: 0x460c101a  mula.s      $f2, $f12
    ctx->pc = 0x263340u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_263344:
    // 0x263344: 0x460d081d  msub.s      $f0, $f1, $f13
    ctx->pc = 0x263344u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[13]));
label_263348:
    // 0x263348: 0xe6a00120  swc1        $f0, 0x120($s5)
    ctx->pc = 0x263348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 288), bits); }
label_26334c:
    // 0x26334c: 0x460e081a  mula.s      $f1, $f14
    ctx->pc = 0x26334cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
label_263350:
    // 0x263350: 0x460c181d  msub.s      $f0, $f3, $f12
    ctx->pc = 0x263350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[12]));
label_263354:
    // 0x263354: 0x460d181a  mula.s      $f3, $f13
    ctx->pc = 0x263354u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
label_263358:
    // 0x263358: 0xe6a00124  swc1        $f0, 0x124($s5)
    ctx->pc = 0x263358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 292), bits); }
label_26335c:
    // 0x26335c: 0x460e101d  msub.s      $f0, $f2, $f14
    ctx->pc = 0x26335cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[14]));
label_263360:
    // 0x263360: 0xe6a00128  swc1        $f0, 0x128($s5)
    ctx->pc = 0x263360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 296), bits); }
label_263364:
    // 0x263364: 0x10000252  b           . + 4 + (0x252 << 2)
label_263368:
    if (ctx->pc == 0x263368u) {
        ctx->pc = 0x263368u;
            // 0x263368: 0xaea0012c  sw          $zero, 0x12C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 300), GPR_U32(ctx, 0));
        ctx->pc = 0x26336Cu;
        goto label_26336c;
    }
    ctx->pc = 0x263364u;
    {
        const bool branch_taken_0x263364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263364u;
            // 0x263368: 0xaea0012c  sw          $zero, 0x12C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263364) {
            ctx->pc = 0x263CB0u;
            goto label_263cb0;
        }
    }
    ctx->pc = 0x26336Cu;
label_26336c:
    // 0x26336c: 0x0  nop
    ctx->pc = 0x26336cu;
    // NOP
label_263370:
    // 0x263370: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_263374:
    if (ctx->pc == 0x263374u) {
        ctx->pc = 0x263378u;
        goto label_263378;
    }
    ctx->pc = 0x263370u;
    {
        const bool branch_taken_0x263370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263370) {
            ctx->pc = 0x2633E8u;
            goto label_2633e8;
        }
    }
    ctx->pc = 0x263378u;
label_263378:
    // 0x263378: 0xe6a90020  swc1        $f9, 0x20($s5)
    ctx->pc = 0x263378u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
label_26337c:
    // 0x26337c: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x26337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_263380:
    // 0x263380: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x263380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263384:
    // 0x263384: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x263384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_263388:
    // 0x263388: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x263388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_26338c:
    // 0x26338c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26338cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263390:
    // 0x263390: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x263390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_263394:
    // 0x263394: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x263394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_263398:
    // 0x263398: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x263398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26339c:
    // 0x26339c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x26339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2633a0:
    // 0x2633a0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2633a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2633a4:
    // 0x2633a4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x2633a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_2633a8:
    // 0x2633a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2633a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2633ac:
    // 0x2633ac: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x2633acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_2633b0:
    // 0x2633b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2633b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2633b4:
    // 0x2633b4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2633b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2633b8:
    // 0x2633b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2633b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2633bc:
    // 0x2633bc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2633bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2633c0:
    // 0x2633c0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2633c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2633c4:
    // 0x2633c4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2633c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2633c8:
    // 0x2633c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2633c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2633cc:
    // 0x2633cc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2633ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2633d0:
    // 0x2633d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2633d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2633d4:
    // 0x2633d4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2633d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2633d8:
    // 0x2633d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2633d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2633dc:
    // 0x2633dc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2633dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2633e0:
    // 0x2633e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2633e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2633e4:
    // 0x2633e4: 0x0  nop
    ctx->pc = 0x2633e4u;
    // NOP
label_2633e8:
    // 0x2633e8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2633e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2633ec:
    // 0x2633ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2633ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2633f0:
    // 0x2633f0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2633f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2633f4:
    // 0x2633f4: 0xc6a10020  lwc1        $f1, 0x20($s5)
    ctx->pc = 0x2633f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2633f8:
    // 0x2633f8: 0xc6a000a0  lwc1        $f0, 0xA0($s5)
    ctx->pc = 0x2633f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2633fc:
    // 0x2633fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2633fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263400:
    // 0x263400: 0xe6a00120  swc1        $f0, 0x120($s5)
    ctx->pc = 0x263400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 288), bits); }
label_263404:
    // 0x263404: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x263404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263408:
    // 0x263408: 0xc6a000a4  lwc1        $f0, 0xA4($s5)
    ctx->pc = 0x263408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26340c:
    // 0x26340c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26340cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263410:
    // 0x263410: 0xe6a00124  swc1        $f0, 0x124($s5)
    ctx->pc = 0x263410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 292), bits); }
label_263414:
    // 0x263414: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x263414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263418:
    // 0x263418: 0xc6a000a8  lwc1        $f0, 0xA8($s5)
    ctx->pc = 0x263418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26341c:
    // 0x26341c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26341cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263420:
    // 0x263420: 0xe6a00128  swc1        $f0, 0x128($s5)
    ctx->pc = 0x263420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 296), bits); }
label_263424:
    // 0x263424: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x263424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_263428:
    // 0x263428: 0xc6a000ac  lwc1        $f0, 0xAC($s5)
    ctx->pc = 0x263428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26342c:
    // 0x26342c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x26342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263430:
    // 0x263430: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x263430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263434:
    // 0x263434: 0x1000021e  b           . + 4 + (0x21E << 2)
label_263438:
    if (ctx->pc == 0x263438u) {
        ctx->pc = 0x263438u;
            // 0x263438: 0xe6a0012c  swc1        $f0, 0x12C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
        ctx->pc = 0x26343Cu;
        goto label_26343c;
    }
    ctx->pc = 0x263434u;
    {
        const bool branch_taken_0x263434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263434u;
            // 0x263438: 0xe6a0012c  swc1        $f0, 0x12C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263434) {
            ctx->pc = 0x263CB0u;
            goto label_263cb0;
        }
    }
    ctx->pc = 0x26343Cu;
label_26343c:
    // 0x26343c: 0x0  nop
    ctx->pc = 0x26343cu;
    // NOP
label_263440:
    // 0x263440: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x263440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_263444:
    // 0x263444: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x263444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_263448:
    // 0x263448: 0x26a600a0  addiu       $a2, $s5, 0xA0
    ctx->pc = 0x263448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
label_26344c:
    // 0x26344c: 0xc0987fc  jal         func_261FF0
label_263450:
    if (ctx->pc == 0x263450u) {
        ctx->pc = 0x263450u;
            // 0x263450: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x263454u;
        goto label_263454;
    }
    ctx->pc = 0x26344Cu;
    SET_GPR_U32(ctx, 31, 0x263454u);
    ctx->pc = 0x263450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26344Cu;
            // 0x263450: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261FF0u;
    if (runtime->hasFunction(0x261FF0u)) {
        auto targetFn = runtime->lookupFunction(0x261FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263454u; }
        if (ctx->pc != 0x263454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261FF0_0x261ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263454u; }
        if (ctx->pc != 0x263454u) { return; }
    }
    ctx->pc = 0x263454u;
label_263454:
    // 0x263454: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x263454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_263458:
    // 0x263458: 0x10430215  beq         $v0, $v1, . + 4 + (0x215 << 2)
label_26345c:
    if (ctx->pc == 0x26345Cu) {
        ctx->pc = 0x26345Cu;
            // 0x26345c: 0x3c030064  lui         $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x263460u;
        goto label_263460;
    }
    ctx->pc = 0x263458u;
    {
        const bool branch_taken_0x263458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26345Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263458u;
            // 0x26345c: 0x3c030064  lui         $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263458) {
            ctx->pc = 0x263CB0u;
            goto label_263cb0;
        }
    }
    ctx->pc = 0x263460u;
label_263460:
    // 0x263460: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x263460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
label_263464:
    // 0x263464: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x263464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_263468:
    // 0x263468: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x263468u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_26346c:
    // 0x26346c: 0x461001c  bgez        $v1, . + 4 + (0x1C << 2)
label_263470:
    if (ctx->pc == 0x263470u) {
        ctx->pc = 0x263474u;
        goto label_263474;
    }
    ctx->pc = 0x26346Cu;
    {
        const bool branch_taken_0x26346c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x26346c) {
            ctx->pc = 0x2634E0u;
            goto label_2634e0;
        }
    }
    ctx->pc = 0x263474u;
label_263474:
    // 0x263474: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x263474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_263478:
    // 0x263478: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x263478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_26347c:
    // 0x26347c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_263480:
    if (ctx->pc == 0x263480u) {
        ctx->pc = 0x263484u;
        goto label_263484;
    }
    ctx->pc = 0x26347Cu;
    {
        const bool branch_taken_0x26347c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26347c) {
            ctx->pc = 0x263488u;
            goto label_263488;
        }
    }
    ctx->pc = 0x263484u;
label_263484:
    // 0x263484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263488:
    // 0x263488: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x263488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_26348c:
    // 0x26348c: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x26348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_263490:
    // 0x263490: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x263490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_263494:
    // 0x263494: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x263494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_263498:
    // 0x263498: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x263498u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_26349c:
    // 0x26349c: 0xc6a000c0  lwc1        $f0, 0xC0($s5)
    ctx->pc = 0x26349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2634a0:
    // 0x2634a0: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x2634a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_2634a4:
    // 0x2634a4: 0xc6a000c4  lwc1        $f0, 0xC4($s5)
    ctx->pc = 0x2634a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2634a8:
    // 0x2634a8: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2634a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
label_2634ac:
    // 0x2634ac: 0xc6a000c8  lwc1        $f0, 0xC8($s5)
    ctx->pc = 0x2634acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2634b0:
    // 0x2634b0: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x2634b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
label_2634b4:
    // 0x2634b4: 0xc6a000cc  lwc1        $f0, 0xCC($s5)
    ctx->pc = 0x2634b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2634b8:
    // 0x2634b8: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2634b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
label_2634bc:
    // 0x2634bc: 0xc6a00100  lwc1        $f0, 0x100($s5)
    ctx->pc = 0x2634bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2634c0:
    // 0x2634c0: 0xe46000e0  swc1        $f0, 0xE0($v1)
    ctx->pc = 0x2634c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
label_2634c4:
    // 0x2634c4: 0xc6a00104  lwc1        $f0, 0x104($s5)
    ctx->pc = 0x2634c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2634c8:
    // 0x2634c8: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x2634c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
label_2634cc:
    // 0x2634cc: 0xc6a00108  lwc1        $f0, 0x108($s5)
    ctx->pc = 0x2634ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2634d0:
    // 0x2634d0: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x2634d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
label_2634d4:
    // 0x2634d4: 0xc6a0010c  lwc1        $f0, 0x10C($s5)
    ctx->pc = 0x2634d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2634d8:
    // 0x2634d8: 0x1000ff09  b           . + 4 + (-0xF7 << 2)
label_2634dc:
    if (ctx->pc == 0x2634DCu) {
        ctx->pc = 0x2634DCu;
            // 0x2634dc: 0xe46000ec  swc1        $f0, 0xEC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
        ctx->pc = 0x2634E0u;
        goto label_2634e0;
    }
    ctx->pc = 0x2634D8u;
    {
        const bool branch_taken_0x2634d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2634DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2634D8u;
            // 0x2634dc: 0xe46000ec  swc1        $f0, 0xEC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634d8) {
            ctx->pc = 0x263100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263100;
        }
    }
    ctx->pc = 0x2634E0u;
label_2634e0:
    // 0x2634e0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2634e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2634e4:
    // 0x2634e4: 0x244202f0  addiu       $v0, $v0, 0x2F0
    ctx->pc = 0x2634e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
label_2634e8:
    // 0x2634e8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2634e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2634ec:
    // 0x2634ec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2634ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2634f0:
    // 0x2634f0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x2634f0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2634f4:
    // 0x2634f4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2634f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2634f8:
    // 0x2634f8: 0x80870002  lb          $a3, 0x2($a0)
    ctx->pc = 0x2634f8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2634fc:
    // 0x2634fc: 0xc44c00a0  lwc1        $f12, 0xA0($v0)
    ctx->pc = 0x2634fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_263500:
    // 0x263500: 0xc44b00a4  lwc1        $f11, 0xA4($v0)
    ctx->pc = 0x263500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_263504:
    // 0x263504: 0xc44a00a8  lwc1        $f10, 0xA8($v0)
    ctx->pc = 0x263504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_263508:
    // 0x263508: 0xc6a20020  lwc1        $f2, 0x20($s5)
    ctx->pc = 0x263508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26350c:
    // 0x26350c: 0xc6a10024  lwc1        $f1, 0x24($s5)
    ctx->pc = 0x26350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263510:
    // 0x263510: 0xc6a00028  lwc1        $f0, 0x28($s5)
    ctx->pc = 0x263510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263514:
    // 0x263514: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x263514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_263518:
    // 0x263518: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x263518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_26351c:
    // 0x26351c: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x26351cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_263520:
    // 0x263520: 0xc48600a0  lwc1        $f6, 0xA0($a0)
    ctx->pc = 0x263520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_263524:
    // 0x263524: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x263524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_263528:
    // 0x263528: 0xc48500a4  lwc1        $f5, 0xA4($a0)
    ctx->pc = 0x263528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_26352c:
    // 0x26352c: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x26352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_263530:
    // 0x263530: 0xc48400a8  lwc1        $f4, 0xA8($a0)
    ctx->pc = 0x263530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_263534:
    // 0x263534: 0x248600a0  addiu       $a2, $a0, 0xA0
    ctx->pc = 0x263534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_263538:
    // 0x263538: 0xc46900a0  lwc1        $f9, 0xA0($v1)
    ctx->pc = 0x263538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_26353c:
    // 0x26353c: 0x246500a0  addiu       $a1, $v1, 0xA0
    ctx->pc = 0x26353cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_263540:
    // 0x263540: 0x460c1081  sub.s       $f2, $f2, $f12
    ctx->pc = 0x263540u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_263544:
    // 0x263544: 0x460c3181  sub.s       $f6, $f6, $f12
    ctx->pc = 0x263544u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[12]);
label_263548:
    // 0x263548: 0xc46800a4  lwc1        $f8, 0xA4($v1)
    ctx->pc = 0x263548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_26354c:
    // 0x26354c: 0xc46700a8  lwc1        $f7, 0xA8($v1)
    ctx->pc = 0x26354cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_263550:
    // 0x263550: 0x460b0841  sub.s       $f1, $f1, $f11
    ctx->pc = 0x263550u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
label_263554:
    // 0x263554: 0x460b2941  sub.s       $f5, $f5, $f11
    ctx->pc = 0x263554u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[11]);
label_263558:
    // 0x263558: 0x46061182  mul.s       $f6, $f2, $f6
    ctx->pc = 0x263558u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_26355c:
    // 0x26355c: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x26355cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_263560:
    // 0x263560: 0x460a0001  sub.s       $f0, $f0, $f10
    ctx->pc = 0x263560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
label_263564:
    // 0x263564: 0x460a2101  sub.s       $f4, $f4, $f10
    ctx->pc = 0x263564u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[10]);
label_263568:
    // 0x263568: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x263568u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_26356c:
    // 0x26356c: 0x4604011c  madd.s      $f4, $f0, $f4
    ctx->pc = 0x26356cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
label_263570:
    // 0x263570: 0x460c4a41  sub.s       $f9, $f9, $f12
    ctx->pc = 0x263570u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[12]);
label_263574:
    // 0x263574: 0x460b4201  sub.s       $f8, $f8, $f11
    ctx->pc = 0x263574u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[11]);
label_263578:
    // 0x263578: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x263578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26357c:
    // 0x26357c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_263580:
    if (ctx->pc == 0x263580u) {
        ctx->pc = 0x263580u;
            // 0x263580: 0x460a39c1  sub.s       $f7, $f7, $f10 (Delay Slot)
        ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[10]);
        ctx->pc = 0x263584u;
        goto label_263584;
    }
    ctx->pc = 0x26357Cu;
    {
        const bool branch_taken_0x26357c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26357Cu;
            // 0x263580: 0x460a39c1  sub.s       $f7, $f7, $f10 (Delay Slot)
        ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26357c) {
            ctx->pc = 0x26358Cu;
            goto label_26358c;
        }
    }
    ctx->pc = 0x263584u;
label_263584:
    // 0x263584: 0x10000002  b           . + 4 + (0x2 << 2)
label_263588:
    if (ctx->pc == 0x263588u) {
        ctx->pc = 0x263588u;
            // 0x263588: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x26358Cu;
        goto label_26358c;
    }
    ctx->pc = 0x263584u;
    {
        const bool branch_taken_0x263584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263584u;
            // 0x263588: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263584) {
            ctx->pc = 0x263590u;
            goto label_263590;
        }
    }
    ctx->pc = 0x26358Cu;
label_26358c:
    // 0x26358c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26358cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263590:
    // 0x263590: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_263594:
    if (ctx->pc == 0x263594u) {
        ctx->pc = 0x263598u;
        goto label_263598;
    }
    ctx->pc = 0x263590u;
    {
        const bool branch_taken_0x263590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263590) {
            ctx->pc = 0x2635E8u;
            goto label_2635e8;
        }
    }
    ctx->pc = 0x263598u;
label_263598:
    // 0x263598: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26359c:
    // 0x26359c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x26359cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_2635a0:
    // 0x2635a0: 0xc6a300c0  lwc1        $f3, 0xC0($s5)
    ctx->pc = 0x2635a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2635a4:
    // 0x2635a4: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x2635a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_2635a8:
    // 0x2635a8: 0xc6a300c4  lwc1        $f3, 0xC4($s5)
    ctx->pc = 0x2635a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2635ac:
    // 0x2635ac: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x2635acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_2635b0:
    // 0x2635b0: 0xc6a300c8  lwc1        $f3, 0xC8($s5)
    ctx->pc = 0x2635b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2635b4:
    // 0x2635b4: 0xe4c30008  swc1        $f3, 0x8($a2)
    ctx->pc = 0x2635b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_2635b8:
    // 0x2635b8: 0xc6a300cc  lwc1        $f3, 0xCC($s5)
    ctx->pc = 0x2635b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2635bc:
    // 0x2635bc: 0xe4c3000c  swc1        $f3, 0xC($a2)
    ctx->pc = 0x2635bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_2635c0:
    // 0x2635c0: 0xc6a30100  lwc1        $f3, 0x100($s5)
    ctx->pc = 0x2635c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2635c4:
    // 0x2635c4: 0xe48300e0  swc1        $f3, 0xE0($a0)
    ctx->pc = 0x2635c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
label_2635c8:
    // 0x2635c8: 0xc6a30104  lwc1        $f3, 0x104($s5)
    ctx->pc = 0x2635c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2635cc:
    // 0x2635cc: 0xe48300e4  swc1        $f3, 0xE4($a0)
    ctx->pc = 0x2635ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
label_2635d0:
    // 0x2635d0: 0xc6a30108  lwc1        $f3, 0x108($s5)
    ctx->pc = 0x2635d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2635d4:
    // 0x2635d4: 0xe48300e8  swc1        $f3, 0xE8($a0)
    ctx->pc = 0x2635d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
label_2635d8:
    // 0x2635d8: 0xc6a3010c  lwc1        $f3, 0x10C($s5)
    ctx->pc = 0x2635d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2635dc:
    // 0x2635dc: 0x10000016  b           . + 4 + (0x16 << 2)
label_2635e0:
    if (ctx->pc == 0x2635E0u) {
        ctx->pc = 0x2635E0u;
            // 0x2635e0: 0xe48300ec  swc1        $f3, 0xEC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
        ctx->pc = 0x2635E4u;
        goto label_2635e4;
    }
    ctx->pc = 0x2635DCu;
    {
        const bool branch_taken_0x2635dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2635E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2635DCu;
            // 0x2635e0: 0xe48300ec  swc1        $f3, 0xEC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635dc) {
            ctx->pc = 0x263638u;
            goto label_263638;
        }
    }
    ctx->pc = 0x2635E4u;
label_2635e4:
    // 0x2635e4: 0x0  nop
    ctx->pc = 0x2635e4u;
    // NOP
label_2635e8:
    // 0x2635e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2635e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2635ec:
    // 0x2635ec: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x2635ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_2635f0:
    // 0x2635f0: 0xc6a000c0  lwc1        $f0, 0xC0($s5)
    ctx->pc = 0x2635f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2635f4:
    // 0x2635f4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2635f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2635f8:
    // 0x2635f8: 0xc6a000c4  lwc1        $f0, 0xC4($s5)
    ctx->pc = 0x2635f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2635fc:
    // 0x2635fc: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2635fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_263600:
    // 0x263600: 0xc6a000c8  lwc1        $f0, 0xC8($s5)
    ctx->pc = 0x263600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263604:
    // 0x263604: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x263604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_263608:
    // 0x263608: 0xc6a000cc  lwc1        $f0, 0xCC($s5)
    ctx->pc = 0x263608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26360c:
    // 0x26360c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x26360cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_263610:
    // 0x263610: 0xc6a00100  lwc1        $f0, 0x100($s5)
    ctx->pc = 0x263610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263614:
    // 0x263614: 0xe46000e0  swc1        $f0, 0xE0($v1)
    ctx->pc = 0x263614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
label_263618:
    // 0x263618: 0xc6a00104  lwc1        $f0, 0x104($s5)
    ctx->pc = 0x263618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26361c:
    // 0x26361c: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x26361cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
label_263620:
    // 0x263620: 0xc6a00108  lwc1        $f0, 0x108($s5)
    ctx->pc = 0x263620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263624:
    // 0x263624: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x263624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
label_263628:
    // 0x263628: 0xc6a0010c  lwc1        $f0, 0x10C($s5)
    ctx->pc = 0x263628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26362c:
    // 0x26362c: 0x1000fe80  b           . + 4 + (-0x180 << 2)
label_263630:
    if (ctx->pc == 0x263630u) {
        ctx->pc = 0x263630u;
            // 0x263630: 0xe46000ec  swc1        $f0, 0xEC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
        ctx->pc = 0x263634u;
        goto label_263634;
    }
    ctx->pc = 0x26362Cu;
    {
        const bool branch_taken_0x26362c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26362Cu;
            // 0x263630: 0xe46000ec  swc1        $f0, 0xEC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26362c) {
            ctx->pc = 0x263030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263030;
        }
    }
    ctx->pc = 0x263634u;
label_263634:
    // 0x263634: 0x0  nop
    ctx->pc = 0x263634u;
    // NOP
label_263638:
    // 0x263638: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x263638u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
label_26363c:
    // 0x26363c: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x26363cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
label_263640:
    // 0x263640: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x263640u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_263644:
    // 0x263644: 0x4607005c  madd.s      $f1, $f0, $f7
    ctx->pc = 0x263644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[7]));
label_263648:
    // 0x263648: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x263648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26364c:
    // 0x26364c: 0x0  nop
    ctx->pc = 0x26364cu;
    // NOP
label_263650:
    // 0x263650: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x263650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263654:
    // 0x263654: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_263658:
    if (ctx->pc == 0x263658u) {
        ctx->pc = 0x263658u;
            // 0x263658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26365Cu;
        goto label_26365c;
    }
    ctx->pc = 0x263654u;
    {
        const bool branch_taken_0x263654 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263654u;
            // 0x263658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263654) {
            ctx->pc = 0x263660u;
            goto label_263660;
        }
    }
    ctx->pc = 0x26365Cu;
label_26365c:
    // 0x26365c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x26365cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_263660:
    // 0x263660: 0x1040fe73  beqz        $v0, . + 4 + (-0x18D << 2)
label_263664:
    if (ctx->pc == 0x263664u) {
        ctx->pc = 0x263668u;
        goto label_263668;
    }
    ctx->pc = 0x263660u;
    {
        const bool branch_taken_0x263660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263660) {
            ctx->pc = 0x263030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263030;
        }
    }
    ctx->pc = 0x263668u;
label_263668:
    // 0x263668: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x263668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_26366c:
    // 0x26366c: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
label_263670:
    if (ctx->pc == 0x263670u) {
        ctx->pc = 0x263674u;
        goto label_263674;
    }
    ctx->pc = 0x26366Cu;
    {
        const bool branch_taken_0x26366c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x26366c) {
            ctx->pc = 0x263678u;
            goto label_263678;
        }
    }
    ctx->pc = 0x263674u;
label_263674:
    // 0x263674: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x263674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_263678:
    // 0x263678: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x263678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_26367c:
    // 0x26367c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x26367cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_263680:
    // 0x263680: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x263680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_263684:
    // 0x263684: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x263684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_263688:
    // 0x263688: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x263688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_26368c:
    // 0x26368c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26368cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_263690:
    // 0x263690: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x263690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_263694:
    // 0x263694: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x263694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263698:
    // 0x263698: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x263698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_26369c:
    // 0x26369c: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x26369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2636a0:
    // 0x2636a0: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2636a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
label_2636a4:
    // 0x2636a4: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x2636a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2636a8:
    // 0x2636a8: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x2636a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
label_2636ac:
    // 0x2636ac: 0xc44000ac  lwc1        $f0, 0xAC($v0)
    ctx->pc = 0x2636acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2636b0:
    // 0x2636b0: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2636b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
label_2636b4:
    // 0x2636b4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2636b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2636b8:
    // 0x2636b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2636b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2636bc:
    // 0x2636bc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2636bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2636c0:
    // 0x2636c0: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x2636c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2636c4:
    // 0x2636c4: 0xe46000e0  swc1        $f0, 0xE0($v1)
    ctx->pc = 0x2636c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
label_2636c8:
    // 0x2636c8: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x2636c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2636cc:
    // 0x2636cc: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x2636ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
label_2636d0:
    // 0x2636d0: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x2636d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2636d4:
    // 0x2636d4: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x2636d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
label_2636d8:
    // 0x2636d8: 0xc44000ec  lwc1        $f0, 0xEC($v0)
    ctx->pc = 0x2636d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2636dc:
    // 0x2636dc: 0x1000fe54  b           . + 4 + (-0x1AC << 2)
label_2636e0:
    if (ctx->pc == 0x2636E0u) {
        ctx->pc = 0x2636E0u;
            // 0x2636e0: 0xe46000ec  swc1        $f0, 0xEC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
        ctx->pc = 0x2636E4u;
        goto label_2636e4;
    }
    ctx->pc = 0x2636DCu;
    {
        const bool branch_taken_0x2636dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2636E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2636DCu;
            // 0x2636e0: 0xe46000ec  swc1        $f0, 0xEC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2636dc) {
            ctx->pc = 0x263030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263030;
        }
    }
    ctx->pc = 0x2636E4u;
label_2636e4:
    // 0x2636e4: 0x0  nop
    ctx->pc = 0x2636e4u;
    // NOP
label_2636e8:
    // 0x2636e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2636e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2636ec:
    // 0x2636ec: 0x26a500a0  addiu       $a1, $s5, 0xA0
    ctx->pc = 0x2636ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
label_2636f0:
    // 0x2636f0: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x2636f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_2636f4:
    // 0x2636f4: 0xc0987fc  jal         func_261FF0
label_2636f8:
    if (ctx->pc == 0x2636F8u) {
        ctx->pc = 0x2636F8u;
            // 0x2636f8: 0x2407fff8  addiu       $a3, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->pc = 0x2636FCu;
        goto label_2636fc;
    }
    ctx->pc = 0x2636F4u;
    SET_GPR_U32(ctx, 31, 0x2636FCu);
    ctx->pc = 0x2636F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2636F4u;
            // 0x2636f8: 0x2407fff8  addiu       $a3, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261FF0u;
    if (runtime->hasFunction(0x261FF0u)) {
        auto targetFn = runtime->lookupFunction(0x261FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2636FCu; }
        if (ctx->pc != 0x2636FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261FF0_0x261ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2636FCu; }
        if (ctx->pc != 0x2636FCu) { return; }
    }
    ctx->pc = 0x2636FCu;
label_2636fc:
    // 0x2636fc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2636fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_263700:
    // 0x263700: 0x1043016b  beq         $v0, $v1, . + 4 + (0x16B << 2)
label_263704:
    if (ctx->pc == 0x263704u) {
        ctx->pc = 0x263704u;
            // 0x263704: 0x3c030064  lui         $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x263708u;
        goto label_263708;
    }
    ctx->pc = 0x263700u;
    {
        const bool branch_taken_0x263700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x263704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263700u;
            // 0x263704: 0x3c030064  lui         $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263700) {
            ctx->pc = 0x263CB0u;
            goto label_263cb0;
        }
    }
    ctx->pc = 0x263708u;
label_263708:
    // 0x263708: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x263708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
label_26370c:
    // 0x26370c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_263710:
    // 0x263710: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x263710u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_263714:
    // 0x263714: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
label_263718:
    if (ctx->pc == 0x263718u) {
        ctx->pc = 0x26371Cu;
        goto label_26371c;
    }
    ctx->pc = 0x263714u;
    {
        const bool branch_taken_0x263714 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x263714) {
            ctx->pc = 0x263768u;
            goto label_263768;
        }
    }
    ctx->pc = 0x26371Cu;
label_26371c:
    // 0x26371c: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x26371cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_263720:
    // 0x263720: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x263720u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_263724:
    // 0x263724: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_263728:
    if (ctx->pc == 0x263728u) {
        ctx->pc = 0x26372Cu;
        goto label_26372c;
    }
    ctx->pc = 0x263724u;
    {
        const bool branch_taken_0x263724 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x263724) {
            ctx->pc = 0x263730u;
            goto label_263730;
        }
    }
    ctx->pc = 0x26372Cu;
label_26372c:
    // 0x26372c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263730:
    // 0x263730: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x263730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_263734:
    // 0x263734: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x263734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_263738:
    // 0x263738: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x263738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_26373c:
    // 0x26373c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26373cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_263740:
    // 0x263740: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x263740u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_263744:
    // 0x263744: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x263744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263748:
    // 0x263748: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x263748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_26374c:
    // 0x26374c: 0xc6a00044  lwc1        $f0, 0x44($s5)
    ctx->pc = 0x26374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263750:
    // 0x263750: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x263750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_263754:
    // 0x263754: 0xc6a00048  lwc1        $f0, 0x48($s5)
    ctx->pc = 0x263754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263758:
    // 0x263758: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x263758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_26375c:
    // 0x26375c: 0xc6a0004c  lwc1        $f0, 0x4C($s5)
    ctx->pc = 0x26375cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263760:
    // 0x263760: 0x1000fec7  b           . + 4 + (-0x139 << 2)
label_263764:
    if (ctx->pc == 0x263764u) {
        ctx->pc = 0x263764u;
            // 0x263764: 0xe440002c  swc1        $f0, 0x2C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
        ctx->pc = 0x263768u;
        goto label_263768;
    }
    ctx->pc = 0x263760u;
    {
        const bool branch_taken_0x263760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263760u;
            // 0x263764: 0xe440002c  swc1        $f0, 0x2C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263760) {
            ctx->pc = 0x263280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263280;
        }
    }
    ctx->pc = 0x263768u;
label_263768:
    // 0x263768: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x263768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_26376c:
    // 0x26376c: 0x244202f0  addiu       $v0, $v0, 0x2F0
    ctx->pc = 0x26376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
label_263770:
    // 0x263770: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x263770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_263774:
    // 0x263774: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x263774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_263778:
    // 0x263778: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x263778u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_26377c:
    // 0x26377c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x26377cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_263780:
    // 0x263780: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x263780u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_263784:
    // 0x263784: 0xc6a200a0  lwc1        $f2, 0xA0($s5)
    ctx->pc = 0x263784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_263788:
    // 0x263788: 0xc44a0020  lwc1        $f10, 0x20($v0)
    ctx->pc = 0x263788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_26378c:
    // 0x26378c: 0xc4490024  lwc1        $f9, 0x24($v0)
    ctx->pc = 0x26378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_263790:
    // 0x263790: 0xc4480028  lwc1        $f8, 0x28($v0)
    ctx->pc = 0x263790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_263794:
    // 0x263794: 0xc6a100a4  lwc1        $f1, 0xA4($s5)
    ctx->pc = 0x263794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263798:
    // 0x263798: 0xc6a700a8  lwc1        $f7, 0xA8($s5)
    ctx->pc = 0x263798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_26379c:
    // 0x26379c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26379cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2637a0:
    // 0x2637a0: 0x460a1301  sub.s       $f12, $f2, $f10
    ctx->pc = 0x2637a0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
label_2637a4:
    // 0x2637a4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2637a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_2637a8:
    // 0x2637a8: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x2637a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2637ac:
    // 0x2637ac: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x2637acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2637b0:
    // 0x2637b0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2637b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2637b4:
    // 0x2637b4: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x2637b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2637b8:
    // 0x2637b8: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x2637b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2637bc:
    // 0x2637bc: 0x46090ac1  sub.s       $f11, $f1, $f9
    ctx->pc = 0x2637bcu;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
label_2637c0:
    // 0x2637c0: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x2637c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2637c4:
    // 0x2637c4: 0x460a18c1  sub.s       $f3, $f3, $f10
    ctx->pc = 0x2637c4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[10]);
label_2637c8:
    // 0x2637c8: 0x46091081  sub.s       $f2, $f2, $f9
    ctx->pc = 0x2637c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
label_2637cc:
    // 0x2637cc: 0xc4660020  lwc1        $f6, 0x20($v1)
    ctx->pc = 0x2637ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2637d0:
    // 0x2637d0: 0xc4650024  lwc1        $f5, 0x24($v1)
    ctx->pc = 0x2637d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2637d4:
    // 0x2637d4: 0xc4640028  lwc1        $f4, 0x28($v1)
    ctx->pc = 0x2637d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2637d8:
    // 0x2637d8: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x2637d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_2637dc:
    // 0x2637dc: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x2637dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
label_2637e0:
    // 0x2637e0: 0x460839c1  sub.s       $f7, $f7, $f8
    ctx->pc = 0x2637e0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
label_2637e4:
    // 0x2637e4: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x2637e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
label_2637e8:
    // 0x2637e8: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x2637e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2637ec:
    // 0x2637ec: 0x4601385c  madd.s      $f1, $f7, $f1
    ctx->pc = 0x2637ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
label_2637f0:
    // 0x2637f0: 0x460a3181  sub.s       $f6, $f6, $f10
    ctx->pc = 0x2637f0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[10]);
label_2637f4:
    // 0x2637f4: 0x46092941  sub.s       $f5, $f5, $f9
    ctx->pc = 0x2637f4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
label_2637f8:
    // 0x2637f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2637f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2637fc:
    // 0x2637fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_263800:
    if (ctx->pc == 0x263800u) {
        ctx->pc = 0x263800u;
            // 0x263800: 0x46082101  sub.s       $f4, $f4, $f8 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
        ctx->pc = 0x263804u;
        goto label_263804;
    }
    ctx->pc = 0x2637FCu;
    {
        const bool branch_taken_0x2637fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2637FCu;
            // 0x263800: 0x46082101  sub.s       $f4, $f4, $f8 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2637fc) {
            ctx->pc = 0x26380Cu;
            goto label_26380c;
        }
    }
    ctx->pc = 0x263804u;
label_263804:
    // 0x263804: 0x10000002  b           . + 4 + (0x2 << 2)
label_263808:
    if (ctx->pc == 0x263808u) {
        ctx->pc = 0x263808u;
            // 0x263808: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x26380Cu;
        goto label_26380c;
    }
    ctx->pc = 0x263804u;
    {
        const bool branch_taken_0x263804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263804u;
            // 0x263808: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263804) {
            ctx->pc = 0x263810u;
            goto label_263810;
        }
    }
    ctx->pc = 0x26380Cu;
label_26380c:
    // 0x26380c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26380cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263810:
    // 0x263810: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_263814:
    if (ctx->pc == 0x263814u) {
        ctx->pc = 0x263818u;
        goto label_263818;
    }
    ctx->pc = 0x263810u;
    {
        const bool branch_taken_0x263810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263810) {
            ctx->pc = 0x263848u;
            goto label_263848;
        }
    }
    ctx->pc = 0x263818u;
label_263818:
    // 0x263818: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26381c:
    // 0x26381c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x26381cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_263820:
    // 0x263820: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x263820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263824:
    // 0x263824: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x263824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_263828:
    // 0x263828: 0xc6a00044  lwc1        $f0, 0x44($s5)
    ctx->pc = 0x263828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26382c:
    // 0x26382c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x26382cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_263830:
    // 0x263830: 0xc6a00048  lwc1        $f0, 0x48($s5)
    ctx->pc = 0x263830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263834:
    // 0x263834: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x263834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_263838:
    // 0x263838: 0xc6a0004c  lwc1        $f0, 0x4C($s5)
    ctx->pc = 0x263838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26383c:
    // 0x26383c: 0x10000010  b           . + 4 + (0x10 << 2)
label_263840:
    if (ctx->pc == 0x263840u) {
        ctx->pc = 0x263840u;
            // 0x263840: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->pc = 0x263844u;
        goto label_263844;
    }
    ctx->pc = 0x26383Cu;
    {
        const bool branch_taken_0x26383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26383Cu;
            // 0x263840: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26383c) {
            ctx->pc = 0x263880u;
            goto label_263880;
        }
    }
    ctx->pc = 0x263844u;
label_263844:
    // 0x263844: 0x0  nop
    ctx->pc = 0x263844u;
    // NOP
label_263848:
    // 0x263848: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26384c:
    // 0x26384c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x26384cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_263850:
    // 0x263850: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x263850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_263854:
    // 0x263854: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x263854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_263858:
    // 0x263858: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x263858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_26385c:
    // 0x26385c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x26385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263860:
    // 0x263860: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x263860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_263864:
    // 0x263864: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x263864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263868:
    // 0x263868: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x263868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_26386c:
    // 0x26386c: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x26386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263870:
    // 0x263870: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x263870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_263874:
    // 0x263874: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x263874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263878:
    // 0x263878: 0x1000fded  b           . + 4 + (-0x213 << 2)
label_26387c:
    if (ctx->pc == 0x26387Cu) {
        ctx->pc = 0x26387Cu;
            // 0x26387c: 0xe460002c  swc1        $f0, 0x2C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
        ctx->pc = 0x263880u;
        goto label_263880;
    }
    ctx->pc = 0x263878u;
    {
        const bool branch_taken_0x263878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26387Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263878u;
            // 0x26387c: 0xe460002c  swc1        $f0, 0x2C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263878) {
            ctx->pc = 0x263030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263030;
        }
    }
    ctx->pc = 0x263880u;
label_263880:
    // 0x263880: 0x46066042  mul.s       $f1, $f12, $f6
    ctx->pc = 0x263880u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
label_263884:
    // 0x263884: 0x46055802  mul.s       $f0, $f11, $f5
    ctx->pc = 0x263884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
label_263888:
    // 0x263888: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x263888u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26388c:
    // 0x26388c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26388cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_263890:
    // 0x263890: 0x4604385c  madd.s      $f1, $f7, $f4
    ctx->pc = 0x263890u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
label_263894:
    // 0x263894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x263894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263898:
    // 0x263898: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_26389c:
    if (ctx->pc == 0x26389Cu) {
        ctx->pc = 0x26389Cu;
            // 0x26389c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2638A0u;
        goto label_2638a0;
    }
    ctx->pc = 0x263898u;
    {
        const bool branch_taken_0x263898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263898u;
            // 0x26389c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263898) {
            ctx->pc = 0x2638A4u;
            goto label_2638a4;
        }
    }
    ctx->pc = 0x2638A0u;
label_2638a0:
    // 0x2638a0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2638a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2638a4:
    // 0x2638a4: 0x1040fde2  beqz        $v0, . + 4 + (-0x21E << 2)
label_2638a8:
    if (ctx->pc == 0x2638A8u) {
        ctx->pc = 0x2638ACu;
        goto label_2638ac;
    }
    ctx->pc = 0x2638A4u;
    {
        const bool branch_taken_0x2638a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2638a4) {
            ctx->pc = 0x263030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263030;
        }
    }
    ctx->pc = 0x2638ACu;
label_2638ac:
    // 0x2638ac: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2638acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2638b0:
    // 0x2638b0: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_2638b4:
    if (ctx->pc == 0x2638B4u) {
        ctx->pc = 0x2638B8u;
        goto label_2638b8;
    }
    ctx->pc = 0x2638B0u;
    {
        const bool branch_taken_0x2638b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2638b0) {
            ctx->pc = 0x2638C0u;
            goto label_2638c0;
        }
    }
    ctx->pc = 0x2638B8u;
label_2638b8:
    // 0x2638b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2638b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2638bc:
    // 0x2638bc: 0x0  nop
    ctx->pc = 0x2638bcu;
    // NOP
label_2638c0:
    // 0x2638c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2638c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2638c4:
    // 0x2638c4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2638c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2638c8:
    // 0x2638c8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2638c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2638cc:
    // 0x2638cc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2638ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2638d0:
    // 0x2638d0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2638d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2638d4:
    // 0x2638d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2638d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2638d8:
    // 0x2638d8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2638d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2638dc:
    // 0x2638dc: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2638dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2638e0:
    // 0x2638e0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2638e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_2638e4:
    // 0x2638e4: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2638e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2638e8:
    // 0x2638e8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2638e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_2638ec:
    // 0x2638ec: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x2638ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2638f0:
    // 0x2638f0: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2638f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_2638f4:
    // 0x2638f4: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x2638f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2638f8:
    // 0x2638f8: 0x1000fdcd  b           . + 4 + (-0x233 << 2)
label_2638fc:
    if (ctx->pc == 0x2638FCu) {
        ctx->pc = 0x2638FCu;
            // 0x2638fc: 0xe440002c  swc1        $f0, 0x2C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
        ctx->pc = 0x263900u;
        goto label_263900;
    }
    ctx->pc = 0x2638F8u;
    {
        const bool branch_taken_0x2638f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2638FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2638F8u;
            // 0x2638fc: 0xe440002c  swc1        $f0, 0x2C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638f8) {
            ctx->pc = 0x263030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263030;
        }
    }
    ctx->pc = 0x263900u;
label_263900:
    // 0x263900: 0x8ea20170  lw          $v0, 0x170($s5)
    ctx->pc = 0x263900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 368)));
label_263904:
    // 0x263904: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x263904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_263908:
    // 0x263908: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x263908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_26390c:
    // 0x26390c: 0x26a600a0  addiu       $a2, $s5, 0xA0
    ctx->pc = 0x26390cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
label_263910:
    // 0x263910: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x263910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_263914:
    // 0x263914: 0x26a80004  addiu       $t0, $s5, 0x4
    ctx->pc = 0x263914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_263918:
    // 0x263918: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x263918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_26391c:
    // 0x26391c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26391cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_263920:
    // 0x263920: 0xa3a202fc  sb          $v0, 0x2FC($sp)
    ctx->pc = 0x263920u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 764), (uint8_t)GPR_U32(ctx, 2));
label_263924:
    // 0x263924: 0x83a902fc  lb          $t1, 0x2FC($sp)
    ctx->pc = 0x263924u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 764)));
label_263928:
    // 0x263928: 0xc098990  jal         func_262640
label_26392c:
    if (ctx->pc == 0x26392Cu) {
        ctx->pc = 0x26392Cu;
            // 0x26392c: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x263930u;
        goto label_263930;
    }
    ctx->pc = 0x263928u;
    SET_GPR_U32(ctx, 31, 0x263930u);
    ctx->pc = 0x26392Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263928u;
            // 0x26392c: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262640u;
    if (runtime->hasFunction(0x262640u)) {
        auto targetFn = runtime->lookupFunction(0x262640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263930u; }
        if (ctx->pc != 0x263930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262640_0x262640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263930u; }
        if (ctx->pc != 0x263930u) { return; }
    }
    ctx->pc = 0x263930u;
label_263930:
    // 0x263930: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
label_263934:
    if (ctx->pc == 0x263934u) {
        ctx->pc = 0x263934u;
            // 0x263934: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x263938u;
        goto label_263938;
    }
    ctx->pc = 0x263930u;
    {
        const bool branch_taken_0x263930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263930u;
            // 0x263934: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263930) {
            ctx->pc = 0x263CB0u;
            goto label_263cb0;
        }
    }
    ctx->pc = 0x263938u;
label_263938:
    // 0x263938: 0x104300db  beq         $v0, $v1, . + 4 + (0xDB << 2)
label_26393c:
    if (ctx->pc == 0x26393Cu) {
        ctx->pc = 0x263940u;
        goto label_263940;
    }
    ctx->pc = 0x263938u;
    {
        const bool branch_taken_0x263938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x263938) {
            ctx->pc = 0x263CA8u;
            goto label_263ca8;
        }
    }
    ctx->pc = 0x263940u;
label_263940:
    // 0x263940: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x263940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_263944:
    // 0x263944: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
label_263948:
    if (ctx->pc == 0x263948u) {
        ctx->pc = 0x26394Cu;
        goto label_26394c;
    }
    ctx->pc = 0x263944u;
    {
        const bool branch_taken_0x263944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x263944) {
            ctx->pc = 0x2639B0u;
            goto label_2639b0;
        }
    }
    ctx->pc = 0x26394Cu;
label_26394c:
    // 0x26394c: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_263950:
    if (ctx->pc == 0x263950u) {
        ctx->pc = 0x263954u;
        goto label_263954;
    }
    ctx->pc = 0x26394Cu;
    {
        const bool branch_taken_0x26394c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26394c) {
            ctx->pc = 0x263CB0u;
            goto label_263cb0;
        }
    }
    ctx->pc = 0x263954u;
label_263954:
    // 0x263954: 0x0  nop
    ctx->pc = 0x263954u;
    // NOP
label_263958:
    // 0x263958: 0x8ea20170  lw          $v0, 0x170($s5)
    ctx->pc = 0x263958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 368)));
label_26395c:
    // 0x26395c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26395cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_263960:
    // 0x263960: 0x26a500a0  addiu       $a1, $s5, 0xA0
    ctx->pc = 0x263960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
label_263964:
    // 0x263964: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x263964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_263968:
    // 0x263968: 0x26a70004  addiu       $a3, $s5, 0x4
    ctx->pc = 0x263968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_26396c:
    // 0x26396c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x26396cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_263970:
    // 0x263970: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x263970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_263974:
    // 0x263974: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x263974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_263978:
    // 0x263978: 0xa3a202f8  sb          $v0, 0x2F8($sp)
    ctx->pc = 0x263978u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 760), (uint8_t)GPR_U32(ctx, 2));
label_26397c:
    // 0x26397c: 0x83a902f8  lb          $t1, 0x2F8($sp)
    ctx->pc = 0x26397cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 760)));
label_263980:
    // 0x263980: 0xc098990  jal         func_262640
label_263984:
    if (ctx->pc == 0x263984u) {
        ctx->pc = 0x263984u;
            // 0x263984: 0x240afff8  addiu       $t2, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->pc = 0x263988u;
        goto label_263988;
    }
    ctx->pc = 0x263980u;
    SET_GPR_U32(ctx, 31, 0x263988u);
    ctx->pc = 0x263984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263980u;
            // 0x263984: 0x240afff8  addiu       $t2, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262640u;
    if (runtime->hasFunction(0x262640u)) {
        auto targetFn = runtime->lookupFunction(0x262640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263988u; }
        if (ctx->pc != 0x263988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262640_0x262640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263988u; }
        if (ctx->pc != 0x263988u) { return; }
    }
    ctx->pc = 0x263988u;
label_263988:
    // 0x263988: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
label_26398c:
    if (ctx->pc == 0x26398Cu) {
        ctx->pc = 0x26398Cu;
            // 0x26398c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x263990u;
        goto label_263990;
    }
    ctx->pc = 0x263988u;
    {
        const bool branch_taken_0x263988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26398Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263988u;
            // 0x26398c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263988) {
            ctx->pc = 0x263CB0u;
            goto label_263cb0;
        }
    }
    ctx->pc = 0x263990u;
label_263990:
    // 0x263990: 0x104300c5  beq         $v0, $v1, . + 4 + (0xC5 << 2)
label_263994:
    if (ctx->pc == 0x263994u) {
        ctx->pc = 0x263998u;
        goto label_263998;
    }
    ctx->pc = 0x263990u;
    {
        const bool branch_taken_0x263990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x263990) {
            ctx->pc = 0x263CA8u;
            goto label_263ca8;
        }
    }
    ctx->pc = 0x263998u;
label_263998:
    // 0x263998: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x263998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26399c:
    // 0x26399c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_2639a0:
    if (ctx->pc == 0x2639A0u) {
        ctx->pc = 0x2639A4u;
        goto label_2639a4;
    }
    ctx->pc = 0x26399Cu;
    {
        const bool branch_taken_0x26399c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26399c) {
            ctx->pc = 0x2639B0u;
            goto label_2639b0;
        }
    }
    ctx->pc = 0x2639A4u;
label_2639a4:
    // 0x2639a4: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_2639a8:
    if (ctx->pc == 0x2639A8u) {
        ctx->pc = 0x2639ACu;
        goto label_2639ac;
    }
    ctx->pc = 0x2639A4u;
    {
        const bool branch_taken_0x2639a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2639a4) {
            ctx->pc = 0x263CB0u;
            goto label_263cb0;
        }
    }
    ctx->pc = 0x2639ACu;
label_2639ac:
    // 0x2639ac: 0x0  nop
    ctx->pc = 0x2639acu;
    // NOP
label_2639b0:
    // 0x2639b0: 0x27a2027c  addiu       $v0, $sp, 0x27C
    ctx->pc = 0x2639b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
label_2639b4:
    // 0x2639b4: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x2639b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2639b8:
    // 0x2639b8: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x2639b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_2639bc:
    // 0x2639bc: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x2639bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2639c0:
    // 0x2639c0: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x2639c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_2639c4:
    // 0x2639c4: 0x26a600a0  addiu       $a2, $s5, 0xA0
    ctx->pc = 0x2639c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
label_2639c8:
    // 0x2639c8: 0x27a70260  addiu       $a3, $sp, 0x260
    ctx->pc = 0x2639c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_2639cc:
    // 0x2639cc: 0x26a80130  addiu       $t0, $s5, 0x130
    ctx->pc = 0x2639ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 304));
label_2639d0:
    // 0x2639d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2639d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2639d4:
    // 0x2639d4: 0xe7a00270  swc1        $f0, 0x270($sp)
    ctx->pc = 0x2639d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_2639d8:
    // 0x2639d8: 0xc6a10034  lwc1        $f1, 0x34($s5)
    ctx->pc = 0x2639d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2639dc:
    // 0x2639dc: 0xc6a00024  lwc1        $f0, 0x24($s5)
    ctx->pc = 0x2639dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2639e0:
    // 0x2639e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2639e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2639e4:
    // 0x2639e4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2639e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2639e8:
    // 0x2639e8: 0xc6a10038  lwc1        $f1, 0x38($s5)
    ctx->pc = 0x2639e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2639ec:
    // 0x2639ec: 0xc6a00028  lwc1        $f0, 0x28($s5)
    ctx->pc = 0x2639ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2639f0:
    // 0x2639f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2639f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2639f4:
    // 0x2639f4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2639f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2639f8:
    // 0x2639f8: 0xc6a1003c  lwc1        $f1, 0x3C($s5)
    ctx->pc = 0x2639f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2639fc:
    // 0x2639fc: 0xc6a0002c  lwc1        $f0, 0x2C($s5)
    ctx->pc = 0x2639fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263a00:
    // 0x263a00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x263a00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263a04:
    // 0x263a04: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x263a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_263a08:
    // 0x263a08: 0xc6a100b0  lwc1        $f1, 0xB0($s5)
    ctx->pc = 0x263a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263a0c:
    // 0x263a0c: 0x27a2026c  addiu       $v0, $sp, 0x26C
    ctx->pc = 0x263a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
label_263a10:
    // 0x263a10: 0xc6a000a0  lwc1        $f0, 0xA0($s5)
    ctx->pc = 0x263a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263a14:
    // 0x263a14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x263a14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263a18:
    // 0x263a18: 0xe7a00260  swc1        $f0, 0x260($sp)
    ctx->pc = 0x263a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_263a1c:
    // 0x263a1c: 0xc6a100b4  lwc1        $f1, 0xB4($s5)
    ctx->pc = 0x263a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263a20:
    // 0x263a20: 0xc6a000a4  lwc1        $f0, 0xA4($s5)
    ctx->pc = 0x263a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263a24:
    // 0x263a24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x263a24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263a28:
    // 0x263a28: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x263a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_263a2c:
    // 0x263a2c: 0xc6a100b8  lwc1        $f1, 0xB8($s5)
    ctx->pc = 0x263a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263a30:
    // 0x263a30: 0xc6a000a8  lwc1        $f0, 0xA8($s5)
    ctx->pc = 0x263a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263a34:
    // 0x263a34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x263a34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263a38:
    // 0x263a38: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x263a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_263a3c:
    // 0x263a3c: 0xc6a100bc  lwc1        $f1, 0xBC($s5)
    ctx->pc = 0x263a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263a40:
    // 0x263a40: 0xc6a000ac  lwc1        $f0, 0xAC($s5)
    ctx->pc = 0x263a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263a44:
    // 0x263a44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x263a44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_263a48:
    // 0x263a48: 0xc09e8e8  jal         func_27A3A0
label_263a4c:
    if (ctx->pc == 0x263A4Cu) {
        ctx->pc = 0x263A4Cu;
            // 0x263a4c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x263A50u;
        goto label_263a50;
    }
    ctx->pc = 0x263A48u;
    SET_GPR_U32(ctx, 31, 0x263A50u);
    ctx->pc = 0x263A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263A48u;
            // 0x263a4c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A3A0u;
    if (runtime->hasFunction(0x27A3A0u)) {
        auto targetFn = runtime->lookupFunction(0x27A3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A50u; }
        if (ctx->pc != 0x263A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A3A0_0x27a3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A50u; }
        if (ctx->pc != 0x263A50u) { return; }
    }
    ctx->pc = 0x263A50u;
label_263a50:
    // 0x263a50: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_263a54:
    if (ctx->pc == 0x263A54u) {
        ctx->pc = 0x263A58u;
        goto label_263a58;
    }
    ctx->pc = 0x263A50u;
    {
        const bool branch_taken_0x263a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263a50) {
            ctx->pc = 0x263B20u;
            goto label_263b20;
        }
    }
    ctx->pc = 0x263A58u;
label_263a58:
    // 0x263a58: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x263a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_263a5c:
    // 0x263a5c: 0xc7a10260  lwc1        $f1, 0x260($sp)
    ctx->pc = 0x263a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263a60:
    // 0x263a60: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x263a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_263a64:
    // 0x263a64: 0xc7a00270  lwc1        $f0, 0x270($sp)
    ctx->pc = 0x263a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263a68:
    // 0x263a68: 0xc6c50000  lwc1        $f5, 0x0($s6)
    ctx->pc = 0x263a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_263a6c:
    // 0x263a6c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x263a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_263a70:
    // 0x263a70: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x263a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_263a74:
    // 0x263a74: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x263a74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_263a78:
    // 0x263a78: 0x4603019d  msub.s      $f6, $f0, $f3
    ctx->pc = 0x263a78u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_263a7c:
    // 0x263a7c: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x263a7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_263a80:
    // 0x263a80: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x263a80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_263a84:
    // 0x263a84: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x263a84u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_263a88:
    // 0x263a88: 0x4605201d  msub.s      $f0, $f4, $f5
    ctx->pc = 0x263a88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_263a8c:
    // 0x263a8c: 0xe6a00120  swc1        $f0, 0x120($s5)
    ctx->pc = 0x263a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 288), bits); }
label_263a90:
    // 0x263a90: 0xe6a60124  swc1        $f6, 0x124($s5)
    ctx->pc = 0x263a90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 292), bits); }
label_263a94:
    // 0x263a94: 0xe6a10128  swc1        $f1, 0x128($s5)
    ctx->pc = 0x263a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 296), bits); }
label_263a98:
    // 0x263a98: 0xaea0012c  sw          $zero, 0x12C($s5)
    ctx->pc = 0x263a98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 300), GPR_U32(ctx, 0));
label_263a9c:
    // 0x263a9c: 0xc6a60024  lwc1        $f6, 0x24($s5)
    ctx->pc = 0x263a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_263aa0:
    // 0x263aa0: 0xc6a000a4  lwc1        $f0, 0xA4($s5)
    ctx->pc = 0x263aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263aa4:
    // 0x263aa4: 0xc6a40020  lwc1        $f4, 0x20($s5)
    ctx->pc = 0x263aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_263aa8:
    // 0x263aa8: 0xc6a300a0  lwc1        $f3, 0xA0($s5)
    ctx->pc = 0x263aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_263aac:
    // 0x263aac: 0xc6a20028  lwc1        $f2, 0x28($s5)
    ctx->pc = 0x263aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_263ab0:
    // 0x263ab0: 0xc6a100a8  lwc1        $f1, 0xA8($s5)
    ctx->pc = 0x263ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263ab4:
    // 0x263ab4: 0xc6a80120  lwc1        $f8, 0x120($s5)
    ctx->pc = 0x263ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_263ab8:
    // 0x263ab8: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x263ab8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_263abc:
    // 0x263abc: 0xc6a50124  lwc1        $f5, 0x124($s5)
    ctx->pc = 0x263abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_263ac0:
    // 0x263ac0: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x263ac0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_263ac4:
    // 0x263ac4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x263ac4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_263ac8:
    // 0x263ac8: 0xc6a00128  lwc1        $f0, 0x128($s5)
    ctx->pc = 0x263ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263acc:
    // 0x263acc: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x263accu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_263ad0:
    // 0x263ad0: 0x46034082  mul.s       $f2, $f8, $f3
    ctx->pc = 0x263ad0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
label_263ad4:
    // 0x263ad4: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x263ad4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_263ad8:
    // 0x263ad8: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x263ad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_263adc:
    // 0x263adc: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x263adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263ae0:
    // 0x263ae0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_263ae4:
    if (ctx->pc == 0x263AE4u) {
        ctx->pc = 0x263AE4u;
            // 0x263ae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263AE8u;
        goto label_263ae8;
    }
    ctx->pc = 0x263AE0u;
    {
        const bool branch_taken_0x263ae0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263AE0u;
            // 0x263ae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ae0) {
            ctx->pc = 0x263AECu;
            goto label_263aec;
        }
    }
    ctx->pc = 0x263AE8u;
label_263ae8:
    // 0x263ae8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x263ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_263aec:
    // 0x263aec: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
label_263af0:
    if (ctx->pc == 0x263AF0u) {
        ctx->pc = 0x263AF0u;
            // 0x263af0: 0x46004007  neg.s       $f0, $f8 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[8]);
        ctx->pc = 0x263AF4u;
        goto label_263af4;
    }
    ctx->pc = 0x263AECu;
    {
        const bool branch_taken_0x263aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263AECu;
            // 0x263af0: 0x46004007  neg.s       $f0, $f8 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263aec) {
            ctx->pc = 0x263CB0u;
            goto label_263cb0;
        }
    }
    ctx->pc = 0x263AF4u;
label_263af4:
    // 0x263af4: 0xe6a00120  swc1        $f0, 0x120($s5)
    ctx->pc = 0x263af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 288), bits); }
label_263af8:
    // 0x263af8: 0xc6a00124  lwc1        $f0, 0x124($s5)
    ctx->pc = 0x263af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263afc:
    // 0x263afc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x263afcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_263b00:
    // 0x263b00: 0xe6a00124  swc1        $f0, 0x124($s5)
    ctx->pc = 0x263b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 292), bits); }
label_263b04:
    // 0x263b04: 0xc6a00128  lwc1        $f0, 0x128($s5)
    ctx->pc = 0x263b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263b08:
    // 0x263b08: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x263b08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_263b0c:
    // 0x263b0c: 0xe6a00128  swc1        $f0, 0x128($s5)
    ctx->pc = 0x263b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 296), bits); }
label_263b10:
    // 0x263b10: 0xc6a0012c  lwc1        $f0, 0x12C($s5)
    ctx->pc = 0x263b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263b14:
    // 0x263b14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x263b14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_263b18:
    // 0x263b18: 0x10000065  b           . + 4 + (0x65 << 2)
label_263b1c:
    if (ctx->pc == 0x263B1Cu) {
        ctx->pc = 0x263B1Cu;
            // 0x263b1c: 0xe6a0012c  swc1        $f0, 0x12C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
        ctx->pc = 0x263B20u;
        goto label_263b20;
    }
    ctx->pc = 0x263B18u;
    {
        const bool branch_taken_0x263b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263B18u;
            // 0x263b1c: 0xe6a0012c  swc1        $f0, 0x12C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b18) {
            ctx->pc = 0x263CB0u;
            goto label_263cb0;
        }
    }
    ctx->pc = 0x263B20u;
label_263b20:
    // 0x263b20: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x263b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_263b24:
    // 0x263b24: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_263b28:
    if (ctx->pc == 0x263B28u) {
        ctx->pc = 0x263B2Cu;
        goto label_263b2c;
    }
    ctx->pc = 0x263B24u;
    {
        const bool branch_taken_0x263b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263b24) {
            ctx->pc = 0x263B58u;
            goto label_263b58;
        }
    }
    ctx->pc = 0x263B2Cu;
label_263b2c:
    // 0x263b2c: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x263b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263b30:
    // 0x263b30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x263b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263b34:
    // 0x263b34: 0xe6a00020  swc1        $f0, 0x20($s5)
    ctx->pc = 0x263b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
label_263b38:
    // 0x263b38: 0xc6a00034  lwc1        $f0, 0x34($s5)
    ctx->pc = 0x263b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263b3c:
    // 0x263b3c: 0xe6a00024  swc1        $f0, 0x24($s5)
    ctx->pc = 0x263b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
label_263b40:
    // 0x263b40: 0xc6a00038  lwc1        $f0, 0x38($s5)
    ctx->pc = 0x263b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263b44:
    // 0x263b44: 0xe6a00028  swc1        $f0, 0x28($s5)
    ctx->pc = 0x263b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
label_263b48:
    // 0x263b48: 0xc6a0003c  lwc1        $f0, 0x3C($s5)
    ctx->pc = 0x263b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263b4c:
    // 0x263b4c: 0xe6a0002c  swc1        $f0, 0x2C($s5)
    ctx->pc = 0x263b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 44), bits); }
label_263b50:
    // 0x263b50: 0x10000005  b           . + 4 + (0x5 << 2)
label_263b54:
    if (ctx->pc == 0x263B54u) {
        ctx->pc = 0x263B54u;
            // 0x263b54: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x263B58u;
        goto label_263b58;
    }
    ctx->pc = 0x263B50u;
    {
        const bool branch_taken_0x263b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263B50u;
            // 0x263b54: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b50) {
            ctx->pc = 0x263B68u;
            goto label_263b68;
        }
    }
    ctx->pc = 0x263B58u;
label_263b58:
    // 0x263b58: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x263b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_263b5c:
    // 0x263b5c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_263b60:
    if (ctx->pc == 0x263B60u) {
        ctx->pc = 0x263B60u;
            // 0x263b60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x263B64u;
        goto label_263b64;
    }
    ctx->pc = 0x263B5Cu;
    {
        const bool branch_taken_0x263b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263B5Cu;
            // 0x263b60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b5c) {
            ctx->pc = 0x263B68u;
            goto label_263b68;
        }
    }
    ctx->pc = 0x263B64u;
label_263b64:
    // 0x263b64: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x263b64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_263b68:
    // 0x263b68: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x263b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_263b6c:
    // 0x263b6c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_263b70:
    if (ctx->pc == 0x263B70u) {
        ctx->pc = 0x263B74u;
        goto label_263b74;
    }
    ctx->pc = 0x263B6Cu;
    {
        const bool branch_taken_0x263b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263b6c) {
            ctx->pc = 0x263BC0u;
            goto label_263bc0;
        }
    }
    ctx->pc = 0x263B74u;
label_263b74:
    // 0x263b74: 0xc6a000b0  lwc1        $f0, 0xB0($s5)
    ctx->pc = 0x263b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263b78:
    // 0x263b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263b7c:
    // 0x263b7c: 0xe6a000a0  swc1        $f0, 0xA0($s5)
    ctx->pc = 0x263b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 160), bits); }
label_263b80:
    // 0x263b80: 0xc6a000b4  lwc1        $f0, 0xB4($s5)
    ctx->pc = 0x263b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263b84:
    // 0x263b84: 0xe6a000a4  swc1        $f0, 0xA4($s5)
    ctx->pc = 0x263b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 164), bits); }
label_263b88:
    // 0x263b88: 0xc6a000b8  lwc1        $f0, 0xB8($s5)
    ctx->pc = 0x263b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263b8c:
    // 0x263b8c: 0xe6a000a8  swc1        $f0, 0xA8($s5)
    ctx->pc = 0x263b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 168), bits); }
label_263b90:
    // 0x263b90: 0xc6a000bc  lwc1        $f0, 0xBC($s5)
    ctx->pc = 0x263b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263b94:
    // 0x263b94: 0xe6a000ac  swc1        $f0, 0xAC($s5)
    ctx->pc = 0x263b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 172), bits); }
label_263b98:
    // 0x263b98: 0xc6a000f0  lwc1        $f0, 0xF0($s5)
    ctx->pc = 0x263b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263b9c:
    // 0x263b9c: 0xe6a000e0  swc1        $f0, 0xE0($s5)
    ctx->pc = 0x263b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 224), bits); }
label_263ba0:
    // 0x263ba0: 0xc6a000f4  lwc1        $f0, 0xF4($s5)
    ctx->pc = 0x263ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263ba4:
    // 0x263ba4: 0xe6a000e4  swc1        $f0, 0xE4($s5)
    ctx->pc = 0x263ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 228), bits); }
label_263ba8:
    // 0x263ba8: 0xc6a000f8  lwc1        $f0, 0xF8($s5)
    ctx->pc = 0x263ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263bac:
    // 0x263bac: 0xe6a000e8  swc1        $f0, 0xE8($s5)
    ctx->pc = 0x263bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 232), bits); }
label_263bb0:
    // 0x263bb0: 0xc6a000fc  lwc1        $f0, 0xFC($s5)
    ctx->pc = 0x263bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263bb4:
    // 0x263bb4: 0xe6a000ec  swc1        $f0, 0xEC($s5)
    ctx->pc = 0x263bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 236), bits); }
label_263bb8:
    // 0x263bb8: 0x1000fd1d  b           . + 4 + (-0x2E3 << 2)
label_263bbc:
    if (ctx->pc == 0x263BBCu) {
        ctx->pc = 0x263BBCu;
            // 0x263bbc: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x263BC0u;
        goto label_263bc0;
    }
    ctx->pc = 0x263BB8u;
    {
        const bool branch_taken_0x263bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263BB8u;
            // 0x263bbc: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bb8) {
            ctx->pc = 0x263030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263030;
        }
    }
    ctx->pc = 0x263BC0u;
label_263bc0:
    // 0x263bc0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x263bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_263bc4:
    // 0x263bc4: 0x1040fd1a  beqz        $v0, . + 4 + (-0x2E6 << 2)
label_263bc8:
    if (ctx->pc == 0x263BC8u) {
        ctx->pc = 0x263BCCu;
        goto label_263bcc;
    }
    ctx->pc = 0x263BC4u;
    {
        const bool branch_taken_0x263bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263bc4) {
            ctx->pc = 0x263030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263030;
        }
    }
    ctx->pc = 0x263BCCu;
label_263bcc:
    // 0x263bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263bd0:
    // 0x263bd0: 0x1000fd17  b           . + 4 + (-0x2E9 << 2)
label_263bd4:
    if (ctx->pc == 0x263BD4u) {
        ctx->pc = 0x263BD4u;
            // 0x263bd4: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x263BD8u;
        goto label_263bd8;
    }
    ctx->pc = 0x263BD0u;
    {
        const bool branch_taken_0x263bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263BD0u;
            // 0x263bd4: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bd0) {
            ctx->pc = 0x263030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263030;
        }
    }
    ctx->pc = 0x263BD8u;
label_263bd8:
    // 0x263bd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x263bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_263bdc:
    // 0x263bdc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x263bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_263be0:
    // 0x263be0: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x263be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_263be4:
    // 0x263be4: 0xc0988bc  jal         func_2622F0
label_263be8:
    if (ctx->pc == 0x263BE8u) {
        ctx->pc = 0x263BE8u;
            // 0x263be8: 0x26a500a0  addiu       $a1, $s5, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
        ctx->pc = 0x263BECu;
        goto label_263bec;
    }
    ctx->pc = 0x263BE4u;
    SET_GPR_U32(ctx, 31, 0x263BECu);
    ctx->pc = 0x263BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263BE4u;
            // 0x263be8: 0x26a500a0  addiu       $a1, $s5, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2622F0u;
    if (runtime->hasFunction(0x2622F0u)) {
        auto targetFn = runtime->lookupFunction(0x2622F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263BECu; }
        if (ctx->pc != 0x263BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002622F0_0x2622f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263BECu; }
        if (ctx->pc != 0x263BECu) { return; }
    }
    ctx->pc = 0x263BECu;
label_263bec:
    // 0x263bec: 0x440002e  bltz        $v0, . + 4 + (0x2E << 2)
label_263bf0:
    if (ctx->pc == 0x263BF0u) {
        ctx->pc = 0x263BF4u;
        goto label_263bf4;
    }
    ctx->pc = 0x263BECu;
    {
        const bool branch_taken_0x263bec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x263bec) {
            ctx->pc = 0x263CA8u;
            goto label_263ca8;
        }
    }
    ctx->pc = 0x263BF4u;
label_263bf4:
    // 0x263bf4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x263bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_263bf8:
    // 0x263bf8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x263bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_263bfc:
    // 0x263bfc: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x263bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_263c00:
    // 0x263c00: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x263c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_263c04:
    // 0x263c04: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x263c04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_263c08:
    // 0x263c08: 0xc6a000d0  lwc1        $f0, 0xD0($s5)
    ctx->pc = 0x263c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263c0c:
    // 0x263c0c: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x263c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
label_263c10:
    // 0x263c10: 0xc6a000d4  lwc1        $f0, 0xD4($s5)
    ctx->pc = 0x263c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263c14:
    // 0x263c14: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x263c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
label_263c18:
    // 0x263c18: 0xc6a000d8  lwc1        $f0, 0xD8($s5)
    ctx->pc = 0x263c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263c1c:
    // 0x263c1c: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x263c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
label_263c20:
    // 0x263c20: 0xc6a000dc  lwc1        $f0, 0xDC($s5)
    ctx->pc = 0x263c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263c24:
    // 0x263c24: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x263c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
label_263c28:
    // 0x263c28: 0xc6a00110  lwc1        $f0, 0x110($s5)
    ctx->pc = 0x263c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263c2c:
    // 0x263c2c: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x263c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
label_263c30:
    // 0x263c30: 0xc6a00114  lwc1        $f0, 0x114($s5)
    ctx->pc = 0x263c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263c34:
    // 0x263c34: 0xe48000e4  swc1        $f0, 0xE4($a0)
    ctx->pc = 0x263c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
label_263c38:
    // 0x263c38: 0xc6a00118  lwc1        $f0, 0x118($s5)
    ctx->pc = 0x263c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263c3c:
    // 0x263c3c: 0xe48000e8  swc1        $f0, 0xE8($a0)
    ctx->pc = 0x263c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
label_263c40:
    // 0x263c40: 0xc6a0011c  lwc1        $f0, 0x11C($s5)
    ctx->pc = 0x263c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263c44:
    // 0x263c44: 0x1000fdfe  b           . + 4 + (-0x202 << 2)
label_263c48:
    if (ctx->pc == 0x263C48u) {
        ctx->pc = 0x263C48u;
            // 0x263c48: 0xe48000ec  swc1        $f0, 0xEC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
        ctx->pc = 0x263C4Cu;
        goto label_263c4c;
    }
    ctx->pc = 0x263C44u;
    {
        const bool branch_taken_0x263c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C44u;
            // 0x263c48: 0xe48000ec  swc1        $f0, 0xEC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c44) {
            ctx->pc = 0x263440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263440;
        }
    }
    ctx->pc = 0x263C4Cu;
label_263c4c:
    // 0x263c4c: 0x0  nop
    ctx->pc = 0x263c4cu;
    // NOP
label_263c50:
    // 0x263c50: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x263c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_263c54:
    // 0x263c54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x263c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_263c58:
    // 0x263c58: 0x26a400a0  addiu       $a0, $s5, 0xA0
    ctx->pc = 0x263c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
label_263c5c:
    // 0x263c5c: 0xc0988bc  jal         func_2622F0
label_263c60:
    if (ctx->pc == 0x263C60u) {
        ctx->pc = 0x263C60u;
            // 0x263c60: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x263C64u;
        goto label_263c64;
    }
    ctx->pc = 0x263C5Cu;
    SET_GPR_U32(ctx, 31, 0x263C64u);
    ctx->pc = 0x263C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263C5Cu;
            // 0x263c60: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2622F0u;
    if (runtime->hasFunction(0x2622F0u)) {
        auto targetFn = runtime->lookupFunction(0x2622F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C64u; }
        if (ctx->pc != 0x263C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002622F0_0x2622f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C64u; }
        if (ctx->pc != 0x263C64u) { return; }
    }
    ctx->pc = 0x263C64u;
label_263c64:
    // 0x263c64: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
label_263c68:
    if (ctx->pc == 0x263C68u) {
        ctx->pc = 0x263C6Cu;
        goto label_263c6c;
    }
    ctx->pc = 0x263C64u;
    {
        const bool branch_taken_0x263c64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x263c64) {
            ctx->pc = 0x263CA8u;
            goto label_263ca8;
        }
    }
    ctx->pc = 0x263C6Cu;
label_263c6c:
    // 0x263c6c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x263c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_263c70:
    // 0x263c70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x263c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_263c74:
    // 0x263c74: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x263c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_263c78:
    // 0x263c78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x263c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_263c7c:
    // 0x263c7c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x263c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_263c80:
    // 0x263c80: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x263c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263c84:
    // 0x263c84: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x263c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_263c88:
    // 0x263c88: 0xc6a00054  lwc1        $f0, 0x54($s5)
    ctx->pc = 0x263c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263c8c:
    // 0x263c8c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x263c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_263c90:
    // 0x263c90: 0xc6a00058  lwc1        $f0, 0x58($s5)
    ctx->pc = 0x263c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263c94:
    // 0x263c94: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x263c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_263c98:
    // 0x263c98: 0xc6a0005c  lwc1        $f0, 0x5C($s5)
    ctx->pc = 0x263c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263c9c:
    // 0x263c9c: 0x1000fe92  b           . + 4 + (-0x16E << 2)
label_263ca0:
    if (ctx->pc == 0x263CA0u) {
        ctx->pc = 0x263CA0u;
            // 0x263ca0: 0xe440002c  swc1        $f0, 0x2C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
        ctx->pc = 0x263CA4u;
        goto label_263ca4;
    }
    ctx->pc = 0x263C9Cu;
    {
        const bool branch_taken_0x263c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C9Cu;
            // 0x263ca0: 0xe440002c  swc1        $f0, 0x2C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c9c) {
            ctx->pc = 0x2636E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2636e8;
        }
    }
    ctx->pc = 0x263CA4u;
label_263ca4:
    // 0x263ca4: 0x0  nop
    ctx->pc = 0x263ca4u;
    // NOP
label_263ca8:
    // 0x263ca8: 0x10000005  b           . + 4 + (0x5 << 2)
label_263cac:
    if (ctx->pc == 0x263CACu) {
        ctx->pc = 0x263CACu;
            // 0x263cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x263CB0u;
        goto label_263cb0;
    }
    ctx->pc = 0x263CA8u;
    {
        const bool branch_taken_0x263ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263CA8u;
            // 0x263cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ca8) {
            ctx->pc = 0x263CC0u;
            goto label_263cc0;
        }
    }
    ctx->pc = 0x263CB0u;
label_263cb0:
    // 0x263cb0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x263cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_263cb4:
    // 0x263cb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x263cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263cb8:
    // 0x263cb8: 0xaea20170  sw          $v0, 0x170($s5)
    ctx->pc = 0x263cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 368), GPR_U32(ctx, 2));
label_263cbc:
    // 0x263cbc: 0x0  nop
    ctx->pc = 0x263cbcu;
    // NOP
label_263cc0:
    // 0x263cc0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x263cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_263cc4:
    // 0x263cc4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x263cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_263cc8:
    // 0x263cc8: 0xc6a10124  lwc1        $f1, 0x124($s5)
    ctx->pc = 0x263cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263ccc:
    // 0x263ccc: 0xc6a00120  lwc1        $f0, 0x120($s5)
    ctx->pc = 0x263cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263cd0:
    // 0x263cd0: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x263cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_263cd4:
    // 0x263cd4: 0xc6a30128  lwc1        $f3, 0x128($s5)
    ctx->pc = 0x263cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_263cd8:
    // 0x263cd8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x263cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_263cdc:
    // 0x263cdc: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x263cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_263ce0:
    // 0x263ce0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x263ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_263ce4:
    // 0x263ce4: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x263ce4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_263ce8:
    // 0x263ce8: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x263ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_263cec:
    // 0x263cec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x263cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_263cf0:
    // 0x263cf0: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x263cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
label_263cf4:
    // 0x263cf4: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x263cf4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_263cf8:
    // 0x263cf8: 0x46031a1c  madd.s      $f8, $f3, $f3
    ctx->pc = 0x263cf8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_263cfc:
    // 0x263cfc: 0xc6a60024  lwc1        $f6, 0x24($s5)
    ctx->pc = 0x263cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_263d00:
    // 0x263d00: 0xc6a000a4  lwc1        $f0, 0xA4($s5)
    ctx->pc = 0x263d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263d04:
    // 0x263d04: 0xc6a40020  lwc1        $f4, 0x20($s5)
    ctx->pc = 0x263d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_263d08:
    // 0x263d08: 0xc6a300a0  lwc1        $f3, 0xA0($s5)
    ctx->pc = 0x263d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_263d0c:
    // 0x263d0c: 0xc6a20028  lwc1        $f2, 0x28($s5)
    ctx->pc = 0x263d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_263d10:
    // 0x263d10: 0xc6a100a8  lwc1        $f1, 0xA8($s5)
    ctx->pc = 0x263d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263d14:
    // 0x263d14: 0xc6a70120  lwc1        $f7, 0x120($s5)
    ctx->pc = 0x263d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_263d18:
    // 0x263d18: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x263d18u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_263d1c:
    // 0x263d1c: 0xc6a50124  lwc1        $f5, 0x124($s5)
    ctx->pc = 0x263d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_263d20:
    // 0x263d20: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x263d20u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_263d24:
    // 0x263d24: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x263d24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_263d28:
    // 0x263d28: 0xc6a00128  lwc1        $f0, 0x128($s5)
    ctx->pc = 0x263d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263d2c:
    // 0x263d2c: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x263d2cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_263d30:
    // 0x263d30: 0x46071882  mul.s       $f2, $f3, $f7
    ctx->pc = 0x263d30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
label_263d34:
    // 0x263d34: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x263d34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_263d38:
    // 0x263d38: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
label_263d3c:
    if (ctx->pc == 0x263D3Cu) {
        ctx->pc = 0x263D3Cu;
            // 0x263d3c: 0x4600081c  madd.s      $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->pc = 0x263D40u;
        goto label_263d40;
    }
    ctx->pc = 0x263D38u;
    {
        const bool branch_taken_0x263d38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x263D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263D38u;
            // 0x263d3c: 0x4600081c  madd.s      $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d38) {
            ctx->pc = 0x263D68u;
            goto label_263d68;
        }
    }
    ctx->pc = 0x263D40u;
label_263d40:
    // 0x263d40: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x263d40u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_263d44:
    // 0x263d44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x263d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_263d48:
    // 0x263d48: 0x4608a582  mul.s       $f22, $f20, $f8
    ctx->pc = 0x263d48u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[8]);
label_263d4c:
    // 0x263d4c: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x263d4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263d50:
    // 0x263d50: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_263d54:
    if (ctx->pc == 0x263D54u) {
        ctx->pc = 0x263D58u;
        goto label_263d58;
    }
    ctx->pc = 0x263D50u;
    {
        const bool branch_taken_0x263d50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263d50) {
            ctx->pc = 0x263D68u;
            goto label_263d68;
        }
    }
    ctx->pc = 0x263D58u;
label_263d58:
    // 0x263d58: 0x46144034  c.lt.s      $f8, $f20
    ctx->pc = 0x263d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263d5c:
    // 0x263d5c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_263d60:
    if (ctx->pc == 0x263D60u) {
        ctx->pc = 0x263D64u;
        goto label_263d64;
    }
    ctx->pc = 0x263D5Cu;
    {
        const bool branch_taken_0x263d5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x263d5c) {
            ctx->pc = 0x263DD8u;
            goto label_263dd8;
        }
    }
    ctx->pc = 0x263D64u;
label_263d64:
    // 0x263d64: 0x0  nop
    ctx->pc = 0x263d64u;
    // NOP
label_263d68:
    // 0x263d68: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x263d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_263d6c:
    // 0x263d6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_263d70:
    if (ctx->pc == 0x263D70u) {
        ctx->pc = 0x263D74u;
        goto label_263d74;
    }
    ctx->pc = 0x263D6Cu;
    {
        const bool branch_taken_0x263d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263d6c) {
            ctx->pc = 0x263D90u;
            goto label_263d90;
        }
    }
    ctx->pc = 0x263D74u;
label_263d74:
    // 0x263d74: 0x8fa6021c  lw          $a2, 0x21C($sp)
    ctx->pc = 0x263d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_263d78:
    // 0x263d78: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x263d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_263d7c:
    // 0x263d7c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x263d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_263d80:
    // 0x263d80: 0xc0992a8  jal         func_264AA0
label_263d84:
    if (ctx->pc == 0x263D84u) {
        ctx->pc = 0x263D84u;
            // 0x263d84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x263D88u;
        goto label_263d88;
    }
    ctx->pc = 0x263D80u;
    SET_GPR_U32(ctx, 31, 0x263D88u);
    ctx->pc = 0x263D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263D80u;
            // 0x263d84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264AA0u;
    if (runtime->hasFunction(0x264AA0u)) {
        auto targetFn = runtime->lookupFunction(0x264AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D88u; }
        if (ctx->pc != 0x263D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264AA0_0x264aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D88u; }
        if (ctx->pc != 0x263D88u) { return; }
    }
    ctx->pc = 0x263D88u;
label_263d88:
    // 0x263d88: 0x1000019d  b           . + 4 + (0x19D << 2)
label_263d8c:
    if (ctx->pc == 0x263D8Cu) {
        ctx->pc = 0x263D90u;
        goto label_263d90;
    }
    ctx->pc = 0x263D88u;
    {
        const bool branch_taken_0x263d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263d88) {
            ctx->pc = 0x264400u;
            goto label_264400;
        }
    }
    ctx->pc = 0x263D90u;
label_263d90:
    // 0x263d90: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x263d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_263d94:
    // 0x263d94: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x263d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_263d98:
    // 0x263d98: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x263d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_263d9c:
    // 0x263d9c: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x263d9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_263da0:
    // 0x263da0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_263da4:
    if (ctx->pc == 0x263DA4u) {
        ctx->pc = 0x263DA4u;
            // 0x263da4: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x263DA8u;
        goto label_263da8;
    }
    ctx->pc = 0x263DA0u;
    {
        const bool branch_taken_0x263da0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x263DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263DA0u;
            // 0x263da4: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263da0) {
            ctx->pc = 0x263DD0u;
            goto label_263dd0;
        }
    }
    ctx->pc = 0x263DA8u;
label_263da8:
    // 0x263da8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_263dac:
    if (ctx->pc == 0x263DACu) {
        ctx->pc = 0x263DACu;
            // 0x263dac: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x263DB0u;
        goto label_263db0;
    }
    ctx->pc = 0x263DA8u;
    {
        const bool branch_taken_0x263da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263DA8u;
            // 0x263dac: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263da8) {
            ctx->pc = 0x263DC0u;
            goto label_263dc0;
        }
    }
    ctx->pc = 0x263DB0u;
label_263db0:
    // 0x263db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263db4:
    // 0x263db4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x263db4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_263db8:
    // 0x263db8: 0x10000005  b           . + 4 + (0x5 << 2)
label_263dbc:
    if (ctx->pc == 0x263DBCu) {
        ctx->pc = 0x263DBCu;
            // 0x263dbc: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x263DC0u;
        goto label_263dc0;
    }
    ctx->pc = 0x263DB8u;
    {
        const bool branch_taken_0x263db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263DB8u;
            // 0x263dbc: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263db8) {
            ctx->pc = 0x263DD0u;
            goto label_263dd0;
        }
    }
    ctx->pc = 0x263DC0u;
label_263dc0:
    // 0x263dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263dc4:
    // 0x263dc4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x263dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_263dc8:
    // 0x263dc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x263dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_263dcc:
    // 0x263dcc: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x263dccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_263dd0:
    // 0x263dd0: 0x100001cb  b           . + 4 + (0x1CB << 2)
label_263dd4:
    if (ctx->pc == 0x263DD4u) {
        ctx->pc = 0x263DD4u;
            // 0x263dd4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x263DD8u;
        goto label_263dd8;
    }
    ctx->pc = 0x263DD0u;
    {
        const bool branch_taken_0x263dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263DD0u;
            // 0x263dd4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263dd0) {
            ctx->pc = 0x264500u;
            goto label_264500;
        }
    }
    ctx->pc = 0x263DD8u;
label_263dd8:
    // 0x263dd8: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x263dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_263ddc:
    // 0x263ddc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x263ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_263de0:
    // 0x263de0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x263de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_263de4:
    // 0x263de4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x263de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_263de8:
    // 0x263de8: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
label_263dec:
    if (ctx->pc == 0x263DECu) {
        ctx->pc = 0x263DF0u;
        goto label_263df0;
    }
    ctx->pc = 0x263DE8u;
    {
        const bool branch_taken_0x263de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263de8) {
            ctx->pc = 0x263F90u;
            goto label_263f90;
        }
    }
    ctx->pc = 0x263DF0u;
label_263df0:
    // 0x263df0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x263df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_263df4:
    // 0x263df4: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x263df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_263df8:
    // 0x263df8: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
label_263dfc:
    if (ctx->pc == 0x263DFCu) {
        ctx->pc = 0x263E00u;
        goto label_263e00;
    }
    ctx->pc = 0x263DF8u;
    {
        const bool branch_taken_0x263df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x263df8) {
            ctx->pc = 0x263F90u;
            goto label_263f90;
        }
    }
    ctx->pc = 0x263E00u;
label_263e00:
    // 0x263e00: 0x8ea30174  lw          $v1, 0x174($s5)
    ctx->pc = 0x263e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 372)));
label_263e04:
    // 0x263e04: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x263e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_263e08:
    // 0x263e08: 0x10620061  beq         $v1, $v0, . + 4 + (0x61 << 2)
label_263e0c:
    if (ctx->pc == 0x263E0Cu) {
        ctx->pc = 0x263E0Cu;
            // 0x263e0c: 0x46003807  neg.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[7]);
        ctx->pc = 0x263E10u;
        goto label_263e10;
    }
    ctx->pc = 0x263E08u;
    {
        const bool branch_taken_0x263e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x263E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263E08u;
            // 0x263e0c: 0x46003807  neg.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e08) {
            ctx->pc = 0x263F90u;
            goto label_263f90;
        }
    }
    ctx->pc = 0x263E10u;
label_263e10:
    // 0x263e10: 0x27a202e4  addiu       $v0, $sp, 0x2E4
    ctx->pc = 0x263e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
label_263e14:
    // 0x263e14: 0xe7a002e0  swc1        $f0, 0x2E0($sp)
    ctx->pc = 0x263e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
label_263e18:
    // 0x263e18: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x263e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_263e1c:
    // 0x263e1c: 0xc6a00124  lwc1        $f0, 0x124($s5)
    ctx->pc = 0x263e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263e20:
    // 0x263e20: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x263e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_263e24:
    // 0x263e24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x263e24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_263e28:
    // 0x263e28: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x263e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_263e2c:
    // 0x263e2c: 0xc6a00128  lwc1        $f0, 0x128($s5)
    ctx->pc = 0x263e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263e30:
    // 0x263e30: 0x27a202e8  addiu       $v0, $sp, 0x2E8
    ctx->pc = 0x263e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
label_263e34:
    // 0x263e34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x263e34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_263e38:
    // 0x263e38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x263e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_263e3c:
    // 0x263e3c: 0xc6a0012c  lwc1        $f0, 0x12C($s5)
    ctx->pc = 0x263e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263e40:
    // 0x263e40: 0x27a202ec  addiu       $v0, $sp, 0x2EC
    ctx->pc = 0x263e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 748));
label_263e44:
    // 0x263e44: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x263e44u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_263e48:
    // 0x263e48: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x263e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_263e4c:
    // 0x263e4c: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x263e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_263e50:
    // 0x263e50: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x263e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_263e54:
    // 0x263e54: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x263e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_263e58:
    // 0x263e58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x263e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_263e5c:
    // 0x263e5c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x263e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_263e60:
    // 0x263e60: 0x320f809  jalr        $t9
label_263e64:
    if (ctx->pc == 0x263E64u) {
        ctx->pc = 0x263E64u;
            // 0x263e64: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x263E68u;
        goto label_263e68;
    }
    ctx->pc = 0x263E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x263E68u);
        ctx->pc = 0x263E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263E60u;
            // 0x263e64: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263E68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263E68u; }
            if (ctx->pc != 0x263E68u) { return; }
        }
        }
    }
    ctx->pc = 0x263E68u;
label_263e68:
    // 0x263e68: 0x27a202e4  addiu       $v0, $sp, 0x2E4
    ctx->pc = 0x263e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
label_263e6c:
    // 0x263e6c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x263e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_263e70:
    // 0x263e70: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x263e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_263e74:
    // 0x263e74: 0xc6a80024  lwc1        $f8, 0x24($s5)
    ctx->pc = 0x263e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_263e78:
    // 0x263e78: 0xc6a40020  lwc1        $f4, 0x20($s5)
    ctx->pc = 0x263e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_263e7c:
    // 0x263e7c: 0xc7a502e0  lwc1        $f5, 0x2E0($sp)
    ctx->pc = 0x263e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_263e80:
    // 0x263e80: 0xc6a30028  lwc1        $f3, 0x28($s5)
    ctx->pc = 0x263e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_263e84:
    // 0x263e84: 0xc7a102e0  lwc1        $f1, 0x2E0($sp)
    ctx->pc = 0x263e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263e88:
    // 0x263e88: 0x27a202e8  addiu       $v0, $sp, 0x2E8
    ctx->pc = 0x263e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
label_263e8c:
    // 0x263e8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x263e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_263e90:
    // 0x263e90: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x263e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_263e94:
    // 0x263e94: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x263e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_263e98:
    // 0x263e98: 0xc4490024  lwc1        $f9, 0x24($v0)
    ctx->pc = 0x263e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_263e9c:
    // 0x263e9c: 0xc4470020  lwc1        $f7, 0x20($v0)
    ctx->pc = 0x263e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_263ea0:
    // 0x263ea0: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x263ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_263ea4:
    // 0x263ea4: 0x46084a01  sub.s       $f8, $f9, $f8
    ctx->pc = 0x263ea4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
label_263ea8:
    // 0x263ea8: 0x46043901  sub.s       $f4, $f7, $f4
    ctx->pc = 0x263ea8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
label_263eac:
    // 0x263eac: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x263eacu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_263eb0:
    // 0x263eb0: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x263eb0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_263eb4:
    // 0x263eb4: 0x460330c1  sub.s       $f3, $f6, $f3
    ctx->pc = 0x263eb4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_263eb8:
    // 0x263eb8: 0x46082018  adda.s      $f4, $f8
    ctx->pc = 0x263eb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
label_263ebc:
    // 0x263ebc: 0x460018dc  madd.s      $f3, $f3, $f0
    ctx->pc = 0x263ebcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_263ec0:
    // 0x263ec0: 0x46001905  abs.s       $f4, $f3
    ctx->pc = 0x263ec0u;
    ctx->f[4] = FPU_ABS_S(ctx->f[3]);
label_263ec4:
    // 0x263ec4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x263ec4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_263ec8:
    // 0x263ec8: 0x46161836  c.le.s      $f3, $f22
    ctx->pc = 0x263ec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263ecc:
    // 0x263ecc: 0x45010030  bc1t        . + 4 + (0x30 << 2)
label_263ed0:
    if (ctx->pc == 0x263ED0u) {
        ctx->pc = 0x263ED0u;
            // 0x263ed0: 0x24430020  addiu       $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x263ED4u;
        goto label_263ed4;
    }
    ctx->pc = 0x263ECCu;
    {
        const bool branch_taken_0x263ecc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x263ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263ECCu;
            // 0x263ed0: 0x24430020  addiu       $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ecc) {
            ctx->pc = 0x263F90u;
            goto label_263f90;
        }
    }
    ctx->pc = 0x263ED4u;
label_263ed4:
    // 0x263ed4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_263ed8:
    // 0x263ed8: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
label_263edc:
    if (ctx->pc == 0x263EDCu) {
        ctx->pc = 0x263EDCu;
            // 0x263edc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x263EE0u;
        goto label_263ee0;
    }
    ctx->pc = 0x263ED8u;
    {
        const bool branch_taken_0x263ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x263EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263ED8u;
            // 0x263edc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ed8) {
            ctx->pc = 0x263F30u;
            goto label_263f30;
        }
    }
    ctx->pc = 0x263EE0u;
label_263ee0:
    // 0x263ee0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_263ee4:
    if (ctx->pc == 0x263EE4u) {
        ctx->pc = 0x263EE8u;
        goto label_263ee8;
    }
    ctx->pc = 0x263EE0u;
    {
        const bool branch_taken_0x263ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x263ee0) {
            ctx->pc = 0x263EF0u;
            goto label_263ef0;
        }
    }
    ctx->pc = 0x263EE8u;
label_263ee8:
    // 0x263ee8: 0x10000023  b           . + 4 + (0x23 << 2)
label_263eec:
    if (ctx->pc == 0x263EECu) {
        ctx->pc = 0x263EF0u;
        goto label_263ef0;
    }
    ctx->pc = 0x263EE8u;
    {
        const bool branch_taken_0x263ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263ee8) {
            ctx->pc = 0x263F78u;
            goto label_263f78;
        }
    }
    ctx->pc = 0x263EF0u;
label_263ef0:
    // 0x263ef0: 0xc6a50044  lwc1        $f5, 0x44($s5)
    ctx->pc = 0x263ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_263ef4:
    // 0x263ef4: 0xc6a40040  lwc1        $f4, 0x40($s5)
    ctx->pc = 0x263ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_263ef8:
    // 0x263ef8: 0xc6a30048  lwc1        $f3, 0x48($s5)
    ctx->pc = 0x263ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_263efc:
    // 0x263efc: 0x46054941  sub.s       $f5, $f9, $f5
    ctx->pc = 0x263efcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
label_263f00:
    // 0x263f00: 0x46043901  sub.s       $f4, $f7, $f4
    ctx->pc = 0x263f00u;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
label_263f04:
    // 0x263f04: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x263f04u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_263f08:
    // 0x263f08: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x263f08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_263f0c:
    // 0x263f0c: 0x460330c1  sub.s       $f3, $f6, $f3
    ctx->pc = 0x263f0cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_263f10:
    // 0x263f10: 0x46052018  adda.s      $f4, $f5
    ctx->pc = 0x263f10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_263f14:
    // 0x263f14: 0x460018dc  madd.s      $f3, $f3, $f0
    ctx->pc = 0x263f14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_263f18:
    // 0x263f18: 0x46001905  abs.s       $f4, $f3
    ctx->pc = 0x263f18u;
    ctx->f[4] = FPU_ABS_S(ctx->f[3]);
label_263f1c:
    // 0x263f1c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x263f1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_263f20:
    // 0x263f20: 0x46161834  c.lt.s      $f3, $f22
    ctx->pc = 0x263f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263f24:
    // 0x263f24: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_263f28:
    if (ctx->pc == 0x263F28u) {
        ctx->pc = 0x263F2Cu;
        goto label_263f2c;
    }
    ctx->pc = 0x263F24u;
    {
        const bool branch_taken_0x263f24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263f24) {
            ctx->pc = 0x263F90u;
            goto label_263f90;
        }
    }
    ctx->pc = 0x263F2Cu;
label_263f2c:
    // 0x263f2c: 0x0  nop
    ctx->pc = 0x263f2cu;
    // NOP
label_263f30:
    // 0x263f30: 0xc6a80034  lwc1        $f8, 0x34($s5)
    ctx->pc = 0x263f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_263f34:
    // 0x263f34: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x263f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_263f38:
    // 0x263f38: 0xc6a60030  lwc1        $f6, 0x30($s5)
    ctx->pc = 0x263f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_263f3c:
    // 0x263f3c: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x263f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_263f40:
    // 0x263f40: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x263f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_263f44:
    // 0x263f44: 0xc6a40038  lwc1        $f4, 0x38($s5)
    ctx->pc = 0x263f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_263f48:
    // 0x263f48: 0x460839c1  sub.s       $f7, $f7, $f8
    ctx->pc = 0x263f48u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
label_263f4c:
    // 0x263f4c: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x263f4cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_263f50:
    // 0x263f50: 0x46062881  sub.s       $f2, $f5, $f6
    ctx->pc = 0x263f50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_263f54:
    // 0x263f54: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x263f54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_263f58:
    // 0x263f58: 0x46070818  adda.s      $f1, $f7
    ctx->pc = 0x263f58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_263f5c:
    // 0x263f5c: 0x46041841  sub.s       $f1, $f3, $f4
    ctx->pc = 0x263f5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_263f60:
    // 0x263f60: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x263f60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_263f64:
    // 0x263f64: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x263f64u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_263f68:
    // 0x263f68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x263f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_263f6c:
    // 0x263f6c: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x263f6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_263f70:
    // 0x263f70: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_263f74:
    if (ctx->pc == 0x263F74u) {
        ctx->pc = 0x263F78u;
        goto label_263f78;
    }
    ctx->pc = 0x263F70u;
    {
        const bool branch_taken_0x263f70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263f70) {
            ctx->pc = 0x263F90u;
            goto label_263f90;
        }
    }
    ctx->pc = 0x263F78u;
label_263f78:
    // 0x263f78: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x263f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_263f7c:
    // 0x263f7c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x263f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_263f80:
    // 0x263f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263f84:
    // 0x263f84: 0x1000fc1e  b           . + 4 + (-0x3E2 << 2)
label_263f88:
    if (ctx->pc == 0x263F88u) {
        ctx->pc = 0x263F88u;
            // 0x263f88: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x263F8Cu;
        goto label_263f8c;
    }
    ctx->pc = 0x263F84u;
    {
        const bool branch_taken_0x263f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263F84u;
            // 0x263f88: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f84) {
            ctx->pc = 0x263000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263000;
        }
    }
    ctx->pc = 0x263F8Cu;
label_263f8c:
    // 0x263f8c: 0x0  nop
    ctx->pc = 0x263f8cu;
    // NOP
label_263f90:
    // 0x263f90: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x263f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_263f94:
    // 0x263f94: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x263f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_263f98:
    // 0x263f98: 0x106200ab  beq         $v1, $v0, . + 4 + (0xAB << 2)
label_263f9c:
    if (ctx->pc == 0x263F9Cu) {
        ctx->pc = 0x263FA0u;
        goto label_263fa0;
    }
    ctx->pc = 0x263F98u;
    {
        const bool branch_taken_0x263f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x263f98) {
            ctx->pc = 0x264248u;
            goto label_264248;
        }
    }
    ctx->pc = 0x263FA0u;
label_263fa0:
    // 0x263fa0: 0x8ea30174  lw          $v1, 0x174($s5)
    ctx->pc = 0x263fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 372)));
label_263fa4:
    // 0x263fa4: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x263fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_263fa8:
    // 0x263fa8: 0x106200a7  beq         $v1, $v0, . + 4 + (0xA7 << 2)
label_263fac:
    if (ctx->pc == 0x263FACu) {
        ctx->pc = 0x263FB0u;
        goto label_263fb0;
    }
    ctx->pc = 0x263FA8u;
    {
        const bool branch_taken_0x263fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x263fa8) {
            ctx->pc = 0x264248u;
            goto label_264248;
        }
    }
    ctx->pc = 0x263FB0u;
label_263fb0:
    // 0x263fb0: 0xc6a50120  lwc1        $f5, 0x120($s5)
    ctx->pc = 0x263fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_263fb4:
    // 0x263fb4: 0x26820014  addiu       $v0, $s4, 0x14
    ctx->pc = 0x263fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_263fb8:
    // 0x263fb8: 0x8fa4021c  lw          $a0, 0x21C($sp)
    ctx->pc = 0x263fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_263fbc:
    // 0x263fbc: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x263fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_263fc0:
    // 0x263fc0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x263fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_263fc4:
    // 0x263fc4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x263fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_263fc8:
    // 0x263fc8: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x263fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_263fcc:
    // 0x263fcc: 0x26820018  addiu       $v0, $s4, 0x18
    ctx->pc = 0x263fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_263fd0:
    // 0x263fd0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x263fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_263fd4:
    // 0x263fd4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x263fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_263fd8:
    // 0x263fd8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x263fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_263fdc:
    // 0x263fdc: 0x26820024  addiu       $v0, $s4, 0x24
    ctx->pc = 0x263fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_263fe0:
    // 0x263fe0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x263fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_263fe4:
    // 0x263fe4: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x263fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_263fe8:
    // 0x263fe8: 0x26820028  addiu       $v0, $s4, 0x28
    ctx->pc = 0x263fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_263fec:
    // 0x263fec: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x263fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_263ff0:
    // 0x263ff0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x263ff0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_263ff4:
    // 0x263ff4: 0x27a202d4  addiu       $v0, $sp, 0x2D4
    ctx->pc = 0x263ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 724));
label_263ff8:
    // 0x263ff8: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x263ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_263ffc:
    // 0x263ffc: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x263ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_264000:
    // 0x264000: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x264000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_264004:
    // 0x264004: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x264004u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_264008:
    // 0x264008: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x264008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_26400c:
    // 0x26400c: 0xe7a002d0  swc1        $f0, 0x2D0($sp)
    ctx->pc = 0x26400cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_264010:
    // 0x264010: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x264010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_264014:
    // 0x264014: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x264014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_264018:
    // 0x264018: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x264018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26401c:
    // 0x26401c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x26401cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_264020:
    // 0x264020: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x264020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_264024:
    // 0x264024: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x264024u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_264028:
    // 0x264028: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x264028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_26402c:
    // 0x26402c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x26402cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_264030:
    // 0x264030: 0xc6820020  lwc1        $f2, 0x20($s4)
    ctx->pc = 0x264030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_264034:
    // 0x264034: 0x27a202d8  addiu       $v0, $sp, 0x2D8
    ctx->pc = 0x264034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_264038:
    // 0x264038: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x264038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26403c:
    // 0x26403c: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x26403cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_264040:
    // 0x264040: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x264040u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_264044:
    // 0x264044: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x264044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_264048:
    // 0x264048: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x264048u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_26404c:
    // 0x26404c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x26404cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_264050:
    // 0x264050: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x264050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_264054:
    // 0x264054: 0x27a202dc  addiu       $v0, $sp, 0x2DC
    ctx->pc = 0x264054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 732));
label_264058:
    // 0x264058: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x264058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_26405c:
    // 0x26405c: 0x8fa2021c  lw          $v0, 0x21C($sp)
    ctx->pc = 0x26405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_264060:
    // 0x264060: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x264060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_264064:
    // 0x264064: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x264064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_264068:
    // 0x264068: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x264068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_26406c:
    // 0x26406c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x26406cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_264070:
    // 0x264070: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x264070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_264074:
    // 0x264074: 0x320f809  jalr        $t9
label_264078:
    if (ctx->pc == 0x264078u) {
        ctx->pc = 0x264078u;
            // 0x264078: 0x244600e0  addiu       $a2, $v0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
        ctx->pc = 0x26407Cu;
        goto label_26407c;
    }
    ctx->pc = 0x264074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26407Cu);
        ctx->pc = 0x264078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264074u;
            // 0x264078: 0x244600e0  addiu       $a2, $v0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26407Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26407Cu; }
            if (ctx->pc != 0x26407Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26407Cu;
label_26407c:
    // 0x26407c: 0x27a202d4  addiu       $v0, $sp, 0x2D4
    ctx->pc = 0x26407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 724));
label_264080:
    // 0x264080: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x264080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_264084:
    // 0x264084: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x264084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_264088:
    // 0x264088: 0xc6a800e4  lwc1        $f8, 0xE4($s5)
    ctx->pc = 0x264088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_26408c:
    // 0x26408c: 0xc6a400e0  lwc1        $f4, 0xE0($s5)
    ctx->pc = 0x26408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_264090:
    // 0x264090: 0xc7a502d0  lwc1        $f5, 0x2D0($sp)
    ctx->pc = 0x264090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_264094:
    // 0x264094: 0xc6a300e8  lwc1        $f3, 0xE8($s5)
    ctx->pc = 0x264094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_264098:
    // 0x264098: 0xc7a102d0  lwc1        $f1, 0x2D0($sp)
    ctx->pc = 0x264098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26409c:
    // 0x26409c: 0x27a202d8  addiu       $v0, $sp, 0x2D8
    ctx->pc = 0x26409cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_2640a0:
    // 0x2640a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2640a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2640a4:
    // 0x2640a4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2640a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2640a8:
    // 0x2640a8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2640a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2640ac:
    // 0x2640ac: 0xc44900e4  lwc1        $f9, 0xE4($v0)
    ctx->pc = 0x2640acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2640b0:
    // 0x2640b0: 0xc44700e0  lwc1        $f7, 0xE0($v0)
    ctx->pc = 0x2640b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2640b4:
    // 0x2640b4: 0xc44600e8  lwc1        $f6, 0xE8($v0)
    ctx->pc = 0x2640b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2640b8:
    // 0x2640b8: 0x46084a01  sub.s       $f8, $f9, $f8
    ctx->pc = 0x2640b8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
label_2640bc:
    // 0x2640bc: 0x46043901  sub.s       $f4, $f7, $f4
    ctx->pc = 0x2640bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
label_2640c0:
    // 0x2640c0: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x2640c0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_2640c4:
    // 0x2640c4: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2640c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_2640c8:
    // 0x2640c8: 0x460330c1  sub.s       $f3, $f6, $f3
    ctx->pc = 0x2640c8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_2640cc:
    // 0x2640cc: 0x46082018  adda.s      $f4, $f8
    ctx->pc = 0x2640ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
label_2640d0:
    // 0x2640d0: 0x460018dc  madd.s      $f3, $f3, $f0
    ctx->pc = 0x2640d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2640d4:
    // 0x2640d4: 0x46001905  abs.s       $f4, $f3
    ctx->pc = 0x2640d4u;
    ctx->f[4] = FPU_ABS_S(ctx->f[3]);
label_2640d8:
    // 0x2640d8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2640d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_2640dc:
    // 0x2640dc: 0x46161836  c.le.s      $f3, $f22
    ctx->pc = 0x2640dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2640e0:
    // 0x2640e0: 0x45010059  bc1t        . + 4 + (0x59 << 2)
label_2640e4:
    if (ctx->pc == 0x2640E4u) {
        ctx->pc = 0x2640E4u;
            // 0x2640e4: 0x244500e0  addiu       $a1, $v0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
        ctx->pc = 0x2640E8u;
        goto label_2640e8;
    }
    ctx->pc = 0x2640E0u;
    {
        const bool branch_taken_0x2640e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2640E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2640E0u;
            // 0x2640e4: 0x244500e0  addiu       $a1, $v0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640e0) {
            ctx->pc = 0x264248u;
            goto label_264248;
        }
    }
    ctx->pc = 0x2640E8u;
label_2640e8:
    // 0x2640e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2640e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2640ec:
    // 0x2640ec: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_2640f0:
    if (ctx->pc == 0x2640F0u) {
        ctx->pc = 0x2640F0u;
            // 0x2640f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2640F4u;
        goto label_2640f4;
    }
    ctx->pc = 0x2640ECu;
    {
        const bool branch_taken_0x2640ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2640F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2640ECu;
            // 0x2640f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640ec) {
            ctx->pc = 0x264148u;
            goto label_264148;
        }
    }
    ctx->pc = 0x2640F4u;
label_2640f4:
    // 0x2640f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2640f8:
    if (ctx->pc == 0x2640F8u) {
        ctx->pc = 0x2640FCu;
        goto label_2640fc;
    }
    ctx->pc = 0x2640F4u;
    {
        const bool branch_taken_0x2640f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2640f4) {
            ctx->pc = 0x264108u;
            goto label_264108;
        }
    }
    ctx->pc = 0x2640FCu;
label_2640fc:
    // 0x2640fc: 0x10000024  b           . + 4 + (0x24 << 2)
label_264100:
    if (ctx->pc == 0x264100u) {
        ctx->pc = 0x264104u;
        goto label_264104;
    }
    ctx->pc = 0x2640FCu;
    {
        const bool branch_taken_0x2640fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2640fc) {
            ctx->pc = 0x264190u;
            goto label_264190;
        }
    }
    ctx->pc = 0x264104u;
label_264104:
    // 0x264104: 0x0  nop
    ctx->pc = 0x264104u;
    // NOP
label_264108:
    // 0x264108: 0xc6a50104  lwc1        $f5, 0x104($s5)
    ctx->pc = 0x264108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_26410c:
    // 0x26410c: 0xc6a40100  lwc1        $f4, 0x100($s5)
    ctx->pc = 0x26410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_264110:
    // 0x264110: 0xc6a30108  lwc1        $f3, 0x108($s5)
    ctx->pc = 0x264110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_264114:
    // 0x264114: 0x46054941  sub.s       $f5, $f9, $f5
    ctx->pc = 0x264114u;
    ctx->f[5] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
label_264118:
    // 0x264118: 0x46043901  sub.s       $f4, $f7, $f4
    ctx->pc = 0x264118u;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
label_26411c:
    // 0x26411c: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x26411cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_264120:
    // 0x264120: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x264120u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_264124:
    // 0x264124: 0x460330c1  sub.s       $f3, $f6, $f3
    ctx->pc = 0x264124u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_264128:
    // 0x264128: 0x46052018  adda.s      $f4, $f5
    ctx->pc = 0x264128u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_26412c:
    // 0x26412c: 0x460018dc  madd.s      $f3, $f3, $f0
    ctx->pc = 0x26412cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_264130:
    // 0x264130: 0x46001905  abs.s       $f4, $f3
    ctx->pc = 0x264130u;
    ctx->f[4] = FPU_ABS_S(ctx->f[3]);
label_264134:
    // 0x264134: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x264134u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_264138:
    // 0x264138: 0x46161834  c.lt.s      $f3, $f22
    ctx->pc = 0x264138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26413c:
    // 0x26413c: 0x45010042  bc1t        . + 4 + (0x42 << 2)
label_264140:
    if (ctx->pc == 0x264140u) {
        ctx->pc = 0x264144u;
        goto label_264144;
    }
    ctx->pc = 0x26413Cu;
    {
        const bool branch_taken_0x26413c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26413c) {
            ctx->pc = 0x264248u;
            goto label_264248;
        }
    }
    ctx->pc = 0x264144u;
label_264144:
    // 0x264144: 0x0  nop
    ctx->pc = 0x264144u;
    // NOP
label_264148:
    // 0x264148: 0xc6a800f4  lwc1        $f8, 0xF4($s5)
    ctx->pc = 0x264148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_26414c:
    // 0x26414c: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x26414cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_264150:
    // 0x264150: 0xc6a600f0  lwc1        $f6, 0xF0($s5)
    ctx->pc = 0x264150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_264154:
    // 0x264154: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x264154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_264158:
    // 0x264158: 0xc6a400f8  lwc1        $f4, 0xF8($s5)
    ctx->pc = 0x264158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26415c:
    // 0x26415c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x26415cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_264160:
    // 0x264160: 0x460839c1  sub.s       $f7, $f7, $f8
    ctx->pc = 0x264160u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
label_264164:
    // 0x264164: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x264164u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_264168:
    // 0x264168: 0x46062881  sub.s       $f2, $f5, $f6
    ctx->pc = 0x264168u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_26416c:
    // 0x26416c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x26416cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_264170:
    // 0x264170: 0x46070818  adda.s      $f1, $f7
    ctx->pc = 0x264170u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_264174:
    // 0x264174: 0x46041841  sub.s       $f1, $f3, $f4
    ctx->pc = 0x264174u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_264178:
    // 0x264178: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x264178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_26417c:
    // 0x26417c: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x26417cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_264180:
    // 0x264180: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x264180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_264184:
    // 0x264184: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x264184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_264188:
    // 0x264188: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
label_26418c:
    if (ctx->pc == 0x26418Cu) {
        ctx->pc = 0x264190u;
        goto label_264190;
    }
    ctx->pc = 0x264188u;
    {
        const bool branch_taken_0x264188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x264188) {
            ctx->pc = 0x264248u;
            goto label_264248;
        }
    }
    ctx->pc = 0x264190u;
label_264190:
    // 0x264190: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x264190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_264194:
    // 0x264194: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x264194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_264198:
    // 0x264198: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x264198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_26419c:
    // 0x26419c: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x26419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2641a0:
    // 0x2641a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2641a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2641a4:
    // 0x2641a4: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x2641a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2641a8:
    // 0x2641a8: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x2641a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2641ac:
    // 0x2641ac: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2641acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2641b0:
    // 0x2641b0: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x2641b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2641b4:
    // 0x2641b4: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x2641b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2641b8:
    // 0x2641b8: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x2641b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_2641bc:
    // 0x2641bc: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2641bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2641c0:
    // 0x2641c0: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x2641c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2641c4:
    // 0x2641c4: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x2641c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_2641c8:
    // 0x2641c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2641c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2641cc:
    // 0x2641cc: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x2641ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
label_2641d0:
    // 0x2641d0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2641d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2641d4:
    // 0x2641d4: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x2641d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2641d8:
    // 0x2641d8: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x2641d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2641dc:
    // 0x2641dc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2641dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2641e0:
    // 0x2641e0: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x2641e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_2641e4:
    // 0x2641e4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2641e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2641e8:
    // 0x2641e8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2641e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2641ec:
    // 0x2641ec: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x2641ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2641f0:
    // 0x2641f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2641f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2641f4:
    // 0x2641f4: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x2641f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_2641f8:
    // 0x2641f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2641f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2641fc:
    // 0x2641fc: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x2641fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
label_264200:
    // 0x264200: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x264200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_264204:
    // 0x264204: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x264204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_264208:
    // 0x264208: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x264208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26420c:
    // 0x26420c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x26420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_264210:
    // 0x264210: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x264210u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_264214:
    // 0x264214: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x264214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_264218:
    // 0x264218: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x264218u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_26421c:
    // 0x26421c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x26421cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_264220:
    // 0x264220: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x264220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_264224:
    // 0x264224: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x264224u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_264228:
    // 0x264228: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x264228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26422c:
    // 0x26422c: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x26422cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
label_264230:
    // 0x264230: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x264230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
label_264234:
    // 0x264234: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x264234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_264238:
    // 0x264238: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x264238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26423c:
    // 0x26423c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x26423cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_264240:
    // 0x264240: 0x1000fb6f  b           . + 4 + (-0x491 << 2)
label_264244:
    if (ctx->pc == 0x264244u) {
        ctx->pc = 0x264244u;
            // 0x264244: 0xaea30014  sw          $v1, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x264248u;
        goto label_264248;
    }
    ctx->pc = 0x264240u;
    {
        const bool branch_taken_0x264240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264240u;
            // 0x264244: 0xaea30014  sw          $v1, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264240) {
            ctx->pc = 0x263000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263000;
        }
    }
    ctx->pc = 0x264248u;
label_264248:
    // 0x264248: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x264248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_26424c:
    // 0x26424c: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
label_264250:
    if (ctx->pc == 0x264250u) {
        ctx->pc = 0x264254u;
        goto label_264254;
    }
    ctx->pc = 0x26424Cu;
    {
        const bool branch_taken_0x26424c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26424c) {
            ctx->pc = 0x264400u;
            goto label_264400;
        }
    }
    ctx->pc = 0x264254u;
label_264254:
    // 0x264254: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x264254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_264258:
    // 0x264258: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x264258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_26425c:
    // 0x26425c: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
label_264260:
    if (ctx->pc == 0x264260u) {
        ctx->pc = 0x264264u;
        goto label_264264;
    }
    ctx->pc = 0x26425Cu;
    {
        const bool branch_taken_0x26425c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26425c) {
            ctx->pc = 0x264400u;
            goto label_264400;
        }
    }
    ctx->pc = 0x264264u;
label_264264:
    // 0x264264: 0x8ea30174  lw          $v1, 0x174($s5)
    ctx->pc = 0x264264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 372)));
label_264268:
    // 0x264268: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x264268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_26426c:
    // 0x26426c: 0x10620064  beq         $v1, $v0, . + 4 + (0x64 << 2)
label_264270:
    if (ctx->pc == 0x264270u) {
        ctx->pc = 0x264274u;
        goto label_264274;
    }
    ctx->pc = 0x26426Cu;
    {
        const bool branch_taken_0x26426c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26426c) {
            ctx->pc = 0x264400u;
            goto label_264400;
        }
    }
    ctx->pc = 0x264274u;
label_264274:
    // 0x264274: 0xc6a00120  lwc1        $f0, 0x120($s5)
    ctx->pc = 0x264274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_264278:
    // 0x264278: 0x27a202c4  addiu       $v0, $sp, 0x2C4
    ctx->pc = 0x264278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
label_26427c:
    // 0x26427c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26427cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_264280:
    // 0x264280: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x264280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_264284:
    // 0x264284: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x264284u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_264288:
    // 0x264288: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x264288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_26428c:
    // 0x26428c: 0xc6a00124  lwc1        $f0, 0x124($s5)
    ctx->pc = 0x26428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_264290:
    // 0x264290: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x264290u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_264294:
    // 0x264294: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x264294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_264298:
    // 0x264298: 0xc6a00128  lwc1        $f0, 0x128($s5)
    ctx->pc = 0x264298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26429c:
    // 0x26429c: 0x27a202c8  addiu       $v0, $sp, 0x2C8
    ctx->pc = 0x26429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_2642a0:
    // 0x2642a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2642a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2642a4:
    // 0x2642a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2642a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2642a8:
    // 0x2642a8: 0xc6a0012c  lwc1        $f0, 0x12C($s5)
    ctx->pc = 0x2642a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2642ac:
    // 0x2642ac: 0x27a202cc  addiu       $v0, $sp, 0x2CC
    ctx->pc = 0x2642acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_2642b0:
    // 0x2642b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2642b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2642b4:
    // 0x2642b4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2642b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2642b8:
    // 0x2642b8: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x2642b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2642bc:
    // 0x2642bc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2642bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2642c0:
    // 0x2642c0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2642c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2642c4:
    // 0x2642c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2642c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2642c8:
    // 0x2642c8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2642c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2642cc:
    // 0x2642cc: 0x320f809  jalr        $t9
label_2642d0:
    if (ctx->pc == 0x2642D0u) {
        ctx->pc = 0x2642D0u;
            // 0x2642d0: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x2642D4u;
        goto label_2642d4;
    }
    ctx->pc = 0x2642CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2642D4u);
        ctx->pc = 0x2642D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2642CCu;
            // 0x2642d0: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2642D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2642D4u; }
            if (ctx->pc != 0x2642D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2642D4u;
label_2642d4:
    // 0x2642d4: 0x27a202c4  addiu       $v0, $sp, 0x2C4
    ctx->pc = 0x2642d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
label_2642d8:
    // 0x2642d8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2642d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2642dc:
    // 0x2642dc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2642dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2642e0:
    // 0x2642e0: 0xc6a80024  lwc1        $f8, 0x24($s5)
    ctx->pc = 0x2642e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2642e4:
    // 0x2642e4: 0xc6a40020  lwc1        $f4, 0x20($s5)
    ctx->pc = 0x2642e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2642e8:
    // 0x2642e8: 0xc7a502c0  lwc1        $f5, 0x2C0($sp)
    ctx->pc = 0x2642e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2642ec:
    // 0x2642ec: 0xc6a30028  lwc1        $f3, 0x28($s5)
    ctx->pc = 0x2642ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2642f0:
    // 0x2642f0: 0xc7a102c0  lwc1        $f1, 0x2C0($sp)
    ctx->pc = 0x2642f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2642f4:
    // 0x2642f4: 0x27a202c8  addiu       $v0, $sp, 0x2C8
    ctx->pc = 0x2642f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_2642f8:
    // 0x2642f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2642f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2642fc:
    // 0x2642fc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2642fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_264300:
    // 0x264300: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x264300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_264304:
    // 0x264304: 0xc4490024  lwc1        $f9, 0x24($v0)
    ctx->pc = 0x264304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_264308:
    // 0x264308: 0xc4470020  lwc1        $f7, 0x20($v0)
    ctx->pc = 0x264308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_26430c:
    // 0x26430c: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x26430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_264310:
    // 0x264310: 0x46084a01  sub.s       $f8, $f9, $f8
    ctx->pc = 0x264310u;
    ctx->f[8] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
label_264314:
    // 0x264314: 0x46043901  sub.s       $f4, $f7, $f4
    ctx->pc = 0x264314u;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
label_264318:
    // 0x264318: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x264318u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_26431c:
    // 0x26431c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x26431cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_264320:
    // 0x264320: 0x460330c1  sub.s       $f3, $f6, $f3
    ctx->pc = 0x264320u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_264324:
    // 0x264324: 0x46082018  adda.s      $f4, $f8
    ctx->pc = 0x264324u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
label_264328:
    // 0x264328: 0x460018dc  madd.s      $f3, $f3, $f0
    ctx->pc = 0x264328u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_26432c:
    // 0x26432c: 0x46001905  abs.s       $f4, $f3
    ctx->pc = 0x26432cu;
    ctx->f[4] = FPU_ABS_S(ctx->f[3]);
label_264330:
    // 0x264330: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x264330u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_264334:
    // 0x264334: 0x46161836  c.le.s      $f3, $f22
    ctx->pc = 0x264334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_264338:
    // 0x264338: 0x45010031  bc1t        . + 4 + (0x31 << 2)
label_26433c:
    if (ctx->pc == 0x26433Cu) {
        ctx->pc = 0x26433Cu;
            // 0x26433c: 0x24430020  addiu       $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x264340u;
        goto label_264340;
    }
    ctx->pc = 0x264338u;
    {
        const bool branch_taken_0x264338 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26433Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264338u;
            // 0x26433c: 0x24430020  addiu       $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264338) {
            ctx->pc = 0x264400u;
            goto label_264400;
        }
    }
    ctx->pc = 0x264340u;
label_264340:
    // 0x264340: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x264340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_264344:
    // 0x264344: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
label_264348:
    if (ctx->pc == 0x264348u) {
        ctx->pc = 0x264348u;
            // 0x264348: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x26434Cu;
        goto label_26434c;
    }
    ctx->pc = 0x264344u;
    {
        const bool branch_taken_0x264344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x264348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264344u;
            // 0x264348: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264344) {
            ctx->pc = 0x2643A0u;
            goto label_2643a0;
        }
    }
    ctx->pc = 0x26434Cu;
label_26434c:
    // 0x26434c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_264350:
    if (ctx->pc == 0x264350u) {
        ctx->pc = 0x264354u;
        goto label_264354;
    }
    ctx->pc = 0x26434Cu;
    {
        const bool branch_taken_0x26434c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26434c) {
            ctx->pc = 0x264360u;
            goto label_264360;
        }
    }
    ctx->pc = 0x264354u;
label_264354:
    // 0x264354: 0x10000024  b           . + 4 + (0x24 << 2)
label_264358:
    if (ctx->pc == 0x264358u) {
        ctx->pc = 0x26435Cu;
        goto label_26435c;
    }
    ctx->pc = 0x264354u;
    {
        const bool branch_taken_0x264354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264354) {
            ctx->pc = 0x2643E8u;
            goto label_2643e8;
        }
    }
    ctx->pc = 0x26435Cu;
label_26435c:
    // 0x26435c: 0x0  nop
    ctx->pc = 0x26435cu;
    // NOP
label_264360:
    // 0x264360: 0xc6a50044  lwc1        $f5, 0x44($s5)
    ctx->pc = 0x264360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_264364:
    // 0x264364: 0xc6a40040  lwc1        $f4, 0x40($s5)
    ctx->pc = 0x264364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_264368:
    // 0x264368: 0xc6a30048  lwc1        $f3, 0x48($s5)
    ctx->pc = 0x264368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26436c:
    // 0x26436c: 0x46054941  sub.s       $f5, $f9, $f5
    ctx->pc = 0x26436cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
label_264370:
    // 0x264370: 0x46043901  sub.s       $f4, $f7, $f4
    ctx->pc = 0x264370u;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
label_264374:
    // 0x264374: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x264374u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_264378:
    // 0x264378: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x264378u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_26437c:
    // 0x26437c: 0x460330c1  sub.s       $f3, $f6, $f3
    ctx->pc = 0x26437cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_264380:
    // 0x264380: 0x46052018  adda.s      $f4, $f5
    ctx->pc = 0x264380u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_264384:
    // 0x264384: 0x460018dc  madd.s      $f3, $f3, $f0
    ctx->pc = 0x264384u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_264388:
    // 0x264388: 0x46001905  abs.s       $f4, $f3
    ctx->pc = 0x264388u;
    ctx->f[4] = FPU_ABS_S(ctx->f[3]);
label_26438c:
    // 0x26438c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x26438cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_264390:
    // 0x264390: 0x46161834  c.lt.s      $f3, $f22
    ctx->pc = 0x264390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_264394:
    // 0x264394: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_264398:
    if (ctx->pc == 0x264398u) {
        ctx->pc = 0x26439Cu;
        goto label_26439c;
    }
    ctx->pc = 0x264394u;
    {
        const bool branch_taken_0x264394 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x264394) {
            ctx->pc = 0x264400u;
            goto label_264400;
        }
    }
    ctx->pc = 0x26439Cu;
label_26439c:
    // 0x26439c: 0x0  nop
    ctx->pc = 0x26439cu;
    // NOP
label_2643a0:
    // 0x2643a0: 0xc6a80034  lwc1        $f8, 0x34($s5)
    ctx->pc = 0x2643a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2643a4:
    // 0x2643a4: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x2643a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2643a8:
    // 0x2643a8: 0xc6a60030  lwc1        $f6, 0x30($s5)
    ctx->pc = 0x2643a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2643ac:
    // 0x2643ac: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2643acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2643b0:
    // 0x2643b0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2643b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2643b4:
    // 0x2643b4: 0xc6a40038  lwc1        $f4, 0x38($s5)
    ctx->pc = 0x2643b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2643b8:
    // 0x2643b8: 0x460839c1  sub.s       $f7, $f7, $f8
    ctx->pc = 0x2643b8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
label_2643bc:
    // 0x2643bc: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x2643bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_2643c0:
    // 0x2643c0: 0x46062881  sub.s       $f2, $f5, $f6
    ctx->pc = 0x2643c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_2643c4:
    // 0x2643c4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2643c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2643c8:
    // 0x2643c8: 0x46070818  adda.s      $f1, $f7
    ctx->pc = 0x2643c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_2643cc:
    // 0x2643cc: 0x46041841  sub.s       $f1, $f3, $f4
    ctx->pc = 0x2643ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_2643d0:
    // 0x2643d0: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x2643d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_2643d4:
    // 0x2643d4: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x2643d4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_2643d8:
    // 0x2643d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2643d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2643dc:
    // 0x2643dc: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2643dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2643e0:
    // 0x2643e0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2643e4:
    if (ctx->pc == 0x2643E4u) {
        ctx->pc = 0x2643E8u;
        goto label_2643e8;
    }
    ctx->pc = 0x2643E0u;
    {
        const bool branch_taken_0x2643e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2643e0) {
            ctx->pc = 0x264400u;
            goto label_264400;
        }
    }
    ctx->pc = 0x2643E8u;
label_2643e8:
    // 0x2643e8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2643e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2643ec:
    // 0x2643ec: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2643ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2643f0:
    // 0x2643f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2643f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2643f4:
    // 0x2643f4: 0x1000fb02  b           . + 4 + (-0x4FE << 2)
label_2643f8:
    if (ctx->pc == 0x2643F8u) {
        ctx->pc = 0x2643F8u;
            // 0x2643f8: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2643FCu;
        goto label_2643fc;
    }
    ctx->pc = 0x2643F4u;
    {
        const bool branch_taken_0x2643f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2643F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2643F4u;
            // 0x2643f8: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2643f4) {
            ctx->pc = 0x263000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263000;
        }
    }
    ctx->pc = 0x2643FCu;
label_2643fc:
    // 0x2643fc: 0x0  nop
    ctx->pc = 0x2643fcu;
    // NOP
label_264400:
    // 0x264400: 0xc6a50020  lwc1        $f5, 0x20($s5)
    ctx->pc = 0x264400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_264404:
    // 0x264404: 0xc6a400a0  lwc1        $f4, 0xA0($s5)
    ctx->pc = 0x264404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_264408:
    // 0x264408: 0xc6a30024  lwc1        $f3, 0x24($s5)
    ctx->pc = 0x264408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26440c:
    // 0x26440c: 0xc6a200a4  lwc1        $f2, 0xA4($s5)
    ctx->pc = 0x26440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_264410:
    // 0x264410: 0xc6a10028  lwc1        $f1, 0x28($s5)
    ctx->pc = 0x264410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_264414:
    // 0x264414: 0xc6a000a8  lwc1        $f0, 0xA8($s5)
    ctx->pc = 0x264414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_264418:
    // 0x264418: 0xc6a60124  lwc1        $f6, 0x124($s5)
    ctx->pc = 0x264418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_26441c:
    // 0x26441c: 0x46042a01  sub.s       $f8, $f5, $f4
    ctx->pc = 0x26441cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_264420:
    // 0x264420: 0x460219c1  sub.s       $f7, $f3, $f2
    ctx->pc = 0x264420u;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_264424:
    // 0x264424: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x264424u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_264428:
    // 0x264428: 0xc6a50120  lwc1        $f5, 0x120($s5)
    ctx->pc = 0x264428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_26442c:
    // 0x26442c: 0xc6a40128  lwc1        $f4, 0x128($s5)
    ctx->pc = 0x26442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_264430:
    // 0x264430: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x264430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_264434:
    // 0x264434: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x264434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_264438:
    // 0x264438: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x264438u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26443c:
    // 0x26443c: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x26443cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_264440:
    // 0x264440: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x264440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_264444:
    // 0x264444: 0x46090032  c.eq.s      $f0, $f9
    ctx->pc = 0x264444u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_264448:
    // 0x264448: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_26444c:
    if (ctx->pc == 0x26444Cu) {
        ctx->pc = 0x264450u;
        goto label_264450;
    }
    ctx->pc = 0x264448u;
    {
        const bool branch_taken_0x264448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x264448) {
            ctx->pc = 0x264470u;
            goto label_264470;
        }
    }
    ctx->pc = 0x264450u;
label_264450:
    // 0x264450: 0x0  nop
    ctx->pc = 0x264450u;
    // NOP
label_264454:
    // 0x264454: 0x0  nop
    ctx->pc = 0x264454u;
    // NOP
label_264458:
    // 0x264458: 0x4600aa56  rsqrt.s     $f9, $f21, $f0
    ctx->pc = 0x264458u;
    ctx->f[9] = 1.0f / sqrtf(ctx->f[21]);
label_26445c:
    // 0x26445c: 0x0  nop
    ctx->pc = 0x26445cu;
    // NOP
label_264460:
    // 0x264460: 0x0  nop
    ctx->pc = 0x264460u;
    // NOP
label_264464:
    // 0x264464: 0x10000002  b           . + 4 + (0x2 << 2)
label_264468:
    if (ctx->pc == 0x264468u) {
        ctx->pc = 0x26446Cu;
        goto label_26446c;
    }
    ctx->pc = 0x264464u;
    {
        const bool branch_taken_0x264464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264464) {
            ctx->pc = 0x264470u;
            goto label_264470;
        }
    }
    ctx->pc = 0x26446Cu;
label_26446c:
    // 0x26446c: 0x0  nop
    ctx->pc = 0x26446cu;
    // NOP
label_264470:
    // 0x264470: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x264470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264474:
    // 0x264474: 0xc6a00120  lwc1        $f0, 0x120($s5)
    ctx->pc = 0x264474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_264478:
    // 0x264478: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x264478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_26447c:
    // 0x26447c: 0xe6a00120  swc1        $f0, 0x120($s5)
    ctx->pc = 0x26447cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 288), bits); }
label_264480:
    // 0x264480: 0xc6a00124  lwc1        $f0, 0x124($s5)
    ctx->pc = 0x264480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_264484:
    // 0x264484: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x264484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_264488:
    // 0x264488: 0xe6a00124  swc1        $f0, 0x124($s5)
    ctx->pc = 0x264488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 292), bits); }
label_26448c:
    // 0x26448c: 0xc6a00128  lwc1        $f0, 0x128($s5)
    ctx->pc = 0x26448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_264490:
    // 0x264490: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x264490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_264494:
    // 0x264494: 0xe6a00128  swc1        $f0, 0x128($s5)
    ctx->pc = 0x264494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 296), bits); }
label_264498:
    // 0x264498: 0xc6a0012c  lwc1        $f0, 0x12C($s5)
    ctx->pc = 0x264498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26449c:
    // 0x26449c: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x26449cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_2644a0:
    // 0x2644a0: 0xe6a0012c  swc1        $f0, 0x12C($s5)
    ctx->pc = 0x2644a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
label_2644a4:
    // 0x2644a4: 0xc6a00120  lwc1        $f0, 0x120($s5)
    ctx->pc = 0x2644a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2644a8:
    // 0x2644a8: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x2644a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_2644ac:
    // 0x2644ac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2644acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2644b0:
    // 0x2644b0: 0xc6a00124  lwc1        $f0, 0x124($s5)
    ctx->pc = 0x2644b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2644b4:
    // 0x2644b4: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x2644b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_2644b8:
    // 0x2644b8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2644b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2644bc:
    // 0x2644bc: 0xc6a00128  lwc1        $f0, 0x128($s5)
    ctx->pc = 0x2644bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2644c0:
    // 0x2644c0: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x2644c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_2644c4:
    // 0x2644c4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2644c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2644c8:
    // 0x2644c8: 0xc6a0012c  lwc1        $f0, 0x12C($s5)
    ctx->pc = 0x2644c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2644cc:
    // 0x2644cc: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x2644ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_2644d0:
    // 0x2644d0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2644d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2644d4:
    // 0x2644d4: 0xc6a20120  lwc1        $f2, 0x120($s5)
    ctx->pc = 0x2644d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2644d8:
    // 0x2644d8: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x2644d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_2644dc:
    // 0x2644dc: 0xc6a10124  lwc1        $f1, 0x124($s5)
    ctx->pc = 0x2644dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2644e0:
    // 0x2644e0: 0xc6a00128  lwc1        $f0, 0x128($s5)
    ctx->pc = 0x2644e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2644e4:
    // 0x2644e4: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2644e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_2644e8:
    // 0x2644e8: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2644e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_2644ec:
    // 0x2644ec: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2644ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2644f0:
    // 0x2644f0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2644f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2644f4:
    // 0x2644f4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2644f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2644f8:
    // 0x2644f8: 0xe6a0012c  swc1        $f0, 0x12C($s5)
    ctx->pc = 0x2644f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
label_2644fc:
    // 0x2644fc: 0x0  nop
    ctx->pc = 0x2644fcu;
    // NOP
label_264500:
    // 0x264500: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x264500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_264504:
    // 0x264504: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x264504u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_264508:
    // 0x264508: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x264508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_26450c:
    // 0x26450c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x26450cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_264510:
    // 0x264510: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x264510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_264514:
    // 0x264514: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x264514u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_264518:
    // 0x264518: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x264518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26451c:
    // 0x26451c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x26451cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_264520:
    // 0x264520: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x264520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_264524:
    // 0x264524: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x264524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_264528:
    // 0x264528: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x264528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26452c:
    // 0x26452c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26452cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_264530:
    // 0x264530: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x264530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_264534:
    // 0x264534: 0x3e00008  jr          $ra
label_264538:
    if (ctx->pc == 0x264538u) {
        ctx->pc = 0x264538u;
            // 0x264538: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x26453Cu;
        goto label_26453c;
    }
    ctx->pc = 0x264534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264534u;
            // 0x264538: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26453Cu;
label_26453c:
    // 0x26453c: 0x0  nop
    ctx->pc = 0x26453cu;
    // NOP
}
