#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AB800
// Address: 0x3ab800 - 0x3abf50
void sub_003AB800_0x3ab800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB800_0x3ab800");
#endif

    switch (ctx->pc) {
        case 0x3ab8a0u: goto label_3ab8a0;
        default: break;
    }

    ctx->pc = 0x3ab800u;

    // 0x3ab800: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ab800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3ab804: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ab804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3ab808: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3ab808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3ab80c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3ab80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3ab810: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ab810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3ab814: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ab814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3ab818: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ab818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ab81c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ab81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3ab820: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ab820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ab824: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3ab824u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3ab828: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3ab828u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ab82c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ab82cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ab830: 0x8c538a08  lw          $s3, -0x75F8($v0)
    ctx->pc = 0x3ab830u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x3ab834: 0x8c920034  lw          $s2, 0x34($a0)
    ctx->pc = 0x3ab834u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3ab838: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x3ab838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x3ab83c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ab83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ab840: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x3ab840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x3ab844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ab844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab848: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x3ab848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ab84c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ab84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3ab850: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x3ab850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
    // 0x3ab854: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3ab854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ab858: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3ab858u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ab85c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ab85cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ab860: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3ab860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3ab864: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3ab864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3ab868: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3ab868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ab86c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x3ab86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ab870: 0x2402ffe3  addiu       $v0, $zero, -0x1D
    ctx->pc = 0x3ab870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x3ab874: 0x46020582  mul.s       $f22, $f0, $f2
    ctx->pc = 0x3ab874u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3ab878: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x3ab878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x3ab87c: 0x24b40038  addiu       $s4, $a1, 0x38
    ctx->pc = 0x3ab87cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    // 0x3ab880: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3ab880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3ab884: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x3ab884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
    // 0x3ab888: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ab888u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ab88c: 0xc6150a7c  lwc1        $f21, 0xA7C($s0)
    ctx->pc = 0x3ab88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3ab890: 0xc6140a84  lwc1        $f20, 0xA84($s0)
    ctx->pc = 0x3ab890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ab894: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x3ab894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x3ab898: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x3AB898u;
    SET_GPR_U32(ctx, 31, 0x3AB8A0u);
    ctx->pc = 0x3AB89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB898u;
            // 0x3ab89c: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AB8A0u; }
        if (ctx->pc != 0x3AB8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AB8A0u; }
        if (ctx->pc != 0x3AB8A0u) { return; }
    }
    ctx->pc = 0x3AB8A0u;
label_3ab8a0:
    // 0x3ab8a0: 0xc4440034  lwc1        $f4, 0x34($v0)
    ctx->pc = 0x3ab8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ab8a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ab8a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab8a8: 0x0  nop
    ctx->pc = 0x3ab8a8u;
    // NOP
    // 0x3ab8ac: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x3ab8acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab8b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3AB8B0u;
    {
        const bool branch_taken_0x3ab8b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ab8b0) {
            ctx->pc = 0x3AB8C8u;
            goto label_3ab8c8;
        }
    }
    ctx->pc = 0x3AB8B8u;
    // 0x3ab8b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3ab8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3ab8bc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3ab8bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3ab8c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ab8c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3ab8c4: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3ab8c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3ab8c8:
    // 0x3ab8c8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3ab8c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ab8cc: 0x0  nop
    ctx->pc = 0x3ab8ccu;
    // NOP
    // 0x3ab8d0: 0x4603a836  c.le.s      $f21, $f3
    ctx->pc = 0x3ab8d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab8d4: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x3AB8D4u;
    {
        const bool branch_taken_0x3ab8d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ab8d4) {
            ctx->pc = 0x3AB8D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB8D4u;
            // 0x3ab8d8: 0xc6800020  lwc1        $f0, 0x20($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AB928u;
            goto label_3ab928;
        }
    }
    ctx->pc = 0x3AB8DCu;
    // 0x3ab8dc: 0x4603a036  c.le.s      $f20, $f3
    ctx->pc = 0x3ab8dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab8e0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x3AB8E0u;
    {
        const bool branch_taken_0x3ab8e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ab8e0) {
            ctx->pc = 0x3AB924u;
            goto label_3ab924;
        }
    }
    ctx->pc = 0x3AB8E8u;
    // 0x3ab8e8: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x3ab8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ab8ec: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3ab8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3ab8f0: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x3ab8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ab8f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ab8f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ab8f8: 0x0  nop
    ctx->pc = 0x3ab8f8u;
    // NOP
    // 0x3ab8fc: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3ab8fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3ab900: 0x4602081d  msub.s      $f0, $f1, $f2
    ctx->pc = 0x3ab900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x3ab904: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3ab904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab908: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x3AB908u;
    {
        const bool branch_taken_0x3ab908 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AB90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB908u;
            // 0x3ab90c: 0xe6800024  swc1        $f0, 0x24($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab908) {
            ctx->pc = 0x3AB9E0u;
            goto label_3ab9e0;
        }
    }
    ctx->pc = 0x3AB910u;
    // 0x3ab910: 0xe6830024  swc1        $f3, 0x24($s4)
    ctx->pc = 0x3ab910u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x3ab914: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3ab914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3ab918: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3ab918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x3ab91c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3AB91Cu;
    {
        const bool branch_taken_0x3ab91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB91Cu;
            // 0x3ab920: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab91c) {
            ctx->pc = 0x3AB9E0u;
            goto label_3ab9e0;
        }
    }
    ctx->pc = 0x3AB924u;
label_3ab924:
    // 0x3ab924: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x3ab924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ab928:
    // 0x3ab928: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x3ab928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab92c: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x3AB92Cu;
    {
        const bool branch_taken_0x3ab92c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ab92c) {
            ctx->pc = 0x3AB930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB92Cu;
            // 0x3ab930: 0xc6800024  lwc1        $f0, 0x24($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AB974u;
            goto label_3ab974;
        }
    }
    ctx->pc = 0x3AB934u;
    // 0x3ab934: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x3ab934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ab938: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3ab938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3ab93c: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x3ab93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ab940: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ab940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ab944: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3ab944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ab948: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3ab948u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ab94c: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x3ab94cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3ab950: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ab950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab954: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x3AB954u;
    {
        const bool branch_taken_0x3ab954 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AB958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB954u;
            // 0x3ab958: 0xe6810024  swc1        $f1, 0x24($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab954) {
            ctx->pc = 0x3AB9E0u;
            goto label_3ab9e0;
        }
    }
    ctx->pc = 0x3AB95Cu;
    // 0x3ab95c: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x3ab95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x3ab960: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x3ab960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ab964: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x3ab964u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x3ab968: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x3ab968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
    // 0x3ab96c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3AB96Cu;
    {
        const bool branch_taken_0x3ab96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB96Cu;
            // 0x3ab970: 0xe6840020  swc1        $f4, 0x20($s4) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab96c) {
            ctx->pc = 0x3AB9E0u;
            goto label_3ab9e0;
        }
    }
    ctx->pc = 0x3AB974u;
label_3ab974:
    // 0x3ab974: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3ab974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3ab978: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x3ab978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ab97c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3ab97cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ab980: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3ab980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ab984: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x3ab984u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3ab988: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x3ab988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3ab98c: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x3ab98cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab990: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x3AB990u;
    {
        const bool branch_taken_0x3ab990 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AB994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB990u;
            // 0x3ab994: 0xe6800024  swc1        $f0, 0x24($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab990) {
            ctx->pc = 0x3AB9E0u;
            goto label_3ab9e0;
        }
    }
    ctx->pc = 0x3AB998u;
    // 0x3ab998: 0xe6840024  swc1        $f4, 0x24($s4)
    ctx->pc = 0x3ab998u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x3ab99c: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x3ab99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ab9a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ab9a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ab9a4: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x3AB9A4u;
    {
        const bool branch_taken_0x3ab9a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ab9a4) {
            ctx->pc = 0x3AB9A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AB9A4u;
            // 0x3ab9a8: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AB9E4u;
            goto label_3ab9e4;
        }
    }
    ctx->pc = 0x3AB9ACu;
    // 0x3ab9ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ab9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab9b0: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x3ab9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x3ab9b4: 0xae84002c  sw          $a0, 0x2C($s4)
    ctx->pc = 0x3ab9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 4));
    // 0x3ab9b8: 0xae830030  sw          $v1, 0x30($s4)
    ctx->pc = 0x3ab9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 3));
    // 0x3ab9bc: 0x3c0441b0  lui         $a0, 0x41B0
    ctx->pc = 0x3ab9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16816 << 16));
    // 0x3ab9c0: 0xae840034  sw          $a0, 0x34($s4)
    ctx->pc = 0x3ab9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 4));
    // 0x3ab9c4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3ab9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3ab9c8: 0xe6800038  swc1        $f0, 0x38($s4)
    ctx->pc = 0x3ab9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
    // 0x3ab9cc: 0xe6810028  swc1        $f1, 0x28($s4)
    ctx->pc = 0x3ab9ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
    // 0x3ab9d0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3ab9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3ab9d4: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x3ab9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x3ab9d8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x3ab9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x3ab9dc: 0xa2830011  sb          $v1, 0x11($s4)
    ctx->pc = 0x3ab9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 17), (uint8_t)GPR_U32(ctx, 3));
label_3ab9e0:
    // 0x3ab9e0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3ab9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ab9e4:
    // 0x3ab9e4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3ab9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3ab9e8: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3AB9E8u;
    {
        const bool branch_taken_0x3ab9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab9e8) {
            ctx->pc = 0x3ABAE0u;
            goto label_3abae0;
        }
    }
    ctx->pc = 0x3AB9F0u;
    // 0x3ab9f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3ab9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3ab9f4: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x3ab9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x3ab9f8: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x3ab9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3ab9fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ab9fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aba00: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x3aba00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aba04: 0x92830011  lbu         $v1, 0x11($s4)
    ctx->pc = 0x3aba04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
    // 0x3aba08: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ABA08u;
    {
        const bool branch_taken_0x3aba08 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3ABA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABA08u;
            // 0x3aba0c: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba08) {
            ctx->pc = 0x3ABA1Cu;
            goto label_3aba1c;
        }
    }
    ctx->pc = 0x3ABA10u;
    // 0x3aba10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aba10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aba14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3ABA14u;
    {
        const bool branch_taken_0x3aba14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABA14u;
            // 0x3aba18: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba14) {
            ctx->pc = 0x3ABA38u;
            goto label_3aba38;
        }
    }
    ctx->pc = 0x3ABA1Cu;
label_3aba1c:
    // 0x3aba1c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3aba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3aba20: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3aba20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3aba24: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3aba24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3aba28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aba28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aba2c: 0x0  nop
    ctx->pc = 0x3aba2cu;
    // NOP
    // 0x3aba30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aba30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3aba34: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3aba34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3aba38:
    // 0x3aba38: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x3aba38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3aba3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aba3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aba40: 0x0  nop
    ctx->pc = 0x3aba40u;
    // NOP
    // 0x3aba44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3aba44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aba48: 0x45030020  bc1tl       . + 4 + (0x20 << 2)
    ctx->pc = 0x3ABA48u;
    {
        const bool branch_taken_0x3aba48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3aba48) {
            ctx->pc = 0x3ABA4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABA48u;
            // 0x3aba4c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABACCu;
            goto label_3abacc;
        }
    }
    ctx->pc = 0x3ABA50u;
    // 0x3aba50: 0x92830011  lbu         $v1, 0x11($s4)
    ctx->pc = 0x3aba50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
    // 0x3aba54: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ABA54u;
    {
        const bool branch_taken_0x3aba54 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3aba54) {
            ctx->pc = 0x3ABA58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABA54u;
            // 0x3aba58: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABA68u;
            goto label_3aba68;
        }
    }
    ctx->pc = 0x3ABA5Cu;
    // 0x3aba5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aba5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aba60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3ABA60u;
    {
        const bool branch_taken_0x3aba60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABA60u;
            // 0x3aba64: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba60) {
            ctx->pc = 0x3ABA80u;
            goto label_3aba80;
        }
    }
    ctx->pc = 0x3ABA68u;
label_3aba68:
    // 0x3aba68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3aba68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3aba6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3aba6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3aba70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aba70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aba74: 0x0  nop
    ctx->pc = 0x3aba74u;
    // NOP
    // 0x3aba78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aba78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3aba7c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3aba7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3aba80:
    // 0x3aba80: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x3aba80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3aba84: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3aba84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3aba88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aba88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aba8c: 0x0  nop
    ctx->pc = 0x3aba8cu;
    // NOP
    // 0x3aba90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3aba90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aba94: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3ABA94u;
    {
        const bool branch_taken_0x3aba94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3aba94) {
            ctx->pc = 0x3ABA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABA94u;
            // 0x3aba98: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABAACu;
            goto label_3abaac;
        }
    }
    ctx->pc = 0x3ABA9Cu;
    // 0x3aba9c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3aba9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3abaa0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3abaa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3abaa4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3ABAA4u;
    {
        const bool branch_taken_0x3abaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABAA4u;
            // 0x3abaa8: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abaa4) {
            ctx->pc = 0x3ABAC4u;
            goto label_3abac4;
        }
    }
    ctx->pc = 0x3ABAACu;
label_3abaac:
    // 0x3abaac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3abaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3abab0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3abab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3abab4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3abab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3abab8: 0x0  nop
    ctx->pc = 0x3abab8u;
    // NOP
    // 0x3ababc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ababcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3abac0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3abac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3abac4:
    // 0x3abac4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3ABAC4u;
    {
        const bool branch_taken_0x3abac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABAC4u;
            // 0x3abac8: 0xa2840011  sb          $a0, 0x11($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 17), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abac4) {
            ctx->pc = 0x3ABAE0u;
            goto label_3abae0;
        }
    }
    ctx->pc = 0x3ABACCu;
label_3abacc:
    // 0x3abacc: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x3abaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3abad0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3abad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3abad4: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x3abad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x3abad8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x3abad8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x3abadc: 0xa2830011  sb          $v1, 0x11($s4)
    ctx->pc = 0x3abadcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 17), (uint8_t)GPR_U32(ctx, 3));
label_3abae0:
    // 0x3abae0: 0x4614a832  c.eq.s      $f21, $f20
    ctx->pc = 0x3abae0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3abae4: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
    ctx->pc = 0x3ABAE4u;
    {
        const bool branch_taken_0x3abae4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3abae4) {
            ctx->pc = 0x3ABAE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABAE4u;
            // 0x3abae8: 0x8e040a68  lw          $a0, 0xA68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABB98u;
            goto label_3abb98;
        }
    }
    ctx->pc = 0x3ABAECu;
    // 0x3abaec: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x3abaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abaf0: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x3abaf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3abaf4: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x3ABAF4u;
    {
        const bool branch_taken_0x3abaf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3abaf4) {
            ctx->pc = 0x3ABB94u;
            goto label_3abb94;
        }
    }
    ctx->pc = 0x3ABAFCu;
    // 0x3abafc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3abafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3abb00: 0x0  nop
    ctx->pc = 0x3abb00u;
    // NOP
    // 0x3abb04: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x3abb04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3abb08: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x3ABB08u;
    {
        const bool branch_taken_0x3abb08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3abb08) {
            ctx->pc = 0x3ABB94u;
            goto label_3abb94;
        }
    }
    ctx->pc = 0x3ABB10u;
    // 0x3abb10: 0x4603a836  c.le.s      $f21, $f3
    ctx->pc = 0x3abb10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3abb14: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x3ABB14u;
    {
        const bool branch_taken_0x3abb14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3abb14) {
            ctx->pc = 0x3ABB18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABB14u;
            // 0x3abb18: 0x8e030a68  lw          $v1, 0xA68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABB7Cu;
            goto label_3abb7c;
        }
    }
    ctx->pc = 0x3ABB1Cu;
    // 0x3abb1c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x3abb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abb20: 0x3c03452a  lui         $v1, 0x452A
    ctx->pc = 0x3abb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17706 << 16));
    // 0x3abb24: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x3abb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x3abb28: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3abb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3abb2c: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x3abb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3abb30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3abb30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3abb34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3abb34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3abb38: 0x0  nop
    ctx->pc = 0x3abb38u;
    // NOP
    // 0x3abb3c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3abb3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3abb40: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x3abb40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x3abb44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3abb44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3abb48: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3abb48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3abb4c: 0x0  nop
    ctx->pc = 0x3abb4cu;
    // NOP
    // 0x3abb50: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x3abb50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x3abb54: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ABB54u;
    {
        const bool branch_taken_0x3abb54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABB54u;
            // 0x3abb58: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb54) {
            ctx->pc = 0x3ABB68u;
            goto label_3abb68;
        }
    }
    ctx->pc = 0x3ABB5Cu;
    // 0x3abb5c: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x3abb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x3abb60: 0x24638001  addiu       $v1, $v1, -0x7FFF
    ctx->pc = 0x3abb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934529));
    // 0x3abb64: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3abb64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_3abb68:
    // 0x3abb68: 0x92830010  lbu         $v1, 0x10($s4)
    ctx->pc = 0x3abb68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3abb6c: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x3abb6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3abb70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3abb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3abb74: 0xa2830010  sb          $v1, 0x10($s4)
    ctx->pc = 0x3abb74u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abb78: 0x8e030a68  lw          $v1, 0xA68($s0)
    ctx->pc = 0x3abb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
label_3abb7c:
    // 0x3abb7c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ABB7Cu;
    {
        const bool branch_taken_0x3abb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abb7c) {
            ctx->pc = 0x3ABB80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABB7Cu;
            // 0x3abb80: 0xc6400010  lwc1        $f0, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABB8Cu;
            goto label_3abb8c;
        }
    }
    ctx->pc = 0x3ABB84u;
    // 0x3abb84: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x3ABB84u;
    {
        const bool branch_taken_0x3abb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABB84u;
            // 0x3abb88: 0x8e83002c  lw          $v1, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb84) {
            ctx->pc = 0x3ABEC0u;
            goto label_3abec0;
        }
    }
    ctx->pc = 0x3ABB8Cu;
label_3abb8c:
    // 0x3abb8c: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x3ABB8Cu;
    {
        const bool branch_taken_0x3abb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABB8Cu;
            // 0x3abb90: 0xe680001c  swc1        $f0, 0x1C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb8c) {
            ctx->pc = 0x3ABEBCu;
            goto label_3abebc;
        }
    }
    ctx->pc = 0x3ABB94u;
label_3abb94:
    // 0x3abb94: 0x8e040a68  lw          $a0, 0xA68($s0)
    ctx->pc = 0x3abb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
label_3abb98:
    // 0x3abb98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3abb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3abb9c: 0x1083006c  beq         $a0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x3ABB9Cu;
    {
        const bool branch_taken_0x3abb9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3abb9c) {
            ctx->pc = 0x3ABD50u;
            goto label_3abd50;
        }
    }
    ctx->pc = 0x3ABBA4u;
    // 0x3abba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3abba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3abba8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ABBA8u;
    {
        const bool branch_taken_0x3abba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3abba8) {
            ctx->pc = 0x3ABBB8u;
            goto label_3abbb8;
        }
    }
    ctx->pc = 0x3ABBB0u;
    // 0x3abbb0: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x3ABBB0u;
    {
        const bool branch_taken_0x3abbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abbb0) {
            ctx->pc = 0x3ABE38u;
            goto label_3abe38;
        }
    }
    ctx->pc = 0x3ABBB8u;
label_3abbb8:
    // 0x3abbb8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3abbb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3abbbc: 0x0  nop
    ctx->pc = 0x3abbbcu;
    // NOP
    // 0x3abbc0: 0x4603a836  c.le.s      $f21, $f3
    ctx->pc = 0x3abbc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3abbc4: 0x450100bd  bc1t        . + 4 + (0xBD << 2)
    ctx->pc = 0x3ABBC4u;
    {
        const bool branch_taken_0x3abbc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3abbc4) {
            ctx->pc = 0x3ABEBCu;
            goto label_3abebc;
        }
    }
    ctx->pc = 0x3ABBCCu;
    // 0x3abbcc: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x3abbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abbd0: 0x3c03452a  lui         $v1, 0x452A
    ctx->pc = 0x3abbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17706 << 16));
    // 0x3abbd4: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x3abbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x3abbd8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3abbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3abbdc: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x3abbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3abbe0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3abbe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3abbe4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3abbe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3abbe8: 0x0  nop
    ctx->pc = 0x3abbe8u;
    // NOP
    // 0x3abbec: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3abbecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3abbf0: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x3abbf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x3abbf4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3abbf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3abbf8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3abbf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3abbfc: 0x0  nop
    ctx->pc = 0x3abbfcu;
    // NOP
    // 0x3abc00: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x3abc00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x3abc04: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ABC04u;
    {
        const bool branch_taken_0x3abc04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABC04u;
            // 0x3abc08: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abc04) {
            ctx->pc = 0x3ABC18u;
            goto label_3abc18;
        }
    }
    ctx->pc = 0x3ABC0Cu;
    // 0x3abc0c: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x3abc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x3abc10: 0x24638001  addiu       $v1, $v1, -0x7FFF
    ctx->pc = 0x3abc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934529));
    // 0x3abc14: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3abc14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_3abc18:
    // 0x3abc18: 0x92840010  lbu         $a0, 0x10($s4)
    ctx->pc = 0x3abc18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3abc1c: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x3abc1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3abc20: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x3abc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x3abc24: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x3abc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3abc28: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3abc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3abc2c: 0xa2840010  sb          $a0, 0x10($s4)
    ctx->pc = 0x3abc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x3abc30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3abc30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3abc34: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x3abc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3abc38: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x3abc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3abc3c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3abc3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3abc40: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3abc40u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3abc44: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x3abc44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3abc48: 0xe681001c  swc1        $f1, 0x1C($s4)
    ctx->pc = 0x3abc48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x3abc4c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x3abc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abc50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3abc50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3abc54: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3ABC54u;
    {
        const bool branch_taken_0x3abc54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3abc54) {
            ctx->pc = 0x3ABC58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABC54u;
            // 0x3abc58: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABC6Cu;
            goto label_3abc6c;
        }
    }
    ctx->pc = 0x3ABC5Cu;
    // 0x3abc5c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3abc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abc60: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3abc60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3abc64: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x3abc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x3abc68: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3abc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3abc6c:
    // 0x3abc6c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3abc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3abc70: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3abc70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3abc74: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x3abc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abc78: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x3abc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3abc7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3abc7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3abc80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3abc80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3abc84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3abc84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3abc88: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3abc88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3abc8c: 0x0  nop
    ctx->pc = 0x3abc8cu;
    // NOP
    // 0x3abc90: 0xae840014  sw          $a0, 0x14($s4)
    ctx->pc = 0x3abc90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 4));
    // 0x3abc94: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x3abc94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x3abc98: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x3abc98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3abc9c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ABC9Cu;
    {
        const bool branch_taken_0x3abc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abc9c) {
            ctx->pc = 0x3ABCA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABC9Cu;
            // 0x3abca0: 0x3c043fb3  lui         $a0, 0x3FB3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16307 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABCACu;
            goto label_3abcac;
        }
    }
    ctx->pc = 0x3ABCA4u;
    // 0x3abca4: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x3abca4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x3abca8: 0x3c043fb3  lui         $a0, 0x3FB3
    ctx->pc = 0x3abca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16307 << 16));
label_3abcac:
    // 0x3abcac: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x3abcacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x3abcb0: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x3abcb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x3abcb4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3abcb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3abcb8: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x3abcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3abcbc: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x3abcbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3abcc0: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x3abcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3abcc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3abcc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3abcc8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x3abcc8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3abccc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3abcccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3abcd0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3abcd0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3abcd4: 0x4616101c  madd.s      $f0, $f2, $f22
    ctx->pc = 0x3abcd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[22]));
    // 0x3abcd8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3abcd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3abcdc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3ABCDCu;
    {
        const bool branch_taken_0x3abcdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ABCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABCDCu;
            // 0x3abce0: 0xe6800018  swc1        $f0, 0x18($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abcdc) {
            ctx->pc = 0x3ABCECu;
            goto label_3abcec;
        }
    }
    ctx->pc = 0x3ABCE4u;
    // 0x3abce4: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x3abce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abce8: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x3abce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_3abcec:
    // 0x3abcec: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x3abcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3abcf0: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3abcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x3abcf4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3abcf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3abcf8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3abcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3abcfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3abcfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3abd00: 0x0  nop
    ctx->pc = 0x3abd00u;
    // NOP
    // 0x3abd04: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3abd04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3abd08: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x3abd08u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x3abd0c: 0x0  nop
    ctx->pc = 0x3abd0cu;
    // NOP
    // 0x3abd10: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3abd10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3abd14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3abd14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3abd18: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3ABD18u;
    {
        const bool branch_taken_0x3abd18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3abd18) {
            ctx->pc = 0x3ABD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABD18u;
            // 0x3abd1c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABD30u;
            goto label_3abd30;
        }
    }
    ctx->pc = 0x3ABD20u;
    // 0x3abd20: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3abd20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3abd24: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3abd24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3abd28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3ABD28u;
    {
        const bool branch_taken_0x3abd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABD28u;
            // 0x3abd2c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abd28) {
            ctx->pc = 0x3ABD48u;
            goto label_3abd48;
        }
    }
    ctx->pc = 0x3ABD30u;
label_3abd30:
    // 0x3abd30: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3abd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3abd34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3abd34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3abd38: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3abd38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3abd3c: 0x0  nop
    ctx->pc = 0x3abd3cu;
    // NOP
    // 0x3abd40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3abd40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3abd44: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3abd44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3abd48:
    // 0x3abd48: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x3ABD48u;
    {
        const bool branch_taken_0x3abd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABD48u;
            // 0x3abd4c: 0xa2840012  sb          $a0, 0x12($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 18), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abd48) {
            ctx->pc = 0x3ABEBCu;
            goto label_3abebc;
        }
    }
    ctx->pc = 0x3ABD50u;
label_3abd50:
    // 0x3abd50: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3abd50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3abd54: 0x0  nop
    ctx->pc = 0x3abd54u;
    // NOP
    // 0x3abd58: 0x4603a836  c.le.s      $f21, $f3
    ctx->pc = 0x3abd58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3abd5c: 0x45010057  bc1t        . + 4 + (0x57 << 2)
    ctx->pc = 0x3ABD5Cu;
    {
        const bool branch_taken_0x3abd5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3abd5c) {
            ctx->pc = 0x3ABEBCu;
            goto label_3abebc;
        }
    }
    ctx->pc = 0x3ABD64u;
    // 0x3abd64: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x3abd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abd68: 0x3c03452a  lui         $v1, 0x452A
    ctx->pc = 0x3abd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17706 << 16));
    // 0x3abd6c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x3abd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x3abd70: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3abd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3abd74: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x3abd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3abd78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3abd78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3abd7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3abd7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3abd80: 0x0  nop
    ctx->pc = 0x3abd80u;
    // NOP
    // 0x3abd84: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3abd84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3abd88: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x3abd88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x3abd8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3abd8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3abd90: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3abd90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3abd94: 0x0  nop
    ctx->pc = 0x3abd94u;
    // NOP
    // 0x3abd98: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x3abd98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x3abd9c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ABD9Cu;
    {
        const bool branch_taken_0x3abd9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABD9Cu;
            // 0x3abda0: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abd9c) {
            ctx->pc = 0x3ABDB0u;
            goto label_3abdb0;
        }
    }
    ctx->pc = 0x3ABDA4u;
    // 0x3abda4: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x3abda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x3abda8: 0x24638001  addiu       $v1, $v1, -0x7FFF
    ctx->pc = 0x3abda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934529));
    // 0x3abdac: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3abdacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_3abdb0:
    // 0x3abdb0: 0x92830010  lbu         $v1, 0x10($s4)
    ctx->pc = 0x3abdb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3abdb4: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x3abdb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3abdb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3abdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3abdbc: 0xa2830010  sb          $v1, 0x10($s4)
    ctx->pc = 0x3abdbcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abdc0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3abdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abdc4: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x3abdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x3abdc8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3abdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3abdcc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3abdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x3abdd0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3abdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3abdd4: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x3abdd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x3abdd8: 0xa2830012  sb          $v1, 0x12($s4)
    ctx->pc = 0x3abdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abddc: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x3abddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abde0: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x3abde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3abde4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3abde4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3abde8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3abde8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3abdec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3abdecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3abdf0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3abdf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3abdf4: 0x0  nop
    ctx->pc = 0x3abdf4u;
    // NOP
    // 0x3abdf8: 0xae840014  sw          $a0, 0x14($s4)
    ctx->pc = 0x3abdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 4));
    // 0x3abdfc: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x3abdfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x3abe00: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x3abe00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3abe04: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ABE04u;
    {
        const bool branch_taken_0x3abe04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abe04) {
            ctx->pc = 0x3ABE08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABE04u;
            // 0x3abe08: 0xc6800018  lwc1        $f0, 0x18($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABE14u;
            goto label_3abe14;
        }
    }
    ctx->pc = 0x3ABE0Cu;
    // 0x3abe0c: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x3abe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x3abe10: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x3abe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3abe14:
    // 0x3abe14: 0x46160040  add.s       $f1, $f0, $f22
    ctx->pc = 0x3abe14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x3abe18: 0xe6810018  swc1        $f1, 0x18($s4)
    ctx->pc = 0x3abe18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x3abe1c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x3abe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abe20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3abe20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3abe24: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x3ABE24u;
    {
        const bool branch_taken_0x3abe24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3abe24) {
            ctx->pc = 0x3ABEBCu;
            goto label_3abebc;
        }
    }
    ctx->pc = 0x3ABE2Cu;
    // 0x3abe2c: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x3abe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abe30: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3ABE30u;
    {
        const bool branch_taken_0x3abe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABE30u;
            // 0x3abe34: 0xe6800018  swc1        $f0, 0x18($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe30) {
            ctx->pc = 0x3ABEBCu;
            goto label_3abebc;
        }
    }
    ctx->pc = 0x3ABE38u;
label_3abe38:
    // 0x3abe38: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x3abe38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3abe3c: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
    ctx->pc = 0x3ABE3Cu;
    {
        const bool branch_taken_0x3abe3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3abe3c) {
            ctx->pc = 0x3ABE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABE3Cu;
            // 0x3abe40: 0xa2800010  sb          $zero, 0x10($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABEB4u;
            goto label_3abeb4;
        }
    }
    ctx->pc = 0x3ABE44u;
    // 0x3abe44: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3abe44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3abe48: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3abe48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x3abe4c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3abe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3abe50: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x3abe50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x3abe54: 0xa2830012  sb          $v1, 0x12($s4)
    ctx->pc = 0x3abe54u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abe58: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x3abe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abe5c: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x3abe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3abe60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3abe60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3abe64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3abe64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3abe68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3abe68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3abe6c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3abe6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3abe70: 0x0  nop
    ctx->pc = 0x3abe70u;
    // NOP
    // 0x3abe74: 0xae840014  sw          $a0, 0x14($s4)
    ctx->pc = 0x3abe74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 4));
    // 0x3abe78: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x3abe78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x3abe7c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x3abe7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3abe80: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ABE80u;
    {
        const bool branch_taken_0x3abe80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abe80) {
            ctx->pc = 0x3ABE84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABE80u;
            // 0x3abe84: 0xc6800018  lwc1        $f0, 0x18($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABE90u;
            goto label_3abe90;
        }
    }
    ctx->pc = 0x3ABE88u;
    // 0x3abe88: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x3abe88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x3abe8c: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x3abe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3abe90:
    // 0x3abe90: 0x46160040  add.s       $f1, $f0, $f22
    ctx->pc = 0x3abe90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x3abe94: 0xe6810018  swc1        $f1, 0x18($s4)
    ctx->pc = 0x3abe94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x3abe98: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x3abe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abe9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3abe9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3abea0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3ABEA0u;
    {
        const bool branch_taken_0x3abea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3abea0) {
            ctx->pc = 0x3ABEB0u;
            goto label_3abeb0;
        }
    }
    ctx->pc = 0x3ABEA8u;
    // 0x3abea8: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x3abea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abeac: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x3abeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_3abeb0:
    // 0x3abeb0: 0xa2800010  sb          $zero, 0x10($s4)
    ctx->pc = 0x3abeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 0));
label_3abeb4:
    // 0x3abeb4: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3abeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3abeb8: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x3abeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
label_3abebc:
    // 0x3abebc: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x3abebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_3abec0:
    // 0x3abec0: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x3ABEC0u;
    {
        const bool branch_taken_0x3abec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abec0) {
            ctx->pc = 0x3ABEC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABEC0u;
            // 0x3abec4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABF20u;
            goto label_3abf20;
        }
    }
    ctx->pc = 0x3ABEC8u;
    // 0x3abec8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3abec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3abecc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3abeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3abed0: 0xc6810030  lwc1        $f1, 0x30($s4)
    ctx->pc = 0x3abed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3abed4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3abed4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3abed8: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3abed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3abedc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3abedcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3abee0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3abee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3abee4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3ABEE4u;
    {
        const bool branch_taken_0x3abee4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ABEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABEE4u;
            // 0x3abee8: 0xe6810030  swc1        $f1, 0x30($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abee4) {
            ctx->pc = 0x3ABF00u;
            goto label_3abf00;
        }
    }
    ctx->pc = 0x3ABEECu;
    // 0x3abeec: 0x3c0341b0  lui         $v1, 0x41B0
    ctx->pc = 0x3abeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16816 << 16));
    // 0x3abef0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3abef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3abef4: 0x0  nop
    ctx->pc = 0x3abef4u;
    // NOP
    // 0x3abef8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3abef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3abefc: 0xe6800034  swc1        $f0, 0x34($s4)
    ctx->pc = 0x3abefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
label_3abf00:
    // 0x3abf00: 0xc6810034  lwc1        $f1, 0x34($s4)
    ctx->pc = 0x3abf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3abf04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3abf04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3abf08: 0x0  nop
    ctx->pc = 0x3abf08u;
    // NOP
    // 0x3abf0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3abf0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3abf10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3ABF10u;
    {
        const bool branch_taken_0x3abf10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3abf10) {
            ctx->pc = 0x3ABF1Cu;
            goto label_3abf1c;
        }
    }
    ctx->pc = 0x3ABF18u;
    // 0x3abf18: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x3abf18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_3abf1c:
    // 0x3abf1c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3abf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3abf20:
    // 0x3abf20: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3abf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3abf24: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3abf24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3abf28: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3abf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3abf2c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3abf2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3abf30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3abf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3abf34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3abf34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3abf38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3abf38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3abf3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3abf3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3abf40: 0x3e00008  jr          $ra
    ctx->pc = 0x3ABF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABF40u;
            // 0x3abf44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ABF48u;
    // 0x3abf48: 0x0  nop
    ctx->pc = 0x3abf48u;
    // NOP
    // 0x3abf4c: 0x0  nop
    ctx->pc = 0x3abf4cu;
    // NOP
}
