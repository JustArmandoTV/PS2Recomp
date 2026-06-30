#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E3090
// Address: 0x2e3090 - 0x2e30b0
void sub_002E3090_0x2e3090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3090_0x2e3090");
#endif

    ctx->pc = 0x2e3090u;

    // 0x2e3090: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e3090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e3094: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x2e3094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x2e3098: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e3098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e309c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e30a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E30A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E30A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30A0u;
            // 0x2e30a4: 0x80420434  lb          $v0, 0x434($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1076)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E30A8u;
    // 0x2e30a8: 0x0  nop
    ctx->pc = 0x2e30a8u;
    // NOP
    // 0x2e30ac: 0x0  nop
    ctx->pc = 0x2e30acu;
    // NOP
}
