#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384880
// Address: 0x384880 - 0x384890
void sub_00384880_0x384880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384880_0x384880");
#endif

    ctx->pc = 0x384880u;

    // 0x384880: 0x3e00008  jr          $ra
    ctx->pc = 0x384880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384880u;
            // 0x384884: 0x24820090  addiu       $v0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384888u;
    // 0x384888: 0x0  nop
    ctx->pc = 0x384888u;
    // NOP
    // 0x38488c: 0x0  nop
    ctx->pc = 0x38488cu;
    // NOP
}
