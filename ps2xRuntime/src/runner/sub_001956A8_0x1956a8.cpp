#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001956A8
// Address: 0x1956a8 - 0x195798
void sub_001956A8_0x1956a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001956A8_0x1956a8");
#endif

    switch (ctx->pc) {
        case 0x1956a8u: goto label_1956a8;
        case 0x1956acu: goto label_1956ac;
        case 0x1956b0u: goto label_1956b0;
        case 0x1956b4u: goto label_1956b4;
        case 0x1956b8u: goto label_1956b8;
        case 0x1956bcu: goto label_1956bc;
        case 0x1956c0u: goto label_1956c0;
        case 0x1956c4u: goto label_1956c4;
        case 0x1956c8u: goto label_1956c8;
        case 0x1956ccu: goto label_1956cc;
        case 0x1956d0u: goto label_1956d0;
        case 0x1956d4u: goto label_1956d4;
        case 0x1956d8u: goto label_1956d8;
        case 0x1956dcu: goto label_1956dc;
        case 0x1956e0u: goto label_1956e0;
        case 0x1956e4u: goto label_1956e4;
        case 0x1956e8u: goto label_1956e8;
        case 0x1956ecu: goto label_1956ec;
        case 0x1956f0u: goto label_1956f0;
        case 0x1956f4u: goto label_1956f4;
        case 0x1956f8u: goto label_1956f8;
        case 0x1956fcu: goto label_1956fc;
        case 0x195700u: goto label_195700;
        case 0x195704u: goto label_195704;
        case 0x195708u: goto label_195708;
        case 0x19570cu: goto label_19570c;
        case 0x195710u: goto label_195710;
        case 0x195714u: goto label_195714;
        case 0x195718u: goto label_195718;
        case 0x19571cu: goto label_19571c;
        case 0x195720u: goto label_195720;
        case 0x195724u: goto label_195724;
        case 0x195728u: goto label_195728;
        case 0x19572cu: goto label_19572c;
        case 0x195730u: goto label_195730;
        case 0x195734u: goto label_195734;
        case 0x195738u: goto label_195738;
        case 0x19573cu: goto label_19573c;
        case 0x195740u: goto label_195740;
        case 0x195744u: goto label_195744;
        case 0x195748u: goto label_195748;
        case 0x19574cu: goto label_19574c;
        case 0x195750u: goto label_195750;
        case 0x195754u: goto label_195754;
        case 0x195758u: goto label_195758;
        case 0x19575cu: goto label_19575c;
        case 0x195760u: goto label_195760;
        case 0x195764u: goto label_195764;
        case 0x195768u: goto label_195768;
        case 0x19576cu: goto label_19576c;
        case 0x195770u: goto label_195770;
        case 0x195774u: goto label_195774;
        case 0x195778u: goto label_195778;
        case 0x19577cu: goto label_19577c;
        case 0x195780u: goto label_195780;
        case 0x195784u: goto label_195784;
        case 0x195788u: goto label_195788;
        case 0x19578cu: goto label_19578c;
        case 0x195790u: goto label_195790;
        case 0x195794u: goto label_195794;
        default: break;
    }

    ctx->pc = 0x1956a8u;

label_1956a8:
    // 0x1956a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1956a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1956ac:
    // 0x1956ac: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1956acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1956b0:
    // 0x1956b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1956b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1956b4:
    // 0x1956b4: 0x2410fffc  addiu       $s0, $zero, -0x4
    ctx->pc = 0x1956b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1956b8:
    // 0x1956b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1956b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1956bc:
    // 0x1956bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1956bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1956c0:
    // 0x1956c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1956c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1956c4:
    // 0x1956c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1956c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1956c8:
    // 0x1956c8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1956c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1956cc:
    // 0x1956cc: 0x263303ac  addiu       $s3, $s1, 0x3AC
    ctx->pc = 0x1956ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 940));
label_1956d0:
    // 0x1956d0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1956d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1956d4:
    // 0x1956d4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1956d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1956d8:
    // 0x1956d8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1956d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1956dc:
    // 0x1956dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1956dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1956e0:
    // 0x1956e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1956e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1956e4:
    // 0x1956e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1956e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1956e8:
    // 0x1956e8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1956e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1956ec:
    // 0x1956ec: 0x60f809  jalr        $v1
label_1956f0:
    if (ctx->pc == 0x1956F0u) {
        ctx->pc = 0x1956F0u;
            // 0x1956f0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1956F4u;
        goto label_1956f4;
    }
    ctx->pc = 0x1956ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1956F4u);
        ctx->pc = 0x1956F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1956ECu;
            // 0x1956f0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1956F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1956F4u; }
            if (ctx->pc != 0x1956F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1956F4u;
label_1956f4:
    // 0x1956f4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1956f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1956f8:
    // 0x1956f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1956f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1956fc:
    // 0x1956fc: 0xb08024  and         $s0, $a1, $s0
    ctx->pc = 0x1956fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
label_195700:
    // 0x195700: 0x8c8603b0  lw          $a2, 0x3B0($a0)
    ctx->pc = 0x195700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 944)));
label_195704:
    // 0x195704: 0xb08823  subu        $s1, $a1, $s0
    ctx->pc = 0x195704u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_195708:
    // 0x195708: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x195708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_19570c:
    // 0x19570c: 0xc0655e6  jal         func_195798
label_195710:
    if (ctx->pc == 0x195710u) {
        ctx->pc = 0x195710u;
            // 0x195710: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->pc = 0x195714u;
        goto label_195714;
    }
    ctx->pc = 0x19570Cu;
    SET_GPR_U32(ctx, 31, 0x195714u);
    ctx->pc = 0x195710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19570Cu;
            // 0x195710: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195798u;
    if (runtime->hasFunction(0x195798u)) {
        auto targetFn = runtime->lookupFunction(0x195798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195714u; }
        if (ctx->pc != 0x195714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195798_0x195798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195714u; }
        if (ctx->pc != 0x195714u) { return; }
    }
    ctx->pc = 0x195714u;
label_195714:
    // 0x195714: 0x1188c3  sra         $s1, $s1, 3
    ctx->pc = 0x195714u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 3));
label_195718:
    // 0x195718: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x195718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_19571c:
    // 0x19571c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x19571cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_195720:
    // 0x195720: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x195720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_195724:
    // 0x195724: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x195724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_195728:
    // 0x195728: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x195728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19572c:
    // 0x19572c: 0x2052823  subu        $a1, $s0, $a1
    ctx->pc = 0x19572cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_195730:
    // 0x195730: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x195730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_195734:
    // 0x195734: 0xc061c20  jal         func_187080
label_195738:
    if (ctx->pc == 0x195738u) {
        ctx->pc = 0x195738u;
            // 0x195738: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19573Cu;
        goto label_19573c;
    }
    ctx->pc = 0x195734u;
    SET_GPR_U32(ctx, 31, 0x19573Cu);
    ctx->pc = 0x195738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195734u;
            // 0x195738: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19573Cu; }
        if (ctx->pc != 0x19573Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19573Cu; }
        if (ctx->pc != 0x19573Cu) { return; }
    }
    ctx->pc = 0x19573Cu;
label_19573c:
    // 0x19573c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_195740:
    // 0x195740: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x195740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_195744:
    // 0x195744: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_195748:
    // 0x195748: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x195748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19574c:
    // 0x19574c: 0x40f809  jalr        $v0
label_195750:
    if (ctx->pc == 0x195750u) {
        ctx->pc = 0x195750u;
            // 0x195750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195754u;
        goto label_195754;
    }
    ctx->pc = 0x19574Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195754u);
        ctx->pc = 0x195750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19574Cu;
            // 0x195750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195754u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195754u; }
            if (ctx->pc != 0x195754u) { return; }
        }
        }
    }
    ctx->pc = 0x195754u;
label_195754:
    // 0x195754: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x195754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_195758:
    // 0x195758: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19575c:
    // 0x19575c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19575cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_195760:
    // 0x195760: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x195760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_195764:
    // 0x195764: 0x40f809  jalr        $v0
label_195768:
    if (ctx->pc == 0x195768u) {
        ctx->pc = 0x195768u;
            // 0x195768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19576Cu;
        goto label_19576c;
    }
    ctx->pc = 0x195764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19576Cu);
        ctx->pc = 0x195768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195764u;
            // 0x195768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19576Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19576Cu; }
            if (ctx->pc != 0x19576Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19576Cu;
label_19576c:
    // 0x19576c: 0xc0656ca  jal         func_195B28
label_195770:
    if (ctx->pc == 0x195770u) {
        ctx->pc = 0x195770u;
            // 0x195770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195774u;
        goto label_195774;
    }
    ctx->pc = 0x19576Cu;
    SET_GPR_U32(ctx, 31, 0x195774u);
    ctx->pc = 0x195770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19576Cu;
            // 0x195770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195B28u;
    if (runtime->hasFunction(0x195B28u)) {
        auto targetFn = runtime->lookupFunction(0x195B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195774u; }
        if (ctx->pc != 0x195774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195B28_0x195b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195774u; }
        if (ctx->pc != 0x195774u) { return; }
    }
    ctx->pc = 0x195774u;
label_195774:
    // 0x195774: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x195774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195778:
    // 0x195778: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x195778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19577c:
    // 0x19577c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x19577cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_195780:
    // 0x195780: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x195780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195784:
    // 0x195784: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x195784u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_195788:
    // 0x195788: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x195788u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19578c:
    // 0x19578c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x19578cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_195790:
    // 0x195790: 0x3e00008  jr          $ra
label_195794:
    if (ctx->pc == 0x195794u) {
        ctx->pc = 0x195794u;
            // 0x195794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x195798u;
        goto label_fallthrough_0x195790;
    }
    ctx->pc = 0x195790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195790u;
            // 0x195794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x195790:
    ctx->pc = 0x195798u;
}
