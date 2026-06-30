#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053E2B0
// Address: 0x53e2b0 - 0x53e2f0
void sub_0053E2B0_0x53e2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053E2B0_0x53e2b0");
#endif

    ctx->pc = 0x53e2b0u;

    // 0x53e2b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x53e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x53e2b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x53e2b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e2b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x53e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x53e2bc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x53e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x53e2c0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x53e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x53e2c4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x53e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x53e2c8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x53e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x53e2cc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x53e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x53e2d0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x53e2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x53e2d4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x53e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x53e2d8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x53e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x53e2dc: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x53e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x53e2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x53E2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53E2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E2E0u;
            // 0x53e2e4: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53E2E8u;
    // 0x53e2e8: 0x0  nop
    ctx->pc = 0x53e2e8u;
    // NOP
    // 0x53e2ec: 0x0  nop
    ctx->pc = 0x53e2ecu;
    // NOP
}
