#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034F9C0
// Address: 0x34f9c0 - 0x34f9d0
void sub_0034F9C0_0x34f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F9C0_0x34f9c0");
#endif

    ctx->pc = 0x34f9c0u;

    // 0x34f9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x34F9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F9C0u;
            // 0x34f9c4: 0xac850080  sw          $a1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34F9C8u;
    // 0x34f9c8: 0x0  nop
    ctx->pc = 0x34f9c8u;
    // NOP
    // 0x34f9cc: 0x0  nop
    ctx->pc = 0x34f9ccu;
    // NOP
}
