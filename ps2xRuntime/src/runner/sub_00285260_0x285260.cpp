#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285260
// Address: 0x285260 - 0x285530
void sub_00285260_0x285260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285260_0x285260");
#endif

    switch (ctx->pc) {
        case 0x2852a0u: goto label_2852a0;
        case 0x2852b4u: goto label_2852b4;
        case 0x2852fcu: goto label_2852fc;
        case 0x285400u: goto label_285400;
        case 0x285414u: goto label_285414;
        case 0x285480u: goto label_285480;
        case 0x2854b0u: goto label_2854b0;
        case 0x2854c0u: goto label_2854c0;
        default: break;
    }

    ctx->pc = 0x285260u;

    // 0x285260: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x285260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x285264: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x285264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x285268: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x285268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28526c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28526cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x285270: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x285270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x285274: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x285274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x285278: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x285278u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28527c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x285280: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x285280u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285284: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x285284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x285288: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x285288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28528c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28528cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x285290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x285294: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x285294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285298: 0xc0a0a4c  jal         func_282930
    ctx->pc = 0x285298u;
    SET_GPR_U32(ctx, 31, 0x2852A0u);
    ctx->pc = 0x28529Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285298u;
            // 0x28529c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282930u;
    if (runtime->hasFunction(0x282930u)) {
        auto targetFn = runtime->lookupFunction(0x282930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2852A0u; }
        if (ctx->pc != 0x2852A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282930_0x282930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2852A0u; }
        if (ctx->pc != 0x2852A0u) { return; }
    }
    ctx->pc = 0x2852A0u;
label_2852a0:
    // 0x2852a0: 0x27b10120  addiu       $s1, $sp, 0x120
    ctx->pc = 0x2852a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2852a4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2852a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2852a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2852a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2852ac: 0xc0a2970  jal         func_28A5C0
    ctx->pc = 0x2852ACu;
    SET_GPR_U32(ctx, 31, 0x2852B4u);
    ctx->pc = 0x2852B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2852ACu;
            // 0x2852b0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A5C0u;
    if (runtime->hasFunction(0x28A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x28A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2852B4u; }
        if (ctx->pc != 0x2852B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A5C0_0x28a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2852B4u; }
        if (ctx->pc != 0x2852B4u) { return; }
    }
    ctx->pc = 0x2852B4u;
label_2852b4:
    // 0x2852b4: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x2852b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2852b8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2852b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2852bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2852bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2852c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2852c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2852c4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2852c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2852c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2852c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2852cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2852ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2852d0: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x2852d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x2852d4: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2852d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2852d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2852d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2852dc: 0xe6c00004  swc1        $f0, 0x4($s6)
    ctx->pc = 0x2852dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2852e0: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2852e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2852e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2852e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2852e8: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x2852e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x2852ec: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x2852ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2852f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2852f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2852f4: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x2852F4u;
    SET_GPR_U32(ctx, 31, 0x2852FCu);
    ctx->pc = 0x2852F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2852F4u;
            // 0x2852f8: 0xe6c0000c  swc1        $f0, 0xC($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2852FCu; }
        if (ctx->pc != 0x2852FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2852FCu; }
        if (ctx->pc != 0x2852FCu) { return; }
    }
    ctx->pc = 0x2852FCu;
label_2852fc:
    // 0x2852fc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2852fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285300: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x285300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
    // 0x285304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285308: 0x0  nop
    ctx->pc = 0x285308u;
    // NOP
    // 0x28530c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28530cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285310: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x285310u;
    {
        const bool branch_taken_0x285310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x285314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285310u;
            // 0x285314: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285310) {
            ctx->pc = 0x285338u;
            goto label_285338;
        }
    }
    ctx->pc = 0x285318u;
    // 0x285318: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x285318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28531c: 0x0  nop
    ctx->pc = 0x28531cu;
    // NOP
    // 0x285320: 0x46011103  div.s       $f4, $f2, $f1
    ctx->pc = 0x285320u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[4] = ctx->f[2] / ctx->f[1];
    // 0x285324: 0x0  nop
    ctx->pc = 0x285324u;
    // NOP
    // 0x285328: 0x0  nop
    ctx->pc = 0x285328u;
    // NOP
    // 0x28532c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28532Cu;
    {
        const bool branch_taken_0x28532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28532c) {
            ctx->pc = 0x285348u;
            goto label_285348;
        }
    }
    ctx->pc = 0x285334u;
    // 0x285334: 0x0  nop
    ctx->pc = 0x285334u;
    // NOP
label_285338:
    // 0x285338: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x285338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28533c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28533cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x285340: 0x0  nop
    ctx->pc = 0x285340u;
    // NOP
    // 0x285344: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x285344u;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
label_285348:
    // 0x285348: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x285348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
    // 0x28534c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x28534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285354: 0x0  nop
    ctx->pc = 0x285354u;
    // NOP
    // 0x285358: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x285358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28535c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x28535Cu;
    {
        const bool branch_taken_0x28535c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x285360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28535Cu;
            // 0x285360: 0x460010c6  mov.s       $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28535c) {
            ctx->pc = 0x28537Cu;
            goto label_28537c;
        }
    }
    ctx->pc = 0x285364u;
    // 0x285364: 0x0  nop
    ctx->pc = 0x285364u;
    // NOP
    // 0x285368: 0x0  nop
    ctx->pc = 0x285368u;
    // NOP
    // 0x28536c: 0x460110c3  div.s       $f3, $f2, $f1
    ctx->pc = 0x28536cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[1];
    // 0x285370: 0x0  nop
    ctx->pc = 0x285370u;
    // NOP
    // 0x285374: 0x0  nop
    ctx->pc = 0x285374u;
    // NOP
    // 0x285378: 0x0  nop
    ctx->pc = 0x285378u;
    // NOP
label_28537c:
    // 0x28537c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x28537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285380: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x285380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
    // 0x285384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285388: 0x0  nop
    ctx->pc = 0x285388u;
    // NOP
    // 0x28538c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28538cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285390: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x285390u;
    {
        const bool branch_taken_0x285390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285390) {
            ctx->pc = 0x2853B0u;
            goto label_2853b0;
        }
    }
    ctx->pc = 0x285398u;
    // 0x285398: 0x0  nop
    ctx->pc = 0x285398u;
    // NOP
    // 0x28539c: 0x0  nop
    ctx->pc = 0x28539cu;
    // NOP
    // 0x2853a0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x2853a0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x2853a4: 0x0  nop
    ctx->pc = 0x2853a4u;
    // NOP
    // 0x2853a8: 0x0  nop
    ctx->pc = 0x2853a8u;
    // NOP
    // 0x2853ac: 0x0  nop
    ctx->pc = 0x2853acu;
    // NOP
label_2853b0:
    // 0x2853b0: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2853b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x2853b4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2853b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2853b8: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x2853b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x2853bc: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2853bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2853c0: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x2853c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x2853c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2853c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2853c8: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x2853c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x2853cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2853ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2853d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2853d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2853d4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2853d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2853d8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2853d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2853dc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2853dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2853e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2853e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2853e4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2853e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2853e8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2853e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2853ec: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x2853ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2853f0: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x2853f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2853f4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2853F4u;
    {
        const bool branch_taken_0x2853f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2853F4u;
            // 0x2853f8: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853f4) {
            ctx->pc = 0x2854C8u;
            goto label_2854c8;
        }
    }
    ctx->pc = 0x2853FCu;
    // 0x2853fc: 0x0  nop
    ctx->pc = 0x2853fcu;
    // NOP
label_285400:
    // 0x285400: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x285400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x285404: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x285404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285408: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x285408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x28540c: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x28540Cu;
    SET_GPR_U32(ctx, 31, 0x285414u);
    ctx->pc = 0x285410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28540Cu;
            // 0x285410: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285414u; }
        if (ctx->pc != 0x285414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285414u; }
        if (ctx->pc != 0x285414u) { return; }
    }
    ctx->pc = 0x285414u;
label_285414:
    // 0x285414: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x285414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285418: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x285418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x28541c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x28541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285420: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x285420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x285424: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x285424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x285428: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x285428u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x28542c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x28542cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x285430: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x285430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x285434: 0xe7c10000  swc1        $f1, 0x0($fp)
    ctx->pc = 0x285434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x285438: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x285438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28543c: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x28543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x285440: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x285440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285444: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x285444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285448: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x285448u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x28544c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x28544cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x285450: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x285450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x285454: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x285454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x285458: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x285458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x28545c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x28545cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x285460: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x285460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285464: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x285464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285468: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x285468u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x28546c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x28546cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x285470: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x285470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x285474: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x285474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x285478: 0xc0a33f0  jal         func_28CFC0
    ctx->pc = 0x285478u;
    SET_GPR_U32(ctx, 31, 0x285480u);
    ctx->pc = 0x28547Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285478u;
            // 0x28547c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CFC0u;
    if (runtime->hasFunction(0x28CFC0u)) {
        auto targetFn = runtime->lookupFunction(0x28CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285480u; }
        if (ctx->pc != 0x285480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CFC0_0x28cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285480u; }
        if (ctx->pc != 0x285480u) { return; }
    }
    ctx->pc = 0x285480u;
label_285480:
    // 0x285480: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x285480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x285484: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x285484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285488: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x285488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28548c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28548cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x285490: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x285490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285494: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x285494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x285498: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x285498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28549c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x28549cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2854a0: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2854a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2854a4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2854a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2854a8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2854a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2854ac: 0x0  nop
    ctx->pc = 0x2854acu;
    // NOP
label_2854b0:
    // 0x2854b0: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2854b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2854b4: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2854b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2854b8: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2854B8u;
    {
        const bool branch_taken_0x2854b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2854b8) {
            ctx->pc = 0x285400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285400;
        }
    }
    ctx->pc = 0x2854C0u;
label_2854c0:
    // 0x2854c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2854C0u;
    {
        const bool branch_taken_0x2854c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2854c0) {
            ctx->pc = 0x2854F8u;
            goto label_2854f8;
        }
    }
    ctx->pc = 0x2854C8u;
label_2854c8:
    // 0x2854c8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2854c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2854cc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2854ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2854d0: 0x1020fffb  beqz        $at, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2854D0u;
    {
        const bool branch_taken_0x2854d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2854D0u;
            // 0x2854d4: 0x3c130064  lui         $s3, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854d0) {
            ctx->pc = 0x2854C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2854c0;
        }
    }
    ctx->pc = 0x2854D8u;
    // 0x2854d8: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x2854d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2854dc: 0x26730350  addiu       $s3, $s3, 0x350
    ctx->pc = 0x2854dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 848));
    // 0x2854e0: 0x27b100d0  addiu       $s1, $sp, 0xD0
    ctx->pc = 0x2854e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2854e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2854e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2854e8: 0x27b700b4  addiu       $s7, $sp, 0xB4
    ctx->pc = 0x2854e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2854ec: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x2854ECu;
    {
        const bool branch_taken_0x2854ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2854ECu;
            // 0x2854f0: 0x27be00b8  addiu       $fp, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854ec) {
            ctx->pc = 0x2854B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2854b0;
        }
    }
    ctx->pc = 0x2854F4u;
    // 0x2854f4: 0x0  nop
    ctx->pc = 0x2854f4u;
    // NOP
label_2854f8:
    // 0x2854f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2854f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2854fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2854fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x285500: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x285500u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x285504: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x285504u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x285508: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x285508u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28550c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28550cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285510: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x285510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285514: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x285514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28551c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28551cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285520: 0x3e00008  jr          $ra
    ctx->pc = 0x285520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285520u;
            // 0x285524: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x285528u;
    // 0x285528: 0x0  nop
    ctx->pc = 0x285528u;
    // NOP
    // 0x28552c: 0x0  nop
    ctx->pc = 0x28552cu;
    // NOP
}
