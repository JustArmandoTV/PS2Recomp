#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BEE30
// Address: 0x1bee30 - 0x1bee58
void sub_001BEE30_0x1bee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEE30_0x1bee30");
#endif

    ctx->pc = 0x1bee30u;

    // 0x1bee30: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BEE30u;
    {
        const bool branch_taken_0x1bee30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bee30) {
            ctx->pc = 0x1BEE50u;
            goto label_1bee50;
        }
    }
    ctx->pc = 0x1BEE38u;
    // 0x1bee38: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1bee38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1bee3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1bee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1bee40: 0x2463a240  addiu       $v1, $v1, -0x5DC0
    ctx->pc = 0x1bee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943296));
    // 0x1bee44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bee48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bee4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1bee50:
    // 0x1bee50: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEE58u;
}
