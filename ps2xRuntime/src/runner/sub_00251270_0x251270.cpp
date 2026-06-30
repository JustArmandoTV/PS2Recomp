#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00251270
// Address: 0x251270 - 0x251820
void sub_00251270_0x251270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251270_0x251270");
#endif

    ctx->pc = 0x251270u;

    // 0x251270: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x251270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x251274: 0x3e00008  jr          $ra
    ctx->pc = 0x251274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251274u;
            // 0x251278: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25127Cu;
    // 0x25127c: 0x0  nop
    ctx->pc = 0x25127cu;
    // NOP
    // 0x251280: 0x3e00008  jr          $ra
    ctx->pc = 0x251280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251280u;
            // 0x251284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251288u;
    // 0x251288: 0x0  nop
    ctx->pc = 0x251288u;
    // NOP
    // 0x25128c: 0x0  nop
    ctx->pc = 0x25128cu;
    // NOP
    // 0x251290: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x251290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x251294: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x251294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x251298: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x251298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25129c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2512a0: 0x27b5009c  addiu       $s5, $sp, 0x9C
    ctx->pc = 0x2512a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2512a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2512a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2512a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2512a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2512ac: 0x27b30094  addiu       $s3, $sp, 0x94
    ctx->pc = 0x2512acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x2512b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2512b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2512b4: 0x27b20098  addiu       $s2, $sp, 0x98
    ctx->pc = 0x2512b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2512b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2512b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2512bc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2512bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2512c0: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x2512c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2512c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2512c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2512c8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2512c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2512cc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2512ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2512d0: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x2512d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2512d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2512d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2512d8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2512d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2512dc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2512dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2512e0: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x2512e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2512e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2512e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2512e8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2512e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2512ec: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2512ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2512f0: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x2512f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2512f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2512f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2512f8: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2512f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2512fc: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x2512fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251300: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x251300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251304: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251308: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x251308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x25130c: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x25130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251310: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x251310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251314: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251318: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x251318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x25131c: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x25131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251320: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x251320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251324: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251328: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x251328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x25132c: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x25132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251330: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x251330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251334: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251338: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x251338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x25133c: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x25133cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251340: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x251340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251344: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x251344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251348: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251348u;
    {
        const bool branch_taken_0x251348 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251348u;
            // 0x25134c: 0xc7a20090  lwc1        $f2, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251348) {
            ctx->pc = 0x251358u;
            goto label_251358;
        }
    }
    ctx->pc = 0x251350u;
    // 0x251350: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x251350u;
    {
        const bool branch_taken_0x251350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251350) {
            ctx->pc = 0x25135Cu;
            goto label_25135c;
        }
    }
    ctx->pc = 0x251358u;
label_251358:
    // 0x251358: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x251358u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_25135c:
    // 0x25135c: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x25135cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x251360: 0x27a80094  addiu       $t0, $sp, 0x94
    ctx->pc = 0x251360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x251364: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x251364u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x251368: 0x2631cf94  addiu       $s1, $s1, -0x306C
    ctx->pc = 0x251368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954900));
    // 0x25136c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x25136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251370: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x251370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251374: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251378: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251378u;
    {
        const bool branch_taken_0x251378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251378) {
            ctx->pc = 0x251388u;
            goto label_251388;
        }
    }
    ctx->pc = 0x251380u;
    // 0x251380: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x251380u;
    {
        const bool branch_taken_0x251380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251380) {
            ctx->pc = 0x25138Cu;
            goto label_25138c;
        }
    }
    ctx->pc = 0x251388u;
label_251388:
    // 0x251388: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251388u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25138c:
    // 0x25138c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x25138cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x251390: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x251390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x251394: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x251394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x251398: 0x2610cf98  addiu       $s0, $s0, -0x3068
    ctx->pc = 0x251398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954904));
    // 0x25139c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x25139cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2513a0: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2513a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2513a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2513a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2513a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2513A8u;
    {
        const bool branch_taken_0x2513a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2513a8) {
            ctx->pc = 0x2513B8u;
            goto label_2513b8;
        }
    }
    ctx->pc = 0x2513B0u;
    // 0x2513b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2513B0u;
    {
        const bool branch_taken_0x2513b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2513b0) {
            ctx->pc = 0x2513BCu;
            goto label_2513bc;
        }
    }
    ctx->pc = 0x2513B8u;
label_2513b8:
    // 0x2513b8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2513b8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2513bc:
    // 0x2513bc: 0x3c190060  lui         $t9, 0x60
    ctx->pc = 0x2513bcu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)96 << 16));
    // 0x2513c0: 0x27a3009c  addiu       $v1, $sp, 0x9C
    ctx->pc = 0x2513c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2513c4: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x2513c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2513c8: 0x2739cf9c  addiu       $t9, $t9, -0x3064
    ctx->pc = 0x2513c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294954908));
    // 0x2513cc: 0xc7200000  lwc1        $f0, 0x0($t9)
    ctx->pc = 0x2513ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2513d0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2513d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2513d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2513d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2513d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2513D8u;
    {
        const bool branch_taken_0x2513d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2513d8) {
            ctx->pc = 0x2513E8u;
            goto label_2513e8;
        }
    }
    ctx->pc = 0x2513E0u;
    // 0x2513e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2513E0u;
    {
        const bool branch_taken_0x2513e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2513E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2513E0u;
            // 0x2513e4: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2513e0) {
            ctx->pc = 0x2513F0u;
            goto label_2513f0;
        }
    }
    ctx->pc = 0x2513E8u;
label_2513e8:
    // 0x2513e8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2513e8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2513ec: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x2513ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_2513f0:
    // 0x2513f0: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x2513f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x2513f4: 0xc421f930  lwc1        $f1, -0x6D0($at)
    ctx->pc = 0x2513f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2513f8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2513f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2513fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2513fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251400: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x251400u;
    {
        const bool branch_taken_0x251400 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x251404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251400u;
            // 0x251404: 0xc7a20090  lwc1        $f2, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251400) {
            ctx->pc = 0x251410u;
            goto label_251410;
        }
    }
    ctx->pc = 0x251408u;
    // 0x251408: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x251408u;
    {
        const bool branch_taken_0x251408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251408) {
            ctx->pc = 0x251414u;
            goto label_251414;
        }
    }
    ctx->pc = 0x251410u;
label_251410:
    // 0x251410: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x251410u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_251414:
    // 0x251414: 0x3c180064  lui         $t8, 0x64
    ctx->pc = 0x251414u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)100 << 16));
    // 0x251418: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x251418u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x25141c: 0x2718f934  addiu       $t8, $t8, -0x6CC
    ctx->pc = 0x25141cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294965556));
    // 0x251420: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x251420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251424: 0xc7000000  lwc1        $f0, 0x0($t8)
    ctx->pc = 0x251424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251428: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x251428u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25142c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25142Cu;
    {
        const bool branch_taken_0x25142c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25142c) {
            ctx->pc = 0x25143Cu;
            goto label_25143c;
        }
    }
    ctx->pc = 0x251434u;
    // 0x251434: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x251434u;
    {
        const bool branch_taken_0x251434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251434) {
            ctx->pc = 0x251440u;
            goto label_251440;
        }
    }
    ctx->pc = 0x25143Cu;
label_25143c:
    // 0x25143c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25143cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_251440:
    // 0x251440: 0x3c0f0064  lui         $t7, 0x64
    ctx->pc = 0x251440u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)100 << 16));
    // 0x251444: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x251444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x251448: 0x25eff938  addiu       $t7, $t7, -0x6C8
    ctx->pc = 0x251448u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965560));
    // 0x25144c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x25144cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251450: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x251450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251454: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x251454u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251458: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x251458u;
    {
        const bool branch_taken_0x251458 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251458) {
            ctx->pc = 0x251468u;
            goto label_251468;
        }
    }
    ctx->pc = 0x251460u;
    // 0x251460: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x251460u;
    {
        const bool branch_taken_0x251460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251460) {
            ctx->pc = 0x25146Cu;
            goto label_25146c;
        }
    }
    ctx->pc = 0x251468u;
label_251468:
    // 0x251468: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251468u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_25146c:
    // 0x25146c: 0x3c0e0064  lui         $t6, 0x64
    ctx->pc = 0x25146cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)100 << 16));
    // 0x251470: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x251470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x251474: 0x25cef93c  addiu       $t6, $t6, -0x6C4
    ctx->pc = 0x251474u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965564));
    // 0x251478: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25147c: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x25147cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251480: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x251480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251484: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x251484u;
    {
        const bool branch_taken_0x251484 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251484) {
            ctx->pc = 0x251494u;
            goto label_251494;
        }
    }
    ctx->pc = 0x25148Cu;
    // 0x25148c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25148Cu;
    {
        const bool branch_taken_0x25148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25148Cu;
            // 0x251490: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25148c) {
            ctx->pc = 0x25149Cu;
            goto label_25149c;
        }
    }
    ctx->pc = 0x251494u;
label_251494:
    // 0x251494: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251494u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x251498: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x251498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_25149c:
    // 0x25149c: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x25149cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x2514a0: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x2514a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2514a4: 0x3c0b0064  lui         $t3, 0x64
    ctx->pc = 0x2514a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)100 << 16));
    // 0x2514a8: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2514a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2514ac: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x2514acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
    // 0x2514b0: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x2514b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
    // 0x2514b4: 0x256bf904  addiu       $t3, $t3, -0x6FC
    ctx->pc = 0x2514b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965508));
    // 0x2514b8: 0x254af908  addiu       $t2, $t2, -0x6F8
    ctx->pc = 0x2514b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965512));
    // 0x2514bc: 0x2529f90c  addiu       $t1, $t1, -0x6F4
    ctx->pc = 0x2514bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965516));
    // 0x2514c0: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x2514c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2514c4: 0x27a800b2  addiu       $t0, $sp, 0xB2
    ctx->pc = 0x2514c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 178));
    // 0x2514c8: 0x27a700b4  addiu       $a3, $sp, 0xB4
    ctx->pc = 0x2514c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2514cc: 0x27ad0074  addiu       $t5, $sp, 0x74
    ctx->pc = 0x2514ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x2514d0: 0x27ac0078  addiu       $t4, $sp, 0x78
    ctx->pc = 0x2514d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2514d4: 0x27a3007c  addiu       $v1, $sp, 0x7C
    ctx->pc = 0x2514d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2514d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2514d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2514dc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2514dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2514e0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2514e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2514e4: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2514e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2514e8: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2514e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2514ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2514ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2514f0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2514f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2514f4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2514f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2514f8: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x2514f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2514fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2514fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251500: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x251500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x251504: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x251504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251508: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x251508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25150c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25150cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251510: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x251510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x251514: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x251514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251518: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x251518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x25151c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x25151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251520: 0x8fb20080  lw          $s2, 0x80($sp)
    ctx->pc = 0x251520u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x251524: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x251524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x251528: 0x1299c2  srl         $s3, $s2, 7
    ctx->pc = 0x251528u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 7));
    // 0x25152c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x25152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251530: 0x8fb20084  lw          $s2, 0x84($sp)
    ctx->pc = 0x251530u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x251534: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x251534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x251538: 0x1291c2  srl         $s2, $s2, 7
    ctx->pc = 0x251538u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 7));
    // 0x25153c: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x25153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251540: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x251540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x251544: 0xa7b300b0  sh          $s3, 0xB0($sp)
    ctx->pc = 0x251544u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 19));
    // 0x251548: 0xa5120000  sh          $s2, 0x0($t0)
    ctx->pc = 0x251548u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x25154c: 0x8fb20088  lw          $s2, 0x88($sp)
    ctx->pc = 0x25154cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x251550: 0x1291c2  srl         $s2, $s2, 7
    ctx->pc = 0x251550u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 7));
    // 0x251554: 0xa4f20000  sh          $s2, 0x0($a3)
    ctx->pc = 0x251554u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x251558: 0x8fb2008c  lw          $s2, 0x8C($sp)
    ctx->pc = 0x251558u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x25155c: 0x1291c2  srl         $s2, $s2, 7
    ctx->pc = 0x25155cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 7));
    // 0x251560: 0xa7b200b6  sh          $s2, 0xB6($sp)
    ctx->pc = 0x251560u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 182), (uint16_t)GPR_U32(ctx, 18));
    // 0x251564: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x251564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251568: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x251568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25156c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25156cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251570: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x251570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x251574: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x251574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251578: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x251578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25157c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25157cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251580: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x251580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x251584: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x251584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251588: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x251588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25158c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25158cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251590: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x251590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x251594: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x251594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251598: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x251598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25159c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25159cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2515a0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2515a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2515a4: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x2515a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2515a8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2515a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2515ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2515acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2515b0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2515b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2515b4: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x2515b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2515b8: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x2515b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2515bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2515bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2515c0: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x2515c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2515c4: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x2515c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2515c8: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x2515c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2515cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2515ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2515d0: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x2515d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x2515d4: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x2515d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2515d8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2515d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2515dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2515dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2515e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2515e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2515e4: 0xc421cf90  lwc1        $f1, -0x3070($at)
    ctx->pc = 0x2515e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2515e8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2515e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2515ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2515ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2515f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2515F0u;
    {
        const bool branch_taken_0x2515f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2515F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2515F0u;
            // 0x2515f4: 0xc7a20070  lwc1        $f2, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2515f0) {
            ctx->pc = 0x251600u;
            goto label_251600;
        }
    }
    ctx->pc = 0x2515F8u;
    // 0x2515f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2515F8u;
    {
        const bool branch_taken_0x2515f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2515FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2515F8u;
            // 0x2515fc: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2515f8) {
            ctx->pc = 0x251608u;
            goto label_251608;
        }
    }
    ctx->pc = 0x251600u;
label_251600:
    // 0x251600: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x251600u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x251604: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x251604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_251608:
    // 0x251608: 0x27b20074  addiu       $s2, $sp, 0x74
    ctx->pc = 0x251608u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x25160c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x25160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251610: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x251610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251614: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251618: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251618u;
    {
        const bool branch_taken_0x251618 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251618) {
            ctx->pc = 0x251628u;
            goto label_251628;
        }
    }
    ctx->pc = 0x251620u;
    // 0x251620: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251620u;
    {
        const bool branch_taken_0x251620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251620u;
            // 0x251624: 0xe5a10000  swc1        $f1, 0x0($t5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251620) {
            ctx->pc = 0x251630u;
            goto label_251630;
        }
    }
    ctx->pc = 0x251628u;
label_251628:
    // 0x251628: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251628u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25162c: 0xe5a10000  swc1        $f1, 0x0($t5)
    ctx->pc = 0x25162cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
label_251630:
    // 0x251630: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x251630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x251634: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x251634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251638: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x251638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25163c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25163cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251640: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251640u;
    {
        const bool branch_taken_0x251640 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251640) {
            ctx->pc = 0x251650u;
            goto label_251650;
        }
    }
    ctx->pc = 0x251648u;
    // 0x251648: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251648u;
    {
        const bool branch_taken_0x251648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25164Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251648u;
            // 0x25164c: 0xe5810000  swc1        $f1, 0x0($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251648) {
            ctx->pc = 0x251658u;
            goto label_251658;
        }
    }
    ctx->pc = 0x251650u;
label_251650:
    // 0x251650: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251650u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x251654: 0xe5810000  swc1        $f1, 0x0($t4)
    ctx->pc = 0x251654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_251658:
    // 0x251658: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x251658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x25165c: 0xc7200000  lwc1        $f0, 0x0($t9)
    ctx->pc = 0x25165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251660: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x251660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251668: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251668u;
    {
        const bool branch_taken_0x251668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251668) {
            ctx->pc = 0x251678u;
            goto label_251678;
        }
    }
    ctx->pc = 0x251670u;
    // 0x251670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251670u;
    {
        const bool branch_taken_0x251670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251670u;
            // 0x251674: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251670) {
            ctx->pc = 0x251680u;
            goto label_251680;
        }
    }
    ctx->pc = 0x251678u;
label_251678:
    // 0x251678: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x251678u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25167c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x25167cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_251680:
    // 0x251680: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x251680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x251684: 0xc421f930  lwc1        $f1, -0x6D0($at)
    ctx->pc = 0x251684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251688: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x251688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25168c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25168cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251690: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x251690u;
    {
        const bool branch_taken_0x251690 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x251694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251690u;
            // 0x251694: 0xc7a20070  lwc1        $f2, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251690) {
            ctx->pc = 0x2516A0u;
            goto label_2516a0;
        }
    }
    ctx->pc = 0x251698u;
    // 0x251698: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251698u;
    {
        const bool branch_taken_0x251698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25169Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251698u;
            // 0x25169c: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251698) {
            ctx->pc = 0x2516A8u;
            goto label_2516a8;
        }
    }
    ctx->pc = 0x2516A0u;
label_2516a0:
    // 0x2516a0: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2516a0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2516a4: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x2516a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2516a8:
    // 0x2516a8: 0xc7000000  lwc1        $f0, 0x0($t8)
    ctx->pc = 0x2516a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2516ac: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2516acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2516b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2516b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2516b4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2516B4u;
    {
        const bool branch_taken_0x2516b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2516b4) {
            ctx->pc = 0x2516C4u;
            goto label_2516c4;
        }
    }
    ctx->pc = 0x2516BCu;
    // 0x2516bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2516BCu;
    {
        const bool branch_taken_0x2516bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2516C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2516BCu;
            // 0x2516c0: 0xe5a10000  swc1        $f1, 0x0($t5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516bc) {
            ctx->pc = 0x2516CCu;
            goto label_2516cc;
        }
    }
    ctx->pc = 0x2516C4u;
label_2516c4:
    // 0x2516c4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2516c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2516c8: 0xe5a10000  swc1        $f1, 0x0($t5)
    ctx->pc = 0x2516c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
label_2516cc:
    // 0x2516cc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x2516ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2516d0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2516d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2516d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2516d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2516d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2516D8u;
    {
        const bool branch_taken_0x2516d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2516d8) {
            ctx->pc = 0x2516E8u;
            goto label_2516e8;
        }
    }
    ctx->pc = 0x2516E0u;
    // 0x2516e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2516E0u;
    {
        const bool branch_taken_0x2516e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2516E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2516E0u;
            // 0x2516e4: 0xe5810000  swc1        $f1, 0x0($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516e0) {
            ctx->pc = 0x2516F0u;
            goto label_2516f0;
        }
    }
    ctx->pc = 0x2516E8u;
label_2516e8:
    // 0x2516e8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2516e8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2516ec: 0xe5810000  swc1        $f1, 0x0($t4)
    ctx->pc = 0x2516ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_2516f0:
    // 0x2516f0: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x2516f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2516f4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2516f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2516f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2516f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2516fc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2516FCu;
    {
        const bool branch_taken_0x2516fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2516fc) {
            ctx->pc = 0x25170Cu;
            goto label_25170c;
        }
    }
    ctx->pc = 0x251704u;
    // 0x251704: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251704u;
    {
        const bool branch_taken_0x251704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251704u;
            // 0x251708: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251704) {
            ctx->pc = 0x251714u;
            goto label_251714;
        }
    }
    ctx->pc = 0x25170Cu;
label_25170c:
    // 0x25170c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25170cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x251710: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x251710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_251714:
    // 0x251714: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x251714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x251718: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x251718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25171c: 0x27ae0070  addiu       $t6, $sp, 0x70
    ctx->pc = 0x25171cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x251720: 0xc420f900  lwc1        $f0, -0x700($at)
    ctx->pc = 0x251720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251724: 0x27a500a2  addiu       $a1, $sp, 0xA2
    ctx->pc = 0x251724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 162));
    // 0x251728: 0x27a400a4  addiu       $a0, $sp, 0xA4
    ctx->pc = 0x251728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x25172c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25172cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251730: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x251730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x251734: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x251734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251738: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x251738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25173c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25173cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251740: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x251740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x251744: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x251744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251748: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x251748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25174c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25174cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251750: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x251750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x251754: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x251754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251758: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x251758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25175c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25175cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x251760: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x251760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x251764: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x251764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251768: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x251768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25176c: 0xc5c00004  lwc1        $f0, 0x4($t6)
    ctx->pc = 0x25176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251770: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x251770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251774: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x251774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x251778: 0x349c2  srl         $t1, $v1, 7
    ctx->pc = 0x251778u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x25177c: 0xc5c00008  lwc1        $f0, 0x8($t6)
    ctx->pc = 0x25177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251780: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x251780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x251784: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x251784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x251788: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x251788u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x25178c: 0xc5c0000c  lwc1        $f0, 0xC($t6)
    ctx->pc = 0x25178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251790: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x251790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x251794: 0xa7a900a0  sh          $t1, 0xA0($sp)
    ctx->pc = 0x251794u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 9));
    // 0x251798: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x251798u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25179c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x25179cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2517a0: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x2517a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x2517a4: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2517a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2517a8: 0x8fa9006c  lw          $t1, 0x6C($sp)
    ctx->pc = 0x2517a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2517ac: 0x97a300b0  lhu         $v1, 0xB0($sp)
    ctx->pc = 0x2517acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2517b0: 0x949c2  srl         $t1, $t1, 7
    ctx->pc = 0x2517b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 7));
    // 0x2517b4: 0xa7a900a6  sh          $t1, 0xA6($sp)
    ctx->pc = 0x2517b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 166), (uint16_t)GPR_U32(ctx, 9));
    // 0x2517b8: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x2517b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x2517bc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2517bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2517c0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x2517c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2517c4: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x2517c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x2517c8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2517c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2517cc: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x2517ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2517d0: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x2517d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x2517d4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2517d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2517d8: 0x97a300a0  lhu         $v1, 0xA0($sp)
    ctx->pc = 0x2517d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2517dc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2517dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2517e0: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x2517e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x2517e4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2517e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2517e8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2517e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2517ec: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x2517ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x2517f0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2517f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2517f4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2517f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2517f8: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x2517f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x2517fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2517fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251800: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x251800u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251804: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x251804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x251808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25180c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25180cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251814: 0x3e00008  jr          $ra
    ctx->pc = 0x251814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251814u;
            // 0x251818: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25181Cu;
    // 0x25181c: 0x0  nop
    ctx->pc = 0x25181cu;
    // NOP
}
