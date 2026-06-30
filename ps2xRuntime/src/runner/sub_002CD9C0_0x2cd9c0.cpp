#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CD9C0
// Address: 0x2cd9c0 - 0x2cd9e0
void sub_002CD9C0_0x2cd9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD9C0_0x2cd9c0");
#endif

    ctx->pc = 0x2cd9c0u;

    // 0x2cd9c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cd9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cd9c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cd9c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd9c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2cd9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2cd9cc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2cd9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cd9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD9D0u;
            // 0x2cd9d4: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD9D8u;
    // 0x2cd9d8: 0x0  nop
    ctx->pc = 0x2cd9d8u;
    // NOP
    // 0x2cd9dc: 0x0  nop
    ctx->pc = 0x2cd9dcu;
    // NOP
}
