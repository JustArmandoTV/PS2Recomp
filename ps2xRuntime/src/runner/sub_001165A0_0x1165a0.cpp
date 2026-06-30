#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001165A0
// Address: 0x1165a0 - 0x1165f0
void sub_001165A0_0x1165a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001165A0_0x1165a0");
#endif

    switch (ctx->pc) {
        case 0x1165b8u: goto label_1165b8;
        default: break;
    }

    ctx->pc = 0x1165a0u;

    // 0x1165a0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x1165a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x1165a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1165a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1165a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1165a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1165ac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1165ACu;
    {
        const bool branch_taken_0x1165ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1165ACu;
            // 0x1165b0: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165ac) {
            ctx->pc = 0x1165E4u;
            goto label_1165e4;
        }
    }
    ctx->pc = 0x1165B4u;
    // 0x1165b4: 0x0  nop
    ctx->pc = 0x1165b4u;
    // NOP
label_1165b8:
    // 0x1165b8: 0x42000039  di
    ctx->pc = 0x1165b8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x1165bc: 0x40f  sync.p
    ctx->pc = 0x1165bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1165c0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1165c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1165c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1165c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1165c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1165c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1165cc: 0x0  nop
    ctx->pc = 0x1165ccu;
    // NOP
    // 0x1165d0: 0x0  nop
    ctx->pc = 0x1165d0u;
    // NOP
    // 0x1165d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1165D4u;
    {
        const bool branch_taken_0x1165d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1165d4) {
            ctx->pc = 0x1165B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1165b8;
        }
    }
    ctx->pc = 0x1165DCu;
    // 0x1165dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1165DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1165E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1165DCu;
            // 0x1165e0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1165E4u;
label_1165e4:
    // 0x1165e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1165e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1165e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1165E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1165ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1165E8u;
            // 0x1165ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1165F0u;
}
