#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A2C80
// Address: 0x3a2c80 - 0x3a3040
void sub_003A2C80_0x3a2c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2C80_0x3a2c80");
#endif

    switch (ctx->pc) {
        case 0x3a2c80u: goto label_3a2c80;
        case 0x3a2c84u: goto label_3a2c84;
        case 0x3a2c88u: goto label_3a2c88;
        case 0x3a2c8cu: goto label_3a2c8c;
        case 0x3a2c90u: goto label_3a2c90;
        case 0x3a2c94u: goto label_3a2c94;
        case 0x3a2c98u: goto label_3a2c98;
        case 0x3a2c9cu: goto label_3a2c9c;
        case 0x3a2ca0u: goto label_3a2ca0;
        case 0x3a2ca4u: goto label_3a2ca4;
        case 0x3a2ca8u: goto label_3a2ca8;
        case 0x3a2cacu: goto label_3a2cac;
        case 0x3a2cb0u: goto label_3a2cb0;
        case 0x3a2cb4u: goto label_3a2cb4;
        case 0x3a2cb8u: goto label_3a2cb8;
        case 0x3a2cbcu: goto label_3a2cbc;
        case 0x3a2cc0u: goto label_3a2cc0;
        case 0x3a2cc4u: goto label_3a2cc4;
        case 0x3a2cc8u: goto label_3a2cc8;
        case 0x3a2cccu: goto label_3a2ccc;
        case 0x3a2cd0u: goto label_3a2cd0;
        case 0x3a2cd4u: goto label_3a2cd4;
        case 0x3a2cd8u: goto label_3a2cd8;
        case 0x3a2cdcu: goto label_3a2cdc;
        case 0x3a2ce0u: goto label_3a2ce0;
        case 0x3a2ce4u: goto label_3a2ce4;
        case 0x3a2ce8u: goto label_3a2ce8;
        case 0x3a2cecu: goto label_3a2cec;
        case 0x3a2cf0u: goto label_3a2cf0;
        case 0x3a2cf4u: goto label_3a2cf4;
        case 0x3a2cf8u: goto label_3a2cf8;
        case 0x3a2cfcu: goto label_3a2cfc;
        case 0x3a2d00u: goto label_3a2d00;
        case 0x3a2d04u: goto label_3a2d04;
        case 0x3a2d08u: goto label_3a2d08;
        case 0x3a2d0cu: goto label_3a2d0c;
        case 0x3a2d10u: goto label_3a2d10;
        case 0x3a2d14u: goto label_3a2d14;
        case 0x3a2d18u: goto label_3a2d18;
        case 0x3a2d1cu: goto label_3a2d1c;
        case 0x3a2d20u: goto label_3a2d20;
        case 0x3a2d24u: goto label_3a2d24;
        case 0x3a2d28u: goto label_3a2d28;
        case 0x3a2d2cu: goto label_3a2d2c;
        case 0x3a2d30u: goto label_3a2d30;
        case 0x3a2d34u: goto label_3a2d34;
        case 0x3a2d38u: goto label_3a2d38;
        case 0x3a2d3cu: goto label_3a2d3c;
        case 0x3a2d40u: goto label_3a2d40;
        case 0x3a2d44u: goto label_3a2d44;
        case 0x3a2d48u: goto label_3a2d48;
        case 0x3a2d4cu: goto label_3a2d4c;
        case 0x3a2d50u: goto label_3a2d50;
        case 0x3a2d54u: goto label_3a2d54;
        case 0x3a2d58u: goto label_3a2d58;
        case 0x3a2d5cu: goto label_3a2d5c;
        case 0x3a2d60u: goto label_3a2d60;
        case 0x3a2d64u: goto label_3a2d64;
        case 0x3a2d68u: goto label_3a2d68;
        case 0x3a2d6cu: goto label_3a2d6c;
        case 0x3a2d70u: goto label_3a2d70;
        case 0x3a2d74u: goto label_3a2d74;
        case 0x3a2d78u: goto label_3a2d78;
        case 0x3a2d7cu: goto label_3a2d7c;
        case 0x3a2d80u: goto label_3a2d80;
        case 0x3a2d84u: goto label_3a2d84;
        case 0x3a2d88u: goto label_3a2d88;
        case 0x3a2d8cu: goto label_3a2d8c;
        case 0x3a2d90u: goto label_3a2d90;
        case 0x3a2d94u: goto label_3a2d94;
        case 0x3a2d98u: goto label_3a2d98;
        case 0x3a2d9cu: goto label_3a2d9c;
        case 0x3a2da0u: goto label_3a2da0;
        case 0x3a2da4u: goto label_3a2da4;
        case 0x3a2da8u: goto label_3a2da8;
        case 0x3a2dacu: goto label_3a2dac;
        case 0x3a2db0u: goto label_3a2db0;
        case 0x3a2db4u: goto label_3a2db4;
        case 0x3a2db8u: goto label_3a2db8;
        case 0x3a2dbcu: goto label_3a2dbc;
        case 0x3a2dc0u: goto label_3a2dc0;
        case 0x3a2dc4u: goto label_3a2dc4;
        case 0x3a2dc8u: goto label_3a2dc8;
        case 0x3a2dccu: goto label_3a2dcc;
        case 0x3a2dd0u: goto label_3a2dd0;
        case 0x3a2dd4u: goto label_3a2dd4;
        case 0x3a2dd8u: goto label_3a2dd8;
        case 0x3a2ddcu: goto label_3a2ddc;
        case 0x3a2de0u: goto label_3a2de0;
        case 0x3a2de4u: goto label_3a2de4;
        case 0x3a2de8u: goto label_3a2de8;
        case 0x3a2decu: goto label_3a2dec;
        case 0x3a2df0u: goto label_3a2df0;
        case 0x3a2df4u: goto label_3a2df4;
        case 0x3a2df8u: goto label_3a2df8;
        case 0x3a2dfcu: goto label_3a2dfc;
        case 0x3a2e00u: goto label_3a2e00;
        case 0x3a2e04u: goto label_3a2e04;
        case 0x3a2e08u: goto label_3a2e08;
        case 0x3a2e0cu: goto label_3a2e0c;
        case 0x3a2e10u: goto label_3a2e10;
        case 0x3a2e14u: goto label_3a2e14;
        case 0x3a2e18u: goto label_3a2e18;
        case 0x3a2e1cu: goto label_3a2e1c;
        case 0x3a2e20u: goto label_3a2e20;
        case 0x3a2e24u: goto label_3a2e24;
        case 0x3a2e28u: goto label_3a2e28;
        case 0x3a2e2cu: goto label_3a2e2c;
        case 0x3a2e30u: goto label_3a2e30;
        case 0x3a2e34u: goto label_3a2e34;
        case 0x3a2e38u: goto label_3a2e38;
        case 0x3a2e3cu: goto label_3a2e3c;
        case 0x3a2e40u: goto label_3a2e40;
        case 0x3a2e44u: goto label_3a2e44;
        case 0x3a2e48u: goto label_3a2e48;
        case 0x3a2e4cu: goto label_3a2e4c;
        case 0x3a2e50u: goto label_3a2e50;
        case 0x3a2e54u: goto label_3a2e54;
        case 0x3a2e58u: goto label_3a2e58;
        case 0x3a2e5cu: goto label_3a2e5c;
        case 0x3a2e60u: goto label_3a2e60;
        case 0x3a2e64u: goto label_3a2e64;
        case 0x3a2e68u: goto label_3a2e68;
        case 0x3a2e6cu: goto label_3a2e6c;
        case 0x3a2e70u: goto label_3a2e70;
        case 0x3a2e74u: goto label_3a2e74;
        case 0x3a2e78u: goto label_3a2e78;
        case 0x3a2e7cu: goto label_3a2e7c;
        case 0x3a2e80u: goto label_3a2e80;
        case 0x3a2e84u: goto label_3a2e84;
        case 0x3a2e88u: goto label_3a2e88;
        case 0x3a2e8cu: goto label_3a2e8c;
        case 0x3a2e90u: goto label_3a2e90;
        case 0x3a2e94u: goto label_3a2e94;
        case 0x3a2e98u: goto label_3a2e98;
        case 0x3a2e9cu: goto label_3a2e9c;
        case 0x3a2ea0u: goto label_3a2ea0;
        case 0x3a2ea4u: goto label_3a2ea4;
        case 0x3a2ea8u: goto label_3a2ea8;
        case 0x3a2eacu: goto label_3a2eac;
        case 0x3a2eb0u: goto label_3a2eb0;
        case 0x3a2eb4u: goto label_3a2eb4;
        case 0x3a2eb8u: goto label_3a2eb8;
        case 0x3a2ebcu: goto label_3a2ebc;
        case 0x3a2ec0u: goto label_3a2ec0;
        case 0x3a2ec4u: goto label_3a2ec4;
        case 0x3a2ec8u: goto label_3a2ec8;
        case 0x3a2eccu: goto label_3a2ecc;
        case 0x3a2ed0u: goto label_3a2ed0;
        case 0x3a2ed4u: goto label_3a2ed4;
        case 0x3a2ed8u: goto label_3a2ed8;
        case 0x3a2edcu: goto label_3a2edc;
        case 0x3a2ee0u: goto label_3a2ee0;
        case 0x3a2ee4u: goto label_3a2ee4;
        case 0x3a2ee8u: goto label_3a2ee8;
        case 0x3a2eecu: goto label_3a2eec;
        case 0x3a2ef0u: goto label_3a2ef0;
        case 0x3a2ef4u: goto label_3a2ef4;
        case 0x3a2ef8u: goto label_3a2ef8;
        case 0x3a2efcu: goto label_3a2efc;
        case 0x3a2f00u: goto label_3a2f00;
        case 0x3a2f04u: goto label_3a2f04;
        case 0x3a2f08u: goto label_3a2f08;
        case 0x3a2f0cu: goto label_3a2f0c;
        case 0x3a2f10u: goto label_3a2f10;
        case 0x3a2f14u: goto label_3a2f14;
        case 0x3a2f18u: goto label_3a2f18;
        case 0x3a2f1cu: goto label_3a2f1c;
        case 0x3a2f20u: goto label_3a2f20;
        case 0x3a2f24u: goto label_3a2f24;
        case 0x3a2f28u: goto label_3a2f28;
        case 0x3a2f2cu: goto label_3a2f2c;
        case 0x3a2f30u: goto label_3a2f30;
        case 0x3a2f34u: goto label_3a2f34;
        case 0x3a2f38u: goto label_3a2f38;
        case 0x3a2f3cu: goto label_3a2f3c;
        case 0x3a2f40u: goto label_3a2f40;
        case 0x3a2f44u: goto label_3a2f44;
        case 0x3a2f48u: goto label_3a2f48;
        case 0x3a2f4cu: goto label_3a2f4c;
        case 0x3a2f50u: goto label_3a2f50;
        case 0x3a2f54u: goto label_3a2f54;
        case 0x3a2f58u: goto label_3a2f58;
        case 0x3a2f5cu: goto label_3a2f5c;
        case 0x3a2f60u: goto label_3a2f60;
        case 0x3a2f64u: goto label_3a2f64;
        case 0x3a2f68u: goto label_3a2f68;
        case 0x3a2f6cu: goto label_3a2f6c;
        case 0x3a2f70u: goto label_3a2f70;
        case 0x3a2f74u: goto label_3a2f74;
        case 0x3a2f78u: goto label_3a2f78;
        case 0x3a2f7cu: goto label_3a2f7c;
        case 0x3a2f80u: goto label_3a2f80;
        case 0x3a2f84u: goto label_3a2f84;
        case 0x3a2f88u: goto label_3a2f88;
        case 0x3a2f8cu: goto label_3a2f8c;
        case 0x3a2f90u: goto label_3a2f90;
        case 0x3a2f94u: goto label_3a2f94;
        case 0x3a2f98u: goto label_3a2f98;
        case 0x3a2f9cu: goto label_3a2f9c;
        case 0x3a2fa0u: goto label_3a2fa0;
        case 0x3a2fa4u: goto label_3a2fa4;
        case 0x3a2fa8u: goto label_3a2fa8;
        case 0x3a2facu: goto label_3a2fac;
        case 0x3a2fb0u: goto label_3a2fb0;
        case 0x3a2fb4u: goto label_3a2fb4;
        case 0x3a2fb8u: goto label_3a2fb8;
        case 0x3a2fbcu: goto label_3a2fbc;
        case 0x3a2fc0u: goto label_3a2fc0;
        case 0x3a2fc4u: goto label_3a2fc4;
        case 0x3a2fc8u: goto label_3a2fc8;
        case 0x3a2fccu: goto label_3a2fcc;
        case 0x3a2fd0u: goto label_3a2fd0;
        case 0x3a2fd4u: goto label_3a2fd4;
        case 0x3a2fd8u: goto label_3a2fd8;
        case 0x3a2fdcu: goto label_3a2fdc;
        case 0x3a2fe0u: goto label_3a2fe0;
        case 0x3a2fe4u: goto label_3a2fe4;
        case 0x3a2fe8u: goto label_3a2fe8;
        case 0x3a2fecu: goto label_3a2fec;
        case 0x3a2ff0u: goto label_3a2ff0;
        case 0x3a2ff4u: goto label_3a2ff4;
        case 0x3a2ff8u: goto label_3a2ff8;
        case 0x3a2ffcu: goto label_3a2ffc;
        case 0x3a3000u: goto label_3a3000;
        case 0x3a3004u: goto label_3a3004;
        case 0x3a3008u: goto label_3a3008;
        case 0x3a300cu: goto label_3a300c;
        case 0x3a3010u: goto label_3a3010;
        case 0x3a3014u: goto label_3a3014;
        case 0x3a3018u: goto label_3a3018;
        case 0x3a301cu: goto label_3a301c;
        case 0x3a3020u: goto label_3a3020;
        case 0x3a3024u: goto label_3a3024;
        case 0x3a3028u: goto label_3a3028;
        case 0x3a302cu: goto label_3a302c;
        case 0x3a3030u: goto label_3a3030;
        case 0x3a3034u: goto label_3a3034;
        case 0x3a3038u: goto label_3a3038;
        case 0x3a303cu: goto label_3a303c;
        default: break;
    }

    ctx->pc = 0x3a2c80u;

label_3a2c80:
    // 0x3a2c80: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3a2c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3a2c84:
    // 0x3a2c84: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3a2c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a2c88:
    // 0x3a2c88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3a2c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3a2c8c:
    // 0x3a2c8c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3a2c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3a2c90:
    // 0x3a2c90: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3a2c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3a2c94:
    // 0x3a2c94: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3a2c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3a2c98:
    // 0x3a2c98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a2c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3a2c9c:
    // 0x3a2c9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a2c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a2ca0:
    // 0x3a2ca0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3a2ca0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a2ca4:
    // 0x3a2ca4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a2ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a2ca8:
    // 0x3a2ca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a2ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a2cac:
    // 0x3a2cac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a2cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a2cb0:
    // 0x3a2cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a2cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a2cb4:
    // 0x3a2cb4: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x3a2cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3a2cb8:
    // 0x3a2cb8: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x3a2cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_3a2cbc:
    // 0x3a2cbc: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3a2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3a2cc0:
    // 0x3a2cc0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3a2cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3a2cc4:
    // 0x3a2cc4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3a2cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3a2cc8:
    // 0x3a2cc8: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x3a2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_3a2ccc:
    // 0x3a2ccc: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x3a2cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3a2cd0:
    // 0x3a2cd0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a2cd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a2cd4:
    // 0x3a2cd4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a2cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3a2cd8:
    // 0x3a2cd8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3a2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3a2cdc:
    // 0x3a2cdc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3a2cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3a2ce0:
    // 0x3a2ce0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a2ce4:
    // 0x3a2ce4: 0xc0fe54c  jal         func_3F9530
label_3a2ce8:
    if (ctx->pc == 0x3A2CE8u) {
        ctx->pc = 0x3A2CE8u;
            // 0x3a2ce8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3A2CECu;
        goto label_3a2cec;
    }
    ctx->pc = 0x3A2CE4u;
    SET_GPR_U32(ctx, 31, 0x3A2CECu);
    ctx->pc = 0x3A2CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2CE4u;
            // 0x3a2ce8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2CECu; }
        if (ctx->pc != 0x3A2CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2CECu; }
        if (ctx->pc != 0x3A2CECu) { return; }
    }
    ctx->pc = 0x3A2CECu;
label_3a2cec:
    // 0x3a2cec: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3a2cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3a2cf0:
    // 0x3a2cf0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3a2cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_3a2cf4:
    // 0x3a2cf4: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x3a2cf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a2cf8:
    // 0x3a2cf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a2cf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2cfc:
    // 0x3a2cfc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3a2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3a2d00:
    // 0x3a2d00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a2d04:
    // 0x3a2d04: 0x101b00  sll         $v1, $s0, 12
    ctx->pc = 0x3a2d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
label_3a2d08:
    // 0x3a2d08: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3a2d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3a2d0c:
    // 0x3a2d0c: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x3a2d0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a2d10:
    // 0x3a2d10: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3a2d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3a2d14:
    // 0x3a2d14: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x3a2d14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a2d18:
    // 0x3a2d18: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3a2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a2d1c:
    // 0x3a2d1c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x3a2d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3a2d20:
    // 0x3a2d20: 0xc0fe54c  jal         func_3F9530
label_3a2d24:
    if (ctx->pc == 0x3A2D24u) {
        ctx->pc = 0x3A2D24u;
            // 0x3a2d24: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3A2D28u;
        goto label_3a2d28;
    }
    ctx->pc = 0x3A2D20u;
    SET_GPR_U32(ctx, 31, 0x3A2D28u);
    ctx->pc = 0x3A2D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2D20u;
            // 0x3a2d24: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2D28u; }
        if (ctx->pc != 0x3A2D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2D28u; }
        if (ctx->pc != 0x3A2D28u) { return; }
    }
    ctx->pc = 0x3A2D28u;
label_3a2d28:
    // 0x3a2d28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a2d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2d2c:
    // 0x3a2d2c: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
label_3a2d30:
    if (ctx->pc == 0x3A2D30u) {
        ctx->pc = 0x3A2D34u;
        goto label_3a2d34;
    }
    ctx->pc = 0x3A2D2Cu;
    {
        const bool branch_taken_0x3a2d2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2d2c) {
            ctx->pc = 0x3A2D90u;
            goto label_3a2d90;
        }
    }
    ctx->pc = 0x3A2D34u;
label_3a2d34:
    // 0x3a2d34: 0x8eb10034  lw          $s1, 0x34($s5)
    ctx->pc = 0x3a2d34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3a2d38:
    // 0x3a2d38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a2d3c:
    // 0x3a2d3c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x3a2d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a2d40:
    // 0x3a2d40: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x3a2d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
label_3a2d44:
    // 0x3a2d44: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3a2d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a2d48:
    // 0x3a2d48: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a2d48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3a2d4c:
    // 0x3a2d4c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3a2d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_3a2d50:
    // 0x3a2d50: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x3a2d50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
label_3a2d54:
    // 0x3a2d54: 0xae46001c  sw          $a2, 0x1C($s2)
    ctx->pc = 0x3a2d54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 6));
label_3a2d58:
    // 0x3a2d58: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3a2d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_3a2d5c:
    // 0x3a2d5c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x3a2d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_3a2d60:
    // 0x3a2d60: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x3a2d60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_3a2d64:
    // 0x3a2d64: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3a2d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a2d68:
    // 0x3a2d68: 0xc0fe54c  jal         func_3F9530
label_3a2d6c:
    if (ctx->pc == 0x3A2D6Cu) {
        ctx->pc = 0x3A2D6Cu;
            // 0x3a2d6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A2D70u;
        goto label_3a2d70;
    }
    ctx->pc = 0x3A2D68u;
    SET_GPR_U32(ctx, 31, 0x3A2D70u);
    ctx->pc = 0x3A2D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2D68u;
            // 0x3a2d6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2D70u; }
        if (ctx->pc != 0x3A2D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2D70u; }
        if (ctx->pc != 0x3A2D70u) { return; }
    }
    ctx->pc = 0x3A2D70u;
label_3a2d70:
    // 0x3a2d70: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3a2d70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_3a2d74:
    // 0x3a2d74: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3a2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3a2d78:
    // 0x3a2d78: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3a2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_3a2d7c:
    // 0x3a2d7c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x3a2d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3a2d80:
    // 0x3a2d80: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3a2d80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3a2d84:
    // 0x3a2d84: 0x2463fd30  addiu       $v1, $v1, -0x2D0
    ctx->pc = 0x3a2d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966576));
label_3a2d88:
    // 0x3a2d88: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x3a2d88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_3a2d8c:
    // 0x3a2d8c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3a2d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3a2d90:
    // 0x3a2d90: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a2d90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a2d94:
    // 0x3a2d94: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a2d94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3a2d98:
    // 0x3a2d98: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x3a2d98u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
label_3a2d9c:
    // 0x3a2d9c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3a2d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a2da0:
    // 0x3a2da0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_3a2da4:
    if (ctx->pc == 0x3A2DA4u) {
        ctx->pc = 0x3A2DA4u;
            // 0x3a2da4: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x3A2DA8u;
        goto label_3a2da8;
    }
    ctx->pc = 0x3A2DA0u;
    {
        const bool branch_taken_0x3a2da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2DA0u;
            // 0x3a2da4: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2da0) {
            ctx->pc = 0x3A2D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a2d18;
        }
    }
    ctx->pc = 0x3A2DA8u;
label_3a2da8:
    // 0x3a2da8: 0x8fb600d0  lw          $s6, 0xD0($sp)
    ctx->pc = 0x3a2da8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a2dac:
    // 0x3a2dac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a2dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2db0:
    // 0x3a2db0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a2db0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2db4:
    // 0x3a2db4: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x3a2db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a2db8:
    // 0x3a2db8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x3a2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3a2dbc:
    // 0x3a2dbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a2dbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2dc0:
    // 0x3a2dc0: 0x111023  negu        $v0, $s1
    ctx->pc = 0x3a2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_3a2dc4:
    // 0x3a2dc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a2dc8:
    // 0x3a2dc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3a2dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a2dcc:
    // 0x3a2dcc: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x3a2dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_3a2dd0:
    // 0x3a2dd0: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x3a2dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a2dd4:
    // 0x3a2dd4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x3a2dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3a2dd8:
    // 0x3a2dd8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x3a2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3a2ddc:
    // 0x3a2ddc: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3a2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3a2de0:
    // 0x3a2de0: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x3a2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_3a2de4:
    // 0x3a2de4: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_3a2de8:
    if (ctx->pc == 0x3A2DE8u) {
        ctx->pc = 0x3A2DE8u;
            // 0x3a2de8: 0xae950010  sw          $s5, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
        ctx->pc = 0x3A2DECu;
        goto label_3a2dec;
    }
    ctx->pc = 0x3A2DE4u;
    {
        const bool branch_taken_0x3a2de4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2DE4u;
            // 0x3a2de8: 0xae950010  sw          $s5, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2de4) {
            ctx->pc = 0x3A2E10u;
            goto label_3a2e10;
        }
    }
    ctx->pc = 0x3A2DECu;
label_3a2dec:
    // 0x3a2dec: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x3a2decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_3a2df0:
    // 0x3a2df0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a2df4:
    if (ctx->pc == 0x3A2DF4u) {
        ctx->pc = 0x3A2DF8u;
        goto label_3a2df8;
    }
    ctx->pc = 0x3A2DF0u;
    {
        const bool branch_taken_0x3a2df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2df0) {
            ctx->pc = 0x3A2E00u;
            goto label_3a2e00;
        }
    }
    ctx->pc = 0x3A2DF8u;
label_3a2df8:
    // 0x3a2df8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a2dfc:
    if (ctx->pc == 0x3A2DFCu) {
        ctx->pc = 0x3A2DFCu;
            // 0x3a2dfc: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x3A2E00u;
        goto label_3a2e00;
    }
    ctx->pc = 0x3A2DF8u;
    {
        const bool branch_taken_0x3a2df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2DF8u;
            // 0x3a2dfc: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2df8) {
            ctx->pc = 0x3A2E18u;
            goto label_3a2e18;
        }
    }
    ctx->pc = 0x3A2E00u;
label_3a2e00:
    // 0x3a2e00: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x3a2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_3a2e04:
    // 0x3a2e04: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x3a2e04u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_3a2e08:
    // 0x3a2e08: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a2e0c:
    if (ctx->pc == 0x3A2E0Cu) {
        ctx->pc = 0x3A2E0Cu;
            // 0x3a2e0c: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x3A2E10u;
        goto label_3a2e10;
    }
    ctx->pc = 0x3A2E08u;
    {
        const bool branch_taken_0x3a2e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2E08u;
            // 0x3a2e0c: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e08) {
            ctx->pc = 0x3A2E18u;
            goto label_3a2e18;
        }
    }
    ctx->pc = 0x3A2E10u;
label_3a2e10:
    // 0x3a2e10: 0x8e42fffc  lw          $v0, -0x4($s2)
    ctx->pc = 0x3a2e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_3a2e14:
    // 0x3a2e14: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3a2e14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_3a2e18:
    // 0x3a2e18: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3a2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3a2e1c:
    // 0x3a2e1c: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
label_3a2e20:
    if (ctx->pc == 0x3A2E20u) {
        ctx->pc = 0x3A2E24u;
        goto label_3a2e24;
    }
    ctx->pc = 0x3A2E1Cu;
    {
        const bool branch_taken_0x3a2e1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a2e1c) {
            ctx->pc = 0x3A2E48u;
            goto label_3a2e48;
        }
    }
    ctx->pc = 0x3A2E24u;
label_3a2e24:
    // 0x3a2e24: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x3a2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_3a2e28:
    // 0x3a2e28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a2e2c:
    if (ctx->pc == 0x3A2E2Cu) {
        ctx->pc = 0x3A2E30u;
        goto label_3a2e30;
    }
    ctx->pc = 0x3A2E28u;
    {
        const bool branch_taken_0x3a2e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2e28) {
            ctx->pc = 0x3A2E38u;
            goto label_3a2e38;
        }
    }
    ctx->pc = 0x3A2E30u;
label_3a2e30:
    // 0x3a2e30: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a2e34:
    if (ctx->pc == 0x3A2E34u) {
        ctx->pc = 0x3A2E34u;
            // 0x3a2e34: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x3A2E38u;
        goto label_3a2e38;
    }
    ctx->pc = 0x3A2E30u;
    {
        const bool branch_taken_0x3a2e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2E30u;
            // 0x3a2e34: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e30) {
            ctx->pc = 0x3A2E50u;
            goto label_3a2e50;
        }
    }
    ctx->pc = 0x3A2E38u;
label_3a2e38:
    // 0x3a2e38: 0x8ea20048  lw          $v0, 0x48($s5)
    ctx->pc = 0x3a2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3a2e3c:
    // 0x3a2e3c: 0x36730002  ori         $s3, $s3, 0x2
    ctx->pc = 0x3a2e3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
label_3a2e40:
    // 0x3a2e40: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a2e44:
    if (ctx->pc == 0x3A2E44u) {
        ctx->pc = 0x3A2E44u;
            // 0x3a2e44: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x3A2E48u;
        goto label_3a2e48;
    }
    ctx->pc = 0x3A2E40u;
    {
        const bool branch_taken_0x3a2e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2E40u;
            // 0x3a2e44: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e40) {
            ctx->pc = 0x3A2E50u;
            goto label_3a2e50;
        }
    }
    ctx->pc = 0x3A2E48u;
label_3a2e48:
    // 0x3a2e48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a2e4c:
    // 0x3a2e4c: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x3a2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_3a2e50:
    // 0x3a2e50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a2e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a2e54:
    // 0x3a2e54: 0x12620014  beq         $s3, $v0, . + 4 + (0x14 << 2)
label_3a2e58:
    if (ctx->pc == 0x3A2E58u) {
        ctx->pc = 0x3A2E5Cu;
        goto label_3a2e5c;
    }
    ctx->pc = 0x3A2E54u;
    {
        const bool branch_taken_0x3a2e54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a2e54) {
            ctx->pc = 0x3A2EA8u;
            goto label_3a2ea8;
        }
    }
    ctx->pc = 0x3A2E5Cu;
label_3a2e5c:
    // 0x3a2e5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a2e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a2e60:
    // 0x3a2e60: 0x1263000d  beq         $s3, $v1, . + 4 + (0xD << 2)
label_3a2e64:
    if (ctx->pc == 0x3A2E64u) {
        ctx->pc = 0x3A2E68u;
        goto label_3a2e68;
    }
    ctx->pc = 0x3A2E60u;
    {
        const bool branch_taken_0x3a2e60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a2e60) {
            ctx->pc = 0x3A2E98u;
            goto label_3a2e98;
        }
    }
    ctx->pc = 0x3A2E68u;
label_3a2e68:
    // 0x3a2e68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2e6c:
    // 0x3a2e6c: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_3a2e70:
    if (ctx->pc == 0x3A2E70u) {
        ctx->pc = 0x3A2E74u;
        goto label_3a2e74;
    }
    ctx->pc = 0x3A2E6Cu;
    {
        const bool branch_taken_0x3a2e6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a2e6c) {
            ctx->pc = 0x3A2E90u;
            goto label_3a2e90;
        }
    }
    ctx->pc = 0x3A2E74u;
label_3a2e74:
    // 0x3a2e74: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_3a2e78:
    if (ctx->pc == 0x3A2E78u) {
        ctx->pc = 0x3A2E7Cu;
        goto label_3a2e7c;
    }
    ctx->pc = 0x3A2E74u;
    {
        const bool branch_taken_0x3a2e74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2e74) {
            ctx->pc = 0x3A2E88u;
            goto label_3a2e88;
        }
    }
    ctx->pc = 0x3A2E7Cu;
label_3a2e7c:
    // 0x3a2e7c: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a2e80:
    if (ctx->pc == 0x3A2E80u) {
        ctx->pc = 0x3A2E84u;
        goto label_3a2e84;
    }
    ctx->pc = 0x3A2E7Cu;
    {
        const bool branch_taken_0x3a2e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2e7c) {
            ctx->pc = 0x3A2EB0u;
            goto label_3a2eb0;
        }
    }
    ctx->pc = 0x3A2E84u;
label_3a2e84:
    // 0x3a2e84: 0x0  nop
    ctx->pc = 0x3a2e84u;
    // NOP
label_3a2e88:
    // 0x3a2e88: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a2e8c:
    if (ctx->pc == 0x3A2E8Cu) {
        ctx->pc = 0x3A2E8Cu;
            // 0x3a2e8c: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x3A2E90u;
        goto label_3a2e90;
    }
    ctx->pc = 0x3A2E88u;
    {
        const bool branch_taken_0x3a2e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2E88u;
            // 0x3a2e8c: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e88) {
            ctx->pc = 0x3A2EB0u;
            goto label_3a2eb0;
        }
    }
    ctx->pc = 0x3A2E90u;
label_3a2e90:
    // 0x3a2e90: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a2e94:
    if (ctx->pc == 0x3A2E94u) {
        ctx->pc = 0x3A2E94u;
            // 0x3a2e94: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3A2E98u;
        goto label_3a2e98;
    }
    ctx->pc = 0x3A2E90u;
    {
        const bool branch_taken_0x3a2e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2E90u;
            // 0x3a2e94: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e90) {
            ctx->pc = 0x3A2EB0u;
            goto label_3a2eb0;
        }
    }
    ctx->pc = 0x3A2E98u;
label_3a2e98:
    // 0x3a2e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2e9c:
    // 0x3a2e9c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a2ea0:
    if (ctx->pc == 0x3A2EA0u) {
        ctx->pc = 0x3A2EA0u;
            // 0x3a2ea0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3A2EA4u;
        goto label_3a2ea4;
    }
    ctx->pc = 0x3A2E9Cu;
    {
        const bool branch_taken_0x3a2e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2E9Cu;
            // 0x3a2ea0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e9c) {
            ctx->pc = 0x3A2EB0u;
            goto label_3a2eb0;
        }
    }
    ctx->pc = 0x3A2EA4u;
label_3a2ea4:
    // 0x3a2ea4: 0x0  nop
    ctx->pc = 0x3a2ea4u;
    // NOP
label_3a2ea8:
    // 0x3a2ea8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3a2ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3a2eac:
    // 0x3a2eac: 0x0  nop
    ctx->pc = 0x3a2eacu;
    // NOP
label_3a2eb0:
    // 0x3a2eb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a2eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a2eb4:
    // 0x3a2eb4: 0x8c4267e8  lw          $v0, 0x67E8($v0)
    ctx->pc = 0x3a2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26600)));
label_3a2eb8:
    // 0x3a2eb8: 0x40f809  jalr        $v0
label_3a2ebc:
    if (ctx->pc == 0x3A2EBCu) {
        ctx->pc = 0x3A2EC0u;
        goto label_3a2ec0;
    }
    ctx->pc = 0x3A2EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2EC0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2EC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2EC0u; }
            if (ctx->pc != 0x3A2EC0u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2EC0u;
label_3a2ec0:
    // 0x3a2ec0: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x3a2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_3a2ec4:
    // 0x3a2ec4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3a2ec8:
    // 0x3a2ec8: 0x8c6664a8  lw          $a2, 0x64A8($v1)
    ctx->pc = 0x3a2ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25768)));
label_3a2ecc:
    // 0x3a2ecc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3a2eccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2ed0:
    // 0x3a2ed0: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x3a2ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_3a2ed4:
    // 0x3a2ed4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3a2ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_3a2ed8:
    // 0x3a2ed8: 0x24632b90  addiu       $v1, $v1, 0x2B90
    ctx->pc = 0x3a2ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11152));
label_3a2edc:
    // 0x3a2edc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x3a2edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_3a2ee0:
    // 0x3a2ee0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x3a2ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3a2ee4:
    // 0x3a2ee4: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x3a2ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_3a2ee8:
    // 0x3a2ee8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x3a2ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_3a2eec:
    // 0x3a2eec: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x3a2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_3a2ef0:
    // 0x3a2ef0: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x3a2ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_3a2ef4:
    // 0x3a2ef4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3a2ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3a2ef8:
    // 0x3a2ef8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3a2ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a2efc:
    // 0x3a2efc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3a2efcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3a2f00:
    // 0x3a2f00: 0x320f809  jalr        $t9
label_3a2f04:
    if (ctx->pc == 0x3A2F04u) {
        ctx->pc = 0x3A2F04u;
            // 0x3a2f04: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F08u;
        goto label_3a2f08;
    }
    ctx->pc = 0x3A2F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2F08u);
        ctx->pc = 0x3A2F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2F00u;
            // 0x3a2f04: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2F08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2F08u; }
            if (ctx->pc != 0x3A2F08u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2F08u;
label_3a2f08:
    // 0x3a2f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2f0c:
    // 0x3a2f0c: 0xa2e2001c  sb          $v0, 0x1C($s7)
    ctx->pc = 0x3a2f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 28), (uint8_t)GPR_U32(ctx, 2));
label_3a2f10:
    // 0x3a2f10: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x3a2f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3a2f14:
    // 0x3a2f14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2f18:
    // 0x3a2f18: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a2f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a2f1c:
    // 0x3a2f1c: 0x320f809  jalr        $t9
label_3a2f20:
    if (ctx->pc == 0x3A2F20u) {
        ctx->pc = 0x3A2F24u;
        goto label_3a2f24;
    }
    ctx->pc = 0x3A2F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2F24u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2F24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2F24u; }
            if (ctx->pc != 0x3A2F24u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2F24u;
label_3a2f24:
    // 0x3a2f24: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3a2f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3a2f28:
    // 0x3a2f28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a2f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a2f2c:
    // 0x3a2f2c: 0x26940014  addiu       $s4, $s4, 0x14
    ctx->pc = 0x3a2f2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_3a2f30:
    // 0x3a2f30: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3a2f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3a2f34:
    // 0x3a2f34: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x3a2f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
label_3a2f38:
    // 0x3a2f38: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3a2f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3a2f3c:
    // 0x3a2f3c: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x3a2f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3a2f40:
    // 0x3a2f40: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
label_3a2f44:
    if (ctx->pc == 0x3A2F44u) {
        ctx->pc = 0x3A2F44u;
            // 0x3a2f44: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x3A2F48u;
        goto label_3a2f48;
    }
    ctx->pc = 0x3A2F40u;
    {
        const bool branch_taken_0x3a2f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2F40u;
            // 0x3a2f44: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f40) {
            ctx->pc = 0x3A2DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a2db8;
        }
    }
    ctx->pc = 0x3A2F48u;
label_3a2f48:
    // 0x3a2f48: 0x8fb300d0  lw          $s3, 0xD0($sp)
    ctx->pc = 0x3a2f48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a2f4c:
    // 0x3a2f4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a2f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2f50:
    // 0x3a2f50: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3a2f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2f54:
    // 0x3a2f54: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3a2f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a2f58:
    // 0x3a2f58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2f58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2f5c:
    // 0x3a2f5c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3a2f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3a2f60:
    // 0x3a2f60: 0x320f809  jalr        $t9
label_3a2f64:
    if (ctx->pc == 0x3A2F64u) {
        ctx->pc = 0x3A2F64u;
            // 0x3a2f64: 0x24052800  addiu       $a1, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->pc = 0x3A2F68u;
        goto label_3a2f68;
    }
    ctx->pc = 0x3A2F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2F68u);
        ctx->pc = 0x3A2F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2F60u;
            // 0x3a2f64: 0x24052800  addiu       $a1, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2F68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2F68u; }
            if (ctx->pc != 0x3A2F68u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2F68u;
label_3a2f68:
    // 0x3a2f68: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
label_3a2f6c:
    if (ctx->pc == 0x3A2F6Cu) {
        ctx->pc = 0x3A2F70u;
        goto label_3a2f70;
    }
    ctx->pc = 0x3A2F68u;
    {
        const bool branch_taken_0x3a2f68 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x3a2f68) {
            ctx->pc = 0x3A2F78u;
            goto label_3a2f78;
        }
    }
    ctx->pc = 0x3A2F70u;
label_3a2f70:
    // 0x3a2f70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a2f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2f74:
    // 0x3a2f74: 0x0  nop
    ctx->pc = 0x3a2f74u;
    // NOP
label_3a2f78:
    // 0x3a2f78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a2f78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a2f7c:
    // 0x3a2f7c: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3a2f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3a2f80:
    // 0x3a2f80: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3a2f84:
    if (ctx->pc == 0x3A2F84u) {
        ctx->pc = 0x3A2F84u;
            // 0x3a2f84: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3A2F88u;
        goto label_3a2f88;
    }
    ctx->pc = 0x3A2F80u;
    {
        const bool branch_taken_0x3a2f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2F80u;
            // 0x3a2f84: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f80) {
            ctx->pc = 0x3A2F54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a2f54;
        }
    }
    ctx->pc = 0x3A2F88u;
label_3a2f88:
    // 0x3a2f88: 0x8fb300d0  lw          $s3, 0xD0($sp)
    ctx->pc = 0x3a2f88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a2f8c:
    // 0x3a2f8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a2f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2f90:
    // 0x3a2f90: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3a2f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a2f94:
    // 0x3a2f94: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3a2f98:
    if (ctx->pc == 0x3A2F98u) {
        ctx->pc = 0x3A2F9Cu;
        goto label_3a2f9c;
    }
    ctx->pc = 0x3A2F94u;
    {
        const bool branch_taken_0x3a2f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2f94) {
            ctx->pc = 0x3A2FB0u;
            goto label_3a2fb0;
        }
    }
    ctx->pc = 0x3A2F9Cu;
label_3a2f9c:
    // 0x3a2f9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2fa0:
    // 0x3a2fa0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a2fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a2fa4:
    // 0x3a2fa4: 0x320f809  jalr        $t9
label_3a2fa8:
    if (ctx->pc == 0x3A2FA8u) {
        ctx->pc = 0x3A2FA8u;
            // 0x3a2fa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A2FACu;
        goto label_3a2fac;
    }
    ctx->pc = 0x3A2FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2FACu);
        ctx->pc = 0x3A2FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2FA4u;
            // 0x3a2fa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2FACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2FACu; }
            if (ctx->pc != 0x3A2FACu) { return; }
        }
        }
    }
    ctx->pc = 0x3A2FACu;
label_3a2fac:
    // 0x3a2fac: 0x0  nop
    ctx->pc = 0x3a2facu;
    // NOP
label_3a2fb0:
    // 0x3a2fb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a2fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a2fb4:
    // 0x3a2fb4: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3a2fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3a2fb8:
    // 0x3a2fb8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3a2fbc:
    if (ctx->pc == 0x3A2FBCu) {
        ctx->pc = 0x3A2FBCu;
            // 0x3a2fbc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3A2FC0u;
        goto label_3a2fc0;
    }
    ctx->pc = 0x3A2FB8u;
    {
        const bool branch_taken_0x3a2fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2FB8u;
            // 0x3a2fbc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2fb8) {
            ctx->pc = 0x3A2F90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a2f90;
        }
    }
    ctx->pc = 0x3A2FC0u;
label_3a2fc0:
    // 0x3a2fc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a2fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2fc4:
    // 0x3a2fc4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3a2fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3a2fc8:
    // 0x3a2fc8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3a2fcc:
    if (ctx->pc == 0x3A2FCCu) {
        ctx->pc = 0x3A2FD0u;
        goto label_3a2fd0;
    }
    ctx->pc = 0x3A2FC8u;
    {
        const bool branch_taken_0x3a2fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2fc8) {
            ctx->pc = 0x3A2FE0u;
            goto label_3a2fe0;
        }
    }
    ctx->pc = 0x3A2FD0u;
label_3a2fd0:
    // 0x3a2fd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2fd4:
    // 0x3a2fd4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a2fd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a2fd8:
    // 0x3a2fd8: 0x320f809  jalr        $t9
label_3a2fdc:
    if (ctx->pc == 0x3A2FDCu) {
        ctx->pc = 0x3A2FDCu;
            // 0x3a2fdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A2FE0u;
        goto label_3a2fe0;
    }
    ctx->pc = 0x3A2FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2FE0u);
        ctx->pc = 0x3A2FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2FD8u;
            // 0x3a2fdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2FE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2FE0u; }
            if (ctx->pc != 0x3A2FE0u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2FE0u;
label_3a2fe0:
    // 0x3a2fe0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a2fe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a2fe4:
    // 0x3a2fe4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a2fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3a2fe8:
    // 0x3a2fe8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3a2fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a2fec:
    // 0x3a2fec: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3a2ff0:
    if (ctx->pc == 0x3A2FF0u) {
        ctx->pc = 0x3A2FF0u;
            // 0x3a2ff0: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x3A2FF4u;
        goto label_3a2ff4;
    }
    ctx->pc = 0x3A2FECu;
    {
        const bool branch_taken_0x3a2fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2FECu;
            // 0x3a2ff0: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2fec) {
            ctx->pc = 0x3A2FC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a2fc4;
        }
    }
    ctx->pc = 0x3A2FF4u;
label_3a2ff4:
    // 0x3a2ff4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3a2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a2ff8:
    // 0x3a2ff8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a2ffc:
    if (ctx->pc == 0x3A2FFCu) {
        ctx->pc = 0x3A2FFCu;
            // 0x3a2ffc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A3000u;
        goto label_3a3000;
    }
    ctx->pc = 0x3A2FF8u;
    {
        const bool branch_taken_0x3a2ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2ff8) {
            ctx->pc = 0x3A2FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2FF8u;
            // 0x3a2ffc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A3010u;
            goto label_3a3010;
        }
    }
    ctx->pc = 0x3A3000u;
label_3a3000:
    // 0x3a3000: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3a3000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a3004:
    // 0x3a3004: 0xc0fe48c  jal         func_3F9230
label_3a3008:
    if (ctx->pc == 0x3A3008u) {
        ctx->pc = 0x3A3008u;
            // 0x3a3008: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A300Cu;
        goto label_3a300c;
    }
    ctx->pc = 0x3A3004u;
    SET_GPR_U32(ctx, 31, 0x3A300Cu);
    ctx->pc = 0x3A3008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3004u;
            // 0x3a3008: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A300Cu; }
        if (ctx->pc != 0x3A300Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A300Cu; }
        if (ctx->pc != 0x3A300Cu) { return; }
    }
    ctx->pc = 0x3A300Cu;
label_3a300c:
    // 0x3a300c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a300cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a3010:
    // 0x3a3010: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3a3010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3a3014:
    // 0x3a3014: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3a3014u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a3018:
    // 0x3a3018: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3a3018u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a301c:
    // 0x3a301c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3a301cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a3020:
    // 0x3a3020: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a3020u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a3024:
    // 0x3a3024: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a3024u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a3028:
    // 0x3a3028: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a3028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a302c:
    // 0x3a302c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a302cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a3030:
    // 0x3a3030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a3030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3034:
    // 0x3a3034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a3034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3038:
    // 0x3a3038: 0x3e00008  jr          $ra
label_3a303c:
    if (ctx->pc == 0x3A303Cu) {
        ctx->pc = 0x3A303Cu;
            // 0x3a303c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3A3040u;
        goto label_fallthrough_0x3a3038;
    }
    ctx->pc = 0x3A3038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A303Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A3038u;
            // 0x3a303c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3a3038:
    ctx->pc = 0x3A3040u;
}
