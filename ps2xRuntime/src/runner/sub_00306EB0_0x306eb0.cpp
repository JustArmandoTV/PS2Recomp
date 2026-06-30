#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00306EB0
// Address: 0x306eb0 - 0x306ec0
void sub_00306EB0_0x306eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306EB0_0x306eb0");
#endif

    ctx->pc = 0x306eb0u;

    // 0x306eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x306EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306EB0u;
            // 0x306eb4: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x306EB8u;
    // 0x306eb8: 0x0  nop
    ctx->pc = 0x306eb8u;
    // NOP
    // 0x306ebc: 0x0  nop
    ctx->pc = 0x306ebcu;
    // NOP
}
