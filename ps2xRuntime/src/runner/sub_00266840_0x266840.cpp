#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00266840
// Address: 0x266840 - 0x266970
void sub_00266840_0x266840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266840_0x266840");
#endif

    switch (ctx->pc) {
        case 0x266870u: goto label_266870;
        case 0x2668d8u: goto label_2668d8;
        case 0x266934u: goto label_266934;
        case 0x26694cu: goto label_26694c;
        default: break;
    }

    ctx->pc = 0x266840u;

    // 0x266840: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x266840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x266844: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x266844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x266848: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x266848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26684c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26684cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x266850: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x266850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x266854: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x266854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266858: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x266858u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26685c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x26685cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x266860: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x266860u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x266864: 0x8c900068  lw          $s0, 0x68($a0)
    ctx->pc = 0x266864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x266868: 0xc099b1c  jal         func_266C70
    ctx->pc = 0x266868u;
    SET_GPR_U32(ctx, 31, 0x266870u);
    ctx->pc = 0x26686Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266868u;
            // 0x26686c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266C70u;
    if (runtime->hasFunction(0x266C70u)) {
        auto targetFn = runtime->lookupFunction(0x266C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266870u; }
        if (ctx->pc != 0x266870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266C70_0x266c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266870u; }
        if (ctx->pc != 0x266870u) { return; }
    }
    ctx->pc = 0x266870u;
label_266870:
    // 0x266870: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x266870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x266874: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x266874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266878: 0xc7a60090  lwc1        $f6, 0x90($sp)
    ctx->pc = 0x266878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26687c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26687cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266880: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x266880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x266884: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x266884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x266888: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x266888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26688c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x26688cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x266890: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x266890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x266894: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x266894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x266898: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x266898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26689c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26689cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2668a0: 0x46053581  sub.s       $f22, $f6, $f5
    ctx->pc = 0x2668a0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x2668a4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2668a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2668a8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2668a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2668ac: 0x46041d41  sub.s       $f21, $f3, $f4
    ctx->pc = 0x2668acu;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2668b0: 0x46020d01  sub.s       $f20, $f1, $f2
    ctx->pc = 0x2668b0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2668b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2668b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2668b8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2668b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2668bc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2668bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2668c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2668c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2668c4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2668c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2668c8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2668c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2668cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2668ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2668d0: 0xc099b1c  jal         func_266C70
    ctx->pc = 0x2668D0u;
    SET_GPR_U32(ctx, 31, 0x2668D8u);
    ctx->pc = 0x2668D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2668D0u;
            // 0x2668d4: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x266C70u;
    if (runtime->hasFunction(0x266C70u)) {
        auto targetFn = runtime->lookupFunction(0x266C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2668D8u; }
        if (ctx->pc != 0x2668D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266C70_0x266c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2668D8u; }
        if (ctx->pc != 0x2668D8u) { return; }
    }
    ctx->pc = 0x2668D8u;
label_2668d8:
    // 0x2668d8: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x2668d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2668dc: 0x4616b042  mul.s       $f1, $f22, $f22
    ctx->pc = 0x2668dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2668e0: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x2668e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2668e4: 0xc7a80040  lwc1        $f8, 0x40($sp)
    ctx->pc = 0x2668e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2668e8: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x2668e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2668ec: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x2668ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2668f0: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x2668f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2668f4: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x2668f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2668f8: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x2668f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2668fc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2668fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x266900: 0x4614a09c  madd.s      $f2, $f20, $f20
    ctx->pc = 0x266900u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x266904: 0x46074041  sub.s       $f1, $f8, $f7
    ctx->pc = 0x266904u;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x266908: 0x46062801  sub.s       $f0, $f5, $f6
    ctx->pc = 0x266908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x26690c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x26690cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x266910: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x266910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x266914: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x266914u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x266918: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x266918u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26691c: 0x4603181c  madd.s      $f0, $f3, $f3
    ctx->pc = 0x26691cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x266920: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x266920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266924: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x266924u;
    {
        const bool branch_taken_0x266924 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x266928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266924u;
            // 0x266928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266924) {
            ctx->pc = 0x266940u;
            goto label_266940;
        }
    }
    ctx->pc = 0x26692Cu;
    // 0x26692c: 0xc099b88  jal         func_266E20
    ctx->pc = 0x26692Cu;
    SET_GPR_U32(ctx, 31, 0x266934u);
    ctx->pc = 0x266930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26692Cu;
            // 0x266930: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266E20u;
    if (runtime->hasFunction(0x266E20u)) {
        auto targetFn = runtime->lookupFunction(0x266E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266934u; }
        if (ctx->pc != 0x266934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266E20_0x266e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266934u; }
        if (ctx->pc != 0x266934u) { return; }
    }
    ctx->pc = 0x266934u;
label_266934:
    // 0x266934: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x266934u;
    {
        const bool branch_taken_0x266934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266934) {
            ctx->pc = 0x266950u;
            goto label_266950;
        }
    }
    ctx->pc = 0x26693Cu;
    // 0x26693c: 0x0  nop
    ctx->pc = 0x26693cu;
    // NOP
label_266940:
    // 0x266940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266944: 0xc099b88  jal         func_266E20
    ctx->pc = 0x266944u;
    SET_GPR_U32(ctx, 31, 0x26694Cu);
    ctx->pc = 0x266948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266944u;
            // 0x266948: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266E20u;
    if (runtime->hasFunction(0x266E20u)) {
        auto targetFn = runtime->lookupFunction(0x266E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26694Cu; }
        if (ctx->pc != 0x26694Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266E20_0x266e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26694Cu; }
        if (ctx->pc != 0x26694Cu) { return; }
    }
    ctx->pc = 0x26694Cu;
label_26694c:
    // 0x26694c: 0x0  nop
    ctx->pc = 0x26694cu;
    // NOP
label_266950:
    // 0x266950: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x266950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266954: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x266954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266958: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x266958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26695c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26695cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266960: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x266960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x266964: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x266964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x266968: 0x3e00008  jr          $ra
    ctx->pc = 0x266968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26696Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266968u;
            // 0x26696c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266970u;
}
