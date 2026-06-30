#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001023B0
// Address: 0x1023b0 - 0x1023d0
void sub_001023B0_0x1023b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001023B0_0x1023b0");
#endif

    ctx->pc = 0x1023b0u;

    // 0x1023b0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1023b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1023b4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1023b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1023b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1023b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1023bc: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1023bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1023c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1023c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1023c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1023C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1023C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1023C4u;
            // 0x1023c8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1023CCu;
    // 0x1023cc: 0x0  nop
    ctx->pc = 0x1023ccu;
    // NOP
}
