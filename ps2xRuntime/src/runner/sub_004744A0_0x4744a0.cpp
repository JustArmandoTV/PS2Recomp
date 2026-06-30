#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004744A0
// Address: 0x4744a0 - 0x4744b0
void sub_004744A0_0x4744a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004744A0_0x4744a0");
#endif

    ctx->pc = 0x4744a0u;

    // 0x4744a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4744A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4744A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4744A0u;
            // 0x4744a4: 0xac850060  sw          $a1, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4744A8u;
    // 0x4744a8: 0x0  nop
    ctx->pc = 0x4744a8u;
    // NOP
    // 0x4744ac: 0x0  nop
    ctx->pc = 0x4744acu;
    // NOP
}
