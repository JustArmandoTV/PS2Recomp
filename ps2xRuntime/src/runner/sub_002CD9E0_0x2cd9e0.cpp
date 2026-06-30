#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CD9E0
// Address: 0x2cd9e0 - 0x2cda00
void sub_002CD9E0_0x2cd9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD9E0_0x2cd9e0");
#endif

    ctx->pc = 0x2cd9e0u;

    // 0x2cd9e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cd9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cd9e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cd9e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd9e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2cd9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2cd9ec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cd9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cd9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD9F0u;
            // 0x2cd9f4: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD9F8u;
    // 0x2cd9f8: 0x0  nop
    ctx->pc = 0x2cd9f8u;
    // NOP
    // 0x2cd9fc: 0x0  nop
    ctx->pc = 0x2cd9fcu;
    // NOP
}
