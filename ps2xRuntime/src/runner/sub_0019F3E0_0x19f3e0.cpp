#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F3E0
// Address: 0x19f3e0 - 0x19f408
void sub_0019F3E0_0x19f3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F3E0_0x19f3e0");
#endif

    ctx->pc = 0x19f3e0u;

    // 0x19f3e0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x19f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x19f3e4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F3E4u;
    {
        const bool branch_taken_0x19f3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3E4u;
            // 0x19f3e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3e4) {
            ctx->pc = 0x19F3FCu;
            goto label_19f3fc;
        }
    }
    ctx->pc = 0x19F3ECu;
    // 0x19f3ec: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x19f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x19f3f0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F3F0u;
    {
        const bool branch_taken_0x19f3f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3F0u;
            // 0x19f3f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3f0) {
            ctx->pc = 0x19F3FCu;
            goto label_19f3fc;
        }
    }
    ctx->pc = 0x19F3F8u;
    // 0x19f3f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f3fc:
    // 0x19f3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x19F3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3FCu;
            // 0x19f400: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F404u;
    // 0x19f404: 0x0  nop
    ctx->pc = 0x19f404u;
    // NOP
}
