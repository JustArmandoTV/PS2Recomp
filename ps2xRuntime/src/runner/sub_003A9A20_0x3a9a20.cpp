#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A9A20
// Address: 0x3a9a20 - 0x3a9be0
void sub_003A9A20_0x3a9a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9A20_0x3a9a20");
#endif

    switch (ctx->pc) {
        case 0x3a9b34u: goto label_3a9b34;
        case 0x3a9bacu: goto label_3a9bac;
        default: break;
    }

    ctx->pc = 0x3a9a20u;

    // 0x3a9a20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a9a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a9a24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a9a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3a9a28: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3a9a28u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9a2c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a9a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3a9a30: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3a9a30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3a9a34: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a9a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3a9a38: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x3a9a38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
    // 0x3a9a3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a9a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3a9a40: 0x26949bc0  addiu       $s4, $s4, -0x6440
    ctx->pc = 0x3a9a40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941632));
    // 0x3a9a44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a9a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a9a48: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x3a9a48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
    // 0x3a9a4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a9a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a9a50: 0x26522100  addiu       $s2, $s2, 0x2100
    ctx->pc = 0x3a9a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8448));
    // 0x3a9a54: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3a9a54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3a9a58: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a9a58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3a9a5c: 0x8c930034  lw          $s3, 0x34($a0)
    ctx->pc = 0x3a9a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3a9a60: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a9a60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9a64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a9a68: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3a9a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3a9a6c: 0x91070012  lbu         $a3, 0x12($t0)
    ctx->pc = 0x3a9a6cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x3a9a70: 0x86630024  lh          $v1, 0x24($s3)
    ctx->pc = 0x3a9a70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x3a9a74: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x3a9a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x3a9a78: 0x90500116  lbu         $s0, 0x116($v0)
    ctx->pc = 0x3a9a78u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
    // 0x3a9a7c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3a9a7cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3a9a80: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3a9a80u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9a84: 0x207082a  slt         $at, $s0, $a3
    ctx->pc = 0x3a9a84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3a9a88: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a9a88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a9a8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a9a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9a90: 0x0  nop
    ctx->pc = 0x3a9a90u;
    // NOP
    // 0x3a9a94: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x3a9a94u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a9a98: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x3a9a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a9a9c: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x3a9a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a9aa0: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x3a9aa0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a9aa4: 0x4603255c  madd.s      $f21, $f4, $f3
    ctx->pc = 0x3a9aa4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x3a9aa8: 0x1012  mflo        $v0
    ctx->pc = 0x3a9aa8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3a9aac: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x3a9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x3a9ab0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A9AB0u;
    {
        const bool branch_taken_0x3a9ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9AB0u;
            // 0x3a9ab4: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ab0) {
            ctx->pc = 0x3A9ABCu;
            goto label_3a9abc;
        }
    }
    ctx->pc = 0x3A9AB8u;
    // 0x3a9ab8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3a9ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9abc:
    // 0x3a9abc: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x3a9abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a9ac0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a9ac4: 0xc6820618  lwc1        $f2, 0x618($s4)
    ctx->pc = 0x3a9ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a9ac8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x3a9ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3a9acc: 0xc680061c  lwc1        $f0, 0x61C($s4)
    ctx->pc = 0x3a9accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a9ad0: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x3a9ad0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a9ad4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3a9ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a9ad8: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x3a9ad8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3a9adc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3a9adcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3a9ae0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3a9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3a9ae4: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3a9ae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a9ae8: 0x26850610  addiu       $a1, $s4, 0x610
    ctx->pc = 0x3a9ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1552));
    // 0x3a9aec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a9aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a9af0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a9af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a9af4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a9af4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9af8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x3a9af8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3a9afc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3a9afcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3a9b00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a9b00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a9b04: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3a9b04u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9b08: 0x0  nop
    ctx->pc = 0x3a9b08u;
    // NOP
    // 0x3a9b0c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a9b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a9b10: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a9b10u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9b14: 0x0  nop
    ctx->pc = 0x3a9b14u;
    // NOP
    // 0x3a9b18: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a9b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a9b1c: 0x4602ab01  sub.s       $f12, $f21, $f2
    ctx->pc = 0x3a9b1cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x3a9b20: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x3a9b20u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x3a9b24: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3a9b24u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x3a9b28: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a9b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a9b2c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A9B2Cu;
    SET_GPR_U32(ctx, 31, 0x3A9B34u);
    ctx->pc = 0x3A9B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9B2Cu;
            // 0x3a9b30: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9B34u; }
        if (ctx->pc != 0x3A9B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9B34u; }
        if (ctx->pc != 0x3A9B34u) { return; }
    }
    ctx->pc = 0x3A9B34u;
label_3a9b34:
    // 0x3a9b34: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x3a9b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x3a9b38: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a9b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a9b3c: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x3a9b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a9b40: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x3a9b40u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a9b44: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3a9b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a9b48: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x3a9b48u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3a9b4c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3a9b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a9b50: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x3a9b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3a9b54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3a9b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a9b58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a9b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a9b5c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3a9b5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3a9b60: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3a9b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3a9b64: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3a9b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a9b68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a9b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9b6c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a9b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a9b70: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x3a9b70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3a9b74: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3a9b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3a9b78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a9b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a9b7c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3a9b7cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9b80: 0x0  nop
    ctx->pc = 0x3a9b80u;
    // NOP
    // 0x3a9b84: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a9b84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3a9b88: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a9b88u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a9b8c: 0x0  nop
    ctx->pc = 0x3a9b8cu;
    // NOP
    // 0x3a9b90: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a9b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3a9b94: 0x4602ab01  sub.s       $f12, $f21, $f2
    ctx->pc = 0x3a9b94u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x3a9b98: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x3a9b98u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x3a9b9c: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3a9b9cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x3a9ba0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a9ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3a9ba4: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3A9BA4u;
    SET_GPR_U32(ctx, 31, 0x3A9BACu);
    ctx->pc = 0x3A9BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9BA4u;
            // 0x3a9ba8: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9BACu; }
        if (ctx->pc != 0x3A9BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A9BACu; }
        if (ctx->pc != 0x3A9BACu) { return; }
    }
    ctx->pc = 0x3A9BACu;
label_3a9bac:
    // 0x3a9bac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a9bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a9bb0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3a9bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a9bb4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a9bb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a9bb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a9bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a9bbc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a9bbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a9bc0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a9bc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a9bc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a9bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a9bc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a9bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a9bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A9BCCu;
            // 0x3a9bd0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A9BD4u;
    // 0x3a9bd4: 0x0  nop
    ctx->pc = 0x3a9bd4u;
    // NOP
    // 0x3a9bd8: 0x0  nop
    ctx->pc = 0x3a9bd8u;
    // NOP
    // 0x3a9bdc: 0x0  nop
    ctx->pc = 0x3a9bdcu;
    // NOP
}
