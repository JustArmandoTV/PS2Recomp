#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C3E8
// Address: 0x16c3e8 - 0x16c450
void sub_0016C3E8_0x16c3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C3E8_0x16c3e8");
#endif

    switch (ctx->pc) {
        case 0x16c400u: goto label_16c400;
        case 0x16c434u: goto label_16c434;
        case 0x16c43cu: goto label_16c43c;
        default: break;
    }

    ctx->pc = 0x16c3e8u;

    // 0x16c3e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c3ec: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16C3ECu;
    {
        const bool branch_taken_0x16c3ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3ECu;
            // 0x16c3f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3ec) {
            ctx->pc = 0x16C410u;
            goto label_16c410;
        }
    }
    ctx->pc = 0x16C3F4u;
    // 0x16c3f4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16c3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16c3f8: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16C3F8u;
    SET_GPR_U32(ctx, 31, 0x16C400u);
    ctx->pc = 0x16C3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3F8u;
            // 0x16c3fc: 0x24843e08  addiu       $a0, $a0, 0x3E08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C400u; }
        if (ctx->pc != 0x16C400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C400u; }
        if (ctx->pc != 0x16C400u) { return; }
    }
    ctx->pc = 0x16C400u;
label_16c400:
    // 0x16c400: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16c400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16c404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c408: 0x3e00008  jr          $ra
    ctx->pc = 0x16C408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C408u;
            // 0x16c40c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C410u;
label_16c410:
    // 0x16c410: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x16c410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x16c414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c418: 0x80601a4  j           func_180690
    ctx->pc = 0x16C418u;
    ctx->pc = 0x16C41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C418u;
            // 0x16c41c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180690u;
    if (runtime->hasFunction(0x180690u)) {
        auto targetFn = runtime->lookupFunction(0x180690u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180690_0x180690(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C420u;
    // 0x16c420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c428: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16c42c: 0xc0599de  jal         func_166778
    ctx->pc = 0x16C42Cu;
    SET_GPR_U32(ctx, 31, 0x16C434u);
    ctx->pc = 0x16C430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C42Cu;
            // 0x16c430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C434u; }
        if (ctx->pc != 0x16C434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C434u; }
        if (ctx->pc != 0x16C434u) { return; }
    }
    ctx->pc = 0x16C434u;
label_16c434:
    // 0x16c434: 0xc05b114  jal         func_16C450
    ctx->pc = 0x16C434u;
    SET_GPR_U32(ctx, 31, 0x16C43Cu);
    ctx->pc = 0x16C438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C434u;
            // 0x16c438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C450u;
    if (runtime->hasFunction(0x16C450u)) {
        auto targetFn = runtime->lookupFunction(0x16C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C43Cu; }
        if (ctx->pc != 0x16C43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C450_0x16c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C43Cu; }
        if (ctx->pc != 0x16C43Cu) { return; }
    }
    ctx->pc = 0x16C43Cu;
label_16c43c:
    // 0x16c43c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c440: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16c440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c444: 0x80599e0  j           func_166780
    ctx->pc = 0x16C444u;
    ctx->pc = 0x16C448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C444u;
            // 0x16c448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C44Cu;
    // 0x16c44c: 0x0  nop
    ctx->pc = 0x16c44cu;
    // NOP
}
