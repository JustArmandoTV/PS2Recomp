#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144F30
// Address: 0x144f30 - 0x1451f0
void sub_00144F30_0x144f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144F30_0x144f30");
#endif

    switch (ctx->pc) {
        case 0x144f50u: goto label_144f50;
        case 0x144fa8u: goto label_144fa8;
        case 0x144fb8u: goto label_144fb8;
        case 0x144fc0u: goto label_144fc0;
        case 0x145054u: goto label_145054;
        case 0x1450b8u: goto label_1450b8;
        case 0x1450c8u: goto label_1450c8;
        case 0x1450ccu: goto label_1450cc;
        case 0x14515cu: goto label_14515c;
        case 0x1451b0u: goto label_1451b0;
        case 0x1451ccu: goto label_1451cc;
        default: break;
    }

    ctx->pc = 0x144f30u;

    // 0x144f30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x144f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x144f34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x144f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x144f38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144f3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144f40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x144f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f44: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x144f44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x144f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144f4c: 0x26315b30  addiu       $s1, $s1, 0x5B30
    ctx->pc = 0x144f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23344));
label_144f50:
    // 0x144f50: 0x44921000  mtc1        $s2, $f2
    ctx->pc = 0x144f50u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x144f54: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x144f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x144f58: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x144f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x144f5c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x144f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x144f60: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x144f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x144f64: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x144f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x144f68: 0x0  nop
    ctx->pc = 0x144f68u;
    // NOP
    // 0x144f6c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x144f6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x144f70: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x144f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x144f74: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x144f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x144f78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x144f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144f7c: 0x0  nop
    ctx->pc = 0x144f7cu;
    // NOP
    // 0x144f80: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x144f80u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x144f84: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144f84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144f88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x144f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x144f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144f90: 0x0  nop
    ctx->pc = 0x144f90u;
    // NOP
    // 0x144f94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x144f94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x144f98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144f98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x144f9c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x144f9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x144fa0: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x144FA0u;
    SET_GPR_U32(ctx, 31, 0x144FA8u);
    ctx->pc = 0x144FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144FA0u;
            // 0x144fa4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FA8u; }
        if (ctx->pc != 0x144FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FA8u; }
        if (ctx->pc != 0x144FA8u) { return; }
    }
    ctx->pc = 0x144FA8u;
label_144fa8:
    // 0x144fa8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x144fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144fac: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x144facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x144fb0: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x144FB0u;
    SET_GPR_U32(ctx, 31, 0x144FB8u);
    ctx->pc = 0x144FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144FB0u;
            // 0x144fb4: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FB8u; }
        if (ctx->pc != 0x144FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FB8u; }
        if (ctx->pc != 0x144FB8u) { return; }
    }
    ctx->pc = 0x144FB8u;
label_144fb8:
    // 0x144fb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x144fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144fbc: 0x0  nop
    ctx->pc = 0x144fbcu;
    // NOP
label_144fc0:
    // 0x144fc0: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x144fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x144fc4: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x144fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144fc8: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x144fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x144fcc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x144fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x144fd0: 0x3c0443b4  lui         $a0, 0x43B4
    ctx->pc = 0x144fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17332 << 16));
    // 0x144fd4: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x144fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x144fd8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x144fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x144fdc: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x144fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144fe0: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x144fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x144fe4: 0x46031818  adda.s      $f3, $f3
    ctx->pc = 0x144fe4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x144fe8: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x144fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x144fec: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x144fecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x144ff0: 0x4602209c  madd.s      $f2, $f4, $f2
    ctx->pc = 0x144ff0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x144ff4: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x144ff4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x144ff8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x144ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144ffc: 0x46031818  adda.s      $f3, $f3
    ctx->pc = 0x144ffcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x145000: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x145000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x145004: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x145004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x145008: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x145008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x14500c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x14500cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145010: 0x0  nop
    ctx->pc = 0x145010u;
    // NOP
    // 0x145014: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x145014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x145018: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x145018u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14501c: 0x0  nop
    ctx->pc = 0x14501cu;
    // NOP
    // 0x145020: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x145020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x145024: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145028: 0x0  nop
    ctx->pc = 0x145028u;
    // NOP
    // 0x14502c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14502cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x145030: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x145030u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x145034: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x145034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x145038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x145038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14503c: 0x0  nop
    ctx->pc = 0x14503cu;
    // NOP
    // 0x145040: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x145040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x145044: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x145044u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x145048: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x145048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14504c: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x14504Cu;
    SET_GPR_U32(ctx, 31, 0x145054u);
    ctx->pc = 0x145050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14504Cu;
            // 0x145050: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145054u; }
        if (ctx->pc != 0x145054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145054u; }
        if (ctx->pc != 0x145054u) { return; }
    }
    ctx->pc = 0x145054u;
label_145054:
    // 0x145054: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x145054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145058: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x145058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14505c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x14505cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x145060: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x145060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x145064: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x145064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x145068: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x145068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14506c: 0x46031818  adda.s      $f3, $f3
    ctx->pc = 0x14506cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x145070: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x145070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x145074: 0x4602209c  madd.s      $f2, $f4, $f2
    ctx->pc = 0x145074u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x145078: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x145078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x14507c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x14507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145080: 0x46031818  adda.s      $f3, $f3
    ctx->pc = 0x145080u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x145084: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x145084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x145088: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x145088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x14508c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x14508cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x145090: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x145090u;
    {
        const bool branch_taken_0x145090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145090u;
            // 0x145094: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145090) {
            ctx->pc = 0x144FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_144fc0;
        }
    }
    ctx->pc = 0x145098u;
    // 0x145098: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x145098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14509c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x14509cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1450a0: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x1450A0u;
    {
        const bool branch_taken_0x1450a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1450a0) {
            ctx->pc = 0x144F50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_144f50;
        }
    }
    ctx->pc = 0x1450A8u;
    // 0x1450a8: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x1450a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1450ac: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x1450acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1450b0: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x1450B0u;
    SET_GPR_U32(ctx, 31, 0x1450B8u);
    ctx->pc = 0x1450B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1450B0u;
            // 0x1450b4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450B8u; }
        if (ctx->pc != 0x1450B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450B8u; }
        if (ctx->pc != 0x1450B8u) { return; }
    }
    ctx->pc = 0x1450B8u;
label_1450b8:
    // 0x1450b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1450b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450bc: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1450bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1450c0: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x1450C0u;
    SET_GPR_U32(ctx, 31, 0x1450C8u);
    ctx->pc = 0x1450C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1450C0u;
            // 0x1450c4: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450C8u; }
        if (ctx->pc != 0x1450C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450C8u; }
        if (ctx->pc != 0x1450C8u) { return; }
    }
    ctx->pc = 0x1450C8u;
label_1450c8:
    // 0x1450c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1450c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1450cc:
    // 0x1450cc: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1450ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1450d0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1450d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1450d4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1450d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1450d8: 0x3c0443b4  lui         $a0, 0x43B4
    ctx->pc = 0x1450d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17332 << 16));
    // 0x1450dc: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x1450dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1450e0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1450e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1450e4: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x1450e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1450e8: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1450e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1450ec: 0x46042018  adda.s      $f4, $f4
    ctx->pc = 0x1450ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x1450f0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1450f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1450f4: 0x460328dc  madd.s      $f3, $f5, $f3
    ctx->pc = 0x1450f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[3]));
    // 0x1450f8: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x1450f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1450fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1450fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145100: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x145100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145104: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x145104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x145108: 0x46042018  adda.s      $f4, $f4
    ctx->pc = 0x145108u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x14510c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x14510cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x145110: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x145110u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x145114: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x145114u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x145118: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x145118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x14511c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14511cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x145120: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x145120u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145124: 0x0  nop
    ctx->pc = 0x145124u;
    // NOP
    // 0x145128: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x145128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14512c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14512cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145130: 0x0  nop
    ctx->pc = 0x145130u;
    // NOP
    // 0x145134: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x145134u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x145138: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x145138u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14513c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14513cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x145140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x145140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145144: 0x0  nop
    ctx->pc = 0x145144u;
    // NOP
    // 0x145148: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x145148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14514c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14514cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x145150: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x145150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x145154: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x145154u;
    SET_GPR_U32(ctx, 31, 0x14515Cu);
    ctx->pc = 0x145158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145154u;
            // 0x145158: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14515Cu; }
        if (ctx->pc != 0x14515Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14515Cu; }
        if (ctx->pc != 0x14515Cu) { return; }
    }
    ctx->pc = 0x14515Cu;
label_14515c:
    // 0x14515c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x14515cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145160: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x145160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x145164: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x145164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x145168: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x145168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x14516c: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x14516cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x145170: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x145170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145174: 0x46031818  adda.s      $f3, $f3
    ctx->pc = 0x145174u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x145178: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x145178u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x14517c: 0x4602209c  madd.s      $f2, $f4, $f2
    ctx->pc = 0x14517cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x145180: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x145180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x145184: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x145184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145188: 0x46031818  adda.s      $f3, $f3
    ctx->pc = 0x145188u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x14518c: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x14518cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x145190: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x145190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x145194: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x145194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x145198: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x145198u;
    {
        const bool branch_taken_0x145198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14519Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145198u;
            // 0x14519c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145198) {
            ctx->pc = 0x1450CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1450cc;
        }
    }
    ctx->pc = 0x1451A0u;
    // 0x1451a0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1451a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1451a4: 0x240517c0  addiu       $a1, $zero, 0x17C0
    ctx->pc = 0x1451a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6080));
    // 0x1451a8: 0xc0512f0  jal         func_144BC0
    ctx->pc = 0x1451A8u;
    SET_GPR_U32(ctx, 31, 0x1451B0u);
    ctx->pc = 0x1451ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1451A8u;
            // 0x1451ac: 0x248460d0  addiu       $a0, $a0, 0x60D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144BC0u;
    if (runtime->hasFunction(0x144BC0u)) {
        auto targetFn = runtime->lookupFunction(0x144BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1451B0u; }
        if (ctx->pc != 0x1451B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144BC0_0x144bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1451B0u; }
        if (ctx->pc != 0x1451B0u) { return; }
    }
    ctx->pc = 0x1451B0u;
label_1451b0:
    // 0x1451b0: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x1451b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x1451b4: 0xaf8282cc  sw          $v0, -0x7D34($gp)
    ctx->pc = 0x1451b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935244), GPR_U32(ctx, 2));
    // 0x1451b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1451b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1451bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1451bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1451c0: 0x24c65b30  addiu       $a2, $a2, 0x5B30
    ctx->pc = 0x1451c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23344));
    // 0x1451c4: 0xc0512f4  jal         func_144BD0
    ctx->pc = 0x1451C4u;
    SET_GPR_U32(ctx, 31, 0x1451CCu);
    ctx->pc = 0x1451C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1451C4u;
            // 0x1451c8: 0x24070078  addiu       $a3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144BD0u;
    if (runtime->hasFunction(0x144BD0u)) {
        auto targetFn = runtime->lookupFunction(0x144BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1451CCu; }
        if (ctx->pc != 0x1451CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144BD0_0x144bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1451CCu; }
        if (ctx->pc != 0x1451CCu) { return; }
    }
    ctx->pc = 0x1451CCu;
label_1451cc:
    // 0x1451cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1451ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1451d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1451d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1451d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1451d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1451d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1451dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1451DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1451E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1451DCu;
            // 0x1451e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1451E4u;
    // 0x1451e4: 0x0  nop
    ctx->pc = 0x1451e4u;
    // NOP
    // 0x1451e8: 0x0  nop
    ctx->pc = 0x1451e8u;
    // NOP
    // 0x1451ec: 0x0  nop
    ctx->pc = 0x1451ecu;
    // NOP
}
