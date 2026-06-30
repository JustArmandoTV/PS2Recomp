#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175858
// Address: 0x175858 - 0x1758c8
void sub_00175858_0x175858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175858_0x175858");
#endif

    switch (ctx->pc) {
        case 0x175870u: goto label_175870;
        case 0x1758a4u: goto label_1758a4;
        case 0x1758acu: goto label_1758ac;
        case 0x1758b4u: goto label_1758b4;
        default: break;
    }

    ctx->pc = 0x175858u;

    // 0x175858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17585c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17585Cu;
    {
        const bool branch_taken_0x17585c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17585Cu;
            // 0x175860: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17585c) {
            ctx->pc = 0x175880u;
            goto label_175880;
        }
    }
    ctx->pc = 0x175864u;
    // 0x175864: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x175864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x175868: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x175868u;
    SET_GPR_U32(ctx, 31, 0x175870u);
    ctx->pc = 0x17586Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175868u;
            // 0x17586c: 0x24844810  addiu       $a0, $a0, 0x4810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175870u; }
        if (ctx->pc != 0x175870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175870u; }
        if (ctx->pc != 0x175870u) { return; }
    }
    ctx->pc = 0x175870u;
label_175870:
    // 0x175870: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x175870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175878: 0x3e00008  jr          $ra
    ctx->pc = 0x175878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17587Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175878u;
            // 0x17587c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175880u;
label_175880:
    // 0x175880: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x175880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x175884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175888: 0x805bfe0  j           func_16FF80
    ctx->pc = 0x175888u;
    ctx->pc = 0x17588Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175888u;
            // 0x17588c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FF80u;
    if (runtime->hasFunction(0x16FF80u)) {
        auto targetFn = runtime->lookupFunction(0x16FF80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016FF80_0x16ff80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x175890u;
    // 0x175890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175898: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17589c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17589Cu;
    SET_GPR_U32(ctx, 31, 0x1758A4u);
    ctx->pc = 0x1758A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17589Cu;
            // 0x1758a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758A4u; }
        if (ctx->pc != 0x1758A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758A4u; }
        if (ctx->pc != 0x1758A4u) { return; }
    }
    ctx->pc = 0x1758A4u;
label_1758a4:
    // 0x1758a4: 0xc05d632  jal         func_1758C8
    ctx->pc = 0x1758A4u;
    SET_GPR_U32(ctx, 31, 0x1758ACu);
    ctx->pc = 0x1758A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1758A4u;
            // 0x1758a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1758C8u;
    if (runtime->hasFunction(0x1758C8u)) {
        auto targetFn = runtime->lookupFunction(0x1758C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758ACu; }
        if (ctx->pc != 0x1758ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001758C8_0x1758c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758ACu; }
        if (ctx->pc != 0x1758ACu) { return; }
    }
    ctx->pc = 0x1758ACu;
label_1758ac:
    // 0x1758ac: 0xc0599e0  jal         func_166780
    ctx->pc = 0x1758ACu;
    SET_GPR_U32(ctx, 31, 0x1758B4u);
    ctx->pc = 0x1758B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1758ACu;
            // 0x1758b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758B4u; }
        if (ctx->pc != 0x1758B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758B4u; }
        if (ctx->pc != 0x1758B4u) { return; }
    }
    ctx->pc = 0x1758B4u;
label_1758b4:
    // 0x1758b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1758b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1758b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1758b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1758bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1758c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1758C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1758C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1758C0u;
            // 0x1758c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1758C8u;
}
