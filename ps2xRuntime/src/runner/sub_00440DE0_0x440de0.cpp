#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00440DE0
// Address: 0x440de0 - 0x441d50
void sub_00440DE0_0x440de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440DE0_0x440de0");
#endif

    switch (ctx->pc) {
        case 0x440de0u: goto label_440de0;
        case 0x440de4u: goto label_440de4;
        case 0x440de8u: goto label_440de8;
        case 0x440decu: goto label_440dec;
        case 0x440df0u: goto label_440df0;
        case 0x440df4u: goto label_440df4;
        case 0x440df8u: goto label_440df8;
        case 0x440dfcu: goto label_440dfc;
        case 0x440e00u: goto label_440e00;
        case 0x440e04u: goto label_440e04;
        case 0x440e08u: goto label_440e08;
        case 0x440e0cu: goto label_440e0c;
        case 0x440e10u: goto label_440e10;
        case 0x440e14u: goto label_440e14;
        case 0x440e18u: goto label_440e18;
        case 0x440e1cu: goto label_440e1c;
        case 0x440e20u: goto label_440e20;
        case 0x440e24u: goto label_440e24;
        case 0x440e28u: goto label_440e28;
        case 0x440e2cu: goto label_440e2c;
        case 0x440e30u: goto label_440e30;
        case 0x440e34u: goto label_440e34;
        case 0x440e38u: goto label_440e38;
        case 0x440e3cu: goto label_440e3c;
        case 0x440e40u: goto label_440e40;
        case 0x440e44u: goto label_440e44;
        case 0x440e48u: goto label_440e48;
        case 0x440e4cu: goto label_440e4c;
        case 0x440e50u: goto label_440e50;
        case 0x440e54u: goto label_440e54;
        case 0x440e58u: goto label_440e58;
        case 0x440e5cu: goto label_440e5c;
        case 0x440e60u: goto label_440e60;
        case 0x440e64u: goto label_440e64;
        case 0x440e68u: goto label_440e68;
        case 0x440e6cu: goto label_440e6c;
        case 0x440e70u: goto label_440e70;
        case 0x440e74u: goto label_440e74;
        case 0x440e78u: goto label_440e78;
        case 0x440e7cu: goto label_440e7c;
        case 0x440e80u: goto label_440e80;
        case 0x440e84u: goto label_440e84;
        case 0x440e88u: goto label_440e88;
        case 0x440e8cu: goto label_440e8c;
        case 0x440e90u: goto label_440e90;
        case 0x440e94u: goto label_440e94;
        case 0x440e98u: goto label_440e98;
        case 0x440e9cu: goto label_440e9c;
        case 0x440ea0u: goto label_440ea0;
        case 0x440ea4u: goto label_440ea4;
        case 0x440ea8u: goto label_440ea8;
        case 0x440eacu: goto label_440eac;
        case 0x440eb0u: goto label_440eb0;
        case 0x440eb4u: goto label_440eb4;
        case 0x440eb8u: goto label_440eb8;
        case 0x440ebcu: goto label_440ebc;
        case 0x440ec0u: goto label_440ec0;
        case 0x440ec4u: goto label_440ec4;
        case 0x440ec8u: goto label_440ec8;
        case 0x440eccu: goto label_440ecc;
        case 0x440ed0u: goto label_440ed0;
        case 0x440ed4u: goto label_440ed4;
        case 0x440ed8u: goto label_440ed8;
        case 0x440edcu: goto label_440edc;
        case 0x440ee0u: goto label_440ee0;
        case 0x440ee4u: goto label_440ee4;
        case 0x440ee8u: goto label_440ee8;
        case 0x440eecu: goto label_440eec;
        case 0x440ef0u: goto label_440ef0;
        case 0x440ef4u: goto label_440ef4;
        case 0x440ef8u: goto label_440ef8;
        case 0x440efcu: goto label_440efc;
        case 0x440f00u: goto label_440f00;
        case 0x440f04u: goto label_440f04;
        case 0x440f08u: goto label_440f08;
        case 0x440f0cu: goto label_440f0c;
        case 0x440f10u: goto label_440f10;
        case 0x440f14u: goto label_440f14;
        case 0x440f18u: goto label_440f18;
        case 0x440f1cu: goto label_440f1c;
        case 0x440f20u: goto label_440f20;
        case 0x440f24u: goto label_440f24;
        case 0x440f28u: goto label_440f28;
        case 0x440f2cu: goto label_440f2c;
        case 0x440f30u: goto label_440f30;
        case 0x440f34u: goto label_440f34;
        case 0x440f38u: goto label_440f38;
        case 0x440f3cu: goto label_440f3c;
        case 0x440f40u: goto label_440f40;
        case 0x440f44u: goto label_440f44;
        case 0x440f48u: goto label_440f48;
        case 0x440f4cu: goto label_440f4c;
        case 0x440f50u: goto label_440f50;
        case 0x440f54u: goto label_440f54;
        case 0x440f58u: goto label_440f58;
        case 0x440f5cu: goto label_440f5c;
        case 0x440f60u: goto label_440f60;
        case 0x440f64u: goto label_440f64;
        case 0x440f68u: goto label_440f68;
        case 0x440f6cu: goto label_440f6c;
        case 0x440f70u: goto label_440f70;
        case 0x440f74u: goto label_440f74;
        case 0x440f78u: goto label_440f78;
        case 0x440f7cu: goto label_440f7c;
        case 0x440f80u: goto label_440f80;
        case 0x440f84u: goto label_440f84;
        case 0x440f88u: goto label_440f88;
        case 0x440f8cu: goto label_440f8c;
        case 0x440f90u: goto label_440f90;
        case 0x440f94u: goto label_440f94;
        case 0x440f98u: goto label_440f98;
        case 0x440f9cu: goto label_440f9c;
        case 0x440fa0u: goto label_440fa0;
        case 0x440fa4u: goto label_440fa4;
        case 0x440fa8u: goto label_440fa8;
        case 0x440facu: goto label_440fac;
        case 0x440fb0u: goto label_440fb0;
        case 0x440fb4u: goto label_440fb4;
        case 0x440fb8u: goto label_440fb8;
        case 0x440fbcu: goto label_440fbc;
        case 0x440fc0u: goto label_440fc0;
        case 0x440fc4u: goto label_440fc4;
        case 0x440fc8u: goto label_440fc8;
        case 0x440fccu: goto label_440fcc;
        case 0x440fd0u: goto label_440fd0;
        case 0x440fd4u: goto label_440fd4;
        case 0x440fd8u: goto label_440fd8;
        case 0x440fdcu: goto label_440fdc;
        case 0x440fe0u: goto label_440fe0;
        case 0x440fe4u: goto label_440fe4;
        case 0x440fe8u: goto label_440fe8;
        case 0x440fecu: goto label_440fec;
        case 0x440ff0u: goto label_440ff0;
        case 0x440ff4u: goto label_440ff4;
        case 0x440ff8u: goto label_440ff8;
        case 0x440ffcu: goto label_440ffc;
        case 0x441000u: goto label_441000;
        case 0x441004u: goto label_441004;
        case 0x441008u: goto label_441008;
        case 0x44100cu: goto label_44100c;
        case 0x441010u: goto label_441010;
        case 0x441014u: goto label_441014;
        case 0x441018u: goto label_441018;
        case 0x44101cu: goto label_44101c;
        case 0x441020u: goto label_441020;
        case 0x441024u: goto label_441024;
        case 0x441028u: goto label_441028;
        case 0x44102cu: goto label_44102c;
        case 0x441030u: goto label_441030;
        case 0x441034u: goto label_441034;
        case 0x441038u: goto label_441038;
        case 0x44103cu: goto label_44103c;
        case 0x441040u: goto label_441040;
        case 0x441044u: goto label_441044;
        case 0x441048u: goto label_441048;
        case 0x44104cu: goto label_44104c;
        case 0x441050u: goto label_441050;
        case 0x441054u: goto label_441054;
        case 0x441058u: goto label_441058;
        case 0x44105cu: goto label_44105c;
        case 0x441060u: goto label_441060;
        case 0x441064u: goto label_441064;
        case 0x441068u: goto label_441068;
        case 0x44106cu: goto label_44106c;
        case 0x441070u: goto label_441070;
        case 0x441074u: goto label_441074;
        case 0x441078u: goto label_441078;
        case 0x44107cu: goto label_44107c;
        case 0x441080u: goto label_441080;
        case 0x441084u: goto label_441084;
        case 0x441088u: goto label_441088;
        case 0x44108cu: goto label_44108c;
        case 0x441090u: goto label_441090;
        case 0x441094u: goto label_441094;
        case 0x441098u: goto label_441098;
        case 0x44109cu: goto label_44109c;
        case 0x4410a0u: goto label_4410a0;
        case 0x4410a4u: goto label_4410a4;
        case 0x4410a8u: goto label_4410a8;
        case 0x4410acu: goto label_4410ac;
        case 0x4410b0u: goto label_4410b0;
        case 0x4410b4u: goto label_4410b4;
        case 0x4410b8u: goto label_4410b8;
        case 0x4410bcu: goto label_4410bc;
        case 0x4410c0u: goto label_4410c0;
        case 0x4410c4u: goto label_4410c4;
        case 0x4410c8u: goto label_4410c8;
        case 0x4410ccu: goto label_4410cc;
        case 0x4410d0u: goto label_4410d0;
        case 0x4410d4u: goto label_4410d4;
        case 0x4410d8u: goto label_4410d8;
        case 0x4410dcu: goto label_4410dc;
        case 0x4410e0u: goto label_4410e0;
        case 0x4410e4u: goto label_4410e4;
        case 0x4410e8u: goto label_4410e8;
        case 0x4410ecu: goto label_4410ec;
        case 0x4410f0u: goto label_4410f0;
        case 0x4410f4u: goto label_4410f4;
        case 0x4410f8u: goto label_4410f8;
        case 0x4410fcu: goto label_4410fc;
        case 0x441100u: goto label_441100;
        case 0x441104u: goto label_441104;
        case 0x441108u: goto label_441108;
        case 0x44110cu: goto label_44110c;
        case 0x441110u: goto label_441110;
        case 0x441114u: goto label_441114;
        case 0x441118u: goto label_441118;
        case 0x44111cu: goto label_44111c;
        case 0x441120u: goto label_441120;
        case 0x441124u: goto label_441124;
        case 0x441128u: goto label_441128;
        case 0x44112cu: goto label_44112c;
        case 0x441130u: goto label_441130;
        case 0x441134u: goto label_441134;
        case 0x441138u: goto label_441138;
        case 0x44113cu: goto label_44113c;
        case 0x441140u: goto label_441140;
        case 0x441144u: goto label_441144;
        case 0x441148u: goto label_441148;
        case 0x44114cu: goto label_44114c;
        case 0x441150u: goto label_441150;
        case 0x441154u: goto label_441154;
        case 0x441158u: goto label_441158;
        case 0x44115cu: goto label_44115c;
        case 0x441160u: goto label_441160;
        case 0x441164u: goto label_441164;
        case 0x441168u: goto label_441168;
        case 0x44116cu: goto label_44116c;
        case 0x441170u: goto label_441170;
        case 0x441174u: goto label_441174;
        case 0x441178u: goto label_441178;
        case 0x44117cu: goto label_44117c;
        case 0x441180u: goto label_441180;
        case 0x441184u: goto label_441184;
        case 0x441188u: goto label_441188;
        case 0x44118cu: goto label_44118c;
        case 0x441190u: goto label_441190;
        case 0x441194u: goto label_441194;
        case 0x441198u: goto label_441198;
        case 0x44119cu: goto label_44119c;
        case 0x4411a0u: goto label_4411a0;
        case 0x4411a4u: goto label_4411a4;
        case 0x4411a8u: goto label_4411a8;
        case 0x4411acu: goto label_4411ac;
        case 0x4411b0u: goto label_4411b0;
        case 0x4411b4u: goto label_4411b4;
        case 0x4411b8u: goto label_4411b8;
        case 0x4411bcu: goto label_4411bc;
        case 0x4411c0u: goto label_4411c0;
        case 0x4411c4u: goto label_4411c4;
        case 0x4411c8u: goto label_4411c8;
        case 0x4411ccu: goto label_4411cc;
        case 0x4411d0u: goto label_4411d0;
        case 0x4411d4u: goto label_4411d4;
        case 0x4411d8u: goto label_4411d8;
        case 0x4411dcu: goto label_4411dc;
        case 0x4411e0u: goto label_4411e0;
        case 0x4411e4u: goto label_4411e4;
        case 0x4411e8u: goto label_4411e8;
        case 0x4411ecu: goto label_4411ec;
        case 0x4411f0u: goto label_4411f0;
        case 0x4411f4u: goto label_4411f4;
        case 0x4411f8u: goto label_4411f8;
        case 0x4411fcu: goto label_4411fc;
        case 0x441200u: goto label_441200;
        case 0x441204u: goto label_441204;
        case 0x441208u: goto label_441208;
        case 0x44120cu: goto label_44120c;
        case 0x441210u: goto label_441210;
        case 0x441214u: goto label_441214;
        case 0x441218u: goto label_441218;
        case 0x44121cu: goto label_44121c;
        case 0x441220u: goto label_441220;
        case 0x441224u: goto label_441224;
        case 0x441228u: goto label_441228;
        case 0x44122cu: goto label_44122c;
        case 0x441230u: goto label_441230;
        case 0x441234u: goto label_441234;
        case 0x441238u: goto label_441238;
        case 0x44123cu: goto label_44123c;
        case 0x441240u: goto label_441240;
        case 0x441244u: goto label_441244;
        case 0x441248u: goto label_441248;
        case 0x44124cu: goto label_44124c;
        case 0x441250u: goto label_441250;
        case 0x441254u: goto label_441254;
        case 0x441258u: goto label_441258;
        case 0x44125cu: goto label_44125c;
        case 0x441260u: goto label_441260;
        case 0x441264u: goto label_441264;
        case 0x441268u: goto label_441268;
        case 0x44126cu: goto label_44126c;
        case 0x441270u: goto label_441270;
        case 0x441274u: goto label_441274;
        case 0x441278u: goto label_441278;
        case 0x44127cu: goto label_44127c;
        case 0x441280u: goto label_441280;
        case 0x441284u: goto label_441284;
        case 0x441288u: goto label_441288;
        case 0x44128cu: goto label_44128c;
        case 0x441290u: goto label_441290;
        case 0x441294u: goto label_441294;
        case 0x441298u: goto label_441298;
        case 0x44129cu: goto label_44129c;
        case 0x4412a0u: goto label_4412a0;
        case 0x4412a4u: goto label_4412a4;
        case 0x4412a8u: goto label_4412a8;
        case 0x4412acu: goto label_4412ac;
        case 0x4412b0u: goto label_4412b0;
        case 0x4412b4u: goto label_4412b4;
        case 0x4412b8u: goto label_4412b8;
        case 0x4412bcu: goto label_4412bc;
        case 0x4412c0u: goto label_4412c0;
        case 0x4412c4u: goto label_4412c4;
        case 0x4412c8u: goto label_4412c8;
        case 0x4412ccu: goto label_4412cc;
        case 0x4412d0u: goto label_4412d0;
        case 0x4412d4u: goto label_4412d4;
        case 0x4412d8u: goto label_4412d8;
        case 0x4412dcu: goto label_4412dc;
        case 0x4412e0u: goto label_4412e0;
        case 0x4412e4u: goto label_4412e4;
        case 0x4412e8u: goto label_4412e8;
        case 0x4412ecu: goto label_4412ec;
        case 0x4412f0u: goto label_4412f0;
        case 0x4412f4u: goto label_4412f4;
        case 0x4412f8u: goto label_4412f8;
        case 0x4412fcu: goto label_4412fc;
        case 0x441300u: goto label_441300;
        case 0x441304u: goto label_441304;
        case 0x441308u: goto label_441308;
        case 0x44130cu: goto label_44130c;
        case 0x441310u: goto label_441310;
        case 0x441314u: goto label_441314;
        case 0x441318u: goto label_441318;
        case 0x44131cu: goto label_44131c;
        case 0x441320u: goto label_441320;
        case 0x441324u: goto label_441324;
        case 0x441328u: goto label_441328;
        case 0x44132cu: goto label_44132c;
        case 0x441330u: goto label_441330;
        case 0x441334u: goto label_441334;
        case 0x441338u: goto label_441338;
        case 0x44133cu: goto label_44133c;
        case 0x441340u: goto label_441340;
        case 0x441344u: goto label_441344;
        case 0x441348u: goto label_441348;
        case 0x44134cu: goto label_44134c;
        case 0x441350u: goto label_441350;
        case 0x441354u: goto label_441354;
        case 0x441358u: goto label_441358;
        case 0x44135cu: goto label_44135c;
        case 0x441360u: goto label_441360;
        case 0x441364u: goto label_441364;
        case 0x441368u: goto label_441368;
        case 0x44136cu: goto label_44136c;
        case 0x441370u: goto label_441370;
        case 0x441374u: goto label_441374;
        case 0x441378u: goto label_441378;
        case 0x44137cu: goto label_44137c;
        case 0x441380u: goto label_441380;
        case 0x441384u: goto label_441384;
        case 0x441388u: goto label_441388;
        case 0x44138cu: goto label_44138c;
        case 0x441390u: goto label_441390;
        case 0x441394u: goto label_441394;
        case 0x441398u: goto label_441398;
        case 0x44139cu: goto label_44139c;
        case 0x4413a0u: goto label_4413a0;
        case 0x4413a4u: goto label_4413a4;
        case 0x4413a8u: goto label_4413a8;
        case 0x4413acu: goto label_4413ac;
        case 0x4413b0u: goto label_4413b0;
        case 0x4413b4u: goto label_4413b4;
        case 0x4413b8u: goto label_4413b8;
        case 0x4413bcu: goto label_4413bc;
        case 0x4413c0u: goto label_4413c0;
        case 0x4413c4u: goto label_4413c4;
        case 0x4413c8u: goto label_4413c8;
        case 0x4413ccu: goto label_4413cc;
        case 0x4413d0u: goto label_4413d0;
        case 0x4413d4u: goto label_4413d4;
        case 0x4413d8u: goto label_4413d8;
        case 0x4413dcu: goto label_4413dc;
        case 0x4413e0u: goto label_4413e0;
        case 0x4413e4u: goto label_4413e4;
        case 0x4413e8u: goto label_4413e8;
        case 0x4413ecu: goto label_4413ec;
        case 0x4413f0u: goto label_4413f0;
        case 0x4413f4u: goto label_4413f4;
        case 0x4413f8u: goto label_4413f8;
        case 0x4413fcu: goto label_4413fc;
        case 0x441400u: goto label_441400;
        case 0x441404u: goto label_441404;
        case 0x441408u: goto label_441408;
        case 0x44140cu: goto label_44140c;
        case 0x441410u: goto label_441410;
        case 0x441414u: goto label_441414;
        case 0x441418u: goto label_441418;
        case 0x44141cu: goto label_44141c;
        case 0x441420u: goto label_441420;
        case 0x441424u: goto label_441424;
        case 0x441428u: goto label_441428;
        case 0x44142cu: goto label_44142c;
        case 0x441430u: goto label_441430;
        case 0x441434u: goto label_441434;
        case 0x441438u: goto label_441438;
        case 0x44143cu: goto label_44143c;
        case 0x441440u: goto label_441440;
        case 0x441444u: goto label_441444;
        case 0x441448u: goto label_441448;
        case 0x44144cu: goto label_44144c;
        case 0x441450u: goto label_441450;
        case 0x441454u: goto label_441454;
        case 0x441458u: goto label_441458;
        case 0x44145cu: goto label_44145c;
        case 0x441460u: goto label_441460;
        case 0x441464u: goto label_441464;
        case 0x441468u: goto label_441468;
        case 0x44146cu: goto label_44146c;
        case 0x441470u: goto label_441470;
        case 0x441474u: goto label_441474;
        case 0x441478u: goto label_441478;
        case 0x44147cu: goto label_44147c;
        case 0x441480u: goto label_441480;
        case 0x441484u: goto label_441484;
        case 0x441488u: goto label_441488;
        case 0x44148cu: goto label_44148c;
        case 0x441490u: goto label_441490;
        case 0x441494u: goto label_441494;
        case 0x441498u: goto label_441498;
        case 0x44149cu: goto label_44149c;
        case 0x4414a0u: goto label_4414a0;
        case 0x4414a4u: goto label_4414a4;
        case 0x4414a8u: goto label_4414a8;
        case 0x4414acu: goto label_4414ac;
        case 0x4414b0u: goto label_4414b0;
        case 0x4414b4u: goto label_4414b4;
        case 0x4414b8u: goto label_4414b8;
        case 0x4414bcu: goto label_4414bc;
        case 0x4414c0u: goto label_4414c0;
        case 0x4414c4u: goto label_4414c4;
        case 0x4414c8u: goto label_4414c8;
        case 0x4414ccu: goto label_4414cc;
        case 0x4414d0u: goto label_4414d0;
        case 0x4414d4u: goto label_4414d4;
        case 0x4414d8u: goto label_4414d8;
        case 0x4414dcu: goto label_4414dc;
        case 0x4414e0u: goto label_4414e0;
        case 0x4414e4u: goto label_4414e4;
        case 0x4414e8u: goto label_4414e8;
        case 0x4414ecu: goto label_4414ec;
        case 0x4414f0u: goto label_4414f0;
        case 0x4414f4u: goto label_4414f4;
        case 0x4414f8u: goto label_4414f8;
        case 0x4414fcu: goto label_4414fc;
        case 0x441500u: goto label_441500;
        case 0x441504u: goto label_441504;
        case 0x441508u: goto label_441508;
        case 0x44150cu: goto label_44150c;
        case 0x441510u: goto label_441510;
        case 0x441514u: goto label_441514;
        case 0x441518u: goto label_441518;
        case 0x44151cu: goto label_44151c;
        case 0x441520u: goto label_441520;
        case 0x441524u: goto label_441524;
        case 0x441528u: goto label_441528;
        case 0x44152cu: goto label_44152c;
        case 0x441530u: goto label_441530;
        case 0x441534u: goto label_441534;
        case 0x441538u: goto label_441538;
        case 0x44153cu: goto label_44153c;
        case 0x441540u: goto label_441540;
        case 0x441544u: goto label_441544;
        case 0x441548u: goto label_441548;
        case 0x44154cu: goto label_44154c;
        case 0x441550u: goto label_441550;
        case 0x441554u: goto label_441554;
        case 0x441558u: goto label_441558;
        case 0x44155cu: goto label_44155c;
        case 0x441560u: goto label_441560;
        case 0x441564u: goto label_441564;
        case 0x441568u: goto label_441568;
        case 0x44156cu: goto label_44156c;
        case 0x441570u: goto label_441570;
        case 0x441574u: goto label_441574;
        case 0x441578u: goto label_441578;
        case 0x44157cu: goto label_44157c;
        case 0x441580u: goto label_441580;
        case 0x441584u: goto label_441584;
        case 0x441588u: goto label_441588;
        case 0x44158cu: goto label_44158c;
        case 0x441590u: goto label_441590;
        case 0x441594u: goto label_441594;
        case 0x441598u: goto label_441598;
        case 0x44159cu: goto label_44159c;
        case 0x4415a0u: goto label_4415a0;
        case 0x4415a4u: goto label_4415a4;
        case 0x4415a8u: goto label_4415a8;
        case 0x4415acu: goto label_4415ac;
        case 0x4415b0u: goto label_4415b0;
        case 0x4415b4u: goto label_4415b4;
        case 0x4415b8u: goto label_4415b8;
        case 0x4415bcu: goto label_4415bc;
        case 0x4415c0u: goto label_4415c0;
        case 0x4415c4u: goto label_4415c4;
        case 0x4415c8u: goto label_4415c8;
        case 0x4415ccu: goto label_4415cc;
        case 0x4415d0u: goto label_4415d0;
        case 0x4415d4u: goto label_4415d4;
        case 0x4415d8u: goto label_4415d8;
        case 0x4415dcu: goto label_4415dc;
        case 0x4415e0u: goto label_4415e0;
        case 0x4415e4u: goto label_4415e4;
        case 0x4415e8u: goto label_4415e8;
        case 0x4415ecu: goto label_4415ec;
        case 0x4415f0u: goto label_4415f0;
        case 0x4415f4u: goto label_4415f4;
        case 0x4415f8u: goto label_4415f8;
        case 0x4415fcu: goto label_4415fc;
        case 0x441600u: goto label_441600;
        case 0x441604u: goto label_441604;
        case 0x441608u: goto label_441608;
        case 0x44160cu: goto label_44160c;
        case 0x441610u: goto label_441610;
        case 0x441614u: goto label_441614;
        case 0x441618u: goto label_441618;
        case 0x44161cu: goto label_44161c;
        case 0x441620u: goto label_441620;
        case 0x441624u: goto label_441624;
        case 0x441628u: goto label_441628;
        case 0x44162cu: goto label_44162c;
        case 0x441630u: goto label_441630;
        case 0x441634u: goto label_441634;
        case 0x441638u: goto label_441638;
        case 0x44163cu: goto label_44163c;
        case 0x441640u: goto label_441640;
        case 0x441644u: goto label_441644;
        case 0x441648u: goto label_441648;
        case 0x44164cu: goto label_44164c;
        case 0x441650u: goto label_441650;
        case 0x441654u: goto label_441654;
        case 0x441658u: goto label_441658;
        case 0x44165cu: goto label_44165c;
        case 0x441660u: goto label_441660;
        case 0x441664u: goto label_441664;
        case 0x441668u: goto label_441668;
        case 0x44166cu: goto label_44166c;
        case 0x441670u: goto label_441670;
        case 0x441674u: goto label_441674;
        case 0x441678u: goto label_441678;
        case 0x44167cu: goto label_44167c;
        case 0x441680u: goto label_441680;
        case 0x441684u: goto label_441684;
        case 0x441688u: goto label_441688;
        case 0x44168cu: goto label_44168c;
        case 0x441690u: goto label_441690;
        case 0x441694u: goto label_441694;
        case 0x441698u: goto label_441698;
        case 0x44169cu: goto label_44169c;
        case 0x4416a0u: goto label_4416a0;
        case 0x4416a4u: goto label_4416a4;
        case 0x4416a8u: goto label_4416a8;
        case 0x4416acu: goto label_4416ac;
        case 0x4416b0u: goto label_4416b0;
        case 0x4416b4u: goto label_4416b4;
        case 0x4416b8u: goto label_4416b8;
        case 0x4416bcu: goto label_4416bc;
        case 0x4416c0u: goto label_4416c0;
        case 0x4416c4u: goto label_4416c4;
        case 0x4416c8u: goto label_4416c8;
        case 0x4416ccu: goto label_4416cc;
        case 0x4416d0u: goto label_4416d0;
        case 0x4416d4u: goto label_4416d4;
        case 0x4416d8u: goto label_4416d8;
        case 0x4416dcu: goto label_4416dc;
        case 0x4416e0u: goto label_4416e0;
        case 0x4416e4u: goto label_4416e4;
        case 0x4416e8u: goto label_4416e8;
        case 0x4416ecu: goto label_4416ec;
        case 0x4416f0u: goto label_4416f0;
        case 0x4416f4u: goto label_4416f4;
        case 0x4416f8u: goto label_4416f8;
        case 0x4416fcu: goto label_4416fc;
        case 0x441700u: goto label_441700;
        case 0x441704u: goto label_441704;
        case 0x441708u: goto label_441708;
        case 0x44170cu: goto label_44170c;
        case 0x441710u: goto label_441710;
        case 0x441714u: goto label_441714;
        case 0x441718u: goto label_441718;
        case 0x44171cu: goto label_44171c;
        case 0x441720u: goto label_441720;
        case 0x441724u: goto label_441724;
        case 0x441728u: goto label_441728;
        case 0x44172cu: goto label_44172c;
        case 0x441730u: goto label_441730;
        case 0x441734u: goto label_441734;
        case 0x441738u: goto label_441738;
        case 0x44173cu: goto label_44173c;
        case 0x441740u: goto label_441740;
        case 0x441744u: goto label_441744;
        case 0x441748u: goto label_441748;
        case 0x44174cu: goto label_44174c;
        case 0x441750u: goto label_441750;
        case 0x441754u: goto label_441754;
        case 0x441758u: goto label_441758;
        case 0x44175cu: goto label_44175c;
        case 0x441760u: goto label_441760;
        case 0x441764u: goto label_441764;
        case 0x441768u: goto label_441768;
        case 0x44176cu: goto label_44176c;
        case 0x441770u: goto label_441770;
        case 0x441774u: goto label_441774;
        case 0x441778u: goto label_441778;
        case 0x44177cu: goto label_44177c;
        case 0x441780u: goto label_441780;
        case 0x441784u: goto label_441784;
        case 0x441788u: goto label_441788;
        case 0x44178cu: goto label_44178c;
        case 0x441790u: goto label_441790;
        case 0x441794u: goto label_441794;
        case 0x441798u: goto label_441798;
        case 0x44179cu: goto label_44179c;
        case 0x4417a0u: goto label_4417a0;
        case 0x4417a4u: goto label_4417a4;
        case 0x4417a8u: goto label_4417a8;
        case 0x4417acu: goto label_4417ac;
        case 0x4417b0u: goto label_4417b0;
        case 0x4417b4u: goto label_4417b4;
        case 0x4417b8u: goto label_4417b8;
        case 0x4417bcu: goto label_4417bc;
        case 0x4417c0u: goto label_4417c0;
        case 0x4417c4u: goto label_4417c4;
        case 0x4417c8u: goto label_4417c8;
        case 0x4417ccu: goto label_4417cc;
        case 0x4417d0u: goto label_4417d0;
        case 0x4417d4u: goto label_4417d4;
        case 0x4417d8u: goto label_4417d8;
        case 0x4417dcu: goto label_4417dc;
        case 0x4417e0u: goto label_4417e0;
        case 0x4417e4u: goto label_4417e4;
        case 0x4417e8u: goto label_4417e8;
        case 0x4417ecu: goto label_4417ec;
        case 0x4417f0u: goto label_4417f0;
        case 0x4417f4u: goto label_4417f4;
        case 0x4417f8u: goto label_4417f8;
        case 0x4417fcu: goto label_4417fc;
        case 0x441800u: goto label_441800;
        case 0x441804u: goto label_441804;
        case 0x441808u: goto label_441808;
        case 0x44180cu: goto label_44180c;
        case 0x441810u: goto label_441810;
        case 0x441814u: goto label_441814;
        case 0x441818u: goto label_441818;
        case 0x44181cu: goto label_44181c;
        case 0x441820u: goto label_441820;
        case 0x441824u: goto label_441824;
        case 0x441828u: goto label_441828;
        case 0x44182cu: goto label_44182c;
        case 0x441830u: goto label_441830;
        case 0x441834u: goto label_441834;
        case 0x441838u: goto label_441838;
        case 0x44183cu: goto label_44183c;
        case 0x441840u: goto label_441840;
        case 0x441844u: goto label_441844;
        case 0x441848u: goto label_441848;
        case 0x44184cu: goto label_44184c;
        case 0x441850u: goto label_441850;
        case 0x441854u: goto label_441854;
        case 0x441858u: goto label_441858;
        case 0x44185cu: goto label_44185c;
        case 0x441860u: goto label_441860;
        case 0x441864u: goto label_441864;
        case 0x441868u: goto label_441868;
        case 0x44186cu: goto label_44186c;
        case 0x441870u: goto label_441870;
        case 0x441874u: goto label_441874;
        case 0x441878u: goto label_441878;
        case 0x44187cu: goto label_44187c;
        case 0x441880u: goto label_441880;
        case 0x441884u: goto label_441884;
        case 0x441888u: goto label_441888;
        case 0x44188cu: goto label_44188c;
        case 0x441890u: goto label_441890;
        case 0x441894u: goto label_441894;
        case 0x441898u: goto label_441898;
        case 0x44189cu: goto label_44189c;
        case 0x4418a0u: goto label_4418a0;
        case 0x4418a4u: goto label_4418a4;
        case 0x4418a8u: goto label_4418a8;
        case 0x4418acu: goto label_4418ac;
        case 0x4418b0u: goto label_4418b0;
        case 0x4418b4u: goto label_4418b4;
        case 0x4418b8u: goto label_4418b8;
        case 0x4418bcu: goto label_4418bc;
        case 0x4418c0u: goto label_4418c0;
        case 0x4418c4u: goto label_4418c4;
        case 0x4418c8u: goto label_4418c8;
        case 0x4418ccu: goto label_4418cc;
        case 0x4418d0u: goto label_4418d0;
        case 0x4418d4u: goto label_4418d4;
        case 0x4418d8u: goto label_4418d8;
        case 0x4418dcu: goto label_4418dc;
        case 0x4418e0u: goto label_4418e0;
        case 0x4418e4u: goto label_4418e4;
        case 0x4418e8u: goto label_4418e8;
        case 0x4418ecu: goto label_4418ec;
        case 0x4418f0u: goto label_4418f0;
        case 0x4418f4u: goto label_4418f4;
        case 0x4418f8u: goto label_4418f8;
        case 0x4418fcu: goto label_4418fc;
        case 0x441900u: goto label_441900;
        case 0x441904u: goto label_441904;
        case 0x441908u: goto label_441908;
        case 0x44190cu: goto label_44190c;
        case 0x441910u: goto label_441910;
        case 0x441914u: goto label_441914;
        case 0x441918u: goto label_441918;
        case 0x44191cu: goto label_44191c;
        case 0x441920u: goto label_441920;
        case 0x441924u: goto label_441924;
        case 0x441928u: goto label_441928;
        case 0x44192cu: goto label_44192c;
        case 0x441930u: goto label_441930;
        case 0x441934u: goto label_441934;
        case 0x441938u: goto label_441938;
        case 0x44193cu: goto label_44193c;
        case 0x441940u: goto label_441940;
        case 0x441944u: goto label_441944;
        case 0x441948u: goto label_441948;
        case 0x44194cu: goto label_44194c;
        case 0x441950u: goto label_441950;
        case 0x441954u: goto label_441954;
        case 0x441958u: goto label_441958;
        case 0x44195cu: goto label_44195c;
        case 0x441960u: goto label_441960;
        case 0x441964u: goto label_441964;
        case 0x441968u: goto label_441968;
        case 0x44196cu: goto label_44196c;
        case 0x441970u: goto label_441970;
        case 0x441974u: goto label_441974;
        case 0x441978u: goto label_441978;
        case 0x44197cu: goto label_44197c;
        case 0x441980u: goto label_441980;
        case 0x441984u: goto label_441984;
        case 0x441988u: goto label_441988;
        case 0x44198cu: goto label_44198c;
        case 0x441990u: goto label_441990;
        case 0x441994u: goto label_441994;
        case 0x441998u: goto label_441998;
        case 0x44199cu: goto label_44199c;
        case 0x4419a0u: goto label_4419a0;
        case 0x4419a4u: goto label_4419a4;
        case 0x4419a8u: goto label_4419a8;
        case 0x4419acu: goto label_4419ac;
        case 0x4419b0u: goto label_4419b0;
        case 0x4419b4u: goto label_4419b4;
        case 0x4419b8u: goto label_4419b8;
        case 0x4419bcu: goto label_4419bc;
        case 0x4419c0u: goto label_4419c0;
        case 0x4419c4u: goto label_4419c4;
        case 0x4419c8u: goto label_4419c8;
        case 0x4419ccu: goto label_4419cc;
        case 0x4419d0u: goto label_4419d0;
        case 0x4419d4u: goto label_4419d4;
        case 0x4419d8u: goto label_4419d8;
        case 0x4419dcu: goto label_4419dc;
        case 0x4419e0u: goto label_4419e0;
        case 0x4419e4u: goto label_4419e4;
        case 0x4419e8u: goto label_4419e8;
        case 0x4419ecu: goto label_4419ec;
        case 0x4419f0u: goto label_4419f0;
        case 0x4419f4u: goto label_4419f4;
        case 0x4419f8u: goto label_4419f8;
        case 0x4419fcu: goto label_4419fc;
        case 0x441a00u: goto label_441a00;
        case 0x441a04u: goto label_441a04;
        case 0x441a08u: goto label_441a08;
        case 0x441a0cu: goto label_441a0c;
        case 0x441a10u: goto label_441a10;
        case 0x441a14u: goto label_441a14;
        case 0x441a18u: goto label_441a18;
        case 0x441a1cu: goto label_441a1c;
        case 0x441a20u: goto label_441a20;
        case 0x441a24u: goto label_441a24;
        case 0x441a28u: goto label_441a28;
        case 0x441a2cu: goto label_441a2c;
        case 0x441a30u: goto label_441a30;
        case 0x441a34u: goto label_441a34;
        case 0x441a38u: goto label_441a38;
        case 0x441a3cu: goto label_441a3c;
        case 0x441a40u: goto label_441a40;
        case 0x441a44u: goto label_441a44;
        case 0x441a48u: goto label_441a48;
        case 0x441a4cu: goto label_441a4c;
        case 0x441a50u: goto label_441a50;
        case 0x441a54u: goto label_441a54;
        case 0x441a58u: goto label_441a58;
        case 0x441a5cu: goto label_441a5c;
        case 0x441a60u: goto label_441a60;
        case 0x441a64u: goto label_441a64;
        case 0x441a68u: goto label_441a68;
        case 0x441a6cu: goto label_441a6c;
        case 0x441a70u: goto label_441a70;
        case 0x441a74u: goto label_441a74;
        case 0x441a78u: goto label_441a78;
        case 0x441a7cu: goto label_441a7c;
        case 0x441a80u: goto label_441a80;
        case 0x441a84u: goto label_441a84;
        case 0x441a88u: goto label_441a88;
        case 0x441a8cu: goto label_441a8c;
        case 0x441a90u: goto label_441a90;
        case 0x441a94u: goto label_441a94;
        case 0x441a98u: goto label_441a98;
        case 0x441a9cu: goto label_441a9c;
        case 0x441aa0u: goto label_441aa0;
        case 0x441aa4u: goto label_441aa4;
        case 0x441aa8u: goto label_441aa8;
        case 0x441aacu: goto label_441aac;
        case 0x441ab0u: goto label_441ab0;
        case 0x441ab4u: goto label_441ab4;
        case 0x441ab8u: goto label_441ab8;
        case 0x441abcu: goto label_441abc;
        case 0x441ac0u: goto label_441ac0;
        case 0x441ac4u: goto label_441ac4;
        case 0x441ac8u: goto label_441ac8;
        case 0x441accu: goto label_441acc;
        case 0x441ad0u: goto label_441ad0;
        case 0x441ad4u: goto label_441ad4;
        case 0x441ad8u: goto label_441ad8;
        case 0x441adcu: goto label_441adc;
        case 0x441ae0u: goto label_441ae0;
        case 0x441ae4u: goto label_441ae4;
        case 0x441ae8u: goto label_441ae8;
        case 0x441aecu: goto label_441aec;
        case 0x441af0u: goto label_441af0;
        case 0x441af4u: goto label_441af4;
        case 0x441af8u: goto label_441af8;
        case 0x441afcu: goto label_441afc;
        case 0x441b00u: goto label_441b00;
        case 0x441b04u: goto label_441b04;
        case 0x441b08u: goto label_441b08;
        case 0x441b0cu: goto label_441b0c;
        case 0x441b10u: goto label_441b10;
        case 0x441b14u: goto label_441b14;
        case 0x441b18u: goto label_441b18;
        case 0x441b1cu: goto label_441b1c;
        case 0x441b20u: goto label_441b20;
        case 0x441b24u: goto label_441b24;
        case 0x441b28u: goto label_441b28;
        case 0x441b2cu: goto label_441b2c;
        case 0x441b30u: goto label_441b30;
        case 0x441b34u: goto label_441b34;
        case 0x441b38u: goto label_441b38;
        case 0x441b3cu: goto label_441b3c;
        case 0x441b40u: goto label_441b40;
        case 0x441b44u: goto label_441b44;
        case 0x441b48u: goto label_441b48;
        case 0x441b4cu: goto label_441b4c;
        case 0x441b50u: goto label_441b50;
        case 0x441b54u: goto label_441b54;
        case 0x441b58u: goto label_441b58;
        case 0x441b5cu: goto label_441b5c;
        case 0x441b60u: goto label_441b60;
        case 0x441b64u: goto label_441b64;
        case 0x441b68u: goto label_441b68;
        case 0x441b6cu: goto label_441b6c;
        case 0x441b70u: goto label_441b70;
        case 0x441b74u: goto label_441b74;
        case 0x441b78u: goto label_441b78;
        case 0x441b7cu: goto label_441b7c;
        case 0x441b80u: goto label_441b80;
        case 0x441b84u: goto label_441b84;
        case 0x441b88u: goto label_441b88;
        case 0x441b8cu: goto label_441b8c;
        case 0x441b90u: goto label_441b90;
        case 0x441b94u: goto label_441b94;
        case 0x441b98u: goto label_441b98;
        case 0x441b9cu: goto label_441b9c;
        case 0x441ba0u: goto label_441ba0;
        case 0x441ba4u: goto label_441ba4;
        case 0x441ba8u: goto label_441ba8;
        case 0x441bacu: goto label_441bac;
        case 0x441bb0u: goto label_441bb0;
        case 0x441bb4u: goto label_441bb4;
        case 0x441bb8u: goto label_441bb8;
        case 0x441bbcu: goto label_441bbc;
        case 0x441bc0u: goto label_441bc0;
        case 0x441bc4u: goto label_441bc4;
        case 0x441bc8u: goto label_441bc8;
        case 0x441bccu: goto label_441bcc;
        case 0x441bd0u: goto label_441bd0;
        case 0x441bd4u: goto label_441bd4;
        case 0x441bd8u: goto label_441bd8;
        case 0x441bdcu: goto label_441bdc;
        case 0x441be0u: goto label_441be0;
        case 0x441be4u: goto label_441be4;
        case 0x441be8u: goto label_441be8;
        case 0x441becu: goto label_441bec;
        case 0x441bf0u: goto label_441bf0;
        case 0x441bf4u: goto label_441bf4;
        case 0x441bf8u: goto label_441bf8;
        case 0x441bfcu: goto label_441bfc;
        case 0x441c00u: goto label_441c00;
        case 0x441c04u: goto label_441c04;
        case 0x441c08u: goto label_441c08;
        case 0x441c0cu: goto label_441c0c;
        case 0x441c10u: goto label_441c10;
        case 0x441c14u: goto label_441c14;
        case 0x441c18u: goto label_441c18;
        case 0x441c1cu: goto label_441c1c;
        case 0x441c20u: goto label_441c20;
        case 0x441c24u: goto label_441c24;
        case 0x441c28u: goto label_441c28;
        case 0x441c2cu: goto label_441c2c;
        case 0x441c30u: goto label_441c30;
        case 0x441c34u: goto label_441c34;
        case 0x441c38u: goto label_441c38;
        case 0x441c3cu: goto label_441c3c;
        case 0x441c40u: goto label_441c40;
        case 0x441c44u: goto label_441c44;
        case 0x441c48u: goto label_441c48;
        case 0x441c4cu: goto label_441c4c;
        case 0x441c50u: goto label_441c50;
        case 0x441c54u: goto label_441c54;
        case 0x441c58u: goto label_441c58;
        case 0x441c5cu: goto label_441c5c;
        case 0x441c60u: goto label_441c60;
        case 0x441c64u: goto label_441c64;
        case 0x441c68u: goto label_441c68;
        case 0x441c6cu: goto label_441c6c;
        case 0x441c70u: goto label_441c70;
        case 0x441c74u: goto label_441c74;
        case 0x441c78u: goto label_441c78;
        case 0x441c7cu: goto label_441c7c;
        case 0x441c80u: goto label_441c80;
        case 0x441c84u: goto label_441c84;
        case 0x441c88u: goto label_441c88;
        case 0x441c8cu: goto label_441c8c;
        case 0x441c90u: goto label_441c90;
        case 0x441c94u: goto label_441c94;
        case 0x441c98u: goto label_441c98;
        case 0x441c9cu: goto label_441c9c;
        case 0x441ca0u: goto label_441ca0;
        case 0x441ca4u: goto label_441ca4;
        case 0x441ca8u: goto label_441ca8;
        case 0x441cacu: goto label_441cac;
        case 0x441cb0u: goto label_441cb0;
        case 0x441cb4u: goto label_441cb4;
        case 0x441cb8u: goto label_441cb8;
        case 0x441cbcu: goto label_441cbc;
        case 0x441cc0u: goto label_441cc0;
        case 0x441cc4u: goto label_441cc4;
        case 0x441cc8u: goto label_441cc8;
        case 0x441cccu: goto label_441ccc;
        case 0x441cd0u: goto label_441cd0;
        case 0x441cd4u: goto label_441cd4;
        case 0x441cd8u: goto label_441cd8;
        case 0x441cdcu: goto label_441cdc;
        case 0x441ce0u: goto label_441ce0;
        case 0x441ce4u: goto label_441ce4;
        case 0x441ce8u: goto label_441ce8;
        case 0x441cecu: goto label_441cec;
        case 0x441cf0u: goto label_441cf0;
        case 0x441cf4u: goto label_441cf4;
        case 0x441cf8u: goto label_441cf8;
        case 0x441cfcu: goto label_441cfc;
        case 0x441d00u: goto label_441d00;
        case 0x441d04u: goto label_441d04;
        case 0x441d08u: goto label_441d08;
        case 0x441d0cu: goto label_441d0c;
        case 0x441d10u: goto label_441d10;
        case 0x441d14u: goto label_441d14;
        case 0x441d18u: goto label_441d18;
        case 0x441d1cu: goto label_441d1c;
        case 0x441d20u: goto label_441d20;
        case 0x441d24u: goto label_441d24;
        case 0x441d28u: goto label_441d28;
        case 0x441d2cu: goto label_441d2c;
        case 0x441d30u: goto label_441d30;
        case 0x441d34u: goto label_441d34;
        case 0x441d38u: goto label_441d38;
        case 0x441d3cu: goto label_441d3c;
        case 0x441d40u: goto label_441d40;
        case 0x441d44u: goto label_441d44;
        case 0x441d48u: goto label_441d48;
        case 0x441d4cu: goto label_441d4c;
        default: break;
    }

    ctx->pc = 0x440de0u;

label_440de0:
    // 0x440de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x440de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_440de4:
    // 0x440de4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x440de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_440de8:
    // 0x440de8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x440de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_440dec:
    // 0x440dec: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x440decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_440df0:
    // 0x440df0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x440df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_440df4:
    // 0x440df4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x440df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_440df8:
    // 0x440df8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x440df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_440dfc:
    // 0x440dfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x440dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_440e00:
    // 0x440e00: 0xc10f6ec  jal         func_43DBB0
label_440e04:
    if (ctx->pc == 0x440E04u) {
        ctx->pc = 0x440E04u;
            // 0x440e04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x440E08u;
        goto label_440e08;
    }
    ctx->pc = 0x440E00u;
    SET_GPR_U32(ctx, 31, 0x440E08u);
    ctx->pc = 0x440E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440E00u;
            // 0x440e04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440E08u; }
        if (ctx->pc != 0x440E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440E08u; }
        if (ctx->pc != 0x440E08u) { return; }
    }
    ctx->pc = 0x440E08u;
label_440e08:
    // 0x440e08: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x440e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_440e0c:
    // 0x440e0c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x440e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_440e10:
    // 0x440e10: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x440e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
label_440e14:
    // 0x440e14: 0xc040180  jal         func_100600
label_440e18:
    if (ctx->pc == 0x440E18u) {
        ctx->pc = 0x440E18u;
            // 0x440e18: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x440E1Cu;
        goto label_440e1c;
    }
    ctx->pc = 0x440E14u;
    SET_GPR_U32(ctx, 31, 0x440E1Cu);
    ctx->pc = 0x440E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440E14u;
            // 0x440e18: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440E1Cu; }
        if (ctx->pc != 0x440E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440E1Cu; }
        if (ctx->pc != 0x440E1Cu) { return; }
    }
    ctx->pc = 0x440E1Cu;
label_440e1c:
    // 0x440e1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x440e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_440e20:
    // 0x440e20: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_440e24:
    if (ctx->pc == 0x440E24u) {
        ctx->pc = 0x440E24u;
            // 0x440e24: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x440E28u;
        goto label_440e28;
    }
    ctx->pc = 0x440E20u;
    {
        const bool branch_taken_0x440e20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x440e20) {
            ctx->pc = 0x440E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440E20u;
            // 0x440e24: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440E64u;
            goto label_440e64;
        }
    }
    ctx->pc = 0x440E28u;
label_440e28:
    // 0x440e28: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x440e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_440e2c:
    // 0x440e2c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x440e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_440e30:
    // 0x440e30: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x440e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_440e34:
    // 0x440e34: 0x346501a9  ori         $a1, $v1, 0x1A9
    ctx->pc = 0x440e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
label_440e38:
    // 0x440e38: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x440e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_440e3c:
    // 0x440e3c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x440e3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_440e40:
    // 0x440e40: 0x320f809  jalr        $t9
label_440e44:
    if (ctx->pc == 0x440E44u) {
        ctx->pc = 0x440E44u;
            // 0x440e44: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x440E48u;
        goto label_440e48;
    }
    ctx->pc = 0x440E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x440E48u);
        ctx->pc = 0x440E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440E40u;
            // 0x440e44: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x440E48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x440E48u; }
            if (ctx->pc != 0x440E48u) { return; }
        }
        }
    }
    ctx->pc = 0x440E48u;
label_440e48:
    // 0x440e48: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x440e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_440e4c:
    // 0x440e4c: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x440e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_440e50:
    // 0x440e50: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x440e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_440e54:
    // 0x440e54: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x440e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_440e58:
    // 0x440e58: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x440e58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_440e5c:
    // 0x440e5c: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x440e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_440e60:
    // 0x440e60: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x440e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_440e64:
    // 0x440e64: 0xc040180  jal         func_100600
label_440e68:
    if (ctx->pc == 0x440E68u) {
        ctx->pc = 0x440E68u;
            // 0x440e68: 0xae500110  sw          $s0, 0x110($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 16));
        ctx->pc = 0x440E6Cu;
        goto label_440e6c;
    }
    ctx->pc = 0x440E64u;
    SET_GPR_U32(ctx, 31, 0x440E6Cu);
    ctx->pc = 0x440E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440E64u;
            // 0x440e68: 0xae500110  sw          $s0, 0x110($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440E6Cu; }
        if (ctx->pc != 0x440E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440E6Cu; }
        if (ctx->pc != 0x440E6Cu) { return; }
    }
    ctx->pc = 0x440E6Cu;
label_440e6c:
    // 0x440e6c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_440e70:
    if (ctx->pc == 0x440E70u) {
        ctx->pc = 0x440E70u;
            // 0x440e70: 0xae420108  sw          $v0, 0x108($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 2));
        ctx->pc = 0x440E74u;
        goto label_440e74;
    }
    ctx->pc = 0x440E6Cu;
    {
        const bool branch_taken_0x440e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x440e6c) {
            ctx->pc = 0x440E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440E6Cu;
            // 0x440e70: 0xae420108  sw          $v0, 0x108($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440E90u;
            goto label_440e90;
        }
    }
    ctx->pc = 0x440E74u;
label_440e74:
    // 0x440e74: 0x8e270d98  lw          $a3, 0xD98($s1)
    ctx->pc = 0x440e74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_440e78:
    // 0x440e78: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x440e78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_440e7c:
    // 0x440e7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x440e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_440e80:
    // 0x440e80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x440e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_440e84:
    // 0x440e84: 0xc0c3f60  jal         func_30FD80
label_440e88:
    if (ctx->pc == 0x440E88u) {
        ctx->pc = 0x440E88u;
            // 0x440e88: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->pc = 0x440E8Cu;
        goto label_440e8c;
    }
    ctx->pc = 0x440E84u;
    SET_GPR_U32(ctx, 31, 0x440E8Cu);
    ctx->pc = 0x440E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440E84u;
            // 0x440e88: 0x24c601e0  addiu       $a2, $a2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440E8Cu; }
        if (ctx->pc != 0x440E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440E8Cu; }
        if (ctx->pc != 0x440E8Cu) { return; }
    }
    ctx->pc = 0x440E8Cu;
label_440e8c:
    // 0x440e8c: 0xae420108  sw          $v0, 0x108($s2)
    ctx->pc = 0x440e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 2));
label_440e90:
    // 0x440e90: 0xc040180  jal         func_100600
label_440e94:
    if (ctx->pc == 0x440E94u) {
        ctx->pc = 0x440E94u;
            // 0x440e94: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x440E98u;
        goto label_440e98;
    }
    ctx->pc = 0x440E90u;
    SET_GPR_U32(ctx, 31, 0x440E98u);
    ctx->pc = 0x440E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440E90u;
            // 0x440e94: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440E98u; }
        if (ctx->pc != 0x440E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440E98u; }
        if (ctx->pc != 0x440E98u) { return; }
    }
    ctx->pc = 0x440E98u;
label_440e98:
    // 0x440e98: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_440e9c:
    if (ctx->pc == 0x440E9Cu) {
        ctx->pc = 0x440E9Cu;
            // 0x440e9c: 0xae42010c  sw          $v0, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x440EA0u;
        goto label_440ea0;
    }
    ctx->pc = 0x440E98u;
    {
        const bool branch_taken_0x440e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x440e98) {
            ctx->pc = 0x440E9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440E98u;
            // 0x440e9c: 0xae42010c  sw          $v0, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440EBCu;
            goto label_440ebc;
        }
    }
    ctx->pc = 0x440EA0u;
label_440ea0:
    // 0x440ea0: 0x8e270d98  lw          $a3, 0xD98($s1)
    ctx->pc = 0x440ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_440ea4:
    // 0x440ea4: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x440ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_440ea8:
    // 0x440ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x440ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_440eac:
    // 0x440eac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x440eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_440eb0:
    // 0x440eb0: 0xc0c3f60  jal         func_30FD80
label_440eb4:
    if (ctx->pc == 0x440EB4u) {
        ctx->pc = 0x440EB4u;
            // 0x440eb4: 0x24c60220  addiu       $a2, $a2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
        ctx->pc = 0x440EB8u;
        goto label_440eb8;
    }
    ctx->pc = 0x440EB0u;
    SET_GPR_U32(ctx, 31, 0x440EB8u);
    ctx->pc = 0x440EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440EB0u;
            // 0x440eb4: 0x24c60220  addiu       $a2, $a2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440EB8u; }
        if (ctx->pc != 0x440EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440EB8u; }
        if (ctx->pc != 0x440EB8u) { return; }
    }
    ctx->pc = 0x440EB8u;
label_440eb8:
    // 0x440eb8: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x440eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
label_440ebc:
    // 0x440ebc: 0x26440100  addiu       $a0, $s2, 0x100
    ctx->pc = 0x440ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_440ec0:
    // 0x440ec0: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x440ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_440ec4:
    // 0x440ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x440ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440ec8:
    // 0x440ec8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x440ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_440ecc:
    // 0x440ecc: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x440eccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_440ed0:
    // 0x440ed0: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x440ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_440ed4:
    // 0x440ed4: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x440ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_440ed8:
    // 0x440ed8: 0x8e43010c  lw          $v1, 0x10C($s2)
    ctx->pc = 0x440ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_440edc:
    // 0x440edc: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x440edcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_440ee0:
    // 0x440ee0: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x440ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_440ee4:
    // 0x440ee4: 0xc04a576  jal         func_1295D8
label_440ee8:
    if (ctx->pc == 0x440EE8u) {
        ctx->pc = 0x440EE8u;
            // 0x440ee8: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x440EECu;
        goto label_440eec;
    }
    ctx->pc = 0x440EE4u;
    SET_GPR_U32(ctx, 31, 0x440EECu);
    ctx->pc = 0x440EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440EE4u;
            // 0x440ee8: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440EECu; }
        if (ctx->pc != 0x440EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440EECu; }
        if (ctx->pc != 0x440EECu) { return; }
    }
    ctx->pc = 0x440EECu;
label_440eec:
    // 0x440eec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x440eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_440ef0:
    // 0x440ef0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x440ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_440ef4:
    // 0x440ef4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x440ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_440ef8:
    // 0x440ef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x440ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_440efc:
    // 0x440efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x440efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_440f00:
    // 0x440f00: 0x3e00008  jr          $ra
label_440f04:
    if (ctx->pc == 0x440F04u) {
        ctx->pc = 0x440F04u;
            // 0x440f04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x440F08u;
        goto label_440f08;
    }
    ctx->pc = 0x440F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440F00u;
            // 0x440f04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x440F08u;
label_440f08:
    // 0x440f08: 0x0  nop
    ctx->pc = 0x440f08u;
    // NOP
label_440f0c:
    // 0x440f0c: 0x0  nop
    ctx->pc = 0x440f0cu;
    // NOP
label_440f10:
    // 0x440f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x440f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_440f14:
    // 0x440f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x440f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_440f18:
    // 0x440f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x440f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_440f1c:
    // 0x440f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x440f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_440f20:
    // 0x440f20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x440f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_440f24:
    // 0x440f24: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_440f28:
    if (ctx->pc == 0x440F28u) {
        ctx->pc = 0x440F28u;
            // 0x440f28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x440F2Cu;
        goto label_440f2c;
    }
    ctx->pc = 0x440F24u;
    {
        const bool branch_taken_0x440f24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x440F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440F24u;
            // 0x440f28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440f24) {
            ctx->pc = 0x440FBCu;
            goto label_440fbc;
        }
    }
    ctx->pc = 0x440F2Cu;
label_440f2c:
    // 0x440f2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x440f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_440f30:
    // 0x440f30: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x440f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
label_440f34:
    // 0x440f34: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x440f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_440f38:
    // 0x440f38: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x440f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_440f3c:
    // 0x440f3c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_440f40:
    if (ctx->pc == 0x440F40u) {
        ctx->pc = 0x440F40u;
            // 0x440f40: 0xae200110  sw          $zero, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x440F44u;
        goto label_440f44;
    }
    ctx->pc = 0x440F3Cu;
    {
        const bool branch_taken_0x440f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x440f3c) {
            ctx->pc = 0x440F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440F3Cu;
            // 0x440f40: 0xae200110  sw          $zero, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440F58u;
            goto label_440f58;
        }
    }
    ctx->pc = 0x440F44u;
label_440f44:
    // 0x440f44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x440f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_440f48:
    // 0x440f48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x440f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_440f4c:
    // 0x440f4c: 0x320f809  jalr        $t9
label_440f50:
    if (ctx->pc == 0x440F50u) {
        ctx->pc = 0x440F50u;
            // 0x440f50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x440F54u;
        goto label_440f54;
    }
    ctx->pc = 0x440F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x440F54u);
        ctx->pc = 0x440F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440F4Cu;
            // 0x440f50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x440F54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x440F54u; }
            if (ctx->pc != 0x440F54u) { return; }
        }
        }
    }
    ctx->pc = 0x440F54u;
label_440f54:
    // 0x440f54: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x440f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
label_440f58:
    // 0x440f58: 0x8e240108  lw          $a0, 0x108($s1)
    ctx->pc = 0x440f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_440f5c:
    // 0x440f5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x440f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_440f60:
    // 0x440f60: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x440f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_440f64:
    // 0x440f64: 0x320f809  jalr        $t9
label_440f68:
    if (ctx->pc == 0x440F68u) {
        ctx->pc = 0x440F68u;
            // 0x440f68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x440F6Cu;
        goto label_440f6c;
    }
    ctx->pc = 0x440F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x440F6Cu);
        ctx->pc = 0x440F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440F64u;
            // 0x440f68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x440F6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x440F6Cu; }
            if (ctx->pc != 0x440F6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x440F6Cu;
label_440f6c:
    // 0x440f6c: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x440f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_440f70:
    // 0x440f70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x440f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_440f74:
    // 0x440f74: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x440f74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_440f78:
    // 0x440f78: 0x320f809  jalr        $t9
label_440f7c:
    if (ctx->pc == 0x440F7Cu) {
        ctx->pc = 0x440F7Cu;
            // 0x440f7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x440F80u;
        goto label_440f80;
    }
    ctx->pc = 0x440F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x440F80u);
        ctx->pc = 0x440F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440F78u;
            // 0x440f7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x440F80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x440F80u; }
            if (ctx->pc != 0x440F80u) { return; }
        }
        }
    }
    ctx->pc = 0x440F80u;
label_440f80:
    // 0x440f80: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_440f84:
    if (ctx->pc == 0x440F84u) {
        ctx->pc = 0x440F84u;
            // 0x440f84: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x440F88u;
        goto label_440f88;
    }
    ctx->pc = 0x440F80u;
    {
        const bool branch_taken_0x440f80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x440f80) {
            ctx->pc = 0x440F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440F80u;
            // 0x440f84: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440FA8u;
            goto label_440fa8;
        }
    }
    ctx->pc = 0x440F88u;
label_440f88:
    // 0x440f88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x440f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_440f8c:
    // 0x440f8c: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x440f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_440f90:
    // 0x440f90: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_440f94:
    if (ctx->pc == 0x440F94u) {
        ctx->pc = 0x440F94u;
            // 0x440f94: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x440F98u;
        goto label_440f98;
    }
    ctx->pc = 0x440F90u;
    {
        const bool branch_taken_0x440f90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x440F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440F90u;
            // 0x440f94: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440f90) {
            ctx->pc = 0x440FA4u;
            goto label_440fa4;
        }
    }
    ctx->pc = 0x440F98u;
label_440f98:
    // 0x440f98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x440f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_440f9c:
    // 0x440f9c: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x440f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_440fa0:
    // 0x440fa0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x440fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_440fa4:
    // 0x440fa4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x440fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_440fa8:
    // 0x440fa8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x440fa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_440fac:
    // 0x440fac: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_440fb0:
    if (ctx->pc == 0x440FB0u) {
        ctx->pc = 0x440FB0u;
            // 0x440fb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x440FB4u;
        goto label_440fb4;
    }
    ctx->pc = 0x440FACu;
    {
        const bool branch_taken_0x440fac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x440fac) {
            ctx->pc = 0x440FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440FACu;
            // 0x440fb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440FC0u;
            goto label_440fc0;
        }
    }
    ctx->pc = 0x440FB4u;
label_440fb4:
    // 0x440fb4: 0xc0400a8  jal         func_1002A0
label_440fb8:
    if (ctx->pc == 0x440FB8u) {
        ctx->pc = 0x440FB8u;
            // 0x440fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x440FBCu;
        goto label_440fbc;
    }
    ctx->pc = 0x440FB4u;
    SET_GPR_U32(ctx, 31, 0x440FBCu);
    ctx->pc = 0x440FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440FB4u;
            // 0x440fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440FBCu; }
        if (ctx->pc != 0x440FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440FBCu; }
        if (ctx->pc != 0x440FBCu) { return; }
    }
    ctx->pc = 0x440FBCu;
label_440fbc:
    // 0x440fbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x440fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_440fc0:
    // 0x440fc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x440fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_440fc4:
    // 0x440fc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x440fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_440fc8:
    // 0x440fc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x440fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_440fcc:
    // 0x440fcc: 0x3e00008  jr          $ra
label_440fd0:
    if (ctx->pc == 0x440FD0u) {
        ctx->pc = 0x440FD0u;
            // 0x440fd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x440FD4u;
        goto label_440fd4;
    }
    ctx->pc = 0x440FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440FCCu;
            // 0x440fd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x440FD4u;
label_440fd4:
    // 0x440fd4: 0x0  nop
    ctx->pc = 0x440fd4u;
    // NOP
label_440fd8:
    // 0x440fd8: 0x0  nop
    ctx->pc = 0x440fd8u;
    // NOP
label_440fdc:
    // 0x440fdc: 0x0  nop
    ctx->pc = 0x440fdcu;
    // NOP
label_440fe0:
    // 0x440fe0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x440fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_440fe4:
    // 0x440fe4: 0x3e00008  jr          $ra
label_440fe8:
    if (ctx->pc == 0x440FE8u) {
        ctx->pc = 0x440FE8u;
            // 0x440fe8: 0xc440d3a8  lwc1        $f0, -0x2C58($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x440FECu;
        goto label_440fec;
    }
    ctx->pc = 0x440FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440FE4u;
            // 0x440fe8: 0xc440d3a8  lwc1        $f0, -0x2C58($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x440FECu;
label_440fec:
    // 0x440fec: 0x0  nop
    ctx->pc = 0x440fecu;
    // NOP
label_440ff0:
    // 0x440ff0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x440ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_440ff4:
    // 0x440ff4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x440ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_440ff8:
    // 0x440ff8: 0xc440d3a8  lwc1        $f0, -0x2C58($v0)
    ctx->pc = 0x440ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_440ffc:
    // 0x440ffc: 0x3e00008  jr          $ra
label_441000:
    if (ctx->pc == 0x441000u) {
        ctx->pc = 0x441000u;
            // 0x441000: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x441004u;
        goto label_441004;
    }
    ctx->pc = 0x440FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440FFCu;
            // 0x441000: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441004u;
label_441004:
    // 0x441004: 0x0  nop
    ctx->pc = 0x441004u;
    // NOP
label_441008:
    // 0x441008: 0x0  nop
    ctx->pc = 0x441008u;
    // NOP
label_44100c:
    // 0x44100c: 0x0  nop
    ctx->pc = 0x44100cu;
    // NOP
label_441010:
    // 0x441010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x441010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_441014:
    // 0x441014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x441014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_441018:
    // 0x441018: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x441018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_44101c:
    // 0x44101c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_441020:
    if (ctx->pc == 0x441020u) {
        ctx->pc = 0x441020u;
            // 0x441020: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x441024u;
        goto label_441024;
    }
    ctx->pc = 0x44101Cu;
    {
        const bool branch_taken_0x44101c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44101c) {
            ctx->pc = 0x441020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44101Cu;
            // 0x441020: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441030u;
            goto label_441030;
        }
    }
    ctx->pc = 0x441024u;
label_441024:
    // 0x441024: 0xc10c9b4  jal         func_4326D0
label_441028:
    if (ctx->pc == 0x441028u) {
        ctx->pc = 0x44102Cu;
        goto label_44102c;
    }
    ctx->pc = 0x441024u;
    SET_GPR_U32(ctx, 31, 0x44102Cu);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44102Cu; }
        if (ctx->pc != 0x44102Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44102Cu; }
        if (ctx->pc != 0x44102Cu) { return; }
    }
    ctx->pc = 0x44102Cu;
label_44102c:
    // 0x44102c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44102cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_441030:
    // 0x441030: 0x3e00008  jr          $ra
label_441034:
    if (ctx->pc == 0x441034u) {
        ctx->pc = 0x441034u;
            // 0x441034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x441038u;
        goto label_441038;
    }
    ctx->pc = 0x441030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441030u;
            // 0x441034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441038u;
label_441038:
    // 0x441038: 0x0  nop
    ctx->pc = 0x441038u;
    // NOP
label_44103c:
    // 0x44103c: 0x0  nop
    ctx->pc = 0x44103cu;
    // NOP
label_441040:
    // 0x441040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x441040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_441044:
    // 0x441044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x441044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_441048:
    // 0x441048: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x441048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44104c:
    // 0x44104c: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x44104cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_441050:
    // 0x441050: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x441050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_441054:
    // 0x441054: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x441054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_441058:
    // 0x441058: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x441058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_44105c:
    // 0x44105c: 0x2484f9c8  addiu       $a0, $a0, -0x638
    ctx->pc = 0x44105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965704));
label_441060:
    // 0x441060: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x441060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_441064:
    // 0x441064: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x441064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_441068:
    // 0x441068: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x441068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_44106c:
    // 0x44106c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x44106cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_441070:
    // 0x441070: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x441070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_441074:
    // 0x441074: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x441074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_441078:
    // 0x441078: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x441078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_44107c:
    // 0x44107c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x44107cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_441080:
    // 0x441080: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x441080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_441084:
    // 0x441084: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x441084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_441088:
    // 0x441088: 0xc075128  jal         func_1D44A0
label_44108c:
    if (ctx->pc == 0x44108Cu) {
        ctx->pc = 0x44108Cu;
            // 0x44108c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x441090u;
        goto label_441090;
    }
    ctx->pc = 0x441088u;
    SET_GPR_U32(ctx, 31, 0x441090u);
    ctx->pc = 0x44108Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441088u;
            // 0x44108c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441090u; }
        if (ctx->pc != 0x441090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441090u; }
        if (ctx->pc != 0x441090u) { return; }
    }
    ctx->pc = 0x441090u;
label_441090:
    // 0x441090: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x441090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_441094:
    // 0x441094: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x441094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_441098:
    // 0x441098: 0x8c86f9c8  lw          $a2, -0x638($a0)
    ctx->pc = 0x441098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965704)));
label_44109c:
    // 0x44109c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x44109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_4410a0:
    // 0x4410a0: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x4410a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_4410a4:
    // 0x4410a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4410a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4410a8:
    // 0x4410a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4410ac:
    if (ctx->pc == 0x4410ACu) {
        ctx->pc = 0x4410B0u;
        goto label_4410b0;
    }
    ctx->pc = 0x4410A8u;
    {
        const bool branch_taken_0x4410a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4410a8) {
            ctx->pc = 0x4410B8u;
            goto label_4410b8;
        }
    }
    ctx->pc = 0x4410B0u;
label_4410b0:
    // 0x4410b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4410b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4410b4:
    // 0x4410b4: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x4410b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_4410b8:
    // 0x4410b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4410b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4410bc:
    // 0x4410bc: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x4410bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_4410c0:
    // 0x4410c0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4410c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4410c4:
    // 0x4410c4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4410c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4410c8:
    // 0x4410c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4410cc:
    if (ctx->pc == 0x4410CCu) {
        ctx->pc = 0x4410CCu;
            // 0x4410cc: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x4410D0u;
        goto label_4410d0;
    }
    ctx->pc = 0x4410C8u;
    {
        const bool branch_taken_0x4410c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4410CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4410C8u;
            // 0x4410cc: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4410c8) {
            ctx->pc = 0x4410D8u;
            goto label_4410d8;
        }
    }
    ctx->pc = 0x4410D0u;
label_4410d0:
    // 0x4410d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4410d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4410d4:
    // 0x4410d4: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4410d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4410d8:
    // 0x4410d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4410d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4410dc:
    // 0x4410dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4410dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4410e0:
    // 0x4410e0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4410e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4410e4:
    // 0x4410e4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4410e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4410e8:
    // 0x4410e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4410ec:
    if (ctx->pc == 0x4410ECu) {
        ctx->pc = 0x4410F0u;
        goto label_4410f0;
    }
    ctx->pc = 0x4410E8u;
    {
        const bool branch_taken_0x4410e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4410e8) {
            ctx->pc = 0x4410F8u;
            goto label_4410f8;
        }
    }
    ctx->pc = 0x4410F0u;
label_4410f0:
    // 0x4410f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4410f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4410f4:
    // 0x4410f4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4410f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4410f8:
    // 0x4410f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4410f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4410fc:
    // 0x4410fc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4410fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_441100:
    // 0x441100: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x441100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_441104:
    // 0x441104: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x441104u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_441108:
    // 0x441108: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44110c:
    if (ctx->pc == 0x44110Cu) {
        ctx->pc = 0x44110Cu;
            // 0x44110c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x441110u;
        goto label_441110;
    }
    ctx->pc = 0x441108u;
    {
        const bool branch_taken_0x441108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x441108) {
            ctx->pc = 0x44110Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441108u;
            // 0x44110c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44111Cu;
            goto label_44111c;
        }
    }
    ctx->pc = 0x441110u;
label_441110:
    // 0x441110: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x441110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_441114:
    // 0x441114: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x441114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_441118:
    // 0x441118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x441118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44111c:
    // 0x44111c: 0x3e00008  jr          $ra
label_441120:
    if (ctx->pc == 0x441120u) {
        ctx->pc = 0x441120u;
            // 0x441120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x441124u;
        goto label_441124;
    }
    ctx->pc = 0x44111Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44111Cu;
            // 0x441120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441124u;
label_441124:
    // 0x441124: 0x0  nop
    ctx->pc = 0x441124u;
    // NOP
label_441128:
    // 0x441128: 0x0  nop
    ctx->pc = 0x441128u;
    // NOP
label_44112c:
    // 0x44112c: 0x0  nop
    ctx->pc = 0x44112cu;
    // NOP
label_441130:
    // 0x441130: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x441130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_441134:
    // 0x441134: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x441134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_441138:
    // 0x441138: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x441138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44113c:
    // 0x44113c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44113cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_441140:
    // 0x441140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x441140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_441144:
    // 0x441144: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x441144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_441148:
    // 0x441148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x441148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44114c:
    // 0x44114c: 0xc075740  jal         func_1D5D00
label_441150:
    if (ctx->pc == 0x441150u) {
        ctx->pc = 0x441150u;
            // 0x441150: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441154u;
        goto label_441154;
    }
    ctx->pc = 0x44114Cu;
    SET_GPR_U32(ctx, 31, 0x441154u);
    ctx->pc = 0x441150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44114Cu;
            // 0x441150: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D00u;
    if (runtime->hasFunction(0x1D5D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D5D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441154u; }
        if (ctx->pc != 0x441154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5D00_0x1d5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441154u; }
        if (ctx->pc != 0x441154u) { return; }
    }
    ctx->pc = 0x441154u;
label_441154:
    // 0x441154: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x441154u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_441158:
    // 0x441158: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x441158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_44115c:
    // 0x44115c: 0x8e240550  lw          $a0, 0x550($s1)
    ctx->pc = 0x44115cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_441160:
    // 0x441160: 0x8084010f  lb          $a0, 0x10F($a0)
    ctx->pc = 0x441160u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 271)));
label_441164:
    // 0x441164: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_441168:
    if (ctx->pc == 0x441168u) {
        ctx->pc = 0x44116Cu;
        goto label_44116c;
    }
    ctx->pc = 0x441164u;
    {
        const bool branch_taken_0x441164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x441164) {
            ctx->pc = 0x441184u;
            goto label_441184;
        }
    }
    ctx->pc = 0x44116Cu;
label_44116c:
    // 0x44116c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x44116cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_441170:
    // 0x441170: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_441174:
    if (ctx->pc == 0x441174u) {
        ctx->pc = 0x441178u;
        goto label_441178;
    }
    ctx->pc = 0x441170u;
    {
        const bool branch_taken_0x441170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x441170) {
            ctx->pc = 0x441184u;
            goto label_441184;
        }
    }
    ctx->pc = 0x441178u;
label_441178:
    // 0x441178: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x441178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_44117c:
    // 0x44117c: 0x54830033  bnel        $a0, $v1, . + 4 + (0x33 << 2)
label_441180:
    if (ctx->pc == 0x441180u) {
        ctx->pc = 0x441180u;
            // 0x441180: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x441184u;
        goto label_441184;
    }
    ctx->pc = 0x44117Cu;
    {
        const bool branch_taken_0x44117c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x44117c) {
            ctx->pc = 0x441180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44117Cu;
            // 0x441180: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44124Cu;
            goto label_44124c;
        }
    }
    ctx->pc = 0x441184u;
label_441184:
    // 0x441184: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x441184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_441188:
    // 0x441188: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x441188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_44118c:
    // 0x44118c: 0x8c73e370  lw          $s3, -0x1C90($v1)
    ctx->pc = 0x44118cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_441190:
    // 0x441190: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x441190u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_441194:
    // 0x441194: 0x8c94e378  lw          $s4, -0x1C88($a0)
    ctx->pc = 0x441194u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_441198:
    // 0x441198: 0x2610f9c8  addiu       $s0, $s0, -0x638
    ctx->pc = 0x441198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965704));
label_44119c:
    // 0x44119c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x44119cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4411a0:
    // 0x4411a0: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x4411a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4411a4:
    // 0x4411a4: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x4411a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_4411a8:
    // 0x4411a8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4411a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4411ac:
    // 0x4411ac: 0x8cc60130  lw          $a2, 0x130($a2)
    ctx->pc = 0x4411acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_4411b0:
    // 0x4411b0: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x4411b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4411b4:
    // 0x4411b4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4411b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4411b8:
    // 0x4411b8: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x4411b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4411bc:
    // 0x4411bc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4411bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4411c0:
    // 0x4411c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4411c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4411c4:
    // 0x4411c4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4411c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4411c8:
    // 0x4411c8: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
label_4411cc:
    if (ctx->pc == 0x4411CCu) {
        ctx->pc = 0x4411CCu;
            // 0x4411cc: 0x24b20010  addiu       $s2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x4411D0u;
        goto label_4411d0;
    }
    ctx->pc = 0x4411C8u;
    {
        const bool branch_taken_0x4411c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4411CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4411C8u;
            // 0x4411cc: 0x24b20010  addiu       $s2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4411c8) {
            ctx->pc = 0x441248u;
            goto label_441248;
        }
    }
    ctx->pc = 0x4411D0u;
label_4411d0:
    // 0x4411d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4411d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4411d4:
    // 0x4411d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4411d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4411d8:
    // 0x4411d8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4411d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4411dc:
    // 0x4411dc: 0xc04e4a4  jal         func_139290
label_4411e0:
    if (ctx->pc == 0x4411E0u) {
        ctx->pc = 0x4411E0u;
            // 0x4411e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4411E4u;
        goto label_4411e4;
    }
    ctx->pc = 0x4411DCu;
    SET_GPR_U32(ctx, 31, 0x4411E4u);
    ctx->pc = 0x4411E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4411DCu;
            // 0x4411e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4411E4u; }
        if (ctx->pc != 0x4411E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4411E4u; }
        if (ctx->pc != 0x4411E4u) { return; }
    }
    ctx->pc = 0x4411E4u;
label_4411e4:
    // 0x4411e4: 0x92220e3d  lbu         $v0, 0xE3D($s1)
    ctx->pc = 0x4411e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3645)));
label_4411e8:
    // 0x4411e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4411e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4411ec:
    // 0x4411ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4411ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4411f0:
    // 0x4411f0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4411f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_4411f4:
    // 0x4411f4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4411f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4411f8:
    // 0x4411f8: 0xc04cd60  jal         func_133580
label_4411fc:
    if (ctx->pc == 0x4411FCu) {
        ctx->pc = 0x4411FCu;
            // 0x4411fc: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x441200u;
        goto label_441200;
    }
    ctx->pc = 0x4411F8u;
    SET_GPR_U32(ctx, 31, 0x441200u);
    ctx->pc = 0x4411FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4411F8u;
            // 0x4411fc: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441200u; }
        if (ctx->pc != 0x441200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441200u; }
        if (ctx->pc != 0x441200u) { return; }
    }
    ctx->pc = 0x441200u;
label_441200:
    // 0x441200: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x441200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_441204:
    // 0x441204: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x441204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_441208:
    // 0x441208: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x441208u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_44120c:
    // 0x44120c: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x44120cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_441210:
    // 0x441210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x441210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_441214:
    // 0x441214: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x441214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_441218:
    // 0x441218: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x441218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_44121c:
    // 0x44121c: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x44121cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_441220:
    // 0x441220: 0xc04cff4  jal         func_133FD0
label_441224:
    if (ctx->pc == 0x441224u) {
        ctx->pc = 0x441224u;
            // 0x441224: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441228u;
        goto label_441228;
    }
    ctx->pc = 0x441220u;
    SET_GPR_U32(ctx, 31, 0x441228u);
    ctx->pc = 0x441224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441220u;
            // 0x441224: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441228u; }
        if (ctx->pc != 0x441228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441228u; }
        if (ctx->pc != 0x441228u) { return; }
    }
    ctx->pc = 0x441228u;
label_441228:
    // 0x441228: 0xc04e738  jal         func_139CE0
label_44122c:
    if (ctx->pc == 0x44122Cu) {
        ctx->pc = 0x44122Cu;
            // 0x44122c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x441230u;
        goto label_441230;
    }
    ctx->pc = 0x441228u;
    SET_GPR_U32(ctx, 31, 0x441230u);
    ctx->pc = 0x44122Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441228u;
            // 0x44122c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441230u; }
        if (ctx->pc != 0x441230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441230u; }
        if (ctx->pc != 0x441230u) { return; }
    }
    ctx->pc = 0x441230u;
label_441230:
    // 0x441230: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x441230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_441234:
    // 0x441234: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x441234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_441238:
    // 0x441238: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x441238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_44123c:
    // 0x44123c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x44123cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_441240:
    // 0x441240: 0xc050044  jal         func_140110
label_441244:
    if (ctx->pc == 0x441244u) {
        ctx->pc = 0x441244u;
            // 0x441244: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441248u;
        goto label_441248;
    }
    ctx->pc = 0x441240u;
    SET_GPR_U32(ctx, 31, 0x441248u);
    ctx->pc = 0x441244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441240u;
            // 0x441244: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441248u; }
        if (ctx->pc != 0x441248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441248u; }
        if (ctx->pc != 0x441248u) { return; }
    }
    ctx->pc = 0x441248u;
label_441248:
    // 0x441248: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x441248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_44124c:
    // 0x44124c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44124cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_441250:
    // 0x441250: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x441250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_441254:
    // 0x441254: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x441254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_441258:
    // 0x441258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x441258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44125c:
    // 0x44125c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44125cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_441260:
    // 0x441260: 0x3e00008  jr          $ra
label_441264:
    if (ctx->pc == 0x441264u) {
        ctx->pc = 0x441264u;
            // 0x441264: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x441268u;
        goto label_441268;
    }
    ctx->pc = 0x441260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441260u;
            // 0x441264: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441268u;
label_441268:
    // 0x441268: 0x0  nop
    ctx->pc = 0x441268u;
    // NOP
label_44126c:
    // 0x44126c: 0x0  nop
    ctx->pc = 0x44126cu;
    // NOP
label_441270:
    // 0x441270: 0x3e00008  jr          $ra
label_441274:
    if (ctx->pc == 0x441274u) {
        ctx->pc = 0x441278u;
        goto label_441278;
    }
    ctx->pc = 0x441270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441278u;
label_441278:
    // 0x441278: 0x0  nop
    ctx->pc = 0x441278u;
    // NOP
label_44127c:
    // 0x44127c: 0x0  nop
    ctx->pc = 0x44127cu;
    // NOP
label_441280:
    // 0x441280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x441280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_441284:
    // 0x441284: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x441284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_441288:
    // 0x441288: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x441288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_44128c:
    // 0x44128c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x44128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_441290:
    // 0x441290: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x441290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_441294:
    // 0x441294: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x441294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_441298:
    // 0x441298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x441298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44129c:
    // 0x44129c: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x44129cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4412a0:
    // 0x4412a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4412a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4412a4:
    // 0x4412a4: 0x8e250550  lw          $a1, 0x550($s1)
    ctx->pc = 0x4412a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_4412a8:
    // 0x4412a8: 0x80a4010f  lb          $a0, 0x10F($a1)
    ctx->pc = 0x4412a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 271)));
label_4412ac:
    // 0x4412ac: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
label_4412b0:
    if (ctx->pc == 0x4412B0u) {
        ctx->pc = 0x4412B0u;
            // 0x4412b0: 0x24c6f9c8  addiu       $a2, $a2, -0x638 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965704));
        ctx->pc = 0x4412B4u;
        goto label_4412b4;
    }
    ctx->pc = 0x4412ACu;
    {
        const bool branch_taken_0x4412ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4412B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4412ACu;
            // 0x4412b0: 0x24c6f9c8  addiu       $a2, $a2, -0x638 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4412ac) {
            ctx->pc = 0x4412FCu;
            goto label_4412fc;
        }
    }
    ctx->pc = 0x4412B4u;
label_4412b4:
    // 0x4412b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4412b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4412b8:
    // 0x4412b8: 0x3c043e4c  lui         $a0, 0x3E4C
    ctx->pc = 0x4412b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15948 << 16));
label_4412bc:
    // 0x4412bc: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x4412bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4412c0:
    // 0x4412c0: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x4412c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4412c4:
    // 0x4412c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4412c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4412c8:
    // 0x4412c8: 0xc4a30018  lwc1        $f3, 0x18($a1)
    ctx->pc = 0x4412c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4412cc:
    // 0x4412cc: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x4412ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_4412d0:
    // 0x4412d0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4412d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4412d4:
    // 0x4412d4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4412d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4412d8:
    // 0x4412d8: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x4412d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4412dc:
    // 0x4412dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4412dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4412e0:
    // 0x4412e0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_4412e4:
    if (ctx->pc == 0x4412E4u) {
        ctx->pc = 0x4412E4u;
            // 0x4412e4: 0xe4c1000c  swc1        $f1, 0xC($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->pc = 0x4412E8u;
        goto label_4412e8;
    }
    ctx->pc = 0x4412E0u;
    {
        const bool branch_taken_0x4412e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4412E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4412E0u;
            // 0x4412e4: 0xe4c1000c  swc1        $f1, 0xC($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4412e0) {
            ctx->pc = 0x441304u;
            goto label_441304;
        }
    }
    ctx->pc = 0x4412E8u;
label_4412e8:
    // 0x4412e8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4412e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4412ec:
    // 0x4412ec: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x4412ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4412f0:
    // 0x4412f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4412f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4412f4:
    // 0x4412f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_4412f8:
    if (ctx->pc == 0x4412F8u) {
        ctx->pc = 0x4412F8u;
            // 0x4412f8: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->pc = 0x4412FCu;
        goto label_4412fc;
    }
    ctx->pc = 0x4412F4u;
    {
        const bool branch_taken_0x4412f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4412F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4412F4u;
            // 0x4412f8: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4412f4) {
            ctx->pc = 0x441304u;
            goto label_441304;
        }
    }
    ctx->pc = 0x4412FCu;
label_4412fc:
    // 0x4412fc: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x4412fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_441300:
    // 0x441300: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x441300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_441304:
    // 0x441304: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x441304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_441308:
    // 0x441308: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x441308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_44130c:
    // 0x44130c: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_441310:
    if (ctx->pc == 0x441310u) {
        ctx->pc = 0x441310u;
            // 0x441310: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x441314u;
        goto label_441314;
    }
    ctx->pc = 0x44130Cu;
    {
        const bool branch_taken_0x44130c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x44130c) {
            ctx->pc = 0x441310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44130Cu;
            // 0x441310: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441330u;
            goto label_441330;
        }
    }
    ctx->pc = 0x441314u;
label_441314:
    // 0x441314: 0xc621118c  lwc1        $f1, 0x118C($s1)
    ctx->pc = 0x441314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_441318:
    // 0x441318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x441318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44131c:
    // 0x44131c: 0x0  nop
    ctx->pc = 0x44131cu;
    // NOP
label_441320:
    // 0x441320: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x441320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_441324:
    // 0x441324: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_441328:
    if (ctx->pc == 0x441328u) {
        ctx->pc = 0x441328u;
            // 0x441328: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x44132Cu;
        goto label_44132c;
    }
    ctx->pc = 0x441324u;
    {
        const bool branch_taken_0x441324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x441324) {
            ctx->pc = 0x441328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441324u;
            // 0x441328: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441354u;
            goto label_441354;
        }
    }
    ctx->pc = 0x44132Cu;
label_44132c:
    // 0x44132c: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x44132cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_441330:
    // 0x441330: 0xc10c9b4  jal         func_4326D0
label_441334:
    if (ctx->pc == 0x441334u) {
        ctx->pc = 0x441338u;
        goto label_441338;
    }
    ctx->pc = 0x441330u;
    SET_GPR_U32(ctx, 31, 0x441338u);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441338u; }
        if (ctx->pc != 0x441338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441338u; }
        if (ctx->pc != 0x441338u) { return; }
    }
    ctx->pc = 0x441338u;
label_441338:
    // 0x441338: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x441338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_44133c:
    // 0x44133c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x44133cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_441340:
    // 0x441340: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x441340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_441344:
    // 0x441344: 0xc057b7c  jal         func_15EDF0
label_441348:
    if (ctx->pc == 0x441348u) {
        ctx->pc = 0x441348u;
            // 0x441348: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x44134Cu;
        goto label_44134c;
    }
    ctx->pc = 0x441344u;
    SET_GPR_U32(ctx, 31, 0x44134Cu);
    ctx->pc = 0x441348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441344u;
            // 0x441348: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44134Cu; }
        if (ctx->pc != 0x44134Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44134Cu; }
        if (ctx->pc != 0x44134Cu) { return; }
    }
    ctx->pc = 0x44134Cu;
label_44134c:
    // 0x44134c: 0x10000073  b           . + 4 + (0x73 << 2)
label_441350:
    if (ctx->pc == 0x441350u) {
        ctx->pc = 0x441350u;
            // 0x441350: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x441354u;
        goto label_441354;
    }
    ctx->pc = 0x44134Cu;
    {
        const bool branch_taken_0x44134c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x441350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44134Cu;
            // 0x441350: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44134c) {
            ctx->pc = 0x44151Cu;
            goto label_44151c;
        }
    }
    ctx->pc = 0x441354u;
label_441354:
    // 0x441354: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x441354u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_441358:
    // 0x441358: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x441358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_44135c:
    // 0x44135c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_441360:
    if (ctx->pc == 0x441360u) {
        ctx->pc = 0x441360u;
            // 0x441360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441364u;
        goto label_441364;
    }
    ctx->pc = 0x44135Cu;
    {
        const bool branch_taken_0x44135c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x441360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44135Cu;
            // 0x441360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44135c) {
            ctx->pc = 0x441374u;
            goto label_441374;
        }
    }
    ctx->pc = 0x441364u;
label_441364:
    // 0x441364: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x441364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_441368:
    // 0x441368: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_44136c:
    if (ctx->pc == 0x44136Cu) {
        ctx->pc = 0x441370u;
        goto label_441370;
    }
    ctx->pc = 0x441368u;
    {
        const bool branch_taken_0x441368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x441368) {
            ctx->pc = 0x441374u;
            goto label_441374;
        }
    }
    ctx->pc = 0x441370u;
label_441370:
    // 0x441370: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x441370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_441374:
    // 0x441374: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_441378:
    if (ctx->pc == 0x441378u) {
        ctx->pc = 0x44137Cu;
        goto label_44137c;
    }
    ctx->pc = 0x441374u;
    {
        const bool branch_taken_0x441374 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x441374) {
            ctx->pc = 0x441390u;
            goto label_441390;
        }
    }
    ctx->pc = 0x44137Cu;
label_44137c:
    // 0x44137c: 0xc075eb4  jal         func_1D7AD0
label_441380:
    if (ctx->pc == 0x441380u) {
        ctx->pc = 0x441384u;
        goto label_441384;
    }
    ctx->pc = 0x44137Cu;
    SET_GPR_U32(ctx, 31, 0x441384u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441384u; }
        if (ctx->pc != 0x441384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441384u; }
        if (ctx->pc != 0x441384u) { return; }
    }
    ctx->pc = 0x441384u;
label_441384:
    // 0x441384: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_441388:
    if (ctx->pc == 0x441388u) {
        ctx->pc = 0x44138Cu;
        goto label_44138c;
    }
    ctx->pc = 0x441384u;
    {
        const bool branch_taken_0x441384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x441384) {
            ctx->pc = 0x441390u;
            goto label_441390;
        }
    }
    ctx->pc = 0x44138Cu;
label_44138c:
    // 0x44138c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44138cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_441390:
    // 0x441390: 0x56400027  bnel        $s2, $zero, . + 4 + (0x27 << 2)
label_441394:
    if (ctx->pc == 0x441394u) {
        ctx->pc = 0x441394u;
            // 0x441394: 0xc6210e1c  lwc1        $f1, 0xE1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x441398u;
        goto label_441398;
    }
    ctx->pc = 0x441390u;
    {
        const bool branch_taken_0x441390 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x441390) {
            ctx->pc = 0x441394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441390u;
            // 0x441394: 0xc6210e1c  lwc1        $f1, 0xE1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x441430u;
            goto label_441430;
        }
    }
    ctx->pc = 0x441398u;
label_441398:
    // 0x441398: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x441398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_44139c:
    // 0x44139c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x44139cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4413a0:
    // 0x4413a0: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x4413a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4413a4:
    // 0x4413a4: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
label_4413a8:
    if (ctx->pc == 0x4413A8u) {
        ctx->pc = 0x4413ACu;
        goto label_4413ac;
    }
    ctx->pc = 0x4413A4u;
    {
        const bool branch_taken_0x4413a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4413a4) {
            ctx->pc = 0x44142Cu;
            goto label_44142c;
        }
    }
    ctx->pc = 0x4413ACu;
label_4413ac:
    // 0x4413ac: 0xc0756f4  jal         func_1D5BD0
label_4413b0:
    if (ctx->pc == 0x4413B0u) {
        ctx->pc = 0x4413B0u;
            // 0x4413b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4413B4u;
        goto label_4413b4;
    }
    ctx->pc = 0x4413ACu;
    SET_GPR_U32(ctx, 31, 0x4413B4u);
    ctx->pc = 0x4413B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4413ACu;
            // 0x4413b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BD0u;
    if (runtime->hasFunction(0x1D5BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4413B4u; }
        if (ctx->pc != 0x4413B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5BD0_0x1d5bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4413B4u; }
        if (ctx->pc != 0x4413B4u) { return; }
    }
    ctx->pc = 0x4413B4u;
label_4413b4:
    // 0x4413b4: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x4413b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
label_4413b8:
    // 0x4413b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4413b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4413bc:
    // 0x4413bc: 0x0  nop
    ctx->pc = 0x4413bcu;
    // NOP
label_4413c0:
    // 0x4413c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4413c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4413c4:
    // 0x4413c4: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
label_4413c8:
    if (ctx->pc == 0x4413C8u) {
        ctx->pc = 0x4413C8u;
            // 0x4413c8: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x4413CCu;
        goto label_4413cc;
    }
    ctx->pc = 0x4413C4u;
    {
        const bool branch_taken_0x4413c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4413c4) {
            ctx->pc = 0x4413C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4413C4u;
            // 0x4413c8: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441424u;
            goto label_441424;
        }
    }
    ctx->pc = 0x4413CCu;
label_4413cc:
    // 0x4413cc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4413ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4413d0:
    // 0x4413d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4413d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4413d4:
    // 0x4413d4: 0x0  nop
    ctx->pc = 0x4413d4u;
    // NOP
label_4413d8:
    // 0x4413d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4413d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4413dc:
    // 0x4413dc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4413e0:
    if (ctx->pc == 0x4413E0u) {
        ctx->pc = 0x4413E0u;
            // 0x4413e0: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4413E4u;
        goto label_4413e4;
    }
    ctx->pc = 0x4413DCu;
    {
        const bool branch_taken_0x4413dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4413dc) {
            ctx->pc = 0x4413E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4413DCu;
            // 0x4413e0: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4413F4u;
            goto label_4413f4;
        }
    }
    ctx->pc = 0x4413E4u;
label_4413e4:
    // 0x4413e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4413e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4413e8:
    // 0x4413e8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4413e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4413ec:
    // 0x4413ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_4413f0:
    if (ctx->pc == 0x4413F0u) {
        ctx->pc = 0x4413F0u;
            // 0x4413f0: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x4413F4u;
        goto label_4413f4;
    }
    ctx->pc = 0x4413ECu;
    {
        const bool branch_taken_0x4413ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4413F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4413ECu;
            // 0x4413f0: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4413ec) {
            ctx->pc = 0x44140Cu;
            goto label_44140c;
        }
    }
    ctx->pc = 0x4413F4u;
label_4413f4:
    // 0x4413f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4413f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4413f8:
    // 0x4413f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4413f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4413fc:
    // 0x4413fc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4413fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_441400:
    // 0x441400: 0x0  nop
    ctx->pc = 0x441400u;
    // NOP
label_441404:
    // 0x441404: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x441404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_441408:
    // 0x441408: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x441408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_44140c:
    // 0x44140c: 0xc10c990  jal         func_432640
label_441410:
    if (ctx->pc == 0x441410u) {
        ctx->pc = 0x441414u;
        goto label_441414;
    }
    ctx->pc = 0x44140Cu;
    SET_GPR_U32(ctx, 31, 0x441414u);
    ctx->pc = 0x432640u;
    if (runtime->hasFunction(0x432640u)) {
        auto targetFn = runtime->lookupFunction(0x432640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441414u; }
        if (ctx->pc != 0x441414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432640_0x432640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441414u; }
        if (ctx->pc != 0x441414u) { return; }
    }
    ctx->pc = 0x441414u;
label_441414:
    // 0x441414: 0xc10c9d8  jal         func_432760
label_441418:
    if (ctx->pc == 0x441418u) {
        ctx->pc = 0x441418u;
            // 0x441418: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x44141Cu;
        goto label_44141c;
    }
    ctx->pc = 0x441414u;
    SET_GPR_U32(ctx, 31, 0x44141Cu);
    ctx->pc = 0x441418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441414u;
            // 0x441418: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44141Cu; }
        if (ctx->pc != 0x44141Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44141Cu; }
        if (ctx->pc != 0x44141Cu) { return; }
    }
    ctx->pc = 0x44141Cu;
label_44141c:
    // 0x44141c: 0x10000003  b           . + 4 + (0x3 << 2)
label_441420:
    if (ctx->pc == 0x441420u) {
        ctx->pc = 0x441424u;
        goto label_441424;
    }
    ctx->pc = 0x44141Cu;
    {
        const bool branch_taken_0x44141c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44141c) {
            ctx->pc = 0x44142Cu;
            goto label_44142c;
        }
    }
    ctx->pc = 0x441424u;
label_441424:
    // 0x441424: 0xc10c9b4  jal         func_4326D0
label_441428:
    if (ctx->pc == 0x441428u) {
        ctx->pc = 0x44142Cu;
        goto label_44142c;
    }
    ctx->pc = 0x441424u;
    SET_GPR_U32(ctx, 31, 0x44142Cu);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44142Cu; }
        if (ctx->pc != 0x44142Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44142Cu; }
        if (ctx->pc != 0x44142Cu) { return; }
    }
    ctx->pc = 0x44142Cu;
label_44142c:
    // 0x44142c: 0xc6210e1c  lwc1        $f1, 0xE1C($s1)
    ctx->pc = 0x44142cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_441430:
    // 0x441430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x441430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_441434:
    // 0x441434: 0x0  nop
    ctx->pc = 0x441434u;
    // NOP
label_441438:
    // 0x441438: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x441438u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44143c:
    // 0x44143c: 0x45030038  bc1tl       . + 4 + (0x38 << 2)
label_441440:
    if (ctx->pc == 0x441440u) {
        ctx->pc = 0x441440u;
            // 0x441440: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x441444u;
        goto label_441444;
    }
    ctx->pc = 0x44143Cu;
    {
        const bool branch_taken_0x44143c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x44143c) {
            ctx->pc = 0x441440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44143Cu;
            // 0x441440: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441520u;
            goto label_441520;
        }
    }
    ctx->pc = 0x441444u;
label_441444:
    // 0x441444: 0x822511ad  lb          $a1, 0x11AD($s1)
    ctx->pc = 0x441444u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4525)));
label_441448:
    // 0x441448: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x441448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_44144c:
    // 0x44144c: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x44144cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_441450:
    // 0x441450: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x441450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_441454:
    // 0x441454: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x441454u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_441458:
    // 0x441458: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x441458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_44145c:
    // 0x44145c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x44145cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_441460:
    // 0x441460: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x441460u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_441464:
    // 0x441464: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_441468:
    if (ctx->pc == 0x441468u) {
        ctx->pc = 0x441468u;
            // 0x441468: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44146Cu;
        goto label_44146c;
    }
    ctx->pc = 0x441464u;
    {
        const bool branch_taken_0x441464 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x441468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441464u;
            // 0x441468: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441464) {
            ctx->pc = 0x44147Cu;
            goto label_44147c;
        }
    }
    ctx->pc = 0x44146Cu;
label_44146c:
    // 0x44146c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x44146cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_441470:
    // 0x441470: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_441474:
    if (ctx->pc == 0x441474u) {
        ctx->pc = 0x441478u;
        goto label_441478;
    }
    ctx->pc = 0x441470u;
    {
        const bool branch_taken_0x441470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x441470) {
            ctx->pc = 0x44147Cu;
            goto label_44147c;
        }
    }
    ctx->pc = 0x441478u;
label_441478:
    // 0x441478: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x441478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44147c:
    // 0x44147c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_441480:
    if (ctx->pc == 0x441480u) {
        ctx->pc = 0x441484u;
        goto label_441484;
    }
    ctx->pc = 0x44147Cu;
    {
        const bool branch_taken_0x44147c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x44147c) {
            ctx->pc = 0x441498u;
            goto label_441498;
        }
    }
    ctx->pc = 0x441484u;
label_441484:
    // 0x441484: 0xc075eb4  jal         func_1D7AD0
label_441488:
    if (ctx->pc == 0x441488u) {
        ctx->pc = 0x441488u;
            // 0x441488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44148Cu;
        goto label_44148c;
    }
    ctx->pc = 0x441484u;
    SET_GPR_U32(ctx, 31, 0x44148Cu);
    ctx->pc = 0x441488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441484u;
            // 0x441488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44148Cu; }
        if (ctx->pc != 0x44148Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44148Cu; }
        if (ctx->pc != 0x44148Cu) { return; }
    }
    ctx->pc = 0x44148Cu;
label_44148c:
    // 0x44148c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_441490:
    if (ctx->pc == 0x441490u) {
        ctx->pc = 0x441494u;
        goto label_441494;
    }
    ctx->pc = 0x44148Cu;
    {
        const bool branch_taken_0x44148c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44148c) {
            ctx->pc = 0x441498u;
            goto label_441498;
        }
    }
    ctx->pc = 0x441494u;
label_441494:
    // 0x441494: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x441494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_441498:
    // 0x441498: 0x5600001b  bnel        $s0, $zero, . + 4 + (0x1B << 2)
label_44149c:
    if (ctx->pc == 0x44149Cu) {
        ctx->pc = 0x44149Cu;
            // 0x44149c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->pc = 0x4414A0u;
        goto label_4414a0;
    }
    ctx->pc = 0x441498u;
    {
        const bool branch_taken_0x441498 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x441498) {
            ctx->pc = 0x44149Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441498u;
            // 0x44149c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441508u;
            goto label_441508;
        }
    }
    ctx->pc = 0x4414A0u;
label_4414a0:
    // 0x4414a0: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x4414a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_4414a4:
    // 0x4414a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4414a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4414a8:
    // 0x4414a8: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_4414ac:
    if (ctx->pc == 0x4414ACu) {
        ctx->pc = 0x4414B0u;
        goto label_4414b0;
    }
    ctx->pc = 0x4414A8u;
    {
        const bool branch_taken_0x4414a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4414a8) {
            ctx->pc = 0x441504u;
            goto label_441504;
        }
    }
    ctx->pc = 0x4414B0u;
label_4414b0:
    // 0x4414b0: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x4414b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_4414b4:
    // 0x4414b4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4414b4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4414b8:
    // 0x4414b8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4414bc:
    if (ctx->pc == 0x4414BCu) {
        ctx->pc = 0x4414BCu;
            // 0x4414bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4414C0u;
        goto label_4414c0;
    }
    ctx->pc = 0x4414B8u;
    {
        const bool branch_taken_0x4414b8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4414BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4414B8u;
            // 0x4414bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4414b8) {
            ctx->pc = 0x4414D0u;
            goto label_4414d0;
        }
    }
    ctx->pc = 0x4414C0u;
label_4414c0:
    // 0x4414c0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4414c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4414c4:
    // 0x4414c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4414c8:
    if (ctx->pc == 0x4414C8u) {
        ctx->pc = 0x4414CCu;
        goto label_4414cc;
    }
    ctx->pc = 0x4414C4u;
    {
        const bool branch_taken_0x4414c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4414c4) {
            ctx->pc = 0x4414D0u;
            goto label_4414d0;
        }
    }
    ctx->pc = 0x4414CCu;
label_4414cc:
    // 0x4414cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4414ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4414d0:
    // 0x4414d0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_4414d4:
    if (ctx->pc == 0x4414D4u) {
        ctx->pc = 0x4414D8u;
        goto label_4414d8;
    }
    ctx->pc = 0x4414D0u;
    {
        const bool branch_taken_0x4414d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4414d0) {
            ctx->pc = 0x4414ECu;
            goto label_4414ec;
        }
    }
    ctx->pc = 0x4414D8u;
label_4414d8:
    // 0x4414d8: 0xc075eb4  jal         func_1D7AD0
label_4414dc:
    if (ctx->pc == 0x4414DCu) {
        ctx->pc = 0x4414DCu;
            // 0x4414dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4414E0u;
        goto label_4414e0;
    }
    ctx->pc = 0x4414D8u;
    SET_GPR_U32(ctx, 31, 0x4414E0u);
    ctx->pc = 0x4414DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4414D8u;
            // 0x4414dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4414E0u; }
        if (ctx->pc != 0x4414E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4414E0u; }
        if (ctx->pc != 0x4414E0u) { return; }
    }
    ctx->pc = 0x4414E0u;
label_4414e0:
    // 0x4414e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4414e4:
    if (ctx->pc == 0x4414E4u) {
        ctx->pc = 0x4414E8u;
        goto label_4414e8;
    }
    ctx->pc = 0x4414E0u;
    {
        const bool branch_taken_0x4414e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4414e0) {
            ctx->pc = 0x4414ECu;
            goto label_4414ec;
        }
    }
    ctx->pc = 0x4414E8u;
label_4414e8:
    // 0x4414e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4414e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4414ec:
    // 0x4414ec: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_4414f0:
    if (ctx->pc == 0x4414F0u) {
        ctx->pc = 0x4414F4u;
        goto label_4414f4;
    }
    ctx->pc = 0x4414ECu;
    {
        const bool branch_taken_0x4414ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4414ec) {
            ctx->pc = 0x441504u;
            goto label_441504;
        }
    }
    ctx->pc = 0x4414F4u;
label_4414f4:
    // 0x4414f4: 0x8e440e34  lw          $a0, 0xE34($s2)
    ctx->pc = 0x4414f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_4414f8:
    // 0x4414f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4414f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4414fc:
    // 0x4414fc: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_441500:
    if (ctx->pc == 0x441500u) {
        ctx->pc = 0x441500u;
            // 0x441500: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
        ctx->pc = 0x441504u;
        goto label_441504;
    }
    ctx->pc = 0x4414FCu;
    {
        const bool branch_taken_0x4414fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4414fc) {
            ctx->pc = 0x441500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4414FCu;
            // 0x441500: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441514u;
            goto label_441514;
        }
    }
    ctx->pc = 0x441504u;
label_441504:
    // 0x441504: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x441504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_441508:
    // 0x441508: 0xc073234  jal         func_1CC8D0
label_44150c:
    if (ctx->pc == 0x44150Cu) {
        ctx->pc = 0x44150Cu;
            // 0x44150c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x441510u;
        goto label_441510;
    }
    ctx->pc = 0x441508u;
    SET_GPR_U32(ctx, 31, 0x441510u);
    ctx->pc = 0x44150Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441508u;
            // 0x44150c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441510u; }
        if (ctx->pc != 0x441510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441510u; }
        if (ctx->pc != 0x441510u) { return; }
    }
    ctx->pc = 0x441510u;
label_441510:
    // 0x441510: 0xae200e1c  sw          $zero, 0xE1C($s1)
    ctx->pc = 0x441510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
label_441514:
    // 0x441514: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x441514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_441518:
    // 0x441518: 0xa22311ad  sb          $v1, 0x11AD($s1)
    ctx->pc = 0x441518u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4525), (uint8_t)GPR_U32(ctx, 3));
label_44151c:
    // 0x44151c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x44151cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_441520:
    // 0x441520: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x441520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_441524:
    // 0x441524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x441524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_441528:
    // 0x441528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x441528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44152c:
    // 0x44152c: 0x3e00008  jr          $ra
label_441530:
    if (ctx->pc == 0x441530u) {
        ctx->pc = 0x441530u;
            // 0x441530: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x441534u;
        goto label_441534;
    }
    ctx->pc = 0x44152Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44152Cu;
            // 0x441530: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441534u;
label_441534:
    // 0x441534: 0x0  nop
    ctx->pc = 0x441534u;
    // NOP
label_441538:
    // 0x441538: 0x0  nop
    ctx->pc = 0x441538u;
    // NOP
label_44153c:
    // 0x44153c: 0x0  nop
    ctx->pc = 0x44153cu;
    // NOP
label_441540:
    // 0x441540: 0x3e00008  jr          $ra
label_441544:
    if (ctx->pc == 0x441544u) {
        ctx->pc = 0x441548u;
        goto label_441548;
    }
    ctx->pc = 0x441540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441548u;
label_441548:
    // 0x441548: 0x0  nop
    ctx->pc = 0x441548u;
    // NOP
label_44154c:
    // 0x44154c: 0x0  nop
    ctx->pc = 0x44154cu;
    // NOP
label_441550:
    // 0x441550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x441550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_441554:
    // 0x441554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x441554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_441558:
    // 0x441558: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x441558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44155c:
    // 0x44155c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_441560:
    // 0x441560: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x441560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_441564:
    // 0x441564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x441564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_441568:
    // 0x441568: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x441568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_44156c:
    // 0x44156c: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x44156cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_441570:
    // 0x441570: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_441574:
    if (ctx->pc == 0x441574u) {
        ctx->pc = 0x441574u;
            // 0x441574: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x441578u;
        goto label_441578;
    }
    ctx->pc = 0x441570u;
    {
        const bool branch_taken_0x441570 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x441574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441570u;
            // 0x441574: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x441570) {
            ctx->pc = 0x441588u;
            goto label_441588;
        }
    }
    ctx->pc = 0x441578u;
label_441578:
    // 0x441578: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x441578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_44157c:
    // 0x44157c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_441580:
    if (ctx->pc == 0x441580u) {
        ctx->pc = 0x441584u;
        goto label_441584;
    }
    ctx->pc = 0x44157Cu;
    {
        const bool branch_taken_0x44157c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44157c) {
            ctx->pc = 0x441588u;
            goto label_441588;
        }
    }
    ctx->pc = 0x441584u;
label_441584:
    // 0x441584: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x441584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_441588:
    // 0x441588: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_44158c:
    if (ctx->pc == 0x44158Cu) {
        ctx->pc = 0x441590u;
        goto label_441590;
    }
    ctx->pc = 0x441588u;
    {
        const bool branch_taken_0x441588 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x441588) {
            ctx->pc = 0x4415A4u;
            goto label_4415a4;
        }
    }
    ctx->pc = 0x441590u;
label_441590:
    // 0x441590: 0xc075eb4  jal         func_1D7AD0
label_441594:
    if (ctx->pc == 0x441594u) {
        ctx->pc = 0x441598u;
        goto label_441598;
    }
    ctx->pc = 0x441590u;
    SET_GPR_U32(ctx, 31, 0x441598u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441598u; }
        if (ctx->pc != 0x441598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441598u; }
        if (ctx->pc != 0x441598u) { return; }
    }
    ctx->pc = 0x441598u;
label_441598:
    // 0x441598: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_44159c:
    if (ctx->pc == 0x44159Cu) {
        ctx->pc = 0x4415A0u;
        goto label_4415a0;
    }
    ctx->pc = 0x441598u;
    {
        const bool branch_taken_0x441598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x441598) {
            ctx->pc = 0x4415A4u;
            goto label_4415a4;
        }
    }
    ctx->pc = 0x4415A0u;
label_4415a0:
    // 0x4415a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4415a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4415a4:
    // 0x4415a4: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
label_4415a8:
    if (ctx->pc == 0x4415A8u) {
        ctx->pc = 0x4415A8u;
            // 0x4415a8: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x4415ACu;
        goto label_4415ac;
    }
    ctx->pc = 0x4415A4u;
    {
        const bool branch_taken_0x4415a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4415a4) {
            ctx->pc = 0x4415A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4415A4u;
            // 0x4415a8: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4415C4u;
            goto label_4415c4;
        }
    }
    ctx->pc = 0x4415ACu;
label_4415ac:
    // 0x4415ac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4415acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4415b0:
    // 0x4415b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4415b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4415b4:
    // 0x4415b4: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x4415b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4415b8:
    // 0x4415b8: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_4415bc:
    if (ctx->pc == 0x4415BCu) {
        ctx->pc = 0x4415BCu;
            // 0x4415bc: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x4415C0u;
        goto label_4415c0;
    }
    ctx->pc = 0x4415B8u;
    {
        const bool branch_taken_0x4415b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4415b8) {
            ctx->pc = 0x4415BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4415B8u;
            // 0x4415bc: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4415DCu;
            goto label_4415dc;
        }
    }
    ctx->pc = 0x4415C0u;
label_4415c0:
    // 0x4415c0: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x4415c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4415c4:
    // 0x4415c4: 0xc10c9d8  jal         func_432760
label_4415c8:
    if (ctx->pc == 0x4415C8u) {
        ctx->pc = 0x4415CCu;
        goto label_4415cc;
    }
    ctx->pc = 0x4415C4u;
    SET_GPR_U32(ctx, 31, 0x4415CCu);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4415CCu; }
        if (ctx->pc != 0x4415CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4415CCu; }
        if (ctx->pc != 0x4415CCu) { return; }
    }
    ctx->pc = 0x4415CCu;
label_4415cc:
    // 0x4415cc: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x4415ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4415d0:
    // 0x4415d0: 0xc10c990  jal         func_432640
label_4415d4:
    if (ctx->pc == 0x4415D4u) {
        ctx->pc = 0x4415D4u;
            // 0x4415d4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x4415D8u;
        goto label_4415d8;
    }
    ctx->pc = 0x4415D0u;
    SET_GPR_U32(ctx, 31, 0x4415D8u);
    ctx->pc = 0x4415D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4415D0u;
            // 0x4415d4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432640u;
    if (runtime->hasFunction(0x432640u)) {
        auto targetFn = runtime->lookupFunction(0x432640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4415D8u; }
        if (ctx->pc != 0x4415D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432640_0x432640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4415D8u; }
        if (ctx->pc != 0x4415D8u) { return; }
    }
    ctx->pc = 0x4415D8u;
label_4415d8:
    // 0x4415d8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x4415d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4415dc:
    // 0x4415dc: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_4415e0:
    if (ctx->pc == 0x4415E0u) {
        ctx->pc = 0x4415E0u;
            // 0x4415e0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4415E4u;
        goto label_4415e4;
    }
    ctx->pc = 0x4415DCu;
    {
        const bool branch_taken_0x4415dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4415dc) {
            ctx->pc = 0x4415E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4415DCu;
            // 0x4415e0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441630u;
            goto label_441630;
        }
    }
    ctx->pc = 0x4415E4u;
label_4415e4:
    // 0x4415e4: 0xc040180  jal         func_100600
label_4415e8:
    if (ctx->pc == 0x4415E8u) {
        ctx->pc = 0x4415E8u;
            // 0x4415e8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x4415ECu;
        goto label_4415ec;
    }
    ctx->pc = 0x4415E4u;
    SET_GPR_U32(ctx, 31, 0x4415ECu);
    ctx->pc = 0x4415E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4415E4u;
            // 0x4415e8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4415ECu; }
        if (ctx->pc != 0x4415ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4415ECu; }
        if (ctx->pc != 0x4415ECu) { return; }
    }
    ctx->pc = 0x4415ECu;
label_4415ec:
    // 0x4415ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4415f0:
    if (ctx->pc == 0x4415F0u) {
        ctx->pc = 0x4415F0u;
            // 0x4415f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4415F4u;
        goto label_4415f4;
    }
    ctx->pc = 0x4415ECu;
    {
        const bool branch_taken_0x4415ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4415F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4415ECu;
            // 0x4415f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4415ec) {
            ctx->pc = 0x441628u;
            goto label_441628;
        }
    }
    ctx->pc = 0x4415F4u;
label_4415f4:
    // 0x4415f4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4415f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4415f8:
    // 0x4415f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4415f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4415fc:
    // 0x4415fc: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x4415fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_441600:
    // 0x441600: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x441600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_441604:
    // 0x441604: 0xc10ca68  jal         func_4329A0
label_441608:
    if (ctx->pc == 0x441608u) {
        ctx->pc = 0x441608u;
            // 0x441608: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44160Cu;
        goto label_44160c;
    }
    ctx->pc = 0x441604u;
    SET_GPR_U32(ctx, 31, 0x44160Cu);
    ctx->pc = 0x441608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441604u;
            // 0x441608: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44160Cu; }
        if (ctx->pc != 0x44160Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44160Cu; }
        if (ctx->pc != 0x44160Cu) { return; }
    }
    ctx->pc = 0x44160Cu;
label_44160c:
    // 0x44160c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x44160cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_441610:
    // 0x441610: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x441610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_441614:
    // 0x441614: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x441614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_441618:
    // 0x441618: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x441618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_44161c:
    // 0x44161c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x44161cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_441620:
    // 0x441620: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x441620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_441624:
    // 0x441624: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x441624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_441628:
    // 0x441628: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x441628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_44162c:
    // 0x44162c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44162cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_441630:
    // 0x441630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x441630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_441634:
    // 0x441634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x441634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_441638:
    // 0x441638: 0x3e00008  jr          $ra
label_44163c:
    if (ctx->pc == 0x44163Cu) {
        ctx->pc = 0x44163Cu;
            // 0x44163c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x441640u;
        goto label_441640;
    }
    ctx->pc = 0x441638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44163Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441638u;
            // 0x44163c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441640u;
label_441640:
    // 0x441640: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x441640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_441644:
    // 0x441644: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x441644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_441648:
    // 0x441648: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x441648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_44164c:
    // 0x44164c: 0x24a5ceb0  addiu       $a1, $a1, -0x3150
    ctx->pc = 0x44164cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954672));
label_441650:
    // 0x441650: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x441650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_441654:
    // 0x441654: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x441654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_441658:
    // 0x441658: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x441658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_44165c:
    // 0x44165c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x44165cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_441660:
    // 0x441660: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x441660u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_441664:
    // 0x441664: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x441664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_441668:
    // 0x441668: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x441668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_44166c:
    // 0x44166c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x44166cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_441670:
    // 0x441670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x441670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_441674:
    // 0x441674: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x441674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_441678:
    // 0x441678: 0xc075728  jal         func_1D5CA0
label_44167c:
    if (ctx->pc == 0x44167Cu) {
        ctx->pc = 0x44167Cu;
            // 0x44167c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441680u;
        goto label_441680;
    }
    ctx->pc = 0x441678u;
    SET_GPR_U32(ctx, 31, 0x441680u);
    ctx->pc = 0x44167Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441678u;
            // 0x44167c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441680u; }
        if (ctx->pc != 0x441680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441680u; }
        if (ctx->pc != 0x441680u) { return; }
    }
    ctx->pc = 0x441680u;
label_441680:
    // 0x441680: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
label_441684:
    if (ctx->pc == 0x441684u) {
        ctx->pc = 0x441684u;
            // 0x441684: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x441688u;
        goto label_441688;
    }
    ctx->pc = 0x441680u;
    {
        const bool branch_taken_0x441680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x441680) {
            ctx->pc = 0x441684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441680u;
            // 0x441684: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44176Cu;
            goto label_44176c;
        }
    }
    ctx->pc = 0x441688u;
label_441688:
    // 0x441688: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x441688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_44168c:
    // 0x44168c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x44168cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_441690:
    // 0x441690: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x441690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_441694:
    // 0x441694: 0xc6230dec  lwc1        $f3, 0xDEC($s1)
    ctx->pc = 0x441694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_441698:
    // 0x441698: 0xc6440024  lwc1        $f4, 0x24($s2)
    ctx->pc = 0x441698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_44169c:
    // 0x44169c: 0xc6250dbc  lwc1        $f5, 0xDBC($s1)
    ctx->pc = 0x44169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4416a0:
    // 0x4416a0: 0xc4860018  lwc1        $f6, 0x18($a0)
    ctx->pc = 0x4416a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4416a4:
    // 0x4416a4: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x4416a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_4416a8:
    // 0x4416a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4416a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4416ac:
    // 0x4416ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4416acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4416b0:
    // 0x4416b0: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x4416b0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_4416b4:
    // 0x4416b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4416b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4416b8:
    // 0x4416b8: 0x3c023eb2  lui         $v0, 0x3EB2
    ctx->pc = 0x4416b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
label_4416bc:
    // 0x4416bc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4416bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4416c0:
    // 0x4416c0: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x4416c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_4416c4:
    // 0x4416c4: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x4416c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_4416c8:
    // 0x4416c8: 0x4606291c  madd.s      $f4, $f5, $f6
    ctx->pc = 0x4416c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
label_4416cc:
    // 0x4416cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4416ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4416d0:
    // 0x4416d0: 0x0  nop
    ctx->pc = 0x4416d0u;
    // NOP
label_4416d4:
    // 0x4416d4: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x4416d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_4416d8:
    // 0x4416d8: 0xe6440024  swc1        $f4, 0x24($s2)
    ctx->pc = 0x4416d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_4416dc:
    // 0x4416dc: 0xc6210dec  lwc1        $f1, 0xDEC($s1)
    ctx->pc = 0x4416dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4416e0:
    // 0x4416e0: 0x46040302  mul.s       $f12, $f0, $f4
    ctx->pc = 0x4416e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_4416e4:
    // 0x4416e4: 0xc0477a8  jal         func_11DEA0
label_4416e8:
    if (ctx->pc == 0x4416E8u) {
        ctx->pc = 0x4416E8u;
            // 0x4416e8: 0x4601151d  msub.s      $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->pc = 0x4416ECu;
        goto label_4416ec;
    }
    ctx->pc = 0x4416E4u;
    SET_GPR_U32(ctx, 31, 0x4416ECu);
    ctx->pc = 0x4416E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4416E4u;
            // 0x4416e8: 0x4601151d  msub.s      $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4416ECu; }
        if (ctx->pc != 0x4416ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4416ECu; }
        if (ctx->pc != 0x4416ECu) { return; }
    }
    ctx->pc = 0x4416ECu;
label_4416ec:
    // 0x4416ec: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x4416ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_4416f0:
    // 0x4416f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4416f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4416f4:
    // 0x4416f4: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x4416f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_4416f8:
    // 0x4416f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4416f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4416fc:
    // 0x4416fc: 0x0  nop
    ctx->pc = 0x4416fcu;
    // NOP
label_441700:
    // 0x441700: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x441700u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_441704:
    // 0x441704: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x441704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_441708:
    // 0x441708: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x441708u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_44170c:
    // 0x44170c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x44170cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_441710:
    // 0x441710: 0xc6200dc0  lwc1        $f0, 0xDC0($s1)
    ctx->pc = 0x441710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_441714:
    // 0x441714: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x441714u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_441718:
    // 0x441718: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x441718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_44171c:
    // 0x44171c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x44171cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_441720:
    // 0x441720: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x441720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_441724:
    // 0x441724: 0xc04cab0  jal         func_132AC0
label_441728:
    if (ctx->pc == 0x441728u) {
        ctx->pc = 0x441728u;
            // 0x441728: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44172Cu;
        goto label_44172c;
    }
    ctx->pc = 0x441724u;
    SET_GPR_U32(ctx, 31, 0x44172Cu);
    ctx->pc = 0x441728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441724u;
            // 0x441728: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44172Cu; }
        if (ctx->pc != 0x44172Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44172Cu; }
        if (ctx->pc != 0x44172Cu) { return; }
    }
    ctx->pc = 0x44172Cu;
label_44172c:
    // 0x44172c: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x44172cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_441730:
    // 0x441730: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x441730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_441734:
    // 0x441734: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x441734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_441738:
    // 0x441738: 0x320f809  jalr        $t9
label_44173c:
    if (ctx->pc == 0x44173Cu) {
        ctx->pc = 0x44173Cu;
            // 0x44173c: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x441740u;
        goto label_441740;
    }
    ctx->pc = 0x441738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x441740u);
        ctx->pc = 0x44173Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441738u;
            // 0x44173c: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x441740u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x441740u; }
            if (ctx->pc != 0x441740u) { return; }
        }
        }
    }
    ctx->pc = 0x441740u;
label_441740:
    // 0x441740: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x441740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_441744:
    // 0x441744: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x441744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_441748:
    // 0x441748: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x441748u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_44174c:
    // 0x44174c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x44174cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_441750:
    // 0x441750: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x441750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_441754:
    // 0x441754: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x441754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_441758:
    // 0x441758: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x441758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_44175c:
    // 0x44175c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x44175cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_441760:
    // 0x441760: 0xc04c72c  jal         func_131CB0
label_441764:
    if (ctx->pc == 0x441764u) {
        ctx->pc = 0x441764u;
            // 0x441764: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441768u;
        goto label_441768;
    }
    ctx->pc = 0x441760u;
    SET_GPR_U32(ctx, 31, 0x441768u);
    ctx->pc = 0x441764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441760u;
            // 0x441764: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441768u; }
        if (ctx->pc != 0x441768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441768u; }
        if (ctx->pc != 0x441768u) { return; }
    }
    ctx->pc = 0x441768u;
label_441768:
    // 0x441768: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x441768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_44176c:
    // 0x44176c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x44176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_441770:
    // 0x441770: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x441770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_441774:
    // 0x441774: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x441774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_441778:
    // 0x441778: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x441778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44177c:
    // 0x44177c: 0x3e00008  jr          $ra
label_441780:
    if (ctx->pc == 0x441780u) {
        ctx->pc = 0x441780u;
            // 0x441780: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x441784u;
        goto label_441784;
    }
    ctx->pc = 0x44177Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44177Cu;
            // 0x441780: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441784u;
label_441784:
    // 0x441784: 0x0  nop
    ctx->pc = 0x441784u;
    // NOP
label_441788:
    // 0x441788: 0x0  nop
    ctx->pc = 0x441788u;
    // NOP
label_44178c:
    // 0x44178c: 0x0  nop
    ctx->pc = 0x44178cu;
    // NOP
label_441790:
    // 0x441790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x441790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_441794:
    // 0x441794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x441794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_441798:
    // 0x441798: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x441798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_44179c:
    // 0x44179c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_4417a0:
    if (ctx->pc == 0x4417A0u) {
        ctx->pc = 0x4417A0u;
            // 0x4417a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4417A4u;
        goto label_4417a4;
    }
    ctx->pc = 0x44179Cu;
    {
        const bool branch_taken_0x44179c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44179c) {
            ctx->pc = 0x4417A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44179Cu;
            // 0x4417a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4417B0u;
            goto label_4417b0;
        }
    }
    ctx->pc = 0x4417A4u;
label_4417a4:
    // 0x4417a4: 0xc10c9b4  jal         func_4326D0
label_4417a8:
    if (ctx->pc == 0x4417A8u) {
        ctx->pc = 0x4417ACu;
        goto label_4417ac;
    }
    ctx->pc = 0x4417A4u;
    SET_GPR_U32(ctx, 31, 0x4417ACu);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4417ACu; }
        if (ctx->pc != 0x4417ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4417ACu; }
        if (ctx->pc != 0x4417ACu) { return; }
    }
    ctx->pc = 0x4417ACu;
label_4417ac:
    // 0x4417ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4417acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4417b0:
    // 0x4417b0: 0x3e00008  jr          $ra
label_4417b4:
    if (ctx->pc == 0x4417B4u) {
        ctx->pc = 0x4417B4u;
            // 0x4417b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4417B8u;
        goto label_4417b8;
    }
    ctx->pc = 0x4417B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4417B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4417B0u;
            // 0x4417b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4417B8u;
label_4417b8:
    // 0x4417b8: 0x0  nop
    ctx->pc = 0x4417b8u;
    // NOP
label_4417bc:
    // 0x4417bc: 0x0  nop
    ctx->pc = 0x4417bcu;
    // NOP
label_4417c0:
    // 0x4417c0: 0x3e00008  jr          $ra
label_4417c4:
    if (ctx->pc == 0x4417C4u) {
        ctx->pc = 0x4417C8u;
        goto label_4417c8;
    }
    ctx->pc = 0x4417C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4417C8u;
label_4417c8:
    // 0x4417c8: 0x0  nop
    ctx->pc = 0x4417c8u;
    // NOP
label_4417cc:
    // 0x4417cc: 0x0  nop
    ctx->pc = 0x4417ccu;
    // NOP
label_4417d0:
    // 0x4417d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4417d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4417d4:
    // 0x4417d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4417d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4417d8:
    // 0x4417d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4417d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4417dc:
    // 0x4417dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4417dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4417e0:
    // 0x4417e0: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x4417e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4417e4:
    // 0x4417e4: 0xc6010e1c  lwc1        $f1, 0xE1C($s0)
    ctx->pc = 0x4417e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4417e8:
    // 0x4417e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4417e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4417ec:
    // 0x4417ec: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_4417f0:
    if (ctx->pc == 0x4417F0u) {
        ctx->pc = 0x4417F0u;
            // 0x4417f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4417F4u;
        goto label_4417f4;
    }
    ctx->pc = 0x4417ECu;
    {
        const bool branch_taken_0x4417ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4417ec) {
            ctx->pc = 0x4417F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4417ECu;
            // 0x4417f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441814u;
            goto label_441814;
        }
    }
    ctx->pc = 0x4417F4u;
label_4417f4:
    // 0x4417f4: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x4417f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_4417f8:
    // 0x4417f8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x4417f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_4417fc:
    // 0x4417fc: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4417fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_441800:
    // 0x441800: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x441800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_441804:
    // 0x441804: 0x320f809  jalr        $t9
label_441808:
    if (ctx->pc == 0x441808u) {
        ctx->pc = 0x441808u;
            // 0x441808: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x44180Cu;
        goto label_44180c;
    }
    ctx->pc = 0x441804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44180Cu);
        ctx->pc = 0x441808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441804u;
            // 0x441808: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44180Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44180Cu; }
            if (ctx->pc != 0x44180Cu) { return; }
        }
        }
    }
    ctx->pc = 0x44180Cu;
label_44180c:
    // 0x44180c: 0xae000e1c  sw          $zero, 0xE1C($s0)
    ctx->pc = 0x44180cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3612), GPR_U32(ctx, 0));
label_441810:
    // 0x441810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x441810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_441814:
    // 0x441814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x441814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_441818:
    // 0x441818: 0x3e00008  jr          $ra
label_44181c:
    if (ctx->pc == 0x44181Cu) {
        ctx->pc = 0x44181Cu;
            // 0x44181c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x441820u;
        goto label_441820;
    }
    ctx->pc = 0x441818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44181Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441818u;
            // 0x44181c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441820u;
label_441820:
    // 0x441820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x441820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_441824:
    // 0x441824: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x441824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_441828:
    // 0x441828: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x441828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_44182c:
    // 0x44182c: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x44182cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_441830:
    // 0x441830: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x441830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_441834:
    // 0x441834: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x441834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_441838:
    // 0x441838: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x441838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44183c:
    // 0x44183c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44183cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_441840:
    // 0x441840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x441840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_441844:
    // 0x441844: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x441844u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_441848:
    // 0x441848: 0x824311ad  lb          $v1, 0x11AD($s2)
    ctx->pc = 0x441848u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4525)));
label_44184c:
    // 0x44184c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44184cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_441850:
    // 0x441850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x441850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_441854:
    // 0x441854: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x441854u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_441858:
    // 0x441858: 0xc075830  jal         func_1D60C0
label_44185c:
    if (ctx->pc == 0x44185Cu) {
        ctx->pc = 0x44185Cu;
            // 0x44185c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441860u;
        goto label_441860;
    }
    ctx->pc = 0x441858u;
    SET_GPR_U32(ctx, 31, 0x441860u);
    ctx->pc = 0x44185Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441858u;
            // 0x44185c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D60C0u;
    if (runtime->hasFunction(0x1D60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D60C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441860u; }
        if (ctx->pc != 0x441860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D60C0_0x1d60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441860u; }
        if (ctx->pc != 0x441860u) { return; }
    }
    ctx->pc = 0x441860u;
label_441860:
    // 0x441860: 0x8e440db0  lw          $a0, 0xDB0($s2)
    ctx->pc = 0x441860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_441864:
    // 0x441864: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x441864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_441868:
    // 0x441868: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_44186c:
    if (ctx->pc == 0x44186Cu) {
        ctx->pc = 0x44186Cu;
            // 0x44186c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441870u;
        goto label_441870;
    }
    ctx->pc = 0x441868u;
    {
        const bool branch_taken_0x441868 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x44186Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441868u;
            // 0x44186c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441868) {
            ctx->pc = 0x441888u;
            goto label_441888;
        }
    }
    ctx->pc = 0x441870u;
label_441870:
    // 0x441870: 0xc641118c  lwc1        $f1, 0x118C($s2)
    ctx->pc = 0x441870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_441874:
    // 0x441874: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x441874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_441878:
    // 0x441878: 0x0  nop
    ctx->pc = 0x441878u;
    // NOP
label_44187c:
    // 0x44187c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x44187cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_441880:
    // 0x441880: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
label_441884:
    if (ctx->pc == 0x441884u) {
        ctx->pc = 0x441884u;
            // 0x441884: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x441888u;
        goto label_441888;
    }
    ctx->pc = 0x441880u;
    {
        const bool branch_taken_0x441880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x441880) {
            ctx->pc = 0x441884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441880u;
            // 0x441884: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4418B8u;
            goto label_4418b8;
        }
    }
    ctx->pc = 0x441888u;
label_441888:
    // 0x441888: 0xc10c9b4  jal         func_4326D0
label_44188c:
    if (ctx->pc == 0x44188Cu) {
        ctx->pc = 0x44188Cu;
            // 0x44188c: 0x8e840060  lw          $a0, 0x60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->pc = 0x441890u;
        goto label_441890;
    }
    ctx->pc = 0x441888u;
    SET_GPR_U32(ctx, 31, 0x441890u);
    ctx->pc = 0x44188Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441888u;
            // 0x44188c: 0x8e840060  lw          $a0, 0x60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441890u; }
        if (ctx->pc != 0x441890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441890u; }
        if (ctx->pc != 0x441890u) { return; }
    }
    ctx->pc = 0x441890u;
label_441890:
    // 0x441890: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x441890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_441894:
    // 0x441894: 0x50a0006e  beql        $a1, $zero, . + 4 + (0x6E << 2)
label_441898:
    if (ctx->pc == 0x441898u) {
        ctx->pc = 0x441898u;
            // 0x441898: 0xae800028  sw          $zero, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x44189Cu;
        goto label_44189c;
    }
    ctx->pc = 0x441894u;
    {
        const bool branch_taken_0x441894 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x441894) {
            ctx->pc = 0x441898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441894u;
            // 0x441898: 0xae800028  sw          $zero, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441A50u;
            goto label_441a50;
        }
    }
    ctx->pc = 0x44189Cu;
label_44189c:
    // 0x44189c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x44189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4418a0:
    // 0x4418a0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4418a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4418a4:
    // 0x4418a4: 0xc057b7c  jal         func_15EDF0
label_4418a8:
    if (ctx->pc == 0x4418A8u) {
        ctx->pc = 0x4418A8u;
            // 0x4418a8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4418ACu;
        goto label_4418ac;
    }
    ctx->pc = 0x4418A4u;
    SET_GPR_U32(ctx, 31, 0x4418ACu);
    ctx->pc = 0x4418A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4418A4u;
            // 0x4418a8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4418ACu; }
        if (ctx->pc != 0x4418ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4418ACu; }
        if (ctx->pc != 0x4418ACu) { return; }
    }
    ctx->pc = 0x4418ACu;
label_4418ac:
    // 0x4418ac: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x4418acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_4418b0:
    // 0x4418b0: 0x10000067  b           . + 4 + (0x67 << 2)
label_4418b4:
    if (ctx->pc == 0x4418B4u) {
        ctx->pc = 0x4418B8u;
        goto label_4418b8;
    }
    ctx->pc = 0x4418B0u;
    {
        const bool branch_taken_0x4418b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4418b0) {
            ctx->pc = 0x441A50u;
            goto label_441a50;
        }
    }
    ctx->pc = 0x4418B8u;
label_4418b8:
    // 0x4418b8: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x4418b8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4418bc:
    // 0x4418bc: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x4418bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4418c0:
    // 0x4418c0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4418c4:
    if (ctx->pc == 0x4418C4u) {
        ctx->pc = 0x4418C4u;
            // 0x4418c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4418C8u;
        goto label_4418c8;
    }
    ctx->pc = 0x4418C0u;
    {
        const bool branch_taken_0x4418c0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4418C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4418C0u;
            // 0x4418c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4418c0) {
            ctx->pc = 0x4418D8u;
            goto label_4418d8;
        }
    }
    ctx->pc = 0x4418C8u;
label_4418c8:
    // 0x4418c8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4418c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4418cc:
    // 0x4418cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4418d0:
    if (ctx->pc == 0x4418D0u) {
        ctx->pc = 0x4418D4u;
        goto label_4418d4;
    }
    ctx->pc = 0x4418CCu;
    {
        const bool branch_taken_0x4418cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4418cc) {
            ctx->pc = 0x4418D8u;
            goto label_4418d8;
        }
    }
    ctx->pc = 0x4418D4u;
label_4418d4:
    // 0x4418d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4418d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4418d8:
    // 0x4418d8: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_4418dc:
    if (ctx->pc == 0x4418DCu) {
        ctx->pc = 0x4418E0u;
        goto label_4418e0;
    }
    ctx->pc = 0x4418D8u;
    {
        const bool branch_taken_0x4418d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4418d8) {
            ctx->pc = 0x4418F4u;
            goto label_4418f4;
        }
    }
    ctx->pc = 0x4418E0u;
label_4418e0:
    // 0x4418e0: 0xc075eb4  jal         func_1D7AD0
label_4418e4:
    if (ctx->pc == 0x4418E4u) {
        ctx->pc = 0x4418E8u;
        goto label_4418e8;
    }
    ctx->pc = 0x4418E0u;
    SET_GPR_U32(ctx, 31, 0x4418E8u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4418E8u; }
        if (ctx->pc != 0x4418E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4418E8u; }
        if (ctx->pc != 0x4418E8u) { return; }
    }
    ctx->pc = 0x4418E8u;
label_4418e8:
    // 0x4418e8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4418ec:
    if (ctx->pc == 0x4418ECu) {
        ctx->pc = 0x4418F0u;
        goto label_4418f0;
    }
    ctx->pc = 0x4418E8u;
    {
        const bool branch_taken_0x4418e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4418e8) {
            ctx->pc = 0x4418F4u;
            goto label_4418f4;
        }
    }
    ctx->pc = 0x4418F0u;
label_4418f0:
    // 0x4418f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4418f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4418f4:
    // 0x4418f4: 0x56200027  bnel        $s1, $zero, . + 4 + (0x27 << 2)
label_4418f8:
    if (ctx->pc == 0x4418F8u) {
        ctx->pc = 0x4418F8u;
            // 0x4418f8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4418FCu;
        goto label_4418fc;
    }
    ctx->pc = 0x4418F4u;
    {
        const bool branch_taken_0x4418f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4418f4) {
            ctx->pc = 0x4418F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4418F4u;
            // 0x4418f8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441994u;
            goto label_441994;
        }
    }
    ctx->pc = 0x4418FCu;
label_4418fc:
    // 0x4418fc: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x4418fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_441900:
    // 0x441900: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x441900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_441904:
    // 0x441904: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x441904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_441908:
    // 0x441908: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
label_44190c:
    if (ctx->pc == 0x44190Cu) {
        ctx->pc = 0x441910u;
        goto label_441910;
    }
    ctx->pc = 0x441908u;
    {
        const bool branch_taken_0x441908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x441908) {
            ctx->pc = 0x441990u;
            goto label_441990;
        }
    }
    ctx->pc = 0x441910u;
label_441910:
    // 0x441910: 0xc0756f4  jal         func_1D5BD0
label_441914:
    if (ctx->pc == 0x441914u) {
        ctx->pc = 0x441914u;
            // 0x441914: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441918u;
        goto label_441918;
    }
    ctx->pc = 0x441910u;
    SET_GPR_U32(ctx, 31, 0x441918u);
    ctx->pc = 0x441914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441910u;
            // 0x441914: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BD0u;
    if (runtime->hasFunction(0x1D5BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441918u; }
        if (ctx->pc != 0x441918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5BD0_0x1d5bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441918u; }
        if (ctx->pc != 0x441918u) { return; }
    }
    ctx->pc = 0x441918u;
label_441918:
    // 0x441918: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x441918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
label_44191c:
    // 0x44191c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x44191cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_441920:
    // 0x441920: 0x0  nop
    ctx->pc = 0x441920u;
    // NOP
label_441924:
    // 0x441924: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x441924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_441928:
    // 0x441928: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
label_44192c:
    if (ctx->pc == 0x44192Cu) {
        ctx->pc = 0x44192Cu;
            // 0x44192c: 0x8e840060  lw          $a0, 0x60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->pc = 0x441930u;
        goto label_441930;
    }
    ctx->pc = 0x441928u;
    {
        const bool branch_taken_0x441928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x441928) {
            ctx->pc = 0x44192Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441928u;
            // 0x44192c: 0x8e840060  lw          $a0, 0x60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441988u;
            goto label_441988;
        }
    }
    ctx->pc = 0x441930u;
label_441930:
    // 0x441930: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x441930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_441934:
    // 0x441934: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x441934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_441938:
    // 0x441938: 0x0  nop
    ctx->pc = 0x441938u;
    // NOP
label_44193c:
    // 0x44193c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x44193cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_441940:
    // 0x441940: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_441944:
    if (ctx->pc == 0x441944u) {
        ctx->pc = 0x441944u;
            // 0x441944: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x441948u;
        goto label_441948;
    }
    ctx->pc = 0x441940u;
    {
        const bool branch_taken_0x441940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x441940) {
            ctx->pc = 0x441944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441940u;
            // 0x441944: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x441958u;
            goto label_441958;
        }
    }
    ctx->pc = 0x441948u;
label_441948:
    // 0x441948: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x441948u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_44194c:
    // 0x44194c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x44194cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_441950:
    // 0x441950: 0x10000007  b           . + 4 + (0x7 << 2)
label_441954:
    if (ctx->pc == 0x441954u) {
        ctx->pc = 0x441954u;
            // 0x441954: 0x8e840060  lw          $a0, 0x60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->pc = 0x441958u;
        goto label_441958;
    }
    ctx->pc = 0x441950u;
    {
        const bool branch_taken_0x441950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x441954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441950u;
            // 0x441954: 0x8e840060  lw          $a0, 0x60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441950) {
            ctx->pc = 0x441970u;
            goto label_441970;
        }
    }
    ctx->pc = 0x441958u;
label_441958:
    // 0x441958: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x441958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_44195c:
    // 0x44195c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x44195cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_441960:
    // 0x441960: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x441960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_441964:
    // 0x441964: 0x0  nop
    ctx->pc = 0x441964u;
    // NOP
label_441968:
    // 0x441968: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x441968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_44196c:
    // 0x44196c: 0x8e840060  lw          $a0, 0x60($s4)
    ctx->pc = 0x44196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_441970:
    // 0x441970: 0xc10c990  jal         func_432640
label_441974:
    if (ctx->pc == 0x441974u) {
        ctx->pc = 0x441978u;
        goto label_441978;
    }
    ctx->pc = 0x441970u;
    SET_GPR_U32(ctx, 31, 0x441978u);
    ctx->pc = 0x432640u;
    if (runtime->hasFunction(0x432640u)) {
        auto targetFn = runtime->lookupFunction(0x432640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441978u; }
        if (ctx->pc != 0x441978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432640_0x432640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441978u; }
        if (ctx->pc != 0x441978u) { return; }
    }
    ctx->pc = 0x441978u;
label_441978:
    // 0x441978: 0xc10c9d8  jal         func_432760
label_44197c:
    if (ctx->pc == 0x44197Cu) {
        ctx->pc = 0x44197Cu;
            // 0x44197c: 0x8e840060  lw          $a0, 0x60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->pc = 0x441980u;
        goto label_441980;
    }
    ctx->pc = 0x441978u;
    SET_GPR_U32(ctx, 31, 0x441980u);
    ctx->pc = 0x44197Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441978u;
            // 0x44197c: 0x8e840060  lw          $a0, 0x60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441980u; }
        if (ctx->pc != 0x441980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441980u; }
        if (ctx->pc != 0x441980u) { return; }
    }
    ctx->pc = 0x441980u;
label_441980:
    // 0x441980: 0x10000003  b           . + 4 + (0x3 << 2)
label_441984:
    if (ctx->pc == 0x441984u) {
        ctx->pc = 0x441988u;
        goto label_441988;
    }
    ctx->pc = 0x441980u;
    {
        const bool branch_taken_0x441980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x441980) {
            ctx->pc = 0x441990u;
            goto label_441990;
        }
    }
    ctx->pc = 0x441988u;
label_441988:
    // 0x441988: 0xc10c9b4  jal         func_4326D0
label_44198c:
    if (ctx->pc == 0x44198Cu) {
        ctx->pc = 0x441990u;
        goto label_441990;
    }
    ctx->pc = 0x441988u;
    SET_GPR_U32(ctx, 31, 0x441990u);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441990u; }
        if (ctx->pc != 0x441990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441990u; }
        if (ctx->pc != 0x441990u) { return; }
    }
    ctx->pc = 0x441990u;
label_441990:
    // 0x441990: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x441990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_441994:
    // 0x441994: 0x1603002e  bne         $s0, $v1, . + 4 + (0x2E << 2)
label_441998:
    if (ctx->pc == 0x441998u) {
        ctx->pc = 0x44199Cu;
        goto label_44199c;
    }
    ctx->pc = 0x441994u;
    {
        const bool branch_taken_0x441994 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x441994) {
            ctx->pc = 0x441A50u;
            goto label_441a50;
        }
    }
    ctx->pc = 0x44199Cu;
label_44199c:
    // 0x44199c: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x44199cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_4419a0:
    // 0x4419a0: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4419a0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4419a4:
    // 0x4419a4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4419a8:
    if (ctx->pc == 0x4419A8u) {
        ctx->pc = 0x4419A8u;
            // 0x4419a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4419ACu;
        goto label_4419ac;
    }
    ctx->pc = 0x4419A4u;
    {
        const bool branch_taken_0x4419a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4419A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4419A4u;
            // 0x4419a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4419a4) {
            ctx->pc = 0x4419BCu;
            goto label_4419bc;
        }
    }
    ctx->pc = 0x4419ACu;
label_4419ac:
    // 0x4419ac: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4419acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4419b0:
    // 0x4419b0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4419b4:
    if (ctx->pc == 0x4419B4u) {
        ctx->pc = 0x4419B8u;
        goto label_4419b8;
    }
    ctx->pc = 0x4419B0u;
    {
        const bool branch_taken_0x4419b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4419b0) {
            ctx->pc = 0x4419BCu;
            goto label_4419bc;
        }
    }
    ctx->pc = 0x4419B8u;
label_4419b8:
    // 0x4419b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4419b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4419bc:
    // 0x4419bc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_4419c0:
    if (ctx->pc == 0x4419C0u) {
        ctx->pc = 0x4419C4u;
        goto label_4419c4;
    }
    ctx->pc = 0x4419BCu;
    {
        const bool branch_taken_0x4419bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4419bc) {
            ctx->pc = 0x4419D8u;
            goto label_4419d8;
        }
    }
    ctx->pc = 0x4419C4u;
label_4419c4:
    // 0x4419c4: 0xc075eb4  jal         func_1D7AD0
label_4419c8:
    if (ctx->pc == 0x4419C8u) {
        ctx->pc = 0x4419C8u;
            // 0x4419c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4419CCu;
        goto label_4419cc;
    }
    ctx->pc = 0x4419C4u;
    SET_GPR_U32(ctx, 31, 0x4419CCu);
    ctx->pc = 0x4419C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4419C4u;
            // 0x4419c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4419CCu; }
        if (ctx->pc != 0x4419CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4419CCu; }
        if (ctx->pc != 0x4419CCu) { return; }
    }
    ctx->pc = 0x4419CCu;
label_4419cc:
    // 0x4419cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4419d0:
    if (ctx->pc == 0x4419D0u) {
        ctx->pc = 0x4419D4u;
        goto label_4419d4;
    }
    ctx->pc = 0x4419CCu;
    {
        const bool branch_taken_0x4419cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4419cc) {
            ctx->pc = 0x4419D8u;
            goto label_4419d8;
        }
    }
    ctx->pc = 0x4419D4u;
label_4419d4:
    // 0x4419d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4419d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4419d8:
    // 0x4419d8: 0x5600001b  bnel        $s0, $zero, . + 4 + (0x1B << 2)
label_4419dc:
    if (ctx->pc == 0x4419DCu) {
        ctx->pc = 0x4419DCu;
            // 0x4419dc: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->pc = 0x4419E0u;
        goto label_4419e0;
    }
    ctx->pc = 0x4419D8u;
    {
        const bool branch_taken_0x4419d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4419d8) {
            ctx->pc = 0x4419DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4419D8u;
            // 0x4419dc: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441A48u;
            goto label_441a48;
        }
    }
    ctx->pc = 0x4419E0u;
label_4419e0:
    // 0x4419e0: 0x8e440e34  lw          $a0, 0xE34($s2)
    ctx->pc = 0x4419e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_4419e4:
    // 0x4419e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4419e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4419e8:
    // 0x4419e8: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_4419ec:
    if (ctx->pc == 0x4419ECu) {
        ctx->pc = 0x4419F0u;
        goto label_4419f0;
    }
    ctx->pc = 0x4419E8u;
    {
        const bool branch_taken_0x4419e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4419e8) {
            ctx->pc = 0x441A44u;
            goto label_441a44;
        }
    }
    ctx->pc = 0x4419F0u;
label_4419f0:
    // 0x4419f0: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x4419f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_4419f4:
    // 0x4419f4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4419f4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4419f8:
    // 0x4419f8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4419fc:
    if (ctx->pc == 0x4419FCu) {
        ctx->pc = 0x4419FCu;
            // 0x4419fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441A00u;
        goto label_441a00;
    }
    ctx->pc = 0x4419F8u;
    {
        const bool branch_taken_0x4419f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4419FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4419F8u;
            // 0x4419fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4419f8) {
            ctx->pc = 0x441A10u;
            goto label_441a10;
        }
    }
    ctx->pc = 0x441A00u;
label_441a00:
    // 0x441a00: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x441a00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_441a04:
    // 0x441a04: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_441a08:
    if (ctx->pc == 0x441A08u) {
        ctx->pc = 0x441A0Cu;
        goto label_441a0c;
    }
    ctx->pc = 0x441A04u;
    {
        const bool branch_taken_0x441a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x441a04) {
            ctx->pc = 0x441A10u;
            goto label_441a10;
        }
    }
    ctx->pc = 0x441A0Cu;
label_441a0c:
    // 0x441a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x441a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_441a10:
    // 0x441a10: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_441a14:
    if (ctx->pc == 0x441A14u) {
        ctx->pc = 0x441A18u;
        goto label_441a18;
    }
    ctx->pc = 0x441A10u;
    {
        const bool branch_taken_0x441a10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x441a10) {
            ctx->pc = 0x441A2Cu;
            goto label_441a2c;
        }
    }
    ctx->pc = 0x441A18u;
label_441a18:
    // 0x441a18: 0xc075eb4  jal         func_1D7AD0
label_441a1c:
    if (ctx->pc == 0x441A1Cu) {
        ctx->pc = 0x441A1Cu;
            // 0x441a1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441A20u;
        goto label_441a20;
    }
    ctx->pc = 0x441A18u;
    SET_GPR_U32(ctx, 31, 0x441A20u);
    ctx->pc = 0x441A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441A18u;
            // 0x441a1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441A20u; }
        if (ctx->pc != 0x441A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441A20u; }
        if (ctx->pc != 0x441A20u) { return; }
    }
    ctx->pc = 0x441A20u;
label_441a20:
    // 0x441a20: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_441a24:
    if (ctx->pc == 0x441A24u) {
        ctx->pc = 0x441A28u;
        goto label_441a28;
    }
    ctx->pc = 0x441A20u;
    {
        const bool branch_taken_0x441a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x441a20) {
            ctx->pc = 0x441A2Cu;
            goto label_441a2c;
        }
    }
    ctx->pc = 0x441A28u;
label_441a28:
    // 0x441a28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x441a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_441a2c:
    // 0x441a2c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_441a30:
    if (ctx->pc == 0x441A30u) {
        ctx->pc = 0x441A34u;
        goto label_441a34;
    }
    ctx->pc = 0x441A2Cu;
    {
        const bool branch_taken_0x441a2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x441a2c) {
            ctx->pc = 0x441A44u;
            goto label_441a44;
        }
    }
    ctx->pc = 0x441A34u;
label_441a34:
    // 0x441a34: 0x8e640e34  lw          $a0, 0xE34($s3)
    ctx->pc = 0x441a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_441a38:
    // 0x441a38: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x441a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_441a3c:
    // 0x441a3c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_441a40:
    if (ctx->pc == 0x441A40u) {
        ctx->pc = 0x441A44u;
        goto label_441a44;
    }
    ctx->pc = 0x441A3Cu;
    {
        const bool branch_taken_0x441a3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x441a3c) {
            ctx->pc = 0x441A50u;
            goto label_441a50;
        }
    }
    ctx->pc = 0x441A44u;
label_441a44:
    // 0x441a44: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x441a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_441a48:
    // 0x441a48: 0xc073234  jal         func_1CC8D0
label_441a4c:
    if (ctx->pc == 0x441A4Cu) {
        ctx->pc = 0x441A4Cu;
            // 0x441a4c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x441A50u;
        goto label_441a50;
    }
    ctx->pc = 0x441A48u;
    SET_GPR_U32(ctx, 31, 0x441A50u);
    ctx->pc = 0x441A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441A48u;
            // 0x441a4c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441A50u; }
        if (ctx->pc != 0x441A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441A50u; }
        if (ctx->pc != 0x441A50u) { return; }
    }
    ctx->pc = 0x441A50u;
label_441a50:
    // 0x441a50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x441a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_441a54:
    // 0x441a54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x441a54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_441a58:
    // 0x441a58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x441a58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_441a5c:
    // 0x441a5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x441a5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_441a60:
    // 0x441a60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x441a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_441a64:
    // 0x441a64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x441a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_441a68:
    // 0x441a68: 0x3e00008  jr          $ra
label_441a6c:
    if (ctx->pc == 0x441A6Cu) {
        ctx->pc = 0x441A6Cu;
            // 0x441a6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x441A70u;
        goto label_441a70;
    }
    ctx->pc = 0x441A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441A68u;
            // 0x441a6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441A70u;
label_441a70:
    // 0x441a70: 0x3e00008  jr          $ra
label_441a74:
    if (ctx->pc == 0x441A74u) {
        ctx->pc = 0x441A78u;
        goto label_441a78;
    }
    ctx->pc = 0x441A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441A78u;
label_441a78:
    // 0x441a78: 0x0  nop
    ctx->pc = 0x441a78u;
    // NOP
label_441a7c:
    // 0x441a7c: 0x0  nop
    ctx->pc = 0x441a7cu;
    // NOP
label_441a80:
    // 0x441a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x441a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_441a84:
    // 0x441a84: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x441a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_441a88:
    // 0x441a88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x441a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_441a8c:
    // 0x441a8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x441a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_441a90:
    // 0x441a90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x441a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_441a94:
    // 0x441a94: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x441a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_441a98:
    // 0x441a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x441a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_441a9c:
    // 0x441a9c: 0xc12ca3c  jal         func_4B28F0
label_441aa0:
    if (ctx->pc == 0x441AA0u) {
        ctx->pc = 0x441AA0u;
            // 0x441aa0: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x441AA4u;
        goto label_441aa4;
    }
    ctx->pc = 0x441A9Cu;
    SET_GPR_U32(ctx, 31, 0x441AA4u);
    ctx->pc = 0x441AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441A9Cu;
            // 0x441aa0: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441AA4u; }
        if (ctx->pc != 0x441AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441AA4u; }
        if (ctx->pc != 0x441AA4u) { return; }
    }
    ctx->pc = 0x441AA4u;
label_441aa4:
    // 0x441aa4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x441aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_441aa8:
    // 0x441aa8: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x441aa8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_441aac:
    // 0x441aac: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x441aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_441ab0:
    // 0x441ab0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_441ab4:
    if (ctx->pc == 0x441AB4u) {
        ctx->pc = 0x441AB4u;
            // 0x441ab4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441AB8u;
        goto label_441ab8;
    }
    ctx->pc = 0x441AB0u;
    {
        const bool branch_taken_0x441ab0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x441AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441AB0u;
            // 0x441ab4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441ab0) {
            ctx->pc = 0x441AC8u;
            goto label_441ac8;
        }
    }
    ctx->pc = 0x441AB8u;
label_441ab8:
    // 0x441ab8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x441ab8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_441abc:
    // 0x441abc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_441ac0:
    if (ctx->pc == 0x441AC0u) {
        ctx->pc = 0x441AC4u;
        goto label_441ac4;
    }
    ctx->pc = 0x441ABCu;
    {
        const bool branch_taken_0x441abc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x441abc) {
            ctx->pc = 0x441AC8u;
            goto label_441ac8;
        }
    }
    ctx->pc = 0x441AC4u;
label_441ac4:
    // 0x441ac4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x441ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_441ac8:
    // 0x441ac8: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_441acc:
    if (ctx->pc == 0x441ACCu) {
        ctx->pc = 0x441AD0u;
        goto label_441ad0;
    }
    ctx->pc = 0x441AC8u;
    {
        const bool branch_taken_0x441ac8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x441ac8) {
            ctx->pc = 0x441AE4u;
            goto label_441ae4;
        }
    }
    ctx->pc = 0x441AD0u;
label_441ad0:
    // 0x441ad0: 0xc075eb4  jal         func_1D7AD0
label_441ad4:
    if (ctx->pc == 0x441AD4u) {
        ctx->pc = 0x441AD8u;
        goto label_441ad8;
    }
    ctx->pc = 0x441AD0u;
    SET_GPR_U32(ctx, 31, 0x441AD8u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441AD8u; }
        if (ctx->pc != 0x441AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441AD8u; }
        if (ctx->pc != 0x441AD8u) { return; }
    }
    ctx->pc = 0x441AD8u;
label_441ad8:
    // 0x441ad8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_441adc:
    if (ctx->pc == 0x441ADCu) {
        ctx->pc = 0x441AE0u;
        goto label_441ae0;
    }
    ctx->pc = 0x441AD8u;
    {
        const bool branch_taken_0x441ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x441ad8) {
            ctx->pc = 0x441AE4u;
            goto label_441ae4;
        }
    }
    ctx->pc = 0x441AE0u;
label_441ae0:
    // 0x441ae0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x441ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_441ae4:
    // 0x441ae4: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
label_441ae8:
    if (ctx->pc == 0x441AE8u) {
        ctx->pc = 0x441AE8u;
            // 0x441ae8: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x441AECu;
        goto label_441aec;
    }
    ctx->pc = 0x441AE4u;
    {
        const bool branch_taken_0x441ae4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x441ae4) {
            ctx->pc = 0x441AE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441AE4u;
            // 0x441ae8: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441B04u;
            goto label_441b04;
        }
    }
    ctx->pc = 0x441AECu;
label_441aec:
    // 0x441aec: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x441aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_441af0:
    // 0x441af0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x441af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_441af4:
    // 0x441af4: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x441af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_441af8:
    // 0x441af8: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_441afc:
    if (ctx->pc == 0x441AFCu) {
        ctx->pc = 0x441AFCu;
            // 0x441afc: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x441B00u;
        goto label_441b00;
    }
    ctx->pc = 0x441AF8u;
    {
        const bool branch_taken_0x441af8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x441af8) {
            ctx->pc = 0x441AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441AF8u;
            // 0x441afc: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441B1Cu;
            goto label_441b1c;
        }
    }
    ctx->pc = 0x441B00u;
label_441b00:
    // 0x441b00: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x441b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_441b04:
    // 0x441b04: 0xc10c9d8  jal         func_432760
label_441b08:
    if (ctx->pc == 0x441B08u) {
        ctx->pc = 0x441B0Cu;
        goto label_441b0c;
    }
    ctx->pc = 0x441B04u;
    SET_GPR_U32(ctx, 31, 0x441B0Cu);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441B0Cu; }
        if (ctx->pc != 0x441B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441B0Cu; }
        if (ctx->pc != 0x441B0Cu) { return; }
    }
    ctx->pc = 0x441B0Cu;
label_441b0c:
    // 0x441b0c: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x441b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_441b10:
    // 0x441b10: 0xc10c990  jal         func_432640
label_441b14:
    if (ctx->pc == 0x441B14u) {
        ctx->pc = 0x441B14u;
            // 0x441b14: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x441B18u;
        goto label_441b18;
    }
    ctx->pc = 0x441B10u;
    SET_GPR_U32(ctx, 31, 0x441B18u);
    ctx->pc = 0x441B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441B10u;
            // 0x441b14: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432640u;
    if (runtime->hasFunction(0x432640u)) {
        auto targetFn = runtime->lookupFunction(0x432640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441B18u; }
        if (ctx->pc != 0x441B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432640_0x432640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441B18u; }
        if (ctx->pc != 0x441B18u) { return; }
    }
    ctx->pc = 0x441B18u;
label_441b18:
    // 0x441b18: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x441b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_441b1c:
    // 0x441b1c: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_441b20:
    if (ctx->pc == 0x441B20u) {
        ctx->pc = 0x441B20u;
            // 0x441b20: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x441B24u;
        goto label_441b24;
    }
    ctx->pc = 0x441B1Cu;
    {
        const bool branch_taken_0x441b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x441b1c) {
            ctx->pc = 0x441B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441B1Cu;
            // 0x441b20: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441B70u;
            goto label_441b70;
        }
    }
    ctx->pc = 0x441B24u;
label_441b24:
    // 0x441b24: 0xc040180  jal         func_100600
label_441b28:
    if (ctx->pc == 0x441B28u) {
        ctx->pc = 0x441B28u;
            // 0x441b28: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x441B2Cu;
        goto label_441b2c;
    }
    ctx->pc = 0x441B24u;
    SET_GPR_U32(ctx, 31, 0x441B2Cu);
    ctx->pc = 0x441B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441B24u;
            // 0x441b28: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441B2Cu; }
        if (ctx->pc != 0x441B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441B2Cu; }
        if (ctx->pc != 0x441B2Cu) { return; }
    }
    ctx->pc = 0x441B2Cu;
label_441b2c:
    // 0x441b2c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_441b30:
    if (ctx->pc == 0x441B30u) {
        ctx->pc = 0x441B30u;
            // 0x441b30: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441B34u;
        goto label_441b34;
    }
    ctx->pc = 0x441B2Cu;
    {
        const bool branch_taken_0x441b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x441B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441B2Cu;
            // 0x441b30: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441b2c) {
            ctx->pc = 0x441B68u;
            goto label_441b68;
        }
    }
    ctx->pc = 0x441B34u;
label_441b34:
    // 0x441b34: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x441b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_441b38:
    // 0x441b38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x441b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_441b3c:
    // 0x441b3c: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x441b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_441b40:
    // 0x441b40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x441b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_441b44:
    // 0x441b44: 0xc10ca68  jal         func_4329A0
label_441b48:
    if (ctx->pc == 0x441B48u) {
        ctx->pc = 0x441B48u;
            // 0x441b48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441B4Cu;
        goto label_441b4c;
    }
    ctx->pc = 0x441B44u;
    SET_GPR_U32(ctx, 31, 0x441B4Cu);
    ctx->pc = 0x441B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441B44u;
            // 0x441b48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441B4Cu; }
        if (ctx->pc != 0x441B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441B4Cu; }
        if (ctx->pc != 0x441B4Cu) { return; }
    }
    ctx->pc = 0x441B4Cu;
label_441b4c:
    // 0x441b4c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x441b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_441b50:
    // 0x441b50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x441b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_441b54:
    // 0x441b54: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x441b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_441b58:
    // 0x441b58: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x441b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_441b5c:
    // 0x441b5c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x441b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_441b60:
    // 0x441b60: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x441b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_441b64:
    // 0x441b64: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x441b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_441b68:
    // 0x441b68: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x441b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_441b6c:
    // 0x441b6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x441b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_441b70:
    // 0x441b70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x441b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_441b74:
    // 0x441b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x441b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_441b78:
    // 0x441b78: 0x3e00008  jr          $ra
label_441b7c:
    if (ctx->pc == 0x441B7Cu) {
        ctx->pc = 0x441B7Cu;
            // 0x441b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x441B80u;
        goto label_441b80;
    }
    ctx->pc = 0x441B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441B78u;
            // 0x441b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441B80u;
label_441b80:
    // 0x441b80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x441b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_441b84:
    // 0x441b84: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x441b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_441b88:
    // 0x441b88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x441b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_441b8c:
    // 0x441b8c: 0x24a5ce30  addiu       $a1, $a1, -0x31D0
    ctx->pc = 0x441b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
label_441b90:
    // 0x441b90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x441b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_441b94:
    // 0x441b94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x441b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_441b98:
    // 0x441b98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x441b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_441b9c:
    // 0x441b9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x441b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_441ba0:
    // 0x441ba0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x441ba0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_441ba4:
    // 0x441ba4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x441ba4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_441ba8:
    // 0x441ba8: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x441ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_441bac:
    // 0x441bac: 0xc075728  jal         func_1D5CA0
label_441bb0:
    if (ctx->pc == 0x441BB0u) {
        ctx->pc = 0x441BB0u;
            // 0x441bb0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441BB4u;
        goto label_441bb4;
    }
    ctx->pc = 0x441BACu;
    SET_GPR_U32(ctx, 31, 0x441BB4u);
    ctx->pc = 0x441BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441BACu;
            // 0x441bb0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441BB4u; }
        if (ctx->pc != 0x441BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441BB4u; }
        if (ctx->pc != 0x441BB4u) { return; }
    }
    ctx->pc = 0x441BB4u;
label_441bb4:
    // 0x441bb4: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
label_441bb8:
    if (ctx->pc == 0x441BB8u) {
        ctx->pc = 0x441BB8u;
            // 0x441bb8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x441BBCu;
        goto label_441bbc;
    }
    ctx->pc = 0x441BB4u;
    {
        const bool branch_taken_0x441bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x441bb4) {
            ctx->pc = 0x441BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441BB4u;
            // 0x441bb8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441D28u;
            goto label_441d28;
        }
    }
    ctx->pc = 0x441BBCu;
label_441bbc:
    // 0x441bbc: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x441bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_441bc0:
    // 0x441bc0: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x441bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_441bc4:
    // 0x441bc4: 0x8e320d6c  lw          $s2, 0xD6C($s1)
    ctx->pc = 0x441bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_441bc8:
    // 0x441bc8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x441bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_441bcc:
    // 0x441bcc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x441bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_441bd0:
    // 0x441bd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x441bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_441bd4:
    // 0x441bd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x441bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_441bd8:
    // 0x441bd8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x441bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_441bdc:
    // 0x441bdc: 0x320f809  jalr        $t9
label_441be0:
    if (ctx->pc == 0x441BE0u) {
        ctx->pc = 0x441BE0u;
            // 0x441be0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441BE4u;
        goto label_441be4;
    }
    ctx->pc = 0x441BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x441BE4u);
        ctx->pc = 0x441BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441BDCu;
            // 0x441be0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x441BE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x441BE4u; }
            if (ctx->pc != 0x441BE4u) { return; }
        }
        }
    }
    ctx->pc = 0x441BE4u;
label_441be4:
    // 0x441be4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x441be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_441be8:
    // 0x441be8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x441be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_441bec:
    // 0x441bec: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x441becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_441bf0:
    // 0x441bf0: 0xc6230dbc  lwc1        $f3, 0xDBC($s1)
    ctx->pc = 0x441bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_441bf4:
    // 0x441bf4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x441bf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_441bf8:
    // 0x441bf8: 0xc4840018  lwc1        $f4, 0x18($a0)
    ctx->pc = 0x441bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_441bfc:
    // 0x441bfc: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x441bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_441c00:
    // 0x441c00: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x441c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_441c04:
    // 0x441c04: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x441c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_441c08:
    // 0x441c08: 0x0  nop
    ctx->pc = 0x441c08u;
    // NOP
label_441c0c:
    // 0x441c0c: 0x46032182  mul.s       $f6, $f4, $f3
    ctx->pc = 0x441c0cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_441c10:
    // 0x441c10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x441c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_441c14:
    // 0x441c14: 0xc6640024  lwc1        $f4, 0x24($s3)
    ctx->pc = 0x441c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_441c18:
    // 0x441c18: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x441c18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_441c1c:
    // 0x441c1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x441c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_441c20:
    // 0x441c20: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x441c20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_441c24:
    // 0x441c24: 0x46062d5c  madd.s      $f21, $f5, $f6
    ctx->pc = 0x441c24u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
label_441c28:
    // 0x441c28: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x441c28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_441c2c:
    // 0x441c2c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x441c2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_441c30:
    // 0x441c30: 0x4600151d  msub.s      $f20, $f2, $f0
    ctx->pc = 0x441c30u;
    ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_441c34:
    // 0x441c34: 0xc0477a8  jal         func_11DEA0
label_441c38:
    if (ctx->pc == 0x441C38u) {
        ctx->pc = 0x441C38u;
            // 0x441c38: 0xe6750024  swc1        $f21, 0x24($s3) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
        ctx->pc = 0x441C3Cu;
        goto label_441c3c;
    }
    ctx->pc = 0x441C34u;
    SET_GPR_U32(ctx, 31, 0x441C3Cu);
    ctx->pc = 0x441C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441C34u;
            // 0x441c38: 0xe6750024  swc1        $f21, 0x24($s3) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441C3Cu; }
        if (ctx->pc != 0x441C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441C3Cu; }
        if (ctx->pc != 0x441C3Cu) { return; }
    }
    ctx->pc = 0x441C3Cu;
label_441c3c:
    // 0x441c3c: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x441c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_441c40:
    // 0x441c40: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x441c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_441c44:
    // 0x441c44: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x441c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_441c48:
    // 0x441c48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x441c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_441c4c:
    // 0x441c4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x441c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_441c50:
    // 0x441c50: 0x0  nop
    ctx->pc = 0x441c50u;
    // NOP
label_441c54:
    // 0x441c54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x441c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_441c58:
    // 0x441c58: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x441c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_441c5c:
    // 0x441c5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x441c5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_441c60:
    // 0x441c60: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x441c60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_441c64:
    // 0x441c64: 0xc04cab0  jal         func_132AC0
label_441c68:
    if (ctx->pc == 0x441C68u) {
        ctx->pc = 0x441C68u;
            // 0x441c68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441C6Cu;
        goto label_441c6c;
    }
    ctx->pc = 0x441C64u;
    SET_GPR_U32(ctx, 31, 0x441C6Cu);
    ctx->pc = 0x441C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441C64u;
            // 0x441c68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441C6Cu; }
        if (ctx->pc != 0x441C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441C6Cu; }
        if (ctx->pc != 0x441C6Cu) { return; }
    }
    ctx->pc = 0x441C6Cu;
label_441c6c:
    // 0x441c6c: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x441c6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_441c70:
    // 0x441c70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x441c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_441c74:
    // 0x441c74: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x441c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_441c78:
    // 0x441c78: 0x320f809  jalr        $t9
label_441c7c:
    if (ctx->pc == 0x441C7Cu) {
        ctx->pc = 0x441C7Cu;
            // 0x441c7c: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x441C80u;
        goto label_441c80;
    }
    ctx->pc = 0x441C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x441C80u);
        ctx->pc = 0x441C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441C78u;
            // 0x441c7c: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x441C80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x441C80u; }
            if (ctx->pc != 0x441C80u) { return; }
        }
        }
    }
    ctx->pc = 0x441C80u;
label_441c80:
    // 0x441c80: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x441c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_441c84:
    // 0x441c84: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x441c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_441c88:
    // 0x441c88: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x441c88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_441c8c:
    // 0x441c8c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x441c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_441c90:
    // 0x441c90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x441c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_441c94:
    // 0x441c94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x441c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_441c98:
    // 0x441c98: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x441c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_441c9c:
    // 0x441c9c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x441c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_441ca0:
    // 0x441ca0: 0xc04c72c  jal         func_131CB0
label_441ca4:
    if (ctx->pc == 0x441CA4u) {
        ctx->pc = 0x441CA4u;
            // 0x441ca4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441CA8u;
        goto label_441ca8;
    }
    ctx->pc = 0x441CA0u;
    SET_GPR_U32(ctx, 31, 0x441CA8u);
    ctx->pc = 0x441CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441CA0u;
            // 0x441ca4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441CA8u; }
        if (ctx->pc != 0x441CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441CA8u; }
        if (ctx->pc != 0x441CA8u) { return; }
    }
    ctx->pc = 0x441CA8u;
label_441ca8:
    // 0x441ca8: 0x3c02c160  lui         $v0, 0xC160
    ctx->pc = 0x441ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49504 << 16));
label_441cac:
    // 0x441cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x441cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_441cb0:
    // 0x441cb0: 0xc0477a8  jal         func_11DEA0
label_441cb4:
    if (ctx->pc == 0x441CB4u) {
        ctx->pc = 0x441CB4u;
            // 0x441cb4: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x441CB8u;
        goto label_441cb8;
    }
    ctx->pc = 0x441CB0u;
    SET_GPR_U32(ctx, 31, 0x441CB8u);
    ctx->pc = 0x441CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441CB0u;
            // 0x441cb4: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441CB8u; }
        if (ctx->pc != 0x441CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441CB8u; }
        if (ctx->pc != 0x441CB8u) { return; }
    }
    ctx->pc = 0x441CB8u;
label_441cb8:
    // 0x441cb8: 0x3c0245e3  lui         $v0, 0x45E3
    ctx->pc = 0x441cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17891 << 16));
label_441cbc:
    // 0x441cbc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x441cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_441cc0:
    // 0x441cc0: 0x34428800  ori         $v0, $v0, 0x8800
    ctx->pc = 0x441cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34816);
label_441cc4:
    // 0x441cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x441cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_441cc8:
    // 0x441cc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x441cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_441ccc:
    // 0x441ccc: 0x0  nop
    ctx->pc = 0x441cccu;
    // NOP
label_441cd0:
    // 0x441cd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x441cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_441cd4:
    // 0x441cd4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x441cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_441cd8:
    // 0x441cd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x441cd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_441cdc:
    // 0x441cdc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x441cdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_441ce0:
    // 0x441ce0: 0xc04cab0  jal         func_132AC0
label_441ce4:
    if (ctx->pc == 0x441CE4u) {
        ctx->pc = 0x441CE4u;
            // 0x441ce4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441CE8u;
        goto label_441ce8;
    }
    ctx->pc = 0x441CE0u;
    SET_GPR_U32(ctx, 31, 0x441CE8u);
    ctx->pc = 0x441CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441CE0u;
            // 0x441ce4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441CE8u; }
        if (ctx->pc != 0x441CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441CE8u; }
        if (ctx->pc != 0x441CE8u) { return; }
    }
    ctx->pc = 0x441CE8u;
label_441ce8:
    // 0x441ce8: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x441ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_441cec:
    // 0x441cec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x441cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_441cf0:
    // 0x441cf0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x441cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_441cf4:
    // 0x441cf4: 0x320f809  jalr        $t9
label_441cf8:
    if (ctx->pc == 0x441CF8u) {
        ctx->pc = 0x441CF8u;
            // 0x441cf8: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->pc = 0x441CFCu;
        goto label_441cfc;
    }
    ctx->pc = 0x441CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x441CFCu);
        ctx->pc = 0x441CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441CF4u;
            // 0x441cf8: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x441CFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x441CFCu; }
            if (ctx->pc != 0x441CFCu) { return; }
        }
        }
    }
    ctx->pc = 0x441CFCu;
label_441cfc:
    // 0x441cfc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x441cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_441d00:
    // 0x441d00: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x441d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_441d04:
    // 0x441d04: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x441d04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_441d08:
    // 0x441d08: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x441d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_441d0c:
    // 0x441d0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x441d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_441d10:
    // 0x441d10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x441d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_441d14:
    // 0x441d14: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x441d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_441d18:
    // 0x441d18: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x441d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_441d1c:
    // 0x441d1c: 0xc04c72c  jal         func_131CB0
label_441d20:
    if (ctx->pc == 0x441D20u) {
        ctx->pc = 0x441D20u;
            // 0x441d20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x441D24u;
        goto label_441d24;
    }
    ctx->pc = 0x441D1Cu;
    SET_GPR_U32(ctx, 31, 0x441D24u);
    ctx->pc = 0x441D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x441D1Cu;
            // 0x441d20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441D24u; }
        if (ctx->pc != 0x441D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441D24u; }
        if (ctx->pc != 0x441D24u) { return; }
    }
    ctx->pc = 0x441D24u;
label_441d24:
    // 0x441d24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x441d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_441d28:
    // 0x441d28: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x441d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_441d2c:
    // 0x441d2c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x441d2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_441d30:
    // 0x441d30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x441d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_441d34:
    // 0x441d34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x441d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_441d38:
    // 0x441d38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x441d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_441d3c:
    // 0x441d3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x441d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_441d40:
    // 0x441d40: 0x3e00008  jr          $ra
label_441d44:
    if (ctx->pc == 0x441D44u) {
        ctx->pc = 0x441D44u;
            // 0x441d44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x441D48u;
        goto label_441d48;
    }
    ctx->pc = 0x441D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441D40u;
            // 0x441d44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441D48u;
label_441d48:
    // 0x441d48: 0x0  nop
    ctx->pc = 0x441d48u;
    // NOP
label_441d4c:
    // 0x441d4c: 0x0  nop
    ctx->pc = 0x441d4cu;
    // NOP
}
