#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E4CC0
// Address: 0x4e4cc0 - 0x4e4cd0
void sub_004E4CC0_0x4e4cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4CC0_0x4e4cc0");
#endif

    ctx->pc = 0x4e4cc0u;

    // 0x4e4cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4CC0u;
            // 0x4e4cc4: 0xac8500e8  sw          $a1, 0xE8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4CC8u;
    // 0x4e4cc8: 0x0  nop
    ctx->pc = 0x4e4cc8u;
    // NOP
    // 0x4e4ccc: 0x0  nop
    ctx->pc = 0x4e4cccu;
    // NOP
}
