#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6920
// Address: 0x2b6920 - 0x2b6930
void sub_002B6920_0x2b6920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6920_0x2b6920");
#endif

    ctx->pc = 0x2b6920u;

    // 0x2b6920: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6920u;
            // 0x2b6924: 0x248200d0  addiu       $v0, $a0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6928u;
    // 0x2b6928: 0x0  nop
    ctx->pc = 0x2b6928u;
    // NOP
    // 0x2b692c: 0x0  nop
    ctx->pc = 0x2b692cu;
    // NOP
}
