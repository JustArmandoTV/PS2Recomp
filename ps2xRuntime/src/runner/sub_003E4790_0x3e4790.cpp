#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E4790
// Address: 0x3e4790 - 0x3e47a0
void sub_003E4790_0x3e4790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4790_0x3e4790");
#endif

    ctx->pc = 0x3e4790u;

    // 0x3e4790: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3e4790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3e4794: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3e4794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4798: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E479Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4798u;
            // 0x3e479c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E47A0u;
}
