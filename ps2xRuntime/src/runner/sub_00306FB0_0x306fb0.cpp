#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00306FB0
// Address: 0x306fb0 - 0x306fc0
void sub_00306FB0_0x306fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306FB0_0x306fb0");
#endif

    ctx->pc = 0x306fb0u;

    // 0x306fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x306FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306FB0u;
            // 0x306fb4: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x306FB8u;
    // 0x306fb8: 0x0  nop
    ctx->pc = 0x306fb8u;
    // NOP
    // 0x306fbc: 0x0  nop
    ctx->pc = 0x306fbcu;
    // NOP
}
