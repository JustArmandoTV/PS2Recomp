#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ACC50
// Address: 0x2acc50 - 0x2acc80
void sub_002ACC50_0x2acc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACC50_0x2acc50");
#endif

    ctx->pc = 0x2acc50u;

    // 0x2acc50: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2acc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2acc54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2acc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2acc58: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2acc58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2acc5c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2acc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2acc60: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2acc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2acc64: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2acc64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2acc68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2acc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acc6c: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ACC6Cu;
    {
        const bool branch_taken_0x2acc6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2acc6c) {
            ctx->pc = 0x2ACC78u;
            goto label_2acc78;
        }
    }
    ctx->pc = 0x2ACC74u;
    // 0x2acc74: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2acc74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_2acc78:
    // 0x2acc78: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ACC80u;
}
