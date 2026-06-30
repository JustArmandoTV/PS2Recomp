#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028CEF0
// Address: 0x28cef0 - 0x28cfc0
void sub_0028CEF0_0x28cef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CEF0_0x28cef0");
#endif

    ctx->pc = 0x28cef0u;

    // 0x28cef0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x28cef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cef4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x28cef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cef8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28cef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28cefc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28cefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x28cf00: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x28cf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cf04: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x28cf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cf08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28cf08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28cf0c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x28cf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28cf10: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x28cf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cf14: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x28cf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cf18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28cf18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28cf1c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x28cf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x28cf20: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x28cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cf24: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x28cf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cf28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28cf28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28cf2c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x28cf2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x28cf30: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x28cf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cf34: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x28cf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cf38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28cf38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28cf3c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x28cf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x28cf40: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x28cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cf44: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x28cf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cf48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28cf48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28cf4c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x28cf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x28cf50: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x28cf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cf54: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x28cf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cf58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28cf58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28cf5c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x28cf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x28cf60: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x28cf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cf64: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x28cf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cf68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28cf68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28cf6c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x28cf6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x28cf70: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x28cf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cf74: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x28cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cf78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28cf78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28cf7c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x28cf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x28cf80: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x28cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cf84: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x28cf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cf88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28cf88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28cf8c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x28cf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x28cf90: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x28cf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cf94: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x28cf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cf98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28cf98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28cf9c: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x28cf9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x28cfa0: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x28cfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cfa4: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x28cfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cfa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28cfa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28cfac: 0x3e00008  jr          $ra
    ctx->pc = 0x28CFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CFACu;
            // 0x28cfb0: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CFB4u;
    // 0x28cfb4: 0x0  nop
    ctx->pc = 0x28cfb4u;
    // NOP
    // 0x28cfb8: 0x0  nop
    ctx->pc = 0x28cfb8u;
    // NOP
    // 0x28cfbc: 0x0  nop
    ctx->pc = 0x28cfbcu;
    // NOP
}
