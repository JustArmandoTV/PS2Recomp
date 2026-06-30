#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC320
// Address: 0x1dc320 - 0x1dc340
void sub_001DC320_0x1dc320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC320_0x1dc320");
#endif

    ctx->pc = 0x1dc320u;

    // 0x1dc320: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1dc320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dc324: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1dc324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1dc328: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1dc328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1dc32c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1dc32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dc330: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC330u;
            // 0x1dc334: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC338u;
    // 0x1dc338: 0x0  nop
    ctx->pc = 0x1dc338u;
    // NOP
    // 0x1dc33c: 0x0  nop
    ctx->pc = 0x1dc33cu;
    // NOP
}
