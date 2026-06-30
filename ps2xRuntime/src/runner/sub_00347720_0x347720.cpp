#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347720
// Address: 0x347720 - 0x347730
void sub_00347720_0x347720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347720_0x347720");
#endif

    ctx->pc = 0x347720u;

    // 0x347720: 0x3e00008  jr          $ra
    ctx->pc = 0x347720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347720u;
            // 0x347724: 0x24820030  addiu       $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347728u;
    // 0x347728: 0x0  nop
    ctx->pc = 0x347728u;
    // NOP
    // 0x34772c: 0x0  nop
    ctx->pc = 0x34772cu;
    // NOP
}
