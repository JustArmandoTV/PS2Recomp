#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B03F8
// Address: 0x1b03f8 - 0x1b0410
void sub_001B03F8_0x1b03f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B03F8_0x1b03f8");
#endif

    ctx->pc = 0x1b03f8u;

    // 0x1b03f8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B03F8u;
    {
        const bool branch_taken_0x1b03f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03F8u;
            // 0x1b03fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03f8) {
            ctx->pc = 0x1B0404u;
            goto label_1b0404;
        }
    }
    ctx->pc = 0x1B0400u;
    // 0x1b0400: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b0400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1b0404:
    // 0x1b0404: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B040Cu;
    // 0x1b040c: 0x0  nop
    ctx->pc = 0x1b040cu;
    // NOP
}
