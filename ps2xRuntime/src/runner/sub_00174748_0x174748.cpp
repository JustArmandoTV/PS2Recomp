#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174748
// Address: 0x174748 - 0x1747f0
void sub_00174748_0x174748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174748_0x174748");
#endif

    switch (ctx->pc) {
        case 0x174748u: goto label_174748;
        case 0x17474cu: goto label_17474c;
        case 0x174750u: goto label_174750;
        case 0x174754u: goto label_174754;
        case 0x174758u: goto label_174758;
        case 0x17475cu: goto label_17475c;
        case 0x174760u: goto label_174760;
        case 0x174764u: goto label_174764;
        case 0x174768u: goto label_174768;
        case 0x17476cu: goto label_17476c;
        case 0x174770u: goto label_174770;
        case 0x174774u: goto label_174774;
        case 0x174778u: goto label_174778;
        case 0x17477cu: goto label_17477c;
        case 0x174780u: goto label_174780;
        case 0x174784u: goto label_174784;
        case 0x174788u: goto label_174788;
        case 0x17478cu: goto label_17478c;
        case 0x174790u: goto label_174790;
        case 0x174794u: goto label_174794;
        case 0x174798u: goto label_174798;
        case 0x17479cu: goto label_17479c;
        case 0x1747a0u: goto label_1747a0;
        case 0x1747a4u: goto label_1747a4;
        case 0x1747a8u: goto label_1747a8;
        case 0x1747acu: goto label_1747ac;
        case 0x1747b0u: goto label_1747b0;
        case 0x1747b4u: goto label_1747b4;
        case 0x1747b8u: goto label_1747b8;
        case 0x1747bcu: goto label_1747bc;
        case 0x1747c0u: goto label_1747c0;
        case 0x1747c4u: goto label_1747c4;
        case 0x1747c8u: goto label_1747c8;
        case 0x1747ccu: goto label_1747cc;
        case 0x1747d0u: goto label_1747d0;
        case 0x1747d4u: goto label_1747d4;
        case 0x1747d8u: goto label_1747d8;
        case 0x1747dcu: goto label_1747dc;
        case 0x1747e0u: goto label_1747e0;
        case 0x1747e4u: goto label_1747e4;
        case 0x1747e8u: goto label_1747e8;
        case 0x1747ecu: goto label_1747ec;
        default: break;
    }

    ctx->pc = 0x174748u;

label_174748:
    // 0x174748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17474c:
    // 0x17474c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_174750:
    if (ctx->pc == 0x174750u) {
        ctx->pc = 0x174750u;
            // 0x174750: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x174754u;
        goto label_174754;
    }
    ctx->pc = 0x17474Cu;
    {
        const bool branch_taken_0x17474c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x174750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17474Cu;
            // 0x174750: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17474c) {
            ctx->pc = 0x17475Cu;
            goto label_17475c;
        }
    }
    ctx->pc = 0x174754u;
label_174754:
    // 0x174754: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
label_174758:
    if (ctx->pc == 0x174758u) {
        ctx->pc = 0x174758u;
            // 0x174758: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x17475Cu;
        goto label_17475c;
    }
    ctx->pc = 0x174754u;
    {
        const bool branch_taken_0x174754 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x174758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174754u;
            // 0x174758: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174754) {
            ctx->pc = 0x174770u;
            goto label_174770;
        }
    }
    ctx->pc = 0x17475Cu;
label_17475c:
    // 0x17475c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17475cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_174760:
    // 0x174760: 0xc059f4e  jal         func_167D38
label_174764:
    if (ctx->pc == 0x174764u) {
        ctx->pc = 0x174764u;
            // 0x174764: 0x24844548  addiu       $a0, $a0, 0x4548 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17736));
        ctx->pc = 0x174768u;
        goto label_174768;
    }
    ctx->pc = 0x174760u;
    SET_GPR_U32(ctx, 31, 0x174768u);
    ctx->pc = 0x174764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174760u;
            // 0x174764: 0x24844548  addiu       $a0, $a0, 0x4548 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174768u; }
        if (ctx->pc != 0x174768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174768u; }
        if (ctx->pc != 0x174768u) { return; }
    }
    ctx->pc = 0x174768u;
label_174768:
    // 0x174768: 0x1000000e  b           . + 4 + (0xE << 2)
label_17476c:
    if (ctx->pc == 0x17476Cu) {
        ctx->pc = 0x17476Cu;
            // 0x17476c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x174770u;
        goto label_174770;
    }
    ctx->pc = 0x174768u;
    {
        const bool branch_taken_0x174768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17476Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174768u;
            // 0x17476c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174768) {
            ctx->pc = 0x1747A4u;
            goto label_1747a4;
        }
    }
    ctx->pc = 0x174770u;
label_174770:
    // 0x174770: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x174770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_174774:
    // 0x174774: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x174774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_174778:
    // 0x174778: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_17477c:
    if (ctx->pc == 0x17477Cu) {
        ctx->pc = 0x17477Cu;
            // 0x17477c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174780u;
        goto label_174780;
    }
    ctx->pc = 0x174778u;
    {
        const bool branch_taken_0x174778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17477Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174778u;
            // 0x17477c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174778) {
            ctx->pc = 0x1747A0u;
            goto label_1747a0;
        }
    }
    ctx->pc = 0x174780u;
label_174780:
    // 0x174780: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x174780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_174784:
    // 0x174784: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x174784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_174788:
    // 0x174788: 0x40f809  jalr        $v0
label_17478c:
    if (ctx->pc == 0x17478Cu) {
        ctx->pc = 0x17478Cu;
            // 0x17478c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x174790u;
        goto label_174790;
    }
    ctx->pc = 0x174788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174790u);
        ctx->pc = 0x17478Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174788u;
            // 0x17478c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174790u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174790u; }
            if (ctx->pc != 0x174790u) { return; }
        }
        }
    }
    ctx->pc = 0x174790u;
label_174790:
    // 0x174790: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x174790u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_174794:
    // 0x174794: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x174794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_174798:
    // 0x174798: 0x10000002  b           . + 4 + (0x2 << 2)
label_17479c:
    if (ctx->pc == 0x17479Cu) {
        ctx->pc = 0x17479Cu;
            // 0x17479c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x1747A0u;
        goto label_1747a0;
    }
    ctx->pc = 0x174798u;
    {
        const bool branch_taken_0x174798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17479Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174798u;
            // 0x17479c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174798) {
            ctx->pc = 0x1747A4u;
            goto label_1747a4;
        }
    }
    ctx->pc = 0x1747A0u;
label_1747a0:
    // 0x1747a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1747a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1747a4:
    // 0x1747a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1747a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1747a8:
    // 0x1747a8: 0x3e00008  jr          $ra
label_1747ac:
    if (ctx->pc == 0x1747ACu) {
        ctx->pc = 0x1747ACu;
            // 0x1747ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1747B0u;
        goto label_1747b0;
    }
    ctx->pc = 0x1747A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1747ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1747A8u;
            // 0x1747ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1747B0u;
label_1747b0:
    // 0x1747b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1747b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1747b4:
    // 0x1747b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1747b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1747b8:
    // 0x1747b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1747b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1747bc:
    // 0x1747bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1747bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1747c0:
    // 0x1747c0: 0xc0599de  jal         func_166778
label_1747c4:
    if (ctx->pc == 0x1747C4u) {
        ctx->pc = 0x1747C4u;
            // 0x1747c4: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->pc = 0x1747C8u;
        goto label_1747c8;
    }
    ctx->pc = 0x1747C0u;
    SET_GPR_U32(ctx, 31, 0x1747C8u);
    ctx->pc = 0x1747C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747C0u;
            // 0x1747c4: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747C8u; }
        if (ctx->pc != 0x1747C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747C8u; }
        if (ctx->pc != 0x1747C8u) { return; }
    }
    ctx->pc = 0x1747C8u;
label_1747c8:
    // 0x1747c8: 0xc05d1fc  jal         func_1747F0
label_1747cc:
    if (ctx->pc == 0x1747CCu) {
        ctx->pc = 0x1747CCu;
            // 0x1747cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1747D0u;
        goto label_1747d0;
    }
    ctx->pc = 0x1747C8u;
    SET_GPR_U32(ctx, 31, 0x1747D0u);
    ctx->pc = 0x1747CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747C8u;
            // 0x1747cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1747F0u;
    if (runtime->hasFunction(0x1747F0u)) {
        auto targetFn = runtime->lookupFunction(0x1747F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747D0u; }
        if (ctx->pc != 0x1747D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001747F0_0x1747f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747D0u; }
        if (ctx->pc != 0x1747D0u) { return; }
    }
    ctx->pc = 0x1747D0u;
label_1747d0:
    // 0x1747d0: 0xc0599e0  jal         func_166780
label_1747d4:
    if (ctx->pc == 0x1747D4u) {
        ctx->pc = 0x1747D4u;
            // 0x1747d4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1747D8u;
        goto label_1747d8;
    }
    ctx->pc = 0x1747D0u;
    SET_GPR_U32(ctx, 31, 0x1747D8u);
    ctx->pc = 0x1747D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747D0u;
            // 0x1747d4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747D8u; }
        if (ctx->pc != 0x1747D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747D8u; }
        if (ctx->pc != 0x1747D8u) { return; }
    }
    ctx->pc = 0x1747D8u;
label_1747d8:
    // 0x1747d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1747d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1747dc:
    // 0x1747dc: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1747dcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1747e0:
    // 0x1747e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1747e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1747e4:
    // 0x1747e4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1747e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1747e8:
    // 0x1747e8: 0x3e00008  jr          $ra
label_1747ec:
    if (ctx->pc == 0x1747ECu) {
        ctx->pc = 0x1747ECu;
            // 0x1747ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1747F0u;
        goto label_fallthrough_0x1747e8;
    }
    ctx->pc = 0x1747E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1747ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1747E8u;
            // 0x1747ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1747e8:
    ctx->pc = 0x1747F0u;
}
