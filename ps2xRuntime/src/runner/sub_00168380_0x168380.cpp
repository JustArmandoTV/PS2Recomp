#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168380
// Address: 0x168380 - 0x168418
void sub_00168380_0x168380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168380_0x168380");
#endif

    switch (ctx->pc) {
        case 0x1683b0u: goto label_1683b0;
        case 0x1683c4u: goto label_1683c4;
        case 0x1683ccu: goto label_1683cc;
        case 0x1683f4u: goto label_1683f4;
        case 0x1683fcu: goto label_1683fc;
        case 0x168404u: goto label_168404;
        default: break;
    }

    ctx->pc = 0x168380u;

    // 0x168380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168384: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x168384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x168388: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x168388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16838c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x168390: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168394: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x168394u;
    {
        const bool branch_taken_0x168394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x168398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168394u;
            // 0x168398: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168394) {
            ctx->pc = 0x1683CCu;
            goto label_1683cc;
        }
    }
    ctx->pc = 0x16839Cu;
    // 0x16839c: 0x3c100063  lui         $s0, 0x63
    ctx->pc = 0x16839cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)99 << 16));
    // 0x1683a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1683a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683a4: 0x26103388  addiu       $s0, $s0, 0x3388
    ctx->pc = 0x1683a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13192));
    // 0x1683a8: 0xc05e7c4  jal         func_179F10
    ctx->pc = 0x1683A8u;
    SET_GPR_U32(ctx, 31, 0x1683B0u);
    ctx->pc = 0x1683ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1683A8u;
            // 0x1683ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179F10u;
    if (runtime->hasFunction(0x179F10u)) {
        auto targetFn = runtime->lookupFunction(0x179F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683B0u; }
        if (ctx->pc != 0x1683B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00179F10_0x179f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683B0u; }
        if (ctx->pc != 0x1683B0u) { return; }
    }
    ctx->pc = 0x1683B0u;
label_1683b0:
    // 0x1683b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1683b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683b4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1683B4u;
    {
        const bool branch_taken_0x1683b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1683B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1683B4u;
            // 0x1683b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683b4) {
            ctx->pc = 0x1683CCu;
            goto label_1683cc;
        }
    }
    ctx->pc = 0x1683BCu;
    // 0x1683bc: 0xc05e794  jal         func_179E50
    ctx->pc = 0x1683BCu;
    SET_GPR_U32(ctx, 31, 0x1683C4u);
    ctx->pc = 0x179E50u;
    if (runtime->hasFunction(0x179E50u)) {
        auto targetFn = runtime->lookupFunction(0x179E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683C4u; }
        if (ctx->pc != 0x1683C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00179E50_0x179e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683C4u; }
        if (ctx->pc != 0x1683C4u) { return; }
    }
    ctx->pc = 0x1683C4u;
label_1683c4:
    // 0x1683c4: 0xc05e320  jal         func_178C80
    ctx->pc = 0x1683C4u;
    SET_GPR_U32(ctx, 31, 0x1683CCu);
    ctx->pc = 0x1683C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1683C4u;
            // 0x1683c8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178C80u;
    if (runtime->hasFunction(0x178C80u)) {
        auto targetFn = runtime->lookupFunction(0x178C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683CCu; }
        if (ctx->pc != 0x1683CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178C80_0x178c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683CCu; }
        if (ctx->pc != 0x1683CCu) { return; }
    }
    ctx->pc = 0x1683CCu;
label_1683cc:
    // 0x1683cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1683ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1683d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1683d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1683d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1683d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1683d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1683D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1683DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1683D8u;
            // 0x1683dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1683E0u;
    // 0x1683e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1683e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1683e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1683e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1683e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1683e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1683ec: 0xc05a144  jal         func_168510
    ctx->pc = 0x1683ECu;
    SET_GPR_U32(ctx, 31, 0x1683F4u);
    ctx->pc = 0x1683F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1683ECu;
            // 0x1683f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168510u;
    if (runtime->hasFunction(0x168510u)) {
        auto targetFn = runtime->lookupFunction(0x168510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683F4u; }
        if (ctx->pc != 0x1683F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168510_0x168510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683F4u; }
        if (ctx->pc != 0x1683F4u) { return; }
    }
    ctx->pc = 0x1683F4u;
label_1683f4:
    // 0x1683f4: 0xc05a106  jal         func_168418
    ctx->pc = 0x1683F4u;
    SET_GPR_U32(ctx, 31, 0x1683FCu);
    ctx->pc = 0x1683F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1683F4u;
            // 0x1683f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168418u;
    if (runtime->hasFunction(0x168418u)) {
        auto targetFn = runtime->lookupFunction(0x168418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683FCu; }
        if (ctx->pc != 0x1683FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168418_0x168418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683FCu; }
        if (ctx->pc != 0x1683FCu) { return; }
    }
    ctx->pc = 0x1683FCu;
label_1683fc:
    // 0x1683fc: 0xc05a146  jal         func_168518
    ctx->pc = 0x1683FCu;
    SET_GPR_U32(ctx, 31, 0x168404u);
    ctx->pc = 0x168400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1683FCu;
            // 0x168400: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168518u;
    if (runtime->hasFunction(0x168518u)) {
        auto targetFn = runtime->lookupFunction(0x168518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168404u; }
        if (ctx->pc != 0x168404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168518_0x168518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168404u; }
        if (ctx->pc != 0x168404u) { return; }
    }
    ctx->pc = 0x168404u;
label_168404:
    // 0x168404: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x168404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x168408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16840c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16840cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168410: 0x3e00008  jr          $ra
    ctx->pc = 0x168410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168410u;
            // 0x168414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168418u;
}
