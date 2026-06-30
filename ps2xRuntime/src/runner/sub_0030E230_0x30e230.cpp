#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030E230
// Address: 0x30e230 - 0x30e240
void sub_0030E230_0x30e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E230_0x30e230");
#endif

    ctx->pc = 0x30e230u;

    // 0x30e230: 0x3e00008  jr          $ra
    ctx->pc = 0x30E230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E230u;
            // 0x30e234: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E238u;
    // 0x30e238: 0x0  nop
    ctx->pc = 0x30e238u;
    // NOP
    // 0x30e23c: 0x0  nop
    ctx->pc = 0x30e23cu;
    // NOP
}
