#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00269B30
// Address: 0x269b30 - 0x269c50
void sub_00269B30_0x269b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269B30_0x269b30");
#endif

    ctx->pc = 0x269b30u;

    // 0x269b30: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x269b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x269b34: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x269b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x269b38: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x269b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x269b3c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x269b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x269b40: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x269b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x269b44: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x269b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x269b48: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x269b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269b4c: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x269b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x269b50: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x269b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269b54: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x269b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269b58: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x269b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x269b5c: 0x46062201  sub.s       $f8, $f4, $f6
    ctx->pc = 0x269b5cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x269b60: 0x46070241  sub.s       $f9, $f0, $f7
    ctx->pc = 0x269b60u;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x269b64: 0x46023901  sub.s       $f4, $f7, $f2
    ctx->pc = 0x269b64u;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x269b68: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x269b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269b6c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x269b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269b70: 0x46013081  sub.s       $f2, $f6, $f1
    ctx->pc = 0x269b70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x269b74: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x269b74u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x269b78: 0x46002841  sub.s       $f1, $f5, $f0
    ctx->pc = 0x269b78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x269b7c: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x269b7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x269b80: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x269b80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x269b84: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x269b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x269b88: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x269b88u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x269b8c: 0x4601481d  msub.s      $f0, $f9, $f1
    ctx->pc = 0x269b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x269b90: 0x4602481a  mula.s      $f9, $f2
    ctx->pc = 0x269b90u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x269b94: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x269b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x269b98: 0x4604401d  msub.s      $f0, $f8, $f4
    ctx->pc = 0x269b98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
    // 0x269b9c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x269b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x269ba0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x269ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x269ba4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x269ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269ba8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x269ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269bac: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x269bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269bb0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x269bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x269bb4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x269bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x269bb8: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x269bb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269bbc: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x269bbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x269bc0: 0x460a0832  c.eq.s      $f1, $f10
    ctx->pc = 0x269bc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269bc4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x269BC4u;
    {
        const bool branch_taken_0x269bc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x269BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269BC4u;
            // 0x269bc8: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bc4) {
            ctx->pc = 0x269BE8u;
            goto label_269be8;
        }
    }
    ctx->pc = 0x269BCCu;
    // 0x269bcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x269bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269bd0: 0x0  nop
    ctx->pc = 0x269bd0u;
    // NOP
    // 0x269bd4: 0x46010296  rsqrt.s     $f10, $f0, $f1
    ctx->pc = 0x269bd4u;
    ctx->f[10] = 1.0f / sqrtf(ctx->f[0]);
    // 0x269bd8: 0x0  nop
    ctx->pc = 0x269bd8u;
    // NOP
    // 0x269bdc: 0x0  nop
    ctx->pc = 0x269bdcu;
    // NOP
    // 0x269be0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x269BE0u;
    {
        const bool branch_taken_0x269be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269be0) {
            ctx->pc = 0x269BE8u;
            goto label_269be8;
        }
    }
    ctx->pc = 0x269BE8u;
label_269be8:
    // 0x269be8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x269be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269bec: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x269becu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x269bf0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x269bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x269bf4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x269bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269bf8: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x269bf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x269bfc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x269bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x269c00: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x269c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269c04: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x269c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x269c08: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x269c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x269c0c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x269c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269c10: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x269c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x269c14: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x269c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x269c18: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x269c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x269c1c: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x269c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x269c20: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x269c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269c24: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x269c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269c28: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x269c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x269c2c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x269c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269c30: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x269c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269c34: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x269c34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x269c38: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x269c38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x269c3c: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x269c3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x269c40: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x269c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x269c44: 0x3e00008  jr          $ra
    ctx->pc = 0x269C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269C44u;
            // 0x269c48: 0xe4800040  swc1        $f0, 0x40($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269C4Cu;
    // 0x269c4c: 0x0  nop
    ctx->pc = 0x269c4cu;
    // NOP
}
