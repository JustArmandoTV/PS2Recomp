#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175808
// Address: 0x175808 - 0x175858
void sub_00175808_0x175808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175808_0x175808");
#endif

    switch (ctx->pc) {
        case 0x175834u: goto label_175834;
        case 0x17583cu: goto label_17583c;
        case 0x175844u: goto label_175844;
        default: break;
    }

    ctx->pc = 0x175808u;

    // 0x175808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17580c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17580cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175810: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x175810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x175814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175818: 0x805c02c  j           func_1700B0
    ctx->pc = 0x175818u;
    ctx->pc = 0x17581Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175818u;
            // 0x17581c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700B0u;
    {
        auto targetFn = runtime->lookupFunction(0x1700B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x175820u;
    // 0x175820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175828: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17582c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17582Cu;
    SET_GPR_U32(ctx, 31, 0x175834u);
    ctx->pc = 0x175830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17582Cu;
            // 0x175830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175834u; }
        if (ctx->pc != 0x175834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175834u; }
        if (ctx->pc != 0x175834u) { return; }
    }
    ctx->pc = 0x175834u;
label_175834:
    // 0x175834: 0xc05d616  jal         func_175858
    ctx->pc = 0x175834u;
    SET_GPR_U32(ctx, 31, 0x17583Cu);
    ctx->pc = 0x175838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175834u;
            // 0x175838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175858u;
    if (runtime->hasFunction(0x175858u)) {
        auto targetFn = runtime->lookupFunction(0x175858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17583Cu; }
        if (ctx->pc != 0x17583Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175858_0x175858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17583Cu; }
        if (ctx->pc != 0x17583Cu) { return; }
    }
    ctx->pc = 0x17583Cu;
label_17583c:
    // 0x17583c: 0xc0599e0  jal         func_166780
    ctx->pc = 0x17583Cu;
    SET_GPR_U32(ctx, 31, 0x175844u);
    ctx->pc = 0x175840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17583Cu;
            // 0x175840: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175844u; }
        if (ctx->pc != 0x175844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175844u; }
        if (ctx->pc != 0x175844u) { return; }
    }
    ctx->pc = 0x175844u;
label_175844:
    // 0x175844: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x175844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175848: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17584c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17584cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175850: 0x3e00008  jr          $ra
    ctx->pc = 0x175850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175850u;
            // 0x175854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175858u;
}
