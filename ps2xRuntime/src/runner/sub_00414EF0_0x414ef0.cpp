#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00414EF0
// Address: 0x414ef0 - 0x414f00
void sub_00414EF0_0x414ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414EF0_0x414ef0");
#endif

    ctx->pc = 0x414ef0u;

    // 0x414ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x414EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414EF0u;
            // 0x414ef4: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x414EF8u;
    // 0x414ef8: 0x0  nop
    ctx->pc = 0x414ef8u;
    // NOP
    // 0x414efc: 0x0  nop
    ctx->pc = 0x414efcu;
    // NOP
}
