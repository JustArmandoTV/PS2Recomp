#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055C8C0
// Address: 0x55c8c0 - 0x55c900
void sub_0055C8C0_0x55c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055C8C0_0x55c8c0");
#endif

    ctx->pc = 0x55c8c0u;

    // 0x55c8c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x55c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x55c8c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x55c8c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55c8c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x55c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x55c8cc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x55c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x55c8d0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x55c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x55c8d4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x55c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x55c8d8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x55c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x55c8dc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x55c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x55c8e0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x55c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x55c8e4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x55c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x55c8e8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x55c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x55c8ec: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x55c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x55c8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x55C8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55C8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C8F0u;
            // 0x55c8f4: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55C8F8u;
    // 0x55c8f8: 0x0  nop
    ctx->pc = 0x55c8f8u;
    // NOP
    // 0x55c8fc: 0x0  nop
    ctx->pc = 0x55c8fcu;
    // NOP
}
