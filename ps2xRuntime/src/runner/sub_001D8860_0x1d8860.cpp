#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8860
// Address: 0x1d8860 - 0x1d8880
void sub_001D8860_0x1d8860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8860_0x1d8860");
#endif

    ctx->pc = 0x1d8860u;

    // 0x1d8860: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1d8860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d8864: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8868: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d8868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d886c: 0x8c420eb0  lw          $v0, 0xEB0($v0)
    ctx->pc = 0x1d886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3760)));
    // 0x1d8870: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8874: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8874u;
            // 0x1d8878: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D887Cu;
    // 0x1d887c: 0x0  nop
    ctx->pc = 0x1d887cu;
    // NOP
}
