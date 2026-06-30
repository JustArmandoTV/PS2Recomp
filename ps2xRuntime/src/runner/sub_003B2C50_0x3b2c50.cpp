#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B2C50
// Address: 0x3b2c50 - 0x3b3640
void sub_003B2C50_0x3b2c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2C50_0x3b2c50");
#endif

    switch (ctx->pc) {
        case 0x3b2c50u: goto label_3b2c50;
        case 0x3b2c54u: goto label_3b2c54;
        case 0x3b2c58u: goto label_3b2c58;
        case 0x3b2c5cu: goto label_3b2c5c;
        case 0x3b2c60u: goto label_3b2c60;
        case 0x3b2c64u: goto label_3b2c64;
        case 0x3b2c68u: goto label_3b2c68;
        case 0x3b2c6cu: goto label_3b2c6c;
        case 0x3b2c70u: goto label_3b2c70;
        case 0x3b2c74u: goto label_3b2c74;
        case 0x3b2c78u: goto label_3b2c78;
        case 0x3b2c7cu: goto label_3b2c7c;
        case 0x3b2c80u: goto label_3b2c80;
        case 0x3b2c84u: goto label_3b2c84;
        case 0x3b2c88u: goto label_3b2c88;
        case 0x3b2c8cu: goto label_3b2c8c;
        case 0x3b2c90u: goto label_3b2c90;
        case 0x3b2c94u: goto label_3b2c94;
        case 0x3b2c98u: goto label_3b2c98;
        case 0x3b2c9cu: goto label_3b2c9c;
        case 0x3b2ca0u: goto label_3b2ca0;
        case 0x3b2ca4u: goto label_3b2ca4;
        case 0x3b2ca8u: goto label_3b2ca8;
        case 0x3b2cacu: goto label_3b2cac;
        case 0x3b2cb0u: goto label_3b2cb0;
        case 0x3b2cb4u: goto label_3b2cb4;
        case 0x3b2cb8u: goto label_3b2cb8;
        case 0x3b2cbcu: goto label_3b2cbc;
        case 0x3b2cc0u: goto label_3b2cc0;
        case 0x3b2cc4u: goto label_3b2cc4;
        case 0x3b2cc8u: goto label_3b2cc8;
        case 0x3b2cccu: goto label_3b2ccc;
        case 0x3b2cd0u: goto label_3b2cd0;
        case 0x3b2cd4u: goto label_3b2cd4;
        case 0x3b2cd8u: goto label_3b2cd8;
        case 0x3b2cdcu: goto label_3b2cdc;
        case 0x3b2ce0u: goto label_3b2ce0;
        case 0x3b2ce4u: goto label_3b2ce4;
        case 0x3b2ce8u: goto label_3b2ce8;
        case 0x3b2cecu: goto label_3b2cec;
        case 0x3b2cf0u: goto label_3b2cf0;
        case 0x3b2cf4u: goto label_3b2cf4;
        case 0x3b2cf8u: goto label_3b2cf8;
        case 0x3b2cfcu: goto label_3b2cfc;
        case 0x3b2d00u: goto label_3b2d00;
        case 0x3b2d04u: goto label_3b2d04;
        case 0x3b2d08u: goto label_3b2d08;
        case 0x3b2d0cu: goto label_3b2d0c;
        case 0x3b2d10u: goto label_3b2d10;
        case 0x3b2d14u: goto label_3b2d14;
        case 0x3b2d18u: goto label_3b2d18;
        case 0x3b2d1cu: goto label_3b2d1c;
        case 0x3b2d20u: goto label_3b2d20;
        case 0x3b2d24u: goto label_3b2d24;
        case 0x3b2d28u: goto label_3b2d28;
        case 0x3b2d2cu: goto label_3b2d2c;
        case 0x3b2d30u: goto label_3b2d30;
        case 0x3b2d34u: goto label_3b2d34;
        case 0x3b2d38u: goto label_3b2d38;
        case 0x3b2d3cu: goto label_3b2d3c;
        case 0x3b2d40u: goto label_3b2d40;
        case 0x3b2d44u: goto label_3b2d44;
        case 0x3b2d48u: goto label_3b2d48;
        case 0x3b2d4cu: goto label_3b2d4c;
        case 0x3b2d50u: goto label_3b2d50;
        case 0x3b2d54u: goto label_3b2d54;
        case 0x3b2d58u: goto label_3b2d58;
        case 0x3b2d5cu: goto label_3b2d5c;
        case 0x3b2d60u: goto label_3b2d60;
        case 0x3b2d64u: goto label_3b2d64;
        case 0x3b2d68u: goto label_3b2d68;
        case 0x3b2d6cu: goto label_3b2d6c;
        case 0x3b2d70u: goto label_3b2d70;
        case 0x3b2d74u: goto label_3b2d74;
        case 0x3b2d78u: goto label_3b2d78;
        case 0x3b2d7cu: goto label_3b2d7c;
        case 0x3b2d80u: goto label_3b2d80;
        case 0x3b2d84u: goto label_3b2d84;
        case 0x3b2d88u: goto label_3b2d88;
        case 0x3b2d8cu: goto label_3b2d8c;
        case 0x3b2d90u: goto label_3b2d90;
        case 0x3b2d94u: goto label_3b2d94;
        case 0x3b2d98u: goto label_3b2d98;
        case 0x3b2d9cu: goto label_3b2d9c;
        case 0x3b2da0u: goto label_3b2da0;
        case 0x3b2da4u: goto label_3b2da4;
        case 0x3b2da8u: goto label_3b2da8;
        case 0x3b2dacu: goto label_3b2dac;
        case 0x3b2db0u: goto label_3b2db0;
        case 0x3b2db4u: goto label_3b2db4;
        case 0x3b2db8u: goto label_3b2db8;
        case 0x3b2dbcu: goto label_3b2dbc;
        case 0x3b2dc0u: goto label_3b2dc0;
        case 0x3b2dc4u: goto label_3b2dc4;
        case 0x3b2dc8u: goto label_3b2dc8;
        case 0x3b2dccu: goto label_3b2dcc;
        case 0x3b2dd0u: goto label_3b2dd0;
        case 0x3b2dd4u: goto label_3b2dd4;
        case 0x3b2dd8u: goto label_3b2dd8;
        case 0x3b2ddcu: goto label_3b2ddc;
        case 0x3b2de0u: goto label_3b2de0;
        case 0x3b2de4u: goto label_3b2de4;
        case 0x3b2de8u: goto label_3b2de8;
        case 0x3b2decu: goto label_3b2dec;
        case 0x3b2df0u: goto label_3b2df0;
        case 0x3b2df4u: goto label_3b2df4;
        case 0x3b2df8u: goto label_3b2df8;
        case 0x3b2dfcu: goto label_3b2dfc;
        case 0x3b2e00u: goto label_3b2e00;
        case 0x3b2e04u: goto label_3b2e04;
        case 0x3b2e08u: goto label_3b2e08;
        case 0x3b2e0cu: goto label_3b2e0c;
        case 0x3b2e10u: goto label_3b2e10;
        case 0x3b2e14u: goto label_3b2e14;
        case 0x3b2e18u: goto label_3b2e18;
        case 0x3b2e1cu: goto label_3b2e1c;
        case 0x3b2e20u: goto label_3b2e20;
        case 0x3b2e24u: goto label_3b2e24;
        case 0x3b2e28u: goto label_3b2e28;
        case 0x3b2e2cu: goto label_3b2e2c;
        case 0x3b2e30u: goto label_3b2e30;
        case 0x3b2e34u: goto label_3b2e34;
        case 0x3b2e38u: goto label_3b2e38;
        case 0x3b2e3cu: goto label_3b2e3c;
        case 0x3b2e40u: goto label_3b2e40;
        case 0x3b2e44u: goto label_3b2e44;
        case 0x3b2e48u: goto label_3b2e48;
        case 0x3b2e4cu: goto label_3b2e4c;
        case 0x3b2e50u: goto label_3b2e50;
        case 0x3b2e54u: goto label_3b2e54;
        case 0x3b2e58u: goto label_3b2e58;
        case 0x3b2e5cu: goto label_3b2e5c;
        case 0x3b2e60u: goto label_3b2e60;
        case 0x3b2e64u: goto label_3b2e64;
        case 0x3b2e68u: goto label_3b2e68;
        case 0x3b2e6cu: goto label_3b2e6c;
        case 0x3b2e70u: goto label_3b2e70;
        case 0x3b2e74u: goto label_3b2e74;
        case 0x3b2e78u: goto label_3b2e78;
        case 0x3b2e7cu: goto label_3b2e7c;
        case 0x3b2e80u: goto label_3b2e80;
        case 0x3b2e84u: goto label_3b2e84;
        case 0x3b2e88u: goto label_3b2e88;
        case 0x3b2e8cu: goto label_3b2e8c;
        case 0x3b2e90u: goto label_3b2e90;
        case 0x3b2e94u: goto label_3b2e94;
        case 0x3b2e98u: goto label_3b2e98;
        case 0x3b2e9cu: goto label_3b2e9c;
        case 0x3b2ea0u: goto label_3b2ea0;
        case 0x3b2ea4u: goto label_3b2ea4;
        case 0x3b2ea8u: goto label_3b2ea8;
        case 0x3b2eacu: goto label_3b2eac;
        case 0x3b2eb0u: goto label_3b2eb0;
        case 0x3b2eb4u: goto label_3b2eb4;
        case 0x3b2eb8u: goto label_3b2eb8;
        case 0x3b2ebcu: goto label_3b2ebc;
        case 0x3b2ec0u: goto label_3b2ec0;
        case 0x3b2ec4u: goto label_3b2ec4;
        case 0x3b2ec8u: goto label_3b2ec8;
        case 0x3b2eccu: goto label_3b2ecc;
        case 0x3b2ed0u: goto label_3b2ed0;
        case 0x3b2ed4u: goto label_3b2ed4;
        case 0x3b2ed8u: goto label_3b2ed8;
        case 0x3b2edcu: goto label_3b2edc;
        case 0x3b2ee0u: goto label_3b2ee0;
        case 0x3b2ee4u: goto label_3b2ee4;
        case 0x3b2ee8u: goto label_3b2ee8;
        case 0x3b2eecu: goto label_3b2eec;
        case 0x3b2ef0u: goto label_3b2ef0;
        case 0x3b2ef4u: goto label_3b2ef4;
        case 0x3b2ef8u: goto label_3b2ef8;
        case 0x3b2efcu: goto label_3b2efc;
        case 0x3b2f00u: goto label_3b2f00;
        case 0x3b2f04u: goto label_3b2f04;
        case 0x3b2f08u: goto label_3b2f08;
        case 0x3b2f0cu: goto label_3b2f0c;
        case 0x3b2f10u: goto label_3b2f10;
        case 0x3b2f14u: goto label_3b2f14;
        case 0x3b2f18u: goto label_3b2f18;
        case 0x3b2f1cu: goto label_3b2f1c;
        case 0x3b2f20u: goto label_3b2f20;
        case 0x3b2f24u: goto label_3b2f24;
        case 0x3b2f28u: goto label_3b2f28;
        case 0x3b2f2cu: goto label_3b2f2c;
        case 0x3b2f30u: goto label_3b2f30;
        case 0x3b2f34u: goto label_3b2f34;
        case 0x3b2f38u: goto label_3b2f38;
        case 0x3b2f3cu: goto label_3b2f3c;
        case 0x3b2f40u: goto label_3b2f40;
        case 0x3b2f44u: goto label_3b2f44;
        case 0x3b2f48u: goto label_3b2f48;
        case 0x3b2f4cu: goto label_3b2f4c;
        case 0x3b2f50u: goto label_3b2f50;
        case 0x3b2f54u: goto label_3b2f54;
        case 0x3b2f58u: goto label_3b2f58;
        case 0x3b2f5cu: goto label_3b2f5c;
        case 0x3b2f60u: goto label_3b2f60;
        case 0x3b2f64u: goto label_3b2f64;
        case 0x3b2f68u: goto label_3b2f68;
        case 0x3b2f6cu: goto label_3b2f6c;
        case 0x3b2f70u: goto label_3b2f70;
        case 0x3b2f74u: goto label_3b2f74;
        case 0x3b2f78u: goto label_3b2f78;
        case 0x3b2f7cu: goto label_3b2f7c;
        case 0x3b2f80u: goto label_3b2f80;
        case 0x3b2f84u: goto label_3b2f84;
        case 0x3b2f88u: goto label_3b2f88;
        case 0x3b2f8cu: goto label_3b2f8c;
        case 0x3b2f90u: goto label_3b2f90;
        case 0x3b2f94u: goto label_3b2f94;
        case 0x3b2f98u: goto label_3b2f98;
        case 0x3b2f9cu: goto label_3b2f9c;
        case 0x3b2fa0u: goto label_3b2fa0;
        case 0x3b2fa4u: goto label_3b2fa4;
        case 0x3b2fa8u: goto label_3b2fa8;
        case 0x3b2facu: goto label_3b2fac;
        case 0x3b2fb0u: goto label_3b2fb0;
        case 0x3b2fb4u: goto label_3b2fb4;
        case 0x3b2fb8u: goto label_3b2fb8;
        case 0x3b2fbcu: goto label_3b2fbc;
        case 0x3b2fc0u: goto label_3b2fc0;
        case 0x3b2fc4u: goto label_3b2fc4;
        case 0x3b2fc8u: goto label_3b2fc8;
        case 0x3b2fccu: goto label_3b2fcc;
        case 0x3b2fd0u: goto label_3b2fd0;
        case 0x3b2fd4u: goto label_3b2fd4;
        case 0x3b2fd8u: goto label_3b2fd8;
        case 0x3b2fdcu: goto label_3b2fdc;
        case 0x3b2fe0u: goto label_3b2fe0;
        case 0x3b2fe4u: goto label_3b2fe4;
        case 0x3b2fe8u: goto label_3b2fe8;
        case 0x3b2fecu: goto label_3b2fec;
        case 0x3b2ff0u: goto label_3b2ff0;
        case 0x3b2ff4u: goto label_3b2ff4;
        case 0x3b2ff8u: goto label_3b2ff8;
        case 0x3b2ffcu: goto label_3b2ffc;
        case 0x3b3000u: goto label_3b3000;
        case 0x3b3004u: goto label_3b3004;
        case 0x3b3008u: goto label_3b3008;
        case 0x3b300cu: goto label_3b300c;
        case 0x3b3010u: goto label_3b3010;
        case 0x3b3014u: goto label_3b3014;
        case 0x3b3018u: goto label_3b3018;
        case 0x3b301cu: goto label_3b301c;
        case 0x3b3020u: goto label_3b3020;
        case 0x3b3024u: goto label_3b3024;
        case 0x3b3028u: goto label_3b3028;
        case 0x3b302cu: goto label_3b302c;
        case 0x3b3030u: goto label_3b3030;
        case 0x3b3034u: goto label_3b3034;
        case 0x3b3038u: goto label_3b3038;
        case 0x3b303cu: goto label_3b303c;
        case 0x3b3040u: goto label_3b3040;
        case 0x3b3044u: goto label_3b3044;
        case 0x3b3048u: goto label_3b3048;
        case 0x3b304cu: goto label_3b304c;
        case 0x3b3050u: goto label_3b3050;
        case 0x3b3054u: goto label_3b3054;
        case 0x3b3058u: goto label_3b3058;
        case 0x3b305cu: goto label_3b305c;
        case 0x3b3060u: goto label_3b3060;
        case 0x3b3064u: goto label_3b3064;
        case 0x3b3068u: goto label_3b3068;
        case 0x3b306cu: goto label_3b306c;
        case 0x3b3070u: goto label_3b3070;
        case 0x3b3074u: goto label_3b3074;
        case 0x3b3078u: goto label_3b3078;
        case 0x3b307cu: goto label_3b307c;
        case 0x3b3080u: goto label_3b3080;
        case 0x3b3084u: goto label_3b3084;
        case 0x3b3088u: goto label_3b3088;
        case 0x3b308cu: goto label_3b308c;
        case 0x3b3090u: goto label_3b3090;
        case 0x3b3094u: goto label_3b3094;
        case 0x3b3098u: goto label_3b3098;
        case 0x3b309cu: goto label_3b309c;
        case 0x3b30a0u: goto label_3b30a0;
        case 0x3b30a4u: goto label_3b30a4;
        case 0x3b30a8u: goto label_3b30a8;
        case 0x3b30acu: goto label_3b30ac;
        case 0x3b30b0u: goto label_3b30b0;
        case 0x3b30b4u: goto label_3b30b4;
        case 0x3b30b8u: goto label_3b30b8;
        case 0x3b30bcu: goto label_3b30bc;
        case 0x3b30c0u: goto label_3b30c0;
        case 0x3b30c4u: goto label_3b30c4;
        case 0x3b30c8u: goto label_3b30c8;
        case 0x3b30ccu: goto label_3b30cc;
        case 0x3b30d0u: goto label_3b30d0;
        case 0x3b30d4u: goto label_3b30d4;
        case 0x3b30d8u: goto label_3b30d8;
        case 0x3b30dcu: goto label_3b30dc;
        case 0x3b30e0u: goto label_3b30e0;
        case 0x3b30e4u: goto label_3b30e4;
        case 0x3b30e8u: goto label_3b30e8;
        case 0x3b30ecu: goto label_3b30ec;
        case 0x3b30f0u: goto label_3b30f0;
        case 0x3b30f4u: goto label_3b30f4;
        case 0x3b30f8u: goto label_3b30f8;
        case 0x3b30fcu: goto label_3b30fc;
        case 0x3b3100u: goto label_3b3100;
        case 0x3b3104u: goto label_3b3104;
        case 0x3b3108u: goto label_3b3108;
        case 0x3b310cu: goto label_3b310c;
        case 0x3b3110u: goto label_3b3110;
        case 0x3b3114u: goto label_3b3114;
        case 0x3b3118u: goto label_3b3118;
        case 0x3b311cu: goto label_3b311c;
        case 0x3b3120u: goto label_3b3120;
        case 0x3b3124u: goto label_3b3124;
        case 0x3b3128u: goto label_3b3128;
        case 0x3b312cu: goto label_3b312c;
        case 0x3b3130u: goto label_3b3130;
        case 0x3b3134u: goto label_3b3134;
        case 0x3b3138u: goto label_3b3138;
        case 0x3b313cu: goto label_3b313c;
        case 0x3b3140u: goto label_3b3140;
        case 0x3b3144u: goto label_3b3144;
        case 0x3b3148u: goto label_3b3148;
        case 0x3b314cu: goto label_3b314c;
        case 0x3b3150u: goto label_3b3150;
        case 0x3b3154u: goto label_3b3154;
        case 0x3b3158u: goto label_3b3158;
        case 0x3b315cu: goto label_3b315c;
        case 0x3b3160u: goto label_3b3160;
        case 0x3b3164u: goto label_3b3164;
        case 0x3b3168u: goto label_3b3168;
        case 0x3b316cu: goto label_3b316c;
        case 0x3b3170u: goto label_3b3170;
        case 0x3b3174u: goto label_3b3174;
        case 0x3b3178u: goto label_3b3178;
        case 0x3b317cu: goto label_3b317c;
        case 0x3b3180u: goto label_3b3180;
        case 0x3b3184u: goto label_3b3184;
        case 0x3b3188u: goto label_3b3188;
        case 0x3b318cu: goto label_3b318c;
        case 0x3b3190u: goto label_3b3190;
        case 0x3b3194u: goto label_3b3194;
        case 0x3b3198u: goto label_3b3198;
        case 0x3b319cu: goto label_3b319c;
        case 0x3b31a0u: goto label_3b31a0;
        case 0x3b31a4u: goto label_3b31a4;
        case 0x3b31a8u: goto label_3b31a8;
        case 0x3b31acu: goto label_3b31ac;
        case 0x3b31b0u: goto label_3b31b0;
        case 0x3b31b4u: goto label_3b31b4;
        case 0x3b31b8u: goto label_3b31b8;
        case 0x3b31bcu: goto label_3b31bc;
        case 0x3b31c0u: goto label_3b31c0;
        case 0x3b31c4u: goto label_3b31c4;
        case 0x3b31c8u: goto label_3b31c8;
        case 0x3b31ccu: goto label_3b31cc;
        case 0x3b31d0u: goto label_3b31d0;
        case 0x3b31d4u: goto label_3b31d4;
        case 0x3b31d8u: goto label_3b31d8;
        case 0x3b31dcu: goto label_3b31dc;
        case 0x3b31e0u: goto label_3b31e0;
        case 0x3b31e4u: goto label_3b31e4;
        case 0x3b31e8u: goto label_3b31e8;
        case 0x3b31ecu: goto label_3b31ec;
        case 0x3b31f0u: goto label_3b31f0;
        case 0x3b31f4u: goto label_3b31f4;
        case 0x3b31f8u: goto label_3b31f8;
        case 0x3b31fcu: goto label_3b31fc;
        case 0x3b3200u: goto label_3b3200;
        case 0x3b3204u: goto label_3b3204;
        case 0x3b3208u: goto label_3b3208;
        case 0x3b320cu: goto label_3b320c;
        case 0x3b3210u: goto label_3b3210;
        case 0x3b3214u: goto label_3b3214;
        case 0x3b3218u: goto label_3b3218;
        case 0x3b321cu: goto label_3b321c;
        case 0x3b3220u: goto label_3b3220;
        case 0x3b3224u: goto label_3b3224;
        case 0x3b3228u: goto label_3b3228;
        case 0x3b322cu: goto label_3b322c;
        case 0x3b3230u: goto label_3b3230;
        case 0x3b3234u: goto label_3b3234;
        case 0x3b3238u: goto label_3b3238;
        case 0x3b323cu: goto label_3b323c;
        case 0x3b3240u: goto label_3b3240;
        case 0x3b3244u: goto label_3b3244;
        case 0x3b3248u: goto label_3b3248;
        case 0x3b324cu: goto label_3b324c;
        case 0x3b3250u: goto label_3b3250;
        case 0x3b3254u: goto label_3b3254;
        case 0x3b3258u: goto label_3b3258;
        case 0x3b325cu: goto label_3b325c;
        case 0x3b3260u: goto label_3b3260;
        case 0x3b3264u: goto label_3b3264;
        case 0x3b3268u: goto label_3b3268;
        case 0x3b326cu: goto label_3b326c;
        case 0x3b3270u: goto label_3b3270;
        case 0x3b3274u: goto label_3b3274;
        case 0x3b3278u: goto label_3b3278;
        case 0x3b327cu: goto label_3b327c;
        case 0x3b3280u: goto label_3b3280;
        case 0x3b3284u: goto label_3b3284;
        case 0x3b3288u: goto label_3b3288;
        case 0x3b328cu: goto label_3b328c;
        case 0x3b3290u: goto label_3b3290;
        case 0x3b3294u: goto label_3b3294;
        case 0x3b3298u: goto label_3b3298;
        case 0x3b329cu: goto label_3b329c;
        case 0x3b32a0u: goto label_3b32a0;
        case 0x3b32a4u: goto label_3b32a4;
        case 0x3b32a8u: goto label_3b32a8;
        case 0x3b32acu: goto label_3b32ac;
        case 0x3b32b0u: goto label_3b32b0;
        case 0x3b32b4u: goto label_3b32b4;
        case 0x3b32b8u: goto label_3b32b8;
        case 0x3b32bcu: goto label_3b32bc;
        case 0x3b32c0u: goto label_3b32c0;
        case 0x3b32c4u: goto label_3b32c4;
        case 0x3b32c8u: goto label_3b32c8;
        case 0x3b32ccu: goto label_3b32cc;
        case 0x3b32d0u: goto label_3b32d0;
        case 0x3b32d4u: goto label_3b32d4;
        case 0x3b32d8u: goto label_3b32d8;
        case 0x3b32dcu: goto label_3b32dc;
        case 0x3b32e0u: goto label_3b32e0;
        case 0x3b32e4u: goto label_3b32e4;
        case 0x3b32e8u: goto label_3b32e8;
        case 0x3b32ecu: goto label_3b32ec;
        case 0x3b32f0u: goto label_3b32f0;
        case 0x3b32f4u: goto label_3b32f4;
        case 0x3b32f8u: goto label_3b32f8;
        case 0x3b32fcu: goto label_3b32fc;
        case 0x3b3300u: goto label_3b3300;
        case 0x3b3304u: goto label_3b3304;
        case 0x3b3308u: goto label_3b3308;
        case 0x3b330cu: goto label_3b330c;
        case 0x3b3310u: goto label_3b3310;
        case 0x3b3314u: goto label_3b3314;
        case 0x3b3318u: goto label_3b3318;
        case 0x3b331cu: goto label_3b331c;
        case 0x3b3320u: goto label_3b3320;
        case 0x3b3324u: goto label_3b3324;
        case 0x3b3328u: goto label_3b3328;
        case 0x3b332cu: goto label_3b332c;
        case 0x3b3330u: goto label_3b3330;
        case 0x3b3334u: goto label_3b3334;
        case 0x3b3338u: goto label_3b3338;
        case 0x3b333cu: goto label_3b333c;
        case 0x3b3340u: goto label_3b3340;
        case 0x3b3344u: goto label_3b3344;
        case 0x3b3348u: goto label_3b3348;
        case 0x3b334cu: goto label_3b334c;
        case 0x3b3350u: goto label_3b3350;
        case 0x3b3354u: goto label_3b3354;
        case 0x3b3358u: goto label_3b3358;
        case 0x3b335cu: goto label_3b335c;
        case 0x3b3360u: goto label_3b3360;
        case 0x3b3364u: goto label_3b3364;
        case 0x3b3368u: goto label_3b3368;
        case 0x3b336cu: goto label_3b336c;
        case 0x3b3370u: goto label_3b3370;
        case 0x3b3374u: goto label_3b3374;
        case 0x3b3378u: goto label_3b3378;
        case 0x3b337cu: goto label_3b337c;
        case 0x3b3380u: goto label_3b3380;
        case 0x3b3384u: goto label_3b3384;
        case 0x3b3388u: goto label_3b3388;
        case 0x3b338cu: goto label_3b338c;
        case 0x3b3390u: goto label_3b3390;
        case 0x3b3394u: goto label_3b3394;
        case 0x3b3398u: goto label_3b3398;
        case 0x3b339cu: goto label_3b339c;
        case 0x3b33a0u: goto label_3b33a0;
        case 0x3b33a4u: goto label_3b33a4;
        case 0x3b33a8u: goto label_3b33a8;
        case 0x3b33acu: goto label_3b33ac;
        case 0x3b33b0u: goto label_3b33b0;
        case 0x3b33b4u: goto label_3b33b4;
        case 0x3b33b8u: goto label_3b33b8;
        case 0x3b33bcu: goto label_3b33bc;
        case 0x3b33c0u: goto label_3b33c0;
        case 0x3b33c4u: goto label_3b33c4;
        case 0x3b33c8u: goto label_3b33c8;
        case 0x3b33ccu: goto label_3b33cc;
        case 0x3b33d0u: goto label_3b33d0;
        case 0x3b33d4u: goto label_3b33d4;
        case 0x3b33d8u: goto label_3b33d8;
        case 0x3b33dcu: goto label_3b33dc;
        case 0x3b33e0u: goto label_3b33e0;
        case 0x3b33e4u: goto label_3b33e4;
        case 0x3b33e8u: goto label_3b33e8;
        case 0x3b33ecu: goto label_3b33ec;
        case 0x3b33f0u: goto label_3b33f0;
        case 0x3b33f4u: goto label_3b33f4;
        case 0x3b33f8u: goto label_3b33f8;
        case 0x3b33fcu: goto label_3b33fc;
        case 0x3b3400u: goto label_3b3400;
        case 0x3b3404u: goto label_3b3404;
        case 0x3b3408u: goto label_3b3408;
        case 0x3b340cu: goto label_3b340c;
        case 0x3b3410u: goto label_3b3410;
        case 0x3b3414u: goto label_3b3414;
        case 0x3b3418u: goto label_3b3418;
        case 0x3b341cu: goto label_3b341c;
        case 0x3b3420u: goto label_3b3420;
        case 0x3b3424u: goto label_3b3424;
        case 0x3b3428u: goto label_3b3428;
        case 0x3b342cu: goto label_3b342c;
        case 0x3b3430u: goto label_3b3430;
        case 0x3b3434u: goto label_3b3434;
        case 0x3b3438u: goto label_3b3438;
        case 0x3b343cu: goto label_3b343c;
        case 0x3b3440u: goto label_3b3440;
        case 0x3b3444u: goto label_3b3444;
        case 0x3b3448u: goto label_3b3448;
        case 0x3b344cu: goto label_3b344c;
        case 0x3b3450u: goto label_3b3450;
        case 0x3b3454u: goto label_3b3454;
        case 0x3b3458u: goto label_3b3458;
        case 0x3b345cu: goto label_3b345c;
        case 0x3b3460u: goto label_3b3460;
        case 0x3b3464u: goto label_3b3464;
        case 0x3b3468u: goto label_3b3468;
        case 0x3b346cu: goto label_3b346c;
        case 0x3b3470u: goto label_3b3470;
        case 0x3b3474u: goto label_3b3474;
        case 0x3b3478u: goto label_3b3478;
        case 0x3b347cu: goto label_3b347c;
        case 0x3b3480u: goto label_3b3480;
        case 0x3b3484u: goto label_3b3484;
        case 0x3b3488u: goto label_3b3488;
        case 0x3b348cu: goto label_3b348c;
        case 0x3b3490u: goto label_3b3490;
        case 0x3b3494u: goto label_3b3494;
        case 0x3b3498u: goto label_3b3498;
        case 0x3b349cu: goto label_3b349c;
        case 0x3b34a0u: goto label_3b34a0;
        case 0x3b34a4u: goto label_3b34a4;
        case 0x3b34a8u: goto label_3b34a8;
        case 0x3b34acu: goto label_3b34ac;
        case 0x3b34b0u: goto label_3b34b0;
        case 0x3b34b4u: goto label_3b34b4;
        case 0x3b34b8u: goto label_3b34b8;
        case 0x3b34bcu: goto label_3b34bc;
        case 0x3b34c0u: goto label_3b34c0;
        case 0x3b34c4u: goto label_3b34c4;
        case 0x3b34c8u: goto label_3b34c8;
        case 0x3b34ccu: goto label_3b34cc;
        case 0x3b34d0u: goto label_3b34d0;
        case 0x3b34d4u: goto label_3b34d4;
        case 0x3b34d8u: goto label_3b34d8;
        case 0x3b34dcu: goto label_3b34dc;
        case 0x3b34e0u: goto label_3b34e0;
        case 0x3b34e4u: goto label_3b34e4;
        case 0x3b34e8u: goto label_3b34e8;
        case 0x3b34ecu: goto label_3b34ec;
        case 0x3b34f0u: goto label_3b34f0;
        case 0x3b34f4u: goto label_3b34f4;
        case 0x3b34f8u: goto label_3b34f8;
        case 0x3b34fcu: goto label_3b34fc;
        case 0x3b3500u: goto label_3b3500;
        case 0x3b3504u: goto label_3b3504;
        case 0x3b3508u: goto label_3b3508;
        case 0x3b350cu: goto label_3b350c;
        case 0x3b3510u: goto label_3b3510;
        case 0x3b3514u: goto label_3b3514;
        case 0x3b3518u: goto label_3b3518;
        case 0x3b351cu: goto label_3b351c;
        case 0x3b3520u: goto label_3b3520;
        case 0x3b3524u: goto label_3b3524;
        case 0x3b3528u: goto label_3b3528;
        case 0x3b352cu: goto label_3b352c;
        case 0x3b3530u: goto label_3b3530;
        case 0x3b3534u: goto label_3b3534;
        case 0x3b3538u: goto label_3b3538;
        case 0x3b353cu: goto label_3b353c;
        case 0x3b3540u: goto label_3b3540;
        case 0x3b3544u: goto label_3b3544;
        case 0x3b3548u: goto label_3b3548;
        case 0x3b354cu: goto label_3b354c;
        case 0x3b3550u: goto label_3b3550;
        case 0x3b3554u: goto label_3b3554;
        case 0x3b3558u: goto label_3b3558;
        case 0x3b355cu: goto label_3b355c;
        case 0x3b3560u: goto label_3b3560;
        case 0x3b3564u: goto label_3b3564;
        case 0x3b3568u: goto label_3b3568;
        case 0x3b356cu: goto label_3b356c;
        case 0x3b3570u: goto label_3b3570;
        case 0x3b3574u: goto label_3b3574;
        case 0x3b3578u: goto label_3b3578;
        case 0x3b357cu: goto label_3b357c;
        case 0x3b3580u: goto label_3b3580;
        case 0x3b3584u: goto label_3b3584;
        case 0x3b3588u: goto label_3b3588;
        case 0x3b358cu: goto label_3b358c;
        case 0x3b3590u: goto label_3b3590;
        case 0x3b3594u: goto label_3b3594;
        case 0x3b3598u: goto label_3b3598;
        case 0x3b359cu: goto label_3b359c;
        case 0x3b35a0u: goto label_3b35a0;
        case 0x3b35a4u: goto label_3b35a4;
        case 0x3b35a8u: goto label_3b35a8;
        case 0x3b35acu: goto label_3b35ac;
        case 0x3b35b0u: goto label_3b35b0;
        case 0x3b35b4u: goto label_3b35b4;
        case 0x3b35b8u: goto label_3b35b8;
        case 0x3b35bcu: goto label_3b35bc;
        case 0x3b35c0u: goto label_3b35c0;
        case 0x3b35c4u: goto label_3b35c4;
        case 0x3b35c8u: goto label_3b35c8;
        case 0x3b35ccu: goto label_3b35cc;
        case 0x3b35d0u: goto label_3b35d0;
        case 0x3b35d4u: goto label_3b35d4;
        case 0x3b35d8u: goto label_3b35d8;
        case 0x3b35dcu: goto label_3b35dc;
        case 0x3b35e0u: goto label_3b35e0;
        case 0x3b35e4u: goto label_3b35e4;
        case 0x3b35e8u: goto label_3b35e8;
        case 0x3b35ecu: goto label_3b35ec;
        case 0x3b35f0u: goto label_3b35f0;
        case 0x3b35f4u: goto label_3b35f4;
        case 0x3b35f8u: goto label_3b35f8;
        case 0x3b35fcu: goto label_3b35fc;
        case 0x3b3600u: goto label_3b3600;
        case 0x3b3604u: goto label_3b3604;
        case 0x3b3608u: goto label_3b3608;
        case 0x3b360cu: goto label_3b360c;
        case 0x3b3610u: goto label_3b3610;
        case 0x3b3614u: goto label_3b3614;
        case 0x3b3618u: goto label_3b3618;
        case 0x3b361cu: goto label_3b361c;
        case 0x3b3620u: goto label_3b3620;
        case 0x3b3624u: goto label_3b3624;
        case 0x3b3628u: goto label_3b3628;
        case 0x3b362cu: goto label_3b362c;
        case 0x3b3630u: goto label_3b3630;
        case 0x3b3634u: goto label_3b3634;
        case 0x3b3638u: goto label_3b3638;
        case 0x3b363cu: goto label_3b363c;
        default: break;
    }

    ctx->pc = 0x3b2c50u;

label_3b2c50:
    // 0x3b2c50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3b2c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3b2c54:
    // 0x3b2c54: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3b2c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3b2c58:
    // 0x3b2c58: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3b2c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3b2c5c:
    // 0x3b2c5c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b2c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3b2c60:
    // 0x3b2c60: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b2c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b2c64:
    // 0x3b2c64: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b2c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3b2c68:
    // 0x3b2c68: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b2c68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b2c6c:
    // 0x3b2c6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b2c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b2c70:
    // 0x3b2c70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b2c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b2c74:
    // 0x3b2c74: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x3b2c74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_3b2c78:
    // 0x3b2c78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b2c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b2c7c:
    // 0x3b2c7c: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x3b2c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
label_3b2c80:
    // 0x3b2c80: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3b2c80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3b2c84:
    // 0x3b2c84: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3b2c84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_3b2c88:
    // 0x3b2c88: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b2c88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3b2c8c:
    // 0x3b2c8c: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x3b2c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
label_3b2c90:
    // 0x3b2c90: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3b2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3b2c94:
    // 0x3b2c94: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x3b2c94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_3b2c98:
    // 0x3b2c98: 0x8c91001c  lw          $s1, 0x1C($a0)
    ctx->pc = 0x3b2c98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3b2c9c:
    // 0x3b2c9c: 0x90930011  lbu         $s3, 0x11($a0)
    ctx->pc = 0x3b2c9cu;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
label_3b2ca0:
    // 0x3b2ca0: 0x90650116  lbu         $a1, 0x116($v1)
    ctx->pc = 0x3b2ca0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
label_3b2ca4:
    // 0x3b2ca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b2ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2ca8:
    // 0x3b2ca8: 0x0  nop
    ctx->pc = 0x3b2ca8u;
    // NOP
label_3b2cac:
    // 0x3b2cac: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x3b2cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_3b2cb0:
    // 0x3b2cb0: 0x82220004  lb          $v0, 0x4($s1)
    ctx->pc = 0x3b2cb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_3b2cb4:
    // 0x3b2cb4: 0x8484000a  lh          $a0, 0xA($a0)
    ctx->pc = 0x3b2cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_3b2cb8:
    // 0x3b2cb8: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3b2cb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3b2cbc:
    // 0x3b2cbc: 0xb3082a  slt         $at, $a1, $s3
    ctx->pc = 0x3b2cbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_3b2cc0:
    // 0x3b2cc0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3b2cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3b2cc4:
    // 0x3b2cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b2cc8:
    // 0x3b2cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b2cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2ccc:
    // 0x3b2ccc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3b2cd0:
    if (ctx->pc == 0x3B2CD0u) {
        ctx->pc = 0x3B2CD0u;
            // 0x3b2cd0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B2CD4u;
        goto label_3b2cd4;
    }
    ctx->pc = 0x3B2CCCu;
    {
        const bool branch_taken_0x3b2ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2CCCu;
            // 0x3b2cd0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ccc) {
            ctx->pc = 0x3B2CD8u;
            goto label_3b2cd8;
        }
    }
    ctx->pc = 0x3B2CD4u;
label_3b2cd4:
    // 0x3b2cd4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b2cd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b2cd8:
    // 0x3b2cd8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3b2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3b2cdc:
    // 0x3b2cdc: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3b2cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3b2ce0:
    // 0x3b2ce0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b2ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b2ce4:
    // 0x3b2ce4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3b2ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3b2ce8:
    // 0x3b2ce8: 0x320f809  jalr        $t9
label_3b2cec:
    if (ctx->pc == 0x3B2CECu) {
        ctx->pc = 0x3B2CECu;
            // 0x3b2cec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3B2CF0u;
        goto label_3b2cf0;
    }
    ctx->pc = 0x3B2CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B2CF0u);
        ctx->pc = 0x3B2CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2CE8u;
            // 0x3b2cec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B2CF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B2CF0u; }
            if (ctx->pc != 0x3B2CF0u) { return; }
        }
        }
    }
    ctx->pc = 0x3B2CF0u;
label_3b2cf0:
    // 0x3b2cf0: 0x8684000a  lh          $a0, 0xA($s4)
    ctx->pc = 0x3b2cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_3b2cf4:
    // 0x3b2cf4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3b2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3b2cf8:
    // 0x3b2cf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b2cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b2cfc:
    // 0x3b2cfc: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3b2cfcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3b2d00:
    // 0x3b2d00: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x3b2d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_3b2d04:
    // 0x3b2d04: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3b2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3b2d08:
    // 0x3b2d08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b2d08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2d0c:
    // 0x3b2d0c: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x3b2d0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b2d10:
    // 0x3b2d10: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x3b2d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_3b2d14:
    // 0x3b2d14: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b2d18:
    // 0x3b2d18: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b2d18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3b2d1c:
    // 0x3b2d1c: 0x264501a0  addiu       $a1, $s2, 0x1A0
    ctx->pc = 0x3b2d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
label_3b2d20:
    // 0x3b2d20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b2d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b2d24:
    // 0x3b2d24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b2d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b2d28:
    // 0x3b2d28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b2d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b2d2c:
    // 0x3b2d2c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3b2d2cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2d30:
    // 0x3b2d30: 0x0  nop
    ctx->pc = 0x3b2d30u;
    // NOP
label_3b2d34:
    // 0x3b2d34: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b2d34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b2d38:
    // 0x3b2d38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2d3c:
    // 0x3b2d3c: 0x0  nop
    ctx->pc = 0x3b2d3cu;
    // NOP
label_3b2d40:
    // 0x3b2d40: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b2d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b2d44:
    // 0x3b2d44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b2d44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2d48:
    // 0x3b2d48: 0x0  nop
    ctx->pc = 0x3b2d48u;
    // NOP
label_3b2d4c:
    // 0x3b2d4c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b2d4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3b2d50:
    // 0x3b2d50: 0xc64201a8  lwc1        $f2, 0x1A8($s2)
    ctx->pc = 0x3b2d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b2d54:
    // 0x3b2d54: 0xc64001ac  lwc1        $f0, 0x1AC($s2)
    ctx->pc = 0x3b2d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2d58:
    // 0x3b2d58: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b2d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3b2d5c:
    // 0x3b2d5c: 0x46020b1d  msub.s      $f12, $f1, $f2
    ctx->pc = 0x3b2d5cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3b2d60:
    // 0x3b2d60: 0x46026380  add.s       $f14, $f12, $f2
    ctx->pc = 0x3b2d60u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_3b2d64:
    // 0x3b2d64: 0xc0bc284  jal         func_2F0A10
label_3b2d68:
    if (ctx->pc == 0x3B2D68u) {
        ctx->pc = 0x3B2D68u;
            // 0x3b2d68: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x3B2D6Cu;
        goto label_3b2d6c;
    }
    ctx->pc = 0x3B2D64u;
    SET_GPR_U32(ctx, 31, 0x3B2D6Cu);
    ctx->pc = 0x3B2D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2D64u;
            // 0x3b2d68: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2D6Cu; }
        if (ctx->pc != 0x3B2D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2D6Cu; }
        if (ctx->pc != 0x3B2D6Cu) { return; }
    }
    ctx->pc = 0x3B2D6Cu;
label_3b2d6c:
    // 0x3b2d6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3b2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3b2d70:
    // 0x3b2d70: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3b2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3b2d74:
    // 0x3b2d74: 0xc4400844  lwc1        $f0, 0x844($v0)
    ctx->pc = 0x3b2d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b2d78:
    // 0x3b2d78: 0x8c44083c  lw          $a0, 0x83C($v0)
    ctx->pc = 0x3b2d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2108)));
label_3b2d7c:
    // 0x3b2d7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2d7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b2d80:
    // 0x3b2d80: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x3b2d80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_3b2d84:
    // 0x3b2d84: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x3b2d84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_3b2d88:
    // 0x3b2d88: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_3b2d8c:
    if (ctx->pc == 0x3B2D8Cu) {
        ctx->pc = 0x3B2D8Cu;
            // 0x3b2d8c: 0x8c550840  lw          $s5, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->pc = 0x3B2D90u;
        goto label_3b2d90;
    }
    ctx->pc = 0x3B2D88u;
    {
        const bool branch_taken_0x3b2d88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2D88u;
            // 0x3b2d8c: 0x8c550840  lw          $s5, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2d88) {
            ctx->pc = 0x3B2D9Cu;
            goto label_3b2d9c;
        }
    }
    ctx->pc = 0x3B2D90u;
label_3b2d90:
    // 0x3b2d90: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x3b2d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_3b2d94:
    // 0x3b2d94: 0x2415003b  addiu       $s5, $zero, 0x3B
    ctx->pc = 0x3b2d94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_3b2d98:
    // 0x3b2d98: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b2d98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b2d9c:
    // 0x3b2d9c: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x3b2d9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_3b2da0:
    // 0x3b2da0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_3b2da4:
    if (ctx->pc == 0x3B2DA4u) {
        ctx->pc = 0x3B2DA4u;
            // 0x3b2da4: 0xc623000c  lwc1        $f3, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x3B2DA8u;
        goto label_3b2da8;
    }
    ctx->pc = 0x3B2DA0u;
    {
        const bool branch_taken_0x3b2da0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3B2DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2DA0u;
            // 0x3b2da4: 0xc623000c  lwc1        $f3, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2da0) {
            ctx->pc = 0x3B2DB4u;
            goto label_3b2db4;
        }
    }
    ctx->pc = 0x3B2DA8u;
label_3b2da8:
    // 0x3b2da8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2dac:
    // 0x3b2dac: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b2db0:
    if (ctx->pc == 0x3B2DB0u) {
        ctx->pc = 0x3B2DB0u;
            // 0x3b2db0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B2DB4u;
        goto label_3b2db4;
    }
    ctx->pc = 0x3B2DACu;
    {
        const bool branch_taken_0x3b2dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2DACu;
            // 0x3b2db0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2dac) {
            ctx->pc = 0x3B2DD0u;
            goto label_3b2dd0;
        }
    }
    ctx->pc = 0x3B2DB4u;
label_3b2db4:
    // 0x3b2db4: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x3b2db4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_3b2db8:
    // 0x3b2db8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3b2db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3b2dbc:
    // 0x3b2dbc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3b2dbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3b2dc0:
    // 0x3b2dc0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3b2dc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2dc4:
    // 0x3b2dc4: 0x0  nop
    ctx->pc = 0x3b2dc4u;
    // NOP
label_3b2dc8:
    // 0x3b2dc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b2dc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b2dcc:
    // 0x3b2dcc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b2dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b2dd0:
    // 0x3b2dd0: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x3b2dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
label_3b2dd4:
    // 0x3b2dd4: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x3b2dd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_3b2dd8:
    // 0x3b2dd8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3b2dd8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b2ddc:
    // 0x3b2ddc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b2de0:
    if (ctx->pc == 0x3B2DE0u) {
        ctx->pc = 0x3B2DE0u;
            // 0x3b2de0: 0x46030082  mul.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->pc = 0x3B2DE4u;
        goto label_3b2de4;
    }
    ctx->pc = 0x3B2DDCu;
    {
        const bool branch_taken_0x3b2ddc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B2DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2DDCu;
            // 0x3b2de0: 0x46030082  mul.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ddc) {
            ctx->pc = 0x3B2DF0u;
            goto label_3b2df0;
        }
    }
    ctx->pc = 0x3B2DE4u;
label_3b2de4:
    // 0x3b2de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b2de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2de8:
    // 0x3b2de8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b2dec:
    if (ctx->pc == 0x3B2DECu) {
        ctx->pc = 0x3B2DECu;
            // 0x3b2dec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B2DF0u;
        goto label_3b2df0;
    }
    ctx->pc = 0x3B2DE8u;
    {
        const bool branch_taken_0x3b2de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2DE8u;
            // 0x3b2dec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2de8) {
            ctx->pc = 0x3B2E0Cu;
            goto label_3b2e0c;
        }
    }
    ctx->pc = 0x3B2DF0u;
label_3b2df0:
    // 0x3b2df0: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x3b2df0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b2df4:
    // 0x3b2df4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b2df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b2df8:
    // 0x3b2df8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3b2df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3b2dfc:
    // 0x3b2dfc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3b2dfcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2e00:
    // 0x3b2e00: 0x0  nop
    ctx->pc = 0x3b2e00u;
    // NOP
label_3b2e04:
    // 0x3b2e04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b2e04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b2e08:
    // 0x3b2e08: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b2e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b2e0c:
    // 0x3b2e0c: 0x4603001a  mula.s      $f0, $f3
    ctx->pc = 0x3b2e0cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3b2e10:
    // 0x3b2e10: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x3b2e10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_3b2e14:
    // 0x3b2e14: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x3b2e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3b2e18:
    // 0x3b2e18: 0x3c056666  lui         $a1, 0x6666
    ctx->pc = 0x3b2e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26214 << 16));
label_3b2e1c:
    // 0x3b2e1c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2e1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b2e20:
    // 0x3b2e20: 0x34a56667  ori         $a1, $a1, 0x6667
    ctx->pc = 0x3b2e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26215);
label_3b2e24:
    // 0x3b2e24: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x3b2e24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3b2e28:
    // 0x3b2e28: 0x24043  sra         $t0, $v0, 1
    ctx->pc = 0x3b2e28u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
label_3b2e2c:
    // 0x3b2e2c: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x3b2e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_3b2e30:
    // 0x3b2e30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b2e30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b2e34:
    // 0x3b2e34: 0x2810  mfhi        $a1
    ctx->pc = 0x3b2e34u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3b2e38:
    // 0x3b2e38: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x3b2e38u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_3b2e3c:
    // 0x3b2e3c: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x3b2e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3b2e40:
    // 0x3b2e40: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x3b2e40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3b2e44:
    // 0x3b2e44: 0x24e5000d  addiu       $a1, $a3, 0xD
    ctx->pc = 0x3b2e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 13));
label_3b2e48:
    // 0x3b2e48: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3b2e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3b2e4c:
    // 0x3b2e4c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3b2e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3b2e50:
    // 0x3b2e50: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x3b2e50u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_3b2e54:
    // 0x3b2e54: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3b2e54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3b2e58:
    // 0x3b2e58: 0x86b023  subu        $s6, $a0, $a2
    ctx->pc = 0x3b2e58u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3b2e5c:
    // 0x3b2e5c: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x3b2e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_3b2e60:
    // 0x3b2e60: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3b2e60u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2e64:
    // 0x3b2e64: 0x0  nop
    ctx->pc = 0x3b2e64u;
    // NOP
label_3b2e68:
    // 0x3b2e68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b2e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b2e6c:
    // 0x3b2e6c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_3b2e70:
    if (ctx->pc == 0x3B2E70u) {
        ctx->pc = 0x3B2E70u;
            // 0x3b2e70: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x3B2E74u;
        goto label_3b2e74;
    }
    ctx->pc = 0x3B2E6Cu;
    {
        const bool branch_taken_0x3b2e6c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3B2E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2E6Cu;
            // 0x3b2e70: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2e6c) {
            ctx->pc = 0x3B2E80u;
            goto label_3b2e80;
        }
    }
    ctx->pc = 0x3B2E74u;
label_3b2e74:
    // 0x3b2e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2e78:
    // 0x3b2e78: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b2e7c:
    if (ctx->pc == 0x3B2E7Cu) {
        ctx->pc = 0x3B2E7Cu;
            // 0x3b2e7c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B2E80u;
        goto label_3b2e80;
    }
    ctx->pc = 0x3B2E78u;
    {
        const bool branch_taken_0x3b2e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2E78u;
            // 0x3b2e7c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2e78) {
            ctx->pc = 0x3B2E9Cu;
            goto label_3b2e9c;
        }
    }
    ctx->pc = 0x3B2E80u;
label_3b2e80:
    // 0x3b2e80: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3b2e80u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_3b2e84:
    // 0x3b2e84: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3b2e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3b2e88:
    // 0x3b2e88: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b2e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3b2e8c:
    // 0x3b2e8c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b2e8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2e90:
    // 0x3b2e90: 0x0  nop
    ctx->pc = 0x3b2e90u;
    // NOP
label_3b2e94:
    // 0x3b2e94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b2e94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b2e98:
    // 0x3b2e98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b2e98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b2e9c:
    // 0x3b2e9c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b2ea0:
    if (ctx->pc == 0x3B2EA0u) {
        ctx->pc = 0x3B2EA0u;
            // 0x3b2ea0: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3B2EA4u;
        goto label_3b2ea4;
    }
    ctx->pc = 0x3B2E9Cu;
    {
        const bool branch_taken_0x3b2e9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B2EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2E9Cu;
            // 0x3b2ea0: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2e9c) {
            ctx->pc = 0x3B2EB0u;
            goto label_3b2eb0;
        }
    }
    ctx->pc = 0x3B2EA4u;
label_3b2ea4:
    // 0x3b2ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b2ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2ea8:
    // 0x3b2ea8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b2eac:
    if (ctx->pc == 0x3B2EACu) {
        ctx->pc = 0x3B2EACu;
            // 0x3b2eac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B2EB0u;
        goto label_3b2eb0;
    }
    ctx->pc = 0x3B2EA8u;
    {
        const bool branch_taken_0x3b2ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2EA8u;
            // 0x3b2eac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ea8) {
            ctx->pc = 0x3B2ECCu;
            goto label_3b2ecc;
        }
    }
    ctx->pc = 0x3B2EB0u;
label_3b2eb0:
    // 0x3b2eb0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b2eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b2eb4:
    // 0x3b2eb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b2eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b2eb8:
    // 0x3b2eb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b2eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b2ebc:
    // 0x3b2ebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2ec0:
    // 0x3b2ec0: 0x0  nop
    ctx->pc = 0x3b2ec0u;
    // NOP
label_3b2ec4:
    // 0x3b2ec4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b2ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b2ec8:
    // 0x3b2ec8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b2ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b2ecc:
    // 0x3b2ecc: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3b2eccu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3b2ed0:
    // 0x3b2ed0: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x3b2ed0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3b2ed4:
    // 0x3b2ed4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b2ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b2ed8:
    // 0x3b2ed8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b2ed8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3b2edc:
    // 0x3b2edc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b2edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b2ee0:
    // 0x3b2ee0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b2ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b2ee4:
    // 0x3b2ee4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b2ee4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2ee8:
    // 0x3b2ee8: 0x0  nop
    ctx->pc = 0x3b2ee8u;
    // NOP
label_3b2eec:
    // 0x3b2eec: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b2eecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b2ef0:
    // 0x3b2ef0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b2ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b2ef4:
    // 0x3b2ef4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2ef8:
    // 0x3b2ef8: 0x0  nop
    ctx->pc = 0x3b2ef8u;
    // NOP
label_3b2efc:
    // 0x3b2efc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b2efcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b2f00:
    // 0x3b2f00: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b2f00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b2f04:
    // 0x3b2f04: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b2f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3b2f08:
    // 0x3b2f08: 0xc0bc284  jal         func_2F0A10
label_3b2f0c:
    if (ctx->pc == 0x3B2F0Cu) {
        ctx->pc = 0x3B2F0Cu;
            // 0x3b2f0c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3B2F10u;
        goto label_3b2f10;
    }
    ctx->pc = 0x3B2F08u;
    SET_GPR_U32(ctx, 31, 0x3B2F10u);
    ctx->pc = 0x3B2F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2F08u;
            // 0x3b2f0c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2F10u; }
        if (ctx->pc != 0x3B2F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2F10u; }
        if (ctx->pc != 0x3B2F10u) { return; }
    }
    ctx->pc = 0x3B2F10u;
label_3b2f10:
    // 0x3b2f10: 0x92240007  lbu         $a0, 0x7($s1)
    ctx->pc = 0x3b2f10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_3b2f14:
    // 0x3b2f14: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_3b2f18:
    if (ctx->pc == 0x3B2F18u) {
        ctx->pc = 0x3B2F18u;
            // 0x3b2f18: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x3B2F1Cu;
        goto label_3b2f1c;
    }
    ctx->pc = 0x3B2F14u;
    {
        const bool branch_taken_0x3b2f14 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3b2f14) {
            ctx->pc = 0x3B2F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2F14u;
            // 0x3b2f18: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B2F28u;
            goto label_3b2f28;
        }
    }
    ctx->pc = 0x3B2F1Cu;
label_3b2f1c:
    // 0x3b2f1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b2f1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2f20:
    // 0x3b2f20: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b2f24:
    if (ctx->pc == 0x3B2F24u) {
        ctx->pc = 0x3B2F24u;
            // 0x3b2f24: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B2F28u;
        goto label_3b2f28;
    }
    ctx->pc = 0x3B2F20u;
    {
        const bool branch_taken_0x3b2f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2F20u;
            // 0x3b2f24: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2f20) {
            ctx->pc = 0x3B2F40u;
            goto label_3b2f40;
        }
    }
    ctx->pc = 0x3B2F28u;
label_3b2f28:
    // 0x3b2f28: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b2f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3b2f2c:
    // 0x3b2f2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b2f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b2f30:
    // 0x3b2f30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2f30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2f34:
    // 0x3b2f34: 0x0  nop
    ctx->pc = 0x3b2f34u;
    // NOP
label_3b2f38:
    // 0x3b2f38: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b2f38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b2f3c:
    // 0x3b2f3c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b2f3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b2f40:
    // 0x3b2f40: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3b2f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b2f44:
    // 0x3b2f44: 0x26c2000d  addiu       $v0, $s6, 0xD
    ctx->pc = 0x3b2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 13));
label_3b2f48:
    // 0x3b2f48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b2f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2f4c:
    // 0x3b2f4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3b2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3b2f50:
    // 0x3b2f50: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b2f50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3b2f54:
    // 0x3b2f54: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x3b2f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3b2f58:
    // 0x3b2f58: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_3b2f5c:
    if (ctx->pc == 0x3B2F5Cu) {
        ctx->pc = 0x3B2F5Cu;
            // 0x3b2f5c: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->pc = 0x3B2F60u;
        goto label_3b2f60;
    }
    ctx->pc = 0x3B2F58u;
    {
        const bool branch_taken_0x3b2f58 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3B2F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2F58u;
            // 0x3b2f5c: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2f58) {
            ctx->pc = 0x3B2F6Cu;
            goto label_3b2f6c;
        }
    }
    ctx->pc = 0x3B2F60u;
label_3b2f60:
    // 0x3b2f60: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b2f60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2f64:
    // 0x3b2f64: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b2f68:
    if (ctx->pc == 0x3B2F68u) {
        ctx->pc = 0x3B2F68u;
            // 0x3b2f68: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B2F6Cu;
        goto label_3b2f6c;
    }
    ctx->pc = 0x3B2F64u;
    {
        const bool branch_taken_0x3b2f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2F64u;
            // 0x3b2f68: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2f64) {
            ctx->pc = 0x3B2F88u;
            goto label_3b2f88;
        }
    }
    ctx->pc = 0x3B2F6Cu;
label_3b2f6c:
    // 0x3b2f6c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3b2f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3b2f70:
    // 0x3b2f70: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b2f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3b2f74:
    // 0x3b2f74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b2f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b2f78:
    // 0x3b2f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2f7c:
    // 0x3b2f7c: 0x0  nop
    ctx->pc = 0x3b2f7cu;
    // NOP
label_3b2f80:
    // 0x3b2f80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b2f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b2f84:
    // 0x3b2f84: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b2f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b2f88:
    // 0x3b2f88: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x3b2f88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_3b2f8c:
    // 0x3b2f8c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b2f90:
    if (ctx->pc == 0x3B2F90u) {
        ctx->pc = 0x3B2F90u;
            // 0x3b2f90: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3B2F94u;
        goto label_3b2f94;
    }
    ctx->pc = 0x3B2F8Cu;
    {
        const bool branch_taken_0x3b2f8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B2F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2F8Cu;
            // 0x3b2f90: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2f8c) {
            ctx->pc = 0x3B2FA0u;
            goto label_3b2fa0;
        }
    }
    ctx->pc = 0x3B2F94u;
label_3b2f94:
    // 0x3b2f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b2f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2f98:
    // 0x3b2f98: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b2f9c:
    if (ctx->pc == 0x3B2F9Cu) {
        ctx->pc = 0x3B2F9Cu;
            // 0x3b2f9c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B2FA0u;
        goto label_3b2fa0;
    }
    ctx->pc = 0x3B2F98u;
    {
        const bool branch_taken_0x3b2f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2F98u;
            // 0x3b2f9c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2f98) {
            ctx->pc = 0x3B2FBCu;
            goto label_3b2fbc;
        }
    }
    ctx->pc = 0x3B2FA0u;
label_3b2fa0:
    // 0x3b2fa0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b2fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b2fa4:
    // 0x3b2fa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b2fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b2fa8:
    // 0x3b2fa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b2fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b2fac:
    // 0x3b2fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2fb0:
    // 0x3b2fb0: 0x0  nop
    ctx->pc = 0x3b2fb0u;
    // NOP
label_3b2fb4:
    // 0x3b2fb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b2fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b2fb8:
    // 0x3b2fb8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b2fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b2fbc:
    // 0x3b2fbc: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3b2fbcu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3b2fc0:
    // 0x3b2fc0: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x3b2fc0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3b2fc4:
    // 0x3b2fc4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b2fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b2fc8:
    // 0x3b2fc8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b2fc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3b2fcc:
    // 0x3b2fcc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b2fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b2fd0:
    // 0x3b2fd0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b2fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b2fd4:
    // 0x3b2fd4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b2fd4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2fd8:
    // 0x3b2fd8: 0x0  nop
    ctx->pc = 0x3b2fd8u;
    // NOP
label_3b2fdc:
    // 0x3b2fdc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b2fdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b2fe0:
    // 0x3b2fe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b2fe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b2fe4:
    // 0x3b2fe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b2fe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b2fe8:
    // 0x3b2fe8: 0x0  nop
    ctx->pc = 0x3b2fe8u;
    // NOP
label_3b2fec:
    // 0x3b2fec: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b2fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b2ff0:
    // 0x3b2ff0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b2ff0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b2ff4:
    // 0x3b2ff4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b2ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3b2ff8:
    // 0x3b2ff8: 0xc0bc284  jal         func_2F0A10
label_3b2ffc:
    if (ctx->pc == 0x3B2FFCu) {
        ctx->pc = 0x3B2FFCu;
            // 0x3b2ffc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3B3000u;
        goto label_3b3000;
    }
    ctx->pc = 0x3B2FF8u;
    SET_GPR_U32(ctx, 31, 0x3B3000u);
    ctx->pc = 0x3B2FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2FF8u;
            // 0x3b2ffc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3000u; }
        if (ctx->pc != 0x3B3000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3000u; }
        if (ctx->pc != 0x3B3000u) { return; }
    }
    ctx->pc = 0x3B3000u;
label_3b3000:
    // 0x3b3000: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x3b3000u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_3b3004:
    // 0x3b3004: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b3008:
    if (ctx->pc == 0x3B3008u) {
        ctx->pc = 0x3B3008u;
            // 0x3b3008: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B300Cu;
        goto label_3b300c;
    }
    ctx->pc = 0x3B3004u;
    {
        const bool branch_taken_0x3b3004 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b3004) {
            ctx->pc = 0x3B3008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3004u;
            // 0x3b3008: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3018u;
            goto label_3b3018;
        }
    }
    ctx->pc = 0x3B300Cu;
label_3b300c:
    // 0x3b300c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b300cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3010:
    // 0x3b3010: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b3014:
    if (ctx->pc == 0x3B3014u) {
        ctx->pc = 0x3B3014u;
            // 0x3b3014: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3018u;
        goto label_3b3018;
    }
    ctx->pc = 0x3B3010u;
    {
        const bool branch_taken_0x3b3010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3010u;
            // 0x3b3014: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3010) {
            ctx->pc = 0x3B3030u;
            goto label_3b3030;
        }
    }
    ctx->pc = 0x3B3018u;
label_3b3018:
    // 0x3b3018: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b3018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b301c:
    // 0x3b301c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b301cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3020:
    // 0x3b3020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3024:
    // 0x3b3024: 0x0  nop
    ctx->pc = 0x3b3024u;
    // NOP
label_3b3028:
    // 0x3b3028: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b3028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b302c:
    // 0x3b302c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b302cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b3030:
    // 0x3b3030: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3b3030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b3034:
    // 0x3b3034: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x3b3034u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_3b3038:
    // 0x3b3038: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b3038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b303c:
    // 0x3b303c: 0x26450170  addiu       $a1, $s2, 0x170
    ctx->pc = 0x3b303cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
label_3b3040:
    // 0x3b3040: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b3040u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3b3044:
    // 0x3b3044: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b3048:
    if (ctx->pc == 0x3B3048u) {
        ctx->pc = 0x3B3048u;
            // 0x3b3048: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->pc = 0x3B304Cu;
        goto label_3b304c;
    }
    ctx->pc = 0x3B3044u;
    {
        const bool branch_taken_0x3b3044 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B3048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3044u;
            // 0x3b3048: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3044) {
            ctx->pc = 0x3B3058u;
            goto label_3b3058;
        }
    }
    ctx->pc = 0x3B304Cu;
label_3b304c:
    // 0x3b304c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b304cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3050:
    // 0x3b3050: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b3054:
    if (ctx->pc == 0x3B3054u) {
        ctx->pc = 0x3B3054u;
            // 0x3b3054: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3058u;
        goto label_3b3058;
    }
    ctx->pc = 0x3B3050u;
    {
        const bool branch_taken_0x3b3050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3050u;
            // 0x3b3054: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3050) {
            ctx->pc = 0x3B3074u;
            goto label_3b3074;
        }
    }
    ctx->pc = 0x3B3058u;
label_3b3058:
    // 0x3b3058: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b3058u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b305c:
    // 0x3b305c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b305cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b3060:
    // 0x3b3060: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3064:
    // 0x3b3064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3068:
    // 0x3b3068: 0x0  nop
    ctx->pc = 0x3b3068u;
    // NOP
label_3b306c:
    // 0x3b306c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b306cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b3070:
    // 0x3b3070: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b3070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b3074:
    // 0x3b3074: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x3b3074u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_3b3078:
    // 0x3b3078: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b307c:
    if (ctx->pc == 0x3B307Cu) {
        ctx->pc = 0x3B307Cu;
            // 0x3b307c: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3B3080u;
        goto label_3b3080;
    }
    ctx->pc = 0x3B3078u;
    {
        const bool branch_taken_0x3b3078 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B307Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3078u;
            // 0x3b307c: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3078) {
            ctx->pc = 0x3B308Cu;
            goto label_3b308c;
        }
    }
    ctx->pc = 0x3B3080u;
label_3b3080:
    // 0x3b3080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3084:
    // 0x3b3084: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b3088:
    if (ctx->pc == 0x3B3088u) {
        ctx->pc = 0x3B3088u;
            // 0x3b3088: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B308Cu;
        goto label_3b308c;
    }
    ctx->pc = 0x3B3084u;
    {
        const bool branch_taken_0x3b3084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3084u;
            // 0x3b3088: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3084) {
            ctx->pc = 0x3B30A8u;
            goto label_3b30a8;
        }
    }
    ctx->pc = 0x3B308Cu;
label_3b308c:
    // 0x3b308c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b308cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b3090:
    // 0x3b3090: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b3090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b3094:
    // 0x3b3094: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3098:
    // 0x3b3098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b309c:
    // 0x3b309c: 0x0  nop
    ctx->pc = 0x3b309cu;
    // NOP
label_3b30a0:
    // 0x3b30a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b30a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b30a4:
    // 0x3b30a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b30a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b30a8:
    // 0x3b30a8: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3b30a8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3b30ac:
    // 0x3b30ac: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x3b30acu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3b30b0:
    // 0x3b30b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b30b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b30b4:
    // 0x3b30b4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b30b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3b30b8:
    // 0x3b30b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b30b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b30bc:
    // 0x3b30bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b30bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b30c0:
    // 0x3b30c0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b30c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b30c4:
    // 0x3b30c4: 0x0  nop
    ctx->pc = 0x3b30c4u;
    // NOP
label_3b30c8:
    // 0x3b30c8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b30c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b30cc:
    // 0x3b30cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b30ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b30d0:
    // 0x3b30d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b30d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b30d4:
    // 0x3b30d4: 0x0  nop
    ctx->pc = 0x3b30d4u;
    // NOP
label_3b30d8:
    // 0x3b30d8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b30d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b30dc:
    // 0x3b30dc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b30dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b30e0:
    // 0x3b30e0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b30e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3b30e4:
    // 0x3b30e4: 0xc0bc284  jal         func_2F0A10
label_3b30e8:
    if (ctx->pc == 0x3B30E8u) {
        ctx->pc = 0x3B30E8u;
            // 0x3b30e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3B30ECu;
        goto label_3b30ec;
    }
    ctx->pc = 0x3B30E4u;
    SET_GPR_U32(ctx, 31, 0x3B30ECu);
    ctx->pc = 0x3B30E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B30E4u;
            // 0x3b30e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B30ECu; }
        if (ctx->pc != 0x3B30ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B30ECu; }
        if (ctx->pc != 0x3B30ECu) { return; }
    }
    ctx->pc = 0x3B30ECu;
label_3b30ec:
    // 0x3b30ec: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x3b30ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_3b30f0:
    // 0x3b30f0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b30f4:
    if (ctx->pc == 0x3B30F4u) {
        ctx->pc = 0x3B30F4u;
            // 0x3b30f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B30F8u;
        goto label_3b30f8;
    }
    ctx->pc = 0x3B30F0u;
    {
        const bool branch_taken_0x3b30f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b30f0) {
            ctx->pc = 0x3B30F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B30F0u;
            // 0x3b30f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3104u;
            goto label_3b3104;
        }
    }
    ctx->pc = 0x3B30F8u;
label_3b30f8:
    // 0x3b30f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b30f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b30fc:
    // 0x3b30fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b3100:
    if (ctx->pc == 0x3B3100u) {
        ctx->pc = 0x3B3100u;
            // 0x3b3100: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3104u;
        goto label_3b3104;
    }
    ctx->pc = 0x3B30FCu;
    {
        const bool branch_taken_0x3b30fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B30FCu;
            // 0x3b3100: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b30fc) {
            ctx->pc = 0x3B311Cu;
            goto label_3b311c;
        }
    }
    ctx->pc = 0x3B3104u;
label_3b3104:
    // 0x3b3104: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b3104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b3108:
    // 0x3b3108: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b310c:
    // 0x3b310c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b310cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3110:
    // 0x3b3110: 0x0  nop
    ctx->pc = 0x3b3110u;
    // NOP
label_3b3114:
    // 0x3b3114: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b3114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b3118:
    // 0x3b3118: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b3118u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b311c:
    // 0x3b311c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3b311cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_3b3120:
    // 0x3b3120: 0x1527c2  srl         $a0, $s5, 31
    ctx->pc = 0x3b3120u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_3b3124:
    // 0x3b3124: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3b3124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_3b3128:
    // 0x3b3128: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x3b3128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3b312c:
    // 0x3b312c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b312cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3130:
    // 0x3b3130: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3b3130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b3134:
    // 0x3b3134: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b3134u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3b3138:
    // 0x3b3138: 0x1810  mfhi        $v1
    ctx->pc = 0x3b3138u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3b313c:
    // 0x3b313c: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x3b313cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_3b3140:
    // 0x3b3140: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3b3140u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_3b3144:
    // 0x3b3144: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3b3144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3b3148:
    // 0x3b3148: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3b3148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3b314c:
    // 0x3b314c: 0x24a3000d  addiu       $v1, $a1, 0xD
    ctx->pc = 0x3b314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
label_3b3150:
    // 0x3b3150: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b3150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3b3154:
    // 0x3b3154: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3b3154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3b3158:
    // 0x3b3158: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3b3158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3b315c:
    // 0x3b315c: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x3b315cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_3b3160:
    // 0x3b3160: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3b3160u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3b3164:
    // 0x3b3164: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b3168:
    if (ctx->pc == 0x3B3168u) {
        ctx->pc = 0x3B3168u;
            // 0x3b3168: 0x2a4a823  subu        $s5, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->pc = 0x3B316Cu;
        goto label_3b316c;
    }
    ctx->pc = 0x3B3164u;
    {
        const bool branch_taken_0x3b3164 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B3168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3164u;
            // 0x3b3168: 0x2a4a823  subu        $s5, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3164) {
            ctx->pc = 0x3B3178u;
            goto label_3b3178;
        }
    }
    ctx->pc = 0x3B316Cu;
label_3b316c:
    // 0x3b316c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b316cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3170:
    // 0x3b3170: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b3174:
    if (ctx->pc == 0x3B3174u) {
        ctx->pc = 0x3B3174u;
            // 0x3b3174: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3178u;
        goto label_3b3178;
    }
    ctx->pc = 0x3B3170u;
    {
        const bool branch_taken_0x3b3170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3170u;
            // 0x3b3174: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3170) {
            ctx->pc = 0x3B3194u;
            goto label_3b3194;
        }
    }
    ctx->pc = 0x3B3178u;
label_3b3178:
    // 0x3b3178: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b3178u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b317c:
    // 0x3b317c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b3180:
    // 0x3b3180: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3184:
    // 0x3b3184: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3184u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3188:
    // 0x3b3188: 0x0  nop
    ctx->pc = 0x3b3188u;
    // NOP
label_3b318c:
    // 0x3b318c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b318cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b3190:
    // 0x3b3190: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b3190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b3194:
    // 0x3b3194: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x3b3194u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_3b3198:
    // 0x3b3198: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b319c:
    if (ctx->pc == 0x3B319Cu) {
        ctx->pc = 0x3B319Cu;
            // 0x3b319c: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3B31A0u;
        goto label_3b31a0;
    }
    ctx->pc = 0x3B3198u;
    {
        const bool branch_taken_0x3b3198 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B319Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3198u;
            // 0x3b319c: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3198) {
            ctx->pc = 0x3B31ACu;
            goto label_3b31ac;
        }
    }
    ctx->pc = 0x3B31A0u;
label_3b31a0:
    // 0x3b31a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b31a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b31a4:
    // 0x3b31a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b31a8:
    if (ctx->pc == 0x3B31A8u) {
        ctx->pc = 0x3B31A8u;
            // 0x3b31a8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B31ACu;
        goto label_3b31ac;
    }
    ctx->pc = 0x3B31A4u;
    {
        const bool branch_taken_0x3b31a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B31A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B31A4u;
            // 0x3b31a8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b31a4) {
            ctx->pc = 0x3B31C8u;
            goto label_3b31c8;
        }
    }
    ctx->pc = 0x3B31ACu;
label_3b31ac:
    // 0x3b31ac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b31acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b31b0:
    // 0x3b31b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b31b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b31b4:
    // 0x3b31b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b31b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b31b8:
    // 0x3b31b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b31b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b31bc:
    // 0x3b31bc: 0x0  nop
    ctx->pc = 0x3b31bcu;
    // NOP
label_3b31c0:
    // 0x3b31c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b31c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b31c4:
    // 0x3b31c4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b31c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b31c8:
    // 0x3b31c8: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3b31c8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3b31cc:
    // 0x3b31cc: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x3b31ccu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3b31d0:
    // 0x3b31d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b31d4:
    // 0x3b31d4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b31d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3b31d8:
    // 0x3b31d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b31d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b31dc:
    // 0x3b31dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b31dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b31e0:
    // 0x3b31e0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b31e0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b31e4:
    // 0x3b31e4: 0x0  nop
    ctx->pc = 0x3b31e4u;
    // NOP
label_3b31e8:
    // 0x3b31e8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b31e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b31ec:
    // 0x3b31ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b31ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b31f0:
    // 0x3b31f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b31f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b31f4:
    // 0x3b31f4: 0x0  nop
    ctx->pc = 0x3b31f4u;
    // NOP
label_3b31f8:
    // 0x3b31f8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b31f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b31fc:
    // 0x3b31fc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b31fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b3200:
    // 0x3b3200: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b3200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3b3204:
    // 0x3b3204: 0xc0bc284  jal         func_2F0A10
label_3b3208:
    if (ctx->pc == 0x3B3208u) {
        ctx->pc = 0x3B3208u;
            // 0x3b3208: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3B320Cu;
        goto label_3b320c;
    }
    ctx->pc = 0x3B3204u;
    SET_GPR_U32(ctx, 31, 0x3B320Cu);
    ctx->pc = 0x3B3208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3204u;
            // 0x3b3208: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B320Cu; }
        if (ctx->pc != 0x3B320Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B320Cu; }
        if (ctx->pc != 0x3B320Cu) { return; }
    }
    ctx->pc = 0x3B320Cu;
label_3b320c:
    // 0x3b320c: 0x92240007  lbu         $a0, 0x7($s1)
    ctx->pc = 0x3b320cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_3b3210:
    // 0x3b3210: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_3b3214:
    if (ctx->pc == 0x3B3214u) {
        ctx->pc = 0x3B3214u;
            // 0x3b3214: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x3B3218u;
        goto label_3b3218;
    }
    ctx->pc = 0x3B3210u;
    {
        const bool branch_taken_0x3b3210 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3b3210) {
            ctx->pc = 0x3B3214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3210u;
            // 0x3b3214: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3224u;
            goto label_3b3224;
        }
    }
    ctx->pc = 0x3B3218u;
label_3b3218:
    // 0x3b3218: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b3218u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b321c:
    // 0x3b321c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b3220:
    if (ctx->pc == 0x3B3220u) {
        ctx->pc = 0x3B3220u;
            // 0x3b3220: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3224u;
        goto label_3b3224;
    }
    ctx->pc = 0x3B321Cu;
    {
        const bool branch_taken_0x3b321c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B321Cu;
            // 0x3b3220: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b321c) {
            ctx->pc = 0x3B323Cu;
            goto label_3b323c;
        }
    }
    ctx->pc = 0x3B3224u;
label_3b3224:
    // 0x3b3224: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b3224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3b3228:
    // 0x3b3228: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b322c:
    // 0x3b322c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b322cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3230:
    // 0x3b3230: 0x0  nop
    ctx->pc = 0x3b3230u;
    // NOP
label_3b3234:
    // 0x3b3234: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b3234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b3238:
    // 0x3b3238: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b3238u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b323c:
    // 0x3b323c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3b323cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b3240:
    // 0x3b3240: 0x26a2000d  addiu       $v0, $s5, 0xD
    ctx->pc = 0x3b3240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 13));
label_3b3244:
    // 0x3b3244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b3244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3248:
    // 0x3b3248: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3b3248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3b324c:
    // 0x3b324c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b324cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3b3250:
    // 0x3b3250: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x3b3250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3b3254:
    // 0x3b3254: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_3b3258:
    if (ctx->pc == 0x3B3258u) {
        ctx->pc = 0x3B3258u;
            // 0x3b3258: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->pc = 0x3B325Cu;
        goto label_3b325c;
    }
    ctx->pc = 0x3B3254u;
    {
        const bool branch_taken_0x3b3254 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3B3258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3254u;
            // 0x3b3258: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3254) {
            ctx->pc = 0x3B3268u;
            goto label_3b3268;
        }
    }
    ctx->pc = 0x3B325Cu;
label_3b325c:
    // 0x3b325c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b325cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3260:
    // 0x3b3260: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b3264:
    if (ctx->pc == 0x3B3264u) {
        ctx->pc = 0x3B3264u;
            // 0x3b3264: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3268u;
        goto label_3b3268;
    }
    ctx->pc = 0x3B3260u;
    {
        const bool branch_taken_0x3b3260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3260u;
            // 0x3b3264: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3260) {
            ctx->pc = 0x3B3284u;
            goto label_3b3284;
        }
    }
    ctx->pc = 0x3B3268u;
label_3b3268:
    // 0x3b3268: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3b3268u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3b326c:
    // 0x3b326c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b326cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3b3270:
    // 0x3b3270: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3274:
    // 0x3b3274: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3278:
    // 0x3b3278: 0x0  nop
    ctx->pc = 0x3b3278u;
    // NOP
label_3b327c:
    // 0x3b327c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b327cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b3280:
    // 0x3b3280: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b3280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b3284:
    // 0x3b3284: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x3b3284u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_3b3288:
    // 0x3b3288: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b328c:
    if (ctx->pc == 0x3B328Cu) {
        ctx->pc = 0x3B328Cu;
            // 0x3b328c: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3B3290u;
        goto label_3b3290;
    }
    ctx->pc = 0x3B3288u;
    {
        const bool branch_taken_0x3b3288 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B328Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3288u;
            // 0x3b328c: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3288) {
            ctx->pc = 0x3B329Cu;
            goto label_3b329c;
        }
    }
    ctx->pc = 0x3B3290u;
label_3b3290:
    // 0x3b3290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3294:
    // 0x3b3294: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b3298:
    if (ctx->pc == 0x3B3298u) {
        ctx->pc = 0x3B3298u;
            // 0x3b3298: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B329Cu;
        goto label_3b329c;
    }
    ctx->pc = 0x3B3294u;
    {
        const bool branch_taken_0x3b3294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3294u;
            // 0x3b3298: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3294) {
            ctx->pc = 0x3B32B8u;
            goto label_3b32b8;
        }
    }
    ctx->pc = 0x3B329Cu;
label_3b329c:
    // 0x3b329c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b329cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b32a0:
    // 0x3b32a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b32a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b32a4:
    // 0x3b32a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b32a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b32a8:
    // 0x3b32a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b32a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b32ac:
    // 0x3b32ac: 0x0  nop
    ctx->pc = 0x3b32acu;
    // NOP
label_3b32b0:
    // 0x3b32b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b32b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b32b4:
    // 0x3b32b4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b32b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b32b8:
    // 0x3b32b8: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3b32b8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3b32bc:
    // 0x3b32bc: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x3b32bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3b32c0:
    // 0x3b32c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b32c4:
    // 0x3b32c4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b32c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3b32c8:
    // 0x3b32c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b32c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b32cc:
    // 0x3b32cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b32ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b32d0:
    // 0x3b32d0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b32d0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b32d4:
    // 0x3b32d4: 0x0  nop
    ctx->pc = 0x3b32d4u;
    // NOP
label_3b32d8:
    // 0x3b32d8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b32d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b32dc:
    // 0x3b32dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b32dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b32e0:
    // 0x3b32e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b32e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b32e4:
    // 0x3b32e4: 0x0  nop
    ctx->pc = 0x3b32e4u;
    // NOP
label_3b32e8:
    // 0x3b32e8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b32e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b32ec:
    // 0x3b32ec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b32ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b32f0:
    // 0x3b32f0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b32f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3b32f4:
    // 0x3b32f4: 0xc0bc284  jal         func_2F0A10
label_3b32f8:
    if (ctx->pc == 0x3B32F8u) {
        ctx->pc = 0x3B32F8u;
            // 0x3b32f8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3B32FCu;
        goto label_3b32fc;
    }
    ctx->pc = 0x3B32F4u;
    SET_GPR_U32(ctx, 31, 0x3B32FCu);
    ctx->pc = 0x3B32F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B32F4u;
            // 0x3b32f8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B32FCu; }
        if (ctx->pc != 0x3B32FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B32FCu; }
        if (ctx->pc != 0x3B32FCu) { return; }
    }
    ctx->pc = 0x3B32FCu;
label_3b32fc:
    // 0x3b32fc: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x3b32fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_3b3300:
    // 0x3b3300: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b3304:
    if (ctx->pc == 0x3B3304u) {
        ctx->pc = 0x3B3304u;
            // 0x3b3304: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B3308u;
        goto label_3b3308;
    }
    ctx->pc = 0x3B3300u;
    {
        const bool branch_taken_0x3b3300 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b3300) {
            ctx->pc = 0x3B3304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3300u;
            // 0x3b3304: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3314u;
            goto label_3b3314;
        }
    }
    ctx->pc = 0x3B3308u;
label_3b3308:
    // 0x3b3308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b330c:
    // 0x3b330c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b3310:
    if (ctx->pc == 0x3B3310u) {
        ctx->pc = 0x3B3310u;
            // 0x3b3310: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3314u;
        goto label_3b3314;
    }
    ctx->pc = 0x3B330Cu;
    {
        const bool branch_taken_0x3b330c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B330Cu;
            // 0x3b3310: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b330c) {
            ctx->pc = 0x3B332Cu;
            goto label_3b332c;
        }
    }
    ctx->pc = 0x3B3314u;
label_3b3314:
    // 0x3b3314: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b3314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b3318:
    // 0x3b3318: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b331c:
    // 0x3b331c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b331cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3320:
    // 0x3b3320: 0x0  nop
    ctx->pc = 0x3b3320u;
    // NOP
label_3b3324:
    // 0x3b3324: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b3324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b3328:
    // 0x3b3328: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b3328u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b332c:
    // 0x3b332c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3b332cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b3330:
    // 0x3b3330: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x3b3330u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_3b3334:
    // 0x3b3334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b3334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3338:
    // 0x3b3338: 0x26450180  addiu       $a1, $s2, 0x180
    ctx->pc = 0x3b3338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_3b333c:
    // 0x3b333c: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b333cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3b3340:
    // 0x3b3340: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b3344:
    if (ctx->pc == 0x3B3344u) {
        ctx->pc = 0x3B3344u;
            // 0x3b3344: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->pc = 0x3B3348u;
        goto label_3b3348;
    }
    ctx->pc = 0x3B3340u;
    {
        const bool branch_taken_0x3b3340 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B3344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3340u;
            // 0x3b3344: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3340) {
            ctx->pc = 0x3B3354u;
            goto label_3b3354;
        }
    }
    ctx->pc = 0x3B3348u;
label_3b3348:
    // 0x3b3348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b334c:
    // 0x3b334c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b3350:
    if (ctx->pc == 0x3B3350u) {
        ctx->pc = 0x3B3350u;
            // 0x3b3350: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3354u;
        goto label_3b3354;
    }
    ctx->pc = 0x3B334Cu;
    {
        const bool branch_taken_0x3b334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B334Cu;
            // 0x3b3350: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b334c) {
            ctx->pc = 0x3B3370u;
            goto label_3b3370;
        }
    }
    ctx->pc = 0x3B3354u;
label_3b3354:
    // 0x3b3354: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b3354u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b3358:
    // 0x3b3358: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b3358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b335c:
    // 0x3b335c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b335cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3360:
    // 0x3b3360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3364:
    // 0x3b3364: 0x0  nop
    ctx->pc = 0x3b3364u;
    // NOP
label_3b3368:
    // 0x3b3368: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b336c:
    // 0x3b336c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b336cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b3370:
    // 0x3b3370: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x3b3370u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_3b3374:
    // 0x3b3374: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b3378:
    if (ctx->pc == 0x3B3378u) {
        ctx->pc = 0x3B3378u;
            // 0x3b3378: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3B337Cu;
        goto label_3b337c;
    }
    ctx->pc = 0x3B3374u;
    {
        const bool branch_taken_0x3b3374 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B3378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3374u;
            // 0x3b3378: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3374) {
            ctx->pc = 0x3B3388u;
            goto label_3b3388;
        }
    }
    ctx->pc = 0x3B337Cu;
label_3b337c:
    // 0x3b337c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b337cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3380:
    // 0x3b3380: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b3384:
    if (ctx->pc == 0x3B3384u) {
        ctx->pc = 0x3B3384u;
            // 0x3b3384: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3388u;
        goto label_3b3388;
    }
    ctx->pc = 0x3B3380u;
    {
        const bool branch_taken_0x3b3380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3380u;
            // 0x3b3384: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3380) {
            ctx->pc = 0x3B33A4u;
            goto label_3b33a4;
        }
    }
    ctx->pc = 0x3B3388u;
label_3b3388:
    // 0x3b3388: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b3388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b338c:
    // 0x3b338c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b338cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b3390:
    // 0x3b3390: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3394:
    // 0x3b3394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3398:
    // 0x3b3398: 0x0  nop
    ctx->pc = 0x3b3398u;
    // NOP
label_3b339c:
    // 0x3b339c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b339cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b33a0:
    // 0x3b33a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b33a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b33a4:
    // 0x3b33a4: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3b33a4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3b33a8:
    // 0x3b33a8: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x3b33a8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3b33ac:
    // 0x3b33ac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b33acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b33b0:
    // 0x3b33b0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b33b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3b33b4:
    // 0x3b33b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b33b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b33b8:
    // 0x3b33b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b33b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b33bc:
    // 0x3b33bc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b33bcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b33c0:
    // 0x3b33c0: 0x0  nop
    ctx->pc = 0x3b33c0u;
    // NOP
label_3b33c4:
    // 0x3b33c4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b33c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b33c8:
    // 0x3b33c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b33c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b33cc:
    // 0x3b33cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b33ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b33d0:
    // 0x3b33d0: 0x0  nop
    ctx->pc = 0x3b33d0u;
    // NOP
label_3b33d4:
    // 0x3b33d4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b33d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b33d8:
    // 0x3b33d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b33d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b33dc:
    // 0x3b33dc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b33dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3b33e0:
    // 0x3b33e0: 0xc0bc284  jal         func_2F0A10
label_3b33e4:
    if (ctx->pc == 0x3B33E4u) {
        ctx->pc = 0x3B33E4u;
            // 0x3b33e4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3B33E8u;
        goto label_3b33e8;
    }
    ctx->pc = 0x3B33E0u;
    SET_GPR_U32(ctx, 31, 0x3B33E8u);
    ctx->pc = 0x3B33E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B33E0u;
            // 0x3b33e4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B33E8u; }
        if (ctx->pc != 0x3B33E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B33E8u; }
        if (ctx->pc != 0x3B33E8u) { return; }
    }
    ctx->pc = 0x3B33E8u;
label_3b33e8:
    // 0x3b33e8: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x3b33e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_3b33ec:
    // 0x3b33ec: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3b33f0:
    if (ctx->pc == 0x3B33F0u) {
        ctx->pc = 0x3B33F0u;
            // 0x3b33f0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3B33F4u;
        goto label_3b33f4;
    }
    ctx->pc = 0x3B33ECu;
    {
        const bool branch_taken_0x3b33ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b33ec) {
            ctx->pc = 0x3B33F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B33ECu;
            // 0x3b33f0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3400u;
            goto label_3b3400;
        }
    }
    ctx->pc = 0x3B33F4u;
label_3b33f4:
    // 0x3b33f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b33f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b33f8:
    // 0x3b33f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b33fc:
    if (ctx->pc == 0x3B33FCu) {
        ctx->pc = 0x3B33FCu;
            // 0x3b33fc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3400u;
        goto label_3b3400;
    }
    ctx->pc = 0x3B33F8u;
    {
        const bool branch_taken_0x3b33f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B33FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B33F8u;
            // 0x3b33fc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b33f8) {
            ctx->pc = 0x3B3418u;
            goto label_3b3418;
        }
    }
    ctx->pc = 0x3B3400u;
label_3b3400:
    // 0x3b3400: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b3400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b3404:
    // 0x3b3404: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3408:
    // 0x3b3408: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b340c:
    // 0x3b340c: 0x0  nop
    ctx->pc = 0x3b340cu;
    // NOP
label_3b3410:
    // 0x3b3410: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b3410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b3414:
    // 0x3b3414: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b3414u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b3418:
    // 0x3b3418: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3b3418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_3b341c:
    // 0x3b341c: 0x1427c2  srl         $a0, $s4, 31
    ctx->pc = 0x3b341cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
label_3b3420:
    // 0x3b3420: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3b3420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_3b3424:
    // 0x3b3424: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x3b3424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3b3428:
    // 0x3b3428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b3428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b342c:
    // 0x3b342c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3b342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b3430:
    // 0x3b3430: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b3430u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3b3434:
    // 0x3b3434: 0x1810  mfhi        $v1
    ctx->pc = 0x3b3434u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3b3438:
    // 0x3b3438: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x3b3438u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_3b343c:
    // 0x3b343c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3b343cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_3b3440:
    // 0x3b3440: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3b3440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3b3444:
    // 0x3b3444: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3b3444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3b3448:
    // 0x3b3448: 0x24a3000d  addiu       $v1, $a1, 0xD
    ctx->pc = 0x3b3448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
label_3b344c:
    // 0x3b344c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b344cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3b3450:
    // 0x3b3450: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3b3450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3b3454:
    // 0x3b3454: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3b3454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3b3458:
    // 0x3b3458: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x3b3458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_3b345c:
    // 0x3b345c: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3b345cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3b3460:
    // 0x3b3460: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b3464:
    if (ctx->pc == 0x3B3464u) {
        ctx->pc = 0x3B3464u;
            // 0x3b3464: 0x284a023  subu        $s4, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->pc = 0x3B3468u;
        goto label_3b3468;
    }
    ctx->pc = 0x3B3460u;
    {
        const bool branch_taken_0x3b3460 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B3464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3460u;
            // 0x3b3464: 0x284a023  subu        $s4, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3460) {
            ctx->pc = 0x3B3474u;
            goto label_3b3474;
        }
    }
    ctx->pc = 0x3B3468u;
label_3b3468:
    // 0x3b3468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b346c:
    // 0x3b346c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b3470:
    if (ctx->pc == 0x3B3470u) {
        ctx->pc = 0x3B3470u;
            // 0x3b3470: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3474u;
        goto label_3b3474;
    }
    ctx->pc = 0x3B346Cu;
    {
        const bool branch_taken_0x3b346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B346Cu;
            // 0x3b3470: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b346c) {
            ctx->pc = 0x3B3490u;
            goto label_3b3490;
        }
    }
    ctx->pc = 0x3B3474u;
label_3b3474:
    // 0x3b3474: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b3474u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b3478:
    // 0x3b3478: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b3478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b347c:
    // 0x3b347c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b347cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3480:
    // 0x3b3480: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3484:
    // 0x3b3484: 0x0  nop
    ctx->pc = 0x3b3484u;
    // NOP
label_3b3488:
    // 0x3b3488: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b348c:
    // 0x3b348c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b348cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b3490:
    // 0x3b3490: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x3b3490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_3b3494:
    // 0x3b3494: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b3498:
    if (ctx->pc == 0x3B3498u) {
        ctx->pc = 0x3B3498u;
            // 0x3b3498: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3B349Cu;
        goto label_3b349c;
    }
    ctx->pc = 0x3B3494u;
    {
        const bool branch_taken_0x3b3494 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B3498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3494u;
            // 0x3b3498: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3494) {
            ctx->pc = 0x3B34A8u;
            goto label_3b34a8;
        }
    }
    ctx->pc = 0x3B349Cu;
label_3b349c:
    // 0x3b349c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b349cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b34a0:
    // 0x3b34a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b34a4:
    if (ctx->pc == 0x3B34A4u) {
        ctx->pc = 0x3B34A4u;
            // 0x3b34a4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B34A8u;
        goto label_3b34a8;
    }
    ctx->pc = 0x3B34A0u;
    {
        const bool branch_taken_0x3b34a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B34A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B34A0u;
            // 0x3b34a4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b34a0) {
            ctx->pc = 0x3B34C4u;
            goto label_3b34c4;
        }
    }
    ctx->pc = 0x3B34A8u;
label_3b34a8:
    // 0x3b34a8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b34ac:
    // 0x3b34ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b34acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b34b0:
    // 0x3b34b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b34b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b34b4:
    // 0x3b34b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b34b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b34b8:
    // 0x3b34b8: 0x0  nop
    ctx->pc = 0x3b34b8u;
    // NOP
label_3b34bc:
    // 0x3b34bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b34bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b34c0:
    // 0x3b34c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b34c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b34c4:
    // 0x3b34c4: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3b34c4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3b34c8:
    // 0x3b34c8: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x3b34c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3b34cc:
    // 0x3b34cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b34d0:
    // 0x3b34d0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b34d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3b34d4:
    // 0x3b34d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b34d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b34d8:
    // 0x3b34d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b34d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b34dc:
    // 0x3b34dc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3b34dcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b34e0:
    // 0x3b34e0: 0x0  nop
    ctx->pc = 0x3b34e0u;
    // NOP
label_3b34e4:
    // 0x3b34e4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b34e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b34e8:
    // 0x3b34e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b34e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b34ec:
    // 0x3b34ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b34ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b34f0:
    // 0x3b34f0: 0x0  nop
    ctx->pc = 0x3b34f0u;
    // NOP
label_3b34f4:
    // 0x3b34f4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b34f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b34f8:
    // 0x3b34f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b34f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b34fc:
    // 0x3b34fc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b34fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3b3500:
    // 0x3b3500: 0xc0bc284  jal         func_2F0A10
label_3b3504:
    if (ctx->pc == 0x3B3504u) {
        ctx->pc = 0x3B3504u;
            // 0x3b3504: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3B3508u;
        goto label_3b3508;
    }
    ctx->pc = 0x3B3500u;
    SET_GPR_U32(ctx, 31, 0x3B3508u);
    ctx->pc = 0x3B3504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3500u;
            // 0x3b3504: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3508u; }
        if (ctx->pc != 0x3B3508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3508u; }
        if (ctx->pc != 0x3B3508u) { return; }
    }
    ctx->pc = 0x3B3508u;
label_3b3508:
    // 0x3b3508: 0x92240007  lbu         $a0, 0x7($s1)
    ctx->pc = 0x3b3508u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_3b350c:
    // 0x3b350c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_3b3510:
    if (ctx->pc == 0x3B3510u) {
        ctx->pc = 0x3B3510u;
            // 0x3b3510: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x3B3514u;
        goto label_3b3514;
    }
    ctx->pc = 0x3B350Cu;
    {
        const bool branch_taken_0x3b350c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3b350c) {
            ctx->pc = 0x3B3510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B350Cu;
            // 0x3b3510: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3520u;
            goto label_3b3520;
        }
    }
    ctx->pc = 0x3B3514u;
label_3b3514:
    // 0x3b3514: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b3514u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3518:
    // 0x3b3518: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b351c:
    if (ctx->pc == 0x3B351Cu) {
        ctx->pc = 0x3B351Cu;
            // 0x3b351c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3520u;
        goto label_3b3520;
    }
    ctx->pc = 0x3B3518u;
    {
        const bool branch_taken_0x3b3518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B351Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3518u;
            // 0x3b351c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3518) {
            ctx->pc = 0x3B3538u;
            goto label_3b3538;
        }
    }
    ctx->pc = 0x3B3520u;
label_3b3520:
    // 0x3b3520: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b3520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3b3524:
    // 0x3b3524: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3528:
    // 0x3b3528: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b352c:
    // 0x3b352c: 0x0  nop
    ctx->pc = 0x3b352cu;
    // NOP
label_3b3530:
    // 0x3b3530: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b3530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b3534:
    // 0x3b3534: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b3534u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b3538:
    // 0x3b3538: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3b3538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b353c:
    // 0x3b353c: 0x2682000d  addiu       $v0, $s4, 0xD
    ctx->pc = 0x3b353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 13));
label_3b3540:
    // 0x3b3540: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b3540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3544:
    // 0x3b3544: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3b3544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3b3548:
    // 0x3b3548: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b3548u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3b354c:
    // 0x3b354c: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x3b354cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3b3550:
    // 0x3b3550: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_3b3554:
    if (ctx->pc == 0x3B3554u) {
        ctx->pc = 0x3B3554u;
            // 0x3b3554: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->pc = 0x3B3558u;
        goto label_3b3558;
    }
    ctx->pc = 0x3B3550u;
    {
        const bool branch_taken_0x3b3550 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3B3554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3550u;
            // 0x3b3554: 0x4601155c  madd.s      $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3550) {
            ctx->pc = 0x3B3564u;
            goto label_3b3564;
        }
    }
    ctx->pc = 0x3B3558u;
label_3b3558:
    // 0x3b3558: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b3558u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b355c:
    // 0x3b355c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b3560:
    if (ctx->pc == 0x3B3560u) {
        ctx->pc = 0x3B3560u;
            // 0x3b3560: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3564u;
        goto label_3b3564;
    }
    ctx->pc = 0x3B355Cu;
    {
        const bool branch_taken_0x3b355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B355Cu;
            // 0x3b3560: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b355c) {
            ctx->pc = 0x3B3580u;
            goto label_3b3580;
        }
    }
    ctx->pc = 0x3B3564u;
label_3b3564:
    // 0x3b3564: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3b3564u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3b3568:
    // 0x3b3568: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b3568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3b356c:
    // 0x3b356c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b356cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3570:
    // 0x3b3570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3574:
    // 0x3b3574: 0x0  nop
    ctx->pc = 0x3b3574u;
    // NOP
label_3b3578:
    // 0x3b3578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b357c:
    // 0x3b357c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b357cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b3580:
    // 0x3b3580: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x3b3580u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_3b3584:
    // 0x3b3584: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3b3588:
    if (ctx->pc == 0x3B3588u) {
        ctx->pc = 0x3B3588u;
            // 0x3b3588: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3B358Cu;
        goto label_3b358c;
    }
    ctx->pc = 0x3B3584u;
    {
        const bool branch_taken_0x3b3584 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3B3588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3584u;
            // 0x3b3588: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3584) {
            ctx->pc = 0x3B3598u;
            goto label_3b3598;
        }
    }
    ctx->pc = 0x3B358Cu;
label_3b358c:
    // 0x3b358c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b358cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3590:
    // 0x3b3590: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b3594:
    if (ctx->pc == 0x3B3594u) {
        ctx->pc = 0x3B3594u;
            // 0x3b3594: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B3598u;
        goto label_3b3598;
    }
    ctx->pc = 0x3B3590u;
    {
        const bool branch_taken_0x3b3590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3590u;
            // 0x3b3594: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3590) {
            ctx->pc = 0x3B35B4u;
            goto label_3b35b4;
        }
    }
    ctx->pc = 0x3B3598u;
label_3b3598:
    // 0x3b3598: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b3598u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3b359c:
    // 0x3b359c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b359cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b35a0:
    // 0x3b35a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b35a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b35a4:
    // 0x3b35a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b35a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b35a8:
    // 0x3b35a8: 0x0  nop
    ctx->pc = 0x3b35a8u;
    // NOP
label_3b35ac:
    // 0x3b35ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b35acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b35b0:
    // 0x3b35b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b35b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b35b4:
    // 0x3b35b4: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3b35b4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3b35b8:
    // 0x3b35b8: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3b35b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3b35bc:
    // 0x3b35bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3b35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3b35c0:
    // 0x3b35c0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3b35c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3b35c4:
    // 0x3b35c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b35c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b35c8:
    // 0x3b35c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b35c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b35cc:
    // 0x3b35cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b35ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b35d0:
    // 0x3b35d0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3b35d0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b35d4:
    // 0x3b35d4: 0x0  nop
    ctx->pc = 0x3b35d4u;
    // NOP
label_3b35d8:
    // 0x3b35d8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b35d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b35dc:
    // 0x3b35dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b35dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b35e0:
    // 0x3b35e0: 0x0  nop
    ctx->pc = 0x3b35e0u;
    // NOP
label_3b35e4:
    // 0x3b35e4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b35e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b35e8:
    // 0x3b35e8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b35e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3b35ec:
    // 0x3b35ec: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3b35ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3b35f0:
    // 0x3b35f0: 0xc0bc284  jal         func_2F0A10
label_3b35f4:
    if (ctx->pc == 0x3B35F4u) {
        ctx->pc = 0x3B35F4u;
            // 0x3b35f4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3B35F8u;
        goto label_3b35f8;
    }
    ctx->pc = 0x3B35F0u;
    SET_GPR_U32(ctx, 31, 0x3B35F8u);
    ctx->pc = 0x3B35F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B35F0u;
            // 0x3b35f4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B35F8u; }
        if (ctx->pc != 0x3B35F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B35F8u; }
        if (ctx->pc != 0x3B35F8u) { return; }
    }
    ctx->pc = 0x3B35F8u;
label_3b35f8:
    // 0x3b35f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3b35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3b35fc:
    // 0x3b35fc: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3b35fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3b3600:
    // 0x3b3600: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b3600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b3604:
    // 0x3b3604: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3b3604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3b3608:
    // 0x3b3608: 0x320f809  jalr        $t9
label_3b360c:
    if (ctx->pc == 0x3B360Cu) {
        ctx->pc = 0x3B3610u;
        goto label_3b3610;
    }
    ctx->pc = 0x3B3608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B3610u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B3610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B3610u; }
            if (ctx->pc != 0x3B3610u) { return; }
        }
        }
    }
    ctx->pc = 0x3B3610u;
label_3b3610:
    // 0x3b3610: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3b3610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3b3614:
    // 0x3b3614: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3b3614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b3618:
    // 0x3b3618: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3b3618u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b361c:
    // 0x3b361c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b361cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b3620:
    // 0x3b3620: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b3620u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b3624:
    // 0x3b3624: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b3624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b3628:
    // 0x3b3628: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b3628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b362c:
    // 0x3b362c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b362cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b3630:
    // 0x3b3630: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b3630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b3634:
    // 0x3b3634: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b3634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b3638:
    // 0x3b3638: 0x3e00008  jr          $ra
label_3b363c:
    if (ctx->pc == 0x3B363Cu) {
        ctx->pc = 0x3B363Cu;
            // 0x3b363c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3B3640u;
        goto label_fallthrough_0x3b3638;
    }
    ctx->pc = 0x3B3638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B363Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3638u;
            // 0x3b363c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3b3638:
    ctx->pc = 0x3B3640u;
}
