#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00546730
// Address: 0x546730 - 0x546ab0
void sub_00546730_0x546730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00546730_0x546730");
#endif

    switch (ctx->pc) {
        case 0x546730u: goto label_546730;
        case 0x546734u: goto label_546734;
        case 0x546738u: goto label_546738;
        case 0x54673cu: goto label_54673c;
        case 0x546740u: goto label_546740;
        case 0x546744u: goto label_546744;
        case 0x546748u: goto label_546748;
        case 0x54674cu: goto label_54674c;
        case 0x546750u: goto label_546750;
        case 0x546754u: goto label_546754;
        case 0x546758u: goto label_546758;
        case 0x54675cu: goto label_54675c;
        case 0x546760u: goto label_546760;
        case 0x546764u: goto label_546764;
        case 0x546768u: goto label_546768;
        case 0x54676cu: goto label_54676c;
        case 0x546770u: goto label_546770;
        case 0x546774u: goto label_546774;
        case 0x546778u: goto label_546778;
        case 0x54677cu: goto label_54677c;
        case 0x546780u: goto label_546780;
        case 0x546784u: goto label_546784;
        case 0x546788u: goto label_546788;
        case 0x54678cu: goto label_54678c;
        case 0x546790u: goto label_546790;
        case 0x546794u: goto label_546794;
        case 0x546798u: goto label_546798;
        case 0x54679cu: goto label_54679c;
        case 0x5467a0u: goto label_5467a0;
        case 0x5467a4u: goto label_5467a4;
        case 0x5467a8u: goto label_5467a8;
        case 0x5467acu: goto label_5467ac;
        case 0x5467b0u: goto label_5467b0;
        case 0x5467b4u: goto label_5467b4;
        case 0x5467b8u: goto label_5467b8;
        case 0x5467bcu: goto label_5467bc;
        case 0x5467c0u: goto label_5467c0;
        case 0x5467c4u: goto label_5467c4;
        case 0x5467c8u: goto label_5467c8;
        case 0x5467ccu: goto label_5467cc;
        case 0x5467d0u: goto label_5467d0;
        case 0x5467d4u: goto label_5467d4;
        case 0x5467d8u: goto label_5467d8;
        case 0x5467dcu: goto label_5467dc;
        case 0x5467e0u: goto label_5467e0;
        case 0x5467e4u: goto label_5467e4;
        case 0x5467e8u: goto label_5467e8;
        case 0x5467ecu: goto label_5467ec;
        case 0x5467f0u: goto label_5467f0;
        case 0x5467f4u: goto label_5467f4;
        case 0x5467f8u: goto label_5467f8;
        case 0x5467fcu: goto label_5467fc;
        case 0x546800u: goto label_546800;
        case 0x546804u: goto label_546804;
        case 0x546808u: goto label_546808;
        case 0x54680cu: goto label_54680c;
        case 0x546810u: goto label_546810;
        case 0x546814u: goto label_546814;
        case 0x546818u: goto label_546818;
        case 0x54681cu: goto label_54681c;
        case 0x546820u: goto label_546820;
        case 0x546824u: goto label_546824;
        case 0x546828u: goto label_546828;
        case 0x54682cu: goto label_54682c;
        case 0x546830u: goto label_546830;
        case 0x546834u: goto label_546834;
        case 0x546838u: goto label_546838;
        case 0x54683cu: goto label_54683c;
        case 0x546840u: goto label_546840;
        case 0x546844u: goto label_546844;
        case 0x546848u: goto label_546848;
        case 0x54684cu: goto label_54684c;
        case 0x546850u: goto label_546850;
        case 0x546854u: goto label_546854;
        case 0x546858u: goto label_546858;
        case 0x54685cu: goto label_54685c;
        case 0x546860u: goto label_546860;
        case 0x546864u: goto label_546864;
        case 0x546868u: goto label_546868;
        case 0x54686cu: goto label_54686c;
        case 0x546870u: goto label_546870;
        case 0x546874u: goto label_546874;
        case 0x546878u: goto label_546878;
        case 0x54687cu: goto label_54687c;
        case 0x546880u: goto label_546880;
        case 0x546884u: goto label_546884;
        case 0x546888u: goto label_546888;
        case 0x54688cu: goto label_54688c;
        case 0x546890u: goto label_546890;
        case 0x546894u: goto label_546894;
        case 0x546898u: goto label_546898;
        case 0x54689cu: goto label_54689c;
        case 0x5468a0u: goto label_5468a0;
        case 0x5468a4u: goto label_5468a4;
        case 0x5468a8u: goto label_5468a8;
        case 0x5468acu: goto label_5468ac;
        case 0x5468b0u: goto label_5468b0;
        case 0x5468b4u: goto label_5468b4;
        case 0x5468b8u: goto label_5468b8;
        case 0x5468bcu: goto label_5468bc;
        case 0x5468c0u: goto label_5468c0;
        case 0x5468c4u: goto label_5468c4;
        case 0x5468c8u: goto label_5468c8;
        case 0x5468ccu: goto label_5468cc;
        case 0x5468d0u: goto label_5468d0;
        case 0x5468d4u: goto label_5468d4;
        case 0x5468d8u: goto label_5468d8;
        case 0x5468dcu: goto label_5468dc;
        case 0x5468e0u: goto label_5468e0;
        case 0x5468e4u: goto label_5468e4;
        case 0x5468e8u: goto label_5468e8;
        case 0x5468ecu: goto label_5468ec;
        case 0x5468f0u: goto label_5468f0;
        case 0x5468f4u: goto label_5468f4;
        case 0x5468f8u: goto label_5468f8;
        case 0x5468fcu: goto label_5468fc;
        case 0x546900u: goto label_546900;
        case 0x546904u: goto label_546904;
        case 0x546908u: goto label_546908;
        case 0x54690cu: goto label_54690c;
        case 0x546910u: goto label_546910;
        case 0x546914u: goto label_546914;
        case 0x546918u: goto label_546918;
        case 0x54691cu: goto label_54691c;
        case 0x546920u: goto label_546920;
        case 0x546924u: goto label_546924;
        case 0x546928u: goto label_546928;
        case 0x54692cu: goto label_54692c;
        case 0x546930u: goto label_546930;
        case 0x546934u: goto label_546934;
        case 0x546938u: goto label_546938;
        case 0x54693cu: goto label_54693c;
        case 0x546940u: goto label_546940;
        case 0x546944u: goto label_546944;
        case 0x546948u: goto label_546948;
        case 0x54694cu: goto label_54694c;
        case 0x546950u: goto label_546950;
        case 0x546954u: goto label_546954;
        case 0x546958u: goto label_546958;
        case 0x54695cu: goto label_54695c;
        case 0x546960u: goto label_546960;
        case 0x546964u: goto label_546964;
        case 0x546968u: goto label_546968;
        case 0x54696cu: goto label_54696c;
        case 0x546970u: goto label_546970;
        case 0x546974u: goto label_546974;
        case 0x546978u: goto label_546978;
        case 0x54697cu: goto label_54697c;
        case 0x546980u: goto label_546980;
        case 0x546984u: goto label_546984;
        case 0x546988u: goto label_546988;
        case 0x54698cu: goto label_54698c;
        case 0x546990u: goto label_546990;
        case 0x546994u: goto label_546994;
        case 0x546998u: goto label_546998;
        case 0x54699cu: goto label_54699c;
        case 0x5469a0u: goto label_5469a0;
        case 0x5469a4u: goto label_5469a4;
        case 0x5469a8u: goto label_5469a8;
        case 0x5469acu: goto label_5469ac;
        case 0x5469b0u: goto label_5469b0;
        case 0x5469b4u: goto label_5469b4;
        case 0x5469b8u: goto label_5469b8;
        case 0x5469bcu: goto label_5469bc;
        case 0x5469c0u: goto label_5469c0;
        case 0x5469c4u: goto label_5469c4;
        case 0x5469c8u: goto label_5469c8;
        case 0x5469ccu: goto label_5469cc;
        case 0x5469d0u: goto label_5469d0;
        case 0x5469d4u: goto label_5469d4;
        case 0x5469d8u: goto label_5469d8;
        case 0x5469dcu: goto label_5469dc;
        case 0x5469e0u: goto label_5469e0;
        case 0x5469e4u: goto label_5469e4;
        case 0x5469e8u: goto label_5469e8;
        case 0x5469ecu: goto label_5469ec;
        case 0x5469f0u: goto label_5469f0;
        case 0x5469f4u: goto label_5469f4;
        case 0x5469f8u: goto label_5469f8;
        case 0x5469fcu: goto label_5469fc;
        case 0x546a00u: goto label_546a00;
        case 0x546a04u: goto label_546a04;
        case 0x546a08u: goto label_546a08;
        case 0x546a0cu: goto label_546a0c;
        case 0x546a10u: goto label_546a10;
        case 0x546a14u: goto label_546a14;
        case 0x546a18u: goto label_546a18;
        case 0x546a1cu: goto label_546a1c;
        case 0x546a20u: goto label_546a20;
        case 0x546a24u: goto label_546a24;
        case 0x546a28u: goto label_546a28;
        case 0x546a2cu: goto label_546a2c;
        case 0x546a30u: goto label_546a30;
        case 0x546a34u: goto label_546a34;
        case 0x546a38u: goto label_546a38;
        case 0x546a3cu: goto label_546a3c;
        case 0x546a40u: goto label_546a40;
        case 0x546a44u: goto label_546a44;
        case 0x546a48u: goto label_546a48;
        case 0x546a4cu: goto label_546a4c;
        case 0x546a50u: goto label_546a50;
        case 0x546a54u: goto label_546a54;
        case 0x546a58u: goto label_546a58;
        case 0x546a5cu: goto label_546a5c;
        case 0x546a60u: goto label_546a60;
        case 0x546a64u: goto label_546a64;
        case 0x546a68u: goto label_546a68;
        case 0x546a6cu: goto label_546a6c;
        case 0x546a70u: goto label_546a70;
        case 0x546a74u: goto label_546a74;
        case 0x546a78u: goto label_546a78;
        case 0x546a7cu: goto label_546a7c;
        case 0x546a80u: goto label_546a80;
        case 0x546a84u: goto label_546a84;
        case 0x546a88u: goto label_546a88;
        case 0x546a8cu: goto label_546a8c;
        case 0x546a90u: goto label_546a90;
        case 0x546a94u: goto label_546a94;
        case 0x546a98u: goto label_546a98;
        case 0x546a9cu: goto label_546a9c;
        case 0x546aa0u: goto label_546aa0;
        case 0x546aa4u: goto label_546aa4;
        case 0x546aa8u: goto label_546aa8;
        case 0x546aacu: goto label_546aac;
        default: break;
    }

    ctx->pc = 0x546730u;

label_546730:
    // 0x546730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x546730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_546734:
    // 0x546734: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x546734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_546738:
    // 0x546738: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x546738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_54673c:
    // 0x54673c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54673cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_546740:
    // 0x546740: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x546740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_546744:
    // 0x546744: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x546744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_546748:
    // 0x546748: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x546748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_54674c:
    // 0x54674c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x54674cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_546750:
    // 0x546750: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x546750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_546754:
    // 0x546754: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x546754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_546758:
    // 0x546758: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x546758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_54675c:
    // 0x54675c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x54675cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_546760:
    // 0x546760: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x546760u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_546764:
    // 0x546764: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x546764u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_546768:
    // 0x546768: 0xc4810074  lwc1        $f1, 0x74($a0)
    ctx->pc = 0x546768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54676c:
    // 0x54676c: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x54676cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_546770:
    // 0x546770: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x546770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_546774:
    // 0x546774: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_546778:
    if (ctx->pc == 0x546778u) {
        ctx->pc = 0x546778u;
            // 0x546778: 0x2610dd20  addiu       $s0, $s0, -0x22E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958368));
        ctx->pc = 0x54677Cu;
        goto label_54677c;
    }
    ctx->pc = 0x546774u;
    {
        const bool branch_taken_0x546774 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x546778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546774u;
            // 0x546778: 0x2610dd20  addiu       $s0, $s0, -0x22E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546774) {
            ctx->pc = 0x54678Cu;
            goto label_54678c;
        }
    }
    ctx->pc = 0x54677Cu;
label_54677c:
    // 0x54677c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x54677cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_546780:
    // 0x546780: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x546780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_546784:
    // 0x546784: 0x10000008  b           . + 4 + (0x8 << 2)
label_546788:
    if (ctx->pc == 0x546788u) {
        ctx->pc = 0x546788u;
            // 0x546788: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x54678Cu;
        goto label_54678c;
    }
    ctx->pc = 0x546784u;
    {
        const bool branch_taken_0x546784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x546788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546784u;
            // 0x546788: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x546784) {
            ctx->pc = 0x5467A8u;
            goto label_5467a8;
        }
    }
    ctx->pc = 0x54678Cu;
label_54678c:
    // 0x54678c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x54678cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_546790:
    // 0x546790: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x546790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_546794:
    // 0x546794: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x546794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_546798:
    // 0x546798: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x546798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_54679c:
    // 0x54679c: 0x0  nop
    ctx->pc = 0x54679cu;
    // NOP
label_5467a0:
    // 0x5467a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5467a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5467a4:
    // 0x5467a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x5467a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_5467a8:
    // 0x5467a8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x5467a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_5467ac:
    // 0x5467ac: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x5467acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5467b0:
    // 0x5467b0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5467b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5467b4:
    // 0x5467b4: 0x8c44aad0  lw          $a0, -0x5530($v0)
    ctx->pc = 0x5467b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945488)));
label_5467b8:
    // 0x5467b8: 0xc0506ac  jal         func_141AB0
label_5467bc:
    if (ctx->pc == 0x5467BCu) {
        ctx->pc = 0x5467BCu;
            // 0x5467bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5467C0u;
        goto label_5467c0;
    }
    ctx->pc = 0x5467B8u;
    SET_GPR_U32(ctx, 31, 0x5467C0u);
    ctx->pc = 0x5467BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5467B8u;
            // 0x5467bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5467C0u; }
        if (ctx->pc != 0x5467C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5467C0u; }
        if (ctx->pc != 0x5467C0u) { return; }
    }
    ctx->pc = 0x5467C0u;
label_5467c0:
    // 0x5467c0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5467c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5467c4:
    // 0x5467c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5467c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5467c8:
    // 0x5467c8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5467c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5467cc:
    // 0x5467cc: 0x320f809  jalr        $t9
label_5467d0:
    if (ctx->pc == 0x5467D0u) {
        ctx->pc = 0x5467D0u;
            // 0x5467d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5467D4u;
        goto label_5467d4;
    }
    ctx->pc = 0x5467CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5467D4u);
        ctx->pc = 0x5467D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5467CCu;
            // 0x5467d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5467D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5467D4u; }
            if (ctx->pc != 0x5467D4u) { return; }
        }
        }
    }
    ctx->pc = 0x5467D4u;
label_5467d4:
    // 0x5467d4: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x5467d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_5467d8:
    // 0x5467d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x5467d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_5467dc:
    // 0x5467dc: 0x2673ddb0  addiu       $s3, $s3, -0x2250
    ctx->pc = 0x5467dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958512));
label_5467e0:
    // 0x5467e0: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x5467e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_5467e4:
    // 0x5467e4: 0xc6830084  lwc1        $f3, 0x84($s4)
    ctx->pc = 0x5467e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5467e8:
    // 0x5467e8: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x5467e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5467ec:
    // 0x5467ec: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x5467ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5467f0:
    // 0x5467f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5467f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5467f4:
    // 0x5467f4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x5467f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_5467f8:
    // 0x5467f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x5467f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5467fc:
    // 0x5467fc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x5467fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_546800:
    // 0x546800: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x546800u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_546804:
    // 0x546804: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_546808:
    if (ctx->pc == 0x546808u) {
        ctx->pc = 0x546808u;
            // 0x546808: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x54680Cu;
        goto label_54680c;
    }
    ctx->pc = 0x546804u;
    {
        const bool branch_taken_0x546804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x546808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546804u;
            // 0x546808: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x546804) {
            ctx->pc = 0x546814u;
            goto label_546814;
        }
    }
    ctx->pc = 0x54680Cu;
label_54680c:
    // 0x54680c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_546810:
    if (ctx->pc == 0x546810u) {
        ctx->pc = 0x546810u;
            // 0x546810: 0xc6800070  lwc1        $f0, 0x70($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x546814u;
        goto label_546814;
    }
    ctx->pc = 0x54680Cu;
    {
        const bool branch_taken_0x54680c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x546810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54680Cu;
            // 0x546810: 0xc6800070  lwc1        $f0, 0x70($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54680c) {
            ctx->pc = 0x54687Cu;
            goto label_54687c;
        }
    }
    ctx->pc = 0x546814u;
label_546814:
    // 0x546814: 0xc6800070  lwc1        $f0, 0x70($s4)
    ctx->pc = 0x546814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_546818:
    // 0x546818: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x546818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54681c:
    // 0x54681c: 0xc682006c  lwc1        $f2, 0x6C($s4)
    ctx->pc = 0x54681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_546820:
    // 0x546820: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x546820u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_546824:
    // 0x546824: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x546824u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_546828:
    // 0x546828: 0xc6830080  lwc1        $f3, 0x80($s4)
    ctx->pc = 0x546828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_54682c:
    // 0x54682c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x54682cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_546830:
    // 0x546830: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x546830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_546834:
    // 0x546834: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x546834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_546838:
    // 0x546838: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x546838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54683c:
    // 0x54683c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54683cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_546840:
    // 0x546840: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x546840u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_546844:
    // 0x546844: 0x0  nop
    ctx->pc = 0x546844u;
    // NOP
label_546848:
    // 0x546848: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x546848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54684c:
    // 0x54684c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54684cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_546850:
    // 0x546850: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x546850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_546854:
    // 0x546854: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x546854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_546858:
    // 0x546858: 0x46151001  sub.s       $f0, $f2, $f21
    ctx->pc = 0x546858u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
label_54685c:
    // 0x54685c: 0x46030301  sub.s       $f12, $f0, $f3
    ctx->pc = 0x54685cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_546860:
    // 0x546860: 0x46151000  add.s       $f0, $f2, $f21
    ctx->pc = 0x546860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
label_546864:
    // 0x546864: 0x46030381  sub.s       $f14, $f0, $f3
    ctx->pc = 0x546864u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_546868:
    // 0x546868: 0x46140b41  sub.s       $f13, $f1, $f20
    ctx->pc = 0x546868u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_54686c:
    // 0x54686c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54686cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_546870:
    // 0x546870: 0xc0bc284  jal         func_2F0A10
label_546874:
    if (ctx->pc == 0x546874u) {
        ctx->pc = 0x546874u;
            // 0x546874: 0x46140bc0  add.s       $f15, $f1, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->pc = 0x546878u;
        goto label_546878;
    }
    ctx->pc = 0x546870u;
    SET_GPR_U32(ctx, 31, 0x546878u);
    ctx->pc = 0x546874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546870u;
            // 0x546874: 0x46140bc0  add.s       $f15, $f1, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546878u; }
        if (ctx->pc != 0x546878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546878u; }
        if (ctx->pc != 0x546878u) { return; }
    }
    ctx->pc = 0x546878u;
label_546878:
    // 0x546878: 0xc6800070  lwc1        $f0, 0x70($s4)
    ctx->pc = 0x546878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54687c:
    // 0x54687c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_546880:
    // 0x546880: 0xc682006c  lwc1        $f2, 0x6C($s4)
    ctx->pc = 0x546880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_546884:
    // 0x546884: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x546884u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_546888:
    // 0x546888: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x546888u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_54688c:
    // 0x54688c: 0xc6840080  lwc1        $f4, 0x80($s4)
    ctx->pc = 0x54688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_546890:
    // 0x546890: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x546890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_546894:
    // 0x546894: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x546894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_546898:
    // 0x546898: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x546898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54689c:
    // 0x54689c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54689cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5468a0:
    // 0x5468a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5468a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5468a4:
    // 0x5468a4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x5468a4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5468a8:
    // 0x5468a8: 0x0  nop
    ctx->pc = 0x5468a8u;
    // NOP
label_5468ac:
    // 0x5468ac: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5468acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5468b0:
    // 0x5468b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5468b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5468b4:
    // 0x5468b4: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x5468b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_5468b8:
    // 0x5468b8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5468b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5468bc:
    // 0x5468bc: 0x46151881  sub.s       $f2, $f3, $f21
    ctx->pc = 0x5468bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[21]);
label_5468c0:
    // 0x5468c0: 0x46151800  add.s       $f0, $f3, $f21
    ctx->pc = 0x5468c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_5468c4:
    // 0x5468c4: 0x46022300  add.s       $f12, $f4, $f2
    ctx->pc = 0x5468c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_5468c8:
    // 0x5468c8: 0x46002380  add.s       $f14, $f4, $f0
    ctx->pc = 0x5468c8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_5468cc:
    // 0x5468cc: 0x46140b41  sub.s       $f13, $f1, $f20
    ctx->pc = 0x5468ccu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_5468d0:
    // 0x5468d0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5468d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5468d4:
    // 0x5468d4: 0xc0bc284  jal         func_2F0A10
label_5468d8:
    if (ctx->pc == 0x5468D8u) {
        ctx->pc = 0x5468D8u;
            // 0x5468d8: 0x46140bc0  add.s       $f15, $f1, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->pc = 0x5468DCu;
        goto label_5468dc;
    }
    ctx->pc = 0x5468D4u;
    SET_GPR_U32(ctx, 31, 0x5468DCu);
    ctx->pc = 0x5468D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5468D4u;
            // 0x5468d8: 0x46140bc0  add.s       $f15, $f1, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5468DCu; }
        if (ctx->pc != 0x5468DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5468DCu; }
        if (ctx->pc != 0x5468DCu) { return; }
    }
    ctx->pc = 0x5468DCu;
label_5468dc:
    // 0x5468dc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5468dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5468e0:
    // 0x5468e0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5468e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5468e4:
    // 0x5468e4: 0x320f809  jalr        $t9
label_5468e8:
    if (ctx->pc == 0x5468E8u) {
        ctx->pc = 0x5468E8u;
            // 0x5468e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5468ECu;
        goto label_5468ec;
    }
    ctx->pc = 0x5468E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5468ECu);
        ctx->pc = 0x5468E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5468E4u;
            // 0x5468e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5468ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5468ECu; }
            if (ctx->pc != 0x5468ECu) { return; }
        }
        }
    }
    ctx->pc = 0x5468ECu;
label_5468ec:
    // 0x5468ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x5468ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_5468f0:
    // 0x5468f0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x5468f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_5468f4:
    // 0x5468f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x5468f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5468f8:
    // 0x5468f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5468f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5468fc:
    // 0x5468fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5468fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_546900:
    // 0x546900: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x546900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_546904:
    // 0x546904: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x546904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_546908:
    // 0x546908: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x546908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_54690c:
    // 0x54690c: 0x3e00008  jr          $ra
label_546910:
    if (ctx->pc == 0x546910u) {
        ctx->pc = 0x546910u;
            // 0x546910: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x546914u;
        goto label_546914;
    }
    ctx->pc = 0x54690Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x546910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54690Cu;
            // 0x546910: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x546914u;
label_546914:
    // 0x546914: 0x0  nop
    ctx->pc = 0x546914u;
    // NOP
label_546918:
    // 0x546918: 0x0  nop
    ctx->pc = 0x546918u;
    // NOP
label_54691c:
    // 0x54691c: 0x0  nop
    ctx->pc = 0x54691cu;
    // NOP
label_546920:
    // 0x546920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x546920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_546924:
    // 0x546924: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x546924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_546928:
    // 0x546928: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x546928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_54692c:
    // 0x54692c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x54692cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_546930:
    // 0x546930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x546930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_546934:
    // 0x546934: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x546934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_546938:
    // 0x546938: 0x9063007d  lbu         $v1, 0x7D($v1)
    ctx->pc = 0x546938u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 125)));
label_54693c:
    // 0x54693c: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
label_546940:
    if (ctx->pc == 0x546940u) {
        ctx->pc = 0x546940u;
            // 0x546940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546944u;
        goto label_546944;
    }
    ctx->pc = 0x54693Cu;
    {
        const bool branch_taken_0x54693c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x546940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54693Cu;
            // 0x546940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54693c) {
            ctx->pc = 0x546A90u;
            goto label_546a90;
        }
    }
    ctx->pc = 0x546944u;
label_546944:
    // 0x546944: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x546944u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_546948:
    // 0x546948: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x546948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54694c:
    // 0x54694c: 0x54670051  bnel        $v1, $a3, . + 4 + (0x51 << 2)
label_546950:
    if (ctx->pc == 0x546950u) {
        ctx->pc = 0x546950u;
            // 0x546950: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x546954u;
        goto label_546954;
    }
    ctx->pc = 0x54694Cu;
    {
        const bool branch_taken_0x54694c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x54694c) {
            ctx->pc = 0x546950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54694Cu;
            // 0x546950: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546A94u;
            goto label_546a94;
        }
    }
    ctx->pc = 0x546954u;
label_546954:
    // 0x546954: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x546954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_546958:
    // 0x546958: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x546958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54695c:
    // 0x54695c: 0x10660009  beq         $v1, $a2, . + 4 + (0x9 << 2)
label_546960:
    if (ctx->pc == 0x546960u) {
        ctx->pc = 0x546964u;
        goto label_546964;
    }
    ctx->pc = 0x54695Cu;
    {
        const bool branch_taken_0x54695c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x54695c) {
            ctx->pc = 0x546984u;
            goto label_546984;
        }
    }
    ctx->pc = 0x546964u;
label_546964:
    // 0x546964: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_546968:
    if (ctx->pc == 0x546968u) {
        ctx->pc = 0x54696Cu;
        goto label_54696c;
    }
    ctx->pc = 0x546964u;
    {
        const bool branch_taken_0x546964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x546964) {
            ctx->pc = 0x546974u;
            goto label_546974;
        }
    }
    ctx->pc = 0x54696Cu;
label_54696c:
    // 0x54696c: 0x10000048  b           . + 4 + (0x48 << 2)
label_546970:
    if (ctx->pc == 0x546970u) {
        ctx->pc = 0x546974u;
        goto label_546974;
    }
    ctx->pc = 0x54696Cu;
    {
        const bool branch_taken_0x54696c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54696c) {
            ctx->pc = 0x546A90u;
            goto label_546a90;
        }
    }
    ctx->pc = 0x546974u;
label_546974:
    // 0x546974: 0xc1519cc  jal         func_546730
label_546978:
    if (ctx->pc == 0x546978u) {
        ctx->pc = 0x54697Cu;
        goto label_54697c;
    }
    ctx->pc = 0x546974u;
    SET_GPR_U32(ctx, 31, 0x54697Cu);
    ctx->pc = 0x546730u;
    goto label_546730;
    ctx->pc = 0x54697Cu;
label_54697c:
    // 0x54697c: 0x10000044  b           . + 4 + (0x44 << 2)
label_546980:
    if (ctx->pc == 0x546980u) {
        ctx->pc = 0x546984u;
        goto label_546984;
    }
    ctx->pc = 0x54697Cu;
    {
        const bool branch_taken_0x54697c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54697c) {
            ctx->pc = 0x546A90u;
            goto label_546a90;
        }
    }
    ctx->pc = 0x546984u;
label_546984:
    // 0x546984: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x546984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_546988:
    // 0x546988: 0x8c640eac  lw          $a0, 0xEAC($v1)
    ctx->pc = 0x546988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
label_54698c:
    // 0x54698c: 0x8c840110  lw          $a0, 0x110($a0)
    ctx->pc = 0x54698cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
label_546990:
    // 0x546990: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x546990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_546994:
    // 0x546994: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_546998:
    if (ctx->pc == 0x546998u) {
        ctx->pc = 0x546998u;
            // 0x546998: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x54699Cu;
        goto label_54699c;
    }
    ctx->pc = 0x546994u;
    {
        const bool branch_taken_0x546994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x546998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546994u;
            // 0x546998: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546994) {
            ctx->pc = 0x5469FCu;
            goto label_5469fc;
        }
    }
    ctx->pc = 0x54699Cu;
label_54699c:
    // 0x54699c: 0x50870018  beql        $a0, $a3, . + 4 + (0x18 << 2)
label_5469a0:
    if (ctx->pc == 0x5469A0u) {
        ctx->pc = 0x5469A0u;
            // 0x5469a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5469A4u;
        goto label_5469a4;
    }
    ctx->pc = 0x54699Cu;
    {
        const bool branch_taken_0x54699c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x54699c) {
            ctx->pc = 0x5469A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54699Cu;
            // 0x5469a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546A00u;
            goto label_546a00;
        }
    }
    ctx->pc = 0x5469A4u;
label_5469a4:
    // 0x5469a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5469a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5469a8:
    // 0x5469a8: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_5469ac:
    if (ctx->pc == 0x5469ACu) {
        ctx->pc = 0x5469ACu;
            // 0x5469ac: 0xc600006c  lwc1        $f0, 0x6C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x5469B0u;
        goto label_5469b0;
    }
    ctx->pc = 0x5469A8u;
    {
        const bool branch_taken_0x5469a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5469a8) {
            ctx->pc = 0x5469ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5469A8u;
            // 0x5469ac: 0xc600006c  lwc1        $f0, 0x6C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5469C4u;
            goto label_5469c4;
        }
    }
    ctx->pc = 0x5469B0u;
label_5469b0:
    // 0x5469b0: 0x10860003  beq         $a0, $a2, . + 4 + (0x3 << 2)
label_5469b4:
    if (ctx->pc == 0x5469B4u) {
        ctx->pc = 0x5469B8u;
        goto label_5469b8;
    }
    ctx->pc = 0x5469B0u;
    {
        const bool branch_taken_0x5469b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x5469b0) {
            ctx->pc = 0x5469C0u;
            goto label_5469c0;
        }
    }
    ctx->pc = 0x5469B8u;
label_5469b8:
    // 0x5469b8: 0x10000035  b           . + 4 + (0x35 << 2)
label_5469bc:
    if (ctx->pc == 0x5469BCu) {
        ctx->pc = 0x5469C0u;
        goto label_5469c0;
    }
    ctx->pc = 0x5469B8u;
    {
        const bool branch_taken_0x5469b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5469b8) {
            ctx->pc = 0x546A90u;
            goto label_546a90;
        }
    }
    ctx->pc = 0x5469C0u;
label_5469c0:
    // 0x5469c0: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x5469c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5469c4:
    // 0x5469c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5469c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_5469c8:
    // 0x5469c8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x5469c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_5469cc:
    // 0x5469cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x5469ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5469d0:
    // 0x5469d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5469d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5469d4:
    // 0x5469d4: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x5469d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_5469d8:
    // 0x5469d8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x5469d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_5469dc:
    // 0x5469dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x5469dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5469e0:
    // 0x5469e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5469e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5469e4:
    // 0x5469e4: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x5469e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5469e8:
    // 0x5469e8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x5469e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_5469ec:
    // 0x5469ec: 0xc15706c  jal         func_55C1B0
label_5469f0:
    if (ctx->pc == 0x5469F0u) {
        ctx->pc = 0x5469F0u;
            // 0x5469f0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5469F4u;
        goto label_5469f4;
    }
    ctx->pc = 0x5469ECu;
    SET_GPR_U32(ctx, 31, 0x5469F4u);
    ctx->pc = 0x5469F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5469ECu;
            // 0x5469f0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5469F4u; }
        if (ctx->pc != 0x5469F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5469F4u; }
        if (ctx->pc != 0x5469F4u) { return; }
    }
    ctx->pc = 0x5469F4u;
label_5469f4:
    // 0x5469f4: 0x10000026  b           . + 4 + (0x26 << 2)
label_5469f8:
    if (ctx->pc == 0x5469F8u) {
        ctx->pc = 0x5469FCu;
        goto label_5469fc;
    }
    ctx->pc = 0x5469F4u;
    {
        const bool branch_taken_0x5469f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5469f4) {
            ctx->pc = 0x546A90u;
            goto label_546a90;
        }
    }
    ctx->pc = 0x5469FCu;
label_5469fc:
    // 0x5469fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5469fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_546a00:
    // 0x546a00: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
label_546a04:
    if (ctx->pc == 0x546A04u) {
        ctx->pc = 0x546A04u;
            // 0x546a04: 0x8e110060  lw          $s1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x546A08u;
        goto label_546a08;
    }
    ctx->pc = 0x546A00u;
    {
        const bool branch_taken_0x546a00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x546a00) {
            ctx->pc = 0x546A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546A00u;
            // 0x546a04: 0x8e110060  lw          $s1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546A18u;
            goto label_546a18;
        }
    }
    ctx->pc = 0x546A08u;
label_546a08:
    // 0x546a08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x546a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_546a0c:
    // 0x546a0c: 0x54a20014  bnel        $a1, $v0, . + 4 + (0x14 << 2)
label_546a10:
    if (ctx->pc == 0x546A10u) {
        ctx->pc = 0x546A10u;
            // 0x546a10: 0xc600006c  lwc1        $f0, 0x6C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x546A14u;
        goto label_546a14;
    }
    ctx->pc = 0x546A0Cu;
    {
        const bool branch_taken_0x546a0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x546a0c) {
            ctx->pc = 0x546A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546A0Cu;
            // 0x546a10: 0xc600006c  lwc1        $f0, 0x6C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x546A60u;
            goto label_546a60;
        }
    }
    ctx->pc = 0x546A14u;
label_546a14:
    // 0x546a14: 0x8e110060  lw          $s1, 0x60($s0)
    ctx->pc = 0x546a14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_546a18:
    // 0x546a18: 0xc157054  jal         func_55C150
label_546a1c:
    if (ctx->pc == 0x546A1Cu) {
        ctx->pc = 0x546A1Cu;
            // 0x546a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546A20u;
        goto label_546a20;
    }
    ctx->pc = 0x546A18u;
    SET_GPR_U32(ctx, 31, 0x546A20u);
    ctx->pc = 0x546A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546A18u;
            // 0x546a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546A20u; }
        if (ctx->pc != 0x546A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546A20u; }
        if (ctx->pc != 0x546A20u) { return; }
    }
    ctx->pc = 0x546A20u;
label_546a20:
    // 0x546a20: 0xc602006c  lwc1        $f2, 0x6C($s0)
    ctx->pc = 0x546a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_546a24:
    // 0x546a24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x546a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_546a28:
    // 0x546a28: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x546a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_546a2c:
    // 0x546a2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x546a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_546a30:
    // 0x546a30: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x546a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_546a34:
    // 0x546a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x546a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_546a38:
    // 0x546a38: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x546a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_546a3c:
    // 0x546a3c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x546a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_546a40:
    // 0x546a40: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x546a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_546a44:
    // 0x546a44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x546a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_546a48:
    // 0x546a48: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x546a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_546a4c:
    // 0x546a4c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x546a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_546a50:
    // 0x546a50: 0xc15706c  jal         func_55C1B0
label_546a54:
    if (ctx->pc == 0x546A54u) {
        ctx->pc = 0x546A54u;
            // 0x546a54: 0x46001301  sub.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x546A58u;
        goto label_546a58;
    }
    ctx->pc = 0x546A50u;
    SET_GPR_U32(ctx, 31, 0x546A58u);
    ctx->pc = 0x546A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546A50u;
            // 0x546a54: 0x46001301  sub.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546A58u; }
        if (ctx->pc != 0x546A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546A58u; }
        if (ctx->pc != 0x546A58u) { return; }
    }
    ctx->pc = 0x546A58u;
label_546a58:
    // 0x546a58: 0x1000000d  b           . + 4 + (0xD << 2)
label_546a5c:
    if (ctx->pc == 0x546A5Cu) {
        ctx->pc = 0x546A60u;
        goto label_546a60;
    }
    ctx->pc = 0x546A58u;
    {
        const bool branch_taken_0x546a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x546a58) {
            ctx->pc = 0x546A90u;
            goto label_546a90;
        }
    }
    ctx->pc = 0x546A60u;
label_546a60:
    // 0x546a60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x546a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_546a64:
    // 0x546a64: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x546a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_546a68:
    // 0x546a68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x546a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_546a6c:
    // 0x546a6c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x546a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_546a70:
    // 0x546a70: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x546a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_546a74:
    // 0x546a74: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x546a74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_546a78:
    // 0x546a78: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x546a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_546a7c:
    // 0x546a7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x546a7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_546a80:
    // 0x546a80: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x546a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_546a84:
    // 0x546a84: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x546a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_546a88:
    // 0x546a88: 0xc15706c  jal         func_55C1B0
label_546a8c:
    if (ctx->pc == 0x546A8Cu) {
        ctx->pc = 0x546A8Cu;
            // 0x546a8c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x546A90u;
        goto label_546a90;
    }
    ctx->pc = 0x546A88u;
    SET_GPR_U32(ctx, 31, 0x546A90u);
    ctx->pc = 0x546A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546A88u;
            // 0x546a8c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546A90u; }
        if (ctx->pc != 0x546A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546A90u; }
        if (ctx->pc != 0x546A90u) { return; }
    }
    ctx->pc = 0x546A90u;
label_546a90:
    // 0x546a90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x546a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_546a94:
    // 0x546a94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x546a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_546a98:
    // 0x546a98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x546a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_546a9c:
    // 0x546a9c: 0x3e00008  jr          $ra
label_546aa0:
    if (ctx->pc == 0x546AA0u) {
        ctx->pc = 0x546AA0u;
            // 0x546aa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x546AA4u;
        goto label_546aa4;
    }
    ctx->pc = 0x546A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x546AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546A9Cu;
            // 0x546aa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x546AA4u;
label_546aa4:
    // 0x546aa4: 0x0  nop
    ctx->pc = 0x546aa4u;
    // NOP
label_546aa8:
    // 0x546aa8: 0x0  nop
    ctx->pc = 0x546aa8u;
    // NOP
label_546aac:
    // 0x546aac: 0x0  nop
    ctx->pc = 0x546aacu;
    // NOP
}
