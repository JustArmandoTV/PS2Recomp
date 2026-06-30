#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A9700
// Address: 0x3a9700 - 0x3a9a20
void sub_003A9700_0x3a9700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9700_0x3a9700");
#endif

    switch (ctx->pc) {
        case 0x3a9824u: goto label_3a9824;
        case 0x3a9890u: goto label_3a9890;
        case 0x3a98fcu: goto label_3a98fc;
        case 0x3a996cu: goto label_3a996c;
        case 0x3a99e4u: goto label_3a99e4;
        default: break;
    }

    ctx->pc = 0x3a9700u;

    // 0x3a9700: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a9700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3a9704: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3a9704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3a9708: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3a9708u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a970c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3a970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3a9710: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3a9710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3a9714: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3a9714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3a9718: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a9718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3a971c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3a971cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9720: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a9720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3a9724: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a9724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3a9728: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x3a9728u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
    // 0x3a972c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a972cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a9730: 0x26739bc0  addiu       $s3, $s3, -0x6440
    ctx->pc = 0x3a9730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941632));
    // 0x3a9734: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a9734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a9738: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a9738u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a973c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3a973cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3a9740: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x3a9740u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
    // 0x3a9744: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a9744u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3a9748: 0x26312100  addiu       $s1, $s1, 0x2100
    ctx->pc = 0x3a9748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8448));
    // 0x3a974c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a9750: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3a9750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3a9754: 0x8c920034  lw          $s2, 0x34($a0)
    ctx->pc = 0x3a9754u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3a9758: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x3a9758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x3a975c: 0x90500116  lbu         $s0, 0x116($v0)
    ctx->pc = 0x3a975cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
    // 0x3a9760: 0x91040012  lbu         $a0, 0x12($t0)
    ctx->pc = 0x3a9760u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x3a9764: 0x86420024  lh          $v0, 0x24($s2)
    ctx->pc = 0x3a9764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3a9768: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3a9768u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a976c: 0x0  nop
    ctx->pc = 0x3a976cu;
    // NOP
    // 0x3a9770: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a9770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a9774: 0x204082a  slt         $at, $s0, $a0
    ctx->pc = 0x3a9774u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a9778: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3a9778u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3a977c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a977cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9780: 0x0  nop
    ctx->pc = 0x3a9780u;
    // NOP
    // 0x3a9784: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x3a9784u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a9788: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x3a9788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a978c: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x3a978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a9790: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x3a9790u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a9794: 0x4603255c  madd.s      $f21, $f4, $f3
    ctx->pc = 0x3a9794u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x3a9798: 0x1012  mflo        $v0
    ctx->pc = 0x3a9798u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3a979c: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x3a979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x3a97a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A97A0u;
    {
        const bool branch_taken_0x3a97a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A97A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A97A0u;
            // 0x3a97a4: 0x2b100  sll         $s6, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a97a0) {
            ctx->pc = 0x3A97ACu;
            goto label_3a97ac;
        }
    }
    ctx->pc = 0x3A97A8u;
    // 0x3a97a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a97a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a97ac:
    // 0x3a97ac: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3a97acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3a97b0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a97b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a97b4: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x3a97b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a97b8: 0xc6a40018  lwc1        $f4, 0x18($s5)
    ctx->pc = 0x3a97b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a97bc: 0xc6620638  lwc1        $f2, 0x638($s3)
    ctx->pc = 0x3a97bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a97c0: 0x26650630  addiu       $a1, $s3, 0x630
    ctx->pc = 0x3a97c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1584));
    // 0x3a97c4: 0xc661063c  lwc1        $f1, 0x63C($s3)
    ctx->pc = 0x3a97c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a97c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a97c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a97cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a97ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a97d0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3a97d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a97d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a97d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a97d8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3a97d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3a97dc: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3a97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3a97e0: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x3a97e0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a97e4: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3a97e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a97e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a97e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a97ec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a97ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a97f0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3a97f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3a97f4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3a97f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3a97f8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3a97f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3a97fc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a97fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a9800: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a9800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9804: 0x0  nop
    ctx->pc = 0x3a9804u;
    // NOP
    // 0x3a9808: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a9808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a980c: 0x4602ab01  sub.s       $f12, $f21, $f2
    ctx->pc = 0x3a980cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x3a9810: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x3a9810u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x3a9814: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3a9814u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x3a9818: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a9818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a981c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A981Cu;
    SET_GPR_U32(ctx, 31, 0x3A9824u);
    ctx->pc = 0x3A9820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A981Cu;
            // 0x3a9820: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9824u; }
        if (ctx->pc != 0x3A9824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9824u; }
        if (ctx->pc != 0x3A9824u) { return; }
    }
    ctx->pc = 0x3A9824u;
label_3a9824:
    // 0x3a9824: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x3a9824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a9828: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a9828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a982c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a982cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a9830: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3a9830u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a9834: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a9834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a9838: 0x26650620  addiu       $a1, $s3, 0x620
    ctx->pc = 0x3a9838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1568));
    // 0x3a983c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a983cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9840: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a9840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9844: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a9844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a9848: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a9848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a984c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a984cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9850: 0xc6a30018  lwc1        $f3, 0x18($s5)
    ctx->pc = 0x3a9850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a9854: 0xc6610628  lwc1        $f1, 0x628($s3)
    ctx->pc = 0x3a9854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a9858: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a9858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a985c: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x3a985cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3a9860: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3a9860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3a9864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a9864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9868: 0x0  nop
    ctx->pc = 0x3a9868u;
    // NOP
    // 0x3a986c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a986cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a9870: 0xc660062c  lwc1        $f0, 0x62C($s3)
    ctx->pc = 0x3a9870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a9874: 0x4601ab01  sub.s       $f12, $f21, $f1
    ctx->pc = 0x3a9874u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x3a9878: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3a9878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3a987c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3a987cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3a9880: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x3a9880u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x3a9884: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x3a9884u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3a9888: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A9888u;
    SET_GPR_U32(ctx, 31, 0x3A9890u);
    ctx->pc = 0x3A988Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9888u;
            // 0x3a988c: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9890u; }
        if (ctx->pc != 0x3A9890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9890u; }
        if (ctx->pc != 0x3A9890u) { return; }
    }
    ctx->pc = 0x3A9890u;
label_3a9890:
    // 0x3a9890: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x3a9890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a9894: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a9894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a9898: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a9898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a989c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3a989cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a98a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a98a4: 0x26650610  addiu       $a1, $s3, 0x610
    ctx->pc = 0x3a98a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1552));
    // 0x3a98a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a98a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a98ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a98acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a98b0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a98b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a98b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a98b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a98b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a98b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a98bc: 0xc6a30018  lwc1        $f3, 0x18($s5)
    ctx->pc = 0x3a98bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a98c0: 0xc6610618  lwc1        $f1, 0x618($s3)
    ctx->pc = 0x3a98c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a98c4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a98c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a98c8: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x3a98c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3a98cc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3a98ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3a98d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a98d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a98d4: 0x0  nop
    ctx->pc = 0x3a98d4u;
    // NOP
    // 0x3a98d8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a98d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a98dc: 0xc660061c  lwc1        $f0, 0x61C($s3)
    ctx->pc = 0x3a98dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a98e0: 0x4601ab01  sub.s       $f12, $f21, $f1
    ctx->pc = 0x3a98e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x3a98e4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3a98e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3a98e8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3a98e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3a98ec: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x3a98ecu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x3a98f0: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x3a98f0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3a98f4: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A98F4u;
    SET_GPR_U32(ctx, 31, 0x3A98FCu);
    ctx->pc = 0x3A98F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A98F4u;
            // 0x3a98f8: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A98FCu; }
        if (ctx->pc != 0x3A98FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A98FCu; }
        if (ctx->pc != 0x3A98FCu) { return; }
    }
    ctx->pc = 0x3A98FCu;
label_3a98fc:
    // 0x3a98fc: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x3a98fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a9900: 0xc6a40018  lwc1        $f4, 0x18($s5)
    ctx->pc = 0x3a9900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a9904: 0xc6620408  lwc1        $f2, 0x408($s3)
    ctx->pc = 0x3a9904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a9908: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a9908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a990c: 0xc661040c  lwc1        $f1, 0x40C($s3)
    ctx->pc = 0x3a990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a9910: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3a9910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a9914: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a9914u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9918: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a9918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a991c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a991cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a9920: 0x26650400  addiu       $a1, $s3, 0x400
    ctx->pc = 0x3a9920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    // 0x3a9924: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a9924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a9928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a9928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a992c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3a992cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a9930: 0x0  nop
    ctx->pc = 0x3a9930u;
    // NOP
    // 0x3a9934: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3a9934u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3a9938: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a9938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a993c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3a993cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3a9940: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3a9940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3a9944: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3a9944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3a9948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a9948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a994c: 0x0  nop
    ctx->pc = 0x3a994cu;
    // NOP
    // 0x3a9950: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a9950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a9954: 0x4602ab01  sub.s       $f12, $f21, $f2
    ctx->pc = 0x3a9954u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x3a9958: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x3a9958u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x3a995c: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3a995cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x3a9960: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a9960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a9964: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A9964u;
    SET_GPR_U32(ctx, 31, 0x3A996Cu);
    ctx->pc = 0x3A9968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9964u;
            // 0x3a9968: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A996Cu; }
        if (ctx->pc != 0x3A996Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A996Cu; }
        if (ctx->pc != 0x3A996Cu) { return; }
    }
    ctx->pc = 0x3A996Cu;
label_3a996c:
    // 0x3a996c: 0x2762821  addu        $a1, $s3, $s6
    ctx->pc = 0x3a996cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x3a9970: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a9970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a9974: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x3a9974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a9978: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x3a9978u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a997c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3a997cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a9980: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x3a9980u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a9984: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3a9984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a9988: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x3a9988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3a998c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3a998cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a9990: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a9990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a9994: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3a9994u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3a9998: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3a9998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3a999c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3a999cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a99a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a99a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a99a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a99a8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x3a99a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3a99ac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3a99acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3a99b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a99b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a99b4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3a99b4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a99b8: 0x0  nop
    ctx->pc = 0x3a99b8u;
    // NOP
    // 0x3a99bc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a99bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a99c0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a99c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a99c4: 0x0  nop
    ctx->pc = 0x3a99c4u;
    // NOP
    // 0x3a99c8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a99c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a99cc: 0x4602ab01  sub.s       $f12, $f21, $f2
    ctx->pc = 0x3a99ccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x3a99d0: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x3a99d0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x3a99d4: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3a99d4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x3a99d8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a99d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a99dc: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A99DCu;
    SET_GPR_U32(ctx, 31, 0x3A99E4u);
    ctx->pc = 0x3A99E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A99DCu;
            // 0x3a99e0: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A99E4u; }
        if (ctx->pc != 0x3A99E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A99E4u; }
        if (ctx->pc != 0x3A99E4u) { return; }
    }
    ctx->pc = 0x3A99E4u;
label_3a99e4:
    // 0x3a99e4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3a99e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a99e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3a99e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a99ec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3a99ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a99f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a99f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a99f4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3a99f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a99f8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a99f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a99fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a99fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a9a00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a9a00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a9a04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a9a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a9a08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a9a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a9a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9A0Cu;
            // 0x3a9a10: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A9A14u;
    // 0x3a9a14: 0x0  nop
    ctx->pc = 0x3a9a14u;
    // NOP
    // 0x3a9a18: 0x0  nop
    ctx->pc = 0x3a9a18u;
    // NOP
    // 0x3a9a1c: 0x0  nop
    ctx->pc = 0x3a9a1cu;
    // NOP
}
