#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B2BB0
// Address: 0x4b2bb0 - 0x4b30a0
void sub_004B2BB0_0x4b2bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2BB0_0x4b2bb0");
#endif

    switch (ctx->pc) {
        case 0x4b2bb0u: goto label_4b2bb0;
        case 0x4b2bb4u: goto label_4b2bb4;
        case 0x4b2bb8u: goto label_4b2bb8;
        case 0x4b2bbcu: goto label_4b2bbc;
        case 0x4b2bc0u: goto label_4b2bc0;
        case 0x4b2bc4u: goto label_4b2bc4;
        case 0x4b2bc8u: goto label_4b2bc8;
        case 0x4b2bccu: goto label_4b2bcc;
        case 0x4b2bd0u: goto label_4b2bd0;
        case 0x4b2bd4u: goto label_4b2bd4;
        case 0x4b2bd8u: goto label_4b2bd8;
        case 0x4b2bdcu: goto label_4b2bdc;
        case 0x4b2be0u: goto label_4b2be0;
        case 0x4b2be4u: goto label_4b2be4;
        case 0x4b2be8u: goto label_4b2be8;
        case 0x4b2becu: goto label_4b2bec;
        case 0x4b2bf0u: goto label_4b2bf0;
        case 0x4b2bf4u: goto label_4b2bf4;
        case 0x4b2bf8u: goto label_4b2bf8;
        case 0x4b2bfcu: goto label_4b2bfc;
        case 0x4b2c00u: goto label_4b2c00;
        case 0x4b2c04u: goto label_4b2c04;
        case 0x4b2c08u: goto label_4b2c08;
        case 0x4b2c0cu: goto label_4b2c0c;
        case 0x4b2c10u: goto label_4b2c10;
        case 0x4b2c14u: goto label_4b2c14;
        case 0x4b2c18u: goto label_4b2c18;
        case 0x4b2c1cu: goto label_4b2c1c;
        case 0x4b2c20u: goto label_4b2c20;
        case 0x4b2c24u: goto label_4b2c24;
        case 0x4b2c28u: goto label_4b2c28;
        case 0x4b2c2cu: goto label_4b2c2c;
        case 0x4b2c30u: goto label_4b2c30;
        case 0x4b2c34u: goto label_4b2c34;
        case 0x4b2c38u: goto label_4b2c38;
        case 0x4b2c3cu: goto label_4b2c3c;
        case 0x4b2c40u: goto label_4b2c40;
        case 0x4b2c44u: goto label_4b2c44;
        case 0x4b2c48u: goto label_4b2c48;
        case 0x4b2c4cu: goto label_4b2c4c;
        case 0x4b2c50u: goto label_4b2c50;
        case 0x4b2c54u: goto label_4b2c54;
        case 0x4b2c58u: goto label_4b2c58;
        case 0x4b2c5cu: goto label_4b2c5c;
        case 0x4b2c60u: goto label_4b2c60;
        case 0x4b2c64u: goto label_4b2c64;
        case 0x4b2c68u: goto label_4b2c68;
        case 0x4b2c6cu: goto label_4b2c6c;
        case 0x4b2c70u: goto label_4b2c70;
        case 0x4b2c74u: goto label_4b2c74;
        case 0x4b2c78u: goto label_4b2c78;
        case 0x4b2c7cu: goto label_4b2c7c;
        case 0x4b2c80u: goto label_4b2c80;
        case 0x4b2c84u: goto label_4b2c84;
        case 0x4b2c88u: goto label_4b2c88;
        case 0x4b2c8cu: goto label_4b2c8c;
        case 0x4b2c90u: goto label_4b2c90;
        case 0x4b2c94u: goto label_4b2c94;
        case 0x4b2c98u: goto label_4b2c98;
        case 0x4b2c9cu: goto label_4b2c9c;
        case 0x4b2ca0u: goto label_4b2ca0;
        case 0x4b2ca4u: goto label_4b2ca4;
        case 0x4b2ca8u: goto label_4b2ca8;
        case 0x4b2cacu: goto label_4b2cac;
        case 0x4b2cb0u: goto label_4b2cb0;
        case 0x4b2cb4u: goto label_4b2cb4;
        case 0x4b2cb8u: goto label_4b2cb8;
        case 0x4b2cbcu: goto label_4b2cbc;
        case 0x4b2cc0u: goto label_4b2cc0;
        case 0x4b2cc4u: goto label_4b2cc4;
        case 0x4b2cc8u: goto label_4b2cc8;
        case 0x4b2cccu: goto label_4b2ccc;
        case 0x4b2cd0u: goto label_4b2cd0;
        case 0x4b2cd4u: goto label_4b2cd4;
        case 0x4b2cd8u: goto label_4b2cd8;
        case 0x4b2cdcu: goto label_4b2cdc;
        case 0x4b2ce0u: goto label_4b2ce0;
        case 0x4b2ce4u: goto label_4b2ce4;
        case 0x4b2ce8u: goto label_4b2ce8;
        case 0x4b2cecu: goto label_4b2cec;
        case 0x4b2cf0u: goto label_4b2cf0;
        case 0x4b2cf4u: goto label_4b2cf4;
        case 0x4b2cf8u: goto label_4b2cf8;
        case 0x4b2cfcu: goto label_4b2cfc;
        case 0x4b2d00u: goto label_4b2d00;
        case 0x4b2d04u: goto label_4b2d04;
        case 0x4b2d08u: goto label_4b2d08;
        case 0x4b2d0cu: goto label_4b2d0c;
        case 0x4b2d10u: goto label_4b2d10;
        case 0x4b2d14u: goto label_4b2d14;
        case 0x4b2d18u: goto label_4b2d18;
        case 0x4b2d1cu: goto label_4b2d1c;
        case 0x4b2d20u: goto label_4b2d20;
        case 0x4b2d24u: goto label_4b2d24;
        case 0x4b2d28u: goto label_4b2d28;
        case 0x4b2d2cu: goto label_4b2d2c;
        case 0x4b2d30u: goto label_4b2d30;
        case 0x4b2d34u: goto label_4b2d34;
        case 0x4b2d38u: goto label_4b2d38;
        case 0x4b2d3cu: goto label_4b2d3c;
        case 0x4b2d40u: goto label_4b2d40;
        case 0x4b2d44u: goto label_4b2d44;
        case 0x4b2d48u: goto label_4b2d48;
        case 0x4b2d4cu: goto label_4b2d4c;
        case 0x4b2d50u: goto label_4b2d50;
        case 0x4b2d54u: goto label_4b2d54;
        case 0x4b2d58u: goto label_4b2d58;
        case 0x4b2d5cu: goto label_4b2d5c;
        case 0x4b2d60u: goto label_4b2d60;
        case 0x4b2d64u: goto label_4b2d64;
        case 0x4b2d68u: goto label_4b2d68;
        case 0x4b2d6cu: goto label_4b2d6c;
        case 0x4b2d70u: goto label_4b2d70;
        case 0x4b2d74u: goto label_4b2d74;
        case 0x4b2d78u: goto label_4b2d78;
        case 0x4b2d7cu: goto label_4b2d7c;
        case 0x4b2d80u: goto label_4b2d80;
        case 0x4b2d84u: goto label_4b2d84;
        case 0x4b2d88u: goto label_4b2d88;
        case 0x4b2d8cu: goto label_4b2d8c;
        case 0x4b2d90u: goto label_4b2d90;
        case 0x4b2d94u: goto label_4b2d94;
        case 0x4b2d98u: goto label_4b2d98;
        case 0x4b2d9cu: goto label_4b2d9c;
        case 0x4b2da0u: goto label_4b2da0;
        case 0x4b2da4u: goto label_4b2da4;
        case 0x4b2da8u: goto label_4b2da8;
        case 0x4b2dacu: goto label_4b2dac;
        case 0x4b2db0u: goto label_4b2db0;
        case 0x4b2db4u: goto label_4b2db4;
        case 0x4b2db8u: goto label_4b2db8;
        case 0x4b2dbcu: goto label_4b2dbc;
        case 0x4b2dc0u: goto label_4b2dc0;
        case 0x4b2dc4u: goto label_4b2dc4;
        case 0x4b2dc8u: goto label_4b2dc8;
        case 0x4b2dccu: goto label_4b2dcc;
        case 0x4b2dd0u: goto label_4b2dd0;
        case 0x4b2dd4u: goto label_4b2dd4;
        case 0x4b2dd8u: goto label_4b2dd8;
        case 0x4b2ddcu: goto label_4b2ddc;
        case 0x4b2de0u: goto label_4b2de0;
        case 0x4b2de4u: goto label_4b2de4;
        case 0x4b2de8u: goto label_4b2de8;
        case 0x4b2decu: goto label_4b2dec;
        case 0x4b2df0u: goto label_4b2df0;
        case 0x4b2df4u: goto label_4b2df4;
        case 0x4b2df8u: goto label_4b2df8;
        case 0x4b2dfcu: goto label_4b2dfc;
        case 0x4b2e00u: goto label_4b2e00;
        case 0x4b2e04u: goto label_4b2e04;
        case 0x4b2e08u: goto label_4b2e08;
        case 0x4b2e0cu: goto label_4b2e0c;
        case 0x4b2e10u: goto label_4b2e10;
        case 0x4b2e14u: goto label_4b2e14;
        case 0x4b2e18u: goto label_4b2e18;
        case 0x4b2e1cu: goto label_4b2e1c;
        case 0x4b2e20u: goto label_4b2e20;
        case 0x4b2e24u: goto label_4b2e24;
        case 0x4b2e28u: goto label_4b2e28;
        case 0x4b2e2cu: goto label_4b2e2c;
        case 0x4b2e30u: goto label_4b2e30;
        case 0x4b2e34u: goto label_4b2e34;
        case 0x4b2e38u: goto label_4b2e38;
        case 0x4b2e3cu: goto label_4b2e3c;
        case 0x4b2e40u: goto label_4b2e40;
        case 0x4b2e44u: goto label_4b2e44;
        case 0x4b2e48u: goto label_4b2e48;
        case 0x4b2e4cu: goto label_4b2e4c;
        case 0x4b2e50u: goto label_4b2e50;
        case 0x4b2e54u: goto label_4b2e54;
        case 0x4b2e58u: goto label_4b2e58;
        case 0x4b2e5cu: goto label_4b2e5c;
        case 0x4b2e60u: goto label_4b2e60;
        case 0x4b2e64u: goto label_4b2e64;
        case 0x4b2e68u: goto label_4b2e68;
        case 0x4b2e6cu: goto label_4b2e6c;
        case 0x4b2e70u: goto label_4b2e70;
        case 0x4b2e74u: goto label_4b2e74;
        case 0x4b2e78u: goto label_4b2e78;
        case 0x4b2e7cu: goto label_4b2e7c;
        case 0x4b2e80u: goto label_4b2e80;
        case 0x4b2e84u: goto label_4b2e84;
        case 0x4b2e88u: goto label_4b2e88;
        case 0x4b2e8cu: goto label_4b2e8c;
        case 0x4b2e90u: goto label_4b2e90;
        case 0x4b2e94u: goto label_4b2e94;
        case 0x4b2e98u: goto label_4b2e98;
        case 0x4b2e9cu: goto label_4b2e9c;
        case 0x4b2ea0u: goto label_4b2ea0;
        case 0x4b2ea4u: goto label_4b2ea4;
        case 0x4b2ea8u: goto label_4b2ea8;
        case 0x4b2eacu: goto label_4b2eac;
        case 0x4b2eb0u: goto label_4b2eb0;
        case 0x4b2eb4u: goto label_4b2eb4;
        case 0x4b2eb8u: goto label_4b2eb8;
        case 0x4b2ebcu: goto label_4b2ebc;
        case 0x4b2ec0u: goto label_4b2ec0;
        case 0x4b2ec4u: goto label_4b2ec4;
        case 0x4b2ec8u: goto label_4b2ec8;
        case 0x4b2eccu: goto label_4b2ecc;
        case 0x4b2ed0u: goto label_4b2ed0;
        case 0x4b2ed4u: goto label_4b2ed4;
        case 0x4b2ed8u: goto label_4b2ed8;
        case 0x4b2edcu: goto label_4b2edc;
        case 0x4b2ee0u: goto label_4b2ee0;
        case 0x4b2ee4u: goto label_4b2ee4;
        case 0x4b2ee8u: goto label_4b2ee8;
        case 0x4b2eecu: goto label_4b2eec;
        case 0x4b2ef0u: goto label_4b2ef0;
        case 0x4b2ef4u: goto label_4b2ef4;
        case 0x4b2ef8u: goto label_4b2ef8;
        case 0x4b2efcu: goto label_4b2efc;
        case 0x4b2f00u: goto label_4b2f00;
        case 0x4b2f04u: goto label_4b2f04;
        case 0x4b2f08u: goto label_4b2f08;
        case 0x4b2f0cu: goto label_4b2f0c;
        case 0x4b2f10u: goto label_4b2f10;
        case 0x4b2f14u: goto label_4b2f14;
        case 0x4b2f18u: goto label_4b2f18;
        case 0x4b2f1cu: goto label_4b2f1c;
        case 0x4b2f20u: goto label_4b2f20;
        case 0x4b2f24u: goto label_4b2f24;
        case 0x4b2f28u: goto label_4b2f28;
        case 0x4b2f2cu: goto label_4b2f2c;
        case 0x4b2f30u: goto label_4b2f30;
        case 0x4b2f34u: goto label_4b2f34;
        case 0x4b2f38u: goto label_4b2f38;
        case 0x4b2f3cu: goto label_4b2f3c;
        case 0x4b2f40u: goto label_4b2f40;
        case 0x4b2f44u: goto label_4b2f44;
        case 0x4b2f48u: goto label_4b2f48;
        case 0x4b2f4cu: goto label_4b2f4c;
        case 0x4b2f50u: goto label_4b2f50;
        case 0x4b2f54u: goto label_4b2f54;
        case 0x4b2f58u: goto label_4b2f58;
        case 0x4b2f5cu: goto label_4b2f5c;
        case 0x4b2f60u: goto label_4b2f60;
        case 0x4b2f64u: goto label_4b2f64;
        case 0x4b2f68u: goto label_4b2f68;
        case 0x4b2f6cu: goto label_4b2f6c;
        case 0x4b2f70u: goto label_4b2f70;
        case 0x4b2f74u: goto label_4b2f74;
        case 0x4b2f78u: goto label_4b2f78;
        case 0x4b2f7cu: goto label_4b2f7c;
        case 0x4b2f80u: goto label_4b2f80;
        case 0x4b2f84u: goto label_4b2f84;
        case 0x4b2f88u: goto label_4b2f88;
        case 0x4b2f8cu: goto label_4b2f8c;
        case 0x4b2f90u: goto label_4b2f90;
        case 0x4b2f94u: goto label_4b2f94;
        case 0x4b2f98u: goto label_4b2f98;
        case 0x4b2f9cu: goto label_4b2f9c;
        case 0x4b2fa0u: goto label_4b2fa0;
        case 0x4b2fa4u: goto label_4b2fa4;
        case 0x4b2fa8u: goto label_4b2fa8;
        case 0x4b2facu: goto label_4b2fac;
        case 0x4b2fb0u: goto label_4b2fb0;
        case 0x4b2fb4u: goto label_4b2fb4;
        case 0x4b2fb8u: goto label_4b2fb8;
        case 0x4b2fbcu: goto label_4b2fbc;
        case 0x4b2fc0u: goto label_4b2fc0;
        case 0x4b2fc4u: goto label_4b2fc4;
        case 0x4b2fc8u: goto label_4b2fc8;
        case 0x4b2fccu: goto label_4b2fcc;
        case 0x4b2fd0u: goto label_4b2fd0;
        case 0x4b2fd4u: goto label_4b2fd4;
        case 0x4b2fd8u: goto label_4b2fd8;
        case 0x4b2fdcu: goto label_4b2fdc;
        case 0x4b2fe0u: goto label_4b2fe0;
        case 0x4b2fe4u: goto label_4b2fe4;
        case 0x4b2fe8u: goto label_4b2fe8;
        case 0x4b2fecu: goto label_4b2fec;
        case 0x4b2ff0u: goto label_4b2ff0;
        case 0x4b2ff4u: goto label_4b2ff4;
        case 0x4b2ff8u: goto label_4b2ff8;
        case 0x4b2ffcu: goto label_4b2ffc;
        case 0x4b3000u: goto label_4b3000;
        case 0x4b3004u: goto label_4b3004;
        case 0x4b3008u: goto label_4b3008;
        case 0x4b300cu: goto label_4b300c;
        case 0x4b3010u: goto label_4b3010;
        case 0x4b3014u: goto label_4b3014;
        case 0x4b3018u: goto label_4b3018;
        case 0x4b301cu: goto label_4b301c;
        case 0x4b3020u: goto label_4b3020;
        case 0x4b3024u: goto label_4b3024;
        case 0x4b3028u: goto label_4b3028;
        case 0x4b302cu: goto label_4b302c;
        case 0x4b3030u: goto label_4b3030;
        case 0x4b3034u: goto label_4b3034;
        case 0x4b3038u: goto label_4b3038;
        case 0x4b303cu: goto label_4b303c;
        case 0x4b3040u: goto label_4b3040;
        case 0x4b3044u: goto label_4b3044;
        case 0x4b3048u: goto label_4b3048;
        case 0x4b304cu: goto label_4b304c;
        case 0x4b3050u: goto label_4b3050;
        case 0x4b3054u: goto label_4b3054;
        case 0x4b3058u: goto label_4b3058;
        case 0x4b305cu: goto label_4b305c;
        case 0x4b3060u: goto label_4b3060;
        case 0x4b3064u: goto label_4b3064;
        case 0x4b3068u: goto label_4b3068;
        case 0x4b306cu: goto label_4b306c;
        case 0x4b3070u: goto label_4b3070;
        case 0x4b3074u: goto label_4b3074;
        case 0x4b3078u: goto label_4b3078;
        case 0x4b307cu: goto label_4b307c;
        case 0x4b3080u: goto label_4b3080;
        case 0x4b3084u: goto label_4b3084;
        case 0x4b3088u: goto label_4b3088;
        case 0x4b308cu: goto label_4b308c;
        case 0x4b3090u: goto label_4b3090;
        case 0x4b3094u: goto label_4b3094;
        case 0x4b3098u: goto label_4b3098;
        case 0x4b309cu: goto label_4b309c;
        default: break;
    }

    ctx->pc = 0x4b2bb0u;

label_4b2bb0:
    // 0x4b2bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b2bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b2bb4:
    // 0x4b2bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b2bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b2bb8:
    // 0x4b2bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b2bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b2bbc:
    // 0x4b2bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b2bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b2bc0:
    // 0x4b2bc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b2bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b2bc4:
    // 0x4b2bc4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4b2bc8:
    if (ctx->pc == 0x4B2BC8u) {
        ctx->pc = 0x4B2BC8u;
            // 0x4b2bc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B2BCCu;
        goto label_4b2bcc;
    }
    ctx->pc = 0x4B2BC4u;
    {
        const bool branch_taken_0x4b2bc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2BC4u;
            // 0x4b2bc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2bc4) {
            ctx->pc = 0x4B2CF8u;
            goto label_4b2cf8;
        }
    }
    ctx->pc = 0x4B2BCCu;
label_4b2bcc:
    // 0x4b2bcc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b2bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b2bd0:
    // 0x4b2bd0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b2bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b2bd4:
    // 0x4b2bd4: 0x246307b0  addiu       $v1, $v1, 0x7B0
    ctx->pc = 0x4b2bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1968));
label_4b2bd8:
    // 0x4b2bd8: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4b2bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_4b2bdc:
    // 0x4b2bdc: 0x244207e8  addiu       $v0, $v0, 0x7E8
    ctx->pc = 0x4b2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
label_4b2be0:
    // 0x4b2be0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b2be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4b2be4:
    // 0x4b2be4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4b2be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4b2be8:
    // 0x4b2be8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4b2be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4b2bec:
    // 0x4b2bec: 0xc0407c0  jal         func_101F00
label_4b2bf0:
    if (ctx->pc == 0x4B2BF0u) {
        ctx->pc = 0x4B2BF0u;
            // 0x4b2bf0: 0x24a52d10  addiu       $a1, $a1, 0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11536));
        ctx->pc = 0x4B2BF4u;
        goto label_4b2bf4;
    }
    ctx->pc = 0x4B2BECu;
    SET_GPR_U32(ctx, 31, 0x4B2BF4u);
    ctx->pc = 0x4B2BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2BECu;
            // 0x4b2bf0: 0x24a52d10  addiu       $a1, $a1, 0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2BF4u; }
        if (ctx->pc != 0x4B2BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2BF4u; }
        if (ctx->pc != 0x4B2BF4u) { return; }
    }
    ctx->pc = 0x4B2BF4u;
label_4b2bf4:
    // 0x4b2bf4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4b2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4b2bf8:
    // 0x4b2bf8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4b2bfc:
    if (ctx->pc == 0x4B2BFCu) {
        ctx->pc = 0x4B2BFCu;
            // 0x4b2bfc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4B2C00u;
        goto label_4b2c00;
    }
    ctx->pc = 0x4B2BF8u;
    {
        const bool branch_taken_0x4b2bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2bf8) {
            ctx->pc = 0x4B2BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2BF8u;
            // 0x4b2bfc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2C0Cu;
            goto label_4b2c0c;
        }
    }
    ctx->pc = 0x4B2C00u;
label_4b2c00:
    // 0x4b2c00: 0xc07507c  jal         func_1D41F0
label_4b2c04:
    if (ctx->pc == 0x4B2C04u) {
        ctx->pc = 0x4B2C04u;
            // 0x4b2c04: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4B2C08u;
        goto label_4b2c08;
    }
    ctx->pc = 0x4B2C00u;
    SET_GPR_U32(ctx, 31, 0x4B2C08u);
    ctx->pc = 0x4B2C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2C00u;
            // 0x4b2c04: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2C08u; }
        if (ctx->pc != 0x4B2C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2C08u; }
        if (ctx->pc != 0x4B2C08u) { return; }
    }
    ctx->pc = 0x4B2C08u;
label_4b2c08:
    // 0x4b2c08: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4b2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4b2c0c:
    // 0x4b2c0c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4b2c10:
    if (ctx->pc == 0x4B2C10u) {
        ctx->pc = 0x4B2C10u;
            // 0x4b2c10: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4B2C14u;
        goto label_4b2c14;
    }
    ctx->pc = 0x4B2C0Cu;
    {
        const bool branch_taken_0x4b2c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2c0c) {
            ctx->pc = 0x4B2C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2C0Cu;
            // 0x4b2c10: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2C3Cu;
            goto label_4b2c3c;
        }
    }
    ctx->pc = 0x4B2C14u;
label_4b2c14:
    // 0x4b2c14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4b2c18:
    if (ctx->pc == 0x4B2C18u) {
        ctx->pc = 0x4B2C1Cu;
        goto label_4b2c1c;
    }
    ctx->pc = 0x4B2C14u;
    {
        const bool branch_taken_0x4b2c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2c14) {
            ctx->pc = 0x4B2C38u;
            goto label_4b2c38;
        }
    }
    ctx->pc = 0x4B2C1Cu;
label_4b2c1c:
    // 0x4b2c1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b2c20:
    if (ctx->pc == 0x4B2C20u) {
        ctx->pc = 0x4B2C24u;
        goto label_4b2c24;
    }
    ctx->pc = 0x4B2C1Cu;
    {
        const bool branch_taken_0x4b2c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2c1c) {
            ctx->pc = 0x4B2C38u;
            goto label_4b2c38;
        }
    }
    ctx->pc = 0x4B2C24u;
label_4b2c24:
    // 0x4b2c24: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4b2c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4b2c28:
    // 0x4b2c28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4b2c2c:
    if (ctx->pc == 0x4B2C2Cu) {
        ctx->pc = 0x4B2C30u;
        goto label_4b2c30;
    }
    ctx->pc = 0x4B2C28u;
    {
        const bool branch_taken_0x4b2c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2c28) {
            ctx->pc = 0x4B2C38u;
            goto label_4b2c38;
        }
    }
    ctx->pc = 0x4B2C30u;
label_4b2c30:
    // 0x4b2c30: 0xc0400a8  jal         func_1002A0
label_4b2c34:
    if (ctx->pc == 0x4B2C34u) {
        ctx->pc = 0x4B2C38u;
        goto label_4b2c38;
    }
    ctx->pc = 0x4B2C30u;
    SET_GPR_U32(ctx, 31, 0x4B2C38u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2C38u; }
        if (ctx->pc != 0x4B2C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2C38u; }
        if (ctx->pc != 0x4B2C38u) { return; }
    }
    ctx->pc = 0x4B2C38u;
label_4b2c38:
    // 0x4b2c38: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4b2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4b2c3c:
    // 0x4b2c3c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4b2c40:
    if (ctx->pc == 0x4B2C40u) {
        ctx->pc = 0x4B2C40u;
            // 0x4b2c40: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4B2C44u;
        goto label_4b2c44;
    }
    ctx->pc = 0x4B2C3Cu;
    {
        const bool branch_taken_0x4b2c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2c3c) {
            ctx->pc = 0x4B2C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2C3Cu;
            // 0x4b2c40: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2C6Cu;
            goto label_4b2c6c;
        }
    }
    ctx->pc = 0x4B2C44u;
label_4b2c44:
    // 0x4b2c44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4b2c48:
    if (ctx->pc == 0x4B2C48u) {
        ctx->pc = 0x4B2C4Cu;
        goto label_4b2c4c;
    }
    ctx->pc = 0x4B2C44u;
    {
        const bool branch_taken_0x4b2c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2c44) {
            ctx->pc = 0x4B2C68u;
            goto label_4b2c68;
        }
    }
    ctx->pc = 0x4B2C4Cu;
label_4b2c4c:
    // 0x4b2c4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b2c50:
    if (ctx->pc == 0x4B2C50u) {
        ctx->pc = 0x4B2C54u;
        goto label_4b2c54;
    }
    ctx->pc = 0x4B2C4Cu;
    {
        const bool branch_taken_0x4b2c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2c4c) {
            ctx->pc = 0x4B2C68u;
            goto label_4b2c68;
        }
    }
    ctx->pc = 0x4B2C54u;
label_4b2c54:
    // 0x4b2c54: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4b2c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4b2c58:
    // 0x4b2c58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4b2c5c:
    if (ctx->pc == 0x4B2C5Cu) {
        ctx->pc = 0x4B2C60u;
        goto label_4b2c60;
    }
    ctx->pc = 0x4B2C58u;
    {
        const bool branch_taken_0x4b2c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2c58) {
            ctx->pc = 0x4B2C68u;
            goto label_4b2c68;
        }
    }
    ctx->pc = 0x4B2C60u;
label_4b2c60:
    // 0x4b2c60: 0xc0400a8  jal         func_1002A0
label_4b2c64:
    if (ctx->pc == 0x4B2C64u) {
        ctx->pc = 0x4B2C68u;
        goto label_4b2c68;
    }
    ctx->pc = 0x4B2C60u;
    SET_GPR_U32(ctx, 31, 0x4B2C68u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2C68u; }
        if (ctx->pc != 0x4B2C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2C68u; }
        if (ctx->pc != 0x4B2C68u) { return; }
    }
    ctx->pc = 0x4B2C68u;
label_4b2c68:
    // 0x4b2c68: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4b2c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4b2c6c:
    // 0x4b2c6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b2c70:
    if (ctx->pc == 0x4B2C70u) {
        ctx->pc = 0x4B2C74u;
        goto label_4b2c74;
    }
    ctx->pc = 0x4B2C6Cu;
    {
        const bool branch_taken_0x4b2c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2c6c) {
            ctx->pc = 0x4B2C88u;
            goto label_4b2c88;
        }
    }
    ctx->pc = 0x4B2C74u;
label_4b2c74:
    // 0x4b2c74: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b2c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b2c78:
    // 0x4b2c78: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4b2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4b2c7c:
    // 0x4b2c7c: 0x246307a0  addiu       $v1, $v1, 0x7A0
    ctx->pc = 0x4b2c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1952));
label_4b2c80:
    // 0x4b2c80: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4b2c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4b2c84:
    // 0x4b2c84: 0xac40a998  sw          $zero, -0x5668($v0)
    ctx->pc = 0x4b2c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945176), GPR_U32(ctx, 0));
label_4b2c88:
    // 0x4b2c88: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4b2c8c:
    if (ctx->pc == 0x4B2C8Cu) {
        ctx->pc = 0x4B2C8Cu;
            // 0x4b2c8c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4B2C90u;
        goto label_4b2c90;
    }
    ctx->pc = 0x4B2C88u;
    {
        const bool branch_taken_0x4b2c88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2c88) {
            ctx->pc = 0x4B2C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2C88u;
            // 0x4b2c8c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2CE4u;
            goto label_4b2ce4;
        }
    }
    ctx->pc = 0x4B2C90u;
label_4b2c90:
    // 0x4b2c90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b2c94:
    // 0x4b2c94: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4b2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4b2c98:
    // 0x4b2c98: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b2c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4b2c9c:
    // 0x4b2c9c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4b2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4b2ca0:
    // 0x4b2ca0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b2ca4:
    if (ctx->pc == 0x4B2CA4u) {
        ctx->pc = 0x4B2CA4u;
            // 0x4b2ca4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4B2CA8u;
        goto label_4b2ca8;
    }
    ctx->pc = 0x4B2CA0u;
    {
        const bool branch_taken_0x4b2ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2ca0) {
            ctx->pc = 0x4B2CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2CA0u;
            // 0x4b2ca4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2CBCu;
            goto label_4b2cbc;
        }
    }
    ctx->pc = 0x4B2CA8u;
label_4b2ca8:
    // 0x4b2ca8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b2ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b2cac:
    // 0x4b2cac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b2cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b2cb0:
    // 0x4b2cb0: 0x320f809  jalr        $t9
label_4b2cb4:
    if (ctx->pc == 0x4B2CB4u) {
        ctx->pc = 0x4B2CB4u;
            // 0x4b2cb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B2CB8u;
        goto label_4b2cb8;
    }
    ctx->pc = 0x4B2CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B2CB8u);
        ctx->pc = 0x4B2CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2CB0u;
            // 0x4b2cb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B2CB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B2CB8u; }
            if (ctx->pc != 0x4B2CB8u) { return; }
        }
        }
    }
    ctx->pc = 0x4B2CB8u;
label_4b2cb8:
    // 0x4b2cb8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4b2cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4b2cbc:
    // 0x4b2cbc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b2cc0:
    if (ctx->pc == 0x4B2CC0u) {
        ctx->pc = 0x4B2CC0u;
            // 0x4b2cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B2CC4u;
        goto label_4b2cc4;
    }
    ctx->pc = 0x4B2CBCu;
    {
        const bool branch_taken_0x4b2cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2cbc) {
            ctx->pc = 0x4B2CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2CBCu;
            // 0x4b2cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2CD8u;
            goto label_4b2cd8;
        }
    }
    ctx->pc = 0x4B2CC4u;
label_4b2cc4:
    // 0x4b2cc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b2cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b2cc8:
    // 0x4b2cc8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b2cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b2ccc:
    // 0x4b2ccc: 0x320f809  jalr        $t9
label_4b2cd0:
    if (ctx->pc == 0x4B2CD0u) {
        ctx->pc = 0x4B2CD0u;
            // 0x4b2cd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B2CD4u;
        goto label_4b2cd4;
    }
    ctx->pc = 0x4B2CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B2CD4u);
        ctx->pc = 0x4B2CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2CCCu;
            // 0x4b2cd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B2CD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B2CD4u; }
            if (ctx->pc != 0x4B2CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x4B2CD4u;
label_4b2cd4:
    // 0x4b2cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b2cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b2cd8:
    // 0x4b2cd8: 0xc075bf8  jal         func_1D6FE0
label_4b2cdc:
    if (ctx->pc == 0x4B2CDCu) {
        ctx->pc = 0x4B2CDCu;
            // 0x4b2cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B2CE0u;
        goto label_4b2ce0;
    }
    ctx->pc = 0x4B2CD8u;
    SET_GPR_U32(ctx, 31, 0x4B2CE0u);
    ctx->pc = 0x4B2CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2CD8u;
            // 0x4b2cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2CE0u; }
        if (ctx->pc != 0x4B2CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2CE0u; }
        if (ctx->pc != 0x4B2CE0u) { return; }
    }
    ctx->pc = 0x4B2CE0u;
label_4b2ce0:
    // 0x4b2ce0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4b2ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4b2ce4:
    // 0x4b2ce4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b2ce4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b2ce8:
    // 0x4b2ce8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b2cec:
    if (ctx->pc == 0x4B2CECu) {
        ctx->pc = 0x4B2CECu;
            // 0x4b2cec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B2CF0u;
        goto label_4b2cf0;
    }
    ctx->pc = 0x4B2CE8u;
    {
        const bool branch_taken_0x4b2ce8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b2ce8) {
            ctx->pc = 0x4B2CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2CE8u;
            // 0x4b2cec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2CFCu;
            goto label_4b2cfc;
        }
    }
    ctx->pc = 0x4B2CF0u;
label_4b2cf0:
    // 0x4b2cf0: 0xc0400a8  jal         func_1002A0
label_4b2cf4:
    if (ctx->pc == 0x4B2CF4u) {
        ctx->pc = 0x4B2CF4u;
            // 0x4b2cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B2CF8u;
        goto label_4b2cf8;
    }
    ctx->pc = 0x4B2CF0u;
    SET_GPR_U32(ctx, 31, 0x4B2CF8u);
    ctx->pc = 0x4B2CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2CF0u;
            // 0x4b2cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2CF8u; }
        if (ctx->pc != 0x4B2CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2CF8u; }
        if (ctx->pc != 0x4B2CF8u) { return; }
    }
    ctx->pc = 0x4B2CF8u;
label_4b2cf8:
    // 0x4b2cf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b2cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b2cfc:
    // 0x4b2cfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b2cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b2d00:
    // 0x4b2d00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b2d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b2d04:
    // 0x4b2d04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b2d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b2d08:
    // 0x4b2d08: 0x3e00008  jr          $ra
label_4b2d0c:
    if (ctx->pc == 0x4B2D0Cu) {
        ctx->pc = 0x4B2D0Cu;
            // 0x4b2d0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B2D10u;
        goto label_4b2d10;
    }
    ctx->pc = 0x4B2D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2D08u;
            // 0x4b2d0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B2D10u;
label_4b2d10:
    // 0x4b2d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b2d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b2d14:
    // 0x4b2d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b2d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b2d18:
    // 0x4b2d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b2d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b2d1c:
    // 0x4b2d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b2d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b2d20:
    // 0x4b2d20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b2d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b2d24:
    // 0x4b2d24: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_4b2d28:
    if (ctx->pc == 0x4B2D28u) {
        ctx->pc = 0x4B2D28u;
            // 0x4b2d28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B2D2Cu;
        goto label_4b2d2c;
    }
    ctx->pc = 0x4B2D24u;
    {
        const bool branch_taken_0x4b2d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2D24u;
            // 0x4b2d28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2d24) {
            ctx->pc = 0x4B2DECu;
            goto label_4b2dec;
        }
    }
    ctx->pc = 0x4B2D2Cu;
label_4b2d2c:
    // 0x4b2d2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b2d30:
    // 0x4b2d30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b2d34:
    // 0x4b2d34: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x4b2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
label_4b2d38:
    // 0x4b2d38: 0x24420740  addiu       $v0, $v0, 0x740
    ctx->pc = 0x4b2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
label_4b2d3c:
    // 0x4b2d3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b2d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b2d40:
    // 0x4b2d40: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4b2d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4b2d44:
    // 0x4b2d44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b2d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b2d48:
    // 0x4b2d48: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4b2d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4b2d4c:
    // 0x4b2d4c: 0x320f809  jalr        $t9
label_4b2d50:
    if (ctx->pc == 0x4B2D50u) {
        ctx->pc = 0x4B2D54u;
        goto label_4b2d54;
    }
    ctx->pc = 0x4B2D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B2D54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B2D54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B2D54u; }
            if (ctx->pc != 0x4B2D54u) { return; }
        }
        }
    }
    ctx->pc = 0x4B2D54u;
label_4b2d54:
    // 0x4b2d54: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_4b2d58:
    if (ctx->pc == 0x4B2D58u) {
        ctx->pc = 0x4B2D58u;
            // 0x4b2d58: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4B2D5Cu;
        goto label_4b2d5c;
    }
    ctx->pc = 0x4B2D54u;
    {
        const bool branch_taken_0x4b2d54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2d54) {
            ctx->pc = 0x4B2D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2D54u;
            // 0x4b2d58: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2DD8u;
            goto label_4b2dd8;
        }
    }
    ctx->pc = 0x4B2D5Cu;
label_4b2d5c:
    // 0x4b2d5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b2d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4b2d60:
    // 0x4b2d60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b2d64:
    // 0x4b2d64: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4b2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4b2d68:
    // 0x4b2d68: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4b2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4b2d6c:
    // 0x4b2d6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b2d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b2d70:
    // 0x4b2d70: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4b2d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4b2d74:
    // 0x4b2d74: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4b2d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4b2d78:
    // 0x4b2d78: 0xc0aecc4  jal         func_2BB310
label_4b2d7c:
    if (ctx->pc == 0x4B2D7Cu) {
        ctx->pc = 0x4B2D7Cu;
            // 0x4b2d7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B2D80u;
        goto label_4b2d80;
    }
    ctx->pc = 0x4B2D78u;
    SET_GPR_U32(ctx, 31, 0x4B2D80u);
    ctx->pc = 0x4B2D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2D78u;
            // 0x4b2d7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2D80u; }
        if (ctx->pc != 0x4B2D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2D80u; }
        if (ctx->pc != 0x4B2D80u) { return; }
    }
    ctx->pc = 0x4B2D80u;
label_4b2d80:
    // 0x4b2d80: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4b2d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4b2d84:
    // 0x4b2d84: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4b2d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4b2d88:
    // 0x4b2d88: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b2d8c:
    if (ctx->pc == 0x4B2D8Cu) {
        ctx->pc = 0x4B2D8Cu;
            // 0x4b2d8c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4B2D90u;
        goto label_4b2d90;
    }
    ctx->pc = 0x4B2D88u;
    {
        const bool branch_taken_0x4b2d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2d88) {
            ctx->pc = 0x4B2D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2D88u;
            // 0x4b2d8c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2DA4u;
            goto label_4b2da4;
        }
    }
    ctx->pc = 0x4B2D90u;
label_4b2d90:
    // 0x4b2d90: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4b2d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4b2d94:
    // 0x4b2d94: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b2d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b2d98:
    // 0x4b2d98: 0x320f809  jalr        $t9
label_4b2d9c:
    if (ctx->pc == 0x4B2D9Cu) {
        ctx->pc = 0x4B2D9Cu;
            // 0x4b2d9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B2DA0u;
        goto label_4b2da0;
    }
    ctx->pc = 0x4B2D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B2DA0u);
        ctx->pc = 0x4B2D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2D98u;
            // 0x4b2d9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B2DA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B2DA0u; }
            if (ctx->pc != 0x4B2DA0u) { return; }
        }
        }
    }
    ctx->pc = 0x4B2DA0u;
label_4b2da0:
    // 0x4b2da0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4b2da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4b2da4:
    // 0x4b2da4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4b2da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b2da8:
    // 0x4b2da8: 0xc0aec9c  jal         func_2BB270
label_4b2dac:
    if (ctx->pc == 0x4B2DACu) {
        ctx->pc = 0x4B2DACu;
            // 0x4b2dac: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4B2DB0u;
        goto label_4b2db0;
    }
    ctx->pc = 0x4B2DA8u;
    SET_GPR_U32(ctx, 31, 0x4B2DB0u);
    ctx->pc = 0x4B2DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2DA8u;
            // 0x4b2dac: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2DB0u; }
        if (ctx->pc != 0x4B2DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2DB0u; }
        if (ctx->pc != 0x4B2DB0u) { return; }
    }
    ctx->pc = 0x4B2DB0u;
label_4b2db0:
    // 0x4b2db0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4b2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4b2db4:
    // 0x4b2db4: 0xc0aec88  jal         func_2BB220
label_4b2db8:
    if (ctx->pc == 0x4B2DB8u) {
        ctx->pc = 0x4B2DB8u;
            // 0x4b2db8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4B2DBCu;
        goto label_4b2dbc;
    }
    ctx->pc = 0x4B2DB4u;
    SET_GPR_U32(ctx, 31, 0x4B2DBCu);
    ctx->pc = 0x4B2DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2DB4u;
            // 0x4b2db8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2DBCu; }
        if (ctx->pc != 0x4B2DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2DBCu; }
        if (ctx->pc != 0x4B2DBCu) { return; }
    }
    ctx->pc = 0x4B2DBCu;
label_4b2dbc:
    // 0x4b2dbc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4b2dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4b2dc0:
    // 0x4b2dc0: 0xc0aec0c  jal         func_2BB030
label_4b2dc4:
    if (ctx->pc == 0x4B2DC4u) {
        ctx->pc = 0x4B2DC4u;
            // 0x4b2dc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B2DC8u;
        goto label_4b2dc8;
    }
    ctx->pc = 0x4B2DC0u;
    SET_GPR_U32(ctx, 31, 0x4B2DC8u);
    ctx->pc = 0x4B2DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2DC0u;
            // 0x4b2dc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2DC8u; }
        if (ctx->pc != 0x4B2DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2DC8u; }
        if (ctx->pc != 0x4B2DC8u) { return; }
    }
    ctx->pc = 0x4B2DC8u;
label_4b2dc8:
    // 0x4b2dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b2dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b2dcc:
    // 0x4b2dcc: 0xc0aeaa8  jal         func_2BAAA0
label_4b2dd0:
    if (ctx->pc == 0x4B2DD0u) {
        ctx->pc = 0x4B2DD0u;
            // 0x4b2dd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B2DD4u;
        goto label_4b2dd4;
    }
    ctx->pc = 0x4B2DCCu;
    SET_GPR_U32(ctx, 31, 0x4B2DD4u);
    ctx->pc = 0x4B2DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2DCCu;
            // 0x4b2dd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2DD4u; }
        if (ctx->pc != 0x4B2DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2DD4u; }
        if (ctx->pc != 0x4B2DD4u) { return; }
    }
    ctx->pc = 0x4B2DD4u;
label_4b2dd4:
    // 0x4b2dd4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4b2dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4b2dd8:
    // 0x4b2dd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b2dd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b2ddc:
    // 0x4b2ddc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b2de0:
    if (ctx->pc == 0x4B2DE0u) {
        ctx->pc = 0x4B2DE0u;
            // 0x4b2de0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B2DE4u;
        goto label_4b2de4;
    }
    ctx->pc = 0x4B2DDCu;
    {
        const bool branch_taken_0x4b2ddc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b2ddc) {
            ctx->pc = 0x4B2DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2DDCu;
            // 0x4b2de0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2DF0u;
            goto label_4b2df0;
        }
    }
    ctx->pc = 0x4B2DE4u;
label_4b2de4:
    // 0x4b2de4: 0xc0400a8  jal         func_1002A0
label_4b2de8:
    if (ctx->pc == 0x4B2DE8u) {
        ctx->pc = 0x4B2DE8u;
            // 0x4b2de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B2DECu;
        goto label_4b2dec;
    }
    ctx->pc = 0x4B2DE4u;
    SET_GPR_U32(ctx, 31, 0x4B2DECu);
    ctx->pc = 0x4B2DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2DE4u;
            // 0x4b2de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2DECu; }
        if (ctx->pc != 0x4B2DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2DECu; }
        if (ctx->pc != 0x4B2DECu) { return; }
    }
    ctx->pc = 0x4B2DECu;
label_4b2dec:
    // 0x4b2dec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b2decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b2df0:
    // 0x4b2df0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b2df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b2df4:
    // 0x4b2df4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b2df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b2df8:
    // 0x4b2df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b2df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b2dfc:
    // 0x4b2dfc: 0x3e00008  jr          $ra
label_4b2e00:
    if (ctx->pc == 0x4B2E00u) {
        ctx->pc = 0x4B2E00u;
            // 0x4b2e00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B2E04u;
        goto label_4b2e04;
    }
    ctx->pc = 0x4B2DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2DFCu;
            // 0x4b2e00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B2E04u;
label_4b2e04:
    // 0x4b2e04: 0x0  nop
    ctx->pc = 0x4b2e04u;
    // NOP
label_4b2e08:
    // 0x4b2e08: 0x0  nop
    ctx->pc = 0x4b2e08u;
    // NOP
label_4b2e0c:
    // 0x4b2e0c: 0x0  nop
    ctx->pc = 0x4b2e0cu;
    // NOP
label_4b2e10:
    // 0x4b2e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b2e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4b2e14:
    // 0x4b2e14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b2e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4b2e18:
    // 0x4b2e18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b2e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b2e1c:
    // 0x4b2e1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b2e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b2e20:
    // 0x4b2e20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b2e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b2e24:
    // 0x4b2e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b2e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b2e28:
    // 0x4b2e28: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4b2e28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4b2e2c:
    // 0x4b2e2c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4b2e30:
    if (ctx->pc == 0x4B2E30u) {
        ctx->pc = 0x4B2E30u;
            // 0x4b2e30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E34u;
        goto label_4b2e34;
    }
    ctx->pc = 0x4B2E2Cu;
    {
        const bool branch_taken_0x4b2e2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2E2Cu;
            // 0x4b2e30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e2c) {
            ctx->pc = 0x4B2E68u;
            goto label_4b2e68;
        }
    }
    ctx->pc = 0x4B2E34u;
label_4b2e34:
    // 0x4b2e34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b2e34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2e38:
    // 0x4b2e38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b2e38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2e3c:
    // 0x4b2e3c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4b2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4b2e40:
    // 0x4b2e40: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4b2e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4b2e44:
    // 0x4b2e44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4b2e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b2e48:
    // 0x4b2e48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b2e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b2e4c:
    // 0x4b2e4c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4b2e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4b2e50:
    // 0x4b2e50: 0x320f809  jalr        $t9
label_4b2e54:
    if (ctx->pc == 0x4B2E54u) {
        ctx->pc = 0x4B2E58u;
        goto label_4b2e58;
    }
    ctx->pc = 0x4B2E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B2E58u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B2E58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B2E58u; }
            if (ctx->pc != 0x4B2E58u) { return; }
        }
        }
    }
    ctx->pc = 0x4B2E58u;
label_4b2e58:
    // 0x4b2e58: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4b2e58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4b2e5c:
    // 0x4b2e5c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4b2e5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4b2e60:
    // 0x4b2e60: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4b2e64:
    if (ctx->pc == 0x4B2E64u) {
        ctx->pc = 0x4B2E64u;
            // 0x4b2e64: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4B2E68u;
        goto label_4b2e68;
    }
    ctx->pc = 0x4B2E60u;
    {
        const bool branch_taken_0x4b2e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2E60u;
            // 0x4b2e64: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e60) {
            ctx->pc = 0x4B2E3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b2e3c;
        }
    }
    ctx->pc = 0x4B2E68u;
label_4b2e68:
    // 0x4b2e68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b2e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4b2e6c:
    // 0x4b2e6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b2e6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b2e70:
    // 0x4b2e70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b2e70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b2e74:
    // 0x4b2e74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b2e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b2e78:
    // 0x4b2e78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b2e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b2e7c:
    // 0x4b2e7c: 0x3e00008  jr          $ra
label_4b2e80:
    if (ctx->pc == 0x4B2E80u) {
        ctx->pc = 0x4B2E80u;
            // 0x4b2e80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4B2E84u;
        goto label_4b2e84;
    }
    ctx->pc = 0x4B2E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2E7Cu;
            // 0x4b2e80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B2E84u;
label_4b2e84:
    // 0x4b2e84: 0x0  nop
    ctx->pc = 0x4b2e84u;
    // NOP
label_4b2e88:
    // 0x4b2e88: 0x0  nop
    ctx->pc = 0x4b2e88u;
    // NOP
label_4b2e8c:
    // 0x4b2e8c: 0x0  nop
    ctx->pc = 0x4b2e8cu;
    // NOP
label_4b2e90:
    // 0x4b2e90: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4b2e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4b2e94:
    // 0x4b2e94: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4b2e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4b2e98:
    // 0x4b2e98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4b2e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4b2e9c:
    // 0x4b2e9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4b2e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4b2ea0:
    // 0x4b2ea0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4b2ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4b2ea4:
    // 0x4b2ea4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4b2ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4b2ea8:
    // 0x4b2ea8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b2ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4b2eac:
    // 0x4b2eac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b2eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b2eb0:
    // 0x4b2eb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b2eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b2eb4:
    // 0x4b2eb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b2eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b2eb8:
    // 0x4b2eb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b2eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b2ebc:
    // 0x4b2ebc: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4b2ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4b2ec0:
    // 0x4b2ec0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4b2ec0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4b2ec4:
    // 0x4b2ec4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b2ec8:
    // 0x4b2ec8: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_4b2ecc:
    if (ctx->pc == 0x4B2ECCu) {
        ctx->pc = 0x4B2ECCu;
            // 0x4b2ecc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B2ED0u;
        goto label_4b2ed0;
    }
    ctx->pc = 0x4B2EC8u;
    {
        const bool branch_taken_0x4b2ec8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B2ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2EC8u;
            // 0x4b2ecc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2ec8) {
            ctx->pc = 0x4B2F0Cu;
            goto label_4b2f0c;
        }
    }
    ctx->pc = 0x4B2ED0u;
label_4b2ed0:
    // 0x4b2ed0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b2ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b2ed4:
    // 0x4b2ed4: 0x10a30038  beq         $a1, $v1, . + 4 + (0x38 << 2)
label_4b2ed8:
    if (ctx->pc == 0x4B2ED8u) {
        ctx->pc = 0x4B2EDCu;
        goto label_4b2edc;
    }
    ctx->pc = 0x4B2ED4u;
    {
        const bool branch_taken_0x4b2ed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b2ed4) {
            ctx->pc = 0x4B2FB8u;
            goto label_4b2fb8;
        }
    }
    ctx->pc = 0x4B2EDCu;
label_4b2edc:
    // 0x4b2edc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b2ee0:
    // 0x4b2ee0: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4b2ee4:
    if (ctx->pc == 0x4B2EE4u) {
        ctx->pc = 0x4B2EE4u;
            // 0x4b2ee4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4B2EE8u;
        goto label_4b2ee8;
    }
    ctx->pc = 0x4B2EE0u;
    {
        const bool branch_taken_0x4b2ee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b2ee0) {
            ctx->pc = 0x4B2EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2EE0u;
            // 0x4b2ee4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2EF0u;
            goto label_4b2ef0;
        }
    }
    ctx->pc = 0x4B2EE8u;
label_4b2ee8:
    // 0x4b2ee8: 0x10000033  b           . + 4 + (0x33 << 2)
label_4b2eec:
    if (ctx->pc == 0x4B2EECu) {
        ctx->pc = 0x4B2EF0u;
        goto label_4b2ef0;
    }
    ctx->pc = 0x4B2EE8u;
    {
        const bool branch_taken_0x4b2ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2ee8) {
            ctx->pc = 0x4B2FB8u;
            goto label_4b2fb8;
        }
    }
    ctx->pc = 0x4B2EF0u;
label_4b2ef0:
    // 0x4b2ef0: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x4b2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_4b2ef4:
    // 0x4b2ef4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4b2ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4b2ef8:
    // 0x4b2ef8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4b2ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4b2efc:
    // 0x4b2efc: 0x320f809  jalr        $t9
label_4b2f00:
    if (ctx->pc == 0x4B2F00u) {
        ctx->pc = 0x4B2F00u;
            // 0x4b2f00: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4B2F04u;
        goto label_4b2f04;
    }
    ctx->pc = 0x4B2EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B2F04u);
        ctx->pc = 0x4B2F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2EFCu;
            // 0x4b2f00: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B2F04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B2F04u; }
            if (ctx->pc != 0x4B2F04u) { return; }
        }
        }
    }
    ctx->pc = 0x4B2F04u;
label_4b2f04:
    // 0x4b2f04: 0x1000002c  b           . + 4 + (0x2C << 2)
label_4b2f08:
    if (ctx->pc == 0x4B2F08u) {
        ctx->pc = 0x4B2F0Cu;
        goto label_4b2f0c;
    }
    ctx->pc = 0x4B2F04u;
    {
        const bool branch_taken_0x4b2f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2f04) {
            ctx->pc = 0x4B2FB8u;
            goto label_4b2fb8;
        }
    }
    ctx->pc = 0x4B2F0Cu;
label_4b2f0c:
    // 0x4b2f0c: 0x8e740070  lw          $s4, 0x70($s3)
    ctx->pc = 0x4b2f0cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_4b2f10:
    // 0x4b2f10: 0x12800029  beqz        $s4, . + 4 + (0x29 << 2)
label_4b2f14:
    if (ctx->pc == 0x4B2F14u) {
        ctx->pc = 0x4B2F18u;
        goto label_4b2f18;
    }
    ctx->pc = 0x4B2F10u;
    {
        const bool branch_taken_0x4b2f10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2f10) {
            ctx->pc = 0x4B2FB8u;
            goto label_4b2fb8;
        }
    }
    ctx->pc = 0x4B2F18u;
label_4b2f18:
    // 0x4b2f18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b2f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b2f1c:
    // 0x4b2f1c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b2f20:
    // 0x4b2f20: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x4b2f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4b2f24:
    // 0x4b2f24: 0x26700084  addiu       $s0, $s3, 0x84
    ctx->pc = 0x4b2f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_4b2f28:
    // 0x4b2f28: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x4b2f28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4b2f2c:
    // 0x4b2f2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b2f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b2f30:
    // 0x4b2f30: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x4b2f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4b2f34:
    // 0x4b2f34: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4b2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4b2f38:
    // 0x4b2f38: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x4b2f38u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4b2f3c:
    // 0x4b2f3c: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4b2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4b2f40:
    // 0x4b2f40: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x4b2f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_4b2f44:
    // 0x4b2f44: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4b2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4b2f48:
    // 0x4b2f48: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4b2f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4b2f4c:
    // 0x4b2f4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b2f50:
    // 0x4b2f50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4b2f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b2f54:
    // 0x4b2f54: 0xc04e738  jal         func_139CE0
label_4b2f58:
    if (ctx->pc == 0x4B2F58u) {
        ctx->pc = 0x4B2F58u;
            // 0x4b2f58: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4B2F5Cu;
        goto label_4b2f5c;
    }
    ctx->pc = 0x4B2F54u;
    SET_GPR_U32(ctx, 31, 0x4B2F5Cu);
    ctx->pc = 0x4B2F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2F54u;
            // 0x4b2f58: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2F5Cu; }
        if (ctx->pc != 0x4B2F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2F5Cu; }
        if (ctx->pc != 0x4B2F5Cu) { return; }
    }
    ctx->pc = 0x4B2F5Cu;
label_4b2f5c:
    // 0x4b2f5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b2f60:
    // 0x4b2f60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b2f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b2f64:
    // 0x4b2f64: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4b2f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4b2f68:
    // 0x4b2f68: 0xc04e4a4  jal         func_139290
label_4b2f6c:
    if (ctx->pc == 0x4B2F6Cu) {
        ctx->pc = 0x4B2F6Cu;
            // 0x4b2f6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B2F70u;
        goto label_4b2f70;
    }
    ctx->pc = 0x4B2F68u;
    SET_GPR_U32(ctx, 31, 0x4B2F70u);
    ctx->pc = 0x4B2F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2F68u;
            // 0x4b2f6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2F70u; }
        if (ctx->pc != 0x4B2F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2F70u; }
        if (ctx->pc != 0x4B2F70u) { return; }
    }
    ctx->pc = 0x4B2F70u;
label_4b2f70:
    // 0x4b2f70: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4b2f70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2f74:
    // 0x4b2f74: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4b2f74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2f78:
    // 0x4b2f78: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x4b2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4b2f7c:
    // 0x4b2f7c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b2f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b2f80:
    // 0x4b2f80: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4b2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4b2f84:
    // 0x4b2f84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b2f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b2f88:
    // 0x4b2f88: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4b2f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4b2f8c:
    // 0x4b2f8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4b2f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b2f90:
    // 0x4b2f90: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x4b2f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_4b2f94:
    // 0x4b2f94: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4b2f94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b2f98:
    // 0x4b2f98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4b2f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b2f9c:
    // 0x4b2f9c: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x4b2f9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_4b2fa0:
    // 0x4b2fa0: 0xc12cd7c  jal         func_4B35F0
label_4b2fa4:
    if (ctx->pc == 0x4B2FA4u) {
        ctx->pc = 0x4B2FA4u;
            // 0x4b2fa4: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4B2FA8u;
        goto label_4b2fa8;
    }
    ctx->pc = 0x4B2FA0u;
    SET_GPR_U32(ctx, 31, 0x4B2FA8u);
    ctx->pc = 0x4B2FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2FA0u;
            // 0x4b2fa4: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B35F0u;
    if (runtime->hasFunction(0x4B35F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B35F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2FA8u; }
        if (ctx->pc != 0x4B2FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B35F0_0x4b35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2FA8u; }
        if (ctx->pc != 0x4B2FA8u) { return; }
    }
    ctx->pc = 0x4B2FA8u;
label_4b2fa8:
    // 0x4b2fa8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4b2fa8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4b2fac:
    // 0x4b2fac: 0x2d4182b  sltu        $v1, $s6, $s4
    ctx->pc = 0x4b2facu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4b2fb0:
    // 0x4b2fb0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_4b2fb4:
    if (ctx->pc == 0x4B2FB4u) {
        ctx->pc = 0x4B2FB4u;
            // 0x4b2fb4: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x4B2FB8u;
        goto label_4b2fb8;
    }
    ctx->pc = 0x4B2FB0u;
    {
        const bool branch_taken_0x4b2fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2FB0u;
            // 0x4b2fb4: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2fb0) {
            ctx->pc = 0x4B2F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b2f78;
        }
    }
    ctx->pc = 0x4B2FB8u;
label_4b2fb8:
    // 0x4b2fb8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4b2fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4b2fbc:
    // 0x4b2fbc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4b2fbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4b2fc0:
    // 0x4b2fc0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4b2fc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4b2fc4:
    // 0x4b2fc4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4b2fc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4b2fc8:
    // 0x4b2fc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b2fc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b2fcc:
    // 0x4b2fcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b2fccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b2fd0:
    // 0x4b2fd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b2fd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b2fd4:
    // 0x4b2fd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b2fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b2fd8:
    // 0x4b2fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b2fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b2fdc:
    // 0x4b2fdc: 0x3e00008  jr          $ra
label_4b2fe0:
    if (ctx->pc == 0x4B2FE0u) {
        ctx->pc = 0x4B2FE0u;
            // 0x4b2fe0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4B2FE4u;
        goto label_4b2fe4;
    }
    ctx->pc = 0x4B2FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2FDCu;
            // 0x4b2fe0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B2FE4u;
label_4b2fe4:
    // 0x4b2fe4: 0x0  nop
    ctx->pc = 0x4b2fe4u;
    // NOP
label_4b2fe8:
    // 0x4b2fe8: 0x0  nop
    ctx->pc = 0x4b2fe8u;
    // NOP
label_4b2fec:
    // 0x4b2fec: 0x0  nop
    ctx->pc = 0x4b2fecu;
    // NOP
label_4b2ff0:
    // 0x4b2ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b2ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4b2ff4:
    // 0x4b2ff4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b2ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b2ff8:
    // 0x4b2ff8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b2ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4b2ffc:
    // 0x4b2ffc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b2ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b3000:
    // 0x4b3000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b3000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b3004:
    // 0x4b3004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b3004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b3008:
    // 0x4b3008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b3008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b300c:
    // 0x4b300c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4b300cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4b3010:
    // 0x4b3010: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4b3014:
    if (ctx->pc == 0x4B3014u) {
        ctx->pc = 0x4B3014u;
            // 0x4b3014: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B3018u;
        goto label_4b3018;
    }
    ctx->pc = 0x4B3010u;
    {
        const bool branch_taken_0x4b3010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B3014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3010u;
            // 0x4b3014: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3010) {
            ctx->pc = 0x4B3044u;
            goto label_4b3044;
        }
    }
    ctx->pc = 0x4B3018u;
label_4b3018:
    // 0x4b3018: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b3018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b301c:
    // 0x4b301c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4b3020:
    if (ctx->pc == 0x4B3020u) {
        ctx->pc = 0x4B3020u;
            // 0x4b3020: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4B3024u;
        goto label_4b3024;
    }
    ctx->pc = 0x4B301Cu;
    {
        const bool branch_taken_0x4b301c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b301c) {
            ctx->pc = 0x4B3020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B301Cu;
            // 0x4b3020: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B3038u;
            goto label_4b3038;
        }
    }
    ctx->pc = 0x4B3024u;
label_4b3024:
    // 0x4b3024: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b3024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b3028:
    // 0x4b3028: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4b302c:
    if (ctx->pc == 0x4B302Cu) {
        ctx->pc = 0x4B3030u;
        goto label_4b3030;
    }
    ctx->pc = 0x4B3028u;
    {
        const bool branch_taken_0x4b3028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b3028) {
            ctx->pc = 0x4B3078u;
            goto label_4b3078;
        }
    }
    ctx->pc = 0x4B3030u;
label_4b3030:
    // 0x4b3030: 0x10000011  b           . + 4 + (0x11 << 2)
label_4b3034:
    if (ctx->pc == 0x4B3034u) {
        ctx->pc = 0x4B3038u;
        goto label_4b3038;
    }
    ctx->pc = 0x4B3030u;
    {
        const bool branch_taken_0x4b3030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3030) {
            ctx->pc = 0x4B3078u;
            goto label_4b3078;
        }
    }
    ctx->pc = 0x4B3038u;
label_4b3038:
    // 0x4b3038: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4b3038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4b303c:
    // 0x4b303c: 0x320f809  jalr        $t9
label_4b3040:
    if (ctx->pc == 0x4B3040u) {
        ctx->pc = 0x4B3044u;
        goto label_4b3044;
    }
    ctx->pc = 0x4B303Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B3044u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B3044u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B3044u; }
            if (ctx->pc != 0x4B3044u) { return; }
        }
        }
    }
    ctx->pc = 0x4B3044u;
label_4b3044:
    // 0x4b3044: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4b3044u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4b3048:
    // 0x4b3048: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_4b304c:
    if (ctx->pc == 0x4B304Cu) {
        ctx->pc = 0x4B3050u;
        goto label_4b3050;
    }
    ctx->pc = 0x4B3048u;
    {
        const bool branch_taken_0x4b3048 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3048) {
            ctx->pc = 0x4B3078u;
            goto label_4b3078;
        }
    }
    ctx->pc = 0x4B3050u;
label_4b3050:
    // 0x4b3050: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b3050u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3054:
    // 0x4b3054: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b3054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3058:
    // 0x4b3058: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4b3058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4b305c:
    // 0x4b305c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4b305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4b3060:
    // 0x4b3060: 0xc0e3658  jal         func_38D960
label_4b3064:
    if (ctx->pc == 0x4B3064u) {
        ctx->pc = 0x4B3064u;
            // 0x4b3064: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4B3068u;
        goto label_4b3068;
    }
    ctx->pc = 0x4B3060u;
    SET_GPR_U32(ctx, 31, 0x4B3068u);
    ctx->pc = 0x4B3064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3060u;
            // 0x4b3064: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3068u; }
        if (ctx->pc != 0x4B3068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3068u; }
        if (ctx->pc != 0x4B3068u) { return; }
    }
    ctx->pc = 0x4B3068u;
label_4b3068:
    // 0x4b3068: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4b3068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4b306c:
    // 0x4b306c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4b306cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4b3070:
    // 0x4b3070: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4b3074:
    if (ctx->pc == 0x4B3074u) {
        ctx->pc = 0x4B3074u;
            // 0x4b3074: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4B3078u;
        goto label_4b3078;
    }
    ctx->pc = 0x4B3070u;
    {
        const bool branch_taken_0x4b3070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3070u;
            // 0x4b3074: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3070) {
            ctx->pc = 0x4B3058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b3058;
        }
    }
    ctx->pc = 0x4B3078u;
label_4b3078:
    // 0x4b3078: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b3078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4b307c:
    // 0x4b307c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b307cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b3080:
    // 0x4b3080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b3080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b3084:
    // 0x4b3084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b3084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b3088:
    // 0x4b3088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b3088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b308c:
    // 0x4b308c: 0x3e00008  jr          $ra
label_4b3090:
    if (ctx->pc == 0x4B3090u) {
        ctx->pc = 0x4B3090u;
            // 0x4b3090: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4B3094u;
        goto label_4b3094;
    }
    ctx->pc = 0x4B308Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B308Cu;
            // 0x4b3090: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B3094u;
label_4b3094:
    // 0x4b3094: 0x0  nop
    ctx->pc = 0x4b3094u;
    // NOP
label_4b3098:
    // 0x4b3098: 0x0  nop
    ctx->pc = 0x4b3098u;
    // NOP
label_4b309c:
    // 0x4b309c: 0x0  nop
    ctx->pc = 0x4b309cu;
    // NOP
}
