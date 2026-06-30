#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002887E0
// Address: 0x2887e0 - 0x288bf0
void sub_002887E0_0x2887e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002887E0_0x2887e0");
#endif

    switch (ctx->pc) {
        case 0x288844u: goto label_288844;
        case 0x288b60u: goto label_288b60;
        case 0x288b8cu: goto label_288b8c;
        case 0x288bc4u: goto label_288bc4;
        default: break;
    }

    ctx->pc = 0x2887e0u;

    // 0x2887e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2887e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2887e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2887e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2887e8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2887e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2887ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2887ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2887f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2887f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2887f4: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2887f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2887f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2887fc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2887fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288800: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x288800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x288804: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x288804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x288808: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x288808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28880c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x28880cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x288810: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x288810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288814: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x288814u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x288818: 0x94e70000  lhu         $a3, 0x0($a3)
    ctx->pc = 0x288818u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28881c: 0xc4b4000c  lwc1        $f20, 0xC($a1)
    ctx->pc = 0x28881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288820: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x288820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x288824: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x288824u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x288828: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x288828u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x28882c: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x28882cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x288830: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x288830u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x288834: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x288834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288838: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x288838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28883c: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x28883Cu;
    SET_GPR_U32(ctx, 31, 0x288844u);
    ctx->pc = 0x288840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28883Cu;
            // 0x288840: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288844u; }
        if (ctx->pc != 0x288844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288844u; }
        if (ctx->pc != 0x288844u) { return; }
    }
    ctx->pc = 0x288844u;
label_288844:
    // 0x288844: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x288844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288848: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x288848u;
    {
        const bool branch_taken_0x288848 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28884Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288848u;
            // 0x28884c: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288848) {
            ctx->pc = 0x288868u;
            goto label_288868;
        }
    }
    ctx->pc = 0x288850u;
    // 0x288850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x288850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288854: 0x0  nop
    ctx->pc = 0x288854u;
    // NOP
    // 0x288858: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x288858u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x28885c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x28885cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288860: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x288860u;
    {
        const bool branch_taken_0x288860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x288860) {
            ctx->pc = 0x288938u;
            goto label_288938;
        }
    }
    ctx->pc = 0x288868u;
label_288868:
    // 0x288868: 0x27a500a4  addiu       $a1, $sp, 0xA4
    ctx->pc = 0x288868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x28886c: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x28886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x288870: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x288870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x288874: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x288874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288878: 0x27a300ac  addiu       $v1, $sp, 0xAC
    ctx->pc = 0x288878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x28887c: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x28887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x288880: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x288880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288884: 0xc7a50074  lwc1        $f5, 0x74($sp)
    ctx->pc = 0x288884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x288888: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x288888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28888c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x28888cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x288890: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x288890u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x288894: 0x460301dd  msub.s      $f7, $f0, $f3
    ctx->pc = 0x288894u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x288898: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x288898u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x28889c: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x28889cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x2888a0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2888a0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2888a4: 0x4605201d  msub.s      $f0, $f4, $f5
    ctx->pc = 0x2888a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x2888a8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2888a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2888ac: 0xe4a70000  swc1        $f7, 0x0($a1)
    ctx->pc = 0x2888acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2888b0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2888b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2888b4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2888b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2888b8: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2888b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2888bc: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2888bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2888c0: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2888c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2888c4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2888c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2888c8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2888c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2888cc: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x2888ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2888d0: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x2888d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2888d4: 0x46060832  c.eq.s      $f1, $f6
    ctx->pc = 0x2888d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2888d8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2888D8u;
    {
        const bool branch_taken_0x2888d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2888DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2888D8u;
            // 0x2888dc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888d8) {
            ctx->pc = 0x288900u;
            goto label_288900;
        }
    }
    ctx->pc = 0x2888E0u;
    // 0x2888e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2888e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2888e4: 0x0  nop
    ctx->pc = 0x2888e4u;
    // NOP
    // 0x2888e8: 0x46010196  rsqrt.s     $f6, $f0, $f1
    ctx->pc = 0x2888e8u;
    ctx->f[6] = 1.0f / sqrtf(ctx->f[0]);
    // 0x2888ec: 0x0  nop
    ctx->pc = 0x2888ecu;
    // NOP
    // 0x2888f0: 0x0  nop
    ctx->pc = 0x2888f0u;
    // NOP
    // 0x2888f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2888F4u;
    {
        const bool branch_taken_0x2888f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2888f4) {
            ctx->pc = 0x288900u;
            goto label_288900;
        }
    }
    ctx->pc = 0x2888FCu;
    // 0x2888fc: 0x0  nop
    ctx->pc = 0x2888fcu;
    // NOP
label_288900:
    // 0x288900: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x288900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288904: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x288904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x288908: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x288908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x28890c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x28890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288910: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x288910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x288914: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x288914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x288918: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x288918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28891c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x28891cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x288920: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x288920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x288924: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x288924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288928: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x288928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x28892c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x28892Cu;
    {
        const bool branch_taken_0x28892c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28892Cu;
            // 0x288930: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28892c) {
            ctx->pc = 0x288A20u;
            goto label_288a20;
        }
    }
    ctx->pc = 0x288934u;
    // 0x288934: 0x0  nop
    ctx->pc = 0x288934u;
    // NOP
label_288938:
    // 0x288938: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x288938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x28893c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28893cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288940: 0x0  nop
    ctx->pc = 0x288940u;
    // NOP
    // 0x288944: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x288944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x288948: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x288948u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x28894c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x28894cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288950: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x288950u;
    {
        const bool branch_taken_0x288950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288950) {
            ctx->pc = 0x288A20u;
            goto label_288a20;
        }
    }
    ctx->pc = 0x288958u;
    // 0x288958: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x288958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28895c: 0x27a500a4  addiu       $a1, $sp, 0xA4
    ctx->pc = 0x28895cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x288960: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x288960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288964: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x288964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x288968: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x288968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28896c: 0x27a300ac  addiu       $v1, $sp, 0xAC
    ctx->pc = 0x28896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x288970: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x288970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288974: 0xc7a500a4  lwc1        $f5, 0xA4($sp)
    ctx->pc = 0x288974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x288978: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x288978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28897c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x28897cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x288980: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x288980u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x288984: 0x460301dd  msub.s      $f7, $f0, $f3
    ctx->pc = 0x288984u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x288988: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x288988u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x28898c: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x28898cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x288990: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x288990u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x288994: 0x4605201d  msub.s      $f0, $f4, $f5
    ctx->pc = 0x288994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x288998: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x288998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x28899c: 0xe4a70000  swc1        $f7, 0x0($a1)
    ctx->pc = 0x28899cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2889a0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2889a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2889a4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2889a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2889a8: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2889a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2889ac: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2889acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2889b0: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2889b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2889b4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2889b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2889b8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2889b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2889bc: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x2889bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2889c0: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x2889c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2889c4: 0x46060832  c.eq.s      $f1, $f6
    ctx->pc = 0x2889c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2889c8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2889C8u;
    {
        const bool branch_taken_0x2889c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2889CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2889C8u;
            // 0x2889cc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889c8) {
            ctx->pc = 0x2889F0u;
            goto label_2889f0;
        }
    }
    ctx->pc = 0x2889D0u;
    // 0x2889d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2889d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2889d4: 0x0  nop
    ctx->pc = 0x2889d4u;
    // NOP
    // 0x2889d8: 0x46010196  rsqrt.s     $f6, $f0, $f1
    ctx->pc = 0x2889d8u;
    ctx->f[6] = 1.0f / sqrtf(ctx->f[0]);
    // 0x2889dc: 0x0  nop
    ctx->pc = 0x2889dcu;
    // NOP
    // 0x2889e0: 0x0  nop
    ctx->pc = 0x2889e0u;
    // NOP
    // 0x2889e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2889E4u;
    {
        const bool branch_taken_0x2889e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2889e4) {
            ctx->pc = 0x2889F0u;
            goto label_2889f0;
        }
    }
    ctx->pc = 0x2889ECu;
    // 0x2889ec: 0x0  nop
    ctx->pc = 0x2889ecu;
    // NOP
label_2889f0:
    // 0x2889f0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2889f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2889f4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2889f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2889f8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2889f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2889fc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2889fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a00: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x288a00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x288a04: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x288a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x288a08: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x288a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a0c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x288a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x288a10: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x288a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x288a14: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x288a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a18: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x288a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x288a1c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x288a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_288a20:
    // 0x288a20: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x288a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x288a24: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x288a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x288a28: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x288a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x288a2c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x288a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288a30: 0x27a2007c  addiu       $v0, $sp, 0x7C
    ctx->pc = 0x288a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x288a34: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x288a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x288a38: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x288a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a3c: 0xc7a50074  lwc1        $f5, 0x74($sp)
    ctx->pc = 0x288a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x288a40: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x288a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x288a44: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x288a44u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x288a48: 0x4603019d  msub.s      $f6, $f0, $f3
    ctx->pc = 0x288a48u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x288a4c: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x288a4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x288a50: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x288a50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x288a54: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x288a54u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x288a58: 0x4605201d  msub.s      $f0, $f4, $f5
    ctx->pc = 0x288a58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x288a5c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x288a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x288a60: 0xe4860000  swc1        $f6, 0x0($a0)
    ctx->pc = 0x288a60u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x288a64: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x288a64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x288a68: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x288a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x288a6c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x288a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288a70: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x288a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x288a74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x288a78: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x288a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x288a7c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x288a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288a80: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x288a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x288a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x288a88: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x288a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x288a8c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x288a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288a90: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x288a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288a94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x288a94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x288a98: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x288a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x288a9c: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x288a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288aa0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x288aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288aa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x288aa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x288aa8: 0x1653000b  bne         $s2, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x288AA8u;
    {
        const bool branch_taken_0x288aa8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x288AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288AA8u;
            // 0x288aac: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288aa8) {
            ctx->pc = 0x288AD8u;
            goto label_288ad8;
        }
    }
    ctx->pc = 0x288AB0u;
    // 0x288ab0: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x288ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x288ab4: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x288ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x288ab8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x288ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288abc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x288abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288ac0: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x288ac0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x288ac4: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x288ac4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x288ac8: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x288ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x288acc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x288ACCu;
    {
        const bool branch_taken_0x288acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288ACCu;
            // 0x288ad0: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288acc) {
            ctx->pc = 0x288AF8u;
            goto label_288af8;
        }
    }
    ctx->pc = 0x288AD4u;
    // 0x288ad4: 0x0  nop
    ctx->pc = 0x288ad4u;
    // NOP
label_288ad8:
    // 0x288ad8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x288ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288adc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x288adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x288ae0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x288ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288ae4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x288ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x288ae8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x288ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288aec: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x288aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x288af0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x288af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288af4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x288af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_288af8:
    // 0x288af8: 0x1653000b  bne         $s2, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x288AF8u;
    {
        const bool branch_taken_0x288af8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x288af8) {
            ctx->pc = 0x288B28u;
            goto label_288b28;
        }
    }
    ctx->pc = 0x288B00u;
    // 0x288b00: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x288b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288b04: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x288b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x288b08: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x288b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288b0c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x288b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x288b10: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x288b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288b14: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x288b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x288b18: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x288b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288b1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x288B1Cu;
    {
        const bool branch_taken_0x288b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288B1Cu;
            // 0x288b20: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b1c) {
            ctx->pc = 0x288B48u;
            goto label_288b48;
        }
    }
    ctx->pc = 0x288B24u;
    // 0x288b24: 0x0  nop
    ctx->pc = 0x288b24u;
    // NOP
label_288b28:
    // 0x288b28: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x288b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x288b2c: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x288b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x288b30: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x288b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288b34: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x288b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288b38: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x288b38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x288b3c: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x288b3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x288b40: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x288b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x288b44: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x288b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_288b48:
    // 0x288b48: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x288b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x288b4c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x288b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x288b50: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x288B50u;
    {
        const bool branch_taken_0x288b50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288B50u;
            // 0x288b54: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b50) {
            ctx->pc = 0x288BB0u;
            goto label_288bb0;
        }
    }
    ctx->pc = 0x288B58u;
    // 0x288b58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x288b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b5c: 0x0  nop
    ctx->pc = 0x288b5cu;
    // NOP
label_288b60:
    // 0x288b60: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x288b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b68: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x288b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x288b6c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x288b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x288b70: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x288b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x288b74: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x288b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x288b78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x288b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288b7c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x288b7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288b80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x288b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x288b84: 0xc0a2718  jal         func_289C60
    ctx->pc = 0x288B84u;
    SET_GPR_U32(ctx, 31, 0x288B8Cu);
    ctx->pc = 0x288B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288B84u;
            // 0x288b88: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289C60u;
    if (runtime->hasFunction(0x289C60u)) {
        auto targetFn = runtime->lookupFunction(0x289C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288B8Cu; }
        if (ctx->pc != 0x288B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00289C60_0x289c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288B8Cu; }
        if (ctx->pc != 0x288B8Cu) { return; }
    }
    ctx->pc = 0x288B8Cu;
label_288b8c:
    // 0x288b8c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x288b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288b90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x288b90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x288b94: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x288b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x288b98: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x288b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x288b9c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x288b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x288ba0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x288ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x288ba4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x288BA4u;
    {
        const bool branch_taken_0x288ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288BA4u;
            // 0x288ba8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ba4) {
            ctx->pc = 0x288B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288b60;
        }
    }
    ctx->pc = 0x288BACu;
    // 0x288bac: 0x0  nop
    ctx->pc = 0x288bacu;
    // NOP
label_288bb0:
    // 0x288bb0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x288bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288bb4: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x288bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x288bb8: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x288bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x288bbc: 0xc0a29a8  jal         func_28A6A0
    ctx->pc = 0x288BBCu;
    SET_GPR_U32(ctx, 31, 0x288BC4u);
    ctx->pc = 0x288BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288BBCu;
            // 0x288bc0: 0x24c6a660  addiu       $a2, $a2, -0x59A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A6A0u;
    if (runtime->hasFunction(0x28A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x28A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288BC4u; }
        if (ctx->pc != 0x288BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A6A0_0x28a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288BC4u; }
        if (ctx->pc != 0x288BC4u) { return; }
    }
    ctx->pc = 0x288BC4u;
label_288bc4:
    // 0x288bc4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x288bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x288bc8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x288bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x288bcc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x288bccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288bd0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x288bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288bd4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x288bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288bd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x288bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288bdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x288bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288be0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x288be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288be4: 0x3e00008  jr          $ra
    ctx->pc = 0x288BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288BE4u;
            // 0x288be8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288BECu;
    // 0x288bec: 0x0  nop
    ctx->pc = 0x288becu;
    // NOP
}
