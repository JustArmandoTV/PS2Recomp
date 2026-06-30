#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106A58
// Address: 0x106a58 - 0x106a90
void sub_00106A58_0x106a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106A58_0x106a58");
#endif

    ctx->pc = 0x106a58u;

    // 0x106a58: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106a5c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x106a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x106a60: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x106a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x106a64: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x106a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x106a68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106a68u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x106a6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x106a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x106a70: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x106a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x106a74: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106A74u;
    {
        const bool branch_taken_0x106a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x106a74) {
            ctx->pc = 0x106A84u;
            goto label_106a84;
        }
    }
    ctx->pc = 0x106A7Cu;
    // 0x106a7c: 0x8041958  j           func_106560
    ctx->pc = 0x106A7Cu;
    ctx->pc = 0x106560u;
    {
        auto targetFn = runtime->lookupFunction(0x106560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x106A84u;
label_106a84:
    // 0x106a84: 0x3e00008  jr          $ra
    ctx->pc = 0x106A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106A8Cu;
    // 0x106a8c: 0x0  nop
    ctx->pc = 0x106a8cu;
    // NOP
}
