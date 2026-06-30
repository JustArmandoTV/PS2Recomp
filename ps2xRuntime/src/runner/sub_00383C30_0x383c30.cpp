#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00383C30
// Address: 0x383c30 - 0x384370
void sub_00383C30_0x383c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383C30_0x383c30");
#endif

    switch (ctx->pc) {
        case 0x383c30u: goto label_383c30;
        case 0x383c34u: goto label_383c34;
        case 0x383c38u: goto label_383c38;
        case 0x383c3cu: goto label_383c3c;
        case 0x383c40u: goto label_383c40;
        case 0x383c44u: goto label_383c44;
        case 0x383c48u: goto label_383c48;
        case 0x383c4cu: goto label_383c4c;
        case 0x383c50u: goto label_383c50;
        case 0x383c54u: goto label_383c54;
        case 0x383c58u: goto label_383c58;
        case 0x383c5cu: goto label_383c5c;
        case 0x383c60u: goto label_383c60;
        case 0x383c64u: goto label_383c64;
        case 0x383c68u: goto label_383c68;
        case 0x383c6cu: goto label_383c6c;
        case 0x383c70u: goto label_383c70;
        case 0x383c74u: goto label_383c74;
        case 0x383c78u: goto label_383c78;
        case 0x383c7cu: goto label_383c7c;
        case 0x383c80u: goto label_383c80;
        case 0x383c84u: goto label_383c84;
        case 0x383c88u: goto label_383c88;
        case 0x383c8cu: goto label_383c8c;
        case 0x383c90u: goto label_383c90;
        case 0x383c94u: goto label_383c94;
        case 0x383c98u: goto label_383c98;
        case 0x383c9cu: goto label_383c9c;
        case 0x383ca0u: goto label_383ca0;
        case 0x383ca4u: goto label_383ca4;
        case 0x383ca8u: goto label_383ca8;
        case 0x383cacu: goto label_383cac;
        case 0x383cb0u: goto label_383cb0;
        case 0x383cb4u: goto label_383cb4;
        case 0x383cb8u: goto label_383cb8;
        case 0x383cbcu: goto label_383cbc;
        case 0x383cc0u: goto label_383cc0;
        case 0x383cc4u: goto label_383cc4;
        case 0x383cc8u: goto label_383cc8;
        case 0x383cccu: goto label_383ccc;
        case 0x383cd0u: goto label_383cd0;
        case 0x383cd4u: goto label_383cd4;
        case 0x383cd8u: goto label_383cd8;
        case 0x383cdcu: goto label_383cdc;
        case 0x383ce0u: goto label_383ce0;
        case 0x383ce4u: goto label_383ce4;
        case 0x383ce8u: goto label_383ce8;
        case 0x383cecu: goto label_383cec;
        case 0x383cf0u: goto label_383cf0;
        case 0x383cf4u: goto label_383cf4;
        case 0x383cf8u: goto label_383cf8;
        case 0x383cfcu: goto label_383cfc;
        case 0x383d00u: goto label_383d00;
        case 0x383d04u: goto label_383d04;
        case 0x383d08u: goto label_383d08;
        case 0x383d0cu: goto label_383d0c;
        case 0x383d10u: goto label_383d10;
        case 0x383d14u: goto label_383d14;
        case 0x383d18u: goto label_383d18;
        case 0x383d1cu: goto label_383d1c;
        case 0x383d20u: goto label_383d20;
        case 0x383d24u: goto label_383d24;
        case 0x383d28u: goto label_383d28;
        case 0x383d2cu: goto label_383d2c;
        case 0x383d30u: goto label_383d30;
        case 0x383d34u: goto label_383d34;
        case 0x383d38u: goto label_383d38;
        case 0x383d3cu: goto label_383d3c;
        case 0x383d40u: goto label_383d40;
        case 0x383d44u: goto label_383d44;
        case 0x383d48u: goto label_383d48;
        case 0x383d4cu: goto label_383d4c;
        case 0x383d50u: goto label_383d50;
        case 0x383d54u: goto label_383d54;
        case 0x383d58u: goto label_383d58;
        case 0x383d5cu: goto label_383d5c;
        case 0x383d60u: goto label_383d60;
        case 0x383d64u: goto label_383d64;
        case 0x383d68u: goto label_383d68;
        case 0x383d6cu: goto label_383d6c;
        case 0x383d70u: goto label_383d70;
        case 0x383d74u: goto label_383d74;
        case 0x383d78u: goto label_383d78;
        case 0x383d7cu: goto label_383d7c;
        case 0x383d80u: goto label_383d80;
        case 0x383d84u: goto label_383d84;
        case 0x383d88u: goto label_383d88;
        case 0x383d8cu: goto label_383d8c;
        case 0x383d90u: goto label_383d90;
        case 0x383d94u: goto label_383d94;
        case 0x383d98u: goto label_383d98;
        case 0x383d9cu: goto label_383d9c;
        case 0x383da0u: goto label_383da0;
        case 0x383da4u: goto label_383da4;
        case 0x383da8u: goto label_383da8;
        case 0x383dacu: goto label_383dac;
        case 0x383db0u: goto label_383db0;
        case 0x383db4u: goto label_383db4;
        case 0x383db8u: goto label_383db8;
        case 0x383dbcu: goto label_383dbc;
        case 0x383dc0u: goto label_383dc0;
        case 0x383dc4u: goto label_383dc4;
        case 0x383dc8u: goto label_383dc8;
        case 0x383dccu: goto label_383dcc;
        case 0x383dd0u: goto label_383dd0;
        case 0x383dd4u: goto label_383dd4;
        case 0x383dd8u: goto label_383dd8;
        case 0x383ddcu: goto label_383ddc;
        case 0x383de0u: goto label_383de0;
        case 0x383de4u: goto label_383de4;
        case 0x383de8u: goto label_383de8;
        case 0x383decu: goto label_383dec;
        case 0x383df0u: goto label_383df0;
        case 0x383df4u: goto label_383df4;
        case 0x383df8u: goto label_383df8;
        case 0x383dfcu: goto label_383dfc;
        case 0x383e00u: goto label_383e00;
        case 0x383e04u: goto label_383e04;
        case 0x383e08u: goto label_383e08;
        case 0x383e0cu: goto label_383e0c;
        case 0x383e10u: goto label_383e10;
        case 0x383e14u: goto label_383e14;
        case 0x383e18u: goto label_383e18;
        case 0x383e1cu: goto label_383e1c;
        case 0x383e20u: goto label_383e20;
        case 0x383e24u: goto label_383e24;
        case 0x383e28u: goto label_383e28;
        case 0x383e2cu: goto label_383e2c;
        case 0x383e30u: goto label_383e30;
        case 0x383e34u: goto label_383e34;
        case 0x383e38u: goto label_383e38;
        case 0x383e3cu: goto label_383e3c;
        case 0x383e40u: goto label_383e40;
        case 0x383e44u: goto label_383e44;
        case 0x383e48u: goto label_383e48;
        case 0x383e4cu: goto label_383e4c;
        case 0x383e50u: goto label_383e50;
        case 0x383e54u: goto label_383e54;
        case 0x383e58u: goto label_383e58;
        case 0x383e5cu: goto label_383e5c;
        case 0x383e60u: goto label_383e60;
        case 0x383e64u: goto label_383e64;
        case 0x383e68u: goto label_383e68;
        case 0x383e6cu: goto label_383e6c;
        case 0x383e70u: goto label_383e70;
        case 0x383e74u: goto label_383e74;
        case 0x383e78u: goto label_383e78;
        case 0x383e7cu: goto label_383e7c;
        case 0x383e80u: goto label_383e80;
        case 0x383e84u: goto label_383e84;
        case 0x383e88u: goto label_383e88;
        case 0x383e8cu: goto label_383e8c;
        case 0x383e90u: goto label_383e90;
        case 0x383e94u: goto label_383e94;
        case 0x383e98u: goto label_383e98;
        case 0x383e9cu: goto label_383e9c;
        case 0x383ea0u: goto label_383ea0;
        case 0x383ea4u: goto label_383ea4;
        case 0x383ea8u: goto label_383ea8;
        case 0x383eacu: goto label_383eac;
        case 0x383eb0u: goto label_383eb0;
        case 0x383eb4u: goto label_383eb4;
        case 0x383eb8u: goto label_383eb8;
        case 0x383ebcu: goto label_383ebc;
        case 0x383ec0u: goto label_383ec0;
        case 0x383ec4u: goto label_383ec4;
        case 0x383ec8u: goto label_383ec8;
        case 0x383eccu: goto label_383ecc;
        case 0x383ed0u: goto label_383ed0;
        case 0x383ed4u: goto label_383ed4;
        case 0x383ed8u: goto label_383ed8;
        case 0x383edcu: goto label_383edc;
        case 0x383ee0u: goto label_383ee0;
        case 0x383ee4u: goto label_383ee4;
        case 0x383ee8u: goto label_383ee8;
        case 0x383eecu: goto label_383eec;
        case 0x383ef0u: goto label_383ef0;
        case 0x383ef4u: goto label_383ef4;
        case 0x383ef8u: goto label_383ef8;
        case 0x383efcu: goto label_383efc;
        case 0x383f00u: goto label_383f00;
        case 0x383f04u: goto label_383f04;
        case 0x383f08u: goto label_383f08;
        case 0x383f0cu: goto label_383f0c;
        case 0x383f10u: goto label_383f10;
        case 0x383f14u: goto label_383f14;
        case 0x383f18u: goto label_383f18;
        case 0x383f1cu: goto label_383f1c;
        case 0x383f20u: goto label_383f20;
        case 0x383f24u: goto label_383f24;
        case 0x383f28u: goto label_383f28;
        case 0x383f2cu: goto label_383f2c;
        case 0x383f30u: goto label_383f30;
        case 0x383f34u: goto label_383f34;
        case 0x383f38u: goto label_383f38;
        case 0x383f3cu: goto label_383f3c;
        case 0x383f40u: goto label_383f40;
        case 0x383f44u: goto label_383f44;
        case 0x383f48u: goto label_383f48;
        case 0x383f4cu: goto label_383f4c;
        case 0x383f50u: goto label_383f50;
        case 0x383f54u: goto label_383f54;
        case 0x383f58u: goto label_383f58;
        case 0x383f5cu: goto label_383f5c;
        case 0x383f60u: goto label_383f60;
        case 0x383f64u: goto label_383f64;
        case 0x383f68u: goto label_383f68;
        case 0x383f6cu: goto label_383f6c;
        case 0x383f70u: goto label_383f70;
        case 0x383f74u: goto label_383f74;
        case 0x383f78u: goto label_383f78;
        case 0x383f7cu: goto label_383f7c;
        case 0x383f80u: goto label_383f80;
        case 0x383f84u: goto label_383f84;
        case 0x383f88u: goto label_383f88;
        case 0x383f8cu: goto label_383f8c;
        case 0x383f90u: goto label_383f90;
        case 0x383f94u: goto label_383f94;
        case 0x383f98u: goto label_383f98;
        case 0x383f9cu: goto label_383f9c;
        case 0x383fa0u: goto label_383fa0;
        case 0x383fa4u: goto label_383fa4;
        case 0x383fa8u: goto label_383fa8;
        case 0x383facu: goto label_383fac;
        case 0x383fb0u: goto label_383fb0;
        case 0x383fb4u: goto label_383fb4;
        case 0x383fb8u: goto label_383fb8;
        case 0x383fbcu: goto label_383fbc;
        case 0x383fc0u: goto label_383fc0;
        case 0x383fc4u: goto label_383fc4;
        case 0x383fc8u: goto label_383fc8;
        case 0x383fccu: goto label_383fcc;
        case 0x383fd0u: goto label_383fd0;
        case 0x383fd4u: goto label_383fd4;
        case 0x383fd8u: goto label_383fd8;
        case 0x383fdcu: goto label_383fdc;
        case 0x383fe0u: goto label_383fe0;
        case 0x383fe4u: goto label_383fe4;
        case 0x383fe8u: goto label_383fe8;
        case 0x383fecu: goto label_383fec;
        case 0x383ff0u: goto label_383ff0;
        case 0x383ff4u: goto label_383ff4;
        case 0x383ff8u: goto label_383ff8;
        case 0x383ffcu: goto label_383ffc;
        case 0x384000u: goto label_384000;
        case 0x384004u: goto label_384004;
        case 0x384008u: goto label_384008;
        case 0x38400cu: goto label_38400c;
        case 0x384010u: goto label_384010;
        case 0x384014u: goto label_384014;
        case 0x384018u: goto label_384018;
        case 0x38401cu: goto label_38401c;
        case 0x384020u: goto label_384020;
        case 0x384024u: goto label_384024;
        case 0x384028u: goto label_384028;
        case 0x38402cu: goto label_38402c;
        case 0x384030u: goto label_384030;
        case 0x384034u: goto label_384034;
        case 0x384038u: goto label_384038;
        case 0x38403cu: goto label_38403c;
        case 0x384040u: goto label_384040;
        case 0x384044u: goto label_384044;
        case 0x384048u: goto label_384048;
        case 0x38404cu: goto label_38404c;
        case 0x384050u: goto label_384050;
        case 0x384054u: goto label_384054;
        case 0x384058u: goto label_384058;
        case 0x38405cu: goto label_38405c;
        case 0x384060u: goto label_384060;
        case 0x384064u: goto label_384064;
        case 0x384068u: goto label_384068;
        case 0x38406cu: goto label_38406c;
        case 0x384070u: goto label_384070;
        case 0x384074u: goto label_384074;
        case 0x384078u: goto label_384078;
        case 0x38407cu: goto label_38407c;
        case 0x384080u: goto label_384080;
        case 0x384084u: goto label_384084;
        case 0x384088u: goto label_384088;
        case 0x38408cu: goto label_38408c;
        case 0x384090u: goto label_384090;
        case 0x384094u: goto label_384094;
        case 0x384098u: goto label_384098;
        case 0x38409cu: goto label_38409c;
        case 0x3840a0u: goto label_3840a0;
        case 0x3840a4u: goto label_3840a4;
        case 0x3840a8u: goto label_3840a8;
        case 0x3840acu: goto label_3840ac;
        case 0x3840b0u: goto label_3840b0;
        case 0x3840b4u: goto label_3840b4;
        case 0x3840b8u: goto label_3840b8;
        case 0x3840bcu: goto label_3840bc;
        case 0x3840c0u: goto label_3840c0;
        case 0x3840c4u: goto label_3840c4;
        case 0x3840c8u: goto label_3840c8;
        case 0x3840ccu: goto label_3840cc;
        case 0x3840d0u: goto label_3840d0;
        case 0x3840d4u: goto label_3840d4;
        case 0x3840d8u: goto label_3840d8;
        case 0x3840dcu: goto label_3840dc;
        case 0x3840e0u: goto label_3840e0;
        case 0x3840e4u: goto label_3840e4;
        case 0x3840e8u: goto label_3840e8;
        case 0x3840ecu: goto label_3840ec;
        case 0x3840f0u: goto label_3840f0;
        case 0x3840f4u: goto label_3840f4;
        case 0x3840f8u: goto label_3840f8;
        case 0x3840fcu: goto label_3840fc;
        case 0x384100u: goto label_384100;
        case 0x384104u: goto label_384104;
        case 0x384108u: goto label_384108;
        case 0x38410cu: goto label_38410c;
        case 0x384110u: goto label_384110;
        case 0x384114u: goto label_384114;
        case 0x384118u: goto label_384118;
        case 0x38411cu: goto label_38411c;
        case 0x384120u: goto label_384120;
        case 0x384124u: goto label_384124;
        case 0x384128u: goto label_384128;
        case 0x38412cu: goto label_38412c;
        case 0x384130u: goto label_384130;
        case 0x384134u: goto label_384134;
        case 0x384138u: goto label_384138;
        case 0x38413cu: goto label_38413c;
        case 0x384140u: goto label_384140;
        case 0x384144u: goto label_384144;
        case 0x384148u: goto label_384148;
        case 0x38414cu: goto label_38414c;
        case 0x384150u: goto label_384150;
        case 0x384154u: goto label_384154;
        case 0x384158u: goto label_384158;
        case 0x38415cu: goto label_38415c;
        case 0x384160u: goto label_384160;
        case 0x384164u: goto label_384164;
        case 0x384168u: goto label_384168;
        case 0x38416cu: goto label_38416c;
        case 0x384170u: goto label_384170;
        case 0x384174u: goto label_384174;
        case 0x384178u: goto label_384178;
        case 0x38417cu: goto label_38417c;
        case 0x384180u: goto label_384180;
        case 0x384184u: goto label_384184;
        case 0x384188u: goto label_384188;
        case 0x38418cu: goto label_38418c;
        case 0x384190u: goto label_384190;
        case 0x384194u: goto label_384194;
        case 0x384198u: goto label_384198;
        case 0x38419cu: goto label_38419c;
        case 0x3841a0u: goto label_3841a0;
        case 0x3841a4u: goto label_3841a4;
        case 0x3841a8u: goto label_3841a8;
        case 0x3841acu: goto label_3841ac;
        case 0x3841b0u: goto label_3841b0;
        case 0x3841b4u: goto label_3841b4;
        case 0x3841b8u: goto label_3841b8;
        case 0x3841bcu: goto label_3841bc;
        case 0x3841c0u: goto label_3841c0;
        case 0x3841c4u: goto label_3841c4;
        case 0x3841c8u: goto label_3841c8;
        case 0x3841ccu: goto label_3841cc;
        case 0x3841d0u: goto label_3841d0;
        case 0x3841d4u: goto label_3841d4;
        case 0x3841d8u: goto label_3841d8;
        case 0x3841dcu: goto label_3841dc;
        case 0x3841e0u: goto label_3841e0;
        case 0x3841e4u: goto label_3841e4;
        case 0x3841e8u: goto label_3841e8;
        case 0x3841ecu: goto label_3841ec;
        case 0x3841f0u: goto label_3841f0;
        case 0x3841f4u: goto label_3841f4;
        case 0x3841f8u: goto label_3841f8;
        case 0x3841fcu: goto label_3841fc;
        case 0x384200u: goto label_384200;
        case 0x384204u: goto label_384204;
        case 0x384208u: goto label_384208;
        case 0x38420cu: goto label_38420c;
        case 0x384210u: goto label_384210;
        case 0x384214u: goto label_384214;
        case 0x384218u: goto label_384218;
        case 0x38421cu: goto label_38421c;
        case 0x384220u: goto label_384220;
        case 0x384224u: goto label_384224;
        case 0x384228u: goto label_384228;
        case 0x38422cu: goto label_38422c;
        case 0x384230u: goto label_384230;
        case 0x384234u: goto label_384234;
        case 0x384238u: goto label_384238;
        case 0x38423cu: goto label_38423c;
        case 0x384240u: goto label_384240;
        case 0x384244u: goto label_384244;
        case 0x384248u: goto label_384248;
        case 0x38424cu: goto label_38424c;
        case 0x384250u: goto label_384250;
        case 0x384254u: goto label_384254;
        case 0x384258u: goto label_384258;
        case 0x38425cu: goto label_38425c;
        case 0x384260u: goto label_384260;
        case 0x384264u: goto label_384264;
        case 0x384268u: goto label_384268;
        case 0x38426cu: goto label_38426c;
        case 0x384270u: goto label_384270;
        case 0x384274u: goto label_384274;
        case 0x384278u: goto label_384278;
        case 0x38427cu: goto label_38427c;
        case 0x384280u: goto label_384280;
        case 0x384284u: goto label_384284;
        case 0x384288u: goto label_384288;
        case 0x38428cu: goto label_38428c;
        case 0x384290u: goto label_384290;
        case 0x384294u: goto label_384294;
        case 0x384298u: goto label_384298;
        case 0x38429cu: goto label_38429c;
        case 0x3842a0u: goto label_3842a0;
        case 0x3842a4u: goto label_3842a4;
        case 0x3842a8u: goto label_3842a8;
        case 0x3842acu: goto label_3842ac;
        case 0x3842b0u: goto label_3842b0;
        case 0x3842b4u: goto label_3842b4;
        case 0x3842b8u: goto label_3842b8;
        case 0x3842bcu: goto label_3842bc;
        case 0x3842c0u: goto label_3842c0;
        case 0x3842c4u: goto label_3842c4;
        case 0x3842c8u: goto label_3842c8;
        case 0x3842ccu: goto label_3842cc;
        case 0x3842d0u: goto label_3842d0;
        case 0x3842d4u: goto label_3842d4;
        case 0x3842d8u: goto label_3842d8;
        case 0x3842dcu: goto label_3842dc;
        case 0x3842e0u: goto label_3842e0;
        case 0x3842e4u: goto label_3842e4;
        case 0x3842e8u: goto label_3842e8;
        case 0x3842ecu: goto label_3842ec;
        case 0x3842f0u: goto label_3842f0;
        case 0x3842f4u: goto label_3842f4;
        case 0x3842f8u: goto label_3842f8;
        case 0x3842fcu: goto label_3842fc;
        case 0x384300u: goto label_384300;
        case 0x384304u: goto label_384304;
        case 0x384308u: goto label_384308;
        case 0x38430cu: goto label_38430c;
        case 0x384310u: goto label_384310;
        case 0x384314u: goto label_384314;
        case 0x384318u: goto label_384318;
        case 0x38431cu: goto label_38431c;
        case 0x384320u: goto label_384320;
        case 0x384324u: goto label_384324;
        case 0x384328u: goto label_384328;
        case 0x38432cu: goto label_38432c;
        case 0x384330u: goto label_384330;
        case 0x384334u: goto label_384334;
        case 0x384338u: goto label_384338;
        case 0x38433cu: goto label_38433c;
        case 0x384340u: goto label_384340;
        case 0x384344u: goto label_384344;
        case 0x384348u: goto label_384348;
        case 0x38434cu: goto label_38434c;
        case 0x384350u: goto label_384350;
        case 0x384354u: goto label_384354;
        case 0x384358u: goto label_384358;
        case 0x38435cu: goto label_38435c;
        case 0x384360u: goto label_384360;
        case 0x384364u: goto label_384364;
        case 0x384368u: goto label_384368;
        case 0x38436cu: goto label_38436c;
        default: break;
    }

    ctx->pc = 0x383c30u;

label_383c30:
    // 0x383c30: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x383c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_383c34:
    // 0x383c34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x383c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_383c38:
    // 0x383c38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x383c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_383c3c:
    // 0x383c3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x383c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_383c40:
    // 0x383c40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x383c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_383c44:
    // 0x383c44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x383c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383c48:
    // 0x383c48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x383c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_383c4c:
    // 0x383c4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x383c4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_383c50:
    // 0x383c50: 0x8c8301d0  lw          $v1, 0x1D0($a0)
    ctx->pc = 0x383c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 464)));
label_383c54:
    // 0x383c54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x383c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_383c58:
    // 0x383c58: 0x506401b5  beql        $v1, $a0, . + 4 + (0x1B5 << 2)
label_383c5c:
    if (ctx->pc == 0x383C5Cu) {
        ctx->pc = 0x383C5Cu;
            // 0x383c5c: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->pc = 0x383C60u;
        goto label_383c60;
    }
    ctx->pc = 0x383C58u;
    {
        const bool branch_taken_0x383c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x383c58) {
            ctx->pc = 0x383C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383C58u;
            // 0x383c5c: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
            ctx->pc = 0x384330u;
            goto label_384330;
        }
    }
    ctx->pc = 0x383C60u;
label_383c60:
    // 0x383c60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x383c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_383c64:
    // 0x383c64: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
label_383c68:
    if (ctx->pc == 0x383C68u) {
        ctx->pc = 0x383C68u;
            // 0x383c68: 0x8e4301d4  lw          $v1, 0x1D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
        ctx->pc = 0x383C6Cu;
        goto label_383c6c;
    }
    ctx->pc = 0x383C64u;
    {
        const bool branch_taken_0x383c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x383c64) {
            ctx->pc = 0x383C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383C64u;
            // 0x383c68: 0x8e4301d4  lw          $v1, 0x1D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383CC4u;
            goto label_383cc4;
        }
    }
    ctx->pc = 0x383C6Cu;
label_383c6c:
    // 0x383c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x383c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_383c70:
    // 0x383c70: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_383c74:
    if (ctx->pc == 0x383C74u) {
        ctx->pc = 0x383C74u;
            // 0x383c74: 0xc641033c  lwc1        $f1, 0x33C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x383C78u;
        goto label_383c78;
    }
    ctx->pc = 0x383C70u;
    {
        const bool branch_taken_0x383c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x383c70) {
            ctx->pc = 0x383C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383C70u;
            // 0x383c74: 0xc641033c  lwc1        $f1, 0x33C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x383C8Cu;
            goto label_383c8c;
        }
    }
    ctx->pc = 0x383C78u;
label_383c78:
    // 0x383c78: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_383c7c:
    if (ctx->pc == 0x383C7Cu) {
        ctx->pc = 0x383C7Cu;
            // 0x383c7c: 0xae4201d0  sw          $v0, 0x1D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 2));
        ctx->pc = 0x383C80u;
        goto label_383c80;
    }
    ctx->pc = 0x383C78u;
    {
        const bool branch_taken_0x383c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x383c78) {
            ctx->pc = 0x383C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383C78u;
            // 0x383c7c: 0xae4201d0  sw          $v0, 0x1D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383C88u;
            goto label_383c88;
        }
    }
    ctx->pc = 0x383C80u;
label_383c80:
    // 0x383c80: 0x100001b3  b           . + 4 + (0x1B3 << 2)
label_383c84:
    if (ctx->pc == 0x383C84u) {
        ctx->pc = 0x383C84u;
            // 0x383c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383C88u;
        goto label_383c88;
    }
    ctx->pc = 0x383C80u;
    {
        const bool branch_taken_0x383c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383C80u;
            // 0x383c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c80) {
            ctx->pc = 0x384350u;
            goto label_384350;
        }
    }
    ctx->pc = 0x383C88u;
label_383c88:
    // 0x383c88: 0xc641033c  lwc1        $f1, 0x33C($s2)
    ctx->pc = 0x383c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_383c8c:
    // 0x383c8c: 0xc6400338  lwc1        $f0, 0x338($s2)
    ctx->pc = 0x383c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_383c90:
    // 0x383c90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x383c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_383c94:
    // 0x383c94: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_383c98:
    if (ctx->pc == 0x383C98u) {
        ctx->pc = 0x383C98u;
            // 0x383c98: 0x26430210  addiu       $v1, $s2, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
        ctx->pc = 0x383C9Cu;
        goto label_383c9c;
    }
    ctx->pc = 0x383C94u;
    {
        const bool branch_taken_0x383c94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x383C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383C94u;
            // 0x383c98: 0x26430210  addiu       $v1, $s2, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c94) {
            ctx->pc = 0x383CA8u;
            goto label_383ca8;
        }
    }
    ctx->pc = 0x383C9Cu;
label_383c9c:
    // 0x383c9c: 0xac60012c  sw          $zero, 0x12C($v1)
    ctx->pc = 0x383c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 0));
label_383ca0:
    // 0x383ca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x383ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_383ca4:
    // 0x383ca4: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x383ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
label_383ca8:
    // 0x383ca8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x383ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_383cac:
    // 0x383cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x383cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_383cb0:
    // 0x383cb0: 0x146201a6  bne         $v1, $v0, . + 4 + (0x1A6 << 2)
label_383cb4:
    if (ctx->pc == 0x383CB4u) {
        ctx->pc = 0x383CB8u;
        goto label_383cb8;
    }
    ctx->pc = 0x383CB0u;
    {
        const bool branch_taken_0x383cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x383cb0) {
            ctx->pc = 0x38434Cu;
            goto label_38434c;
        }
    }
    ctx->pc = 0x383CB8u;
label_383cb8:
    // 0x383cb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x383cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_383cbc:
    // 0x383cbc: 0x100001a3  b           . + 4 + (0x1A3 << 2)
label_383cc0:
    if (ctx->pc == 0x383CC0u) {
        ctx->pc = 0x383CC0u;
            // 0x383cc0: 0xae4201d0  sw          $v0, 0x1D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 2));
        ctx->pc = 0x383CC4u;
        goto label_383cc4;
    }
    ctx->pc = 0x383CBCu;
    {
        const bool branch_taken_0x383cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383CBCu;
            // 0x383cc0: 0xae4201d0  sw          $v0, 0x1D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cbc) {
            ctx->pc = 0x38434Cu;
            goto label_38434c;
        }
    }
    ctx->pc = 0x383CC4u;
label_383cc4:
    // 0x383cc4: 0x8e510018  lw          $s1, 0x18($s2)
    ctx->pc = 0x383cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_383cc8:
    // 0x383cc8: 0x1064017d  beq         $v1, $a0, . + 4 + (0x17D << 2)
label_383ccc:
    if (ctx->pc == 0x383CCCu) {
        ctx->pc = 0x383CCCu;
            // 0x383ccc: 0x26500210  addiu       $s0, $s2, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
        ctx->pc = 0x383CD0u;
        goto label_383cd0;
    }
    ctx->pc = 0x383CC8u;
    {
        const bool branch_taken_0x383cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x383CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383CC8u;
            // 0x383ccc: 0x26500210  addiu       $s0, $s2, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cc8) {
            ctx->pc = 0x3842C0u;
            goto label_3842c0;
        }
    }
    ctx->pc = 0x383CD0u;
label_383cd0:
    // 0x383cd0: 0x506200d5  beql        $v1, $v0, . + 4 + (0xD5 << 2)
label_383cd4:
    if (ctx->pc == 0x383CD4u) {
        ctx->pc = 0x383CD4u;
            // 0x383cd4: 0x8e4403a4  lw          $a0, 0x3A4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 932)));
        ctx->pc = 0x383CD8u;
        goto label_383cd8;
    }
    ctx->pc = 0x383CD0u;
    {
        const bool branch_taken_0x383cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x383cd0) {
            ctx->pc = 0x383CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383CD0u;
            // 0x383cd4: 0x8e4403a4  lw          $a0, 0x3A4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 932)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x384028u;
            goto label_384028;
        }
    }
    ctx->pc = 0x383CD8u;
label_383cd8:
    // 0x383cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x383cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_383cdc:
    // 0x383cdc: 0x506200a0  beql        $v1, $v0, . + 4 + (0xA0 << 2)
label_383ce0:
    if (ctx->pc == 0x383CE0u) {
        ctx->pc = 0x383CE0u;
            // 0x383ce0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x383CE4u;
        goto label_383ce4;
    }
    ctx->pc = 0x383CDCu;
    {
        const bool branch_taken_0x383cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x383cdc) {
            ctx->pc = 0x383CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383CDCu;
            // 0x383ce0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383F60u;
            goto label_383f60;
        }
    }
    ctx->pc = 0x383CE4u;
label_383ce4:
    // 0x383ce4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_383ce8:
    if (ctx->pc == 0x383CE8u) {
        ctx->pc = 0x383CE8u;
            // 0x383ce8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x383CECu;
        goto label_383cec;
    }
    ctx->pc = 0x383CE4u;
    {
        const bool branch_taken_0x383ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x383ce4) {
            ctx->pc = 0x383CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383CE4u;
            // 0x383ce8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383CF4u;
            goto label_383cf4;
        }
    }
    ctx->pc = 0x383CECu;
label_383cec:
    // 0x383cec: 0x1000018a  b           . + 4 + (0x18A << 2)
label_383cf0:
    if (ctx->pc == 0x383CF0u) {
        ctx->pc = 0x383CF0u;
            // 0x383cf0: 0x8e4301d4  lw          $v1, 0x1D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
        ctx->pc = 0x383CF4u;
        goto label_383cf4;
    }
    ctx->pc = 0x383CECu;
    {
        const bool branch_taken_0x383cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383CECu;
            // 0x383cf0: 0x8e4301d4  lw          $v1, 0x1D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cec) {
            ctx->pc = 0x384318u;
            goto label_384318;
        }
    }
    ctx->pc = 0x383CF4u;
label_383cf4:
    // 0x383cf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x383cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_383cf8:
    // 0x383cf8: 0xc0d8834  jal         func_3620D0
label_383cfc:
    if (ctx->pc == 0x383CFCu) {
        ctx->pc = 0x383CFCu;
            // 0x383cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383D00u;
        goto label_383d00;
    }
    ctx->pc = 0x383CF8u;
    SET_GPR_U32(ctx, 31, 0x383D00u);
    ctx->pc = 0x383CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383CF8u;
            // 0x383cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D00u; }
        if (ctx->pc != 0x383D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D00u; }
        if (ctx->pc != 0x383D00u) { return; }
    }
    ctx->pc = 0x383D00u;
label_383d00:
    // 0x383d00: 0xc0e1224  jal         func_384890
label_383d04:
    if (ctx->pc == 0x383D04u) {
        ctx->pc = 0x383D04u;
            // 0x383d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383D08u;
        goto label_383d08;
    }
    ctx->pc = 0x383D00u;
    SET_GPR_U32(ctx, 31, 0x383D08u);
    ctx->pc = 0x383D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383D00u;
            // 0x383d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D08u; }
        if (ctx->pc != 0x383D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D08u; }
        if (ctx->pc != 0x383D08u) { return; }
    }
    ctx->pc = 0x383D08u;
label_383d08:
    // 0x383d08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x383d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383d0c:
    // 0x383d0c: 0xc04cc04  jal         func_133010
label_383d10:
    if (ctx->pc == 0x383D10u) {
        ctx->pc = 0x383D10u;
            // 0x383d10: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->pc = 0x383D14u;
        goto label_383d14;
    }
    ctx->pc = 0x383D0Cu;
    SET_GPR_U32(ctx, 31, 0x383D14u);
    ctx->pc = 0x383D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383D0Cu;
            // 0x383d10: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D14u; }
        if (ctx->pc != 0x383D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D14u; }
        if (ctx->pc != 0x383D14u) { return; }
    }
    ctx->pc = 0x383D14u;
label_383d14:
    // 0x383d14: 0xc0e1220  jal         func_384880
label_383d18:
    if (ctx->pc == 0x383D18u) {
        ctx->pc = 0x383D18u;
            // 0x383d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383D1Cu;
        goto label_383d1c;
    }
    ctx->pc = 0x383D14u;
    SET_GPR_U32(ctx, 31, 0x383D1Cu);
    ctx->pc = 0x383D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383D14u;
            // 0x383d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384880u;
    if (runtime->hasFunction(0x384880u)) {
        auto targetFn = runtime->lookupFunction(0x384880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D1Cu; }
        if (ctx->pc != 0x383D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384880_0x384880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D1Cu; }
        if (ctx->pc != 0x383D1Cu) { return; }
    }
    ctx->pc = 0x383D1Cu;
label_383d1c:
    // 0x383d1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x383d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383d20:
    // 0x383d20: 0xc04c720  jal         func_131C80
label_383d24:
    if (ctx->pc == 0x383D24u) {
        ctx->pc = 0x383D24u;
            // 0x383d24: 0x264401f0  addiu       $a0, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->pc = 0x383D28u;
        goto label_383d28;
    }
    ctx->pc = 0x383D20u;
    SET_GPR_U32(ctx, 31, 0x383D28u);
    ctx->pc = 0x383D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383D20u;
            // 0x383d24: 0x264401f0  addiu       $a0, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D28u; }
        if (ctx->pc != 0x383D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D28u; }
        if (ctx->pc != 0x383D28u) { return; }
    }
    ctx->pc = 0x383D28u;
label_383d28:
    // 0x383d28: 0xc0775b8  jal         func_1DD6E0
label_383d2c:
    if (ctx->pc == 0x383D2Cu) {
        ctx->pc = 0x383D30u;
        goto label_383d30;
    }
    ctx->pc = 0x383D28u;
    SET_GPR_U32(ctx, 31, 0x383D30u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D30u; }
        if (ctx->pc != 0x383D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D30u; }
        if (ctx->pc != 0x383D30u) { return; }
    }
    ctx->pc = 0x383D30u;
label_383d30:
    // 0x383d30: 0xc0775b4  jal         func_1DD6D0
label_383d34:
    if (ctx->pc == 0x383D34u) {
        ctx->pc = 0x383D34u;
            // 0x383d34: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x383D38u;
        goto label_383d38;
    }
    ctx->pc = 0x383D30u;
    SET_GPR_U32(ctx, 31, 0x383D38u);
    ctx->pc = 0x383D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383D30u;
            // 0x383d34: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D38u; }
        if (ctx->pc != 0x383D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D38u; }
        if (ctx->pc != 0x383D38u) { return; }
    }
    ctx->pc = 0x383D38u;
label_383d38:
    // 0x383d38: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x383d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_383d3c:
    // 0x383d3c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x383d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_383d40:
    // 0x383d40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x383d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_383d44:
    // 0x383d44: 0x264401d8  addiu       $a0, $s2, 0x1D8
    ctx->pc = 0x383d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 472));
label_383d48:
    // 0x383d48: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x383d48u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_383d4c:
    // 0x383d4c: 0xc0e121c  jal         func_384870
label_383d50:
    if (ctx->pc == 0x383D50u) {
        ctx->pc = 0x383D50u;
            // 0x383d50: 0x24a51b30  addiu       $a1, $a1, 0x1B30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6960));
        ctx->pc = 0x383D54u;
        goto label_383d54;
    }
    ctx->pc = 0x383D4Cu;
    SET_GPR_U32(ctx, 31, 0x383D54u);
    ctx->pc = 0x383D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383D4Cu;
            // 0x383d50: 0x24a51b30  addiu       $a1, $a1, 0x1B30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384870u;
    if (runtime->hasFunction(0x384870u)) {
        auto targetFn = runtime->lookupFunction(0x384870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D54u; }
        if (ctx->pc != 0x383D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384870_0x384870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D54u; }
        if (ctx->pc != 0x383D54u) { return; }
    }
    ctx->pc = 0x383D54u;
label_383d54:
    // 0x383d54: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
label_383d58:
    if (ctx->pc == 0x383D58u) {
        ctx->pc = 0x383D5Cu;
        goto label_383d5c;
    }
    ctx->pc = 0x383D54u;
    {
        const bool branch_taken_0x383d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383d54) {
            ctx->pc = 0x383F14u;
            goto label_383f14;
        }
    }
    ctx->pc = 0x383D5Cu;
label_383d5c:
    // 0x383d5c: 0xc07753c  jal         func_1DD4F0
label_383d60:
    if (ctx->pc == 0x383D60u) {
        ctx->pc = 0x383D60u;
            // 0x383d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383D64u;
        goto label_383d64;
    }
    ctx->pc = 0x383D5Cu;
    SET_GPR_U32(ctx, 31, 0x383D64u);
    ctx->pc = 0x383D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383D5Cu;
            // 0x383d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D64u; }
        if (ctx->pc != 0x383D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D64u; }
        if (ctx->pc != 0x383D64u) { return; }
    }
    ctx->pc = 0x383D64u;
label_383d64:
    // 0x383d64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x383d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383d68:
    // 0x383d68: 0xc04cc34  jal         func_1330D0
label_383d6c:
    if (ctx->pc == 0x383D6Cu) {
        ctx->pc = 0x383D6Cu;
            // 0x383d6c: 0x264501e0  addiu       $a1, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->pc = 0x383D70u;
        goto label_383d70;
    }
    ctx->pc = 0x383D68u;
    SET_GPR_U32(ctx, 31, 0x383D70u);
    ctx->pc = 0x383D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383D68u;
            // 0x383d6c: 0x264501e0  addiu       $a1, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D70u; }
        if (ctx->pc != 0x383D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D70u; }
        if (ctx->pc != 0x383D70u) { return; }
    }
    ctx->pc = 0x383D70u;
label_383d70:
    // 0x383d70: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x383d70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_383d74:
    // 0x383d74: 0x45010067  bc1t        . + 4 + (0x67 << 2)
label_383d78:
    if (ctx->pc == 0x383D78u) {
        ctx->pc = 0x383D7Cu;
        goto label_383d7c;
    }
    ctx->pc = 0x383D74u;
    {
        const bool branch_taken_0x383d74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x383d74) {
            ctx->pc = 0x383F14u;
            goto label_383f14;
        }
    }
    ctx->pc = 0x383D7Cu;
label_383d7c:
    // 0x383d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x383d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_383d80:
    // 0x383d80: 0xc0c05cc  jal         func_301730
label_383d84:
    if (ctx->pc == 0x383D84u) {
        ctx->pc = 0x383D84u;
            // 0x383d84: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x383D88u;
        goto label_383d88;
    }
    ctx->pc = 0x383D80u;
    SET_GPR_U32(ctx, 31, 0x383D88u);
    ctx->pc = 0x383D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383D80u;
            // 0x383d84: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301730u;
    if (runtime->hasFunction(0x301730u)) {
        auto targetFn = runtime->lookupFunction(0x301730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D88u; }
        if (ctx->pc != 0x383D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301730_0x301730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D88u; }
        if (ctx->pc != 0x383D88u) { return; }
    }
    ctx->pc = 0x383D88u;
label_383d88:
    // 0x383d88: 0xc0770c0  jal         func_1DC300
label_383d8c:
    if (ctx->pc == 0x383D8Cu) {
        ctx->pc = 0x383D8Cu;
            // 0x383d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383D90u;
        goto label_383d90;
    }
    ctx->pc = 0x383D88u;
    SET_GPR_U32(ctx, 31, 0x383D90u);
    ctx->pc = 0x383D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383D88u;
            // 0x383d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D90u; }
        if (ctx->pc != 0x383D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383D90u; }
        if (ctx->pc != 0x383D90u) { return; }
    }
    ctx->pc = 0x383D90u;
label_383d90:
    // 0x383d90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x383d90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383d94:
    // 0x383d94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x383d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_383d98:
    // 0x383d98: 0xc0e1218  jal         func_384860
label_383d9c:
    if (ctx->pc == 0x383D9Cu) {
        ctx->pc = 0x383D9Cu;
            // 0x383d9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383DA0u;
        goto label_383da0;
    }
    ctx->pc = 0x383D98u;
    SET_GPR_U32(ctx, 31, 0x383DA0u);
    ctx->pc = 0x383D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383D98u;
            // 0x383d9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384860u;
    if (runtime->hasFunction(0x384860u)) {
        auto targetFn = runtime->lookupFunction(0x384860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DA0u; }
        if (ctx->pc != 0x383DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384860_0x384860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DA0u; }
        if (ctx->pc != 0x383DA0u) { return; }
    }
    ctx->pc = 0x383DA0u;
label_383da0:
    // 0x383da0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x383da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_383da4:
    // 0x383da4: 0xc0ab808  jal         func_2AE020
label_383da8:
    if (ctx->pc == 0x383DA8u) {
        ctx->pc = 0x383DA8u;
            // 0x383da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383DACu;
        goto label_383dac;
    }
    ctx->pc = 0x383DA4u;
    SET_GPR_U32(ctx, 31, 0x383DACu);
    ctx->pc = 0x383DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383DA4u;
            // 0x383da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DACu; }
        if (ctx->pc != 0x383DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DACu; }
        if (ctx->pc != 0x383DACu) { return; }
    }
    ctx->pc = 0x383DACu;
label_383dac:
    // 0x383dac: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x383dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_383db0:
    // 0x383db0: 0x264401d8  addiu       $a0, $s2, 0x1D8
    ctx->pc = 0x383db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 472));
label_383db4:
    // 0x383db4: 0xc0e1210  jal         func_384840
label_383db8:
    if (ctx->pc == 0x383DB8u) {
        ctx->pc = 0x383DB8u;
            // 0x383db8: 0x24a51b38  addiu       $a1, $a1, 0x1B38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6968));
        ctx->pc = 0x383DBCu;
        goto label_383dbc;
    }
    ctx->pc = 0x383DB4u;
    SET_GPR_U32(ctx, 31, 0x383DBCu);
    ctx->pc = 0x383DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383DB4u;
            // 0x383db8: 0x24a51b38  addiu       $a1, $a1, 0x1B38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384840u;
    if (runtime->hasFunction(0x384840u)) {
        auto targetFn = runtime->lookupFunction(0x384840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DBCu; }
        if (ctx->pc != 0x383DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384840_0x384840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DBCu; }
        if (ctx->pc != 0x383DBCu) { return; }
    }
    ctx->pc = 0x383DBCu;
label_383dbc:
    // 0x383dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x383dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_383dc0:
    // 0x383dc0: 0xc0e11dc  jal         func_384770
label_383dc4:
    if (ctx->pc == 0x383DC4u) {
        ctx->pc = 0x383DC4u;
            // 0x383dc4: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x383DC8u;
        goto label_383dc8;
    }
    ctx->pc = 0x383DC0u;
    SET_GPR_U32(ctx, 31, 0x383DC8u);
    ctx->pc = 0x383DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383DC0u;
            // 0x383dc4: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384770u;
    if (runtime->hasFunction(0x384770u)) {
        auto targetFn = runtime->lookupFunction(0x384770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DC8u; }
        if (ctx->pc != 0x383DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384770_0x384770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DC8u; }
        if (ctx->pc != 0x383DC8u) { return; }
    }
    ctx->pc = 0x383DC8u;
label_383dc8:
    // 0x383dc8: 0xc0e1224  jal         func_384890
label_383dcc:
    if (ctx->pc == 0x383DCCu) {
        ctx->pc = 0x383DCCu;
            // 0x383dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383DD0u;
        goto label_383dd0;
    }
    ctx->pc = 0x383DC8u;
    SET_GPR_U32(ctx, 31, 0x383DD0u);
    ctx->pc = 0x383DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383DC8u;
            // 0x383dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DD0u; }
        if (ctx->pc != 0x383DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DD0u; }
        if (ctx->pc != 0x383DD0u) { return; }
    }
    ctx->pc = 0x383DD0u;
label_383dd0:
    // 0x383dd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x383dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383dd4:
    // 0x383dd4: 0xc04cc04  jal         func_133010
label_383dd8:
    if (ctx->pc == 0x383DD8u) {
        ctx->pc = 0x383DD8u;
            // 0x383dd8: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x383DDCu;
        goto label_383ddc;
    }
    ctx->pc = 0x383DD4u;
    SET_GPR_U32(ctx, 31, 0x383DDCu);
    ctx->pc = 0x383DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383DD4u;
            // 0x383dd8: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DDCu; }
        if (ctx->pc != 0x383DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DDCu; }
        if (ctx->pc != 0x383DDCu) { return; }
    }
    ctx->pc = 0x383DDCu;
label_383ddc:
    // 0x383ddc: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x383ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_383de0:
    // 0x383de0: 0xc04f278  jal         func_13C9E0
label_383de4:
    if (ctx->pc == 0x383DE4u) {
        ctx->pc = 0x383DE4u;
            // 0x383de4: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x383DE8u;
        goto label_383de8;
    }
    ctx->pc = 0x383DE0u;
    SET_GPR_U32(ctx, 31, 0x383DE8u);
    ctx->pc = 0x383DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383DE0u;
            // 0x383de4: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DE8u; }
        if (ctx->pc != 0x383DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DE8u; }
        if (ctx->pc != 0x383DE8u) { return; }
    }
    ctx->pc = 0x383DE8u;
label_383de8:
    // 0x383de8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x383de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_383dec:
    // 0x383dec: 0xc04ce80  jal         func_133A00
label_383df0:
    if (ctx->pc == 0x383DF0u) {
        ctx->pc = 0x383DF0u;
            // 0x383df0: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x383DF4u;
        goto label_383df4;
    }
    ctx->pc = 0x383DECu;
    SET_GPR_U32(ctx, 31, 0x383DF4u);
    ctx->pc = 0x383DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383DECu;
            // 0x383df0: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DF4u; }
        if (ctx->pc != 0x383DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383DF4u; }
        if (ctx->pc != 0x383DF4u) { return; }
    }
    ctx->pc = 0x383DF4u;
label_383df4:
    // 0x383df4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x383df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_383df8:
    // 0x383df8: 0xc04ccf4  jal         func_1333D0
label_383dfc:
    if (ctx->pc == 0x383DFCu) {
        ctx->pc = 0x383DFCu;
            // 0x383dfc: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x383E00u;
        goto label_383e00;
    }
    ctx->pc = 0x383DF8u;
    SET_GPR_U32(ctx, 31, 0x383E00u);
    ctx->pc = 0x383DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383DF8u;
            // 0x383dfc: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E00u; }
        if (ctx->pc != 0x383E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E00u; }
        if (ctx->pc != 0x383E00u) { return; }
    }
    ctx->pc = 0x383E00u;
label_383e00:
    // 0x383e00: 0xc077264  jal         func_1DC990
label_383e04:
    if (ctx->pc == 0x383E04u) {
        ctx->pc = 0x383E04u;
            // 0x383e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383E08u;
        goto label_383e08;
    }
    ctx->pc = 0x383E00u;
    SET_GPR_U32(ctx, 31, 0x383E08u);
    ctx->pc = 0x383E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383E00u;
            // 0x383e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E08u; }
        if (ctx->pc != 0x383E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E08u; }
        if (ctx->pc != 0x383E08u) { return; }
    }
    ctx->pc = 0x383E08u;
label_383e08:
    // 0x383e08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x383e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383e0c:
    // 0x383e0c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x383e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_383e10:
    // 0x383e10: 0xc04cca0  jal         func_133280
label_383e14:
    if (ctx->pc == 0x383E14u) {
        ctx->pc = 0x383E14u;
            // 0x383e14: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x383E18u;
        goto label_383e18;
    }
    ctx->pc = 0x383E10u;
    SET_GPR_U32(ctx, 31, 0x383E18u);
    ctx->pc = 0x383E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383E10u;
            // 0x383e14: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E18u; }
        if (ctx->pc != 0x383E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E18u; }
        if (ctx->pc != 0x383E18u) { return; }
    }
    ctx->pc = 0x383E18u;
label_383e18:
    // 0x383e18: 0xc0e11d8  jal         func_384760
label_383e1c:
    if (ctx->pc == 0x383E1Cu) {
        ctx->pc = 0x383E1Cu;
            // 0x383e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383E20u;
        goto label_383e20;
    }
    ctx->pc = 0x383E18u;
    SET_GPR_U32(ctx, 31, 0x383E20u);
    ctx->pc = 0x383E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383E18u;
            // 0x383e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384760u;
    if (runtime->hasFunction(0x384760u)) {
        auto targetFn = runtime->lookupFunction(0x384760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E20u; }
        if (ctx->pc != 0x383E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384760_0x384760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E20u; }
        if (ctx->pc != 0x383E20u) { return; }
    }
    ctx->pc = 0x383E20u;
label_383e20:
    // 0x383e20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x383e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383e24:
    // 0x383e24: 0xc04cc04  jal         func_133010
label_383e28:
    if (ctx->pc == 0x383E28u) {
        ctx->pc = 0x383E28u;
            // 0x383e28: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x383E2Cu;
        goto label_383e2c;
    }
    ctx->pc = 0x383E24u;
    SET_GPR_U32(ctx, 31, 0x383E2Cu);
    ctx->pc = 0x383E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383E24u;
            // 0x383e28: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E2Cu; }
        if (ctx->pc != 0x383E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E2Cu; }
        if (ctx->pc != 0x383E2Cu) { return; }
    }
    ctx->pc = 0x383E2Cu;
label_383e2c:
    // 0x383e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x383e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_383e30:
    // 0x383e30: 0xc07649c  jal         func_1D9270
label_383e34:
    if (ctx->pc == 0x383E34u) {
        ctx->pc = 0x383E34u;
            // 0x383e34: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->pc = 0x383E38u;
        goto label_383e38;
    }
    ctx->pc = 0x383E30u;
    SET_GPR_U32(ctx, 31, 0x383E38u);
    ctx->pc = 0x383E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383E30u;
            // 0x383e34: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E38u; }
        if (ctx->pc != 0x383E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E38u; }
        if (ctx->pc != 0x383E38u) { return; }
    }
    ctx->pc = 0x383E38u;
label_383e38:
    // 0x383e38: 0xc0775d8  jal         func_1DD760
label_383e3c:
    if (ctx->pc == 0x383E3Cu) {
        ctx->pc = 0x383E3Cu;
            // 0x383e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383E40u;
        goto label_383e40;
    }
    ctx->pc = 0x383E38u;
    SET_GPR_U32(ctx, 31, 0x383E40u);
    ctx->pc = 0x383E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383E38u;
            // 0x383e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E40u; }
        if (ctx->pc != 0x383E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E40u; }
        if (ctx->pc != 0x383E40u) { return; }
    }
    ctx->pc = 0x383E40u;
label_383e40:
    // 0x383e40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x383e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383e44:
    // 0x383e44: 0xc0775bc  jal         func_1DD6F0
label_383e48:
    if (ctx->pc == 0x383E48u) {
        ctx->pc = 0x383E48u;
            // 0x383e48: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->pc = 0x383E4Cu;
        goto label_383e4c;
    }
    ctx->pc = 0x383E44u;
    SET_GPR_U32(ctx, 31, 0x383E4Cu);
    ctx->pc = 0x383E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383E44u;
            // 0x383e48: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6F0u;
    if (runtime->hasFunction(0x1DD6F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E4Cu; }
        if (ctx->pc != 0x383E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6F0_0x1dd6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E4Cu; }
        if (ctx->pc != 0x383E4Cu) { return; }
    }
    ctx->pc = 0x383E4Cu;
label_383e4c:
    // 0x383e4c: 0xc0772f0  jal         func_1DCBC0
label_383e50:
    if (ctx->pc == 0x383E50u) {
        ctx->pc = 0x383E50u;
            // 0x383e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383E54u;
        goto label_383e54;
    }
    ctx->pc = 0x383E4Cu;
    SET_GPR_U32(ctx, 31, 0x383E54u);
    ctx->pc = 0x383E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383E4Cu;
            // 0x383e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E54u; }
        if (ctx->pc != 0x383E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E54u; }
        if (ctx->pc != 0x383E54u) { return; }
    }
    ctx->pc = 0x383E54u;
label_383e54:
    // 0x383e54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x383e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383e58:
    // 0x383e58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x383e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383e5c:
    // 0x383e5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x383e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_383e60:
    // 0x383e60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x383e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_383e64:
    // 0x383e64: 0xc0bdf9c  jal         func_2F7E70
label_383e68:
    if (ctx->pc == 0x383E68u) {
        ctx->pc = 0x383E68u;
            // 0x383e68: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x383E6Cu;
        goto label_383e6c;
    }
    ctx->pc = 0x383E64u;
    SET_GPR_U32(ctx, 31, 0x383E6Cu);
    ctx->pc = 0x383E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383E64u;
            // 0x383e68: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E6Cu; }
        if (ctx->pc != 0x383E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E6Cu; }
        if (ctx->pc != 0x383E6Cu) { return; }
    }
    ctx->pc = 0x383E6Cu;
label_383e6c:
    // 0x383e6c: 0xc0772e8  jal         func_1DCBA0
label_383e70:
    if (ctx->pc == 0x383E70u) {
        ctx->pc = 0x383E70u;
            // 0x383e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383E74u;
        goto label_383e74;
    }
    ctx->pc = 0x383E6Cu;
    SET_GPR_U32(ctx, 31, 0x383E74u);
    ctx->pc = 0x383E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383E6Cu;
            // 0x383e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E74u; }
        if (ctx->pc != 0x383E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E74u; }
        if (ctx->pc != 0x383E74u) { return; }
    }
    ctx->pc = 0x383E74u;
label_383e74:
    // 0x383e74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x383e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383e78:
    // 0x383e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x383e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383e7c:
    // 0x383e7c: 0xc0e11d4  jal         func_384750
label_383e80:
    if (ctx->pc == 0x383E80u) {
        ctx->pc = 0x383E80u;
            // 0x383e80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383E84u;
        goto label_383e84;
    }
    ctx->pc = 0x383E7Cu;
    SET_GPR_U32(ctx, 31, 0x383E84u);
    ctx->pc = 0x383E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383E7Cu;
            // 0x383e80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384750u;
    if (runtime->hasFunction(0x384750u)) {
        auto targetFn = runtime->lookupFunction(0x384750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E84u; }
        if (ctx->pc != 0x383E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384750_0x384750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E84u; }
        if (ctx->pc != 0x383E84u) { return; }
    }
    ctx->pc = 0x383E84u;
label_383e84:
    // 0x383e84: 0xc0772dc  jal         func_1DCB70
label_383e88:
    if (ctx->pc == 0x383E88u) {
        ctx->pc = 0x383E88u;
            // 0x383e88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383E8Cu;
        goto label_383e8c;
    }
    ctx->pc = 0x383E84u;
    SET_GPR_U32(ctx, 31, 0x383E8Cu);
    ctx->pc = 0x383E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383E84u;
            // 0x383e88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB70u;
    if (runtime->hasFunction(0x1DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E8Cu; }
        if (ctx->pc != 0x383E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB70_0x1dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383E8Cu; }
        if (ctx->pc != 0x383E8Cu) { return; }
    }
    ctx->pc = 0x383E8Cu;
label_383e8c:
    // 0x383e8c: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x383e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_383e90:
    // 0x383e90: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x383e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_383e94:
    // 0x383e94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x383e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_383e98:
    // 0x383e98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x383e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_383e9c:
    // 0x383e9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x383e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_383ea0:
    // 0x383ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x383ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383ea4:
    // 0x383ea4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x383ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_383ea8:
    // 0x383ea8: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x383ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_383eac:
    // 0x383eac: 0x320f809  jalr        $t9
label_383eb0:
    if (ctx->pc == 0x383EB0u) {
        ctx->pc = 0x383EB0u;
            // 0x383eb0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x383EB4u;
        goto label_383eb4;
    }
    ctx->pc = 0x383EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x383EB4u);
        ctx->pc = 0x383EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383EACu;
            // 0x383eb0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x383EB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x383EB4u; }
            if (ctx->pc != 0x383EB4u) { return; }
        }
        }
    }
    ctx->pc = 0x383EB4u;
label_383eb4:
    // 0x383eb4: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x383eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_383eb8:
    // 0x383eb8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x383eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_383ebc:
    // 0x383ebc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x383ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_383ec0:
    // 0x383ec0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x383ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_383ec4:
    // 0x383ec4: 0x320f809  jalr        $t9
label_383ec8:
    if (ctx->pc == 0x383EC8u) {
        ctx->pc = 0x383EC8u;
            // 0x383ec8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383ECCu;
        goto label_383ecc;
    }
    ctx->pc = 0x383EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x383ECCu);
        ctx->pc = 0x383EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383EC4u;
            // 0x383ec8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x383ECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x383ECCu; }
            if (ctx->pc != 0x383ECCu) { return; }
        }
        }
    }
    ctx->pc = 0x383ECCu;
label_383ecc:
    // 0x383ecc: 0xc0c05c8  jal         func_301720
label_383ed0:
    if (ctx->pc == 0x383ED0u) {
        ctx->pc = 0x383ED0u;
            // 0x383ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383ED4u;
        goto label_383ed4;
    }
    ctx->pc = 0x383ECCu;
    SET_GPR_U32(ctx, 31, 0x383ED4u);
    ctx->pc = 0x383ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383ECCu;
            // 0x383ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383ED4u; }
        if (ctx->pc != 0x383ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383ED4u; }
        if (ctx->pc != 0x383ED4u) { return; }
    }
    ctx->pc = 0x383ED4u;
label_383ed4:
    // 0x383ed4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x383ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_383ed8:
    // 0x383ed8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x383ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383edc:
    // 0x383edc: 0xc04cc04  jal         func_133010
label_383ee0:
    if (ctx->pc == 0x383EE0u) {
        ctx->pc = 0x383EE0u;
            // 0x383ee0: 0x24a55d60  addiu       $a1, $a1, 0x5D60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23904));
        ctx->pc = 0x383EE4u;
        goto label_383ee4;
    }
    ctx->pc = 0x383EDCu;
    SET_GPR_U32(ctx, 31, 0x383EE4u);
    ctx->pc = 0x383EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383EDCu;
            // 0x383ee0: 0x24a55d60  addiu       $a1, $a1, 0x5D60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383EE4u; }
        if (ctx->pc != 0x383EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383EE4u; }
        if (ctx->pc != 0x383EE4u) { return; }
    }
    ctx->pc = 0x383EE4u;
label_383ee4:
    // 0x383ee4: 0xc0e11d0  jal         func_384740
label_383ee8:
    if (ctx->pc == 0x383EE8u) {
        ctx->pc = 0x383EE8u;
            // 0x383ee8: 0x8e4403a0  lw          $a0, 0x3A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 928)));
        ctx->pc = 0x383EECu;
        goto label_383eec;
    }
    ctx->pc = 0x383EE4u;
    SET_GPR_U32(ctx, 31, 0x383EECu);
    ctx->pc = 0x383EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383EE4u;
            // 0x383ee8: 0x8e4403a0  lw          $a0, 0x3A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 928)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384740u;
    if (runtime->hasFunction(0x384740u)) {
        auto targetFn = runtime->lookupFunction(0x384740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383EECu; }
        if (ctx->pc != 0x383EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384740_0x384740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383EECu; }
        if (ctx->pc != 0x383EECu) { return; }
    }
    ctx->pc = 0x383EECu;
label_383eec:
    // 0x383eec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x383eecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_383ef0:
    // 0x383ef0: 0xc0e11cc  jal         func_384730
label_383ef4:
    if (ctx->pc == 0x383EF4u) {
        ctx->pc = 0x383EF4u;
            // 0x383ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383EF8u;
        goto label_383ef8;
    }
    ctx->pc = 0x383EF0u;
    SET_GPR_U32(ctx, 31, 0x383EF8u);
    ctx->pc = 0x383EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383EF0u;
            // 0x383ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384730u;
    if (runtime->hasFunction(0x384730u)) {
        auto targetFn = runtime->lookupFunction(0x384730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383EF8u; }
        if (ctx->pc != 0x383EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384730_0x384730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383EF8u; }
        if (ctx->pc != 0x383EF8u) { return; }
    }
    ctx->pc = 0x383EF8u;
label_383ef8:
    // 0x383ef8: 0xc0e11c8  jal         func_384720
label_383efc:
    if (ctx->pc == 0x383EFCu) {
        ctx->pc = 0x383F00u;
        goto label_383f00;
    }
    ctx->pc = 0x383EF8u;
    SET_GPR_U32(ctx, 31, 0x383F00u);
    ctx->pc = 0x384720u;
    if (runtime->hasFunction(0x384720u)) {
        auto targetFn = runtime->lookupFunction(0x384720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F00u; }
        if (ctx->pc != 0x383F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384720_0x384720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F00u; }
        if (ctx->pc != 0x383F00u) { return; }
    }
    ctx->pc = 0x383F00u;
label_383f00:
    // 0x383f00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x383f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383f04:
    // 0x383f04: 0xc0d7664  jal         func_35D990
label_383f08:
    if (ctx->pc == 0x383F08u) {
        ctx->pc = 0x383F08u;
            // 0x383f08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383F0Cu;
        goto label_383f0c;
    }
    ctx->pc = 0x383F04u;
    SET_GPR_U32(ctx, 31, 0x383F0Cu);
    ctx->pc = 0x383F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383F04u;
            // 0x383f08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35D990u;
    if (runtime->hasFunction(0x35D990u)) {
        auto targetFn = runtime->lookupFunction(0x35D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F0Cu; }
        if (ctx->pc != 0x383F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035D990_0x35d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F0Cu; }
        if (ctx->pc != 0x383F0Cu) { return; }
    }
    ctx->pc = 0x383F0Cu;
label_383f0c:
    // 0x383f0c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x383f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_383f10:
    // 0x383f10: 0xae420200  sw          $v0, 0x200($s2)
    ctx->pc = 0x383f10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 2));
label_383f14:
    // 0x383f14: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x383f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_383f18:
    // 0x383f18: 0x264401d8  addiu       $a0, $s2, 0x1D8
    ctx->pc = 0x383f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 472));
label_383f1c:
    // 0x383f1c: 0xc0e121c  jal         func_384870
label_383f20:
    if (ctx->pc == 0x383F20u) {
        ctx->pc = 0x383F20u;
            // 0x383f20: 0x24a51b40  addiu       $a1, $a1, 0x1B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
        ctx->pc = 0x383F24u;
        goto label_383f24;
    }
    ctx->pc = 0x383F1Cu;
    SET_GPR_U32(ctx, 31, 0x383F24u);
    ctx->pc = 0x383F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383F1Cu;
            // 0x383f20: 0x24a51b40  addiu       $a1, $a1, 0x1B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384870u;
    if (runtime->hasFunction(0x384870u)) {
        auto targetFn = runtime->lookupFunction(0x384870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F24u; }
        if (ctx->pc != 0x383F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384870_0x384870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F24u; }
        if (ctx->pc != 0x383F24u) { return; }
    }
    ctx->pc = 0x383F24u;
label_383f24:
    // 0x383f24: 0x104000fb  beqz        $v0, . + 4 + (0xFB << 2)
label_383f28:
    if (ctx->pc == 0x383F28u) {
        ctx->pc = 0x383F2Cu;
        goto label_383f2c;
    }
    ctx->pc = 0x383F24u;
    {
        const bool branch_taken_0x383f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383f24) {
            ctx->pc = 0x384314u;
            goto label_384314;
        }
    }
    ctx->pc = 0x383F2Cu;
label_383f2c:
    // 0x383f2c: 0xc0dd890  jal         func_376240
label_383f30:
    if (ctx->pc == 0x383F30u) {
        ctx->pc = 0x383F30u;
            // 0x383f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383F34u;
        goto label_383f34;
    }
    ctx->pc = 0x383F2Cu;
    SET_GPR_U32(ctx, 31, 0x383F34u);
    ctx->pc = 0x383F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383F2Cu;
            // 0x383f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376240u;
    if (runtime->hasFunction(0x376240u)) {
        auto targetFn = runtime->lookupFunction(0x376240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F34u; }
        if (ctx->pc != 0x383F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376240_0x376240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F34u; }
        if (ctx->pc != 0x383F34u) { return; }
    }
    ctx->pc = 0x383F34u;
label_383f34:
    // 0x383f34: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_383f38:
    if (ctx->pc == 0x383F38u) {
        ctx->pc = 0x383F38u;
            // 0x383f38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383F3Cu;
        goto label_383f3c;
    }
    ctx->pc = 0x383F34u;
    {
        const bool branch_taken_0x383f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383f34) {
            ctx->pc = 0x383F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383F34u;
            // 0x383f38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383F50u;
            goto label_383f50;
        }
    }
    ctx->pc = 0x383F3Cu;
label_383f3c:
    // 0x383f3c: 0xc0e1778  jal         func_385DE0
label_383f40:
    if (ctx->pc == 0x383F40u) {
        ctx->pc = 0x383F40u;
            // 0x383f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383F44u;
        goto label_383f44;
    }
    ctx->pc = 0x383F3Cu;
    SET_GPR_U32(ctx, 31, 0x383F44u);
    ctx->pc = 0x383F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383F3Cu;
            // 0x383f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x385DE0u;
    if (runtime->hasFunction(0x385DE0u)) {
        auto targetFn = runtime->lookupFunction(0x385DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F44u; }
        if (ctx->pc != 0x383F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00385DE0_0x385de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F44u; }
        if (ctx->pc != 0x383F44u) { return; }
    }
    ctx->pc = 0x383F44u;
label_383f44:
    // 0x383f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x383f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_383f48:
    // 0x383f48: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_383f4c:
    if (ctx->pc == 0x383F4Cu) {
        ctx->pc = 0x383F4Cu;
            // 0x383f4c: 0xae4201d4  sw          $v0, 0x1D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 2));
        ctx->pc = 0x383F50u;
        goto label_383f50;
    }
    ctx->pc = 0x383F48u;
    {
        const bool branch_taken_0x383f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383F48u;
            // 0x383f4c: 0xae4201d4  sw          $v0, 0x1D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383f48) {
            ctx->pc = 0x384314u;
            goto label_384314;
        }
    }
    ctx->pc = 0x383F50u;
label_383f50:
    // 0x383f50: 0xc0e1708  jal         func_385C20
label_383f54:
    if (ctx->pc == 0x383F54u) {
        ctx->pc = 0x383F58u;
        goto label_383f58;
    }
    ctx->pc = 0x383F50u;
    SET_GPR_U32(ctx, 31, 0x383F58u);
    ctx->pc = 0x385C20u;
    if (runtime->hasFunction(0x385C20u)) {
        auto targetFn = runtime->lookupFunction(0x385C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F58u; }
        if (ctx->pc != 0x383F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00385C20_0x385c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F58u; }
        if (ctx->pc != 0x383F58u) { return; }
    }
    ctx->pc = 0x383F58u;
label_383f58:
    // 0x383f58: 0x100000ee  b           . + 4 + (0xEE << 2)
label_383f5c:
    if (ctx->pc == 0x383F5Cu) {
        ctx->pc = 0x383F60u;
        goto label_383f60;
    }
    ctx->pc = 0x383F58u;
    {
        const bool branch_taken_0x383f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383f58) {
            ctx->pc = 0x384314u;
            goto label_384314;
        }
    }
    ctx->pc = 0x383F60u;
label_383f60:
    // 0x383f60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x383f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_383f64:
    // 0x383f64: 0xc0d87e0  jal         func_361F80
label_383f68:
    if (ctx->pc == 0x383F68u) {
        ctx->pc = 0x383F68u;
            // 0x383f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383F6Cu;
        goto label_383f6c;
    }
    ctx->pc = 0x383F64u;
    SET_GPR_U32(ctx, 31, 0x383F6Cu);
    ctx->pc = 0x383F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383F64u;
            // 0x383f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F6Cu; }
        if (ctx->pc != 0x383F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F6Cu; }
        if (ctx->pc != 0x383F6Cu) { return; }
    }
    ctx->pc = 0x383F6Cu;
label_383f6c:
    // 0x383f6c: 0xc0e1224  jal         func_384890
label_383f70:
    if (ctx->pc == 0x383F70u) {
        ctx->pc = 0x383F70u;
            // 0x383f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383F74u;
        goto label_383f74;
    }
    ctx->pc = 0x383F6Cu;
    SET_GPR_U32(ctx, 31, 0x383F74u);
    ctx->pc = 0x383F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383F6Cu;
            // 0x383f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F74u; }
        if (ctx->pc != 0x383F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F74u; }
        if (ctx->pc != 0x383F74u) { return; }
    }
    ctx->pc = 0x383F74u;
label_383f74:
    // 0x383f74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x383f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383f78:
    // 0x383f78: 0xc04cc04  jal         func_133010
label_383f7c:
    if (ctx->pc == 0x383F7Cu) {
        ctx->pc = 0x383F7Cu;
            // 0x383f7c: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->pc = 0x383F80u;
        goto label_383f80;
    }
    ctx->pc = 0x383F78u;
    SET_GPR_U32(ctx, 31, 0x383F80u);
    ctx->pc = 0x383F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383F78u;
            // 0x383f7c: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F80u; }
        if (ctx->pc != 0x383F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F80u; }
        if (ctx->pc != 0x383F80u) { return; }
    }
    ctx->pc = 0x383F80u;
label_383f80:
    // 0x383f80: 0xc0e1220  jal         func_384880
label_383f84:
    if (ctx->pc == 0x383F84u) {
        ctx->pc = 0x383F84u;
            // 0x383f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383F88u;
        goto label_383f88;
    }
    ctx->pc = 0x383F80u;
    SET_GPR_U32(ctx, 31, 0x383F88u);
    ctx->pc = 0x383F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383F80u;
            // 0x383f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384880u;
    if (runtime->hasFunction(0x384880u)) {
        auto targetFn = runtime->lookupFunction(0x384880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F88u; }
        if (ctx->pc != 0x383F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384880_0x384880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F88u; }
        if (ctx->pc != 0x383F88u) { return; }
    }
    ctx->pc = 0x383F88u;
label_383f88:
    // 0x383f88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x383f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383f8c:
    // 0x383f8c: 0xc04c720  jal         func_131C80
label_383f90:
    if (ctx->pc == 0x383F90u) {
        ctx->pc = 0x383F90u;
            // 0x383f90: 0x264401f0  addiu       $a0, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->pc = 0x383F94u;
        goto label_383f94;
    }
    ctx->pc = 0x383F8Cu;
    SET_GPR_U32(ctx, 31, 0x383F94u);
    ctx->pc = 0x383F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383F8Cu;
            // 0x383f90: 0x264401f0  addiu       $a0, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F94u; }
        if (ctx->pc != 0x383F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F94u; }
        if (ctx->pc != 0x383F94u) { return; }
    }
    ctx->pc = 0x383F94u;
label_383f94:
    // 0x383f94: 0xc0e1708  jal         func_385C20
label_383f98:
    if (ctx->pc == 0x383F98u) {
        ctx->pc = 0x383F98u;
            // 0x383f98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383F9Cu;
        goto label_383f9c;
    }
    ctx->pc = 0x383F94u;
    SET_GPR_U32(ctx, 31, 0x383F9Cu);
    ctx->pc = 0x383F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383F94u;
            // 0x383f98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x385C20u;
    if (runtime->hasFunction(0x385C20u)) {
        auto targetFn = runtime->lookupFunction(0x385C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F9Cu; }
        if (ctx->pc != 0x383F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00385C20_0x385c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383F9Cu; }
        if (ctx->pc != 0x383F9Cu) { return; }
    }
    ctx->pc = 0x383F9Cu;
label_383f9c:
    // 0x383f9c: 0xc6410200  lwc1        $f1, 0x200($s2)
    ctx->pc = 0x383f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_383fa0:
    // 0x383fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x383fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_383fa4:
    // 0x383fa4: 0x0  nop
    ctx->pc = 0x383fa4u;
    // NOP
label_383fa8:
    // 0x383fa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x383fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_383fac:
    // 0x383fac: 0x450000d9  bc1f        . + 4 + (0xD9 << 2)
label_383fb0:
    if (ctx->pc == 0x383FB0u) {
        ctx->pc = 0x383FB4u;
        goto label_383fb4;
    }
    ctx->pc = 0x383FACu;
    {
        const bool branch_taken_0x383fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x383fac) {
            ctx->pc = 0x384314u;
            goto label_384314;
        }
    }
    ctx->pc = 0x383FB4u;
label_383fb4:
    // 0x383fb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x383fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_383fb8:
    // 0x383fb8: 0xc0e11c0  jal         func_384700
label_383fbc:
    if (ctx->pc == 0x383FBCu) {
        ctx->pc = 0x383FBCu;
            // 0x383fbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x383FC0u;
        goto label_383fc0;
    }
    ctx->pc = 0x383FB8u;
    SET_GPR_U32(ctx, 31, 0x383FC0u);
    ctx->pc = 0x383FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383FB8u;
            // 0x383fbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384700u;
    if (runtime->hasFunction(0x384700u)) {
        auto targetFn = runtime->lookupFunction(0x384700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383FC0u; }
        if (ctx->pc != 0x383FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384700_0x384700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383FC0u; }
        if (ctx->pc != 0x383FC0u) { return; }
    }
    ctx->pc = 0x383FC0u;
label_383fc0:
    // 0x383fc0: 0xc07731c  jal         func_1DCC70
label_383fc4:
    if (ctx->pc == 0x383FC4u) {
        ctx->pc = 0x383FC4u;
            // 0x383fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383FC8u;
        goto label_383fc8;
    }
    ctx->pc = 0x383FC0u;
    SET_GPR_U32(ctx, 31, 0x383FC8u);
    ctx->pc = 0x383FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383FC0u;
            // 0x383fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383FC8u; }
        if (ctx->pc != 0x383FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383FC8u; }
        if (ctx->pc != 0x383FC8u) { return; }
    }
    ctx->pc = 0x383FC8u;
label_383fc8:
    // 0x383fc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x383fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383fcc:
    // 0x383fcc: 0xc0e11bc  jal         func_3846F0
label_383fd0:
    if (ctx->pc == 0x383FD0u) {
        ctx->pc = 0x383FD0u;
            // 0x383fd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x383FD4u;
        goto label_383fd4;
    }
    ctx->pc = 0x383FCCu;
    SET_GPR_U32(ctx, 31, 0x383FD4u);
    ctx->pc = 0x383FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383FCCu;
            // 0x383fd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3846F0u;
    if (runtime->hasFunction(0x3846F0u)) {
        auto targetFn = runtime->lookupFunction(0x3846F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383FD4u; }
        if (ctx->pc != 0x383FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003846F0_0x3846f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383FD4u; }
        if (ctx->pc != 0x383FD4u) { return; }
    }
    ctx->pc = 0x383FD4u;
label_383fd4:
    // 0x383fd4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x383fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_383fd8:
    // 0x383fd8: 0xc04f278  jal         func_13C9E0
label_383fdc:
    if (ctx->pc == 0x383FDCu) {
        ctx->pc = 0x383FDCu;
            // 0x383fdc: 0x264501f0  addiu       $a1, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->pc = 0x383FE0u;
        goto label_383fe0;
    }
    ctx->pc = 0x383FD8u;
    SET_GPR_U32(ctx, 31, 0x383FE0u);
    ctx->pc = 0x383FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383FD8u;
            // 0x383fdc: 0x264501f0  addiu       $a1, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383FE0u; }
        if (ctx->pc != 0x383FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383FE0u; }
        if (ctx->pc != 0x383FE0u) { return; }
    }
    ctx->pc = 0x383FE0u;
label_383fe0:
    // 0x383fe0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x383fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_383fe4:
    // 0x383fe4: 0xc04ce80  jal         func_133A00
label_383fe8:
    if (ctx->pc == 0x383FE8u) {
        ctx->pc = 0x383FE8u;
            // 0x383fe8: 0x264501e0  addiu       $a1, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->pc = 0x383FECu;
        goto label_383fec;
    }
    ctx->pc = 0x383FE4u;
    SET_GPR_U32(ctx, 31, 0x383FECu);
    ctx->pc = 0x383FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383FE4u;
            // 0x383fe8: 0x264501e0  addiu       $a1, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383FECu; }
        if (ctx->pc != 0x383FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383FECu; }
        if (ctx->pc != 0x383FECu) { return; }
    }
    ctx->pc = 0x383FECu;
label_383fec:
    // 0x383fec: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x383fecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_383ff0:
    // 0x383ff0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x383ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_383ff4:
    // 0x383ff4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x383ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_383ff8:
    // 0x383ff8: 0xc04cca0  jal         func_133280
label_383ffc:
    if (ctx->pc == 0x383FFCu) {
        ctx->pc = 0x383FFCu;
            // 0x383ffc: 0x24c65c30  addiu       $a2, $a2, 0x5C30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23600));
        ctx->pc = 0x384000u;
        goto label_384000;
    }
    ctx->pc = 0x383FF8u;
    SET_GPR_U32(ctx, 31, 0x384000u);
    ctx->pc = 0x383FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383FF8u;
            // 0x383ffc: 0x24c65c30  addiu       $a2, $a2, 0x5C30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384000u; }
        if (ctx->pc != 0x384000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384000u; }
        if (ctx->pc != 0x384000u) { return; }
    }
    ctx->pc = 0x384000u;
label_384000:
    // 0x384000: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x384000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_384004:
    // 0x384004: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x384004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_384008:
    // 0x384008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38400c:
    // 0x38400c: 0x264501e0  addiu       $a1, $s2, 0x1E0
    ctx->pc = 0x38400cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_384010:
    // 0x384010: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x384010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_384014:
    // 0x384014: 0xc0e1158  jal         func_384560
label_384018:
    if (ctx->pc == 0x384018u) {
        ctx->pc = 0x384018u;
            // 0x384018: 0x24c61b48  addiu       $a2, $a2, 0x1B48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6984));
        ctx->pc = 0x38401Cu;
        goto label_38401c;
    }
    ctx->pc = 0x384014u;
    SET_GPR_U32(ctx, 31, 0x38401Cu);
    ctx->pc = 0x384018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384014u;
            // 0x384018: 0x24c61b48  addiu       $a2, $a2, 0x1B48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384560u;
    if (runtime->hasFunction(0x384560u)) {
        auto targetFn = runtime->lookupFunction(0x384560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38401Cu; }
        if (ctx->pc != 0x38401Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384560_0x384560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38401Cu; }
        if (ctx->pc != 0x38401Cu) { return; }
    }
    ctx->pc = 0x38401Cu;
label_38401c:
    // 0x38401c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38401cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_384020:
    // 0x384020: 0x100000bc  b           . + 4 + (0xBC << 2)
label_384024:
    if (ctx->pc == 0x384024u) {
        ctx->pc = 0x384024u;
            // 0x384024: 0xae4201d4  sw          $v0, 0x1D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 2));
        ctx->pc = 0x384028u;
        goto label_384028;
    }
    ctx->pc = 0x384020u;
    {
        const bool branch_taken_0x384020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384020u;
            // 0x384024: 0xae4201d4  sw          $v0, 0x1D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384020) {
            ctx->pc = 0x384314u;
            goto label_384314;
        }
    }
    ctx->pc = 0x384028u;
label_384028:
    // 0x384028: 0xc0e1154  jal         func_384550
label_38402c:
    if (ctx->pc == 0x38402Cu) {
        ctx->pc = 0x384030u;
        goto label_384030;
    }
    ctx->pc = 0x384028u;
    SET_GPR_U32(ctx, 31, 0x384030u);
    ctx->pc = 0x384550u;
    if (runtime->hasFunction(0x384550u)) {
        auto targetFn = runtime->lookupFunction(0x384550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384030u; }
        if (ctx->pc != 0x384030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384550_0x384550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384030u; }
        if (ctx->pc != 0x384030u) { return; }
    }
    ctx->pc = 0x384030u;
label_384030:
    // 0x384030: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x384030u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384034:
    // 0x384034: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x384034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_384038:
    // 0x384038: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x384038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38403c:
    // 0x38403c: 0xc0d87e0  jal         func_361F80
label_384040:
    if (ctx->pc == 0x384040u) {
        ctx->pc = 0x384040u;
            // 0x384040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384044u;
        goto label_384044;
    }
    ctx->pc = 0x38403Cu;
    SET_GPR_U32(ctx, 31, 0x384044u);
    ctx->pc = 0x384040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38403Cu;
            // 0x384040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384044u; }
        if (ctx->pc != 0x384044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384044u; }
        if (ctx->pc != 0x384044u) { return; }
    }
    ctx->pc = 0x384044u;
label_384044:
    // 0x384044: 0xc0e1224  jal         func_384890
label_384048:
    if (ctx->pc == 0x384048u) {
        ctx->pc = 0x384048u;
            // 0x384048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38404Cu;
        goto label_38404c;
    }
    ctx->pc = 0x384044u;
    SET_GPR_U32(ctx, 31, 0x38404Cu);
    ctx->pc = 0x384048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384044u;
            // 0x384048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38404Cu; }
        if (ctx->pc != 0x38404Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38404Cu; }
        if (ctx->pc != 0x38404Cu) { return; }
    }
    ctx->pc = 0x38404Cu;
label_38404c:
    // 0x38404c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38404cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384050:
    // 0x384050: 0xc04cc04  jal         func_133010
label_384054:
    if (ctx->pc == 0x384054u) {
        ctx->pc = 0x384054u;
            // 0x384054: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->pc = 0x384058u;
        goto label_384058;
    }
    ctx->pc = 0x384050u;
    SET_GPR_U32(ctx, 31, 0x384058u);
    ctx->pc = 0x384054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384050u;
            // 0x384054: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384058u; }
        if (ctx->pc != 0x384058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384058u; }
        if (ctx->pc != 0x384058u) { return; }
    }
    ctx->pc = 0x384058u;
label_384058:
    // 0x384058: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x384058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38405c:
    // 0x38405c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38405cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_384060:
    // 0x384060: 0xc0e1134  jal         func_3844D0
label_384064:
    if (ctx->pc == 0x384064u) {
        ctx->pc = 0x384064u;
            // 0x384064: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x384068u;
        goto label_384068;
    }
    ctx->pc = 0x384060u;
    SET_GPR_U32(ctx, 31, 0x384068u);
    ctx->pc = 0x384064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384060u;
            // 0x384064: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844D0u;
    if (runtime->hasFunction(0x3844D0u)) {
        auto targetFn = runtime->lookupFunction(0x3844D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384068u; }
        if (ctx->pc != 0x384068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844D0_0x3844d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384068u; }
        if (ctx->pc != 0x384068u) { return; }
    }
    ctx->pc = 0x384068u;
label_384068:
    // 0x384068: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38406c:
    // 0x38406c: 0xc0e11dc  jal         func_384770
label_384070:
    if (ctx->pc == 0x384070u) {
        ctx->pc = 0x384070u;
            // 0x384070: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x384074u;
        goto label_384074;
    }
    ctx->pc = 0x38406Cu;
    SET_GPR_U32(ctx, 31, 0x384074u);
    ctx->pc = 0x384070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38406Cu;
            // 0x384070: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384770u;
    if (runtime->hasFunction(0x384770u)) {
        auto targetFn = runtime->lookupFunction(0x384770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384074u; }
        if (ctx->pc != 0x384074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384770_0x384770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384074u; }
        if (ctx->pc != 0x384074u) { return; }
    }
    ctx->pc = 0x384074u;
label_384074:
    // 0x384074: 0x264401f0  addiu       $a0, $s2, 0x1F0
    ctx->pc = 0x384074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_384078:
    // 0x384078: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x384078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_38407c:
    // 0x38407c: 0xc04c72c  jal         func_131CB0
label_384080:
    if (ctx->pc == 0x384080u) {
        ctx->pc = 0x384080u;
            // 0x384080: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x384084u;
        goto label_384084;
    }
    ctx->pc = 0x38407Cu;
    SET_GPR_U32(ctx, 31, 0x384084u);
    ctx->pc = 0x384080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38407Cu;
            // 0x384080: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384084u; }
        if (ctx->pc != 0x384084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384084u; }
        if (ctx->pc != 0x384084u) { return; }
    }
    ctx->pc = 0x384084u;
label_384084:
    // 0x384084: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x384084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_384088:
    // 0x384088: 0xc04f278  jal         func_13C9E0
label_38408c:
    if (ctx->pc == 0x38408Cu) {
        ctx->pc = 0x38408Cu;
            // 0x38408c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x384090u;
        goto label_384090;
    }
    ctx->pc = 0x384088u;
    SET_GPR_U32(ctx, 31, 0x384090u);
    ctx->pc = 0x38408Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384088u;
            // 0x38408c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384090u; }
        if (ctx->pc != 0x384090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384090u; }
        if (ctx->pc != 0x384090u) { return; }
    }
    ctx->pc = 0x384090u;
label_384090:
    // 0x384090: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x384090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_384094:
    // 0x384094: 0xc04ce80  jal         func_133A00
label_384098:
    if (ctx->pc == 0x384098u) {
        ctx->pc = 0x384098u;
            // 0x384098: 0x264501e0  addiu       $a1, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->pc = 0x38409Cu;
        goto label_38409c;
    }
    ctx->pc = 0x384094u;
    SET_GPR_U32(ctx, 31, 0x38409Cu);
    ctx->pc = 0x384098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384094u;
            // 0x384098: 0x264501e0  addiu       $a1, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38409Cu; }
        if (ctx->pc != 0x38409Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38409Cu; }
        if (ctx->pc != 0x38409Cu) { return; }
    }
    ctx->pc = 0x38409Cu;
label_38409c:
    // 0x38409c: 0x52200077  beql        $s1, $zero, . + 4 + (0x77 << 2)
label_3840a0:
    if (ctx->pc == 0x3840A0u) {
        ctx->pc = 0x3840A0u;
            // 0x3840a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3840A4u;
        goto label_3840a4;
    }
    ctx->pc = 0x38409Cu;
    {
        const bool branch_taken_0x38409c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38409c) {
            ctx->pc = 0x3840A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38409Cu;
            // 0x3840a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38427Cu;
            goto label_38427c;
        }
    }
    ctx->pc = 0x3840A4u;
label_3840a4:
    // 0x3840a4: 0xc0e1130  jal         func_3844C0
label_3840a8:
    if (ctx->pc == 0x3840A8u) {
        ctx->pc = 0x3840A8u;
            // 0x3840a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3840ACu;
        goto label_3840ac;
    }
    ctx->pc = 0x3840A4u;
    SET_GPR_U32(ctx, 31, 0x3840ACu);
    ctx->pc = 0x3840A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3840A4u;
            // 0x3840a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844C0u;
    if (runtime->hasFunction(0x3844C0u)) {
        auto targetFn = runtime->lookupFunction(0x3844C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3840ACu; }
        if (ctx->pc != 0x3840ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844C0_0x3844c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3840ACu; }
        if (ctx->pc != 0x3840ACu) { return; }
    }
    ctx->pc = 0x3840ACu;
label_3840ac:
    // 0x3840ac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3840acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3840b0:
    // 0x3840b0: 0xc0c1a0c  jal         func_306830
label_3840b4:
    if (ctx->pc == 0x3840B4u) {
        ctx->pc = 0x3840B4u;
            // 0x3840b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3840B8u;
        goto label_3840b8;
    }
    ctx->pc = 0x3840B0u;
    SET_GPR_U32(ctx, 31, 0x3840B8u);
    ctx->pc = 0x3840B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3840B0u;
            // 0x3840b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3840B8u; }
        if (ctx->pc != 0x3840B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3840B8u; }
        if (ctx->pc != 0x3840B8u) { return; }
    }
    ctx->pc = 0x3840B8u;
label_3840b8:
    // 0x3840b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3840b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3840bc:
    // 0x3840bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3840bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3840c0:
    // 0x3840c0: 0xc0e1118  jal         func_384460
label_3840c4:
    if (ctx->pc == 0x3840C4u) {
        ctx->pc = 0x3840C4u;
            // 0x3840c4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3840C8u;
        goto label_3840c8;
    }
    ctx->pc = 0x3840C0u;
    SET_GPR_U32(ctx, 31, 0x3840C8u);
    ctx->pc = 0x3840C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3840C0u;
            // 0x3840c4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384460u;
    if (runtime->hasFunction(0x384460u)) {
        auto targetFn = runtime->lookupFunction(0x384460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3840C8u; }
        if (ctx->pc != 0x3840C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384460_0x384460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3840C8u; }
        if (ctx->pc != 0x3840C8u) { return; }
    }
    ctx->pc = 0x3840C8u;
label_3840c8:
    // 0x3840c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3840c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3840cc:
    // 0x3840cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3840ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3840d0:
    // 0x3840d0: 0xc0e1134  jal         func_3844D0
label_3840d4:
    if (ctx->pc == 0x3840D4u) {
        ctx->pc = 0x3840D4u;
            // 0x3840d4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3840D8u;
        goto label_3840d8;
    }
    ctx->pc = 0x3840D0u;
    SET_GPR_U32(ctx, 31, 0x3840D8u);
    ctx->pc = 0x3840D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3840D0u;
            // 0x3840d4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844D0u;
    if (runtime->hasFunction(0x3844D0u)) {
        auto targetFn = runtime->lookupFunction(0x3844D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3840D8u; }
        if (ctx->pc != 0x3840D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844D0_0x3844d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3840D8u; }
        if (ctx->pc != 0x3840D8u) { return; }
    }
    ctx->pc = 0x3840D8u;
label_3840d8:
    // 0x3840d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3840d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3840dc:
    // 0x3840dc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3840dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3840e0:
    // 0x3840e0: 0xc04cca0  jal         func_133280
label_3840e4:
    if (ctx->pc == 0x3840E4u) {
        ctx->pc = 0x3840E4u;
            // 0x3840e4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3840E8u;
        goto label_3840e8;
    }
    ctx->pc = 0x3840E0u;
    SET_GPR_U32(ctx, 31, 0x3840E8u);
    ctx->pc = 0x3840E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3840E0u;
            // 0x3840e4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3840E8u; }
        if (ctx->pc != 0x3840E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3840E8u; }
        if (ctx->pc != 0x3840E8u) { return; }
    }
    ctx->pc = 0x3840E8u;
label_3840e8:
    // 0x3840e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3840e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3840ec:
    // 0x3840ec: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3840ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3840f0:
    // 0x3840f0: 0xc04c72c  jal         func_131CB0
label_3840f4:
    if (ctx->pc == 0x3840F4u) {
        ctx->pc = 0x3840F4u;
            // 0x3840f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3840F8u;
        goto label_3840f8;
    }
    ctx->pc = 0x3840F0u;
    SET_GPR_U32(ctx, 31, 0x3840F8u);
    ctx->pc = 0x3840F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3840F0u;
            // 0x3840f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3840F8u; }
        if (ctx->pc != 0x3840F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3840F8u; }
        if (ctx->pc != 0x3840F8u) { return; }
    }
    ctx->pc = 0x3840F8u;
label_3840f8:
    // 0x3840f8: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x3840f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
label_3840fc:
    // 0x3840fc: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3840fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_384100:
    // 0x384100: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x384100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_384104:
    // 0x384104: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x384104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_384108:
    // 0x384108: 0xc122c1c  jal         func_48B070
label_38410c:
    if (ctx->pc == 0x38410Cu) {
        ctx->pc = 0x38410Cu;
            // 0x38410c: 0x24e75c00  addiu       $a3, $a3, 0x5C00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23552));
        ctx->pc = 0x384110u;
        goto label_384110;
    }
    ctx->pc = 0x384108u;
    SET_GPR_U32(ctx, 31, 0x384110u);
    ctx->pc = 0x38410Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384108u;
            // 0x38410c: 0x24e75c00  addiu       $a3, $a3, 0x5C00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B070u;
    if (runtime->hasFunction(0x48B070u)) {
        auto targetFn = runtime->lookupFunction(0x48B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384110u; }
        if (ctx->pc != 0x384110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B070_0x48b070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384110u; }
        if (ctx->pc != 0x384110u) { return; }
    }
    ctx->pc = 0x384110u;
label_384110:
    // 0x384110: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x384110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_384114:
    // 0x384114: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x384114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_384118:
    // 0x384118: 0xc122be4  jal         func_48AF90
label_38411c:
    if (ctx->pc == 0x38411Cu) {
        ctx->pc = 0x38411Cu;
            // 0x38411c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x384120u;
        goto label_384120;
    }
    ctx->pc = 0x384118u;
    SET_GPR_U32(ctx, 31, 0x384120u);
    ctx->pc = 0x38411Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384118u;
            // 0x38411c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AF90u;
    if (runtime->hasFunction(0x48AF90u)) {
        auto targetFn = runtime->lookupFunction(0x48AF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384120u; }
        if (ctx->pc != 0x384120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AF90_0x48af90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384120u; }
        if (ctx->pc != 0x384120u) { return; }
    }
    ctx->pc = 0x384120u;
label_384120:
    // 0x384120: 0xc07731c  jal         func_1DCC70
label_384124:
    if (ctx->pc == 0x384124u) {
        ctx->pc = 0x384124u;
            // 0x384124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384128u;
        goto label_384128;
    }
    ctx->pc = 0x384120u;
    SET_GPR_U32(ctx, 31, 0x384128u);
    ctx->pc = 0x384124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384120u;
            // 0x384124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384128u; }
        if (ctx->pc != 0x384128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384128u; }
        if (ctx->pc != 0x384128u) { return; }
    }
    ctx->pc = 0x384128u;
label_384128:
    // 0x384128: 0xc0e1114  jal         func_384450
label_38412c:
    if (ctx->pc == 0x38412Cu) {
        ctx->pc = 0x38412Cu;
            // 0x38412c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384130u;
        goto label_384130;
    }
    ctx->pc = 0x384128u;
    SET_GPR_U32(ctx, 31, 0x384130u);
    ctx->pc = 0x38412Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384128u;
            // 0x38412c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384450u;
    if (runtime->hasFunction(0x384450u)) {
        auto targetFn = runtime->lookupFunction(0x384450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384130u; }
        if (ctx->pc != 0x384130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384450_0x384450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384130u; }
        if (ctx->pc != 0x384130u) { return; }
    }
    ctx->pc = 0x384130u;
label_384130:
    // 0x384130: 0x8e4403a4  lw          $a0, 0x3A4($s2)
    ctx->pc = 0x384130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 932)));
label_384134:
    // 0x384134: 0xc0fbac4  jal         func_3EEB10
label_384138:
    if (ctx->pc == 0x384138u) {
        ctx->pc = 0x384138u;
            // 0x384138: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38413Cu;
        goto label_38413c;
    }
    ctx->pc = 0x384134u;
    SET_GPR_U32(ctx, 31, 0x38413Cu);
    ctx->pc = 0x384138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384134u;
            // 0x384138: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EEB10u;
    if (runtime->hasFunction(0x3EEB10u)) {
        auto targetFn = runtime->lookupFunction(0x3EEB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38413Cu; }
        if (ctx->pc != 0x38413Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EEB10_0x3eeb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38413Cu; }
        if (ctx->pc != 0x38413Cu) { return; }
    }
    ctx->pc = 0x38413Cu;
label_38413c:
    // 0x38413c: 0xc0dd890  jal         func_376240
label_384140:
    if (ctx->pc == 0x384140u) {
        ctx->pc = 0x384140u;
            // 0x384140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384144u;
        goto label_384144;
    }
    ctx->pc = 0x38413Cu;
    SET_GPR_U32(ctx, 31, 0x384144u);
    ctx->pc = 0x384140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38413Cu;
            // 0x384140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376240u;
    if (runtime->hasFunction(0x376240u)) {
        auto targetFn = runtime->lookupFunction(0x376240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384144u; }
        if (ctx->pc != 0x384144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376240_0x376240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384144u; }
        if (ctx->pc != 0x384144u) { return; }
    }
    ctx->pc = 0x384144u;
label_384144:
    // 0x384144: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_384148:
    if (ctx->pc == 0x384148u) {
        ctx->pc = 0x38414Cu;
        goto label_38414c;
    }
    ctx->pc = 0x384144u;
    {
        const bool branch_taken_0x384144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384144) {
            ctx->pc = 0x384278u;
            goto label_384278;
        }
    }
    ctx->pc = 0x38414Cu;
label_38414c:
    // 0x38414c: 0xc07731c  jal         func_1DCC70
label_384150:
    if (ctx->pc == 0x384150u) {
        ctx->pc = 0x384150u;
            // 0x384150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384154u;
        goto label_384154;
    }
    ctx->pc = 0x38414Cu;
    SET_GPR_U32(ctx, 31, 0x384154u);
    ctx->pc = 0x384150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38414Cu;
            // 0x384150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384154u; }
        if (ctx->pc != 0x384154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384154u; }
        if (ctx->pc != 0x384154u) { return; }
    }
    ctx->pc = 0x384154u;
label_384154:
    // 0x384154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x384154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384158:
    // 0x384158: 0xc0e11bc  jal         func_3846F0
label_38415c:
    if (ctx->pc == 0x38415Cu) {
        ctx->pc = 0x38415Cu;
            // 0x38415c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x384160u;
        goto label_384160;
    }
    ctx->pc = 0x384158u;
    SET_GPR_U32(ctx, 31, 0x384160u);
    ctx->pc = 0x38415Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384158u;
            // 0x38415c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3846F0u;
    if (runtime->hasFunction(0x3846F0u)) {
        auto targetFn = runtime->lookupFunction(0x3846F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384160u; }
        if (ctx->pc != 0x384160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003846F0_0x3846f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384160u; }
        if (ctx->pc != 0x384160u) { return; }
    }
    ctx->pc = 0x384160u;
label_384160:
    // 0x384160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x384160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_384164:
    // 0x384164: 0xc0c05e8  jal         func_3017A0
label_384168:
    if (ctx->pc == 0x384168u) {
        ctx->pc = 0x384168u;
            // 0x384168: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38416Cu;
        goto label_38416c;
    }
    ctx->pc = 0x384164u;
    SET_GPR_U32(ctx, 31, 0x38416Cu);
    ctx->pc = 0x384168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384164u;
            // 0x384168: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3017A0u;
    if (runtime->hasFunction(0x3017A0u)) {
        auto targetFn = runtime->lookupFunction(0x3017A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38416Cu; }
        if (ctx->pc != 0x38416Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003017A0_0x3017a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38416Cu; }
        if (ctx->pc != 0x38416Cu) { return; }
    }
    ctx->pc = 0x38416Cu;
label_38416c:
    // 0x38416c: 0xc0e1110  jal         func_384440
label_384170:
    if (ctx->pc == 0x384170u) {
        ctx->pc = 0x384170u;
            // 0x384170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384174u;
        goto label_384174;
    }
    ctx->pc = 0x38416Cu;
    SET_GPR_U32(ctx, 31, 0x384174u);
    ctx->pc = 0x384170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38416Cu;
            // 0x384170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384440u;
    if (runtime->hasFunction(0x384440u)) {
        auto targetFn = runtime->lookupFunction(0x384440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384174u; }
        if (ctx->pc != 0x384174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384440_0x384440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384174u; }
        if (ctx->pc != 0x384174u) { return; }
    }
    ctx->pc = 0x384174u;
label_384174:
    // 0x384174: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x384174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_384178:
    // 0x384178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x384178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38417c:
    // 0x38417c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x38417cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_384180:
    // 0x384180: 0xc04cbd8  jal         func_132F60
label_384184:
    if (ctx->pc == 0x384184u) {
        ctx->pc = 0x384184u;
            // 0x384184: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x384188u;
        goto label_384188;
    }
    ctx->pc = 0x384180u;
    SET_GPR_U32(ctx, 31, 0x384188u);
    ctx->pc = 0x384184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384180u;
            // 0x384184: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384188u; }
        if (ctx->pc != 0x384188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384188u; }
        if (ctx->pc != 0x384188u) { return; }
    }
    ctx->pc = 0x384188u;
label_384188:
    // 0x384188: 0xc0e110c  jal         func_384430
label_38418c:
    if (ctx->pc == 0x38418Cu) {
        ctx->pc = 0x38418Cu;
            // 0x38418c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384190u;
        goto label_384190;
    }
    ctx->pc = 0x384188u;
    SET_GPR_U32(ctx, 31, 0x384190u);
    ctx->pc = 0x38418Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384188u;
            // 0x38418c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384430u;
    if (runtime->hasFunction(0x384430u)) {
        auto targetFn = runtime->lookupFunction(0x384430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384190u; }
        if (ctx->pc != 0x384190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384430_0x384430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384190u; }
        if (ctx->pc != 0x384190u) { return; }
    }
    ctx->pc = 0x384190u;
label_384190:
    // 0x384190: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x384190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_384194:
    // 0x384194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x384194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384198:
    // 0x384198: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x384198u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_38419c:
    // 0x38419c: 0xc04cbd8  jal         func_132F60
label_3841a0:
    if (ctx->pc == 0x3841A0u) {
        ctx->pc = 0x3841A0u;
            // 0x3841a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3841A4u;
        goto label_3841a4;
    }
    ctx->pc = 0x38419Cu;
    SET_GPR_U32(ctx, 31, 0x3841A4u);
    ctx->pc = 0x3841A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38419Cu;
            // 0x3841a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841A4u; }
        if (ctx->pc != 0x3841A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841A4u; }
        if (ctx->pc != 0x3841A4u) { return; }
    }
    ctx->pc = 0x3841A4u;
label_3841a4:
    // 0x3841a4: 0xc0770c0  jal         func_1DC300
label_3841a8:
    if (ctx->pc == 0x3841A8u) {
        ctx->pc = 0x3841A8u;
            // 0x3841a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3841ACu;
        goto label_3841ac;
    }
    ctx->pc = 0x3841A4u;
    SET_GPR_U32(ctx, 31, 0x3841ACu);
    ctx->pc = 0x3841A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3841A4u;
            // 0x3841a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841ACu; }
        if (ctx->pc != 0x3841ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841ACu; }
        if (ctx->pc != 0x3841ACu) { return; }
    }
    ctx->pc = 0x3841ACu;
label_3841ac:
    // 0x3841ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3841acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3841b0:
    // 0x3841b0: 0xc0e1218  jal         func_384860
label_3841b4:
    if (ctx->pc == 0x3841B4u) {
        ctx->pc = 0x3841B4u;
            // 0x3841b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3841B8u;
        goto label_3841b8;
    }
    ctx->pc = 0x3841B0u;
    SET_GPR_U32(ctx, 31, 0x3841B8u);
    ctx->pc = 0x3841B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3841B0u;
            // 0x3841b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384860u;
    if (runtime->hasFunction(0x384860u)) {
        auto targetFn = runtime->lookupFunction(0x384860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841B8u; }
        if (ctx->pc != 0x3841B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384860_0x384860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841B8u; }
        if (ctx->pc != 0x3841B8u) { return; }
    }
    ctx->pc = 0x3841B8u;
label_3841b8:
    // 0x3841b8: 0xc0770c0  jal         func_1DC300
label_3841bc:
    if (ctx->pc == 0x3841BCu) {
        ctx->pc = 0x3841BCu;
            // 0x3841bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3841C0u;
        goto label_3841c0;
    }
    ctx->pc = 0x3841B8u;
    SET_GPR_U32(ctx, 31, 0x3841C0u);
    ctx->pc = 0x3841BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3841B8u;
            // 0x3841bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841C0u; }
        if (ctx->pc != 0x3841C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841C0u; }
        if (ctx->pc != 0x3841C0u) { return; }
    }
    ctx->pc = 0x3841C0u;
label_3841c0:
    // 0x3841c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3841c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3841c4:
    // 0x3841c4: 0xc0ab808  jal         func_2AE020
label_3841c8:
    if (ctx->pc == 0x3841C8u) {
        ctx->pc = 0x3841C8u;
            // 0x3841c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3841CCu;
        goto label_3841cc;
    }
    ctx->pc = 0x3841C4u;
    SET_GPR_U32(ctx, 31, 0x3841CCu);
    ctx->pc = 0x3841C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3841C4u;
            // 0x3841c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841CCu; }
        if (ctx->pc != 0x3841CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841CCu; }
        if (ctx->pc != 0x3841CCu) { return; }
    }
    ctx->pc = 0x3841CCu;
label_3841cc:
    // 0x3841cc: 0xc0775d8  jal         func_1DD760
label_3841d0:
    if (ctx->pc == 0x3841D0u) {
        ctx->pc = 0x3841D0u;
            // 0x3841d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3841D4u;
        goto label_3841d4;
    }
    ctx->pc = 0x3841CCu;
    SET_GPR_U32(ctx, 31, 0x3841D4u);
    ctx->pc = 0x3841D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3841CCu;
            // 0x3841d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841D4u; }
        if (ctx->pc != 0x3841D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841D4u; }
        if (ctx->pc != 0x3841D4u) { return; }
    }
    ctx->pc = 0x3841D4u;
label_3841d4:
    // 0x3841d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3841d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3841d8:
    // 0x3841d8: 0xc077590  jal         func_1DD640
label_3841dc:
    if (ctx->pc == 0x3841DCu) {
        ctx->pc = 0x3841DCu;
            // 0x3841dc: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->pc = 0x3841E0u;
        goto label_3841e0;
    }
    ctx->pc = 0x3841D8u;
    SET_GPR_U32(ctx, 31, 0x3841E0u);
    ctx->pc = 0x3841DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3841D8u;
            // 0x3841dc: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD640u;
    if (runtime->hasFunction(0x1DD640u)) {
        auto targetFn = runtime->lookupFunction(0x1DD640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841E0u; }
        if (ctx->pc != 0x3841E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD640_0x1dd640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841E0u; }
        if (ctx->pc != 0x3841E0u) { return; }
    }
    ctx->pc = 0x3841E0u;
label_3841e0:
    // 0x3841e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3841e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3841e4:
    // 0x3841e4: 0xc0e1104  jal         func_384410
label_3841e8:
    if (ctx->pc == 0x3841E8u) {
        ctx->pc = 0x3841E8u;
            // 0x3841e8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3841ECu;
        goto label_3841ec;
    }
    ctx->pc = 0x3841E4u;
    SET_GPR_U32(ctx, 31, 0x3841ECu);
    ctx->pc = 0x3841E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3841E4u;
            // 0x3841e8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384410u;
    if (runtime->hasFunction(0x384410u)) {
        auto targetFn = runtime->lookupFunction(0x384410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841ECu; }
        if (ctx->pc != 0x3841ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384410_0x384410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841ECu; }
        if (ctx->pc != 0x3841ECu) { return; }
    }
    ctx->pc = 0x3841ECu;
label_3841ec:
    // 0x3841ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3841ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3841f0:
    // 0x3841f0: 0xc0e1100  jal         func_384400
label_3841f4:
    if (ctx->pc == 0x3841F4u) {
        ctx->pc = 0x3841F4u;
            // 0x3841f4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x3841F8u;
        goto label_3841f8;
    }
    ctx->pc = 0x3841F0u;
    SET_GPR_U32(ctx, 31, 0x3841F8u);
    ctx->pc = 0x3841F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3841F0u;
            // 0x3841f4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384400u;
    if (runtime->hasFunction(0x384400u)) {
        auto targetFn = runtime->lookupFunction(0x384400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841F8u; }
        if (ctx->pc != 0x3841F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384400_0x384400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3841F8u; }
        if (ctx->pc != 0x3841F8u) { return; }
    }
    ctx->pc = 0x3841F8u;
label_3841f8:
    // 0x3841f8: 0xc0772e8  jal         func_1DCBA0
label_3841fc:
    if (ctx->pc == 0x3841FCu) {
        ctx->pc = 0x3841FCu;
            // 0x3841fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384200u;
        goto label_384200;
    }
    ctx->pc = 0x3841F8u;
    SET_GPR_U32(ctx, 31, 0x384200u);
    ctx->pc = 0x3841FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3841F8u;
            // 0x3841fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384200u; }
        if (ctx->pc != 0x384200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384200u; }
        if (ctx->pc != 0x384200u) { return; }
    }
    ctx->pc = 0x384200u;
label_384200:
    // 0x384200: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x384200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384204:
    // 0x384204: 0xc0e10fc  jal         func_3843F0
label_384208:
    if (ctx->pc == 0x384208u) {
        ctx->pc = 0x384208u;
            // 0x384208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38420Cu;
        goto label_38420c;
    }
    ctx->pc = 0x384204u;
    SET_GPR_U32(ctx, 31, 0x38420Cu);
    ctx->pc = 0x384208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384204u;
            // 0x384208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3843F0u;
    if (runtime->hasFunction(0x3843F0u)) {
        auto targetFn = runtime->lookupFunction(0x3843F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38420Cu; }
        if (ctx->pc != 0x38420Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003843F0_0x3843f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38420Cu; }
        if (ctx->pc != 0x38420Cu) { return; }
    }
    ctx->pc = 0x38420Cu;
label_38420c:
    // 0x38420c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38420cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_384210:
    // 0x384210: 0xc0e11d4  jal         func_384750
label_384214:
    if (ctx->pc == 0x384214u) {
        ctx->pc = 0x384214u;
            // 0x384214: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384218u;
        goto label_384218;
    }
    ctx->pc = 0x384210u;
    SET_GPR_U32(ctx, 31, 0x384218u);
    ctx->pc = 0x384214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384210u;
            // 0x384214: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384750u;
    if (runtime->hasFunction(0x384750u)) {
        auto targetFn = runtime->lookupFunction(0x384750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384218u; }
        if (ctx->pc != 0x384218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384750_0x384750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384218u; }
        if (ctx->pc != 0x384218u) { return; }
    }
    ctx->pc = 0x384218u;
label_384218:
    // 0x384218: 0xc0772f0  jal         func_1DCBC0
label_38421c:
    if (ctx->pc == 0x38421Cu) {
        ctx->pc = 0x38421Cu;
            // 0x38421c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384220u;
        goto label_384220;
    }
    ctx->pc = 0x384218u;
    SET_GPR_U32(ctx, 31, 0x384220u);
    ctx->pc = 0x38421Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384218u;
            // 0x38421c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384220u; }
        if (ctx->pc != 0x384220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384220u; }
        if (ctx->pc != 0x384220u) { return; }
    }
    ctx->pc = 0x384220u;
label_384220:
    // 0x384220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x384220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384224:
    // 0x384224: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x384224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_384228:
    // 0x384228: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x384228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_38422c:
    // 0x38422c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38422cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_384230:
    // 0x384230: 0xc0bdf9c  jal         func_2F7E70
label_384234:
    if (ctx->pc == 0x384234u) {
        ctx->pc = 0x384234u;
            // 0x384234: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x384238u;
        goto label_384238;
    }
    ctx->pc = 0x384230u;
    SET_GPR_U32(ctx, 31, 0x384238u);
    ctx->pc = 0x384234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384230u;
            // 0x384234: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384238u; }
        if (ctx->pc != 0x384238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384238u; }
        if (ctx->pc != 0x384238u) { return; }
    }
    ctx->pc = 0x384238u;
label_384238:
    // 0x384238: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x384238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38423c:
    // 0x38423c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x38423cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_384240:
    // 0x384240: 0xc122be4  jal         func_48AF90
label_384244:
    if (ctx->pc == 0x384244u) {
        ctx->pc = 0x384244u;
            // 0x384244: 0x264501f0  addiu       $a1, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->pc = 0x384248u;
        goto label_384248;
    }
    ctx->pc = 0x384240u;
    SET_GPR_U32(ctx, 31, 0x384248u);
    ctx->pc = 0x384244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384240u;
            // 0x384244: 0x264501f0  addiu       $a1, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AF90u;
    if (runtime->hasFunction(0x48AF90u)) {
        auto targetFn = runtime->lookupFunction(0x48AF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384248u; }
        if (ctx->pc != 0x384248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AF90_0x48af90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384248u; }
        if (ctx->pc != 0x384248u) { return; }
    }
    ctx->pc = 0x384248u;
label_384248:
    // 0x384248: 0xc0b6e88  jal         func_2DBA20
label_38424c:
    if (ctx->pc == 0x38424Cu) {
        ctx->pc = 0x38424Cu;
            // 0x38424c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384250u;
        goto label_384250;
    }
    ctx->pc = 0x384248u;
    SET_GPR_U32(ctx, 31, 0x384250u);
    ctx->pc = 0x38424Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384248u;
            // 0x38424c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA20u;
    if (runtime->hasFunction(0x2DBA20u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384250u; }
        if (ctx->pc != 0x384250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA20_0x2dba20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384250u; }
        if (ctx->pc != 0x384250u) { return; }
    }
    ctx->pc = 0x384250u;
label_384250:
    // 0x384250: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x384250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384254:
    // 0x384254: 0xc0767c8  jal         func_1D9F20
label_384258:
    if (ctx->pc == 0x384258u) {
        ctx->pc = 0x384258u;
            // 0x384258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38425Cu;
        goto label_38425c;
    }
    ctx->pc = 0x384254u;
    SET_GPR_U32(ctx, 31, 0x38425Cu);
    ctx->pc = 0x384258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384254u;
            // 0x384258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F20u;
    if (runtime->hasFunction(0x1D9F20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38425Cu; }
        if (ctx->pc != 0x38425Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9F20_0x1d9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38425Cu; }
        if (ctx->pc != 0x38425Cu) { return; }
    }
    ctx->pc = 0x38425Cu;
label_38425c:
    // 0x38425c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38425cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_384260:
    // 0x384260: 0xc07649c  jal         func_1D9270
label_384264:
    if (ctx->pc == 0x384264u) {
        ctx->pc = 0x384264u;
            // 0x384264: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x384268u;
        goto label_384268;
    }
    ctx->pc = 0x384260u;
    SET_GPR_U32(ctx, 31, 0x384268u);
    ctx->pc = 0x384264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384260u;
            // 0x384264: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384268u; }
        if (ctx->pc != 0x384268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384268u; }
        if (ctx->pc != 0x384268u) { return; }
    }
    ctx->pc = 0x384268u;
label_384268:
    // 0x384268: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x384268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_38426c:
    // 0x38426c: 0xc0e13e8  jal         func_384FA0
label_384270:
    if (ctx->pc == 0x384270u) {
        ctx->pc = 0x384270u;
            // 0x384270: 0x8e4403a0  lw          $a0, 0x3A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 928)));
        ctx->pc = 0x384274u;
        goto label_384274;
    }
    ctx->pc = 0x38426Cu;
    SET_GPR_U32(ctx, 31, 0x384274u);
    ctx->pc = 0x384270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38426Cu;
            // 0x384270: 0x8e4403a0  lw          $a0, 0x3A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 928)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384FA0u;
    if (runtime->hasFunction(0x384FA0u)) {
        auto targetFn = runtime->lookupFunction(0x384FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384274u; }
        if (ctx->pc != 0x384274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384FA0_0x384fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384274u; }
        if (ctx->pc != 0x384274u) { return; }
    }
    ctx->pc = 0x384274u;
label_384274:
    // 0x384274: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x384274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_384278:
    // 0x384278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x384278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38427c:
    // 0x38427c: 0xc0dd890  jal         func_376240
label_384280:
    if (ctx->pc == 0x384280u) {
        ctx->pc = 0x384284u;
        goto label_384284;
    }
    ctx->pc = 0x38427Cu;
    SET_GPR_U32(ctx, 31, 0x384284u);
    ctx->pc = 0x376240u;
    if (runtime->hasFunction(0x376240u)) {
        auto targetFn = runtime->lookupFunction(0x376240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384284u; }
        if (ctx->pc != 0x384284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376240_0x376240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384284u; }
        if (ctx->pc != 0x384284u) { return; }
    }
    ctx->pc = 0x384284u;
label_384284:
    // 0x384284: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_384288:
    if (ctx->pc == 0x384288u) {
        ctx->pc = 0x38428Cu;
        goto label_38428c;
    }
    ctx->pc = 0x384284u;
    {
        const bool branch_taken_0x384284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384284) {
            ctx->pc = 0x384314u;
            goto label_384314;
        }
    }
    ctx->pc = 0x38428Cu;
label_38428c:
    // 0x38428c: 0xc0e1778  jal         func_385DE0
label_384290:
    if (ctx->pc == 0x384290u) {
        ctx->pc = 0x384290u;
            // 0x384290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384294u;
        goto label_384294;
    }
    ctx->pc = 0x38428Cu;
    SET_GPR_U32(ctx, 31, 0x384294u);
    ctx->pc = 0x384290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38428Cu;
            // 0x384290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x385DE0u;
    if (runtime->hasFunction(0x385DE0u)) {
        auto targetFn = runtime->lookupFunction(0x385DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384294u; }
        if (ctx->pc != 0x384294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00385DE0_0x385de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384294u; }
        if (ctx->pc != 0x384294u) { return; }
    }
    ctx->pc = 0x384294u;
label_384294:
    // 0x384294: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x384294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_384298:
    // 0x384298: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x384298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_38429c:
    // 0x38429c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38429cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3842a0:
    // 0x3842a0: 0xc0e11cc  jal         func_384730
label_3842a4:
    if (ctx->pc == 0x3842A4u) {
        ctx->pc = 0x3842A4u;
            // 0x3842a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3842A8u;
        goto label_3842a8;
    }
    ctx->pc = 0x3842A0u;
    SET_GPR_U32(ctx, 31, 0x3842A8u);
    ctx->pc = 0x3842A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3842A0u;
            // 0x3842a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384730u;
    if (runtime->hasFunction(0x384730u)) {
        auto targetFn = runtime->lookupFunction(0x384730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3842A8u; }
        if (ctx->pc != 0x3842A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384730_0x384730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3842A8u; }
        if (ctx->pc != 0x3842A8u) { return; }
    }
    ctx->pc = 0x3842A8u;
label_3842a8:
    // 0x3842a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3842a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3842ac:
    // 0x3842ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3842acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3842b0:
    // 0x3842b0: 0xc0e10e0  jal         func_384380
label_3842b4:
    if (ctx->pc == 0x3842B4u) {
        ctx->pc = 0x3842B4u;
            // 0x3842b4: 0xae4201d4  sw          $v0, 0x1D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 2));
        ctx->pc = 0x3842B8u;
        goto label_3842b8;
    }
    ctx->pc = 0x3842B0u;
    SET_GPR_U32(ctx, 31, 0x3842B8u);
    ctx->pc = 0x3842B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3842B0u;
            // 0x3842b4: 0xae4201d4  sw          $v0, 0x1D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384380u;
    if (runtime->hasFunction(0x384380u)) {
        auto targetFn = runtime->lookupFunction(0x384380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3842B8u; }
        if (ctx->pc != 0x3842B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384380_0x384380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3842B8u; }
        if (ctx->pc != 0x3842B8u) { return; }
    }
    ctx->pc = 0x3842B8u;
label_3842b8:
    // 0x3842b8: 0x10000016  b           . + 4 + (0x16 << 2)
label_3842bc:
    if (ctx->pc == 0x3842BCu) {
        ctx->pc = 0x3842C0u;
        goto label_3842c0;
    }
    ctx->pc = 0x3842B8u;
    {
        const bool branch_taken_0x3842b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3842b8) {
            ctx->pc = 0x384314u;
            goto label_384314;
        }
    }
    ctx->pc = 0x3842C0u;
label_3842c0:
    // 0x3842c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3842c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3842c4:
    // 0x3842c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3842c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3842c8:
    // 0x3842c8: 0xc0d8834  jal         func_3620D0
label_3842cc:
    if (ctx->pc == 0x3842CCu) {
        ctx->pc = 0x3842CCu;
            // 0x3842cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3842D0u;
        goto label_3842d0;
    }
    ctx->pc = 0x3842C8u;
    SET_GPR_U32(ctx, 31, 0x3842D0u);
    ctx->pc = 0x3842CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3842C8u;
            // 0x3842cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3842D0u; }
        if (ctx->pc != 0x3842D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3842D0u; }
        if (ctx->pc != 0x3842D0u) { return; }
    }
    ctx->pc = 0x3842D0u;
label_3842d0:
    // 0x3842d0: 0xc0e1224  jal         func_384890
label_3842d4:
    if (ctx->pc == 0x3842D4u) {
        ctx->pc = 0x3842D4u;
            // 0x3842d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3842D8u;
        goto label_3842d8;
    }
    ctx->pc = 0x3842D0u;
    SET_GPR_U32(ctx, 31, 0x3842D8u);
    ctx->pc = 0x3842D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3842D0u;
            // 0x3842d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3842D8u; }
        if (ctx->pc != 0x3842D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3842D8u; }
        if (ctx->pc != 0x3842D8u) { return; }
    }
    ctx->pc = 0x3842D8u;
label_3842d8:
    // 0x3842d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3842d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3842dc:
    // 0x3842dc: 0xc04cc04  jal         func_133010
label_3842e0:
    if (ctx->pc == 0x3842E0u) {
        ctx->pc = 0x3842E0u;
            // 0x3842e0: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->pc = 0x3842E4u;
        goto label_3842e4;
    }
    ctx->pc = 0x3842DCu;
    SET_GPR_U32(ctx, 31, 0x3842E4u);
    ctx->pc = 0x3842E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3842DCu;
            // 0x3842e0: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3842E4u; }
        if (ctx->pc != 0x3842E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3842E4u; }
        if (ctx->pc != 0x3842E4u) { return; }
    }
    ctx->pc = 0x3842E4u;
label_3842e4:
    // 0x3842e4: 0xc0e1220  jal         func_384880
label_3842e8:
    if (ctx->pc == 0x3842E8u) {
        ctx->pc = 0x3842E8u;
            // 0x3842e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3842ECu;
        goto label_3842ec;
    }
    ctx->pc = 0x3842E4u;
    SET_GPR_U32(ctx, 31, 0x3842ECu);
    ctx->pc = 0x3842E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3842E4u;
            // 0x3842e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384880u;
    if (runtime->hasFunction(0x384880u)) {
        auto targetFn = runtime->lookupFunction(0x384880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3842ECu; }
        if (ctx->pc != 0x3842ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384880_0x384880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3842ECu; }
        if (ctx->pc != 0x3842ECu) { return; }
    }
    ctx->pc = 0x3842ECu;
label_3842ec:
    // 0x3842ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3842ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3842f0:
    // 0x3842f0: 0xc04c720  jal         func_131C80
label_3842f4:
    if (ctx->pc == 0x3842F4u) {
        ctx->pc = 0x3842F4u;
            // 0x3842f4: 0x264401f0  addiu       $a0, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->pc = 0x3842F8u;
        goto label_3842f8;
    }
    ctx->pc = 0x3842F0u;
    SET_GPR_U32(ctx, 31, 0x3842F8u);
    ctx->pc = 0x3842F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3842F0u;
            // 0x3842f4: 0x264401f0  addiu       $a0, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3842F8u; }
        if (ctx->pc != 0x3842F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3842F8u; }
        if (ctx->pc != 0x3842F8u) { return; }
    }
    ctx->pc = 0x3842F8u;
label_3842f8:
    // 0x3842f8: 0xc0e10dc  jal         func_384370
label_3842fc:
    if (ctx->pc == 0x3842FCu) {
        ctx->pc = 0x3842FCu;
            // 0x3842fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384300u;
        goto label_384300;
    }
    ctx->pc = 0x3842F8u;
    SET_GPR_U32(ctx, 31, 0x384300u);
    ctx->pc = 0x3842FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3842F8u;
            // 0x3842fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384370u;
    if (runtime->hasFunction(0x384370u)) {
        auto targetFn = runtime->lookupFunction(0x384370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384300u; }
        if (ctx->pc != 0x384300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384370_0x384370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384300u; }
        if (ctx->pc != 0x384300u) { return; }
    }
    ctx->pc = 0x384300u;
label_384300:
    // 0x384300: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x384300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_384304:
    // 0x384304: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_384308:
    if (ctx->pc == 0x384308u) {
        ctx->pc = 0x38430Cu;
        goto label_38430c;
    }
    ctx->pc = 0x384304u;
    {
        const bool branch_taken_0x384304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x384304) {
            ctx->pc = 0x384314u;
            goto label_384314;
        }
    }
    ctx->pc = 0x38430Cu;
label_38430c:
    // 0x38430c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x38430cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_384310:
    // 0x384310: 0xae4201d4  sw          $v0, 0x1D4($s2)
    ctx->pc = 0x384310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 2));
label_384314:
    // 0x384314: 0x8e4301d4  lw          $v1, 0x1D4($s2)
    ctx->pc = 0x384314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
label_384318:
    // 0x384318: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x384318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38431c:
    // 0x38431c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_384320:
    if (ctx->pc == 0x384320u) {
        ctx->pc = 0x384324u;
        goto label_384324;
    }
    ctx->pc = 0x38431Cu;
    {
        const bool branch_taken_0x38431c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38431c) {
            ctx->pc = 0x38434Cu;
            goto label_38434c;
        }
    }
    ctx->pc = 0x384324u;
label_384324:
    // 0x384324: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x384324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_384328:
    // 0x384328: 0x10000008  b           . + 4 + (0x8 << 2)
label_38432c:
    if (ctx->pc == 0x38432Cu) {
        ctx->pc = 0x38432Cu;
            // 0x38432c: 0xae4201d0  sw          $v0, 0x1D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 2));
        ctx->pc = 0x384330u;
        goto label_384330;
    }
    ctx->pc = 0x384328u;
    {
        const bool branch_taken_0x384328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38432Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384328u;
            // 0x38432c: 0xae4201d0  sw          $v0, 0x1D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384328) {
            ctx->pc = 0x38434Cu;
            goto label_38434c;
        }
    }
    ctx->pc = 0x384330u;
label_384330:
    // 0x384330: 0xc04cc04  jal         func_133010
label_384334:
    if (ctx->pc == 0x384334u) {
        ctx->pc = 0x384334u;
            // 0x384334: 0x26450360  addiu       $a1, $s2, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
        ctx->pc = 0x384338u;
        goto label_384338;
    }
    ctx->pc = 0x384330u;
    SET_GPR_U32(ctx, 31, 0x384338u);
    ctx->pc = 0x384334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384330u;
            // 0x384334: 0x26450360  addiu       $a1, $s2, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384338u; }
        if (ctx->pc != 0x384338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384338u; }
        if (ctx->pc != 0x384338u) { return; }
    }
    ctx->pc = 0x384338u;
label_384338:
    // 0x384338: 0x264401f0  addiu       $a0, $s2, 0x1F0
    ctx->pc = 0x384338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_38433c:
    // 0x38433c: 0xc04c720  jal         func_131C80
label_384340:
    if (ctx->pc == 0x384340u) {
        ctx->pc = 0x384340u;
            // 0x384340: 0x26450344  addiu       $a1, $s2, 0x344 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 836));
        ctx->pc = 0x384344u;
        goto label_384344;
    }
    ctx->pc = 0x38433Cu;
    SET_GPR_U32(ctx, 31, 0x384344u);
    ctx->pc = 0x384340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38433Cu;
            // 0x384340: 0x26450344  addiu       $a1, $s2, 0x344 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 836));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384344u; }
        if (ctx->pc != 0x384344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384344u; }
        if (ctx->pc != 0x384344u) { return; }
    }
    ctx->pc = 0x384344u;
label_384344:
    // 0x384344: 0x10000002  b           . + 4 + (0x2 << 2)
label_384348:
    if (ctx->pc == 0x384348u) {
        ctx->pc = 0x384348u;
            // 0x384348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38434Cu;
        goto label_38434c;
    }
    ctx->pc = 0x384344u;
    {
        const bool branch_taken_0x384344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384344u;
            // 0x384348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384344) {
            ctx->pc = 0x384350u;
            goto label_384350;
        }
    }
    ctx->pc = 0x38434Cu;
label_38434c:
    // 0x38434c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38434cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384350:
    // 0x384350: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x384350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_384354:
    // 0x384354: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x384354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_384358:
    // 0x384358: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x384358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38435c:
    // 0x38435c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38435cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_384360:
    // 0x384360: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x384360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_384364:
    // 0x384364: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x384364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_384368:
    // 0x384368: 0x3e00008  jr          $ra
label_38436c:
    if (ctx->pc == 0x38436Cu) {
        ctx->pc = 0x38436Cu;
            // 0x38436c: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x384370u;
        goto label_fallthrough_0x384368;
    }
    ctx->pc = 0x384368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38436Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384368u;
            // 0x38436c: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x384368:
    ctx->pc = 0x384370u;
}
