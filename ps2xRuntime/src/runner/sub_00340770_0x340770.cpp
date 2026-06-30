#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00340770
// Address: 0x340770 - 0x340a00
void sub_00340770_0x340770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340770_0x340770");
#endif

    switch (ctx->pc) {
        case 0x34079cu: goto label_34079c;
        case 0x3407e0u: goto label_3407e0;
        case 0x3407f0u: goto label_3407f0;
        case 0x340800u: goto label_340800;
        case 0x340830u: goto label_340830;
        case 0x340858u: goto label_340858;
        case 0x340894u: goto label_340894;
        case 0x3408bcu: goto label_3408bc;
        case 0x3408e8u: goto label_3408e8;
        case 0x3408f4u: goto label_3408f4;
        case 0x340904u: goto label_340904;
        case 0x340914u: goto label_340914;
        case 0x340924u: goto label_340924;
        case 0x340944u: goto label_340944;
        case 0x340964u: goto label_340964;
        case 0x34096cu: goto label_34096c;
        case 0x340990u: goto label_340990;
        default: break;
    }

    ctx->pc = 0x340770u;

    // 0x340770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x340770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x340774: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x340774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x340778: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x340778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34077c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34077cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x340780: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x340780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x340784: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x340788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34078c: 0x8c70d130  lw          $s0, -0x2ED0($v1)
    ctx->pc = 0x34078cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x340790: 0x8c510e84  lw          $s1, 0xE84($v0)
    ctx->pc = 0x340790u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
    // 0x340794: 0xc0cc888  jal         func_332220
    ctx->pc = 0x340794u;
    SET_GPR_U32(ctx, 31, 0x34079Cu);
    ctx->pc = 0x340798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340794u;
            // 0x340798: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x332220u;
    if (runtime->hasFunction(0x332220u)) {
        auto targetFn = runtime->lookupFunction(0x332220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34079Cu; }
        if (ctx->pc != 0x34079Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00332220_0x332220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34079Cu; }
        if (ctx->pc != 0x34079Cu) { return; }
    }
    ctx->pc = 0x34079Cu;
label_34079c:
    // 0x34079c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x34079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3407a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3407a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3407a4: 0xae430ca8  sw          $v1, 0xCA8($s2)
    ctx->pc = 0x3407a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3240), GPR_U32(ctx, 3));
    // 0x3407a8: 0x26440d3c  addiu       $a0, $s2, 0xD3C
    ctx->pc = 0x3407a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3388));
    // 0x3407ac: 0xae400d1c  sw          $zero, 0xD1C($s2)
    ctx->pc = 0x3407acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3356), GPR_U32(ctx, 0));
    // 0x3407b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3407b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3407b4: 0xae420d24  sw          $v0, 0xD24($s2)
    ctx->pc = 0x3407b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3364), GPR_U32(ctx, 2));
    // 0x3407b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3407b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3407bc: 0xa2400d3a  sb          $zero, 0xD3A($s2)
    ctx->pc = 0x3407bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3386), (uint8_t)GPR_U32(ctx, 0));
    // 0x3407c0: 0xae400d20  sw          $zero, 0xD20($s2)
    ctx->pc = 0x3407c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3360), GPR_U32(ctx, 0));
    // 0x3407c4: 0xa6400d30  sh          $zero, 0xD30($s2)
    ctx->pc = 0x3407c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3376), (uint16_t)GPR_U32(ctx, 0));
    // 0x3407c8: 0xa2400cc2  sb          $zero, 0xCC2($s2)
    ctx->pc = 0x3407c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3266), (uint8_t)GPR_U32(ctx, 0));
    // 0x3407cc: 0xa2400d10  sb          $zero, 0xD10($s2)
    ctx->pc = 0x3407ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3344), (uint8_t)GPR_U32(ctx, 0));
    // 0x3407d0: 0xa2400cc3  sb          $zero, 0xCC3($s2)
    ctx->pc = 0x3407d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3267), (uint8_t)GPR_U32(ctx, 0));
    // 0x3407d4: 0xa2400d32  sb          $zero, 0xD32($s2)
    ctx->pc = 0x3407d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3378), (uint8_t)GPR_U32(ctx, 0));
    // 0x3407d8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3407D8u;
    SET_GPR_U32(ctx, 31, 0x3407E0u);
    ctx->pc = 0x3407DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3407D8u;
            // 0x3407dc: 0xae400d2c  sw          $zero, 0xD2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3407E0u; }
        if (ctx->pc != 0x3407E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3407E0u; }
        if (ctx->pc != 0x3407E0u) { return; }
    }
    ctx->pc = 0x3407E0u;
label_3407e0:
    // 0x3407e0: 0x26440d40  addiu       $a0, $s2, 0xD40
    ctx->pc = 0x3407e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3392));
    // 0x3407e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3407e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3407e8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3407E8u;
    SET_GPR_U32(ctx, 31, 0x3407F0u);
    ctx->pc = 0x3407ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3407E8u;
            // 0x3407ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3407F0u; }
        if (ctx->pc != 0x3407F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3407F0u; }
        if (ctx->pc != 0x3407F0u) { return; }
    }
    ctx->pc = 0x3407F0u;
label_3407f0:
    // 0x3407f0: 0x26440d33  addiu       $a0, $s2, 0xD33
    ctx->pc = 0x3407f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3379));
    // 0x3407f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3407f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3407f8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3407F8u;
    SET_GPR_U32(ctx, 31, 0x340800u);
    ctx->pc = 0x3407FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3407F8u;
            // 0x3407fc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340800u; }
        if (ctx->pc != 0x340800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340800u; }
        if (ctx->pc != 0x340800u) { return; }
    }
    ctx->pc = 0x340800u;
label_340800:
    // 0x340800: 0x92420ce5  lbu         $v0, 0xCE5($s2)
    ctx->pc = 0x340800u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3301)));
    // 0x340804: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x340804u;
    {
        const bool branch_taken_0x340804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340804) {
            ctx->pc = 0x340808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340804u;
            // 0x340808: 0x2409003b  addiu       $t1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340838u;
            goto label_340838;
        }
    }
    ctx->pc = 0x34080Cu;
    // 0x34080c: 0x2409003b  addiu       $t1, $zero, 0x3B
    ctx->pc = 0x34080cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x340810: 0x26440814  addiu       $a0, $s2, 0x814
    ctx->pc = 0x340810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2068));
    // 0x340814: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x340814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x340818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x340818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34081c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x34081cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x340820: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x340820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340824: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x340824u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340828: 0xc0bc754  jal         func_2F1D50
    ctx->pc = 0x340828u;
    SET_GPR_U32(ctx, 31, 0x340830u);
    ctx->pc = 0x34082Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340828u;
            // 0x34082c: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D50u;
    if (runtime->hasFunction(0x2F1D50u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340830u; }
        if (ctx->pc != 0x340830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D50_0x2f1d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340830u; }
        if (ctx->pc != 0x340830u) { return; }
    }
    ctx->pc = 0x340830u;
label_340830:
    // 0x340830: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x340830u;
    {
        const bool branch_taken_0x340830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340830u;
            // 0x340834: 0x92430ce4  lbu         $v1, 0xCE4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340830) {
            ctx->pc = 0x34085Cu;
            goto label_34085c;
        }
    }
    ctx->pc = 0x340838u;
label_340838:
    // 0x340838: 0x26440814  addiu       $a0, $s2, 0x814
    ctx->pc = 0x340838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2068));
    // 0x34083c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34083cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x340840: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x340840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340844: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x340844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340848: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x340848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34084c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x34084cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340850: 0xc0bc754  jal         func_2F1D50
    ctx->pc = 0x340850u;
    SET_GPR_U32(ctx, 31, 0x340858u);
    ctx->pc = 0x340854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340850u;
            // 0x340854: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D50u;
    if (runtime->hasFunction(0x2F1D50u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340858u; }
        if (ctx->pc != 0x340858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D50_0x2f1d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340858u; }
        if (ctx->pc != 0x340858u) { return; }
    }
    ctx->pc = 0x340858u;
label_340858:
    // 0x340858: 0x92430ce4  lbu         $v1, 0xCE4($s2)
    ctx->pc = 0x340858u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
label_34085c:
    // 0x34085c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x34085Cu;
    {
        const bool branch_taken_0x34085c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34085c) {
            ctx->pc = 0x340860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34085Cu;
            // 0x340860: 0x24090063  addiu       $t1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340874u;
            goto label_340874;
        }
    }
    ctx->pc = 0x340864u;
    // 0x340864: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x340864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x340868: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x340868u;
    {
        const bool branch_taken_0x340868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340868) {
            ctx->pc = 0x34086Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340868u;
            // 0x34086c: 0x92460cbc  lbu         $a2, 0xCBC($s2) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34089Cu;
            goto label_34089c;
        }
    }
    ctx->pc = 0x340870u;
    // 0x340870: 0x24090063  addiu       $t1, $zero, 0x63
    ctx->pc = 0x340870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_340874:
    // 0x340874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x340874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340878: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x340878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34087c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34087cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340880: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x340880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340884: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x340884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340888: 0x240a003b  addiu       $t2, $zero, 0x3B
    ctx->pc = 0x340888u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x34088c: 0xc0cc878  jal         func_3321E0
    ctx->pc = 0x34088Cu;
    SET_GPR_U32(ctx, 31, 0x340894u);
    ctx->pc = 0x340890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34088Cu;
            // 0x340890: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3321E0u;
    if (runtime->hasFunction(0x3321E0u)) {
        auto targetFn = runtime->lookupFunction(0x3321E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340894u; }
        if (ctx->pc != 0x340894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003321E0_0x3321e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340894u; }
        if (ctx->pc != 0x340894u) { return; }
    }
    ctx->pc = 0x340894u;
label_340894:
    // 0x340894: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x340894u;
    {
        const bool branch_taken_0x340894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340894u;
            // 0x340898: 0x8e440d28  lw          $a0, 0xD28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340894) {
            ctx->pc = 0x3408C0u;
            goto label_3408c0;
        }
    }
    ctx->pc = 0x34089Cu;
label_34089c:
    // 0x34089c: 0x2409003b  addiu       $t1, $zero, 0x3B
    ctx->pc = 0x34089cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x3408a0: 0x92470cbd  lbu         $a3, 0xCBD($s2)
    ctx->pc = 0x3408a0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3261)));
    // 0x3408a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3408a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3408a8: 0x96480cbe  lhu         $t0, 0xCBE($s2)
    ctx->pc = 0x3408a8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3262)));
    // 0x3408ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3408acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3408b0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x3408b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3408b4: 0xc0cc878  jal         func_3321E0
    ctx->pc = 0x3408B4u;
    SET_GPR_U32(ctx, 31, 0x3408BCu);
    ctx->pc = 0x3408B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3408B4u;
            // 0x3408b8: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3321E0u;
    if (runtime->hasFunction(0x3321E0u)) {
        auto targetFn = runtime->lookupFunction(0x3321E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3408BCu; }
        if (ctx->pc != 0x3408BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003321E0_0x3321e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3408BCu; }
        if (ctx->pc != 0x3408BCu) { return; }
    }
    ctx->pc = 0x3408BCu;
label_3408bc:
    // 0x3408bc: 0x8e440d28  lw          $a0, 0xD28($s2)
    ctx->pc = 0x3408bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3368)));
label_3408c0:
    // 0x3408c0: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3408C0u;
    {
        const bool branch_taken_0x3408c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3408c0) {
            ctx->pc = 0x3408C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3408C0u;
            // 0x3408c4: 0x8e450d00  lw          $a1, 0xD00($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3328)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3408ECu;
            goto label_3408ec;
        }
    }
    ctx->pc = 0x3408C8u;
    // 0x3408c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3408c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3408cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3408ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3408d0: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x3408d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x3408d4: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x3408d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x3408d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3408d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3408dc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x3408dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3408e0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3408E0u;
    SET_GPR_U32(ctx, 31, 0x3408E8u);
    ctx->pc = 0x3408E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3408E0u;
            // 0x3408e4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3408E8u; }
        if (ctx->pc != 0x3408E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3408E8u; }
        if (ctx->pc != 0x3408E8u) { return; }
    }
    ctx->pc = 0x3408E8u;
label_3408e8:
    // 0x3408e8: 0x8e450d00  lw          $a1, 0xD00($s2)
    ctx->pc = 0x3408e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3328)));
label_3408ec:
    // 0x3408ec: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x3408ECu;
    SET_GPR_U32(ctx, 31, 0x3408F4u);
    ctx->pc = 0x3408F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3408ECu;
            // 0x3408f0: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3408F4u; }
        if (ctx->pc != 0x3408F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3408F4u; }
        if (ctx->pc != 0x3408F4u) { return; }
    }
    ctx->pc = 0x3408F4u;
label_3408f4:
    // 0x3408f4: 0xae400d00  sw          $zero, 0xD00($s2)
    ctx->pc = 0x3408f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3328), GPR_U32(ctx, 0));
    // 0x3408f8: 0x8e450d08  lw          $a1, 0xD08($s2)
    ctx->pc = 0x3408f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3336)));
    // 0x3408fc: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x3408FCu;
    SET_GPR_U32(ctx, 31, 0x340904u);
    ctx->pc = 0x340900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3408FCu;
            // 0x340900: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340904u; }
        if (ctx->pc != 0x340904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340904u; }
        if (ctx->pc != 0x340904u) { return; }
    }
    ctx->pc = 0x340904u;
label_340904:
    // 0x340904: 0xae400d08  sw          $zero, 0xD08($s2)
    ctx->pc = 0x340904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3336), GPR_U32(ctx, 0));
    // 0x340908: 0x8e450cd0  lw          $a1, 0xCD0($s2)
    ctx->pc = 0x340908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3280)));
    // 0x34090c: 0xc075ecc  jal         func_1D7B30
    ctx->pc = 0x34090Cu;
    SET_GPR_U32(ctx, 31, 0x340914u);
    ctx->pc = 0x340910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34090Cu;
            // 0x340910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340914u; }
        if (ctx->pc != 0x340914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340914u; }
        if (ctx->pc != 0x340914u) { return; }
    }
    ctx->pc = 0x340914u;
label_340914:
    // 0x340914: 0xc6400ccc  lwc1        $f0, 0xCCC($s2)
    ctx->pc = 0x340914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340918: 0x26240a50  addiu       $a0, $s1, 0xA50
    ctx->pc = 0x340918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
    // 0x34091c: 0xc0eea24  jal         func_3BA890
    ctx->pc = 0x34091Cu;
    SET_GPR_U32(ctx, 31, 0x340924u);
    ctx->pc = 0x340920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34091Cu;
            // 0x340920: 0xe6200a7c  swc1        $f0, 0xA7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340924u; }
        if (ctx->pc != 0x340924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340924u; }
        if (ctx->pc != 0x340924u) { return; }
    }
    ctx->pc = 0x340924u;
label_340924:
    // 0x340924: 0x92430ce4  lbu         $v1, 0xCE4($s2)
    ctx->pc = 0x340924u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
    // 0x340928: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x340928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34092c: 0x2442fed0  addiu       $v0, $v0, -0x130
    ctx->pc = 0x34092cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966992));
    // 0x340930: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x340930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x340934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340938: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x340938u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34093c: 0xc0753ec  jal         func_1D4FB0
    ctx->pc = 0x34093Cu;
    SET_GPR_U32(ctx, 31, 0x340944u);
    ctx->pc = 0x340940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34093Cu;
            // 0x340940: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4FB0u;
    if (runtime->hasFunction(0x1D4FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340944u; }
        if (ctx->pc != 0x340944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4FB0_0x1d4fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340944u; }
        if (ctx->pc != 0x340944u) { return; }
    }
    ctx->pc = 0x340944u;
label_340944:
    // 0x340944: 0x92430ce4  lbu         $v1, 0xCE4($s2)
    ctx->pc = 0x340944u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
    // 0x340948: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x340948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34094c: 0x2442fed4  addiu       $v0, $v0, -0x12C
    ctx->pc = 0x34094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966996));
    // 0x340950: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x340950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x340954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340958: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x340958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34095c: 0xc0753e8  jal         func_1D4FA0
    ctx->pc = 0x34095Cu;
    SET_GPR_U32(ctx, 31, 0x340964u);
    ctx->pc = 0x340960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34095Cu;
            // 0x340960: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4FA0u;
    if (runtime->hasFunction(0x1D4FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340964u; }
        if (ctx->pc != 0x340964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4FA0_0x1d4fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340964u; }
        if (ctx->pc != 0x340964u) { return; }
    }
    ctx->pc = 0x340964u;
label_340964:
    // 0x340964: 0xc0754e0  jal         func_1D5380
    ctx->pc = 0x340964u;
    SET_GPR_U32(ctx, 31, 0x34096Cu);
    ctx->pc = 0x340968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340964u;
            // 0x340968: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5380u;
    if (runtime->hasFunction(0x1D5380u)) {
        auto targetFn = runtime->lookupFunction(0x1D5380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34096Cu; }
        if (ctx->pc != 0x34096Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5380_0x1d5380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34096Cu; }
        if (ctx->pc != 0x34096Cu) { return; }
    }
    ctx->pc = 0x34096Cu;
label_34096c:
    // 0x34096c: 0x92440ce4  lbu         $a0, 0xCE4($s2)
    ctx->pc = 0x34096cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
    // 0x340970: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x340970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x340974: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x340974u;
    {
        const bool branch_taken_0x340974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x340974) {
            ctx->pc = 0x3409B8u;
            goto label_3409b8;
        }
    }
    ctx->pc = 0x34097Cu;
    // 0x34097c: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x34097cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x340980: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x340980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340984: 0x24e70e80  addiu       $a3, $a3, 0xE80
    ctx->pc = 0x340984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
    // 0x340988: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x340988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x34098c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34098cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_340990:
    // 0x340990: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x340990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x340994: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x340994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x340998: 0xacc50db8  sw          $a1, 0xDB8($a2)
    ctx->pc = 0x340998u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3512), GPR_U32(ctx, 5));
    // 0x34099c: 0x8cc30d60  lw          $v1, 0xD60($a2)
    ctx->pc = 0x34099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3424)));
    // 0x3409a0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3409a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3409a4: 0xa0c411a1  sb          $a0, 0x11A1($a2)
    ctx->pc = 0x3409a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4513), (uint8_t)GPR_U32(ctx, 4));
    // 0x3409a8: 0x8e43077c  lw          $v1, 0x77C($s2)
    ctx->pc = 0x3409a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1916)));
    // 0x3409ac: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x3409acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3409b0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3409B0u;
    {
        const bool branch_taken_0x3409b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3409B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3409B0u;
            // 0x3409b4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3409b0) {
            ctx->pc = 0x340990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_340990;
        }
    }
    ctx->pc = 0x3409B8u;
label_3409b8:
    // 0x3409b8: 0x8e440968  lw          $a0, 0x968($s2)
    ctx->pc = 0x3409b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
    // 0x3409bc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3409bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3409c0: 0x54830009  bnel        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3409C0u;
    {
        const bool branch_taken_0x3409c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3409c0) {
            ctx->pc = 0x3409C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3409C0u;
            // 0x3409c4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3409E8u;
            goto label_3409e8;
        }
    }
    ctx->pc = 0x3409C8u;
    // 0x3409c8: 0x8e440cc4  lw          $a0, 0xCC4($s2)
    ctx->pc = 0x3409c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3268)));
    // 0x3409cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3409ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3409d0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3409D0u;
    {
        const bool branch_taken_0x3409d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3409d0) {
            ctx->pc = 0x3409E4u;
            goto label_3409e4;
        }
    }
    ctx->pc = 0x3409D8u;
    // 0x3409d8: 0x8e230a5c  lw          $v1, 0xA5C($s1)
    ctx->pc = 0x3409d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2652)));
    // 0x3409dc: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x3409dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x3409e0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x3409e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_3409e4:
    // 0x3409e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3409e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3409e8:
    // 0x3409e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3409e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3409ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3409ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3409f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3409f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3409f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3409F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3409F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3409F4u;
            // 0x3409f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3409FCu;
    // 0x3409fc: 0x0  nop
    ctx->pc = 0x3409fcu;
    // NOP
}
