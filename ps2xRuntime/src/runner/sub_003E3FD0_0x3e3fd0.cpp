#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E3FD0
// Address: 0x3e3fd0 - 0x3e3ff0
void sub_003E3FD0_0x3e3fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3FD0_0x3e3fd0");
#endif

    ctx->pc = 0x3e3fd0u;

    // 0x3e3fd0: 0xac8502d4  sw          $a1, 0x2D4($a0)
    ctx->pc = 0x3e3fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 724), GPR_U32(ctx, 5));
    // 0x3e3fd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e3fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3fd8: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x3e3fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
    // 0x3e3fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3FDCu;
            // 0x3e3fe0: 0xa08302da  sb          $v1, 0x2DA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 730), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E3FE4u;
    // 0x3e3fe4: 0x0  nop
    ctx->pc = 0x3e3fe4u;
    // NOP
    // 0x3e3fe8: 0x0  nop
    ctx->pc = 0x3e3fe8u;
    // NOP
    // 0x3e3fec: 0x0  nop
    ctx->pc = 0x3e3fecu;
    // NOP
}
