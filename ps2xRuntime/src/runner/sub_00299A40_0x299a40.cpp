#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00299A40
// Address: 0x299a40 - 0x299b10
void sub_00299A40_0x299a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299A40_0x299a40");
#endif

    ctx->pc = 0x299a40u;

    // 0x299a40: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x299a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299a44: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x299a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299a48: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x299a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299a4c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x299a4cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x299a50: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x299a50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x299a54: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x299a54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x299a58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299a58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299a5c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x299a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x299a60: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x299a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299a64: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x299a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299a68: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x299a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299a6c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x299a6cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x299a70: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x299a70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x299a74: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x299a74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x299a78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299a7c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x299a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x299a80: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x299a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299a84: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x299a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299a88: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x299a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299a8c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x299a8cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x299a90: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x299a90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x299a94: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x299a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x299a98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299a9c: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x299a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x299aa0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x299aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299aa4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x299aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299aa8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x299aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299aac: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x299aacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x299ab0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x299ab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x299ab4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x299ab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299ab8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x299ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x299abc: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x299abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x299ac0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x299ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299ac4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x299ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299ac8: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x299ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299acc: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x299accu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x299ad0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x299ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x299ad4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x299ad4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299ad8: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x299ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x299adc: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x299adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x299ae0: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x299ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299ae4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x299ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299ae8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x299ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299aec: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x299aecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x299af0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x299af0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x299af4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x299af4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299af8: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x299af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x299afc: 0x3e00008  jr          $ra
    ctx->pc = 0x299AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299AFCu;
            // 0x299b00: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299B04u;
    // 0x299b04: 0x0  nop
    ctx->pc = 0x299b04u;
    // NOP
    // 0x299b08: 0x0  nop
    ctx->pc = 0x299b08u;
    // NOP
    // 0x299b0c: 0x0  nop
    ctx->pc = 0x299b0cu;
    // NOP
}
