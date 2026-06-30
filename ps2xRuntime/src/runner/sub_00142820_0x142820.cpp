#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00142820
// Address: 0x142820 - 0x142a20
void sub_00142820_0x142820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142820_0x142820");
#endif

    switch (ctx->pc) {
        case 0x142860u: goto label_142860;
        case 0x142868u: goto label_142868;
        case 0x142870u: goto label_142870;
        case 0x1428a4u: goto label_1428a4;
        case 0x1428c0u: goto label_1428c0;
        case 0x1429e8u: goto label_1429e8;
        default: break;
    }

    ctx->pc = 0x142820u;

    // 0x142820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x142820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x142824: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x142824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x142828: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x142828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14282c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14282cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x142830: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x142830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x142834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x142838: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x142838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14283c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14283cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142840: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x142840u;
    {
        const bool branch_taken_0x142840 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x142844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142840u;
            // 0x142844: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142840) {
            ctx->pc = 0x14284Cu;
            goto label_14284c;
        }
    }
    ctx->pc = 0x142848u;
    // 0x142848: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x142848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14284c:
    // 0x14284c: 0x8f828258  lw          $v0, -0x7DA8($gp)
    ctx->pc = 0x14284cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935128)));
    // 0x142850: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x142850u;
    {
        const bool branch_taken_0x142850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142850) {
            ctx->pc = 0x142870u;
            goto label_142870;
        }
    }
    ctx->pc = 0x142858u;
    // 0x142858: 0xc056b10  jal         func_15AC40
    ctx->pc = 0x142858u;
    SET_GPR_U32(ctx, 31, 0x142860u);
    ctx->pc = 0x15AC40u;
    if (runtime->hasFunction(0x15AC40u)) {
        auto targetFn = runtime->lookupFunction(0x15AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142860u; }
        if (ctx->pc != 0x142860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC40_0x15ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142860u; }
        if (ctx->pc != 0x142860u) { return; }
    }
    ctx->pc = 0x142860u;
label_142860:
    // 0x142860: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x142860u;
    SET_GPR_U32(ctx, 31, 0x142868u);
    ctx->pc = 0x142864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142860u;
            // 0x142864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142868u; }
        if (ctx->pc != 0x142868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142868u; }
        if (ctx->pc != 0x142868u) { return; }
    }
    ctx->pc = 0x142868u;
label_142868:
    // 0x142868: 0xaf82825c  sw          $v0, -0x7DA4($gp)
    ctx->pc = 0x142868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935132), GPR_U32(ctx, 2));
    // 0x14286c: 0xaf808258  sw          $zero, -0x7DA8($gp)
    ctx->pc = 0x14286cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935128), GPR_U32(ctx, 0));
label_142870:
    // 0x142870: 0x2a41001b  slti        $at, $s2, 0x1B
    ctx->pc = 0x142870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x142874: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x142874u;
    {
        const bool branch_taken_0x142874 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x142874) {
            ctx->pc = 0x142888u;
            goto label_142888;
        }
    }
    ctx->pc = 0x14287Cu;
    // 0x14287c: 0x2411001a  addiu       $s1, $zero, 0x1A
    ctx->pc = 0x14287cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x142880: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x142880u;
    {
        const bool branch_taken_0x142880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142880u;
            // 0x142884: 0x2652ffe8  addiu       $s2, $s2, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142880) {
            ctx->pc = 0x142890u;
            goto label_142890;
        }
    }
    ctx->pc = 0x142888u;
label_142888:
    // 0x142888: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x142888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14288c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14288cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142890:
    // 0x142890: 0x8f84825c  lw          $a0, -0x7DA4($gp)
    ctx->pc = 0x142890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935132)));
    // 0x142894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x142894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142898: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x142898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14289c: 0xc056b20  jal         func_15AC80
    ctx->pc = 0x14289Cu;
    SET_GPR_U32(ctx, 31, 0x1428A4u);
    ctx->pc = 0x1428A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14289Cu;
            // 0x1428a0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC80u;
    if (runtime->hasFunction(0x15AC80u)) {
        auto targetFn = runtime->lookupFunction(0x15AC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1428A4u; }
        if (ctx->pc != 0x1428A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC80_0x15ac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1428A4u; }
        if (ctx->pc != 0x1428A4u) { return; }
    }
    ctx->pc = 0x1428A4u;
label_1428a4:
    // 0x1428a4: 0x1a20004e  blez        $s1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1428A4u;
    {
        const bool branch_taken_0x1428a4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1428A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1428A4u;
            // 0x1428a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428a4) {
            ctx->pc = 0x1429E0u;
            goto label_1429e0;
        }
    }
    ctx->pc = 0x1428ACu;
    // 0x1428ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1428acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1428b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1428b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1428b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1428b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1428b8: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1428b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1428bc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1428bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1428c0:
    // 0x1428c0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1428c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1428c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1428c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1428c8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1428c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1428cc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1428ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1428d0: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1428d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1428d4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1428d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1428d8: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1428d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x1428dc: 0x8f838250  lw          $v1, -0x7DB0($gp)
    ctx->pc = 0x1428dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935120)));
    // 0x1428e0: 0x10670019  beq         $v1, $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x1428E0u;
    {
        const bool branch_taken_0x1428e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1428e0) {
            ctx->pc = 0x142948u;
            goto label_142948;
        }
    }
    ctx->pc = 0x1428E8u;
    // 0x1428e8: 0x10660013  beq         $v1, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1428E8u;
    {
        const bool branch_taken_0x1428e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1428e8) {
            ctx->pc = 0x142938u;
            goto label_142938;
        }
    }
    ctx->pc = 0x1428F0u;
    // 0x1428f0: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1428F0u;
    {
        const bool branch_taken_0x1428f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1428f0) {
            ctx->pc = 0x142918u;
            goto label_142918;
        }
    }
    ctx->pc = 0x1428F8u;
    // 0x1428f8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1428F8u;
    {
        const bool branch_taken_0x1428f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1428f8) {
            ctx->pc = 0x142908u;
            goto label_142908;
        }
    }
    ctx->pc = 0x142900u;
    // 0x142900: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x142900u;
    {
        const bool branch_taken_0x142900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142900) {
            ctx->pc = 0x1429B8u;
            goto label_1429b8;
        }
    }
    ctx->pc = 0x142908u;
label_142908:
    // 0x142908: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x142908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14290c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x14290cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x142910: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x142910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142914: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x142914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_142918:
    // 0x142918: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x142918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14291c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x14291cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x142920: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x142920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x142924: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x142924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x142928: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x142928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x14292c: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x14292cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x142930: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x142930u;
    {
        const bool branch_taken_0x142930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142930u;
            // 0x142934: 0xac48001c  sw          $t0, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142930) {
            ctx->pc = 0x1429B8u;
            goto label_1429b8;
        }
    }
    ctx->pc = 0x142938u;
label_142938:
    // 0x142938: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x142938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14293c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x14293cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x142940: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x142940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142944: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x142944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_142948:
    // 0x142948: 0x8e6e000c  lw          $t6, 0xC($s3)
    ctx->pc = 0x142948u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14294c: 0x8f8a826c  lw          $t2, -0x7D94($gp)
    ctx->pc = 0x14294cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935148)));
    // 0x142950: 0xe5a02  srl         $t3, $t6, 8
    ctx->pc = 0x142950u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x142954: 0x31c300ff  andi        $v1, $t6, 0xFF
    ctx->pc = 0x142954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x142958: 0x316d00ff  andi        $t5, $t3, 0xFF
    ctx->pc = 0x142958u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x14295c: 0xe5c02  srl         $t3, $t6, 16
    ctx->pc = 0x14295cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
    // 0x142960: 0x316c00ff  andi        $t4, $t3, 0xFF
    ctx->pc = 0x142960u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x142964: 0x1140000e  beqz        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x142964u;
    {
        const bool branch_taken_0x142964 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x142968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142964u;
            // 0x142968: 0xe5e02  srl         $t3, $t6, 24 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 14), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142964) {
            ctx->pc = 0x1429A0u;
            goto label_1429a0;
        }
    }
    ctx->pc = 0x14296Cu;
    // 0x14296c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x14296cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x142970: 0x258a0001  addiu       $t2, $t4, 0x1
    ctx->pc = 0x142970u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x142974: 0xb6042  srl         $t4, $t3, 1
    ctx->pc = 0x142974u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x142978: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x142978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14297c: 0xa5842  srl         $t3, $t2, 1
    ctx->pc = 0x14297cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x142980: 0xac4c0010  sw          $t4, 0x10($v0)
    ctx->pc = 0x142980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 12));
    // 0x142984: 0x25aa0001  addiu       $t2, $t5, 0x1
    ctx->pc = 0x142984u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x142988: 0xac4b0014  sw          $t3, 0x14($v0)
    ctx->pc = 0x142988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 11));
    // 0x14298c: 0xa5042  srl         $t2, $t2, 1
    ctx->pc = 0x14298cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x142990: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x142990u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x142994: 0xac4a0018  sw          $t2, 0x18($v0)
    ctx->pc = 0x142994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 10));
    // 0x142998: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x142998u;
    {
        const bool branch_taken_0x142998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14299Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142998u;
            // 0x14299c: 0xac43001c  sw          $v1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142998) {
            ctx->pc = 0x1429B8u;
            goto label_1429b8;
        }
    }
    ctx->pc = 0x1429A0u;
label_1429a0:
    // 0x1429a0: 0xac4b0010  sw          $t3, 0x10($v0)
    ctx->pc = 0x1429a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 11));
    // 0x1429a4: 0xac4c0014  sw          $t4, 0x14($v0)
    ctx->pc = 0x1429a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 12));
    // 0x1429a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1429a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1429ac: 0xac4d0018  sw          $t5, 0x18($v0)
    ctx->pc = 0x1429acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 13));
    // 0x1429b0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1429b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1429b4: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1429b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_1429b8:
    // 0x1429b8: 0xac480028  sw          $t0, 0x28($v0)
    ctx->pc = 0x1429b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 8));
    // 0x1429bc: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1429bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1429c0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1429c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1429c4: 0x8f8a8268  lw          $t2, -0x7D98($gp)
    ctx->pc = 0x1429c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935144)));
    // 0x1429c8: 0x131182a  slt         $v1, $t1, $s1
    ctx->pc = 0x1429c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1429cc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1429ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1429d0: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1429d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1429d4: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1429D4u;
    {
        const bool branch_taken_0x1429d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1429D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1429D4u;
            // 0x1429d8: 0x26a9821  addu        $s3, $s3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429d4) {
            ctx->pc = 0x1428C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1428c0;
        }
    }
    ctx->pc = 0x1429DCu;
    // 0x1429dc: 0x0  nop
    ctx->pc = 0x1429dcu;
    // NOP
label_1429e0:
    // 0x1429e0: 0xc056b28  jal         func_15ACA0
    ctx->pc = 0x1429E0u;
    SET_GPR_U32(ctx, 31, 0x1429E8u);
    ctx->pc = 0x1429E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1429E0u;
            // 0x1429e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ACA0u;
    if (runtime->hasFunction(0x15ACA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429E8u; }
        if (ctx->pc != 0x1429E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ACA0_0x15aca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429E8u; }
        if (ctx->pc != 0x1429E8u) { return; }
    }
    ctx->pc = 0x1429E8u;
label_1429e8:
    // 0x1429e8: 0x8f838268  lw          $v1, -0x7D98($gp)
    ctx->pc = 0x1429e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935144)));
    // 0x1429ec: 0xaf82825c  sw          $v0, -0x7DA4($gp)
    ctx->pc = 0x1429ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935132), GPR_U32(ctx, 2));
    // 0x1429f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1429f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1429f4: 0x1e40ff9e  bgtz        $s2, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1429F4u;
    {
        const bool branch_taken_0x1429f4 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x1429F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1429F4u;
            // 0x1429f8: 0x2639823  subu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429f4) {
            ctx->pc = 0x142870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_142870;
        }
    }
    ctx->pc = 0x1429FCu;
    // 0x1429fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1429fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x142a00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x142a00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142a04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142a04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142a08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x142a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142a0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142a10: 0x3e00008  jr          $ra
    ctx->pc = 0x142A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142A10u;
            // 0x142a14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142A18u;
    // 0x142a18: 0x0  nop
    ctx->pc = 0x142a18u;
    // NOP
    // 0x142a1c: 0x0  nop
    ctx->pc = 0x142a1cu;
    // NOP
}
