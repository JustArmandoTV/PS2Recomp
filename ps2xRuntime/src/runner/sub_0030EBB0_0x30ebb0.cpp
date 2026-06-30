#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030EBB0
// Address: 0x30ebb0 - 0x30ed70
void sub_0030EBB0_0x30ebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030EBB0_0x30ebb0");
#endif

    switch (ctx->pc) {
        case 0x30ecb0u: goto label_30ecb0;
        default: break;
    }

    ctx->pc = 0x30ebb0u;

    // 0x30ebb0: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x30ebb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ebb4: 0x8c8f00cc  lw          $t7, 0xCC($a0)
    ctx->pc = 0x30ebb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x30ebb8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x30ebb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ebbc: 0x848b0066  lh          $t3, 0x66($a0)
    ctx->pc = 0x30ebbcu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 102)));
    // 0x30ebc0: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x30ebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x30ebc4: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x30ebc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x30ebc8: 0x91ec0002  lbu         $t4, 0x2($t7)
    ctx->pc = 0x30ebc8u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x30ebcc: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x30ebccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x30ebd0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x30ebd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30ebd4: 0x91ee0003  lbu         $t6, 0x3($t7)
    ctx->pc = 0x30ebd4u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 3)));
    // 0x30ebd8: 0x29610002  slti        $at, $t3, 0x2
    ctx->pc = 0x30ebd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30ebdc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x30ebdcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ebe0: 0x14c1825  or          $v1, $t2, $t4
    ctx->pc = 0x30ebe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x30ebe4: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x30ebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ebe8: 0xc5e0000c  lwc1        $f0, 0xC($t7)
    ctx->pc = 0x30ebe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ebec: 0xc5e40010  lwc1        $f4, 0x10($t7)
    ctx->pc = 0x30ebecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ebf0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30ebf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30ebf4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x30ebf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x30ebf8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x30ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ebfc: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x30ebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ec00: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x30ec00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ec04: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x30ec04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x30ec08: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30ec08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30ec0c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x30ec0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x30ec10: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x30ec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ec14: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x30ec14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ec18: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x30ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ec1c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x30ec1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x30ec20: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30ec20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30ec24: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x30ec24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x30ec28: 0xe4a40010  swc1        $f4, 0x10($a1)
    ctx->pc = 0x30ec28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x30ec2c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x30ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x30ec30: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x30ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x30ec34: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x30ec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ec38: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x30ec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ec3c: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x30ec3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ec40: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x30ec40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x30ec44: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30ec44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30ec48: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x30ec48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x30ec4c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x30ec4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ec50: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x30ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ec54: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x30ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ec58: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x30ec58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x30ec5c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30ec5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30ec60: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x30ec60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x30ec64: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x30ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ec68: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x30ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ec6c: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x30ec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ec70: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x30ec70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x30ec74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30ec74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30ec78: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x30ec78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x30ec7c: 0xe4a40028  swc1        $f4, 0x28($a1)
    ctx->pc = 0x30ec7cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x30ec80: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x30ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x30ec84: 0x14200036  bnez        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x30EC84u;
    {
        const bool branch_taken_0x30ec84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC84u;
            // 0x30ec88: 0xaca9002c  sw          $t1, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec84) {
            ctx->pc = 0x30ED60u;
            goto label_30ed60;
        }
    }
    ctx->pc = 0x30EC8Cu;
    // 0x30ec8c: 0x31c300ff  andi        $v1, $t6, 0xFF
    ctx->pc = 0x30ec8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x30ec90: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x30ec90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30ec94: 0x6c3023  subu        $a2, $v1, $t4
    ctx->pc = 0x30ec94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x30ec98: 0x2563ffff  addiu       $v1, $t3, -0x1
    ctx->pc = 0x30ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x30ec9c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x30ec9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eca0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30eca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30eca4: 0x0  nop
    ctx->pc = 0x30eca4u;
    // NOP
    // 0x30eca8: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x30eca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x30ecac: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x30ecacu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_30ecb0:
    // 0x30ecb0: 0x6d7823  subu        $t7, $v1, $t5
    ctx->pc = 0x30ecb0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x30ecb4: 0x25aeffff  addiu       $t6, $t5, -0x1
    ctx->pc = 0x30ecb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x30ecb8: 0x448f0800  mtc1        $t7, $f1
    ctx->pc = 0x30ecb8u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30ecbc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x30ecbcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x30ecc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30ecc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30ecc4: 0xe7840  sll         $t7, $t6, 1
    ctx->pc = 0x30ecc4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x30ecc8: 0xe3001a  div         $zero, $a3, $v1
    ctx->pc = 0x30ecc8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30eccc: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x30ecccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x30ecd0: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x30ecd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x30ecd4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x30ecd4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x30ecd8: 0x87040  sll         $t6, $t0, 1
    ctx->pc = 0x30ecd8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x30ecdc: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x30ecdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x30ece0: 0x8fc821  addu        $t9, $a0, $t7
    ctx->pc = 0x30ece0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x30ece4: 0xe70c0  sll         $t6, $t6, 3
    ctx->pc = 0x30ece4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x30ece8: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x30ece8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x30ecec: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x30ececu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x30ecf0: 0xaec021  addu        $t8, $a1, $t6
    ctx->pc = 0x30ecf0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x30ecf4: 0x1ab702a  slt         $t6, $t5, $t3
    ctx->pc = 0x30ecf4u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x30ecf8: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x30ecf8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x30ecfc: 0x7812  mflo        $t7
    ctx->pc = 0x30ecfcu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x30ed00: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x30ed00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x30ed04: 0x18f7821  addu        $t7, $t4, $t7
    ctx->pc = 0x30ed04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x30ed08: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x30ed08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x30ed0c: 0x14f7825  or          $t7, $t2, $t7
    ctx->pc = 0x30ed0cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) | GPR_U64(ctx, 15));
    // 0x30ed10: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x30ed10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30ed14: 0xc72100d8  lwc1        $f1, 0xD8($t9)
    ctx->pc = 0x30ed14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ed18: 0xe7010000  swc1        $f1, 0x0($t8)
    ctx->pc = 0x30ed18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x30ed1c: 0xc72100dc  lwc1        $f1, 0xDC($t9)
    ctx->pc = 0x30ed1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ed20: 0xe7010004  swc1        $f1, 0x4($t8)
    ctx->pc = 0x30ed20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4), bits); }
    // 0x30ed24: 0xc72100e0  lwc1        $f1, 0xE0($t9)
    ctx->pc = 0x30ed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ed28: 0xe7010008  swc1        $f1, 0x8($t8)
    ctx->pc = 0x30ed28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 8), bits); }
    // 0x30ed2c: 0xc72100e4  lwc1        $f1, 0xE4($t9)
    ctx->pc = 0x30ed2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ed30: 0xe7010018  swc1        $f1, 0x18($t8)
    ctx->pc = 0x30ed30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 24), bits); }
    // 0x30ed34: 0xc72100e8  lwc1        $f1, 0xE8($t9)
    ctx->pc = 0x30ed34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ed38: 0xe701001c  swc1        $f1, 0x1C($t8)
    ctx->pc = 0x30ed38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 28), bits); }
    // 0x30ed3c: 0xc72100ec  lwc1        $f1, 0xEC($t9)
    ctx->pc = 0x30ed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ed40: 0xe7010020  swc1        $f1, 0x20($t8)
    ctx->pc = 0x30ed40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 32), bits); }
    // 0x30ed44: 0xaf0f000c  sw          $t7, 0xC($t8)
    ctx->pc = 0x30ed44u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 15));
    // 0x30ed48: 0xe7020010  swc1        $f2, 0x10($t8)
    ctx->pc = 0x30ed48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 16), bits); }
    // 0x30ed4c: 0xaf000014  sw          $zero, 0x14($t8)
    ctx->pc = 0x30ed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 0));
    // 0x30ed50: 0xaf0f0024  sw          $t7, 0x24($t8)
    ctx->pc = 0x30ed50u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 36), GPR_U32(ctx, 15));
    // 0x30ed54: 0xe7020028  swc1        $f2, 0x28($t8)
    ctx->pc = 0x30ed54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 40), bits); }
    // 0x30ed58: 0x15c0ffd5  bnez        $t6, . + 4 + (-0x2B << 2)
    ctx->pc = 0x30ED58u;
    {
        const bool branch_taken_0x30ed58 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x30ED5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ED58u;
            // 0x30ed5c: 0xaf09002c  sw          $t1, 0x2C($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 44), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed58) {
            ctx->pc = 0x30ECB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30ecb0;
        }
    }
    ctx->pc = 0x30ED60u;
label_30ed60:
    // 0x30ed60: 0x3e00008  jr          $ra
    ctx->pc = 0x30ED60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30ED68u;
    // 0x30ed68: 0x0  nop
    ctx->pc = 0x30ed68u;
    // NOP
    // 0x30ed6c: 0x0  nop
    ctx->pc = 0x30ed6cu;
    // NOP
}
