#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015EAE0
// Address: 0x15eae0 - 0x15eb00
void sub_0015EAE0_0x15eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EAE0_0x15eae0");
#endif

    ctx->pc = 0x15eae0u;

    // 0x15eae0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15eae4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x15eae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eae8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x15eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15eaec: 0x3e00008  jr          $ra
    ctx->pc = 0x15EAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EAECu;
            // 0x15eaf0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15EAF4u;
    // 0x15eaf4: 0x0  nop
    ctx->pc = 0x15eaf4u;
    // NOP
    // 0x15eaf8: 0x0  nop
    ctx->pc = 0x15eaf8u;
    // NOP
    // 0x15eafc: 0x0  nop
    ctx->pc = 0x15eafcu;
    // NOP
}
