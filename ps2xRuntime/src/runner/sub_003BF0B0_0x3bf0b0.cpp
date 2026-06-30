#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF0B0
// Address: 0x3bf0b0 - 0x3bf0e0
void sub_003BF0B0_0x3bf0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF0B0_0x3bf0b0");
#endif

    ctx->pc = 0x3bf0b0u;

    // 0x3bf0b0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x3bf0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3bf0b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3bf0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bf0b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bf0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bf0bc: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x3bf0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3bf0c0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3bf0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3bf0c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bf0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bf0c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bf0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bf0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF0CCu;
            // 0x3bf0d0: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF0D4u;
    // 0x3bf0d4: 0x0  nop
    ctx->pc = 0x3bf0d4u;
    // NOP
    // 0x3bf0d8: 0x0  nop
    ctx->pc = 0x3bf0d8u;
    // NOP
    // 0x3bf0dc: 0x0  nop
    ctx->pc = 0x3bf0dcu;
    // NOP
}
