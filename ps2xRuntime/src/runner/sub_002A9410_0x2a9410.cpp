#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A9410
// Address: 0x2a9410 - 0x2a9450
void sub_002A9410_0x2a9410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9410_0x2a9410");
#endif

    ctx->pc = 0x2a9410u;

    // 0x2a9410: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a9410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a9414: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a9414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9418: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a9418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2a941c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2a941cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a9420: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2a9420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2a9424: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2a9424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a9428: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2a9428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2a942c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2a942cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a9430: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2a9430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2a9434: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2a9434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a9438: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2a9438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2a943c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2a943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2a9440: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9440u;
            // 0x2a9444: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9448u;
    // 0x2a9448: 0x0  nop
    ctx->pc = 0x2a9448u;
    // NOP
    // 0x2a944c: 0x0  nop
    ctx->pc = 0x2a944cu;
    // NOP
}
