#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053E2F0
// Address: 0x53e2f0 - 0x53e330
void sub_0053E2F0_0x53e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053E2F0_0x53e2f0");
#endif

    ctx->pc = 0x53e2f0u;

    // 0x53e2f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x53e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x53e2f4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x53e2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x53e2f8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x53e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x53e2fc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x53e2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x53e300: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x53e300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x53e304: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x53e304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x53e308: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x53e308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x53e30c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x53e30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x53e310: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x53e310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x53e314: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x53e314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x53e318: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x53e318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x53e31c: 0x3e00008  jr          $ra
    ctx->pc = 0x53E31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53E320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E31Cu;
            // 0x53e320: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53E324u;
    // 0x53e324: 0x0  nop
    ctx->pc = 0x53e324u;
    // NOP
    // 0x53e328: 0x0  nop
    ctx->pc = 0x53e328u;
    // NOP
    // 0x53e32c: 0x0  nop
    ctx->pc = 0x53e32cu;
    // NOP
}
