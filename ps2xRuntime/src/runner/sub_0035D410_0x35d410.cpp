#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035D410
// Address: 0x35d410 - 0x35d450
void sub_0035D410_0x35d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D410_0x35d410");
#endif

    switch (ctx->pc) {
        case 0x35d42cu: goto label_35d42c;
        case 0x35d43cu: goto label_35d43c;
        default: break;
    }

    ctx->pc = 0x35d410u;

    // 0x35d410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d414: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x35d414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x35d418: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x35d418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x35d41c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35D41Cu;
    {
        const bool branch_taken_0x35d41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D41Cu;
            // 0x35d420: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d41c) {
            ctx->pc = 0x35D434u;
            goto label_35d434;
        }
    }
    ctx->pc = 0x35D424u;
    // 0x35d424: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x35D424u;
    SET_GPR_U32(ctx, 31, 0x35D42Cu);
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D42Cu; }
        if (ctx->pc != 0x35D42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D42Cu; }
        if (ctx->pc != 0x35D42Cu) { return; }
    }
    ctx->pc = 0x35D42Cu;
label_35d42c:
    // 0x35d42c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35D42Cu;
    {
        const bool branch_taken_0x35d42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D42Cu;
            // 0x35d430: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d42c) {
            ctx->pc = 0x35D440u;
            goto label_35d440;
        }
    }
    ctx->pc = 0x35D434u;
label_35d434:
    // 0x35d434: 0xc050044  jal         func_140110
    ctx->pc = 0x35D434u;
    SET_GPR_U32(ctx, 31, 0x35D43Cu);
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D43Cu; }
        if (ctx->pc != 0x35D43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D43Cu; }
        if (ctx->pc != 0x35D43Cu) { return; }
    }
    ctx->pc = 0x35D43Cu;
label_35d43c:
    // 0x35d43c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35d440:
    // 0x35d440: 0x3e00008  jr          $ra
    ctx->pc = 0x35D440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D440u;
            // 0x35d444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35D448u;
    // 0x35d448: 0x0  nop
    ctx->pc = 0x35d448u;
    // NOP
    // 0x35d44c: 0x0  nop
    ctx->pc = 0x35d44cu;
    // NOP
}
