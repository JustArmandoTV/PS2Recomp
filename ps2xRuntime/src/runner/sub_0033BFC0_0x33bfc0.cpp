#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BFC0
// Address: 0x33bfc0 - 0x33bfe0
void sub_0033BFC0_0x33bfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BFC0_0x33bfc0");
#endif

    ctx->pc = 0x33bfc0u;

    // 0x33bfc0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x33bfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x33bfc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33bfc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33bfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x33BFCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BFCCu;
            // 0x33bfd0: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33BFD4u;
    // 0x33bfd4: 0x0  nop
    ctx->pc = 0x33bfd4u;
    // NOP
    // 0x33bfd8: 0x0  nop
    ctx->pc = 0x33bfd8u;
    // NOP
    // 0x33bfdc: 0x0  nop
    ctx->pc = 0x33bfdcu;
    // NOP
}
