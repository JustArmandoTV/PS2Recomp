#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00310C30
// Address: 0x310c30 - 0x311e70
void sub_00310C30_0x310c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310C30_0x310c30");
#endif

    switch (ctx->pc) {
        case 0x310c30u: goto label_310c30;
        case 0x310c34u: goto label_310c34;
        case 0x310c38u: goto label_310c38;
        case 0x310c3cu: goto label_310c3c;
        case 0x310c40u: goto label_310c40;
        case 0x310c44u: goto label_310c44;
        case 0x310c48u: goto label_310c48;
        case 0x310c4cu: goto label_310c4c;
        case 0x310c50u: goto label_310c50;
        case 0x310c54u: goto label_310c54;
        case 0x310c58u: goto label_310c58;
        case 0x310c5cu: goto label_310c5c;
        case 0x310c60u: goto label_310c60;
        case 0x310c64u: goto label_310c64;
        case 0x310c68u: goto label_310c68;
        case 0x310c6cu: goto label_310c6c;
        case 0x310c70u: goto label_310c70;
        case 0x310c74u: goto label_310c74;
        case 0x310c78u: goto label_310c78;
        case 0x310c7cu: goto label_310c7c;
        case 0x310c80u: goto label_310c80;
        case 0x310c84u: goto label_310c84;
        case 0x310c88u: goto label_310c88;
        case 0x310c8cu: goto label_310c8c;
        case 0x310c90u: goto label_310c90;
        case 0x310c94u: goto label_310c94;
        case 0x310c98u: goto label_310c98;
        case 0x310c9cu: goto label_310c9c;
        case 0x310ca0u: goto label_310ca0;
        case 0x310ca4u: goto label_310ca4;
        case 0x310ca8u: goto label_310ca8;
        case 0x310cacu: goto label_310cac;
        case 0x310cb0u: goto label_310cb0;
        case 0x310cb4u: goto label_310cb4;
        case 0x310cb8u: goto label_310cb8;
        case 0x310cbcu: goto label_310cbc;
        case 0x310cc0u: goto label_310cc0;
        case 0x310cc4u: goto label_310cc4;
        case 0x310cc8u: goto label_310cc8;
        case 0x310cccu: goto label_310ccc;
        case 0x310cd0u: goto label_310cd0;
        case 0x310cd4u: goto label_310cd4;
        case 0x310cd8u: goto label_310cd8;
        case 0x310cdcu: goto label_310cdc;
        case 0x310ce0u: goto label_310ce0;
        case 0x310ce4u: goto label_310ce4;
        case 0x310ce8u: goto label_310ce8;
        case 0x310cecu: goto label_310cec;
        case 0x310cf0u: goto label_310cf0;
        case 0x310cf4u: goto label_310cf4;
        case 0x310cf8u: goto label_310cf8;
        case 0x310cfcu: goto label_310cfc;
        case 0x310d00u: goto label_310d00;
        case 0x310d04u: goto label_310d04;
        case 0x310d08u: goto label_310d08;
        case 0x310d0cu: goto label_310d0c;
        case 0x310d10u: goto label_310d10;
        case 0x310d14u: goto label_310d14;
        case 0x310d18u: goto label_310d18;
        case 0x310d1cu: goto label_310d1c;
        case 0x310d20u: goto label_310d20;
        case 0x310d24u: goto label_310d24;
        case 0x310d28u: goto label_310d28;
        case 0x310d2cu: goto label_310d2c;
        case 0x310d30u: goto label_310d30;
        case 0x310d34u: goto label_310d34;
        case 0x310d38u: goto label_310d38;
        case 0x310d3cu: goto label_310d3c;
        case 0x310d40u: goto label_310d40;
        case 0x310d44u: goto label_310d44;
        case 0x310d48u: goto label_310d48;
        case 0x310d4cu: goto label_310d4c;
        case 0x310d50u: goto label_310d50;
        case 0x310d54u: goto label_310d54;
        case 0x310d58u: goto label_310d58;
        case 0x310d5cu: goto label_310d5c;
        case 0x310d60u: goto label_310d60;
        case 0x310d64u: goto label_310d64;
        case 0x310d68u: goto label_310d68;
        case 0x310d6cu: goto label_310d6c;
        case 0x310d70u: goto label_310d70;
        case 0x310d74u: goto label_310d74;
        case 0x310d78u: goto label_310d78;
        case 0x310d7cu: goto label_310d7c;
        case 0x310d80u: goto label_310d80;
        case 0x310d84u: goto label_310d84;
        case 0x310d88u: goto label_310d88;
        case 0x310d8cu: goto label_310d8c;
        case 0x310d90u: goto label_310d90;
        case 0x310d94u: goto label_310d94;
        case 0x310d98u: goto label_310d98;
        case 0x310d9cu: goto label_310d9c;
        case 0x310da0u: goto label_310da0;
        case 0x310da4u: goto label_310da4;
        case 0x310da8u: goto label_310da8;
        case 0x310dacu: goto label_310dac;
        case 0x310db0u: goto label_310db0;
        case 0x310db4u: goto label_310db4;
        case 0x310db8u: goto label_310db8;
        case 0x310dbcu: goto label_310dbc;
        case 0x310dc0u: goto label_310dc0;
        case 0x310dc4u: goto label_310dc4;
        case 0x310dc8u: goto label_310dc8;
        case 0x310dccu: goto label_310dcc;
        case 0x310dd0u: goto label_310dd0;
        case 0x310dd4u: goto label_310dd4;
        case 0x310dd8u: goto label_310dd8;
        case 0x310ddcu: goto label_310ddc;
        case 0x310de0u: goto label_310de0;
        case 0x310de4u: goto label_310de4;
        case 0x310de8u: goto label_310de8;
        case 0x310decu: goto label_310dec;
        case 0x310df0u: goto label_310df0;
        case 0x310df4u: goto label_310df4;
        case 0x310df8u: goto label_310df8;
        case 0x310dfcu: goto label_310dfc;
        case 0x310e00u: goto label_310e00;
        case 0x310e04u: goto label_310e04;
        case 0x310e08u: goto label_310e08;
        case 0x310e0cu: goto label_310e0c;
        case 0x310e10u: goto label_310e10;
        case 0x310e14u: goto label_310e14;
        case 0x310e18u: goto label_310e18;
        case 0x310e1cu: goto label_310e1c;
        case 0x310e20u: goto label_310e20;
        case 0x310e24u: goto label_310e24;
        case 0x310e28u: goto label_310e28;
        case 0x310e2cu: goto label_310e2c;
        case 0x310e30u: goto label_310e30;
        case 0x310e34u: goto label_310e34;
        case 0x310e38u: goto label_310e38;
        case 0x310e3cu: goto label_310e3c;
        case 0x310e40u: goto label_310e40;
        case 0x310e44u: goto label_310e44;
        case 0x310e48u: goto label_310e48;
        case 0x310e4cu: goto label_310e4c;
        case 0x310e50u: goto label_310e50;
        case 0x310e54u: goto label_310e54;
        case 0x310e58u: goto label_310e58;
        case 0x310e5cu: goto label_310e5c;
        case 0x310e60u: goto label_310e60;
        case 0x310e64u: goto label_310e64;
        case 0x310e68u: goto label_310e68;
        case 0x310e6cu: goto label_310e6c;
        case 0x310e70u: goto label_310e70;
        case 0x310e74u: goto label_310e74;
        case 0x310e78u: goto label_310e78;
        case 0x310e7cu: goto label_310e7c;
        case 0x310e80u: goto label_310e80;
        case 0x310e84u: goto label_310e84;
        case 0x310e88u: goto label_310e88;
        case 0x310e8cu: goto label_310e8c;
        case 0x310e90u: goto label_310e90;
        case 0x310e94u: goto label_310e94;
        case 0x310e98u: goto label_310e98;
        case 0x310e9cu: goto label_310e9c;
        case 0x310ea0u: goto label_310ea0;
        case 0x310ea4u: goto label_310ea4;
        case 0x310ea8u: goto label_310ea8;
        case 0x310eacu: goto label_310eac;
        case 0x310eb0u: goto label_310eb0;
        case 0x310eb4u: goto label_310eb4;
        case 0x310eb8u: goto label_310eb8;
        case 0x310ebcu: goto label_310ebc;
        case 0x310ec0u: goto label_310ec0;
        case 0x310ec4u: goto label_310ec4;
        case 0x310ec8u: goto label_310ec8;
        case 0x310eccu: goto label_310ecc;
        case 0x310ed0u: goto label_310ed0;
        case 0x310ed4u: goto label_310ed4;
        case 0x310ed8u: goto label_310ed8;
        case 0x310edcu: goto label_310edc;
        case 0x310ee0u: goto label_310ee0;
        case 0x310ee4u: goto label_310ee4;
        case 0x310ee8u: goto label_310ee8;
        case 0x310eecu: goto label_310eec;
        case 0x310ef0u: goto label_310ef0;
        case 0x310ef4u: goto label_310ef4;
        case 0x310ef8u: goto label_310ef8;
        case 0x310efcu: goto label_310efc;
        case 0x310f00u: goto label_310f00;
        case 0x310f04u: goto label_310f04;
        case 0x310f08u: goto label_310f08;
        case 0x310f0cu: goto label_310f0c;
        case 0x310f10u: goto label_310f10;
        case 0x310f14u: goto label_310f14;
        case 0x310f18u: goto label_310f18;
        case 0x310f1cu: goto label_310f1c;
        case 0x310f20u: goto label_310f20;
        case 0x310f24u: goto label_310f24;
        case 0x310f28u: goto label_310f28;
        case 0x310f2cu: goto label_310f2c;
        case 0x310f30u: goto label_310f30;
        case 0x310f34u: goto label_310f34;
        case 0x310f38u: goto label_310f38;
        case 0x310f3cu: goto label_310f3c;
        case 0x310f40u: goto label_310f40;
        case 0x310f44u: goto label_310f44;
        case 0x310f48u: goto label_310f48;
        case 0x310f4cu: goto label_310f4c;
        case 0x310f50u: goto label_310f50;
        case 0x310f54u: goto label_310f54;
        case 0x310f58u: goto label_310f58;
        case 0x310f5cu: goto label_310f5c;
        case 0x310f60u: goto label_310f60;
        case 0x310f64u: goto label_310f64;
        case 0x310f68u: goto label_310f68;
        case 0x310f6cu: goto label_310f6c;
        case 0x310f70u: goto label_310f70;
        case 0x310f74u: goto label_310f74;
        case 0x310f78u: goto label_310f78;
        case 0x310f7cu: goto label_310f7c;
        case 0x310f80u: goto label_310f80;
        case 0x310f84u: goto label_310f84;
        case 0x310f88u: goto label_310f88;
        case 0x310f8cu: goto label_310f8c;
        case 0x310f90u: goto label_310f90;
        case 0x310f94u: goto label_310f94;
        case 0x310f98u: goto label_310f98;
        case 0x310f9cu: goto label_310f9c;
        case 0x310fa0u: goto label_310fa0;
        case 0x310fa4u: goto label_310fa4;
        case 0x310fa8u: goto label_310fa8;
        case 0x310facu: goto label_310fac;
        case 0x310fb0u: goto label_310fb0;
        case 0x310fb4u: goto label_310fb4;
        case 0x310fb8u: goto label_310fb8;
        case 0x310fbcu: goto label_310fbc;
        case 0x310fc0u: goto label_310fc0;
        case 0x310fc4u: goto label_310fc4;
        case 0x310fc8u: goto label_310fc8;
        case 0x310fccu: goto label_310fcc;
        case 0x310fd0u: goto label_310fd0;
        case 0x310fd4u: goto label_310fd4;
        case 0x310fd8u: goto label_310fd8;
        case 0x310fdcu: goto label_310fdc;
        case 0x310fe0u: goto label_310fe0;
        case 0x310fe4u: goto label_310fe4;
        case 0x310fe8u: goto label_310fe8;
        case 0x310fecu: goto label_310fec;
        case 0x310ff0u: goto label_310ff0;
        case 0x310ff4u: goto label_310ff4;
        case 0x310ff8u: goto label_310ff8;
        case 0x310ffcu: goto label_310ffc;
        case 0x311000u: goto label_311000;
        case 0x311004u: goto label_311004;
        case 0x311008u: goto label_311008;
        case 0x31100cu: goto label_31100c;
        case 0x311010u: goto label_311010;
        case 0x311014u: goto label_311014;
        case 0x311018u: goto label_311018;
        case 0x31101cu: goto label_31101c;
        case 0x311020u: goto label_311020;
        case 0x311024u: goto label_311024;
        case 0x311028u: goto label_311028;
        case 0x31102cu: goto label_31102c;
        case 0x311030u: goto label_311030;
        case 0x311034u: goto label_311034;
        case 0x311038u: goto label_311038;
        case 0x31103cu: goto label_31103c;
        case 0x311040u: goto label_311040;
        case 0x311044u: goto label_311044;
        case 0x311048u: goto label_311048;
        case 0x31104cu: goto label_31104c;
        case 0x311050u: goto label_311050;
        case 0x311054u: goto label_311054;
        case 0x311058u: goto label_311058;
        case 0x31105cu: goto label_31105c;
        case 0x311060u: goto label_311060;
        case 0x311064u: goto label_311064;
        case 0x311068u: goto label_311068;
        case 0x31106cu: goto label_31106c;
        case 0x311070u: goto label_311070;
        case 0x311074u: goto label_311074;
        case 0x311078u: goto label_311078;
        case 0x31107cu: goto label_31107c;
        case 0x311080u: goto label_311080;
        case 0x311084u: goto label_311084;
        case 0x311088u: goto label_311088;
        case 0x31108cu: goto label_31108c;
        case 0x311090u: goto label_311090;
        case 0x311094u: goto label_311094;
        case 0x311098u: goto label_311098;
        case 0x31109cu: goto label_31109c;
        case 0x3110a0u: goto label_3110a0;
        case 0x3110a4u: goto label_3110a4;
        case 0x3110a8u: goto label_3110a8;
        case 0x3110acu: goto label_3110ac;
        case 0x3110b0u: goto label_3110b0;
        case 0x3110b4u: goto label_3110b4;
        case 0x3110b8u: goto label_3110b8;
        case 0x3110bcu: goto label_3110bc;
        case 0x3110c0u: goto label_3110c0;
        case 0x3110c4u: goto label_3110c4;
        case 0x3110c8u: goto label_3110c8;
        case 0x3110ccu: goto label_3110cc;
        case 0x3110d0u: goto label_3110d0;
        case 0x3110d4u: goto label_3110d4;
        case 0x3110d8u: goto label_3110d8;
        case 0x3110dcu: goto label_3110dc;
        case 0x3110e0u: goto label_3110e0;
        case 0x3110e4u: goto label_3110e4;
        case 0x3110e8u: goto label_3110e8;
        case 0x3110ecu: goto label_3110ec;
        case 0x3110f0u: goto label_3110f0;
        case 0x3110f4u: goto label_3110f4;
        case 0x3110f8u: goto label_3110f8;
        case 0x3110fcu: goto label_3110fc;
        case 0x311100u: goto label_311100;
        case 0x311104u: goto label_311104;
        case 0x311108u: goto label_311108;
        case 0x31110cu: goto label_31110c;
        case 0x311110u: goto label_311110;
        case 0x311114u: goto label_311114;
        case 0x311118u: goto label_311118;
        case 0x31111cu: goto label_31111c;
        case 0x311120u: goto label_311120;
        case 0x311124u: goto label_311124;
        case 0x311128u: goto label_311128;
        case 0x31112cu: goto label_31112c;
        case 0x311130u: goto label_311130;
        case 0x311134u: goto label_311134;
        case 0x311138u: goto label_311138;
        case 0x31113cu: goto label_31113c;
        case 0x311140u: goto label_311140;
        case 0x311144u: goto label_311144;
        case 0x311148u: goto label_311148;
        case 0x31114cu: goto label_31114c;
        case 0x311150u: goto label_311150;
        case 0x311154u: goto label_311154;
        case 0x311158u: goto label_311158;
        case 0x31115cu: goto label_31115c;
        case 0x311160u: goto label_311160;
        case 0x311164u: goto label_311164;
        case 0x311168u: goto label_311168;
        case 0x31116cu: goto label_31116c;
        case 0x311170u: goto label_311170;
        case 0x311174u: goto label_311174;
        case 0x311178u: goto label_311178;
        case 0x31117cu: goto label_31117c;
        case 0x311180u: goto label_311180;
        case 0x311184u: goto label_311184;
        case 0x311188u: goto label_311188;
        case 0x31118cu: goto label_31118c;
        case 0x311190u: goto label_311190;
        case 0x311194u: goto label_311194;
        case 0x311198u: goto label_311198;
        case 0x31119cu: goto label_31119c;
        case 0x3111a0u: goto label_3111a0;
        case 0x3111a4u: goto label_3111a4;
        case 0x3111a8u: goto label_3111a8;
        case 0x3111acu: goto label_3111ac;
        case 0x3111b0u: goto label_3111b0;
        case 0x3111b4u: goto label_3111b4;
        case 0x3111b8u: goto label_3111b8;
        case 0x3111bcu: goto label_3111bc;
        case 0x3111c0u: goto label_3111c0;
        case 0x3111c4u: goto label_3111c4;
        case 0x3111c8u: goto label_3111c8;
        case 0x3111ccu: goto label_3111cc;
        case 0x3111d0u: goto label_3111d0;
        case 0x3111d4u: goto label_3111d4;
        case 0x3111d8u: goto label_3111d8;
        case 0x3111dcu: goto label_3111dc;
        case 0x3111e0u: goto label_3111e0;
        case 0x3111e4u: goto label_3111e4;
        case 0x3111e8u: goto label_3111e8;
        case 0x3111ecu: goto label_3111ec;
        case 0x3111f0u: goto label_3111f0;
        case 0x3111f4u: goto label_3111f4;
        case 0x3111f8u: goto label_3111f8;
        case 0x3111fcu: goto label_3111fc;
        case 0x311200u: goto label_311200;
        case 0x311204u: goto label_311204;
        case 0x311208u: goto label_311208;
        case 0x31120cu: goto label_31120c;
        case 0x311210u: goto label_311210;
        case 0x311214u: goto label_311214;
        case 0x311218u: goto label_311218;
        case 0x31121cu: goto label_31121c;
        case 0x311220u: goto label_311220;
        case 0x311224u: goto label_311224;
        case 0x311228u: goto label_311228;
        case 0x31122cu: goto label_31122c;
        case 0x311230u: goto label_311230;
        case 0x311234u: goto label_311234;
        case 0x311238u: goto label_311238;
        case 0x31123cu: goto label_31123c;
        case 0x311240u: goto label_311240;
        case 0x311244u: goto label_311244;
        case 0x311248u: goto label_311248;
        case 0x31124cu: goto label_31124c;
        case 0x311250u: goto label_311250;
        case 0x311254u: goto label_311254;
        case 0x311258u: goto label_311258;
        case 0x31125cu: goto label_31125c;
        case 0x311260u: goto label_311260;
        case 0x311264u: goto label_311264;
        case 0x311268u: goto label_311268;
        case 0x31126cu: goto label_31126c;
        case 0x311270u: goto label_311270;
        case 0x311274u: goto label_311274;
        case 0x311278u: goto label_311278;
        case 0x31127cu: goto label_31127c;
        case 0x311280u: goto label_311280;
        case 0x311284u: goto label_311284;
        case 0x311288u: goto label_311288;
        case 0x31128cu: goto label_31128c;
        case 0x311290u: goto label_311290;
        case 0x311294u: goto label_311294;
        case 0x311298u: goto label_311298;
        case 0x31129cu: goto label_31129c;
        case 0x3112a0u: goto label_3112a0;
        case 0x3112a4u: goto label_3112a4;
        case 0x3112a8u: goto label_3112a8;
        case 0x3112acu: goto label_3112ac;
        case 0x3112b0u: goto label_3112b0;
        case 0x3112b4u: goto label_3112b4;
        case 0x3112b8u: goto label_3112b8;
        case 0x3112bcu: goto label_3112bc;
        case 0x3112c0u: goto label_3112c0;
        case 0x3112c4u: goto label_3112c4;
        case 0x3112c8u: goto label_3112c8;
        case 0x3112ccu: goto label_3112cc;
        case 0x3112d0u: goto label_3112d0;
        case 0x3112d4u: goto label_3112d4;
        case 0x3112d8u: goto label_3112d8;
        case 0x3112dcu: goto label_3112dc;
        case 0x3112e0u: goto label_3112e0;
        case 0x3112e4u: goto label_3112e4;
        case 0x3112e8u: goto label_3112e8;
        case 0x3112ecu: goto label_3112ec;
        case 0x3112f0u: goto label_3112f0;
        case 0x3112f4u: goto label_3112f4;
        case 0x3112f8u: goto label_3112f8;
        case 0x3112fcu: goto label_3112fc;
        case 0x311300u: goto label_311300;
        case 0x311304u: goto label_311304;
        case 0x311308u: goto label_311308;
        case 0x31130cu: goto label_31130c;
        case 0x311310u: goto label_311310;
        case 0x311314u: goto label_311314;
        case 0x311318u: goto label_311318;
        case 0x31131cu: goto label_31131c;
        case 0x311320u: goto label_311320;
        case 0x311324u: goto label_311324;
        case 0x311328u: goto label_311328;
        case 0x31132cu: goto label_31132c;
        case 0x311330u: goto label_311330;
        case 0x311334u: goto label_311334;
        case 0x311338u: goto label_311338;
        case 0x31133cu: goto label_31133c;
        case 0x311340u: goto label_311340;
        case 0x311344u: goto label_311344;
        case 0x311348u: goto label_311348;
        case 0x31134cu: goto label_31134c;
        case 0x311350u: goto label_311350;
        case 0x311354u: goto label_311354;
        case 0x311358u: goto label_311358;
        case 0x31135cu: goto label_31135c;
        case 0x311360u: goto label_311360;
        case 0x311364u: goto label_311364;
        case 0x311368u: goto label_311368;
        case 0x31136cu: goto label_31136c;
        case 0x311370u: goto label_311370;
        case 0x311374u: goto label_311374;
        case 0x311378u: goto label_311378;
        case 0x31137cu: goto label_31137c;
        case 0x311380u: goto label_311380;
        case 0x311384u: goto label_311384;
        case 0x311388u: goto label_311388;
        case 0x31138cu: goto label_31138c;
        case 0x311390u: goto label_311390;
        case 0x311394u: goto label_311394;
        case 0x311398u: goto label_311398;
        case 0x31139cu: goto label_31139c;
        case 0x3113a0u: goto label_3113a0;
        case 0x3113a4u: goto label_3113a4;
        case 0x3113a8u: goto label_3113a8;
        case 0x3113acu: goto label_3113ac;
        case 0x3113b0u: goto label_3113b0;
        case 0x3113b4u: goto label_3113b4;
        case 0x3113b8u: goto label_3113b8;
        case 0x3113bcu: goto label_3113bc;
        case 0x3113c0u: goto label_3113c0;
        case 0x3113c4u: goto label_3113c4;
        case 0x3113c8u: goto label_3113c8;
        case 0x3113ccu: goto label_3113cc;
        case 0x3113d0u: goto label_3113d0;
        case 0x3113d4u: goto label_3113d4;
        case 0x3113d8u: goto label_3113d8;
        case 0x3113dcu: goto label_3113dc;
        case 0x3113e0u: goto label_3113e0;
        case 0x3113e4u: goto label_3113e4;
        case 0x3113e8u: goto label_3113e8;
        case 0x3113ecu: goto label_3113ec;
        case 0x3113f0u: goto label_3113f0;
        case 0x3113f4u: goto label_3113f4;
        case 0x3113f8u: goto label_3113f8;
        case 0x3113fcu: goto label_3113fc;
        case 0x311400u: goto label_311400;
        case 0x311404u: goto label_311404;
        case 0x311408u: goto label_311408;
        case 0x31140cu: goto label_31140c;
        case 0x311410u: goto label_311410;
        case 0x311414u: goto label_311414;
        case 0x311418u: goto label_311418;
        case 0x31141cu: goto label_31141c;
        case 0x311420u: goto label_311420;
        case 0x311424u: goto label_311424;
        case 0x311428u: goto label_311428;
        case 0x31142cu: goto label_31142c;
        case 0x311430u: goto label_311430;
        case 0x311434u: goto label_311434;
        case 0x311438u: goto label_311438;
        case 0x31143cu: goto label_31143c;
        case 0x311440u: goto label_311440;
        case 0x311444u: goto label_311444;
        case 0x311448u: goto label_311448;
        case 0x31144cu: goto label_31144c;
        case 0x311450u: goto label_311450;
        case 0x311454u: goto label_311454;
        case 0x311458u: goto label_311458;
        case 0x31145cu: goto label_31145c;
        case 0x311460u: goto label_311460;
        case 0x311464u: goto label_311464;
        case 0x311468u: goto label_311468;
        case 0x31146cu: goto label_31146c;
        case 0x311470u: goto label_311470;
        case 0x311474u: goto label_311474;
        case 0x311478u: goto label_311478;
        case 0x31147cu: goto label_31147c;
        case 0x311480u: goto label_311480;
        case 0x311484u: goto label_311484;
        case 0x311488u: goto label_311488;
        case 0x31148cu: goto label_31148c;
        case 0x311490u: goto label_311490;
        case 0x311494u: goto label_311494;
        case 0x311498u: goto label_311498;
        case 0x31149cu: goto label_31149c;
        case 0x3114a0u: goto label_3114a0;
        case 0x3114a4u: goto label_3114a4;
        case 0x3114a8u: goto label_3114a8;
        case 0x3114acu: goto label_3114ac;
        case 0x3114b0u: goto label_3114b0;
        case 0x3114b4u: goto label_3114b4;
        case 0x3114b8u: goto label_3114b8;
        case 0x3114bcu: goto label_3114bc;
        case 0x3114c0u: goto label_3114c0;
        case 0x3114c4u: goto label_3114c4;
        case 0x3114c8u: goto label_3114c8;
        case 0x3114ccu: goto label_3114cc;
        case 0x3114d0u: goto label_3114d0;
        case 0x3114d4u: goto label_3114d4;
        case 0x3114d8u: goto label_3114d8;
        case 0x3114dcu: goto label_3114dc;
        case 0x3114e0u: goto label_3114e0;
        case 0x3114e4u: goto label_3114e4;
        case 0x3114e8u: goto label_3114e8;
        case 0x3114ecu: goto label_3114ec;
        case 0x3114f0u: goto label_3114f0;
        case 0x3114f4u: goto label_3114f4;
        case 0x3114f8u: goto label_3114f8;
        case 0x3114fcu: goto label_3114fc;
        case 0x311500u: goto label_311500;
        case 0x311504u: goto label_311504;
        case 0x311508u: goto label_311508;
        case 0x31150cu: goto label_31150c;
        case 0x311510u: goto label_311510;
        case 0x311514u: goto label_311514;
        case 0x311518u: goto label_311518;
        case 0x31151cu: goto label_31151c;
        case 0x311520u: goto label_311520;
        case 0x311524u: goto label_311524;
        case 0x311528u: goto label_311528;
        case 0x31152cu: goto label_31152c;
        case 0x311530u: goto label_311530;
        case 0x311534u: goto label_311534;
        case 0x311538u: goto label_311538;
        case 0x31153cu: goto label_31153c;
        case 0x311540u: goto label_311540;
        case 0x311544u: goto label_311544;
        case 0x311548u: goto label_311548;
        case 0x31154cu: goto label_31154c;
        case 0x311550u: goto label_311550;
        case 0x311554u: goto label_311554;
        case 0x311558u: goto label_311558;
        case 0x31155cu: goto label_31155c;
        case 0x311560u: goto label_311560;
        case 0x311564u: goto label_311564;
        case 0x311568u: goto label_311568;
        case 0x31156cu: goto label_31156c;
        case 0x311570u: goto label_311570;
        case 0x311574u: goto label_311574;
        case 0x311578u: goto label_311578;
        case 0x31157cu: goto label_31157c;
        case 0x311580u: goto label_311580;
        case 0x311584u: goto label_311584;
        case 0x311588u: goto label_311588;
        case 0x31158cu: goto label_31158c;
        case 0x311590u: goto label_311590;
        case 0x311594u: goto label_311594;
        case 0x311598u: goto label_311598;
        case 0x31159cu: goto label_31159c;
        case 0x3115a0u: goto label_3115a0;
        case 0x3115a4u: goto label_3115a4;
        case 0x3115a8u: goto label_3115a8;
        case 0x3115acu: goto label_3115ac;
        case 0x3115b0u: goto label_3115b0;
        case 0x3115b4u: goto label_3115b4;
        case 0x3115b8u: goto label_3115b8;
        case 0x3115bcu: goto label_3115bc;
        case 0x3115c0u: goto label_3115c0;
        case 0x3115c4u: goto label_3115c4;
        case 0x3115c8u: goto label_3115c8;
        case 0x3115ccu: goto label_3115cc;
        case 0x3115d0u: goto label_3115d0;
        case 0x3115d4u: goto label_3115d4;
        case 0x3115d8u: goto label_3115d8;
        case 0x3115dcu: goto label_3115dc;
        case 0x3115e0u: goto label_3115e0;
        case 0x3115e4u: goto label_3115e4;
        case 0x3115e8u: goto label_3115e8;
        case 0x3115ecu: goto label_3115ec;
        case 0x3115f0u: goto label_3115f0;
        case 0x3115f4u: goto label_3115f4;
        case 0x3115f8u: goto label_3115f8;
        case 0x3115fcu: goto label_3115fc;
        case 0x311600u: goto label_311600;
        case 0x311604u: goto label_311604;
        case 0x311608u: goto label_311608;
        case 0x31160cu: goto label_31160c;
        case 0x311610u: goto label_311610;
        case 0x311614u: goto label_311614;
        case 0x311618u: goto label_311618;
        case 0x31161cu: goto label_31161c;
        case 0x311620u: goto label_311620;
        case 0x311624u: goto label_311624;
        case 0x311628u: goto label_311628;
        case 0x31162cu: goto label_31162c;
        case 0x311630u: goto label_311630;
        case 0x311634u: goto label_311634;
        case 0x311638u: goto label_311638;
        case 0x31163cu: goto label_31163c;
        case 0x311640u: goto label_311640;
        case 0x311644u: goto label_311644;
        case 0x311648u: goto label_311648;
        case 0x31164cu: goto label_31164c;
        case 0x311650u: goto label_311650;
        case 0x311654u: goto label_311654;
        case 0x311658u: goto label_311658;
        case 0x31165cu: goto label_31165c;
        case 0x311660u: goto label_311660;
        case 0x311664u: goto label_311664;
        case 0x311668u: goto label_311668;
        case 0x31166cu: goto label_31166c;
        case 0x311670u: goto label_311670;
        case 0x311674u: goto label_311674;
        case 0x311678u: goto label_311678;
        case 0x31167cu: goto label_31167c;
        case 0x311680u: goto label_311680;
        case 0x311684u: goto label_311684;
        case 0x311688u: goto label_311688;
        case 0x31168cu: goto label_31168c;
        case 0x311690u: goto label_311690;
        case 0x311694u: goto label_311694;
        case 0x311698u: goto label_311698;
        case 0x31169cu: goto label_31169c;
        case 0x3116a0u: goto label_3116a0;
        case 0x3116a4u: goto label_3116a4;
        case 0x3116a8u: goto label_3116a8;
        case 0x3116acu: goto label_3116ac;
        case 0x3116b0u: goto label_3116b0;
        case 0x3116b4u: goto label_3116b4;
        case 0x3116b8u: goto label_3116b8;
        case 0x3116bcu: goto label_3116bc;
        case 0x3116c0u: goto label_3116c0;
        case 0x3116c4u: goto label_3116c4;
        case 0x3116c8u: goto label_3116c8;
        case 0x3116ccu: goto label_3116cc;
        case 0x3116d0u: goto label_3116d0;
        case 0x3116d4u: goto label_3116d4;
        case 0x3116d8u: goto label_3116d8;
        case 0x3116dcu: goto label_3116dc;
        case 0x3116e0u: goto label_3116e0;
        case 0x3116e4u: goto label_3116e4;
        case 0x3116e8u: goto label_3116e8;
        case 0x3116ecu: goto label_3116ec;
        case 0x3116f0u: goto label_3116f0;
        case 0x3116f4u: goto label_3116f4;
        case 0x3116f8u: goto label_3116f8;
        case 0x3116fcu: goto label_3116fc;
        case 0x311700u: goto label_311700;
        case 0x311704u: goto label_311704;
        case 0x311708u: goto label_311708;
        case 0x31170cu: goto label_31170c;
        case 0x311710u: goto label_311710;
        case 0x311714u: goto label_311714;
        case 0x311718u: goto label_311718;
        case 0x31171cu: goto label_31171c;
        case 0x311720u: goto label_311720;
        case 0x311724u: goto label_311724;
        case 0x311728u: goto label_311728;
        case 0x31172cu: goto label_31172c;
        case 0x311730u: goto label_311730;
        case 0x311734u: goto label_311734;
        case 0x311738u: goto label_311738;
        case 0x31173cu: goto label_31173c;
        case 0x311740u: goto label_311740;
        case 0x311744u: goto label_311744;
        case 0x311748u: goto label_311748;
        case 0x31174cu: goto label_31174c;
        case 0x311750u: goto label_311750;
        case 0x311754u: goto label_311754;
        case 0x311758u: goto label_311758;
        case 0x31175cu: goto label_31175c;
        case 0x311760u: goto label_311760;
        case 0x311764u: goto label_311764;
        case 0x311768u: goto label_311768;
        case 0x31176cu: goto label_31176c;
        case 0x311770u: goto label_311770;
        case 0x311774u: goto label_311774;
        case 0x311778u: goto label_311778;
        case 0x31177cu: goto label_31177c;
        case 0x311780u: goto label_311780;
        case 0x311784u: goto label_311784;
        case 0x311788u: goto label_311788;
        case 0x31178cu: goto label_31178c;
        case 0x311790u: goto label_311790;
        case 0x311794u: goto label_311794;
        case 0x311798u: goto label_311798;
        case 0x31179cu: goto label_31179c;
        case 0x3117a0u: goto label_3117a0;
        case 0x3117a4u: goto label_3117a4;
        case 0x3117a8u: goto label_3117a8;
        case 0x3117acu: goto label_3117ac;
        case 0x3117b0u: goto label_3117b0;
        case 0x3117b4u: goto label_3117b4;
        case 0x3117b8u: goto label_3117b8;
        case 0x3117bcu: goto label_3117bc;
        case 0x3117c0u: goto label_3117c0;
        case 0x3117c4u: goto label_3117c4;
        case 0x3117c8u: goto label_3117c8;
        case 0x3117ccu: goto label_3117cc;
        case 0x3117d0u: goto label_3117d0;
        case 0x3117d4u: goto label_3117d4;
        case 0x3117d8u: goto label_3117d8;
        case 0x3117dcu: goto label_3117dc;
        case 0x3117e0u: goto label_3117e0;
        case 0x3117e4u: goto label_3117e4;
        case 0x3117e8u: goto label_3117e8;
        case 0x3117ecu: goto label_3117ec;
        case 0x3117f0u: goto label_3117f0;
        case 0x3117f4u: goto label_3117f4;
        case 0x3117f8u: goto label_3117f8;
        case 0x3117fcu: goto label_3117fc;
        case 0x311800u: goto label_311800;
        case 0x311804u: goto label_311804;
        case 0x311808u: goto label_311808;
        case 0x31180cu: goto label_31180c;
        case 0x311810u: goto label_311810;
        case 0x311814u: goto label_311814;
        case 0x311818u: goto label_311818;
        case 0x31181cu: goto label_31181c;
        case 0x311820u: goto label_311820;
        case 0x311824u: goto label_311824;
        case 0x311828u: goto label_311828;
        case 0x31182cu: goto label_31182c;
        case 0x311830u: goto label_311830;
        case 0x311834u: goto label_311834;
        case 0x311838u: goto label_311838;
        case 0x31183cu: goto label_31183c;
        case 0x311840u: goto label_311840;
        case 0x311844u: goto label_311844;
        case 0x311848u: goto label_311848;
        case 0x31184cu: goto label_31184c;
        case 0x311850u: goto label_311850;
        case 0x311854u: goto label_311854;
        case 0x311858u: goto label_311858;
        case 0x31185cu: goto label_31185c;
        case 0x311860u: goto label_311860;
        case 0x311864u: goto label_311864;
        case 0x311868u: goto label_311868;
        case 0x31186cu: goto label_31186c;
        case 0x311870u: goto label_311870;
        case 0x311874u: goto label_311874;
        case 0x311878u: goto label_311878;
        case 0x31187cu: goto label_31187c;
        case 0x311880u: goto label_311880;
        case 0x311884u: goto label_311884;
        case 0x311888u: goto label_311888;
        case 0x31188cu: goto label_31188c;
        case 0x311890u: goto label_311890;
        case 0x311894u: goto label_311894;
        case 0x311898u: goto label_311898;
        case 0x31189cu: goto label_31189c;
        case 0x3118a0u: goto label_3118a0;
        case 0x3118a4u: goto label_3118a4;
        case 0x3118a8u: goto label_3118a8;
        case 0x3118acu: goto label_3118ac;
        case 0x3118b0u: goto label_3118b0;
        case 0x3118b4u: goto label_3118b4;
        case 0x3118b8u: goto label_3118b8;
        case 0x3118bcu: goto label_3118bc;
        case 0x3118c0u: goto label_3118c0;
        case 0x3118c4u: goto label_3118c4;
        case 0x3118c8u: goto label_3118c8;
        case 0x3118ccu: goto label_3118cc;
        case 0x3118d0u: goto label_3118d0;
        case 0x3118d4u: goto label_3118d4;
        case 0x3118d8u: goto label_3118d8;
        case 0x3118dcu: goto label_3118dc;
        case 0x3118e0u: goto label_3118e0;
        case 0x3118e4u: goto label_3118e4;
        case 0x3118e8u: goto label_3118e8;
        case 0x3118ecu: goto label_3118ec;
        case 0x3118f0u: goto label_3118f0;
        case 0x3118f4u: goto label_3118f4;
        case 0x3118f8u: goto label_3118f8;
        case 0x3118fcu: goto label_3118fc;
        case 0x311900u: goto label_311900;
        case 0x311904u: goto label_311904;
        case 0x311908u: goto label_311908;
        case 0x31190cu: goto label_31190c;
        case 0x311910u: goto label_311910;
        case 0x311914u: goto label_311914;
        case 0x311918u: goto label_311918;
        case 0x31191cu: goto label_31191c;
        case 0x311920u: goto label_311920;
        case 0x311924u: goto label_311924;
        case 0x311928u: goto label_311928;
        case 0x31192cu: goto label_31192c;
        case 0x311930u: goto label_311930;
        case 0x311934u: goto label_311934;
        case 0x311938u: goto label_311938;
        case 0x31193cu: goto label_31193c;
        case 0x311940u: goto label_311940;
        case 0x311944u: goto label_311944;
        case 0x311948u: goto label_311948;
        case 0x31194cu: goto label_31194c;
        case 0x311950u: goto label_311950;
        case 0x311954u: goto label_311954;
        case 0x311958u: goto label_311958;
        case 0x31195cu: goto label_31195c;
        case 0x311960u: goto label_311960;
        case 0x311964u: goto label_311964;
        case 0x311968u: goto label_311968;
        case 0x31196cu: goto label_31196c;
        case 0x311970u: goto label_311970;
        case 0x311974u: goto label_311974;
        case 0x311978u: goto label_311978;
        case 0x31197cu: goto label_31197c;
        case 0x311980u: goto label_311980;
        case 0x311984u: goto label_311984;
        case 0x311988u: goto label_311988;
        case 0x31198cu: goto label_31198c;
        case 0x311990u: goto label_311990;
        case 0x311994u: goto label_311994;
        case 0x311998u: goto label_311998;
        case 0x31199cu: goto label_31199c;
        case 0x3119a0u: goto label_3119a0;
        case 0x3119a4u: goto label_3119a4;
        case 0x3119a8u: goto label_3119a8;
        case 0x3119acu: goto label_3119ac;
        case 0x3119b0u: goto label_3119b0;
        case 0x3119b4u: goto label_3119b4;
        case 0x3119b8u: goto label_3119b8;
        case 0x3119bcu: goto label_3119bc;
        case 0x3119c0u: goto label_3119c0;
        case 0x3119c4u: goto label_3119c4;
        case 0x3119c8u: goto label_3119c8;
        case 0x3119ccu: goto label_3119cc;
        case 0x3119d0u: goto label_3119d0;
        case 0x3119d4u: goto label_3119d4;
        case 0x3119d8u: goto label_3119d8;
        case 0x3119dcu: goto label_3119dc;
        case 0x3119e0u: goto label_3119e0;
        case 0x3119e4u: goto label_3119e4;
        case 0x3119e8u: goto label_3119e8;
        case 0x3119ecu: goto label_3119ec;
        case 0x3119f0u: goto label_3119f0;
        case 0x3119f4u: goto label_3119f4;
        case 0x3119f8u: goto label_3119f8;
        case 0x3119fcu: goto label_3119fc;
        case 0x311a00u: goto label_311a00;
        case 0x311a04u: goto label_311a04;
        case 0x311a08u: goto label_311a08;
        case 0x311a0cu: goto label_311a0c;
        case 0x311a10u: goto label_311a10;
        case 0x311a14u: goto label_311a14;
        case 0x311a18u: goto label_311a18;
        case 0x311a1cu: goto label_311a1c;
        case 0x311a20u: goto label_311a20;
        case 0x311a24u: goto label_311a24;
        case 0x311a28u: goto label_311a28;
        case 0x311a2cu: goto label_311a2c;
        case 0x311a30u: goto label_311a30;
        case 0x311a34u: goto label_311a34;
        case 0x311a38u: goto label_311a38;
        case 0x311a3cu: goto label_311a3c;
        case 0x311a40u: goto label_311a40;
        case 0x311a44u: goto label_311a44;
        case 0x311a48u: goto label_311a48;
        case 0x311a4cu: goto label_311a4c;
        case 0x311a50u: goto label_311a50;
        case 0x311a54u: goto label_311a54;
        case 0x311a58u: goto label_311a58;
        case 0x311a5cu: goto label_311a5c;
        case 0x311a60u: goto label_311a60;
        case 0x311a64u: goto label_311a64;
        case 0x311a68u: goto label_311a68;
        case 0x311a6cu: goto label_311a6c;
        case 0x311a70u: goto label_311a70;
        case 0x311a74u: goto label_311a74;
        case 0x311a78u: goto label_311a78;
        case 0x311a7cu: goto label_311a7c;
        case 0x311a80u: goto label_311a80;
        case 0x311a84u: goto label_311a84;
        case 0x311a88u: goto label_311a88;
        case 0x311a8cu: goto label_311a8c;
        case 0x311a90u: goto label_311a90;
        case 0x311a94u: goto label_311a94;
        case 0x311a98u: goto label_311a98;
        case 0x311a9cu: goto label_311a9c;
        case 0x311aa0u: goto label_311aa0;
        case 0x311aa4u: goto label_311aa4;
        case 0x311aa8u: goto label_311aa8;
        case 0x311aacu: goto label_311aac;
        case 0x311ab0u: goto label_311ab0;
        case 0x311ab4u: goto label_311ab4;
        case 0x311ab8u: goto label_311ab8;
        case 0x311abcu: goto label_311abc;
        case 0x311ac0u: goto label_311ac0;
        case 0x311ac4u: goto label_311ac4;
        case 0x311ac8u: goto label_311ac8;
        case 0x311accu: goto label_311acc;
        case 0x311ad0u: goto label_311ad0;
        case 0x311ad4u: goto label_311ad4;
        case 0x311ad8u: goto label_311ad8;
        case 0x311adcu: goto label_311adc;
        case 0x311ae0u: goto label_311ae0;
        case 0x311ae4u: goto label_311ae4;
        case 0x311ae8u: goto label_311ae8;
        case 0x311aecu: goto label_311aec;
        case 0x311af0u: goto label_311af0;
        case 0x311af4u: goto label_311af4;
        case 0x311af8u: goto label_311af8;
        case 0x311afcu: goto label_311afc;
        case 0x311b00u: goto label_311b00;
        case 0x311b04u: goto label_311b04;
        case 0x311b08u: goto label_311b08;
        case 0x311b0cu: goto label_311b0c;
        case 0x311b10u: goto label_311b10;
        case 0x311b14u: goto label_311b14;
        case 0x311b18u: goto label_311b18;
        case 0x311b1cu: goto label_311b1c;
        case 0x311b20u: goto label_311b20;
        case 0x311b24u: goto label_311b24;
        case 0x311b28u: goto label_311b28;
        case 0x311b2cu: goto label_311b2c;
        case 0x311b30u: goto label_311b30;
        case 0x311b34u: goto label_311b34;
        case 0x311b38u: goto label_311b38;
        case 0x311b3cu: goto label_311b3c;
        case 0x311b40u: goto label_311b40;
        case 0x311b44u: goto label_311b44;
        case 0x311b48u: goto label_311b48;
        case 0x311b4cu: goto label_311b4c;
        case 0x311b50u: goto label_311b50;
        case 0x311b54u: goto label_311b54;
        case 0x311b58u: goto label_311b58;
        case 0x311b5cu: goto label_311b5c;
        case 0x311b60u: goto label_311b60;
        case 0x311b64u: goto label_311b64;
        case 0x311b68u: goto label_311b68;
        case 0x311b6cu: goto label_311b6c;
        case 0x311b70u: goto label_311b70;
        case 0x311b74u: goto label_311b74;
        case 0x311b78u: goto label_311b78;
        case 0x311b7cu: goto label_311b7c;
        case 0x311b80u: goto label_311b80;
        case 0x311b84u: goto label_311b84;
        case 0x311b88u: goto label_311b88;
        case 0x311b8cu: goto label_311b8c;
        case 0x311b90u: goto label_311b90;
        case 0x311b94u: goto label_311b94;
        case 0x311b98u: goto label_311b98;
        case 0x311b9cu: goto label_311b9c;
        case 0x311ba0u: goto label_311ba0;
        case 0x311ba4u: goto label_311ba4;
        case 0x311ba8u: goto label_311ba8;
        case 0x311bacu: goto label_311bac;
        case 0x311bb0u: goto label_311bb0;
        case 0x311bb4u: goto label_311bb4;
        case 0x311bb8u: goto label_311bb8;
        case 0x311bbcu: goto label_311bbc;
        case 0x311bc0u: goto label_311bc0;
        case 0x311bc4u: goto label_311bc4;
        case 0x311bc8u: goto label_311bc8;
        case 0x311bccu: goto label_311bcc;
        case 0x311bd0u: goto label_311bd0;
        case 0x311bd4u: goto label_311bd4;
        case 0x311bd8u: goto label_311bd8;
        case 0x311bdcu: goto label_311bdc;
        case 0x311be0u: goto label_311be0;
        case 0x311be4u: goto label_311be4;
        case 0x311be8u: goto label_311be8;
        case 0x311becu: goto label_311bec;
        case 0x311bf0u: goto label_311bf0;
        case 0x311bf4u: goto label_311bf4;
        case 0x311bf8u: goto label_311bf8;
        case 0x311bfcu: goto label_311bfc;
        case 0x311c00u: goto label_311c00;
        case 0x311c04u: goto label_311c04;
        case 0x311c08u: goto label_311c08;
        case 0x311c0cu: goto label_311c0c;
        case 0x311c10u: goto label_311c10;
        case 0x311c14u: goto label_311c14;
        case 0x311c18u: goto label_311c18;
        case 0x311c1cu: goto label_311c1c;
        case 0x311c20u: goto label_311c20;
        case 0x311c24u: goto label_311c24;
        case 0x311c28u: goto label_311c28;
        case 0x311c2cu: goto label_311c2c;
        case 0x311c30u: goto label_311c30;
        case 0x311c34u: goto label_311c34;
        case 0x311c38u: goto label_311c38;
        case 0x311c3cu: goto label_311c3c;
        case 0x311c40u: goto label_311c40;
        case 0x311c44u: goto label_311c44;
        case 0x311c48u: goto label_311c48;
        case 0x311c4cu: goto label_311c4c;
        case 0x311c50u: goto label_311c50;
        case 0x311c54u: goto label_311c54;
        case 0x311c58u: goto label_311c58;
        case 0x311c5cu: goto label_311c5c;
        case 0x311c60u: goto label_311c60;
        case 0x311c64u: goto label_311c64;
        case 0x311c68u: goto label_311c68;
        case 0x311c6cu: goto label_311c6c;
        case 0x311c70u: goto label_311c70;
        case 0x311c74u: goto label_311c74;
        case 0x311c78u: goto label_311c78;
        case 0x311c7cu: goto label_311c7c;
        case 0x311c80u: goto label_311c80;
        case 0x311c84u: goto label_311c84;
        case 0x311c88u: goto label_311c88;
        case 0x311c8cu: goto label_311c8c;
        case 0x311c90u: goto label_311c90;
        case 0x311c94u: goto label_311c94;
        case 0x311c98u: goto label_311c98;
        case 0x311c9cu: goto label_311c9c;
        case 0x311ca0u: goto label_311ca0;
        case 0x311ca4u: goto label_311ca4;
        case 0x311ca8u: goto label_311ca8;
        case 0x311cacu: goto label_311cac;
        case 0x311cb0u: goto label_311cb0;
        case 0x311cb4u: goto label_311cb4;
        case 0x311cb8u: goto label_311cb8;
        case 0x311cbcu: goto label_311cbc;
        case 0x311cc0u: goto label_311cc0;
        case 0x311cc4u: goto label_311cc4;
        case 0x311cc8u: goto label_311cc8;
        case 0x311cccu: goto label_311ccc;
        case 0x311cd0u: goto label_311cd0;
        case 0x311cd4u: goto label_311cd4;
        case 0x311cd8u: goto label_311cd8;
        case 0x311cdcu: goto label_311cdc;
        case 0x311ce0u: goto label_311ce0;
        case 0x311ce4u: goto label_311ce4;
        case 0x311ce8u: goto label_311ce8;
        case 0x311cecu: goto label_311cec;
        case 0x311cf0u: goto label_311cf0;
        case 0x311cf4u: goto label_311cf4;
        case 0x311cf8u: goto label_311cf8;
        case 0x311cfcu: goto label_311cfc;
        case 0x311d00u: goto label_311d00;
        case 0x311d04u: goto label_311d04;
        case 0x311d08u: goto label_311d08;
        case 0x311d0cu: goto label_311d0c;
        case 0x311d10u: goto label_311d10;
        case 0x311d14u: goto label_311d14;
        case 0x311d18u: goto label_311d18;
        case 0x311d1cu: goto label_311d1c;
        case 0x311d20u: goto label_311d20;
        case 0x311d24u: goto label_311d24;
        case 0x311d28u: goto label_311d28;
        case 0x311d2cu: goto label_311d2c;
        case 0x311d30u: goto label_311d30;
        case 0x311d34u: goto label_311d34;
        case 0x311d38u: goto label_311d38;
        case 0x311d3cu: goto label_311d3c;
        case 0x311d40u: goto label_311d40;
        case 0x311d44u: goto label_311d44;
        case 0x311d48u: goto label_311d48;
        case 0x311d4cu: goto label_311d4c;
        case 0x311d50u: goto label_311d50;
        case 0x311d54u: goto label_311d54;
        case 0x311d58u: goto label_311d58;
        case 0x311d5cu: goto label_311d5c;
        case 0x311d60u: goto label_311d60;
        case 0x311d64u: goto label_311d64;
        case 0x311d68u: goto label_311d68;
        case 0x311d6cu: goto label_311d6c;
        case 0x311d70u: goto label_311d70;
        case 0x311d74u: goto label_311d74;
        case 0x311d78u: goto label_311d78;
        case 0x311d7cu: goto label_311d7c;
        case 0x311d80u: goto label_311d80;
        case 0x311d84u: goto label_311d84;
        case 0x311d88u: goto label_311d88;
        case 0x311d8cu: goto label_311d8c;
        case 0x311d90u: goto label_311d90;
        case 0x311d94u: goto label_311d94;
        case 0x311d98u: goto label_311d98;
        case 0x311d9cu: goto label_311d9c;
        case 0x311da0u: goto label_311da0;
        case 0x311da4u: goto label_311da4;
        case 0x311da8u: goto label_311da8;
        case 0x311dacu: goto label_311dac;
        case 0x311db0u: goto label_311db0;
        case 0x311db4u: goto label_311db4;
        case 0x311db8u: goto label_311db8;
        case 0x311dbcu: goto label_311dbc;
        case 0x311dc0u: goto label_311dc0;
        case 0x311dc4u: goto label_311dc4;
        case 0x311dc8u: goto label_311dc8;
        case 0x311dccu: goto label_311dcc;
        case 0x311dd0u: goto label_311dd0;
        case 0x311dd4u: goto label_311dd4;
        case 0x311dd8u: goto label_311dd8;
        case 0x311ddcu: goto label_311ddc;
        case 0x311de0u: goto label_311de0;
        case 0x311de4u: goto label_311de4;
        case 0x311de8u: goto label_311de8;
        case 0x311decu: goto label_311dec;
        case 0x311df0u: goto label_311df0;
        case 0x311df4u: goto label_311df4;
        case 0x311df8u: goto label_311df8;
        case 0x311dfcu: goto label_311dfc;
        case 0x311e00u: goto label_311e00;
        case 0x311e04u: goto label_311e04;
        case 0x311e08u: goto label_311e08;
        case 0x311e0cu: goto label_311e0c;
        case 0x311e10u: goto label_311e10;
        case 0x311e14u: goto label_311e14;
        case 0x311e18u: goto label_311e18;
        case 0x311e1cu: goto label_311e1c;
        case 0x311e20u: goto label_311e20;
        case 0x311e24u: goto label_311e24;
        case 0x311e28u: goto label_311e28;
        case 0x311e2cu: goto label_311e2c;
        case 0x311e30u: goto label_311e30;
        case 0x311e34u: goto label_311e34;
        case 0x311e38u: goto label_311e38;
        case 0x311e3cu: goto label_311e3c;
        case 0x311e40u: goto label_311e40;
        case 0x311e44u: goto label_311e44;
        case 0x311e48u: goto label_311e48;
        case 0x311e4cu: goto label_311e4c;
        case 0x311e50u: goto label_311e50;
        case 0x311e54u: goto label_311e54;
        case 0x311e58u: goto label_311e58;
        case 0x311e5cu: goto label_311e5c;
        case 0x311e60u: goto label_311e60;
        case 0x311e64u: goto label_311e64;
        case 0x311e68u: goto label_311e68;
        case 0x311e6cu: goto label_311e6c;
        default: break;
    }

    ctx->pc = 0x310c30u;

label_310c30:
    // 0x310c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x310c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_310c34:
    // 0x310c34: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x310c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_310c38:
    // 0x310c38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x310c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_310c3c:
    // 0x310c3c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x310c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_310c40:
    // 0x310c40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x310c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_310c44:
    // 0x310c44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x310c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_310c48:
    // 0x310c48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x310c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_310c4c:
    // 0x310c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x310c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_310c50:
    // 0x310c50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x310c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_310c54:
    // 0x310c54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x310c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_310c58:
    // 0x310c58: 0x34458704  ori         $a1, $v0, 0x8704
    ctx->pc = 0x310c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34564);
label_310c5c:
    // 0x310c5c: 0xc10ca68  jal         func_4329A0
label_310c60:
    if (ctx->pc == 0x310C60u) {
        ctx->pc = 0x310C60u;
            // 0x310c60: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x310C64u;
        goto label_310c64;
    }
    ctx->pc = 0x310C5Cu;
    SET_GPR_U32(ctx, 31, 0x310C64u);
    ctx->pc = 0x310C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310C5Cu;
            // 0x310c60: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310C64u; }
        if (ctx->pc != 0x310C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310C64u; }
        if (ctx->pc != 0x310C64u) { return; }
    }
    ctx->pc = 0x310C64u;
label_310c64:
    // 0x310c64: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x310c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_310c68:
    // 0x310c68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x310c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_310c6c:
    // 0x310c6c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x310c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_310c70:
    // 0x310c70: 0x24424260  addiu       $v0, $v0, 0x4260
    ctx->pc = 0x310c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16992));
label_310c74:
    // 0x310c74: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x310c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_310c78:
    // 0x310c78: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x310c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_310c7c:
    // 0x310c7c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x310c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_310c80:
    // 0x310c80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310c84:
    // 0x310c84: 0xae510054  sw          $s1, 0x54($s2)
    ctx->pc = 0x310c84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 17));
label_310c88:
    // 0x310c88: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x310c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_310c8c:
    // 0x310c8c: 0xae500058  sw          $s0, 0x58($s2)
    ctx->pc = 0x310c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 16));
label_310c90:
    // 0x310c90: 0xae44005c  sw          $a0, 0x5C($s2)
    ctx->pc = 0x310c90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 4));
label_310c94:
    // 0x310c94: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x310c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
label_310c98:
    // 0x310c98: 0xa243006c  sb          $v1, 0x6C($s2)
    ctx->pc = 0x310c98u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 108), (uint8_t)GPR_U32(ctx, 3));
label_310c9c:
    // 0x310c9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x310c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_310ca0:
    // 0x310ca0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x310ca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_310ca4:
    // 0x310ca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_310ca8:
    // 0x310ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x310ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_310cac:
    // 0x310cac: 0x3e00008  jr          $ra
label_310cb0:
    if (ctx->pc == 0x310CB0u) {
        ctx->pc = 0x310CB0u;
            // 0x310cb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x310CB4u;
        goto label_310cb4;
    }
    ctx->pc = 0x310CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310CACu;
            // 0x310cb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310CB4u;
label_310cb4:
    // 0x310cb4: 0x0  nop
    ctx->pc = 0x310cb4u;
    // NOP
label_310cb8:
    // 0x310cb8: 0x0  nop
    ctx->pc = 0x310cb8u;
    // NOP
label_310cbc:
    // 0x310cbc: 0x0  nop
    ctx->pc = 0x310cbcu;
    // NOP
label_310cc0:
    // 0x310cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x310cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_310cc4:
    // 0x310cc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_310cc8:
    // 0x310cc8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x310cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_310ccc:
    // 0x310ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x310cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_310cd0:
    // 0x310cd0: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x310cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_310cd4:
    // 0x310cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x310cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_310cd8:
    // 0x310cd8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x310cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_310cdc:
    // 0x310cdc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x310cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_310ce0:
    // 0x310ce0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x310ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_310ce4:
    // 0x310ce4: 0x2484f7d0  addiu       $a0, $a0, -0x830
    ctx->pc = 0x310ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965200));
label_310ce8:
    // 0x310ce8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x310ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_310cec:
    // 0x310cec: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x310cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_310cf0:
    // 0x310cf0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x310cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_310cf4:
    // 0x310cf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x310cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_310cf8:
    // 0x310cf8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x310cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_310cfc:
    // 0x310cfc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x310cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_310d00:
    // 0x310d00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x310d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_310d04:
    // 0x310d04: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x310d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_310d08:
    // 0x310d08: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x310d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_310d0c:
    // 0x310d0c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x310d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_310d10:
    // 0x310d10: 0xc075128  jal         func_1D44A0
label_310d14:
    if (ctx->pc == 0x310D14u) {
        ctx->pc = 0x310D14u;
            // 0x310d14: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x310D18u;
        goto label_310d18;
    }
    ctx->pc = 0x310D10u;
    SET_GPR_U32(ctx, 31, 0x310D18u);
    ctx->pc = 0x310D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310D10u;
            // 0x310d14: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310D18u; }
        if (ctx->pc != 0x310D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310D18u; }
        if (ctx->pc != 0x310D18u) { return; }
    }
    ctx->pc = 0x310D18u;
label_310d18:
    // 0x310d18: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x310d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_310d1c:
    // 0x310d1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310d20:
    // 0x310d20: 0x8c65f7d0  lw          $a1, -0x830($v1)
    ctx->pc = 0x310d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965200)));
label_310d24:
    // 0x310d24: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x310d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_310d28:
    // 0x310d28: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x310d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_310d2c:
    // 0x310d2c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x310d2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_310d30:
    // 0x310d30: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_310d34:
    if (ctx->pc == 0x310D34u) {
        ctx->pc = 0x310D38u;
        goto label_310d38;
    }
    ctx->pc = 0x310D30u;
    {
        const bool branch_taken_0x310d30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d30) {
            ctx->pc = 0x310D40u;
            goto label_310d40;
        }
    }
    ctx->pc = 0x310D38u;
label_310d38:
    // 0x310d38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310d3c:
    // 0x310d3c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x310d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_310d40:
    // 0x310d40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310d44:
    // 0x310d44: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x310d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_310d48:
    // 0x310d48: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x310d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_310d4c:
    // 0x310d4c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x310d4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_310d50:
    // 0x310d50: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_310d54:
    if (ctx->pc == 0x310D54u) {
        ctx->pc = 0x310D54u;
            // 0x310d54: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->pc = 0x310D58u;
        goto label_310d58;
    }
    ctx->pc = 0x310D50u;
    {
        const bool branch_taken_0x310d50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x310D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310D50u;
            // 0x310d54: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d50) {
            ctx->pc = 0x310D60u;
            goto label_310d60;
        }
    }
    ctx->pc = 0x310D58u;
label_310d58:
    // 0x310d58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310d5c:
    // 0x310d5c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x310d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_310d60:
    // 0x310d60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310d64:
    // 0x310d64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x310d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_310d68:
    // 0x310d68: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x310d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_310d6c:
    // 0x310d6c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x310d6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_310d70:
    // 0x310d70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_310d74:
    if (ctx->pc == 0x310D74u) {
        ctx->pc = 0x310D78u;
        goto label_310d78;
    }
    ctx->pc = 0x310D70u;
    {
        const bool branch_taken_0x310d70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d70) {
            ctx->pc = 0x310D80u;
            goto label_310d80;
        }
    }
    ctx->pc = 0x310D78u;
label_310d78:
    // 0x310d78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310d7c:
    // 0x310d7c: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x310d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_310d80:
    // 0x310d80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310d84:
    // 0x310d84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x310d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_310d88:
    // 0x310d88: 0x8c42e3a0  lw          $v0, -0x1C60($v0)
    ctx->pc = 0x310d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960032)));
label_310d8c:
    // 0x310d8c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x310d8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_310d90:
    // 0x310d90: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_310d94:
    if (ctx->pc == 0x310D94u) {
        ctx->pc = 0x310D94u;
            // 0x310d94: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x310D98u;
        goto label_310d98;
    }
    ctx->pc = 0x310D90u;
    {
        const bool branch_taken_0x310d90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d90) {
            ctx->pc = 0x310D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310D90u;
            // 0x310d94: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x310DA4u;
            goto label_310da4;
        }
    }
    ctx->pc = 0x310D98u;
label_310d98:
    // 0x310d98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310d9c:
    // 0x310d9c: 0xac43e3a0  sw          $v1, -0x1C60($v0)
    ctx->pc = 0x310d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960032), GPR_U32(ctx, 3));
label_310da0:
    // 0x310da0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x310da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_310da4:
    // 0x310da4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x310da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_310da8:
    // 0x310da8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x310da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_310dac:
    // 0x310dac: 0x2484f7f4  addiu       $a0, $a0, -0x80C
    ctx->pc = 0x310dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965236));
label_310db0:
    // 0x310db0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x310db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_310db4:
    // 0x310db4: 0xc074ea0  jal         func_1D3A80
label_310db8:
    if (ctx->pc == 0x310DB8u) {
        ctx->pc = 0x310DB8u;
            // 0x310db8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x310DBCu;
        goto label_310dbc;
    }
    ctx->pc = 0x310DB4u;
    SET_GPR_U32(ctx, 31, 0x310DBCu);
    ctx->pc = 0x310DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310DB4u;
            // 0x310db8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310DBCu; }
        if (ctx->pc != 0x310DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310DBCu; }
        if (ctx->pc != 0x310DBCu) { return; }
    }
    ctx->pc = 0x310DBCu;
label_310dbc:
    // 0x310dbc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x310dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_310dc0:
    // 0x310dc0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x310dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_310dc4:
    // 0x310dc4: 0x8c63f7d8  lw          $v1, -0x828($v1)
    ctx->pc = 0x310dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965208)));
label_310dc8:
    // 0x310dc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x310dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_310dcc:
    // 0x310dcc: 0x2484f7b8  addiu       $a0, $a0, -0x848
    ctx->pc = 0x310dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965176));
label_310dd0:
    // 0x310dd0: 0xac43f7f0  sw          $v1, -0x810($v0)
    ctx->pc = 0x310dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965232), GPR_U32(ctx, 3));
label_310dd4:
    // 0x310dd4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x310dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_310dd8:
    // 0x310dd8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x310dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_310ddc:
    // 0x310ddc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x310ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_310de0:
    // 0x310de0: 0xc074ea0  jal         func_1D3A80
label_310de4:
    if (ctx->pc == 0x310DE4u) {
        ctx->pc = 0x310DE4u;
            // 0x310de4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x310DE8u;
        goto label_310de8;
    }
    ctx->pc = 0x310DE0u;
    SET_GPR_U32(ctx, 31, 0x310DE8u);
    ctx->pc = 0x310DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310DE0u;
            // 0x310de4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310DE8u; }
        if (ctx->pc != 0x310DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310DE8u; }
        if (ctx->pc != 0x310DE8u) { return; }
    }
    ctx->pc = 0x310DE8u;
label_310de8:
    // 0x310de8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x310de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_310dec:
    // 0x310dec: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x310decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_310df0:
    // 0x310df0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x310df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_310df4:
    // 0x310df4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_310df8:
    // 0x310df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x310df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_310dfc:
    // 0x310dfc: 0x3e00008  jr          $ra
label_310e00:
    if (ctx->pc == 0x310E00u) {
        ctx->pc = 0x310E00u;
            // 0x310e00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x310E04u;
        goto label_310e04;
    }
    ctx->pc = 0x310DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310DFCu;
            // 0x310e00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310E04u;
label_310e04:
    // 0x310e04: 0x0  nop
    ctx->pc = 0x310e04u;
    // NOP
label_310e08:
    // 0x310e08: 0x0  nop
    ctx->pc = 0x310e08u;
    // NOP
label_310e0c:
    // 0x310e0c: 0x0  nop
    ctx->pc = 0x310e0cu;
    // NOP
label_310e10:
    // 0x310e10: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x310e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_310e14:
    // 0x310e14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x310e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_310e18:
    // 0x310e18: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x310e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_310e1c:
    // 0x310e1c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x310e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_310e20:
    // 0x310e20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x310e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_310e24:
    // 0x310e24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x310e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_310e28:
    // 0x310e28: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x310e28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_310e2c:
    // 0x310e2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x310e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_310e30:
    // 0x310e30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x310e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_310e34:
    // 0x310e34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x310e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_310e38:
    // 0x310e38: 0xc075740  jal         func_1D5D00
label_310e3c:
    if (ctx->pc == 0x310E3Cu) {
        ctx->pc = 0x310E3Cu;
            // 0x310e3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x310E40u;
        goto label_310e40;
    }
    ctx->pc = 0x310E38u;
    SET_GPR_U32(ctx, 31, 0x310E40u);
    ctx->pc = 0x310E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310E38u;
            // 0x310e3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D00u;
    if (runtime->hasFunction(0x1D5D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D5D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310E40u; }
        if (ctx->pc != 0x310E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5D00_0x1d5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310E40u; }
        if (ctx->pc != 0x310E40u) { return; }
    }
    ctx->pc = 0x310E40u;
label_310e40:
    // 0x310e40: 0x8eb20008  lw          $s2, 0x8($s5)
    ctx->pc = 0x310e40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_310e44:
    // 0x310e44: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x310e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_310e48:
    // 0x310e48: 0x8e440550  lw          $a0, 0x550($s2)
    ctx->pc = 0x310e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_310e4c:
    // 0x310e4c: 0x8084010f  lb          $a0, 0x10F($a0)
    ctx->pc = 0x310e4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 271)));
label_310e50:
    // 0x310e50: 0x5483005a  bnel        $a0, $v1, . + 4 + (0x5A << 2)
label_310e54:
    if (ctx->pc == 0x310E54u) {
        ctx->pc = 0x310E54u;
            // 0x310e54: 0x8eb00008  lw          $s0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->pc = 0x310E58u;
        goto label_310e58;
    }
    ctx->pc = 0x310E50u;
    {
        const bool branch_taken_0x310e50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x310e50) {
            ctx->pc = 0x310E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310E50u;
            // 0x310e54: 0x8eb00008  lw          $s0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x310FBCu;
            goto label_310fbc;
        }
    }
    ctx->pc = 0x310E58u;
label_310e58:
    // 0x310e58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310e5c:
    // 0x310e5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x310e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_310e60:
    // 0x310e60: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x310e60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_310e64:
    // 0x310e64: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x310e64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_310e68:
    // 0x310e68: 0x8c73e378  lw          $s3, -0x1C88($v1)
    ctx->pc = 0x310e68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_310e6c:
    // 0x310e6c: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x310e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_310e70:
    // 0x310e70: 0x2610f7b0  addiu       $s0, $s0, -0x850
    ctx->pc = 0x310e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965168));
label_310e74:
    // 0x310e74: 0x2631f7d0  addiu       $s1, $s1, -0x830
    ctx->pc = 0x310e74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965200));
label_310e78:
    // 0x310e78: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x310e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_310e7c:
    // 0x310e7c: 0x8e170008  lw          $s7, 0x8($s0)
    ctx->pc = 0x310e7cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_310e80:
    // 0x310e80: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x310e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_310e84:
    // 0x310e84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x310e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_310e88:
    // 0x310e88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x310e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310e8c:
    // 0x310e8c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x310e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_310e90:
    // 0x310e90: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x310e90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_310e94:
    // 0x310e94: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x310e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_310e98:
    // 0x310e98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x310e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_310e9c:
    // 0x310e9c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x310e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_310ea0:
    // 0x310ea0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x310ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_310ea4:
    // 0x310ea4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x310ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_310ea8:
    // 0x310ea8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x310ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_310eac:
    // 0x310eac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x310eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_310eb0:
    // 0x310eb0: 0xc04e4a4  jal         func_139290
label_310eb4:
    if (ctx->pc == 0x310EB4u) {
        ctx->pc = 0x310EB4u;
            // 0x310eb4: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x310EB8u;
        goto label_310eb8;
    }
    ctx->pc = 0x310EB0u;
    SET_GPR_U32(ctx, 31, 0x310EB8u);
    ctx->pc = 0x310EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310EB0u;
            // 0x310eb4: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310EB8u; }
        if (ctx->pc != 0x310EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310EB8u; }
        if (ctx->pc != 0x310EB8u) { return; }
    }
    ctx->pc = 0x310EB8u;
label_310eb8:
    // 0x310eb8: 0x92420e3d  lbu         $v0, 0xE3D($s2)
    ctx->pc = 0x310eb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3645)));
label_310ebc:
    // 0x310ebc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x310ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_310ec0:
    // 0x310ec0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x310ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_310ec4:
    // 0x310ec4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x310ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_310ec8:
    // 0x310ec8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x310ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_310ecc:
    // 0x310ecc: 0xc04cd60  jal         func_133580
label_310ed0:
    if (ctx->pc == 0x310ED0u) {
        ctx->pc = 0x310ED0u;
            // 0x310ed0: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x310ED4u;
        goto label_310ed4;
    }
    ctx->pc = 0x310ECCu;
    SET_GPR_U32(ctx, 31, 0x310ED4u);
    ctx->pc = 0x310ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310ECCu;
            // 0x310ed0: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310ED4u; }
        if (ctx->pc != 0x310ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310ED4u; }
        if (ctx->pc != 0x310ED4u) { return; }
    }
    ctx->pc = 0x310ED4u;
label_310ed4:
    // 0x310ed4: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x310ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_310ed8:
    // 0x310ed8: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x310ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_310edc:
    // 0x310edc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x310edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_310ee0:
    // 0x310ee0: 0x3862000f  xori        $v0, $v1, 0xF
    ctx->pc = 0x310ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)15);
label_310ee4:
    // 0x310ee4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x310ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_310ee8:
    // 0x310ee8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_310eec:
    if (ctx->pc == 0x310EECu) {
        ctx->pc = 0x310EECu;
            // 0x310eec: 0x29180  sll         $s2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x310EF0u;
        goto label_310ef0;
    }
    ctx->pc = 0x310EE8u;
    {
        const bool branch_taken_0x310ee8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x310EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310EE8u;
            // 0x310eec: 0x29180  sll         $s2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ee8) {
            ctx->pc = 0x310EFCu;
            goto label_310efc;
        }
    }
    ctx->pc = 0x310EF0u;
label_310ef0:
    // 0x310ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_310ef4:
    // 0x310ef4: 0x10000008  b           . + 4 + (0x8 << 2)
label_310ef8:
    if (ctx->pc == 0x310EF8u) {
        ctx->pc = 0x310EF8u;
            // 0x310ef8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x310EFCu;
        goto label_310efc;
    }
    ctx->pc = 0x310EF4u;
    {
        const bool branch_taken_0x310ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310EF4u;
            // 0x310ef8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ef4) {
            ctx->pc = 0x310F18u;
            goto label_310f18;
        }
    }
    ctx->pc = 0x310EFCu;
label_310efc:
    // 0x310efc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x310efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_310f00:
    // 0x310f00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x310f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_310f04:
    // 0x310f04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x310f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_310f08:
    // 0x310f08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x310f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_310f0c:
    // 0x310f0c: 0x0  nop
    ctx->pc = 0x310f0cu;
    // NOP
label_310f10:
    // 0x310f10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x310f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_310f14:
    // 0x310f14: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x310f14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_310f18:
    // 0x310f18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x310f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_310f1c:
    // 0x310f1c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x310f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_310f20:
    // 0x310f20: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x310f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_310f24:
    // 0x310f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_310f28:
    // 0x310f28: 0x0  nop
    ctx->pc = 0x310f28u;
    // NOP
label_310f2c:
    // 0x310f2c: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x310f2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_310f30:
    // 0x310f30: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x310f30u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_310f34:
    // 0x310f34: 0xc04f3f4  jal         func_13CFD0
label_310f38:
    if (ctx->pc == 0x310F38u) {
        ctx->pc = 0x310F38u;
            // 0x310f38: 0x4601131c  madd.s      $f12, $f2, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->pc = 0x310F3Cu;
        goto label_310f3c;
    }
    ctx->pc = 0x310F34u;
    SET_GPR_U32(ctx, 31, 0x310F3Cu);
    ctx->pc = 0x310F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310F34u;
            // 0x310f38: 0x4601131c  madd.s      $f12, $f2, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310F3Cu; }
        if (ctx->pc != 0x310F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310F3Cu; }
        if (ctx->pc != 0x310F3Cu) { return; }
    }
    ctx->pc = 0x310F3Cu;
label_310f3c:
    // 0x310f3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310f40:
    // 0x310f40: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x310f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_310f44:
    // 0x310f44: 0x8c44e360  lw          $a0, -0x1CA0($v0)
    ctx->pc = 0x310f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_310f48:
    // 0x310f48: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x310f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_310f4c:
    // 0x310f4c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x310f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_310f50:
    // 0x310f50: 0xc0528ec  jal         func_14A3B0
label_310f54:
    if (ctx->pc == 0x310F54u) {
        ctx->pc = 0x310F54u;
            // 0x310f54: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x310F58u;
        goto label_310f58;
    }
    ctx->pc = 0x310F50u;
    SET_GPR_U32(ctx, 31, 0x310F58u);
    ctx->pc = 0x310F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310F50u;
            // 0x310f54: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310F58u; }
        if (ctx->pc != 0x310F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310F58u; }
        if (ctx->pc != 0x310F58u) { return; }
    }
    ctx->pc = 0x310F58u;
label_310f58:
    // 0x310f58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x310f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_310f5c:
    // 0x310f5c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x310f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_310f60:
    // 0x310f60: 0x8c46e360  lw          $a2, -0x1CA0($v0)
    ctx->pc = 0x310f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_310f64:
    // 0x310f64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x310f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_310f68:
    // 0x310f68: 0xc0529c4  jal         func_14A710
label_310f6c:
    if (ctx->pc == 0x310F6Cu) {
        ctx->pc = 0x310F6Cu;
            // 0x310f6c: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x310F70u;
        goto label_310f70;
    }
    ctx->pc = 0x310F68u;
    SET_GPR_U32(ctx, 31, 0x310F70u);
    ctx->pc = 0x310F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310F68u;
            // 0x310f6c: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A710u;
    if (runtime->hasFunction(0x14A710u)) {
        auto targetFn = runtime->lookupFunction(0x14A710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310F70u; }
        if (ctx->pc != 0x310F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A710_0x14a710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310F70u; }
        if (ctx->pc != 0x310F70u) { return; }
    }
    ctx->pc = 0x310F70u;
label_310f70:
    // 0x310f70: 0xc04e738  jal         func_139CE0
label_310f74:
    if (ctx->pc == 0x310F74u) {
        ctx->pc = 0x310F74u;
            // 0x310f74: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x310F78u;
        goto label_310f78;
    }
    ctx->pc = 0x310F70u;
    SET_GPR_U32(ctx, 31, 0x310F78u);
    ctx->pc = 0x310F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310F70u;
            // 0x310f74: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310F78u; }
        if (ctx->pc != 0x310F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310F78u; }
        if (ctx->pc != 0x310F78u) { return; }
    }
    ctx->pc = 0x310F78u;
label_310f78:
    // 0x310f78: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x310f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_310f7c:
    // 0x310f7c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x310f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_310f80:
    // 0x310f80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_310f84:
    if (ctx->pc == 0x310F84u) {
        ctx->pc = 0x310F84u;
            // 0x310f84: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x310F88u;
        goto label_310f88;
    }
    ctx->pc = 0x310F80u;
    {
        const bool branch_taken_0x310f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310F80u;
            // 0x310f84: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f80) {
            ctx->pc = 0x310FA4u;
            goto label_310fa4;
        }
    }
    ctx->pc = 0x310F88u;
label_310f88:
    // 0x310f88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x310f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_310f8c:
    // 0x310f8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x310f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_310f90:
    // 0x310f90: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x310f90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_310f94:
    // 0x310f94: 0xc0538d8  jal         func_14E360
label_310f98:
    if (ctx->pc == 0x310F98u) {
        ctx->pc = 0x310F98u;
            // 0x310f98: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x310F9Cu;
        goto label_310f9c;
    }
    ctx->pc = 0x310F94u;
    SET_GPR_U32(ctx, 31, 0x310F9Cu);
    ctx->pc = 0x310F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310F94u;
            // 0x310f98: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310F9Cu; }
        if (ctx->pc != 0x310F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310F9Cu; }
        if (ctx->pc != 0x310F9Cu) { return; }
    }
    ctx->pc = 0x310F9Cu;
label_310f9c:
    // 0x310f9c: 0x10000006  b           . + 4 + (0x6 << 2)
label_310fa0:
    if (ctx->pc == 0x310FA0u) {
        ctx->pc = 0x310FA4u;
        goto label_310fa4;
    }
    ctx->pc = 0x310F9Cu;
    {
        const bool branch_taken_0x310f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310f9c) {
            ctx->pc = 0x310FB8u;
            goto label_310fb8;
        }
    }
    ctx->pc = 0x310FA4u;
label_310fa4:
    // 0x310fa4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x310fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_310fa8:
    // 0x310fa8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x310fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_310fac:
    // 0x310fac: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x310facu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_310fb0:
    // 0x310fb0: 0xc050044  jal         func_140110
label_310fb4:
    if (ctx->pc == 0x310FB4u) {
        ctx->pc = 0x310FB4u;
            // 0x310fb4: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x310FB8u;
        goto label_310fb8;
    }
    ctx->pc = 0x310FB0u;
    SET_GPR_U32(ctx, 31, 0x310FB8u);
    ctx->pc = 0x310FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310FB0u;
            // 0x310fb4: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310FB8u; }
        if (ctx->pc != 0x310FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310FB8u; }
        if (ctx->pc != 0x310FB8u) { return; }
    }
    ctx->pc = 0x310FB8u;
label_310fb8:
    // 0x310fb8: 0x8eb00008  lw          $s0, 0x8($s5)
    ctx->pc = 0x310fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_310fbc:
    // 0x310fbc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x310fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_310fc0:
    // 0x310fc0: 0x8e040550  lw          $a0, 0x550($s0)
    ctx->pc = 0x310fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_310fc4:
    // 0x310fc4: 0x8084010f  lb          $a0, 0x10F($a0)
    ctx->pc = 0x310fc4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 271)));
label_310fc8:
    // 0x310fc8: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_310fcc:
    if (ctx->pc == 0x310FCCu) {
        ctx->pc = 0x310FD0u;
        goto label_310fd0;
    }
    ctx->pc = 0x310FC8u;
    {
        const bool branch_taken_0x310fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310fc8) {
            ctx->pc = 0x310FF4u;
            goto label_310ff4;
        }
    }
    ctx->pc = 0x310FD0u;
label_310fd0:
    // 0x310fd0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x310fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_310fd4:
    // 0x310fd4: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_310fd8:
    if (ctx->pc == 0x310FD8u) {
        ctx->pc = 0x310FDCu;
        goto label_310fdc;
    }
    ctx->pc = 0x310FD4u;
    {
        const bool branch_taken_0x310fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310fd4) {
            ctx->pc = 0x310FF4u;
            goto label_310ff4;
        }
    }
    ctx->pc = 0x310FDCu;
label_310fdc:
    // 0x310fdc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x310fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_310fe0:
    // 0x310fe0: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_310fe4:
    if (ctx->pc == 0x310FE4u) {
        ctx->pc = 0x310FE8u;
        goto label_310fe8;
    }
    ctx->pc = 0x310FE0u;
    {
        const bool branch_taken_0x310fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310fe0) {
            ctx->pc = 0x310FF4u;
            goto label_310ff4;
        }
    }
    ctx->pc = 0x310FE8u;
label_310fe8:
    // 0x310fe8: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x310fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_310fec:
    // 0x310fec: 0x5483005d  bnel        $a0, $v1, . + 4 + (0x5D << 2)
label_310ff0:
    if (ctx->pc == 0x310FF0u) {
        ctx->pc = 0x310FF0u;
            // 0x310ff0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x310FF4u;
        goto label_310ff4;
    }
    ctx->pc = 0x310FECu;
    {
        const bool branch_taken_0x310fec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x310fec) {
            ctx->pc = 0x310FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x310FECu;
            // 0x310ff0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311164u;
            goto label_311164;
        }
    }
    ctx->pc = 0x310FF4u;
label_310ff4:
    // 0x310ff4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x310ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_310ff8:
    // 0x310ff8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x310ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_310ffc:
    // 0x310ffc: 0x8c73e370  lw          $s3, -0x1C90($v1)
    ctx->pc = 0x310ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_311000:
    // 0x311000: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x311000u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_311004:
    // 0x311004: 0x8c94e378  lw          $s4, -0x1C88($a0)
    ctx->pc = 0x311004u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_311008:
    // 0x311008: 0x2652f7d0  addiu       $s2, $s2, -0x830
    ctx->pc = 0x311008u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965200));
label_31100c:
    // 0x31100c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x31100cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_311010:
    // 0x311010: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x311010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_311014:
    // 0x311014: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x311014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_311018:
    // 0x311018: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x311018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_31101c:
    // 0x31101c: 0x8cc60130  lw          $a2, 0x130($a2)
    ctx->pc = 0x31101cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_311020:
    // 0x311020: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x311020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_311024:
    // 0x311024: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x311024u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_311028:
    // 0x311028: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x311028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_31102c:
    // 0x31102c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x31102cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_311030:
    // 0x311030: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x311030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_311034:
    // 0x311034: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x311034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_311038:
    // 0x311038: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_31103c:
    if (ctx->pc == 0x31103Cu) {
        ctx->pc = 0x31103Cu;
            // 0x31103c: 0x24b10010  addiu       $s1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x311040u;
        goto label_311040;
    }
    ctx->pc = 0x311038u;
    {
        const bool branch_taken_0x311038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31103Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311038u;
            // 0x31103c: 0x24b10010  addiu       $s1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311038) {
            ctx->pc = 0x31104Cu;
            goto label_31104c;
        }
    }
    ctx->pc = 0x311040u;
label_311040:
    // 0x311040: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x311040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_311044:
    // 0x311044: 0x14830046  bne         $a0, $v1, . + 4 + (0x46 << 2)
label_311048:
    if (ctx->pc == 0x311048u) {
        ctx->pc = 0x31104Cu;
        goto label_31104c;
    }
    ctx->pc = 0x311044u;
    {
        const bool branch_taken_0x311044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x311044) {
            ctx->pc = 0x311160u;
            goto label_311160;
        }
    }
    ctx->pc = 0x31104Cu;
label_31104c:
    // 0x31104c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_311050:
    // 0x311050: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x311050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_311054:
    // 0x311054: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x311054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_311058:
    // 0x311058: 0xc04e4a4  jal         func_139290
label_31105c:
    if (ctx->pc == 0x31105Cu) {
        ctx->pc = 0x31105Cu;
            // 0x31105c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311060u;
        goto label_311060;
    }
    ctx->pc = 0x311058u;
    SET_GPR_U32(ctx, 31, 0x311060u);
    ctx->pc = 0x31105Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311058u;
            // 0x31105c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311060u; }
        if (ctx->pc != 0x311060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311060u; }
        if (ctx->pc != 0x311060u) { return; }
    }
    ctx->pc = 0x311060u;
label_311060:
    // 0x311060: 0x92020e3d  lbu         $v0, 0xE3D($s0)
    ctx->pc = 0x311060u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3645)));
label_311064:
    // 0x311064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x311064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_311068:
    // 0x311068: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x311068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_31106c:
    // 0x31106c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x31106cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_311070:
    // 0x311070: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x311070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_311074:
    // 0x311074: 0xc04cd60  jal         func_133580
label_311078:
    if (ctx->pc == 0x311078u) {
        ctx->pc = 0x311078u;
            // 0x311078: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x31107Cu;
        goto label_31107c;
    }
    ctx->pc = 0x311074u;
    SET_GPR_U32(ctx, 31, 0x31107Cu);
    ctx->pc = 0x311078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311074u;
            // 0x311078: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31107Cu; }
        if (ctx->pc != 0x31107Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31107Cu; }
        if (ctx->pc != 0x31107Cu) { return; }
    }
    ctx->pc = 0x31107Cu;
label_31107c:
    // 0x31107c: 0x8e030db0  lw          $v1, 0xDB0($s0)
    ctx->pc = 0x31107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_311080:
    // 0x311080: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x311080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_311084:
    // 0x311084: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x311084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_311088:
    // 0x311088: 0x3862000f  xori        $v0, $v1, 0xF
    ctx->pc = 0x311088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)15);
label_31108c:
    // 0x31108c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x31108cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_311090:
    // 0x311090: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_311094:
    if (ctx->pc == 0x311094u) {
        ctx->pc = 0x311094u;
            // 0x311094: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x311098u;
        goto label_311098;
    }
    ctx->pc = 0x311090u;
    {
        const bool branch_taken_0x311090 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x311094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311090u;
            // 0x311094: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311090) {
            ctx->pc = 0x3110A4u;
            goto label_3110a4;
        }
    }
    ctx->pc = 0x311098u;
label_311098:
    // 0x311098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31109c:
    // 0x31109c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3110a0:
    if (ctx->pc == 0x3110A0u) {
        ctx->pc = 0x3110A0u;
            // 0x3110a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3110A4u;
        goto label_3110a4;
    }
    ctx->pc = 0x31109Cu;
    {
        const bool branch_taken_0x31109c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3110A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31109Cu;
            // 0x3110a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31109c) {
            ctx->pc = 0x3110C0u;
            goto label_3110c0;
        }
    }
    ctx->pc = 0x3110A4u;
label_3110a4:
    // 0x3110a4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3110a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3110a8:
    // 0x3110a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3110a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3110ac:
    // 0x3110ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3110acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3110b0:
    // 0x3110b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3110b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3110b4:
    // 0x3110b4: 0x0  nop
    ctx->pc = 0x3110b4u;
    // NOP
label_3110b8:
    // 0x3110b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3110b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3110bc:
    // 0x3110bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3110bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3110c0:
    // 0x3110c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3110c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3110c4:
    // 0x3110c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3110c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3110c8:
    // 0x3110c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3110c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3110cc:
    // 0x3110cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3110ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3110d0:
    // 0x3110d0: 0x0  nop
    ctx->pc = 0x3110d0u;
    // NOP
label_3110d4:
    // 0x3110d4: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x3110d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_3110d8:
    // 0x3110d8: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x3110d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_3110dc:
    // 0x3110dc: 0xc04f3f4  jal         func_13CFD0
label_3110e0:
    if (ctx->pc == 0x3110E0u) {
        ctx->pc = 0x3110E0u;
            // 0x3110e0: 0x4601131c  madd.s      $f12, $f2, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->pc = 0x3110E4u;
        goto label_3110e4;
    }
    ctx->pc = 0x3110DCu;
    SET_GPR_U32(ctx, 31, 0x3110E4u);
    ctx->pc = 0x3110E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3110DCu;
            // 0x3110e0: 0x4601131c  madd.s      $f12, $f2, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3110E4u; }
        if (ctx->pc != 0x3110E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3110E4u; }
        if (ctx->pc != 0x3110E4u) { return; }
    }
    ctx->pc = 0x3110E4u;
label_3110e4:
    // 0x3110e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3110e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3110e8:
    // 0x3110e8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3110e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3110ec:
    // 0x3110ec: 0x8c44e360  lw          $a0, -0x1CA0($v0)
    ctx->pc = 0x3110ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_3110f0:
    // 0x3110f0: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x3110f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3110f4:
    // 0x3110f4: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x3110f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3110f8:
    // 0x3110f8: 0xc0528ec  jal         func_14A3B0
label_3110fc:
    if (ctx->pc == 0x3110FCu) {
        ctx->pc = 0x3110FCu;
            // 0x3110fc: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x311100u;
        goto label_311100;
    }
    ctx->pc = 0x3110F8u;
    SET_GPR_U32(ctx, 31, 0x311100u);
    ctx->pc = 0x3110FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3110F8u;
            // 0x3110fc: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311100u; }
        if (ctx->pc != 0x311100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311100u; }
        if (ctx->pc != 0x311100u) { return; }
    }
    ctx->pc = 0x311100u;
label_311100:
    // 0x311100: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x311100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_311104:
    // 0x311104: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x311104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_311108:
    // 0x311108: 0x8c46e360  lw          $a2, -0x1CA0($v0)
    ctx->pc = 0x311108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_31110c:
    // 0x31110c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31110cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_311110:
    // 0x311110: 0xc0529c4  jal         func_14A710
label_311114:
    if (ctx->pc == 0x311114u) {
        ctx->pc = 0x311114u;
            // 0x311114: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x311118u;
        goto label_311118;
    }
    ctx->pc = 0x311110u;
    SET_GPR_U32(ctx, 31, 0x311118u);
    ctx->pc = 0x311114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311110u;
            // 0x311114: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A710u;
    if (runtime->hasFunction(0x14A710u)) {
        auto targetFn = runtime->lookupFunction(0x14A710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311118u; }
        if (ctx->pc != 0x311118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A710_0x14a710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311118u; }
        if (ctx->pc != 0x311118u) { return; }
    }
    ctx->pc = 0x311118u;
label_311118:
    // 0x311118: 0xc04e738  jal         func_139CE0
label_31111c:
    if (ctx->pc == 0x31111Cu) {
        ctx->pc = 0x31111Cu;
            // 0x31111c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x311120u;
        goto label_311120;
    }
    ctx->pc = 0x311118u;
    SET_GPR_U32(ctx, 31, 0x311120u);
    ctx->pc = 0x31111Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311118u;
            // 0x31111c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311120u; }
        if (ctx->pc != 0x311120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311120u; }
        if (ctx->pc != 0x311120u) { return; }
    }
    ctx->pc = 0x311120u;
label_311120:
    // 0x311120: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x311120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_311124:
    // 0x311124: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x311124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_311128:
    // 0x311128: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_31112c:
    if (ctx->pc == 0x31112Cu) {
        ctx->pc = 0x31112Cu;
            // 0x31112c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x311130u;
        goto label_311130;
    }
    ctx->pc = 0x311128u;
    {
        const bool branch_taken_0x311128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311128u;
            // 0x31112c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311128) {
            ctx->pc = 0x31114Cu;
            goto label_31114c;
        }
    }
    ctx->pc = 0x311130u;
label_311130:
    // 0x311130: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x311130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_311134:
    // 0x311134: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x311134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_311138:
    // 0x311138: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x311138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31113c:
    // 0x31113c: 0xc0538d8  jal         func_14E360
label_311140:
    if (ctx->pc == 0x311140u) {
        ctx->pc = 0x311140u;
            // 0x311140: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x311144u;
        goto label_311144;
    }
    ctx->pc = 0x31113Cu;
    SET_GPR_U32(ctx, 31, 0x311144u);
    ctx->pc = 0x311140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31113Cu;
            // 0x311140: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311144u; }
        if (ctx->pc != 0x311144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311144u; }
        if (ctx->pc != 0x311144u) { return; }
    }
    ctx->pc = 0x311144u;
label_311144:
    // 0x311144: 0x10000006  b           . + 4 + (0x6 << 2)
label_311148:
    if (ctx->pc == 0x311148u) {
        ctx->pc = 0x31114Cu;
        goto label_31114c;
    }
    ctx->pc = 0x311144u;
    {
        const bool branch_taken_0x311144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311144) {
            ctx->pc = 0x311160u;
            goto label_311160;
        }
    }
    ctx->pc = 0x31114Cu;
label_31114c:
    // 0x31114c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31114cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_311150:
    // 0x311150: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x311150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_311154:
    // 0x311154: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x311154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_311158:
    // 0x311158: 0xc050044  jal         func_140110
label_31115c:
    if (ctx->pc == 0x31115Cu) {
        ctx->pc = 0x31115Cu;
            // 0x31115c: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x311160u;
        goto label_311160;
    }
    ctx->pc = 0x311158u;
    SET_GPR_U32(ctx, 31, 0x311160u);
    ctx->pc = 0x31115Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311158u;
            // 0x31115c: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311160u; }
        if (ctx->pc != 0x311160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311160u; }
        if (ctx->pc != 0x311160u) { return; }
    }
    ctx->pc = 0x311160u;
label_311160:
    // 0x311160: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x311160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_311164:
    // 0x311164: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x311164u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_311168:
    // 0x311168: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x311168u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31116c:
    // 0x31116c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31116cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_311170:
    // 0x311170: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x311170u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_311174:
    // 0x311174: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x311174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_311178:
    // 0x311178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x311178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31117c:
    // 0x31117c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31117cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_311180:
    // 0x311180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_311184:
    // 0x311184: 0x3e00008  jr          $ra
label_311188:
    if (ctx->pc == 0x311188u) {
        ctx->pc = 0x311188u;
            // 0x311188: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x31118Cu;
        goto label_31118c;
    }
    ctx->pc = 0x311184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311184u;
            // 0x311188: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31118Cu;
label_31118c:
    // 0x31118c: 0x0  nop
    ctx->pc = 0x31118cu;
    // NOP
label_311190:
    // 0x311190: 0x3e00008  jr          $ra
label_311194:
    if (ctx->pc == 0x311194u) {
        ctx->pc = 0x311198u;
        goto label_311198;
    }
    ctx->pc = 0x311190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311198u;
label_311198:
    // 0x311198: 0x0  nop
    ctx->pc = 0x311198u;
    // NOP
label_31119c:
    // 0x31119c: 0x0  nop
    ctx->pc = 0x31119cu;
    // NOP
label_3111a0:
    // 0x3111a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3111a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3111a4:
    // 0x3111a4: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x3111a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_3111a8:
    // 0x3111a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3111a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3111ac:
    // 0x3111ac: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3111acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3111b0:
    // 0x3111b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3111b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3111b4:
    // 0x3111b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3111b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3111b8:
    // 0x3111b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3111b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3111bc:
    // 0x3111bc: 0x24c6f7b0  addiu       $a2, $a2, -0x850
    ctx->pc = 0x3111bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965168));
label_3111c0:
    // 0x3111c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3111c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3111c4:
    // 0x3111c4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3111c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3111c8:
    // 0x3111c8: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x3111c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3111cc:
    // 0x3111cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3111ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3111d0:
    // 0x3111d0: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3111d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3111d4:
    // 0x3111d4: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x3111d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3111d8:
    // 0x3111d8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3111d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3111dc:
    // 0x3111dc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3111dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3111e0:
    // 0x3111e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3111e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3111e4:
    // 0x3111e4: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x3111e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3111e8:
    // 0x3111e8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3111e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3111ec:
    // 0x3111ec: 0x4603085c  madd.s      $f1, $f1, $f3
    ctx->pc = 0x3111ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_3111f0:
    // 0x3111f0: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x3111f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_3111f4:
    // 0x3111f4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3111f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3111f8:
    // 0x3111f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3111f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3111fc:
    // 0x3111fc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_311200:
    if (ctx->pc == 0x311200u) {
        ctx->pc = 0x311200u;
            // 0x311200: 0x24a5f7d0  addiu       $a1, $a1, -0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965200));
        ctx->pc = 0x311204u;
        goto label_311204;
    }
    ctx->pc = 0x3111FCu;
    {
        const bool branch_taken_0x3111fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x311200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3111FCu;
            // 0x311200: 0x24a5f7d0  addiu       $a1, $a1, -0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111fc) {
            ctx->pc = 0x311230u;
            goto label_311230;
        }
    }
    ctx->pc = 0x311204u;
label_311204:
    // 0x311204: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x311204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311208:
    // 0x311208: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x311208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_31120c:
    // 0x31120c: 0xc6210dbc  lwc1        $f1, 0xDBC($s1)
    ctx->pc = 0x31120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_311210:
    // 0x311210: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x311210u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_311214:
    // 0x311214: 0x4601185c  madd.s      $f1, $f3, $f1
    ctx->pc = 0x311214u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_311218:
    // 0x311218: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x311218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_31121c:
    // 0x31121c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x31121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311220:
    // 0x311220: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x311220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_311224:
    // 0x311224: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_311228:
    if (ctx->pc == 0x311228u) {
        ctx->pc = 0x311228u;
            // 0x311228: 0x8e240db0  lw          $a0, 0xDB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
        ctx->pc = 0x31122Cu;
        goto label_31122c;
    }
    ctx->pc = 0x311224u;
    {
        const bool branch_taken_0x311224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311224) {
            ctx->pc = 0x311228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311224u;
            // 0x311228: 0x8e240db0  lw          $a0, 0xDB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311234u;
            goto label_311234;
        }
    }
    ctx->pc = 0x31122Cu;
label_31122c:
    // 0x31122c: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x31122cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_311230:
    // 0x311230: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x311230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_311234:
    // 0x311234: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x311234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_311238:
    // 0x311238: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_31123c:
    if (ctx->pc == 0x31123Cu) {
        ctx->pc = 0x31123Cu;
            // 0x31123c: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x311240u;
        goto label_311240;
    }
    ctx->pc = 0x311238u;
    {
        const bool branch_taken_0x311238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x311238) {
            ctx->pc = 0x31123Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311238u;
            // 0x31123c: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31125Cu;
            goto label_31125c;
        }
    }
    ctx->pc = 0x311240u;
label_311240:
    // 0x311240: 0xc621118c  lwc1        $f1, 0x118C($s1)
    ctx->pc = 0x311240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_311244:
    // 0x311244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_311248:
    // 0x311248: 0x0  nop
    ctx->pc = 0x311248u;
    // NOP
label_31124c:
    // 0x31124c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31124cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_311250:
    // 0x311250: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_311254:
    if (ctx->pc == 0x311254u) {
        ctx->pc = 0x311254u;
            // 0x311254: 0xc6210e1c  lwc1        $f1, 0xE1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x311258u;
        goto label_311258;
    }
    ctx->pc = 0x311250u;
    {
        const bool branch_taken_0x311250 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311250) {
            ctx->pc = 0x311254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311250u;
            // 0x311254: 0xc6210e1c  lwc1        $f1, 0xE1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x31127Cu;
            goto label_31127c;
        }
    }
    ctx->pc = 0x311258u;
label_311258:
    // 0x311258: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x311258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_31125c:
    // 0x31125c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_311260:
    if (ctx->pc == 0x311260u) {
        ctx->pc = 0x311260u;
            // 0x311260: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x311264u;
        goto label_311264;
    }
    ctx->pc = 0x31125Cu;
    {
        const bool branch_taken_0x31125c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31125c) {
            ctx->pc = 0x311260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31125Cu;
            // 0x311260: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311278u;
            goto label_311278;
        }
    }
    ctx->pc = 0x311264u;
label_311264:
    // 0x311264: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x311264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_311268:
    // 0x311268: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x311268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_31126c:
    // 0x31126c: 0xc057b7c  jal         func_15EDF0
label_311270:
    if (ctx->pc == 0x311270u) {
        ctx->pc = 0x311270u;
            // 0x311270: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x311274u;
        goto label_311274;
    }
    ctx->pc = 0x31126Cu;
    SET_GPR_U32(ctx, 31, 0x311274u);
    ctx->pc = 0x311270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31126Cu;
            // 0x311270: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311274u; }
        if (ctx->pc != 0x311274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311274u; }
        if (ctx->pc != 0x311274u) { return; }
    }
    ctx->pc = 0x311274u;
label_311274:
    // 0x311274: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x311274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_311278:
    // 0x311278: 0xc6210e1c  lwc1        $f1, 0xE1C($s1)
    ctx->pc = 0x311278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31127c:
    // 0x31127c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31127cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_311280:
    // 0x311280: 0x0  nop
    ctx->pc = 0x311280u;
    // NOP
label_311284:
    // 0x311284: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x311284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_311288:
    // 0x311288: 0x45030038  bc1tl       . + 4 + (0x38 << 2)
label_31128c:
    if (ctx->pc == 0x31128Cu) {
        ctx->pc = 0x31128Cu;
            // 0x31128c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x311290u;
        goto label_311290;
    }
    ctx->pc = 0x311288u;
    {
        const bool branch_taken_0x311288 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311288) {
            ctx->pc = 0x31128Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311288u;
            // 0x31128c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31136Cu;
            goto label_31136c;
        }
    }
    ctx->pc = 0x311290u;
label_311290:
    // 0x311290: 0x822511ad  lb          $a1, 0x11AD($s1)
    ctx->pc = 0x311290u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4525)));
label_311294:
    // 0x311294: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x311294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_311298:
    // 0x311298: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x311298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_31129c:
    // 0x31129c: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x31129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_3112a0:
    // 0x3112a0: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3112a0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3112a4:
    // 0x3112a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3112a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3112a8:
    // 0x3112a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3112a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3112ac:
    // 0x3112ac: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x3112acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3112b0:
    // 0x3112b0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3112b4:
    if (ctx->pc == 0x3112B4u) {
        ctx->pc = 0x3112B4u;
            // 0x3112b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3112B8u;
        goto label_3112b8;
    }
    ctx->pc = 0x3112B0u;
    {
        const bool branch_taken_0x3112b0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3112B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3112B0u;
            // 0x3112b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112b0) {
            ctx->pc = 0x3112C8u;
            goto label_3112c8;
        }
    }
    ctx->pc = 0x3112B8u;
label_3112b8:
    // 0x3112b8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3112b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3112bc:
    // 0x3112bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3112c0:
    if (ctx->pc == 0x3112C0u) {
        ctx->pc = 0x3112C4u;
        goto label_3112c4;
    }
    ctx->pc = 0x3112BCu;
    {
        const bool branch_taken_0x3112bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3112bc) {
            ctx->pc = 0x3112C8u;
            goto label_3112c8;
        }
    }
    ctx->pc = 0x3112C4u;
label_3112c4:
    // 0x3112c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3112c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3112c8:
    // 0x3112c8: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_3112cc:
    if (ctx->pc == 0x3112CCu) {
        ctx->pc = 0x3112D0u;
        goto label_3112d0;
    }
    ctx->pc = 0x3112C8u;
    {
        const bool branch_taken_0x3112c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3112c8) {
            ctx->pc = 0x3112E4u;
            goto label_3112e4;
        }
    }
    ctx->pc = 0x3112D0u;
label_3112d0:
    // 0x3112d0: 0xc075eb4  jal         func_1D7AD0
label_3112d4:
    if (ctx->pc == 0x3112D4u) {
        ctx->pc = 0x3112D4u;
            // 0x3112d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3112D8u;
        goto label_3112d8;
    }
    ctx->pc = 0x3112D0u;
    SET_GPR_U32(ctx, 31, 0x3112D8u);
    ctx->pc = 0x3112D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3112D0u;
            // 0x3112d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3112D8u; }
        if (ctx->pc != 0x3112D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3112D8u; }
        if (ctx->pc != 0x3112D8u) { return; }
    }
    ctx->pc = 0x3112D8u;
label_3112d8:
    // 0x3112d8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3112dc:
    if (ctx->pc == 0x3112DCu) {
        ctx->pc = 0x3112E0u;
        goto label_3112e0;
    }
    ctx->pc = 0x3112D8u;
    {
        const bool branch_taken_0x3112d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3112d8) {
            ctx->pc = 0x3112E4u;
            goto label_3112e4;
        }
    }
    ctx->pc = 0x3112E0u;
label_3112e0:
    // 0x3112e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3112e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3112e4:
    // 0x3112e4: 0x5600001b  bnel        $s0, $zero, . + 4 + (0x1B << 2)
label_3112e8:
    if (ctx->pc == 0x3112E8u) {
        ctx->pc = 0x3112E8u;
            // 0x3112e8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->pc = 0x3112ECu;
        goto label_3112ec;
    }
    ctx->pc = 0x3112E4u;
    {
        const bool branch_taken_0x3112e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3112e4) {
            ctx->pc = 0x3112E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3112E4u;
            // 0x3112e8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311354u;
            goto label_311354;
        }
    }
    ctx->pc = 0x3112ECu;
label_3112ec:
    // 0x3112ec: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x3112ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_3112f0:
    // 0x3112f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3112f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3112f4:
    // 0x3112f4: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_3112f8:
    if (ctx->pc == 0x3112F8u) {
        ctx->pc = 0x3112FCu;
        goto label_3112fc;
    }
    ctx->pc = 0x3112F4u;
    {
        const bool branch_taken_0x3112f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3112f4) {
            ctx->pc = 0x311350u;
            goto label_311350;
        }
    }
    ctx->pc = 0x3112FCu;
label_3112fc:
    // 0x3112fc: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x3112fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_311300:
    // 0x311300: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x311300u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_311304:
    // 0x311304: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_311308:
    if (ctx->pc == 0x311308u) {
        ctx->pc = 0x311308u;
            // 0x311308: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31130Cu;
        goto label_31130c;
    }
    ctx->pc = 0x311304u;
    {
        const bool branch_taken_0x311304 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x311308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311304u;
            // 0x311308: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311304) {
            ctx->pc = 0x31131Cu;
            goto label_31131c;
        }
    }
    ctx->pc = 0x31130Cu;
label_31130c:
    // 0x31130c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x31130cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_311310:
    // 0x311310: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_311314:
    if (ctx->pc == 0x311314u) {
        ctx->pc = 0x311318u;
        goto label_311318;
    }
    ctx->pc = 0x311310u;
    {
        const bool branch_taken_0x311310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x311310) {
            ctx->pc = 0x31131Cu;
            goto label_31131c;
        }
    }
    ctx->pc = 0x311318u;
label_311318:
    // 0x311318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x311318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31131c:
    // 0x31131c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_311320:
    if (ctx->pc == 0x311320u) {
        ctx->pc = 0x311324u;
        goto label_311324;
    }
    ctx->pc = 0x31131Cu;
    {
        const bool branch_taken_0x31131c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31131c) {
            ctx->pc = 0x311338u;
            goto label_311338;
        }
    }
    ctx->pc = 0x311324u;
label_311324:
    // 0x311324: 0xc075eb4  jal         func_1D7AD0
label_311328:
    if (ctx->pc == 0x311328u) {
        ctx->pc = 0x311328u;
            // 0x311328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31132Cu;
        goto label_31132c;
    }
    ctx->pc = 0x311324u;
    SET_GPR_U32(ctx, 31, 0x31132Cu);
    ctx->pc = 0x311328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311324u;
            // 0x311328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31132Cu; }
        if (ctx->pc != 0x31132Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31132Cu; }
        if (ctx->pc != 0x31132Cu) { return; }
    }
    ctx->pc = 0x31132Cu;
label_31132c:
    // 0x31132c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_311330:
    if (ctx->pc == 0x311330u) {
        ctx->pc = 0x311334u;
        goto label_311334;
    }
    ctx->pc = 0x31132Cu;
    {
        const bool branch_taken_0x31132c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31132c) {
            ctx->pc = 0x311338u;
            goto label_311338;
        }
    }
    ctx->pc = 0x311334u;
label_311334:
    // 0x311334: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x311334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311338:
    // 0x311338: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_31133c:
    if (ctx->pc == 0x31133Cu) {
        ctx->pc = 0x311340u;
        goto label_311340;
    }
    ctx->pc = 0x311338u;
    {
        const bool branch_taken_0x311338 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x311338) {
            ctx->pc = 0x311350u;
            goto label_311350;
        }
    }
    ctx->pc = 0x311340u;
label_311340:
    // 0x311340: 0x8e440e34  lw          $a0, 0xE34($s2)
    ctx->pc = 0x311340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_311344:
    // 0x311344: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x311344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_311348:
    // 0x311348: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_31134c:
    if (ctx->pc == 0x31134Cu) {
        ctx->pc = 0x31134Cu;
            // 0x31134c: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
        ctx->pc = 0x311350u;
        goto label_311350;
    }
    ctx->pc = 0x311348u;
    {
        const bool branch_taken_0x311348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x311348) {
            ctx->pc = 0x31134Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311348u;
            // 0x31134c: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311360u;
            goto label_311360;
        }
    }
    ctx->pc = 0x311350u;
label_311350:
    // 0x311350: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x311350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_311354:
    // 0x311354: 0xc073234  jal         func_1CC8D0
label_311358:
    if (ctx->pc == 0x311358u) {
        ctx->pc = 0x311358u;
            // 0x311358: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x31135Cu;
        goto label_31135c;
    }
    ctx->pc = 0x311354u;
    SET_GPR_U32(ctx, 31, 0x31135Cu);
    ctx->pc = 0x311358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311354u;
            // 0x311358: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31135Cu; }
        if (ctx->pc != 0x31135Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31135Cu; }
        if (ctx->pc != 0x31135Cu) { return; }
    }
    ctx->pc = 0x31135Cu;
label_31135c:
    // 0x31135c: 0xae200e1c  sw          $zero, 0xE1C($s1)
    ctx->pc = 0x31135cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
label_311360:
    // 0x311360: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x311360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_311364:
    // 0x311364: 0xa22311ad  sb          $v1, 0x11AD($s1)
    ctx->pc = 0x311364u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4525), (uint8_t)GPR_U32(ctx, 3));
label_311368:
    // 0x311368: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x311368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31136c:
    // 0x31136c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31136cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311370:
    // 0x311370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x311370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_311374:
    // 0x311374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_311378:
    // 0x311378: 0x3e00008  jr          $ra
label_31137c:
    if (ctx->pc == 0x31137Cu) {
        ctx->pc = 0x31137Cu;
            // 0x31137c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x311380u;
        goto label_311380;
    }
    ctx->pc = 0x311378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31137Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311378u;
            // 0x31137c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311380u;
label_311380:
    // 0x311380: 0x3e00008  jr          $ra
label_311384:
    if (ctx->pc == 0x311384u) {
        ctx->pc = 0x311388u;
        goto label_311388;
    }
    ctx->pc = 0x311380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311388u;
label_311388:
    // 0x311388: 0x0  nop
    ctx->pc = 0x311388u;
    // NOP
label_31138c:
    // 0x31138c: 0x0  nop
    ctx->pc = 0x31138cu;
    // NOP
label_311390:
    // 0x311390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x311390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_311394:
    // 0x311394: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x311394u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_311398:
    // 0x311398: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x311398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31139c:
    // 0x31139c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31139cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3113a0:
    // 0x3113a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3113a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3113a4:
    // 0x3113a4: 0x24c6f7d0  addiu       $a2, $a2, -0x830
    ctx->pc = 0x3113a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965200));
label_3113a8:
    // 0x3113a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3113a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3113ac:
    // 0x3113ac: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3113acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3113b0:
    // 0x3113b0: 0x8c43f7f0  lw          $v1, -0x810($v0)
    ctx->pc = 0x3113b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965232)));
label_3113b4:
    // 0x3113b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3113b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3113b8:
    // 0x3113b8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x3113b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_3113bc:
    // 0x3113bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3113bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3113c0:
    // 0x3113c0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3113c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_3113c4:
    // 0x3113c4: 0xac40f7bc  sw          $zero, -0x844($v0)
    ctx->pc = 0x3113c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965180), GPR_U32(ctx, 0));
label_3113c8:
    // 0x3113c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3113c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3113cc:
    // 0x3113cc: 0xc12ca3c  jal         func_4B28F0
label_3113d0:
    if (ctx->pc == 0x3113D0u) {
        ctx->pc = 0x3113D0u;
            // 0x3113d0: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x3113D4u;
        goto label_3113d4;
    }
    ctx->pc = 0x3113CCu;
    SET_GPR_U32(ctx, 31, 0x3113D4u);
    ctx->pc = 0x3113D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3113CCu;
            // 0x3113d0: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3113D4u; }
        if (ctx->pc != 0x3113D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3113D4u; }
        if (ctx->pc != 0x3113D4u) { return; }
    }
    ctx->pc = 0x3113D4u;
label_3113d4:
    // 0x3113d4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x3113d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3113d8:
    // 0x3113d8: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_3113dc:
    if (ctx->pc == 0x3113DCu) {
        ctx->pc = 0x3113DCu;
            // 0x3113dc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3113E0u;
        goto label_3113e0;
    }
    ctx->pc = 0x3113D8u;
    {
        const bool branch_taken_0x3113d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3113d8) {
            ctx->pc = 0x3113DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3113D8u;
            // 0x3113dc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31142Cu;
            goto label_31142c;
        }
    }
    ctx->pc = 0x3113E0u;
label_3113e0:
    // 0x3113e0: 0xc040180  jal         func_100600
label_3113e4:
    if (ctx->pc == 0x3113E4u) {
        ctx->pc = 0x3113E4u;
            // 0x3113e4: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x3113E8u;
        goto label_3113e8;
    }
    ctx->pc = 0x3113E0u;
    SET_GPR_U32(ctx, 31, 0x3113E8u);
    ctx->pc = 0x3113E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3113E0u;
            // 0x3113e4: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3113E8u; }
        if (ctx->pc != 0x3113E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3113E8u; }
        if (ctx->pc != 0x3113E8u) { return; }
    }
    ctx->pc = 0x3113E8u;
label_3113e8:
    // 0x3113e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3113ec:
    if (ctx->pc == 0x3113ECu) {
        ctx->pc = 0x3113ECu;
            // 0x3113ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3113F0u;
        goto label_3113f0;
    }
    ctx->pc = 0x3113E8u;
    {
        const bool branch_taken_0x3113e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3113ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3113E8u;
            // 0x3113ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113e8) {
            ctx->pc = 0x311424u;
            goto label_311424;
        }
    }
    ctx->pc = 0x3113F0u;
label_3113f0:
    // 0x3113f0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3113f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3113f4:
    // 0x3113f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3113f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3113f8:
    // 0x3113f8: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x3113f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_3113fc:
    // 0x3113fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3113fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311400:
    // 0x311400: 0xc10ca68  jal         func_4329A0
label_311404:
    if (ctx->pc == 0x311404u) {
        ctx->pc = 0x311404u;
            // 0x311404: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311408u;
        goto label_311408;
    }
    ctx->pc = 0x311400u;
    SET_GPR_U32(ctx, 31, 0x311408u);
    ctx->pc = 0x311404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311400u;
            // 0x311404: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311408u; }
        if (ctx->pc != 0x311408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311408u; }
        if (ctx->pc != 0x311408u) { return; }
    }
    ctx->pc = 0x311408u;
label_311408:
    // 0x311408: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x311408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_31140c:
    // 0x31140c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x31140cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_311410:
    // 0x311410: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x311410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_311414:
    // 0x311414: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x311414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_311418:
    // 0x311418: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x311418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_31141c:
    // 0x31141c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31141cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_311420:
    // 0x311420: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x311420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_311424:
    // 0x311424: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x311424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_311428:
    // 0x311428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x311428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31142c:
    // 0x31142c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31142cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_311430:
    // 0x311430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_311434:
    // 0x311434: 0x3e00008  jr          $ra
label_311438:
    if (ctx->pc == 0x311438u) {
        ctx->pc = 0x311438u;
            // 0x311438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x31143Cu;
        goto label_31143c;
    }
    ctx->pc = 0x311434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311434u;
            // 0x311438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31143Cu;
label_31143c:
    // 0x31143c: 0x0  nop
    ctx->pc = 0x31143cu;
    // NOP
label_311440:
    // 0x311440: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x311440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_311444:
    // 0x311444: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x311444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_311448:
    // 0x311448: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x311448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_31144c:
    // 0x31144c: 0x24a5ce30  addiu       $a1, $a1, -0x31D0
    ctx->pc = 0x31144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
label_311450:
    // 0x311450: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x311450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_311454:
    // 0x311454: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x311454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_311458:
    // 0x311458: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x311458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_31145c:
    // 0x31145c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_311460:
    // 0x311460: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x311460u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_311464:
    // 0x311464: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x311464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_311468:
    // 0x311468: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x311468u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_31146c:
    // 0x31146c: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x31146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_311470:
    // 0x311470: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x311470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_311474:
    // 0x311474: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x311474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_311478:
    // 0x311478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31147c:
    // 0x31147c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x31147cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_311480:
    // 0x311480: 0xc075728  jal         func_1D5CA0
label_311484:
    if (ctx->pc == 0x311484u) {
        ctx->pc = 0x311484u;
            // 0x311484: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311488u;
        goto label_311488;
    }
    ctx->pc = 0x311480u;
    SET_GPR_U32(ctx, 31, 0x311488u);
    ctx->pc = 0x311484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311480u;
            // 0x311484: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311488u; }
        if (ctx->pc != 0x311488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311488u; }
        if (ctx->pc != 0x311488u) { return; }
    }
    ctx->pc = 0x311488u;
label_311488:
    // 0x311488: 0x54400082  bnel        $v0, $zero, . + 4 + (0x82 << 2)
label_31148c:
    if (ctx->pc == 0x31148Cu) {
        ctx->pc = 0x31148Cu;
            // 0x31148c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x311490u;
        goto label_311490;
    }
    ctx->pc = 0x311488u;
    {
        const bool branch_taken_0x311488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311488) {
            ctx->pc = 0x31148Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311488u;
            // 0x31148c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311694u;
            goto label_311694;
        }
    }
    ctx->pc = 0x311490u;
label_311490:
    // 0x311490: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x311490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_311494:
    // 0x311494: 0x8e320d6c  lw          $s2, 0xD6C($s1)
    ctx->pc = 0x311494u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_311498:
    // 0x311498: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x311498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_31149c:
    // 0x31149c: 0x320f809  jalr        $t9
label_3114a0:
    if (ctx->pc == 0x3114A0u) {
        ctx->pc = 0x3114A0u;
            // 0x3114a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3114A4u;
        goto label_3114a4;
    }
    ctx->pc = 0x31149Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3114A4u);
        ctx->pc = 0x3114A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31149Cu;
            // 0x3114a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3114A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3114A4u; }
            if (ctx->pc != 0x3114A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3114A4u;
label_3114a4:
    // 0x3114a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3114a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3114a8:
    // 0x3114a8: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x3114a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3114ac:
    // 0x3114ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3114acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3114b0:
    // 0x3114b0: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x3114b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_3114b4:
    // 0x3114b4: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x3114b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3114b8:
    // 0x3114b8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3114b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_3114bc:
    // 0x3114bc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3114bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3114c0:
    // 0x3114c0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3114c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3114c4:
    // 0x3114c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3114c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3114c8:
    // 0x3114c8: 0x4600a102  mul.s       $f4, $f20, $f0
    ctx->pc = 0x3114c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3114cc:
    // 0x3114cc: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x3114ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
label_3114d0:
    // 0x3114d0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3114d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_3114d4:
    // 0x3114d4: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x3114d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3114d8:
    // 0x3114d8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3114d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3114dc:
    // 0x3114dc: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x3114dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
label_3114e0:
    // 0x3114e0: 0x46002818  adda.s      $f5, $f0
    ctx->pc = 0x3114e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_3114e4:
    // 0x3114e4: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x3114e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_3114e8:
    // 0x3114e8: 0x4604181c  madd.s      $f0, $f3, $f4
    ctx->pc = 0x3114e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_3114ec:
    // 0x3114ec: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x3114ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_3114f0:
    // 0x3114f0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3114f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3114f4:
    // 0x3114f4: 0xc6600060  lwc1        $f0, 0x60($s3)
    ctx->pc = 0x3114f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3114f8:
    // 0x3114f8: 0xc6230dbc  lwc1        $f3, 0xDBC($s1)
    ctx->pc = 0x3114f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3114fc:
    // 0x3114fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3114fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_311500:
    // 0x311500: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x311500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_311504:
    // 0x311504: 0x46002818  adda.s      $f5, $f0
    ctx->pc = 0x311504u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_311508:
    // 0x311508: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x311508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_31150c:
    // 0x31150c: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x31150cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_311510:
    // 0x311510: 0xe6600060  swc1        $f0, 0x60($s3)
    ctx->pc = 0x311510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
label_311514:
    // 0x311514: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x311514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311518:
    // 0x311518: 0xc0477a8  jal         func_11DEA0
label_31151c:
    if (ctx->pc == 0x31151Cu) {
        ctx->pc = 0x31151Cu;
            // 0x31151c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x311520u;
        goto label_311520;
    }
    ctx->pc = 0x311518u;
    SET_GPR_U32(ctx, 31, 0x311520u);
    ctx->pc = 0x31151Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311518u;
            // 0x31151c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311520u; }
        if (ctx->pc != 0x311520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311520u; }
        if (ctx->pc != 0x311520u) { return; }
    }
    ctx->pc = 0x311520u;
label_311520:
    // 0x311520: 0x3c0344e3  lui         $v1, 0x44E3
    ctx->pc = 0x311520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17635 << 16));
label_311524:
    // 0x311524: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x311524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_311528:
    // 0x311528: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x311528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_31152c:
    // 0x31152c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31152cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311530:
    // 0x311530: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x311530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_311534:
    // 0x311534: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x311534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311538:
    // 0x311538: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x311538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_31153c:
    // 0x31153c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31153cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_311540:
    // 0x311540: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x311540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_311544:
    // 0x311544: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x311544u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_311548:
    // 0x311548: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x311548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_31154c:
    // 0x31154c: 0x0  nop
    ctx->pc = 0x31154cu;
    // NOP
label_311550:
    // 0x311550: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x311550u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_311554:
    // 0x311554: 0x4614185d  msub.s      $f1, $f3, $f20
    ctx->pc = 0x311554u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
label_311558:
    // 0x311558: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x311558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_31155c:
    // 0x31155c: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x31155cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_311560:
    // 0x311560: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311560u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_311564:
    // 0x311564: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x311564u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_311568:
    // 0x311568: 0xc04cab0  jal         func_132AC0
label_31156c:
    if (ctx->pc == 0x31156Cu) {
        ctx->pc = 0x31156Cu;
            // 0x31156c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x311570u;
        goto label_311570;
    }
    ctx->pc = 0x311568u;
    SET_GPR_U32(ctx, 31, 0x311570u);
    ctx->pc = 0x31156Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311568u;
            // 0x31156c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311570u; }
        if (ctx->pc != 0x311570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311570u; }
        if (ctx->pc != 0x311570u) { return; }
    }
    ctx->pc = 0x311570u;
label_311570:
    // 0x311570: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x311570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_311574:
    // 0x311574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_311578:
    // 0x311578: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x311578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_31157c:
    // 0x31157c: 0x320f809  jalr        $t9
label_311580:
    if (ctx->pc == 0x311580u) {
        ctx->pc = 0x311580u;
            // 0x311580: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x311584u;
        goto label_311584;
    }
    ctx->pc = 0x31157Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x311584u);
        ctx->pc = 0x311580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31157Cu;
            // 0x311580: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x311584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x311584u; }
            if (ctx->pc != 0x311584u) { return; }
        }
        }
    }
    ctx->pc = 0x311584u;
label_311584:
    // 0x311584: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x311584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_311588:
    // 0x311588: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x311588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31158c:
    // 0x31158c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x31158cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_311590:
    // 0x311590: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x311590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_311594:
    // 0x311594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_311598:
    // 0x311598: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x311598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_31159c:
    // 0x31159c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x31159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3115a0:
    // 0x3115a0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3115a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3115a4:
    // 0x3115a4: 0xc04c72c  jal         func_131CB0
label_3115a8:
    if (ctx->pc == 0x3115A8u) {
        ctx->pc = 0x3115A8u;
            // 0x3115a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3115ACu;
        goto label_3115ac;
    }
    ctx->pc = 0x3115A4u;
    SET_GPR_U32(ctx, 31, 0x3115ACu);
    ctx->pc = 0x3115A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3115A4u;
            // 0x3115a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3115ACu; }
        if (ctx->pc != 0x3115ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3115ACu; }
        if (ctx->pc != 0x3115ACu) { return; }
    }
    ctx->pc = 0x3115ACu;
label_3115ac:
    // 0x3115ac: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x3115acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
label_3115b0:
    // 0x3115b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3115b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3115b4:
    // 0x3115b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3115b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3115b8:
    // 0x3115b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3115b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3115bc:
    // 0x3115bc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3115bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3115c0:
    // 0x3115c0: 0xc04cab0  jal         func_132AC0
label_3115c4:
    if (ctx->pc == 0x3115C4u) {
        ctx->pc = 0x3115C4u;
            // 0x3115c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3115C8u;
        goto label_3115c8;
    }
    ctx->pc = 0x3115C0u;
    SET_GPR_U32(ctx, 31, 0x3115C8u);
    ctx->pc = 0x3115C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3115C0u;
            // 0x3115c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3115C8u; }
        if (ctx->pc != 0x3115C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3115C8u; }
        if (ctx->pc != 0x3115C8u) { return; }
    }
    ctx->pc = 0x3115C8u;
label_3115c8:
    // 0x3115c8: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x3115c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3115cc:
    // 0x3115cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3115ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3115d0:
    // 0x3115d0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3115d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3115d4:
    // 0x3115d4: 0x320f809  jalr        $t9
label_3115d8:
    if (ctx->pc == 0x3115D8u) {
        ctx->pc = 0x3115D8u;
            // 0x3115d8: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x3115DCu;
        goto label_3115dc;
    }
    ctx->pc = 0x3115D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3115DCu);
        ctx->pc = 0x3115D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3115D4u;
            // 0x3115d8: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3115DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3115DCu; }
            if (ctx->pc != 0x3115DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3115DCu;
label_3115dc:
    // 0x3115dc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3115dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_3115e0:
    // 0x3115e0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3115e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3115e4:
    // 0x3115e4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3115e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3115e8:
    // 0x3115e8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3115e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3115ec:
    // 0x3115ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3115ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3115f0:
    // 0x3115f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3115f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3115f4:
    // 0x3115f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3115f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3115f8:
    // 0x3115f8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3115f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3115fc:
    // 0x3115fc: 0xc04c72c  jal         func_131CB0
label_311600:
    if (ctx->pc == 0x311600u) {
        ctx->pc = 0x311600u;
            // 0x311600: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311604u;
        goto label_311604;
    }
    ctx->pc = 0x3115FCu;
    SET_GPR_U32(ctx, 31, 0x311604u);
    ctx->pc = 0x311600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3115FCu;
            // 0x311600: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311604u; }
        if (ctx->pc != 0x311604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311604u; }
        if (ctx->pc != 0x311604u) { return; }
    }
    ctx->pc = 0x311604u;
label_311604:
    // 0x311604: 0xc0477a8  jal         func_11DEA0
label_311608:
    if (ctx->pc == 0x311608u) {
        ctx->pc = 0x311608u;
            // 0x311608: 0xc66c0060  lwc1        $f12, 0x60($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x31160Cu;
        goto label_31160c;
    }
    ctx->pc = 0x311604u;
    SET_GPR_U32(ctx, 31, 0x31160Cu);
    ctx->pc = 0x311608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311604u;
            // 0x311608: 0xc66c0060  lwc1        $f12, 0x60($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31160Cu; }
        if (ctx->pc != 0x31160Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31160Cu; }
        if (ctx->pc != 0x31160Cu) { return; }
    }
    ctx->pc = 0x31160Cu;
label_31160c:
    // 0x31160c: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x31160cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_311610:
    // 0x311610: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x311610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_311614:
    // 0x311614: 0x3444a800  ori         $a0, $v0, 0xA800
    ctx->pc = 0x311614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_311618:
    // 0x311618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x311618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31161c:
    // 0x31161c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x31161cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_311620:
    // 0x311620: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x311620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_311624:
    // 0x311624: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x311624u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_311628:
    // 0x311628: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x311628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31162c:
    // 0x31162c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31162cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_311630:
    // 0x311630: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_311634:
    // 0x311634: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x311634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_311638:
    // 0x311638: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x311638u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_31163c:
    // 0x31163c: 0x4614101d  msub.s      $f0, $f2, $f20
    ctx->pc = 0x31163cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
label_311640:
    // 0x311640: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x311640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_311644:
    // 0x311644: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311644u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_311648:
    // 0x311648: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x311648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_31164c:
    // 0x31164c: 0xc04cab0  jal         func_132AC0
label_311650:
    if (ctx->pc == 0x311650u) {
        ctx->pc = 0x311650u;
            // 0x311650: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311654u;
        goto label_311654;
    }
    ctx->pc = 0x31164Cu;
    SET_GPR_U32(ctx, 31, 0x311654u);
    ctx->pc = 0x311650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31164Cu;
            // 0x311650: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311654u; }
        if (ctx->pc != 0x311654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311654u; }
        if (ctx->pc != 0x311654u) { return; }
    }
    ctx->pc = 0x311654u;
label_311654:
    // 0x311654: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x311654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_311658:
    // 0x311658: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31165c:
    // 0x31165c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x31165cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_311660:
    // 0x311660: 0x320f809  jalr        $t9
label_311664:
    if (ctx->pc == 0x311664u) {
        ctx->pc = 0x311664u;
            // 0x311664: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x311668u;
        goto label_311668;
    }
    ctx->pc = 0x311660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x311668u);
        ctx->pc = 0x311664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311660u;
            // 0x311664: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x311668u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x311668u; }
            if (ctx->pc != 0x311668u) { return; }
        }
        }
    }
    ctx->pc = 0x311668u;
label_311668:
    // 0x311668: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x311668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_31166c:
    // 0x31166c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31166cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_311670:
    // 0x311670: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x311670u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_311674:
    // 0x311674: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x311674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_311678:
    // 0x311678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31167c:
    // 0x31167c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31167cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_311680:
    // 0x311680: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x311680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_311684:
    // 0x311684: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x311684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_311688:
    // 0x311688: 0xc04c72c  jal         func_131CB0
label_31168c:
    if (ctx->pc == 0x31168Cu) {
        ctx->pc = 0x31168Cu;
            // 0x31168c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311690u;
        goto label_311690;
    }
    ctx->pc = 0x311688u;
    SET_GPR_U32(ctx, 31, 0x311690u);
    ctx->pc = 0x31168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311688u;
            // 0x31168c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311690u; }
        if (ctx->pc != 0x311690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311690u; }
        if (ctx->pc != 0x311690u) { return; }
    }
    ctx->pc = 0x311690u;
label_311690:
    // 0x311690: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x311690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_311694:
    // 0x311694: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x311694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_311698:
    // 0x311698: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x311698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31169c:
    // 0x31169c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3116a0:
    // 0x3116a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3116a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3116a4:
    // 0x3116a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3116a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3116a8:
    // 0x3116a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3116a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3116ac:
    // 0x3116ac: 0x3e00008  jr          $ra
label_3116b0:
    if (ctx->pc == 0x3116B0u) {
        ctx->pc = 0x3116B0u;
            // 0x3116b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3116B4u;
        goto label_3116b4;
    }
    ctx->pc = 0x3116ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3116B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3116ACu;
            // 0x3116b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3116B4u;
label_3116b4:
    // 0x3116b4: 0x0  nop
    ctx->pc = 0x3116b4u;
    // NOP
label_3116b8:
    // 0x3116b8: 0x0  nop
    ctx->pc = 0x3116b8u;
    // NOP
label_3116bc:
    // 0x3116bc: 0x0  nop
    ctx->pc = 0x3116bcu;
    // NOP
label_3116c0:
    // 0x3116c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3116c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3116c4:
    // 0x3116c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3116c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3116c8:
    // 0x3116c8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3116c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3116cc:
    // 0x3116cc: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x3116ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3116d0:
    // 0x3116d0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x3116d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3116d4:
    // 0x3116d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3116d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3116d8:
    // 0x3116d8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3116d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3116dc:
    // 0x3116dc: 0x2484f768  addiu       $a0, $a0, -0x898
    ctx->pc = 0x3116dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965096));
label_3116e0:
    // 0x3116e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3116e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3116e4:
    // 0x3116e4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3116e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3116e8:
    // 0x3116e8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3116e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3116ec:
    // 0x3116ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3116ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3116f0:
    // 0x3116f0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3116f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_3116f4:
    // 0x3116f4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3116f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_3116f8:
    // 0x3116f8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x3116f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_3116fc:
    // 0x3116fc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3116fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_311700:
    // 0x311700: 0xc075128  jal         func_1D44A0
label_311704:
    if (ctx->pc == 0x311704u) {
        ctx->pc = 0x311704u;
            // 0x311704: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x311708u;
        goto label_311708;
    }
    ctx->pc = 0x311700u;
    SET_GPR_U32(ctx, 31, 0x311708u);
    ctx->pc = 0x311704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311700u;
            // 0x311704: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311708u; }
        if (ctx->pc != 0x311708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311708u; }
        if (ctx->pc != 0x311708u) { return; }
    }
    ctx->pc = 0x311708u;
label_311708:
    // 0x311708: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x311708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_31170c:
    // 0x31170c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x31170cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_311710:
    // 0x311710: 0x8c86f768  lw          $a2, -0x898($a0)
    ctx->pc = 0x311710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965096)));
label_311714:
    // 0x311714: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x311714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_311718:
    // 0x311718: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x311718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_31171c:
    // 0x31171c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x31171cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_311720:
    // 0x311720: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_311724:
    if (ctx->pc == 0x311724u) {
        ctx->pc = 0x311728u;
        goto label_311728;
    }
    ctx->pc = 0x311720u;
    {
        const bool branch_taken_0x311720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x311720) {
            ctx->pc = 0x311730u;
            goto label_311730;
        }
    }
    ctx->pc = 0x311728u;
label_311728:
    // 0x311728: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x311728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31172c:
    // 0x31172c: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x31172cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_311730:
    // 0x311730: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x311730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_311734:
    // 0x311734: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x311734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_311738:
    // 0x311738: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x311738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_31173c:
    // 0x31173c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x31173cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_311740:
    // 0x311740: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_311744:
    if (ctx->pc == 0x311744u) {
        ctx->pc = 0x311744u;
            // 0x311744: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x311748u;
        goto label_311748;
    }
    ctx->pc = 0x311740u;
    {
        const bool branch_taken_0x311740 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x311744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311740u;
            // 0x311744: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311740) {
            ctx->pc = 0x311750u;
            goto label_311750;
        }
    }
    ctx->pc = 0x311748u;
label_311748:
    // 0x311748: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x311748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31174c:
    // 0x31174c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x31174cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_311750:
    // 0x311750: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x311750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_311754:
    // 0x311754: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x311754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_311758:
    // 0x311758: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x311758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_31175c:
    // 0x31175c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x31175cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_311760:
    // 0x311760: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_311764:
    if (ctx->pc == 0x311764u) {
        ctx->pc = 0x311768u;
        goto label_311768;
    }
    ctx->pc = 0x311760u;
    {
        const bool branch_taken_0x311760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x311760) {
            ctx->pc = 0x311770u;
            goto label_311770;
        }
    }
    ctx->pc = 0x311768u;
label_311768:
    // 0x311768: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x311768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31176c:
    // 0x31176c: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x31176cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_311770:
    // 0x311770: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x311770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_311774:
    // 0x311774: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x311774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_311778:
    // 0x311778: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x311778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_31177c:
    // 0x31177c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x31177cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_311780:
    // 0x311780: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_311784:
    if (ctx->pc == 0x311784u) {
        ctx->pc = 0x311784u;
            // 0x311784: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x311788u;
        goto label_311788;
    }
    ctx->pc = 0x311780u;
    {
        const bool branch_taken_0x311780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x311780) {
            ctx->pc = 0x311784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311780u;
            // 0x311784: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311794u;
            goto label_311794;
        }
    }
    ctx->pc = 0x311788u;
label_311788:
    // 0x311788: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x311788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31178c:
    // 0x31178c: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x31178cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_311790:
    // 0x311790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x311790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_311794:
    // 0x311794: 0x3e00008  jr          $ra
label_311798:
    if (ctx->pc == 0x311798u) {
        ctx->pc = 0x311798u;
            // 0x311798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x31179Cu;
        goto label_31179c;
    }
    ctx->pc = 0x311794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311794u;
            // 0x311798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31179Cu;
label_31179c:
    // 0x31179c: 0x0  nop
    ctx->pc = 0x31179cu;
    // NOP
label_3117a0:
    // 0x3117a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3117a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3117a4:
    // 0x3117a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3117a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3117a8:
    // 0x3117a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3117a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3117ac:
    // 0x3117ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3117acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3117b0:
    // 0x3117b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3117b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3117b4:
    // 0x3117b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3117b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3117b8:
    // 0x3117b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3117b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3117bc:
    // 0x3117bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3117bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3117c0:
    // 0x3117c0: 0xc075740  jal         func_1D5D00
label_3117c4:
    if (ctx->pc == 0x3117C4u) {
        ctx->pc = 0x3117C4u;
            // 0x3117c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3117C8u;
        goto label_3117c8;
    }
    ctx->pc = 0x3117C0u;
    SET_GPR_U32(ctx, 31, 0x3117C8u);
    ctx->pc = 0x3117C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3117C0u;
            // 0x3117c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D00u;
    if (runtime->hasFunction(0x1D5D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D5D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3117C8u; }
        if (ctx->pc != 0x3117C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5D00_0x1d5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3117C8u; }
        if (ctx->pc != 0x3117C8u) { return; }
    }
    ctx->pc = 0x3117C8u;
label_3117c8:
    // 0x3117c8: 0x8eb00008  lw          $s0, 0x8($s5)
    ctx->pc = 0x3117c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3117cc:
    // 0x3117cc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3117ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3117d0:
    // 0x3117d0: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x3117d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_3117d4:
    // 0x3117d4: 0x54830046  bnel        $a0, $v1, . + 4 + (0x46 << 2)
label_3117d8:
    if (ctx->pc == 0x3117D8u) {
        ctx->pc = 0x3117D8u;
            // 0x3117d8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3117DCu;
        goto label_3117dc;
    }
    ctx->pc = 0x3117D4u;
    {
        const bool branch_taken_0x3117d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3117d4) {
            ctx->pc = 0x3117D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3117D4u;
            // 0x3117d8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3118F0u;
            goto label_3118f0;
        }
    }
    ctx->pc = 0x3117DCu;
label_3117dc:
    // 0x3117dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3117dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3117e0:
    // 0x3117e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3117e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3117e4:
    // 0x3117e4: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x3117e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3117e8:
    // 0x3117e8: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x3117e8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_3117ec:
    // 0x3117ec: 0x8c71e378  lw          $s1, -0x1C88($v1)
    ctx->pc = 0x3117ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3117f0:
    // 0x3117f0: 0x2673f768  addiu       $s3, $s3, -0x898
    ctx->pc = 0x3117f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965096));
label_3117f4:
    // 0x3117f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3117f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3117f8:
    // 0x3117f8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3117f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3117fc:
    // 0x3117fc: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x3117fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_311800:
    // 0x311800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_311804:
    // 0x311804: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x311804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_311808:
    // 0x311808: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x311808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_31180c:
    // 0x31180c: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x31180cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_311810:
    // 0x311810: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x311810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_311814:
    // 0x311814: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x311814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_311818:
    // 0x311818: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x311818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_31181c:
    // 0x31181c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x31181cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_311820:
    // 0x311820: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x311820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_311824:
    // 0x311824: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x311824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_311828:
    // 0x311828: 0xc04e4a4  jal         func_139290
label_31182c:
    if (ctx->pc == 0x31182Cu) {
        ctx->pc = 0x31182Cu;
            // 0x31182c: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x311830u;
        goto label_311830;
    }
    ctx->pc = 0x311828u;
    SET_GPR_U32(ctx, 31, 0x311830u);
    ctx->pc = 0x31182Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311828u;
            // 0x31182c: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311830u; }
        if (ctx->pc != 0x311830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311830u; }
        if (ctx->pc != 0x311830u) { return; }
    }
    ctx->pc = 0x311830u;
label_311830:
    // 0x311830: 0x8eb90054  lw          $t9, 0x54($s5)
    ctx->pc = 0x311830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_311834:
    // 0x311834: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x311834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_311838:
    // 0x311838: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x311838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_31183c:
    // 0x31183c: 0x320f809  jalr        $t9
label_311840:
    if (ctx->pc == 0x311840u) {
        ctx->pc = 0x311840u;
            // 0x311840: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x311844u;
        goto label_311844;
    }
    ctx->pc = 0x31183Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x311844u);
        ctx->pc = 0x311840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31183Cu;
            // 0x311840: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x311844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x311844u; }
            if (ctx->pc != 0x311844u) { return; }
        }
        }
    }
    ctx->pc = 0x311844u;
label_311844:
    // 0x311844: 0x8e030550  lw          $v1, 0x550($s0)
    ctx->pc = 0x311844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_311848:
    // 0x311848: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x311848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_31184c:
    // 0x31184c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x31184cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_311850:
    // 0x311850: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x311850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_311854:
    // 0x311854: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x311854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_311858:
    // 0x311858: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x311858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31185c:
    // 0x31185c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31185cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_311860:
    // 0x311860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_311864:
    // 0x311864: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x311864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_311868:
    // 0x311868: 0xc0517b0  jal         func_145EC0
label_31186c:
    if (ctx->pc == 0x31186Cu) {
        ctx->pc = 0x31186Cu;
            // 0x31186c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311870u;
        goto label_311870;
    }
    ctx->pc = 0x311868u;
    SET_GPR_U32(ctx, 31, 0x311870u);
    ctx->pc = 0x31186Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311868u;
            // 0x31186c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EC0u;
    if (runtime->hasFunction(0x145EC0u)) {
        auto targetFn = runtime->lookupFunction(0x145EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311870u; }
        if (ctx->pc != 0x311870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EC0_0x145ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311870u; }
        if (ctx->pc != 0x311870u) { return; }
    }
    ctx->pc = 0x311870u;
label_311870:
    // 0x311870: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x311870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_311874:
    // 0x311874: 0x26050890  addiu       $a1, $s0, 0x890
    ctx->pc = 0x311874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_311878:
    // 0x311878: 0xc04cd60  jal         func_133580
label_31187c:
    if (ctx->pc == 0x31187Cu) {
        ctx->pc = 0x31187Cu;
            // 0x31187c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x311880u;
        goto label_311880;
    }
    ctx->pc = 0x311878u;
    SET_GPR_U32(ctx, 31, 0x311880u);
    ctx->pc = 0x31187Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311878u;
            // 0x31187c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311880u; }
        if (ctx->pc != 0x311880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311880u; }
        if (ctx->pc != 0x311880u) { return; }
    }
    ctx->pc = 0x311880u;
label_311880:
    // 0x311880: 0x92020e3d  lbu         $v0, 0xE3D($s0)
    ctx->pc = 0x311880u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3645)));
label_311884:
    // 0x311884: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x311884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_311888:
    // 0x311888: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x311888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_31188c:
    // 0x31188c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x31188cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_311890:
    // 0x311890: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x311890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_311894:
    // 0x311894: 0xc04cd60  jal         func_133580
label_311898:
    if (ctx->pc == 0x311898u) {
        ctx->pc = 0x311898u;
            // 0x311898: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x31189Cu;
        goto label_31189c;
    }
    ctx->pc = 0x311894u;
    SET_GPR_U32(ctx, 31, 0x31189Cu);
    ctx->pc = 0x311898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311894u;
            // 0x311898: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31189Cu; }
        if (ctx->pc != 0x31189Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31189Cu; }
        if (ctx->pc != 0x31189Cu) { return; }
    }
    ctx->pc = 0x31189Cu;
label_31189c:
    // 0x31189c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x31189cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3118a0:
    // 0x3118a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3118a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3118a4:
    // 0x3118a4: 0xc04cd60  jal         func_133580
label_3118a8:
    if (ctx->pc == 0x3118A8u) {
        ctx->pc = 0x3118A8u;
            // 0x3118a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3118ACu;
        goto label_3118ac;
    }
    ctx->pc = 0x3118A4u;
    SET_GPR_U32(ctx, 31, 0x3118ACu);
    ctx->pc = 0x3118A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3118A4u;
            // 0x3118a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118ACu; }
        if (ctx->pc != 0x3118ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118ACu; }
        if (ctx->pc != 0x3118ACu) { return; }
    }
    ctx->pc = 0x3118ACu;
label_3118ac:
    // 0x3118ac: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3118acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3118b0:
    // 0x3118b0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3118b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3118b4:
    // 0x3118b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3118b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3118b8:
    // 0x3118b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3118b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3118bc:
    // 0x3118bc: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x3118bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3118c0:
    // 0x3118c0: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x3118c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_3118c4:
    // 0x3118c4: 0xc04cfcc  jal         func_133F30
label_3118c8:
    if (ctx->pc == 0x3118C8u) {
        ctx->pc = 0x3118C8u;
            // 0x3118c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3118CCu;
        goto label_3118cc;
    }
    ctx->pc = 0x3118C4u;
    SET_GPR_U32(ctx, 31, 0x3118CCu);
    ctx->pc = 0x3118C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3118C4u;
            // 0x3118c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118CCu; }
        if (ctx->pc != 0x3118CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118CCu; }
        if (ctx->pc != 0x3118CCu) { return; }
    }
    ctx->pc = 0x3118CCu;
label_3118cc:
    // 0x3118cc: 0xc04e738  jal         func_139CE0
label_3118d0:
    if (ctx->pc == 0x3118D0u) {
        ctx->pc = 0x3118D0u;
            // 0x3118d0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x3118D4u;
        goto label_3118d4;
    }
    ctx->pc = 0x3118CCu;
    SET_GPR_U32(ctx, 31, 0x3118D4u);
    ctx->pc = 0x3118D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3118CCu;
            // 0x3118d0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118D4u; }
        if (ctx->pc != 0x3118D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118D4u; }
        if (ctx->pc != 0x3118D4u) { return; }
    }
    ctx->pc = 0x3118D4u;
label_3118d4:
    // 0x3118d4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3118d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3118d8:
    // 0x3118d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3118d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3118dc:
    // 0x3118dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3118dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3118e0:
    // 0x3118e0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3118e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3118e4:
    // 0x3118e4: 0xc050044  jal         func_140110
label_3118e8:
    if (ctx->pc == 0x3118E8u) {
        ctx->pc = 0x3118E8u;
            // 0x3118e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3118ECu;
        goto label_3118ec;
    }
    ctx->pc = 0x3118E4u;
    SET_GPR_U32(ctx, 31, 0x3118ECu);
    ctx->pc = 0x3118E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3118E4u;
            // 0x3118e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118ECu; }
        if (ctx->pc != 0x3118ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118ECu; }
        if (ctx->pc != 0x3118ECu) { return; }
    }
    ctx->pc = 0x3118ECu;
label_3118ec:
    // 0x3118ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3118ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3118f0:
    // 0x3118f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3118f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3118f4:
    // 0x3118f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3118f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3118f8:
    // 0x3118f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3118f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3118fc:
    // 0x3118fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3118fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311900:
    // 0x311900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x311900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_311904:
    // 0x311904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_311908:
    // 0x311908: 0x3e00008  jr          $ra
label_31190c:
    if (ctx->pc == 0x31190Cu) {
        ctx->pc = 0x31190Cu;
            // 0x31190c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x311910u;
        goto label_311910;
    }
    ctx->pc = 0x311908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31190Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311908u;
            // 0x31190c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311910u;
label_311910:
    // 0x311910: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x311910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
label_311914:
    // 0x311914: 0x3e00008  jr          $ra
label_311918:
    if (ctx->pc == 0x311918u) {
        ctx->pc = 0x311918u;
            // 0x311918: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->pc = 0x31191Cu;
        goto label_31191c;
    }
    ctx->pc = 0x311914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311914u;
            // 0x311918: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31191Cu;
label_31191c:
    // 0x31191c: 0x0  nop
    ctx->pc = 0x31191cu;
    // NOP
label_311920:
    // 0x311920: 0x3e00008  jr          $ra
label_311924:
    if (ctx->pc == 0x311924u) {
        ctx->pc = 0x311928u;
        goto label_311928;
    }
    ctx->pc = 0x311920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311928u;
label_311928:
    // 0x311928: 0x0  nop
    ctx->pc = 0x311928u;
    // NOP
label_31192c:
    // 0x31192c: 0x0  nop
    ctx->pc = 0x31192cu;
    // NOP
label_311930:
    // 0x311930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x311930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_311934:
    // 0x311934: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x311934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_311938:
    // 0x311938: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x311938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_31193c:
    // 0x31193c: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x31193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_311940:
    // 0x311940: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x311940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_311944:
    // 0x311944: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x311944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_311948:
    // 0x311948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x311948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31194c:
    // 0x31194c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_311950:
    // 0x311950: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x311950u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_311954:
    // 0x311954: 0x820311ad  lb          $v1, 0x11AD($s0)
    ctx->pc = 0x311954u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4525)));
label_311958:
    // 0x311958: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x311958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31195c:
    // 0x31195c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_311960:
    // 0x311960: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x311960u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_311964:
    // 0x311964: 0xc075830  jal         func_1D60C0
label_311968:
    if (ctx->pc == 0x311968u) {
        ctx->pc = 0x311968u;
            // 0x311968: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31196Cu;
        goto label_31196c;
    }
    ctx->pc = 0x311964u;
    SET_GPR_U32(ctx, 31, 0x31196Cu);
    ctx->pc = 0x311968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311964u;
            // 0x311968: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D60C0u;
    if (runtime->hasFunction(0x1D60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D60C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31196Cu; }
        if (ctx->pc != 0x31196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D60C0_0x1d60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31196Cu; }
        if (ctx->pc != 0x31196Cu) { return; }
    }
    ctx->pc = 0x31196Cu;
label_31196c:
    // 0x31196c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31196cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_311970:
    // 0x311970: 0x5043001a  beql        $v0, $v1, . + 4 + (0x1A << 2)
label_311974:
    if (ctx->pc == 0x311974u) {
        ctx->pc = 0x311974u;
            // 0x311974: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x311978u;
        goto label_311978;
    }
    ctx->pc = 0x311970u;
    {
        const bool branch_taken_0x311970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x311970) {
            ctx->pc = 0x311974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311970u;
            // 0x311974: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3119DCu;
            goto label_3119dc;
        }
    }
    ctx->pc = 0x311978u;
label_311978:
    // 0x311978: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x311978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31197c:
    // 0x31197c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_311980:
    if (ctx->pc == 0x311980u) {
        ctx->pc = 0x311984u;
        goto label_311984;
    }
    ctx->pc = 0x31197Cu;
    {
        const bool branch_taken_0x31197c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31197c) {
            ctx->pc = 0x31198Cu;
            goto label_31198c;
        }
    }
    ctx->pc = 0x311984u;
label_311984:
    // 0x311984: 0x10000042  b           . + 4 + (0x42 << 2)
label_311988:
    if (ctx->pc == 0x311988u) {
        ctx->pc = 0x311988u;
            // 0x311988: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x31198Cu;
        goto label_31198c;
    }
    ctx->pc = 0x311984u;
    {
        const bool branch_taken_0x311984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311984u;
            // 0x311988: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311984) {
            ctx->pc = 0x311A90u;
            goto label_311a90;
        }
    }
    ctx->pc = 0x31198Cu;
label_31198c:
    // 0x31198c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31198cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_311990:
    // 0x311990: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x311990u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_311994:
    // 0x311994: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x311994u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_311998:
    // 0x311998: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x311998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_31199c:
    // 0x31199c: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x31199cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_3119a0:
    // 0x3119a0: 0x26070ef0  addiu       $a3, $s0, 0xEF0
    ctx->pc = 0x3119a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3824));
label_3119a4:
    // 0x3119a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3119a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3119a8:
    // 0x3119a8: 0xc0bb404  jal         func_2ED010
label_3119ac:
    if (ctx->pc == 0x3119ACu) {
        ctx->pc = 0x3119ACu;
            // 0x3119ac: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3119B0u;
        goto label_3119b0;
    }
    ctx->pc = 0x3119A8u;
    SET_GPR_U32(ctx, 31, 0x3119B0u);
    ctx->pc = 0x3119ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3119A8u;
            // 0x3119ac: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3119B0u; }
        if (ctx->pc != 0x3119B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3119B0u; }
        if (ctx->pc != 0x3119B0u) { return; }
    }
    ctx->pc = 0x3119B0u;
label_3119b0:
    // 0x3119b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3119b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3119b4:
    // 0x3119b4: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x3119b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_3119b8:
    // 0x3119b8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3119b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3119bc:
    // 0x3119bc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3119bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3119c0:
    // 0x3119c0: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x3119c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_3119c4:
    // 0x3119c4: 0x26070ef0  addiu       $a3, $s0, 0xEF0
    ctx->pc = 0x3119c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3824));
label_3119c8:
    // 0x3119c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3119c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3119cc:
    // 0x3119cc: 0xc0bb404  jal         func_2ED010
label_3119d0:
    if (ctx->pc == 0x3119D0u) {
        ctx->pc = 0x3119D0u;
            // 0x3119d0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3119D4u;
        goto label_3119d4;
    }
    ctx->pc = 0x3119CCu;
    SET_GPR_U32(ctx, 31, 0x3119D4u);
    ctx->pc = 0x3119D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3119CCu;
            // 0x3119d0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3119D4u; }
        if (ctx->pc != 0x3119D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3119D4u; }
        if (ctx->pc != 0x3119D4u) { return; }
    }
    ctx->pc = 0x3119D4u;
label_3119d4:
    // 0x3119d4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_3119d8:
    if (ctx->pc == 0x3119D8u) {
        ctx->pc = 0x3119DCu;
        goto label_3119dc;
    }
    ctx->pc = 0x3119D4u;
    {
        const bool branch_taken_0x3119d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3119d4) {
            ctx->pc = 0x311A8Cu;
            goto label_311a8c;
        }
    }
    ctx->pc = 0x3119DCu;
label_3119dc:
    // 0x3119dc: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x3119dcu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3119e0:
    // 0x3119e0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3119e4:
    if (ctx->pc == 0x3119E4u) {
        ctx->pc = 0x3119E4u;
            // 0x3119e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3119E8u;
        goto label_3119e8;
    }
    ctx->pc = 0x3119E0u;
    {
        const bool branch_taken_0x3119e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3119E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3119E0u;
            // 0x3119e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119e0) {
            ctx->pc = 0x3119F8u;
            goto label_3119f8;
        }
    }
    ctx->pc = 0x3119E8u;
label_3119e8:
    // 0x3119e8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3119e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3119ec:
    // 0x3119ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3119f0:
    if (ctx->pc == 0x3119F0u) {
        ctx->pc = 0x3119F4u;
        goto label_3119f4;
    }
    ctx->pc = 0x3119ECu;
    {
        const bool branch_taken_0x3119ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3119ec) {
            ctx->pc = 0x3119F8u;
            goto label_3119f8;
        }
    }
    ctx->pc = 0x3119F4u;
label_3119f4:
    // 0x3119f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3119f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3119f8:
    // 0x3119f8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3119fc:
    if (ctx->pc == 0x3119FCu) {
        ctx->pc = 0x311A00u;
        goto label_311a00;
    }
    ctx->pc = 0x3119F8u;
    {
        const bool branch_taken_0x3119f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3119f8) {
            ctx->pc = 0x311A14u;
            goto label_311a14;
        }
    }
    ctx->pc = 0x311A00u;
label_311a00:
    // 0x311a00: 0xc075eb4  jal         func_1D7AD0
label_311a04:
    if (ctx->pc == 0x311A04u) {
        ctx->pc = 0x311A04u;
            // 0x311a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311A08u;
        goto label_311a08;
    }
    ctx->pc = 0x311A00u;
    SET_GPR_U32(ctx, 31, 0x311A08u);
    ctx->pc = 0x311A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311A00u;
            // 0x311a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311A08u; }
        if (ctx->pc != 0x311A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311A08u; }
        if (ctx->pc != 0x311A08u) { return; }
    }
    ctx->pc = 0x311A08u;
label_311a08:
    // 0x311a08: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_311a0c:
    if (ctx->pc == 0x311A0Cu) {
        ctx->pc = 0x311A10u;
        goto label_311a10;
    }
    ctx->pc = 0x311A08u;
    {
        const bool branch_taken_0x311a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311a08) {
            ctx->pc = 0x311A14u;
            goto label_311a14;
        }
    }
    ctx->pc = 0x311A10u;
label_311a10:
    // 0x311a10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x311a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311a14:
    // 0x311a14: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_311a18:
    if (ctx->pc == 0x311A18u) {
        ctx->pc = 0x311A18u;
            // 0x311a18: 0x3c02002e  lui         $v0, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
        ctx->pc = 0x311A1Cu;
        goto label_311a1c;
    }
    ctx->pc = 0x311A14u;
    {
        const bool branch_taken_0x311a14 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x311a14) {
            ctx->pc = 0x311A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311A14u;
            // 0x311a18: 0x3c02002e  lui         $v0, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311A84u;
            goto label_311a84;
        }
    }
    ctx->pc = 0x311A1Cu;
label_311a1c:
    // 0x311a1c: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x311a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_311a20:
    // 0x311a20: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x311a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_311a24:
    // 0x311a24: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_311a28:
    if (ctx->pc == 0x311A28u) {
        ctx->pc = 0x311A2Cu;
        goto label_311a2c;
    }
    ctx->pc = 0x311A24u;
    {
        const bool branch_taken_0x311a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x311a24) {
            ctx->pc = 0x311A80u;
            goto label_311a80;
        }
    }
    ctx->pc = 0x311A2Cu;
label_311a2c:
    // 0x311a2c: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x311a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_311a30:
    // 0x311a30: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x311a30u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_311a34:
    // 0x311a34: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_311a38:
    if (ctx->pc == 0x311A38u) {
        ctx->pc = 0x311A38u;
            // 0x311a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311A3Cu;
        goto label_311a3c;
    }
    ctx->pc = 0x311A34u;
    {
        const bool branch_taken_0x311a34 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x311A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311A34u;
            // 0x311a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a34) {
            ctx->pc = 0x311A4Cu;
            goto label_311a4c;
        }
    }
    ctx->pc = 0x311A3Cu;
label_311a3c:
    // 0x311a3c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x311a3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_311a40:
    // 0x311a40: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_311a44:
    if (ctx->pc == 0x311A44u) {
        ctx->pc = 0x311A48u;
        goto label_311a48;
    }
    ctx->pc = 0x311A40u;
    {
        const bool branch_taken_0x311a40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x311a40) {
            ctx->pc = 0x311A4Cu;
            goto label_311a4c;
        }
    }
    ctx->pc = 0x311A48u;
label_311a48:
    // 0x311a48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x311a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_311a4c:
    // 0x311a4c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_311a50:
    if (ctx->pc == 0x311A50u) {
        ctx->pc = 0x311A54u;
        goto label_311a54;
    }
    ctx->pc = 0x311A4Cu;
    {
        const bool branch_taken_0x311a4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x311a4c) {
            ctx->pc = 0x311A68u;
            goto label_311a68;
        }
    }
    ctx->pc = 0x311A54u;
label_311a54:
    // 0x311a54: 0xc075eb4  jal         func_1D7AD0
label_311a58:
    if (ctx->pc == 0x311A58u) {
        ctx->pc = 0x311A58u;
            // 0x311a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311A5Cu;
        goto label_311a5c;
    }
    ctx->pc = 0x311A54u;
    SET_GPR_U32(ctx, 31, 0x311A5Cu);
    ctx->pc = 0x311A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311A54u;
            // 0x311a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311A5Cu; }
        if (ctx->pc != 0x311A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311A5Cu; }
        if (ctx->pc != 0x311A5Cu) { return; }
    }
    ctx->pc = 0x311A5Cu;
label_311a5c:
    // 0x311a5c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_311a60:
    if (ctx->pc == 0x311A60u) {
        ctx->pc = 0x311A64u;
        goto label_311a64;
    }
    ctx->pc = 0x311A5Cu;
    {
        const bool branch_taken_0x311a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311a5c) {
            ctx->pc = 0x311A68u;
            goto label_311a68;
        }
    }
    ctx->pc = 0x311A64u;
label_311a64:
    // 0x311a64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x311a64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311a68:
    // 0x311a68: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_311a6c:
    if (ctx->pc == 0x311A6Cu) {
        ctx->pc = 0x311A70u;
        goto label_311a70;
    }
    ctx->pc = 0x311A68u;
    {
        const bool branch_taken_0x311a68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x311a68) {
            ctx->pc = 0x311A80u;
            goto label_311a80;
        }
    }
    ctx->pc = 0x311A70u;
label_311a70:
    // 0x311a70: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x311a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_311a74:
    // 0x311a74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x311a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_311a78:
    // 0x311a78: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_311a7c:
    if (ctx->pc == 0x311A7Cu) {
        ctx->pc = 0x311A80u;
        goto label_311a80;
    }
    ctx->pc = 0x311A78u;
    {
        const bool branch_taken_0x311a78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x311a78) {
            ctx->pc = 0x311A8Cu;
            goto label_311a8c;
        }
    }
    ctx->pc = 0x311A80u;
label_311a80:
    // 0x311a80: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x311a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
label_311a84:
    // 0x311a84: 0xc073234  jal         func_1CC8D0
label_311a88:
    if (ctx->pc == 0x311A88u) {
        ctx->pc = 0x311A88u;
            // 0x311a88: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x311A8Cu;
        goto label_311a8c;
    }
    ctx->pc = 0x311A84u;
    SET_GPR_U32(ctx, 31, 0x311A8Cu);
    ctx->pc = 0x311A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311A84u;
            // 0x311a88: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311A8Cu; }
        if (ctx->pc != 0x311A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311A8Cu; }
        if (ctx->pc != 0x311A8Cu) { return; }
    }
    ctx->pc = 0x311A8Cu;
label_311a8c:
    // 0x311a8c: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x311a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_311a90:
    // 0x311a90: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x311a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_311a94:
    // 0x311a94: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_311a98:
    if (ctx->pc == 0x311A98u) {
        ctx->pc = 0x311A98u;
            // 0x311a98: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x311A9Cu;
        goto label_311a9c;
    }
    ctx->pc = 0x311A94u;
    {
        const bool branch_taken_0x311a94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x311a94) {
            ctx->pc = 0x311A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311A94u;
            // 0x311a98: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311AB8u;
            goto label_311ab8;
        }
    }
    ctx->pc = 0x311A9Cu;
label_311a9c:
    // 0x311a9c: 0xc601118c  lwc1        $f1, 0x118C($s0)
    ctx->pc = 0x311a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_311aa0:
    // 0x311aa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_311aa4:
    // 0x311aa4: 0x0  nop
    ctx->pc = 0x311aa4u;
    // NOP
label_311aa8:
    // 0x311aa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x311aa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_311aac:
    // 0x311aac: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_311ab0:
    if (ctx->pc == 0x311AB0u) {
        ctx->pc = 0x311AB0u;
            // 0x311ab0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x311AB4u;
        goto label_311ab4;
    }
    ctx->pc = 0x311AACu;
    {
        const bool branch_taken_0x311aac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311aac) {
            ctx->pc = 0x311AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311AACu;
            // 0x311ab0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311AD8u;
            goto label_311ad8;
        }
    }
    ctx->pc = 0x311AB4u;
label_311ab4:
    // 0x311ab4: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x311ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_311ab8:
    // 0x311ab8: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_311abc:
    if (ctx->pc == 0x311ABCu) {
        ctx->pc = 0x311ABCu;
            // 0x311abc: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x311AC0u;
        goto label_311ac0;
    }
    ctx->pc = 0x311AB8u;
    {
        const bool branch_taken_0x311ab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x311ab8) {
            ctx->pc = 0x311ABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311AB8u;
            // 0x311abc: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311AD4u;
            goto label_311ad4;
        }
    }
    ctx->pc = 0x311AC0u;
label_311ac0:
    // 0x311ac0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x311ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_311ac4:
    // 0x311ac4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x311ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_311ac8:
    // 0x311ac8: 0xc057b7c  jal         func_15EDF0
label_311acc:
    if (ctx->pc == 0x311ACCu) {
        ctx->pc = 0x311ACCu;
            // 0x311acc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x311AD0u;
        goto label_311ad0;
    }
    ctx->pc = 0x311AC8u;
    SET_GPR_U32(ctx, 31, 0x311AD0u);
    ctx->pc = 0x311ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311AC8u;
            // 0x311acc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311AD0u; }
        if (ctx->pc != 0x311AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311AD0u; }
        if (ctx->pc != 0x311AD0u) { return; }
    }
    ctx->pc = 0x311AD0u;
label_311ad0:
    // 0x311ad0: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x311ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_311ad4:
    // 0x311ad4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x311ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_311ad8:
    // 0x311ad8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x311ad8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_311adc:
    // 0x311adc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x311adcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311ae0:
    // 0x311ae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x311ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_311ae4:
    // 0x311ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_311ae8:
    // 0x311ae8: 0x3e00008  jr          $ra
label_311aec:
    if (ctx->pc == 0x311AECu) {
        ctx->pc = 0x311AECu;
            // 0x311aec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x311AF0u;
        goto label_311af0;
    }
    ctx->pc = 0x311AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311AE8u;
            // 0x311aec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311AF0u;
label_311af0:
    // 0x311af0: 0x3e00008  jr          $ra
label_311af4:
    if (ctx->pc == 0x311AF4u) {
        ctx->pc = 0x311AF8u;
        goto label_311af8;
    }
    ctx->pc = 0x311AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311AF8u;
label_311af8:
    // 0x311af8: 0x0  nop
    ctx->pc = 0x311af8u;
    // NOP
label_311afc:
    // 0x311afc: 0x0  nop
    ctx->pc = 0x311afcu;
    // NOP
label_311b00:
    // 0x311b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x311b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_311b04:
    // 0x311b04: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x311b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_311b08:
    // 0x311b08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x311b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_311b0c:
    // 0x311b0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x311b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_311b10:
    // 0x311b10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x311b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_311b14:
    // 0x311b14: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x311b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_311b18:
    // 0x311b18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x311b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_311b1c:
    // 0x311b1c: 0xc12ca3c  jal         func_4B28F0
label_311b20:
    if (ctx->pc == 0x311B20u) {
        ctx->pc = 0x311B20u;
            // 0x311b20: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x311B24u;
        goto label_311b24;
    }
    ctx->pc = 0x311B1Cu;
    SET_GPR_U32(ctx, 31, 0x311B24u);
    ctx->pc = 0x311B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311B1Cu;
            // 0x311b20: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311B24u; }
        if (ctx->pc != 0x311B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311B24u; }
        if (ctx->pc != 0x311B24u) { return; }
    }
    ctx->pc = 0x311B24u;
label_311b24:
    // 0x311b24: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x311b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_311b28:
    // 0x311b28: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_311b2c:
    if (ctx->pc == 0x311B2Cu) {
        ctx->pc = 0x311B2Cu;
            // 0x311b2c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x311B30u;
        goto label_311b30;
    }
    ctx->pc = 0x311B28u;
    {
        const bool branch_taken_0x311b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x311b28) {
            ctx->pc = 0x311B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311B28u;
            // 0x311b2c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311B7Cu;
            goto label_311b7c;
        }
    }
    ctx->pc = 0x311B30u;
label_311b30:
    // 0x311b30: 0xc040180  jal         func_100600
label_311b34:
    if (ctx->pc == 0x311B34u) {
        ctx->pc = 0x311B34u;
            // 0x311b34: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x311B38u;
        goto label_311b38;
    }
    ctx->pc = 0x311B30u;
    SET_GPR_U32(ctx, 31, 0x311B38u);
    ctx->pc = 0x311B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311B30u;
            // 0x311b34: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311B38u; }
        if (ctx->pc != 0x311B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311B38u; }
        if (ctx->pc != 0x311B38u) { return; }
    }
    ctx->pc = 0x311B38u;
label_311b38:
    // 0x311b38: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_311b3c:
    if (ctx->pc == 0x311B3Cu) {
        ctx->pc = 0x311B3Cu;
            // 0x311b3c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311B40u;
        goto label_311b40;
    }
    ctx->pc = 0x311B38u;
    {
        const bool branch_taken_0x311b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311B38u;
            // 0x311b3c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b38) {
            ctx->pc = 0x311B74u;
            goto label_311b74;
        }
    }
    ctx->pc = 0x311B40u;
label_311b40:
    // 0x311b40: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x311b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_311b44:
    // 0x311b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_311b48:
    // 0x311b48: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x311b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_311b4c:
    // 0x311b4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x311b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311b50:
    // 0x311b50: 0xc10ca68  jal         func_4329A0
label_311b54:
    if (ctx->pc == 0x311B54u) {
        ctx->pc = 0x311B54u;
            // 0x311b54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311B58u;
        goto label_311b58;
    }
    ctx->pc = 0x311B50u;
    SET_GPR_U32(ctx, 31, 0x311B58u);
    ctx->pc = 0x311B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311B50u;
            // 0x311b54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311B58u; }
        if (ctx->pc != 0x311B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311B58u; }
        if (ctx->pc != 0x311B58u) { return; }
    }
    ctx->pc = 0x311B58u;
label_311b58:
    // 0x311b58: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x311b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_311b5c:
    // 0x311b5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x311b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_311b60:
    // 0x311b60: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x311b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_311b64:
    // 0x311b64: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x311b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_311b68:
    // 0x311b68: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x311b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_311b6c:
    // 0x311b6c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x311b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_311b70:
    // 0x311b70: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x311b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_311b74:
    // 0x311b74: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x311b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_311b78:
    // 0x311b78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x311b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_311b7c:
    // 0x311b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x311b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_311b80:
    // 0x311b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_311b84:
    // 0x311b84: 0x3e00008  jr          $ra
label_311b88:
    if (ctx->pc == 0x311B88u) {
        ctx->pc = 0x311B88u;
            // 0x311b88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x311B8Cu;
        goto label_311b8c;
    }
    ctx->pc = 0x311B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311B84u;
            // 0x311b88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311B8Cu;
label_311b8c:
    // 0x311b8c: 0x0  nop
    ctx->pc = 0x311b8cu;
    // NOP
label_311b90:
    // 0x311b90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x311b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_311b94:
    // 0x311b94: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x311b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_311b98:
    // 0x311b98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x311b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_311b9c:
    // 0x311b9c: 0x24a5cdf0  addiu       $a1, $a1, -0x3210
    ctx->pc = 0x311b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954480));
label_311ba0:
    // 0x311ba0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x311ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_311ba4:
    // 0x311ba4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x311ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_311ba8:
    // 0x311ba8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x311ba8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_311bac:
    // 0x311bac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x311bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_311bb0:
    // 0x311bb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x311bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_311bb4:
    // 0x311bb4: 0xc075728  jal         func_1D5CA0
label_311bb8:
    if (ctx->pc == 0x311BB8u) {
        ctx->pc = 0x311BB8u;
            // 0x311bb8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x311BBCu;
        goto label_311bbc;
    }
    ctx->pc = 0x311BB4u;
    SET_GPR_U32(ctx, 31, 0x311BBCu);
    ctx->pc = 0x311BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311BB4u;
            // 0x311bb8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BBCu; }
        if (ctx->pc != 0x311BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BBCu; }
        if (ctx->pc != 0x311BBCu) { return; }
    }
    ctx->pc = 0x311BBCu;
label_311bbc:
    // 0x311bbc: 0x544000a4  bnel        $v0, $zero, . + 4 + (0xA4 << 2)
label_311bc0:
    if (ctx->pc == 0x311BC0u) {
        ctx->pc = 0x311BC0u;
            // 0x311bc0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x311BC4u;
        goto label_311bc4;
    }
    ctx->pc = 0x311BBCu;
    {
        const bool branch_taken_0x311bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311bbc) {
            ctx->pc = 0x311BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311BBCu;
            // 0x311bc0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311E50u;
            goto label_311e50;
        }
    }
    ctx->pc = 0x311BC4u;
label_311bc4:
    // 0x311bc4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x311bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_311bc8:
    // 0x311bc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x311bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_311bcc:
    // 0x311bcc: 0xc075728  jal         func_1D5CA0
label_311bd0:
    if (ctx->pc == 0x311BD0u) {
        ctx->pc = 0x311BD0u;
            // 0x311bd0: 0x24a5cdf0  addiu       $a1, $a1, -0x3210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954480));
        ctx->pc = 0x311BD4u;
        goto label_311bd4;
    }
    ctx->pc = 0x311BCCu;
    SET_GPR_U32(ctx, 31, 0x311BD4u);
    ctx->pc = 0x311BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311BCCu;
            // 0x311bd0: 0x24a5cdf0  addiu       $a1, $a1, -0x3210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BD4u; }
        if (ctx->pc != 0x311BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BD4u; }
        if (ctx->pc != 0x311BD4u) { return; }
    }
    ctx->pc = 0x311BD4u;
label_311bd4:
    // 0x311bd4: 0x1440009d  bnez        $v0, . + 4 + (0x9D << 2)
label_311bd8:
    if (ctx->pc == 0x311BD8u) {
        ctx->pc = 0x311BDCu;
        goto label_311bdc;
    }
    ctx->pc = 0x311BD4u;
    {
        const bool branch_taken_0x311bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311bd4) {
            ctx->pc = 0x311E4Cu;
            goto label_311e4c;
        }
    }
    ctx->pc = 0x311BDCu;
label_311bdc:
    // 0x311bdc: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x311bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_311be0:
    // 0x311be0: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x311be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_311be4:
    // 0x311be4: 0x8e030550  lw          $v1, 0x550($s0)
    ctx->pc = 0x311be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_311be8:
    // 0x311be8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x311be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_311bec:
    // 0x311bec: 0x8e120d6c  lw          $s2, 0xD6C($s0)
    ctx->pc = 0x311becu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_311bf0:
    // 0x311bf0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x311bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_311bf4:
    // 0x311bf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x311bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_311bf8:
    // 0x311bf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_311bfc:
    // 0x311bfc: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x311bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_311c00:
    // 0x311c00: 0x320f809  jalr        $t9
label_311c04:
    if (ctx->pc == 0x311C04u) {
        ctx->pc = 0x311C04u;
            // 0x311c04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311C08u;
        goto label_311c08;
    }
    ctx->pc = 0x311C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x311C08u);
        ctx->pc = 0x311C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311C00u;
            // 0x311c04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x311C08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x311C08u; }
            if (ctx->pc != 0x311C08u) { return; }
        }
        }
    }
    ctx->pc = 0x311C08u;
label_311c08:
    // 0x311c08: 0x3c02c5aa  lui         $v0, 0xC5AA
    ctx->pc = 0x311c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50602 << 16));
label_311c0c:
    // 0x311c0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x311c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_311c10:
    // 0x311c10: 0x3443a800  ori         $v1, $v0, 0xA800
    ctx->pc = 0x311c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_311c14:
    // 0x311c14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x311c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311c18:
    // 0x311c18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x311c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_311c1c:
    // 0x311c1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_311c20:
    // 0x311c20: 0x0  nop
    ctx->pc = 0x311c20u;
    // NOP
label_311c24:
    // 0x311c24: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x311c24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_311c28:
    // 0x311c28: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x311c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_311c2c:
    // 0x311c2c: 0x3445999a  ori         $a1, $v0, 0x999A
    ctx->pc = 0x311c2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_311c30:
    // 0x311c30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x311c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_311c34:
    // 0x311c34: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x311c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_311c38:
    // 0x311c38: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x311c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_311c3c:
    // 0x311c3c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x311c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_311c40:
    // 0x311c40: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x311c40u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_311c44:
    // 0x311c44: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x311c44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_311c48:
    // 0x311c48: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311c48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_311c4c:
    // 0x311c4c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x311c4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_311c50:
    // 0x311c50: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x311c50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_311c54:
    // 0x311c54: 0xae6800c0  sw          $t0, 0xC0($s3)
    ctx->pc = 0x311c54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 8));
label_311c58:
    // 0x311c58: 0x8e050db0  lw          $a1, 0xDB0($s0)
    ctx->pc = 0x311c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_311c5c:
    // 0x311c5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x311c5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_311c60:
    // 0x311c60: 0x38a50011  xori        $a1, $a1, 0x11
    ctx->pc = 0x311c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)17);
label_311c64:
    // 0x311c64: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x311c64u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_311c68:
    // 0x311c68: 0x1052818  mult        $a1, $t0, $a1
    ctx->pc = 0x311c68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_311c6c:
    // 0x311c6c: 0xae6500c0  sw          $a1, 0xC0($s3)
    ctx->pc = 0x311c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 5));
label_311c70:
    // 0x311c70: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x311c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_311c74:
    // 0x311c74: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x311c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_311c78:
    // 0x311c78: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x311c78u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_311c7c:
    // 0x311c7c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x311c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_311c80:
    // 0x311c80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x311c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_311c84:
    // 0x311c84: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x311c84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_311c88:
    // 0x311c88: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x311c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_311c8c:
    // 0x311c8c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x311c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_311c90:
    // 0x311c90: 0x8e6500c0  lw          $a1, 0xC0($s3)
    ctx->pc = 0x311c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_311c94:
    // 0x311c94: 0x8c500034  lw          $s0, 0x34($v0)
    ctx->pc = 0x311c94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_311c98:
    // 0x311c98: 0xc04cab0  jal         func_132AC0
label_311c9c:
    if (ctx->pc == 0x311C9Cu) {
        ctx->pc = 0x311C9Cu;
            // 0x311c9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311CA0u;
        goto label_311ca0;
    }
    ctx->pc = 0x311C98u;
    SET_GPR_U32(ctx, 31, 0x311CA0u);
    ctx->pc = 0x311C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311C98u;
            // 0x311c9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CA0u; }
        if (ctx->pc != 0x311CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CA0u; }
        if (ctx->pc != 0x311CA0u) { return; }
    }
    ctx->pc = 0x311CA0u;
label_311ca0:
    // 0x311ca0: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x311ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_311ca4:
    // 0x311ca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_311ca8:
    // 0x311ca8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x311ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_311cac:
    // 0x311cac: 0x320f809  jalr        $t9
label_311cb0:
    if (ctx->pc == 0x311CB0u) {
        ctx->pc = 0x311CB0u;
            // 0x311cb0: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x311CB4u;
        goto label_311cb4;
    }
    ctx->pc = 0x311CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x311CB4u);
        ctx->pc = 0x311CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311CACu;
            // 0x311cb0: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x311CB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x311CB4u; }
            if (ctx->pc != 0x311CB4u) { return; }
        }
        }
    }
    ctx->pc = 0x311CB4u;
label_311cb4:
    // 0x311cb4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x311cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_311cb8:
    // 0x311cb8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x311cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_311cbc:
    // 0x311cbc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x311cbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_311cc0:
    // 0x311cc0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x311cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_311cc4:
    // 0x311cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_311cc8:
    // 0x311cc8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x311cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_311ccc:
    // 0x311ccc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x311cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_311cd0:
    // 0x311cd0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x311cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_311cd4:
    // 0x311cd4: 0xc04c72c  jal         func_131CB0
label_311cd8:
    if (ctx->pc == 0x311CD8u) {
        ctx->pc = 0x311CD8u;
            // 0x311cd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311CDCu;
        goto label_311cdc;
    }
    ctx->pc = 0x311CD4u;
    SET_GPR_U32(ctx, 31, 0x311CDCu);
    ctx->pc = 0x311CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311CD4u;
            // 0x311cd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CDCu; }
        if (ctx->pc != 0x311CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CDCu; }
        if (ctx->pc != 0x311CDCu) { return; }
    }
    ctx->pc = 0x311CDCu;
label_311cdc:
    // 0x311cdc: 0x3c02c160  lui         $v0, 0xC160
    ctx->pc = 0x311cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49504 << 16));
label_311ce0:
    // 0x311ce0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_311ce4:
    // 0x311ce4: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_311ce8:
    if (ctx->pc == 0x311CE8u) {
        ctx->pc = 0x311CE8u;
            // 0x311ce8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x311CECu;
        goto label_311cec;
    }
    ctx->pc = 0x311CE4u;
    {
        const bool branch_taken_0x311ce4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x311ce4) {
            ctx->pc = 0x311CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311CE4u;
            // 0x311ce8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311CF8u;
            goto label_311cf8;
        }
    }
    ctx->pc = 0x311CECu;
label_311cec:
    // 0x311cec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x311cecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_311cf0:
    // 0x311cf0: 0x10000007  b           . + 4 + (0x7 << 2)
label_311cf4:
    if (ctx->pc == 0x311CF4u) {
        ctx->pc = 0x311CF4u;
            // 0x311cf4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x311CF8u;
        goto label_311cf8;
    }
    ctx->pc = 0x311CF0u;
    {
        const bool branch_taken_0x311cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311CF0u;
            // 0x311cf4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311cf0) {
            ctx->pc = 0x311D10u;
            goto label_311d10;
        }
    }
    ctx->pc = 0x311CF8u;
label_311cf8:
    // 0x311cf8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x311cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_311cfc:
    // 0x311cfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x311cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_311d00:
    // 0x311d00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x311d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_311d04:
    // 0x311d04: 0x0  nop
    ctx->pc = 0x311d04u;
    // NOP
label_311d08:
    // 0x311d08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x311d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_311d0c:
    // 0x311d0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x311d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_311d10:
    // 0x311d10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311d10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_311d14:
    // 0x311d14: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x311d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_311d18:
    // 0x311d18: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x311d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_311d1c:
    // 0x311d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_311d20:
    // 0x311d20: 0xc0477a8  jal         func_11DEA0
label_311d24:
    if (ctx->pc == 0x311D24u) {
        ctx->pc = 0x311D24u;
            // 0x311d24: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x311D28u;
        goto label_311d28;
    }
    ctx->pc = 0x311D20u;
    SET_GPR_U32(ctx, 31, 0x311D28u);
    ctx->pc = 0x311D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311D20u;
            // 0x311d24: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311D28u; }
        if (ctx->pc != 0x311D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311D28u; }
        if (ctx->pc != 0x311D28u) { return; }
    }
    ctx->pc = 0x311D28u;
label_311d28:
    // 0x311d28: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x311d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_311d2c:
    // 0x311d2c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x311d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_311d30:
    // 0x311d30: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x311d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_311d34:
    // 0x311d34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x311d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311d38:
    // 0x311d38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_311d3c:
    // 0x311d3c: 0x0  nop
    ctx->pc = 0x311d3cu;
    // NOP
label_311d40:
    // 0x311d40: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x311d40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_311d44:
    // 0x311d44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x311d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_311d48:
    // 0x311d48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311d48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_311d4c:
    // 0x311d4c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x311d4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_311d50:
    // 0x311d50: 0xc04cab0  jal         func_132AC0
label_311d54:
    if (ctx->pc == 0x311D54u) {
        ctx->pc = 0x311D54u;
            // 0x311d54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311D58u;
        goto label_311d58;
    }
    ctx->pc = 0x311D50u;
    SET_GPR_U32(ctx, 31, 0x311D58u);
    ctx->pc = 0x311D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311D50u;
            // 0x311d54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311D58u; }
        if (ctx->pc != 0x311D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311D58u; }
        if (ctx->pc != 0x311D58u) { return; }
    }
    ctx->pc = 0x311D58u;
label_311d58:
    // 0x311d58: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x311d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_311d5c:
    // 0x311d5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_311d60:
    // 0x311d60: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x311d60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_311d64:
    // 0x311d64: 0x320f809  jalr        $t9
label_311d68:
    if (ctx->pc == 0x311D68u) {
        ctx->pc = 0x311D68u;
            // 0x311d68: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x311D6Cu;
        goto label_311d6c;
    }
    ctx->pc = 0x311D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x311D6Cu);
        ctx->pc = 0x311D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311D64u;
            // 0x311d68: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x311D6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x311D6Cu; }
            if (ctx->pc != 0x311D6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x311D6Cu;
label_311d6c:
    // 0x311d6c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x311d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_311d70:
    // 0x311d70: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x311d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_311d74:
    // 0x311d74: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x311d74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_311d78:
    // 0x311d78: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x311d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_311d7c:
    // 0x311d7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_311d80:
    // 0x311d80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x311d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_311d84:
    // 0x311d84: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x311d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_311d88:
    // 0x311d88: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x311d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_311d8c:
    // 0x311d8c: 0xc04c72c  jal         func_131CB0
label_311d90:
    if (ctx->pc == 0x311D90u) {
        ctx->pc = 0x311D90u;
            // 0x311d90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311D94u;
        goto label_311d94;
    }
    ctx->pc = 0x311D8Cu;
    SET_GPR_U32(ctx, 31, 0x311D94u);
    ctx->pc = 0x311D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311D8Cu;
            // 0x311d90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311D94u; }
        if (ctx->pc != 0x311D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311D94u; }
        if (ctx->pc != 0x311D94u) { return; }
    }
    ctx->pc = 0x311D94u;
label_311d94:
    // 0x311d94: 0x3c02c1e0  lui         $v0, 0xC1E0
    ctx->pc = 0x311d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49632 << 16));
label_311d98:
    // 0x311d98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_311d9c:
    // 0x311d9c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_311da0:
    if (ctx->pc == 0x311DA0u) {
        ctx->pc = 0x311DA0u;
            // 0x311da0: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x311DA4u;
        goto label_311da4;
    }
    ctx->pc = 0x311D9Cu;
    {
        const bool branch_taken_0x311d9c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x311d9c) {
            ctx->pc = 0x311DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x311D9Cu;
            // 0x311da0: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x311DB0u;
            goto label_311db0;
        }
    }
    ctx->pc = 0x311DA4u;
label_311da4:
    // 0x311da4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x311da4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_311da8:
    // 0x311da8: 0x10000007  b           . + 4 + (0x7 << 2)
label_311dac:
    if (ctx->pc == 0x311DACu) {
        ctx->pc = 0x311DACu;
            // 0x311dac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x311DB0u;
        goto label_311db0;
    }
    ctx->pc = 0x311DA8u;
    {
        const bool branch_taken_0x311da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311DA8u;
            // 0x311dac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311da8) {
            ctx->pc = 0x311DC8u;
            goto label_311dc8;
        }
    }
    ctx->pc = 0x311DB0u;
label_311db0:
    // 0x311db0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x311db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_311db4:
    // 0x311db4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x311db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_311db8:
    // 0x311db8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x311db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_311dbc:
    // 0x311dbc: 0x0  nop
    ctx->pc = 0x311dbcu;
    // NOP
label_311dc0:
    // 0x311dc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x311dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_311dc4:
    // 0x311dc4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x311dc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_311dc8:
    // 0x311dc8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x311dc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_311dcc:
    // 0x311dcc: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x311dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_311dd0:
    // 0x311dd0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x311dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_311dd4:
    // 0x311dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_311dd8:
    // 0x311dd8: 0xc0477a8  jal         func_11DEA0
label_311ddc:
    if (ctx->pc == 0x311DDCu) {
        ctx->pc = 0x311DDCu;
            // 0x311ddc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x311DE0u;
        goto label_311de0;
    }
    ctx->pc = 0x311DD8u;
    SET_GPR_U32(ctx, 31, 0x311DE0u);
    ctx->pc = 0x311DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311DD8u;
            // 0x311ddc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311DE0u; }
        if (ctx->pc != 0x311DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311DE0u; }
        if (ctx->pc != 0x311DE0u) { return; }
    }
    ctx->pc = 0x311DE0u;
label_311de0:
    // 0x311de0: 0x3c0245ff  lui         $v0, 0x45FF
    ctx->pc = 0x311de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17919 << 16));
label_311de4:
    // 0x311de4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x311de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_311de8:
    // 0x311de8: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x311de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
label_311dec:
    // 0x311dec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x311decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311df0:
    // 0x311df0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_311df4:
    // 0x311df4: 0x0  nop
    ctx->pc = 0x311df4u;
    // NOP
label_311df8:
    // 0x311df8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x311df8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_311dfc:
    // 0x311dfc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x311dfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_311e00:
    // 0x311e00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311e00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_311e04:
    // 0x311e04: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x311e04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_311e08:
    // 0x311e08: 0xc04cab0  jal         func_132AC0
label_311e0c:
    if (ctx->pc == 0x311E0Cu) {
        ctx->pc = 0x311E0Cu;
            // 0x311e0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311E10u;
        goto label_311e10;
    }
    ctx->pc = 0x311E08u;
    SET_GPR_U32(ctx, 31, 0x311E10u);
    ctx->pc = 0x311E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311E08u;
            // 0x311e0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311E10u; }
        if (ctx->pc != 0x311E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311E10u; }
        if (ctx->pc != 0x311E10u) { return; }
    }
    ctx->pc = 0x311E10u;
label_311e10:
    // 0x311e10: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x311e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_311e14:
    // 0x311e14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_311e18:
    // 0x311e18: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x311e18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_311e1c:
    // 0x311e1c: 0x320f809  jalr        $t9
label_311e20:
    if (ctx->pc == 0x311E20u) {
        ctx->pc = 0x311E20u;
            // 0x311e20: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x311E24u;
        goto label_311e24;
    }
    ctx->pc = 0x311E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x311E24u);
        ctx->pc = 0x311E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311E1Cu;
            // 0x311e20: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x311E24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x311E24u; }
            if (ctx->pc != 0x311E24u) { return; }
        }
        }
    }
    ctx->pc = 0x311E24u;
label_311e24:
    // 0x311e24: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x311e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_311e28:
    // 0x311e28: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x311e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_311e2c:
    // 0x311e2c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x311e2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_311e30:
    // 0x311e30: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x311e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_311e34:
    // 0x311e34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_311e38:
    // 0x311e38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x311e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_311e3c:
    // 0x311e3c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x311e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_311e40:
    // 0x311e40: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x311e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_311e44:
    // 0x311e44: 0xc04c72c  jal         func_131CB0
label_311e48:
    if (ctx->pc == 0x311E48u) {
        ctx->pc = 0x311E48u;
            // 0x311e48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311E4Cu;
        goto label_311e4c;
    }
    ctx->pc = 0x311E44u;
    SET_GPR_U32(ctx, 31, 0x311E4Cu);
    ctx->pc = 0x311E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311E44u;
            // 0x311e48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311E4Cu; }
        if (ctx->pc != 0x311E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311E4Cu; }
        if (ctx->pc != 0x311E4Cu) { return; }
    }
    ctx->pc = 0x311E4Cu;
label_311e4c:
    // 0x311e4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x311e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_311e50:
    // 0x311e50: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x311e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_311e54:
    // 0x311e54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x311e54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_311e58:
    // 0x311e58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x311e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_311e5c:
    // 0x311e5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x311e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311e60:
    // 0x311e60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x311e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_311e64:
    // 0x311e64: 0x3e00008  jr          $ra
label_311e68:
    if (ctx->pc == 0x311E68u) {
        ctx->pc = 0x311E68u;
            // 0x311e68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x311E6Cu;
        goto label_311e6c;
    }
    ctx->pc = 0x311E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311E64u;
            // 0x311e68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311E6Cu;
label_311e6c:
    // 0x311e6c: 0x0  nop
    ctx->pc = 0x311e6cu;
    // NOP
}
