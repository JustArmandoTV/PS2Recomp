#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155290
// Address: 0x155290 - 0x155400
void sub_00155290_0x155290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155290_0x155290");
#endif

    switch (ctx->pc) {
        case 0x1552d4u: goto label_1552d4;
        case 0x1552ecu: goto label_1552ec;
        case 0x155360u: goto label_155360;
        case 0x155398u: goto label_155398;
        default: break;
    }

    ctx->pc = 0x155290u;

    // 0x155290: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x155290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x155294: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x155294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x155298: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x155298u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x15529c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15529cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1552a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1552a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1552a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1552a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1552a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1552a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1552acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1552b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1552b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1552b4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1552b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1552b8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1552b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1552bc: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1552BCu;
    {
        const bool branch_taken_0x1552bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1552BCu;
            // 0x1552c0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552bc) {
            ctx->pc = 0x1553D8u;
            goto label_1553d8;
        }
    }
    ctx->pc = 0x1552C4u;
    // 0x1552c4: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x1552c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1552c8: 0xc66d0008  lwc1        $f13, 0x8($s3)
    ctx->pc = 0x1552c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1552cc: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x1552CCu;
    SET_GPR_U32(ctx, 31, 0x1552D4u);
    ctx->pc = 0x1552D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1552CCu;
            // 0x1552d0: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1552D4u; }
        if (ctx->pc != 0x1552D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1552D4u; }
        if (ctx->pc != 0x1552D4u) { return; }
    }
    ctx->pc = 0x1552D4u;
label_1552d4:
    // 0x1552d4: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x1552D4u;
    {
        const bool branch_taken_0x1552d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1552d4) {
            ctx->pc = 0x1552D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1552D4u;
            // 0x1552d8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1553DCu;
            goto label_1553dc;
        }
    }
    ctx->pc = 0x1552DCu;
    // 0x1552dc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1552dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1552e0: 0x1860003d  blez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1552E0u;
    {
        const bool branch_taken_0x1552e0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1552E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1552E0u;
            // 0x1552e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552e0) {
            ctx->pc = 0x1553D8u;
            goto label_1553d8;
        }
    }
    ctx->pc = 0x1552E8u;
    // 0x1552e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1552e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1552ec:
    // 0x1552ec: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1552ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1552f0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1552f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1552f4: 0x918021  addu        $s0, $a0, $s1
    ctx->pc = 0x1552f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1552f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1552f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1552fc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1552fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x155300: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x155300u;
    {
        const bool branch_taken_0x155300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155300) {
            ctx->pc = 0x1553C0u;
            goto label_1553c0;
        }
    }
    ctx->pc = 0x155308u;
    // 0x155308: 0xc7ae006c  lwc1        $f14, 0x6C($sp)
    ctx->pc = 0x155308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x15530c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x15530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155310: 0x460e0036  c.le.s      $f0, $f14
    ctx->pc = 0x155310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155314: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x155314u;
    {
        const bool branch_taken_0x155314 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155314) {
            ctx->pc = 0x1553C0u;
            goto label_1553c0;
        }
    }
    ctx->pc = 0x15531Cu;
    // 0x15531c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x15531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155320: 0x46007036  c.le.s      $f14, $f0
    ctx->pc = 0x155320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155324: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x155324u;
    {
        const bool branch_taken_0x155324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155324) {
            ctx->pc = 0x1553C0u;
            goto label_1553c0;
        }
    }
    ctx->pc = 0x15532Cu;
    // 0x15532c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15532cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x155330: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x155330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x155334: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x155334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x155338: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155338u;
    {
        const bool branch_taken_0x155338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15533Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155338u;
            // 0x15533c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155338) {
            ctx->pc = 0x155350u;
            goto label_155350;
        }
    }
    ctx->pc = 0x155340u;
    // 0x155340: 0x46007032  c.eq.s      $f14, $f0
    ctx->pc = 0x155340u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155344: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x155344u;
    {
        const bool branch_taken_0x155344 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x155344) {
            ctx->pc = 0x155350u;
            goto label_155350;
        }
    }
    ctx->pc = 0x15534Cu;
    // 0x15534c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15534cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_155350:
    // 0x155350: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x155350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x155354: 0xc60d0018  lwc1        $f13, 0x18($s0)
    ctx->pc = 0x155354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x155358: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x155358u;
    SET_GPR_U32(ctx, 31, 0x155360u);
    ctx->pc = 0x15535Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155358u;
            // 0x15535c: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155360u; }
        if (ctx->pc != 0x155360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155360u; }
        if (ctx->pc != 0x155360u) { return; }
    }
    ctx->pc = 0x155360u;
label_155360:
    // 0x155360: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x155360u;
    {
        const bool branch_taken_0x155360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155360) {
            ctx->pc = 0x1553C0u;
            goto label_1553c0;
        }
    }
    ctx->pc = 0x155368u;
    // 0x155368: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x155368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x15536c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15536cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x155370: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x155370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155374: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x155374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x155378: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x155378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15537c: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x15537cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x155380: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x155380u;
    {
        const bool branch_taken_0x155380 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x155384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155380u;
            // 0x155384: 0xc7ac0068  lwc1        $f12, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x155380) {
            ctx->pc = 0x155390u;
            goto label_155390;
        }
    }
    ctx->pc = 0x155388u;
    // 0x155388: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x155388u;
    {
        const bool branch_taken_0x155388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155388) {
            ctx->pc = 0x155398u;
            goto label_155398;
        }
    }
    ctx->pc = 0x155390u;
label_155390:
    // 0x155390: 0xc04e12c  jal         func_1384B0
    ctx->pc = 0x155390u;
    SET_GPR_U32(ctx, 31, 0x155398u);
    ctx->pc = 0x155394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155390u;
            // 0x155394: 0x27a60064  addiu       $a2, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1384B0u;
    if (runtime->hasFunction(0x1384B0u)) {
        auto targetFn = runtime->lookupFunction(0x1384B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155398u; }
        if (ctx->pc != 0x155398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001384B0_0x1384b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155398u; }
        if (ctx->pc != 0x155398u) { return; }
    }
    ctx->pc = 0x155398u;
label_155398:
    // 0x155398: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x155398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15539c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15539Cu;
    {
        const bool branch_taken_0x15539c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15539c) {
            ctx->pc = 0x1553C0u;
            goto label_1553c0;
        }
    }
    ctx->pc = 0x1553A4u;
    // 0x1553a4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1553a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1553a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1553a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1553ac: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x1553acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1553b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1553b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1553b4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1553b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1553b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1553b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1553bc: 0x0  nop
    ctx->pc = 0x1553bcu;
    // NOP
label_1553c0:
    // 0x1553c0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1553c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1553c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1553c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1553c8: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1553c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1553cc: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1553CCu;
    {
        const bool branch_taken_0x1553cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1553D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1553CCu;
            // 0x1553d0: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553cc) {
            ctx->pc = 0x1552ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1552ec;
        }
    }
    ctx->pc = 0x1553D4u;
    // 0x1553d4: 0x0  nop
    ctx->pc = 0x1553d4u;
    // NOP
label_1553d8:
    // 0x1553d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1553d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1553dc:
    // 0x1553dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1553dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1553e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1553e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1553e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1553e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1553e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1553e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1553ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1553ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1553f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1553F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1553F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1553F0u;
            // 0x1553f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1553F8u;
    // 0x1553f8: 0x0  nop
    ctx->pc = 0x1553f8u;
    // NOP
    // 0x1553fc: 0x0  nop
    ctx->pc = 0x1553fcu;
    // NOP
}
