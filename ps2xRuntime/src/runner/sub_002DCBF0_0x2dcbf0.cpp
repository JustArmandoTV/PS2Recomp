#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DCBF0
// Address: 0x2dcbf0 - 0x2dcc40
void sub_002DCBF0_0x2dcbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCBF0_0x2dcbf0");
#endif

    switch (ctx->pc) {
        case 0x2dcbf0u: goto label_2dcbf0;
        case 0x2dcbf4u: goto label_2dcbf4;
        case 0x2dcbf8u: goto label_2dcbf8;
        case 0x2dcbfcu: goto label_2dcbfc;
        case 0x2dcc00u: goto label_2dcc00;
        case 0x2dcc04u: goto label_2dcc04;
        case 0x2dcc08u: goto label_2dcc08;
        case 0x2dcc0cu: goto label_2dcc0c;
        case 0x2dcc10u: goto label_2dcc10;
        case 0x2dcc14u: goto label_2dcc14;
        case 0x2dcc18u: goto label_2dcc18;
        case 0x2dcc1cu: goto label_2dcc1c;
        case 0x2dcc20u: goto label_2dcc20;
        case 0x2dcc24u: goto label_2dcc24;
        case 0x2dcc28u: goto label_2dcc28;
        case 0x2dcc2cu: goto label_2dcc2c;
        case 0x2dcc30u: goto label_2dcc30;
        case 0x2dcc34u: goto label_2dcc34;
        case 0x2dcc38u: goto label_2dcc38;
        case 0x2dcc3cu: goto label_2dcc3c;
        default: break;
    }

    ctx->pc = 0x2dcbf0u;

label_2dcbf0:
    // 0x2dcbf0: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x2dcbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
label_2dcbf4:
    // 0x2dcbf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dcbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dcbf8:
    // 0x2dcbf8: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x2dcbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_2dcbfc:
    // 0x2dcbfc: 0x3e00008  jr          $ra
label_2dcc00:
    if (ctx->pc == 0x2DCC00u) {
        ctx->pc = 0x2DCC00u;
            // 0x2dcc00: 0xa083014c  sb          $v1, 0x14C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 332), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2DCC04u;
        goto label_2dcc04;
    }
    ctx->pc = 0x2DCBFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCBFCu;
            // 0x2dcc00: 0xa083014c  sb          $v1, 0x14C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 332), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DCC04u;
label_2dcc04:
    // 0x2dcc04: 0x0  nop
    ctx->pc = 0x2dcc04u;
    // NOP
label_2dcc08:
    // 0x2dcc08: 0x0  nop
    ctx->pc = 0x2dcc08u;
    // NOP
label_2dcc0c:
    // 0x2dcc0c: 0x0  nop
    ctx->pc = 0x2dcc0cu;
    // NOP
label_2dcc10:
    // 0x2dcc10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dcc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2dcc14:
    // 0x2dcc14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dcc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2dcc18:
    // 0x2dcc18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dcc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dcc1c:
    // 0x2dcc1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dcc1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dcc20:
    // 0x2dcc20: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2dcc20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2dcc24:
    // 0x2dcc24: 0x320f809  jalr        $t9
label_2dcc28:
    if (ctx->pc == 0x2DCC28u) {
        ctx->pc = 0x2DCC28u;
            // 0x2dcc28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCC2Cu;
        goto label_2dcc2c;
    }
    ctx->pc = 0x2DCC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DCC2Cu);
        ctx->pc = 0x2DCC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC24u;
            // 0x2dcc28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DCC2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC2Cu; }
            if (ctx->pc != 0x2DCC2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DCC2Cu;
label_2dcc2c:
    // 0x2dcc2c: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x2dcc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
label_2dcc30:
    // 0x2dcc30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dcc30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dcc34:
    // 0x2dcc34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dcc34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dcc38:
    // 0x2dcc38: 0x3e00008  jr          $ra
label_2dcc3c:
    if (ctx->pc == 0x2DCC3Cu) {
        ctx->pc = 0x2DCC3Cu;
            // 0x2dcc3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2DCC40u;
        goto label_fallthrough_0x2dcc38;
    }
    ctx->pc = 0x2DCC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC38u;
            // 0x2dcc3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2dcc38:
    ctx->pc = 0x2DCC40u;
}
