#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D2C30
// Address: 0x3d2c30 - 0x3d3290
void sub_003D2C30_0x3d2c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2C30_0x3d2c30");
#endif

    switch (ctx->pc) {
        case 0x3d2c30u: goto label_3d2c30;
        case 0x3d2c34u: goto label_3d2c34;
        case 0x3d2c38u: goto label_3d2c38;
        case 0x3d2c3cu: goto label_3d2c3c;
        case 0x3d2c40u: goto label_3d2c40;
        case 0x3d2c44u: goto label_3d2c44;
        case 0x3d2c48u: goto label_3d2c48;
        case 0x3d2c4cu: goto label_3d2c4c;
        case 0x3d2c50u: goto label_3d2c50;
        case 0x3d2c54u: goto label_3d2c54;
        case 0x3d2c58u: goto label_3d2c58;
        case 0x3d2c5cu: goto label_3d2c5c;
        case 0x3d2c60u: goto label_3d2c60;
        case 0x3d2c64u: goto label_3d2c64;
        case 0x3d2c68u: goto label_3d2c68;
        case 0x3d2c6cu: goto label_3d2c6c;
        case 0x3d2c70u: goto label_3d2c70;
        case 0x3d2c74u: goto label_3d2c74;
        case 0x3d2c78u: goto label_3d2c78;
        case 0x3d2c7cu: goto label_3d2c7c;
        case 0x3d2c80u: goto label_3d2c80;
        case 0x3d2c84u: goto label_3d2c84;
        case 0x3d2c88u: goto label_3d2c88;
        case 0x3d2c8cu: goto label_3d2c8c;
        case 0x3d2c90u: goto label_3d2c90;
        case 0x3d2c94u: goto label_3d2c94;
        case 0x3d2c98u: goto label_3d2c98;
        case 0x3d2c9cu: goto label_3d2c9c;
        case 0x3d2ca0u: goto label_3d2ca0;
        case 0x3d2ca4u: goto label_3d2ca4;
        case 0x3d2ca8u: goto label_3d2ca8;
        case 0x3d2cacu: goto label_3d2cac;
        case 0x3d2cb0u: goto label_3d2cb0;
        case 0x3d2cb4u: goto label_3d2cb4;
        case 0x3d2cb8u: goto label_3d2cb8;
        case 0x3d2cbcu: goto label_3d2cbc;
        case 0x3d2cc0u: goto label_3d2cc0;
        case 0x3d2cc4u: goto label_3d2cc4;
        case 0x3d2cc8u: goto label_3d2cc8;
        case 0x3d2cccu: goto label_3d2ccc;
        case 0x3d2cd0u: goto label_3d2cd0;
        case 0x3d2cd4u: goto label_3d2cd4;
        case 0x3d2cd8u: goto label_3d2cd8;
        case 0x3d2cdcu: goto label_3d2cdc;
        case 0x3d2ce0u: goto label_3d2ce0;
        case 0x3d2ce4u: goto label_3d2ce4;
        case 0x3d2ce8u: goto label_3d2ce8;
        case 0x3d2cecu: goto label_3d2cec;
        case 0x3d2cf0u: goto label_3d2cf0;
        case 0x3d2cf4u: goto label_3d2cf4;
        case 0x3d2cf8u: goto label_3d2cf8;
        case 0x3d2cfcu: goto label_3d2cfc;
        case 0x3d2d00u: goto label_3d2d00;
        case 0x3d2d04u: goto label_3d2d04;
        case 0x3d2d08u: goto label_3d2d08;
        case 0x3d2d0cu: goto label_3d2d0c;
        case 0x3d2d10u: goto label_3d2d10;
        case 0x3d2d14u: goto label_3d2d14;
        case 0x3d2d18u: goto label_3d2d18;
        case 0x3d2d1cu: goto label_3d2d1c;
        case 0x3d2d20u: goto label_3d2d20;
        case 0x3d2d24u: goto label_3d2d24;
        case 0x3d2d28u: goto label_3d2d28;
        case 0x3d2d2cu: goto label_3d2d2c;
        case 0x3d2d30u: goto label_3d2d30;
        case 0x3d2d34u: goto label_3d2d34;
        case 0x3d2d38u: goto label_3d2d38;
        case 0x3d2d3cu: goto label_3d2d3c;
        case 0x3d2d40u: goto label_3d2d40;
        case 0x3d2d44u: goto label_3d2d44;
        case 0x3d2d48u: goto label_3d2d48;
        case 0x3d2d4cu: goto label_3d2d4c;
        case 0x3d2d50u: goto label_3d2d50;
        case 0x3d2d54u: goto label_3d2d54;
        case 0x3d2d58u: goto label_3d2d58;
        case 0x3d2d5cu: goto label_3d2d5c;
        case 0x3d2d60u: goto label_3d2d60;
        case 0x3d2d64u: goto label_3d2d64;
        case 0x3d2d68u: goto label_3d2d68;
        case 0x3d2d6cu: goto label_3d2d6c;
        case 0x3d2d70u: goto label_3d2d70;
        case 0x3d2d74u: goto label_3d2d74;
        case 0x3d2d78u: goto label_3d2d78;
        case 0x3d2d7cu: goto label_3d2d7c;
        case 0x3d2d80u: goto label_3d2d80;
        case 0x3d2d84u: goto label_3d2d84;
        case 0x3d2d88u: goto label_3d2d88;
        case 0x3d2d8cu: goto label_3d2d8c;
        case 0x3d2d90u: goto label_3d2d90;
        case 0x3d2d94u: goto label_3d2d94;
        case 0x3d2d98u: goto label_3d2d98;
        case 0x3d2d9cu: goto label_3d2d9c;
        case 0x3d2da0u: goto label_3d2da0;
        case 0x3d2da4u: goto label_3d2da4;
        case 0x3d2da8u: goto label_3d2da8;
        case 0x3d2dacu: goto label_3d2dac;
        case 0x3d2db0u: goto label_3d2db0;
        case 0x3d2db4u: goto label_3d2db4;
        case 0x3d2db8u: goto label_3d2db8;
        case 0x3d2dbcu: goto label_3d2dbc;
        case 0x3d2dc0u: goto label_3d2dc0;
        case 0x3d2dc4u: goto label_3d2dc4;
        case 0x3d2dc8u: goto label_3d2dc8;
        case 0x3d2dccu: goto label_3d2dcc;
        case 0x3d2dd0u: goto label_3d2dd0;
        case 0x3d2dd4u: goto label_3d2dd4;
        case 0x3d2dd8u: goto label_3d2dd8;
        case 0x3d2ddcu: goto label_3d2ddc;
        case 0x3d2de0u: goto label_3d2de0;
        case 0x3d2de4u: goto label_3d2de4;
        case 0x3d2de8u: goto label_3d2de8;
        case 0x3d2decu: goto label_3d2dec;
        case 0x3d2df0u: goto label_3d2df0;
        case 0x3d2df4u: goto label_3d2df4;
        case 0x3d2df8u: goto label_3d2df8;
        case 0x3d2dfcu: goto label_3d2dfc;
        case 0x3d2e00u: goto label_3d2e00;
        case 0x3d2e04u: goto label_3d2e04;
        case 0x3d2e08u: goto label_3d2e08;
        case 0x3d2e0cu: goto label_3d2e0c;
        case 0x3d2e10u: goto label_3d2e10;
        case 0x3d2e14u: goto label_3d2e14;
        case 0x3d2e18u: goto label_3d2e18;
        case 0x3d2e1cu: goto label_3d2e1c;
        case 0x3d2e20u: goto label_3d2e20;
        case 0x3d2e24u: goto label_3d2e24;
        case 0x3d2e28u: goto label_3d2e28;
        case 0x3d2e2cu: goto label_3d2e2c;
        case 0x3d2e30u: goto label_3d2e30;
        case 0x3d2e34u: goto label_3d2e34;
        case 0x3d2e38u: goto label_3d2e38;
        case 0x3d2e3cu: goto label_3d2e3c;
        case 0x3d2e40u: goto label_3d2e40;
        case 0x3d2e44u: goto label_3d2e44;
        case 0x3d2e48u: goto label_3d2e48;
        case 0x3d2e4cu: goto label_3d2e4c;
        case 0x3d2e50u: goto label_3d2e50;
        case 0x3d2e54u: goto label_3d2e54;
        case 0x3d2e58u: goto label_3d2e58;
        case 0x3d2e5cu: goto label_3d2e5c;
        case 0x3d2e60u: goto label_3d2e60;
        case 0x3d2e64u: goto label_3d2e64;
        case 0x3d2e68u: goto label_3d2e68;
        case 0x3d2e6cu: goto label_3d2e6c;
        case 0x3d2e70u: goto label_3d2e70;
        case 0x3d2e74u: goto label_3d2e74;
        case 0x3d2e78u: goto label_3d2e78;
        case 0x3d2e7cu: goto label_3d2e7c;
        case 0x3d2e80u: goto label_3d2e80;
        case 0x3d2e84u: goto label_3d2e84;
        case 0x3d2e88u: goto label_3d2e88;
        case 0x3d2e8cu: goto label_3d2e8c;
        case 0x3d2e90u: goto label_3d2e90;
        case 0x3d2e94u: goto label_3d2e94;
        case 0x3d2e98u: goto label_3d2e98;
        case 0x3d2e9cu: goto label_3d2e9c;
        case 0x3d2ea0u: goto label_3d2ea0;
        case 0x3d2ea4u: goto label_3d2ea4;
        case 0x3d2ea8u: goto label_3d2ea8;
        case 0x3d2eacu: goto label_3d2eac;
        case 0x3d2eb0u: goto label_3d2eb0;
        case 0x3d2eb4u: goto label_3d2eb4;
        case 0x3d2eb8u: goto label_3d2eb8;
        case 0x3d2ebcu: goto label_3d2ebc;
        case 0x3d2ec0u: goto label_3d2ec0;
        case 0x3d2ec4u: goto label_3d2ec4;
        case 0x3d2ec8u: goto label_3d2ec8;
        case 0x3d2eccu: goto label_3d2ecc;
        case 0x3d2ed0u: goto label_3d2ed0;
        case 0x3d2ed4u: goto label_3d2ed4;
        case 0x3d2ed8u: goto label_3d2ed8;
        case 0x3d2edcu: goto label_3d2edc;
        case 0x3d2ee0u: goto label_3d2ee0;
        case 0x3d2ee4u: goto label_3d2ee4;
        case 0x3d2ee8u: goto label_3d2ee8;
        case 0x3d2eecu: goto label_3d2eec;
        case 0x3d2ef0u: goto label_3d2ef0;
        case 0x3d2ef4u: goto label_3d2ef4;
        case 0x3d2ef8u: goto label_3d2ef8;
        case 0x3d2efcu: goto label_3d2efc;
        case 0x3d2f00u: goto label_3d2f00;
        case 0x3d2f04u: goto label_3d2f04;
        case 0x3d2f08u: goto label_3d2f08;
        case 0x3d2f0cu: goto label_3d2f0c;
        case 0x3d2f10u: goto label_3d2f10;
        case 0x3d2f14u: goto label_3d2f14;
        case 0x3d2f18u: goto label_3d2f18;
        case 0x3d2f1cu: goto label_3d2f1c;
        case 0x3d2f20u: goto label_3d2f20;
        case 0x3d2f24u: goto label_3d2f24;
        case 0x3d2f28u: goto label_3d2f28;
        case 0x3d2f2cu: goto label_3d2f2c;
        case 0x3d2f30u: goto label_3d2f30;
        case 0x3d2f34u: goto label_3d2f34;
        case 0x3d2f38u: goto label_3d2f38;
        case 0x3d2f3cu: goto label_3d2f3c;
        case 0x3d2f40u: goto label_3d2f40;
        case 0x3d2f44u: goto label_3d2f44;
        case 0x3d2f48u: goto label_3d2f48;
        case 0x3d2f4cu: goto label_3d2f4c;
        case 0x3d2f50u: goto label_3d2f50;
        case 0x3d2f54u: goto label_3d2f54;
        case 0x3d2f58u: goto label_3d2f58;
        case 0x3d2f5cu: goto label_3d2f5c;
        case 0x3d2f60u: goto label_3d2f60;
        case 0x3d2f64u: goto label_3d2f64;
        case 0x3d2f68u: goto label_3d2f68;
        case 0x3d2f6cu: goto label_3d2f6c;
        case 0x3d2f70u: goto label_3d2f70;
        case 0x3d2f74u: goto label_3d2f74;
        case 0x3d2f78u: goto label_3d2f78;
        case 0x3d2f7cu: goto label_3d2f7c;
        case 0x3d2f80u: goto label_3d2f80;
        case 0x3d2f84u: goto label_3d2f84;
        case 0x3d2f88u: goto label_3d2f88;
        case 0x3d2f8cu: goto label_3d2f8c;
        case 0x3d2f90u: goto label_3d2f90;
        case 0x3d2f94u: goto label_3d2f94;
        case 0x3d2f98u: goto label_3d2f98;
        case 0x3d2f9cu: goto label_3d2f9c;
        case 0x3d2fa0u: goto label_3d2fa0;
        case 0x3d2fa4u: goto label_3d2fa4;
        case 0x3d2fa8u: goto label_3d2fa8;
        case 0x3d2facu: goto label_3d2fac;
        case 0x3d2fb0u: goto label_3d2fb0;
        case 0x3d2fb4u: goto label_3d2fb4;
        case 0x3d2fb8u: goto label_3d2fb8;
        case 0x3d2fbcu: goto label_3d2fbc;
        case 0x3d2fc0u: goto label_3d2fc0;
        case 0x3d2fc4u: goto label_3d2fc4;
        case 0x3d2fc8u: goto label_3d2fc8;
        case 0x3d2fccu: goto label_3d2fcc;
        case 0x3d2fd0u: goto label_3d2fd0;
        case 0x3d2fd4u: goto label_3d2fd4;
        case 0x3d2fd8u: goto label_3d2fd8;
        case 0x3d2fdcu: goto label_3d2fdc;
        case 0x3d2fe0u: goto label_3d2fe0;
        case 0x3d2fe4u: goto label_3d2fe4;
        case 0x3d2fe8u: goto label_3d2fe8;
        case 0x3d2fecu: goto label_3d2fec;
        case 0x3d2ff0u: goto label_3d2ff0;
        case 0x3d2ff4u: goto label_3d2ff4;
        case 0x3d2ff8u: goto label_3d2ff8;
        case 0x3d2ffcu: goto label_3d2ffc;
        case 0x3d3000u: goto label_3d3000;
        case 0x3d3004u: goto label_3d3004;
        case 0x3d3008u: goto label_3d3008;
        case 0x3d300cu: goto label_3d300c;
        case 0x3d3010u: goto label_3d3010;
        case 0x3d3014u: goto label_3d3014;
        case 0x3d3018u: goto label_3d3018;
        case 0x3d301cu: goto label_3d301c;
        case 0x3d3020u: goto label_3d3020;
        case 0x3d3024u: goto label_3d3024;
        case 0x3d3028u: goto label_3d3028;
        case 0x3d302cu: goto label_3d302c;
        case 0x3d3030u: goto label_3d3030;
        case 0x3d3034u: goto label_3d3034;
        case 0x3d3038u: goto label_3d3038;
        case 0x3d303cu: goto label_3d303c;
        case 0x3d3040u: goto label_3d3040;
        case 0x3d3044u: goto label_3d3044;
        case 0x3d3048u: goto label_3d3048;
        case 0x3d304cu: goto label_3d304c;
        case 0x3d3050u: goto label_3d3050;
        case 0x3d3054u: goto label_3d3054;
        case 0x3d3058u: goto label_3d3058;
        case 0x3d305cu: goto label_3d305c;
        case 0x3d3060u: goto label_3d3060;
        case 0x3d3064u: goto label_3d3064;
        case 0x3d3068u: goto label_3d3068;
        case 0x3d306cu: goto label_3d306c;
        case 0x3d3070u: goto label_3d3070;
        case 0x3d3074u: goto label_3d3074;
        case 0x3d3078u: goto label_3d3078;
        case 0x3d307cu: goto label_3d307c;
        case 0x3d3080u: goto label_3d3080;
        case 0x3d3084u: goto label_3d3084;
        case 0x3d3088u: goto label_3d3088;
        case 0x3d308cu: goto label_3d308c;
        case 0x3d3090u: goto label_3d3090;
        case 0x3d3094u: goto label_3d3094;
        case 0x3d3098u: goto label_3d3098;
        case 0x3d309cu: goto label_3d309c;
        case 0x3d30a0u: goto label_3d30a0;
        case 0x3d30a4u: goto label_3d30a4;
        case 0x3d30a8u: goto label_3d30a8;
        case 0x3d30acu: goto label_3d30ac;
        case 0x3d30b0u: goto label_3d30b0;
        case 0x3d30b4u: goto label_3d30b4;
        case 0x3d30b8u: goto label_3d30b8;
        case 0x3d30bcu: goto label_3d30bc;
        case 0x3d30c0u: goto label_3d30c0;
        case 0x3d30c4u: goto label_3d30c4;
        case 0x3d30c8u: goto label_3d30c8;
        case 0x3d30ccu: goto label_3d30cc;
        case 0x3d30d0u: goto label_3d30d0;
        case 0x3d30d4u: goto label_3d30d4;
        case 0x3d30d8u: goto label_3d30d8;
        case 0x3d30dcu: goto label_3d30dc;
        case 0x3d30e0u: goto label_3d30e0;
        case 0x3d30e4u: goto label_3d30e4;
        case 0x3d30e8u: goto label_3d30e8;
        case 0x3d30ecu: goto label_3d30ec;
        case 0x3d30f0u: goto label_3d30f0;
        case 0x3d30f4u: goto label_3d30f4;
        case 0x3d30f8u: goto label_3d30f8;
        case 0x3d30fcu: goto label_3d30fc;
        case 0x3d3100u: goto label_3d3100;
        case 0x3d3104u: goto label_3d3104;
        case 0x3d3108u: goto label_3d3108;
        case 0x3d310cu: goto label_3d310c;
        case 0x3d3110u: goto label_3d3110;
        case 0x3d3114u: goto label_3d3114;
        case 0x3d3118u: goto label_3d3118;
        case 0x3d311cu: goto label_3d311c;
        case 0x3d3120u: goto label_3d3120;
        case 0x3d3124u: goto label_3d3124;
        case 0x3d3128u: goto label_3d3128;
        case 0x3d312cu: goto label_3d312c;
        case 0x3d3130u: goto label_3d3130;
        case 0x3d3134u: goto label_3d3134;
        case 0x3d3138u: goto label_3d3138;
        case 0x3d313cu: goto label_3d313c;
        case 0x3d3140u: goto label_3d3140;
        case 0x3d3144u: goto label_3d3144;
        case 0x3d3148u: goto label_3d3148;
        case 0x3d314cu: goto label_3d314c;
        case 0x3d3150u: goto label_3d3150;
        case 0x3d3154u: goto label_3d3154;
        case 0x3d3158u: goto label_3d3158;
        case 0x3d315cu: goto label_3d315c;
        case 0x3d3160u: goto label_3d3160;
        case 0x3d3164u: goto label_3d3164;
        case 0x3d3168u: goto label_3d3168;
        case 0x3d316cu: goto label_3d316c;
        case 0x3d3170u: goto label_3d3170;
        case 0x3d3174u: goto label_3d3174;
        case 0x3d3178u: goto label_3d3178;
        case 0x3d317cu: goto label_3d317c;
        case 0x3d3180u: goto label_3d3180;
        case 0x3d3184u: goto label_3d3184;
        case 0x3d3188u: goto label_3d3188;
        case 0x3d318cu: goto label_3d318c;
        case 0x3d3190u: goto label_3d3190;
        case 0x3d3194u: goto label_3d3194;
        case 0x3d3198u: goto label_3d3198;
        case 0x3d319cu: goto label_3d319c;
        case 0x3d31a0u: goto label_3d31a0;
        case 0x3d31a4u: goto label_3d31a4;
        case 0x3d31a8u: goto label_3d31a8;
        case 0x3d31acu: goto label_3d31ac;
        case 0x3d31b0u: goto label_3d31b0;
        case 0x3d31b4u: goto label_3d31b4;
        case 0x3d31b8u: goto label_3d31b8;
        case 0x3d31bcu: goto label_3d31bc;
        case 0x3d31c0u: goto label_3d31c0;
        case 0x3d31c4u: goto label_3d31c4;
        case 0x3d31c8u: goto label_3d31c8;
        case 0x3d31ccu: goto label_3d31cc;
        case 0x3d31d0u: goto label_3d31d0;
        case 0x3d31d4u: goto label_3d31d4;
        case 0x3d31d8u: goto label_3d31d8;
        case 0x3d31dcu: goto label_3d31dc;
        case 0x3d31e0u: goto label_3d31e0;
        case 0x3d31e4u: goto label_3d31e4;
        case 0x3d31e8u: goto label_3d31e8;
        case 0x3d31ecu: goto label_3d31ec;
        case 0x3d31f0u: goto label_3d31f0;
        case 0x3d31f4u: goto label_3d31f4;
        case 0x3d31f8u: goto label_3d31f8;
        case 0x3d31fcu: goto label_3d31fc;
        case 0x3d3200u: goto label_3d3200;
        case 0x3d3204u: goto label_3d3204;
        case 0x3d3208u: goto label_3d3208;
        case 0x3d320cu: goto label_3d320c;
        case 0x3d3210u: goto label_3d3210;
        case 0x3d3214u: goto label_3d3214;
        case 0x3d3218u: goto label_3d3218;
        case 0x3d321cu: goto label_3d321c;
        case 0x3d3220u: goto label_3d3220;
        case 0x3d3224u: goto label_3d3224;
        case 0x3d3228u: goto label_3d3228;
        case 0x3d322cu: goto label_3d322c;
        case 0x3d3230u: goto label_3d3230;
        case 0x3d3234u: goto label_3d3234;
        case 0x3d3238u: goto label_3d3238;
        case 0x3d323cu: goto label_3d323c;
        case 0x3d3240u: goto label_3d3240;
        case 0x3d3244u: goto label_3d3244;
        case 0x3d3248u: goto label_3d3248;
        case 0x3d324cu: goto label_3d324c;
        case 0x3d3250u: goto label_3d3250;
        case 0x3d3254u: goto label_3d3254;
        case 0x3d3258u: goto label_3d3258;
        case 0x3d325cu: goto label_3d325c;
        case 0x3d3260u: goto label_3d3260;
        case 0x3d3264u: goto label_3d3264;
        case 0x3d3268u: goto label_3d3268;
        case 0x3d326cu: goto label_3d326c;
        case 0x3d3270u: goto label_3d3270;
        case 0x3d3274u: goto label_3d3274;
        case 0x3d3278u: goto label_3d3278;
        case 0x3d327cu: goto label_3d327c;
        case 0x3d3280u: goto label_3d3280;
        case 0x3d3284u: goto label_3d3284;
        case 0x3d3288u: goto label_3d3288;
        case 0x3d328cu: goto label_3d328c;
        default: break;
    }

    ctx->pc = 0x3d2c30u;

label_3d2c30:
    // 0x3d2c30: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3d2c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3d2c34:
    // 0x3d2c34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3d2c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3d2c38:
    // 0x3d2c38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3d2c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3d2c3c:
    // 0x3d2c3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3d2c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3d2c40:
    // 0x3d2c40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d2c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3d2c44:
    // 0x3d2c44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d2c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3d2c48:
    // 0x3d2c48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d2c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d2c4c:
    // 0x3d2c4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d2c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d2c50:
    // 0x3d2c50: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3d2c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3d2c54:
    // 0x3d2c54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3d2c54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3d2c58:
    // 0x3d2c58: 0x265101a0  addiu       $s1, $s2, 0x1A0
    ctx->pc = 0x3d2c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
label_3d2c5c:
    // 0x3d2c5c: 0x949301f2  lhu         $s3, 0x1F2($a0)
    ctx->pc = 0x3d2c5cu;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 498)));
label_3d2c60:
    // 0x3d2c60: 0x26500170  addiu       $s0, $s2, 0x170
    ctx->pc = 0x3d2c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
label_3d2c64:
    // 0x3d2c64: 0x8c940050  lw          $s4, 0x50($a0)
    ctx->pc = 0x3d2c64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3d2c68:
    // 0x3d2c68: 0xc0dc9bc  jal         func_3726F0
label_3d2c6c:
    if (ctx->pc == 0x3D2C6Cu) {
        ctx->pc = 0x3D2C6Cu;
            // 0x3d2c6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D2C70u;
        goto label_3d2c70;
    }
    ctx->pc = 0x3D2C68u;
    SET_GPR_U32(ctx, 31, 0x3D2C70u);
    ctx->pc = 0x3D2C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2C68u;
            // 0x3d2c6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2C70u; }
        if (ctx->pc != 0x3D2C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2C70u; }
        if (ctx->pc != 0x3D2C70u) { return; }
    }
    ctx->pc = 0x3D2C70u;
label_3d2c70:
    // 0x3d2c70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d2c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d2c74:
    // 0x3d2c74: 0xc0dc9a0  jal         func_372680
label_3d2c78:
    if (ctx->pc == 0x3D2C78u) {
        ctx->pc = 0x3D2C78u;
            // 0x3d2c78: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x3D2C7Cu;
        goto label_3d2c7c;
    }
    ctx->pc = 0x3D2C74u;
    SET_GPR_U32(ctx, 31, 0x3D2C7Cu);
    ctx->pc = 0x3D2C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2C74u;
            // 0x3d2c78: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2C7Cu; }
        if (ctx->pc != 0x3D2C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2C7Cu; }
        if (ctx->pc != 0x3D2C7Cu) { return; }
    }
    ctx->pc = 0x3D2C7Cu;
label_3d2c7c:
    // 0x3d2c7c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3d2c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3d2c80:
    // 0x3d2c80: 0xc04cc04  jal         func_133010
label_3d2c84:
    if (ctx->pc == 0x3D2C84u) {
        ctx->pc = 0x3D2C84u;
            // 0x3d2c84: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x3D2C88u;
        goto label_3d2c88;
    }
    ctx->pc = 0x3D2C80u;
    SET_GPR_U32(ctx, 31, 0x3D2C88u);
    ctx->pc = 0x3D2C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2C80u;
            // 0x3d2c84: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2C88u; }
        if (ctx->pc != 0x3D2C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2C88u; }
        if (ctx->pc != 0x3D2C88u) { return; }
    }
    ctx->pc = 0x3D2C88u;
label_3d2c88:
    // 0x3d2c88: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x3d2c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d2c8c:
    // 0x3d2c8c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3d2c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3d2c90:
    // 0x3d2c90: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x3d2c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d2c94:
    // 0x3d2c94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d2c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d2c98:
    // 0x3d2c98: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3d2c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2c9c:
    // 0x3d2c9c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3d2c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2ca0:
    // 0x3d2ca0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x3d2ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3d2ca4:
    // 0x3d2ca4: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x3d2ca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_3d2ca8:
    // 0x3d2ca8: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x3d2ca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_3d2cac:
    // 0x3d2cac: 0xc04c720  jal         func_131C80
label_3d2cb0:
    if (ctx->pc == 0x3D2CB0u) {
        ctx->pc = 0x3D2CB0u;
            // 0x3d2cb0: 0xe7a300ec  swc1        $f3, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->pc = 0x3D2CB4u;
        goto label_3d2cb4;
    }
    ctx->pc = 0x3D2CACu;
    SET_GPR_U32(ctx, 31, 0x3D2CB4u);
    ctx->pc = 0x3D2CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2CACu;
            // 0x3d2cb0: 0xe7a300ec  swc1        $f3, 0xEC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2CB4u; }
        if (ctx->pc != 0x3D2CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2CB4u; }
        if (ctx->pc != 0x3D2CB4u) { return; }
    }
    ctx->pc = 0x3D2CB4u;
label_3d2cb4:
    // 0x3d2cb4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d2cb8:
    // 0x3d2cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d2cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d2cbc:
    // 0x3d2cbc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3d2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3d2cc0:
    // 0x3d2cc0: 0xc6400200  lwc1        $f0, 0x200($s2)
    ctx->pc = 0x3d2cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2cc4:
    // 0x3d2cc4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3d2cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2cc8:
    // 0x3d2cc8: 0xc0b8160  jal         func_2E0580
label_3d2ccc:
    if (ctx->pc == 0x3D2CCCu) {
        ctx->pc = 0x3D2CCCu;
            // 0x3d2ccc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3D2CD0u;
        goto label_3d2cd0;
    }
    ctx->pc = 0x3D2CC8u;
    SET_GPR_U32(ctx, 31, 0x3D2CD0u);
    ctx->pc = 0x3D2CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2CC8u;
            // 0x3d2ccc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2CD0u; }
        if (ctx->pc != 0x3D2CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2CD0u; }
        if (ctx->pc != 0x3D2CD0u) { return; }
    }
    ctx->pc = 0x3D2CD0u;
label_3d2cd0:
    // 0x3d2cd0: 0x96220052  lhu         $v0, 0x52($s1)
    ctx->pc = 0x3d2cd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
label_3d2cd4:
    // 0x3d2cd4: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x3d2cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_3d2cd8:
    // 0x3d2cd8: 0x50620028  beql        $v1, $v0, . + 4 + (0x28 << 2)
label_3d2cdc:
    if (ctx->pc == 0x3D2CDCu) {
        ctx->pc = 0x3D2CDCu;
            // 0x3d2cdc: 0x92420215  lbu         $v0, 0x215($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 533)));
        ctx->pc = 0x3D2CE0u;
        goto label_3d2ce0;
    }
    ctx->pc = 0x3D2CD8u;
    {
        const bool branch_taken_0x3d2cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d2cd8) {
            ctx->pc = 0x3D2CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2CD8u;
            // 0x3d2cdc: 0x92420215  lbu         $v0, 0x215($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 533)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2D7Cu;
            goto label_3d2d7c;
        }
    }
    ctx->pc = 0x3D2CE0u;
label_3d2ce0:
    // 0x3d2ce0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3d2ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d2ce4:
    // 0x3d2ce4: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x3d2ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_3d2ce8:
    // 0x3d2ce8: 0x320f809  jalr        $t9
label_3d2cec:
    if (ctx->pc == 0x3D2CECu) {
        ctx->pc = 0x3D2CECu;
            // 0x3d2cec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D2CF0u;
        goto label_3d2cf0;
    }
    ctx->pc = 0x3D2CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D2CF0u);
        ctx->pc = 0x3D2CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2CE8u;
            // 0x3d2cec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D2CF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D2CF0u; }
            if (ctx->pc != 0x3D2CF0u) { return; }
        }
        }
    }
    ctx->pc = 0x3D2CF0u;
label_3d2cf0:
    // 0x3d2cf0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3d2cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3d2cf4:
    // 0x3d2cf4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x3d2cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3d2cf8:
    // 0x3d2cf8: 0xc04cc90  jal         func_133240
label_3d2cfc:
    if (ctx->pc == 0x3D2CFCu) {
        ctx->pc = 0x3D2CFCu;
            // 0x3d2cfc: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3D2D00u;
        goto label_3d2d00;
    }
    ctx->pc = 0x3D2CF8u;
    SET_GPR_U32(ctx, 31, 0x3D2D00u);
    ctx->pc = 0x3D2CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2CF8u;
            // 0x3d2cfc: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2D00u; }
        if (ctx->pc != 0x3D2D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2D00u; }
        if (ctx->pc != 0x3D2D00u) { return; }
    }
    ctx->pc = 0x3D2D00u;
label_3d2d00:
    // 0x3d2d00: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x3d2d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2d04:
    // 0x3d2d04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d2d08:
    // 0x3d2d08: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x3d2d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3d2d0c:
    // 0x3d2d0c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3d2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3d2d10:
    // 0x3d2d10: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x3d2d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2d14:
    // 0x3d2d14: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x3d2d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_3d2d18:
    // 0x3d2d18: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x3d2d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3d2d1c:
    // 0x3d2d1c: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x3d2d1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3d2d20:
    // 0x3d2d20: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x3d2d20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3d2d24:
    // 0x3d2d24: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x3d2d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d2d28:
    // 0x3d2d28: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3d2d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3d2d2c:
    // 0x3d2d2c: 0x0  nop
    ctx->pc = 0x3d2d2cu;
    // NOP
label_3d2d30:
    // 0x3d2d30: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d2d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3d2d34:
    // 0x3d2d34: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x3d2d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3d2d38:
    // 0x3d2d38: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x3d2d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3d2d3c:
    // 0x3d2d3c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x3d2d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3d2d40:
    // 0x3d2d40: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d2d40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d2d44:
    // 0x3d2d44: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3d2d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3d2d48:
    // 0x3d2d48: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x3d2d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3d2d4c:
    // 0x3d2d4c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x3d2d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_3d2d50:
    // 0x3d2d50: 0x8e530050  lw          $s3, 0x50($s2)
    ctx->pc = 0x3d2d50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_3d2d54:
    // 0x3d2d54: 0xc088b74  jal         func_222DD0
label_3d2d58:
    if (ctx->pc == 0x3D2D58u) {
        ctx->pc = 0x3D2D58u;
            // 0x3d2d58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D2D5Cu;
        goto label_3d2d5c;
    }
    ctx->pc = 0x3D2D54u;
    SET_GPR_U32(ctx, 31, 0x3D2D5Cu);
    ctx->pc = 0x3D2D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2D54u;
            // 0x3d2d58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2D5Cu; }
        if (ctx->pc != 0x3D2D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2D5Cu; }
        if (ctx->pc != 0x3D2D5Cu) { return; }
    }
    ctx->pc = 0x3D2D5Cu;
label_3d2d5c:
    // 0x3d2d5c: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x3d2d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_3d2d60:
    // 0x3d2d60: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x3d2d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_3d2d64:
    // 0x3d2d64: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3d2d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3d2d68:
    // 0x3d2d68: 0x320f809  jalr        $t9
label_3d2d6c:
    if (ctx->pc == 0x3D2D6Cu) {
        ctx->pc = 0x3D2D6Cu;
            // 0x3d2d6c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3D2D70u;
        goto label_3d2d70;
    }
    ctx->pc = 0x3D2D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D2D70u);
        ctx->pc = 0x3D2D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2D68u;
            // 0x3d2d6c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D2D70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D2D70u; }
            if (ctx->pc != 0x3D2D70u) { return; }
        }
        }
    }
    ctx->pc = 0x3D2D70u;
label_3d2d70:
    // 0x3d2d70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d2d74:
    // 0x3d2d74: 0x10000027  b           . + 4 + (0x27 << 2)
label_3d2d78:
    if (ctx->pc == 0x3D2D78u) {
        ctx->pc = 0x3D2D78u;
            // 0x3d2d78: 0xa2420215  sb          $v0, 0x215($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 533), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3D2D7Cu;
        goto label_3d2d7c;
    }
    ctx->pc = 0x3D2D74u;
    {
        const bool branch_taken_0x3d2d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2D74u;
            // 0x3d2d78: 0xa2420215  sb          $v0, 0x215($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 533), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2d74) {
            ctx->pc = 0x3D2E14u;
            goto label_3d2e14;
        }
    }
    ctx->pc = 0x3D2D7Cu;
label_3d2d7c:
    // 0x3d2d7c: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_3d2d80:
    if (ctx->pc == 0x3D2D80u) {
        ctx->pc = 0x3D2D80u;
            // 0x3d2d80: 0x26440150  addiu       $a0, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->pc = 0x3D2D84u;
        goto label_3d2d84;
    }
    ctx->pc = 0x3D2D7Cu;
    {
        const bool branch_taken_0x3d2d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2d7c) {
            ctx->pc = 0x3D2D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2D7Cu;
            // 0x3d2d80: 0x26440150  addiu       $a0, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2E0Cu;
            goto label_3d2e0c;
        }
    }
    ctx->pc = 0x3D2D84u;
label_3d2d84:
    // 0x3d2d84: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d2d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3d2d88:
    // 0x3d2d88: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x3d2d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3d2d8c:
    // 0x3d2d8c: 0xc04cc90  jal         func_133240
label_3d2d90:
    if (ctx->pc == 0x3D2D90u) {
        ctx->pc = 0x3D2D90u;
            // 0x3d2d90: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3D2D94u;
        goto label_3d2d94;
    }
    ctx->pc = 0x3D2D8Cu;
    SET_GPR_U32(ctx, 31, 0x3D2D94u);
    ctx->pc = 0x3D2D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2D8Cu;
            // 0x3d2d90: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2D94u; }
        if (ctx->pc != 0x3D2D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2D94u; }
        if (ctx->pc != 0x3D2D94u) { return; }
    }
    ctx->pc = 0x3D2D94u;
label_3d2d94:
    // 0x3d2d94: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x3d2d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2d98:
    // 0x3d2d98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d2d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d2d9c:
    // 0x3d2d9c: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x3d2d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3d2da0:
    // 0x3d2da0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3d2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3d2da4:
    // 0x3d2da4: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x3d2da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2da8:
    // 0x3d2da8: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x3d2da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_3d2dac:
    // 0x3d2dac: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3d2dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3d2db0:
    // 0x3d2db0: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x3d2db0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3d2db4:
    // 0x3d2db4: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x3d2db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3d2db8:
    // 0x3d2db8: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x3d2db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d2dbc:
    // 0x3d2dbc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3d2dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3d2dc0:
    // 0x3d2dc0: 0x0  nop
    ctx->pc = 0x3d2dc0u;
    // NOP
label_3d2dc4:
    // 0x3d2dc4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3d2dc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3d2dc8:
    // 0x3d2dc8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3d2dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3d2dcc:
    // 0x3d2dcc: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x3d2dccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3d2dd0:
    // 0x3d2dd0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x3d2dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3d2dd4:
    // 0x3d2dd4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d2dd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d2dd8:
    // 0x3d2dd8: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3d2dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3d2ddc:
    // 0x3d2ddc: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x3d2ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3d2de0:
    // 0x3d2de0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x3d2de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_3d2de4:
    // 0x3d2de4: 0x8e530050  lw          $s3, 0x50($s2)
    ctx->pc = 0x3d2de4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_3d2de8:
    // 0x3d2de8: 0xc088b74  jal         func_222DD0
label_3d2dec:
    if (ctx->pc == 0x3D2DECu) {
        ctx->pc = 0x3D2DECu;
            // 0x3d2dec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D2DF0u;
        goto label_3d2df0;
    }
    ctx->pc = 0x3D2DE8u;
    SET_GPR_U32(ctx, 31, 0x3D2DF0u);
    ctx->pc = 0x3D2DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2DE8u;
            // 0x3d2dec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2DF0u; }
        if (ctx->pc != 0x3D2DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2DF0u; }
        if (ctx->pc != 0x3D2DF0u) { return; }
    }
    ctx->pc = 0x3D2DF0u;
label_3d2df0:
    // 0x3d2df0: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x3d2df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_3d2df4:
    // 0x3d2df4: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x3d2df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_3d2df8:
    // 0x3d2df8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3d2df8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3d2dfc:
    // 0x3d2dfc: 0x320f809  jalr        $t9
label_3d2e00:
    if (ctx->pc == 0x3D2E00u) {
        ctx->pc = 0x3D2E00u;
            // 0x3d2e00: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3D2E04u;
        goto label_3d2e04;
    }
    ctx->pc = 0x3D2DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D2E04u);
        ctx->pc = 0x3D2E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2DFCu;
            // 0x3d2e00: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D2E04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D2E04u; }
            if (ctx->pc != 0x3D2E04u) { return; }
        }
        }
    }
    ctx->pc = 0x3D2E04u;
label_3d2e04:
    // 0x3d2e04: 0xa2400215  sb          $zero, 0x215($s2)
    ctx->pc = 0x3d2e04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 533), (uint8_t)GPR_U32(ctx, 0));
label_3d2e08:
    // 0x3d2e08: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x3d2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_3d2e0c:
    // 0x3d2e0c: 0xc0c6278  jal         func_3189E0
label_3d2e10:
    if (ctx->pc == 0x3D2E10u) {
        ctx->pc = 0x3D2E14u;
        goto label_3d2e14;
    }
    ctx->pc = 0x3D2E0Cu;
    SET_GPR_U32(ctx, 31, 0x3D2E14u);
    ctx->pc = 0x3189E0u;
    if (runtime->hasFunction(0x3189E0u)) {
        auto targetFn = runtime->lookupFunction(0x3189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2E14u; }
        if (ctx->pc != 0x3D2E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003189E0_0x3189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2E14u; }
        if (ctx->pc != 0x3D2E14u) { return; }
    }
    ctx->pc = 0x3D2E14u;
label_3d2e14:
    // 0x3d2e14: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3d2e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_3d2e18:
    // 0x3d2e18: 0xc04c720  jal         func_131C80
label_3d2e1c:
    if (ctx->pc == 0x3D2E1Cu) {
        ctx->pc = 0x3D2E1Cu;
            // 0x3d2e1c: 0x26450170  addiu       $a1, $s2, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
        ctx->pc = 0x3D2E20u;
        goto label_3d2e20;
    }
    ctx->pc = 0x3D2E18u;
    SET_GPR_U32(ctx, 31, 0x3D2E20u);
    ctx->pc = 0x3D2E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2E18u;
            // 0x3d2e1c: 0x26450170  addiu       $a1, $s2, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2E20u; }
        if (ctx->pc != 0x3D2E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2E20u; }
        if (ctx->pc != 0x3D2E20u) { return; }
    }
    ctx->pc = 0x3D2E20u;
label_3d2e20:
    // 0x3d2e20: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x3d2e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d2e24:
    // 0x3d2e24: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x3d2e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2e28:
    // 0x3d2e28: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x3d2e28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d2e2c:
    // 0x3d2e2c: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_3d2e30:
    if (ctx->pc == 0x3D2E30u) {
        ctx->pc = 0x3D2E30u;
            // 0x3d2e30: 0xc602000c  lwc1        $f2, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3D2E34u;
        goto label_3d2e34;
    }
    ctx->pc = 0x3D2E2Cu;
    {
        const bool branch_taken_0x3d2e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d2e2c) {
            ctx->pc = 0x3D2E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2E2Cu;
            // 0x3d2e30: 0xc602000c  lwc1        $f2, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2E74u;
            goto label_3d2e74;
        }
    }
    ctx->pc = 0x3D2E34u;
label_3d2e34:
    // 0x3d2e34: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3d2e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2e38:
    // 0x3d2e38: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x3d2e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2e3c:
    // 0x3d2e3c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3d2e3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d2e40:
    // 0x3d2e40: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_3d2e44:
    if (ctx->pc == 0x3D2E44u) {
        ctx->pc = 0x3D2E48u;
        goto label_3d2e48;
    }
    ctx->pc = 0x3D2E40u;
    {
        const bool branch_taken_0x3d2e40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d2e40) {
            ctx->pc = 0x3D2E70u;
            goto label_3d2e70;
        }
    }
    ctx->pc = 0x3D2E48u;
label_3d2e48:
    // 0x3d2e48: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3d2e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2e4c:
    // 0x3d2e4c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3d2e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2e50:
    // 0x3d2e50: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3d2e50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d2e54:
    // 0x3d2e54: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3d2e58:
    if (ctx->pc == 0x3D2E58u) {
        ctx->pc = 0x3D2E5Cu;
        goto label_3d2e5c;
    }
    ctx->pc = 0x3D2E54u;
    {
        const bool branch_taken_0x3d2e54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d2e54) {
            ctx->pc = 0x3D2E70u;
            goto label_3d2e70;
        }
    }
    ctx->pc = 0x3D2E5Cu;
label_3d2e5c:
    // 0x3d2e5c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3d2e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2e60:
    // 0x3d2e60: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x3d2e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2e64:
    // 0x3d2e64: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3d2e64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d2e68:
    // 0x3d2e68: 0x45030051  bc1tl       . + 4 + (0x51 << 2)
label_3d2e6c:
    if (ctx->pc == 0x3D2E6Cu) {
        ctx->pc = 0x3D2E6Cu;
            // 0x3d2e6c: 0x92430214  lbu         $v1, 0x214($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 532)));
        ctx->pc = 0x3D2E70u;
        goto label_3d2e70;
    }
    ctx->pc = 0x3D2E68u;
    {
        const bool branch_taken_0x3d2e68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d2e68) {
            ctx->pc = 0x3D2E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2E68u;
            // 0x3d2e6c: 0x92430214  lbu         $v1, 0x214($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 532)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2FB0u;
            goto label_3d2fb0;
        }
    }
    ctx->pc = 0x3D2E70u;
label_3d2e70:
    // 0x3d2e70: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x3d2e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d2e74:
    // 0x3d2e74: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3d2e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3d2e78:
    // 0x3d2e78: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3d2e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2e7c:
    // 0x3d2e7c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3d2e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2e80:
    // 0x3d2e80: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x3d2e80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3d2e84:
    // 0x3d2e84: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3d2e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3d2e88:
    // 0x3d2e88: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x3d2e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3d2e8c:
    // 0x3d2e8c: 0xc0d8a80  jal         func_362A00
label_3d2e90:
    if (ctx->pc == 0x3D2E90u) {
        ctx->pc = 0x3D2E90u;
            // 0x3d2e90: 0xe7a2007c  swc1        $f2, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->pc = 0x3D2E94u;
        goto label_3d2e94;
    }
    ctx->pc = 0x3D2E8Cu;
    SET_GPR_U32(ctx, 31, 0x3D2E94u);
    ctx->pc = 0x3D2E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2E8Cu;
            // 0x3d2e90: 0xe7a2007c  swc1        $f2, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2E94u; }
        if (ctx->pc != 0x3D2E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2E94u; }
        if (ctx->pc != 0x3D2E94u) { return; }
    }
    ctx->pc = 0x3D2E94u;
label_3d2e94:
    // 0x3d2e94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d2e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2e98:
    // 0x3d2e98: 0xc0d8a80  jal         func_362A00
label_3d2e9c:
    if (ctx->pc == 0x3D2E9Cu) {
        ctx->pc = 0x3D2E9Cu;
            // 0x3d2e9c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3D2EA0u;
        goto label_3d2ea0;
    }
    ctx->pc = 0x3D2E98u;
    SET_GPR_U32(ctx, 31, 0x3D2EA0u);
    ctx->pc = 0x3D2E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2E98u;
            // 0x3d2e9c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2EA0u; }
        if (ctx->pc != 0x3D2EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2EA0u; }
        if (ctx->pc != 0x3D2EA0u) { return; }
    }
    ctx->pc = 0x3D2EA0u;
label_3d2ea0:
    // 0x3d2ea0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d2ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d2ea4:
    // 0x3d2ea4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3d2ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2ea8:
    // 0x3d2ea8: 0xc0d8a6c  jal         func_3629B0
label_3d2eac:
    if (ctx->pc == 0x3D2EACu) {
        ctx->pc = 0x3D2EACu;
            // 0x3d2eac: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D2EB0u;
        goto label_3d2eb0;
    }
    ctx->pc = 0x3D2EA8u;
    SET_GPR_U32(ctx, 31, 0x3D2EB0u);
    ctx->pc = 0x3D2EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2EA8u;
            // 0x3d2eac: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3629B0u;
    if (runtime->hasFunction(0x3629B0u)) {
        auto targetFn = runtime->lookupFunction(0x3629B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2EB0u; }
        if (ctx->pc != 0x3D2EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003629B0_0x3629b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2EB0u; }
        if (ctx->pc != 0x3D2EB0u) { return; }
    }
    ctx->pc = 0x3D2EB0u;
label_3d2eb0:
    // 0x3d2eb0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3d2eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3d2eb4:
    // 0x3d2eb4: 0xc0b6e90  jal         func_2DBA40
label_3d2eb8:
    if (ctx->pc == 0x3D2EB8u) {
        ctx->pc = 0x3D2EB8u;
            // 0x3d2eb8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3D2EBCu;
        goto label_3d2ebc;
    }
    ctx->pc = 0x3D2EB4u;
    SET_GPR_U32(ctx, 31, 0x3D2EBCu);
    ctx->pc = 0x3D2EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2EB4u;
            // 0x3d2eb8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2EBCu; }
        if (ctx->pc != 0x3D2EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2EBCu; }
        if (ctx->pc != 0x3D2EBCu) { return; }
    }
    ctx->pc = 0x3D2EBCu;
label_3d2ebc:
    // 0x3d2ebc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3d2ebcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3d2ec0:
    // 0x3d2ec0: 0xc0d8a80  jal         func_362A00
label_3d2ec4:
    if (ctx->pc == 0x3D2EC4u) {
        ctx->pc = 0x3D2EC4u;
            // 0x3d2ec4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3D2EC8u;
        goto label_3d2ec8;
    }
    ctx->pc = 0x3D2EC0u;
    SET_GPR_U32(ctx, 31, 0x3D2EC8u);
    ctx->pc = 0x3D2EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2EC0u;
            // 0x3d2ec4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2EC8u; }
        if (ctx->pc != 0x3D2EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2EC8u; }
        if (ctx->pc != 0x3D2EC8u) { return; }
    }
    ctx->pc = 0x3D2EC8u;
label_3d2ec8:
    // 0x3d2ec8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3d2ec8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3d2ecc:
    // 0x3d2ecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d2eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2ed0:
    // 0x3d2ed0: 0xc0d8a54  jal         func_362950
label_3d2ed4:
    if (ctx->pc == 0x3D2ED4u) {
        ctx->pc = 0x3D2ED4u;
            // 0x3d2ed4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D2ED8u;
        goto label_3d2ed8;
    }
    ctx->pc = 0x3D2ED0u;
    SET_GPR_U32(ctx, 31, 0x3D2ED8u);
    ctx->pc = 0x3D2ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2ED0u;
            // 0x3d2ed4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362950u;
    if (runtime->hasFunction(0x362950u)) {
        auto targetFn = runtime->lookupFunction(0x362950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2ED8u; }
        if (ctx->pc != 0x3D2ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362950_0x362950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2ED8u; }
        if (ctx->pc != 0x3D2ED8u) { return; }
    }
    ctx->pc = 0x3D2ED8u;
label_3d2ed8:
    // 0x3d2ed8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3d2ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3d2edc:
    // 0x3d2edc: 0xc0b6e90  jal         func_2DBA40
label_3d2ee0:
    if (ctx->pc == 0x3D2EE0u) {
        ctx->pc = 0x3D2EE0u;
            // 0x3d2ee0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3D2EE4u;
        goto label_3d2ee4;
    }
    ctx->pc = 0x3D2EDCu;
    SET_GPR_U32(ctx, 31, 0x3D2EE4u);
    ctx->pc = 0x3D2EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2EDCu;
            // 0x3d2ee0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2EE4u; }
        if (ctx->pc != 0x3D2EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2EE4u; }
        if (ctx->pc != 0x3D2EE4u) { return; }
    }
    ctx->pc = 0x3D2EE4u;
label_3d2ee4:
    // 0x3d2ee4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3d2ee4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3d2ee8:
    // 0x3d2ee8: 0xc0d8a80  jal         func_362A00
label_3d2eec:
    if (ctx->pc == 0x3D2EECu) {
        ctx->pc = 0x3D2EECu;
            // 0x3d2eec: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3D2EF0u;
        goto label_3d2ef0;
    }
    ctx->pc = 0x3D2EE8u;
    SET_GPR_U32(ctx, 31, 0x3D2EF0u);
    ctx->pc = 0x3D2EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2EE8u;
            // 0x3d2eec: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2EF0u; }
        if (ctx->pc != 0x3D2EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2EF0u; }
        if (ctx->pc != 0x3D2EF0u) { return; }
    }
    ctx->pc = 0x3D2EF0u;
label_3d2ef0:
    // 0x3d2ef0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3d2ef0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3d2ef4:
    // 0x3d2ef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d2ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2ef8:
    // 0x3d2ef8: 0xc0d8a3c  jal         func_3628F0
label_3d2efc:
    if (ctx->pc == 0x3D2EFCu) {
        ctx->pc = 0x3D2EFCu;
            // 0x3d2efc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D2F00u;
        goto label_3d2f00;
    }
    ctx->pc = 0x3D2EF8u;
    SET_GPR_U32(ctx, 31, 0x3D2F00u);
    ctx->pc = 0x3D2EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2EF8u;
            // 0x3d2efc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628F0u;
    if (runtime->hasFunction(0x3628F0u)) {
        auto targetFn = runtime->lookupFunction(0x3628F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F00u; }
        if (ctx->pc != 0x3D2F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628F0_0x3628f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F00u; }
        if (ctx->pc != 0x3D2F00u) { return; }
    }
    ctx->pc = 0x3D2F00u;
label_3d2f00:
    // 0x3d2f00: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d2f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d2f04:
    // 0x3d2f04: 0xc0b6e00  jal         func_2DB800
label_3d2f08:
    if (ctx->pc == 0x3D2F08u) {
        ctx->pc = 0x3D2F08u;
            // 0x3d2f08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D2F0Cu;
        goto label_3d2f0c;
    }
    ctx->pc = 0x3D2F04u;
    SET_GPR_U32(ctx, 31, 0x3D2F0Cu);
    ctx->pc = 0x3D2F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2F04u;
            // 0x3d2f08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F0Cu; }
        if (ctx->pc != 0x3D2F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F0Cu; }
        if (ctx->pc != 0x3D2F0Cu) { return; }
    }
    ctx->pc = 0x3D2F0Cu;
label_3d2f0c:
    // 0x3d2f0c: 0xc0d8a80  jal         func_362A00
label_3d2f10:
    if (ctx->pc == 0x3D2F10u) {
        ctx->pc = 0x3D2F10u;
            // 0x3d2f10: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3D2F14u;
        goto label_3d2f14;
    }
    ctx->pc = 0x3D2F0Cu;
    SET_GPR_U32(ctx, 31, 0x3D2F14u);
    ctx->pc = 0x3D2F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2F0Cu;
            // 0x3d2f10: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F14u; }
        if (ctx->pc != 0x3D2F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F14u; }
        if (ctx->pc != 0x3D2F14u) { return; }
    }
    ctx->pc = 0x3D2F14u;
label_3d2f14:
    // 0x3d2f14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d2f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2f18:
    // 0x3d2f18: 0xc0d8a80  jal         func_362A00
label_3d2f1c:
    if (ctx->pc == 0x3D2F1Cu) {
        ctx->pc = 0x3D2F1Cu;
            // 0x3d2f1c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3D2F20u;
        goto label_3d2f20;
    }
    ctx->pc = 0x3D2F18u;
    SET_GPR_U32(ctx, 31, 0x3D2F20u);
    ctx->pc = 0x3D2F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2F18u;
            // 0x3d2f1c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F20u; }
        if (ctx->pc != 0x3D2F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F20u; }
        if (ctx->pc != 0x3D2F20u) { return; }
    }
    ctx->pc = 0x3D2F20u;
label_3d2f20:
    // 0x3d2f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d2f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d2f24:
    // 0x3d2f24: 0xc0d8a2c  jal         func_3628B0
label_3d2f28:
    if (ctx->pc == 0x3D2F28u) {
        ctx->pc = 0x3D2F28u;
            // 0x3d2f28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D2F2Cu;
        goto label_3d2f2c;
    }
    ctx->pc = 0x3D2F24u;
    SET_GPR_U32(ctx, 31, 0x3D2F2Cu);
    ctx->pc = 0x3D2F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2F24u;
            // 0x3d2f28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628B0u;
    if (runtime->hasFunction(0x3628B0u)) {
        auto targetFn = runtime->lookupFunction(0x3628B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F2Cu; }
        if (ctx->pc != 0x3D2F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628B0_0x3628b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F2Cu; }
        if (ctx->pc != 0x3D2F2Cu) { return; }
    }
    ctx->pc = 0x3D2F2Cu;
label_3d2f2c:
    // 0x3d2f2c: 0xc0d8a24  jal         func_362890
label_3d2f30:
    if (ctx->pc == 0x3D2F30u) {
        ctx->pc = 0x3D2F30u;
            // 0x3d2f30: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3D2F34u;
        goto label_3d2f34;
    }
    ctx->pc = 0x3D2F2Cu;
    SET_GPR_U32(ctx, 31, 0x3D2F34u);
    ctx->pc = 0x3D2F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2F2Cu;
            // 0x3d2f30: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x362890u;
    if (runtime->hasFunction(0x362890u)) {
        auto targetFn = runtime->lookupFunction(0x362890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F34u; }
        if (ctx->pc != 0x3D2F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362890_0x362890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F34u; }
        if (ctx->pc != 0x3D2F34u) { return; }
    }
    ctx->pc = 0x3D2F34u;
label_3d2f34:
    // 0x3d2f34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3d2f38:
    if (ctx->pc == 0x3D2F38u) {
        ctx->pc = 0x3D2F3Cu;
        goto label_3d2f3c;
    }
    ctx->pc = 0x3D2F34u;
    {
        const bool branch_taken_0x3d2f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2f34) {
            ctx->pc = 0x3D2F48u;
            goto label_3d2f48;
        }
    }
    ctx->pc = 0x3D2F3Cu;
label_3d2f3c:
    // 0x3d2f3c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d2f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d2f40:
    // 0x3d2f40: 0xc0d8a14  jal         func_362850
label_3d2f44:
    if (ctx->pc == 0x3D2F44u) {
        ctx->pc = 0x3D2F44u;
            // 0x3d2f44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D2F48u;
        goto label_3d2f48;
    }
    ctx->pc = 0x3D2F40u;
    SET_GPR_U32(ctx, 31, 0x3D2F48u);
    ctx->pc = 0x3D2F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2F40u;
            // 0x3d2f44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362850u;
    if (runtime->hasFunction(0x362850u)) {
        auto targetFn = runtime->lookupFunction(0x362850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F48u; }
        if (ctx->pc != 0x3D2F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362850_0x362850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F48u; }
        if (ctx->pc != 0x3D2F48u) { return; }
    }
    ctx->pc = 0x3D2F48u;
label_3d2f48:
    // 0x3d2f48: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d2f4c:
    // 0x3d2f4c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3d2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3d2f50:
    // 0x3d2f50: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x3d2f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d2f54:
    // 0x3d2f54: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x3d2f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d2f58:
    // 0x3d2f58: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x3d2f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2f5c:
    // 0x3d2f5c: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x3d2f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3d2f60:
    // 0x3d2f60: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x3d2f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2f64:
    // 0x3d2f64: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3d2f64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3d2f68:
    // 0x3d2f68: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3d2f68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_3d2f6c:
    // 0x3d2f6c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3d2f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3d2f70:
    // 0x3d2f70: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3d2f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3d2f74:
    // 0x3d2f74: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x3d2f74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3d2f78:
    // 0x3d2f78: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x3d2f78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3d2f7c:
    // 0x3d2f7c: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x3d2f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3d2f80:
    // 0x3d2f80: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x3d2f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_3d2f84:
    // 0x3d2f84: 0x8e500050  lw          $s0, 0x50($s2)
    ctx->pc = 0x3d2f84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_3d2f88:
    // 0x3d2f88: 0xc088b74  jal         func_222DD0
label_3d2f8c:
    if (ctx->pc == 0x3D2F8Cu) {
        ctx->pc = 0x3D2F8Cu;
            // 0x3d2f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D2F90u;
        goto label_3d2f90;
    }
    ctx->pc = 0x3D2F88u;
    SET_GPR_U32(ctx, 31, 0x3D2F90u);
    ctx->pc = 0x3D2F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2F88u;
            // 0x3d2f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F90u; }
        if (ctx->pc != 0x3D2F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2F90u; }
        if (ctx->pc != 0x3D2F90u) { return; }
    }
    ctx->pc = 0x3D2F90u;
label_3d2f90:
    // 0x3d2f90: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3d2f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3d2f94:
    // 0x3d2f94: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3d2f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3d2f98:
    // 0x3d2f98: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x3d2f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_3d2f9c:
    // 0x3d2f9c: 0x320f809  jalr        $t9
label_3d2fa0:
    if (ctx->pc == 0x3D2FA0u) {
        ctx->pc = 0x3D2FA0u;
            // 0x3d2fa0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D2FA4u;
        goto label_3d2fa4;
    }
    ctx->pc = 0x3D2F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D2FA4u);
        ctx->pc = 0x3D2FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2F9Cu;
            // 0x3d2fa0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D2FA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D2FA4u; }
            if (ctx->pc != 0x3D2FA4u) { return; }
        }
        }
    }
    ctx->pc = 0x3D2FA4u;
label_3d2fa4:
    // 0x3d2fa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d2fa8:
    // 0x3d2fa8: 0x10000011  b           . + 4 + (0x11 << 2)
label_3d2fac:
    if (ctx->pc == 0x3D2FACu) {
        ctx->pc = 0x3D2FACu;
            // 0x3d2fac: 0xa2420214  sb          $v0, 0x214($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 532), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3D2FB0u;
        goto label_3d2fb0;
    }
    ctx->pc = 0x3D2FA8u;
    {
        const bool branch_taken_0x3d2fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2FA8u;
            // 0x3d2fac: 0xa2420214  sb          $v0, 0x214($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 532), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2fa8) {
            ctx->pc = 0x3D2FF0u;
            goto label_3d2ff0;
        }
    }
    ctx->pc = 0x3D2FB0u;
label_3d2fb0:
    // 0x3d2fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d2fb4:
    // 0x3d2fb4: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_3d2fb8:
    if (ctx->pc == 0x3D2FB8u) {
        ctx->pc = 0x3D2FB8u;
            // 0x3d2fb8: 0x96230050  lhu         $v1, 0x50($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x3D2FBCu;
        goto label_3d2fbc;
    }
    ctx->pc = 0x3D2FB4u;
    {
        const bool branch_taken_0x3d2fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d2fb4) {
            ctx->pc = 0x3D2FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2FB4u;
            // 0x3d2fb8: 0x96230050  lhu         $v1, 0x50($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2FF4u;
            goto label_3d2ff4;
        }
    }
    ctx->pc = 0x3D2FBCu;
label_3d2fbc:
    // 0x3d2fbc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x3d2fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_3d2fc0:
    // 0x3d2fc0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3d2fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_3d2fc4:
    // 0x3d2fc4: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x3d2fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_3d2fc8:
    // 0x3d2fc8: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x3d2fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_3d2fcc:
    // 0x3d2fcc: 0x8e500050  lw          $s0, 0x50($s2)
    ctx->pc = 0x3d2fccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_3d2fd0:
    // 0x3d2fd0: 0xc088b74  jal         func_222DD0
label_3d2fd4:
    if (ctx->pc == 0x3D2FD4u) {
        ctx->pc = 0x3D2FD4u;
            // 0x3d2fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D2FD8u;
        goto label_3d2fd8;
    }
    ctx->pc = 0x3D2FD0u;
    SET_GPR_U32(ctx, 31, 0x3D2FD8u);
    ctx->pc = 0x3D2FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2FD0u;
            // 0x3d2fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2FD8u; }
        if (ctx->pc != 0x3D2FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2FD8u; }
        if (ctx->pc != 0x3D2FD8u) { return; }
    }
    ctx->pc = 0x3D2FD8u;
label_3d2fd8:
    // 0x3d2fd8: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3d2fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3d2fdc:
    // 0x3d2fdc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3d2fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3d2fe0:
    // 0x3d2fe0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x3d2fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_3d2fe4:
    // 0x3d2fe4: 0x320f809  jalr        $t9
label_3d2fe8:
    if (ctx->pc == 0x3D2FE8u) {
        ctx->pc = 0x3D2FE8u;
            // 0x3d2fe8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D2FECu;
        goto label_3d2fec;
    }
    ctx->pc = 0x3D2FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D2FECu);
        ctx->pc = 0x3D2FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2FE4u;
            // 0x3d2fe8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D2FECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D2FECu; }
            if (ctx->pc != 0x3D2FECu) { return; }
        }
        }
    }
    ctx->pc = 0x3D2FECu;
label_3d2fec:
    // 0x3d2fec: 0xa2400214  sb          $zero, 0x214($s2)
    ctx->pc = 0x3d2fecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 532), (uint8_t)GPR_U32(ctx, 0));
label_3d2ff0:
    // 0x3d2ff0: 0x96230050  lhu         $v1, 0x50($s1)
    ctx->pc = 0x3d2ff0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
label_3d2ff4:
    // 0x3d2ff4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3d2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d2ff8:
    // 0x3d2ff8: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
label_3d2ffc:
    if (ctx->pc == 0x3D2FFCu) {
        ctx->pc = 0x3D2FFCu;
            // 0x3d2ffc: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3D3000u;
        goto label_3d3000;
    }
    ctx->pc = 0x3D2FF8u;
    {
        const bool branch_taken_0x3d2ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d2ff8) {
            ctx->pc = 0x3D2FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2FF8u;
            // 0x3d2ffc: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D3044u;
            goto label_3d3044;
        }
    }
    ctx->pc = 0x3D3000u;
label_3d3000:
    // 0x3d3000: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d3000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d3004:
    // 0x3d3004: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3d3004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3d3008:
    // 0x3d3008: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3d3008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3d300c:
    // 0x3d300c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3d300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3d3010:
    // 0x3d3010: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
label_3d3014:
    if (ctx->pc == 0x3D3014u) {
        ctx->pc = 0x3D3014u;
            // 0x3d3014: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3D3018u;
        goto label_3d3018;
    }
    ctx->pc = 0x3D3010u;
    {
        const bool branch_taken_0x3d3010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d3010) {
            ctx->pc = 0x3D3014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3010u;
            // 0x3d3014: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D303Cu;
            goto label_3d303c;
        }
    }
    ctx->pc = 0x3D3018u;
label_3d3018:
    // 0x3d3018: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x3d3018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_3d301c:
    // 0x3d301c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d301cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d3020:
    // 0x3d3020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d3020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3024:
    // 0x3d3024: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3d3024u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_3d3028:
    // 0x3d3028: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d3028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d302c:
    // 0x3d302c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d302cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d3030:
    // 0x3d3030: 0xc08bff0  jal         func_22FFC0
label_3d3034:
    if (ctx->pc == 0x3D3034u) {
        ctx->pc = 0x3D3034u;
            // 0x3d3034: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3038u;
        goto label_3d3038;
    }
    ctx->pc = 0x3D3030u;
    SET_GPR_U32(ctx, 31, 0x3D3038u);
    ctx->pc = 0x3D3034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3030u;
            // 0x3d3034: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3038u; }
        if (ctx->pc != 0x3D3038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3038u; }
        if (ctx->pc != 0x3D3038u) { return; }
    }
    ctx->pc = 0x3D3038u;
label_3d3038:
    // 0x3d3038: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3d3038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d303c:
    // 0x3d303c: 0xae4200e0  sw          $v0, 0xE0($s2)
    ctx->pc = 0x3d303cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 2));
label_3d3040:
    // 0x3d3040: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3d3040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d3044:
    // 0x3d3044: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x3d3044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_3d3048:
    // 0x3d3048: 0x320f809  jalr        $t9
label_3d304c:
    if (ctx->pc == 0x3D304Cu) {
        ctx->pc = 0x3D304Cu;
            // 0x3d304c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D3050u;
        goto label_3d3050;
    }
    ctx->pc = 0x3D3048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D3050u);
        ctx->pc = 0x3D304Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3048u;
            // 0x3d304c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D3050u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D3050u; }
            if (ctx->pc != 0x3D3050u) { return; }
        }
        }
    }
    ctx->pc = 0x3D3050u;
label_3d3050:
    // 0x3d3050: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3d3050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3d3054:
    // 0x3d3054: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3d3054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d3058:
    // 0x3d3058: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3d3058u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d305c:
    // 0x3d305c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3d305cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d3060:
    // 0x3d3060: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d3060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d3064:
    // 0x3d3064: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d3064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3068:
    // 0x3d3068: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d3068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d306c:
    // 0x3d306c: 0x3e00008  jr          $ra
label_3d3070:
    if (ctx->pc == 0x3D3070u) {
        ctx->pc = 0x3D3070u;
            // 0x3d3070: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3D3074u;
        goto label_3d3074;
    }
    ctx->pc = 0x3D306Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D306Cu;
            // 0x3d3070: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D3074u;
label_3d3074:
    // 0x3d3074: 0x0  nop
    ctx->pc = 0x3d3074u;
    // NOP
label_3d3078:
    // 0x3d3078: 0x0  nop
    ctx->pc = 0x3d3078u;
    // NOP
label_3d307c:
    // 0x3d307c: 0x0  nop
    ctx->pc = 0x3d307cu;
    // NOP
label_3d3080:
    // 0x3d3080: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3d3080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3d3084:
    // 0x3d3084: 0x248501b0  addiu       $a1, $a0, 0x1B0
    ctx->pc = 0x3d3084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
label_3d3088:
    // 0x3d3088: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d3088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d308c:
    // 0x3d308c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d308cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d3090:
    // 0x3d3090: 0x249000f0  addiu       $s0, $a0, 0xF0
    ctx->pc = 0x3d3090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
label_3d3094:
    // 0x3d3094: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3d3094u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3d3098:
    // 0x3d3098: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3d3098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3d309c:
    // 0x3d309c: 0xc04cc04  jal         func_133010
label_3d30a0:
    if (ctx->pc == 0x3D30A0u) {
        ctx->pc = 0x3D30A0u;
            // 0x3d30a0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x3D30A4u;
        goto label_3d30a4;
    }
    ctx->pc = 0x3D309Cu;
    SET_GPR_U32(ctx, 31, 0x3D30A4u);
    ctx->pc = 0x3D30A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D309Cu;
            // 0x3d30a0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D30A4u; }
        if (ctx->pc != 0x3D30A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D30A4u; }
        if (ctx->pc != 0x3D30A4u) { return; }
    }
    ctx->pc = 0x3D30A4u;
label_3d30a4:
    // 0x3d30a4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x3d30a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d30a8:
    // 0x3d30a8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x3d30a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d30ac:
    // 0x3d30ac: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x3d30acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d30b0:
    // 0x3d30b0: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x3d30b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3d30b4:
    // 0x3d30b4: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x3d30b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_3d30b8:
    // 0x3d30b8: 0x46000344  c1          0x344
    ctx->pc = 0x3d30b8u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_3d30bc:
    // 0x3d30bc: 0x0  nop
    ctx->pc = 0x3d30bcu;
    // NOP
label_3d30c0:
    // 0x3d30c0: 0x0  nop
    ctx->pc = 0x3d30c0u;
    // NOP
label_3d30c4:
    // 0x3d30c4: 0xc04780a  jal         func_11E028
label_3d30c8:
    if (ctx->pc == 0x3D30C8u) {
        ctx->pc = 0x3D30CCu;
        goto label_3d30cc;
    }
    ctx->pc = 0x3D30C4u;
    SET_GPR_U32(ctx, 31, 0x3D30CCu);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D30CCu; }
        if (ctx->pc != 0x3D30CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D30CCu; }
        if (ctx->pc != 0x3D30CCu) { return; }
    }
    ctx->pc = 0x3D30CCu;
label_3d30cc:
    // 0x3d30cc: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x3d30ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d30d0:
    // 0x3d30d0: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x3d30d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3d30d4:
    // 0x3d30d4: 0xc04780a  jal         func_11E028
label_3d30d8:
    if (ctx->pc == 0x3D30D8u) {
        ctx->pc = 0x3D30D8u;
            // 0x3d30d8: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x3D30DCu;
        goto label_3d30dc;
    }
    ctx->pc = 0x3D30D4u;
    SET_GPR_U32(ctx, 31, 0x3D30DCu);
    ctx->pc = 0x3D30D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D30D4u;
            // 0x3d30d8: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D30DCu; }
        if (ctx->pc != 0x3D30DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D30DCu; }
        if (ctx->pc != 0x3D30DCu) { return; }
    }
    ctx->pc = 0x3D30DCu;
label_3d30dc:
    // 0x3d30dc: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3d30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_3d30e0:
    // 0x3d30e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3d30e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3d30e4:
    // 0x3d30e4: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x3d30e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_3d30e8:
    // 0x3d30e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3d30e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3d30ec:
    // 0x3d30ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d30ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d30f0:
    // 0x3d30f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d30f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d30f4:
    // 0x3d30f4: 0x0  nop
    ctx->pc = 0x3d30f4u;
    // NOP
label_3d30f8:
    // 0x3d30f8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3d30f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3d30fc:
    // 0x3d30fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d30fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d3100:
    // 0x3d3100: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3d3100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d3104:
    // 0x3d3104: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3d3104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3d3108:
    // 0x3d3108: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d3108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d310c:
    // 0x3d310c: 0xc04c970  jal         func_1325C0
label_3d3110:
    if (ctx->pc == 0x3D3110u) {
        ctx->pc = 0x3D3110u;
            // 0x3d3110: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x3D3114u;
        goto label_3d3114;
    }
    ctx->pc = 0x3D310Cu;
    SET_GPR_U32(ctx, 31, 0x3D3114u);
    ctx->pc = 0x3D3110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D310Cu;
            // 0x3d3110: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3114u; }
        if (ctx->pc != 0x3D3114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3114u; }
        if (ctx->pc != 0x3D3114u) { return; }
    }
    ctx->pc = 0x3D3114u;
label_3d3114:
    // 0x3d3114: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x3d3114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_3d3118:
    // 0x3d3118: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d3118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d311c:
    // 0x3d311c: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x3d311cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_3d3120:
    // 0x3d3120: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d3120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d3124:
    // 0x3d3124: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d3124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d3128:
    // 0x3d3128: 0x0  nop
    ctx->pc = 0x3d3128u;
    // NOP
label_3d312c:
    // 0x3d312c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3d312cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3d3130:
    // 0x3d3130: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d3130u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d3134:
    // 0x3d3134: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d3134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d3138:
    // 0x3d3138: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3d3138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3d313c:
    // 0x3d313c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3d313cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d3140:
    // 0x3d3140: 0xc04c970  jal         func_1325C0
label_3d3144:
    if (ctx->pc == 0x3D3144u) {
        ctx->pc = 0x3D3144u;
            // 0x3d3144: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3D3148u;
        goto label_3d3148;
    }
    ctx->pc = 0x3D3140u;
    SET_GPR_U32(ctx, 31, 0x3D3148u);
    ctx->pc = 0x3D3144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3140u;
            // 0x3d3144: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3148u; }
        if (ctx->pc != 0x3D3148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3148u; }
        if (ctx->pc != 0x3D3148u) { return; }
    }
    ctx->pc = 0x3D3148u;
label_3d3148:
    // 0x3d3148: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d3148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3d314c:
    // 0x3d314c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3d314cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d3150:
    // 0x3d3150: 0xc04c72c  jal         func_131CB0
label_3d3154:
    if (ctx->pc == 0x3D3154u) {
        ctx->pc = 0x3D3154u;
            // 0x3d3154: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3D3158u;
        goto label_3d3158;
    }
    ctx->pc = 0x3D3150u;
    SET_GPR_U32(ctx, 31, 0x3D3158u);
    ctx->pc = 0x3D3154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3150u;
            // 0x3d3154: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3158u; }
        if (ctx->pc != 0x3D3158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3158u; }
        if (ctx->pc != 0x3D3158u) { return; }
    }
    ctx->pc = 0x3D3158u;
label_3d3158:
    // 0x3d3158: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3d3158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d315c:
    // 0x3d315c: 0xc04f278  jal         func_13C9E0
label_3d3160:
    if (ctx->pc == 0x3D3160u) {
        ctx->pc = 0x3D3160u;
            // 0x3d3160: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x3D3164u;
        goto label_3d3164;
    }
    ctx->pc = 0x3D315Cu;
    SET_GPR_U32(ctx, 31, 0x3D3164u);
    ctx->pc = 0x3D3160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D315Cu;
            // 0x3d3160: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3164u; }
        if (ctx->pc != 0x3D3164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3164u; }
        if (ctx->pc != 0x3D3164u) { return; }
    }
    ctx->pc = 0x3D3164u;
label_3d3164:
    // 0x3d3164: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d3164u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d3168:
    // 0x3d3168: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3d3168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3d316c:
    // 0x3d316c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d316cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d3170:
    // 0x3d3170: 0xc04cca0  jal         func_133280
label_3d3174:
    if (ctx->pc == 0x3D3174u) {
        ctx->pc = 0x3D3174u;
            // 0x3d3174: 0x24c69300  addiu       $a2, $a2, -0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939392));
        ctx->pc = 0x3D3178u;
        goto label_3d3178;
    }
    ctx->pc = 0x3D3170u;
    SET_GPR_U32(ctx, 31, 0x3D3178u);
    ctx->pc = 0x3D3174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3170u;
            // 0x3d3174: 0x24c69300  addiu       $a2, $a2, -0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3178u; }
        if (ctx->pc != 0x3D3178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3178u; }
        if (ctx->pc != 0x3D3178u) { return; }
    }
    ctx->pc = 0x3D3178u;
label_3d3178:
    // 0x3d3178: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x3d3178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d317c:
    // 0x3d317c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x3d317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d3180:
    // 0x3d3180: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x3d3180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d3184:
    // 0x3d3184: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x3d3184u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3d3188:
    // 0x3d3188: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x3d3188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_3d318c:
    // 0x3d318c: 0x46000344  c1          0x344
    ctx->pc = 0x3d318cu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_3d3190:
    // 0x3d3190: 0x0  nop
    ctx->pc = 0x3d3190u;
    // NOP
label_3d3194:
    // 0x3d3194: 0x0  nop
    ctx->pc = 0x3d3194u;
    // NOP
label_3d3198:
    // 0x3d3198: 0xc04780a  jal         func_11E028
label_3d319c:
    if (ctx->pc == 0x3D319Cu) {
        ctx->pc = 0x3D31A0u;
        goto label_3d31a0;
    }
    ctx->pc = 0x3D3198u;
    SET_GPR_U32(ctx, 31, 0x3D31A0u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D31A0u; }
        if (ctx->pc != 0x3D31A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D31A0u; }
        if (ctx->pc != 0x3D31A0u) { return; }
    }
    ctx->pc = 0x3D31A0u;
label_3d31a0:
    // 0x3d31a0: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x3d31a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d31a4:
    // 0x3d31a4: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x3d31a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3d31a8:
    // 0x3d31a8: 0xc04780a  jal         func_11E028
label_3d31ac:
    if (ctx->pc == 0x3D31ACu) {
        ctx->pc = 0x3D31ACu;
            // 0x3d31ac: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x3D31B0u;
        goto label_3d31b0;
    }
    ctx->pc = 0x3D31A8u;
    SET_GPR_U32(ctx, 31, 0x3D31B0u);
    ctx->pc = 0x3D31ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D31A8u;
            // 0x3d31ac: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D31B0u; }
        if (ctx->pc != 0x3D31B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D31B0u; }
        if (ctx->pc != 0x3D31B0u) { return; }
    }
    ctx->pc = 0x3D31B0u;
label_3d31b0:
    // 0x3d31b0: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3d31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_3d31b4:
    // 0x3d31b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3d31b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3d31b8:
    // 0x3d31b8: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x3d31b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_3d31bc:
    // 0x3d31bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3d31bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3d31c0:
    // 0x3d31c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d31c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d31c4:
    // 0x3d31c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d31c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d31c8:
    // 0x3d31c8: 0x0  nop
    ctx->pc = 0x3d31c8u;
    // NOP
label_3d31cc:
    // 0x3d31cc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3d31ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3d31d0:
    // 0x3d31d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d31d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d31d4:
    // 0x3d31d4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3d31d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d31d8:
    // 0x3d31d8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3d31d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3d31dc:
    // 0x3d31dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d31dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d31e0:
    // 0x3d31e0: 0xc04c970  jal         func_1325C0
label_3d31e4:
    if (ctx->pc == 0x3D31E4u) {
        ctx->pc = 0x3D31E4u;
            // 0x3d31e4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x3D31E8u;
        goto label_3d31e8;
    }
    ctx->pc = 0x3D31E0u;
    SET_GPR_U32(ctx, 31, 0x3D31E8u);
    ctx->pc = 0x3D31E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D31E0u;
            // 0x3d31e4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D31E8u; }
        if (ctx->pc != 0x3D31E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D31E8u; }
        if (ctx->pc != 0x3D31E8u) { return; }
    }
    ctx->pc = 0x3D31E8u;
label_3d31e8:
    // 0x3d31e8: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x3d31e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_3d31ec:
    // 0x3d31ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d31f0:
    // 0x3d31f0: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x3d31f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_3d31f4:
    // 0x3d31f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d31f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d31f8:
    // 0x3d31f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d31f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d31fc:
    // 0x3d31fc: 0x0  nop
    ctx->pc = 0x3d31fcu;
    // NOP
label_3d3200:
    // 0x3d3200: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3d3200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3d3204:
    // 0x3d3204: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d3204u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d3208:
    // 0x3d3208: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d3208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d320c:
    // 0x3d320c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3d320cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3d3210:
    // 0x3d3210: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3d3210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d3214:
    // 0x3d3214: 0xc04c970  jal         func_1325C0
label_3d3218:
    if (ctx->pc == 0x3D3218u) {
        ctx->pc = 0x3D3218u;
            // 0x3d3218: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3D321Cu;
        goto label_3d321c;
    }
    ctx->pc = 0x3D3214u;
    SET_GPR_U32(ctx, 31, 0x3D321Cu);
    ctx->pc = 0x3D3218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3214u;
            // 0x3d3218: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D321Cu; }
        if (ctx->pc != 0x3D321Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D321Cu; }
        if (ctx->pc != 0x3D321Cu) { return; }
    }
    ctx->pc = 0x3D321Cu;
label_3d321c:
    // 0x3d321c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3d321cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3d3220:
    // 0x3d3220: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3d3220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d3224:
    // 0x3d3224: 0xc04c72c  jal         func_131CB0
label_3d3228:
    if (ctx->pc == 0x3D3228u) {
        ctx->pc = 0x3D3228u;
            // 0x3d3228: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3D322Cu;
        goto label_3d322c;
    }
    ctx->pc = 0x3D3224u;
    SET_GPR_U32(ctx, 31, 0x3D322Cu);
    ctx->pc = 0x3D3228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3224u;
            // 0x3d3228: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D322Cu; }
        if (ctx->pc != 0x3D322Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D322Cu; }
        if (ctx->pc != 0x3D322Cu) { return; }
    }
    ctx->pc = 0x3D322Cu;
label_3d322c:
    // 0x3d322c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x3d322cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_3d3230:
    // 0x3d3230: 0xc04c74c  jal         func_131D30
label_3d3234:
    if (ctx->pc == 0x3D3234u) {
        ctx->pc = 0x3D3234u;
            // 0x3d3234: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3D3238u;
        goto label_3d3238;
    }
    ctx->pc = 0x3D3230u;
    SET_GPR_U32(ctx, 31, 0x3D3238u);
    ctx->pc = 0x3D3234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3230u;
            // 0x3d3234: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3238u; }
        if (ctx->pc != 0x3D3238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3238u; }
        if (ctx->pc != 0x3D3238u) { return; }
    }
    ctx->pc = 0x3D3238u;
label_3d3238:
    // 0x3d3238: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x3d3238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_3d323c:
    // 0x3d323c: 0xc04c74c  jal         func_131D30
label_3d3240:
    if (ctx->pc == 0x3D3240u) {
        ctx->pc = 0x3D3240u;
            // 0x3d3240: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3D3244u;
        goto label_3d3244;
    }
    ctx->pc = 0x3D323Cu;
    SET_GPR_U32(ctx, 31, 0x3D3244u);
    ctx->pc = 0x3D3240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D323Cu;
            // 0x3d3240: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3244u; }
        if (ctx->pc != 0x3D3244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3244u; }
        if (ctx->pc != 0x3D3244u) { return; }
    }
    ctx->pc = 0x3D3244u;
label_3d3244:
    // 0x3d3244: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x3d3244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_3d3248:
    // 0x3d3248: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d3248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3d324c:
    // 0x3d324c: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x3d324cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3d3250:
    // 0x3d3250: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x3d3250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_3d3254:
    // 0x3d3254: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3d3254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_3d3258:
    // 0x3d3258: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x3d3258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d325c:
    // 0x3d325c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d325cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d3260:
    // 0x3d3260: 0x0  nop
    ctx->pc = 0x3d3260u;
    // NOP
label_3d3264:
    // 0x3d3264: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d3264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d3268:
    // 0x3d3268: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3d3268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_3d326c:
    // 0x3d326c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d326cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3270:
    // 0x3d3270: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3d3270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d3274:
    // 0x3d3274: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d3274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d3278:
    // 0x3d3278: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3d3278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d327c:
    // 0x3d327c: 0x3e00008  jr          $ra
label_3d3280:
    if (ctx->pc == 0x3D3280u) {
        ctx->pc = 0x3D3280u;
            // 0x3d3280: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3D3284u;
        goto label_3d3284;
    }
    ctx->pc = 0x3D327Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D327Cu;
            // 0x3d3280: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D3284u;
label_3d3284:
    // 0x3d3284: 0x0  nop
    ctx->pc = 0x3d3284u;
    // NOP
label_3d3288:
    // 0x3d3288: 0x0  nop
    ctx->pc = 0x3d3288u;
    // NOP
label_3d328c:
    // 0x3d328c: 0x0  nop
    ctx->pc = 0x3d328cu;
    // NOP
}
