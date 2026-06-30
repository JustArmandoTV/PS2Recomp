#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A50A0
// Address: 0x1a50a0 - 0x1a50e0
void sub_001A50A0_0x1a50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A50A0_0x1a50a0");
#endif

    switch (ctx->pc) {
        case 0x1a50b0u: goto label_1a50b0;
        default: break;
    }

    ctx->pc = 0x1a50a0u;

    // 0x1a50a0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1a50a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a50a4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1a50a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a50a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a50a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a50ac: 0x0  nop
    ctx->pc = 0x1a50acu;
    // NOP
label_1a50b0:
    // 0x1a50b0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1a50b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a50b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a50b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a50b8: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x1a50b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1a50bc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1a50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1a50c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a50c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a50c4: 0x28e50008  slti        $a1, $a3, 0x8
    ctx->pc = 0x1a50c4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a50c8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a50c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a50cc: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A50CCu;
    {
        const bool branch_taken_0x1a50cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A50D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A50CCu;
            // 0x1a50d0: 0xc43021  addu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50cc) {
            ctx->pc = 0x1A50B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a50b0;
        }
    }
    ctx->pc = 0x1A50D4u;
    // 0x1a50d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A50D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A50DCu;
    // 0x1a50dc: 0x0  nop
    ctx->pc = 0x1a50dcu;
    // NOP
}
