#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D420
// Address: 0x19d420 - 0x19d458
void sub_0019D420_0x19d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D420_0x19d420");
#endif

    ctx->pc = 0x19d420u;

    // 0x19d420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d428: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x19d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19d42c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D42Cu;
    {
        const bool branch_taken_0x19d42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D42Cu;
            // 0x19d430: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d42c) {
            ctx->pc = 0x19D448u;
            goto label_19d448;
        }
    }
    ctx->pc = 0x19D434u;
    // 0x19d434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19d438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d43c: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x19d43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x19d440: 0x804a576  j           func_1295D8
    ctx->pc = 0x19D440u;
    ctx->pc = 0x19D444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D440u;
            // 0x19d444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D448u;
label_19d448:
    // 0x19d448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d44c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d450: 0x806d87e  j           func_1B61F8
    ctx->pc = 0x19D450u;
    ctx->pc = 0x19D454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D450u;
            // 0x19d454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B61F8u;
    if (runtime->hasFunction(0x1B61F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B61F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B61F8_0x1b61f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D458u;
}
