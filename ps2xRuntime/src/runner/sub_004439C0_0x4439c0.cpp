#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004439C0
// Address: 0x4439c0 - 0x4439d0
void sub_004439C0_0x4439c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004439C0_0x4439c0");
#endif

    ctx->pc = 0x4439c0u;

    // 0x4439c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4439C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4439C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4439C0u;
            // 0x4439c4: 0xac8500cc  sw          $a1, 0xCC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4439C8u;
    // 0x4439c8: 0x0  nop
    ctx->pc = 0x4439c8u;
    // NOP
    // 0x4439cc: 0x0  nop
    ctx->pc = 0x4439ccu;
    // NOP
}
