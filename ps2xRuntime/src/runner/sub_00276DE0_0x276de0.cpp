#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00276DE0
// Address: 0x276de0 - 0x2783b0
void sub_00276DE0_0x276de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276DE0_0x276de0");
#endif

    switch (ctx->pc) {
        case 0x276de0u: goto label_276de0;
        case 0x276de4u: goto label_276de4;
        case 0x276de8u: goto label_276de8;
        case 0x276decu: goto label_276dec;
        case 0x276df0u: goto label_276df0;
        case 0x276df4u: goto label_276df4;
        case 0x276df8u: goto label_276df8;
        case 0x276dfcu: goto label_276dfc;
        case 0x276e00u: goto label_276e00;
        case 0x276e04u: goto label_276e04;
        case 0x276e08u: goto label_276e08;
        case 0x276e0cu: goto label_276e0c;
        case 0x276e10u: goto label_276e10;
        case 0x276e14u: goto label_276e14;
        case 0x276e18u: goto label_276e18;
        case 0x276e1cu: goto label_276e1c;
        case 0x276e20u: goto label_276e20;
        case 0x276e24u: goto label_276e24;
        case 0x276e28u: goto label_276e28;
        case 0x276e2cu: goto label_276e2c;
        case 0x276e30u: goto label_276e30;
        case 0x276e34u: goto label_276e34;
        case 0x276e38u: goto label_276e38;
        case 0x276e3cu: goto label_276e3c;
        case 0x276e40u: goto label_276e40;
        case 0x276e44u: goto label_276e44;
        case 0x276e48u: goto label_276e48;
        case 0x276e4cu: goto label_276e4c;
        case 0x276e50u: goto label_276e50;
        case 0x276e54u: goto label_276e54;
        case 0x276e58u: goto label_276e58;
        case 0x276e5cu: goto label_276e5c;
        case 0x276e60u: goto label_276e60;
        case 0x276e64u: goto label_276e64;
        case 0x276e68u: goto label_276e68;
        case 0x276e6cu: goto label_276e6c;
        case 0x276e70u: goto label_276e70;
        case 0x276e74u: goto label_276e74;
        case 0x276e78u: goto label_276e78;
        case 0x276e7cu: goto label_276e7c;
        case 0x276e80u: goto label_276e80;
        case 0x276e84u: goto label_276e84;
        case 0x276e88u: goto label_276e88;
        case 0x276e8cu: goto label_276e8c;
        case 0x276e90u: goto label_276e90;
        case 0x276e94u: goto label_276e94;
        case 0x276e98u: goto label_276e98;
        case 0x276e9cu: goto label_276e9c;
        case 0x276ea0u: goto label_276ea0;
        case 0x276ea4u: goto label_276ea4;
        case 0x276ea8u: goto label_276ea8;
        case 0x276eacu: goto label_276eac;
        case 0x276eb0u: goto label_276eb0;
        case 0x276eb4u: goto label_276eb4;
        case 0x276eb8u: goto label_276eb8;
        case 0x276ebcu: goto label_276ebc;
        case 0x276ec0u: goto label_276ec0;
        case 0x276ec4u: goto label_276ec4;
        case 0x276ec8u: goto label_276ec8;
        case 0x276eccu: goto label_276ecc;
        case 0x276ed0u: goto label_276ed0;
        case 0x276ed4u: goto label_276ed4;
        case 0x276ed8u: goto label_276ed8;
        case 0x276edcu: goto label_276edc;
        case 0x276ee0u: goto label_276ee0;
        case 0x276ee4u: goto label_276ee4;
        case 0x276ee8u: goto label_276ee8;
        case 0x276eecu: goto label_276eec;
        case 0x276ef0u: goto label_276ef0;
        case 0x276ef4u: goto label_276ef4;
        case 0x276ef8u: goto label_276ef8;
        case 0x276efcu: goto label_276efc;
        case 0x276f00u: goto label_276f00;
        case 0x276f04u: goto label_276f04;
        case 0x276f08u: goto label_276f08;
        case 0x276f0cu: goto label_276f0c;
        case 0x276f10u: goto label_276f10;
        case 0x276f14u: goto label_276f14;
        case 0x276f18u: goto label_276f18;
        case 0x276f1cu: goto label_276f1c;
        case 0x276f20u: goto label_276f20;
        case 0x276f24u: goto label_276f24;
        case 0x276f28u: goto label_276f28;
        case 0x276f2cu: goto label_276f2c;
        case 0x276f30u: goto label_276f30;
        case 0x276f34u: goto label_276f34;
        case 0x276f38u: goto label_276f38;
        case 0x276f3cu: goto label_276f3c;
        case 0x276f40u: goto label_276f40;
        case 0x276f44u: goto label_276f44;
        case 0x276f48u: goto label_276f48;
        case 0x276f4cu: goto label_276f4c;
        case 0x276f50u: goto label_276f50;
        case 0x276f54u: goto label_276f54;
        case 0x276f58u: goto label_276f58;
        case 0x276f5cu: goto label_276f5c;
        case 0x276f60u: goto label_276f60;
        case 0x276f64u: goto label_276f64;
        case 0x276f68u: goto label_276f68;
        case 0x276f6cu: goto label_276f6c;
        case 0x276f70u: goto label_276f70;
        case 0x276f74u: goto label_276f74;
        case 0x276f78u: goto label_276f78;
        case 0x276f7cu: goto label_276f7c;
        case 0x276f80u: goto label_276f80;
        case 0x276f84u: goto label_276f84;
        case 0x276f88u: goto label_276f88;
        case 0x276f8cu: goto label_276f8c;
        case 0x276f90u: goto label_276f90;
        case 0x276f94u: goto label_276f94;
        case 0x276f98u: goto label_276f98;
        case 0x276f9cu: goto label_276f9c;
        case 0x276fa0u: goto label_276fa0;
        case 0x276fa4u: goto label_276fa4;
        case 0x276fa8u: goto label_276fa8;
        case 0x276facu: goto label_276fac;
        case 0x276fb0u: goto label_276fb0;
        case 0x276fb4u: goto label_276fb4;
        case 0x276fb8u: goto label_276fb8;
        case 0x276fbcu: goto label_276fbc;
        case 0x276fc0u: goto label_276fc0;
        case 0x276fc4u: goto label_276fc4;
        case 0x276fc8u: goto label_276fc8;
        case 0x276fccu: goto label_276fcc;
        case 0x276fd0u: goto label_276fd0;
        case 0x276fd4u: goto label_276fd4;
        case 0x276fd8u: goto label_276fd8;
        case 0x276fdcu: goto label_276fdc;
        case 0x276fe0u: goto label_276fe0;
        case 0x276fe4u: goto label_276fe4;
        case 0x276fe8u: goto label_276fe8;
        case 0x276fecu: goto label_276fec;
        case 0x276ff0u: goto label_276ff0;
        case 0x276ff4u: goto label_276ff4;
        case 0x276ff8u: goto label_276ff8;
        case 0x276ffcu: goto label_276ffc;
        case 0x277000u: goto label_277000;
        case 0x277004u: goto label_277004;
        case 0x277008u: goto label_277008;
        case 0x27700cu: goto label_27700c;
        case 0x277010u: goto label_277010;
        case 0x277014u: goto label_277014;
        case 0x277018u: goto label_277018;
        case 0x27701cu: goto label_27701c;
        case 0x277020u: goto label_277020;
        case 0x277024u: goto label_277024;
        case 0x277028u: goto label_277028;
        case 0x27702cu: goto label_27702c;
        case 0x277030u: goto label_277030;
        case 0x277034u: goto label_277034;
        case 0x277038u: goto label_277038;
        case 0x27703cu: goto label_27703c;
        case 0x277040u: goto label_277040;
        case 0x277044u: goto label_277044;
        case 0x277048u: goto label_277048;
        case 0x27704cu: goto label_27704c;
        case 0x277050u: goto label_277050;
        case 0x277054u: goto label_277054;
        case 0x277058u: goto label_277058;
        case 0x27705cu: goto label_27705c;
        case 0x277060u: goto label_277060;
        case 0x277064u: goto label_277064;
        case 0x277068u: goto label_277068;
        case 0x27706cu: goto label_27706c;
        case 0x277070u: goto label_277070;
        case 0x277074u: goto label_277074;
        case 0x277078u: goto label_277078;
        case 0x27707cu: goto label_27707c;
        case 0x277080u: goto label_277080;
        case 0x277084u: goto label_277084;
        case 0x277088u: goto label_277088;
        case 0x27708cu: goto label_27708c;
        case 0x277090u: goto label_277090;
        case 0x277094u: goto label_277094;
        case 0x277098u: goto label_277098;
        case 0x27709cu: goto label_27709c;
        case 0x2770a0u: goto label_2770a0;
        case 0x2770a4u: goto label_2770a4;
        case 0x2770a8u: goto label_2770a8;
        case 0x2770acu: goto label_2770ac;
        case 0x2770b0u: goto label_2770b0;
        case 0x2770b4u: goto label_2770b4;
        case 0x2770b8u: goto label_2770b8;
        case 0x2770bcu: goto label_2770bc;
        case 0x2770c0u: goto label_2770c0;
        case 0x2770c4u: goto label_2770c4;
        case 0x2770c8u: goto label_2770c8;
        case 0x2770ccu: goto label_2770cc;
        case 0x2770d0u: goto label_2770d0;
        case 0x2770d4u: goto label_2770d4;
        case 0x2770d8u: goto label_2770d8;
        case 0x2770dcu: goto label_2770dc;
        case 0x2770e0u: goto label_2770e0;
        case 0x2770e4u: goto label_2770e4;
        case 0x2770e8u: goto label_2770e8;
        case 0x2770ecu: goto label_2770ec;
        case 0x2770f0u: goto label_2770f0;
        case 0x2770f4u: goto label_2770f4;
        case 0x2770f8u: goto label_2770f8;
        case 0x2770fcu: goto label_2770fc;
        case 0x277100u: goto label_277100;
        case 0x277104u: goto label_277104;
        case 0x277108u: goto label_277108;
        case 0x27710cu: goto label_27710c;
        case 0x277110u: goto label_277110;
        case 0x277114u: goto label_277114;
        case 0x277118u: goto label_277118;
        case 0x27711cu: goto label_27711c;
        case 0x277120u: goto label_277120;
        case 0x277124u: goto label_277124;
        case 0x277128u: goto label_277128;
        case 0x27712cu: goto label_27712c;
        case 0x277130u: goto label_277130;
        case 0x277134u: goto label_277134;
        case 0x277138u: goto label_277138;
        case 0x27713cu: goto label_27713c;
        case 0x277140u: goto label_277140;
        case 0x277144u: goto label_277144;
        case 0x277148u: goto label_277148;
        case 0x27714cu: goto label_27714c;
        case 0x277150u: goto label_277150;
        case 0x277154u: goto label_277154;
        case 0x277158u: goto label_277158;
        case 0x27715cu: goto label_27715c;
        case 0x277160u: goto label_277160;
        case 0x277164u: goto label_277164;
        case 0x277168u: goto label_277168;
        case 0x27716cu: goto label_27716c;
        case 0x277170u: goto label_277170;
        case 0x277174u: goto label_277174;
        case 0x277178u: goto label_277178;
        case 0x27717cu: goto label_27717c;
        case 0x277180u: goto label_277180;
        case 0x277184u: goto label_277184;
        case 0x277188u: goto label_277188;
        case 0x27718cu: goto label_27718c;
        case 0x277190u: goto label_277190;
        case 0x277194u: goto label_277194;
        case 0x277198u: goto label_277198;
        case 0x27719cu: goto label_27719c;
        case 0x2771a0u: goto label_2771a0;
        case 0x2771a4u: goto label_2771a4;
        case 0x2771a8u: goto label_2771a8;
        case 0x2771acu: goto label_2771ac;
        case 0x2771b0u: goto label_2771b0;
        case 0x2771b4u: goto label_2771b4;
        case 0x2771b8u: goto label_2771b8;
        case 0x2771bcu: goto label_2771bc;
        case 0x2771c0u: goto label_2771c0;
        case 0x2771c4u: goto label_2771c4;
        case 0x2771c8u: goto label_2771c8;
        case 0x2771ccu: goto label_2771cc;
        case 0x2771d0u: goto label_2771d0;
        case 0x2771d4u: goto label_2771d4;
        case 0x2771d8u: goto label_2771d8;
        case 0x2771dcu: goto label_2771dc;
        case 0x2771e0u: goto label_2771e0;
        case 0x2771e4u: goto label_2771e4;
        case 0x2771e8u: goto label_2771e8;
        case 0x2771ecu: goto label_2771ec;
        case 0x2771f0u: goto label_2771f0;
        case 0x2771f4u: goto label_2771f4;
        case 0x2771f8u: goto label_2771f8;
        case 0x2771fcu: goto label_2771fc;
        case 0x277200u: goto label_277200;
        case 0x277204u: goto label_277204;
        case 0x277208u: goto label_277208;
        case 0x27720cu: goto label_27720c;
        case 0x277210u: goto label_277210;
        case 0x277214u: goto label_277214;
        case 0x277218u: goto label_277218;
        case 0x27721cu: goto label_27721c;
        case 0x277220u: goto label_277220;
        case 0x277224u: goto label_277224;
        case 0x277228u: goto label_277228;
        case 0x27722cu: goto label_27722c;
        case 0x277230u: goto label_277230;
        case 0x277234u: goto label_277234;
        case 0x277238u: goto label_277238;
        case 0x27723cu: goto label_27723c;
        case 0x277240u: goto label_277240;
        case 0x277244u: goto label_277244;
        case 0x277248u: goto label_277248;
        case 0x27724cu: goto label_27724c;
        case 0x277250u: goto label_277250;
        case 0x277254u: goto label_277254;
        case 0x277258u: goto label_277258;
        case 0x27725cu: goto label_27725c;
        case 0x277260u: goto label_277260;
        case 0x277264u: goto label_277264;
        case 0x277268u: goto label_277268;
        case 0x27726cu: goto label_27726c;
        case 0x277270u: goto label_277270;
        case 0x277274u: goto label_277274;
        case 0x277278u: goto label_277278;
        case 0x27727cu: goto label_27727c;
        case 0x277280u: goto label_277280;
        case 0x277284u: goto label_277284;
        case 0x277288u: goto label_277288;
        case 0x27728cu: goto label_27728c;
        case 0x277290u: goto label_277290;
        case 0x277294u: goto label_277294;
        case 0x277298u: goto label_277298;
        case 0x27729cu: goto label_27729c;
        case 0x2772a0u: goto label_2772a0;
        case 0x2772a4u: goto label_2772a4;
        case 0x2772a8u: goto label_2772a8;
        case 0x2772acu: goto label_2772ac;
        case 0x2772b0u: goto label_2772b0;
        case 0x2772b4u: goto label_2772b4;
        case 0x2772b8u: goto label_2772b8;
        case 0x2772bcu: goto label_2772bc;
        case 0x2772c0u: goto label_2772c0;
        case 0x2772c4u: goto label_2772c4;
        case 0x2772c8u: goto label_2772c8;
        case 0x2772ccu: goto label_2772cc;
        case 0x2772d0u: goto label_2772d0;
        case 0x2772d4u: goto label_2772d4;
        case 0x2772d8u: goto label_2772d8;
        case 0x2772dcu: goto label_2772dc;
        case 0x2772e0u: goto label_2772e0;
        case 0x2772e4u: goto label_2772e4;
        case 0x2772e8u: goto label_2772e8;
        case 0x2772ecu: goto label_2772ec;
        case 0x2772f0u: goto label_2772f0;
        case 0x2772f4u: goto label_2772f4;
        case 0x2772f8u: goto label_2772f8;
        case 0x2772fcu: goto label_2772fc;
        case 0x277300u: goto label_277300;
        case 0x277304u: goto label_277304;
        case 0x277308u: goto label_277308;
        case 0x27730cu: goto label_27730c;
        case 0x277310u: goto label_277310;
        case 0x277314u: goto label_277314;
        case 0x277318u: goto label_277318;
        case 0x27731cu: goto label_27731c;
        case 0x277320u: goto label_277320;
        case 0x277324u: goto label_277324;
        case 0x277328u: goto label_277328;
        case 0x27732cu: goto label_27732c;
        case 0x277330u: goto label_277330;
        case 0x277334u: goto label_277334;
        case 0x277338u: goto label_277338;
        case 0x27733cu: goto label_27733c;
        case 0x277340u: goto label_277340;
        case 0x277344u: goto label_277344;
        case 0x277348u: goto label_277348;
        case 0x27734cu: goto label_27734c;
        case 0x277350u: goto label_277350;
        case 0x277354u: goto label_277354;
        case 0x277358u: goto label_277358;
        case 0x27735cu: goto label_27735c;
        case 0x277360u: goto label_277360;
        case 0x277364u: goto label_277364;
        case 0x277368u: goto label_277368;
        case 0x27736cu: goto label_27736c;
        case 0x277370u: goto label_277370;
        case 0x277374u: goto label_277374;
        case 0x277378u: goto label_277378;
        case 0x27737cu: goto label_27737c;
        case 0x277380u: goto label_277380;
        case 0x277384u: goto label_277384;
        case 0x277388u: goto label_277388;
        case 0x27738cu: goto label_27738c;
        case 0x277390u: goto label_277390;
        case 0x277394u: goto label_277394;
        case 0x277398u: goto label_277398;
        case 0x27739cu: goto label_27739c;
        case 0x2773a0u: goto label_2773a0;
        case 0x2773a4u: goto label_2773a4;
        case 0x2773a8u: goto label_2773a8;
        case 0x2773acu: goto label_2773ac;
        case 0x2773b0u: goto label_2773b0;
        case 0x2773b4u: goto label_2773b4;
        case 0x2773b8u: goto label_2773b8;
        case 0x2773bcu: goto label_2773bc;
        case 0x2773c0u: goto label_2773c0;
        case 0x2773c4u: goto label_2773c4;
        case 0x2773c8u: goto label_2773c8;
        case 0x2773ccu: goto label_2773cc;
        case 0x2773d0u: goto label_2773d0;
        case 0x2773d4u: goto label_2773d4;
        case 0x2773d8u: goto label_2773d8;
        case 0x2773dcu: goto label_2773dc;
        case 0x2773e0u: goto label_2773e0;
        case 0x2773e4u: goto label_2773e4;
        case 0x2773e8u: goto label_2773e8;
        case 0x2773ecu: goto label_2773ec;
        case 0x2773f0u: goto label_2773f0;
        case 0x2773f4u: goto label_2773f4;
        case 0x2773f8u: goto label_2773f8;
        case 0x2773fcu: goto label_2773fc;
        case 0x277400u: goto label_277400;
        case 0x277404u: goto label_277404;
        case 0x277408u: goto label_277408;
        case 0x27740cu: goto label_27740c;
        case 0x277410u: goto label_277410;
        case 0x277414u: goto label_277414;
        case 0x277418u: goto label_277418;
        case 0x27741cu: goto label_27741c;
        case 0x277420u: goto label_277420;
        case 0x277424u: goto label_277424;
        case 0x277428u: goto label_277428;
        case 0x27742cu: goto label_27742c;
        case 0x277430u: goto label_277430;
        case 0x277434u: goto label_277434;
        case 0x277438u: goto label_277438;
        case 0x27743cu: goto label_27743c;
        case 0x277440u: goto label_277440;
        case 0x277444u: goto label_277444;
        case 0x277448u: goto label_277448;
        case 0x27744cu: goto label_27744c;
        case 0x277450u: goto label_277450;
        case 0x277454u: goto label_277454;
        case 0x277458u: goto label_277458;
        case 0x27745cu: goto label_27745c;
        case 0x277460u: goto label_277460;
        case 0x277464u: goto label_277464;
        case 0x277468u: goto label_277468;
        case 0x27746cu: goto label_27746c;
        case 0x277470u: goto label_277470;
        case 0x277474u: goto label_277474;
        case 0x277478u: goto label_277478;
        case 0x27747cu: goto label_27747c;
        case 0x277480u: goto label_277480;
        case 0x277484u: goto label_277484;
        case 0x277488u: goto label_277488;
        case 0x27748cu: goto label_27748c;
        case 0x277490u: goto label_277490;
        case 0x277494u: goto label_277494;
        case 0x277498u: goto label_277498;
        case 0x27749cu: goto label_27749c;
        case 0x2774a0u: goto label_2774a0;
        case 0x2774a4u: goto label_2774a4;
        case 0x2774a8u: goto label_2774a8;
        case 0x2774acu: goto label_2774ac;
        case 0x2774b0u: goto label_2774b0;
        case 0x2774b4u: goto label_2774b4;
        case 0x2774b8u: goto label_2774b8;
        case 0x2774bcu: goto label_2774bc;
        case 0x2774c0u: goto label_2774c0;
        case 0x2774c4u: goto label_2774c4;
        case 0x2774c8u: goto label_2774c8;
        case 0x2774ccu: goto label_2774cc;
        case 0x2774d0u: goto label_2774d0;
        case 0x2774d4u: goto label_2774d4;
        case 0x2774d8u: goto label_2774d8;
        case 0x2774dcu: goto label_2774dc;
        case 0x2774e0u: goto label_2774e0;
        case 0x2774e4u: goto label_2774e4;
        case 0x2774e8u: goto label_2774e8;
        case 0x2774ecu: goto label_2774ec;
        case 0x2774f0u: goto label_2774f0;
        case 0x2774f4u: goto label_2774f4;
        case 0x2774f8u: goto label_2774f8;
        case 0x2774fcu: goto label_2774fc;
        case 0x277500u: goto label_277500;
        case 0x277504u: goto label_277504;
        case 0x277508u: goto label_277508;
        case 0x27750cu: goto label_27750c;
        case 0x277510u: goto label_277510;
        case 0x277514u: goto label_277514;
        case 0x277518u: goto label_277518;
        case 0x27751cu: goto label_27751c;
        case 0x277520u: goto label_277520;
        case 0x277524u: goto label_277524;
        case 0x277528u: goto label_277528;
        case 0x27752cu: goto label_27752c;
        case 0x277530u: goto label_277530;
        case 0x277534u: goto label_277534;
        case 0x277538u: goto label_277538;
        case 0x27753cu: goto label_27753c;
        case 0x277540u: goto label_277540;
        case 0x277544u: goto label_277544;
        case 0x277548u: goto label_277548;
        case 0x27754cu: goto label_27754c;
        case 0x277550u: goto label_277550;
        case 0x277554u: goto label_277554;
        case 0x277558u: goto label_277558;
        case 0x27755cu: goto label_27755c;
        case 0x277560u: goto label_277560;
        case 0x277564u: goto label_277564;
        case 0x277568u: goto label_277568;
        case 0x27756cu: goto label_27756c;
        case 0x277570u: goto label_277570;
        case 0x277574u: goto label_277574;
        case 0x277578u: goto label_277578;
        case 0x27757cu: goto label_27757c;
        case 0x277580u: goto label_277580;
        case 0x277584u: goto label_277584;
        case 0x277588u: goto label_277588;
        case 0x27758cu: goto label_27758c;
        case 0x277590u: goto label_277590;
        case 0x277594u: goto label_277594;
        case 0x277598u: goto label_277598;
        case 0x27759cu: goto label_27759c;
        case 0x2775a0u: goto label_2775a0;
        case 0x2775a4u: goto label_2775a4;
        case 0x2775a8u: goto label_2775a8;
        case 0x2775acu: goto label_2775ac;
        case 0x2775b0u: goto label_2775b0;
        case 0x2775b4u: goto label_2775b4;
        case 0x2775b8u: goto label_2775b8;
        case 0x2775bcu: goto label_2775bc;
        case 0x2775c0u: goto label_2775c0;
        case 0x2775c4u: goto label_2775c4;
        case 0x2775c8u: goto label_2775c8;
        case 0x2775ccu: goto label_2775cc;
        case 0x2775d0u: goto label_2775d0;
        case 0x2775d4u: goto label_2775d4;
        case 0x2775d8u: goto label_2775d8;
        case 0x2775dcu: goto label_2775dc;
        case 0x2775e0u: goto label_2775e0;
        case 0x2775e4u: goto label_2775e4;
        case 0x2775e8u: goto label_2775e8;
        case 0x2775ecu: goto label_2775ec;
        case 0x2775f0u: goto label_2775f0;
        case 0x2775f4u: goto label_2775f4;
        case 0x2775f8u: goto label_2775f8;
        case 0x2775fcu: goto label_2775fc;
        case 0x277600u: goto label_277600;
        case 0x277604u: goto label_277604;
        case 0x277608u: goto label_277608;
        case 0x27760cu: goto label_27760c;
        case 0x277610u: goto label_277610;
        case 0x277614u: goto label_277614;
        case 0x277618u: goto label_277618;
        case 0x27761cu: goto label_27761c;
        case 0x277620u: goto label_277620;
        case 0x277624u: goto label_277624;
        case 0x277628u: goto label_277628;
        case 0x27762cu: goto label_27762c;
        case 0x277630u: goto label_277630;
        case 0x277634u: goto label_277634;
        case 0x277638u: goto label_277638;
        case 0x27763cu: goto label_27763c;
        case 0x277640u: goto label_277640;
        case 0x277644u: goto label_277644;
        case 0x277648u: goto label_277648;
        case 0x27764cu: goto label_27764c;
        case 0x277650u: goto label_277650;
        case 0x277654u: goto label_277654;
        case 0x277658u: goto label_277658;
        case 0x27765cu: goto label_27765c;
        case 0x277660u: goto label_277660;
        case 0x277664u: goto label_277664;
        case 0x277668u: goto label_277668;
        case 0x27766cu: goto label_27766c;
        case 0x277670u: goto label_277670;
        case 0x277674u: goto label_277674;
        case 0x277678u: goto label_277678;
        case 0x27767cu: goto label_27767c;
        case 0x277680u: goto label_277680;
        case 0x277684u: goto label_277684;
        case 0x277688u: goto label_277688;
        case 0x27768cu: goto label_27768c;
        case 0x277690u: goto label_277690;
        case 0x277694u: goto label_277694;
        case 0x277698u: goto label_277698;
        case 0x27769cu: goto label_27769c;
        case 0x2776a0u: goto label_2776a0;
        case 0x2776a4u: goto label_2776a4;
        case 0x2776a8u: goto label_2776a8;
        case 0x2776acu: goto label_2776ac;
        case 0x2776b0u: goto label_2776b0;
        case 0x2776b4u: goto label_2776b4;
        case 0x2776b8u: goto label_2776b8;
        case 0x2776bcu: goto label_2776bc;
        case 0x2776c0u: goto label_2776c0;
        case 0x2776c4u: goto label_2776c4;
        case 0x2776c8u: goto label_2776c8;
        case 0x2776ccu: goto label_2776cc;
        case 0x2776d0u: goto label_2776d0;
        case 0x2776d4u: goto label_2776d4;
        case 0x2776d8u: goto label_2776d8;
        case 0x2776dcu: goto label_2776dc;
        case 0x2776e0u: goto label_2776e0;
        case 0x2776e4u: goto label_2776e4;
        case 0x2776e8u: goto label_2776e8;
        case 0x2776ecu: goto label_2776ec;
        case 0x2776f0u: goto label_2776f0;
        case 0x2776f4u: goto label_2776f4;
        case 0x2776f8u: goto label_2776f8;
        case 0x2776fcu: goto label_2776fc;
        case 0x277700u: goto label_277700;
        case 0x277704u: goto label_277704;
        case 0x277708u: goto label_277708;
        case 0x27770cu: goto label_27770c;
        case 0x277710u: goto label_277710;
        case 0x277714u: goto label_277714;
        case 0x277718u: goto label_277718;
        case 0x27771cu: goto label_27771c;
        case 0x277720u: goto label_277720;
        case 0x277724u: goto label_277724;
        case 0x277728u: goto label_277728;
        case 0x27772cu: goto label_27772c;
        case 0x277730u: goto label_277730;
        case 0x277734u: goto label_277734;
        case 0x277738u: goto label_277738;
        case 0x27773cu: goto label_27773c;
        case 0x277740u: goto label_277740;
        case 0x277744u: goto label_277744;
        case 0x277748u: goto label_277748;
        case 0x27774cu: goto label_27774c;
        case 0x277750u: goto label_277750;
        case 0x277754u: goto label_277754;
        case 0x277758u: goto label_277758;
        case 0x27775cu: goto label_27775c;
        case 0x277760u: goto label_277760;
        case 0x277764u: goto label_277764;
        case 0x277768u: goto label_277768;
        case 0x27776cu: goto label_27776c;
        case 0x277770u: goto label_277770;
        case 0x277774u: goto label_277774;
        case 0x277778u: goto label_277778;
        case 0x27777cu: goto label_27777c;
        case 0x277780u: goto label_277780;
        case 0x277784u: goto label_277784;
        case 0x277788u: goto label_277788;
        case 0x27778cu: goto label_27778c;
        case 0x277790u: goto label_277790;
        case 0x277794u: goto label_277794;
        case 0x277798u: goto label_277798;
        case 0x27779cu: goto label_27779c;
        case 0x2777a0u: goto label_2777a0;
        case 0x2777a4u: goto label_2777a4;
        case 0x2777a8u: goto label_2777a8;
        case 0x2777acu: goto label_2777ac;
        case 0x2777b0u: goto label_2777b0;
        case 0x2777b4u: goto label_2777b4;
        case 0x2777b8u: goto label_2777b8;
        case 0x2777bcu: goto label_2777bc;
        case 0x2777c0u: goto label_2777c0;
        case 0x2777c4u: goto label_2777c4;
        case 0x2777c8u: goto label_2777c8;
        case 0x2777ccu: goto label_2777cc;
        case 0x2777d0u: goto label_2777d0;
        case 0x2777d4u: goto label_2777d4;
        case 0x2777d8u: goto label_2777d8;
        case 0x2777dcu: goto label_2777dc;
        case 0x2777e0u: goto label_2777e0;
        case 0x2777e4u: goto label_2777e4;
        case 0x2777e8u: goto label_2777e8;
        case 0x2777ecu: goto label_2777ec;
        case 0x2777f0u: goto label_2777f0;
        case 0x2777f4u: goto label_2777f4;
        case 0x2777f8u: goto label_2777f8;
        case 0x2777fcu: goto label_2777fc;
        case 0x277800u: goto label_277800;
        case 0x277804u: goto label_277804;
        case 0x277808u: goto label_277808;
        case 0x27780cu: goto label_27780c;
        case 0x277810u: goto label_277810;
        case 0x277814u: goto label_277814;
        case 0x277818u: goto label_277818;
        case 0x27781cu: goto label_27781c;
        case 0x277820u: goto label_277820;
        case 0x277824u: goto label_277824;
        case 0x277828u: goto label_277828;
        case 0x27782cu: goto label_27782c;
        case 0x277830u: goto label_277830;
        case 0x277834u: goto label_277834;
        case 0x277838u: goto label_277838;
        case 0x27783cu: goto label_27783c;
        case 0x277840u: goto label_277840;
        case 0x277844u: goto label_277844;
        case 0x277848u: goto label_277848;
        case 0x27784cu: goto label_27784c;
        case 0x277850u: goto label_277850;
        case 0x277854u: goto label_277854;
        case 0x277858u: goto label_277858;
        case 0x27785cu: goto label_27785c;
        case 0x277860u: goto label_277860;
        case 0x277864u: goto label_277864;
        case 0x277868u: goto label_277868;
        case 0x27786cu: goto label_27786c;
        case 0x277870u: goto label_277870;
        case 0x277874u: goto label_277874;
        case 0x277878u: goto label_277878;
        case 0x27787cu: goto label_27787c;
        case 0x277880u: goto label_277880;
        case 0x277884u: goto label_277884;
        case 0x277888u: goto label_277888;
        case 0x27788cu: goto label_27788c;
        case 0x277890u: goto label_277890;
        case 0x277894u: goto label_277894;
        case 0x277898u: goto label_277898;
        case 0x27789cu: goto label_27789c;
        case 0x2778a0u: goto label_2778a0;
        case 0x2778a4u: goto label_2778a4;
        case 0x2778a8u: goto label_2778a8;
        case 0x2778acu: goto label_2778ac;
        case 0x2778b0u: goto label_2778b0;
        case 0x2778b4u: goto label_2778b4;
        case 0x2778b8u: goto label_2778b8;
        case 0x2778bcu: goto label_2778bc;
        case 0x2778c0u: goto label_2778c0;
        case 0x2778c4u: goto label_2778c4;
        case 0x2778c8u: goto label_2778c8;
        case 0x2778ccu: goto label_2778cc;
        case 0x2778d0u: goto label_2778d0;
        case 0x2778d4u: goto label_2778d4;
        case 0x2778d8u: goto label_2778d8;
        case 0x2778dcu: goto label_2778dc;
        case 0x2778e0u: goto label_2778e0;
        case 0x2778e4u: goto label_2778e4;
        case 0x2778e8u: goto label_2778e8;
        case 0x2778ecu: goto label_2778ec;
        case 0x2778f0u: goto label_2778f0;
        case 0x2778f4u: goto label_2778f4;
        case 0x2778f8u: goto label_2778f8;
        case 0x2778fcu: goto label_2778fc;
        case 0x277900u: goto label_277900;
        case 0x277904u: goto label_277904;
        case 0x277908u: goto label_277908;
        case 0x27790cu: goto label_27790c;
        case 0x277910u: goto label_277910;
        case 0x277914u: goto label_277914;
        case 0x277918u: goto label_277918;
        case 0x27791cu: goto label_27791c;
        case 0x277920u: goto label_277920;
        case 0x277924u: goto label_277924;
        case 0x277928u: goto label_277928;
        case 0x27792cu: goto label_27792c;
        case 0x277930u: goto label_277930;
        case 0x277934u: goto label_277934;
        case 0x277938u: goto label_277938;
        case 0x27793cu: goto label_27793c;
        case 0x277940u: goto label_277940;
        case 0x277944u: goto label_277944;
        case 0x277948u: goto label_277948;
        case 0x27794cu: goto label_27794c;
        case 0x277950u: goto label_277950;
        case 0x277954u: goto label_277954;
        case 0x277958u: goto label_277958;
        case 0x27795cu: goto label_27795c;
        case 0x277960u: goto label_277960;
        case 0x277964u: goto label_277964;
        case 0x277968u: goto label_277968;
        case 0x27796cu: goto label_27796c;
        case 0x277970u: goto label_277970;
        case 0x277974u: goto label_277974;
        case 0x277978u: goto label_277978;
        case 0x27797cu: goto label_27797c;
        case 0x277980u: goto label_277980;
        case 0x277984u: goto label_277984;
        case 0x277988u: goto label_277988;
        case 0x27798cu: goto label_27798c;
        case 0x277990u: goto label_277990;
        case 0x277994u: goto label_277994;
        case 0x277998u: goto label_277998;
        case 0x27799cu: goto label_27799c;
        case 0x2779a0u: goto label_2779a0;
        case 0x2779a4u: goto label_2779a4;
        case 0x2779a8u: goto label_2779a8;
        case 0x2779acu: goto label_2779ac;
        case 0x2779b0u: goto label_2779b0;
        case 0x2779b4u: goto label_2779b4;
        case 0x2779b8u: goto label_2779b8;
        case 0x2779bcu: goto label_2779bc;
        case 0x2779c0u: goto label_2779c0;
        case 0x2779c4u: goto label_2779c4;
        case 0x2779c8u: goto label_2779c8;
        case 0x2779ccu: goto label_2779cc;
        case 0x2779d0u: goto label_2779d0;
        case 0x2779d4u: goto label_2779d4;
        case 0x2779d8u: goto label_2779d8;
        case 0x2779dcu: goto label_2779dc;
        case 0x2779e0u: goto label_2779e0;
        case 0x2779e4u: goto label_2779e4;
        case 0x2779e8u: goto label_2779e8;
        case 0x2779ecu: goto label_2779ec;
        case 0x2779f0u: goto label_2779f0;
        case 0x2779f4u: goto label_2779f4;
        case 0x2779f8u: goto label_2779f8;
        case 0x2779fcu: goto label_2779fc;
        case 0x277a00u: goto label_277a00;
        case 0x277a04u: goto label_277a04;
        case 0x277a08u: goto label_277a08;
        case 0x277a0cu: goto label_277a0c;
        case 0x277a10u: goto label_277a10;
        case 0x277a14u: goto label_277a14;
        case 0x277a18u: goto label_277a18;
        case 0x277a1cu: goto label_277a1c;
        case 0x277a20u: goto label_277a20;
        case 0x277a24u: goto label_277a24;
        case 0x277a28u: goto label_277a28;
        case 0x277a2cu: goto label_277a2c;
        case 0x277a30u: goto label_277a30;
        case 0x277a34u: goto label_277a34;
        case 0x277a38u: goto label_277a38;
        case 0x277a3cu: goto label_277a3c;
        case 0x277a40u: goto label_277a40;
        case 0x277a44u: goto label_277a44;
        case 0x277a48u: goto label_277a48;
        case 0x277a4cu: goto label_277a4c;
        case 0x277a50u: goto label_277a50;
        case 0x277a54u: goto label_277a54;
        case 0x277a58u: goto label_277a58;
        case 0x277a5cu: goto label_277a5c;
        case 0x277a60u: goto label_277a60;
        case 0x277a64u: goto label_277a64;
        case 0x277a68u: goto label_277a68;
        case 0x277a6cu: goto label_277a6c;
        case 0x277a70u: goto label_277a70;
        case 0x277a74u: goto label_277a74;
        case 0x277a78u: goto label_277a78;
        case 0x277a7cu: goto label_277a7c;
        case 0x277a80u: goto label_277a80;
        case 0x277a84u: goto label_277a84;
        case 0x277a88u: goto label_277a88;
        case 0x277a8cu: goto label_277a8c;
        case 0x277a90u: goto label_277a90;
        case 0x277a94u: goto label_277a94;
        case 0x277a98u: goto label_277a98;
        case 0x277a9cu: goto label_277a9c;
        case 0x277aa0u: goto label_277aa0;
        case 0x277aa4u: goto label_277aa4;
        case 0x277aa8u: goto label_277aa8;
        case 0x277aacu: goto label_277aac;
        case 0x277ab0u: goto label_277ab0;
        case 0x277ab4u: goto label_277ab4;
        case 0x277ab8u: goto label_277ab8;
        case 0x277abcu: goto label_277abc;
        case 0x277ac0u: goto label_277ac0;
        case 0x277ac4u: goto label_277ac4;
        case 0x277ac8u: goto label_277ac8;
        case 0x277accu: goto label_277acc;
        case 0x277ad0u: goto label_277ad0;
        case 0x277ad4u: goto label_277ad4;
        case 0x277ad8u: goto label_277ad8;
        case 0x277adcu: goto label_277adc;
        case 0x277ae0u: goto label_277ae0;
        case 0x277ae4u: goto label_277ae4;
        case 0x277ae8u: goto label_277ae8;
        case 0x277aecu: goto label_277aec;
        case 0x277af0u: goto label_277af0;
        case 0x277af4u: goto label_277af4;
        case 0x277af8u: goto label_277af8;
        case 0x277afcu: goto label_277afc;
        case 0x277b00u: goto label_277b00;
        case 0x277b04u: goto label_277b04;
        case 0x277b08u: goto label_277b08;
        case 0x277b0cu: goto label_277b0c;
        case 0x277b10u: goto label_277b10;
        case 0x277b14u: goto label_277b14;
        case 0x277b18u: goto label_277b18;
        case 0x277b1cu: goto label_277b1c;
        case 0x277b20u: goto label_277b20;
        case 0x277b24u: goto label_277b24;
        case 0x277b28u: goto label_277b28;
        case 0x277b2cu: goto label_277b2c;
        case 0x277b30u: goto label_277b30;
        case 0x277b34u: goto label_277b34;
        case 0x277b38u: goto label_277b38;
        case 0x277b3cu: goto label_277b3c;
        case 0x277b40u: goto label_277b40;
        case 0x277b44u: goto label_277b44;
        case 0x277b48u: goto label_277b48;
        case 0x277b4cu: goto label_277b4c;
        case 0x277b50u: goto label_277b50;
        case 0x277b54u: goto label_277b54;
        case 0x277b58u: goto label_277b58;
        case 0x277b5cu: goto label_277b5c;
        case 0x277b60u: goto label_277b60;
        case 0x277b64u: goto label_277b64;
        case 0x277b68u: goto label_277b68;
        case 0x277b6cu: goto label_277b6c;
        case 0x277b70u: goto label_277b70;
        case 0x277b74u: goto label_277b74;
        case 0x277b78u: goto label_277b78;
        case 0x277b7cu: goto label_277b7c;
        case 0x277b80u: goto label_277b80;
        case 0x277b84u: goto label_277b84;
        case 0x277b88u: goto label_277b88;
        case 0x277b8cu: goto label_277b8c;
        case 0x277b90u: goto label_277b90;
        case 0x277b94u: goto label_277b94;
        case 0x277b98u: goto label_277b98;
        case 0x277b9cu: goto label_277b9c;
        case 0x277ba0u: goto label_277ba0;
        case 0x277ba4u: goto label_277ba4;
        case 0x277ba8u: goto label_277ba8;
        case 0x277bacu: goto label_277bac;
        case 0x277bb0u: goto label_277bb0;
        case 0x277bb4u: goto label_277bb4;
        case 0x277bb8u: goto label_277bb8;
        case 0x277bbcu: goto label_277bbc;
        case 0x277bc0u: goto label_277bc0;
        case 0x277bc4u: goto label_277bc4;
        case 0x277bc8u: goto label_277bc8;
        case 0x277bccu: goto label_277bcc;
        case 0x277bd0u: goto label_277bd0;
        case 0x277bd4u: goto label_277bd4;
        case 0x277bd8u: goto label_277bd8;
        case 0x277bdcu: goto label_277bdc;
        case 0x277be0u: goto label_277be0;
        case 0x277be4u: goto label_277be4;
        case 0x277be8u: goto label_277be8;
        case 0x277becu: goto label_277bec;
        case 0x277bf0u: goto label_277bf0;
        case 0x277bf4u: goto label_277bf4;
        case 0x277bf8u: goto label_277bf8;
        case 0x277bfcu: goto label_277bfc;
        case 0x277c00u: goto label_277c00;
        case 0x277c04u: goto label_277c04;
        case 0x277c08u: goto label_277c08;
        case 0x277c0cu: goto label_277c0c;
        case 0x277c10u: goto label_277c10;
        case 0x277c14u: goto label_277c14;
        case 0x277c18u: goto label_277c18;
        case 0x277c1cu: goto label_277c1c;
        case 0x277c20u: goto label_277c20;
        case 0x277c24u: goto label_277c24;
        case 0x277c28u: goto label_277c28;
        case 0x277c2cu: goto label_277c2c;
        case 0x277c30u: goto label_277c30;
        case 0x277c34u: goto label_277c34;
        case 0x277c38u: goto label_277c38;
        case 0x277c3cu: goto label_277c3c;
        case 0x277c40u: goto label_277c40;
        case 0x277c44u: goto label_277c44;
        case 0x277c48u: goto label_277c48;
        case 0x277c4cu: goto label_277c4c;
        case 0x277c50u: goto label_277c50;
        case 0x277c54u: goto label_277c54;
        case 0x277c58u: goto label_277c58;
        case 0x277c5cu: goto label_277c5c;
        case 0x277c60u: goto label_277c60;
        case 0x277c64u: goto label_277c64;
        case 0x277c68u: goto label_277c68;
        case 0x277c6cu: goto label_277c6c;
        case 0x277c70u: goto label_277c70;
        case 0x277c74u: goto label_277c74;
        case 0x277c78u: goto label_277c78;
        case 0x277c7cu: goto label_277c7c;
        case 0x277c80u: goto label_277c80;
        case 0x277c84u: goto label_277c84;
        case 0x277c88u: goto label_277c88;
        case 0x277c8cu: goto label_277c8c;
        case 0x277c90u: goto label_277c90;
        case 0x277c94u: goto label_277c94;
        case 0x277c98u: goto label_277c98;
        case 0x277c9cu: goto label_277c9c;
        case 0x277ca0u: goto label_277ca0;
        case 0x277ca4u: goto label_277ca4;
        case 0x277ca8u: goto label_277ca8;
        case 0x277cacu: goto label_277cac;
        case 0x277cb0u: goto label_277cb0;
        case 0x277cb4u: goto label_277cb4;
        case 0x277cb8u: goto label_277cb8;
        case 0x277cbcu: goto label_277cbc;
        case 0x277cc0u: goto label_277cc0;
        case 0x277cc4u: goto label_277cc4;
        case 0x277cc8u: goto label_277cc8;
        case 0x277cccu: goto label_277ccc;
        case 0x277cd0u: goto label_277cd0;
        case 0x277cd4u: goto label_277cd4;
        case 0x277cd8u: goto label_277cd8;
        case 0x277cdcu: goto label_277cdc;
        case 0x277ce0u: goto label_277ce0;
        case 0x277ce4u: goto label_277ce4;
        case 0x277ce8u: goto label_277ce8;
        case 0x277cecu: goto label_277cec;
        case 0x277cf0u: goto label_277cf0;
        case 0x277cf4u: goto label_277cf4;
        case 0x277cf8u: goto label_277cf8;
        case 0x277cfcu: goto label_277cfc;
        case 0x277d00u: goto label_277d00;
        case 0x277d04u: goto label_277d04;
        case 0x277d08u: goto label_277d08;
        case 0x277d0cu: goto label_277d0c;
        case 0x277d10u: goto label_277d10;
        case 0x277d14u: goto label_277d14;
        case 0x277d18u: goto label_277d18;
        case 0x277d1cu: goto label_277d1c;
        case 0x277d20u: goto label_277d20;
        case 0x277d24u: goto label_277d24;
        case 0x277d28u: goto label_277d28;
        case 0x277d2cu: goto label_277d2c;
        case 0x277d30u: goto label_277d30;
        case 0x277d34u: goto label_277d34;
        case 0x277d38u: goto label_277d38;
        case 0x277d3cu: goto label_277d3c;
        case 0x277d40u: goto label_277d40;
        case 0x277d44u: goto label_277d44;
        case 0x277d48u: goto label_277d48;
        case 0x277d4cu: goto label_277d4c;
        case 0x277d50u: goto label_277d50;
        case 0x277d54u: goto label_277d54;
        case 0x277d58u: goto label_277d58;
        case 0x277d5cu: goto label_277d5c;
        case 0x277d60u: goto label_277d60;
        case 0x277d64u: goto label_277d64;
        case 0x277d68u: goto label_277d68;
        case 0x277d6cu: goto label_277d6c;
        case 0x277d70u: goto label_277d70;
        case 0x277d74u: goto label_277d74;
        case 0x277d78u: goto label_277d78;
        case 0x277d7cu: goto label_277d7c;
        case 0x277d80u: goto label_277d80;
        case 0x277d84u: goto label_277d84;
        case 0x277d88u: goto label_277d88;
        case 0x277d8cu: goto label_277d8c;
        case 0x277d90u: goto label_277d90;
        case 0x277d94u: goto label_277d94;
        case 0x277d98u: goto label_277d98;
        case 0x277d9cu: goto label_277d9c;
        case 0x277da0u: goto label_277da0;
        case 0x277da4u: goto label_277da4;
        case 0x277da8u: goto label_277da8;
        case 0x277dacu: goto label_277dac;
        case 0x277db0u: goto label_277db0;
        case 0x277db4u: goto label_277db4;
        case 0x277db8u: goto label_277db8;
        case 0x277dbcu: goto label_277dbc;
        case 0x277dc0u: goto label_277dc0;
        case 0x277dc4u: goto label_277dc4;
        case 0x277dc8u: goto label_277dc8;
        case 0x277dccu: goto label_277dcc;
        case 0x277dd0u: goto label_277dd0;
        case 0x277dd4u: goto label_277dd4;
        case 0x277dd8u: goto label_277dd8;
        case 0x277ddcu: goto label_277ddc;
        case 0x277de0u: goto label_277de0;
        case 0x277de4u: goto label_277de4;
        case 0x277de8u: goto label_277de8;
        case 0x277decu: goto label_277dec;
        case 0x277df0u: goto label_277df0;
        case 0x277df4u: goto label_277df4;
        case 0x277df8u: goto label_277df8;
        case 0x277dfcu: goto label_277dfc;
        case 0x277e00u: goto label_277e00;
        case 0x277e04u: goto label_277e04;
        case 0x277e08u: goto label_277e08;
        case 0x277e0cu: goto label_277e0c;
        case 0x277e10u: goto label_277e10;
        case 0x277e14u: goto label_277e14;
        case 0x277e18u: goto label_277e18;
        case 0x277e1cu: goto label_277e1c;
        case 0x277e20u: goto label_277e20;
        case 0x277e24u: goto label_277e24;
        case 0x277e28u: goto label_277e28;
        case 0x277e2cu: goto label_277e2c;
        case 0x277e30u: goto label_277e30;
        case 0x277e34u: goto label_277e34;
        case 0x277e38u: goto label_277e38;
        case 0x277e3cu: goto label_277e3c;
        case 0x277e40u: goto label_277e40;
        case 0x277e44u: goto label_277e44;
        case 0x277e48u: goto label_277e48;
        case 0x277e4cu: goto label_277e4c;
        case 0x277e50u: goto label_277e50;
        case 0x277e54u: goto label_277e54;
        case 0x277e58u: goto label_277e58;
        case 0x277e5cu: goto label_277e5c;
        case 0x277e60u: goto label_277e60;
        case 0x277e64u: goto label_277e64;
        case 0x277e68u: goto label_277e68;
        case 0x277e6cu: goto label_277e6c;
        case 0x277e70u: goto label_277e70;
        case 0x277e74u: goto label_277e74;
        case 0x277e78u: goto label_277e78;
        case 0x277e7cu: goto label_277e7c;
        case 0x277e80u: goto label_277e80;
        case 0x277e84u: goto label_277e84;
        case 0x277e88u: goto label_277e88;
        case 0x277e8cu: goto label_277e8c;
        case 0x277e90u: goto label_277e90;
        case 0x277e94u: goto label_277e94;
        case 0x277e98u: goto label_277e98;
        case 0x277e9cu: goto label_277e9c;
        case 0x277ea0u: goto label_277ea0;
        case 0x277ea4u: goto label_277ea4;
        case 0x277ea8u: goto label_277ea8;
        case 0x277eacu: goto label_277eac;
        case 0x277eb0u: goto label_277eb0;
        case 0x277eb4u: goto label_277eb4;
        case 0x277eb8u: goto label_277eb8;
        case 0x277ebcu: goto label_277ebc;
        case 0x277ec0u: goto label_277ec0;
        case 0x277ec4u: goto label_277ec4;
        case 0x277ec8u: goto label_277ec8;
        case 0x277eccu: goto label_277ecc;
        case 0x277ed0u: goto label_277ed0;
        case 0x277ed4u: goto label_277ed4;
        case 0x277ed8u: goto label_277ed8;
        case 0x277edcu: goto label_277edc;
        case 0x277ee0u: goto label_277ee0;
        case 0x277ee4u: goto label_277ee4;
        case 0x277ee8u: goto label_277ee8;
        case 0x277eecu: goto label_277eec;
        case 0x277ef0u: goto label_277ef0;
        case 0x277ef4u: goto label_277ef4;
        case 0x277ef8u: goto label_277ef8;
        case 0x277efcu: goto label_277efc;
        case 0x277f00u: goto label_277f00;
        case 0x277f04u: goto label_277f04;
        case 0x277f08u: goto label_277f08;
        case 0x277f0cu: goto label_277f0c;
        case 0x277f10u: goto label_277f10;
        case 0x277f14u: goto label_277f14;
        case 0x277f18u: goto label_277f18;
        case 0x277f1cu: goto label_277f1c;
        case 0x277f20u: goto label_277f20;
        case 0x277f24u: goto label_277f24;
        case 0x277f28u: goto label_277f28;
        case 0x277f2cu: goto label_277f2c;
        case 0x277f30u: goto label_277f30;
        case 0x277f34u: goto label_277f34;
        case 0x277f38u: goto label_277f38;
        case 0x277f3cu: goto label_277f3c;
        case 0x277f40u: goto label_277f40;
        case 0x277f44u: goto label_277f44;
        case 0x277f48u: goto label_277f48;
        case 0x277f4cu: goto label_277f4c;
        case 0x277f50u: goto label_277f50;
        case 0x277f54u: goto label_277f54;
        case 0x277f58u: goto label_277f58;
        case 0x277f5cu: goto label_277f5c;
        case 0x277f60u: goto label_277f60;
        case 0x277f64u: goto label_277f64;
        case 0x277f68u: goto label_277f68;
        case 0x277f6cu: goto label_277f6c;
        case 0x277f70u: goto label_277f70;
        case 0x277f74u: goto label_277f74;
        case 0x277f78u: goto label_277f78;
        case 0x277f7cu: goto label_277f7c;
        case 0x277f80u: goto label_277f80;
        case 0x277f84u: goto label_277f84;
        case 0x277f88u: goto label_277f88;
        case 0x277f8cu: goto label_277f8c;
        case 0x277f90u: goto label_277f90;
        case 0x277f94u: goto label_277f94;
        case 0x277f98u: goto label_277f98;
        case 0x277f9cu: goto label_277f9c;
        case 0x277fa0u: goto label_277fa0;
        case 0x277fa4u: goto label_277fa4;
        case 0x277fa8u: goto label_277fa8;
        case 0x277facu: goto label_277fac;
        case 0x277fb0u: goto label_277fb0;
        case 0x277fb4u: goto label_277fb4;
        case 0x277fb8u: goto label_277fb8;
        case 0x277fbcu: goto label_277fbc;
        case 0x277fc0u: goto label_277fc0;
        case 0x277fc4u: goto label_277fc4;
        case 0x277fc8u: goto label_277fc8;
        case 0x277fccu: goto label_277fcc;
        case 0x277fd0u: goto label_277fd0;
        case 0x277fd4u: goto label_277fd4;
        case 0x277fd8u: goto label_277fd8;
        case 0x277fdcu: goto label_277fdc;
        case 0x277fe0u: goto label_277fe0;
        case 0x277fe4u: goto label_277fe4;
        case 0x277fe8u: goto label_277fe8;
        case 0x277fecu: goto label_277fec;
        case 0x277ff0u: goto label_277ff0;
        case 0x277ff4u: goto label_277ff4;
        case 0x277ff8u: goto label_277ff8;
        case 0x277ffcu: goto label_277ffc;
        case 0x278000u: goto label_278000;
        case 0x278004u: goto label_278004;
        case 0x278008u: goto label_278008;
        case 0x27800cu: goto label_27800c;
        case 0x278010u: goto label_278010;
        case 0x278014u: goto label_278014;
        case 0x278018u: goto label_278018;
        case 0x27801cu: goto label_27801c;
        case 0x278020u: goto label_278020;
        case 0x278024u: goto label_278024;
        case 0x278028u: goto label_278028;
        case 0x27802cu: goto label_27802c;
        case 0x278030u: goto label_278030;
        case 0x278034u: goto label_278034;
        case 0x278038u: goto label_278038;
        case 0x27803cu: goto label_27803c;
        case 0x278040u: goto label_278040;
        case 0x278044u: goto label_278044;
        case 0x278048u: goto label_278048;
        case 0x27804cu: goto label_27804c;
        case 0x278050u: goto label_278050;
        case 0x278054u: goto label_278054;
        case 0x278058u: goto label_278058;
        case 0x27805cu: goto label_27805c;
        case 0x278060u: goto label_278060;
        case 0x278064u: goto label_278064;
        case 0x278068u: goto label_278068;
        case 0x27806cu: goto label_27806c;
        case 0x278070u: goto label_278070;
        case 0x278074u: goto label_278074;
        case 0x278078u: goto label_278078;
        case 0x27807cu: goto label_27807c;
        case 0x278080u: goto label_278080;
        case 0x278084u: goto label_278084;
        case 0x278088u: goto label_278088;
        case 0x27808cu: goto label_27808c;
        case 0x278090u: goto label_278090;
        case 0x278094u: goto label_278094;
        case 0x278098u: goto label_278098;
        case 0x27809cu: goto label_27809c;
        case 0x2780a0u: goto label_2780a0;
        case 0x2780a4u: goto label_2780a4;
        case 0x2780a8u: goto label_2780a8;
        case 0x2780acu: goto label_2780ac;
        case 0x2780b0u: goto label_2780b0;
        case 0x2780b4u: goto label_2780b4;
        case 0x2780b8u: goto label_2780b8;
        case 0x2780bcu: goto label_2780bc;
        case 0x2780c0u: goto label_2780c0;
        case 0x2780c4u: goto label_2780c4;
        case 0x2780c8u: goto label_2780c8;
        case 0x2780ccu: goto label_2780cc;
        case 0x2780d0u: goto label_2780d0;
        case 0x2780d4u: goto label_2780d4;
        case 0x2780d8u: goto label_2780d8;
        case 0x2780dcu: goto label_2780dc;
        case 0x2780e0u: goto label_2780e0;
        case 0x2780e4u: goto label_2780e4;
        case 0x2780e8u: goto label_2780e8;
        case 0x2780ecu: goto label_2780ec;
        case 0x2780f0u: goto label_2780f0;
        case 0x2780f4u: goto label_2780f4;
        case 0x2780f8u: goto label_2780f8;
        case 0x2780fcu: goto label_2780fc;
        case 0x278100u: goto label_278100;
        case 0x278104u: goto label_278104;
        case 0x278108u: goto label_278108;
        case 0x27810cu: goto label_27810c;
        case 0x278110u: goto label_278110;
        case 0x278114u: goto label_278114;
        case 0x278118u: goto label_278118;
        case 0x27811cu: goto label_27811c;
        case 0x278120u: goto label_278120;
        case 0x278124u: goto label_278124;
        case 0x278128u: goto label_278128;
        case 0x27812cu: goto label_27812c;
        case 0x278130u: goto label_278130;
        case 0x278134u: goto label_278134;
        case 0x278138u: goto label_278138;
        case 0x27813cu: goto label_27813c;
        case 0x278140u: goto label_278140;
        case 0x278144u: goto label_278144;
        case 0x278148u: goto label_278148;
        case 0x27814cu: goto label_27814c;
        case 0x278150u: goto label_278150;
        case 0x278154u: goto label_278154;
        case 0x278158u: goto label_278158;
        case 0x27815cu: goto label_27815c;
        case 0x278160u: goto label_278160;
        case 0x278164u: goto label_278164;
        case 0x278168u: goto label_278168;
        case 0x27816cu: goto label_27816c;
        case 0x278170u: goto label_278170;
        case 0x278174u: goto label_278174;
        case 0x278178u: goto label_278178;
        case 0x27817cu: goto label_27817c;
        case 0x278180u: goto label_278180;
        case 0x278184u: goto label_278184;
        case 0x278188u: goto label_278188;
        case 0x27818cu: goto label_27818c;
        case 0x278190u: goto label_278190;
        case 0x278194u: goto label_278194;
        case 0x278198u: goto label_278198;
        case 0x27819cu: goto label_27819c;
        case 0x2781a0u: goto label_2781a0;
        case 0x2781a4u: goto label_2781a4;
        case 0x2781a8u: goto label_2781a8;
        case 0x2781acu: goto label_2781ac;
        case 0x2781b0u: goto label_2781b0;
        case 0x2781b4u: goto label_2781b4;
        case 0x2781b8u: goto label_2781b8;
        case 0x2781bcu: goto label_2781bc;
        case 0x2781c0u: goto label_2781c0;
        case 0x2781c4u: goto label_2781c4;
        case 0x2781c8u: goto label_2781c8;
        case 0x2781ccu: goto label_2781cc;
        case 0x2781d0u: goto label_2781d0;
        case 0x2781d4u: goto label_2781d4;
        case 0x2781d8u: goto label_2781d8;
        case 0x2781dcu: goto label_2781dc;
        case 0x2781e0u: goto label_2781e0;
        case 0x2781e4u: goto label_2781e4;
        case 0x2781e8u: goto label_2781e8;
        case 0x2781ecu: goto label_2781ec;
        case 0x2781f0u: goto label_2781f0;
        case 0x2781f4u: goto label_2781f4;
        case 0x2781f8u: goto label_2781f8;
        case 0x2781fcu: goto label_2781fc;
        case 0x278200u: goto label_278200;
        case 0x278204u: goto label_278204;
        case 0x278208u: goto label_278208;
        case 0x27820cu: goto label_27820c;
        case 0x278210u: goto label_278210;
        case 0x278214u: goto label_278214;
        case 0x278218u: goto label_278218;
        case 0x27821cu: goto label_27821c;
        case 0x278220u: goto label_278220;
        case 0x278224u: goto label_278224;
        case 0x278228u: goto label_278228;
        case 0x27822cu: goto label_27822c;
        case 0x278230u: goto label_278230;
        case 0x278234u: goto label_278234;
        case 0x278238u: goto label_278238;
        case 0x27823cu: goto label_27823c;
        case 0x278240u: goto label_278240;
        case 0x278244u: goto label_278244;
        case 0x278248u: goto label_278248;
        case 0x27824cu: goto label_27824c;
        case 0x278250u: goto label_278250;
        case 0x278254u: goto label_278254;
        case 0x278258u: goto label_278258;
        case 0x27825cu: goto label_27825c;
        case 0x278260u: goto label_278260;
        case 0x278264u: goto label_278264;
        case 0x278268u: goto label_278268;
        case 0x27826cu: goto label_27826c;
        case 0x278270u: goto label_278270;
        case 0x278274u: goto label_278274;
        case 0x278278u: goto label_278278;
        case 0x27827cu: goto label_27827c;
        case 0x278280u: goto label_278280;
        case 0x278284u: goto label_278284;
        case 0x278288u: goto label_278288;
        case 0x27828cu: goto label_27828c;
        case 0x278290u: goto label_278290;
        case 0x278294u: goto label_278294;
        case 0x278298u: goto label_278298;
        case 0x27829cu: goto label_27829c;
        case 0x2782a0u: goto label_2782a0;
        case 0x2782a4u: goto label_2782a4;
        case 0x2782a8u: goto label_2782a8;
        case 0x2782acu: goto label_2782ac;
        case 0x2782b0u: goto label_2782b0;
        case 0x2782b4u: goto label_2782b4;
        case 0x2782b8u: goto label_2782b8;
        case 0x2782bcu: goto label_2782bc;
        case 0x2782c0u: goto label_2782c0;
        case 0x2782c4u: goto label_2782c4;
        case 0x2782c8u: goto label_2782c8;
        case 0x2782ccu: goto label_2782cc;
        case 0x2782d0u: goto label_2782d0;
        case 0x2782d4u: goto label_2782d4;
        case 0x2782d8u: goto label_2782d8;
        case 0x2782dcu: goto label_2782dc;
        case 0x2782e0u: goto label_2782e0;
        case 0x2782e4u: goto label_2782e4;
        case 0x2782e8u: goto label_2782e8;
        case 0x2782ecu: goto label_2782ec;
        case 0x2782f0u: goto label_2782f0;
        case 0x2782f4u: goto label_2782f4;
        case 0x2782f8u: goto label_2782f8;
        case 0x2782fcu: goto label_2782fc;
        case 0x278300u: goto label_278300;
        case 0x278304u: goto label_278304;
        case 0x278308u: goto label_278308;
        case 0x27830cu: goto label_27830c;
        case 0x278310u: goto label_278310;
        case 0x278314u: goto label_278314;
        case 0x278318u: goto label_278318;
        case 0x27831cu: goto label_27831c;
        case 0x278320u: goto label_278320;
        case 0x278324u: goto label_278324;
        case 0x278328u: goto label_278328;
        case 0x27832cu: goto label_27832c;
        case 0x278330u: goto label_278330;
        case 0x278334u: goto label_278334;
        case 0x278338u: goto label_278338;
        case 0x27833cu: goto label_27833c;
        case 0x278340u: goto label_278340;
        case 0x278344u: goto label_278344;
        case 0x278348u: goto label_278348;
        case 0x27834cu: goto label_27834c;
        case 0x278350u: goto label_278350;
        case 0x278354u: goto label_278354;
        case 0x278358u: goto label_278358;
        case 0x27835cu: goto label_27835c;
        case 0x278360u: goto label_278360;
        case 0x278364u: goto label_278364;
        case 0x278368u: goto label_278368;
        case 0x27836cu: goto label_27836c;
        case 0x278370u: goto label_278370;
        case 0x278374u: goto label_278374;
        case 0x278378u: goto label_278378;
        case 0x27837cu: goto label_27837c;
        case 0x278380u: goto label_278380;
        case 0x278384u: goto label_278384;
        case 0x278388u: goto label_278388;
        case 0x27838cu: goto label_27838c;
        case 0x278390u: goto label_278390;
        case 0x278394u: goto label_278394;
        case 0x278398u: goto label_278398;
        case 0x27839cu: goto label_27839c;
        case 0x2783a0u: goto label_2783a0;
        case 0x2783a4u: goto label_2783a4;
        case 0x2783a8u: goto label_2783a8;
        case 0x2783acu: goto label_2783ac;
        default: break;
    }

    ctx->pc = 0x276de0u;

label_276de0:
    // 0x276de0: 0x27bdfa20  addiu       $sp, $sp, -0x5E0
    ctx->pc = 0x276de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965792));
label_276de4:
    // 0x276de4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x276de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_276de8:
    // 0x276de8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x276de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_276dec:
    // 0x276dec: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x276decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_276df0:
    // 0x276df0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x276df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_276df4:
    // 0x276df4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x276df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_276df8:
    // 0x276df8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x276df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_276dfc:
    // 0x276dfc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x276dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_276e00:
    // 0x276e00: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x276e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_276e04:
    // 0x276e04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x276e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_276e08:
    // 0x276e08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x276e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_276e0c:
    // 0x276e0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x276e0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_276e10:
    // 0x276e10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x276e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_276e14:
    // 0x276e14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x276e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_276e18:
    // 0x276e18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x276e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_276e1c:
    // 0x276e1c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x276e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_276e20:
    // 0x276e20: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x276e20u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_276e24:
    // 0x276e24: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x276e24u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_276e28:
    // 0x276e28: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x276e28u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_276e2c:
    // 0x276e2c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x276e2cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_276e30:
    // 0x276e30: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x276e30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_276e34:
    // 0x276e34: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x276e34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_276e38:
    // 0x276e38: 0x8023e9d8  lb          $v1, -0x1628($at)
    ctx->pc = 0x276e38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961624)));
label_276e3c:
    // 0x276e3c: 0x1460053a  bnez        $v1, . + 4 + (0x53A << 2)
label_276e40:
    if (ctx->pc == 0x276E40u) {
        ctx->pc = 0x276E40u;
            // 0x276e40: 0xafa80120  sw          $t0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 8));
        ctx->pc = 0x276E44u;
        goto label_276e44;
    }
    ctx->pc = 0x276E3Cu;
    {
        const bool branch_taken_0x276e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276E3Cu;
            // 0x276e40: 0xafa80120  sw          $t0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e3c) {
            ctx->pc = 0x278328u;
            goto label_278328;
        }
    }
    ctx->pc = 0x276E44u;
label_276e44:
    // 0x276e44: 0xc086406  jal         func_219018
label_276e48:
    if (ctx->pc == 0x276E48u) {
        ctx->pc = 0x276E48u;
            // 0x276e48: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x276E4Cu;
        goto label_276e4c;
    }
    ctx->pc = 0x276E44u;
    SET_GPR_U32(ctx, 31, 0x276E4Cu);
    ctx->pc = 0x276E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E44u;
            // 0x276e48: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219018u;
    if (runtime->hasFunction(0x219018u)) {
        auto targetFn = runtime->lookupFunction(0x219018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E4Cu; }
        if (ctx->pc != 0x276E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00219018_0x219018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E4Cu; }
        if (ctx->pc != 0x276E4Cu) { return; }
    }
    ctx->pc = 0x276E4Cu;
label_276e4c:
    // 0x276e4c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x276e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_276e50:
    // 0x276e50: 0xa022e9d8  sb          $v0, -0x1628($at)
    ctx->pc = 0x276e50u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294961624), (uint8_t)GPR_U32(ctx, 2));
label_276e54:
    // 0x276e54: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x276e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_276e58:
    // 0x276e58: 0x8023e9d8  lb          $v1, -0x1628($at)
    ctx->pc = 0x276e58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961624)));
label_276e5c:
    // 0x276e5c: 0x14600532  bnez        $v1, . + 4 + (0x532 << 2)
label_276e60:
    if (ctx->pc == 0x276E60u) {
        ctx->pc = 0x276E64u;
        goto label_276e64;
    }
    ctx->pc = 0x276E5Cu;
    {
        const bool branch_taken_0x276e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x276e5c) {
            ctx->pc = 0x278328u;
            goto label_278328;
        }
    }
    ctx->pc = 0x276E64u;
label_276e64:
    // 0x276e64: 0x10000540  b           . + 4 + (0x540 << 2)
label_276e68:
    if (ctx->pc == 0x276E68u) {
        ctx->pc = 0x276E6Cu;
        goto label_276e6c;
    }
    ctx->pc = 0x276E64u;
    {
        const bool branch_taken_0x276e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276e64) {
            ctx->pc = 0x278368u;
            goto label_278368;
        }
    }
    ctx->pc = 0x276E6Cu;
label_276e6c:
    // 0x276e6c: 0x0  nop
    ctx->pc = 0x276e6cu;
    // NOP
label_276e70:
    // 0x276e70: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x276e70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_276e74:
    // 0x276e74: 0x2c61006c  sltiu       $at, $v1, 0x6C
    ctx->pc = 0x276e74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)108) ? 1 : 0);
label_276e78:
    // 0x276e78: 0x1020050d  beqz        $at, . + 4 + (0x50D << 2)
label_276e7c:
    if (ctx->pc == 0x276E7Cu) {
        ctx->pc = 0x276E7Cu;
            // 0x276e7c: 0x241003e7  addiu       $s0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->pc = 0x276E80u;
        goto label_276e80;
    }
    ctx->pc = 0x276E78u;
    {
        const bool branch_taken_0x276e78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x276E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276E78u;
            // 0x276e7c: 0x241003e7  addiu       $s0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e78) {
            ctx->pc = 0x2782B0u;
            goto label_2782b0;
        }
    }
    ctx->pc = 0x276E80u;
label_276e80:
    // 0x276e80: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x276e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_276e84:
    // 0x276e84: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x276e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_276e88:
    // 0x276e88: 0x24a5fdb0  addiu       $a1, $a1, -0x250
    ctx->pc = 0x276e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966704));
label_276e8c:
    // 0x276e8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x276e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_276e90:
    // 0x276e90: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x276e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_276e94:
    // 0x276e94: 0x800008  jr          $a0
label_276e98:
    if (ctx->pc == 0x276E98u) {
        ctx->pc = 0x276E9Cu;
        goto label_276e9c;
    }
    ctx->pc = 0x276E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276EA0u: goto label_276ea0;
            case 0x276EE0u: goto label_276ee0;
            case 0x276F28u: goto label_276f28;
            case 0x276F68u: goto label_276f68;
            case 0x276FB0u: goto label_276fb0;
            case 0x276FF0u: goto label_276ff0;
            case 0x277038u: goto label_277038;
            case 0x277090u: goto label_277090;
            case 0x2770F0u: goto label_2770f0;
            case 0x277150u: goto label_277150;
            case 0x2771B0u: goto label_2771b0;
            case 0x277210u: goto label_277210;
            case 0x2772B0u: goto label_2772b0;
            case 0x277900u: goto label_277900;
            case 0x277988u: goto label_277988;
            case 0x277BB0u: goto label_277bb0;
            case 0x277BC0u: goto label_277bc0;
            case 0x277BE0u: goto label_277be0;
            case 0x277C08u: goto label_277c08;
            case 0x277C38u: goto label_277c38;
            case 0x277C40u: goto label_277c40;
            case 0x277E58u: goto label_277e58;
            case 0x277E60u: goto label_277e60;
            case 0x277E78u: goto label_277e78;
            case 0x277E98u: goto label_277e98;
            case 0x277EC8u: goto label_277ec8;
            case 0x278000u: goto label_278000;
            case 0x278080u: goto label_278080;
            case 0x278110u: goto label_278110;
            case 0x2781B0u: goto label_2781b0;
            case 0x278248u: goto label_278248;
            case 0x278270u: goto label_278270;
            case 0x2782B0u: goto label_2782b0;
            case 0x278320u: goto label_278320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276E9Cu;
label_276e9c:
    // 0x276e9c: 0x0  nop
    ctx->pc = 0x276e9cu;
    // NOP
label_276ea0:
    // 0x276ea0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x276ea0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276ea4:
    // 0x276ea4: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x276ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_276ea8:
    // 0x276ea8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x276ea8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_276eac:
    // 0x276eac: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x276eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276eb0:
    // 0x276eb0: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x276eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276eb4:
    // 0x276eb4: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x276eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276eb8:
    // 0x276eb8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x276eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_276ebc:
    // 0x276ebc: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x276ebcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_276ec0:
    // 0x276ec0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x276ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_276ec4:
    // 0x276ec4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x276ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_276ec8:
    // 0x276ec8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x276ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_276ecc:
    // 0x276ecc: 0x46802660  cvt.s.w     $f25, $f4
    ctx->pc = 0x276eccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_276ed0:
    // 0x276ed0: 0x46801e20  cvt.s.w     $f24, $f3
    ctx->pc = 0x276ed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_276ed4:
    // 0x276ed4: 0x10000114  b           . + 4 + (0x114 << 2)
label_276ed8:
    if (ctx->pc == 0x276ED8u) {
        ctx->pc = 0x276ED8u;
            // 0x276ed8: 0x46011180  add.s       $f6, $f2, $f1 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x276EDCu;
        goto label_276edc;
    }
    ctx->pc = 0x276ED4u;
    {
        const bool branch_taken_0x276ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276ED4u;
            // 0x276ed8: 0x46011180  add.s       $f6, $f2, $f1 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ed4) {
            ctx->pc = 0x277328u;
            goto label_277328;
        }
    }
    ctx->pc = 0x276EDCu;
label_276edc:
    // 0x276edc: 0x0  nop
    ctx->pc = 0x276edcu;
    // NOP
label_276ee0:
    // 0x276ee0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x276ee0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276ee4:
    // 0x276ee4: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x276ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276ee8:
    // 0x276ee8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x276ee8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_276eec:
    // 0x276eec: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x276eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276ef0:
    // 0x276ef0: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x276ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_276ef4:
    // 0x276ef4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x276ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276ef8:
    // 0x276ef8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x276ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_276efc:
    // 0x276efc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x276efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_276f00:
    // 0x276f00: 0x2484ff01  addiu       $a0, $a0, -0xFF
    ctx->pc = 0x276f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967041));
label_276f04:
    // 0x276f04: 0x46011181  sub.s       $f6, $f2, $f1
    ctx->pc = 0x276f04u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_276f08:
    // 0x276f08: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x276f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_276f0c:
    // 0x276f0c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x276f0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_276f10:
    // 0x276f10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x276f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_276f14:
    // 0x276f14: 0x46801660  cvt.s.w     $f25, $f2
    ctx->pc = 0x276f14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_276f18:
    // 0x276f18: 0x46800e20  cvt.s.w     $f24, $f1
    ctx->pc = 0x276f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_276f1c:
    // 0x276f1c: 0x10000102  b           . + 4 + (0x102 << 2)
label_276f20:
    if (ctx->pc == 0x276F20u) {
        ctx->pc = 0x276F20u;
            // 0x276f20: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->pc = 0x276F24u;
        goto label_276f24;
    }
    ctx->pc = 0x276F1Cu;
    {
        const bool branch_taken_0x276f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276F1Cu;
            // 0x276f20: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f1c) {
            ctx->pc = 0x277328u;
            goto label_277328;
        }
    }
    ctx->pc = 0x276F24u;
label_276f24:
    // 0x276f24: 0x0  nop
    ctx->pc = 0x276f24u;
    // NOP
label_276f28:
    // 0x276f28: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x276f28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276f2c:
    // 0x276f2c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x276f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_276f30:
    // 0x276f30: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x276f30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_276f34:
    // 0x276f34: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x276f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276f38:
    // 0x276f38: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x276f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276f3c:
    // 0x276f3c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x276f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276f40:
    // 0x276f40: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x276f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_276f44:
    // 0x276f44: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x276f44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_276f48:
    // 0x276f48: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x276f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_276f4c:
    // 0x276f4c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x276f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_276f50:
    // 0x276f50: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x276f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_276f54:
    // 0x276f54: 0x46802660  cvt.s.w     $f25, $f4
    ctx->pc = 0x276f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_276f58:
    // 0x276f58: 0x46801e20  cvt.s.w     $f24, $f3
    ctx->pc = 0x276f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_276f5c:
    // 0x276f5c: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_276f60:
    if (ctx->pc == 0x276F60u) {
        ctx->pc = 0x276F60u;
            // 0x276f60: 0x46011180  add.s       $f6, $f2, $f1 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x276F64u;
        goto label_276f64;
    }
    ctx->pc = 0x276F5Cu;
    {
        const bool branch_taken_0x276f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276F5Cu;
            // 0x276f60: 0x46011180  add.s       $f6, $f2, $f1 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f5c) {
            ctx->pc = 0x277328u;
            goto label_277328;
        }
    }
    ctx->pc = 0x276F64u;
label_276f64:
    // 0x276f64: 0x0  nop
    ctx->pc = 0x276f64u;
    // NOP
label_276f68:
    // 0x276f68: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x276f68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276f6c:
    // 0x276f6c: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x276f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276f70:
    // 0x276f70: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x276f70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_276f74:
    // 0x276f74: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x276f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276f78:
    // 0x276f78: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x276f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_276f7c:
    // 0x276f7c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x276f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276f80:
    // 0x276f80: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x276f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_276f84:
    // 0x276f84: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x276f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_276f88:
    // 0x276f88: 0x2484ff01  addiu       $a0, $a0, -0xFF
    ctx->pc = 0x276f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967041));
label_276f8c:
    // 0x276f8c: 0x46011181  sub.s       $f6, $f2, $f1
    ctx->pc = 0x276f8cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_276f90:
    // 0x276f90: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x276f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_276f94:
    // 0x276f94: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x276f94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_276f98:
    // 0x276f98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x276f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_276f9c:
    // 0x276f9c: 0x46801660  cvt.s.w     $f25, $f2
    ctx->pc = 0x276f9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_276fa0:
    // 0x276fa0: 0x46800e20  cvt.s.w     $f24, $f1
    ctx->pc = 0x276fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_276fa4:
    // 0x276fa4: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_276fa8:
    if (ctx->pc == 0x276FA8u) {
        ctx->pc = 0x276FA8u;
            // 0x276fa8: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->pc = 0x276FACu;
        goto label_276fac;
    }
    ctx->pc = 0x276FA4u;
    {
        const bool branch_taken_0x276fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276FA4u;
            // 0x276fa8: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276fa4) {
            ctx->pc = 0x277328u;
            goto label_277328;
        }
    }
    ctx->pc = 0x276FACu;
label_276fac:
    // 0x276fac: 0x0  nop
    ctx->pc = 0x276facu;
    // NOP
label_276fb0:
    // 0x276fb0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x276fb0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276fb4:
    // 0x276fb4: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x276fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_276fb8:
    // 0x276fb8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x276fb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_276fbc:
    // 0x276fbc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x276fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276fc0:
    // 0x276fc0: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x276fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276fc4:
    // 0x276fc4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x276fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276fc8:
    // 0x276fc8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x276fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_276fcc:
    // 0x276fcc: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x276fccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_276fd0:
    // 0x276fd0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x276fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_276fd4:
    // 0x276fd4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x276fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_276fd8:
    // 0x276fd8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x276fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_276fdc:
    // 0x276fdc: 0x46802660  cvt.s.w     $f25, $f4
    ctx->pc = 0x276fdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_276fe0:
    // 0x276fe0: 0x46801e20  cvt.s.w     $f24, $f3
    ctx->pc = 0x276fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_276fe4:
    // 0x276fe4: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_276fe8:
    if (ctx->pc == 0x276FE8u) {
        ctx->pc = 0x276FE8u;
            // 0x276fe8: 0x46011180  add.s       $f6, $f2, $f1 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x276FECu;
        goto label_276fec;
    }
    ctx->pc = 0x276FE4u;
    {
        const bool branch_taken_0x276fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276FE4u;
            // 0x276fe8: 0x46011180  add.s       $f6, $f2, $f1 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276fe4) {
            ctx->pc = 0x277328u;
            goto label_277328;
        }
    }
    ctx->pc = 0x276FECu;
label_276fec:
    // 0x276fec: 0x0  nop
    ctx->pc = 0x276fecu;
    // NOP
label_276ff0:
    // 0x276ff0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x276ff0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_276ff4:
    // 0x276ff4: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x276ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276ff8:
    // 0x276ff8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x276ff8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_276ffc:
    // 0x276ffc: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x276ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277000:
    // 0x277000: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x277000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_277004:
    // 0x277004: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x277004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277008:
    // 0x277008: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x277008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_27700c:
    // 0x27700c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x27700cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_277010:
    // 0x277010: 0x2484ff01  addiu       $a0, $a0, -0xFF
    ctx->pc = 0x277010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967041));
label_277014:
    // 0x277014: 0x46011181  sub.s       $f6, $f2, $f1
    ctx->pc = 0x277014u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_277018:
    // 0x277018: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x277018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_27701c:
    // 0x27701c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x27701cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_277020:
    // 0x277020: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x277020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_277024:
    // 0x277024: 0x46801660  cvt.s.w     $f25, $f2
    ctx->pc = 0x277024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_277028:
    // 0x277028: 0x46800e20  cvt.s.w     $f24, $f1
    ctx->pc = 0x277028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_27702c:
    // 0x27702c: 0x100000be  b           . + 4 + (0xBE << 2)
label_277030:
    if (ctx->pc == 0x277030u) {
        ctx->pc = 0x277030u;
            // 0x277030: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->pc = 0x277034u;
        goto label_277034;
    }
    ctx->pc = 0x27702Cu;
    {
        const bool branch_taken_0x27702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27702Cu;
            // 0x277030: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27702c) {
            ctx->pc = 0x277328u;
            goto label_277328;
        }
    }
    ctx->pc = 0x277034u;
label_277034:
    // 0x277034: 0x0  nop
    ctx->pc = 0x277034u;
    // NOP
label_277038:
    // 0x277038: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x277038u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27703c:
    // 0x27703c: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x27703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277040:
    // 0x277040: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x277040u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_277044:
    // 0x277044: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x277044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_277048:
    // 0x277048: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x277048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27704c:
    // 0x27704c: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x27704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_277050:
    // 0x277050: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x277050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277054:
    // 0x277054: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x277054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_277058:
    // 0x277058: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x277058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_27705c:
    // 0x27705c: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x27705cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_277060:
    // 0x277060: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x277060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_277064:
    // 0x277064: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x277064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_277068:
    // 0x277068: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x277068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_27706c:
    // 0x27706c: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x27706cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_277070:
    // 0x277070: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x277070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_277074:
    // 0x277074: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x277074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277078:
    // 0x277078: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x277078u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_27707c:
    // 0x27707c: 0x46802e60  cvt.s.w     $f25, $f5
    ctx->pc = 0x27707cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_277080:
    // 0x277080: 0x46802620  cvt.s.w     $f24, $f4
    ctx->pc = 0x277080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_277084:
    // 0x277084: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_277088:
    if (ctx->pc == 0x277088u) {
        ctx->pc = 0x277088u;
            // 0x277088: 0x46020980  add.s       $f6, $f1, $f2 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->pc = 0x27708Cu;
        goto label_27708c;
    }
    ctx->pc = 0x277084u;
    {
        const bool branch_taken_0x277084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277084u;
            // 0x277088: 0x46020980  add.s       $f6, $f1, $f2 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277084) {
            ctx->pc = 0x277328u;
            goto label_277328;
        }
    }
    ctx->pc = 0x27708Cu;
label_27708c:
    // 0x27708c: 0x0  nop
    ctx->pc = 0x27708cu;
    // NOP
label_277090:
    // 0x277090: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x277090u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_277094:
    // 0x277094: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x277094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277098:
    // 0x277098: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x277098u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_27709c:
    // 0x27709c: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x27709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2770a0:
    // 0x2770a0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2770a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2770a4:
    // 0x2770a4: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x2770a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2770a8:
    // 0x2770a8: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2770a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2770ac:
    // 0x2770ac: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2770acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2770b0:
    // 0x2770b0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2770b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2770b4:
    // 0x2770b4: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x2770b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_2770b8:
    // 0x2770b8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2770b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2770bc:
    // 0x2770bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2770bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2770c0:
    // 0x2770c0: 0x24a4ff01  addiu       $a0, $a1, -0xFF
    ctx->pc = 0x2770c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967041));
label_2770c4:
    // 0x2770c4: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x2770c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_2770c8:
    // 0x2770c8: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2770c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_2770cc:
    // 0x2770cc: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x2770ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2770d0:
    // 0x2770d0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2770d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2770d4:
    // 0x2770d4: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2770d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2770d8:
    // 0x2770d8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2770d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2770dc:
    // 0x2770dc: 0x46802e60  cvt.s.w     $f25, $f5
    ctx->pc = 0x2770dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_2770e0:
    // 0x2770e0: 0x46802620  cvt.s.w     $f24, $f4
    ctx->pc = 0x2770e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_2770e4:
    // 0x2770e4: 0x10000090  b           . + 4 + (0x90 << 2)
label_2770e8:
    if (ctx->pc == 0x2770E8u) {
        ctx->pc = 0x2770E8u;
            // 0x2770e8: 0x46011181  sub.s       $f6, $f2, $f1 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x2770ECu;
        goto label_2770ec;
    }
    ctx->pc = 0x2770E4u;
    {
        const bool branch_taken_0x2770e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2770E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2770E4u;
            // 0x2770e8: 0x46011181  sub.s       $f6, $f2, $f1 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770e4) {
            ctx->pc = 0x277328u;
            goto label_277328;
        }
    }
    ctx->pc = 0x2770ECu;
label_2770ec:
    // 0x2770ec: 0x0  nop
    ctx->pc = 0x2770ecu;
    // NOP
label_2770f0:
    // 0x2770f0: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x2770f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2770f4:
    // 0x2770f4: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x2770f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2770f8:
    // 0x2770f8: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2770f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2770fc:
    // 0x2770fc: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x2770fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_277100:
    // 0x277100: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x277100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277104:
    // 0x277104: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x277104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_277108:
    // 0x277108: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x277108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27710c:
    // 0x27710c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x27710cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_277110:
    // 0x277110: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x277110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_277114:
    // 0x277114: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x277114u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_277118:
    // 0x277118: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x277118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_27711c:
    // 0x27711c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_277120:
    // 0x277120: 0x24a4ff01  addiu       $a0, $a1, -0xFF
    ctx->pc = 0x277120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967041));
label_277124:
    // 0x277124: 0x2463ff01  addiu       $v1, $v1, -0xFF
    ctx->pc = 0x277124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967041));
label_277128:
    // 0x277128: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x277128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_27712c:
    // 0x27712c: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x27712cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_277130:
    // 0x277130: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x277130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_277134:
    // 0x277134: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x277134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277138:
    // 0x277138: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x277138u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_27713c:
    // 0x27713c: 0x46802e60  cvt.s.w     $f25, $f5
    ctx->pc = 0x27713cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_277140:
    // 0x277140: 0x46802620  cvt.s.w     $f24, $f4
    ctx->pc = 0x277140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_277144:
    // 0x277144: 0x10000078  b           . + 4 + (0x78 << 2)
label_277148:
    if (ctx->pc == 0x277148u) {
        ctx->pc = 0x277148u;
            // 0x277148: 0x46020980  add.s       $f6, $f1, $f2 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->pc = 0x27714Cu;
        goto label_27714c;
    }
    ctx->pc = 0x277144u;
    {
        const bool branch_taken_0x277144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277144u;
            // 0x277148: 0x46020980  add.s       $f6, $f1, $f2 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277144) {
            ctx->pc = 0x277328u;
            goto label_277328;
        }
    }
    ctx->pc = 0x27714Cu;
label_27714c:
    // 0x27714c: 0x0  nop
    ctx->pc = 0x27714cu;
    // NOP
label_277150:
    // 0x277150: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x277150u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_277154:
    // 0x277154: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x277154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277158:
    // 0x277158: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x277158u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_27715c:
    // 0x27715c: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x27715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_277160:
    // 0x277160: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x277160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277164:
    // 0x277164: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x277164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_277168:
    // 0x277168: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x277168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27716c:
    // 0x27716c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x27716cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_277170:
    // 0x277170: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x277170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_277174:
    // 0x277174: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x277174u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_277178:
    // 0x277178: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x277178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_27717c:
    // 0x27717c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27717cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_277180:
    // 0x277180: 0x24a4fe02  addiu       $a0, $a1, -0x1FE
    ctx->pc = 0x277180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966786));
label_277184:
    // 0x277184: 0x2463fe02  addiu       $v1, $v1, -0x1FE
    ctx->pc = 0x277184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966786));
label_277188:
    // 0x277188: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x277188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_27718c:
    // 0x27718c: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x27718cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_277190:
    // 0x277190: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x277190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_277194:
    // 0x277194: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x277194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277198:
    // 0x277198: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x277198u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_27719c:
    // 0x27719c: 0x46802e60  cvt.s.w     $f25, $f5
    ctx->pc = 0x27719cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_2771a0:
    // 0x2771a0: 0x46802620  cvt.s.w     $f24, $f4
    ctx->pc = 0x2771a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_2771a4:
    // 0x2771a4: 0x10000060  b           . + 4 + (0x60 << 2)
label_2771a8:
    if (ctx->pc == 0x2771A8u) {
        ctx->pc = 0x2771A8u;
            // 0x2771a8: 0x46011181  sub.s       $f6, $f2, $f1 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x2771ACu;
        goto label_2771ac;
    }
    ctx->pc = 0x2771A4u;
    {
        const bool branch_taken_0x2771a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2771A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2771A4u;
            // 0x2771a8: 0x46011181  sub.s       $f6, $f2, $f1 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2771a4) {
            ctx->pc = 0x277328u;
            goto label_277328;
        }
    }
    ctx->pc = 0x2771ACu;
label_2771ac:
    // 0x2771ac: 0x0  nop
    ctx->pc = 0x2771acu;
    // NOP
label_2771b0:
    // 0x2771b0: 0x2470ffe0  addiu       $s0, $v1, -0x20
    ctx->pc = 0x2771b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_2771b4:
    // 0x2771b4: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x2771b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2771b8:
    // 0x2771b8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_2771bc:
    if (ctx->pc == 0x2771BCu) {
        ctx->pc = 0x2771BCu;
            // 0x2771bc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2771C0u;
        goto label_2771c0;
    }
    ctx->pc = 0x2771B8u;
    {
        const bool branch_taken_0x2771b8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2771BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2771B8u;
            // 0x2771bc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2771b8) {
            ctx->pc = 0x2771CCu;
            goto label_2771cc;
        }
    }
    ctx->pc = 0x2771C0u;
label_2771c0:
    // 0x2771c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2771c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2771c4:
    // 0x2771c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2771c8:
    if (ctx->pc == 0x2771C8u) {
        ctx->pc = 0x2771C8u;
            // 0x2771c8: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2771CCu;
        goto label_2771cc;
    }
    ctx->pc = 0x2771C4u;
    {
        const bool branch_taken_0x2771c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2771C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2771C4u;
            // 0x2771c8: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2771c4) {
            ctx->pc = 0x2771E4u;
            goto label_2771e4;
        }
    }
    ctx->pc = 0x2771CCu;
label_2771cc:
    // 0x2771cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2771ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2771d0:
    // 0x2771d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2771d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2771d4:
    // 0x2771d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2771d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2771d8:
    // 0x2771d8: 0x0  nop
    ctx->pc = 0x2771d8u;
    // NOP
label_2771dc:
    // 0x2771dc: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x2771dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_2771e0:
    // 0x2771e0: 0x4618c600  add.s       $f24, $f24, $f24
    ctx->pc = 0x2771e0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
label_2771e4:
    // 0x2771e4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2771e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2771e8:
    // 0x2771e8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2771e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2771ec:
    // 0x2771ec: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2771ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2771f0:
    // 0x2771f0: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x2771f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_2771f4:
    // 0x2771f4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2771f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2771f8:
    // 0x2771f8: 0x9256ffff  lbu         $s6, -0x1($s2)
    ctx->pc = 0x2771f8u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_2771fc:
    // 0x2771fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2771fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277200:
    // 0x277200: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x277200u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277204:
    // 0x277204: 0xc4660010  lwc1        $f6, 0x10($v1)
    ctx->pc = 0x277204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_277208:
    // 0x277208: 0x1000004b  b           . + 4 + (0x4B << 2)
label_27720c:
    if (ctx->pc == 0x27720Cu) {
        ctx->pc = 0x27720Cu;
            // 0x27720c: 0x46180e40  add.s       $f25, $f1, $f24 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
        ctx->pc = 0x277210u;
        goto label_277210;
    }
    ctx->pc = 0x277208u;
    {
        const bool branch_taken_0x277208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27720Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277208u;
            // 0x27720c: 0x46180e40  add.s       $f25, $f1, $f24 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277208) {
            ctx->pc = 0x277338u;
            goto label_277338;
        }
    }
    ctx->pc = 0x277210u;
label_277210:
    // 0x277210: 0x2470ffdd  addiu       $s0, $v1, -0x23
    ctx->pc = 0x277210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
label_277214:
    // 0x277214: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x277214u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_277218:
    // 0x277218: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_27721c:
    if (ctx->pc == 0x27721Cu) {
        ctx->pc = 0x27721Cu;
            // 0x27721c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x277220u;
        goto label_277220;
    }
    ctx->pc = 0x277218u;
    {
        const bool branch_taken_0x277218 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27721Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277218u;
            // 0x27721c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277218) {
            ctx->pc = 0x27722Cu;
            goto label_27722c;
        }
    }
    ctx->pc = 0x277220u;
label_277220:
    // 0x277220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x277220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277224:
    // 0x277224: 0x10000007  b           . + 4 + (0x7 << 2)
label_277228:
    if (ctx->pc == 0x277228u) {
        ctx->pc = 0x277228u;
            // 0x277228: 0x46800660  cvt.s.w     $f25, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x27722Cu;
        goto label_27722c;
    }
    ctx->pc = 0x277224u;
    {
        const bool branch_taken_0x277224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277224u;
            // 0x277228: 0x46800660  cvt.s.w     $f25, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277224) {
            ctx->pc = 0x277244u;
            goto label_277244;
        }
    }
    ctx->pc = 0x27722Cu;
label_27722c:
    // 0x27722c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27722cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_277230:
    // 0x277230: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x277230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_277234:
    // 0x277234: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x277234u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277238:
    // 0x277238: 0x0  nop
    ctx->pc = 0x277238u;
    // NOP
label_27723c:
    // 0x27723c: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x27723cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_277240:
    // 0x277240: 0x4619ce40  add.s       $f25, $f25, $f25
    ctx->pc = 0x277240u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[25]);
label_277244:
    // 0x277244: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x277244u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_277248:
    // 0x277248: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_27724c:
    if (ctx->pc == 0x27724Cu) {
        ctx->pc = 0x27724Cu;
            // 0x27724c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x277250u;
        goto label_277250;
    }
    ctx->pc = 0x277248u;
    {
        const bool branch_taken_0x277248 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27724Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277248u;
            // 0x27724c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277248) {
            ctx->pc = 0x27725Cu;
            goto label_27725c;
        }
    }
    ctx->pc = 0x277250u;
label_277250:
    // 0x277250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x277250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277254:
    // 0x277254: 0x10000007  b           . + 4 + (0x7 << 2)
label_277258:
    if (ctx->pc == 0x277258u) {
        ctx->pc = 0x277258u;
            // 0x277258: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x27725Cu;
        goto label_27725c;
    }
    ctx->pc = 0x277254u;
    {
        const bool branch_taken_0x277254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277254u;
            // 0x277258: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277254) {
            ctx->pc = 0x277274u;
            goto label_277274;
        }
    }
    ctx->pc = 0x27725Cu;
label_27725c:
    // 0x27725c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27725cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_277260:
    // 0x277260: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x277260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_277264:
    // 0x277264: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x277264u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277268:
    // 0x277268: 0x0  nop
    ctx->pc = 0x277268u;
    // NOP
label_27726c:
    // 0x27726c: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x27726cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_277270:
    // 0x277270: 0x4618c600  add.s       $f24, $f24, $f24
    ctx->pc = 0x277270u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
label_277274:
    // 0x277274: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x277274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_277278:
    // 0x277278: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x277278u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_27727c:
    // 0x27727c: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x27727cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_277280:
    // 0x277280: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x277280u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_277284:
    // 0x277284: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x277284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277288:
    // 0x277288: 0xc4a60010  lwc1        $f6, 0x10($a1)
    ctx->pc = 0x277288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27728c:
    // 0x27728c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x27728cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_277290:
    // 0x277290: 0x83b821  addu        $s7, $a0, $v1
    ctx->pc = 0x277290u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_277294:
    // 0x277294: 0x26520007  addiu       $s2, $s2, 0x7
    ctx->pc = 0x277294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
label_277298:
    // 0x277298: 0x9244fffe  lbu         $a0, -0x2($s2)
    ctx->pc = 0x277298u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967294)));
label_27729c:
    // 0x27729c: 0x9243ffff  lbu         $v1, -0x1($s2)
    ctx->pc = 0x27729cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_2772a0:
    // 0x2772a0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2772a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2772a4:
    // 0x2772a4: 0x10000024  b           . + 4 + (0x24 << 2)
label_2772a8:
    if (ctx->pc == 0x2772A8u) {
        ctx->pc = 0x2772A8u;
            // 0x2772a8: 0x83b021  addu        $s6, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x2772ACu;
        goto label_2772ac;
    }
    ctx->pc = 0x2772A4u;
    {
        const bool branch_taken_0x2772a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2772A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2772A4u;
            // 0x2772a8: 0x83b021  addu        $s6, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2772a4) {
            ctx->pc = 0x277338u;
            goto label_277338;
        }
    }
    ctx->pc = 0x2772ACu;
label_2772ac:
    // 0x2772ac: 0x0  nop
    ctx->pc = 0x2772acu;
    // NOP
label_2772b0:
    // 0x2772b0: 0x2470fff0  addiu       $s0, $v1, -0x10
    ctx->pc = 0x2772b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_2772b4:
    // 0x2772b4: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x2772b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2772b8:
    // 0x2772b8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_2772bc:
    if (ctx->pc == 0x2772BCu) {
        ctx->pc = 0x2772BCu;
            // 0x2772bc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2772C0u;
        goto label_2772c0;
    }
    ctx->pc = 0x2772B8u;
    {
        const bool branch_taken_0x2772b8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2772BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2772B8u;
            // 0x2772bc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2772b8) {
            ctx->pc = 0x2772CCu;
            goto label_2772cc;
        }
    }
    ctx->pc = 0x2772C0u;
label_2772c0:
    // 0x2772c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2772c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2772c4:
    // 0x2772c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2772c8:
    if (ctx->pc == 0x2772C8u) {
        ctx->pc = 0x2772C8u;
            // 0x2772c8: 0x46800660  cvt.s.w     $f25, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2772CCu;
        goto label_2772cc;
    }
    ctx->pc = 0x2772C4u;
    {
        const bool branch_taken_0x2772c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2772C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2772C4u;
            // 0x2772c8: 0x46800660  cvt.s.w     $f25, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2772c4) {
            ctx->pc = 0x2772E4u;
            goto label_2772e4;
        }
    }
    ctx->pc = 0x2772CCu;
label_2772cc:
    // 0x2772cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2772ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2772d0:
    // 0x2772d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2772d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2772d4:
    // 0x2772d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2772d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2772d8:
    // 0x2772d8: 0x0  nop
    ctx->pc = 0x2772d8u;
    // NOP
label_2772dc:
    // 0x2772dc: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x2772dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
label_2772e0:
    // 0x2772e0: 0x4619ce40  add.s       $f25, $f25, $f25
    ctx->pc = 0x2772e0u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[25]);
label_2772e4:
    // 0x2772e4: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2772e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2772e8:
    // 0x2772e8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_2772ec:
    if (ctx->pc == 0x2772ECu) {
        ctx->pc = 0x2772ECu;
            // 0x2772ec: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2772F0u;
        goto label_2772f0;
    }
    ctx->pc = 0x2772E8u;
    {
        const bool branch_taken_0x2772e8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2772ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2772E8u;
            // 0x2772ec: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2772e8) {
            ctx->pc = 0x2772FCu;
            goto label_2772fc;
        }
    }
    ctx->pc = 0x2772F0u;
label_2772f0:
    // 0x2772f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2772f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2772f4:
    // 0x2772f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2772f8:
    if (ctx->pc == 0x2772F8u) {
        ctx->pc = 0x2772F8u;
            // 0x2772f8: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2772FCu;
        goto label_2772fc;
    }
    ctx->pc = 0x2772F4u;
    {
        const bool branch_taken_0x2772f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2772F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2772F4u;
            // 0x2772f8: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2772f4) {
            ctx->pc = 0x277314u;
            goto label_277314;
        }
    }
    ctx->pc = 0x2772FCu;
label_2772fc:
    // 0x2772fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2772fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_277300:
    // 0x277300: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x277300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_277304:
    // 0x277304: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x277304u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277308:
    // 0x277308: 0x0  nop
    ctx->pc = 0x277308u;
    // NOP
label_27730c:
    // 0x27730c: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x27730cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_277310:
    // 0x277310: 0x4618c600  add.s       $f24, $f24, $f24
    ctx->pc = 0x277310u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
label_277314:
    // 0x277314: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x277314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_277318:
    // 0x277318: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x277318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_27731c:
    // 0x27731c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277320:
    // 0x277320: 0xc4660010  lwc1        $f6, 0x10($v1)
    ctx->pc = 0x277320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_277324:
    // 0x277324: 0x0  nop
    ctx->pc = 0x277324u;
    // NOP
label_277328:
    // 0x277328: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x277328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_27732c:
    // 0x27732c: 0x9256ffff  lbu         $s6, -0x1($s2)
    ctx->pc = 0x27732cu;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_277330:
    // 0x277330: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x277330u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277334:
    // 0x277334: 0x0  nop
    ctx->pc = 0x277334u;
    // NOP
label_277338:
    // 0x277338: 0x46183034  c.lt.s      $f6, $f24
    ctx->pc = 0x277338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27733c:
    // 0x27733c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_277340:
    if (ctx->pc == 0x277340u) {
        ctx->pc = 0x277344u;
        goto label_277344;
    }
    ctx->pc = 0x27733Cu;
    {
        const bool branch_taken_0x27733c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27733c) {
            ctx->pc = 0x277358u;
            goto label_277358;
        }
    }
    ctx->pc = 0x277344u;
label_277344:
    // 0x277344: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x277344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277348:
    // 0x277348: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27734c:
    if (ctx->pc == 0x27734Cu) {
        ctx->pc = 0x277350u;
        goto label_277350;
    }
    ctx->pc = 0x277348u;
    {
        const bool branch_taken_0x277348 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277348) {
            ctx->pc = 0x277358u;
            goto label_277358;
        }
    }
    ctx->pc = 0x277350u;
label_277350:
    // 0x277350: 0x1000fec7  b           . + 4 + (-0x139 << 2)
label_277354:
    if (ctx->pc == 0x277354u) {
        ctx->pc = 0x277354u;
            // 0x277354: 0x2579021  addu        $s2, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->pc = 0x277358u;
        goto label_277358;
    }
    ctx->pc = 0x277350u;
    {
        const bool branch_taken_0x277350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277350u;
            // 0x277354: 0x2579021  addu        $s2, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277350) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x277358u;
label_277358:
    // 0x277358: 0x46190036  c.le.s      $f0, $f25
    ctx->pc = 0x277358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27735c:
    // 0x27735c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_277360:
    if (ctx->pc == 0x277360u) {
        ctx->pc = 0x277360u;
            // 0x277360: 0x2569021  addu        $s2, $s2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
        ctx->pc = 0x277364u;
        goto label_277364;
    }
    ctx->pc = 0x27735Cu;
    {
        const bool branch_taken_0x27735c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x277360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27735Cu;
            // 0x277360: 0x2569021  addu        $s2, $s2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27735c) {
            ctx->pc = 0x277370u;
            goto label_277370;
        }
    }
    ctx->pc = 0x277364u;
label_277364:
    // 0x277364: 0x46193036  c.le.s      $f6, $f25
    ctx->pc = 0x277364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277368:
    // 0x277368: 0x4500fec1  bc1f        . + 4 + (-0x13F << 2)
label_27736c:
    if (ctx->pc == 0x27736Cu) {
        ctx->pc = 0x277370u;
        goto label_277370;
    }
    ctx->pc = 0x277368u;
    {
        const bool branch_taken_0x277368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277368) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x277370u;
label_277370:
    // 0x277370: 0x27a20584  addiu       $v0, $sp, 0x584
    ctx->pc = 0x277370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1412));
label_277374:
    // 0x277374: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x277374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277378:
    // 0x277378: 0x461905c1  sub.s       $f23, $f0, $f25
    ctx->pc = 0x277378u;
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
label_27737c:
    // 0x27737c: 0x46180581  sub.s       $f22, $f0, $f24
    ctx->pc = 0x27737cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
label_277380:
    // 0x277380: 0xe7a10580  swc1        $f1, 0x580($sp)
    ctx->pc = 0x277380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_277384:
    // 0x277384: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x277384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277388:
    // 0x277388: 0x46193541  sub.s       $f21, $f6, $f25
    ctx->pc = 0x277388u;
    ctx->f[21] = FPU_SUB_S(ctx->f[6], ctx->f[25]);
label_27738c:
    // 0x27738c: 0x46183501  sub.s       $f20, $f6, $f24
    ctx->pc = 0x27738cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[6], ctx->f[24]);
label_277390:
    // 0x277390: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x277390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_277394:
    // 0x277394: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x277394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277398:
    // 0x277398: 0x27a20588  addiu       $v0, $sp, 0x588
    ctx->pc = 0x277398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1416));
label_27739c:
    // 0x27739c: 0x4615b834  c.lt.s      $f23, $f21
    ctx->pc = 0x27739cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2773a0:
    // 0x2773a0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2773a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2773a4:
    // 0x2773a4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2773a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2773a8:
    // 0x2773a8: 0x27a2058c  addiu       $v0, $sp, 0x58C
    ctx->pc = 0x2773a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1420));
label_2773ac:
    // 0x2773ac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2773acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2773b0:
    // 0x2773b0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2773b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2773b4:
    // 0x2773b4: 0x27a20594  addiu       $v0, $sp, 0x594
    ctx->pc = 0x2773b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1428));
label_2773b8:
    // 0x2773b8: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2773b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_2773bc:
    // 0x2773bc: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2773bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2773c0:
    // 0x2773c0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2773c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2773c4:
    // 0x2773c4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2773c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2773c8:
    // 0x2773c8: 0x27a20598  addiu       $v0, $sp, 0x598
    ctx->pc = 0x2773c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1432));
label_2773cc:
    // 0x2773cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2773ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2773d0:
    // 0x2773d0: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2773d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2773d4:
    // 0x2773d4: 0x27a2059c  addiu       $v0, $sp, 0x59C
    ctx->pc = 0x2773d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1436));
label_2773d8:
    // 0x2773d8: 0x450000a5  bc1f        . + 4 + (0xA5 << 2)
label_2773dc:
    if (ctx->pc == 0x2773DCu) {
        ctx->pc = 0x2773DCu;
            // 0x2773dc: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x2773E0u;
        goto label_2773e0;
    }
    ctx->pc = 0x2773D8u;
    {
        const bool branch_taken_0x2773d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2773DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2773D8u;
            // 0x2773dc: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2773d8) {
            ctx->pc = 0x277670u;
            goto label_277670;
        }
    }
    ctx->pc = 0x2773E0u;
label_2773e0:
    // 0x2773e0: 0x4615b842  mul.s       $f1, $f23, $f21
    ctx->pc = 0x2773e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
label_2773e4:
    // 0x2773e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2773e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2773e8:
    // 0x2773e8: 0x0  nop
    ctx->pc = 0x2773e8u;
    // NOP
label_2773ec:
    // 0x2773ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2773ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2773f0:
    // 0x2773f0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_2773f4:
    if (ctx->pc == 0x2773F4u) {
        ctx->pc = 0x2773F4u;
            // 0x2773f4: 0x4615b8c1  sub.s       $f3, $f23, $f21 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
        ctx->pc = 0x2773F8u;
        goto label_2773f8;
    }
    ctx->pc = 0x2773F0u;
    {
        const bool branch_taken_0x2773f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2773F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2773F0u;
            // 0x2773f4: 0x4615b8c1  sub.s       $f3, $f23, $f21 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2773f0) {
            ctx->pc = 0x277458u;
            goto label_277458;
        }
    }
    ctx->pc = 0x2773F8u;
label_2773f8:
    // 0x2773f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2773f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2773fc:
    // 0x2773fc: 0x4603b8c3  div.s       $f3, $f23, $f3
    ctx->pc = 0x2773fcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[3] = ctx->f[23] / ctx->f[3];
label_277400:
    // 0x277400: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x277400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_277404:
    // 0x277404: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x277404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277408:
    // 0x277408: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x277408u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_27740c:
    // 0x27740c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x27740cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277410:
    // 0x277410: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x277410u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277414:
    // 0x277414: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x277414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_277418:
    // 0x277418: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x277418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_27741c:
    // 0x27741c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x27741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277420:
    // 0x277420: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x277420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277424:
    // 0x277424: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x277424u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277428:
    // 0x277428: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x277428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_27742c:
    // 0x27742c: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x27742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_277430:
    // 0x277430: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x277430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277434:
    // 0x277434: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x277434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277438:
    // 0x277438: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x277438u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27743c:
    // 0x27743c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x27743cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_277440:
    // 0x277440: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x277440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_277444:
    // 0x277444: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x277444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277448:
    // 0x277448: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x277448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27744c:
    // 0x27744c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x27744cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277450:
    // 0x277450: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x277450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_277454:
    // 0x277454: 0xe7c0000c  swc1        $f0, 0xC($fp)
    ctx->pc = 0x277454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_277458:
    // 0x277458: 0x8fa80120  lw          $t0, 0x120($sp)
    ctx->pc = 0x277458u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_27745c:
    // 0x27745c: 0x2561023  subu        $v0, $s2, $s6
    ctx->pc = 0x27745cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
label_277460:
    // 0x277460: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_277464:
    // 0x277464: 0x573021  addu        $a2, $v0, $s7
    ctx->pc = 0x277464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_277468:
    // 0x277468: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x277468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27746c:
    // 0x27746c: 0xc09db78  jal         func_276DE0
label_277470:
    if (ctx->pc == 0x277470u) {
        ctx->pc = 0x277470u;
            // 0x277470: 0x27a70580  addiu       $a3, $sp, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
        ctx->pc = 0x277474u;
        goto label_277474;
    }
    ctx->pc = 0x27746Cu;
    SET_GPR_U32(ctx, 31, 0x277474u);
    ctx->pc = 0x277470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27746Cu;
            // 0x277470: 0x27a70580  addiu       $a3, $sp, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276DE0u;
    goto label_276de0;
    ctx->pc = 0x277474u;
label_277474:
    // 0x277474: 0x4614b042  mul.s       $f1, $f22, $f20
    ctx->pc = 0x277474u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_277478:
    // 0x277478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27747c:
    // 0x27747c: 0x0  nop
    ctx->pc = 0x27747cu;
    // NOP
label_277480:
    // 0x277480: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x277480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277484:
    // 0x277484: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_277488:
    if (ctx->pc == 0x277488u) {
        ctx->pc = 0x277488u;
            // 0x277488: 0x4614b0c1  sub.s       $f3, $f22, $f20 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
        ctx->pc = 0x27748Cu;
        goto label_27748c;
    }
    ctx->pc = 0x277484u;
    {
        const bool branch_taken_0x277484 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277484u;
            // 0x277488: 0x4614b0c1  sub.s       $f3, $f22, $f20 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277484) {
            ctx->pc = 0x2774F0u;
            goto label_2774f0;
        }
    }
    ctx->pc = 0x27748Cu;
label_27748c:
    // 0x27748c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27748cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_277490:
    // 0x277490: 0x4603b0c3  div.s       $f3, $f22, $f3
    ctx->pc = 0x277490u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[3] = ctx->f[22] / ctx->f[3];
label_277494:
    // 0x277494: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x277494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_277498:
    // 0x277498: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x277498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27749c:
    // 0x27749c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x27749cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_2774a0:
    // 0x2774a0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2774a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2774a4:
    // 0x2774a4: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2774a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2774a8:
    // 0x2774a8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2774a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2774ac:
    // 0x2774ac: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2774acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2774b0:
    // 0x2774b0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2774b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2774b4:
    // 0x2774b4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2774b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2774b8:
    // 0x2774b8: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2774b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2774bc:
    // 0x2774bc: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2774bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2774c0:
    // 0x2774c0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2774c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2774c4:
    // 0x2774c4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2774c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2774c8:
    // 0x2774c8: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2774c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2774cc:
    // 0x2774cc: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2774ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2774d0:
    // 0x2774d0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2774d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2774d4:
    // 0x2774d4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2774d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2774d8:
    // 0x2774d8: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2774d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2774dc:
    // 0x2774dc: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2774dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2774e0:
    // 0x2774e0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2774e0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2774e4:
    // 0x2774e4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2774e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2774e8:
    // 0x2774e8: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2774e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2774ec:
    // 0x2774ec: 0x0  nop
    ctx->pc = 0x2774ecu;
    // NOP
label_2774f0:
    // 0x2774f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2774f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2774f4:
    // 0x2774f4: 0xc6820054  lwc1        $f2, 0x54($s4)
    ctx->pc = 0x2774f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2774f8:
    // 0x2774f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2774f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2774fc:
    // 0x2774fc: 0x0  nop
    ctx->pc = 0x2774fcu;
    // NOP
label_277500:
    // 0x277500: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x277500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277504:
    // 0x277504: 0x4500fe5a  bc1f        . + 4 + (-0x1A6 << 2)
label_277508:
    if (ctx->pc == 0x277508u) {
        ctx->pc = 0x277508u;
            // 0x277508: 0x460200c1  sub.s       $f3, $f0, $f2 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x27750Cu;
        goto label_27750c;
    }
    ctx->pc = 0x277504u;
    {
        const bool branch_taken_0x277504 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277504u;
            // 0x277508: 0x460200c1  sub.s       $f3, $f0, $f2 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277504) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x27750Cu;
label_27750c:
    // 0x27750c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x27750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_277510:
    // 0x277510: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x277510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_277514:
    // 0x277514: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x277514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277518:
    // 0x277518: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x277518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27751c:
    // 0x27751c: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x27751cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_277520:
    // 0x277520: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x277520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_277524:
    // 0x277524: 0xe7a00570  swc1        $f0, 0x570($sp)
    ctx->pc = 0x277524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
label_277528:
    // 0x277528: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x277528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27752c:
    // 0x27752c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x27752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_277530:
    // 0x277530: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x277530u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_277534:
    // 0x277534: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x277534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277538:
    // 0x277538: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x277538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_27753c:
    // 0x27753c: 0x27a30574  addiu       $v1, $sp, 0x574
    ctx->pc = 0x27753cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1396));
label_277540:
    // 0x277540: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x277540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_277544:
    // 0x277544: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x277544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_277548:
    // 0x277548: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x277548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27754c:
    // 0x27754c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x27754cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_277550:
    // 0x277550: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x277550u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_277554:
    // 0x277554: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x277554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277558:
    // 0x277558: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x277558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_27755c:
    // 0x27755c: 0x27a30578  addiu       $v1, $sp, 0x578
    ctx->pc = 0x27755cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1400));
label_277560:
    // 0x277560: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x277560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_277564:
    // 0x277564: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x277564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_277568:
    // 0x277568: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x277568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27756c:
    // 0x27756c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x27756cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_277570:
    // 0x277570: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x277570u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_277574:
    // 0x277574: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x277574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277578:
    // 0x277578: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x277578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_27757c:
    // 0x27757c: 0x27a3057c  addiu       $v1, $sp, 0x57C
    ctx->pc = 0x27757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1404));
label_277580:
    // 0x277580: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x277580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_277584:
    // 0x277584: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x277584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_277588:
    // 0x277588: 0xc7a10570  lwc1        $f1, 0x570($sp)
    ctx->pc = 0x277588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27758c:
    // 0x27758c: 0x27a30574  addiu       $v1, $sp, 0x574
    ctx->pc = 0x27758cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1396));
label_277590:
    // 0x277590: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x277590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277594:
    // 0x277594: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x277594u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_277598:
    // 0x277598: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x277598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_27759c:
    // 0x27759c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x27759cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2775a0:
    // 0x2775a0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2775a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2775a4:
    // 0x2775a4: 0x27a30578  addiu       $v1, $sp, 0x578
    ctx->pc = 0x2775a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1400));
label_2775a8:
    // 0x2775a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2775a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2775ac:
    // 0x2775ac: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2775acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_2775b0:
    // 0x2775b0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2775b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2775b4:
    // 0x2775b4: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2775b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2775b8:
    // 0x2775b8: 0x27a3057c  addiu       $v1, $sp, 0x57C
    ctx->pc = 0x2775b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1404));
label_2775bc:
    // 0x2775bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2775bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2775c0:
    // 0x2775c0: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2775c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2775c4:
    // 0x2775c4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2775c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2775c8:
    // 0x2775c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2775c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2775cc:
    // 0x2775cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2775ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2775d0:
    // 0x2775d0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x2775d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_2775d4:
    // 0x2775d4: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x2775d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2775d8:
    // 0x2775d8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2775d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2775dc:
    // 0x2775dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2775dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2775e0:
    // 0x2775e0: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2775e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2775e4:
    // 0x2775e4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2775e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2775e8:
    // 0x2775e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2775e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2775ec:
    // 0x2775ec: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2775ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_2775f0:
    // 0x2775f0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2775f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2775f4:
    // 0x2775f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2775f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2775f8:
    // 0x2775f8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2775f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2775fc:
    // 0x2775fc: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2775fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277600:
    // 0x277600: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x277600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_277604:
    // 0x277604: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x277604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_277608:
    // 0x277608: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x277608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27760c:
    // 0x27760c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x27760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277610:
    // 0x277610: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x277610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_277614:
    // 0x277614: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x277614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_277618:
    // 0x277618: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x277618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27761c:
    // 0x27761c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x27761cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277620:
    // 0x277620: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x277620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_277624:
    // 0x277624: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x277624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_277628:
    // 0x277628: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x277628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27762c:
    // 0x27762c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x27762cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277630:
    // 0x277630: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x277630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_277634:
    // 0x277634: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x277634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_277638:
    // 0x277638: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x277638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27763c:
    // 0x27763c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x27763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277640:
    // 0x277640: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x277640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_277644:
    // 0x277644: 0x1020fe0a  beqz        $at, . + 4 + (-0x1F6 << 2)
label_277648:
    if (ctx->pc == 0x277648u) {
        ctx->pc = 0x277648u;
            // 0x277648: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->pc = 0x27764Cu;
        goto label_27764c;
    }
    ctx->pc = 0x277644u;
    {
        const bool branch_taken_0x277644 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x277648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277644u;
            // 0x277648: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277644) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x27764Cu;
label_27764c:
    // 0x27764c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x27764cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_277650:
    // 0x277650: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x277650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_277654:
    // 0x277654: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x277654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277658:
    // 0x277658: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x277658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27765c:
    // 0x27765c: 0x4500fe04  bc1f        . + 4 + (-0x1FC << 2)
label_277660:
    if (ctx->pc == 0x277660u) {
        ctx->pc = 0x277664u;
        goto label_277664;
    }
    ctx->pc = 0x27765Cu;
    {
        const bool branch_taken_0x27765c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27765c) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x277664u;
label_277664:
    // 0x277664: 0x10000340  b           . + 4 + (0x340 << 2)
label_277668:
    if (ctx->pc == 0x277668u) {
        ctx->pc = 0x27766Cu;
        goto label_27766c;
    }
    ctx->pc = 0x277664u;
    {
        const bool branch_taken_0x277664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277664) {
            ctx->pc = 0x278368u;
            goto label_278368;
        }
    }
    ctx->pc = 0x27766Cu;
label_27766c:
    // 0x27766c: 0x0  nop
    ctx->pc = 0x27766cu;
    // NOP
label_277670:
    // 0x277670: 0x4614b042  mul.s       $f1, $f22, $f20
    ctx->pc = 0x277670u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_277674:
    // 0x277674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277678:
    // 0x277678: 0x0  nop
    ctx->pc = 0x277678u;
    // NOP
label_27767c:
    // 0x27767c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27767cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277680:
    // 0x277680: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_277684:
    if (ctx->pc == 0x277684u) {
        ctx->pc = 0x277684u;
            // 0x277684: 0x4614b0c1  sub.s       $f3, $f22, $f20 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
        ctx->pc = 0x277688u;
        goto label_277688;
    }
    ctx->pc = 0x277680u;
    {
        const bool branch_taken_0x277680 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277680u;
            // 0x277684: 0x4614b0c1  sub.s       $f3, $f22, $f20 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277680) {
            ctx->pc = 0x2776E8u;
            goto label_2776e8;
        }
    }
    ctx->pc = 0x277688u;
label_277688:
    // 0x277688: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x277688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_27768c:
    // 0x27768c: 0x4603b0c3  div.s       $f3, $f22, $f3
    ctx->pc = 0x27768cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[3] = ctx->f[22] / ctx->f[3];
label_277690:
    // 0x277690: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x277690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_277694:
    // 0x277694: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x277694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277698:
    // 0x277698: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x277698u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_27769c:
    // 0x27769c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x27769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2776a0:
    // 0x2776a0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2776a0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2776a4:
    // 0x2776a4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2776a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2776a8:
    // 0x2776a8: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2776a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_2776ac:
    // 0x2776ac: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2776acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2776b0:
    // 0x2776b0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2776b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2776b4:
    // 0x2776b4: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2776b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2776b8:
    // 0x2776b8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2776b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2776bc:
    // 0x2776bc: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x2776bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_2776c0:
    // 0x2776c0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2776c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2776c4:
    // 0x2776c4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2776c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2776c8:
    // 0x2776c8: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2776c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2776cc:
    // 0x2776cc: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2776ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2776d0:
    // 0x2776d0: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x2776d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_2776d4:
    // 0x2776d4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2776d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2776d8:
    // 0x2776d8: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2776d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2776dc:
    // 0x2776dc: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2776dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2776e0:
    // 0x2776e0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2776e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2776e4:
    // 0x2776e4: 0xe7c0000c  swc1        $f0, 0xC($fp)
    ctx->pc = 0x2776e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
label_2776e8:
    // 0x2776e8: 0x8fa80120  lw          $t0, 0x120($sp)
    ctx->pc = 0x2776e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2776ec:
    // 0x2776ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2776ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2776f0:
    // 0x2776f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2776f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2776f4:
    // 0x2776f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2776f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2776f8:
    // 0x2776f8: 0xc09db78  jal         func_276DE0
label_2776fc:
    if (ctx->pc == 0x2776FCu) {
        ctx->pc = 0x2776FCu;
            // 0x2776fc: 0x27a70580  addiu       $a3, $sp, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
        ctx->pc = 0x277700u;
        goto label_277700;
    }
    ctx->pc = 0x2776F8u;
    SET_GPR_U32(ctx, 31, 0x277700u);
    ctx->pc = 0x2776FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2776F8u;
            // 0x2776fc: 0x27a70580  addiu       $a3, $sp, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276DE0u;
    goto label_276de0;
    ctx->pc = 0x277700u;
label_277700:
    // 0x277700: 0x4615b842  mul.s       $f1, $f23, $f21
    ctx->pc = 0x277700u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
label_277704:
    // 0x277704: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277708:
    // 0x277708: 0x0  nop
    ctx->pc = 0x277708u;
    // NOP
label_27770c:
    // 0x27770c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27770cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277710:
    // 0x277710: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_277714:
    if (ctx->pc == 0x277714u) {
        ctx->pc = 0x277714u;
            // 0x277714: 0x4615b8c1  sub.s       $f3, $f23, $f21 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
        ctx->pc = 0x277718u;
        goto label_277718;
    }
    ctx->pc = 0x277710u;
    {
        const bool branch_taken_0x277710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277710u;
            // 0x277714: 0x4615b8c1  sub.s       $f3, $f23, $f21 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277710) {
            ctx->pc = 0x277778u;
            goto label_277778;
        }
    }
    ctx->pc = 0x277718u;
label_277718:
    // 0x277718: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x277718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_27771c:
    // 0x27771c: 0x4603b8c3  div.s       $f3, $f23, $f3
    ctx->pc = 0x27771cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[3] = ctx->f[23] / ctx->f[3];
label_277720:
    // 0x277720: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x277720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_277724:
    // 0x277724: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x277724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277728:
    // 0x277728: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x277728u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_27772c:
    // 0x27772c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x27772cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277730:
    // 0x277730: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x277730u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277734:
    // 0x277734: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x277734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_277738:
    // 0x277738: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x277738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_27773c:
    // 0x27773c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x27773cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277740:
    // 0x277740: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x277740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277744:
    // 0x277744: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x277744u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277748:
    // 0x277748: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x277748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_27774c:
    // 0x27774c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x27774cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_277750:
    // 0x277750: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x277750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277754:
    // 0x277754: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x277754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277758:
    // 0x277758: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x277758u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27775c:
    // 0x27775c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x27775cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_277760:
    // 0x277760: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x277760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_277764:
    // 0x277764: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x277764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277768:
    // 0x277768: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x277768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27776c:
    // 0x27776c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x27776cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277770:
    // 0x277770: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x277770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_277774:
    // 0x277774: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x277774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_277778:
    // 0x277778: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x277778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_27777c:
    // 0x27777c: 0xc6820054  lwc1        $f2, 0x54($s4)
    ctx->pc = 0x27777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277780:
    // 0x277780: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x277780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277784:
    // 0x277784: 0x0  nop
    ctx->pc = 0x277784u;
    // NOP
label_277788:
    // 0x277788: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x277788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27778c:
    // 0x27778c: 0x45000058  bc1f        . + 4 + (0x58 << 2)
label_277790:
    if (ctx->pc == 0x277790u) {
        ctx->pc = 0x277790u;
            // 0x277790: 0x460200c1  sub.s       $f3, $f0, $f2 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x277794u;
        goto label_277794;
    }
    ctx->pc = 0x27778Cu;
    {
        const bool branch_taken_0x27778c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27778Cu;
            // 0x277790: 0x460200c1  sub.s       $f3, $f0, $f2 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27778c) {
            ctx->pc = 0x2778F0u;
            goto label_2778f0;
        }
    }
    ctx->pc = 0x277794u;
label_277794:
    // 0x277794: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x277794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_277798:
    // 0x277798: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x277798u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_27779c:
    // 0x27779c: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x27779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2777a0:
    // 0x2777a0: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x2777a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2777a4:
    // 0x2777a4: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x2777a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2777a8:
    // 0x2777a8: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x2777a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2777ac:
    // 0x2777ac: 0xe7a00560  swc1        $f0, 0x560($sp)
    ctx->pc = 0x2777acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1376), bits); }
label_2777b0:
    // 0x2777b0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2777b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2777b4:
    // 0x2777b4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2777b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2777b8:
    // 0x2777b8: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x2777b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2777bc:
    // 0x2777bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2777bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2777c0:
    // 0x2777c0: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x2777c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2777c4:
    // 0x2777c4: 0x27a30564  addiu       $v1, $sp, 0x564
    ctx->pc = 0x2777c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
label_2777c8:
    // 0x2777c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2777c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2777cc:
    // 0x2777cc: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2777ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2777d0:
    // 0x2777d0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2777d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2777d4:
    // 0x2777d4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2777d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2777d8:
    // 0x2777d8: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x2777d8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2777dc:
    // 0x2777dc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2777dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2777e0:
    // 0x2777e0: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x2777e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_2777e4:
    // 0x2777e4: 0x27a30568  addiu       $v1, $sp, 0x568
    ctx->pc = 0x2777e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1384));
label_2777e8:
    // 0x2777e8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2777e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2777ec:
    // 0x2777ec: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2777ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2777f0:
    // 0x2777f0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2777f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2777f4:
    // 0x2777f4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2777f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2777f8:
    // 0x2777f8: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x2777f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2777fc:
    // 0x2777fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2777fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277800:
    // 0x277800: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x277800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_277804:
    // 0x277804: 0x27a3056c  addiu       $v1, $sp, 0x56C
    ctx->pc = 0x277804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1388));
label_277808:
    // 0x277808: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x277808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27780c:
    // 0x27780c: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x27780cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_277810:
    // 0x277810: 0xc7a10560  lwc1        $f1, 0x560($sp)
    ctx->pc = 0x277810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277814:
    // 0x277814: 0x27a30564  addiu       $v1, $sp, 0x564
    ctx->pc = 0x277814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1380));
label_277818:
    // 0x277818: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x277818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27781c:
    // 0x27781c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27781cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_277820:
    // 0x277820: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x277820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_277824:
    // 0x277824: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x277824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277828:
    // 0x277828: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x277828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27782c:
    // 0x27782c: 0x27a30568  addiu       $v1, $sp, 0x568
    ctx->pc = 0x27782cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1384));
label_277830:
    // 0x277830: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x277830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_277834:
    // 0x277834: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x277834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_277838:
    // 0x277838: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x277838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27783c:
    // 0x27783c: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x27783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277840:
    // 0x277840: 0x27a3056c  addiu       $v1, $sp, 0x56C
    ctx->pc = 0x277840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1388));
label_277844:
    // 0x277844: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x277844u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_277848:
    // 0x277848: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x277848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_27784c:
    // 0x27784c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x27784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277850:
    // 0x277850: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x277850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277854:
    // 0x277854: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x277854u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_277858:
    // 0x277858: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x277858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_27785c:
    // 0x27785c: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x27785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277860:
    // 0x277860: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x277860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277864:
    // 0x277864: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x277864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_277868:
    // 0x277868: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x277868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_27786c:
    // 0x27786c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x27786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277870:
    // 0x277870: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x277870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_277874:
    // 0x277874: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x277874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_277878:
    // 0x277878: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x277878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27787c:
    // 0x27787c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27787cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_277880:
    // 0x277880: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x277880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_277884:
    // 0x277884: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x277884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277888:
    // 0x277888: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x277888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27788c:
    // 0x27788c: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x27788cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_277890:
    // 0x277890: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x277890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277894:
    // 0x277894: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x277894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277898:
    // 0x277898: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x277898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27789c:
    // 0x27789c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x27789cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2778a0:
    // 0x2778a0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2778a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2778a4:
    // 0x2778a4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2778a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2778a8:
    // 0x2778a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2778a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2778ac:
    // 0x2778ac: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2778acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_2778b0:
    // 0x2778b0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2778b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2778b4:
    // 0x2778b4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2778b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2778b8:
    // 0x2778b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2778b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2778bc:
    // 0x2778bc: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2778bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2778c0:
    // 0x2778c0: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x2778c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2778c4:
    // 0x2778c4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2778c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2778c8:
    // 0x2778c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2778c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2778cc:
    // 0x2778cc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2778d0:
    if (ctx->pc == 0x2778D0u) {
        ctx->pc = 0x2778D0u;
            // 0x2778d0: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->pc = 0x2778D4u;
        goto label_2778d4;
    }
    ctx->pc = 0x2778CCu;
    {
        const bool branch_taken_0x2778cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2778D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2778CCu;
            // 0x2778d0: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2778cc) {
            ctx->pc = 0x2778F0u;
            goto label_2778f0;
        }
    }
    ctx->pc = 0x2778D4u;
label_2778d4:
    // 0x2778d4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2778d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2778d8:
    // 0x2778d8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2778d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2778dc:
    // 0x2778dc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2778dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2778e0:
    // 0x2778e0: 0x46190036  c.le.s      $f0, $f25
    ctx->pc = 0x2778e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2778e4:
    // 0x2778e4: 0x450002a0  bc1f        . + 4 + (0x2A0 << 2)
label_2778e8:
    if (ctx->pc == 0x2778E8u) {
        ctx->pc = 0x2778ECu;
        goto label_2778ec;
    }
    ctx->pc = 0x2778E4u;
    {
        const bool branch_taken_0x2778e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2778e4) {
            ctx->pc = 0x278368u;
            goto label_278368;
        }
    }
    ctx->pc = 0x2778ECu;
label_2778ec:
    // 0x2778ec: 0x0  nop
    ctx->pc = 0x2778ecu;
    // NOP
label_2778f0:
    // 0x2778f0: 0x2561823  subu        $v1, $s2, $s6
    ctx->pc = 0x2778f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
label_2778f4:
    // 0x2778f4: 0x1000fd5e  b           . + 4 + (-0x2A2 << 2)
label_2778f8:
    if (ctx->pc == 0x2778F8u) {
        ctx->pc = 0x2778F8u;
            // 0x2778f8: 0x779021  addu        $s2, $v1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
        ctx->pc = 0x2778FCu;
        goto label_2778fc;
    }
    ctx->pc = 0x2778F4u;
    {
        const bool branch_taken_0x2778f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2778F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2778F4u;
            // 0x2778f8: 0x779021  addu        $s2, $v1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2778f4) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x2778FCu;
label_2778fc:
    // 0x2778fc: 0x0  nop
    ctx->pc = 0x2778fcu;
    // NOP
label_277900:
    // 0x277900: 0x2463ffd7  addiu       $v1, $v1, -0x29
    ctx->pc = 0x277900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967255));
label_277904:
    // 0x277904: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x277904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_277908:
    // 0x277908: 0x92490001  lbu         $t1, 0x1($s2)
    ctx->pc = 0x277908u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27790c:
    // 0x27790c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x27790cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_277910:
    // 0x277910: 0x92480002  lbu         $t0, 0x2($s2)
    ctx->pc = 0x277910u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_277914:
    // 0x277914: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x277914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277918:
    // 0x277918: 0x92460004  lbu         $a2, 0x4($s2)
    ctx->pc = 0x277918u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_27791c:
    // 0x27791c: 0x92450005  lbu         $a1, 0x5($s2)
    ctx->pc = 0x27791cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_277920:
    // 0x277920: 0xc6840014  lwc1        $f4, 0x14($s4)
    ctx->pc = 0x277920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_277924:
    // 0x277924: 0x92470003  lbu         $a3, 0x3($s2)
    ctx->pc = 0x277924u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_277928:
    // 0x277928: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x277928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27792c:
    // 0x27792c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x27792cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_277930:
    // 0x277930: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x277930u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_277934:
    // 0x277934: 0x92440006  lbu         $a0, 0x6($s2)
    ctx->pc = 0x277934u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_277938:
    // 0x277938: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x277938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_27793c:
    // 0x27793c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x27793cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_277940:
    // 0x277940: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x277940u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_277944:
    // 0x277944: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x277944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_277948:
    // 0x277948: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x277948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_27794c:
    // 0x27794c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x27794cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_277950:
    // 0x277950: 0x0  nop
    ctx->pc = 0x277950u;
    // NOP
label_277954:
    // 0x277954: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x277954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_277958:
    // 0x277958: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x277958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27795c:
    // 0x27795c: 0x26520007  addiu       $s2, $s2, 0x7
    ctx->pc = 0x27795cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
label_277960:
    // 0x277960: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x277960u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277964:
    // 0x277964: 0x0  nop
    ctx->pc = 0x277964u;
    // NOP
label_277968:
    // 0x277968: 0x46012182  mul.s       $f6, $f4, $f1
    ctx->pc = 0x277968u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_27796c:
    // 0x27796c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27796cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_277970:
    // 0x277970: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x277970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_277974:
    // 0x277974: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x277974u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_277978:
    // 0x277978: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x277978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_27797c:
    // 0x27797c: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x27797cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
label_277980:
    // 0x277980: 0x1000001b  b           . + 4 + (0x1B << 2)
label_277984:
    if (ctx->pc == 0x277984u) {
        ctx->pc = 0x277984u;
            // 0x277984: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x277988u;
        goto label_277988;
    }
    ctx->pc = 0x277980u;
    {
        const bool branch_taken_0x277980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277980u;
            // 0x277984: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277980) {
            ctx->pc = 0x2779F0u;
            goto label_2779f0;
        }
    }
    ctx->pc = 0x277988u;
label_277988:
    // 0x277988: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x277988u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27798c:
    // 0x27798c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_277990:
    if (ctx->pc == 0x277990u) {
        ctx->pc = 0x277990u;
            // 0x277990: 0x2463ffda  addiu       $v1, $v1, -0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967258));
        ctx->pc = 0x277994u;
        goto label_277994;
    }
    ctx->pc = 0x27798Cu;
    {
        const bool branch_taken_0x27798c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x277990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27798Cu;
            // 0x277990: 0x2463ffda  addiu       $v1, $v1, -0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27798c) {
            ctx->pc = 0x2779A0u;
            goto label_2779a0;
        }
    }
    ctx->pc = 0x277994u;
label_277994:
    // 0x277994: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x277994u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277998:
    // 0x277998: 0x10000008  b           . + 4 + (0x8 << 2)
label_27799c:
    if (ctx->pc == 0x27799Cu) {
        ctx->pc = 0x27799Cu;
            // 0x27799c: 0x468001a0  cvt.s.w     $f6, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2779A0u;
        goto label_2779a0;
    }
    ctx->pc = 0x277998u;
    {
        const bool branch_taken_0x277998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27799Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277998u;
            // 0x27799c: 0x468001a0  cvt.s.w     $f6, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277998) {
            ctx->pc = 0x2779BCu;
            goto label_2779bc;
        }
    }
    ctx->pc = 0x2779A0u;
label_2779a0:
    // 0x2779a0: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x2779a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2779a4:
    // 0x2779a4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2779a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2779a8:
    // 0x2779a8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2779a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_2779ac:
    // 0x2779ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2779acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2779b0:
    // 0x2779b0: 0x0  nop
    ctx->pc = 0x2779b0u;
    // NOP
label_2779b4:
    // 0x2779b4: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x2779b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_2779b8:
    // 0x2779b8: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x2779b8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_2779bc:
    // 0x2779bc: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2779bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2779c0:
    // 0x2779c0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_2779c4:
    if (ctx->pc == 0x2779C4u) {
        ctx->pc = 0x2779C4u;
            // 0x2779c4: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x2779C8u;
        goto label_2779c8;
    }
    ctx->pc = 0x2779C0u;
    {
        const bool branch_taken_0x2779c0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2779C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2779C0u;
            // 0x2779c4: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2779c0) {
            ctx->pc = 0x2779D4u;
            goto label_2779d4;
        }
    }
    ctx->pc = 0x2779C8u;
label_2779c8:
    // 0x2779c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2779c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2779cc:
    // 0x2779cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2779d0:
    if (ctx->pc == 0x2779D0u) {
        ctx->pc = 0x2779D0u;
            // 0x2779d0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2779D4u;
        goto label_2779d4;
    }
    ctx->pc = 0x2779CCu;
    {
        const bool branch_taken_0x2779cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2779D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2779CCu;
            // 0x2779d0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2779cc) {
            ctx->pc = 0x2779ECu;
            goto label_2779ec;
        }
    }
    ctx->pc = 0x2779D4u;
label_2779d4:
    // 0x2779d4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2779d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2779d8:
    // 0x2779d8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2779d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_2779dc:
    // 0x2779dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2779dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2779e0:
    // 0x2779e0: 0x0  nop
    ctx->pc = 0x2779e0u;
    // NOP
label_2779e4:
    // 0x2779e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2779e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2779e8:
    // 0x2779e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2779e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2779ec:
    // 0x2779ec: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x2779ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_2779f0:
    // 0x2779f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2779f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2779f4:
    // 0x2779f4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2779f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2779f8:
    // 0x2779f8: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2779f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2779fc:
    // 0x2779fc: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x2779fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_277a00:
    // 0x277a00: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x277a00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277a04:
    // 0x277a04: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_277a08:
    if (ctx->pc == 0x277A08u) {
        ctx->pc = 0x277A0Cu;
        goto label_277a0c;
    }
    ctx->pc = 0x277A04u;
    {
        const bool branch_taken_0x277a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277a04) {
            ctx->pc = 0x277A30u;
            goto label_277a30;
        }
    }
    ctx->pc = 0x277A0Cu;
label_277a0c:
    // 0x277a0c: 0x46062034  c.lt.s      $f4, $f6
    ctx->pc = 0x277a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277a10:
    // 0x277a10: 0x45010243  bc1t        . + 4 + (0x243 << 2)
label_277a14:
    if (ctx->pc == 0x277A14u) {
        ctx->pc = 0x277A18u;
        goto label_277a18;
    }
    ctx->pc = 0x277A10u;
    {
        const bool branch_taken_0x277a10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277a10) {
            ctx->pc = 0x278320u;
            goto label_278320;
        }
    }
    ctx->pc = 0x277A18u;
label_277a18:
    // 0x277a18: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x277a18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277a1c:
    // 0x277a1c: 0x45000240  bc1f        . + 4 + (0x240 << 2)
label_277a20:
    if (ctx->pc == 0x277A20u) {
        ctx->pc = 0x277A20u;
            // 0x277a20: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277A24u;
        goto label_277a24;
    }
    ctx->pc = 0x277A1Cu;
    {
        const bool branch_taken_0x277a1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277A1Cu;
            // 0x277a20: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a1c) {
            ctx->pc = 0x278320u;
            goto label_278320;
        }
    }
    ctx->pc = 0x277A24u;
label_277a24:
    // 0x277a24: 0x10000008  b           . + 4 + (0x8 << 2)
label_277a28:
    if (ctx->pc == 0x277A28u) {
        ctx->pc = 0x277A2Cu;
        goto label_277a2c;
    }
    ctx->pc = 0x277A24u;
    {
        const bool branch_taken_0x277a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277a24) {
            ctx->pc = 0x277A48u;
            goto label_277a48;
        }
    }
    ctx->pc = 0x277A2Cu;
label_277a2c:
    // 0x277a2c: 0x0  nop
    ctx->pc = 0x277a2cu;
    // NOP
label_277a30:
    // 0x277a30: 0x46062834  c.lt.s      $f5, $f6
    ctx->pc = 0x277a30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277a34:
    // 0x277a34: 0x4501023a  bc1t        . + 4 + (0x23A << 2)
label_277a38:
    if (ctx->pc == 0x277A38u) {
        ctx->pc = 0x277A3Cu;
        goto label_277a3c;
    }
    ctx->pc = 0x277A34u;
    {
        const bool branch_taken_0x277a34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277a34) {
            ctx->pc = 0x278320u;
            goto label_278320;
        }
    }
    ctx->pc = 0x277A3Cu;
label_277a3c:
    // 0x277a3c: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x277a3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277a40:
    // 0x277a40: 0x45000237  bc1f        . + 4 + (0x237 << 2)
label_277a44:
    if (ctx->pc == 0x277A44u) {
        ctx->pc = 0x277A44u;
            // 0x277a44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x277A48u;
        goto label_277a48;
    }
    ctx->pc = 0x277A40u;
    {
        const bool branch_taken_0x277a40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277A40u;
            // 0x277a44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a40) {
            ctx->pc = 0x278320u;
            goto label_278320;
        }
    }
    ctx->pc = 0x277A48u;
label_277a48:
    // 0x277a48: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x277a48u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_277a4c:
    // 0x277a4c: 0x27a60550  addiu       $a2, $sp, 0x550
    ctx->pc = 0x277a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
label_277a50:
    // 0x277a50: 0x27a50540  addiu       $a1, $sp, 0x540
    ctx->pc = 0x277a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_277a54:
    // 0x277a54: 0x460029c1  sub.s       $f7, $f5, $f0
    ctx->pc = 0x277a54u;
    ctx->f[7] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_277a58:
    // 0x277a58: 0x46002081  sub.s       $f2, $f4, $f0
    ctx->pc = 0x277a58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_277a5c:
    // 0x277a5c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x277a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_277a60:
    // 0x277a60: 0x7a240010  lq          $a0, 0x10($s1)
    ctx->pc = 0x277a60u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_277a64:
    // 0x277a64: 0x46023842  mul.s       $f1, $f7, $f2
    ctx->pc = 0x277a64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_277a68:
    // 0x277a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277a6c:
    // 0x277a6c: 0x0  nop
    ctx->pc = 0x277a6cu;
    // NOP
label_277a70:
    // 0x277a70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x277a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277a74:
    // 0x277a74: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_277a78:
    if (ctx->pc == 0x277A78u) {
        ctx->pc = 0x277A78u;
            // 0x277a78: 0x7ca40000  sq          $a0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
        ctx->pc = 0x277A7Cu;
        goto label_277a7c;
    }
    ctx->pc = 0x277A74u;
    {
        const bool branch_taken_0x277a74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277A74u;
            // 0x277a78: 0x7ca40000  sq          $a0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a74) {
            ctx->pc = 0x277B08u;
            goto label_277b08;
        }
    }
    ctx->pc = 0x277A7Cu;
label_277a7c:
    // 0x277a7c: 0x460238c1  sub.s       $f3, $f7, $f2
    ctx->pc = 0x277a7cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
label_277a80:
    // 0x277a80: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x277a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_277a84:
    // 0x277a84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x277a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277a88:
    // 0x277a88: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x277a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_277a8c:
    // 0x277a8c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x277a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_277a90:
    // 0x277a90: 0x460338c3  div.s       $f3, $f7, $f3
    ctx->pc = 0x277a90u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[3] = ctx->f[7] / ctx->f[3];
label_277a94:
    // 0x277a94: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x277a94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_277a98:
    // 0x277a98: 0xc7a10550  lwc1        $f1, 0x550($sp)
    ctx->pc = 0x277a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277a9c:
    // 0x277a9c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x277a9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_277aa0:
    // 0x277aa0: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x277aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_277aa4:
    // 0x277aa4: 0x27a40554  addiu       $a0, $sp, 0x554
    ctx->pc = 0x277aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1364));
label_277aa8:
    // 0x277aa8: 0xc7a00540  lwc1        $f0, 0x540($sp)
    ctx->pc = 0x277aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277aac:
    // 0x277aac: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x277aacu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277ab0:
    // 0x277ab0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x277ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_277ab4:
    // 0x277ab4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x277ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_277ab8:
    // 0x277ab8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x277ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277abc:
    // 0x277abc: 0x27a40544  addiu       $a0, $sp, 0x544
    ctx->pc = 0x277abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1348));
label_277ac0:
    // 0x277ac0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x277ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277ac4:
    // 0x277ac4: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x277ac4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277ac8:
    // 0x277ac8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x277ac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_277acc:
    // 0x277acc: 0x27a40558  addiu       $a0, $sp, 0x558
    ctx->pc = 0x277accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1368));
label_277ad0:
    // 0x277ad0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x277ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_277ad4:
    // 0x277ad4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x277ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277ad8:
    // 0x277ad8: 0x27a40548  addiu       $a0, $sp, 0x548
    ctx->pc = 0x277ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
label_277adc:
    // 0x277adc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x277adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277ae0:
    // 0x277ae0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x277ae0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277ae4:
    // 0x277ae4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x277ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_277ae8:
    // 0x277ae8: 0x27a4055c  addiu       $a0, $sp, 0x55C
    ctx->pc = 0x277ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
label_277aec:
    // 0x277aec: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x277aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_277af0:
    // 0x277af0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x277af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277af4:
    // 0x277af4: 0x27a4054c  addiu       $a0, $sp, 0x54C
    ctx->pc = 0x277af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1356));
label_277af8:
    // 0x277af8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x277af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277afc:
    // 0x277afc: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x277afcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277b00:
    // 0x277b00: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x277b00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_277b04:
    // 0x277b04: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x277b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_277b08:
    // 0x277b08: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x277b08u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_277b0c:
    // 0x277b0c: 0x46062081  sub.s       $f2, $f4, $f6
    ctx->pc = 0x277b0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_277b10:
    // 0x277b10: 0x46022842  mul.s       $f1, $f5, $f2
    ctx->pc = 0x277b10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_277b14:
    // 0x277b14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277b18:
    // 0x277b18: 0x0  nop
    ctx->pc = 0x277b18u;
    // NOP
label_277b1c:
    // 0x277b1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x277b1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277b20:
    // 0x277b20: 0x4500fcd3  bc1f        . + 4 + (-0x32D << 2)
label_277b24:
    if (ctx->pc == 0x277B24u) {
        ctx->pc = 0x277B24u;
            // 0x277b24: 0x460228c1  sub.s       $f3, $f5, $f2 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
        ctx->pc = 0x277B28u;
        goto label_277b28;
    }
    ctx->pc = 0x277B20u;
    {
        const bool branch_taken_0x277b20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277B20u;
            // 0x277b24: 0x460228c1  sub.s       $f3, $f5, $f2 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b20) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x277B28u;
label_277b28:
    // 0x277b28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x277b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_277b2c:
    // 0x277b2c: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x277b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_277b30:
    // 0x277b30: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x277b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_277b34:
    // 0x277b34: 0x460328c3  div.s       $f3, $f5, $f3
    ctx->pc = 0x277b34u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[3] = ctx->f[5] / ctx->f[3];
label_277b38:
    // 0x277b38: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x277b38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_277b3c:
    // 0x277b3c: 0xc7a10550  lwc1        $f1, 0x550($sp)
    ctx->pc = 0x277b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277b40:
    // 0x277b40: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x277b40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_277b44:
    // 0x277b44: 0x27a30554  addiu       $v1, $sp, 0x554
    ctx->pc = 0x277b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1364));
label_277b48:
    // 0x277b48: 0xc7a00540  lwc1        $f0, 0x540($sp)
    ctx->pc = 0x277b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277b4c:
    // 0x277b4c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x277b4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277b50:
    // 0x277b50: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x277b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_277b54:
    // 0x277b54: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x277b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_277b58:
    // 0x277b58: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x277b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277b5c:
    // 0x277b5c: 0x27a30544  addiu       $v1, $sp, 0x544
    ctx->pc = 0x277b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1348));
label_277b60:
    // 0x277b60: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x277b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277b64:
    // 0x277b64: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x277b64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277b68:
    // 0x277b68: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x277b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_277b6c:
    // 0x277b6c: 0x27a30558  addiu       $v1, $sp, 0x558
    ctx->pc = 0x277b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1368));
label_277b70:
    // 0x277b70: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x277b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_277b74:
    // 0x277b74: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x277b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277b78:
    // 0x277b78: 0x27a30548  addiu       $v1, $sp, 0x548
    ctx->pc = 0x277b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
label_277b7c:
    // 0x277b7c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x277b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277b80:
    // 0x277b80: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x277b80u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277b84:
    // 0x277b84: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x277b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_277b88:
    // 0x277b88: 0x27a3055c  addiu       $v1, $sp, 0x55C
    ctx->pc = 0x277b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
label_277b8c:
    // 0x277b8c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x277b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_277b90:
    // 0x277b90: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x277b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277b94:
    // 0x277b94: 0x27a3054c  addiu       $v1, $sp, 0x54C
    ctx->pc = 0x277b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1356));
label_277b98:
    // 0x277b98: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x277b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277b9c:
    // 0x277b9c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x277b9cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_277ba0:
    // 0x277ba0: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x277ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_277ba4:
    // 0x277ba4: 0x1000fcb2  b           . + 4 + (-0x34E << 2)
label_277ba8:
    if (ctx->pc == 0x277BA8u) {
        ctx->pc = 0x277BA8u;
            // 0x277ba8: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->pc = 0x277BACu;
        goto label_277bac;
    }
    ctx->pc = 0x277BA4u;
    {
        const bool branch_taken_0x277ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277BA4u;
            // 0x277ba8: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ba4) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x277BACu;
label_277bac:
    // 0x277bac: 0x0  nop
    ctx->pc = 0x277bacu;
    // NOP
label_277bb0:
    // 0x277bb0: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x277bb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_277bb4:
    // 0x277bb4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x277bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_277bb8:
    // 0x277bb8: 0x1000fcad  b           . + 4 + (-0x353 << 2)
label_277bbc:
    if (ctx->pc == 0x277BBCu) {
        ctx->pc = 0x277BBCu;
            // 0x277bbc: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x277BC0u;
        goto label_277bc0;
    }
    ctx->pc = 0x277BB8u;
    {
        const bool branch_taken_0x277bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277BB8u;
            // 0x277bbc: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277bb8) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x277BC0u;
label_277bc0:
    // 0x277bc0: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x277bc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_277bc4:
    // 0x277bc4: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x277bc4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_277bc8:
    // 0x277bc8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x277bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_277bcc:
    // 0x277bcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x277bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_277bd0:
    // 0x277bd0: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x277bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_277bd4:
    // 0x277bd4: 0x1000fca6  b           . + 4 + (-0x35A << 2)
label_277bd8:
    if (ctx->pc == 0x277BD8u) {
        ctx->pc = 0x277BD8u;
            // 0x277bd8: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x277BDCu;
        goto label_277bdc;
    }
    ctx->pc = 0x277BD4u;
    {
        const bool branch_taken_0x277bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277BD4u;
            // 0x277bd8: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277bd4) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x277BDCu;
label_277bdc:
    // 0x277bdc: 0x0  nop
    ctx->pc = 0x277bdcu;
    // NOP
label_277be0:
    // 0x277be0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x277be0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_277be4:
    // 0x277be4: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x277be4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_277be8:
    // 0x277be8: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x277be8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_277bec:
    // 0x277bec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x277becu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_277bf0:
    // 0x277bf0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x277bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_277bf4:
    // 0x277bf4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x277bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_277bf8:
    // 0x277bf8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x277bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_277bfc:
    // 0x277bfc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x277bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_277c00:
    // 0x277c00: 0x1000fc9b  b           . + 4 + (-0x365 << 2)
label_277c04:
    if (ctx->pc == 0x277C04u) {
        ctx->pc = 0x277C04u;
            // 0x277c04: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x277C08u;
        goto label_277c08;
    }
    ctx->pc = 0x277C00u;
    {
        const bool branch_taken_0x277c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277C00u;
            // 0x277c04: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c00) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x277C08u;
label_277c08:
    // 0x277c08: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x277c08u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_277c0c:
    // 0x277c0c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x277c0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_277c10:
    // 0x277c10: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x277c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_277c14:
    // 0x277c14: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x277c14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_277c18:
    // 0x277c18: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x277c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_277c1c:
    // 0x277c1c: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x277c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_277c20:
    // 0x277c20: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x277c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_277c24:
    // 0x277c24: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x277c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_277c28:
    // 0x277c28: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x277c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_277c2c:
    // 0x277c2c: 0x1000fc90  b           . + 4 + (-0x370 << 2)
label_277c30:
    if (ctx->pc == 0x277C30u) {
        ctx->pc = 0x277C30u;
            // 0x277c30: 0x839021  addu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x277C34u;
        goto label_277c34;
    }
    ctx->pc = 0x277C2Cu;
    {
        const bool branch_taken_0x277c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277C2Cu;
            // 0x277c30: 0x839021  addu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c2c) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x277C34u;
label_277c34:
    // 0x277c34: 0x0  nop
    ctx->pc = 0x277c34u;
    // NOP
label_277c38:
    // 0x277c38: 0x1000fc8d  b           . + 4 + (-0x373 << 2)
label_277c3c:
    if (ctx->pc == 0x277C3Cu) {
        ctx->pc = 0x277C3Cu;
            // 0x277c3c: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->pc = 0x277C40u;
        goto label_277c40;
    }
    ctx->pc = 0x277C38u;
    {
        const bool branch_taken_0x277c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277C38u;
            // 0x277c3c: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c38) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x277C40u;
label_277c40:
    // 0x277c40: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x277c40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_277c44:
    // 0x277c44: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_277c48:
    if (ctx->pc == 0x277C48u) {
        ctx->pc = 0x277C48u;
            // 0x277c48: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x277C4Cu;
        goto label_277c4c;
    }
    ctx->pc = 0x277C44u;
    {
        const bool branch_taken_0x277c44 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x277C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277C44u;
            // 0x277c48: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c44) {
            ctx->pc = 0x277C58u;
            goto label_277c58;
        }
    }
    ctx->pc = 0x277C4Cu;
label_277c4c:
    // 0x277c4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x277c4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277c50:
    // 0x277c50: 0x10000007  b           . + 4 + (0x7 << 2)
label_277c54:
    if (ctx->pc == 0x277C54u) {
        ctx->pc = 0x277C54u;
            // 0x277c54: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x277C58u;
        goto label_277c58;
    }
    ctx->pc = 0x277C50u;
    {
        const bool branch_taken_0x277c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277C50u;
            // 0x277c54: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c50) {
            ctx->pc = 0x277C70u;
            goto label_277c70;
        }
    }
    ctx->pc = 0x277C58u;
label_277c58:
    // 0x277c58: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x277c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_277c5c:
    // 0x277c5c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x277c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_277c60:
    // 0x277c60: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x277c60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277c64:
    // 0x277c64: 0x0  nop
    ctx->pc = 0x277c64u;
    // NOP
label_277c68:
    // 0x277c68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x277c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_277c6c:
    // 0x277c6c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x277c6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_277c70:
    // 0x277c70: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x277c70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_277c74:
    // 0x277c74: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_277c78:
    if (ctx->pc == 0x277C78u) {
        ctx->pc = 0x277C78u;
            // 0x277c78: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x277C7Cu;
        goto label_277c7c;
    }
    ctx->pc = 0x277C74u;
    {
        const bool branch_taken_0x277c74 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x277C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277C74u;
            // 0x277c78: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c74) {
            ctx->pc = 0x277C88u;
            goto label_277c88;
        }
    }
    ctx->pc = 0x277C7Cu;
label_277c7c:
    // 0x277c7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x277c7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277c80:
    // 0x277c80: 0x10000007  b           . + 4 + (0x7 << 2)
label_277c84:
    if (ctx->pc == 0x277C84u) {
        ctx->pc = 0x277C84u;
            // 0x277c84: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x277C88u;
        goto label_277c88;
    }
    ctx->pc = 0x277C80u;
    {
        const bool branch_taken_0x277c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277C80u;
            // 0x277c84: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c80) {
            ctx->pc = 0x277CA0u;
            goto label_277ca0;
        }
    }
    ctx->pc = 0x277C88u;
label_277c88:
    // 0x277c88: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x277c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_277c8c:
    // 0x277c8c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x277c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_277c90:
    // 0x277c90: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x277c90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277c94:
    // 0x277c94: 0x0  nop
    ctx->pc = 0x277c94u;
    // NOP
label_277c98:
    // 0x277c98: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x277c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_277c9c:
    // 0x277c9c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x277c9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_277ca0:
    // 0x277ca0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x277ca0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_277ca4:
    // 0x277ca4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_277ca8:
    if (ctx->pc == 0x277CA8u) {
        ctx->pc = 0x277CA8u;
            // 0x277ca8: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x277CACu;
        goto label_277cac;
    }
    ctx->pc = 0x277CA4u;
    {
        const bool branch_taken_0x277ca4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x277CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277CA4u;
            // 0x277ca8: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ca4) {
            ctx->pc = 0x277CB8u;
            goto label_277cb8;
        }
    }
    ctx->pc = 0x277CACu;
label_277cac:
    // 0x277cac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x277cacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277cb0:
    // 0x277cb0: 0x10000007  b           . + 4 + (0x7 << 2)
label_277cb4:
    if (ctx->pc == 0x277CB4u) {
        ctx->pc = 0x277CB4u;
            // 0x277cb4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x277CB8u;
        goto label_277cb8;
    }
    ctx->pc = 0x277CB0u;
    {
        const bool branch_taken_0x277cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277CB0u;
            // 0x277cb4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277cb0) {
            ctx->pc = 0x277CD0u;
            goto label_277cd0;
        }
    }
    ctx->pc = 0x277CB8u;
label_277cb8:
    // 0x277cb8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x277cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_277cbc:
    // 0x277cbc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x277cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_277cc0:
    // 0x277cc0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x277cc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277cc4:
    // 0x277cc4: 0x0  nop
    ctx->pc = 0x277cc4u;
    // NOP
label_277cc8:
    // 0x277cc8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x277cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_277ccc:
    // 0x277ccc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x277cccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_277cd0:
    // 0x277cd0: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x277cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277cd4:
    // 0x277cd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x277cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277cd8:
    // 0x277cd8: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x277cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_277cdc:
    // 0x277cdc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x277cdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_277ce0:
    // 0x277ce0: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x277ce0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_277ce4:
    // 0x277ce4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277ce8:
    // 0x277ce8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x277ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_277cec:
    // 0x277cec: 0x27a405a4  addiu       $a0, $sp, 0x5A4
    ctx->pc = 0x277cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1444));
label_277cf0:
    // 0x277cf0: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x277cf0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
label_277cf4:
    // 0x277cf4: 0xe6250000  swc1        $f5, 0x0($s1)
    ctx->pc = 0x277cf4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_277cf8:
    // 0x277cf8: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x277cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277cfc:
    // 0x277cfc: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x277cfcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_277d00:
    // 0x277d00: 0xe6250004  swc1        $f5, 0x4($s1)
    ctx->pc = 0x277d00u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_277d04:
    // 0x277d04: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x277d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277d08:
    // 0x277d08: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x277d08u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_277d0c:
    // 0x277d0c: 0xe6250008  swc1        $f5, 0x8($s1)
    ctx->pc = 0x277d0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_277d10:
    // 0x277d10: 0xc625000c  lwc1        $f5, 0xC($s1)
    ctx->pc = 0x277d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277d14:
    // 0x277d14: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x277d14u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_277d18:
    // 0x277d18: 0xe625000c  swc1        $f5, 0xC($s1)
    ctx->pc = 0x277d18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_277d1c:
    // 0x277d1c: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x277d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277d20:
    // 0x277d20: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x277d20u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
label_277d24:
    // 0x277d24: 0xe6250010  swc1        $f5, 0x10($s1)
    ctx->pc = 0x277d24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_277d28:
    // 0x277d28: 0xc6250014  lwc1        $f5, 0x14($s1)
    ctx->pc = 0x277d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277d2c:
    // 0x277d2c: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x277d2cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_277d30:
    // 0x277d30: 0xe6250014  swc1        $f5, 0x14($s1)
    ctx->pc = 0x277d30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_277d34:
    // 0x277d34: 0xc6250018  lwc1        $f5, 0x18($s1)
    ctx->pc = 0x277d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277d38:
    // 0x277d38: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x277d38u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_277d3c:
    // 0x277d3c: 0xe6250018  swc1        $f5, 0x18($s1)
    ctx->pc = 0x277d3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_277d40:
    // 0x277d40: 0xc625001c  lwc1        $f5, 0x1C($s1)
    ctx->pc = 0x277d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277d44:
    // 0x277d44: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x277d44u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_277d48:
    // 0x277d48: 0xe625001c  swc1        $f5, 0x1C($s1)
    ctx->pc = 0x277d48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_277d4c:
    // 0x277d4c: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x277d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277d50:
    // 0x277d50: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x277d50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_277d54:
    // 0x277d54: 0xe6250000  swc1        $f5, 0x0($s1)
    ctx->pc = 0x277d54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_277d58:
    // 0x277d58: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x277d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277d5c:
    // 0x277d5c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x277d5cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_277d60:
    // 0x277d60: 0xe6250004  swc1        $f5, 0x4($s1)
    ctx->pc = 0x277d60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_277d64:
    // 0x277d64: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x277d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277d68:
    // 0x277d68: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x277d68u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_277d6c:
    // 0x277d6c: 0xe6250008  swc1        $f5, 0x8($s1)
    ctx->pc = 0x277d6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_277d70:
    // 0x277d70: 0xc625000c  lwc1        $f5, 0xC($s1)
    ctx->pc = 0x277d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277d74:
    // 0x277d74: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x277d74u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_277d78:
    // 0x277d78: 0xe625000c  swc1        $f5, 0xC($s1)
    ctx->pc = 0x277d78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_277d7c:
    // 0x277d7c: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x277d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277d80:
    // 0x277d80: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x277d80u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_277d84:
    // 0x277d84: 0xe6250010  swc1        $f5, 0x10($s1)
    ctx->pc = 0x277d84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_277d88:
    // 0x277d88: 0xc6250014  lwc1        $f5, 0x14($s1)
    ctx->pc = 0x277d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277d8c:
    // 0x277d8c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x277d8cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_277d90:
    // 0x277d90: 0xe6250014  swc1        $f5, 0x14($s1)
    ctx->pc = 0x277d90u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_277d94:
    // 0x277d94: 0xc6250018  lwc1        $f5, 0x18($s1)
    ctx->pc = 0x277d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277d98:
    // 0x277d98: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x277d98u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_277d9c:
    // 0x277d9c: 0xe6250018  swc1        $f5, 0x18($s1)
    ctx->pc = 0x277d9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_277da0:
    // 0x277da0: 0xc625001c  lwc1        $f5, 0x1C($s1)
    ctx->pc = 0x277da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277da4:
    // 0x277da4: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x277da4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_277da8:
    // 0x277da8: 0xe625001c  swc1        $f5, 0x1C($s1)
    ctx->pc = 0x277da8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_277dac:
    // 0x277dac: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x277dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277db0:
    // 0x277db0: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x277db0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_277db4:
    // 0x277db4: 0xe7a305a0  swc1        $f3, 0x5A0($sp)
    ctx->pc = 0x277db4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1440), bits); }
label_277db8:
    // 0x277db8: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x277db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_277dbc:
    // 0x277dbc: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x277dbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_277dc0:
    // 0x277dc0: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x277dc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_277dc4:
    // 0x277dc4: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x277dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277dc8:
    // 0x277dc8: 0x27a405a8  addiu       $a0, $sp, 0x5A8
    ctx->pc = 0x277dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1448));
label_277dcc:
    // 0x277dcc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x277dccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_277dd0:
    // 0x277dd0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x277dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_277dd4:
    // 0x277dd4: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x277dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277dd8:
    // 0x277dd8: 0x27a405ac  addiu       $a0, $sp, 0x5AC
    ctx->pc = 0x277dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1452));
label_277ddc:
    // 0x277ddc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x277ddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_277de0:
    // 0x277de0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x277de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_277de4:
    // 0x277de4: 0xc7a005a0  lwc1        $f0, 0x5A0($sp)
    ctx->pc = 0x277de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277de8:
    // 0x277de8: 0x27a405a4  addiu       $a0, $sp, 0x5A4
    ctx->pc = 0x277de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1444));
label_277dec:
    // 0x277dec: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x277decu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_277df0:
    // 0x277df0: 0xe7a005a0  swc1        $f0, 0x5A0($sp)
    ctx->pc = 0x277df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1440), bits); }
label_277df4:
    // 0x277df4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x277df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277df8:
    // 0x277df8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x277df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_277dfc:
    // 0x277dfc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x277dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_277e00:
    // 0x277e00: 0x27a405a8  addiu       $a0, $sp, 0x5A8
    ctx->pc = 0x277e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1448));
label_277e04:
    // 0x277e04: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x277e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277e08:
    // 0x277e08: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x277e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_277e0c:
    // 0x277e0c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x277e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_277e10:
    // 0x277e10: 0x27a405ac  addiu       $a0, $sp, 0x5AC
    ctx->pc = 0x277e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1452));
label_277e14:
    // 0x277e14: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x277e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277e18:
    // 0x277e18: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x277e18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_277e1c:
    // 0x277e1c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x277e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_277e20:
    // 0x277e20: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x277e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_277e24:
    // 0x277e24: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x277e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_277e28:
    // 0x277e28: 0x27a305b0  addiu       $v1, $sp, 0x5B0
    ctx->pc = 0x277e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
label_277e2c:
    // 0x277e2c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x277e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_277e30:
    // 0x277e30: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x277e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277e34:
    // 0x277e34: 0x27a305b4  addiu       $v1, $sp, 0x5B4
    ctx->pc = 0x277e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1460));
label_277e38:
    // 0x277e38: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x277e38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_277e3c:
    // 0x277e3c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x277e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_277e40:
    // 0x277e40: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x277e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_277e44:
    // 0x277e44: 0xafa305bc  sw          $v1, 0x5BC($sp)
    ctx->pc = 0x277e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1468), GPR_U32(ctx, 3));
label_277e48:
    // 0x277e48: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x277e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_277e4c:
    // 0x277e4c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x277e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_277e50:
    // 0x277e50: 0x1000fc07  b           . + 4 + (-0x3F9 << 2)
label_277e54:
    if (ctx->pc == 0x277E54u) {
        ctx->pc = 0x277E54u;
            // 0x277e54: 0x27b305a0  addiu       $s3, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->pc = 0x277E58u;
        goto label_277e58;
    }
    ctx->pc = 0x277E50u;
    {
        const bool branch_taken_0x277e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E50u;
            // 0x277e54: 0x27b305a0  addiu       $s3, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e50) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x277E58u;
label_277e58:
    // 0x277e58: 0x1000001d  b           . + 4 + (0x1D << 2)
label_277e5c:
    if (ctx->pc == 0x277E5Cu) {
        ctx->pc = 0x277E5Cu;
            // 0x277e5c: 0x92470001  lbu         $a3, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->pc = 0x277E60u;
        goto label_277e60;
    }
    ctx->pc = 0x277E58u;
    {
        const bool branch_taken_0x277e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E58u;
            // 0x277e5c: 0x92470001  lbu         $a3, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e58) {
            ctx->pc = 0x277ED0u;
            goto label_277ed0;
        }
    }
    ctx->pc = 0x277E60u;
label_277e60:
    // 0x277e60: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x277e60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_277e64:
    // 0x277e64: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x277e64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_277e68:
    // 0x277e68: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x277e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_277e6c:
    // 0x277e6c: 0x10000018  b           . + 4 + (0x18 << 2)
label_277e70:
    if (ctx->pc == 0x277E70u) {
        ctx->pc = 0x277E70u;
            // 0x277e70: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x277E74u;
        goto label_277e74;
    }
    ctx->pc = 0x277E6Cu;
    {
        const bool branch_taken_0x277e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E6Cu;
            // 0x277e70: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e6c) {
            ctx->pc = 0x277ED0u;
            goto label_277ed0;
        }
    }
    ctx->pc = 0x277E74u;
label_277e74:
    // 0x277e74: 0x0  nop
    ctx->pc = 0x277e74u;
    // NOP
label_277e78:
    // 0x277e78: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x277e78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_277e7c:
    // 0x277e7c: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x277e7cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_277e80:
    // 0x277e80: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x277e80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_277e84:
    // 0x277e84: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x277e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_277e88:
    // 0x277e88: 0x43c00  sll         $a3, $a0, 16
    ctx->pc = 0x277e88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_277e8c:
    // 0x277e8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x277e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_277e90:
    // 0x277e90: 0x1000000f  b           . + 4 + (0xF << 2)
label_277e94:
    if (ctx->pc == 0x277E94u) {
        ctx->pc = 0x277E94u;
            // 0x277e94: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->pc = 0x277E98u;
        goto label_277e98;
    }
    ctx->pc = 0x277E90u;
    {
        const bool branch_taken_0x277e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E90u;
            // 0x277e94: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e90) {
            ctx->pc = 0x277ED0u;
            goto label_277ed0;
        }
    }
    ctx->pc = 0x277E98u;
label_277e98:
    // 0x277e98: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x277e98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_277e9c:
    // 0x277e9c: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x277e9cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_277ea0:
    // 0x277ea0: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x277ea0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_277ea4:
    // 0x277ea4: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x277ea4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_277ea8:
    // 0x277ea8: 0x53e00  sll         $a3, $a1, 24
    ctx->pc = 0x277ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_277eac:
    // 0x277eac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x277eacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_277eb0:
    // 0x277eb0: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x277eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_277eb4:
    // 0x277eb4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x277eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_277eb8:
    // 0x277eb8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x277eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_277ebc:
    // 0x277ebc: 0x10000004  b           . + 4 + (0x4 << 2)
label_277ec0:
    if (ctx->pc == 0x277EC0u) {
        ctx->pc = 0x277EC0u;
            // 0x277ec0: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = 0x277EC4u;
        goto label_277ec4;
    }
    ctx->pc = 0x277EBCu;
    {
        const bool branch_taken_0x277ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277EBCu;
            // 0x277ec0: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ebc) {
            ctx->pc = 0x277ED0u;
            goto label_277ed0;
        }
    }
    ctx->pc = 0x277EC4u;
label_277ec4:
    // 0x277ec4: 0x0  nop
    ctx->pc = 0x277ec4u;
    // NOP
label_277ec8:
    // 0x277ec8: 0x2467ffd0  addiu       $a3, $v1, -0x30
    ctx->pc = 0x277ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_277ecc:
    // 0x277ecc: 0x0  nop
    ctx->pc = 0x277eccu;
    // NOP
label_277ed0:
    // 0x277ed0: 0x8e840064  lw          $a0, 0x64($s4)
    ctx->pc = 0x277ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_277ed4:
    // 0x277ed4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x277ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_277ed8:
    // 0x277ed8: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x277ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_277edc:
    // 0x277edc: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x277edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_277ee0:
    // 0x277ee0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x277ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_277ee4:
    // 0x277ee4: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x277ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_277ee8:
    // 0x277ee8: 0x8e820068  lw          $v0, 0x68($s4)
    ctx->pc = 0x277ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
label_277eec:
    // 0x277eec: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x277eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_277ef0:
    // 0x277ef0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x277ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_277ef4:
    // 0x277ef4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x277ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_277ef8:
    // 0x277ef8: 0xe28825  or          $s1, $a3, $v0
    ctx->pc = 0x277ef8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_277efc:
    // 0x277efc: 0x320f809  jalr        $t9
label_277f00:
    if (ctx->pc == 0x277F00u) {
        ctx->pc = 0x277F00u;
            // 0x277f00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277F04u;
        goto label_277f04;
    }
    ctx->pc = 0x277EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x277F04u);
        ctx->pc = 0x277F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277EFCu;
            // 0x277f00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x277F04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x277F04u; }
            if (ctx->pc != 0x277F04u) { return; }
        }
        }
    }
    ctx->pc = 0x277F04u;
label_277f04:
    // 0x277f04: 0x8e850044  lw          $a1, 0x44($s4)
    ctx->pc = 0x277f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_277f08:
    // 0x277f08: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_277f0c:
    if (ctx->pc == 0x277F0Cu) {
        ctx->pc = 0x277F0Cu;
            // 0x277f0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277F10u;
        goto label_277f10;
    }
    ctx->pc = 0x277F08u;
    {
        const bool branch_taken_0x277f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277F08u;
            // 0x277f0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f08) {
            ctx->pc = 0x277F40u;
            goto label_277f40;
        }
    }
    ctx->pc = 0x277F10u;
label_277f10:
    // 0x277f10: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x277f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_277f14:
    // 0x277f14: 0x27a405d8  addiu       $a0, $sp, 0x5D8
    ctx->pc = 0x277f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1496));
label_277f18:
    // 0x277f18: 0x8e880064  lw          $t0, 0x64($s4)
    ctx->pc = 0x277f18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_277f1c:
    // 0x277f1c: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x277f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_277f20:
    // 0x277f20: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x277f20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277f24:
    // 0x277f24: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x277f24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_277f28:
    // 0x277f28: 0x320f809  jalr        $t9
label_277f2c:
    if (ctx->pc == 0x277F2Cu) {
        ctx->pc = 0x277F2Cu;
            // 0x277f2c: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277F30u;
        goto label_277f30;
    }
    ctx->pc = 0x277F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x277F30u);
        ctx->pc = 0x277F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277F28u;
            // 0x277f2c: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x277F30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x277F30u; }
            if (ctx->pc != 0x277F30u) { return; }
        }
        }
    }
    ctx->pc = 0x277F30u;
label_277f30:
    // 0x277f30: 0x27a305d8  addiu       $v1, $sp, 0x5D8
    ctx->pc = 0x277f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1496));
label_277f34:
    // 0x277f34: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x277f34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_277f38:
    // 0x277f38: 0x106000f9  beqz        $v1, . + 4 + (0xF9 << 2)
label_277f3c:
    if (ctx->pc == 0x277F3Cu) {
        ctx->pc = 0x277F40u;
        goto label_277f40;
    }
    ctx->pc = 0x277F38u;
    {
        const bool branch_taken_0x277f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x277f38) {
            ctx->pc = 0x278320u;
            goto label_278320;
        }
    }
    ctx->pc = 0x277F40u;
label_277f40:
    // 0x277f40: 0x8e830058  lw          $v1, 0x58($s4)
    ctx->pc = 0x277f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_277f44:
    // 0x277f44: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_277f48:
    if (ctx->pc == 0x277F48u) {
        ctx->pc = 0x277F4Cu;
        goto label_277f4c;
    }
    ctx->pc = 0x277F44u;
    {
        const bool branch_taken_0x277f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x277f44) {
            ctx->pc = 0x277FB8u;
            goto label_277fb8;
        }
    }
    ctx->pc = 0x277F4Cu;
label_277f4c:
    // 0x277f4c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x277f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_277f50:
    // 0x277f50: 0x27a405dc  addiu       $a0, $sp, 0x5DC
    ctx->pc = 0x277f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1500));
label_277f54:
    // 0x277f54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x277f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277f58:
    // 0x277f58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_277f5c:
    // 0x277f5c: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x277f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_277f60:
    // 0x277f60: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x277f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_277f64:
    // 0x277f64: 0x8e870058  lw          $a3, 0x58($s4)
    ctx->pc = 0x277f64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_277f68:
    // 0x277f68: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x277f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_277f6c:
    // 0x277f6c: 0x320f809  jalr        $t9
label_277f70:
    if (ctx->pc == 0x277F70u) {
        ctx->pc = 0x277F70u;
            // 0x277f70: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x277F74u;
        goto label_277f74;
    }
    ctx->pc = 0x277F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x277F74u);
        ctx->pc = 0x277F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277F6Cu;
            // 0x277f70: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x277F74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x277F74u; }
            if (ctx->pc != 0x277F74u) { return; }
        }
        }
    }
    ctx->pc = 0x277F74u;
label_277f74:
    // 0x277f74: 0x8e840058  lw          $a0, 0x58($s4)
    ctx->pc = 0x277f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_277f78:
    // 0x277f78: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x277f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_277f7c:
    // 0x277f7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x277f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_277f80:
    // 0x277f80: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x277f80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_277f84:
    // 0x277f84: 0x83a305dc  lb          $v1, 0x5DC($sp)
    ctx->pc = 0x277f84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1500)));
label_277f88:
    // 0x277f88: 0x106000e5  beqz        $v1, . + 4 + (0xE5 << 2)
label_277f8c:
    if (ctx->pc == 0x277F8Cu) {
        ctx->pc = 0x277F8Cu;
            // 0x277f8c: 0x83a405dc  lb          $a0, 0x5DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1500)));
        ctx->pc = 0x277F90u;
        goto label_277f90;
    }
    ctx->pc = 0x277F88u;
    {
        const bool branch_taken_0x277f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277F88u;
            // 0x277f8c: 0x83a405dc  lb          $a0, 0x5DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f88) {
            ctx->pc = 0x278320u;
            goto label_278320;
        }
    }
    ctx->pc = 0x277F90u;
label_277f90:
    // 0x277f90: 0xa2840050  sb          $a0, 0x50($s4)
    ctx->pc = 0x277f90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 4));
label_277f94:
    // 0x277f94: 0x8e830058  lw          $v1, 0x58($s4)
    ctx->pc = 0x277f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_277f98:
    // 0x277f98: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x277f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277f9c:
    // 0x277f9c: 0xe6800054  swc1        $f0, 0x54($s4)
    ctx->pc = 0x277f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
label_277fa0:
    // 0x277fa0: 0x8e840058  lw          $a0, 0x58($s4)
    ctx->pc = 0x277fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_277fa4:
    // 0x277fa4: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x277fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_277fa8:
    // 0x277fa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x277fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_277fac:
    // 0x277fac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x277facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_277fb0:
    // 0x277fb0: 0x100000db  b           . + 4 + (0xDB << 2)
label_277fb4:
    if (ctx->pc == 0x277FB4u) {
        ctx->pc = 0x277FB4u;
            // 0x277fb4: 0xac710020  sw          $s1, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 17));
        ctx->pc = 0x277FB8u;
        goto label_277fb8;
    }
    ctx->pc = 0x277FB0u;
    {
        const bool branch_taken_0x277fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277FB0u;
            // 0x277fb4: 0xac710020  sw          $s1, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277fb0) {
            ctx->pc = 0x278320u;
            goto label_278320;
        }
    }
    ctx->pc = 0x277FB8u;
label_277fb8:
    // 0x277fb8: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x277fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_277fbc:
    // 0x277fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277fc0:
    // 0x277fc0: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x277fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_277fc4:
    // 0x277fc4: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x277fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_277fc8:
    // 0x277fc8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x277fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_277fcc:
    // 0x277fcc: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x277fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
label_277fd0:
    // 0x277fd0: 0xafb10134  sw          $s1, 0x134($sp)
    ctx->pc = 0x277fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 17));
label_277fd4:
    // 0x277fd4: 0xafb00130  sw          $s0, 0x130($sp)
    ctx->pc = 0x277fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 16));
label_277fd8:
    // 0x277fd8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x277fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_277fdc:
    // 0x277fdc: 0x8e87005c  lw          $a3, 0x5C($s4)
    ctx->pc = 0x277fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_277fe0:
    // 0x277fe0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x277fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_277fe4:
    // 0x277fe4: 0x320f809  jalr        $t9
label_277fe8:
    if (ctx->pc == 0x277FE8u) {
        ctx->pc = 0x277FE8u;
            // 0x277fe8: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x277FECu;
        goto label_277fec;
    }
    ctx->pc = 0x277FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x277FECu);
        ctx->pc = 0x277FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277FE4u;
            // 0x277fe8: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x277FECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x277FECu; }
            if (ctx->pc != 0x277FECu) { return; }
        }
        }
    }
    ctx->pc = 0x277FECu;
label_277fec:
    // 0x277fec: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x277fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_277ff0:
    // 0x277ff0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x277ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277ff4:
    // 0x277ff4: 0x100000ca  b           . + 4 + (0xCA << 2)
label_277ff8:
    if (ctx->pc == 0x277FF8u) {
        ctx->pc = 0x277FF8u;
            // 0x277ff8: 0xe6800054  swc1        $f0, 0x54($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
        ctx->pc = 0x277FFCu;
        goto label_277ffc;
    }
    ctx->pc = 0x277FF4u;
    {
        const bool branch_taken_0x277ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277FF4u;
            // 0x277ff8: 0xe6800054  swc1        $f0, 0x54($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ff4) {
            ctx->pc = 0x278320u;
            goto label_278320;
        }
    }
    ctx->pc = 0x277FFCu;
label_277ffc:
    // 0x277ffc: 0x0  nop
    ctx->pc = 0x277ffcu;
    // NOP
label_278000:
    // 0x278000: 0x27a505a0  addiu       $a1, $sp, 0x5A0
    ctx->pc = 0x278000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
label_278004:
    // 0x278004: 0x12650018  beq         $s3, $a1, . + 4 + (0x18 << 2)
label_278008:
    if (ctx->pc == 0x278008u) {
        ctx->pc = 0x278008u;
            // 0x278008: 0x92460001  lbu         $a2, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->pc = 0x27800Cu;
        goto label_27800c;
    }
    ctx->pc = 0x278004u;
    {
        const bool branch_taken_0x278004 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x278008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278004u;
            // 0x278008: 0x92460001  lbu         $a2, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278004) {
            ctx->pc = 0x278068u;
            goto label_278068;
        }
    }
    ctx->pc = 0x27800Cu;
label_27800c:
    // 0x27800c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x27800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278010:
    // 0x278010: 0x27a305a4  addiu       $v1, $sp, 0x5A4
    ctx->pc = 0x278010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1444));
label_278014:
    // 0x278014: 0xe7a005a0  swc1        $f0, 0x5A0($sp)
    ctx->pc = 0x278014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1440), bits); }
label_278018:
    // 0x278018: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x278018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27801c:
    // 0x27801c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27801cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_278020:
    // 0x278020: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x278020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278024:
    // 0x278024: 0x27a305a8  addiu       $v1, $sp, 0x5A8
    ctx->pc = 0x278024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1448));
label_278028:
    // 0x278028: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x278028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27802c:
    // 0x27802c: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x27802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278030:
    // 0x278030: 0x27a305ac  addiu       $v1, $sp, 0x5AC
    ctx->pc = 0x278030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1452));
label_278034:
    // 0x278034: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x278034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_278038:
    // 0x278038: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x278038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_27803c:
    // 0x27803c: 0x27a305b0  addiu       $v1, $sp, 0x5B0
    ctx->pc = 0x27803cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
label_278040:
    // 0x278040: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x278040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_278044:
    // 0x278044: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x278044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278048:
    // 0x278048: 0x27a305b4  addiu       $v1, $sp, 0x5B4
    ctx->pc = 0x278048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1460));
label_27804c:
    // 0x27804c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27804cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_278050:
    // 0x278050: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x278050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_278054:
    // 0x278054: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x278054u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_278058:
    // 0x278058: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x278058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27805c:
    // 0x27805c: 0x27a305bc  addiu       $v1, $sp, 0x5BC
    ctx->pc = 0x27805cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1468));
label_278060:
    // 0x278060: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x278060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_278064:
    // 0x278064: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x278064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_278068:
    // 0x278068: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x278068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_27806c:
    // 0x27806c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x27806cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_278070:
    // 0x278070: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x278070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_278074:
    // 0x278074: 0x1000fb7e  b           . + 4 + (-0x482 << 2)
label_278078:
    if (ctx->pc == 0x278078u) {
        ctx->pc = 0x278078u;
            // 0x278078: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x27807Cu;
        goto label_27807c;
    }
    ctx->pc = 0x278074u;
    {
        const bool branch_taken_0x278074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278074u;
            // 0x278078: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278074) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x27807Cu;
label_27807c:
    // 0x27807c: 0x0  nop
    ctx->pc = 0x27807cu;
    // NOP
label_278080:
    // 0x278080: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x278080u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278084:
    // 0x278084: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x278084u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278088:
    // 0x278088: 0x27a505a0  addiu       $a1, $sp, 0x5A0
    ctx->pc = 0x278088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
label_27808c:
    // 0x27808c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x27808cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_278090:
    // 0x278090: 0x12650019  beq         $s3, $a1, . + 4 + (0x19 << 2)
label_278094:
    if (ctx->pc == 0x278094u) {
        ctx->pc = 0x278094u;
            // 0x278094: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x278098u;
        goto label_278098;
    }
    ctx->pc = 0x278090u;
    {
        const bool branch_taken_0x278090 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x278094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278090u;
            // 0x278094: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278090) {
            ctx->pc = 0x2780F8u;
            goto label_2780f8;
        }
    }
    ctx->pc = 0x278098u;
label_278098:
    // 0x278098: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x278098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27809c:
    // 0x27809c: 0x27a305a4  addiu       $v1, $sp, 0x5A4
    ctx->pc = 0x27809cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1444));
label_2780a0:
    // 0x2780a0: 0xe7a005a0  swc1        $f0, 0x5A0($sp)
    ctx->pc = 0x2780a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1440), bits); }
label_2780a4:
    // 0x2780a4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2780a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2780a8:
    // 0x2780a8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2780a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2780ac:
    // 0x2780ac: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2780acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2780b0:
    // 0x2780b0: 0x27a305a8  addiu       $v1, $sp, 0x5A8
    ctx->pc = 0x2780b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1448));
label_2780b4:
    // 0x2780b4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2780b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2780b8:
    // 0x2780b8: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2780b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2780bc:
    // 0x2780bc: 0x27a305ac  addiu       $v1, $sp, 0x5AC
    ctx->pc = 0x2780bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1452));
label_2780c0:
    // 0x2780c0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2780c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2780c4:
    // 0x2780c4: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2780c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2780c8:
    // 0x2780c8: 0x27a305b0  addiu       $v1, $sp, 0x5B0
    ctx->pc = 0x2780c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
label_2780cc:
    // 0x2780cc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2780ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2780d0:
    // 0x2780d0: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x2780d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2780d4:
    // 0x2780d4: 0x27a305b4  addiu       $v1, $sp, 0x5B4
    ctx->pc = 0x2780d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1460));
label_2780d8:
    // 0x2780d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2780d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2780dc:
    // 0x2780dc: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2780dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2780e0:
    // 0x2780e0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2780e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_2780e4:
    // 0x2780e4: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x2780e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2780e8:
    // 0x2780e8: 0x27a305bc  addiu       $v1, $sp, 0x5BC
    ctx->pc = 0x2780e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1468));
label_2780ec:
    // 0x2780ec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2780ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2780f0:
    // 0x2780f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2780f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2780f4:
    // 0x2780f4: 0x0  nop
    ctx->pc = 0x2780f4u;
    // NOP
label_2780f8:
    // 0x2780f8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2780f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2780fc:
    // 0x2780fc: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x2780fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_278100:
    // 0x278100: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x278100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_278104:
    // 0x278104: 0x1000fb5a  b           . + 4 + (-0x4A6 << 2)
label_278108:
    if (ctx->pc == 0x278108u) {
        ctx->pc = 0x278108u;
            // 0x278108: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x27810Cu;
        goto label_27810c;
    }
    ctx->pc = 0x278104u;
    {
        const bool branch_taken_0x278104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278104u;
            // 0x278108: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278104) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x27810Cu;
label_27810c:
    // 0x27810c: 0x0  nop
    ctx->pc = 0x27810cu;
    // NOP
label_278110:
    // 0x278110: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x278110u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278114:
    // 0x278114: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x278114u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278118:
    // 0x278118: 0x27a505a0  addiu       $a1, $sp, 0x5A0
    ctx->pc = 0x278118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
label_27811c:
    // 0x27811c: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x27811cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_278120:
    // 0x278120: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x278120u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_278124:
    // 0x278124: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x278124u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_278128:
    // 0x278128: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x278128u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_27812c:
    // 0x27812c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x27812cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_278130:
    // 0x278130: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x278130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_278134:
    // 0x278134: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x278134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_278138:
    // 0x278138: 0x12650019  beq         $s3, $a1, . + 4 + (0x19 << 2)
label_27813c:
    if (ctx->pc == 0x27813Cu) {
        ctx->pc = 0x27813Cu;
            // 0x27813c: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x278140u;
        goto label_278140;
    }
    ctx->pc = 0x278138u;
    {
        const bool branch_taken_0x278138 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x27813Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278138u;
            // 0x27813c: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278138) {
            ctx->pc = 0x2781A0u;
            goto label_2781a0;
        }
    }
    ctx->pc = 0x278140u;
label_278140:
    // 0x278140: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x278140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278144:
    // 0x278144: 0x27a305a4  addiu       $v1, $sp, 0x5A4
    ctx->pc = 0x278144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1444));
label_278148:
    // 0x278148: 0xe7a005a0  swc1        $f0, 0x5A0($sp)
    ctx->pc = 0x278148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1440), bits); }
label_27814c:
    // 0x27814c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x27814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278150:
    // 0x278150: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x278150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_278154:
    // 0x278154: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x278154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278158:
    // 0x278158: 0x27a305a8  addiu       $v1, $sp, 0x5A8
    ctx->pc = 0x278158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1448));
label_27815c:
    // 0x27815c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27815cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_278160:
    // 0x278160: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x278160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278164:
    // 0x278164: 0x27a305ac  addiu       $v1, $sp, 0x5AC
    ctx->pc = 0x278164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1452));
label_278168:
    // 0x278168: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x278168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27816c:
    // 0x27816c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x27816cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_278170:
    // 0x278170: 0x27a305b0  addiu       $v1, $sp, 0x5B0
    ctx->pc = 0x278170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
label_278174:
    // 0x278174: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x278174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_278178:
    // 0x278178: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x278178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27817c:
    // 0x27817c: 0x27a305b4  addiu       $v1, $sp, 0x5B4
    ctx->pc = 0x27817cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1460));
label_278180:
    // 0x278180: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x278180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_278184:
    // 0x278184: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x278184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_278188:
    // 0x278188: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x278188u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_27818c:
    // 0x27818c: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x27818cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278190:
    // 0x278190: 0x27a305bc  addiu       $v1, $sp, 0x5BC
    ctx->pc = 0x278190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1468));
label_278194:
    // 0x278194: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x278194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_278198:
    // 0x278198: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x278198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27819c:
    // 0x27819c: 0x0  nop
    ctx->pc = 0x27819cu;
    // NOP
label_2781a0:
    // 0x2781a0: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x2781a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
label_2781a4:
    // 0x2781a4: 0x1000fb32  b           . + 4 + (-0x4CE << 2)
label_2781a8:
    if (ctx->pc == 0x2781A8u) {
        ctx->pc = 0x2781A8u;
            // 0x2781a8: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->pc = 0x2781ACu;
        goto label_2781ac;
    }
    ctx->pc = 0x2781A4u;
    {
        const bool branch_taken_0x2781a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2781A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2781A4u;
            // 0x2781a8: 0x26520005  addiu       $s2, $s2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781a4) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x2781ACu;
label_2781ac:
    // 0x2781ac: 0x0  nop
    ctx->pc = 0x2781acu;
    // NOP
label_2781b0:
    // 0x2781b0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x2781b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2781b4:
    // 0x2781b4: 0x2463ffa0  addiu       $v1, $v1, -0x60
    ctx->pc = 0x2781b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
label_2781b8:
    // 0x2781b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2781b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2781bc:
    // 0x2781bc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2781bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2781c0:
    // 0x2781c0: 0xac6405bc  sw          $a0, 0x5BC($v1)
    ctx->pc = 0x2781c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1468), GPR_U32(ctx, 4));
label_2781c4:
    // 0x2781c4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x2781c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_2781c8:
    // 0x2781c8: 0x27a305bc  addiu       $v1, $sp, 0x5BC
    ctx->pc = 0x2781c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1468));
label_2781cc:
    // 0x2781cc: 0x27a505a0  addiu       $a1, $sp, 0x5A0
    ctx->pc = 0x2781ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
label_2781d0:
    // 0x2781d0: 0x12650019  beq         $s3, $a1, . + 4 + (0x19 << 2)
label_2781d4:
    if (ctx->pc == 0x2781D4u) {
        ctx->pc = 0x2781D4u;
            // 0x2781d4: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x2781D8u;
        goto label_2781d8;
    }
    ctx->pc = 0x2781D0u;
    {
        const bool branch_taken_0x2781d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x2781D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2781D0u;
            // 0x2781d4: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781d0) {
            ctx->pc = 0x278238u;
            goto label_278238;
        }
    }
    ctx->pc = 0x2781D8u;
label_2781d8:
    // 0x2781d8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2781d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2781dc:
    // 0x2781dc: 0x27a305a4  addiu       $v1, $sp, 0x5A4
    ctx->pc = 0x2781dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1444));
label_2781e0:
    // 0x2781e0: 0xe7a005a0  swc1        $f0, 0x5A0($sp)
    ctx->pc = 0x2781e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1440), bits); }
label_2781e4:
    // 0x2781e4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2781e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2781e8:
    // 0x2781e8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2781e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2781ec:
    // 0x2781ec: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2781ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2781f0:
    // 0x2781f0: 0x27a305a8  addiu       $v1, $sp, 0x5A8
    ctx->pc = 0x2781f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1448));
label_2781f4:
    // 0x2781f4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2781f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2781f8:
    // 0x2781f8: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2781f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2781fc:
    // 0x2781fc: 0x27a305ac  addiu       $v1, $sp, 0x5AC
    ctx->pc = 0x2781fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1452));
label_278200:
    // 0x278200: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x278200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_278204:
    // 0x278204: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x278204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_278208:
    // 0x278208: 0x27a305b0  addiu       $v1, $sp, 0x5B0
    ctx->pc = 0x278208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
label_27820c:
    // 0x27820c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x27820cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_278210:
    // 0x278210: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x278210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278214:
    // 0x278214: 0x27a305b4  addiu       $v1, $sp, 0x5B4
    ctx->pc = 0x278214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1460));
label_278218:
    // 0x278218: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x278218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27821c:
    // 0x27821c: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x27821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_278220:
    // 0x278220: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x278220u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_278224:
    // 0x278224: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x278224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278228:
    // 0x278228: 0x27a305bc  addiu       $v1, $sp, 0x5BC
    ctx->pc = 0x278228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1468));
label_27822c:
    // 0x27822c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27822cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_278230:
    // 0x278230: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x278230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_278234:
    // 0x278234: 0x0  nop
    ctx->pc = 0x278234u;
    // NOP
label_278238:
    // 0x278238: 0x27a305bc  addiu       $v1, $sp, 0x5BC
    ctx->pc = 0x278238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1468));
label_27823c:
    // 0x27823c: 0x1000fb0c  b           . + 4 + (-0x4F4 << 2)
label_278240:
    if (ctx->pc == 0x278240u) {
        ctx->pc = 0x278240u;
            // 0x278240: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->pc = 0x278244u;
        goto label_278244;
    }
    ctx->pc = 0x27823Cu;
    {
        const bool branch_taken_0x27823c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27823Cu;
            // 0x278240: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27823c) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x278244u;
label_278244:
    // 0x278244: 0x0  nop
    ctx->pc = 0x278244u;
    // NOP
label_278248:
    // 0x278248: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x278248u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_27824c:
    // 0x27824c: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x27824cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278250:
    // 0x278250: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x278250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
label_278254:
    // 0x278254: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x278254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_278258:
    // 0x278258: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x278258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_27825c:
    // 0x27825c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x27825cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_278260:
    // 0x278260: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x278260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_278264:
    // 0x278264: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x278264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
label_278268:
    // 0x278268: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_27826c:
    if (ctx->pc == 0x27826Cu) {
        ctx->pc = 0x27826Cu;
            // 0x27826c: 0xac6405bc  sw          $a0, 0x5BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1468), GPR_U32(ctx, 4));
        ctx->pc = 0x278270u;
        goto label_278270;
    }
    ctx->pc = 0x278268u;
    {
        const bool branch_taken_0x278268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27826Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278268u;
            // 0x27826c: 0xac6405bc  sw          $a0, 0x5BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1468), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278268) {
            ctx->pc = 0x2781C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2781c8;
        }
    }
    ctx->pc = 0x278270u;
label_278270:
    // 0x278270: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x278270u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_278274:
    // 0x278274: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x278274u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_278278:
    // 0x278278: 0x2463ff98  addiu       $v1, $v1, -0x68
    ctx->pc = 0x278278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967192));
label_27827c:
    // 0x27827c: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x27827cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_278280:
    // 0x278280: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x278280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_278284:
    // 0x278284: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x278284u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_278288:
    // 0x278288: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x278288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_27828c:
    // 0x27828c: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x27828cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_278290:
    // 0x278290: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x278290u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_278294:
    // 0x278294: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x278294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_278298:
    // 0x278298: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x278298u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_27829c:
    // 0x27829c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x27829cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2782a0:
    // 0x2782a0: 0x26520005  addiu       $s2, $s2, 0x5
    ctx->pc = 0x2782a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
label_2782a4:
    // 0x2782a4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2782a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2782a8:
    // 0x2782a8: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
label_2782ac:
    if (ctx->pc == 0x2782ACu) {
        ctx->pc = 0x2782ACu;
            // 0x2782ac: 0xac6405bc  sw          $a0, 0x5BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1468), GPR_U32(ctx, 4));
        ctx->pc = 0x2782B0u;
        goto label_2782b0;
    }
    ctx->pc = 0x2782A8u;
    {
        const bool branch_taken_0x2782a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2782ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2782A8u;
            // 0x2782ac: 0xac6405bc  sw          $a0, 0x5BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1468), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2782a8) {
            ctx->pc = 0x2781C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2781c8;
        }
    }
    ctx->pc = 0x2782B0u;
label_2782b0:
    // 0x2782b0: 0x27a405c8  addiu       $a0, $sp, 0x5C8
    ctx->pc = 0x2782b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1480));
label_2782b4:
    // 0x2782b4: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x2782b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_2782b8:
    // 0x2782b8: 0xc0a7214  jal         func_29C850
label_2782bc:
    if (ctx->pc == 0x2782BCu) {
        ctx->pc = 0x2782BCu;
            // 0x2782bc: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x2782C0u;
        goto label_2782c0;
    }
    ctx->pc = 0x2782B8u;
    SET_GPR_U32(ctx, 31, 0x2782C0u);
    ctx->pc = 0x2782BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2782B8u;
            // 0x2782bc: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782C0u; }
        if (ctx->pc != 0x2782C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782C0u; }
        if (ctx->pc != 0x2782C0u) { return; }
    }
    ctx->pc = 0x2782C0u;
label_2782c0:
    // 0x2782c0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2782c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2782c4:
    // 0x2782c4: 0x27a405c8  addiu       $a0, $sp, 0x5C8
    ctx->pc = 0x2782c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1480));
label_2782c8:
    // 0x2782c8: 0xc0a7fc0  jal         func_29FF00
label_2782cc:
    if (ctx->pc == 0x2782CCu) {
        ctx->pc = 0x2782CCu;
            // 0x2782cc: 0x24a5d210  addiu       $a1, $a1, -0x2DF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955536));
        ctx->pc = 0x2782D0u;
        goto label_2782d0;
    }
    ctx->pc = 0x2782C8u;
    SET_GPR_U32(ctx, 31, 0x2782D0u);
    ctx->pc = 0x2782CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2782C8u;
            // 0x2782cc: 0x24a5d210  addiu       $a1, $a1, -0x2DF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782D0u; }
        if (ctx->pc != 0x2782D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782D0u; }
        if (ctx->pc != 0x2782D0u) { return; }
    }
    ctx->pc = 0x2782D0u;
label_2782d0:
    // 0x2782d0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2782d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2782d4:
    // 0x2782d4: 0x3c021298  lui         $v0, 0x1298
    ctx->pc = 0x2782d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4760 << 16));
label_2782d8:
    // 0x2782d8: 0x8c24ea18  lw          $a0, -0x15E8($at)
    ctx->pc = 0x2782d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961688)));
label_2782dc:
    // 0x2782dc: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x2782dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_2782e0:
    // 0x2782e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2782e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2782e4:
    // 0x2782e4: 0x27a70340  addiu       $a3, $sp, 0x340
    ctx->pc = 0x2782e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_2782e8:
    // 0x2782e8: 0x3446fedd  ori         $a2, $v0, 0xFEDD
    ctx->pc = 0x2782e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65245);
label_2782ec:
    // 0x2782ec: 0x2508d2b0  addiu       $t0, $t0, -0x2D50
    ctx->pc = 0x2782ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955696));
label_2782f0:
    // 0x2782f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2782f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2782f4:
    // 0x2782f4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2782f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2782f8:
    // 0x2782f8: 0x320f809  jalr        $t9
label_2782fc:
    if (ctx->pc == 0x2782FCu) {
        ctx->pc = 0x2782FCu;
            // 0x2782fc: 0x2409021c  addiu       $t1, $zero, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
        ctx->pc = 0x278300u;
        goto label_278300;
    }
    ctx->pc = 0x2782F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x278300u);
        ctx->pc = 0x2782FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2782F8u;
            // 0x2782fc: 0x2409021c  addiu       $t1, $zero, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x278300u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x278300u; }
            if (ctx->pc != 0x278300u) { return; }
        }
        }
    }
    ctx->pc = 0x278300u;
label_278300:
    // 0x278300: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x278300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_278304:
    // 0x278304: 0x27a405c8  addiu       $a0, $sp, 0x5C8
    ctx->pc = 0x278304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1480));
label_278308:
    // 0x278308: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x278308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_27830c:
    // 0x27830c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27830cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278310:
    // 0x278310: 0xc0a7f78  jal         func_29FDE0
label_278314:
    if (ctx->pc == 0x278314u) {
        ctx->pc = 0x278314u;
            // 0x278314: 0xafa205c8  sw          $v0, 0x5C8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1480), GPR_U32(ctx, 2));
        ctx->pc = 0x278318u;
        goto label_278318;
    }
    ctx->pc = 0x278310u;
    SET_GPR_U32(ctx, 31, 0x278318u);
    ctx->pc = 0x278314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278310u;
            // 0x278314: 0xafa205c8  sw          $v0, 0x5C8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278318u; }
        if (ctx->pc != 0x278318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278318u; }
        if (ctx->pc != 0x278318u) { return; }
    }
    ctx->pc = 0x278318u;
label_278318:
    // 0x278318: 0x1000fad5  b           . + 4 + (-0x52B << 2)
label_27831c:
    if (ctx->pc == 0x27831Cu) {
        ctx->pc = 0x278320u;
        goto label_278320;
    }
    ctx->pc = 0x278318u;
    {
        const bool branch_taken_0x278318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278318) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x278320u;
label_278320:
    // 0x278320: 0x10000011  b           . + 4 + (0x11 << 2)
label_278324:
    if (ctx->pc == 0x278324u) {
        ctx->pc = 0x278328u;
        goto label_278328;
    }
    ctx->pc = 0x278320u;
    {
        const bool branch_taken_0x278320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278320) {
            ctx->pc = 0x278368u;
            goto label_278368;
        }
    }
    ctx->pc = 0x278328u;
label_278328:
    // 0x278328: 0x26830034  addiu       $v1, $s4, 0x34
    ctx->pc = 0x278328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
label_27832c:
    // 0x27832c: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x27832cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_278330:
    // 0x278330: 0x27be0590  addiu       $fp, $sp, 0x590
    ctx->pc = 0x278330u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
label_278334:
    // 0x278334: 0x26830024  addiu       $v1, $s4, 0x24
    ctx->pc = 0x278334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_278338:
    // 0x278338: 0x27b505b8  addiu       $s5, $sp, 0x5B8
    ctx->pc = 0x278338u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1464));
label_27833c:
    // 0x27833c: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x27833cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_278340:
    // 0x278340: 0x26830038  addiu       $v1, $s4, 0x38
    ctx->pc = 0x278340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
label_278344:
    // 0x278344: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x278344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_278348:
    // 0x278348: 0x26830028  addiu       $v1, $s4, 0x28
    ctx->pc = 0x278348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_27834c:
    // 0x27834c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x27834cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_278350:
    // 0x278350: 0x2683003c  addiu       $v1, $s4, 0x3C
    ctx->pc = 0x278350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
label_278354:
    // 0x278354: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x278354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_278358:
    // 0x278358: 0x2683002c  addiu       $v1, $s4, 0x2C
    ctx->pc = 0x278358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
label_27835c:
    // 0x27835c: 0x1000fac4  b           . + 4 + (-0x53C << 2)
label_278360:
    if (ctx->pc == 0x278360u) {
        ctx->pc = 0x278360u;
            // 0x278360: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->pc = 0x278364u;
        goto label_278364;
    }
    ctx->pc = 0x27835Cu;
    {
        const bool branch_taken_0x27835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27835Cu;
            // 0x278360: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27835c) {
            ctx->pc = 0x276E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276e70;
        }
    }
    ctx->pc = 0x278364u;
label_278364:
    // 0x278364: 0x0  nop
    ctx->pc = 0x278364u;
    // NOP
label_278368:
    // 0x278368: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x278368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_27836c:
    // 0x27836c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x27836cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_278370:
    // 0x278370: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x278370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_278374:
    // 0x278374: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x278374u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_278378:
    // 0x278378: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x278378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_27837c:
    // 0x27837c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x27837cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_278380:
    // 0x278380: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x278380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_278384:
    // 0x278384: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x278384u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_278388:
    // 0x278388: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x278388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_27838c:
    // 0x27838c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x27838cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_278390:
    // 0x278390: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x278390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_278394:
    // 0x278394: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x278394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_278398:
    // 0x278398: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x278398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27839c:
    // 0x27839c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x27839cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2783a0:
    // 0x2783a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2783a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2783a4:
    // 0x2783a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2783a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2783a8:
    // 0x2783a8: 0x3e00008  jr          $ra
label_2783ac:
    if (ctx->pc == 0x2783ACu) {
        ctx->pc = 0x2783ACu;
            // 0x2783ac: 0x27bd05e0  addiu       $sp, $sp, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
        ctx->pc = 0x2783B0u;
        goto label_fallthrough_0x2783a8;
    }
    ctx->pc = 0x2783A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2783ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2783A8u;
            // 0x2783ac: 0x27bd05e0  addiu       $sp, $sp, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2783a8:
    ctx->pc = 0x2783B0u;
}
