#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027E860
// Address: 0x27e860 - 0x27eaf0
void sub_0027E860_0x27e860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E860_0x27e860");
#endif

    switch (ctx->pc) {
        case 0x27e860u: goto label_27e860;
        case 0x27e864u: goto label_27e864;
        case 0x27e868u: goto label_27e868;
        case 0x27e86cu: goto label_27e86c;
        case 0x27e870u: goto label_27e870;
        case 0x27e874u: goto label_27e874;
        case 0x27e878u: goto label_27e878;
        case 0x27e87cu: goto label_27e87c;
        case 0x27e880u: goto label_27e880;
        case 0x27e884u: goto label_27e884;
        case 0x27e888u: goto label_27e888;
        case 0x27e88cu: goto label_27e88c;
        case 0x27e890u: goto label_27e890;
        case 0x27e894u: goto label_27e894;
        case 0x27e898u: goto label_27e898;
        case 0x27e89cu: goto label_27e89c;
        case 0x27e8a0u: goto label_27e8a0;
        case 0x27e8a4u: goto label_27e8a4;
        case 0x27e8a8u: goto label_27e8a8;
        case 0x27e8acu: goto label_27e8ac;
        case 0x27e8b0u: goto label_27e8b0;
        case 0x27e8b4u: goto label_27e8b4;
        case 0x27e8b8u: goto label_27e8b8;
        case 0x27e8bcu: goto label_27e8bc;
        case 0x27e8c0u: goto label_27e8c0;
        case 0x27e8c4u: goto label_27e8c4;
        case 0x27e8c8u: goto label_27e8c8;
        case 0x27e8ccu: goto label_27e8cc;
        case 0x27e8d0u: goto label_27e8d0;
        case 0x27e8d4u: goto label_27e8d4;
        case 0x27e8d8u: goto label_27e8d8;
        case 0x27e8dcu: goto label_27e8dc;
        case 0x27e8e0u: goto label_27e8e0;
        case 0x27e8e4u: goto label_27e8e4;
        case 0x27e8e8u: goto label_27e8e8;
        case 0x27e8ecu: goto label_27e8ec;
        case 0x27e8f0u: goto label_27e8f0;
        case 0x27e8f4u: goto label_27e8f4;
        case 0x27e8f8u: goto label_27e8f8;
        case 0x27e8fcu: goto label_27e8fc;
        case 0x27e900u: goto label_27e900;
        case 0x27e904u: goto label_27e904;
        case 0x27e908u: goto label_27e908;
        case 0x27e90cu: goto label_27e90c;
        case 0x27e910u: goto label_27e910;
        case 0x27e914u: goto label_27e914;
        case 0x27e918u: goto label_27e918;
        case 0x27e91cu: goto label_27e91c;
        case 0x27e920u: goto label_27e920;
        case 0x27e924u: goto label_27e924;
        case 0x27e928u: goto label_27e928;
        case 0x27e92cu: goto label_27e92c;
        case 0x27e930u: goto label_27e930;
        case 0x27e934u: goto label_27e934;
        case 0x27e938u: goto label_27e938;
        case 0x27e93cu: goto label_27e93c;
        case 0x27e940u: goto label_27e940;
        case 0x27e944u: goto label_27e944;
        case 0x27e948u: goto label_27e948;
        case 0x27e94cu: goto label_27e94c;
        case 0x27e950u: goto label_27e950;
        case 0x27e954u: goto label_27e954;
        case 0x27e958u: goto label_27e958;
        case 0x27e95cu: goto label_27e95c;
        case 0x27e960u: goto label_27e960;
        case 0x27e964u: goto label_27e964;
        case 0x27e968u: goto label_27e968;
        case 0x27e96cu: goto label_27e96c;
        case 0x27e970u: goto label_27e970;
        case 0x27e974u: goto label_27e974;
        case 0x27e978u: goto label_27e978;
        case 0x27e97cu: goto label_27e97c;
        case 0x27e980u: goto label_27e980;
        case 0x27e984u: goto label_27e984;
        case 0x27e988u: goto label_27e988;
        case 0x27e98cu: goto label_27e98c;
        case 0x27e990u: goto label_27e990;
        case 0x27e994u: goto label_27e994;
        case 0x27e998u: goto label_27e998;
        case 0x27e99cu: goto label_27e99c;
        case 0x27e9a0u: goto label_27e9a0;
        case 0x27e9a4u: goto label_27e9a4;
        case 0x27e9a8u: goto label_27e9a8;
        case 0x27e9acu: goto label_27e9ac;
        case 0x27e9b0u: goto label_27e9b0;
        case 0x27e9b4u: goto label_27e9b4;
        case 0x27e9b8u: goto label_27e9b8;
        case 0x27e9bcu: goto label_27e9bc;
        case 0x27e9c0u: goto label_27e9c0;
        case 0x27e9c4u: goto label_27e9c4;
        case 0x27e9c8u: goto label_27e9c8;
        case 0x27e9ccu: goto label_27e9cc;
        case 0x27e9d0u: goto label_27e9d0;
        case 0x27e9d4u: goto label_27e9d4;
        case 0x27e9d8u: goto label_27e9d8;
        case 0x27e9dcu: goto label_27e9dc;
        case 0x27e9e0u: goto label_27e9e0;
        case 0x27e9e4u: goto label_27e9e4;
        case 0x27e9e8u: goto label_27e9e8;
        case 0x27e9ecu: goto label_27e9ec;
        case 0x27e9f0u: goto label_27e9f0;
        case 0x27e9f4u: goto label_27e9f4;
        case 0x27e9f8u: goto label_27e9f8;
        case 0x27e9fcu: goto label_27e9fc;
        case 0x27ea00u: goto label_27ea00;
        case 0x27ea04u: goto label_27ea04;
        case 0x27ea08u: goto label_27ea08;
        case 0x27ea0cu: goto label_27ea0c;
        case 0x27ea10u: goto label_27ea10;
        case 0x27ea14u: goto label_27ea14;
        case 0x27ea18u: goto label_27ea18;
        case 0x27ea1cu: goto label_27ea1c;
        case 0x27ea20u: goto label_27ea20;
        case 0x27ea24u: goto label_27ea24;
        case 0x27ea28u: goto label_27ea28;
        case 0x27ea2cu: goto label_27ea2c;
        case 0x27ea30u: goto label_27ea30;
        case 0x27ea34u: goto label_27ea34;
        case 0x27ea38u: goto label_27ea38;
        case 0x27ea3cu: goto label_27ea3c;
        case 0x27ea40u: goto label_27ea40;
        case 0x27ea44u: goto label_27ea44;
        case 0x27ea48u: goto label_27ea48;
        case 0x27ea4cu: goto label_27ea4c;
        case 0x27ea50u: goto label_27ea50;
        case 0x27ea54u: goto label_27ea54;
        case 0x27ea58u: goto label_27ea58;
        case 0x27ea5cu: goto label_27ea5c;
        case 0x27ea60u: goto label_27ea60;
        case 0x27ea64u: goto label_27ea64;
        case 0x27ea68u: goto label_27ea68;
        case 0x27ea6cu: goto label_27ea6c;
        case 0x27ea70u: goto label_27ea70;
        case 0x27ea74u: goto label_27ea74;
        case 0x27ea78u: goto label_27ea78;
        case 0x27ea7cu: goto label_27ea7c;
        case 0x27ea80u: goto label_27ea80;
        case 0x27ea84u: goto label_27ea84;
        case 0x27ea88u: goto label_27ea88;
        case 0x27ea8cu: goto label_27ea8c;
        case 0x27ea90u: goto label_27ea90;
        case 0x27ea94u: goto label_27ea94;
        case 0x27ea98u: goto label_27ea98;
        case 0x27ea9cu: goto label_27ea9c;
        case 0x27eaa0u: goto label_27eaa0;
        case 0x27eaa4u: goto label_27eaa4;
        case 0x27eaa8u: goto label_27eaa8;
        case 0x27eaacu: goto label_27eaac;
        case 0x27eab0u: goto label_27eab0;
        case 0x27eab4u: goto label_27eab4;
        case 0x27eab8u: goto label_27eab8;
        case 0x27eabcu: goto label_27eabc;
        case 0x27eac0u: goto label_27eac0;
        case 0x27eac4u: goto label_27eac4;
        case 0x27eac8u: goto label_27eac8;
        case 0x27eaccu: goto label_27eacc;
        case 0x27ead0u: goto label_27ead0;
        case 0x27ead4u: goto label_27ead4;
        case 0x27ead8u: goto label_27ead8;
        case 0x27eadcu: goto label_27eadc;
        case 0x27eae0u: goto label_27eae0;
        case 0x27eae4u: goto label_27eae4;
        case 0x27eae8u: goto label_27eae8;
        case 0x27eaecu: goto label_27eaec;
        default: break;
    }

    ctx->pc = 0x27e860u;

label_27e860:
    // 0x27e860: 0x27bdcec0  addiu       $sp, $sp, -0x3140
    ctx->pc = 0x27e860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294954688));
label_27e864:
    // 0x27e864: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27e864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_27e868:
    // 0x27e868: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27e868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27e86c:
    // 0x27e86c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x27e86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_27e870:
    // 0x27e870: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x27e870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_27e874:
    // 0x27e874: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27e874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_27e878:
    // 0x27e878: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27e878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_27e87c:
    // 0x27e87c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27e87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_27e880:
    // 0x27e880: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27e880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_27e884:
    // 0x27e884: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27e884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_27e888:
    // 0x27e888: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27e888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27e88c:
    // 0x27e88c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27e88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_27e890:
    // 0x27e890: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27e890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27e894:
    // 0x27e894: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27e894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_27e898:
    // 0x27e898: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x27e898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27e89c:
    // 0x27e89c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27e89cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27e8a0:
    // 0x27e8a0: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x27e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
label_27e8a4:
    // 0x27e8a4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x27e8a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_27e8a8:
    // 0x27e8a8: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x27e8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27e8ac:
    // 0x27e8ac: 0xe7a13120  swc1        $f1, 0x3120($sp)
    ctx->pc = 0x27e8acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12576), bits); }
label_27e8b0:
    // 0x27e8b0: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x27e8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27e8b4:
    // 0x27e8b4: 0xe7a13124  swc1        $f1, 0x3124($sp)
    ctx->pc = 0x27e8b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12580), bits); }
label_27e8b8:
    // 0x27e8b8: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x27e8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27e8bc:
    // 0x27e8bc: 0xe7a13128  swc1        $f1, 0x3128($sp)
    ctx->pc = 0x27e8bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12584), bits); }
label_27e8c0:
    // 0x27e8c0: 0xc4c1002c  lwc1        $f1, 0x2C($a2)
    ctx->pc = 0x27e8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27e8c4:
    // 0x27e8c4: 0xe7a1312c  swc1        $f1, 0x312C($sp)
    ctx->pc = 0x27e8c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12588), bits); }
label_27e8c8:
    // 0x27e8c8: 0xe4cc0024  swc1        $f12, 0x24($a2)
    ctx->pc = 0x27e8c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_27e8cc:
    // 0x27e8cc: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x27e8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27e8d0:
    // 0x27e8d0: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x27e8d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_27e8d4:
    // 0x27e8d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27e8d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27e8d8:
    // 0x27e8d8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_27e8dc:
    if (ctx->pc == 0x27E8DCu) {
        ctx->pc = 0x27E8DCu;
            // 0x27e8dc: 0xe4c10028  swc1        $f1, 0x28($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
        ctx->pc = 0x27E8E0u;
        goto label_27e8e0;
    }
    ctx->pc = 0x27E8D8u;
    {
        const bool branch_taken_0x27e8d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E8D8u;
            // 0x27e8dc: 0xe4c10028  swc1        $f1, 0x28($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8d8) {
            ctx->pc = 0x27E900u;
            goto label_27e900;
        }
    }
    ctx->pc = 0x27E8E0u;
label_27e8e0:
    // 0x27e8e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_27e8e4:
    // 0x27e8e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27e8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27e8e8:
    // 0x27e8e8: 0x0  nop
    ctx->pc = 0x27e8e8u;
    // NOP
label_27e8ec:
    // 0x27e8ec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27e8ecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_27e8f0:
    // 0x27e8f0: 0x0  nop
    ctx->pc = 0x27e8f0u;
    // NOP
label_27e8f4:
    // 0x27e8f4: 0x0  nop
    ctx->pc = 0x27e8f4u;
    // NOP
label_27e8f8:
    // 0x27e8f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_27e8fc:
    if (ctx->pc == 0x27E8FCu) {
        ctx->pc = 0x27E8FCu;
            // 0x27e8fc: 0xe640002c  swc1        $f0, 0x2C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
        ctx->pc = 0x27E900u;
        goto label_27e900;
    }
    ctx->pc = 0x27E8F8u;
    {
        const bool branch_taken_0x27e8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E8F8u;
            // 0x27e8fc: 0xe640002c  swc1        $f0, 0x2C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8f8) {
            ctx->pc = 0x27E908u;
            goto label_27e908;
        }
    }
    ctx->pc = 0x27E900u;
label_27e900:
    // 0x27e900: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x27e900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
label_27e904:
    // 0x27e904: 0x0  nop
    ctx->pc = 0x27e904u;
    // NOP
label_27e908:
    // 0x27e908: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x27e908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_27e90c:
    // 0x27e90c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x27e90cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27e910:
    // 0x27e910: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
label_27e914:
    if (ctx->pc == 0x27E914u) {
        ctx->pc = 0x27E914u;
            // 0x27e914: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E918u;
        goto label_27e918;
    }
    ctx->pc = 0x27E910u;
    {
        const bool branch_taken_0x27e910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E910u;
            // 0x27e914: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e910) {
            ctx->pc = 0x27EA80u;
            goto label_27ea80;
        }
    }
    ctx->pc = 0x27E918u;
label_27e918:
    // 0x27e918: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27e918u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e91c:
    // 0x27e91c: 0x27b600d0  addiu       $s6, $sp, 0xD0
    ctx->pc = 0x27e91cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_27e920:
    // 0x27e920: 0x27b730f0  addiu       $s7, $sp, 0x30F0
    ctx->pc = 0x27e920u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 12528));
label_27e924:
    // 0x27e924: 0x27be00c4  addiu       $fp, $sp, 0xC4
    ctx->pc = 0x27e924u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_27e928:
    // 0x27e928: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x27e928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_27e92c:
    // 0x27e92c: 0x74a821  addu        $s5, $v1, $s4
    ctx->pc = 0x27e92cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_27e930:
    // 0x27e930: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x27e930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_27e934:
    // 0x27e934: 0x90640010  lbu         $a0, 0x10($v1)
    ctx->pc = 0x27e934u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_27e938:
    // 0x27e938: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x27e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_27e93c:
    // 0x27e93c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x27e93cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27e940:
    // 0x27e940: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x27e940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_27e944:
    // 0x27e944: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_27e948:
    if (ctx->pc == 0x27E948u) {
        ctx->pc = 0x27E94Cu;
        goto label_27e94c;
    }
    ctx->pc = 0x27E944u;
    {
        const bool branch_taken_0x27e944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e944) {
            ctx->pc = 0x27EA68u;
            goto label_27ea68;
        }
    }
    ctx->pc = 0x27E94Cu;
label_27e94c:
    // 0x27e94c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x27e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_27e950:
    // 0x27e950: 0x80830010  lb          $v1, 0x10($a0)
    ctx->pc = 0x27e950u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_27e954:
    // 0x27e954: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x27e954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27e958:
    // 0x27e958: 0x90e300a8  lbu         $v1, 0xA8($a3)
    ctx->pc = 0x27e958u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 168)));
label_27e95c:
    // 0x27e95c: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x27e95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_27e960:
    // 0x27e960: 0x2c660001  sltiu       $a2, $v1, 0x1
    ctx->pc = 0x27e960u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27e964:
    // 0x27e964: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
label_27e968:
    if (ctx->pc == 0x27E968u) {
        ctx->pc = 0x27E96Cu;
        goto label_27e96c;
    }
    ctx->pc = 0x27E964u;
    {
        const bool branch_taken_0x27e964 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e964) {
            ctx->pc = 0x27E988u;
            goto label_27e988;
        }
    }
    ctx->pc = 0x27E96Cu;
label_27e96c:
    // 0x27e96c: 0x94e5006c  lhu         $a1, 0x6C($a3)
    ctx->pc = 0x27e96cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 108)));
label_27e970:
    // 0x27e970: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x27e970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27e974:
    // 0x27e974: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27e974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27e978:
    // 0x27e978: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27e978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27e97c:
    // 0x27e97c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x27e97cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27e980:
    // 0x27e980: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
label_27e984:
    if (ctx->pc == 0x27E984u) {
        ctx->pc = 0x27E988u;
        goto label_27e988;
    }
    ctx->pc = 0x27E980u;
    {
        const bool branch_taken_0x27e980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27e980) {
            ctx->pc = 0x27EA68u;
            goto label_27ea68;
        }
    }
    ctx->pc = 0x27E988u;
label_27e988:
    // 0x27e988: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
label_27e98c:
    if (ctx->pc == 0x27E98Cu) {
        ctx->pc = 0x27E990u;
        goto label_27e990;
    }
    ctx->pc = 0x27E988u;
    {
        const bool branch_taken_0x27e988 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e988) {
            ctx->pc = 0x27E9C0u;
            goto label_27e9c0;
        }
    }
    ctx->pc = 0x27E990u;
label_27e990:
    // 0x27e990: 0x94e3006c  lhu         $v1, 0x6C($a3)
    ctx->pc = 0x27e990u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 108)));
label_27e994:
    // 0x27e994: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27e994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27e998:
    // 0x27e998: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x27e998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27e99c:
    // 0x27e99c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x27e99cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27e9a0:
    // 0x27e9a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_27e9a4:
    if (ctx->pc == 0x27E9A4u) {
        ctx->pc = 0x27E9A4u;
            // 0x27e9a4: 0x24e500b0  addiu       $a1, $a3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
        ctx->pc = 0x27E9A8u;
        goto label_27e9a8;
    }
    ctx->pc = 0x27E9A0u;
    {
        const bool branch_taken_0x27e9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E9A0u;
            // 0x27e9a4: 0x24e500b0  addiu       $a1, $a3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e9a0) {
            ctx->pc = 0x27E9C0u;
            goto label_27e9c0;
        }
    }
    ctx->pc = 0x27E9A8u;
label_27e9a8:
    // 0x27e9a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27e9ac:
    // 0x27e9ac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x27e9acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_27e9b0:
    // 0x27e9b0: 0x24a40040  addiu       $a0, $a1, 0x40
    ctx->pc = 0x27e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_27e9b4:
    // 0x27e9b4: 0xc0a3a64  jal         func_28E990
label_27e9b8:
    if (ctx->pc == 0x27E9B8u) {
        ctx->pc = 0x27E9B8u;
            // 0x27e9b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x27E9BCu;
        goto label_27e9bc;
    }
    ctx->pc = 0x27E9B4u;
    SET_GPR_U32(ctx, 31, 0x27E9BCu);
    ctx->pc = 0x27E9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E9B4u;
            // 0x27e9b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E990u;
    if (runtime->hasFunction(0x28E990u)) {
        auto targetFn = runtime->lookupFunction(0x28E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E9BCu; }
        if (ctx->pc != 0x27E9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E990_0x28e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E9BCu; }
        if (ctx->pc != 0x27E9BCu) { return; }
    }
    ctx->pc = 0x27E9BCu;
label_27e9bc:
    // 0x27e9bc: 0x0  nop
    ctx->pc = 0x27e9bcu;
    // NOP
label_27e9c0:
    // 0x27e9c0: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x27e9c0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_27e9c4:
    // 0x27e9c4: 0x8e670094  lw          $a3, 0x94($s3)
    ctx->pc = 0x27e9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_27e9c8:
    // 0x27e9c8: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x27e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_27e9cc:
    // 0x27e9cc: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x27e9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_27e9d0:
    // 0x27e9d0: 0x27a3313c  addiu       $v1, $sp, 0x313C
    ctx->pc = 0x27e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12604));
label_27e9d4:
    // 0x27e9d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27e9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27e9d8:
    // 0x27e9d8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x27e9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27e9dc:
    // 0x27e9dc: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x27e9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_27e9e0:
    // 0x27e9e0: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x27e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
label_27e9e4:
    // 0x27e9e4: 0xafb600c0  sw          $s6, 0xC0($sp)
    ctx->pc = 0x27e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 22));
label_27e9e8:
    // 0x27e9e8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x27e9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_27e9ec:
    // 0x27e9ec: 0x27a23110  addiu       $v0, $sp, 0x3110
    ctx->pc = 0x27e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12560));
label_27e9f0:
    // 0x27e9f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27e9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_27e9f4:
    // 0x27e9f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27e9f8:
    // 0x27e9f8: 0x24421b7c  addiu       $v0, $v0, 0x1B7C
    ctx->pc = 0x27e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7036));
label_27e9fc:
    // 0x27e9fc: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x27e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_27ea00:
    // 0x27ea00: 0x82a80010  lb          $t0, 0x10($s5)
    ctx->pc = 0x27ea00u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
label_27ea04:
    // 0x27ea04: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27ea08:
    // 0x27ea08: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x27ea08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_27ea0c:
    // 0x27ea0c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x27ea0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_27ea10:
    // 0x27ea10: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x27ea10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_27ea14:
    // 0x27ea14: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x27ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_27ea18:
    // 0x27ea18: 0x90421a60  lbu         $v0, 0x1A60($v0)
    ctx->pc = 0x27ea18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6752)));
label_27ea1c:
    // 0x27ea1c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x27ea1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_27ea20:
    // 0x27ea20: 0x83a2313c  lb          $v0, 0x313C($sp)
    ctx->pc = 0x27ea20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 12604)));
label_27ea24:
    // 0x27ea24: 0xa2420010  sb          $v0, 0x10($s2)
    ctx->pc = 0x27ea24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
label_27ea28:
    // 0x27ea28: 0x8ea7000c  lw          $a3, 0xC($s5)
    ctx->pc = 0x27ea28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_27ea2c:
    // 0x27ea2c: 0xc092544  jal         func_249510
label_27ea30:
    if (ctx->pc == 0x27EA30u) {
        ctx->pc = 0x27EA30u;
            // 0x27ea30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27EA34u;
        goto label_27ea34;
    }
    ctx->pc = 0x27EA2Cu;
    SET_GPR_U32(ctx, 31, 0x27EA34u);
    ctx->pc = 0x27EA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EA2Cu;
            // 0x27ea30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249510u;
    if (runtime->hasFunction(0x249510u)) {
        auto targetFn = runtime->lookupFunction(0x249510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA34u; }
        if (ctx->pc != 0x27EA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249510_0x249510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA34u; }
        if (ctx->pc != 0x27EA34u) { return; }
    }
    ctx->pc = 0x27EA34u;
label_27ea34:
    // 0x27ea34: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x27ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_27ea38:
    // 0x27ea38: 0x761826  xor         $v1, $v1, $s6
    ctx->pc = 0x27ea38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 22));
label_27ea3c:
    // 0x27ea3c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27ea3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27ea40:
    // 0x27ea40: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_27ea44:
    if (ctx->pc == 0x27EA44u) {
        ctx->pc = 0x27EA48u;
        goto label_27ea48;
    }
    ctx->pc = 0x27EA40u;
    {
        const bool branch_taken_0x27ea40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ea40) {
            ctx->pc = 0x27EA68u;
            goto label_27ea68;
        }
    }
    ctx->pc = 0x27EA48u;
label_27ea48:
    // 0x27ea48: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x27ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_27ea4c:
    // 0x27ea4c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27ea4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27ea50:
    // 0x27ea50: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x27ea50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_27ea54:
    // 0x27ea54: 0x8ea60018  lw          $a2, 0x18($s5)
    ctx->pc = 0x27ea54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_27ea58:
    // 0x27ea58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27ea58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27ea5c:
    // 0x27ea5c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27ea5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27ea60:
    // 0x27ea60: 0x320f809  jalr        $t9
label_27ea64:
    if (ctx->pc == 0x27EA64u) {
        ctx->pc = 0x27EA64u;
            // 0x27ea64: 0x27a800c0  addiu       $t0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x27EA68u;
        goto label_27ea68;
    }
    ctx->pc = 0x27EA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27EA68u);
        ctx->pc = 0x27EA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EA60u;
            // 0x27ea64: 0x27a800c0  addiu       $t0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27EA68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27EA68u; }
            if (ctx->pc != 0x27EA68u) { return; }
        }
        }
    }
    ctx->pc = 0x27EA68u;
label_27ea68:
    // 0x27ea68: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x27ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_27ea6c:
    // 0x27ea6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27ea6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27ea70:
    // 0x27ea70: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x27ea70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27ea74:
    // 0x27ea74: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
label_27ea78:
    if (ctx->pc == 0x27EA78u) {
        ctx->pc = 0x27EA78u;
            // 0x27ea78: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x27EA7Cu;
        goto label_27ea7c;
    }
    ctx->pc = 0x27EA74u;
    {
        const bool branch_taken_0x27ea74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EA74u;
            // 0x27ea78: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea74) {
            ctx->pc = 0x27E928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27e928;
        }
    }
    ctx->pc = 0x27EA7Cu;
label_27ea7c:
    // 0x27ea7c: 0x0  nop
    ctx->pc = 0x27ea7cu;
    // NOP
label_27ea80:
    // 0x27ea80: 0x27a33120  addiu       $v1, $sp, 0x3120
    ctx->pc = 0x27ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12576));
label_27ea84:
    // 0x27ea84: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27ea84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ea88:
    // 0x27ea88: 0x27a53124  addiu       $a1, $sp, 0x3124
    ctx->pc = 0x27ea88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12580));
label_27ea8c:
    // 0x27ea8c: 0x27a43128  addiu       $a0, $sp, 0x3128
    ctx->pc = 0x27ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12584));
label_27ea90:
    // 0x27ea90: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x27ea90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_27ea94:
    // 0x27ea94: 0x27a3312c  addiu       $v1, $sp, 0x312C
    ctx->pc = 0x27ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12588));
label_27ea98:
    // 0x27ea98: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x27ea98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ea9c:
    // 0x27ea9c: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x27ea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_27eaa0:
    // 0x27eaa0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27eaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27eaa4:
    // 0x27eaa4: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x27eaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_27eaa8:
    // 0x27eaa8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27eaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27eaac:
    // 0x27eaac: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x27eaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
label_27eab0:
    // 0x27eab0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27eab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_27eab4:
    // 0x27eab4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27eab8:
    // 0x27eab8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x27eab8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27eabc:
    // 0x27eabc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27eabcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27eac0:
    // 0x27eac0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27eac0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27eac4:
    // 0x27eac4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27eac4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27eac8:
    // 0x27eac8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27eac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27eacc:
    // 0x27eacc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27eaccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27ead0:
    // 0x27ead0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27ead0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27ead4:
    // 0x27ead4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27ead4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27ead8:
    // 0x27ead8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27ead8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27eadc:
    // 0x27eadc: 0x3e00008  jr          $ra
label_27eae0:
    if (ctx->pc == 0x27EAE0u) {
        ctx->pc = 0x27EAE0u;
            // 0x27eae0: 0x27bd3140  addiu       $sp, $sp, 0x3140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 12608));
        ctx->pc = 0x27EAE4u;
        goto label_27eae4;
    }
    ctx->pc = 0x27EADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EADCu;
            // 0x27eae0: 0x27bd3140  addiu       $sp, $sp, 0x3140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 12608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27EAE4u;
label_27eae4:
    // 0x27eae4: 0x0  nop
    ctx->pc = 0x27eae4u;
    // NOP
label_27eae8:
    // 0x27eae8: 0x0  nop
    ctx->pc = 0x27eae8u;
    // NOP
label_27eaec:
    // 0x27eaec: 0x0  nop
    ctx->pc = 0x27eaecu;
    // NOP
}
