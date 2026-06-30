#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001994B0
// Address: 0x1994b0 - 0x1994e8
void sub_001994B0_0x1994b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001994B0_0x1994b0");
#endif

    ctx->pc = 0x1994b0u;

    // 0x1994b0: 0x24840460  addiu       $a0, $a0, 0x460
    ctx->pc = 0x1994b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    // 0x1994b4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1994b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1994b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1994b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1994bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1994bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1994c0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1994c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1994c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1994C4u;
    {
        const bool branch_taken_0x1994c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1994C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1994C4u;
            // 0x1994c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994c4) {
            ctx->pc = 0x1994DCu;
            goto label_1994dc;
        }
    }
    ctx->pc = 0x1994CCu;
    // 0x1994cc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1994ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1994d0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1994d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1994d4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1994d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1994d8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1994d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1994dc:
    // 0x1994dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1994DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1994E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1994DCu;
            // 0x1994e0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1994E4u;
    // 0x1994e4: 0x0  nop
    ctx->pc = 0x1994e4u;
    // NOP
}
