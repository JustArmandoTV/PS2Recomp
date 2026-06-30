#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384890
// Address: 0x384890 - 0x3848a0
void sub_00384890_0x384890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384890_0x384890");
#endif

    ctx->pc = 0x384890u;

    // 0x384890: 0x3e00008  jr          $ra
    ctx->pc = 0x384890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384890u;
            // 0x384894: 0x248200f0  addiu       $v0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384898u;
    // 0x384898: 0x0  nop
    ctx->pc = 0x384898u;
    // NOP
    // 0x38489c: 0x0  nop
    ctx->pc = 0x38489cu;
    // NOP
}
