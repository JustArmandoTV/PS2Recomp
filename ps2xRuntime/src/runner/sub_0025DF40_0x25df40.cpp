#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025DF40
// Address: 0x25df40 - 0x25e170
void sub_0025DF40_0x25df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DF40_0x25df40");
#endif

    ctx->pc = 0x25df40u;

    // 0x25df40: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x25df40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25df44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25df44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25df48: 0xc50a0004  lwc1        $f10, 0x4($t0)
    ctx->pc = 0x25df48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25df4c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25df4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25df50: 0xc4e60004  lwc1        $f6, 0x4($a3)
    ctx->pc = 0x25df50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25df54: 0xc489004c  lwc1        $f9, 0x4C($a0)
    ctx->pc = 0x25df54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25df58: 0xc4e50000  lwc1        $f5, 0x0($a3)
    ctx->pc = 0x25df58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25df5c: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x25df5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25df60: 0x46000ac7  neg.s       $f11, $f1
    ctx->pc = 0x25df60u;
    ctx->f[11] = FPU_NEG_S(ctx->f[1]);
    // 0x25df64: 0x46005287  neg.s       $f10, $f10
    ctx->pc = 0x25df64u;
    ctx->f[10] = FPU_NEG_S(ctx->f[10]);
    // 0x25df68: 0xc488005c  lwc1        $f8, 0x5C($a0)
    ctx->pc = 0x25df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25df6c: 0x46065282  mul.s       $f10, $f10, $f6
    ctx->pc = 0x25df6cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x25df70: 0x46055ac2  mul.s       $f11, $f11, $f5
    ctx->pc = 0x25df70u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x25df74: 0x46096241  sub.s       $f9, $f12, $f9
    ctx->pc = 0x25df74u;
    ctx->f[9] = FPU_SUB_S(ctx->f[12], ctx->f[9]);
    // 0x25df78: 0x460a5818  adda.s      $f11, $f10
    ctx->pc = 0x25df78u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x25df7c: 0x46084ac2  mul.s       $f11, $f9, $f8
    ctx->pc = 0x25df7cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x25df80: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x25df80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25df84: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x25df84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25df88: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25df88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25df8c: 0xc4820040  lwc1        $f2, 0x40($a0)
    ctx->pc = 0x25df8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25df90: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x25df90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25df94: 0x460b18c1  sub.s       $f3, $f3, $f11
    ctx->pc = 0x25df94u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[11]);
    // 0x25df98: 0x4604001c  madd.s      $f0, $f0, $f4
    ctx->pc = 0x25df98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
    // 0x25df9c: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x25df9cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x25dfa0: 0x4601585c  madd.s      $f1, $f11, $f1
    ctx->pc = 0x25dfa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
    // 0x25dfa4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x25dfa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25dfa8: 0xc4820044  lwc1        $f2, 0x44($a0)
    ctx->pc = 0x25dfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25dfac: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x25dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25dfb0: 0xc7aa0010  lwc1        $f10, 0x10($sp)
    ctx->pc = 0x25dfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25dfb4: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x25dfb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x25dfb8: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x25dfb8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x25dfbc: 0x4601585c  madd.s      $f1, $f11, $f1
    ctx->pc = 0x25dfbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
    // 0x25dfc0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x25dfc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x25dfc4: 0xc4820048  lwc1        $f2, 0x48($a0)
    ctx->pc = 0x25dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25dfc8: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x25dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25dfcc: 0xc7a90014  lwc1        $f9, 0x14($sp)
    ctx->pc = 0x25dfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25dfd0: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x25dfd0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x25dfd4: 0x4601585c  madd.s      $f1, $f11, $f1
    ctx->pc = 0x25dfd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
    // 0x25dfd8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x25dfd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x25dfdc: 0xc482004c  lwc1        $f2, 0x4C($a0)
    ctx->pc = 0x25dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25dfe0: 0xc481005c  lwc1        $f1, 0x5C($a0)
    ctx->pc = 0x25dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25dfe4: 0xc7a80018  lwc1        $f8, 0x18($sp)
    ctx->pc = 0x25dfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x25dfe8: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x25dfe8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x25dfec: 0x4601585c  madd.s      $f1, $f11, $f1
    ctx->pc = 0x25dfecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
    // 0x25dff0: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x25dff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x25dff4: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x25dff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25dff8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x25dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25dffc: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x25dffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e000: 0xc52b0004  lwc1        $f11, 0x4($t1)
    ctx->pc = 0x25e000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x25e004: 0xc52e0008  lwc1        $f14, 0x8($t1)
    ctx->pc = 0x25e004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25e008: 0xc52d0000  lwc1        $f13, 0x0($t1)
    ctx->pc = 0x25e008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25e00c: 0x460a1c01  sub.s       $f16, $f3, $f10
    ctx->pc = 0x25e00cu;
    ctx->f[16] = FPU_SUB_S(ctx->f[3], ctx->f[10]);
    // 0x25e010: 0x46080a81  sub.s       $f10, $f1, $f8
    ctx->pc = 0x25e010u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x25e014: 0x460913c1  sub.s       $f15, $f2, $f9
    ctx->pc = 0x25e014u;
    ctx->f[15] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x25e018: 0x460a581a  mula.s      $f11, $f10
    ctx->pc = 0x25e018u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x25e01c: 0x460f725d  msub.s      $f9, $f14, $f15
    ctx->pc = 0x25e01cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[15]));
    // 0x25e020: 0x46105a02  mul.s       $f8, $f11, $f16
    ctx->pc = 0x25e020u;
    ctx->f[8] = FPU_MUL_S(ctx->f[11], ctx->f[16]);
    // 0x25e024: 0x46054ac2  mul.s       $f11, $f9, $f5
    ctx->pc = 0x25e024u;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x25e028: 0x460f6a42  mul.s       $f9, $f13, $f15
    ctx->pc = 0x25e028u;
    ctx->f[9] = FPU_MUL_S(ctx->f[13], ctx->f[15]);
    // 0x25e02c: 0x4610701a  mula.s      $f14, $f16
    ctx->pc = 0x25e02cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[16]);
    // 0x25e030: 0x46084a01  sub.s       $f8, $f9, $f8
    ctx->pc = 0x25e030u;
    ctx->f[8] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
    // 0x25e034: 0x460a6a9d  msub.s      $f10, $f13, $f10
    ctx->pc = 0x25e034u;
    ctx->f[10] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[10]));
    // 0x25e038: 0x46065242  mul.s       $f9, $f10, $f6
    ctx->pc = 0x25e038u;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x25e03c: 0x46095818  adda.s      $f11, $f9
    ctx->pc = 0x25e03cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[9]);
    // 0x25e040: 0x4604421c  madd.s      $f8, $f8, $f4
    ctx->pc = 0x25e040u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
    // 0x25e044: 0x46074036  c.le.s      $f8, $f7
    ctx->pc = 0x25e044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e048: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x25E048u;
    {
        const bool branch_taken_0x25e048 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25E04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E048u;
            // 0x25e04c: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e048) {
            ctx->pc = 0x25E068u;
            goto label_25e068;
        }
    }
    ctx->pc = 0x25E050u;
    // 0x25e050: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x25e050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x25e054: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x25e054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x25e058: 0x0  nop
    ctx->pc = 0x25e058u;
    // NOP
    // 0x25e05c: 0x46083a02  mul.s       $f8, $f7, $f8
    ctx->pc = 0x25e05cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x25e060: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25E060u;
    {
        const bool branch_taken_0x25e060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E060u;
            // 0x25e064: 0x46080000  add.s       $f0, $f0, $f8 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e060) {
            ctx->pc = 0x25E080u;
            goto label_25e080;
        }
    }
    ctx->pc = 0x25E068u;
label_25e068:
    // 0x25e068: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x25e068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x25e06c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x25e06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x25e070: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x25e070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x25e074: 0x0  nop
    ctx->pc = 0x25e074u;
    // NOP
    // 0x25e078: 0x46074203  div.s       $f8, $f8, $f7
    ctx->pc = 0x25e078u;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[8] = ctx->f[8] / ctx->f[7];
    // 0x25e07c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x25e07cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_25e080:
    // 0x25e080: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25e080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25e084: 0xc4ae004c  lwc1        $f14, 0x4C($a1)
    ctx->pc = 0x25e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25e088: 0xc4ad005c  lwc1        $f13, 0x5C($a1)
    ctx->pc = 0x25e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25e08c: 0x44825800  mtc1        $v0, $f11
    ctx->pc = 0x25e08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x25e090: 0xc4aa0040  lwc1        $f10, 0x40($a1)
    ctx->pc = 0x25e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25e094: 0xc4a90050  lwc1        $f9, 0x50($a1)
    ctx->pc = 0x25e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25e098: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x25e098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x25e09c: 0x460e6301  sub.s       $f12, $f12, $f14
    ctx->pc = 0x25e09cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    // 0x25e0a0: 0x460d63c2  mul.s       $f15, $f12, $f13
    ctx->pc = 0x25e0a0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x25e0a4: 0x460f5b01  sub.s       $f12, $f11, $f15
    ctx->pc = 0x25e0a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[11], ctx->f[15]);
    // 0x25e0a8: 0x460a601a  mula.s      $f12, $f10
    ctx->pc = 0x25e0a8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x25e0ac: 0x46097a5c  madd.s      $f9, $f15, $f9
    ctx->pc = 0x25e0acu;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[9]));
    // 0x25e0b0: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x25e0b0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25e0b4: 0xc7a90000  lwc1        $f9, 0x0($sp)
    ctx->pc = 0x25e0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25e0b8: 0xc4ab0044  lwc1        $f11, 0x44($a1)
    ctx->pc = 0x25e0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x25e0bc: 0xc4aa0054  lwc1        $f10, 0x54($a1)
    ctx->pc = 0x25e0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25e0c0: 0x46091b81  sub.s       $f14, $f3, $f9
    ctx->pc = 0x25e0c0u;
    ctx->f[14] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x25e0c4: 0x460b601a  mula.s      $f12, $f11
    ctx->pc = 0x25e0c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
    // 0x25e0c8: 0x460a7a9c  madd.s      $f10, $f15, $f10
    ctx->pc = 0x25e0c8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[10]));
    // 0x25e0cc: 0xe7aa0004  swc1        $f10, 0x4($sp)
    ctx->pc = 0x25e0ccu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25e0d0: 0xc4aa0048  lwc1        $f10, 0x48($a1)
    ctx->pc = 0x25e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25e0d4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x25e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25e0d8: 0xc4a90058  lwc1        $f9, 0x58($a1)
    ctx->pc = 0x25e0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25e0dc: 0x460a601a  mula.s      $f12, $f10
    ctx->pc = 0x25e0dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x25e0e0: 0x46031341  sub.s       $f13, $f2, $f3
    ctx->pc = 0x25e0e0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x25e0e4: 0x46097a5c  madd.s      $f9, $f15, $f9
    ctx->pc = 0x25e0e4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[9]));
    // 0x25e0e8: 0xe7a90008  swc1        $f9, 0x8($sp)
    ctx->pc = 0x25e0e8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25e0ec: 0xc4a9004c  lwc1        $f9, 0x4C($a1)
    ctx->pc = 0x25e0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25e0f0: 0xc4a3005c  lwc1        $f3, 0x5C($a1)
    ctx->pc = 0x25e0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25e0f4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x25e0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25e0f8: 0x4609601a  mula.s      $f12, $f9
    ctx->pc = 0x25e0f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[9]);
    // 0x25e0fc: 0x460378dc  madd.s      $f3, $f15, $f3
    ctx->pc = 0x25e0fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[3]));
    // 0x25e100: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x25e100u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x25e104: 0xc52a0014  lwc1        $f10, 0x14($t1)
    ctx->pc = 0x25e104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x25e108: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x25e108u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x25e10c: 0xc5290010  lwc1        $f9, 0x10($t1)
    ctx->pc = 0x25e10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25e110: 0xc52b0018  lwc1        $f11, 0x18($t1)
    ctx->pc = 0x25e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x25e114: 0x460c501a  mula.s      $f10, $f12
    ctx->pc = 0x25e114u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x25e118: 0x460d4882  mul.s       $f2, $f9, $f13
    ctx->pc = 0x25e118u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x25e11c: 0x460d585d  msub.s      $f1, $f11, $f13
    ctx->pc = 0x25e11cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[13]));
    // 0x25e120: 0x460508c2  mul.s       $f3, $f1, $f5
    ctx->pc = 0x25e120u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x25e124: 0x460e581a  mula.s      $f11, $f14
    ctx->pc = 0x25e124u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[14]);
    // 0x25e128: 0x460c485d  msub.s      $f1, $f9, $f12
    ctx->pc = 0x25e128u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[12]));
    // 0x25e12c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x25e12cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x25e130: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x25e130u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x25e134: 0x460e5042  mul.s       $f1, $f10, $f14
    ctx->pc = 0x25e134u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[14]);
    // 0x25e138: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x25e138u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x25e13c: 0x4604085c  madd.s      $f1, $f1, $f4
    ctx->pc = 0x25e13cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x25e140: 0x46080834  c.lt.s      $f1, $f8
    ctx->pc = 0x25e140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e144: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x25E144u;
    {
        const bool branch_taken_0x25e144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e144) {
            ctx->pc = 0x25E158u;
            goto label_25e158;
        }
    }
    ctx->pc = 0x25E14Cu;
    // 0x25e14c: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x25e14cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x25e150: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25E150u;
    {
        const bool branch_taken_0x25e150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E150u;
            // 0x25e154: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e150) {
            ctx->pc = 0x25E168u;
            goto label_25e168;
        }
    }
    ctx->pc = 0x25E158u;
label_25e158:
    // 0x25e158: 0x0  nop
    ctx->pc = 0x25e158u;
    // NOP
    // 0x25e15c: 0x46070843  div.s       $f1, $f1, $f7
    ctx->pc = 0x25e15cu;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[7];
    // 0x25e160: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25e160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25e164: 0x0  nop
    ctx->pc = 0x25e164u;
    // NOP
label_25e168:
    // 0x25e168: 0x3e00008  jr          $ra
    ctx->pc = 0x25E168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E168u;
            // 0x25e16c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25E170u;
}
