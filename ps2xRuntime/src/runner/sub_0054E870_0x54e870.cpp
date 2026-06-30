#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054E870
// Address: 0x54e870 - 0x54ec20
void sub_0054E870_0x54e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054E870_0x54e870");
#endif

    switch (ctx->pc) {
        case 0x54e870u: goto label_54e870;
        case 0x54e874u: goto label_54e874;
        case 0x54e878u: goto label_54e878;
        case 0x54e87cu: goto label_54e87c;
        case 0x54e880u: goto label_54e880;
        case 0x54e884u: goto label_54e884;
        case 0x54e888u: goto label_54e888;
        case 0x54e88cu: goto label_54e88c;
        case 0x54e890u: goto label_54e890;
        case 0x54e894u: goto label_54e894;
        case 0x54e898u: goto label_54e898;
        case 0x54e89cu: goto label_54e89c;
        case 0x54e8a0u: goto label_54e8a0;
        case 0x54e8a4u: goto label_54e8a4;
        case 0x54e8a8u: goto label_54e8a8;
        case 0x54e8acu: goto label_54e8ac;
        case 0x54e8b0u: goto label_54e8b0;
        case 0x54e8b4u: goto label_54e8b4;
        case 0x54e8b8u: goto label_54e8b8;
        case 0x54e8bcu: goto label_54e8bc;
        case 0x54e8c0u: goto label_54e8c0;
        case 0x54e8c4u: goto label_54e8c4;
        case 0x54e8c8u: goto label_54e8c8;
        case 0x54e8ccu: goto label_54e8cc;
        case 0x54e8d0u: goto label_54e8d0;
        case 0x54e8d4u: goto label_54e8d4;
        case 0x54e8d8u: goto label_54e8d8;
        case 0x54e8dcu: goto label_54e8dc;
        case 0x54e8e0u: goto label_54e8e0;
        case 0x54e8e4u: goto label_54e8e4;
        case 0x54e8e8u: goto label_54e8e8;
        case 0x54e8ecu: goto label_54e8ec;
        case 0x54e8f0u: goto label_54e8f0;
        case 0x54e8f4u: goto label_54e8f4;
        case 0x54e8f8u: goto label_54e8f8;
        case 0x54e8fcu: goto label_54e8fc;
        case 0x54e900u: goto label_54e900;
        case 0x54e904u: goto label_54e904;
        case 0x54e908u: goto label_54e908;
        case 0x54e90cu: goto label_54e90c;
        case 0x54e910u: goto label_54e910;
        case 0x54e914u: goto label_54e914;
        case 0x54e918u: goto label_54e918;
        case 0x54e91cu: goto label_54e91c;
        case 0x54e920u: goto label_54e920;
        case 0x54e924u: goto label_54e924;
        case 0x54e928u: goto label_54e928;
        case 0x54e92cu: goto label_54e92c;
        case 0x54e930u: goto label_54e930;
        case 0x54e934u: goto label_54e934;
        case 0x54e938u: goto label_54e938;
        case 0x54e93cu: goto label_54e93c;
        case 0x54e940u: goto label_54e940;
        case 0x54e944u: goto label_54e944;
        case 0x54e948u: goto label_54e948;
        case 0x54e94cu: goto label_54e94c;
        case 0x54e950u: goto label_54e950;
        case 0x54e954u: goto label_54e954;
        case 0x54e958u: goto label_54e958;
        case 0x54e95cu: goto label_54e95c;
        case 0x54e960u: goto label_54e960;
        case 0x54e964u: goto label_54e964;
        case 0x54e968u: goto label_54e968;
        case 0x54e96cu: goto label_54e96c;
        case 0x54e970u: goto label_54e970;
        case 0x54e974u: goto label_54e974;
        case 0x54e978u: goto label_54e978;
        case 0x54e97cu: goto label_54e97c;
        case 0x54e980u: goto label_54e980;
        case 0x54e984u: goto label_54e984;
        case 0x54e988u: goto label_54e988;
        case 0x54e98cu: goto label_54e98c;
        case 0x54e990u: goto label_54e990;
        case 0x54e994u: goto label_54e994;
        case 0x54e998u: goto label_54e998;
        case 0x54e99cu: goto label_54e99c;
        case 0x54e9a0u: goto label_54e9a0;
        case 0x54e9a4u: goto label_54e9a4;
        case 0x54e9a8u: goto label_54e9a8;
        case 0x54e9acu: goto label_54e9ac;
        case 0x54e9b0u: goto label_54e9b0;
        case 0x54e9b4u: goto label_54e9b4;
        case 0x54e9b8u: goto label_54e9b8;
        case 0x54e9bcu: goto label_54e9bc;
        case 0x54e9c0u: goto label_54e9c0;
        case 0x54e9c4u: goto label_54e9c4;
        case 0x54e9c8u: goto label_54e9c8;
        case 0x54e9ccu: goto label_54e9cc;
        case 0x54e9d0u: goto label_54e9d0;
        case 0x54e9d4u: goto label_54e9d4;
        case 0x54e9d8u: goto label_54e9d8;
        case 0x54e9dcu: goto label_54e9dc;
        case 0x54e9e0u: goto label_54e9e0;
        case 0x54e9e4u: goto label_54e9e4;
        case 0x54e9e8u: goto label_54e9e8;
        case 0x54e9ecu: goto label_54e9ec;
        case 0x54e9f0u: goto label_54e9f0;
        case 0x54e9f4u: goto label_54e9f4;
        case 0x54e9f8u: goto label_54e9f8;
        case 0x54e9fcu: goto label_54e9fc;
        case 0x54ea00u: goto label_54ea00;
        case 0x54ea04u: goto label_54ea04;
        case 0x54ea08u: goto label_54ea08;
        case 0x54ea0cu: goto label_54ea0c;
        case 0x54ea10u: goto label_54ea10;
        case 0x54ea14u: goto label_54ea14;
        case 0x54ea18u: goto label_54ea18;
        case 0x54ea1cu: goto label_54ea1c;
        case 0x54ea20u: goto label_54ea20;
        case 0x54ea24u: goto label_54ea24;
        case 0x54ea28u: goto label_54ea28;
        case 0x54ea2cu: goto label_54ea2c;
        case 0x54ea30u: goto label_54ea30;
        case 0x54ea34u: goto label_54ea34;
        case 0x54ea38u: goto label_54ea38;
        case 0x54ea3cu: goto label_54ea3c;
        case 0x54ea40u: goto label_54ea40;
        case 0x54ea44u: goto label_54ea44;
        case 0x54ea48u: goto label_54ea48;
        case 0x54ea4cu: goto label_54ea4c;
        case 0x54ea50u: goto label_54ea50;
        case 0x54ea54u: goto label_54ea54;
        case 0x54ea58u: goto label_54ea58;
        case 0x54ea5cu: goto label_54ea5c;
        case 0x54ea60u: goto label_54ea60;
        case 0x54ea64u: goto label_54ea64;
        case 0x54ea68u: goto label_54ea68;
        case 0x54ea6cu: goto label_54ea6c;
        case 0x54ea70u: goto label_54ea70;
        case 0x54ea74u: goto label_54ea74;
        case 0x54ea78u: goto label_54ea78;
        case 0x54ea7cu: goto label_54ea7c;
        case 0x54ea80u: goto label_54ea80;
        case 0x54ea84u: goto label_54ea84;
        case 0x54ea88u: goto label_54ea88;
        case 0x54ea8cu: goto label_54ea8c;
        case 0x54ea90u: goto label_54ea90;
        case 0x54ea94u: goto label_54ea94;
        case 0x54ea98u: goto label_54ea98;
        case 0x54ea9cu: goto label_54ea9c;
        case 0x54eaa0u: goto label_54eaa0;
        case 0x54eaa4u: goto label_54eaa4;
        case 0x54eaa8u: goto label_54eaa8;
        case 0x54eaacu: goto label_54eaac;
        case 0x54eab0u: goto label_54eab0;
        case 0x54eab4u: goto label_54eab4;
        case 0x54eab8u: goto label_54eab8;
        case 0x54eabcu: goto label_54eabc;
        case 0x54eac0u: goto label_54eac0;
        case 0x54eac4u: goto label_54eac4;
        case 0x54eac8u: goto label_54eac8;
        case 0x54eaccu: goto label_54eacc;
        case 0x54ead0u: goto label_54ead0;
        case 0x54ead4u: goto label_54ead4;
        case 0x54ead8u: goto label_54ead8;
        case 0x54eadcu: goto label_54eadc;
        case 0x54eae0u: goto label_54eae0;
        case 0x54eae4u: goto label_54eae4;
        case 0x54eae8u: goto label_54eae8;
        case 0x54eaecu: goto label_54eaec;
        case 0x54eaf0u: goto label_54eaf0;
        case 0x54eaf4u: goto label_54eaf4;
        case 0x54eaf8u: goto label_54eaf8;
        case 0x54eafcu: goto label_54eafc;
        case 0x54eb00u: goto label_54eb00;
        case 0x54eb04u: goto label_54eb04;
        case 0x54eb08u: goto label_54eb08;
        case 0x54eb0cu: goto label_54eb0c;
        case 0x54eb10u: goto label_54eb10;
        case 0x54eb14u: goto label_54eb14;
        case 0x54eb18u: goto label_54eb18;
        case 0x54eb1cu: goto label_54eb1c;
        case 0x54eb20u: goto label_54eb20;
        case 0x54eb24u: goto label_54eb24;
        case 0x54eb28u: goto label_54eb28;
        case 0x54eb2cu: goto label_54eb2c;
        case 0x54eb30u: goto label_54eb30;
        case 0x54eb34u: goto label_54eb34;
        case 0x54eb38u: goto label_54eb38;
        case 0x54eb3cu: goto label_54eb3c;
        case 0x54eb40u: goto label_54eb40;
        case 0x54eb44u: goto label_54eb44;
        case 0x54eb48u: goto label_54eb48;
        case 0x54eb4cu: goto label_54eb4c;
        case 0x54eb50u: goto label_54eb50;
        case 0x54eb54u: goto label_54eb54;
        case 0x54eb58u: goto label_54eb58;
        case 0x54eb5cu: goto label_54eb5c;
        case 0x54eb60u: goto label_54eb60;
        case 0x54eb64u: goto label_54eb64;
        case 0x54eb68u: goto label_54eb68;
        case 0x54eb6cu: goto label_54eb6c;
        case 0x54eb70u: goto label_54eb70;
        case 0x54eb74u: goto label_54eb74;
        case 0x54eb78u: goto label_54eb78;
        case 0x54eb7cu: goto label_54eb7c;
        case 0x54eb80u: goto label_54eb80;
        case 0x54eb84u: goto label_54eb84;
        case 0x54eb88u: goto label_54eb88;
        case 0x54eb8cu: goto label_54eb8c;
        case 0x54eb90u: goto label_54eb90;
        case 0x54eb94u: goto label_54eb94;
        case 0x54eb98u: goto label_54eb98;
        case 0x54eb9cu: goto label_54eb9c;
        case 0x54eba0u: goto label_54eba0;
        case 0x54eba4u: goto label_54eba4;
        case 0x54eba8u: goto label_54eba8;
        case 0x54ebacu: goto label_54ebac;
        case 0x54ebb0u: goto label_54ebb0;
        case 0x54ebb4u: goto label_54ebb4;
        case 0x54ebb8u: goto label_54ebb8;
        case 0x54ebbcu: goto label_54ebbc;
        case 0x54ebc0u: goto label_54ebc0;
        case 0x54ebc4u: goto label_54ebc4;
        case 0x54ebc8u: goto label_54ebc8;
        case 0x54ebccu: goto label_54ebcc;
        case 0x54ebd0u: goto label_54ebd0;
        case 0x54ebd4u: goto label_54ebd4;
        case 0x54ebd8u: goto label_54ebd8;
        case 0x54ebdcu: goto label_54ebdc;
        case 0x54ebe0u: goto label_54ebe0;
        case 0x54ebe4u: goto label_54ebe4;
        case 0x54ebe8u: goto label_54ebe8;
        case 0x54ebecu: goto label_54ebec;
        case 0x54ebf0u: goto label_54ebf0;
        case 0x54ebf4u: goto label_54ebf4;
        case 0x54ebf8u: goto label_54ebf8;
        case 0x54ebfcu: goto label_54ebfc;
        case 0x54ec00u: goto label_54ec00;
        case 0x54ec04u: goto label_54ec04;
        case 0x54ec08u: goto label_54ec08;
        case 0x54ec0cu: goto label_54ec0c;
        case 0x54ec10u: goto label_54ec10;
        case 0x54ec14u: goto label_54ec14;
        case 0x54ec18u: goto label_54ec18;
        case 0x54ec1cu: goto label_54ec1c;
        default: break;
    }

    ctx->pc = 0x54e870u;

label_54e870:
    // 0x54e870: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x54e870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_54e874:
    // 0x54e874: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54e874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54e878:
    // 0x54e878: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x54e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_54e87c:
    // 0x54e87c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54e880:
    // 0x54e880: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x54e880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_54e884:
    // 0x54e884: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x54e884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_54e888:
    // 0x54e888: 0x3c170067  lui         $s7, 0x67
    ctx->pc = 0x54e888u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)103 << 16));
label_54e88c:
    // 0x54e88c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x54e88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_54e890:
    // 0x54e890: 0x26f7e080  addiu       $s7, $s7, -0x1F80
    ctx->pc = 0x54e890u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959232));
label_54e894:
    // 0x54e894: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x54e894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_54e898:
    // 0x54e898: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x54e898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_54e89c:
    // 0x54e89c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x54e89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_54e8a0:
    // 0x54e8a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x54e8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_54e8a4:
    // 0x54e8a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x54e8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_54e8a8:
    // 0x54e8a8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x54e8a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_54e8ac:
    // 0x54e8ac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x54e8acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_54e8b0:
    // 0x54e8b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x54e8b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_54e8b4:
    // 0x54e8b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x54e8b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_54e8b8:
    // 0x54e8b8: 0x9471daf0  lhu         $s1, -0x2510($v1)
    ctx->pc = 0x54e8b8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957808)));
label_54e8bc:
    // 0x54e8bc: 0x9450daf2  lhu         $s0, -0x250E($v0)
    ctx->pc = 0x54e8bcu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957810)));
label_54e8c0:
    // 0x54e8c0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54e8c4:
    // 0x54e8c4: 0x8467d978  lh          $a3, -0x2688($v1)
    ctx->pc = 0x54e8c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957432)));
label_54e8c8:
    // 0x54e8c8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54e8cc:
    // 0x54e8cc: 0x8446d97a  lh          $a2, -0x2686($v0)
    ctx->pc = 0x54e8ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957434)));
label_54e8d0:
    // 0x54e8d0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x54e8d0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e8d4:
    // 0x54e8d4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x54e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_54e8d8:
    // 0x54e8d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54e8d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54e8dc:
    // 0x54e8dc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x54e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_54e8e0:
    // 0x54e8e0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x54e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_54e8e4:
    // 0x54e8e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54e8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e8e8:
    // 0x54e8e8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x54e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_54e8ec:
    // 0x54e8ec: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x54e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
label_54e8f0:
    // 0x54e8f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x54e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_54e8f4:
    // 0x54e8f4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x54e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_54e8f8:
    // 0x54e8f8: 0x46006580  add.s       $f22, $f12, $f0
    ctx->pc = 0x54e8f8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_54e8fc:
    // 0x54e8fc: 0x94750028  lhu         $s5, 0x28($v1)
    ctx->pc = 0x54e8fcu;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_54e900:
    // 0x54e900: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x54e900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_54e904:
    // 0x54e904: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x54e904u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e908:
    // 0x54e908: 0x0  nop
    ctx->pc = 0x54e908u;
    // NOP
label_54e90c:
    // 0x54e90c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54e90cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54e910:
    // 0x54e910: 0xc0506ac  jal         func_141AB0
label_54e914:
    if (ctx->pc == 0x54E914u) {
        ctx->pc = 0x54E914u;
            // 0x54e914: 0x46006d40  add.s       $f21, $f13, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x54E918u;
        goto label_54e918;
    }
    ctx->pc = 0x54E910u;
    SET_GPR_U32(ctx, 31, 0x54E918u);
    ctx->pc = 0x54E914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54E910u;
            // 0x54e914: 0x46006d40  add.s       $f21, $f13, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E918u; }
        if (ctx->pc != 0x54E918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E918u; }
        if (ctx->pc != 0x54E918u) { return; }
    }
    ctx->pc = 0x54E918u;
label_54e918:
    // 0x54e918: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54e918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54e91c:
    // 0x54e91c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54e920:
    // 0x54e920: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54e920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54e924:
    // 0x54e924: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54e924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54e928:
    // 0x54e928: 0x320f809  jalr        $t9
label_54e92c:
    if (ctx->pc == 0x54E92Cu) {
        ctx->pc = 0x54E92Cu;
            // 0x54e92c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54E930u;
        goto label_54e930;
    }
    ctx->pc = 0x54E928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54E930u);
        ctx->pc = 0x54E92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E928u;
            // 0x54e92c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54E930u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54E930u; }
            if (ctx->pc != 0x54E930u) { return; }
        }
        }
    }
    ctx->pc = 0x54E930u;
label_54e930:
    // 0x54e930: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54e930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54e934:
    // 0x54e934: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54e934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54e938:
    // 0x54e938: 0x24a5e100  addiu       $a1, $a1, -0x1F00
    ctx->pc = 0x54e938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959360));
label_54e93c:
    // 0x54e93c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x54e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54e940:
    // 0x54e940: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54e940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54e944:
    // 0x54e944: 0xc4b40008  lwc1        $f20, 0x8($a1)
    ctx->pc = 0x54e944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54e948:
    // 0x54e948: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x54e948u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_54e94c:
    // 0x54e94c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54e950:
    if (ctx->pc == 0x54E950u) {
        ctx->pc = 0x54E950u;
            // 0x54e950: 0x4601ad40  add.s       $f21, $f21, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
        ctx->pc = 0x54E954u;
        goto label_54e954;
    }
    ctx->pc = 0x54E94Cu;
    {
        const bool branch_taken_0x54e94c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54E950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E94Cu;
            // 0x54e950: 0x4601ad40  add.s       $f21, $f21, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e94c) {
            ctx->pc = 0x54E960u;
            goto label_54e960;
        }
    }
    ctx->pc = 0x54E954u;
label_54e954:
    // 0x54e954: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54e954u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e958:
    // 0x54e958: 0x10000008  b           . + 4 + (0x8 << 2)
label_54e95c:
    if (ctx->pc == 0x54E95Cu) {
        ctx->pc = 0x54E95Cu;
            // 0x54e95c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54E960u;
        goto label_54e960;
    }
    ctx->pc = 0x54E958u;
    {
        const bool branch_taken_0x54e958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E958u;
            // 0x54e95c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e958) {
            ctx->pc = 0x54E97Cu;
            goto label_54e97c;
        }
    }
    ctx->pc = 0x54E960u;
label_54e960:
    // 0x54e960: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54e960u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54e964:
    // 0x54e964: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54e964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54e968:
    // 0x54e968: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54e968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54e96c:
    // 0x54e96c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e96cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e970:
    // 0x54e970: 0x0  nop
    ctx->pc = 0x54e970u;
    // NOP
label_54e974:
    // 0x54e974: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54e974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54e978:
    // 0x54e978: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54e978u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54e97c:
    // 0x54e97c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54e980:
    if (ctx->pc == 0x54E980u) {
        ctx->pc = 0x54E980u;
            // 0x54e980: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54E984u;
        goto label_54e984;
    }
    ctx->pc = 0x54E97Cu;
    {
        const bool branch_taken_0x54e97c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54e97c) {
            ctx->pc = 0x54E980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54E97Cu;
            // 0x54e980: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54E990u;
            goto label_54e990;
        }
    }
    ctx->pc = 0x54E984u;
label_54e984:
    // 0x54e984: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54e984u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e988:
    // 0x54e988: 0x10000007  b           . + 4 + (0x7 << 2)
label_54e98c:
    if (ctx->pc == 0x54E98Cu) {
        ctx->pc = 0x54E98Cu;
            // 0x54e98c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54E990u;
        goto label_54e990;
    }
    ctx->pc = 0x54E988u;
    {
        const bool branch_taken_0x54e988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E988u;
            // 0x54e98c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e988) {
            ctx->pc = 0x54E9A8u;
            goto label_54e9a8;
        }
    }
    ctx->pc = 0x54E990u;
label_54e990:
    // 0x54e990: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54e990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54e994:
    // 0x54e994: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54e994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54e998:
    // 0x54e998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e99c:
    // 0x54e99c: 0x0  nop
    ctx->pc = 0x54e99cu;
    // NOP
label_54e9a0:
    // 0x54e9a0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54e9a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54e9a4:
    // 0x54e9a4: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54e9a4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54e9a8:
    // 0x54e9a8: 0x4601ab41  sub.s       $f13, $f21, $f1
    ctx->pc = 0x54e9a8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_54e9ac:
    // 0x54e9ac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54e9b0:
    // 0x54e9b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54e9b4:
    // 0x54e9b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54e9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54e9b8:
    // 0x54e9b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54e9b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e9bc:
    // 0x54e9bc: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x54e9bcu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_54e9c0:
    // 0x54e9c0: 0x4614b380  add.s       $f14, $f22, $f20
    ctx->pc = 0x54e9c0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_54e9c4:
    // 0x54e9c4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54e9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54e9c8:
    // 0x54e9c8: 0xc0bc284  jal         func_2F0A10
label_54e9cc:
    if (ctx->pc == 0x54E9CCu) {
        ctx->pc = 0x54E9CCu;
            // 0x54e9cc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x54E9D0u;
        goto label_54e9d0;
    }
    ctx->pc = 0x54E9C8u;
    SET_GPR_U32(ctx, 31, 0x54E9D0u);
    ctx->pc = 0x54E9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54E9C8u;
            // 0x54e9cc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E9D0u; }
        if (ctx->pc != 0x54E9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E9D0u; }
        if (ctx->pc != 0x54E9D0u) { return; }
    }
    ctx->pc = 0x54E9D0u;
label_54e9d0:
    // 0x54e9d0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54e9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54e9d4:
    // 0x54e9d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54e9d8:
    // 0x54e9d8: 0x24a5e380  addiu       $a1, $a1, -0x1C80
    ctx->pc = 0x54e9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960000));
label_54e9dc:
    // 0x54e9dc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x54e9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54e9e0:
    // 0x54e9e0: 0x4614b580  add.s       $f22, $f22, $f20
    ctx->pc = 0x54e9e0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_54e9e4:
    // 0x54e9e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54e9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54e9e8:
    // 0x54e9e8: 0xc4b40008  lwc1        $f20, 0x8($a1)
    ctx->pc = 0x54e9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54e9ec:
    // 0x54e9ec: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54e9f0:
    if (ctx->pc == 0x54E9F0u) {
        ctx->pc = 0x54E9F0u;
            // 0x54e9f0: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x54E9F4u;
        goto label_54e9f4;
    }
    ctx->pc = 0x54E9ECu;
    {
        const bool branch_taken_0x54e9ec = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54E9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E9ECu;
            // 0x54e9f0: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e9ec) {
            ctx->pc = 0x54EA00u;
            goto label_54ea00;
        }
    }
    ctx->pc = 0x54E9F4u;
label_54e9f4:
    // 0x54e9f4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54e9f4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e9f8:
    // 0x54e9f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_54e9fc:
    if (ctx->pc == 0x54E9FCu) {
        ctx->pc = 0x54E9FCu;
            // 0x54e9fc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54EA00u;
        goto label_54ea00;
    }
    ctx->pc = 0x54E9F8u;
    {
        const bool branch_taken_0x54e9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E9F8u;
            // 0x54e9fc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e9f8) {
            ctx->pc = 0x54EA1Cu;
            goto label_54ea1c;
        }
    }
    ctx->pc = 0x54EA00u;
label_54ea00:
    // 0x54ea00: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54ea04:
    // 0x54ea04: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54ea04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54ea08:
    // 0x54ea08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ea08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ea0c:
    // 0x54ea0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ea0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ea10:
    // 0x54ea10: 0x0  nop
    ctx->pc = 0x54ea10u;
    // NOP
label_54ea14:
    // 0x54ea14: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54ea14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54ea18:
    // 0x54ea18: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54ea18u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54ea1c:
    // 0x54ea1c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54ea20:
    if (ctx->pc == 0x54EA20u) {
        ctx->pc = 0x54EA20u;
            // 0x54ea20: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54EA24u;
        goto label_54ea24;
    }
    ctx->pc = 0x54EA1Cu;
    {
        const bool branch_taken_0x54ea1c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54ea1c) {
            ctx->pc = 0x54EA20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54EA1Cu;
            // 0x54ea20: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54EA30u;
            goto label_54ea30;
        }
    }
    ctx->pc = 0x54EA24u;
label_54ea24:
    // 0x54ea24: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54ea24u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ea28:
    // 0x54ea28: 0x10000007  b           . + 4 + (0x7 << 2)
label_54ea2c:
    if (ctx->pc == 0x54EA2Cu) {
        ctx->pc = 0x54EA2Cu;
            // 0x54ea2c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54EA30u;
        goto label_54ea30;
    }
    ctx->pc = 0x54EA28u;
    {
        const bool branch_taken_0x54ea28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54EA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EA28u;
            // 0x54ea2c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ea28) {
            ctx->pc = 0x54EA48u;
            goto label_54ea48;
        }
    }
    ctx->pc = 0x54EA30u;
label_54ea30:
    // 0x54ea30: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54ea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54ea34:
    // 0x54ea34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54ea34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54ea38:
    // 0x54ea38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54ea38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54ea3c:
    // 0x54ea3c: 0x0  nop
    ctx->pc = 0x54ea3cu;
    // NOP
label_54ea40:
    // 0x54ea40: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54ea40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54ea44:
    // 0x54ea44: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54ea44u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54ea48:
    // 0x54ea48: 0x4601ab41  sub.s       $f13, $f21, $f1
    ctx->pc = 0x54ea48u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_54ea4c:
    // 0x54ea4c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54ea50:
    // 0x54ea50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54ea54:
    // 0x54ea54: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54ea54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54ea58:
    // 0x54ea58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54ea58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ea5c:
    // 0x54ea5c: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x54ea5cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_54ea60:
    // 0x54ea60: 0x4614b380  add.s       $f14, $f22, $f20
    ctx->pc = 0x54ea60u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_54ea64:
    // 0x54ea64: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54ea64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54ea68:
    // 0x54ea68: 0xc0bc284  jal         func_2F0A10
label_54ea6c:
    if (ctx->pc == 0x54EA6Cu) {
        ctx->pc = 0x54EA6Cu;
            // 0x54ea6c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x54EA70u;
        goto label_54ea70;
    }
    ctx->pc = 0x54EA68u;
    SET_GPR_U32(ctx, 31, 0x54EA70u);
    ctx->pc = 0x54EA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54EA68u;
            // 0x54ea6c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EA70u; }
        if (ctx->pc != 0x54EA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EA70u; }
        if (ctx->pc != 0x54EA70u) { return; }
    }
    ctx->pc = 0x54EA70u;
label_54ea70:
    // 0x54ea70: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x54ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_54ea74:
    // 0x54ea74: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x54ea74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_54ea78:
    // 0x54ea78: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x54ea78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_54ea7c:
    // 0x54ea7c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x54ea7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ea80:
    // 0x54ea80: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54ea84:
    // 0x54ea84: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x54ea84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54ea88:
    // 0x54ea88: 0xc440db00  lwc1        $f0, -0x2500($v0)
    ctx->pc = 0x54ea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54ea8c:
    // 0x54ea8c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54ea90:
    // 0x54ea90: 0xc442db04  lwc1        $f2, -0x24FC($v0)
    ctx->pc = 0x54ea90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54ea94:
    // 0x54ea94: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x54ea94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_54ea98:
    // 0x54ea98: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54ea9c:
    // 0x54ea9c: 0xc441db08  lwc1        $f1, -0x24F8($v0)
    ctx->pc = 0x54ea9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54eaa0:
    // 0x54eaa0: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x54eaa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_54eaa4:
    // 0x54eaa4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x54eaa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_54eaa8:
    // 0x54eaa8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54eaac:
    // 0x54eaac: 0xc440db0c  lwc1        $f0, -0x24F4($v0)
    ctx->pc = 0x54eaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54eab0:
    // 0x54eab0: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x54eab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_54eab4:
    // 0x54eab4: 0x46161018  adda.s      $f2, $f22
    ctx->pc = 0x54eab4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_54eab8:
    // 0x54eab8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54eabc:
    // 0x54eabc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x54eabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_54eac0:
    // 0x54eac0: 0x2442e2a0  addiu       $v0, $v0, -0x1D60
    ctx->pc = 0x54eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959776));
label_54eac4:
    // 0x54eac4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x54eac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54eac8:
    // 0x54eac8: 0x46141d9c  madd.s      $f22, $f3, $f20
    ctx->pc = 0x54eac8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
label_54eacc:
    // 0x54eacc: 0x46001dc2  mul.s       $f23, $f3, $f0
    ctx->pc = 0x54eaccu;
    ctx->f[23] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_54ead0:
    // 0x54ead0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x54ead0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_54ead4:
    // 0x54ead4: 0x3a820003  xori        $v0, $s4, 0x3
    ctx->pc = 0x54ead4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)3);
label_54ead8:
    // 0x54ead8: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x54ead8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_54eadc:
    // 0x54eadc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x54eadcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_54eae0:
    // 0x54eae0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54eae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54eae4:
    // 0x54eae4: 0x2a6001b  divu        $zero, $s5, $a2
    ctx->pc = 0x54eae4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_54eae8:
    // 0x54eae8: 0x3812  mflo        $a3
    ctx->pc = 0x54eae8u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_54eaec:
    // 0x54eaec: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x54eaecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_54eaf0:
    // 0x54eaf0: 0x7102a  slt         $v0, $zero, $a3
    ctx->pc = 0x54eaf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_54eaf4:
    // 0x54eaf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x54eaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_54eaf8:
    // 0x54eaf8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_54eafc:
    if (ctx->pc == 0x54EAFCu) {
        ctx->pc = 0x54EAFCu;
            // 0x54eafc: 0x2a6a823  subu        $s5, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->pc = 0x54EB00u;
        goto label_54eb00;
    }
    ctx->pc = 0x54EAF8u;
    {
        const bool branch_taken_0x54eaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x54EAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EAF8u;
            // 0x54eafc: 0x2a6a823  subu        $s5, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54eaf8) {
            ctx->pc = 0x54EBB8u;
            goto label_54ebb8;
        }
    }
    ctx->pc = 0x54EB00u;
label_54eb00:
    // 0x54eb00: 0x24e20022  addiu       $v0, $a3, 0x22
    ctx->pc = 0x54eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 34));
label_54eb04:
    // 0x54eb04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x54eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_54eb08:
    // 0x54eb08: 0x2e29021  addu        $s2, $s7, $v0
    ctx->pc = 0x54eb08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_54eb0c:
    // 0x54eb0c: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x54eb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_54eb10:
    // 0x54eb10: 0xc6540008  lwc1        $f20, 0x8($s2)
    ctx->pc = 0x54eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54eb14:
    // 0x54eb14: 0xc049514  jal         func_125450
label_54eb18:
    if (ctx->pc == 0x54EB18u) {
        ctx->pc = 0x54EB18u;
            // 0x54eb18: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x54EB1Cu;
        goto label_54eb1c;
    }
    ctx->pc = 0x54EB14u;
    SET_GPR_U32(ctx, 31, 0x54EB1Cu);
    ctx->pc = 0x54EB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54EB14u;
            // 0x54eb18: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EB1Cu; }
        if (ctx->pc != 0x54EB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EB1Cu; }
        if (ctx->pc != 0x54EB1Cu) { return; }
    }
    ctx->pc = 0x54EB1Cu;
label_54eb1c:
    // 0x54eb1c: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x54eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
label_54eb20:
    // 0x54eb20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x54eb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54eb24:
    // 0x54eb24: 0xc04963e  jal         func_1258F8
label_54eb28:
    if (ctx->pc == 0x54EB28u) {
        ctx->pc = 0x54EB28u;
            // 0x54eb28: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x54EB2Cu;
        goto label_54eb2c;
    }
    ctx->pc = 0x54EB24u;
    SET_GPR_U32(ctx, 31, 0x54EB2Cu);
    ctx->pc = 0x54EB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54EB24u;
            // 0x54eb28: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EB2Cu; }
        if (ctx->pc != 0x54EB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EB2Cu; }
        if (ctx->pc != 0x54EB2Cu) { return; }
    }
    ctx->pc = 0x54EB2Cu;
label_54eb2c:
    // 0x54eb2c: 0xc0497dc  jal         func_125F70
label_54eb30:
    if (ctx->pc == 0x54EB30u) {
        ctx->pc = 0x54EB30u;
            // 0x54eb30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54EB34u;
        goto label_54eb34;
    }
    ctx->pc = 0x54EB2Cu;
    SET_GPR_U32(ctx, 31, 0x54EB34u);
    ctx->pc = 0x54EB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54EB2Cu;
            // 0x54eb30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EB34u; }
        if (ctx->pc != 0x54EB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EB34u; }
        if (ctx->pc != 0x54EB34u) { return; }
    }
    ctx->pc = 0x54EB34u;
label_54eb34:
    // 0x54eb34: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54eb38:
    if (ctx->pc == 0x54EB38u) {
        ctx->pc = 0x54EB38u;
            // 0x54eb38: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54EB3Cu;
        goto label_54eb3c;
    }
    ctx->pc = 0x54EB34u;
    {
        const bool branch_taken_0x54eb34 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54eb34) {
            ctx->pc = 0x54EB38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54EB34u;
            // 0x54eb38: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54EB48u;
            goto label_54eb48;
        }
    }
    ctx->pc = 0x54EB3Cu;
label_54eb3c:
    // 0x54eb3c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x54eb3cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54eb40:
    // 0x54eb40: 0x10000007  b           . + 4 + (0x7 << 2)
label_54eb44:
    if (ctx->pc == 0x54EB44u) {
        ctx->pc = 0x54EB44u;
            // 0x54eb44: 0x46800c20  cvt.s.w     $f16, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54EB48u;
        goto label_54eb48;
    }
    ctx->pc = 0x54EB40u;
    {
        const bool branch_taken_0x54eb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54EB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EB40u;
            // 0x54eb44: 0x46800c20  cvt.s.w     $f16, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54eb40) {
            ctx->pc = 0x54EB60u;
            goto label_54eb60;
        }
    }
    ctx->pc = 0x54EB48u;
label_54eb48:
    // 0x54eb48: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54eb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54eb4c:
    // 0x54eb4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54eb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54eb50:
    // 0x54eb50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x54eb50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54eb54:
    // 0x54eb54: 0x0  nop
    ctx->pc = 0x54eb54u;
    // NOP
label_54eb58:
    // 0x54eb58: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x54eb58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54eb5c:
    // 0x54eb5c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54eb5cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54eb60:
    // 0x54eb60: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54eb64:
    if (ctx->pc == 0x54EB64u) {
        ctx->pc = 0x54EB64u;
            // 0x54eb64: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54EB68u;
        goto label_54eb68;
    }
    ctx->pc = 0x54EB60u;
    {
        const bool branch_taken_0x54eb60 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54eb60) {
            ctx->pc = 0x54EB64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54EB60u;
            // 0x54eb64: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54EB74u;
            goto label_54eb74;
        }
    }
    ctx->pc = 0x54EB68u;
label_54eb68:
    // 0x54eb68: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x54eb68u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54eb6c:
    // 0x54eb6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_54eb70:
    if (ctx->pc == 0x54EB70u) {
        ctx->pc = 0x54EB70u;
            // 0x54eb70: 0x46800c60  cvt.s.w     $f17, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54EB74u;
        goto label_54eb74;
    }
    ctx->pc = 0x54EB6Cu;
    {
        const bool branch_taken_0x54eb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54EB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EB6Cu;
            // 0x54eb70: 0x46800c60  cvt.s.w     $f17, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54eb6c) {
            ctx->pc = 0x54EB8Cu;
            goto label_54eb8c;
        }
    }
    ctx->pc = 0x54EB74u;
label_54eb74:
    // 0x54eb74: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54eb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54eb78:
    // 0x54eb78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54eb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54eb7c:
    // 0x54eb7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x54eb7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54eb80:
    // 0x54eb80: 0x0  nop
    ctx->pc = 0x54eb80u;
    // NOP
label_54eb84:
    // 0x54eb84: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x54eb84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54eb88:
    // 0x54eb88: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54eb88u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54eb8c:
    // 0x54eb8c: 0x4614b380  add.s       $f14, $f22, $f20
    ctx->pc = 0x54eb8cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_54eb90:
    // 0x54eb90: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54eb94:
    // 0x54eb94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x54eb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54eb98:
    // 0x54eb98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54eb9c:
    // 0x54eb9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54eb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54eba0:
    // 0x54eba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54eba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54eba4:
    // 0x54eba4: 0x4600ab41  sub.s       $f13, $f21, $f0
    ctx->pc = 0x54eba4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_54eba8:
    // 0x54eba8: 0x4600abc0  add.s       $f15, $f21, $f0
    ctx->pc = 0x54eba8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_54ebac:
    // 0x54ebac: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54ebacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54ebb0:
    // 0x54ebb0: 0xc0bc284  jal         func_2F0A10
label_54ebb4:
    if (ctx->pc == 0x54EBB4u) {
        ctx->pc = 0x54EBB4u;
            // 0x54ebb4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x54EBB8u;
        goto label_54ebb8;
    }
    ctx->pc = 0x54EBB0u;
    SET_GPR_U32(ctx, 31, 0x54EBB8u);
    ctx->pc = 0x54EBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54EBB0u;
            // 0x54ebb4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EBB8u; }
        if (ctx->pc != 0x54EBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54EBB8u; }
        if (ctx->pc != 0x54EBB8u) { return; }
    }
    ctx->pc = 0x54EBB8u;
label_54ebb8:
    // 0x54ebb8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x54ebb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_54ebbc:
    // 0x54ebbc: 0x4617b580  add.s       $f22, $f22, $f23
    ctx->pc = 0x54ebbcu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
label_54ebc0:
    // 0x54ebc0: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x54ebc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_54ebc4:
    // 0x54ebc4: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
label_54ebc8:
    if (ctx->pc == 0x54EBC8u) {
        ctx->pc = 0x54EBC8u;
            // 0x54ebc8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x54EBCCu;
        goto label_54ebcc;
    }
    ctx->pc = 0x54EBC4u;
    {
        const bool branch_taken_0x54ebc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x54EBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EBC4u;
            // 0x54ebc8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54ebc4) {
            ctx->pc = 0x54EAD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_54ead0;
        }
    }
    ctx->pc = 0x54EBCCu;
label_54ebcc:
    // 0x54ebcc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54ebd0:
    // 0x54ebd0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54ebd4:
    // 0x54ebd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54ebd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54ebd8:
    // 0x54ebd8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54ebd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54ebdc:
    // 0x54ebdc: 0x320f809  jalr        $t9
label_54ebe0:
    if (ctx->pc == 0x54EBE0u) {
        ctx->pc = 0x54EBE4u;
        goto label_54ebe4;
    }
    ctx->pc = 0x54EBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54EBE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54EBE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54EBE4u; }
            if (ctx->pc != 0x54EBE4u) { return; }
        }
        }
    }
    ctx->pc = 0x54EBE4u;
label_54ebe4:
    // 0x54ebe4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x54ebe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_54ebe8:
    // 0x54ebe8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x54ebe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_54ebec:
    // 0x54ebec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x54ebecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_54ebf0:
    // 0x54ebf0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x54ebf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54ebf4:
    // 0x54ebf4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x54ebf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_54ebf8:
    // 0x54ebf8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x54ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54ebfc:
    // 0x54ebfc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x54ebfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_54ec00:
    // 0x54ec00: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x54ec00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54ec04:
    // 0x54ec04: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x54ec04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_54ec08:
    // 0x54ec08: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x54ec08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_54ec0c:
    // 0x54ec0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x54ec0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54ec10:
    // 0x54ec10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x54ec10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54ec14:
    // 0x54ec14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x54ec14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_54ec18:
    // 0x54ec18: 0x3e00008  jr          $ra
label_54ec1c:
    if (ctx->pc == 0x54EC1Cu) {
        ctx->pc = 0x54EC1Cu;
            // 0x54ec1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x54EC20u;
        goto label_fallthrough_0x54ec18;
    }
    ctx->pc = 0x54EC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54EC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54EC18u;
            // 0x54ec1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x54ec18:
    ctx->pc = 0x54EC20u;
}
