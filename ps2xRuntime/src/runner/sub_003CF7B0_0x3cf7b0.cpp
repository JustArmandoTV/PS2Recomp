#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CF7B0
// Address: 0x3cf7b0 - 0x3cf970
void sub_003CF7B0_0x3cf7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CF7B0_0x3cf7b0");
#endif

    switch (ctx->pc) {
        case 0x3cf89cu: goto label_3cf89c;
        case 0x3cf924u: goto label_3cf924;
        case 0x3cf930u: goto label_3cf930;
        case 0x3cf93cu: goto label_3cf93c;
        case 0x3cf954u: goto label_3cf954;
        default: break;
    }

    ctx->pc = 0x3cf7b0u;

    // 0x3cf7b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3cf7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3cf7b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cf7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3cf7b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cf7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3cf7bc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cf7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3cf7c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cf7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3cf7c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3cf7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3cf7c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3cf7c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf7cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3cf7ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3cf7d0: 0xc44367d0  lwc1        $f3, 0x67D0($v0)
    ctx->pc = 0x3cf7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 26576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3cf7d4: 0x8c6366c8  lw          $v1, 0x66C8($v1)
    ctx->pc = 0x3cf7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26312)));
    // 0x3cf7d8: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x3cf7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cf7dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cf7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3cf7e0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3cf7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x3cf7e4: 0xc474002c  lwc1        $f20, 0x2C($v1)
    ctx->pc = 0x3cf7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3cf7e8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3cf7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cf7ec: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x3cf7ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3cf7f0: 0xe4820074  swc1        $f2, 0x74($a0)
    ctx->pc = 0x3cf7f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x3cf7f4: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x3cf7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cf7f8: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x3cf7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cf7fc: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3cf7fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3cf800: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3cf800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3cf804: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3cf804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cf808: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3CF808u;
    {
        const bool branch_taken_0x3cf808 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CF80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF808u;
            // 0x3cf80c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf808) {
            ctx->pc = 0x3CF814u;
            goto label_3cf814;
        }
    }
    ctx->pc = 0x3CF810u;
    // 0x3cf810: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x3cf810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_3cf814:
    // 0x3cf814: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x3cf814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cf818: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x3cf818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cf81c: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x3cf81cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3cf820: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3cf820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cf824: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
    ctx->pc = 0x3CF824u;
    {
        const bool branch_taken_0x3cf824 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cf824) {
            ctx->pc = 0x3CF828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF824u;
            // 0x3cf828: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF894u;
            goto label_3cf894;
        }
    }
    ctx->pc = 0x3CF82Cu;
    // 0x3cf82c: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x3cf82cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3cf830: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3cf830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3cf834: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x3cf834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cf838: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3cf838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cf83c: 0x0  nop
    ctx->pc = 0x3cf83cu;
    // NOP
    // 0x3cf840: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cf840u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3cf844: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x3cf844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cf848: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x3CF848u;
    {
        const bool branch_taken_0x3cf848 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CF84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF848u;
            // 0x3cf84c: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf848) {
            ctx->pc = 0x3CF874u;
            goto label_3cf874;
        }
    }
    ctx->pc = 0x3CF850u;
    // 0x3cf850: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x3cf850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3cf854: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cf854u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3cf858: 0xc463002c  lwc1        $f3, 0x2C($v1)
    ctx->pc = 0x3cf858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3cf85c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cf85cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cf860: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x3cf860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cf864: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x3cf864u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3cf868: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x3cf868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3cf86c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CF86Cu;
    {
        const bool branch_taken_0x3cf86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF86Cu;
            // 0x3cf870: 0x46001d02  mul.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf86c) {
            ctx->pc = 0x3CF890u;
            goto label_3cf890;
        }
    }
    ctx->pc = 0x3CF874u;
label_3cf874:
    // 0x3cf874: 0xc462002c  lwc1        $f2, 0x2C($v1)
    ctx->pc = 0x3cf874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cf878: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x3cf878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cf87c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cf87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cf880: 0x0  nop
    ctx->pc = 0x3cf880u;
    // NOP
    // 0x3cf884: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x3cf884u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3cf888: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x3cf888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x3cf88c: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x3cf88cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cf890:
    // 0x3cf890: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x3cf890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3cf894:
    // 0x3cf894: 0xc11088c  jal         func_442230
    ctx->pc = 0x3CF894u;
    SET_GPR_U32(ctx, 31, 0x3CF89Cu);
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF89Cu; }
        if (ctx->pc != 0x3CF89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF89Cu; }
        if (ctx->pc != 0x3CF89Cu) { return; }
    }
    ctx->pc = 0x3CF89Cu;
label_3cf89c:
    // 0x3cf89c: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CF89Cu;
    {
        const bool branch_taken_0x3cf89c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf89c) {
            ctx->pc = 0x3CF8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF89Cu;
            // 0x3cf8a0: 0x8e050080  lw          $a1, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF8BCu;
            goto label_3cf8bc;
        }
    }
    ctx->pc = 0x3CF8A4u;
    // 0x3cf8a4: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x3cf8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3cf8a8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3cf8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3cf8ac: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3cf8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3cf8b0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3cf8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3cf8b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3CF8B4u;
    {
        const bool branch_taken_0x3cf8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF8B4u;
            // 0x3cf8b8: 0xe4940014  swc1        $f20, 0x14($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf8b4) {
            ctx->pc = 0x3CF8CCu;
            goto label_3cf8cc;
        }
    }
    ctx->pc = 0x3CF8BCu;
label_3cf8bc:
    // 0x3cf8bc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3cf8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3cf8c0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3cf8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3cf8c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3cf8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3cf8c8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3cf8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_3cf8cc:
    // 0x3cf8cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cf8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cf8d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3cf8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3cf8d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3cf8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cf8d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3cf8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cf8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3CF8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF8DCu;
            // 0x3cf8e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CF8E4u;
    // 0x3cf8e4: 0x0  nop
    ctx->pc = 0x3cf8e4u;
    // NOP
    // 0x3cf8e8: 0x0  nop
    ctx->pc = 0x3cf8e8u;
    // NOP
    // 0x3cf8ec: 0x0  nop
    ctx->pc = 0x3cf8ecu;
    // NOP
    // 0x3cf8f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cf8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3cf8f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3cf8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3cf8f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cf8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3cf8fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cf8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cf900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3cf900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf904: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3CF904u;
    {
        const bool branch_taken_0x3cf904 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF904u;
            // 0x3cf908: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf904) {
            ctx->pc = 0x3CF954u;
            goto label_3cf954;
        }
    }
    ctx->pc = 0x3CF90Cu;
    // 0x3cf90c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3cf90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3cf910: 0x24429110  addiu       $v0, $v0, -0x6EF0
    ctx->pc = 0x3cf910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938896));
    // 0x3cf914: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3cf914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3cf918: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3cf918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x3cf91c: 0xc1109cc  jal         func_442730
    ctx->pc = 0x3CF91Cu;
    SET_GPR_U32(ctx, 31, 0x3CF924u);
    ctx->pc = 0x3CF920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF91Cu;
            // 0x3cf920: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF924u; }
        if (ctx->pc != 0x3CF924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF924u; }
        if (ctx->pc != 0x3CF924u) { return; }
    }
    ctx->pc = 0x3CF924u;
label_3cf924:
    // 0x3cf924: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x3cf924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x3cf928: 0xc1109cc  jal         func_442730
    ctx->pc = 0x3CF928u;
    SET_GPR_U32(ctx, 31, 0x3CF930u);
    ctx->pc = 0x3CF92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF928u;
            // 0x3cf92c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF930u; }
        if (ctx->pc != 0x3CF930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF930u; }
        if (ctx->pc != 0x3CF930u) { return; }
    }
    ctx->pc = 0x3CF930u;
label_3cf930:
    // 0x3cf930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cf930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf934: 0xc0ee744  jal         func_3B9D10
    ctx->pc = 0x3CF934u;
    SET_GPR_U32(ctx, 31, 0x3CF93Cu);
    ctx->pc = 0x3CF938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF934u;
            // 0x3cf938: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF93Cu; }
        if (ctx->pc != 0x3CF93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF93Cu; }
        if (ctx->pc != 0x3CF93Cu) { return; }
    }
    ctx->pc = 0x3CF93Cu;
label_3cf93c:
    // 0x3cf93c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3cf93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3cf940: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cf940u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3cf944: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CF944u;
    {
        const bool branch_taken_0x3cf944 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3cf944) {
            ctx->pc = 0x3CF948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF944u;
            // 0x3cf948: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CF958u;
            goto label_3cf958;
        }
    }
    ctx->pc = 0x3CF94Cu;
    // 0x3cf94c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3CF94Cu;
    SET_GPR_U32(ctx, 31, 0x3CF954u);
    ctx->pc = 0x3CF950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF94Cu;
            // 0x3cf950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF954u; }
        if (ctx->pc != 0x3CF954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CF954u; }
        if (ctx->pc != 0x3CF954u) { return; }
    }
    ctx->pc = 0x3CF954u;
label_3cf954:
    // 0x3cf954: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3cf954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cf958:
    // 0x3cf958: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cf958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cf95c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cf95cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cf960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cf960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cf964: 0x3e00008  jr          $ra
    ctx->pc = 0x3CF964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CF964u;
            // 0x3cf968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CF96Cu;
    // 0x3cf96c: 0x0  nop
    ctx->pc = 0x3cf96cu;
    // NOP
}
