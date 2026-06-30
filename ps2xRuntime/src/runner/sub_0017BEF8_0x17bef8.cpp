#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017BEF8
// Address: 0x17bef8 - 0x17bf08
void sub_0017BEF8_0x17bef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BEF8_0x17bef8");
#endif

    ctx->pc = 0x17bef8u;

    // 0x17bef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17befc: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x17befcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x17bf00: 0x3e00008  jr          $ra
    ctx->pc = 0x17BF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BF00u;
            // 0x17bf04: 0xa0820001  sb          $v0, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BF08u;
}
