#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD540
// Address: 0x1dd540 - 0x1dd550
void sub_001DD540_0x1dd540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD540_0x1dd540");
#endif

    ctx->pc = 0x1dd540u;

    // 0x1dd540: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD540u;
            // 0x1dd544: 0x24820204  addiu       $v0, $a0, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD548u;
    // 0x1dd548: 0x0  nop
    ctx->pc = 0x1dd548u;
    // NOP
    // 0x1dd54c: 0x0  nop
    ctx->pc = 0x1dd54cu;
    // NOP
}
