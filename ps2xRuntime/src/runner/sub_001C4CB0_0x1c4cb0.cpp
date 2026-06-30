#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4CB0
// Address: 0x1c4cb0 - 0x1c4cc8
void sub_001C4CB0_0x1c4cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4CB0_0x1c4cb0");
#endif

    ctx->pc = 0x1c4cb0u;

    // 0x1c4cb0: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x1c4cb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1c4cb4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c4cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c4cb8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1c4cb8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1c4cbc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1c4cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1c4cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CC0u;
            // 0x1c4cc4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4CC8u;
}
