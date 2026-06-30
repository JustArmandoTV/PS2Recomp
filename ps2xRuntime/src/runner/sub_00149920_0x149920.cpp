#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149920
// Address: 0x149920 - 0x149d50
void sub_00149920_0x149920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149920_0x149920");
#endif

    switch (ctx->pc) {
        case 0x1499b8u: goto label_1499b8;
        case 0x149a10u: goto label_149a10;
        case 0x149a64u: goto label_149a64;
        case 0x149ac0u: goto label_149ac0;
        case 0x149b1cu: goto label_149b1c;
        case 0x149b8cu: goto label_149b8c;
        default: break;
    }

    ctx->pc = 0x149920u;

    // 0x149920: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x149920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x149924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149928: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x149928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14992c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14992cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x149930: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x149930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x149934: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x149934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x149938: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x149938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14993c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x149940: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x149940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x149944: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x149944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x149948: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14994c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x14994cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x149950: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x149950u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x149954: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x149954u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x149958: 0x8f848160  lw          $a0, -0x7EA0($gp)
    ctx->pc = 0x149958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
    // 0x14995c: 0x1083009c  beq         $a0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x14995Cu;
    {
        const bool branch_taken_0x14995c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14995c) {
            ctx->pc = 0x149BD0u;
            goto label_149bd0;
        }
    }
    ctx->pc = 0x149964u;
    // 0x149964: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x149964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x149968: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14996c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14996cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x149970: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x149970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x149974: 0xc4625520  lwc1        $f2, 0x5520($v1)
    ctx->pc = 0x149974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149978: 0xc4415534  lwc1        $f1, 0x5534($v0)
    ctx->pc = 0x149978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14997c: 0x46021d43  div.s       $f21, $f3, $f2
    ctx->pc = 0x14997cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[21] = ctx->f[3] / ctx->f[2];
    // 0x149980: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149984: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x149984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x149988: 0x46011d03  div.s       $f20, $f3, $f1
    ctx->pc = 0x149988u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[20] = ctx->f[3] / ctx->f[1];
    // 0x14998c: 0xc460558c  lwc1        $f0, 0x558C($v1)
    ctx->pc = 0x14998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149990: 0xc44155e4  lwc1        $f1, 0x55E4($v0)
    ctx->pc = 0x149990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149994: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x149994u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x149998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x149998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14999c: 0x0  nop
    ctx->pc = 0x14999cu;
    // NOP
    // 0x1499a0: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x1499a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1499a4: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x1499a4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[2];
    // 0x1499a8: 0x0  nop
    ctx->pc = 0x1499a8u;
    // NOP
    // 0x1499ac: 0x4600a582  mul.s       $f22, $f20, $f0
    ctx->pc = 0x1499acu;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1499b0: 0xc04c710  jal         func_131C40
    ctx->pc = 0x1499B0u;
    SET_GPR_U32(ctx, 31, 0x1499B8u);
    ctx->pc = 0x1499B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1499B0u;
            // 0x1499b4: 0x4616b31c  madd.s      $f12, $f22, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499B8u; }
        if (ctx->pc != 0x1499B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1499B8u; }
        if (ctx->pc != 0x1499B8u) { return; }
    }
    ctx->pc = 0x1499B8u;
label_1499b8:
    // 0x1499b8: 0x0  nop
    ctx->pc = 0x1499b8u;
    // NOP
    // 0x1499bc: 0x0  nop
    ctx->pc = 0x1499bcu;
    // NOP
    // 0x1499c0: 0x4600b043  div.s       $f1, $f22, $f0
    ctx->pc = 0x1499c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[1] = ctx->f[22] / ctx->f[0];
    // 0x1499c4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1499c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1499c8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1499c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1499cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1499ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1499d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1499d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1499d4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1499d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1499d8: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x1499d8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1499dc: 0x0  nop
    ctx->pc = 0x1499dcu;
    // NOP
    // 0x1499e0: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1499e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x1499e4: 0xe4814ed4  swc1        $f1, 0x4ED4($a0)
    ctx->pc = 0x1499e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20180), bits); }
    // 0x1499e8: 0xc46255e0  lwc1        $f2, 0x55E0($v1)
    ctx->pc = 0x1499e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1499ec: 0xc441558c  lwc1        $f1, 0x558C($v0)
    ctx->pc = 0x1499ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1499f0: 0xe4a04ed0  swc1        $f0, 0x4ED0($a1)
    ctx->pc = 0x1499f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20176), bits); }
    // 0x1499f4: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x1499f4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[1];
    // 0x1499f8: 0x4600a582  mul.s       $f22, $f20, $f0
    ctx->pc = 0x1499f8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1499fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1499fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149a00: 0x0  nop
    ctx->pc = 0x149a00u;
    // NOP
    // 0x149a04: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x149a04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x149a08: 0xc04c710  jal         func_131C40
    ctx->pc = 0x149A08u;
    SET_GPR_U32(ctx, 31, 0x149A10u);
    ctx->pc = 0x149A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149A08u;
            // 0x149a0c: 0x4616b31c  madd.s      $f12, $f22, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A10u; }
        if (ctx->pc != 0x149A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A10u; }
        if (ctx->pc != 0x149A10u) { return; }
    }
    ctx->pc = 0x149A10u;
label_149a10:
    // 0x149a10: 0x0  nop
    ctx->pc = 0x149a10u;
    // NOP
    // 0x149a14: 0x0  nop
    ctx->pc = 0x149a14u;
    // NOP
    // 0x149a18: 0x4600b043  div.s       $f1, $f22, $f0
    ctx->pc = 0x149a18u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[1] = ctx->f[22] / ctx->f[0];
    // 0x149a1c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x149a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x149a20: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x149a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x149a24: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149a28: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x149a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x149a2c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x149a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x149a30: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x149a30u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x149a34: 0xe4814edc  swc1        $f1, 0x4EDC($a0)
    ctx->pc = 0x149a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20188), bits); }
    // 0x149a38: 0x460020c3  div.s       $f3, $f4, $f0
    ctx->pc = 0x149a38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[0];
    // 0x149a3c: 0xc46255d8  lwc1        $f2, 0x55D8($v1)
    ctx->pc = 0x149a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149a40: 0xc4415588  lwc1        $f1, 0x5588($v0)
    ctx->pc = 0x149a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149a44: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x149a44u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[1];
    // 0x149a48: 0x4600ad82  mul.s       $f22, $f21, $f0
    ctx->pc = 0x149a48u;
    ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x149a4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x149a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149a50: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x149a50u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x149a54: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x149a54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x149a58: 0xe4a14ed8  swc1        $f1, 0x4ED8($a1)
    ctx->pc = 0x149a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20184), bits); }
    // 0x149a5c: 0xc04c710  jal         func_131C40
    ctx->pc = 0x149A5Cu;
    SET_GPR_U32(ctx, 31, 0x149A64u);
    ctx->pc = 0x149A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149A5Cu;
            // 0x149a60: 0x4616b31c  madd.s      $f12, $f22, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A64u; }
        if (ctx->pc != 0x149A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149A64u; }
        if (ctx->pc != 0x149A64u) { return; }
    }
    ctx->pc = 0x149A64u;
label_149a64:
    // 0x149a64: 0x0  nop
    ctx->pc = 0x149a64u;
    // NOP
    // 0x149a68: 0x0  nop
    ctx->pc = 0x149a68u;
    // NOP
    // 0x149a6c: 0x4600b043  div.s       $f1, $f22, $f0
    ctx->pc = 0x149a6cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[1] = ctx->f[22] / ctx->f[0];
    // 0x149a70: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x149a70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x149a74: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x149a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x149a78: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149a7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x149a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x149a80: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x149a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x149a84: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x149a84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x149a88: 0x0  nop
    ctx->pc = 0x149a88u;
    // NOP
    // 0x149a8c: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x149a8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x149a90: 0xe4814ee4  swc1        $f1, 0x4EE4($a0)
    ctx->pc = 0x149a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20196), bits); }
    // 0x149a94: 0xc4625588  lwc1        $f2, 0x5588($v1)
    ctx->pc = 0x149a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149a98: 0xe4a04ee0  swc1        $f0, 0x4EE0($a1)
    ctx->pc = 0x149a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20192), bits); }
    // 0x149a9c: 0xc44155dc  lwc1        $f1, 0x55DC($v0)
    ctx->pc = 0x149a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149aa0: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x149aa0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x149aa4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x149aa4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x149aa8: 0x4600ad82  mul.s       $f22, $f21, $f0
    ctx->pc = 0x149aa8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x149aac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x149aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149ab0: 0x0  nop
    ctx->pc = 0x149ab0u;
    // NOP
    // 0x149ab4: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x149ab4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x149ab8: 0xc04c710  jal         func_131C40
    ctx->pc = 0x149AB8u;
    SET_GPR_U32(ctx, 31, 0x149AC0u);
    ctx->pc = 0x149ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149AB8u;
            // 0x149abc: 0x4616b31c  madd.s      $f12, $f22, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AC0u; }
        if (ctx->pc != 0x149AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AC0u; }
        if (ctx->pc != 0x149AC0u) { return; }
    }
    ctx->pc = 0x149AC0u;
label_149ac0:
    // 0x149ac0: 0x0  nop
    ctx->pc = 0x149ac0u;
    // NOP
    // 0x149ac4: 0x0  nop
    ctx->pc = 0x149ac4u;
    // NOP
    // 0x149ac8: 0x4600b043  div.s       $f1, $f22, $f0
    ctx->pc = 0x149ac8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[1] = ctx->f[22] / ctx->f[0];
    // 0x149acc: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x149accu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x149ad0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149ad4: 0x3c0544ff  lui         $a1, 0x44FF
    ctx->pc = 0x149ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17663 << 16));
    // 0x149ad8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x149ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x149adc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x149adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x149ae0: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x149ae0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x149ae4: 0xe4614eec  swc1        $f1, 0x4EEC($v1)
    ctx->pc = 0x149ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20204), bits); }
    // 0x149ae8: 0x460020c3  div.s       $f3, $f4, $f0
    ctx->pc = 0x149ae8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[0];
    // 0x149aec: 0xc441558c  lwc1        $f1, 0x558C($v0)
    ctx->pc = 0x149aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149af0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x149af0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149af4: 0x0  nop
    ctx->pc = 0x149af4u;
    // NOP
    // 0x149af8: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x149af8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[1];
    // 0x149afc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x149afcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x149b00: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x149b00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x149b04: 0xe4804ee8  swc1        $f0, 0x4EE8($a0)
    ctx->pc = 0x149b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20200), bits); }
    // 0x149b08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x149b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149b0c: 0x0  nop
    ctx->pc = 0x149b0cu;
    // NOP
    // 0x149b10: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x149b10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x149b14: 0xc04c710  jal         func_131C40
    ctx->pc = 0x149B14u;
    SET_GPR_U32(ctx, 31, 0x149B1Cu);
    ctx->pc = 0x149B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149B14u;
            // 0x149b18: 0x4614a31c  madd.s      $f12, $f20, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[20]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B1Cu; }
        if (ctx->pc != 0x149B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B1Cu; }
        if (ctx->pc != 0x149B1Cu) { return; }
    }
    ctx->pc = 0x149B1Cu;
label_149b1c:
    // 0x149b1c: 0x0  nop
    ctx->pc = 0x149b1cu;
    // NOP
    // 0x149b20: 0x0  nop
    ctx->pc = 0x149b20u;
    // NOP
    // 0x149b24: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x149b24u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[0];
    // 0x149b28: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x149b28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x149b2c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x149b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x149b30: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149b34: 0x3c0744ff  lui         $a3, 0x44FF
    ctx->pc = 0x149b34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17663 << 16));
    // 0x149b38: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x149b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x149b3c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x149b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x149b40: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x149b40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x149b44: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x149b44u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x149b48: 0x0  nop
    ctx->pc = 0x149b48u;
    // NOP
    // 0x149b4c: 0x460020c3  div.s       $f3, $f4, $f0
    ctx->pc = 0x149b4cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[0];
    // 0x149b50: 0xe4a14ef4  swc1        $f1, 0x4EF4($a1)
    ctx->pc = 0x149b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20212), bits); }
    // 0x149b54: 0xe4614efc  swc1        $f1, 0x4EFC($v1)
    ctx->pc = 0x149b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20220), bits); }
    // 0x149b58: 0xc4415588  lwc1        $f1, 0x5588($v0)
    ctx->pc = 0x149b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149b5c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x149b5cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149b60: 0x0  nop
    ctx->pc = 0x149b60u;
    // NOP
    // 0x149b64: 0xe4c34ef0  swc1        $f3, 0x4EF0($a2)
    ctx->pc = 0x149b64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20208), bits); }
    // 0x149b68: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x149b68u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[1];
    // 0x149b6c: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x149b6cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x149b70: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x149b70u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x149b74: 0xe4804ef8  swc1        $f0, 0x4EF8($a0)
    ctx->pc = 0x149b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20216), bits); }
    // 0x149b78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x149b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149b7c: 0x0  nop
    ctx->pc = 0x149b7cu;
    // NOP
    // 0x149b80: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x149b80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x149b84: 0xc04c710  jal         func_131C40
    ctx->pc = 0x149B84u;
    SET_GPR_U32(ctx, 31, 0x149B8Cu);
    ctx->pc = 0x149B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149B84u;
            // 0x149b88: 0x4614a31c  madd.s      $f12, $f20, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[20]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B8Cu; }
        if (ctx->pc != 0x149B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149B8Cu; }
        if (ctx->pc != 0x149B8Cu) { return; }
    }
    ctx->pc = 0x149B8Cu;
label_149b8c:
    // 0x149b8c: 0x0  nop
    ctx->pc = 0x149b8cu;
    // NOP
    // 0x149b90: 0x0  nop
    ctx->pc = 0x149b90u;
    // NOP
    // 0x149b94: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x149b94u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[0];
    // 0x149b98: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x149b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x149b9c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149ba0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x149ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x149ba4: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x149ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x149ba8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x149ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x149bac: 0xe4a14f04  swc1        $f1, 0x4F04($a1)
    ctx->pc = 0x149bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20228), bits); }
    // 0x149bb0: 0xe4614f0c  swc1        $f1, 0x4F0C($v1)
    ctx->pc = 0x149bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20236), bits); }
    // 0x149bb4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x149bb4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149bb8: 0x0  nop
    ctx->pc = 0x149bb8u;
    // NOP
    // 0x149bbc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x149bbcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x149bc0: 0xe4c04f00  swc1        $f0, 0x4F00($a2)
    ctx->pc = 0x149bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20224), bits); }
    // 0x149bc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x149bc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x149bc8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x149BC8u;
    {
        const bool branch_taken_0x149bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149BC8u;
            // 0x149bcc: 0xe4804f08  swc1        $f0, 0x4F08($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x149bc8) {
            ctx->pc = 0x149D18u;
            goto label_149d18;
        }
    }
    ctx->pc = 0x149BD0u;
label_149bd0:
    // 0x149bd0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149bd4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x149bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x149bd8: 0xc4615534  lwc1        $f1, 0x5534($v1)
    ctx->pc = 0x149bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149bdc: 0x3c1744ff  lui         $s7, 0x44FF
    ctx->pc = 0x149bdcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)17663 << 16));
    // 0x149be0: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x149be0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x149be4: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x149be4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x149be8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x149be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x149bec: 0x3c0c006c  lui         $t4, 0x6C
    ctx->pc = 0x149becu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)108 << 16));
    // 0x149bf0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149bf4: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x149bf4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x149bf8: 0xc4605554  lwc1        $f0, 0x5554($v1)
    ctx->pc = 0x149bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149bfc: 0x3c12006c  lui         $s2, 0x6C
    ctx->pc = 0x149bfcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
    // 0x149c00: 0xc488558c  lwc1        $f8, 0x558C($a0)
    ctx->pc = 0x149c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 21900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x149c04: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x149c04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x149c08: 0x3c18006c  lui         $t8, 0x6C
    ctx->pc = 0x149c08u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)108 << 16));
    // 0x149c0c: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x149c0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x149c10: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x149c10u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x149c14: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149c18: 0x3c0f006c  lui         $t7, 0x6C
    ctx->pc = 0x149c18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)108 << 16));
    // 0x149c1c: 0x3c0e006c  lui         $t6, 0x6C
    ctx->pc = 0x149c1cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)108 << 16));
    // 0x149c20: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x149c20u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x149c24: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x149c24u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x149c28: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x149c28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x149c2c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x149c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x149c30: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x149c30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x149c34: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x149c34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x149c38: 0x3c19006c  lui         $t9, 0x6C
    ctx->pc = 0x149c38u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)108 << 16));
    // 0x149c3c: 0x3c0b006c  lui         $t3, 0x6C
    ctx->pc = 0x149c3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)108 << 16));
    // 0x149c40: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x149c40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x149c44: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x149c44u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x149c48: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x149c48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x149c4c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x149c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x149c50: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x149c50u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[1];
    // 0x149c54: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x149c54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x149c58: 0x46040a43  div.s       $f9, $f1, $f4
    ctx->pc = 0x149c58u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[9] = ctx->f[1] / ctx->f[4];
    // 0x149c5c: 0xe6a04ed4  swc1        $f0, 0x4ED4($s5)
    ctx->pc = 0x149c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20180), bits); }
    // 0x149c60: 0xe6404edc  swc1        $f0, 0x4EDC($s2)
    ctx->pc = 0x149c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20188), bits); }
    // 0x149c64: 0xe6004ef4  swc1        $f0, 0x4EF4($s0)
    ctx->pc = 0x149c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20212), bits); }
    // 0x149c68: 0xe7004efc  swc1        $f0, 0x4EFC($t8)
    ctx->pc = 0x149c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 20220), bits); }
    // 0x149c6c: 0xc68055e0  lwc1        $f0, 0x55E0($s4)
    ctx->pc = 0x149c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 21984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149c70: 0xc5e15520  lwc1        $f1, 0x5520($t7)
    ctx->pc = 0x149c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 21792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149c74: 0xc46755e4  lwc1        $f7, 0x55E4($v1)
    ctx->pc = 0x149c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x149c78: 0x46080183  div.s       $f6, $f0, $f8
    ctx->pc = 0x149c78u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[6] = ctx->f[0] / ctx->f[8];
    // 0x149c7c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149c80: 0xc5c05550  lwc1        $f0, 0x5550($t6)
    ctx->pc = 0x149c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 21840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149c84: 0x44972800  mtc1        $s7, $f5
    ctx->pc = 0x149c84u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x149c88: 0xc5a35588  lwc1        $f3, 0x5588($t5)
    ctx->pc = 0x149c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 21896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149c8c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x149c8cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x149c90: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x149c90u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[1];
    // 0x149c94: 0x46040903  div.s       $f4, $f1, $f4
    ctx->pc = 0x149c94u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[4];
    // 0x149c98: 0x46004047  neg.s       $f1, $f8
    ctx->pc = 0x149c98u;
    ctx->f[1] = FPU_NEG_S(ctx->f[8]);
    // 0x149c9c: 0x46013843  div.s       $f1, $f7, $f1
    ctx->pc = 0x149c9cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[1] = ctx->f[7] / ctx->f[1];
    // 0x149ca0: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x149ca0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x149ca4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x149ca4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x149ca8: 0xe6c14ed0  swc1        $f1, 0x4ED0($s6)
    ctx->pc = 0x149ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 20176), bits); }
    // 0x149cac: 0x46082843  div.s       $f1, $f5, $f8
    ctx->pc = 0x149cacu;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[1] = ctx->f[5] / ctx->f[8];
    // 0x149cb0: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x149cb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x149cb4: 0xe6214ef0  swc1        $f1, 0x4EF0($s1)
    ctx->pc = 0x149cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20208), bits); }
    // 0x149cb8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x149cb8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x149cbc: 0xe5404ee4  swc1        $f0, 0x4EE4($t2)
    ctx->pc = 0x149cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20196), bits); }
    // 0x149cc0: 0xe4e04eec  swc1        $f0, 0x4EEC($a3)
    ctx->pc = 0x149cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20204), bits); }
    // 0x149cc4: 0xe4a04f04  swc1        $f0, 0x4F04($a1)
    ctx->pc = 0x149cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20228), bits); }
    // 0x149cc8: 0xe4604f0c  swc1        $f0, 0x4F0C($v1)
    ctx->pc = 0x149cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20236), bits); }
    // 0x149ccc: 0xc52055d8  lwc1        $f0, 0x55D8($t1)
    ctx->pc = 0x149cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 21976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149cd0: 0xe7214ef8  swc1        $f1, 0x4EF8($t9)
    ctx->pc = 0x149cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 20216), bits); }
    // 0x149cd4: 0x460049c7  neg.s       $f7, $f9
    ctx->pc = 0x149cd4u;
    ctx->f[7] = FPU_NEG_S(ctx->f[9]);
    // 0x149cd8: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x149cd8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[3];
    // 0x149cdc: 0x46032803  div.s       $f0, $f5, $f3
    ctx->pc = 0x149cdcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[0] = ctx->f[5] / ctx->f[3];
    // 0x149ce0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x149ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x149ce4: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x149ce4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x149ce8: 0xe4c04f00  swc1        $f0, 0x4F00($a2)
    ctx->pc = 0x149ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20224), bits); }
    // 0x149cec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x149cecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x149cf0: 0xc58255dc  lwc1        $f2, 0x55DC($t4)
    ctx->pc = 0x149cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 21980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149cf4: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x149cf4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x149cf8: 0xe6664ed8  swc1        $f6, 0x4ED8($s3)
    ctx->pc = 0x149cf8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20184), bits); }
    // 0x149cfc: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x149cfcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x149d00: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x149d00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x149d04: 0xe5624ee0  swc1        $f2, 0x4EE0($t3)
    ctx->pc = 0x149d04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 20192), bits); }
    // 0x149d08: 0x46002087  neg.s       $f2, $f4
    ctx->pc = 0x149d08u;
    ctx->f[2] = FPU_NEG_S(ctx->f[4]);
    // 0x149d0c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x149d0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x149d10: 0xe5014ee8  swc1        $f1, 0x4EE8($t0)
    ctx->pc = 0x149d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20200), bits); }
    // 0x149d14: 0xe4804f08  swc1        $f0, 0x4F08($a0)
    ctx->pc = 0x149d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20232), bits); }
label_149d18:
    // 0x149d18: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x149d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x149d1c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x149d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x149d20: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x149d20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x149d24: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x149d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x149d28: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x149d28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x149d2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x149d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x149d30: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x149d30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149d34: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x149d34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x149d38: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x149d38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149d3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x149d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149d40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x149d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149d44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149d48: 0x3e00008  jr          $ra
    ctx->pc = 0x149D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149D48u;
            // 0x149d4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149D50u;
}
