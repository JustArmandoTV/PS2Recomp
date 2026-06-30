#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173300
// Address: 0x173300 - 0x173338
void sub_00173300_0x173300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173300_0x173300");
#endif

    switch (ctx->pc) {
        case 0x173314u: goto label_173314;
        case 0x17331cu: goto label_17331c;
        case 0x173324u: goto label_173324;
        default: break;
    }

    ctx->pc = 0x173300u;

    // 0x173300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173308: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x173308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17330c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17330Cu;
    SET_GPR_U32(ctx, 31, 0x173314u);
    ctx->pc = 0x173310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17330Cu;
            // 0x173310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173314u; }
        if (ctx->pc != 0x173314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173314u; }
        if (ctx->pc != 0x173314u) { return; }
    }
    ctx->pc = 0x173314u;
label_173314:
    // 0x173314: 0xc05ccce  jal         func_173338
    ctx->pc = 0x173314u;
    SET_GPR_U32(ctx, 31, 0x17331Cu);
    ctx->pc = 0x173318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173314u;
            // 0x173318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173338u;
    if (runtime->hasFunction(0x173338u)) {
        auto targetFn = runtime->lookupFunction(0x173338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17331Cu; }
        if (ctx->pc != 0x17331Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173338_0x173338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17331Cu; }
        if (ctx->pc != 0x17331Cu) { return; }
    }
    ctx->pc = 0x17331Cu;
label_17331c:
    // 0x17331c: 0xc0599e0  jal         func_166780
    ctx->pc = 0x17331Cu;
    SET_GPR_U32(ctx, 31, 0x173324u);
    ctx->pc = 0x173320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17331Cu;
            // 0x173320: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173324u; }
        if (ctx->pc != 0x173324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173324u; }
        if (ctx->pc != 0x173324u) { return; }
    }
    ctx->pc = 0x173324u;
label_173324:
    // 0x173324: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173328: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x173328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17332c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17332cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173330: 0x3e00008  jr          $ra
    ctx->pc = 0x173330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173330u;
            // 0x173334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173338u;
}
