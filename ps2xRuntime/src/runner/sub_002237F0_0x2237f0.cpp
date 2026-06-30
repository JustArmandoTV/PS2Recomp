#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002237F0
// Address: 0x2237f0 - 0x223910
void sub_002237F0_0x2237f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002237F0_0x2237f0");
#endif

    switch (ctx->pc) {
        case 0x2237f0u: goto label_2237f0;
        case 0x2237f4u: goto label_2237f4;
        case 0x2237f8u: goto label_2237f8;
        case 0x2237fcu: goto label_2237fc;
        case 0x223800u: goto label_223800;
        case 0x223804u: goto label_223804;
        case 0x223808u: goto label_223808;
        case 0x22380cu: goto label_22380c;
        case 0x223810u: goto label_223810;
        case 0x223814u: goto label_223814;
        case 0x223818u: goto label_223818;
        case 0x22381cu: goto label_22381c;
        case 0x223820u: goto label_223820;
        case 0x223824u: goto label_223824;
        case 0x223828u: goto label_223828;
        case 0x22382cu: goto label_22382c;
        case 0x223830u: goto label_223830;
        case 0x223834u: goto label_223834;
        case 0x223838u: goto label_223838;
        case 0x22383cu: goto label_22383c;
        case 0x223840u: goto label_223840;
        case 0x223844u: goto label_223844;
        case 0x223848u: goto label_223848;
        case 0x22384cu: goto label_22384c;
        case 0x223850u: goto label_223850;
        case 0x223854u: goto label_223854;
        case 0x223858u: goto label_223858;
        case 0x22385cu: goto label_22385c;
        case 0x223860u: goto label_223860;
        case 0x223864u: goto label_223864;
        case 0x223868u: goto label_223868;
        case 0x22386cu: goto label_22386c;
        case 0x223870u: goto label_223870;
        case 0x223874u: goto label_223874;
        case 0x223878u: goto label_223878;
        case 0x22387cu: goto label_22387c;
        case 0x223880u: goto label_223880;
        case 0x223884u: goto label_223884;
        case 0x223888u: goto label_223888;
        case 0x22388cu: goto label_22388c;
        case 0x223890u: goto label_223890;
        case 0x223894u: goto label_223894;
        case 0x223898u: goto label_223898;
        case 0x22389cu: goto label_22389c;
        case 0x2238a0u: goto label_2238a0;
        case 0x2238a4u: goto label_2238a4;
        case 0x2238a8u: goto label_2238a8;
        case 0x2238acu: goto label_2238ac;
        case 0x2238b0u: goto label_2238b0;
        case 0x2238b4u: goto label_2238b4;
        case 0x2238b8u: goto label_2238b8;
        case 0x2238bcu: goto label_2238bc;
        case 0x2238c0u: goto label_2238c0;
        case 0x2238c4u: goto label_2238c4;
        case 0x2238c8u: goto label_2238c8;
        case 0x2238ccu: goto label_2238cc;
        case 0x2238d0u: goto label_2238d0;
        case 0x2238d4u: goto label_2238d4;
        case 0x2238d8u: goto label_2238d8;
        case 0x2238dcu: goto label_2238dc;
        case 0x2238e0u: goto label_2238e0;
        case 0x2238e4u: goto label_2238e4;
        case 0x2238e8u: goto label_2238e8;
        case 0x2238ecu: goto label_2238ec;
        case 0x2238f0u: goto label_2238f0;
        case 0x2238f4u: goto label_2238f4;
        case 0x2238f8u: goto label_2238f8;
        case 0x2238fcu: goto label_2238fc;
        case 0x223900u: goto label_223900;
        case 0x223904u: goto label_223904;
        case 0x223908u: goto label_223908;
        case 0x22390cu: goto label_22390c;
        default: break;
    }

    ctx->pc = 0x2237f0u;

label_2237f0:
    // 0x2237f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2237f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2237f4:
    // 0x2237f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2237f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2237f8:
    // 0x2237f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2237f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2237fc:
    // 0x2237fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2237fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_223800:
    // 0x223800: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x223800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_223804:
    // 0x223804: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_223808:
    // 0x223808: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x223808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22380c:
    // 0x22380c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22380cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_223810:
    // 0x223810: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x223810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_223814:
    // 0x223814: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x223814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_223818:
    // 0x223818: 0x24a5d6e0  addiu       $a1, $a1, -0x2920
    ctx->pc = 0x223818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956768));
label_22381c:
    // 0x22381c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22381cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_223820:
    // 0x223820: 0x320f809  jalr        $t9
label_223824:
    if (ctx->pc == 0x223824u) {
        ctx->pc = 0x223824u;
            // 0x223824: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x223828u;
        goto label_223828;
    }
    ctx->pc = 0x223820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x223828u);
        ctx->pc = 0x223824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223820u;
            // 0x223824: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223828u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223828u; }
            if (ctx->pc != 0x223828u) { return; }
        }
        }
    }
    ctx->pc = 0x223828u;
label_223828:
    // 0x223828: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x223828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22382c:
    // 0x22382c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x22382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223830:
    // 0x223830: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x223830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_223834:
    // 0x223834: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x223834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_223838:
    // 0x223838: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x223838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22383c:
    // 0x22383c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x22383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223840:
    // 0x223840: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x223840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_223844:
    // 0x223844: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x223844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_223848:
    // 0x223848: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x223848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22384c:
    // 0x22384c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x22384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223850:
    // 0x223850: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x223850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_223854:
    // 0x223854: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x223854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_223858:
    // 0x223858: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x223858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22385c:
    // 0x22385c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x22385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223860:
    // 0x223860: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x223860u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_223864:
    // 0x223864: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x223864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_223868:
    // 0x223868: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x223868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22386c:
    // 0x22386c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x22386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_223870:
    // 0x223870: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x223870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223874:
    // 0x223874: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x223874u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_223878:
    // 0x223878: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x223878u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_22387c:
    // 0x22387c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x22387cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_223880:
    // 0x223880: 0x46000184  c1          0x184
    ctx->pc = 0x223880u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
label_223884:
    // 0x223884: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x223884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_223888:
    // 0x223888: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x223888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22388c:
    // 0x22388c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x22388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223890:
    // 0x223890: 0xc7a50030  lwc1        $f5, 0x30($sp)
    ctx->pc = 0x223890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_223894:
    // 0x223894: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x223894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_223898:
    // 0x223898: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x223898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22389c:
    // 0x22389c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22389cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2238a0:
    // 0x2238a0: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x2238a0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_2238a4:
    // 0x2238a4: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x2238a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2238a8:
    // 0x2238a8: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2238a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2238ac:
    // 0x2238ac: 0x46012142  mul.s       $f5, $f4, $f1
    ctx->pc = 0x2238acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2238b0:
    // 0x2238b0: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2238b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2238b4:
    // 0x2238b4: 0x46011102  mul.s       $f4, $f2, $f1
    ctx->pc = 0x2238b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2238b8:
    // 0x2238b8: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x2238b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2238bc:
    // 0x2238bc: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x2238bcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_2238c0:
    // 0x2238c0: 0xc6210134  lwc1        $f1, 0x134($s1)
    ctx->pc = 0x2238c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2238c4:
    // 0x2238c4: 0xc6220130  lwc1        $f2, 0x130($s1)
    ctx->pc = 0x2238c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2238c8:
    // 0x2238c8: 0xc6200138  lwc1        $f0, 0x138($s1)
    ctx->pc = 0x2238c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2238cc:
    // 0x2238cc: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2238ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_2238d0:
    // 0x2238d0: 0x46022881  sub.s       $f2, $f5, $f2
    ctx->pc = 0x2238d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_2238d4:
    // 0x2238d4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2238d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2238d8:
    // 0x2238d8: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2238d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_2238dc:
    // 0x2238dc: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x2238dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2238e0:
    // 0x2238e0: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x2238e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_2238e4:
    // 0x2238e4: 0x46000004  c1          0x4
    ctx->pc = 0x2238e4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_2238e8:
    // 0x2238e8: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x2238e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_2238ec:
    // 0x2238ec: 0xe6200150  swc1        $f0, 0x150($s1)
    ctx->pc = 0x2238ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
label_2238f0:
    // 0x2238f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2238f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2238f4:
    // 0x2238f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2238f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2238f8:
    // 0x2238f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2238f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2238fc:
    // 0x2238fc: 0x3e00008  jr          $ra
label_223900:
    if (ctx->pc == 0x223900u) {
        ctx->pc = 0x223900u;
            // 0x223900: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x223904u;
        goto label_223904;
    }
    ctx->pc = 0x2238FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2238FCu;
            // 0x223900: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223904u;
label_223904:
    // 0x223904: 0x0  nop
    ctx->pc = 0x223904u;
    // NOP
label_223908:
    // 0x223908: 0x0  nop
    ctx->pc = 0x223908u;
    // NOP
label_22390c:
    // 0x22390c: 0x0  nop
    ctx->pc = 0x22390cu;
    // NOP
}
