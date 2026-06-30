#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B4650
// Address: 0x3b4650 - 0x3b4670
void sub_003B4650_0x3b4650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4650_0x3b4650");
#endif

    ctx->pc = 0x3b4650u;

    // 0x3b4650: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3b4650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3b4654: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b4654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4658: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3b4658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3b465c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B465Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B465Cu;
            // 0x3b4660: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B4664u;
    // 0x3b4664: 0x0  nop
    ctx->pc = 0x3b4664u;
    // NOP
    // 0x3b4668: 0x0  nop
    ctx->pc = 0x3b4668u;
    // NOP
    // 0x3b466c: 0x0  nop
    ctx->pc = 0x3b466cu;
    // NOP
}
