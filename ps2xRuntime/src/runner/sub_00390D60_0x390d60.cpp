#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00390D60
// Address: 0x390d60 - 0x3917f0
void sub_00390D60_0x390d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390D60_0x390d60");
#endif

    switch (ctx->pc) {
        case 0x390d60u: goto label_390d60;
        case 0x390d64u: goto label_390d64;
        case 0x390d68u: goto label_390d68;
        case 0x390d6cu: goto label_390d6c;
        case 0x390d70u: goto label_390d70;
        case 0x390d74u: goto label_390d74;
        case 0x390d78u: goto label_390d78;
        case 0x390d7cu: goto label_390d7c;
        case 0x390d80u: goto label_390d80;
        case 0x390d84u: goto label_390d84;
        case 0x390d88u: goto label_390d88;
        case 0x390d8cu: goto label_390d8c;
        case 0x390d90u: goto label_390d90;
        case 0x390d94u: goto label_390d94;
        case 0x390d98u: goto label_390d98;
        case 0x390d9cu: goto label_390d9c;
        case 0x390da0u: goto label_390da0;
        case 0x390da4u: goto label_390da4;
        case 0x390da8u: goto label_390da8;
        case 0x390dacu: goto label_390dac;
        case 0x390db0u: goto label_390db0;
        case 0x390db4u: goto label_390db4;
        case 0x390db8u: goto label_390db8;
        case 0x390dbcu: goto label_390dbc;
        case 0x390dc0u: goto label_390dc0;
        case 0x390dc4u: goto label_390dc4;
        case 0x390dc8u: goto label_390dc8;
        case 0x390dccu: goto label_390dcc;
        case 0x390dd0u: goto label_390dd0;
        case 0x390dd4u: goto label_390dd4;
        case 0x390dd8u: goto label_390dd8;
        case 0x390ddcu: goto label_390ddc;
        case 0x390de0u: goto label_390de0;
        case 0x390de4u: goto label_390de4;
        case 0x390de8u: goto label_390de8;
        case 0x390decu: goto label_390dec;
        case 0x390df0u: goto label_390df0;
        case 0x390df4u: goto label_390df4;
        case 0x390df8u: goto label_390df8;
        case 0x390dfcu: goto label_390dfc;
        case 0x390e00u: goto label_390e00;
        case 0x390e04u: goto label_390e04;
        case 0x390e08u: goto label_390e08;
        case 0x390e0cu: goto label_390e0c;
        case 0x390e10u: goto label_390e10;
        case 0x390e14u: goto label_390e14;
        case 0x390e18u: goto label_390e18;
        case 0x390e1cu: goto label_390e1c;
        case 0x390e20u: goto label_390e20;
        case 0x390e24u: goto label_390e24;
        case 0x390e28u: goto label_390e28;
        case 0x390e2cu: goto label_390e2c;
        case 0x390e30u: goto label_390e30;
        case 0x390e34u: goto label_390e34;
        case 0x390e38u: goto label_390e38;
        case 0x390e3cu: goto label_390e3c;
        case 0x390e40u: goto label_390e40;
        case 0x390e44u: goto label_390e44;
        case 0x390e48u: goto label_390e48;
        case 0x390e4cu: goto label_390e4c;
        case 0x390e50u: goto label_390e50;
        case 0x390e54u: goto label_390e54;
        case 0x390e58u: goto label_390e58;
        case 0x390e5cu: goto label_390e5c;
        case 0x390e60u: goto label_390e60;
        case 0x390e64u: goto label_390e64;
        case 0x390e68u: goto label_390e68;
        case 0x390e6cu: goto label_390e6c;
        case 0x390e70u: goto label_390e70;
        case 0x390e74u: goto label_390e74;
        case 0x390e78u: goto label_390e78;
        case 0x390e7cu: goto label_390e7c;
        case 0x390e80u: goto label_390e80;
        case 0x390e84u: goto label_390e84;
        case 0x390e88u: goto label_390e88;
        case 0x390e8cu: goto label_390e8c;
        case 0x390e90u: goto label_390e90;
        case 0x390e94u: goto label_390e94;
        case 0x390e98u: goto label_390e98;
        case 0x390e9cu: goto label_390e9c;
        case 0x390ea0u: goto label_390ea0;
        case 0x390ea4u: goto label_390ea4;
        case 0x390ea8u: goto label_390ea8;
        case 0x390eacu: goto label_390eac;
        case 0x390eb0u: goto label_390eb0;
        case 0x390eb4u: goto label_390eb4;
        case 0x390eb8u: goto label_390eb8;
        case 0x390ebcu: goto label_390ebc;
        case 0x390ec0u: goto label_390ec0;
        case 0x390ec4u: goto label_390ec4;
        case 0x390ec8u: goto label_390ec8;
        case 0x390eccu: goto label_390ecc;
        case 0x390ed0u: goto label_390ed0;
        case 0x390ed4u: goto label_390ed4;
        case 0x390ed8u: goto label_390ed8;
        case 0x390edcu: goto label_390edc;
        case 0x390ee0u: goto label_390ee0;
        case 0x390ee4u: goto label_390ee4;
        case 0x390ee8u: goto label_390ee8;
        case 0x390eecu: goto label_390eec;
        case 0x390ef0u: goto label_390ef0;
        case 0x390ef4u: goto label_390ef4;
        case 0x390ef8u: goto label_390ef8;
        case 0x390efcu: goto label_390efc;
        case 0x390f00u: goto label_390f00;
        case 0x390f04u: goto label_390f04;
        case 0x390f08u: goto label_390f08;
        case 0x390f0cu: goto label_390f0c;
        case 0x390f10u: goto label_390f10;
        case 0x390f14u: goto label_390f14;
        case 0x390f18u: goto label_390f18;
        case 0x390f1cu: goto label_390f1c;
        case 0x390f20u: goto label_390f20;
        case 0x390f24u: goto label_390f24;
        case 0x390f28u: goto label_390f28;
        case 0x390f2cu: goto label_390f2c;
        case 0x390f30u: goto label_390f30;
        case 0x390f34u: goto label_390f34;
        case 0x390f38u: goto label_390f38;
        case 0x390f3cu: goto label_390f3c;
        case 0x390f40u: goto label_390f40;
        case 0x390f44u: goto label_390f44;
        case 0x390f48u: goto label_390f48;
        case 0x390f4cu: goto label_390f4c;
        case 0x390f50u: goto label_390f50;
        case 0x390f54u: goto label_390f54;
        case 0x390f58u: goto label_390f58;
        case 0x390f5cu: goto label_390f5c;
        case 0x390f60u: goto label_390f60;
        case 0x390f64u: goto label_390f64;
        case 0x390f68u: goto label_390f68;
        case 0x390f6cu: goto label_390f6c;
        case 0x390f70u: goto label_390f70;
        case 0x390f74u: goto label_390f74;
        case 0x390f78u: goto label_390f78;
        case 0x390f7cu: goto label_390f7c;
        case 0x390f80u: goto label_390f80;
        case 0x390f84u: goto label_390f84;
        case 0x390f88u: goto label_390f88;
        case 0x390f8cu: goto label_390f8c;
        case 0x390f90u: goto label_390f90;
        case 0x390f94u: goto label_390f94;
        case 0x390f98u: goto label_390f98;
        case 0x390f9cu: goto label_390f9c;
        case 0x390fa0u: goto label_390fa0;
        case 0x390fa4u: goto label_390fa4;
        case 0x390fa8u: goto label_390fa8;
        case 0x390facu: goto label_390fac;
        case 0x390fb0u: goto label_390fb0;
        case 0x390fb4u: goto label_390fb4;
        case 0x390fb8u: goto label_390fb8;
        case 0x390fbcu: goto label_390fbc;
        case 0x390fc0u: goto label_390fc0;
        case 0x390fc4u: goto label_390fc4;
        case 0x390fc8u: goto label_390fc8;
        case 0x390fccu: goto label_390fcc;
        case 0x390fd0u: goto label_390fd0;
        case 0x390fd4u: goto label_390fd4;
        case 0x390fd8u: goto label_390fd8;
        case 0x390fdcu: goto label_390fdc;
        case 0x390fe0u: goto label_390fe0;
        case 0x390fe4u: goto label_390fe4;
        case 0x390fe8u: goto label_390fe8;
        case 0x390fecu: goto label_390fec;
        case 0x390ff0u: goto label_390ff0;
        case 0x390ff4u: goto label_390ff4;
        case 0x390ff8u: goto label_390ff8;
        case 0x390ffcu: goto label_390ffc;
        case 0x391000u: goto label_391000;
        case 0x391004u: goto label_391004;
        case 0x391008u: goto label_391008;
        case 0x39100cu: goto label_39100c;
        case 0x391010u: goto label_391010;
        case 0x391014u: goto label_391014;
        case 0x391018u: goto label_391018;
        case 0x39101cu: goto label_39101c;
        case 0x391020u: goto label_391020;
        case 0x391024u: goto label_391024;
        case 0x391028u: goto label_391028;
        case 0x39102cu: goto label_39102c;
        case 0x391030u: goto label_391030;
        case 0x391034u: goto label_391034;
        case 0x391038u: goto label_391038;
        case 0x39103cu: goto label_39103c;
        case 0x391040u: goto label_391040;
        case 0x391044u: goto label_391044;
        case 0x391048u: goto label_391048;
        case 0x39104cu: goto label_39104c;
        case 0x391050u: goto label_391050;
        case 0x391054u: goto label_391054;
        case 0x391058u: goto label_391058;
        case 0x39105cu: goto label_39105c;
        case 0x391060u: goto label_391060;
        case 0x391064u: goto label_391064;
        case 0x391068u: goto label_391068;
        case 0x39106cu: goto label_39106c;
        case 0x391070u: goto label_391070;
        case 0x391074u: goto label_391074;
        case 0x391078u: goto label_391078;
        case 0x39107cu: goto label_39107c;
        case 0x391080u: goto label_391080;
        case 0x391084u: goto label_391084;
        case 0x391088u: goto label_391088;
        case 0x39108cu: goto label_39108c;
        case 0x391090u: goto label_391090;
        case 0x391094u: goto label_391094;
        case 0x391098u: goto label_391098;
        case 0x39109cu: goto label_39109c;
        case 0x3910a0u: goto label_3910a0;
        case 0x3910a4u: goto label_3910a4;
        case 0x3910a8u: goto label_3910a8;
        case 0x3910acu: goto label_3910ac;
        case 0x3910b0u: goto label_3910b0;
        case 0x3910b4u: goto label_3910b4;
        case 0x3910b8u: goto label_3910b8;
        case 0x3910bcu: goto label_3910bc;
        case 0x3910c0u: goto label_3910c0;
        case 0x3910c4u: goto label_3910c4;
        case 0x3910c8u: goto label_3910c8;
        case 0x3910ccu: goto label_3910cc;
        case 0x3910d0u: goto label_3910d0;
        case 0x3910d4u: goto label_3910d4;
        case 0x3910d8u: goto label_3910d8;
        case 0x3910dcu: goto label_3910dc;
        case 0x3910e0u: goto label_3910e0;
        case 0x3910e4u: goto label_3910e4;
        case 0x3910e8u: goto label_3910e8;
        case 0x3910ecu: goto label_3910ec;
        case 0x3910f0u: goto label_3910f0;
        case 0x3910f4u: goto label_3910f4;
        case 0x3910f8u: goto label_3910f8;
        case 0x3910fcu: goto label_3910fc;
        case 0x391100u: goto label_391100;
        case 0x391104u: goto label_391104;
        case 0x391108u: goto label_391108;
        case 0x39110cu: goto label_39110c;
        case 0x391110u: goto label_391110;
        case 0x391114u: goto label_391114;
        case 0x391118u: goto label_391118;
        case 0x39111cu: goto label_39111c;
        case 0x391120u: goto label_391120;
        case 0x391124u: goto label_391124;
        case 0x391128u: goto label_391128;
        case 0x39112cu: goto label_39112c;
        case 0x391130u: goto label_391130;
        case 0x391134u: goto label_391134;
        case 0x391138u: goto label_391138;
        case 0x39113cu: goto label_39113c;
        case 0x391140u: goto label_391140;
        case 0x391144u: goto label_391144;
        case 0x391148u: goto label_391148;
        case 0x39114cu: goto label_39114c;
        case 0x391150u: goto label_391150;
        case 0x391154u: goto label_391154;
        case 0x391158u: goto label_391158;
        case 0x39115cu: goto label_39115c;
        case 0x391160u: goto label_391160;
        case 0x391164u: goto label_391164;
        case 0x391168u: goto label_391168;
        case 0x39116cu: goto label_39116c;
        case 0x391170u: goto label_391170;
        case 0x391174u: goto label_391174;
        case 0x391178u: goto label_391178;
        case 0x39117cu: goto label_39117c;
        case 0x391180u: goto label_391180;
        case 0x391184u: goto label_391184;
        case 0x391188u: goto label_391188;
        case 0x39118cu: goto label_39118c;
        case 0x391190u: goto label_391190;
        case 0x391194u: goto label_391194;
        case 0x391198u: goto label_391198;
        case 0x39119cu: goto label_39119c;
        case 0x3911a0u: goto label_3911a0;
        case 0x3911a4u: goto label_3911a4;
        case 0x3911a8u: goto label_3911a8;
        case 0x3911acu: goto label_3911ac;
        case 0x3911b0u: goto label_3911b0;
        case 0x3911b4u: goto label_3911b4;
        case 0x3911b8u: goto label_3911b8;
        case 0x3911bcu: goto label_3911bc;
        case 0x3911c0u: goto label_3911c0;
        case 0x3911c4u: goto label_3911c4;
        case 0x3911c8u: goto label_3911c8;
        case 0x3911ccu: goto label_3911cc;
        case 0x3911d0u: goto label_3911d0;
        case 0x3911d4u: goto label_3911d4;
        case 0x3911d8u: goto label_3911d8;
        case 0x3911dcu: goto label_3911dc;
        case 0x3911e0u: goto label_3911e0;
        case 0x3911e4u: goto label_3911e4;
        case 0x3911e8u: goto label_3911e8;
        case 0x3911ecu: goto label_3911ec;
        case 0x3911f0u: goto label_3911f0;
        case 0x3911f4u: goto label_3911f4;
        case 0x3911f8u: goto label_3911f8;
        case 0x3911fcu: goto label_3911fc;
        case 0x391200u: goto label_391200;
        case 0x391204u: goto label_391204;
        case 0x391208u: goto label_391208;
        case 0x39120cu: goto label_39120c;
        case 0x391210u: goto label_391210;
        case 0x391214u: goto label_391214;
        case 0x391218u: goto label_391218;
        case 0x39121cu: goto label_39121c;
        case 0x391220u: goto label_391220;
        case 0x391224u: goto label_391224;
        case 0x391228u: goto label_391228;
        case 0x39122cu: goto label_39122c;
        case 0x391230u: goto label_391230;
        case 0x391234u: goto label_391234;
        case 0x391238u: goto label_391238;
        case 0x39123cu: goto label_39123c;
        case 0x391240u: goto label_391240;
        case 0x391244u: goto label_391244;
        case 0x391248u: goto label_391248;
        case 0x39124cu: goto label_39124c;
        case 0x391250u: goto label_391250;
        case 0x391254u: goto label_391254;
        case 0x391258u: goto label_391258;
        case 0x39125cu: goto label_39125c;
        case 0x391260u: goto label_391260;
        case 0x391264u: goto label_391264;
        case 0x391268u: goto label_391268;
        case 0x39126cu: goto label_39126c;
        case 0x391270u: goto label_391270;
        case 0x391274u: goto label_391274;
        case 0x391278u: goto label_391278;
        case 0x39127cu: goto label_39127c;
        case 0x391280u: goto label_391280;
        case 0x391284u: goto label_391284;
        case 0x391288u: goto label_391288;
        case 0x39128cu: goto label_39128c;
        case 0x391290u: goto label_391290;
        case 0x391294u: goto label_391294;
        case 0x391298u: goto label_391298;
        case 0x39129cu: goto label_39129c;
        case 0x3912a0u: goto label_3912a0;
        case 0x3912a4u: goto label_3912a4;
        case 0x3912a8u: goto label_3912a8;
        case 0x3912acu: goto label_3912ac;
        case 0x3912b0u: goto label_3912b0;
        case 0x3912b4u: goto label_3912b4;
        case 0x3912b8u: goto label_3912b8;
        case 0x3912bcu: goto label_3912bc;
        case 0x3912c0u: goto label_3912c0;
        case 0x3912c4u: goto label_3912c4;
        case 0x3912c8u: goto label_3912c8;
        case 0x3912ccu: goto label_3912cc;
        case 0x3912d0u: goto label_3912d0;
        case 0x3912d4u: goto label_3912d4;
        case 0x3912d8u: goto label_3912d8;
        case 0x3912dcu: goto label_3912dc;
        case 0x3912e0u: goto label_3912e0;
        case 0x3912e4u: goto label_3912e4;
        case 0x3912e8u: goto label_3912e8;
        case 0x3912ecu: goto label_3912ec;
        case 0x3912f0u: goto label_3912f0;
        case 0x3912f4u: goto label_3912f4;
        case 0x3912f8u: goto label_3912f8;
        case 0x3912fcu: goto label_3912fc;
        case 0x391300u: goto label_391300;
        case 0x391304u: goto label_391304;
        case 0x391308u: goto label_391308;
        case 0x39130cu: goto label_39130c;
        case 0x391310u: goto label_391310;
        case 0x391314u: goto label_391314;
        case 0x391318u: goto label_391318;
        case 0x39131cu: goto label_39131c;
        case 0x391320u: goto label_391320;
        case 0x391324u: goto label_391324;
        case 0x391328u: goto label_391328;
        case 0x39132cu: goto label_39132c;
        case 0x391330u: goto label_391330;
        case 0x391334u: goto label_391334;
        case 0x391338u: goto label_391338;
        case 0x39133cu: goto label_39133c;
        case 0x391340u: goto label_391340;
        case 0x391344u: goto label_391344;
        case 0x391348u: goto label_391348;
        case 0x39134cu: goto label_39134c;
        case 0x391350u: goto label_391350;
        case 0x391354u: goto label_391354;
        case 0x391358u: goto label_391358;
        case 0x39135cu: goto label_39135c;
        case 0x391360u: goto label_391360;
        case 0x391364u: goto label_391364;
        case 0x391368u: goto label_391368;
        case 0x39136cu: goto label_39136c;
        case 0x391370u: goto label_391370;
        case 0x391374u: goto label_391374;
        case 0x391378u: goto label_391378;
        case 0x39137cu: goto label_39137c;
        case 0x391380u: goto label_391380;
        case 0x391384u: goto label_391384;
        case 0x391388u: goto label_391388;
        case 0x39138cu: goto label_39138c;
        case 0x391390u: goto label_391390;
        case 0x391394u: goto label_391394;
        case 0x391398u: goto label_391398;
        case 0x39139cu: goto label_39139c;
        case 0x3913a0u: goto label_3913a0;
        case 0x3913a4u: goto label_3913a4;
        case 0x3913a8u: goto label_3913a8;
        case 0x3913acu: goto label_3913ac;
        case 0x3913b0u: goto label_3913b0;
        case 0x3913b4u: goto label_3913b4;
        case 0x3913b8u: goto label_3913b8;
        case 0x3913bcu: goto label_3913bc;
        case 0x3913c0u: goto label_3913c0;
        case 0x3913c4u: goto label_3913c4;
        case 0x3913c8u: goto label_3913c8;
        case 0x3913ccu: goto label_3913cc;
        case 0x3913d0u: goto label_3913d0;
        case 0x3913d4u: goto label_3913d4;
        case 0x3913d8u: goto label_3913d8;
        case 0x3913dcu: goto label_3913dc;
        case 0x3913e0u: goto label_3913e0;
        case 0x3913e4u: goto label_3913e4;
        case 0x3913e8u: goto label_3913e8;
        case 0x3913ecu: goto label_3913ec;
        case 0x3913f0u: goto label_3913f0;
        case 0x3913f4u: goto label_3913f4;
        case 0x3913f8u: goto label_3913f8;
        case 0x3913fcu: goto label_3913fc;
        case 0x391400u: goto label_391400;
        case 0x391404u: goto label_391404;
        case 0x391408u: goto label_391408;
        case 0x39140cu: goto label_39140c;
        case 0x391410u: goto label_391410;
        case 0x391414u: goto label_391414;
        case 0x391418u: goto label_391418;
        case 0x39141cu: goto label_39141c;
        case 0x391420u: goto label_391420;
        case 0x391424u: goto label_391424;
        case 0x391428u: goto label_391428;
        case 0x39142cu: goto label_39142c;
        case 0x391430u: goto label_391430;
        case 0x391434u: goto label_391434;
        case 0x391438u: goto label_391438;
        case 0x39143cu: goto label_39143c;
        case 0x391440u: goto label_391440;
        case 0x391444u: goto label_391444;
        case 0x391448u: goto label_391448;
        case 0x39144cu: goto label_39144c;
        case 0x391450u: goto label_391450;
        case 0x391454u: goto label_391454;
        case 0x391458u: goto label_391458;
        case 0x39145cu: goto label_39145c;
        case 0x391460u: goto label_391460;
        case 0x391464u: goto label_391464;
        case 0x391468u: goto label_391468;
        case 0x39146cu: goto label_39146c;
        case 0x391470u: goto label_391470;
        case 0x391474u: goto label_391474;
        case 0x391478u: goto label_391478;
        case 0x39147cu: goto label_39147c;
        case 0x391480u: goto label_391480;
        case 0x391484u: goto label_391484;
        case 0x391488u: goto label_391488;
        case 0x39148cu: goto label_39148c;
        case 0x391490u: goto label_391490;
        case 0x391494u: goto label_391494;
        case 0x391498u: goto label_391498;
        case 0x39149cu: goto label_39149c;
        case 0x3914a0u: goto label_3914a0;
        case 0x3914a4u: goto label_3914a4;
        case 0x3914a8u: goto label_3914a8;
        case 0x3914acu: goto label_3914ac;
        case 0x3914b0u: goto label_3914b0;
        case 0x3914b4u: goto label_3914b4;
        case 0x3914b8u: goto label_3914b8;
        case 0x3914bcu: goto label_3914bc;
        case 0x3914c0u: goto label_3914c0;
        case 0x3914c4u: goto label_3914c4;
        case 0x3914c8u: goto label_3914c8;
        case 0x3914ccu: goto label_3914cc;
        case 0x3914d0u: goto label_3914d0;
        case 0x3914d4u: goto label_3914d4;
        case 0x3914d8u: goto label_3914d8;
        case 0x3914dcu: goto label_3914dc;
        case 0x3914e0u: goto label_3914e0;
        case 0x3914e4u: goto label_3914e4;
        case 0x3914e8u: goto label_3914e8;
        case 0x3914ecu: goto label_3914ec;
        case 0x3914f0u: goto label_3914f0;
        case 0x3914f4u: goto label_3914f4;
        case 0x3914f8u: goto label_3914f8;
        case 0x3914fcu: goto label_3914fc;
        case 0x391500u: goto label_391500;
        case 0x391504u: goto label_391504;
        case 0x391508u: goto label_391508;
        case 0x39150cu: goto label_39150c;
        case 0x391510u: goto label_391510;
        case 0x391514u: goto label_391514;
        case 0x391518u: goto label_391518;
        case 0x39151cu: goto label_39151c;
        case 0x391520u: goto label_391520;
        case 0x391524u: goto label_391524;
        case 0x391528u: goto label_391528;
        case 0x39152cu: goto label_39152c;
        case 0x391530u: goto label_391530;
        case 0x391534u: goto label_391534;
        case 0x391538u: goto label_391538;
        case 0x39153cu: goto label_39153c;
        case 0x391540u: goto label_391540;
        case 0x391544u: goto label_391544;
        case 0x391548u: goto label_391548;
        case 0x39154cu: goto label_39154c;
        case 0x391550u: goto label_391550;
        case 0x391554u: goto label_391554;
        case 0x391558u: goto label_391558;
        case 0x39155cu: goto label_39155c;
        case 0x391560u: goto label_391560;
        case 0x391564u: goto label_391564;
        case 0x391568u: goto label_391568;
        case 0x39156cu: goto label_39156c;
        case 0x391570u: goto label_391570;
        case 0x391574u: goto label_391574;
        case 0x391578u: goto label_391578;
        case 0x39157cu: goto label_39157c;
        case 0x391580u: goto label_391580;
        case 0x391584u: goto label_391584;
        case 0x391588u: goto label_391588;
        case 0x39158cu: goto label_39158c;
        case 0x391590u: goto label_391590;
        case 0x391594u: goto label_391594;
        case 0x391598u: goto label_391598;
        case 0x39159cu: goto label_39159c;
        case 0x3915a0u: goto label_3915a0;
        case 0x3915a4u: goto label_3915a4;
        case 0x3915a8u: goto label_3915a8;
        case 0x3915acu: goto label_3915ac;
        case 0x3915b0u: goto label_3915b0;
        case 0x3915b4u: goto label_3915b4;
        case 0x3915b8u: goto label_3915b8;
        case 0x3915bcu: goto label_3915bc;
        case 0x3915c0u: goto label_3915c0;
        case 0x3915c4u: goto label_3915c4;
        case 0x3915c8u: goto label_3915c8;
        case 0x3915ccu: goto label_3915cc;
        case 0x3915d0u: goto label_3915d0;
        case 0x3915d4u: goto label_3915d4;
        case 0x3915d8u: goto label_3915d8;
        case 0x3915dcu: goto label_3915dc;
        case 0x3915e0u: goto label_3915e0;
        case 0x3915e4u: goto label_3915e4;
        case 0x3915e8u: goto label_3915e8;
        case 0x3915ecu: goto label_3915ec;
        case 0x3915f0u: goto label_3915f0;
        case 0x3915f4u: goto label_3915f4;
        case 0x3915f8u: goto label_3915f8;
        case 0x3915fcu: goto label_3915fc;
        case 0x391600u: goto label_391600;
        case 0x391604u: goto label_391604;
        case 0x391608u: goto label_391608;
        case 0x39160cu: goto label_39160c;
        case 0x391610u: goto label_391610;
        case 0x391614u: goto label_391614;
        case 0x391618u: goto label_391618;
        case 0x39161cu: goto label_39161c;
        case 0x391620u: goto label_391620;
        case 0x391624u: goto label_391624;
        case 0x391628u: goto label_391628;
        case 0x39162cu: goto label_39162c;
        case 0x391630u: goto label_391630;
        case 0x391634u: goto label_391634;
        case 0x391638u: goto label_391638;
        case 0x39163cu: goto label_39163c;
        case 0x391640u: goto label_391640;
        case 0x391644u: goto label_391644;
        case 0x391648u: goto label_391648;
        case 0x39164cu: goto label_39164c;
        case 0x391650u: goto label_391650;
        case 0x391654u: goto label_391654;
        case 0x391658u: goto label_391658;
        case 0x39165cu: goto label_39165c;
        case 0x391660u: goto label_391660;
        case 0x391664u: goto label_391664;
        case 0x391668u: goto label_391668;
        case 0x39166cu: goto label_39166c;
        case 0x391670u: goto label_391670;
        case 0x391674u: goto label_391674;
        case 0x391678u: goto label_391678;
        case 0x39167cu: goto label_39167c;
        case 0x391680u: goto label_391680;
        case 0x391684u: goto label_391684;
        case 0x391688u: goto label_391688;
        case 0x39168cu: goto label_39168c;
        case 0x391690u: goto label_391690;
        case 0x391694u: goto label_391694;
        case 0x391698u: goto label_391698;
        case 0x39169cu: goto label_39169c;
        case 0x3916a0u: goto label_3916a0;
        case 0x3916a4u: goto label_3916a4;
        case 0x3916a8u: goto label_3916a8;
        case 0x3916acu: goto label_3916ac;
        case 0x3916b0u: goto label_3916b0;
        case 0x3916b4u: goto label_3916b4;
        case 0x3916b8u: goto label_3916b8;
        case 0x3916bcu: goto label_3916bc;
        case 0x3916c0u: goto label_3916c0;
        case 0x3916c4u: goto label_3916c4;
        case 0x3916c8u: goto label_3916c8;
        case 0x3916ccu: goto label_3916cc;
        case 0x3916d0u: goto label_3916d0;
        case 0x3916d4u: goto label_3916d4;
        case 0x3916d8u: goto label_3916d8;
        case 0x3916dcu: goto label_3916dc;
        case 0x3916e0u: goto label_3916e0;
        case 0x3916e4u: goto label_3916e4;
        case 0x3916e8u: goto label_3916e8;
        case 0x3916ecu: goto label_3916ec;
        case 0x3916f0u: goto label_3916f0;
        case 0x3916f4u: goto label_3916f4;
        case 0x3916f8u: goto label_3916f8;
        case 0x3916fcu: goto label_3916fc;
        case 0x391700u: goto label_391700;
        case 0x391704u: goto label_391704;
        case 0x391708u: goto label_391708;
        case 0x39170cu: goto label_39170c;
        case 0x391710u: goto label_391710;
        case 0x391714u: goto label_391714;
        case 0x391718u: goto label_391718;
        case 0x39171cu: goto label_39171c;
        case 0x391720u: goto label_391720;
        case 0x391724u: goto label_391724;
        case 0x391728u: goto label_391728;
        case 0x39172cu: goto label_39172c;
        case 0x391730u: goto label_391730;
        case 0x391734u: goto label_391734;
        case 0x391738u: goto label_391738;
        case 0x39173cu: goto label_39173c;
        case 0x391740u: goto label_391740;
        case 0x391744u: goto label_391744;
        case 0x391748u: goto label_391748;
        case 0x39174cu: goto label_39174c;
        case 0x391750u: goto label_391750;
        case 0x391754u: goto label_391754;
        case 0x391758u: goto label_391758;
        case 0x39175cu: goto label_39175c;
        case 0x391760u: goto label_391760;
        case 0x391764u: goto label_391764;
        case 0x391768u: goto label_391768;
        case 0x39176cu: goto label_39176c;
        case 0x391770u: goto label_391770;
        case 0x391774u: goto label_391774;
        case 0x391778u: goto label_391778;
        case 0x39177cu: goto label_39177c;
        case 0x391780u: goto label_391780;
        case 0x391784u: goto label_391784;
        case 0x391788u: goto label_391788;
        case 0x39178cu: goto label_39178c;
        case 0x391790u: goto label_391790;
        case 0x391794u: goto label_391794;
        case 0x391798u: goto label_391798;
        case 0x39179cu: goto label_39179c;
        case 0x3917a0u: goto label_3917a0;
        case 0x3917a4u: goto label_3917a4;
        case 0x3917a8u: goto label_3917a8;
        case 0x3917acu: goto label_3917ac;
        case 0x3917b0u: goto label_3917b0;
        case 0x3917b4u: goto label_3917b4;
        case 0x3917b8u: goto label_3917b8;
        case 0x3917bcu: goto label_3917bc;
        case 0x3917c0u: goto label_3917c0;
        case 0x3917c4u: goto label_3917c4;
        case 0x3917c8u: goto label_3917c8;
        case 0x3917ccu: goto label_3917cc;
        case 0x3917d0u: goto label_3917d0;
        case 0x3917d4u: goto label_3917d4;
        case 0x3917d8u: goto label_3917d8;
        case 0x3917dcu: goto label_3917dc;
        case 0x3917e0u: goto label_3917e0;
        case 0x3917e4u: goto label_3917e4;
        case 0x3917e8u: goto label_3917e8;
        case 0x3917ecu: goto label_3917ec;
        default: break;
    }

    ctx->pc = 0x390d60u;

label_390d60:
    // 0x390d60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x390d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_390d64:
    // 0x390d64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x390d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_390d68:
    // 0x390d68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x390d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_390d6c:
    // 0x390d6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x390d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_390d70:
    // 0x390d70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x390d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_390d74:
    // 0x390d74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x390d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_390d78:
    // 0x390d78: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x390d78u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_390d7c:
    // 0x390d7c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x390d7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_390d80:
    // 0x390d80: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x390d80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_390d84:
    // 0x390d84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x390d84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_390d88:
    // 0x390d88: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x390d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_390d8c:
    // 0x390d8c: 0x8c900020  lw          $s0, 0x20($a0)
    ctx->pc = 0x390d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_390d90:
    // 0x390d90: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x390d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_390d94:
    // 0x390d94: 0xc074740  jal         func_1D1D00
label_390d98:
    if (ctx->pc == 0x390D98u) {
        ctx->pc = 0x390D98u;
            // 0x390d98: 0xc4740034  lwc1        $f20, 0x34($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x390D9Cu;
        goto label_390d9c;
    }
    ctx->pc = 0x390D94u;
    SET_GPR_U32(ctx, 31, 0x390D9Cu);
    ctx->pc = 0x390D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390D94u;
            // 0x390d98: 0xc4740034  lwc1        $f20, 0x34($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390D9Cu; }
        if (ctx->pc != 0x390D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390D9Cu; }
        if (ctx->pc != 0x390D9Cu) { return; }
    }
    ctx->pc = 0x390D9Cu;
label_390d9c:
    // 0x390d9c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_390da0:
    if (ctx->pc == 0x390DA0u) {
        ctx->pc = 0x390DA0u;
            // 0x390da0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x390DA4u;
        goto label_390da4;
    }
    ctx->pc = 0x390D9Cu;
    {
        const bool branch_taken_0x390d9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x390d9c) {
            ctx->pc = 0x390DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x390D9Cu;
            // 0x390da0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x390DB0u;
            goto label_390db0;
        }
    }
    ctx->pc = 0x390DA4u;
label_390da4:
    // 0x390da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x390da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_390da8:
    // 0x390da8: 0x10000007  b           . + 4 + (0x7 << 2)
label_390dac:
    if (ctx->pc == 0x390DACu) {
        ctx->pc = 0x390DACu;
            // 0x390dac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x390DB0u;
        goto label_390db0;
    }
    ctx->pc = 0x390DA8u;
    {
        const bool branch_taken_0x390da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390DA8u;
            // 0x390dac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x390da8) {
            ctx->pc = 0x390DC8u;
            goto label_390dc8;
        }
    }
    ctx->pc = 0x390DB0u;
label_390db0:
    // 0x390db0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x390db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_390db4:
    // 0x390db4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x390db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_390db8:
    // 0x390db8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x390db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_390dbc:
    // 0x390dbc: 0x0  nop
    ctx->pc = 0x390dbcu;
    // NOP
label_390dc0:
    // 0x390dc0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x390dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_390dc4:
    // 0x390dc4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x390dc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_390dc8:
    // 0x390dc8: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x390dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_390dcc:
    // 0x390dcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x390dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_390dd0:
    // 0x390dd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x390dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_390dd4:
    // 0x390dd4: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x390dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_390dd8:
    // 0x390dd8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x390dd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_390ddc:
    // 0x390ddc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x390ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_390de0:
    // 0x390de0: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x390de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_390de4:
    // 0x390de4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x390de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_390de8:
    // 0x390de8: 0x0  nop
    ctx->pc = 0x390de8u;
    // NOP
label_390dec:
    // 0x390dec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x390decu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_390df0:
    // 0x390df0: 0x4602a01c  madd.s      $f0, $f20, $f2
    ctx->pc = 0x390df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_390df4:
    // 0x390df4: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x390df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_390df8:
    // 0x390df8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x390df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_390dfc:
    // 0x390dfc: 0xc08914c  jal         func_224530
label_390e00:
    if (ctx->pc == 0x390E00u) {
        ctx->pc = 0x390E00u;
            // 0x390e00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x390E04u;
        goto label_390e04;
    }
    ctx->pc = 0x390DFCu;
    SET_GPR_U32(ctx, 31, 0x390E04u);
    ctx->pc = 0x390E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390DFCu;
            // 0x390e00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390E04u; }
        if (ctx->pc != 0x390E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390E04u; }
        if (ctx->pc != 0x390E04u) { return; }
    }
    ctx->pc = 0x390E04u;
label_390e04:
    // 0x390e04: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x390e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_390e08:
    // 0x390e08: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x390e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_390e0c:
    // 0x390e0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x390e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_390e10:
    // 0x390e10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x390e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390e14:
    // 0x390e14: 0x8ca40214  lw          $a0, 0x214($a1)
    ctx->pc = 0x390e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_390e18:
    // 0x390e18: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x390e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_390e1c:
    // 0x390e1c: 0xaca30214  sw          $v1, 0x214($a1)
    ctx->pc = 0x390e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 532), GPR_U32(ctx, 3));
label_390e20:
    // 0x390e20: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x390e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_390e24:
    // 0x390e24: 0x8e280040  lw          $t0, 0x40($s1)
    ctx->pc = 0x390e24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_390e28:
    // 0x390e28: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x390e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_390e2c:
    // 0x390e2c: 0x1001827  not         $v1, $t0
    ctx->pc = 0x390e2cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 8) | GPR_U64(ctx, 0)));
label_390e30:
    // 0x390e30: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x390e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_390e34:
    // 0x390e34: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x390e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_390e38:
    // 0x390e38: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x390e38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_390e3c:
    // 0x390e3c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x390e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_390e40:
    // 0x390e40: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x390e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_390e44:
    // 0x390e44: 0xc08bff0  jal         func_22FFC0
label_390e48:
    if (ctx->pc == 0x390E48u) {
        ctx->pc = 0x390E48u;
            // 0x390e48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x390E4Cu;
        goto label_390e4c;
    }
    ctx->pc = 0x390E44u;
    SET_GPR_U32(ctx, 31, 0x390E4Cu);
    ctx->pc = 0x390E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390E44u;
            // 0x390e48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390E4Cu; }
        if (ctx->pc != 0x390E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390E4Cu; }
        if (ctx->pc != 0x390E4Cu) { return; }
    }
    ctx->pc = 0x390E4Cu;
label_390e4c:
    // 0x390e4c: 0x8e030a60  lw          $v1, 0xA60($s0)
    ctx->pc = 0x390e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2656)));
label_390e50:
    // 0x390e50: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x390e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_390e54:
    // 0x390e54: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x390e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_390e58:
    // 0x390e58: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_390e5c:
    if (ctx->pc == 0x390E5Cu) {
        ctx->pc = 0x390E60u;
        goto label_390e60;
    }
    ctx->pc = 0x390E58u;
    {
        const bool branch_taken_0x390e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x390e58) {
            ctx->pc = 0x390EB8u;
            goto label_390eb8;
        }
    }
    ctx->pc = 0x390E60u;
label_390e60:
    // 0x390e60: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x390e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_390e64:
    // 0x390e64: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x390e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_390e68:
    // 0x390e68: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x390e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_390e6c:
    // 0x390e6c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x390e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_390e70:
    // 0x390e70: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x390e70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_390e74:
    // 0x390e74: 0xc088b74  jal         func_222DD0
label_390e78:
    if (ctx->pc == 0x390E78u) {
        ctx->pc = 0x390E78u;
            // 0x390e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x390E7Cu;
        goto label_390e7c;
    }
    ctx->pc = 0x390E74u;
    SET_GPR_U32(ctx, 31, 0x390E7Cu);
    ctx->pc = 0x390E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390E74u;
            // 0x390e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390E7Cu; }
        if (ctx->pc != 0x390E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390E7Cu; }
        if (ctx->pc != 0x390E7Cu) { return; }
    }
    ctx->pc = 0x390E7Cu;
label_390e7c:
    // 0x390e7c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x390e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_390e80:
    // 0x390e80: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x390e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_390e84:
    // 0x390e84: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x390e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_390e88:
    // 0x390e88: 0x320f809  jalr        $t9
label_390e8c:
    if (ctx->pc == 0x390E8Cu) {
        ctx->pc = 0x390E8Cu;
            // 0x390e8c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x390E90u;
        goto label_390e90;
    }
    ctx->pc = 0x390E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x390E90u);
        ctx->pc = 0x390E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390E88u;
            // 0x390e8c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x390E90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x390E90u; }
            if (ctx->pc != 0x390E90u) { return; }
        }
        }
    }
    ctx->pc = 0x390E90u;
label_390e90:
    // 0x390e90: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x390e90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_390e94:
    // 0x390e94: 0xc088b74  jal         func_222DD0
label_390e98:
    if (ctx->pc == 0x390E98u) {
        ctx->pc = 0x390E98u;
            // 0x390e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x390E9Cu;
        goto label_390e9c;
    }
    ctx->pc = 0x390E94u;
    SET_GPR_U32(ctx, 31, 0x390E9Cu);
    ctx->pc = 0x390E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390E94u;
            // 0x390e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390E9Cu; }
        if (ctx->pc != 0x390E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390E9Cu; }
        if (ctx->pc != 0x390E9Cu) { return; }
    }
    ctx->pc = 0x390E9Cu;
label_390e9c:
    // 0x390e9c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x390e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_390ea0:
    // 0x390ea0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x390ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_390ea4:
    // 0x390ea4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x390ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_390ea8:
    // 0x390ea8: 0x320f809  jalr        $t9
label_390eac:
    if (ctx->pc == 0x390EACu) {
        ctx->pc = 0x390EACu;
            // 0x390eac: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x390EB0u;
        goto label_390eb0;
    }
    ctx->pc = 0x390EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x390EB0u);
        ctx->pc = 0x390EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390EA8u;
            // 0x390eac: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x390EB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x390EB0u; }
            if (ctx->pc != 0x390EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x390EB0u;
label_390eb0:
    // 0x390eb0: 0x100000af  b           . + 4 + (0xAF << 2)
label_390eb4:
    if (ctx->pc == 0x390EB4u) {
        ctx->pc = 0x390EB4u;
            // 0x390eb4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x390EB8u;
        goto label_390eb8;
    }
    ctx->pc = 0x390EB0u;
    {
        const bool branch_taken_0x390eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390EB0u;
            // 0x390eb4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390eb0) {
            ctx->pc = 0x391170u;
            goto label_391170;
        }
    }
    ctx->pc = 0x390EB8u;
label_390eb8:
    // 0x390eb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x390eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_390ebc:
    // 0x390ebc: 0xc4620084  lwc1        $f2, 0x84($v1)
    ctx->pc = 0x390ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_390ec0:
    // 0x390ec0: 0xc4416524  lwc1        $f1, 0x6524($v0)
    ctx->pc = 0x390ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_390ec4:
    // 0x390ec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x390ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_390ec8:
    // 0x390ec8: 0x0  nop
    ctx->pc = 0x390ec8u;
    // NOP
label_390ecc:
    // 0x390ecc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x390eccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_390ed0:
    // 0x390ed0: 0x0  nop
    ctx->pc = 0x390ed0u;
    // NOP
label_390ed4:
    // 0x390ed4: 0x0  nop
    ctx->pc = 0x390ed4u;
    // NOP
label_390ed8:
    // 0x390ed8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x390ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_390edc:
    // 0x390edc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_390ee0:
    if (ctx->pc == 0x390EE0u) {
        ctx->pc = 0x390EE0u;
            // 0x390ee0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x390EE4u;
        goto label_390ee4;
    }
    ctx->pc = 0x390EDCu;
    {
        const bool branch_taken_0x390edc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x390edc) {
            ctx->pc = 0x390EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x390EDCu;
            // 0x390ee0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x390EECu;
            goto label_390eec;
        }
    }
    ctx->pc = 0x390EE4u;
label_390ee4:
    // 0x390ee4: 0x10000007  b           . + 4 + (0x7 << 2)
label_390ee8:
    if (ctx->pc == 0x390EE8u) {
        ctx->pc = 0x390EE8u;
            // 0x390ee8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x390EECu;
        goto label_390eec;
    }
    ctx->pc = 0x390EE4u;
    {
        const bool branch_taken_0x390ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390EE4u;
            // 0x390ee8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ee4) {
            ctx->pc = 0x390F04u;
            goto label_390f04;
        }
    }
    ctx->pc = 0x390EECu;
label_390eec:
    // 0x390eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x390eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_390ef0:
    // 0x390ef0: 0x0  nop
    ctx->pc = 0x390ef0u;
    // NOP
label_390ef4:
    // 0x390ef4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x390ef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_390ef8:
    // 0x390ef8: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_390efc:
    if (ctx->pc == 0x390EFCu) {
        ctx->pc = 0x390EFCu;
            // 0x390efc: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->pc = 0x390F00u;
        goto label_390f00;
    }
    ctx->pc = 0x390EF8u;
    {
        const bool branch_taken_0x390ef8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x390ef8) {
            ctx->pc = 0x390EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x390EF8u;
            // 0x390efc: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x390F08u;
            goto label_390f08;
        }
    }
    ctx->pc = 0x390F00u;
label_390f00:
    // 0x390f00: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x390f00u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_390f04:
    // 0x390f04: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x390f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_390f08:
    // 0x390f08: 0x26050820  addiu       $a1, $s0, 0x820
    ctx->pc = 0x390f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
label_390f0c:
    // 0x390f0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x390f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_390f10:
    // 0x390f10: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x390f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_390f14:
    // 0x390f14: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x390f14u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_390f18:
    // 0x390f18: 0xc04cc70  jal         func_1331C0
label_390f1c:
    if (ctx->pc == 0x390F1Cu) {
        ctx->pc = 0x390F1Cu;
            // 0x390f1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x390F20u;
        goto label_390f20;
    }
    ctx->pc = 0x390F18u;
    SET_GPR_U32(ctx, 31, 0x390F20u);
    ctx->pc = 0x390F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390F18u;
            // 0x390f1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390F20u; }
        if (ctx->pc != 0x390F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390F20u; }
        if (ctx->pc != 0x390F20u) { return; }
    }
    ctx->pc = 0x390F20u;
label_390f20:
    // 0x390f20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x390f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_390f24:
    // 0x390f24: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x390f24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_390f28:
    // 0x390f28: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x390f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_390f2c:
    // 0x390f2c: 0xc7a60060  lwc1        $f6, 0x60($sp)
    ctx->pc = 0x390f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_390f30:
    // 0x390f30: 0xc7a50064  lwc1        $f5, 0x64($sp)
    ctx->pc = 0x390f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_390f34:
    // 0x390f34: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x390f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_390f38:
    // 0x390f38: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x390f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_390f3c:
    // 0x390f3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x390f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_390f40:
    // 0x390f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390f44:
    // 0x390f44: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x390f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_390f48:
    // 0x390f48: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x390f48u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_390f4c:
    // 0x390f4c: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x390f4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_390f50:
    // 0x390f50: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x390f50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_390f54:
    // 0x390f54: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x390f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_390f58:
    // 0x390f58: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x390f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_390f5c:
    // 0x390f5c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x390f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_390f60:
    // 0x390f60: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x390f60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_390f64:
    // 0x390f64: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x390f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_390f68:
    // 0x390f68: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x390f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_390f6c:
    // 0x390f6c: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x390f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_390f70:
    // 0x390f70: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x390f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_390f74:
    // 0x390f74: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x390f74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_390f78:
    // 0x390f78: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x390f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_390f7c:
    // 0x390f7c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x390f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_390f80:
    // 0x390f80: 0xc088b74  jal         func_222DD0
label_390f84:
    if (ctx->pc == 0x390F84u) {
        ctx->pc = 0x390F84u;
            // 0x390f84: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x390F88u;
        goto label_390f88;
    }
    ctx->pc = 0x390F80u;
    SET_GPR_U32(ctx, 31, 0x390F88u);
    ctx->pc = 0x390F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390F80u;
            // 0x390f84: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390F88u; }
        if (ctx->pc != 0x390F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390F88u; }
        if (ctx->pc != 0x390F88u) { return; }
    }
    ctx->pc = 0x390F88u;
label_390f88:
    // 0x390f88: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x390f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_390f8c:
    // 0x390f8c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x390f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_390f90:
    // 0x390f90: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x390f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_390f94:
    // 0x390f94: 0x320f809  jalr        $t9
label_390f98:
    if (ctx->pc == 0x390F98u) {
        ctx->pc = 0x390F98u;
            // 0x390f98: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x390F9Cu;
        goto label_390f9c;
    }
    ctx->pc = 0x390F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x390F9Cu);
        ctx->pc = 0x390F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390F94u;
            // 0x390f98: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x390F9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x390F9Cu; }
            if (ctx->pc != 0x390F9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x390F9Cu;
label_390f9c:
    // 0x390f9c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x390f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_390fa0:
    // 0x390fa0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x390fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_390fa4:
    // 0x390fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x390fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_390fa8:
    // 0x390fa8: 0x0  nop
    ctx->pc = 0x390fa8u;
    // NOP
label_390fac:
    // 0x390fac: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x390facu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_390fb0:
    // 0x390fb0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x390fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_390fb4:
    // 0x390fb4: 0xe4600154  swc1        $f0, 0x154($v1)
    ctx->pc = 0x390fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 340), bits); }
label_390fb8:
    // 0x390fb8: 0xc074740  jal         func_1D1D00
label_390fbc:
    if (ctx->pc == 0x390FBCu) {
        ctx->pc = 0x390FBCu;
            // 0x390fbc: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x390FC0u;
        goto label_390fc0;
    }
    ctx->pc = 0x390FB8u;
    SET_GPR_U32(ctx, 31, 0x390FC0u);
    ctx->pc = 0x390FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390FB8u;
            // 0x390fbc: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390FC0u; }
        if (ctx->pc != 0x390FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390FC0u; }
        if (ctx->pc != 0x390FC0u) { return; }
    }
    ctx->pc = 0x390FC0u;
label_390fc0:
    // 0x390fc0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_390fc4:
    if (ctx->pc == 0x390FC4u) {
        ctx->pc = 0x390FC4u;
            // 0x390fc4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x390FC8u;
        goto label_390fc8;
    }
    ctx->pc = 0x390FC0u;
    {
        const bool branch_taken_0x390fc0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x390fc0) {
            ctx->pc = 0x390FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x390FC0u;
            // 0x390fc4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x390FD4u;
            goto label_390fd4;
        }
    }
    ctx->pc = 0x390FC8u;
label_390fc8:
    // 0x390fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x390fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_390fcc:
    // 0x390fcc: 0x10000007  b           . + 4 + (0x7 << 2)
label_390fd0:
    if (ctx->pc == 0x390FD0u) {
        ctx->pc = 0x390FD0u;
            // 0x390fd0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x390FD4u;
        goto label_390fd4;
    }
    ctx->pc = 0x390FCCu;
    {
        const bool branch_taken_0x390fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390FCCu;
            // 0x390fd0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x390fcc) {
            ctx->pc = 0x390FECu;
            goto label_390fec;
        }
    }
    ctx->pc = 0x390FD4u;
label_390fd4:
    // 0x390fd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x390fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_390fd8:
    // 0x390fd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x390fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_390fdc:
    // 0x390fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x390fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_390fe0:
    // 0x390fe0: 0x0  nop
    ctx->pc = 0x390fe0u;
    // NOP
label_390fe4:
    // 0x390fe4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x390fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_390fe8:
    // 0x390fe8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x390fe8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_390fec:
    // 0x390fec: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x390fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_390ff0:
    // 0x390ff0: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x390ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_390ff4:
    // 0x390ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x390ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_390ff8:
    // 0x390ff8: 0x0  nop
    ctx->pc = 0x390ff8u;
    // NOP
label_390ffc:
    // 0x390ffc: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x390ffcu;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_391000:
    // 0x391000: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x391000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_391004:
    // 0x391004: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x391004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_391008:
    // 0x391008: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39100c:
    // 0x39100c: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x39100cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_391010:
    // 0x391010: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x391010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391014:
    // 0x391014: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x391014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_391018:
    // 0x391018: 0xc074740  jal         func_1D1D00
label_39101c:
    if (ctx->pc == 0x39101Cu) {
        ctx->pc = 0x39101Cu;
            // 0x39101c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x391020u;
        goto label_391020;
    }
    ctx->pc = 0x391018u;
    SET_GPR_U32(ctx, 31, 0x391020u);
    ctx->pc = 0x39101Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391018u;
            // 0x39101c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391020u; }
        if (ctx->pc != 0x391020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391020u; }
        if (ctx->pc != 0x391020u) { return; }
    }
    ctx->pc = 0x391020u;
label_391020:
    // 0x391020: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_391024:
    if (ctx->pc == 0x391024u) {
        ctx->pc = 0x391024u;
            // 0x391024: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x391028u;
        goto label_391028;
    }
    ctx->pc = 0x391020u;
    {
        const bool branch_taken_0x391020 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x391020) {
            ctx->pc = 0x391024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391020u;
            // 0x391024: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391034u;
            goto label_391034;
        }
    }
    ctx->pc = 0x391028u;
label_391028:
    // 0x391028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39102c:
    // 0x39102c: 0x10000007  b           . + 4 + (0x7 << 2)
label_391030:
    if (ctx->pc == 0x391030u) {
        ctx->pc = 0x391030u;
            // 0x391030: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x391034u;
        goto label_391034;
    }
    ctx->pc = 0x39102Cu;
    {
        const bool branch_taken_0x39102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39102Cu;
            // 0x391030: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39102c) {
            ctx->pc = 0x39104Cu;
            goto label_39104c;
        }
    }
    ctx->pc = 0x391034u;
label_391034:
    // 0x391034: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x391034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_391038:
    // 0x391038: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x391038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39103c:
    // 0x39103c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39103cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391040:
    // 0x391040: 0x0  nop
    ctx->pc = 0x391040u;
    // NOP
label_391044:
    // 0x391044: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x391044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_391048:
    // 0x391048: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x391048u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39104c:
    // 0x39104c: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39104cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_391050:
    // 0x391050: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x391050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_391054:
    // 0x391054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391058:
    // 0x391058: 0x0  nop
    ctx->pc = 0x391058u;
    // NOP
label_39105c:
    // 0x39105c: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x39105cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_391060:
    // 0x391060: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x391060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_391064:
    // 0x391064: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x391064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_391068:
    // 0x391068: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39106c:
    // 0x39106c: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x39106cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_391070:
    // 0x391070: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x391070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391074:
    // 0x391074: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x391074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_391078:
    // 0x391078: 0xc074740  jal         func_1D1D00
label_39107c:
    if (ctx->pc == 0x39107Cu) {
        ctx->pc = 0x39107Cu;
            // 0x39107c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x391080u;
        goto label_391080;
    }
    ctx->pc = 0x391078u;
    SET_GPR_U32(ctx, 31, 0x391080u);
    ctx->pc = 0x39107Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391078u;
            // 0x39107c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391080u; }
        if (ctx->pc != 0x391080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391080u; }
        if (ctx->pc != 0x391080u) { return; }
    }
    ctx->pc = 0x391080u;
label_391080:
    // 0x391080: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_391084:
    if (ctx->pc == 0x391084u) {
        ctx->pc = 0x391084u;
            // 0x391084: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x391088u;
        goto label_391088;
    }
    ctx->pc = 0x391080u;
    {
        const bool branch_taken_0x391080 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x391080) {
            ctx->pc = 0x391084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391080u;
            // 0x391084: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391094u;
            goto label_391094;
        }
    }
    ctx->pc = 0x391088u;
label_391088:
    // 0x391088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39108c:
    // 0x39108c: 0x10000007  b           . + 4 + (0x7 << 2)
label_391090:
    if (ctx->pc == 0x391090u) {
        ctx->pc = 0x391090u;
            // 0x391090: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x391094u;
        goto label_391094;
    }
    ctx->pc = 0x39108Cu;
    {
        const bool branch_taken_0x39108c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39108Cu;
            // 0x391090: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39108c) {
            ctx->pc = 0x3910ACu;
            goto label_3910ac;
        }
    }
    ctx->pc = 0x391094u;
label_391094:
    // 0x391094: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x391094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_391098:
    // 0x391098: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x391098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39109c:
    // 0x39109c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39109cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3910a0:
    // 0x3910a0: 0x0  nop
    ctx->pc = 0x3910a0u;
    // NOP
label_3910a4:
    // 0x3910a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3910a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3910a8:
    // 0x3910a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3910a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3910ac:
    // 0x3910ac: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x3910acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_3910b0:
    // 0x3910b0: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x3910b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_3910b4:
    // 0x3910b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3910b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3910b8:
    // 0x3910b8: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x3910b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_3910bc:
    // 0x3910bc: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x3910bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3910c0:
    // 0x3910c0: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x3910c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_3910c4:
    // 0x3910c4: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3910c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_3910c8:
    // 0x3910c8: 0x3446fa35  ori         $a2, $v0, 0xFA35
    ctx->pc = 0x3910c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_3910cc:
    // 0x3910cc: 0x3c02423c  lui         $v0, 0x423C
    ctx->pc = 0x3910ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16956 << 16));
label_3910d0:
    // 0x3910d0: 0x34437edd  ori         $v1, $v0, 0x7EDD
    ctx->pc = 0x3910d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32477);
label_3910d4:
    // 0x3910d4: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x3910d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3910d8:
    // 0x3910d8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3910d8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3910dc:
    // 0x3910dc: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x3910dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3910e0:
    // 0x3910e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3910e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3910e4:
    // 0x3910e4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3910e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3910e8:
    // 0x3910e8: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x3910e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_3910ec:
    // 0x3910ec: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3910ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3910f0:
    // 0x3910f0: 0x0  nop
    ctx->pc = 0x3910f0u;
    // NOP
label_3910f4:
    // 0x3910f4: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x3910f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3910f8:
    // 0x3910f8: 0x4605001d  msub.s      $f0, $f0, $f5
    ctx->pc = 0x3910f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
label_3910fc:
    // 0x3910fc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3910fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_391100:
    // 0x391100: 0x0  nop
    ctx->pc = 0x391100u;
    // NOP
label_391104:
    // 0x391104: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x391104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_391108:
    // 0x391108: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x391108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_39110c:
    // 0x39110c: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x39110cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_391110:
    // 0x391110: 0x46141818  adda.s      $f3, $f20
    ctx->pc = 0x391110u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_391114:
    // 0x391114: 0x4616005d  msub.s      $f1, $f0, $f22
    ctx->pc = 0x391114u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_391118:
    // 0x391118: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x391118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_39111c:
    // 0x39111c: 0x46151818  adda.s      $f3, $f21
    ctx->pc = 0x39111cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_391120:
    // 0x391120: 0x4617001d  msub.s      $f0, $f0, $f23
    ctx->pc = 0x391120u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[23]));
label_391124:
    // 0x391124: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x391124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_391128:
    // 0x391128: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x391128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_39112c:
    // 0x39112c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x39112cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_391130:
    // 0x391130: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x391130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_391134:
    // 0x391134: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x391134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_391138:
    // 0x391138: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x391138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_39113c:
    // 0x39113c: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x39113cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_391140:
    // 0x391140: 0xc088b74  jal         func_222DD0
label_391144:
    if (ctx->pc == 0x391144u) {
        ctx->pc = 0x391144u;
            // 0x391144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x391148u;
        goto label_391148;
    }
    ctx->pc = 0x391140u;
    SET_GPR_U32(ctx, 31, 0x391148u);
    ctx->pc = 0x391144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391140u;
            // 0x391144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391148u; }
        if (ctx->pc != 0x391148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391148u; }
        if (ctx->pc != 0x391148u) { return; }
    }
    ctx->pc = 0x391148u;
label_391148:
    // 0x391148: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x391148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39114c:
    // 0x39114c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x39114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_391150:
    // 0x391150: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x391150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_391154:
    // 0x391154: 0x320f809  jalr        $t9
label_391158:
    if (ctx->pc == 0x391158u) {
        ctx->pc = 0x391158u;
            // 0x391158: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x39115Cu;
        goto label_39115c;
    }
    ctx->pc = 0x391154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39115Cu);
        ctx->pc = 0x391158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391154u;
            // 0x391158: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39115Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39115Cu; }
            if (ctx->pc != 0x39115Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39115Cu;
label_39115c:
    // 0x39115c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x39115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_391160:
    // 0x391160: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x391160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
label_391164:
    // 0x391164: 0x34846666  ori         $a0, $a0, 0x6666
    ctx->pc = 0x391164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
label_391168:
    // 0x391168: 0xac640160  sw          $a0, 0x160($v1)
    ctx->pc = 0x391168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 4));
label_39116c:
    // 0x39116c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x39116cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_391170:
    // 0x391170: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x391170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_391174:
    // 0x391174: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x391174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_391178:
    // 0x391178: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x391178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_39117c:
    // 0x39117c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39117cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_391180:
    // 0x391180: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x391180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_391184:
    // 0x391184: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x391184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_391188:
    // 0x391188: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x391188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39118c:
    // 0x39118c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x39118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_391190:
    // 0x391190: 0x3e00008  jr          $ra
label_391194:
    if (ctx->pc == 0x391194u) {
        ctx->pc = 0x391194u;
            // 0x391194: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x391198u;
        goto label_391198;
    }
    ctx->pc = 0x391190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391190u;
            // 0x391194: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x391198u;
label_391198:
    // 0x391198: 0x0  nop
    ctx->pc = 0x391198u;
    // NOP
label_39119c:
    // 0x39119c: 0x0  nop
    ctx->pc = 0x39119cu;
    // NOP
label_3911a0:
    // 0x3911a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3911a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3911a4:
    // 0x3911a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3911a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3911a8:
    // 0x3911a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3911a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3911ac:
    // 0x3911ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3911acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3911b0:
    // 0x3911b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3911b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3911b4:
    // 0x3911b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3911b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3911b8:
    // 0x3911b8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x3911b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_3911bc:
    // 0x3911bc: 0x8c910020  lw          $s1, 0x20($a0)
    ctx->pc = 0x3911bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3911c0:
    // 0x3911c0: 0xc44c0028  lwc1        $f12, 0x28($v0)
    ctx->pc = 0x3911c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3911c4:
    // 0x3911c4: 0x26250300  addiu       $a1, $s1, 0x300
    ctx->pc = 0x3911c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_3911c8:
    // 0x3911c8: 0xc04cc70  jal         func_1331C0
label_3911cc:
    if (ctx->pc == 0x3911CCu) {
        ctx->pc = 0x3911CCu;
            // 0x3911cc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3911D0u;
        goto label_3911d0;
    }
    ctx->pc = 0x3911C8u;
    SET_GPR_U32(ctx, 31, 0x3911D0u);
    ctx->pc = 0x3911CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3911C8u;
            // 0x3911cc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3911D0u; }
        if (ctx->pc != 0x3911D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3911D0u; }
        if (ctx->pc != 0x3911D0u) { return; }
    }
    ctx->pc = 0x3911D0u;
label_3911d0:
    // 0x3911d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3911d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3911d4:
    // 0x3911d4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3911d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3911d8:
    // 0x3911d8: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x3911d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3911dc:
    // 0x3911dc: 0xc7a40050  lwc1        $f4, 0x50($sp)
    ctx->pc = 0x3911dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3911e0:
    // 0x3911e0: 0x8e500024  lw          $s0, 0x24($s2)
    ctx->pc = 0x3911e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3911e4:
    // 0x3911e4: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x3911e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3911e8:
    // 0x3911e8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x3911e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_3911ec:
    // 0x3911ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3911ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3911f0:
    // 0x3911f0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3911f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3911f4:
    // 0x3911f4: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x3911f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3911f8:
    // 0x3911f8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3911f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_3911fc:
    // 0x3911fc: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x3911fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_391200:
    // 0x391200: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x391200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_391204:
    // 0x391204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x391204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_391208:
    // 0x391208: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x391208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39120c:
    // 0x39120c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x39120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391210:
    // 0x391210: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x391210u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_391214:
    // 0x391214: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x391214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_391218:
    // 0x391218: 0x46022842  mul.s       $f1, $f5, $f2
    ctx->pc = 0x391218u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_39121c:
    // 0x39121c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x39121cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_391220:
    // 0x391220: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x391220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_391224:
    // 0x391224: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x391224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_391228:
    // 0x391228: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x391228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_39122c:
    // 0x39122c: 0xc088b74  jal         func_222DD0
label_391230:
    if (ctx->pc == 0x391230u) {
        ctx->pc = 0x391230u;
            // 0x391230: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->pc = 0x391234u;
        goto label_391234;
    }
    ctx->pc = 0x39122Cu;
    SET_GPR_U32(ctx, 31, 0x391234u);
    ctx->pc = 0x391230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39122Cu;
            // 0x391230: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391234u; }
        if (ctx->pc != 0x391234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391234u; }
        if (ctx->pc != 0x391234u) { return; }
    }
    ctx->pc = 0x391234u;
label_391234:
    // 0x391234: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x391234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_391238:
    // 0x391238: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x391238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_39123c:
    // 0x39123c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39123cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_391240:
    // 0x391240: 0x320f809  jalr        $t9
label_391244:
    if (ctx->pc == 0x391244u) {
        ctx->pc = 0x391244u;
            // 0x391244: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x391248u;
        goto label_391248;
    }
    ctx->pc = 0x391240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x391248u);
        ctx->pc = 0x391244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391240u;
            // 0x391244: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x391248u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x391248u; }
            if (ctx->pc != 0x391248u) { return; }
        }
        }
    }
    ctx->pc = 0x391248u;
label_391248:
    // 0x391248: 0x8e230a74  lw          $v1, 0xA74($s1)
    ctx->pc = 0x391248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2676)));
label_39124c:
    // 0x39124c: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x39124cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_391250:
    // 0x391250: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_391254:
    if (ctx->pc == 0x391254u) {
        ctx->pc = 0x391254u;
            // 0x391254: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x391258u;
        goto label_391258;
    }
    ctx->pc = 0x391250u;
    {
        const bool branch_taken_0x391250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x391250) {
            ctx->pc = 0x391254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391250u;
            // 0x391254: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391264u;
            goto label_391264;
        }
    }
    ctx->pc = 0x391258u;
label_391258:
    // 0x391258: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x391258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39125c:
    // 0x39125c: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x39125cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
label_391260:
    // 0x391260: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x391260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_391264:
    // 0x391264: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x391264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_391268:
    // 0x391268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x391268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39126c:
    // 0x39126c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39126cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_391270:
    // 0x391270: 0x3e00008  jr          $ra
label_391274:
    if (ctx->pc == 0x391274u) {
        ctx->pc = 0x391274u;
            // 0x391274: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x391278u;
        goto label_391278;
    }
    ctx->pc = 0x391270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391270u;
            // 0x391274: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x391278u;
label_391278:
    // 0x391278: 0x0  nop
    ctx->pc = 0x391278u;
    // NOP
label_39127c:
    // 0x39127c: 0x0  nop
    ctx->pc = 0x39127cu;
    // NOP
label_391280:
    // 0x391280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x391280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_391284:
    // 0x391284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x391284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_391288:
    // 0x391288: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x391288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39128c:
    // 0x39128c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_391290:
    // 0x391290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x391290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_391294:
    // 0x391294: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x391294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391298:
    // 0x391298: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x391298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_39129c:
    // 0x39129c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39129cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3912a0:
    // 0x3912a0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3912a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3912a4:
    // 0x3912a4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_3912a8:
    if (ctx->pc == 0x3912A8u) {
        ctx->pc = 0x3912A8u;
            // 0x3912a8: 0x24640a50  addiu       $a0, $v1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2640));
        ctx->pc = 0x3912ACu;
        goto label_3912ac;
    }
    ctx->pc = 0x3912A4u;
    {
        const bool branch_taken_0x3912a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3912A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3912A4u;
            // 0x3912a8: 0x24640a50  addiu       $a0, $v1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912a4) {
            ctx->pc = 0x3912D4u;
            goto label_3912d4;
        }
    }
    ctx->pc = 0x3912ACu;
label_3912ac:
    // 0x3912ac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3912acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3912b0:
    // 0x3912b0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3912b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3912b4:
    // 0x3912b4: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x3912b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3912b8:
    // 0x3912b8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3912b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3912bc:
    // 0x3912bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3912bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3912c0:
    // 0x3912c0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3912c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3912c4:
    // 0x3912c4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_3912c8:
    if (ctx->pc == 0x3912C8u) {
        ctx->pc = 0x3912C8u;
            // 0x3912c8: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->pc = 0x3912CCu;
        goto label_3912cc;
    }
    ctx->pc = 0x3912C4u;
    {
        const bool branch_taken_0x3912c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3912C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3912C4u;
            // 0x3912c8: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912c4) {
            ctx->pc = 0x3912E8u;
            goto label_3912e8;
        }
    }
    ctx->pc = 0x3912CCu;
label_3912cc:
    // 0x3912cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_3912d0:
    if (ctx->pc == 0x3912D0u) {
        ctx->pc = 0x3912D0u;
            // 0x3912d0: 0xe6020028  swc1        $f2, 0x28($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->pc = 0x3912D4u;
        goto label_3912d4;
    }
    ctx->pc = 0x3912CCu;
    {
        const bool branch_taken_0x3912cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3912D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3912CCu;
            // 0x3912d0: 0xe6020028  swc1        $f2, 0x28($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912cc) {
            ctx->pc = 0x3912E8u;
            goto label_3912e8;
        }
    }
    ctx->pc = 0x3912D4u;
label_3912d4:
    // 0x3912d4: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x3912d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3912d8:
    // 0x3912d8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3912dc:
    if (ctx->pc == 0x3912DCu) {
        ctx->pc = 0x3912DCu;
            // 0x3912dc: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->pc = 0x3912E0u;
        goto label_3912e0;
    }
    ctx->pc = 0x3912D8u;
    {
        const bool branch_taken_0x3912d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3912d8) {
            ctx->pc = 0x3912DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3912D8u;
            // 0x3912dc: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3912ECu;
            goto label_3912ec;
        }
    }
    ctx->pc = 0x3912E0u;
label_3912e0:
    // 0x3912e0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3912e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_3912e4:
    // 0x3912e4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x3912e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_3912e8:
    // 0x3912e8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x3912e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3912ec:
    // 0x3912ec: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3912ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3912f0:
    // 0x3912f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3912f4:
    if (ctx->pc == 0x3912F4u) {
        ctx->pc = 0x3912F4u;
            // 0x3912f4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3912F8u;
        goto label_3912f8;
    }
    ctx->pc = 0x3912F0u;
    {
        const bool branch_taken_0x3912f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3912f0) {
            ctx->pc = 0x3912F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3912F0u;
            // 0x3912f4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391304u;
            goto label_391304;
        }
    }
    ctx->pc = 0x3912F8u;
label_3912f8:
    // 0x3912f8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_3912fc:
    if (ctx->pc == 0x3912FCu) {
        ctx->pc = 0x3912FCu;
            // 0x3912fc: 0xc6010028  lwc1        $f1, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x391300u;
        goto label_391300;
    }
    ctx->pc = 0x3912F8u;
    {
        const bool branch_taken_0x3912f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3912f8) {
            ctx->pc = 0x3912FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3912F8u;
            // 0x3912fc: 0xc6010028  lwc1        $f1, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x39130Cu;
            goto label_39130c;
        }
    }
    ctx->pc = 0x391300u;
label_391300:
    // 0x391300: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x391300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_391304:
    // 0x391304: 0x10000022  b           . + 4 + (0x22 << 2)
label_391308:
    if (ctx->pc == 0x391308u) {
        ctx->pc = 0x391308u;
            // 0x391308: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->pc = 0x39130Cu;
        goto label_39130c;
    }
    ctx->pc = 0x391304u;
    {
        const bool branch_taken_0x391304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391304u;
            // 0x391308: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391304) {
            ctx->pc = 0x391390u;
            goto label_391390;
        }
    }
    ctx->pc = 0x39130Cu;
label_39130c:
    // 0x39130c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x39130cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_391310:
    // 0x391310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x391310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391314:
    // 0x391314: 0x0  nop
    ctx->pc = 0x391314u;
    // NOP
label_391318:
    // 0x391318: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x391318u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39131c:
    // 0x39131c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_391320:
    if (ctx->pc == 0x391320u) {
        ctx->pc = 0x391320u;
            // 0x391320: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x391324u;
        goto label_391324;
    }
    ctx->pc = 0x39131Cu;
    {
        const bool branch_taken_0x39131c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x391320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39131Cu;
            // 0x391320: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39131c) {
            ctx->pc = 0x39133Cu;
            goto label_39133c;
        }
    }
    ctx->pc = 0x391324u;
label_391324:
    // 0x391324: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x391324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391328:
    // 0x391328: 0x0  nop
    ctx->pc = 0x391328u;
    // NOP
label_39132c:
    // 0x39132c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x39132cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_391330:
    // 0x391330: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_391334:
    if (ctx->pc == 0x391334u) {
        ctx->pc = 0x391338u;
        goto label_391338;
    }
    ctx->pc = 0x391330u;
    {
        const bool branch_taken_0x391330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x391330) {
            ctx->pc = 0x39133Cu;
            goto label_39133c;
        }
    }
    ctx->pc = 0x391338u;
label_391338:
    // 0x391338: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x391338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39133c:
    // 0x39133c: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
label_391340:
    if (ctx->pc == 0x391340u) {
        ctx->pc = 0x391340u;
            // 0x391340: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x391344u;
        goto label_391344;
    }
    ctx->pc = 0x39133Cu;
    {
        const bool branch_taken_0x39133c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39133c) {
            ctx->pc = 0x391340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39133Cu;
            // 0x391340: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391394u;
            goto label_391394;
        }
    }
    ctx->pc = 0x391344u;
label_391344:
    // 0x391344: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x391344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_391348:
    // 0x391348: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x391348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_39134c:
    // 0x39134c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x39134cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_391350:
    // 0x391350: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x391350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_391354:
    // 0x391354: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x391354u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_391358:
    // 0x391358: 0xc088b74  jal         func_222DD0
label_39135c:
    if (ctx->pc == 0x39135Cu) {
        ctx->pc = 0x39135Cu;
            // 0x39135c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x391360u;
        goto label_391360;
    }
    ctx->pc = 0x391358u;
    SET_GPR_U32(ctx, 31, 0x391360u);
    ctx->pc = 0x39135Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391358u;
            // 0x39135c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391360u; }
        if (ctx->pc != 0x391360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391360u; }
        if (ctx->pc != 0x391360u) { return; }
    }
    ctx->pc = 0x391360u;
label_391360:
    // 0x391360: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x391360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_391364:
    // 0x391364: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x391364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_391368:
    // 0x391368: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x391368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_39136c:
    // 0x39136c: 0x320f809  jalr        $t9
label_391370:
    if (ctx->pc == 0x391370u) {
        ctx->pc = 0x391370u;
            // 0x391370: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x391374u;
        goto label_391374;
    }
    ctx->pc = 0x39136Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x391374u);
        ctx->pc = 0x391370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39136Cu;
            // 0x391370: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x391374u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x391374u; }
            if (ctx->pc != 0x391374u) { return; }
        }
        }
    }
    ctx->pc = 0x391374u;
label_391374:
    // 0x391374: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x391374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_391378:
    // 0x391378: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x391378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39137c:
    // 0x39137c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39137cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391380:
    // 0x391380: 0xc08914c  jal         func_224530
label_391384:
    if (ctx->pc == 0x391384u) {
        ctx->pc = 0x391384u;
            // 0x391384: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x391388u;
        goto label_391388;
    }
    ctx->pc = 0x391380u;
    SET_GPR_U32(ctx, 31, 0x391388u);
    ctx->pc = 0x391384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391380u;
            // 0x391384: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391388u; }
        if (ctx->pc != 0x391388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391388u; }
        if (ctx->pc != 0x391388u) { return; }
    }
    ctx->pc = 0x391388u;
label_391388:
    // 0x391388: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x391388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39138c:
    // 0x39138c: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x39138cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_391390:
    // 0x391390: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x391390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_391394:
    // 0x391394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x391394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_391398:
    // 0x391398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x391398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39139c:
    // 0x39139c: 0x3e00008  jr          $ra
label_3913a0:
    if (ctx->pc == 0x3913A0u) {
        ctx->pc = 0x3913A0u;
            // 0x3913a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3913A4u;
        goto label_3913a4;
    }
    ctx->pc = 0x39139Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3913A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39139Cu;
            // 0x3913a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3913A4u;
label_3913a4:
    // 0x3913a4: 0x0  nop
    ctx->pc = 0x3913a4u;
    // NOP
label_3913a8:
    // 0x3913a8: 0x0  nop
    ctx->pc = 0x3913a8u;
    // NOP
label_3913ac:
    // 0x3913ac: 0x0  nop
    ctx->pc = 0x3913acu;
    // NOP
label_3913b0:
    // 0x3913b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3913b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3913b4:
    // 0x3913b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3913b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3913b8:
    // 0x3913b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3913b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3913bc:
    // 0x3913bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3913bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3913c0:
    // 0x3913c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3913c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3913c4:
    // 0x3913c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3913c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3913c8:
    // 0x3913c8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3913c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3913cc:
    // 0x3913cc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3913ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3913d0:
    // 0x3913d0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3913d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3913d4:
    // 0x3913d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3913d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3913d8:
    // 0x3913d8: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x3913d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3913dc:
    // 0x3913dc: 0x8c900020  lw          $s0, 0x20($a0)
    ctx->pc = 0x3913dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3913e0:
    // 0x3913e0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3913e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3913e4:
    // 0x3913e4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_3913e8:
    if (ctx->pc == 0x3913E8u) {
        ctx->pc = 0x3913E8u;
            // 0x3913e8: 0x26040a50  addiu       $a0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->pc = 0x3913ECu;
        goto label_3913ec;
    }
    ctx->pc = 0x3913E4u;
    {
        const bool branch_taken_0x3913e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3913E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3913E4u;
            // 0x3913e8: 0x26040a50  addiu       $a0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3913e4) {
            ctx->pc = 0x391414u;
            goto label_391414;
        }
    }
    ctx->pc = 0x3913ECu;
label_3913ec:
    // 0x3913ec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3913ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3913f0:
    // 0x3913f0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3913f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3913f4:
    // 0x3913f4: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x3913f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3913f8:
    // 0x3913f8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3913f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3913fc:
    // 0x3913fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3913fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_391400:
    // 0x391400: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x391400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_391404:
    // 0x391404: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_391408:
    if (ctx->pc == 0x391408u) {
        ctx->pc = 0x391408u;
            // 0x391408: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->pc = 0x39140Cu;
        goto label_39140c;
    }
    ctx->pc = 0x391404u;
    {
        const bool branch_taken_0x391404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x391408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391404u;
            // 0x391408: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x391404) {
            ctx->pc = 0x391428u;
            goto label_391428;
        }
    }
    ctx->pc = 0x39140Cu;
label_39140c:
    // 0x39140c: 0x10000006  b           . + 4 + (0x6 << 2)
label_391410:
    if (ctx->pc == 0x391410u) {
        ctx->pc = 0x391410u;
            // 0x391410: 0xe6220028  swc1        $f2, 0x28($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->pc = 0x391414u;
        goto label_391414;
    }
    ctx->pc = 0x39140Cu;
    {
        const bool branch_taken_0x39140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39140Cu;
            // 0x391410: 0xe6220028  swc1        $f2, 0x28($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39140c) {
            ctx->pc = 0x391428u;
            goto label_391428;
        }
    }
    ctx->pc = 0x391414u;
label_391414:
    // 0x391414: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x391414u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_391418:
    // 0x391418: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_39141c:
    if (ctx->pc == 0x39141Cu) {
        ctx->pc = 0x39141Cu;
            // 0x39141c: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->pc = 0x391420u;
        goto label_391420;
    }
    ctx->pc = 0x391418u;
    {
        const bool branch_taken_0x391418 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x391418) {
            ctx->pc = 0x39141Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391418u;
            // 0x39141c: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39142Cu;
            goto label_39142c;
        }
    }
    ctx->pc = 0x391420u;
label_391420:
    // 0x391420: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x391420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_391424:
    // 0x391424: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x391424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_391428:
    // 0x391428: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x391428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_39142c:
    // 0x39142c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x39142cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_391430:
    // 0x391430: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_391434:
    if (ctx->pc == 0x391434u) {
        ctx->pc = 0x391434u;
            // 0x391434: 0x8e390048  lw          $t9, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->pc = 0x391438u;
        goto label_391438;
    }
    ctx->pc = 0x391430u;
    {
        const bool branch_taken_0x391430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x391430) {
            ctx->pc = 0x391434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391430u;
            // 0x391434: 0x8e390048  lw          $t9, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391444u;
            goto label_391444;
        }
    }
    ctx->pc = 0x391438u;
label_391438:
    // 0x391438: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_39143c:
    if (ctx->pc == 0x39143Cu) {
        ctx->pc = 0x39143Cu;
            // 0x39143c: 0xc6210028  lwc1        $f1, 0x28($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x391440u;
        goto label_391440;
    }
    ctx->pc = 0x391438u;
    {
        const bool branch_taken_0x391438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x391438) {
            ctx->pc = 0x39143Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391438u;
            // 0x39143c: 0xc6210028  lwc1        $f1, 0x28($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x391458u;
            goto label_391458;
        }
    }
    ctx->pc = 0x391440u;
label_391440:
    // 0x391440: 0x8e390048  lw          $t9, 0x48($s1)
    ctx->pc = 0x391440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_391444:
    // 0x391444: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x391444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_391448:
    // 0x391448: 0x320f809  jalr        $t9
label_39144c:
    if (ctx->pc == 0x39144Cu) {
        ctx->pc = 0x39144Cu;
            // 0x39144c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x391450u;
        goto label_391450;
    }
    ctx->pc = 0x391448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x391450u);
        ctx->pc = 0x39144Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391448u;
            // 0x39144c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x391450u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x391450u; }
            if (ctx->pc != 0x391450u) { return; }
        }
        }
    }
    ctx->pc = 0x391450u;
label_391450:
    // 0x391450: 0x100000dc  b           . + 4 + (0xDC << 2)
label_391454:
    if (ctx->pc == 0x391454u) {
        ctx->pc = 0x391454u;
            // 0x391454: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x391458u;
        goto label_391458;
    }
    ctx->pc = 0x391450u;
    {
        const bool branch_taken_0x391450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391450u;
            // 0x391454: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391450) {
            ctx->pc = 0x3917C4u;
            goto label_3917c4;
        }
    }
    ctx->pc = 0x391458u;
label_391458:
    // 0x391458: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x391458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_39145c:
    // 0x39145c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39145cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391460:
    // 0x391460: 0x0  nop
    ctx->pc = 0x391460u;
    // NOP
label_391464:
    // 0x391464: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x391464u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_391468:
    // 0x391468: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_39146c:
    if (ctx->pc == 0x39146Cu) {
        ctx->pc = 0x39146Cu;
            // 0x39146c: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x391470u;
        goto label_391470;
    }
    ctx->pc = 0x391468u;
    {
        const bool branch_taken_0x391468 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39146Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391468u;
            // 0x39146c: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391468) {
            ctx->pc = 0x391488u;
            goto label_391488;
        }
    }
    ctx->pc = 0x391470u;
label_391470:
    // 0x391470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x391470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391474:
    // 0x391474: 0x0  nop
    ctx->pc = 0x391474u;
    // NOP
label_391478:
    // 0x391478: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x391478u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39147c:
    // 0x39147c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_391480:
    if (ctx->pc == 0x391480u) {
        ctx->pc = 0x391484u;
        goto label_391484;
    }
    ctx->pc = 0x39147Cu;
    {
        const bool branch_taken_0x39147c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39147c) {
            ctx->pc = 0x391488u;
            goto label_391488;
        }
    }
    ctx->pc = 0x391484u;
label_391484:
    // 0x391484: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x391484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391488:
    // 0x391488: 0x108000cd  beqz        $a0, . + 4 + (0xCD << 2)
label_39148c:
    if (ctx->pc == 0x39148Cu) {
        ctx->pc = 0x391490u;
        goto label_391490;
    }
    ctx->pc = 0x391488u;
    {
        const bool branch_taken_0x391488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x391488) {
            ctx->pc = 0x3917C0u;
            goto label_3917c0;
        }
    }
    ctx->pc = 0x391490u;
label_391490:
    // 0x391490: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x391490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_391494:
    // 0x391494: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x391494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_391498:
    // 0x391498: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x391498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39149c:
    // 0x39149c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x39149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3914a0:
    // 0x3914a0: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x3914a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_3914a4:
    // 0x3914a4: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3914a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3914a8:
    // 0x3914a8: 0xc08914c  jal         func_224530
label_3914ac:
    if (ctx->pc == 0x3914ACu) {
        ctx->pc = 0x3914ACu;
            // 0x3914ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3914B0u;
        goto label_3914b0;
    }
    ctx->pc = 0x3914A8u;
    SET_GPR_U32(ctx, 31, 0x3914B0u);
    ctx->pc = 0x3914ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3914A8u;
            // 0x3914ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3914B0u; }
        if (ctx->pc != 0x3914B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3914B0u; }
        if (ctx->pc != 0x3914B0u) { return; }
    }
    ctx->pc = 0x3914B0u;
label_3914b0:
    // 0x3914b0: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3914b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3914b4:
    // 0x3914b4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3914b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3914b8:
    // 0x3914b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3914b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3914bc:
    // 0x3914bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3914bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3914c0:
    // 0x3914c0: 0x8ca40214  lw          $a0, 0x214($a1)
    ctx->pc = 0x3914c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_3914c4:
    // 0x3914c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3914c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3914c8:
    // 0x3914c8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3914c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3914cc:
    // 0x3914cc: 0xaca30214  sw          $v1, 0x214($a1)
    ctx->pc = 0x3914ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 532), GPR_U32(ctx, 3));
label_3914d0:
    // 0x3914d0: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3914d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3914d4:
    // 0x3914d4: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x3914d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_3914d8:
    // 0x3914d8: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x3914d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3914dc:
    // 0x3914dc: 0x601827  not         $v1, $v1
    ctx->pc = 0x3914dcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3914e0:
    // 0x3914e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3914e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3914e4:
    // 0x3914e4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3914e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_3914e8:
    // 0x3914e8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3914e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3914ec:
    // 0x3914ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3914ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3914f0:
    // 0x3914f0: 0xc08bff0  jal         func_22FFC0
label_3914f4:
    if (ctx->pc == 0x3914F4u) {
        ctx->pc = 0x3914F4u;
            // 0x3914f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3914F8u;
        goto label_3914f8;
    }
    ctx->pc = 0x3914F0u;
    SET_GPR_U32(ctx, 31, 0x3914F8u);
    ctx->pc = 0x3914F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3914F0u;
            // 0x3914f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3914F8u; }
        if (ctx->pc != 0x3914F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3914F8u; }
        if (ctx->pc != 0x3914F8u) { return; }
    }
    ctx->pc = 0x3914F8u;
label_3914f8:
    // 0x3914f8: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x3914f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_3914fc:
    // 0x3914fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3914fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_391500:
    // 0x391500: 0xc4740020  lwc1        $f20, 0x20($v1)
    ctx->pc = 0x391500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_391504:
    // 0x391504: 0xc074740  jal         func_1D1D00
label_391508:
    if (ctx->pc == 0x391508u) {
        ctx->pc = 0x391508u;
            // 0x391508: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x39150Cu;
        goto label_39150c;
    }
    ctx->pc = 0x391504u;
    SET_GPR_U32(ctx, 31, 0x39150Cu);
    ctx->pc = 0x391508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391504u;
            // 0x391508: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39150Cu; }
        if (ctx->pc != 0x39150Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39150Cu; }
        if (ctx->pc != 0x39150Cu) { return; }
    }
    ctx->pc = 0x39150Cu;
label_39150c:
    // 0x39150c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_391510:
    if (ctx->pc == 0x391510u) {
        ctx->pc = 0x391510u;
            // 0x391510: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x391514u;
        goto label_391514;
    }
    ctx->pc = 0x39150Cu;
    {
        const bool branch_taken_0x39150c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x39150c) {
            ctx->pc = 0x391510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39150Cu;
            // 0x391510: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391520u;
            goto label_391520;
        }
    }
    ctx->pc = 0x391514u;
label_391514:
    // 0x391514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391518:
    // 0x391518: 0x10000007  b           . + 4 + (0x7 << 2)
label_39151c:
    if (ctx->pc == 0x39151Cu) {
        ctx->pc = 0x39151Cu;
            // 0x39151c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x391520u;
        goto label_391520;
    }
    ctx->pc = 0x391518u;
    {
        const bool branch_taken_0x391518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39151Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x391518u;
            // 0x39151c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x391518) {
            ctx->pc = 0x391538u;
            goto label_391538;
        }
    }
    ctx->pc = 0x391520u;
label_391520:
    // 0x391520: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x391520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_391524:
    // 0x391524: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x391524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_391528:
    // 0x391528: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x391528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39152c:
    // 0x39152c: 0x0  nop
    ctx->pc = 0x39152cu;
    // NOP
label_391530:
    // 0x391530: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x391530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_391534:
    // 0x391534: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x391534u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_391538:
    // 0x391538: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x391538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_39153c:
    // 0x39153c: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x39153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_391540:
    // 0x391540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x391540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391544:
    // 0x391544: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x391544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_391548:
    // 0x391548: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x391548u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39154c:
    // 0x39154c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x39154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_391550:
    // 0x391550: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x391550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_391554:
    // 0x391554: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x391554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391558:
    // 0x391558: 0x46016018  adda.s      $f12, $f1
    ctx->pc = 0x391558u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_39155c:
    // 0x39155c: 0x4602a05c  madd.s      $f1, $f20, $f2
    ctx->pc = 0x39155cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_391560:
    // 0x391560: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x391560u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[13] = ctx->f[1] / ctx->f[0];
label_391564:
    // 0x391564: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x391564u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_391568:
    // 0x391568: 0x0  nop
    ctx->pc = 0x391568u;
    // NOP
label_39156c:
    // 0x39156c: 0x0  nop
    ctx->pc = 0x39156cu;
    // NOP
label_391570:
    // 0x391570: 0xc04cbd8  jal         func_132F60
label_391574:
    if (ctx->pc == 0x391574u) {
        ctx->pc = 0x391578u;
        goto label_391578;
    }
    ctx->pc = 0x391570u;
    SET_GPR_U32(ctx, 31, 0x391578u);
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391578u; }
        if (ctx->pc != 0x391578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391578u; }
        if (ctx->pc != 0x391578u) { return; }
    }
    ctx->pc = 0x391578u;
label_391578:
    // 0x391578: 0x26050580  addiu       $a1, $s0, 0x580
    ctx->pc = 0x391578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
label_39157c:
    // 0x39157c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x39157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_391580:
    // 0x391580: 0xc04cca0  jal         func_133280
label_391584:
    if (ctx->pc == 0x391584u) {
        ctx->pc = 0x391584u;
            // 0x391584: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x391588u;
        goto label_391588;
    }
    ctx->pc = 0x391580u;
    SET_GPR_U32(ctx, 31, 0x391588u);
    ctx->pc = 0x391584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391580u;
            // 0x391584: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391588u; }
        if (ctx->pc != 0x391588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391588u; }
        if (ctx->pc != 0x391588u) { return; }
    }
    ctx->pc = 0x391588u;
label_391588:
    // 0x391588: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39158c:
    // 0x39158c: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x39158cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_391590:
    // 0x391590: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x391590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_391594:
    // 0x391594: 0xc7a60060  lwc1        $f6, 0x60($sp)
    ctx->pc = 0x391594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_391598:
    // 0x391598: 0xc7a50064  lwc1        $f5, 0x64($sp)
    ctx->pc = 0x391598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39159c:
    // 0x39159c: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x39159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3915a0:
    // 0x3915a0: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3915a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_3915a4:
    // 0x3915a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3915a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3915a8:
    // 0x3915a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3915a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3915ac:
    // 0x3915ac: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3915acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3915b0:
    // 0x3915b0: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x3915b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3915b4:
    // 0x3915b4: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x3915b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3915b8:
    // 0x3915b8: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x3915b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3915bc:
    // 0x3915bc: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x3915bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3915c0:
    // 0x3915c0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x3915c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3915c4:
    // 0x3915c4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3915c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3915c8:
    // 0x3915c8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3915c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3915cc:
    // 0x3915cc: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x3915ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3915d0:
    // 0x3915d0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3915d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3915d4:
    // 0x3915d4: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x3915d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3915d8:
    // 0x3915d8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3915d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3915dc:
    // 0x3915dc: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x3915dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3915e0:
    // 0x3915e0: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3915e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3915e4:
    // 0x3915e4: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x3915e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3915e8:
    // 0x3915e8: 0xc088b74  jal         func_222DD0
label_3915ec:
    if (ctx->pc == 0x3915ECu) {
        ctx->pc = 0x3915ECu;
            // 0x3915ec: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x3915F0u;
        goto label_3915f0;
    }
    ctx->pc = 0x3915E8u;
    SET_GPR_U32(ctx, 31, 0x3915F0u);
    ctx->pc = 0x3915ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3915E8u;
            // 0x3915ec: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3915F0u; }
        if (ctx->pc != 0x3915F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3915F0u; }
        if (ctx->pc != 0x3915F0u) { return; }
    }
    ctx->pc = 0x3915F0u;
label_3915f0:
    // 0x3915f0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3915f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3915f4:
    // 0x3915f4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3915f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3915f8:
    // 0x3915f8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3915f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3915fc:
    // 0x3915fc: 0x320f809  jalr        $t9
label_391600:
    if (ctx->pc == 0x391600u) {
        ctx->pc = 0x391600u;
            // 0x391600: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x391604u;
        goto label_391604;
    }
    ctx->pc = 0x3915FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x391604u);
        ctx->pc = 0x391600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3915FCu;
            // 0x391600: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x391604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x391604u; }
            if (ctx->pc != 0x391604u) { return; }
        }
        }
    }
    ctx->pc = 0x391604u;
label_391604:
    // 0x391604: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_391608:
    // 0x391608: 0xc074740  jal         func_1D1D00
label_39160c:
    if (ctx->pc == 0x39160Cu) {
        ctx->pc = 0x39160Cu;
            // 0x39160c: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x391610u;
        goto label_391610;
    }
    ctx->pc = 0x391608u;
    SET_GPR_U32(ctx, 31, 0x391610u);
    ctx->pc = 0x39160Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391608u;
            // 0x39160c: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391610u; }
        if (ctx->pc != 0x391610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391610u; }
        if (ctx->pc != 0x391610u) { return; }
    }
    ctx->pc = 0x391610u;
label_391610:
    // 0x391610: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_391614:
    if (ctx->pc == 0x391614u) {
        ctx->pc = 0x391614u;
            // 0x391614: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x391618u;
        goto label_391618;
    }
    ctx->pc = 0x391610u;
    {
        const bool branch_taken_0x391610 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x391610) {
            ctx->pc = 0x391614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391610u;
            // 0x391614: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391624u;
            goto label_391624;
        }
    }
    ctx->pc = 0x391618u;
label_391618:
    // 0x391618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39161c:
    // 0x39161c: 0x10000007  b           . + 4 + (0x7 << 2)
label_391620:
    if (ctx->pc == 0x391620u) {
        ctx->pc = 0x391620u;
            // 0x391620: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x391624u;
        goto label_391624;
    }
    ctx->pc = 0x39161Cu;
    {
        const bool branch_taken_0x39161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39161Cu;
            // 0x391620: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39161c) {
            ctx->pc = 0x39163Cu;
            goto label_39163c;
        }
    }
    ctx->pc = 0x391624u;
label_391624:
    // 0x391624: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x391624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_391628:
    // 0x391628: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x391628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39162c:
    // 0x39162c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39162cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391630:
    // 0x391630: 0x0  nop
    ctx->pc = 0x391630u;
    // NOP
label_391634:
    // 0x391634: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x391634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_391638:
    // 0x391638: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x391638u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39163c:
    // 0x39163c: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39163cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_391640:
    // 0x391640: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x391640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_391644:
    // 0x391644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391648:
    // 0x391648: 0x0  nop
    ctx->pc = 0x391648u;
    // NOP
label_39164c:
    // 0x39164c: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x39164cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_391650:
    // 0x391650: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x391650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_391654:
    // 0x391654: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x391654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_391658:
    // 0x391658: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x391658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39165c:
    // 0x39165c: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x39165cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_391660:
    // 0x391660: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x391660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391664:
    // 0x391664: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x391664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_391668:
    // 0x391668: 0xc074740  jal         func_1D1D00
label_39166c:
    if (ctx->pc == 0x39166Cu) {
        ctx->pc = 0x39166Cu;
            // 0x39166c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x391670u;
        goto label_391670;
    }
    ctx->pc = 0x391668u;
    SET_GPR_U32(ctx, 31, 0x391670u);
    ctx->pc = 0x39166Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391668u;
            // 0x39166c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391670u; }
        if (ctx->pc != 0x391670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391670u; }
        if (ctx->pc != 0x391670u) { return; }
    }
    ctx->pc = 0x391670u;
label_391670:
    // 0x391670: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_391674:
    if (ctx->pc == 0x391674u) {
        ctx->pc = 0x391674u;
            // 0x391674: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x391678u;
        goto label_391678;
    }
    ctx->pc = 0x391670u;
    {
        const bool branch_taken_0x391670 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x391670) {
            ctx->pc = 0x391674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x391670u;
            // 0x391674: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x391684u;
            goto label_391684;
        }
    }
    ctx->pc = 0x391678u;
label_391678:
    // 0x391678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39167c:
    // 0x39167c: 0x10000007  b           . + 4 + (0x7 << 2)
label_391680:
    if (ctx->pc == 0x391680u) {
        ctx->pc = 0x391680u;
            // 0x391680: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x391684u;
        goto label_391684;
    }
    ctx->pc = 0x39167Cu;
    {
        const bool branch_taken_0x39167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39167Cu;
            // 0x391680: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39167c) {
            ctx->pc = 0x39169Cu;
            goto label_39169c;
        }
    }
    ctx->pc = 0x391684u;
label_391684:
    // 0x391684: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x391684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_391688:
    // 0x391688: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x391688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39168c:
    // 0x39168c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39168cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391690:
    // 0x391690: 0x0  nop
    ctx->pc = 0x391690u;
    // NOP
label_391694:
    // 0x391694: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x391694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_391698:
    // 0x391698: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x391698u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39169c:
    // 0x39169c: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39169cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_3916a0:
    // 0x3916a0: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x3916a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_3916a4:
    // 0x3916a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3916a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3916a8:
    // 0x3916a8: 0x0  nop
    ctx->pc = 0x3916a8u;
    // NOP
label_3916ac:
    // 0x3916ac: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x3916acu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3916b0:
    // 0x3916b0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3916b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_3916b4:
    // 0x3916b4: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x3916b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_3916b8:
    // 0x3916b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3916b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3916bc:
    // 0x3916bc: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x3916bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_3916c0:
    // 0x3916c0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3916c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3916c4:
    // 0x3916c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3916c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3916c8:
    // 0x3916c8: 0xc074740  jal         func_1D1D00
label_3916cc:
    if (ctx->pc == 0x3916CCu) {
        ctx->pc = 0x3916CCu;
            // 0x3916cc: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3916D0u;
        goto label_3916d0;
    }
    ctx->pc = 0x3916C8u;
    SET_GPR_U32(ctx, 31, 0x3916D0u);
    ctx->pc = 0x3916CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3916C8u;
            // 0x3916cc: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3916D0u; }
        if (ctx->pc != 0x3916D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3916D0u; }
        if (ctx->pc != 0x3916D0u) { return; }
    }
    ctx->pc = 0x3916D0u;
label_3916d0:
    // 0x3916d0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3916d4:
    if (ctx->pc == 0x3916D4u) {
        ctx->pc = 0x3916D4u;
            // 0x3916d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3916D8u;
        goto label_3916d8;
    }
    ctx->pc = 0x3916D0u;
    {
        const bool branch_taken_0x3916d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3916d0) {
            ctx->pc = 0x3916D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3916D0u;
            // 0x3916d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3916E4u;
            goto label_3916e4;
        }
    }
    ctx->pc = 0x3916D8u;
label_3916d8:
    // 0x3916d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3916d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3916dc:
    // 0x3916dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3916e0:
    if (ctx->pc == 0x3916E0u) {
        ctx->pc = 0x3916E0u;
            // 0x3916e0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3916E4u;
        goto label_3916e4;
    }
    ctx->pc = 0x3916DCu;
    {
        const bool branch_taken_0x3916dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3916E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3916DCu;
            // 0x3916e0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3916dc) {
            ctx->pc = 0x3916FCu;
            goto label_3916fc;
        }
    }
    ctx->pc = 0x3916E4u;
label_3916e4:
    // 0x3916e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3916e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3916e8:
    // 0x3916e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3916e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3916ec:
    // 0x3916ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3916ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3916f0:
    // 0x3916f0: 0x0  nop
    ctx->pc = 0x3916f0u;
    // NOP
label_3916f4:
    // 0x3916f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3916f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3916f8:
    // 0x3916f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3916f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3916fc:
    // 0x3916fc: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x3916fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_391700:
    // 0x391700: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x391700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_391704:
    // 0x391704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_391708:
    // 0x391708: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x391708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_39170c:
    // 0x39170c: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x39170cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_391710:
    // 0x391710: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x391710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_391714:
    // 0x391714: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x391714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_391718:
    // 0x391718: 0x3446fa35  ori         $a2, $v0, 0xFA35
    ctx->pc = 0x391718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_39171c:
    // 0x39171c: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x39171cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
label_391720:
    // 0x391720: 0x34430a92  ori         $v1, $v0, 0xA92
    ctx->pc = 0x391720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_391724:
    // 0x391724: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x391724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_391728:
    // 0x391728: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x391728u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39172c:
    // 0x39172c: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x39172cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_391730:
    // 0x391730: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x391730u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_391734:
    // 0x391734: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x391734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_391738:
    // 0x391738: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x391738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_39173c:
    // 0x39173c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x39173cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_391740:
    // 0x391740: 0x0  nop
    ctx->pc = 0x391740u;
    // NOP
label_391744:
    // 0x391744: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x391744u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_391748:
    // 0x391748: 0x4605001d  msub.s      $f0, $f0, $f5
    ctx->pc = 0x391748u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
label_39174c:
    // 0x39174c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x39174cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_391750:
    // 0x391750: 0x0  nop
    ctx->pc = 0x391750u;
    // NOP
label_391754:
    // 0x391754: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x391754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_391758:
    // 0x391758: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x391758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_39175c:
    // 0x39175c: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x39175cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_391760:
    // 0x391760: 0x46141818  adda.s      $f3, $f20
    ctx->pc = 0x391760u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_391764:
    // 0x391764: 0x4616005d  msub.s      $f1, $f0, $f22
    ctx->pc = 0x391764u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_391768:
    // 0x391768: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x391768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_39176c:
    // 0x39176c: 0x46151818  adda.s      $f3, $f21
    ctx->pc = 0x39176cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_391770:
    // 0x391770: 0x4617001d  msub.s      $f0, $f0, $f23
    ctx->pc = 0x391770u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[23]));
label_391774:
    // 0x391774: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x391774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_391778:
    // 0x391778: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x391778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_39177c:
    // 0x39177c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x39177cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_391780:
    // 0x391780: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x391780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_391784:
    // 0x391784: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x391784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_391788:
    // 0x391788: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x391788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_39178c:
    // 0x39178c: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x39178cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_391790:
    // 0x391790: 0xc088b74  jal         func_222DD0
label_391794:
    if (ctx->pc == 0x391794u) {
        ctx->pc = 0x391794u;
            // 0x391794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x391798u;
        goto label_391798;
    }
    ctx->pc = 0x391790u;
    SET_GPR_U32(ctx, 31, 0x391798u);
    ctx->pc = 0x391794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x391790u;
            // 0x391794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391798u; }
        if (ctx->pc != 0x391798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x391798u; }
        if (ctx->pc != 0x391798u) { return; }
    }
    ctx->pc = 0x391798u;
label_391798:
    // 0x391798: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x391798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39179c:
    // 0x39179c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x39179cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3917a0:
    // 0x3917a0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x3917a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_3917a4:
    // 0x3917a4: 0x320f809  jalr        $t9
label_3917a8:
    if (ctx->pc == 0x3917A8u) {
        ctx->pc = 0x3917A8u;
            // 0x3917a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3917ACu;
        goto label_3917ac;
    }
    ctx->pc = 0x3917A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3917ACu);
        ctx->pc = 0x3917A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3917A4u;
            // 0x3917a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3917ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3917ACu; }
            if (ctx->pc != 0x3917ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3917ACu;
label_3917ac:
    // 0x3917ac: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3917acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3917b0:
    // 0x3917b0: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x3917b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_3917b4:
    // 0x3917b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3917b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3917b8:
    // 0x3917b8: 0xac850160  sw          $a1, 0x160($a0)
    ctx->pc = 0x3917b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 5));
label_3917bc:
    // 0x3917bc: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x3917bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_3917c0:
    // 0x3917c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3917c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3917c4:
    // 0x3917c4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3917c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3917c8:
    // 0x3917c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3917c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3917cc:
    // 0x3917cc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3917ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3917d0:
    // 0x3917d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3917d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3917d4:
    // 0x3917d4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3917d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3917d8:
    // 0x3917d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3917d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3917dc:
    // 0x3917dc: 0x3e00008  jr          $ra
label_3917e0:
    if (ctx->pc == 0x3917E0u) {
        ctx->pc = 0x3917E0u;
            // 0x3917e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3917E4u;
        goto label_3917e4;
    }
    ctx->pc = 0x3917DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3917E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3917DCu;
            // 0x3917e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3917E4u;
label_3917e4:
    // 0x3917e4: 0x0  nop
    ctx->pc = 0x3917e4u;
    // NOP
label_3917e8:
    // 0x3917e8: 0x0  nop
    ctx->pc = 0x3917e8u;
    // NOP
label_3917ec:
    // 0x3917ec: 0x0  nop
    ctx->pc = 0x3917ecu;
    // NOP
}
