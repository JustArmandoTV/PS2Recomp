#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC880
// Address: 0x1bc880 - 0x1bc890
void sub_001BC880_0x1bc880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC880_0x1bc880");
#endif

    ctx->pc = 0x1bc880u;

    // 0x1bc880: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1bc880u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1bc884: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC884u;
            // 0x1bc888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC88Cu;
    // 0x1bc88c: 0x0  nop
    ctx->pc = 0x1bc88cu;
    // NOP
}
