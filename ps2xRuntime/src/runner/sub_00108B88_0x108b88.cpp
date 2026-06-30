#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108B88
// Address: 0x108b88 - 0x108bc0
void sub_00108B88_0x108b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108B88_0x108b88");
#endif

    ctx->pc = 0x108b88u;

    // 0x108b88: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108b8c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x108b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x108b90: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x108b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x108b94: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x108b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x108b98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108b98u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x108b9c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x108b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x108ba0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x108ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x108ba4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108BA4u;
    {
        const bool branch_taken_0x108ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108ba4) {
            ctx->pc = 0x108BB4u;
            goto label_108bb4;
        }
    }
    ctx->pc = 0x108BACu;
    // 0x108bac: 0x8041958  j           func_106560
    ctx->pc = 0x108BACu;
    ctx->pc = 0x106560u;
    {
        auto targetFn = runtime->lookupFunction(0x106560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x108BB4u;
label_108bb4:
    // 0x108bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x108BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108BBCu;
    // 0x108bbc: 0x0  nop
    ctx->pc = 0x108bbcu;
    // NOP
}
