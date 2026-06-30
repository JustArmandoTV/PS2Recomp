#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E2BB0
// Address: 0x4e2bb0 - 0x4e33f0
void sub_004E2BB0_0x4e2bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2BB0_0x4e2bb0");
#endif

    switch (ctx->pc) {
        case 0x4e2bb0u: goto label_4e2bb0;
        case 0x4e2bb4u: goto label_4e2bb4;
        case 0x4e2bb8u: goto label_4e2bb8;
        case 0x4e2bbcu: goto label_4e2bbc;
        case 0x4e2bc0u: goto label_4e2bc0;
        case 0x4e2bc4u: goto label_4e2bc4;
        case 0x4e2bc8u: goto label_4e2bc8;
        case 0x4e2bccu: goto label_4e2bcc;
        case 0x4e2bd0u: goto label_4e2bd0;
        case 0x4e2bd4u: goto label_4e2bd4;
        case 0x4e2bd8u: goto label_4e2bd8;
        case 0x4e2bdcu: goto label_4e2bdc;
        case 0x4e2be0u: goto label_4e2be0;
        case 0x4e2be4u: goto label_4e2be4;
        case 0x4e2be8u: goto label_4e2be8;
        case 0x4e2becu: goto label_4e2bec;
        case 0x4e2bf0u: goto label_4e2bf0;
        case 0x4e2bf4u: goto label_4e2bf4;
        case 0x4e2bf8u: goto label_4e2bf8;
        case 0x4e2bfcu: goto label_4e2bfc;
        case 0x4e2c00u: goto label_4e2c00;
        case 0x4e2c04u: goto label_4e2c04;
        case 0x4e2c08u: goto label_4e2c08;
        case 0x4e2c0cu: goto label_4e2c0c;
        case 0x4e2c10u: goto label_4e2c10;
        case 0x4e2c14u: goto label_4e2c14;
        case 0x4e2c18u: goto label_4e2c18;
        case 0x4e2c1cu: goto label_4e2c1c;
        case 0x4e2c20u: goto label_4e2c20;
        case 0x4e2c24u: goto label_4e2c24;
        case 0x4e2c28u: goto label_4e2c28;
        case 0x4e2c2cu: goto label_4e2c2c;
        case 0x4e2c30u: goto label_4e2c30;
        case 0x4e2c34u: goto label_4e2c34;
        case 0x4e2c38u: goto label_4e2c38;
        case 0x4e2c3cu: goto label_4e2c3c;
        case 0x4e2c40u: goto label_4e2c40;
        case 0x4e2c44u: goto label_4e2c44;
        case 0x4e2c48u: goto label_4e2c48;
        case 0x4e2c4cu: goto label_4e2c4c;
        case 0x4e2c50u: goto label_4e2c50;
        case 0x4e2c54u: goto label_4e2c54;
        case 0x4e2c58u: goto label_4e2c58;
        case 0x4e2c5cu: goto label_4e2c5c;
        case 0x4e2c60u: goto label_4e2c60;
        case 0x4e2c64u: goto label_4e2c64;
        case 0x4e2c68u: goto label_4e2c68;
        case 0x4e2c6cu: goto label_4e2c6c;
        case 0x4e2c70u: goto label_4e2c70;
        case 0x4e2c74u: goto label_4e2c74;
        case 0x4e2c78u: goto label_4e2c78;
        case 0x4e2c7cu: goto label_4e2c7c;
        case 0x4e2c80u: goto label_4e2c80;
        case 0x4e2c84u: goto label_4e2c84;
        case 0x4e2c88u: goto label_4e2c88;
        case 0x4e2c8cu: goto label_4e2c8c;
        case 0x4e2c90u: goto label_4e2c90;
        case 0x4e2c94u: goto label_4e2c94;
        case 0x4e2c98u: goto label_4e2c98;
        case 0x4e2c9cu: goto label_4e2c9c;
        case 0x4e2ca0u: goto label_4e2ca0;
        case 0x4e2ca4u: goto label_4e2ca4;
        case 0x4e2ca8u: goto label_4e2ca8;
        case 0x4e2cacu: goto label_4e2cac;
        case 0x4e2cb0u: goto label_4e2cb0;
        case 0x4e2cb4u: goto label_4e2cb4;
        case 0x4e2cb8u: goto label_4e2cb8;
        case 0x4e2cbcu: goto label_4e2cbc;
        case 0x4e2cc0u: goto label_4e2cc0;
        case 0x4e2cc4u: goto label_4e2cc4;
        case 0x4e2cc8u: goto label_4e2cc8;
        case 0x4e2cccu: goto label_4e2ccc;
        case 0x4e2cd0u: goto label_4e2cd0;
        case 0x4e2cd4u: goto label_4e2cd4;
        case 0x4e2cd8u: goto label_4e2cd8;
        case 0x4e2cdcu: goto label_4e2cdc;
        case 0x4e2ce0u: goto label_4e2ce0;
        case 0x4e2ce4u: goto label_4e2ce4;
        case 0x4e2ce8u: goto label_4e2ce8;
        case 0x4e2cecu: goto label_4e2cec;
        case 0x4e2cf0u: goto label_4e2cf0;
        case 0x4e2cf4u: goto label_4e2cf4;
        case 0x4e2cf8u: goto label_4e2cf8;
        case 0x4e2cfcu: goto label_4e2cfc;
        case 0x4e2d00u: goto label_4e2d00;
        case 0x4e2d04u: goto label_4e2d04;
        case 0x4e2d08u: goto label_4e2d08;
        case 0x4e2d0cu: goto label_4e2d0c;
        case 0x4e2d10u: goto label_4e2d10;
        case 0x4e2d14u: goto label_4e2d14;
        case 0x4e2d18u: goto label_4e2d18;
        case 0x4e2d1cu: goto label_4e2d1c;
        case 0x4e2d20u: goto label_4e2d20;
        case 0x4e2d24u: goto label_4e2d24;
        case 0x4e2d28u: goto label_4e2d28;
        case 0x4e2d2cu: goto label_4e2d2c;
        case 0x4e2d30u: goto label_4e2d30;
        case 0x4e2d34u: goto label_4e2d34;
        case 0x4e2d38u: goto label_4e2d38;
        case 0x4e2d3cu: goto label_4e2d3c;
        case 0x4e2d40u: goto label_4e2d40;
        case 0x4e2d44u: goto label_4e2d44;
        case 0x4e2d48u: goto label_4e2d48;
        case 0x4e2d4cu: goto label_4e2d4c;
        case 0x4e2d50u: goto label_4e2d50;
        case 0x4e2d54u: goto label_4e2d54;
        case 0x4e2d58u: goto label_4e2d58;
        case 0x4e2d5cu: goto label_4e2d5c;
        case 0x4e2d60u: goto label_4e2d60;
        case 0x4e2d64u: goto label_4e2d64;
        case 0x4e2d68u: goto label_4e2d68;
        case 0x4e2d6cu: goto label_4e2d6c;
        case 0x4e2d70u: goto label_4e2d70;
        case 0x4e2d74u: goto label_4e2d74;
        case 0x4e2d78u: goto label_4e2d78;
        case 0x4e2d7cu: goto label_4e2d7c;
        case 0x4e2d80u: goto label_4e2d80;
        case 0x4e2d84u: goto label_4e2d84;
        case 0x4e2d88u: goto label_4e2d88;
        case 0x4e2d8cu: goto label_4e2d8c;
        case 0x4e2d90u: goto label_4e2d90;
        case 0x4e2d94u: goto label_4e2d94;
        case 0x4e2d98u: goto label_4e2d98;
        case 0x4e2d9cu: goto label_4e2d9c;
        case 0x4e2da0u: goto label_4e2da0;
        case 0x4e2da4u: goto label_4e2da4;
        case 0x4e2da8u: goto label_4e2da8;
        case 0x4e2dacu: goto label_4e2dac;
        case 0x4e2db0u: goto label_4e2db0;
        case 0x4e2db4u: goto label_4e2db4;
        case 0x4e2db8u: goto label_4e2db8;
        case 0x4e2dbcu: goto label_4e2dbc;
        case 0x4e2dc0u: goto label_4e2dc0;
        case 0x4e2dc4u: goto label_4e2dc4;
        case 0x4e2dc8u: goto label_4e2dc8;
        case 0x4e2dccu: goto label_4e2dcc;
        case 0x4e2dd0u: goto label_4e2dd0;
        case 0x4e2dd4u: goto label_4e2dd4;
        case 0x4e2dd8u: goto label_4e2dd8;
        case 0x4e2ddcu: goto label_4e2ddc;
        case 0x4e2de0u: goto label_4e2de0;
        case 0x4e2de4u: goto label_4e2de4;
        case 0x4e2de8u: goto label_4e2de8;
        case 0x4e2decu: goto label_4e2dec;
        case 0x4e2df0u: goto label_4e2df0;
        case 0x4e2df4u: goto label_4e2df4;
        case 0x4e2df8u: goto label_4e2df8;
        case 0x4e2dfcu: goto label_4e2dfc;
        case 0x4e2e00u: goto label_4e2e00;
        case 0x4e2e04u: goto label_4e2e04;
        case 0x4e2e08u: goto label_4e2e08;
        case 0x4e2e0cu: goto label_4e2e0c;
        case 0x4e2e10u: goto label_4e2e10;
        case 0x4e2e14u: goto label_4e2e14;
        case 0x4e2e18u: goto label_4e2e18;
        case 0x4e2e1cu: goto label_4e2e1c;
        case 0x4e2e20u: goto label_4e2e20;
        case 0x4e2e24u: goto label_4e2e24;
        case 0x4e2e28u: goto label_4e2e28;
        case 0x4e2e2cu: goto label_4e2e2c;
        case 0x4e2e30u: goto label_4e2e30;
        case 0x4e2e34u: goto label_4e2e34;
        case 0x4e2e38u: goto label_4e2e38;
        case 0x4e2e3cu: goto label_4e2e3c;
        case 0x4e2e40u: goto label_4e2e40;
        case 0x4e2e44u: goto label_4e2e44;
        case 0x4e2e48u: goto label_4e2e48;
        case 0x4e2e4cu: goto label_4e2e4c;
        case 0x4e2e50u: goto label_4e2e50;
        case 0x4e2e54u: goto label_4e2e54;
        case 0x4e2e58u: goto label_4e2e58;
        case 0x4e2e5cu: goto label_4e2e5c;
        case 0x4e2e60u: goto label_4e2e60;
        case 0x4e2e64u: goto label_4e2e64;
        case 0x4e2e68u: goto label_4e2e68;
        case 0x4e2e6cu: goto label_4e2e6c;
        case 0x4e2e70u: goto label_4e2e70;
        case 0x4e2e74u: goto label_4e2e74;
        case 0x4e2e78u: goto label_4e2e78;
        case 0x4e2e7cu: goto label_4e2e7c;
        case 0x4e2e80u: goto label_4e2e80;
        case 0x4e2e84u: goto label_4e2e84;
        case 0x4e2e88u: goto label_4e2e88;
        case 0x4e2e8cu: goto label_4e2e8c;
        case 0x4e2e90u: goto label_4e2e90;
        case 0x4e2e94u: goto label_4e2e94;
        case 0x4e2e98u: goto label_4e2e98;
        case 0x4e2e9cu: goto label_4e2e9c;
        case 0x4e2ea0u: goto label_4e2ea0;
        case 0x4e2ea4u: goto label_4e2ea4;
        case 0x4e2ea8u: goto label_4e2ea8;
        case 0x4e2eacu: goto label_4e2eac;
        case 0x4e2eb0u: goto label_4e2eb0;
        case 0x4e2eb4u: goto label_4e2eb4;
        case 0x4e2eb8u: goto label_4e2eb8;
        case 0x4e2ebcu: goto label_4e2ebc;
        case 0x4e2ec0u: goto label_4e2ec0;
        case 0x4e2ec4u: goto label_4e2ec4;
        case 0x4e2ec8u: goto label_4e2ec8;
        case 0x4e2eccu: goto label_4e2ecc;
        case 0x4e2ed0u: goto label_4e2ed0;
        case 0x4e2ed4u: goto label_4e2ed4;
        case 0x4e2ed8u: goto label_4e2ed8;
        case 0x4e2edcu: goto label_4e2edc;
        case 0x4e2ee0u: goto label_4e2ee0;
        case 0x4e2ee4u: goto label_4e2ee4;
        case 0x4e2ee8u: goto label_4e2ee8;
        case 0x4e2eecu: goto label_4e2eec;
        case 0x4e2ef0u: goto label_4e2ef0;
        case 0x4e2ef4u: goto label_4e2ef4;
        case 0x4e2ef8u: goto label_4e2ef8;
        case 0x4e2efcu: goto label_4e2efc;
        case 0x4e2f00u: goto label_4e2f00;
        case 0x4e2f04u: goto label_4e2f04;
        case 0x4e2f08u: goto label_4e2f08;
        case 0x4e2f0cu: goto label_4e2f0c;
        case 0x4e2f10u: goto label_4e2f10;
        case 0x4e2f14u: goto label_4e2f14;
        case 0x4e2f18u: goto label_4e2f18;
        case 0x4e2f1cu: goto label_4e2f1c;
        case 0x4e2f20u: goto label_4e2f20;
        case 0x4e2f24u: goto label_4e2f24;
        case 0x4e2f28u: goto label_4e2f28;
        case 0x4e2f2cu: goto label_4e2f2c;
        case 0x4e2f30u: goto label_4e2f30;
        case 0x4e2f34u: goto label_4e2f34;
        case 0x4e2f38u: goto label_4e2f38;
        case 0x4e2f3cu: goto label_4e2f3c;
        case 0x4e2f40u: goto label_4e2f40;
        case 0x4e2f44u: goto label_4e2f44;
        case 0x4e2f48u: goto label_4e2f48;
        case 0x4e2f4cu: goto label_4e2f4c;
        case 0x4e2f50u: goto label_4e2f50;
        case 0x4e2f54u: goto label_4e2f54;
        case 0x4e2f58u: goto label_4e2f58;
        case 0x4e2f5cu: goto label_4e2f5c;
        case 0x4e2f60u: goto label_4e2f60;
        case 0x4e2f64u: goto label_4e2f64;
        case 0x4e2f68u: goto label_4e2f68;
        case 0x4e2f6cu: goto label_4e2f6c;
        case 0x4e2f70u: goto label_4e2f70;
        case 0x4e2f74u: goto label_4e2f74;
        case 0x4e2f78u: goto label_4e2f78;
        case 0x4e2f7cu: goto label_4e2f7c;
        case 0x4e2f80u: goto label_4e2f80;
        case 0x4e2f84u: goto label_4e2f84;
        case 0x4e2f88u: goto label_4e2f88;
        case 0x4e2f8cu: goto label_4e2f8c;
        case 0x4e2f90u: goto label_4e2f90;
        case 0x4e2f94u: goto label_4e2f94;
        case 0x4e2f98u: goto label_4e2f98;
        case 0x4e2f9cu: goto label_4e2f9c;
        case 0x4e2fa0u: goto label_4e2fa0;
        case 0x4e2fa4u: goto label_4e2fa4;
        case 0x4e2fa8u: goto label_4e2fa8;
        case 0x4e2facu: goto label_4e2fac;
        case 0x4e2fb0u: goto label_4e2fb0;
        case 0x4e2fb4u: goto label_4e2fb4;
        case 0x4e2fb8u: goto label_4e2fb8;
        case 0x4e2fbcu: goto label_4e2fbc;
        case 0x4e2fc0u: goto label_4e2fc0;
        case 0x4e2fc4u: goto label_4e2fc4;
        case 0x4e2fc8u: goto label_4e2fc8;
        case 0x4e2fccu: goto label_4e2fcc;
        case 0x4e2fd0u: goto label_4e2fd0;
        case 0x4e2fd4u: goto label_4e2fd4;
        case 0x4e2fd8u: goto label_4e2fd8;
        case 0x4e2fdcu: goto label_4e2fdc;
        case 0x4e2fe0u: goto label_4e2fe0;
        case 0x4e2fe4u: goto label_4e2fe4;
        case 0x4e2fe8u: goto label_4e2fe8;
        case 0x4e2fecu: goto label_4e2fec;
        case 0x4e2ff0u: goto label_4e2ff0;
        case 0x4e2ff4u: goto label_4e2ff4;
        case 0x4e2ff8u: goto label_4e2ff8;
        case 0x4e2ffcu: goto label_4e2ffc;
        case 0x4e3000u: goto label_4e3000;
        case 0x4e3004u: goto label_4e3004;
        case 0x4e3008u: goto label_4e3008;
        case 0x4e300cu: goto label_4e300c;
        case 0x4e3010u: goto label_4e3010;
        case 0x4e3014u: goto label_4e3014;
        case 0x4e3018u: goto label_4e3018;
        case 0x4e301cu: goto label_4e301c;
        case 0x4e3020u: goto label_4e3020;
        case 0x4e3024u: goto label_4e3024;
        case 0x4e3028u: goto label_4e3028;
        case 0x4e302cu: goto label_4e302c;
        case 0x4e3030u: goto label_4e3030;
        case 0x4e3034u: goto label_4e3034;
        case 0x4e3038u: goto label_4e3038;
        case 0x4e303cu: goto label_4e303c;
        case 0x4e3040u: goto label_4e3040;
        case 0x4e3044u: goto label_4e3044;
        case 0x4e3048u: goto label_4e3048;
        case 0x4e304cu: goto label_4e304c;
        case 0x4e3050u: goto label_4e3050;
        case 0x4e3054u: goto label_4e3054;
        case 0x4e3058u: goto label_4e3058;
        case 0x4e305cu: goto label_4e305c;
        case 0x4e3060u: goto label_4e3060;
        case 0x4e3064u: goto label_4e3064;
        case 0x4e3068u: goto label_4e3068;
        case 0x4e306cu: goto label_4e306c;
        case 0x4e3070u: goto label_4e3070;
        case 0x4e3074u: goto label_4e3074;
        case 0x4e3078u: goto label_4e3078;
        case 0x4e307cu: goto label_4e307c;
        case 0x4e3080u: goto label_4e3080;
        case 0x4e3084u: goto label_4e3084;
        case 0x4e3088u: goto label_4e3088;
        case 0x4e308cu: goto label_4e308c;
        case 0x4e3090u: goto label_4e3090;
        case 0x4e3094u: goto label_4e3094;
        case 0x4e3098u: goto label_4e3098;
        case 0x4e309cu: goto label_4e309c;
        case 0x4e30a0u: goto label_4e30a0;
        case 0x4e30a4u: goto label_4e30a4;
        case 0x4e30a8u: goto label_4e30a8;
        case 0x4e30acu: goto label_4e30ac;
        case 0x4e30b0u: goto label_4e30b0;
        case 0x4e30b4u: goto label_4e30b4;
        case 0x4e30b8u: goto label_4e30b8;
        case 0x4e30bcu: goto label_4e30bc;
        case 0x4e30c0u: goto label_4e30c0;
        case 0x4e30c4u: goto label_4e30c4;
        case 0x4e30c8u: goto label_4e30c8;
        case 0x4e30ccu: goto label_4e30cc;
        case 0x4e30d0u: goto label_4e30d0;
        case 0x4e30d4u: goto label_4e30d4;
        case 0x4e30d8u: goto label_4e30d8;
        case 0x4e30dcu: goto label_4e30dc;
        case 0x4e30e0u: goto label_4e30e0;
        case 0x4e30e4u: goto label_4e30e4;
        case 0x4e30e8u: goto label_4e30e8;
        case 0x4e30ecu: goto label_4e30ec;
        case 0x4e30f0u: goto label_4e30f0;
        case 0x4e30f4u: goto label_4e30f4;
        case 0x4e30f8u: goto label_4e30f8;
        case 0x4e30fcu: goto label_4e30fc;
        case 0x4e3100u: goto label_4e3100;
        case 0x4e3104u: goto label_4e3104;
        case 0x4e3108u: goto label_4e3108;
        case 0x4e310cu: goto label_4e310c;
        case 0x4e3110u: goto label_4e3110;
        case 0x4e3114u: goto label_4e3114;
        case 0x4e3118u: goto label_4e3118;
        case 0x4e311cu: goto label_4e311c;
        case 0x4e3120u: goto label_4e3120;
        case 0x4e3124u: goto label_4e3124;
        case 0x4e3128u: goto label_4e3128;
        case 0x4e312cu: goto label_4e312c;
        case 0x4e3130u: goto label_4e3130;
        case 0x4e3134u: goto label_4e3134;
        case 0x4e3138u: goto label_4e3138;
        case 0x4e313cu: goto label_4e313c;
        case 0x4e3140u: goto label_4e3140;
        case 0x4e3144u: goto label_4e3144;
        case 0x4e3148u: goto label_4e3148;
        case 0x4e314cu: goto label_4e314c;
        case 0x4e3150u: goto label_4e3150;
        case 0x4e3154u: goto label_4e3154;
        case 0x4e3158u: goto label_4e3158;
        case 0x4e315cu: goto label_4e315c;
        case 0x4e3160u: goto label_4e3160;
        case 0x4e3164u: goto label_4e3164;
        case 0x4e3168u: goto label_4e3168;
        case 0x4e316cu: goto label_4e316c;
        case 0x4e3170u: goto label_4e3170;
        case 0x4e3174u: goto label_4e3174;
        case 0x4e3178u: goto label_4e3178;
        case 0x4e317cu: goto label_4e317c;
        case 0x4e3180u: goto label_4e3180;
        case 0x4e3184u: goto label_4e3184;
        case 0x4e3188u: goto label_4e3188;
        case 0x4e318cu: goto label_4e318c;
        case 0x4e3190u: goto label_4e3190;
        case 0x4e3194u: goto label_4e3194;
        case 0x4e3198u: goto label_4e3198;
        case 0x4e319cu: goto label_4e319c;
        case 0x4e31a0u: goto label_4e31a0;
        case 0x4e31a4u: goto label_4e31a4;
        case 0x4e31a8u: goto label_4e31a8;
        case 0x4e31acu: goto label_4e31ac;
        case 0x4e31b0u: goto label_4e31b0;
        case 0x4e31b4u: goto label_4e31b4;
        case 0x4e31b8u: goto label_4e31b8;
        case 0x4e31bcu: goto label_4e31bc;
        case 0x4e31c0u: goto label_4e31c0;
        case 0x4e31c4u: goto label_4e31c4;
        case 0x4e31c8u: goto label_4e31c8;
        case 0x4e31ccu: goto label_4e31cc;
        case 0x4e31d0u: goto label_4e31d0;
        case 0x4e31d4u: goto label_4e31d4;
        case 0x4e31d8u: goto label_4e31d8;
        case 0x4e31dcu: goto label_4e31dc;
        case 0x4e31e0u: goto label_4e31e0;
        case 0x4e31e4u: goto label_4e31e4;
        case 0x4e31e8u: goto label_4e31e8;
        case 0x4e31ecu: goto label_4e31ec;
        case 0x4e31f0u: goto label_4e31f0;
        case 0x4e31f4u: goto label_4e31f4;
        case 0x4e31f8u: goto label_4e31f8;
        case 0x4e31fcu: goto label_4e31fc;
        case 0x4e3200u: goto label_4e3200;
        case 0x4e3204u: goto label_4e3204;
        case 0x4e3208u: goto label_4e3208;
        case 0x4e320cu: goto label_4e320c;
        case 0x4e3210u: goto label_4e3210;
        case 0x4e3214u: goto label_4e3214;
        case 0x4e3218u: goto label_4e3218;
        case 0x4e321cu: goto label_4e321c;
        case 0x4e3220u: goto label_4e3220;
        case 0x4e3224u: goto label_4e3224;
        case 0x4e3228u: goto label_4e3228;
        case 0x4e322cu: goto label_4e322c;
        case 0x4e3230u: goto label_4e3230;
        case 0x4e3234u: goto label_4e3234;
        case 0x4e3238u: goto label_4e3238;
        case 0x4e323cu: goto label_4e323c;
        case 0x4e3240u: goto label_4e3240;
        case 0x4e3244u: goto label_4e3244;
        case 0x4e3248u: goto label_4e3248;
        case 0x4e324cu: goto label_4e324c;
        case 0x4e3250u: goto label_4e3250;
        case 0x4e3254u: goto label_4e3254;
        case 0x4e3258u: goto label_4e3258;
        case 0x4e325cu: goto label_4e325c;
        case 0x4e3260u: goto label_4e3260;
        case 0x4e3264u: goto label_4e3264;
        case 0x4e3268u: goto label_4e3268;
        case 0x4e326cu: goto label_4e326c;
        case 0x4e3270u: goto label_4e3270;
        case 0x4e3274u: goto label_4e3274;
        case 0x4e3278u: goto label_4e3278;
        case 0x4e327cu: goto label_4e327c;
        case 0x4e3280u: goto label_4e3280;
        case 0x4e3284u: goto label_4e3284;
        case 0x4e3288u: goto label_4e3288;
        case 0x4e328cu: goto label_4e328c;
        case 0x4e3290u: goto label_4e3290;
        case 0x4e3294u: goto label_4e3294;
        case 0x4e3298u: goto label_4e3298;
        case 0x4e329cu: goto label_4e329c;
        case 0x4e32a0u: goto label_4e32a0;
        case 0x4e32a4u: goto label_4e32a4;
        case 0x4e32a8u: goto label_4e32a8;
        case 0x4e32acu: goto label_4e32ac;
        case 0x4e32b0u: goto label_4e32b0;
        case 0x4e32b4u: goto label_4e32b4;
        case 0x4e32b8u: goto label_4e32b8;
        case 0x4e32bcu: goto label_4e32bc;
        case 0x4e32c0u: goto label_4e32c0;
        case 0x4e32c4u: goto label_4e32c4;
        case 0x4e32c8u: goto label_4e32c8;
        case 0x4e32ccu: goto label_4e32cc;
        case 0x4e32d0u: goto label_4e32d0;
        case 0x4e32d4u: goto label_4e32d4;
        case 0x4e32d8u: goto label_4e32d8;
        case 0x4e32dcu: goto label_4e32dc;
        case 0x4e32e0u: goto label_4e32e0;
        case 0x4e32e4u: goto label_4e32e4;
        case 0x4e32e8u: goto label_4e32e8;
        case 0x4e32ecu: goto label_4e32ec;
        case 0x4e32f0u: goto label_4e32f0;
        case 0x4e32f4u: goto label_4e32f4;
        case 0x4e32f8u: goto label_4e32f8;
        case 0x4e32fcu: goto label_4e32fc;
        case 0x4e3300u: goto label_4e3300;
        case 0x4e3304u: goto label_4e3304;
        case 0x4e3308u: goto label_4e3308;
        case 0x4e330cu: goto label_4e330c;
        case 0x4e3310u: goto label_4e3310;
        case 0x4e3314u: goto label_4e3314;
        case 0x4e3318u: goto label_4e3318;
        case 0x4e331cu: goto label_4e331c;
        case 0x4e3320u: goto label_4e3320;
        case 0x4e3324u: goto label_4e3324;
        case 0x4e3328u: goto label_4e3328;
        case 0x4e332cu: goto label_4e332c;
        case 0x4e3330u: goto label_4e3330;
        case 0x4e3334u: goto label_4e3334;
        case 0x4e3338u: goto label_4e3338;
        case 0x4e333cu: goto label_4e333c;
        case 0x4e3340u: goto label_4e3340;
        case 0x4e3344u: goto label_4e3344;
        case 0x4e3348u: goto label_4e3348;
        case 0x4e334cu: goto label_4e334c;
        case 0x4e3350u: goto label_4e3350;
        case 0x4e3354u: goto label_4e3354;
        case 0x4e3358u: goto label_4e3358;
        case 0x4e335cu: goto label_4e335c;
        case 0x4e3360u: goto label_4e3360;
        case 0x4e3364u: goto label_4e3364;
        case 0x4e3368u: goto label_4e3368;
        case 0x4e336cu: goto label_4e336c;
        case 0x4e3370u: goto label_4e3370;
        case 0x4e3374u: goto label_4e3374;
        case 0x4e3378u: goto label_4e3378;
        case 0x4e337cu: goto label_4e337c;
        case 0x4e3380u: goto label_4e3380;
        case 0x4e3384u: goto label_4e3384;
        case 0x4e3388u: goto label_4e3388;
        case 0x4e338cu: goto label_4e338c;
        case 0x4e3390u: goto label_4e3390;
        case 0x4e3394u: goto label_4e3394;
        case 0x4e3398u: goto label_4e3398;
        case 0x4e339cu: goto label_4e339c;
        case 0x4e33a0u: goto label_4e33a0;
        case 0x4e33a4u: goto label_4e33a4;
        case 0x4e33a8u: goto label_4e33a8;
        case 0x4e33acu: goto label_4e33ac;
        case 0x4e33b0u: goto label_4e33b0;
        case 0x4e33b4u: goto label_4e33b4;
        case 0x4e33b8u: goto label_4e33b8;
        case 0x4e33bcu: goto label_4e33bc;
        case 0x4e33c0u: goto label_4e33c0;
        case 0x4e33c4u: goto label_4e33c4;
        case 0x4e33c8u: goto label_4e33c8;
        case 0x4e33ccu: goto label_4e33cc;
        case 0x4e33d0u: goto label_4e33d0;
        case 0x4e33d4u: goto label_4e33d4;
        case 0x4e33d8u: goto label_4e33d8;
        case 0x4e33dcu: goto label_4e33dc;
        case 0x4e33e0u: goto label_4e33e0;
        case 0x4e33e4u: goto label_4e33e4;
        case 0x4e33e8u: goto label_4e33e8;
        case 0x4e33ecu: goto label_4e33ec;
        default: break;
    }

    ctx->pc = 0x4e2bb0u;

label_4e2bb0:
    // 0x4e2bb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e2bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4e2bb4:
    // 0x4e2bb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4e2bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4e2bb8:
    // 0x4e2bb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e2bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e2bbc:
    // 0x4e2bbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e2bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e2bc0:
    // 0x4e2bc0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4e2bc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e2bc4:
    // 0x4e2bc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e2bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e2bc8:
    // 0x4e2bc8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4e2bc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e2bcc:
    // 0x4e2bcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e2bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e2bd0:
    // 0x4e2bd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e2bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e2bd4:
    // 0x4e2bd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e2bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e2bd8:
    // 0x4e2bd8: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x4e2bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_4e2bdc:
    // 0x4e2bdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e2be0:
    // 0x4e2be0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_4e2be4:
    if (ctx->pc == 0x4E2BE4u) {
        ctx->pc = 0x4E2BE4u;
            // 0x4e2be4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E2BE8u;
        goto label_4e2be8;
    }
    ctx->pc = 0x4E2BE0u;
    {
        const bool branch_taken_0x4e2be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2BE0u;
            // 0x4e2be4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2be0) {
            ctx->pc = 0x4E2C08u;
            goto label_4e2c08;
        }
    }
    ctx->pc = 0x4E2BE8u;
label_4e2be8:
    // 0x4e2be8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4e2be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4e2bec:
    // 0x4e2bec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4e2becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4e2bf0:
    // 0x4e2bf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e2bf4:
    // 0x4e2bf4: 0x0  nop
    ctx->pc = 0x4e2bf4u;
    // NOP
label_4e2bf8:
    // 0x4e2bf8: 0x0  nop
    ctx->pc = 0x4e2bf8u;
    // NOP
label_4e2bfc:
    // 0x4e2bfc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4e2c00:
    if (ctx->pc == 0x4E2C00u) {
        ctx->pc = 0x4E2C04u;
        goto label_4e2c04;
    }
    ctx->pc = 0x4E2BFCu;
    {
        const bool branch_taken_0x4e2bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2bfc) {
            ctx->pc = 0x4E2BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e2be8;
        }
    }
    ctx->pc = 0x4E2C04u;
label_4e2c04:
    // 0x4e2c04: 0x0  nop
    ctx->pc = 0x4e2c04u;
    // NOP
label_4e2c08:
    // 0x4e2c08: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x4e2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_4e2c0c:
    // 0x4e2c0c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x4e2c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4e2c10:
    // 0x4e2c10: 0xc040138  jal         func_1004E0
label_4e2c14:
    if (ctx->pc == 0x4E2C14u) {
        ctx->pc = 0x4E2C14u;
            // 0x4e2c14: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->pc = 0x4E2C18u;
        goto label_4e2c18;
    }
    ctx->pc = 0x4E2C10u;
    SET_GPR_U32(ctx, 31, 0x4E2C18u);
    ctx->pc = 0x4E2C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2C10u;
            // 0x4e2c14: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2C18u; }
        if (ctx->pc != 0x4E2C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2C18u; }
        if (ctx->pc != 0x4E2C18u) { return; }
    }
    ctx->pc = 0x4E2C18u;
label_4e2c18:
    // 0x4e2c18: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x4e2c18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_4e2c1c:
    // 0x4e2c1c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x4e2c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_4e2c20:
    // 0x4e2c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e2c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e2c24:
    // 0x4e2c24: 0x24a53440  addiu       $a1, $a1, 0x3440
    ctx->pc = 0x4e2c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13376));
label_4e2c28:
    // 0x4e2c28: 0x24c633e0  addiu       $a2, $a2, 0x33E0
    ctx->pc = 0x4e2c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13280));
label_4e2c2c:
    // 0x4e2c2c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x4e2c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4e2c30:
    // 0x4e2c30: 0xc040840  jal         func_102100
label_4e2c34:
    if (ctx->pc == 0x4E2C34u) {
        ctx->pc = 0x4E2C34u;
            // 0x4e2c34: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2C38u;
        goto label_4e2c38;
    }
    ctx->pc = 0x4E2C30u;
    SET_GPR_U32(ctx, 31, 0x4E2C38u);
    ctx->pc = 0x4E2C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2C30u;
            // 0x4e2c34: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2C38u; }
        if (ctx->pc != 0x4E2C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2C38u; }
        if (ctx->pc != 0x4E2C38u) { return; }
    }
    ctx->pc = 0x4E2C38u;
label_4e2c38:
    // 0x4e2c38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e2c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e2c3c:
    // 0x4e2c3c: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x4e2c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_4e2c40:
    // 0x4e2c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2c44:
    // 0x4e2c44: 0xc075128  jal         func_1D44A0
label_4e2c48:
    if (ctx->pc == 0x4E2C48u) {
        ctx->pc = 0x4E2C48u;
            // 0x4e2c48: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x4E2C4Cu;
        goto label_4e2c4c;
    }
    ctx->pc = 0x4E2C44u;
    SET_GPR_U32(ctx, 31, 0x4E2C4Cu);
    ctx->pc = 0x4E2C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2C44u;
            // 0x4e2c48: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2C4Cu; }
        if (ctx->pc != 0x4E2C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2C4Cu; }
        if (ctx->pc != 0x4E2C4Cu) { return; }
    }
    ctx->pc = 0x4E2C4Cu;
label_4e2c4c:
    // 0x4e2c4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4e2c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e2c50:
    // 0x4e2c50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2c54:
    // 0x4e2c54: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x4e2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_4e2c58:
    // 0x4e2c58: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x4e2c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_4e2c5c:
    // 0x4e2c5c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4e2c5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e2c60:
    // 0x4e2c60: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e2c64:
    if (ctx->pc == 0x4E2C64u) {
        ctx->pc = 0x4E2C64u;
            // 0x4e2c64: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4E2C68u;
        goto label_4e2c68;
    }
    ctx->pc = 0x4E2C60u;
    {
        const bool branch_taken_0x4e2c60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2c60) {
            ctx->pc = 0x4E2C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2C60u;
            // 0x4e2c64: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E2C74u;
            goto label_4e2c74;
        }
    }
    ctx->pc = 0x4E2C68u;
label_4e2c68:
    // 0x4e2c68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2c6c:
    // 0x4e2c6c: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x4e2c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_4e2c70:
    // 0x4e2c70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4e2c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e2c74:
    // 0x4e2c74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2c78:
    // 0x4e2c78: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4e2c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4e2c7c:
    // 0x4e2c7c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4e2c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e2c80:
    // 0x4e2c80: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4e2c80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e2c84:
    // 0x4e2c84: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e2c88:
    if (ctx->pc == 0x4E2C88u) {
        ctx->pc = 0x4E2C88u;
            // 0x4e2c88: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4E2C8Cu;
        goto label_4e2c8c;
    }
    ctx->pc = 0x4E2C84u;
    {
        const bool branch_taken_0x4e2c84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2c84) {
            ctx->pc = 0x4E2C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2C84u;
            // 0x4e2c88: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E2C98u;
            goto label_4e2c98;
        }
    }
    ctx->pc = 0x4E2C8Cu;
label_4e2c8c:
    // 0x4e2c8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2c90:
    // 0x4e2c90: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4e2c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4e2c94:
    // 0x4e2c94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4e2c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e2c98:
    // 0x4e2c98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2c9c:
    // 0x4e2c9c: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4e2c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4e2ca0:
    // 0x4e2ca0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4e2ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e2ca4:
    // 0x4e2ca4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4e2ca4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e2ca8:
    // 0x4e2ca8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e2cac:
    if (ctx->pc == 0x4E2CACu) {
        ctx->pc = 0x4E2CACu;
            // 0x4e2cac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4E2CB0u;
        goto label_4e2cb0;
    }
    ctx->pc = 0x4E2CA8u;
    {
        const bool branch_taken_0x4e2ca8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2ca8) {
            ctx->pc = 0x4E2CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2CA8u;
            // 0x4e2cac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E2CBCu;
            goto label_4e2cbc;
        }
    }
    ctx->pc = 0x4E2CB0u;
label_4e2cb0:
    // 0x4e2cb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2cb4:
    // 0x4e2cb4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4e2cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4e2cb8:
    // 0x4e2cb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4e2cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e2cbc:
    // 0x4e2cbc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2cc0:
    // 0x4e2cc0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4e2cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4e2cc4:
    // 0x4e2cc4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4e2cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e2cc8:
    // 0x4e2cc8: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x4e2cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4e2ccc:
    // 0x4e2ccc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4e2cccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e2cd0:
    // 0x4e2cd0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e2cd4:
    if (ctx->pc == 0x4E2CD4u) {
        ctx->pc = 0x4E2CD4u;
            // 0x4e2cd4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4E2CD8u;
        goto label_4e2cd8;
    }
    ctx->pc = 0x4E2CD0u;
    {
        const bool branch_taken_0x4e2cd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2cd0) {
            ctx->pc = 0x4E2CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2CD0u;
            // 0x4e2cd4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E2CE4u;
            goto label_4e2ce4;
        }
    }
    ctx->pc = 0x4E2CD8u;
label_4e2cd8:
    // 0x4e2cd8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2cdc:
    // 0x4e2cdc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4e2cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4e2ce0:
    // 0x4e2ce0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4e2ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e2ce4:
    // 0x4e2ce4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2ce8:
    // 0x4e2ce8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4e2ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4e2cec:
    // 0x4e2cec: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4e2cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e2cf0:
    // 0x4e2cf0: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x4e2cf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4e2cf4:
    // 0x4e2cf4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4e2cf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e2cf8:
    // 0x4e2cf8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e2cfc:
    if (ctx->pc == 0x4E2CFCu) {
        ctx->pc = 0x4E2CFCu;
            // 0x4e2cfc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x4E2D00u;
        goto label_4e2d00;
    }
    ctx->pc = 0x4E2CF8u;
    {
        const bool branch_taken_0x4e2cf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2cf8) {
            ctx->pc = 0x4E2CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2CF8u;
            // 0x4e2cfc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E2D0Cu;
            goto label_4e2d0c;
        }
    }
    ctx->pc = 0x4E2D00u;
label_4e2d00:
    // 0x4e2d00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2d04:
    // 0x4e2d04: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4e2d04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4e2d08:
    // 0x4e2d08: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4e2d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4e2d0c:
    // 0x4e2d0c: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4e2d10:
    if (ctx->pc == 0x4E2D10u) {
        ctx->pc = 0x4E2D10u;
            // 0x4e2d10: 0x26120008  addiu       $s2, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x4E2D14u;
        goto label_4e2d14;
    }
    ctx->pc = 0x4E2D0Cu;
    {
        const bool branch_taken_0x4e2d0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2D0Cu;
            // 0x4e2d10: 0x26120008  addiu       $s2, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2d0c) {
            ctx->pc = 0x4E2D50u;
            goto label_4e2d50;
        }
    }
    ctx->pc = 0x4E2D14u;
label_4e2d14:
    // 0x4e2d14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e2d18:
    // 0x4e2d18: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4e2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4e2d1c:
    // 0x4e2d1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e2d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e2d20:
    // 0x4e2d20: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e2d20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4e2d24:
    // 0x4e2d24: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x4e2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4e2d28:
    // 0x4e2d28: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x4e2d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_4e2d2c:
    // 0x4e2d2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4e2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e2d30:
    // 0x4e2d30: 0xc0751b8  jal         func_1D46E0
label_4e2d34:
    if (ctx->pc == 0x4E2D34u) {
        ctx->pc = 0x4E2D34u;
            // 0x4e2d34: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4E2D38u;
        goto label_4e2d38;
    }
    ctx->pc = 0x4E2D30u;
    SET_GPR_U32(ctx, 31, 0x4E2D38u);
    ctx->pc = 0x4E2D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2D30u;
            // 0x4e2d34: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2D38u; }
        if (ctx->pc != 0x4E2D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2D38u; }
        if (ctx->pc != 0x4E2D38u) { return; }
    }
    ctx->pc = 0x4E2D38u;
label_4e2d38:
    // 0x4e2d38: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x4e2d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_4e2d3c:
    // 0x4e2d3c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4e2d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4e2d40:
    // 0x4e2d40: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x4e2d40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_4e2d44:
    // 0x4e2d44: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4e2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4e2d48:
    // 0x4e2d48: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
label_4e2d4c:
    if (ctx->pc == 0x4E2D4Cu) {
        ctx->pc = 0x4E2D4Cu;
            // 0x4e2d4c: 0xae830020  sw          $v1, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x4E2D50u;
        goto label_4e2d50;
    }
    ctx->pc = 0x4E2D48u;
    {
        const bool branch_taken_0x4e2d48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E2D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2D48u;
            // 0x4e2d4c: 0xae830020  sw          $v1, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2d48) {
            ctx->pc = 0x4E2D14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e2d14;
        }
    }
    ctx->pc = 0x4E2D50u;
label_4e2d50:
    // 0x4e2d50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2d54:
    // 0x4e2d54: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4e2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4e2d58:
    // 0x4e2d58: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x4e2d58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4e2d5c:
    // 0x4e2d5c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e2d60:
    if (ctx->pc == 0x4E2D60u) {
        ctx->pc = 0x4E2D64u;
        goto label_4e2d64;
    }
    ctx->pc = 0x4E2D5Cu;
    {
        const bool branch_taken_0x4e2d5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2d5c) {
            ctx->pc = 0x4E2D6Cu;
            goto label_4e2d6c;
        }
    }
    ctx->pc = 0x4E2D64u;
label_4e2d64:
    // 0x4e2d64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2d68:
    // 0x4e2d68: 0xac73e3c8  sw          $s3, -0x1C38($v1)
    ctx->pc = 0x4e2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 19));
label_4e2d6c:
    // 0x4e2d6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2d70:
    // 0x4e2d70: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4e2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4e2d74:
    // 0x4e2d74: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x4e2d74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4e2d78:
    // 0x4e2d78: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e2d7c:
    if (ctx->pc == 0x4E2D7Cu) {
        ctx->pc = 0x4E2D7Cu;
            // 0x4e2d7c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x4E2D80u;
        goto label_4e2d80;
    }
    ctx->pc = 0x4E2D78u;
    {
        const bool branch_taken_0x4e2d78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2d78) {
            ctx->pc = 0x4E2D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2D78u;
            // 0x4e2d7c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E2D8Cu;
            goto label_4e2d8c;
        }
    }
    ctx->pc = 0x4E2D80u;
label_4e2d80:
    // 0x4e2d80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2d84:
    // 0x4e2d84: 0xac73e3d0  sw          $s3, -0x1C30($v1)
    ctx->pc = 0x4e2d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 19));
label_4e2d88:
    // 0x4e2d88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4e2d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4e2d8c:
    // 0x4e2d8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e2d8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e2d90:
    // 0x4e2d90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e2d90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e2d94:
    // 0x4e2d94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e2d94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e2d98:
    // 0x4e2d98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e2d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e2d9c:
    // 0x4e2d9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e2d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e2da0:
    // 0x4e2da0: 0x3e00008  jr          $ra
label_4e2da4:
    if (ctx->pc == 0x4E2DA4u) {
        ctx->pc = 0x4E2DA4u;
            // 0x4e2da4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E2DA8u;
        goto label_4e2da8;
    }
    ctx->pc = 0x4E2DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2DA0u;
            // 0x4e2da4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E2DA8u;
label_4e2da8:
    // 0x4e2da8: 0x0  nop
    ctx->pc = 0x4e2da8u;
    // NOP
label_4e2dac:
    // 0x4e2dac: 0x0  nop
    ctx->pc = 0x4e2dacu;
    // NOP
label_4e2db0:
    // 0x4e2db0: 0x80aebcc  j           func_2BAF30
label_4e2db4:
    if (ctx->pc == 0x4E2DB4u) {
        ctx->pc = 0x4E2DB4u;
            // 0x4e2db4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4E2DB8u;
        goto label_4e2db8;
    }
    ctx->pc = 0x4E2DB0u;
    ctx->pc = 0x4E2DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2DB0u;
            // 0x4e2db4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF30u;
    {
        auto targetFn = runtime->lookupFunction(0x2BAF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E2DB8u;
label_4e2db8:
    // 0x4e2db8: 0x0  nop
    ctx->pc = 0x4e2db8u;
    // NOP
label_4e2dbc:
    // 0x4e2dbc: 0x0  nop
    ctx->pc = 0x4e2dbcu;
    // NOP
label_4e2dc0:
    // 0x4e2dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e2dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e2dc4:
    // 0x4e2dc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e2dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e2dc8:
    // 0x4e2dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e2dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e2dcc:
    // 0x4e2dcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e2dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e2dd0:
    // 0x4e2dd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e2dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e2dd4:
    // 0x4e2dd4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4e2dd8:
    if (ctx->pc == 0x4E2DD8u) {
        ctx->pc = 0x4E2DD8u;
            // 0x4e2dd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2DDCu;
        goto label_4e2ddc;
    }
    ctx->pc = 0x4E2DD4u;
    {
        const bool branch_taken_0x4e2dd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2DD4u;
            // 0x4e2dd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2dd4) {
            ctx->pc = 0x4E2E18u;
            goto label_4e2e18;
        }
    }
    ctx->pc = 0x4E2DDCu;
label_4e2ddc:
    // 0x4e2ddc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e2de0:
    // 0x4e2de0: 0x24423730  addiu       $v0, $v0, 0x3730
    ctx->pc = 0x4e2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14128));
label_4e2de4:
    // 0x4e2de4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4e2de8:
    if (ctx->pc == 0x4E2DE8u) {
        ctx->pc = 0x4E2DE8u;
            // 0x4e2de8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4E2DECu;
        goto label_4e2dec;
    }
    ctx->pc = 0x4E2DE4u;
    {
        const bool branch_taken_0x4e2de4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2DE4u;
            // 0x4e2de8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2de4) {
            ctx->pc = 0x4E2E00u;
            goto label_4e2e00;
        }
    }
    ctx->pc = 0x4E2DECu;
label_4e2dec:
    // 0x4e2dec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e2decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e2df0:
    // 0x4e2df0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e2df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e2df4:
    // 0x4e2df4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4e2df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4e2df8:
    // 0x4e2df8: 0xc057a68  jal         func_15E9A0
label_4e2dfc:
    if (ctx->pc == 0x4E2DFCu) {
        ctx->pc = 0x4E2DFCu;
            // 0x4e2dfc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4E2E00u;
        goto label_4e2e00;
    }
    ctx->pc = 0x4E2DF8u;
    SET_GPR_U32(ctx, 31, 0x4E2E00u);
    ctx->pc = 0x4E2DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2DF8u;
            // 0x4e2dfc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2E00u; }
        if (ctx->pc != 0x4E2E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2E00u; }
        if (ctx->pc != 0x4E2E00u) { return; }
    }
    ctx->pc = 0x4E2E00u;
label_4e2e00:
    // 0x4e2e00: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4e2e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4e2e04:
    // 0x4e2e04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e2e04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e2e08:
    // 0x4e2e08: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e2e0c:
    if (ctx->pc == 0x4E2E0Cu) {
        ctx->pc = 0x4E2E0Cu;
            // 0x4e2e0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2E10u;
        goto label_4e2e10;
    }
    ctx->pc = 0x4E2E08u;
    {
        const bool branch_taken_0x4e2e08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e2e08) {
            ctx->pc = 0x4E2E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2E08u;
            // 0x4e2e0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E2E1Cu;
            goto label_4e2e1c;
        }
    }
    ctx->pc = 0x4E2E10u;
label_4e2e10:
    // 0x4e2e10: 0xc0400a8  jal         func_1002A0
label_4e2e14:
    if (ctx->pc == 0x4E2E14u) {
        ctx->pc = 0x4E2E14u;
            // 0x4e2e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2E18u;
        goto label_4e2e18;
    }
    ctx->pc = 0x4E2E10u;
    SET_GPR_U32(ctx, 31, 0x4E2E18u);
    ctx->pc = 0x4E2E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2E10u;
            // 0x4e2e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2E18u; }
        if (ctx->pc != 0x4E2E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2E18u; }
        if (ctx->pc != 0x4E2E18u) { return; }
    }
    ctx->pc = 0x4E2E18u;
label_4e2e18:
    // 0x4e2e18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4e2e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e2e1c:
    // 0x4e2e1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e2e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e2e20:
    // 0x4e2e20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e2e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e2e24:
    // 0x4e2e24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e2e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e2e28:
    // 0x4e2e28: 0x3e00008  jr          $ra
label_4e2e2c:
    if (ctx->pc == 0x4E2E2Cu) {
        ctx->pc = 0x4E2E2Cu;
            // 0x4e2e2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E2E30u;
        goto label_4e2e30;
    }
    ctx->pc = 0x4E2E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2E28u;
            // 0x4e2e2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E2E30u;
label_4e2e30:
    // 0x4e2e30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4e2e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4e2e34:
    // 0x4e2e34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e2e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e2e38:
    // 0x4e2e38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e2e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e2e3c:
    // 0x4e2e3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e2e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e2e40:
    // 0x4e2e40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e2e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e2e44:
    // 0x4e2e44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e2e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e2e48:
    // 0x4e2e48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e2e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e2e4c:
    // 0x4e2e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e2e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e2e50:
    // 0x4e2e50: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4e2e50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4e2e54:
    // 0x4e2e54: 0x54830045  bnel        $a0, $v1, . + 4 + (0x45 << 2)
label_4e2e58:
    if (ctx->pc == 0x4E2E58u) {
        ctx->pc = 0x4E2E58u;
            // 0x4e2e58: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4E2E5Cu;
        goto label_4e2e5c;
    }
    ctx->pc = 0x4E2E54u;
    {
        const bool branch_taken_0x4e2e54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e2e54) {
            ctx->pc = 0x4E2E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2E54u;
            // 0x4e2e58: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E2F6Cu;
            goto label_4e2f6c;
        }
    }
    ctx->pc = 0x4E2E5Cu;
label_4e2e5c:
    // 0x4e2e5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e2e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e2e60:
    // 0x4e2e60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e2e64:
    // 0x4e2e64: 0x8c70e378  lw          $s0, -0x1C88($v1)
    ctx->pc = 0x4e2e64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4e2e68:
    // 0x4e2e68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e2e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e2e6c:
    // 0x4e2e6c: 0x8c51e370  lw          $s1, -0x1C90($v0)
    ctx->pc = 0x4e2e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4e2e70:
    // 0x4e2e70: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4e2e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4e2e74:
    // 0x4e2e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2e78:
    // 0x4e2e78: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4e2e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4e2e7c:
    // 0x4e2e7c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4e2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4e2e80:
    // 0x4e2e80: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x4e2e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4e2e84:
    // 0x4e2e84: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x4e2e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4e2e88:
    // 0x4e2e88: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x4e2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_4e2e8c:
    // 0x4e2e8c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4e2e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e2e90:
    // 0x4e2e90: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4e2e90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e2e94:
    // 0x4e2e94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4e2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e2e98:
    // 0x4e2e98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4e2e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4e2e9c:
    // 0x4e2e9c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4e2e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e2ea0:
    // 0x4e2ea0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4e2ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4e2ea4:
    // 0x4e2ea4: 0xc04e4a4  jal         func_139290
label_4e2ea8:
    if (ctx->pc == 0x4E2EA8u) {
        ctx->pc = 0x4E2EA8u;
            // 0x4e2ea8: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x4E2EACu;
        goto label_4e2eac;
    }
    ctx->pc = 0x4E2EA4u;
    SET_GPR_U32(ctx, 31, 0x4E2EACu);
    ctx->pc = 0x4E2EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2EA4u;
            // 0x4e2ea8: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2EACu; }
        if (ctx->pc != 0x4E2EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2EACu; }
        if (ctx->pc != 0x4E2EACu) { return; }
    }
    ctx->pc = 0x4E2EACu;
label_4e2eac:
    // 0x4e2eac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4e2eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4e2eb0:
    // 0x4e2eb0: 0xc04ccf4  jal         func_1333D0
label_4e2eb4:
    if (ctx->pc == 0x4E2EB4u) {
        ctx->pc = 0x4E2EB4u;
            // 0x4e2eb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2EB8u;
        goto label_4e2eb8;
    }
    ctx->pc = 0x4E2EB0u;
    SET_GPR_U32(ctx, 31, 0x4E2EB8u);
    ctx->pc = 0x4E2EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2EB0u;
            // 0x4e2eb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2EB8u; }
        if (ctx->pc != 0x4E2EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2EB8u; }
        if (ctx->pc != 0x4E2EB8u) { return; }
    }
    ctx->pc = 0x4E2EB8u;
label_4e2eb8:
    // 0x4e2eb8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x4e2eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_4e2ebc:
    // 0x4e2ebc: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x4e2ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_4e2ec0:
    // 0x4e2ec0: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x4e2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_4e2ec4:
    // 0x4e2ec4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4e2ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4e2ec8:
    // 0x4e2ec8: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x4e2ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e2ecc:
    // 0x4e2ecc: 0xc44d0034  lwc1        $f13, 0x34($v0)
    ctx->pc = 0x4e2eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4e2ed0:
    // 0x4e2ed0: 0xc44e0038  lwc1        $f14, 0x38($v0)
    ctx->pc = 0x4e2ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4e2ed4:
    // 0x4e2ed4: 0xc04f3fc  jal         func_13CFF0
label_4e2ed8:
    if (ctx->pc == 0x4E2ED8u) {
        ctx->pc = 0x4E2ED8u;
            // 0x4e2ed8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E2EDCu;
        goto label_4e2edc;
    }
    ctx->pc = 0x4E2ED4u;
    SET_GPR_U32(ctx, 31, 0x4E2EDCu);
    ctx->pc = 0x4E2ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2ED4u;
            // 0x4e2ed8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2EDCu; }
        if (ctx->pc != 0x4E2EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2EDCu; }
        if (ctx->pc != 0x4E2EDCu) { return; }
    }
    ctx->pc = 0x4E2EDCu;
label_4e2edc:
    // 0x4e2edc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4e2edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e2ee0:
    // 0x4e2ee0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e2ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e2ee4:
    // 0x4e2ee4: 0xc04cd60  jal         func_133580
label_4e2ee8:
    if (ctx->pc == 0x4E2EE8u) {
        ctx->pc = 0x4E2EE8u;
            // 0x4e2ee8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2EECu;
        goto label_4e2eec;
    }
    ctx->pc = 0x4E2EE4u;
    SET_GPR_U32(ctx, 31, 0x4E2EECu);
    ctx->pc = 0x4E2EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2EE4u;
            // 0x4e2ee8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2EECu; }
        if (ctx->pc != 0x4E2EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2EECu; }
        if (ctx->pc != 0x4E2EECu) { return; }
    }
    ctx->pc = 0x4E2EECu;
label_4e2eec:
    // 0x4e2eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e2eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e2ef0:
    // 0x4e2ef0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4e2ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e2ef4:
    // 0x4e2ef4: 0xc04cd60  jal         func_133580
label_4e2ef8:
    if (ctx->pc == 0x4E2EF8u) {
        ctx->pc = 0x4E2EF8u;
            // 0x4e2ef8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4E2EFCu;
        goto label_4e2efc;
    }
    ctx->pc = 0x4E2EF4u;
    SET_GPR_U32(ctx, 31, 0x4E2EFCu);
    ctx->pc = 0x4E2EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2EF4u;
            // 0x4e2ef8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2EFCu; }
        if (ctx->pc != 0x4E2EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2EFCu; }
        if (ctx->pc != 0x4E2EFCu) { return; }
    }
    ctx->pc = 0x4E2EFCu;
label_4e2efc:
    // 0x4e2efc: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x4e2efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_4e2f00:
    // 0x4e2f00: 0xc04e738  jal         func_139CE0
label_4e2f04:
    if (ctx->pc == 0x4E2F04u) {
        ctx->pc = 0x4E2F04u;
            // 0x4e2f04: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x4E2F08u;
        goto label_4e2f08;
    }
    ctx->pc = 0x4E2F00u;
    SET_GPR_U32(ctx, 31, 0x4E2F08u);
    ctx->pc = 0x4E2F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2F00u;
            // 0x4e2f04: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2F08u; }
        if (ctx->pc != 0x4E2F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2F08u; }
        if (ctx->pc != 0x4E2F08u) { return; }
    }
    ctx->pc = 0x4E2F08u;
label_4e2f08:
    // 0x4e2f08: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x4e2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_4e2f0c:
    // 0x4e2f0c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4e2f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4e2f10:
    // 0x4e2f10: 0xc64c0064  lwc1        $f12, 0x64($s2)
    ctx->pc = 0x4e2f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e2f14:
    // 0x4e2f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e2f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e2f18:
    // 0x4e2f18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e2f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2f1c:
    // 0x4e2f1c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4e2f1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e2f20:
    // 0x4e2f20: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4e2f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e2f24:
    // 0x4e2f24: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x4e2f24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_4e2f28:
    // 0x4e2f28: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x4e2f28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4e2f2c:
    // 0x4e2f2c: 0xc04cff4  jal         func_133FD0
label_4e2f30:
    if (ctx->pc == 0x4E2F30u) {
        ctx->pc = 0x4E2F30u;
            // 0x4e2f30: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2F34u;
        goto label_4e2f34;
    }
    ctx->pc = 0x4E2F2Cu;
    SET_GPR_U32(ctx, 31, 0x4E2F34u);
    ctx->pc = 0x4E2F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2F2Cu;
            // 0x4e2f30: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2F34u; }
        if (ctx->pc != 0x4E2F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2F34u; }
        if (ctx->pc != 0x4E2F34u) { return; }
    }
    ctx->pc = 0x4E2F34u;
label_4e2f34:
    // 0x4e2f34: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x4e2f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_4e2f38:
    // 0x4e2f38: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4e2f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4e2f3c:
    // 0x4e2f3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e2f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e2f40:
    // 0x4e2f40: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x4e2f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4e2f44:
    // 0x4e2f44: 0xc054bbc  jal         func_152EF0
label_4e2f48:
    if (ctx->pc == 0x4E2F48u) {
        ctx->pc = 0x4E2F48u;
            // 0x4e2f48: 0xc64c0068  lwc1        $f12, 0x68($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4E2F4Cu;
        goto label_4e2f4c;
    }
    ctx->pc = 0x4E2F44u;
    SET_GPR_U32(ctx, 31, 0x4E2F4Cu);
    ctx->pc = 0x4E2F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2F44u;
            // 0x4e2f48: 0xc64c0068  lwc1        $f12, 0x68($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2F4Cu; }
        if (ctx->pc != 0x4E2F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2F4Cu; }
        if (ctx->pc != 0x4E2F4Cu) { return; }
    }
    ctx->pc = 0x4E2F4Cu;
label_4e2f4c:
    // 0x4e2f4c: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x4e2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_4e2f50:
    // 0x4e2f50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4e2f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e2f54:
    // 0x4e2f54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4e2f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e2f58:
    // 0x4e2f58: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4e2f58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4e2f5c:
    // 0x4e2f5c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4e2f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4e2f60:
    // 0x4e2f60: 0xc054c2c  jal         func_1530B0
label_4e2f64:
    if (ctx->pc == 0x4E2F64u) {
        ctx->pc = 0x4E2F64u;
            // 0x4e2f64: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4E2F68u;
        goto label_4e2f68;
    }
    ctx->pc = 0x4E2F60u;
    SET_GPR_U32(ctx, 31, 0x4E2F68u);
    ctx->pc = 0x4E2F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2F60u;
            // 0x4e2f64: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2F68u; }
        if (ctx->pc != 0x4E2F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E2F68u; }
        if (ctx->pc != 0x4E2F68u) { return; }
    }
    ctx->pc = 0x4E2F68u;
label_4e2f68:
    // 0x4e2f68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e2f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e2f6c:
    // 0x4e2f6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e2f6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e2f70:
    // 0x4e2f70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e2f70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e2f74:
    // 0x4e2f74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e2f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e2f78:
    // 0x4e2f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e2f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e2f7c:
    // 0x4e2f7c: 0x3e00008  jr          $ra
label_4e2f80:
    if (ctx->pc == 0x4E2F80u) {
        ctx->pc = 0x4E2F80u;
            // 0x4e2f80: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4E2F84u;
        goto label_4e2f84;
    }
    ctx->pc = 0x4E2F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E2F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2F7Cu;
            // 0x4e2f80: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E2F84u;
label_4e2f84:
    // 0x4e2f84: 0x0  nop
    ctx->pc = 0x4e2f84u;
    // NOP
label_4e2f88:
    // 0x4e2f88: 0x0  nop
    ctx->pc = 0x4e2f88u;
    // NOP
label_4e2f8c:
    // 0x4e2f8c: 0x0  nop
    ctx->pc = 0x4e2f8cu;
    // NOP
label_4e2f90:
    // 0x4e2f90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e2f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e2f94:
    // 0x4e2f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e2f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e2f98:
    // 0x4e2f98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e2f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4e2f9c:
    // 0x4e2f9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e2f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e2fa0:
    // 0x4e2fa0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4e2fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4e2fa4:
    // 0x4e2fa4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4e2fa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4e2fa8:
    // 0x4e2fa8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4e2fa8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4e2fac:
    // 0x4e2fac: 0x10a30105  beq         $a1, $v1, . + 4 + (0x105 << 2)
label_4e2fb0:
    if (ctx->pc == 0x4E2FB0u) {
        ctx->pc = 0x4E2FB0u;
            // 0x4e2fb0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E2FB4u;
        goto label_4e2fb4;
    }
    ctx->pc = 0x4E2FACu;
    {
        const bool branch_taken_0x4e2fac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4E2FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2FACu;
            // 0x4e2fb0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2fac) {
            ctx->pc = 0x4E33C4u;
            goto label_4e33c4;
        }
    }
    ctx->pc = 0x4E2FB4u;
label_4e2fb4:
    // 0x4e2fb4: 0x10a000f4  beqz        $a1, . + 4 + (0xF4 << 2)
label_4e2fb8:
    if (ctx->pc == 0x4E2FB8u) {
        ctx->pc = 0x4E2FBCu;
        goto label_4e2fbc;
    }
    ctx->pc = 0x4E2FB4u;
    {
        const bool branch_taken_0x4e2fb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2fb4) {
            ctx->pc = 0x4E3388u;
            goto label_4e3388;
        }
    }
    ctx->pc = 0x4E2FBCu;
label_4e2fbc:
    // 0x4e2fbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e2fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e2fc0:
    // 0x4e2fc0: 0x50a3001c  beql        $a1, $v1, . + 4 + (0x1C << 2)
label_4e2fc4:
    if (ctx->pc == 0x4E2FC4u) {
        ctx->pc = 0x4E2FC4u;
            // 0x4e2fc4: 0x92230060  lbu         $v1, 0x60($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4E2FC8u;
        goto label_4e2fc8;
    }
    ctx->pc = 0x4E2FC0u;
    {
        const bool branch_taken_0x4e2fc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e2fc0) {
            ctx->pc = 0x4E2FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2FC0u;
            // 0x4e2fc4: 0x92230060  lbu         $v1, 0x60($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E3034u;
            goto label_4e3034;
        }
    }
    ctx->pc = 0x4E2FC8u;
label_4e2fc8:
    // 0x4e2fc8: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x4e2fc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e2fcc:
    // 0x4e2fcc: 0x10aa0003  beq         $a1, $t2, . + 4 + (0x3 << 2)
label_4e2fd0:
    if (ctx->pc == 0x4E2FD0u) {
        ctx->pc = 0x4E2FD4u;
        goto label_4e2fd4;
    }
    ctx->pc = 0x4E2FCCu;
    {
        const bool branch_taken_0x4e2fcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        if (branch_taken_0x4e2fcc) {
            ctx->pc = 0x4E2FDCu;
            goto label_4e2fdc;
        }
    }
    ctx->pc = 0x4E2FD4u;
label_4e2fd4:
    // 0x4e2fd4: 0x10000101  b           . + 4 + (0x101 << 2)
label_4e2fd8:
    if (ctx->pc == 0x4E2FD8u) {
        ctx->pc = 0x4E2FD8u;
            // 0x4e2fd8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4E2FDCu;
        goto label_4e2fdc;
    }
    ctx->pc = 0x4E2FD4u;
    {
        const bool branch_taken_0x4e2fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2FD4u;
            // 0x4e2fd8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2fd4) {
            ctx->pc = 0x4E33DCu;
            goto label_4e33dc;
        }
    }
    ctx->pc = 0x4E2FDCu;
label_4e2fdc:
    // 0x4e2fdc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e2fe0:
    // 0x4e2fe0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e2fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e2fe4:
    // 0x4e2fe4: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x4e2fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e2fe8:
    // 0x4e2fe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4e2fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e2fec:
    // 0x4e2fec: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4e2fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e2ff0:
    // 0x4e2ff0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4e2ff0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4e2ff4:
    // 0x4e2ff4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4e2ff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e2ff8:
    // 0x4e2ff8: 0x450000f7  bc1f        . + 4 + (0xF7 << 2)
label_4e2ffc:
    if (ctx->pc == 0x4E2FFCu) {
        ctx->pc = 0x4E2FFCu;
            // 0x4e2ffc: 0xe621006c  swc1        $f1, 0x6C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
        ctx->pc = 0x4E3000u;
        goto label_4e3000;
    }
    ctx->pc = 0x4E2FF8u;
    {
        const bool branch_taken_0x4e2ff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E2FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E2FF8u;
            // 0x4e2ffc: 0xe621006c  swc1        $f1, 0x6C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2ff8) {
            ctx->pc = 0x4E33D8u;
            goto label_4e33d8;
        }
    }
    ctx->pc = 0x4E3000u;
label_4e3000:
    // 0x4e3000: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e3000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e3004:
    // 0x4e3004: 0x8e260054  lw          $a2, 0x54($s1)
    ctx->pc = 0x4e3004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_4e3008:
    // 0x4e3008: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4e3008u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_4e300c:
    // 0x4e300c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4e300cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e3010:
    // 0x4e3010: 0x8e270058  lw          $a3, 0x58($s1)
    ctx->pc = 0x4e3010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4e3014:
    // 0x4e3014: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x4e3014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_4e3018:
    // 0x4e3018: 0xc0bb404  jal         func_2ED010
label_4e301c:
    if (ctx->pc == 0x4E301Cu) {
        ctx->pc = 0x4E301Cu;
            // 0x4e301c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3020u;
        goto label_4e3020;
    }
    ctx->pc = 0x4E3018u;
    SET_GPR_U32(ctx, 31, 0x4E3020u);
    ctx->pc = 0x4E301Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3018u;
            // 0x4e301c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3020u; }
        if (ctx->pc != 0x4E3020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3020u; }
        if (ctx->pc != 0x4E3020u) { return; }
    }
    ctx->pc = 0x4E3020u;
label_4e3020:
    // 0x4e3020: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4e3020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e3024:
    // 0x4e3024: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4e3024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4e3028:
    // 0x4e3028: 0x320f809  jalr        $t9
label_4e302c:
    if (ctx->pc == 0x4E302Cu) {
        ctx->pc = 0x4E302Cu;
            // 0x4e302c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3030u;
        goto label_4e3030;
    }
    ctx->pc = 0x4E3028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E3030u);
        ctx->pc = 0x4E302Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3028u;
            // 0x4e302c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E3030u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E3030u; }
            if (ctx->pc != 0x4E3030u) { return; }
        }
        }
    }
    ctx->pc = 0x4E3030u;
label_4e3030:
    // 0x4e3030: 0x92230060  lbu         $v1, 0x60($s1)
    ctx->pc = 0x4e3030u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 96)));
label_4e3034:
    // 0x4e3034: 0x5460002b  bnel        $v1, $zero, . + 4 + (0x2B << 2)
label_4e3038:
    if (ctx->pc == 0x4E3038u) {
        ctx->pc = 0x4E3038u;
            // 0x4e3038: 0x92230061  lbu         $v1, 0x61($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 97)));
        ctx->pc = 0x4E303Cu;
        goto label_4e303c;
    }
    ctx->pc = 0x4E3034u;
    {
        const bool branch_taken_0x4e3034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e3034) {
            ctx->pc = 0x4E3038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3034u;
            // 0x4e3038: 0x92230061  lbu         $v1, 0x61($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 97)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E30E4u;
            goto label_4e30e4;
        }
    }
    ctx->pc = 0x4E303Cu;
label_4e303c:
    // 0x4e303c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e303cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e3040:
    // 0x4e3040: 0x3c04432a  lui         $a0, 0x432A
    ctx->pc = 0x4e3040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17194 << 16));
label_4e3044:
    // 0x4e3044: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e3044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e3048:
    // 0x4e3048: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x4e3048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e304c:
    // 0x4e304c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4e304cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e3050:
    // 0x4e3050: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4e3050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e3054:
    // 0x4e3054: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4e3054u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4e3058:
    // 0x4e3058: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4e3058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e305c:
    // 0x4e305c: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_4e3060:
    if (ctx->pc == 0x4E3060u) {
        ctx->pc = 0x4E3060u;
            // 0x4e3060: 0xe6210070  swc1        $f1, 0x70($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
        ctx->pc = 0x4E3064u;
        goto label_4e3064;
    }
    ctx->pc = 0x4E305Cu;
    {
        const bool branch_taken_0x4e305c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E3060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E305Cu;
            // 0x4e3060: 0xe6210070  swc1        $f1, 0x70($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e305c) {
            ctx->pc = 0x4E30E0u;
            goto label_4e30e0;
        }
    }
    ctx->pc = 0x4E3064u;
label_4e3064:
    // 0x4e3064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e3064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e3068:
    // 0x4e3068: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x4e3068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4e306c:
    // 0x4e306c: 0xc040180  jal         func_100600
label_4e3070:
    if (ctx->pc == 0x4E3070u) {
        ctx->pc = 0x4E3070u;
            // 0x4e3070: 0xa2220060  sb          $v0, 0x60($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4E3074u;
        goto label_4e3074;
    }
    ctx->pc = 0x4E306Cu;
    SET_GPR_U32(ctx, 31, 0x4E3074u);
    ctx->pc = 0x4E3070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E306Cu;
            // 0x4e3070: 0xa2220060  sb          $v0, 0x60($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3074u; }
        if (ctx->pc != 0x4E3074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3074u; }
        if (ctx->pc != 0x4E3074u) { return; }
    }
    ctx->pc = 0x4E3074u;
label_4e3074:
    // 0x4e3074: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4e3078:
    if (ctx->pc == 0x4E3078u) {
        ctx->pc = 0x4E3078u;
            // 0x4e3078: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E307Cu;
        goto label_4e307c;
    }
    ctx->pc = 0x4E3074u;
    {
        const bool branch_taken_0x4e3074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3074u;
            // 0x4e3078: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3074) {
            ctx->pc = 0x4E30E0u;
            goto label_4e30e0;
        }
    }
    ctx->pc = 0x4E307Cu;
label_4e307c:
    // 0x4e307c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4e307cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4e3080:
    // 0x4e3080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3084:
    // 0x4e3084: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x4e3084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_4e3088:
    // 0x4e3088: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4e3088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4e308c:
    // 0x4e308c: 0xc10ca68  jal         func_4329A0
label_4e3090:
    if (ctx->pc == 0x4E3090u) {
        ctx->pc = 0x4E3090u;
            // 0x4e3090: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4E3094u;
        goto label_4e3094;
    }
    ctx->pc = 0x4E308Cu;
    SET_GPR_U32(ctx, 31, 0x4E3094u);
    ctx->pc = 0x4E3090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E308Cu;
            // 0x4e3090: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3094u; }
        if (ctx->pc != 0x4E3094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3094u; }
        if (ctx->pc != 0x4E3094u) { return; }
    }
    ctx->pc = 0x4E3094u;
label_4e3094:
    // 0x4e3094: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e3094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e3098:
    // 0x4e3098: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4e3098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4e309c:
    // 0x4e309c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4e309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4e30a0:
    // 0x4e30a0: 0x24844f60  addiu       $a0, $a0, 0x4F60
    ctx->pc = 0x4e30a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20320));
label_4e30a4:
    // 0x4e30a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e30a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e30a8:
    // 0x4e30a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4e30a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e30ac:
    // 0x4e30ac: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4e30acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4e30b0:
    // 0x4e30b0: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x4e30b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_4e30b4:
    // 0x4e30b4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4e30b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4e30b8:
    // 0x4e30b8: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x4e30b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_4e30bc:
    // 0x4e30bc: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4e30bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_4e30c0:
    // 0x4e30c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e30c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e30c4:
    // 0x4e30c4: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x4e30c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_4e30c8:
    // 0x4e30c8: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4e30c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
label_4e30cc:
    // 0x4e30cc: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x4e30ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_4e30d0:
    // 0x4e30d0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e30d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e30d4:
    // 0x4e30d4: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x4e30d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_4e30d8:
    // 0x4e30d8: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x4e30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_4e30dc:
    // 0x4e30dc: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x4e30dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
label_4e30e0:
    // 0x4e30e0: 0x92230061  lbu         $v1, 0x61($s1)
    ctx->pc = 0x4e30e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 97)));
label_4e30e4:
    // 0x4e30e4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4e30e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4e30e8:
    // 0x4e30e8: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
label_4e30ec:
    if (ctx->pc == 0x4E30ECu) {
        ctx->pc = 0x4E30F0u;
        goto label_4e30f0;
    }
    ctx->pc = 0x4E30E8u;
    {
        const bool branch_taken_0x4e30e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e30e8) {
            ctx->pc = 0x4E31F0u;
            goto label_4e31f0;
        }
    }
    ctx->pc = 0x4E30F0u;
label_4e30f0:
    // 0x4e30f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e30f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e30f4:
    // 0x4e30f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e30f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e30f8:
    // 0x4e30f8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e30f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e30fc:
    // 0x4e30fc: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x4e30fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e3100:
    // 0x4e3100: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4e3100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e3104:
    // 0x4e3104: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4e3104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4e3108:
    // 0x4e3108: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x4e3108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_4e310c:
    // 0x4e310c: 0x92250061  lbu         $a1, 0x61($s1)
    ctx->pc = 0x4e310cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 97)));
label_4e3110:
    // 0x4e3110: 0x50a4001f  beql        $a1, $a0, . + 4 + (0x1F << 2)
label_4e3114:
    if (ctx->pc == 0x4E3114u) {
        ctx->pc = 0x4E3114u;
            // 0x4e3114: 0xc6210074  lwc1        $f1, 0x74($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4E3118u;
        goto label_4e3118;
    }
    ctx->pc = 0x4E3110u;
    {
        const bool branch_taken_0x4e3110 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4e3110) {
            ctx->pc = 0x4E3114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3110u;
            // 0x4e3114: 0xc6210074  lwc1        $f1, 0x74($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E3190u;
            goto label_4e3190;
        }
    }
    ctx->pc = 0x4E3118u;
label_4e3118:
    // 0x4e3118: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_4e311c:
    if (ctx->pc == 0x4E311Cu) {
        ctx->pc = 0x4E311Cu;
            // 0x4e311c: 0xc6210074  lwc1        $f1, 0x74($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4E3120u;
        goto label_4e3120;
    }
    ctx->pc = 0x4E3118u;
    {
        const bool branch_taken_0x4e3118 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3118) {
            ctx->pc = 0x4E311Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3118u;
            // 0x4e311c: 0xc6210074  lwc1        $f1, 0x74($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E3128u;
            goto label_4e3128;
        }
    }
    ctx->pc = 0x4E3120u;
label_4e3120:
    // 0x4e3120: 0x10000033  b           . + 4 + (0x33 << 2)
label_4e3124:
    if (ctx->pc == 0x4E3124u) {
        ctx->pc = 0x4E3128u;
        goto label_4e3128;
    }
    ctx->pc = 0x4E3120u;
    {
        const bool branch_taken_0x4e3120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3120) {
            ctx->pc = 0x4E31F0u;
            goto label_4e31f0;
        }
    }
    ctx->pc = 0x4E3128u;
label_4e3128:
    // 0x4e3128: 0x3c034328  lui         $v1, 0x4328
    ctx->pc = 0x4e3128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17192 << 16));
label_4e312c:
    // 0x4e312c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4e312cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e3130:
    // 0x4e3130: 0x0  nop
    ctx->pc = 0x4e3130u;
    // NOP
label_4e3134:
    // 0x4e3134: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4e3134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e3138:
    // 0x4e3138: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
label_4e313c:
    if (ctx->pc == 0x4E313Cu) {
        ctx->pc = 0x4E3140u;
        goto label_4e3140;
    }
    ctx->pc = 0x4E3138u;
    {
        const bool branch_taken_0x4e3138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4e3138) {
            ctx->pc = 0x4E31F0u;
            goto label_4e31f0;
        }
    }
    ctx->pc = 0x4E3140u;
label_4e3140:
    // 0x4e3140: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4e3140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4e3144:
    // 0x4e3144: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x4e3144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_4e3148:
    // 0x4e3148: 0xc040180  jal         func_100600
label_4e314c:
    if (ctx->pc == 0x4E314Cu) {
        ctx->pc = 0x4E314Cu;
            // 0x4e314c: 0xa2220061  sb          $v0, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4E3150u;
        goto label_4e3150;
    }
    ctx->pc = 0x4E3148u;
    SET_GPR_U32(ctx, 31, 0x4E3150u);
    ctx->pc = 0x4E314Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3148u;
            // 0x4e314c: 0xa2220061  sb          $v0, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3150u; }
        if (ctx->pc != 0x4E3150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3150u; }
        if (ctx->pc != 0x4E3150u) { return; }
    }
    ctx->pc = 0x4E3150u;
label_4e3150:
    // 0x4e3150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e3150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e3154:
    // 0x4e3154: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
label_4e3158:
    if (ctx->pc == 0x4E3158u) {
        ctx->pc = 0x4E315Cu;
        goto label_4e315c;
    }
    ctx->pc = 0x4E3154u;
    {
        const bool branch_taken_0x4e3154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3154) {
            ctx->pc = 0x4E31F0u;
            goto label_4e31f0;
        }
    }
    ctx->pc = 0x4E315Cu;
label_4e315c:
    // 0x4e315c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4e315cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4e3160:
    // 0x4e3160: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4e3160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4e3164:
    // 0x4e3164: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4e3164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4e3168:
    // 0x4e3168: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4e3168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e316c:
    // 0x4e316c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4e316cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4e3170:
    // 0x4e3170: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x4e3170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_4e3174:
    // 0x4e3174: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4e3174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e3178:
    // 0x4e3178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e3178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e317c:
    // 0x4e317c: 0x344780ff  ori         $a3, $v0, 0x80FF
    ctx->pc = 0x4e317cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
label_4e3180:
    // 0x4e3180: 0xc13fbe4  jal         func_4FEF90
label_4e3184:
    if (ctx->pc == 0x4E3184u) {
        ctx->pc = 0x4E3184u;
            // 0x4e3184: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x4E3188u;
        goto label_4e3188;
    }
    ctx->pc = 0x4E3180u;
    SET_GPR_U32(ctx, 31, 0x4E3188u);
    ctx->pc = 0x4E3184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3180u;
            // 0x4e3184: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FEF90u;
    if (runtime->hasFunction(0x4FEF90u)) {
        auto targetFn = runtime->lookupFunction(0x4FEF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3188u; }
        if (ctx->pc != 0x4E3188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FEF90_0x4fef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3188u; }
        if (ctx->pc != 0x4E3188u) { return; }
    }
    ctx->pc = 0x4E3188u;
label_4e3188:
    // 0x4e3188: 0x10000019  b           . + 4 + (0x19 << 2)
label_4e318c:
    if (ctx->pc == 0x4E318Cu) {
        ctx->pc = 0x4E3190u;
        goto label_4e3190;
    }
    ctx->pc = 0x4E3188u;
    {
        const bool branch_taken_0x4e3188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3188) {
            ctx->pc = 0x4E31F0u;
            goto label_4e31f0;
        }
    }
    ctx->pc = 0x4E3190u;
label_4e3190:
    // 0x4e3190: 0x3c03432c  lui         $v1, 0x432C
    ctx->pc = 0x4e3190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17196 << 16));
label_4e3194:
    // 0x4e3194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4e3194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e3198:
    // 0x4e3198: 0x0  nop
    ctx->pc = 0x4e3198u;
    // NOP
label_4e319c:
    // 0x4e319c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4e319cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e31a0:
    // 0x4e31a0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_4e31a4:
    if (ctx->pc == 0x4E31A4u) {
        ctx->pc = 0x4E31A8u;
        goto label_4e31a8;
    }
    ctx->pc = 0x4E31A0u;
    {
        const bool branch_taken_0x4e31a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4e31a0) {
            ctx->pc = 0x4E31F0u;
            goto label_4e31f0;
        }
    }
    ctx->pc = 0x4E31A8u;
label_4e31a8:
    // 0x4e31a8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4e31a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4e31ac:
    // 0x4e31ac: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x4e31acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_4e31b0:
    // 0x4e31b0: 0xc040180  jal         func_100600
label_4e31b4:
    if (ctx->pc == 0x4E31B4u) {
        ctx->pc = 0x4E31B4u;
            // 0x4e31b4: 0xa2220061  sb          $v0, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4E31B8u;
        goto label_4e31b8;
    }
    ctx->pc = 0x4E31B0u;
    SET_GPR_U32(ctx, 31, 0x4E31B8u);
    ctx->pc = 0x4E31B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E31B0u;
            // 0x4e31b4: 0xa2220061  sb          $v0, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E31B8u; }
        if (ctx->pc != 0x4E31B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E31B8u; }
        if (ctx->pc != 0x4E31B8u) { return; }
    }
    ctx->pc = 0x4E31B8u;
label_4e31b8:
    // 0x4e31b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e31b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e31bc:
    // 0x4e31bc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_4e31c0:
    if (ctx->pc == 0x4E31C0u) {
        ctx->pc = 0x4E31C4u;
        goto label_4e31c4;
    }
    ctx->pc = 0x4E31BCu;
    {
        const bool branch_taken_0x4e31bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e31bc) {
            ctx->pc = 0x4E31F0u;
            goto label_4e31f0;
        }
    }
    ctx->pc = 0x4E31C4u;
label_4e31c4:
    // 0x4e31c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4e31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4e31c8:
    // 0x4e31c8: 0x3c034150  lui         $v1, 0x4150
    ctx->pc = 0x4e31c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16720 << 16));
label_4e31cc:
    // 0x4e31cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4e31ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4e31d0:
    // 0x4e31d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4e31d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e31d4:
    // 0x4e31d4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4e31d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4e31d8:
    // 0x4e31d8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x4e31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_4e31dc:
    // 0x4e31dc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4e31dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e31e0:
    // 0x4e31e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e31e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e31e4:
    // 0x4e31e4: 0x344780ff  ori         $a3, $v0, 0x80FF
    ctx->pc = 0x4e31e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33023);
label_4e31e8:
    // 0x4e31e8: 0xc13fbe4  jal         func_4FEF90
label_4e31ec:
    if (ctx->pc == 0x4E31ECu) {
        ctx->pc = 0x4E31ECu;
            // 0x4e31ec: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x4E31F0u;
        goto label_4e31f0;
    }
    ctx->pc = 0x4E31E8u;
    SET_GPR_U32(ctx, 31, 0x4E31F0u);
    ctx->pc = 0x4E31ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E31E8u;
            // 0x4e31ec: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FEF90u;
    if (runtime->hasFunction(0x4FEF90u)) {
        auto targetFn = runtime->lookupFunction(0x4FEF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E31F0u; }
        if (ctx->pc != 0x4E31F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FEF90_0x4fef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E31F0u; }
        if (ctx->pc != 0x4E31F0u) { return; }
    }
    ctx->pc = 0x4E31F0u;
label_4e31f0:
    // 0x4e31f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e31f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e31f4:
    // 0x4e31f4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e31f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e31f8:
    // 0x4e31f8: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x4e31f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e31fc:
    // 0x4e31fc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4e31fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e3200:
    // 0x4e3200: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4e3200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4e3204:
    // 0x4e3204: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x4e3204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_4e3208:
    // 0x4e3208: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x4e3208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4e320c:
    // 0x4e320c: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x4e320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e3210:
    // 0x4e3210: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x4e3210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4e3214:
    // 0x4e3214: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4e3214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e3218:
    // 0x4e3218: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4e3218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e321c:
    // 0x4e321c: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_4e3220:
    if (ctx->pc == 0x4E3220u) {
        ctx->pc = 0x4E3224u;
        goto label_4e3224;
    }
    ctx->pc = 0x4E321Cu;
    {
        const bool branch_taken_0x4e321c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4e321c) {
            ctx->pc = 0x4E32BCu;
            goto label_4e32bc;
        }
    }
    ctx->pc = 0x4E3224u;
label_4e3224:
    // 0x4e3224: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4e3224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e3228:
    // 0x4e3228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e3228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e322c:
    // 0x4e322c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4e322cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4e3230:
    // 0x4e3230: 0x320f809  jalr        $t9
label_4e3234:
    if (ctx->pc == 0x4E3234u) {
        ctx->pc = 0x4E3234u;
            // 0x4e3234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3238u;
        goto label_4e3238;
    }
    ctx->pc = 0x4E3230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E3238u);
        ctx->pc = 0x4E3234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3230u;
            // 0x4e3234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E3238u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E3238u; }
            if (ctx->pc != 0x4E3238u) { return; }
        }
        }
    }
    ctx->pc = 0x4E3238u;
label_4e3238:
    // 0x4e3238: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x4e3238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_4e323c:
    // 0x4e323c: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x4e323cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4e3240:
    // 0x4e3240: 0xc040180  jal         func_100600
label_4e3244:
    if (ctx->pc == 0x4E3244u) {
        ctx->pc = 0x4E3244u;
            // 0x4e3244: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x4E3248u;
        goto label_4e3248;
    }
    ctx->pc = 0x4E3240u;
    SET_GPR_U32(ctx, 31, 0x4E3248u);
    ctx->pc = 0x4E3244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3240u;
            // 0x4e3244: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3248u; }
        if (ctx->pc != 0x4E3248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3248u; }
        if (ctx->pc != 0x4E3248u) { return; }
    }
    ctx->pc = 0x4E3248u;
label_4e3248:
    // 0x4e3248: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_4e324c:
    if (ctx->pc == 0x4E324Cu) {
        ctx->pc = 0x4E324Cu;
            // 0x4e324c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3250u;
        goto label_4e3250;
    }
    ctx->pc = 0x4E3248u;
    {
        const bool branch_taken_0x4e3248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E324Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3248u;
            // 0x4e324c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3248) {
            ctx->pc = 0x4E33D8u;
            goto label_4e33d8;
        }
    }
    ctx->pc = 0x4E3250u;
label_4e3250:
    // 0x4e3250: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4e3250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4e3254:
    // 0x4e3254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3258:
    // 0x4e3258: 0xc634006c  lwc1        $f20, 0x6C($s1)
    ctx->pc = 0x4e3258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e325c:
    // 0x4e325c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4e325cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4e3260:
    // 0x4e3260: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x4e3260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_4e3264:
    // 0x4e3264: 0xc10ca68  jal         func_4329A0
label_4e3268:
    if (ctx->pc == 0x4E3268u) {
        ctx->pc = 0x4E3268u;
            // 0x4e3268: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4E326Cu;
        goto label_4e326c;
    }
    ctx->pc = 0x4E3264u;
    SET_GPR_U32(ctx, 31, 0x4E326Cu);
    ctx->pc = 0x4E3268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3264u;
            // 0x4e3268: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E326Cu; }
        if (ctx->pc != 0x4E326Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E326Cu; }
        if (ctx->pc != 0x4E326Cu) { return; }
    }
    ctx->pc = 0x4E326Cu;
label_4e326c:
    // 0x4e326c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4e326cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4e3270:
    // 0x4e3270: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e3270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e3274:
    // 0x4e3274: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x4e3274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_4e3278:
    // 0x4e3278: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x4e3278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
label_4e327c:
    // 0x4e327c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4e327cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4e3280:
    // 0x4e3280: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4e3280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e3284:
    // 0x4e3284: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e3284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e3288:
    // 0x4e3288: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x4e3288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_4e328c:
    // 0x4e328c: 0xe6140054  swc1        $f20, 0x54($s0)
    ctx->pc = 0x4e328cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_4e3290:
    // 0x4e3290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e3290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e3294:
    // 0x4e3294: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4e3294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_4e3298:
    // 0x4e3298: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e3298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e329c:
    // 0x4e329c: 0xae06005c  sw          $a2, 0x5C($s0)
    ctx->pc = 0x4e329cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 6));
label_4e32a0:
    // 0x4e32a0: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x4e32a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_4e32a4:
    // 0x4e32a4: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x4e32a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_4e32a8:
    // 0x4e32a8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e32a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e32ac:
    // 0x4e32ac: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x4e32acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_4e32b0:
    // 0x4e32b0: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x4e32b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_4e32b4:
    // 0x4e32b4: 0x10000048  b           . + 4 + (0x48 << 2)
label_4e32b8:
    if (ctx->pc == 0x4E32B8u) {
        ctx->pc = 0x4E32B8u;
            // 0x4e32b8: 0xa200006c  sb          $zero, 0x6C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E32BCu;
        goto label_4e32bc;
    }
    ctx->pc = 0x4E32B4u;
    {
        const bool branch_taken_0x4e32b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E32B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E32B4u;
            // 0x4e32b8: 0xa200006c  sb          $zero, 0x6C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e32b4) {
            ctx->pc = 0x4E33D8u;
            goto label_4e33d8;
        }
    }
    ctx->pc = 0x4E32BCu;
label_4e32bc:
    // 0x4e32bc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e32bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e32c0:
    // 0x4e32c0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e32c4:
    // 0x4e32c4: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x4e32c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e32c8:
    // 0x4e32c8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4e32c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e32cc:
    // 0x4e32cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4e32ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4e32d0:
    // 0x4e32d0: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x4e32d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_4e32d4:
    // 0x4e32d4: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x4e32d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4e32d8:
    // 0x4e32d8: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x4e32d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e32dc:
    // 0x4e32dc: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x4e32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4e32e0:
    // 0x4e32e0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4e32e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e32e4:
    // 0x4e32e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4e32e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e32e8:
    // 0x4e32e8: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
label_4e32ec:
    if (ctx->pc == 0x4E32ECu) {
        ctx->pc = 0x4E32F0u;
        goto label_4e32f0;
    }
    ctx->pc = 0x4E32E8u;
    {
        const bool branch_taken_0x4e32e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4e32e8) {
            ctx->pc = 0x4E33D8u;
            goto label_4e33d8;
        }
    }
    ctx->pc = 0x4E32F0u;
label_4e32f0:
    // 0x4e32f0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4e32f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e32f4:
    // 0x4e32f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e32f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e32f8:
    // 0x4e32f8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4e32f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4e32fc:
    // 0x4e32fc: 0x320f809  jalr        $t9
label_4e3300:
    if (ctx->pc == 0x4E3300u) {
        ctx->pc = 0x4E3300u;
            // 0x4e3300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3304u;
        goto label_4e3304;
    }
    ctx->pc = 0x4E32FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E3304u);
        ctx->pc = 0x4E3300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E32FCu;
            // 0x4e3300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E3304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E3304u; }
            if (ctx->pc != 0x4E3304u) { return; }
        }
        }
    }
    ctx->pc = 0x4E3304u;
label_4e3304:
    // 0x4e3304: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x4e3304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_4e3308:
    // 0x4e3308: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x4e3308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4e330c:
    // 0x4e330c: 0xc040180  jal         func_100600
label_4e3310:
    if (ctx->pc == 0x4E3310u) {
        ctx->pc = 0x4E3310u;
            // 0x4e3310: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x4E3314u;
        goto label_4e3314;
    }
    ctx->pc = 0x4E330Cu;
    SET_GPR_U32(ctx, 31, 0x4E3314u);
    ctx->pc = 0x4E3310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E330Cu;
            // 0x4e3310: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3314u; }
        if (ctx->pc != 0x4E3314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3314u; }
        if (ctx->pc != 0x4E3314u) { return; }
    }
    ctx->pc = 0x4E3314u;
label_4e3314:
    // 0x4e3314: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_4e3318:
    if (ctx->pc == 0x4E3318u) {
        ctx->pc = 0x4E3318u;
            // 0x4e3318: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E331Cu;
        goto label_4e331c;
    }
    ctx->pc = 0x4E3314u;
    {
        const bool branch_taken_0x4e3314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3314u;
            // 0x4e3318: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3314) {
            ctx->pc = 0x4E33D8u;
            goto label_4e33d8;
        }
    }
    ctx->pc = 0x4E331Cu;
label_4e331c:
    // 0x4e331c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4e331cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4e3320:
    // 0x4e3320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3324:
    // 0x4e3324: 0xc634006c  lwc1        $f20, 0x6C($s1)
    ctx->pc = 0x4e3324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e3328:
    // 0x4e3328: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4e3328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4e332c:
    // 0x4e332c: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x4e332cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_4e3330:
    // 0x4e3330: 0xc10ca68  jal         func_4329A0
label_4e3334:
    if (ctx->pc == 0x4E3334u) {
        ctx->pc = 0x4E3334u;
            // 0x4e3334: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4E3338u;
        goto label_4e3338;
    }
    ctx->pc = 0x4E3330u;
    SET_GPR_U32(ctx, 31, 0x4E3338u);
    ctx->pc = 0x4E3334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3330u;
            // 0x4e3334: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3338u; }
        if (ctx->pc != 0x4E3338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3338u; }
        if (ctx->pc != 0x4E3338u) { return; }
    }
    ctx->pc = 0x4E3338u;
label_4e3338:
    // 0x4e3338: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4e3338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4e333c:
    // 0x4e333c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e333cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e3340:
    // 0x4e3340: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x4e3340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_4e3344:
    // 0x4e3344: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x4e3344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
label_4e3348:
    // 0x4e3348: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4e3348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4e334c:
    // 0x4e334c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4e334cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e3350:
    // 0x4e3350: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e3350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e3354:
    // 0x4e3354: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x4e3354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_4e3358:
    // 0x4e3358: 0xe6140054  swc1        $f20, 0x54($s0)
    ctx->pc = 0x4e3358u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_4e335c:
    // 0x4e335c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e335cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e3360:
    // 0x4e3360: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4e3360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_4e3364:
    // 0x4e3364: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e3364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e3368:
    // 0x4e3368: 0xae06005c  sw          $a2, 0x5C($s0)
    ctx->pc = 0x4e3368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 6));
label_4e336c:
    // 0x4e336c: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x4e336cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_4e3370:
    // 0x4e3370: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x4e3370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_4e3374:
    // 0x4e3374: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e3374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e3378:
    // 0x4e3378: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x4e3378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_4e337c:
    // 0x4e337c: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x4e337cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_4e3380:
    // 0x4e3380: 0x10000015  b           . + 4 + (0x15 << 2)
label_4e3384:
    if (ctx->pc == 0x4E3384u) {
        ctx->pc = 0x4E3384u;
            // 0x4e3384: 0xa200006c  sb          $zero, 0x6C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E3388u;
        goto label_4e3388;
    }
    ctx->pc = 0x4E3380u;
    {
        const bool branch_taken_0x4e3380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3380u;
            // 0x4e3384: 0xa200006c  sb          $zero, 0x6C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3380) {
            ctx->pc = 0x4E33D8u;
            goto label_4e33d8;
        }
    }
    ctx->pc = 0x4E3388u;
label_4e3388:
    // 0x4e3388: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e3388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e338c:
    // 0x4e338c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e338cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e3390:
    // 0x4e3390: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x4e3390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e3394:
    // 0x4e3394: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4e3394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e3398:
    // 0x4e3398: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4e3398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e339c:
    // 0x4e339c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4e339cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4e33a0:
    // 0x4e33a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4e33a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e33a4:
    // 0x4e33a4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_4e33a8:
    if (ctx->pc == 0x4E33A8u) {
        ctx->pc = 0x4E33A8u;
            // 0x4e33a8: 0xe621006c  swc1        $f1, 0x6C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
        ctx->pc = 0x4E33ACu;
        goto label_4e33ac;
    }
    ctx->pc = 0x4E33A4u;
    {
        const bool branch_taken_0x4e33a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E33A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E33A4u;
            // 0x4e33a8: 0xe621006c  swc1        $f1, 0x6C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e33a4) {
            ctx->pc = 0x4E33D8u;
            goto label_4e33d8;
        }
    }
    ctx->pc = 0x4E33ACu;
label_4e33ac:
    // 0x4e33ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e33acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e33b0:
    // 0x4e33b0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4e33b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4e33b4:
    // 0x4e33b4: 0x320f809  jalr        $t9
label_4e33b8:
    if (ctx->pc == 0x4E33B8u) {
        ctx->pc = 0x4E33BCu;
        goto label_4e33bc;
    }
    ctx->pc = 0x4E33B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E33BCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E33BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E33BCu; }
            if (ctx->pc != 0x4E33BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4E33BCu;
label_4e33bc:
    // 0x4e33bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_4e33c0:
    if (ctx->pc == 0x4E33C0u) {
        ctx->pc = 0x4E33C4u;
        goto label_4e33c4;
    }
    ctx->pc = 0x4E33BCu;
    {
        const bool branch_taken_0x4e33bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e33bc) {
            ctx->pc = 0x4E33D8u;
            goto label_4e33d8;
        }
    }
    ctx->pc = 0x4E33C4u;
label_4e33c4:
    // 0x4e33c4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4e33c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4e33c8:
    // 0x4e33c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4e33c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e33cc:
    // 0x4e33cc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4e33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4e33d0:
    // 0x4e33d0: 0xc057b7c  jal         func_15EDF0
label_4e33d4:
    if (ctx->pc == 0x4E33D4u) {
        ctx->pc = 0x4E33D4u;
            // 0x4e33d4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4E33D8u;
        goto label_4e33d8;
    }
    ctx->pc = 0x4E33D0u;
    SET_GPR_U32(ctx, 31, 0x4E33D8u);
    ctx->pc = 0x4E33D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E33D0u;
            // 0x4e33d4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E33D8u; }
        if (ctx->pc != 0x4E33D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E33D8u; }
        if (ctx->pc != 0x4E33D8u) { return; }
    }
    ctx->pc = 0x4E33D8u;
label_4e33d8:
    // 0x4e33d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e33d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4e33dc:
    // 0x4e33dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4e33dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e33e0:
    // 0x4e33e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e33e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e33e4:
    // 0x4e33e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4e33e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e33e8:
    // 0x4e33e8: 0x3e00008  jr          $ra
label_4e33ec:
    if (ctx->pc == 0x4E33ECu) {
        ctx->pc = 0x4E33ECu;
            // 0x4e33ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4E33F0u;
        goto label_fallthrough_0x4e33e8;
    }
    ctx->pc = 0x4E33E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E33ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E33E8u;
            // 0x4e33ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4e33e8:
    ctx->pc = 0x4E33F0u;
}
