#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00480860
// Address: 0x480860 - 0x480880
void sub_00480860_0x480860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480860_0x480860");
#endif

    ctx->pc = 0x480860u;

    // 0x480860: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x480860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x480864: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x480864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480868: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x480868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x48086c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x48086cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x480870: 0x3e00008  jr          $ra
    ctx->pc = 0x480870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480870u;
            // 0x480874: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x480878u;
    // 0x480878: 0x0  nop
    ctx->pc = 0x480878u;
    // NOP
    // 0x48087c: 0x0  nop
    ctx->pc = 0x48087cu;
    // NOP
}
