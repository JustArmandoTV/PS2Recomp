#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CC850
// Address: 0x3cc850 - 0x3cca10
void sub_003CC850_0x3cc850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC850_0x3cc850");
#endif

    switch (ctx->pc) {
        case 0x3cc93cu: goto label_3cc93c;
        case 0x3cc9c4u: goto label_3cc9c4;
        case 0x3cc9d0u: goto label_3cc9d0;
        case 0x3cc9dcu: goto label_3cc9dc;
        case 0x3cc9f4u: goto label_3cc9f4;
        default: break;
    }

    ctx->pc = 0x3cc850u;

    // 0x3cc850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3cc850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3cc854: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cc854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3cc858: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cc858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3cc85c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cc85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3cc860: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cc860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3cc864: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3cc864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3cc868: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3cc868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc86c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3cc86cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3cc870: 0xc44366c0  lwc1        $f3, 0x66C0($v0)
    ctx->pc = 0x3cc870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 26304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3cc874: 0x8c6365b8  lw          $v1, 0x65B8($v1)
    ctx->pc = 0x3cc874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26040)));
    // 0x3cc878: 0xc48000d8  lwc1        $f0, 0xD8($a0)
    ctx->pc = 0x3cc878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cc87c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cc87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3cc880: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3cc880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x3cc884: 0xc4740034  lwc1        $f20, 0x34($v1)
    ctx->pc = 0x3cc884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3cc888: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3cc888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cc88c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x3cc88cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3cc890: 0xe48200d8  swc1        $f2, 0xD8($a0)
    ctx->pc = 0x3cc890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    // 0x3cc894: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x3cc894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cc898: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x3cc898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cc89c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3cc89cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3cc8a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3cc8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3cc8a4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3cc8a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cc8a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3CC8A8u;
    {
        const bool branch_taken_0x3cc8a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CC8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC8A8u;
            // 0x3cc8ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc8a8) {
            ctx->pc = 0x3CC8B4u;
            goto label_3cc8b4;
        }
    }
    ctx->pc = 0x3CC8B0u;
    // 0x3cc8b0: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x3cc8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_3cc8b4:
    // 0x3cc8b4: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x3cc8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cc8b8: 0xc60000d8  lwc1        $f0, 0xD8($s0)
    ctx->pc = 0x3cc8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cc8bc: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x3cc8bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3cc8c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3cc8c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cc8c4: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
    ctx->pc = 0x3CC8C4u;
    {
        const bool branch_taken_0x3cc8c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cc8c4) {
            ctx->pc = 0x3CC8C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC8C4u;
            // 0x3cc8c8: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC934u;
            goto label_3cc934;
        }
    }
    ctx->pc = 0x3CC8CCu;
    // 0x3cc8cc: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x3cc8ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3cc8d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3cc8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3cc8d4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x3cc8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cc8d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3cc8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cc8dc: 0x0  nop
    ctx->pc = 0x3cc8dcu;
    // NOP
    // 0x3cc8e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cc8e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3cc8e4: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x3cc8e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cc8e8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x3CC8E8u;
    {
        const bool branch_taken_0x3cc8e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CC8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC8E8u;
            // 0x3cc8ec: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc8e8) {
            ctx->pc = 0x3CC914u;
            goto label_3cc914;
        }
    }
    ctx->pc = 0x3CC8F0u;
    // 0x3cc8f0: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x3cc8f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3cc8f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cc8f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3cc8f8: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x3cc8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3cc8fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cc8fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc900: 0xc462003c  lwc1        $f2, 0x3C($v1)
    ctx->pc = 0x3cc900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cc904: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x3cc904u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3cc908: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x3cc908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3cc90c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CC90Cu;
    {
        const bool branch_taken_0x3cc90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC90Cu;
            // 0x3cc910: 0x46001d02  mul.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc90c) {
            ctx->pc = 0x3CC930u;
            goto label_3cc930;
        }
    }
    ctx->pc = 0x3CC914u;
label_3cc914:
    // 0x3cc914: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x3cc914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cc918: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x3cc918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cc91c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cc91cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc920: 0x0  nop
    ctx->pc = 0x3cc920u;
    // NOP
    // 0x3cc924: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x3cc924u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3cc928: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x3cc928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x3cc92c: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x3cc92cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cc930:
    // 0x3cc930: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x3cc930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_3cc934:
    // 0x3cc934: 0xc11088c  jal         func_442230
    ctx->pc = 0x3CC934u;
    SET_GPR_U32(ctx, 31, 0x3CC93Cu);
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC93Cu; }
        if (ctx->pc != 0x3CC93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC93Cu; }
        if (ctx->pc != 0x3CC93Cu) { return; }
    }
    ctx->pc = 0x3CC93Cu;
label_3cc93c:
    // 0x3cc93c: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CC93Cu;
    {
        const bool branch_taken_0x3cc93c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc93c) {
            ctx->pc = 0x3CC940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC93Cu;
            // 0x3cc940: 0x8e0500e0  lw          $a1, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC95Cu;
            goto label_3cc95c;
        }
    }
    ctx->pc = 0x3CC944u;
    // 0x3cc944: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x3cc944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x3cc948: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3cc948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3cc94c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3cc94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3cc950: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3cc950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3cc954: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3CC954u;
    {
        const bool branch_taken_0x3cc954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC954u;
            // 0x3cc958: 0xe4940014  swc1        $f20, 0x14($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc954) {
            ctx->pc = 0x3CC96Cu;
            goto label_3cc96c;
        }
    }
    ctx->pc = 0x3CC95Cu;
label_3cc95c:
    // 0x3cc95c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3cc95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3cc960: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3cc960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3cc964: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3cc964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3cc968: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3cc968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_3cc96c:
    // 0x3cc96c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cc96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cc970: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3cc970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3cc974: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3cc974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cc978: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3cc978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cc97c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CC97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC97Cu;
            // 0x3cc980: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CC984u;
    // 0x3cc984: 0x0  nop
    ctx->pc = 0x3cc984u;
    // NOP
    // 0x3cc988: 0x0  nop
    ctx->pc = 0x3cc988u;
    // NOP
    // 0x3cc98c: 0x0  nop
    ctx->pc = 0x3cc98cu;
    // NOP
    // 0x3cc990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cc990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3cc994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3cc994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3cc998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cc998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3cc99c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cc99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cc9a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3cc9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc9a4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3CC9A4u;
    {
        const bool branch_taken_0x3cc9a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC9A4u;
            // 0x3cc9a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc9a4) {
            ctx->pc = 0x3CC9F4u;
            goto label_3cc9f4;
        }
    }
    ctx->pc = 0x3CC9ACu;
    // 0x3cc9ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3cc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3cc9b0: 0x24429080  addiu       $v0, $v0, -0x6F80
    ctx->pc = 0x3cc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938752));
    // 0x3cc9b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3cc9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3cc9b8: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x3cc9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x3cc9bc: 0xc1109cc  jal         func_442730
    ctx->pc = 0x3CC9BCu;
    SET_GPR_U32(ctx, 31, 0x3CC9C4u);
    ctx->pc = 0x3CC9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC9BCu;
            // 0x3cc9c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC9C4u; }
        if (ctx->pc != 0x3CC9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC9C4u; }
        if (ctx->pc != 0x3CC9C4u) { return; }
    }
    ctx->pc = 0x3CC9C4u;
label_3cc9c4:
    // 0x3cc9c4: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x3cc9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x3cc9c8: 0xc1109cc  jal         func_442730
    ctx->pc = 0x3CC9C8u;
    SET_GPR_U32(ctx, 31, 0x3CC9D0u);
    ctx->pc = 0x3CC9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC9C8u;
            // 0x3cc9cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC9D0u; }
        if (ctx->pc != 0x3CC9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC9D0u; }
        if (ctx->pc != 0x3CC9D0u) { return; }
    }
    ctx->pc = 0x3CC9D0u;
label_3cc9d0:
    // 0x3cc9d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cc9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc9d4: 0xc0ee744  jal         func_3B9D10
    ctx->pc = 0x3CC9D4u;
    SET_GPR_U32(ctx, 31, 0x3CC9DCu);
    ctx->pc = 0x3CC9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC9D4u;
            // 0x3cc9d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC9DCu; }
        if (ctx->pc != 0x3CC9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC9DCu; }
        if (ctx->pc != 0x3CC9DCu) { return; }
    }
    ctx->pc = 0x3CC9DCu;
label_3cc9dc:
    // 0x3cc9dc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3cc9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3cc9e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cc9e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3cc9e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CC9E4u;
    {
        const bool branch_taken_0x3cc9e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3cc9e4) {
            ctx->pc = 0x3CC9E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC9E4u;
            // 0x3cc9e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CC9F8u;
            goto label_3cc9f8;
        }
    }
    ctx->pc = 0x3CC9ECu;
    // 0x3cc9ec: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3CC9ECu;
    SET_GPR_U32(ctx, 31, 0x3CC9F4u);
    ctx->pc = 0x3CC9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CC9ECu;
            // 0x3cc9f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC9F4u; }
        if (ctx->pc != 0x3CC9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CC9F4u; }
        if (ctx->pc != 0x3CC9F4u) { return; }
    }
    ctx->pc = 0x3CC9F4u;
label_3cc9f4:
    // 0x3cc9f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3cc9f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cc9f8:
    // 0x3cc9f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cc9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cc9fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cc9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cca00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cca00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cca04: 0x3e00008  jr          $ra
    ctx->pc = 0x3CCA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCA04u;
            // 0x3cca08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CCA0Cu;
    // 0x3cca0c: 0x0  nop
    ctx->pc = 0x3cca0cu;
    // NOP
}
