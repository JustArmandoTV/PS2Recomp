#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DCB60
// Address: 0x4dcb60 - 0x4dcb70
void sub_004DCB60_0x4dcb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCB60_0x4dcb60");
#endif

    ctx->pc = 0x4dcb60u;

    // 0x4dcb60: 0x3e00008  jr          $ra
    ctx->pc = 0x4DCB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCB60u;
            // 0x4dcb64: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DCB68u;
    // 0x4dcb68: 0x0  nop
    ctx->pc = 0x4dcb68u;
    // NOP
    // 0x4dcb6c: 0x0  nop
    ctx->pc = 0x4dcb6cu;
    // NOP
}
