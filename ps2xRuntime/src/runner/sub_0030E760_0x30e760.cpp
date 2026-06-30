#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030E760
// Address: 0x30e760 - 0x30e960
void sub_0030E760_0x30e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E760_0x30e760");
#endif

    switch (ctx->pc) {
        case 0x30e868u: goto label_30e868;
        default: break;
    }

    ctx->pc = 0x30e760u;

    // 0x30e760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30e760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30e764: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x30e764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x30e768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30e768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30e76c: 0x1235024  and         $t2, $t1, $v1
    ctx->pc = 0x30e76cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x30e770: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x30e770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e774: 0x8c8f00cc  lw          $t7, 0xCC($a0)
    ctx->pc = 0x30e774u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x30e778: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x30e778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e77c: 0x848b0066  lh          $t3, 0x66($a0)
    ctx->pc = 0x30e77cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 102)));
    // 0x30e780: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x30e780u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x30e784: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x30e784u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e788: 0x91ec0002  lbu         $t4, 0x2($t7)
    ctx->pc = 0x30e788u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x30e78c: 0xc5e0000c  lwc1        $f0, 0xC($t7)
    ctx->pc = 0x30e78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e790: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x30e790u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30e794: 0x91ed0003  lbu         $t5, 0x3($t7)
    ctx->pc = 0x30e794u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 3)));
    // 0x30e798: 0x29610002  slti        $at, $t3, 0x2
    ctx->pc = 0x30e798u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30e79c: 0x14c1825  or          $v1, $t2, $t4
    ctx->pc = 0x30e79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x30e7a0: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x30e7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e7a4: 0xc5e40010  lwc1        $f4, 0x10($t7)
    ctx->pc = 0x30e7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30e7a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30e7a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30e7ac: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x30e7acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x30e7b0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x30e7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e7b4: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x30e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e7b8: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x30e7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e7bc: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x30e7bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x30e7c0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30e7c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30e7c4: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x30e7c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x30e7c8: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x30e7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e7cc: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x30e7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e7d0: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x30e7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e7d4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x30e7d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x30e7d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30e7d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30e7dc: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x30e7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x30e7e0: 0xe4a40010  swc1        $f4, 0x10($a1)
    ctx->pc = 0x30e7e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x30e7e4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x30e7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x30e7e8: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x30e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x30e7ec: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x30e7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e7f0: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x30e7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e7f4: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x30e7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e7f8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x30e7f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x30e7fc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30e7fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30e800: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x30e800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x30e804: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x30e804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e808: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x30e808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e80c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x30e80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e810: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x30e810u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x30e814: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30e814u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30e818: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x30e818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x30e81c: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x30e81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e820: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x30e820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e824: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x30e824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e828: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x30e828u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x30e82c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30e82cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30e830: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x30e830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x30e834: 0xe4a40028  swc1        $f4, 0x28($a1)
    ctx->pc = 0x30e834u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x30e838: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x30e838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x30e83c: 0x14200042  bnez        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x30E83Cu;
    {
        const bool branch_taken_0x30e83c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E83Cu;
            // 0x30e840: 0xaca9002c  sw          $t1, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e83c) {
            ctx->pc = 0x30E948u;
            goto label_30e948;
        }
    }
    ctx->pc = 0x30E844u;
    // 0x30e844: 0x31a300ff  andi        $v1, $t5, 0xFF
    ctx->pc = 0x30e844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x30e848: 0x6c3823  subu        $a3, $v1, $t4
    ctx->pc = 0x30e848u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x30e84c: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x30e84cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30e850: 0x2563ffff  addiu       $v1, $t3, -0x1
    ctx->pc = 0x30e850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x30e854: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x30e854u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e858: 0x46002141  sub.s       $f5, $f4, $f0
    ctx->pc = 0x30e858u;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x30e85c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30e85cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30e860: 0x0  nop
    ctx->pc = 0x30e860u;
    // NOP
    // 0x30e864: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x30e864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_30e868:
    // 0x30e868: 0x6e8023  subu        $s0, $v1, $t6
    ctx->pc = 0x30e868u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x30e86c: 0x25cfffff  addiu       $t7, $t6, -0x1
    ctx->pc = 0x30e86cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x30e870: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x30e870u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30e874: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x30e874u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x30e878: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30e878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30e87c: 0xf8040  sll         $s0, $t7, 1
    ctx->pc = 0x30e87cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x30e880: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x30e880u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30e884: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x30e884u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x30e888: 0x1f08021  addu        $s0, $t7, $s0
    ctx->pc = 0x30e888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x30e88c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x30e88cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30e890: 0xd7840  sll         $t7, $t5, 1
    ctx->pc = 0x30e890u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x30e894: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x30e894u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x30e898: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x30e898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x30e89c: 0xf78c0  sll         $t7, $t7, 3
    ctx->pc = 0x30e89cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x30e8a0: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x30e8a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x30e8a4: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x30e8a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x30e8a8: 0xafc821  addu        $t9, $a1, $t7
    ctx->pc = 0x30e8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x30e8ac: 0x1cb782a  slt         $t7, $t6, $t3
    ctx->pc = 0x30e8acu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x30e8b0: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x30e8b0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x30e8b4: 0xc012  mflo        $t8
    ctx->pc = 0x30e8b4u;
    SET_GPR_U64(ctx, 24, ctx->lo);
    // 0x30e8b8: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x30e8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x30e8bc: 0x198c021  addu        $t8, $t4, $t8
    ctx->pc = 0x30e8bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x30e8c0: 0x331800ff  andi        $t8, $t8, 0xFF
    ctx->pc = 0x30e8c0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x30e8c4: 0x158c025  or          $t8, $t2, $t8
    ctx->pc = 0x30e8c4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 10) | GPR_U64(ctx, 24));
    // 0x30e8c8: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x30e8c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30e8cc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x30e8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e8d0: 0xc60100d8  lwc1        $f1, 0xD8($s0)
    ctx->pc = 0x30e8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e8d4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x30e8d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30e8d8: 0xe7210000  swc1        $f1, 0x0($t9)
    ctx->pc = 0x30e8d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
    // 0x30e8dc: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x30e8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e8e0: 0xc60100dc  lwc1        $f1, 0xDC($s0)
    ctx->pc = 0x30e8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e8e4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x30e8e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30e8e8: 0xe7210004  swc1        $f1, 0x4($t9)
    ctx->pc = 0x30e8e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4), bits); }
    // 0x30e8ec: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x30e8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e8f0: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x30e8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e8f4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x30e8f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30e8f8: 0xe7210008  swc1        $f1, 0x8($t9)
    ctx->pc = 0x30e8f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 8), bits); }
    // 0x30e8fc: 0xaf38000c  sw          $t8, 0xC($t9)
    ctx->pc = 0x30e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 24));
    // 0x30e900: 0xe7230010  swc1        $f3, 0x10($t9)
    ctx->pc = 0x30e900u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 16), bits); }
    // 0x30e904: 0xaf200014  sw          $zero, 0x14($t9)
    ctx->pc = 0x30e904u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 20), GPR_U32(ctx, 0));
    // 0x30e908: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x30e908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e90c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x30e90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e910: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x30e910u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30e914: 0xe7210018  swc1        $f1, 0x18($t9)
    ctx->pc = 0x30e914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 24), bits); }
    // 0x30e918: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x30e918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e91c: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x30e91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e920: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x30e920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30e924: 0xe721001c  swc1        $f1, 0x1C($t9)
    ctx->pc = 0x30e924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 28), bits); }
    // 0x30e928: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x30e928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e92c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x30e92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e930: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x30e930u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30e934: 0xe7210020  swc1        $f1, 0x20($t9)
    ctx->pc = 0x30e934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 32), bits); }
    // 0x30e938: 0xaf380024  sw          $t8, 0x24($t9)
    ctx->pc = 0x30e938u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 36), GPR_U32(ctx, 24));
    // 0x30e93c: 0xe7230028  swc1        $f3, 0x28($t9)
    ctx->pc = 0x30e93cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 40), bits); }
    // 0x30e940: 0x15e0ffc9  bnez        $t7, . + 4 + (-0x37 << 2)
    ctx->pc = 0x30E940u;
    {
        const bool branch_taken_0x30e940 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E940u;
            // 0x30e944: 0xaf29002c  sw          $t1, 0x2C($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 44), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e940) {
            ctx->pc = 0x30E868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30e868;
        }
    }
    ctx->pc = 0x30E948u;
label_30e948:
    // 0x30e948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30e948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e94c: 0x3e00008  jr          $ra
    ctx->pc = 0x30E94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E94Cu;
            // 0x30e950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E954u;
    // 0x30e954: 0x0  nop
    ctx->pc = 0x30e954u;
    // NOP
    // 0x30e958: 0x0  nop
    ctx->pc = 0x30e958u;
    // NOP
    // 0x30e95c: 0x0  nop
    ctx->pc = 0x30e95cu;
    // NOP
}
