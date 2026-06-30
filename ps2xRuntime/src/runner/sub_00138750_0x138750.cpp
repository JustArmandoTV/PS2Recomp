#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138750
// Address: 0x138750 - 0x138780
void sub_00138750_0x138750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138750_0x138750");
#endif

    ctx->pc = 0x138750u;

    // 0x138750: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x138750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x138754: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x138754u;
    {
        const bool branch_taken_0x138754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x138754) {
            ctx->pc = 0x138774u;
            goto label_138774;
        }
    }
    ctx->pc = 0x13875Cu;
    // 0x13875c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x13875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x138760: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x138760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x138764: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x138764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x138768: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x138768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13876c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13876cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x138770: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x138770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_138774:
    // 0x138774: 0x3e00008  jr          $ra
    ctx->pc = 0x138774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13877Cu;
    // 0x13877c: 0x0  nop
    ctx->pc = 0x13877cu;
    // NOP
}
