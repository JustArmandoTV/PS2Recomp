#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005120D0
// Address: 0x5120d0 - 0x5120e0
void sub_005120D0_0x5120d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005120D0_0x5120d0");
#endif

    ctx->pc = 0x5120d0u;

    // 0x5120d0: 0x3e00008  jr          $ra
    ctx->pc = 0x5120D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5120D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5120D0u;
            // 0x5120d4: 0xac850060  sw          $a1, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5120D8u;
    // 0x5120d8: 0x0  nop
    ctx->pc = 0x5120d8u;
    // NOP
    // 0x5120dc: 0x0  nop
    ctx->pc = 0x5120dcu;
    // NOP
}
