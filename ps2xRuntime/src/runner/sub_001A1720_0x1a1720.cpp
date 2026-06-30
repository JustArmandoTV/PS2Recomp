#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1720
// Address: 0x1a1720 - 0x1a1738
void sub_001A1720_0x1a1720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1720_0x1a1720");
#endif

    ctx->pc = 0x1a1720u;

    // 0x1a1720: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a1720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a1724: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a1724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1a1728: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a1728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a172c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A172Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A172Cu;
            // 0x1a1730: 0x8c429940  lw          $v0, -0x66C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940992)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1734u;
    // 0x1a1734: 0x0  nop
    ctx->pc = 0x1a1734u;
    // NOP
}
