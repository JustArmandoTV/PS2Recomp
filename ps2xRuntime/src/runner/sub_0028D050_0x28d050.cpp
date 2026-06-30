#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028D050
// Address: 0x28d050 - 0x28d0f0
void sub_0028D050_0x28d050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D050_0x28d050");
#endif

    ctx->pc = 0x28d050u;

    // 0x28d050: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x28d050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d054: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28d054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28d058: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28d058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x28d05c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x28d05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d060: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28d060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28d064: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x28d064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28d068: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x28d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d06c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28d06cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28d070: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x28d070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x28d074: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x28d074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d078: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28d078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28d07c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x28d07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x28d080: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x28d080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d084: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28d084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28d088: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x28d088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x28d08c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x28d08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d090: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28d090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28d094: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x28d094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x28d098: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x28d098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d09c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28d09cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28d0a0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x28d0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x28d0a4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x28d0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d0a8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28d0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28d0ac: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x28d0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x28d0b0: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x28d0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d0b4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28d0b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28d0b8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x28d0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x28d0bc: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x28d0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d0c0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28d0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28d0c4: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x28d0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x28d0c8: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x28d0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d0cc: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28d0ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28d0d0: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x28d0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x28d0d4: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x28d0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d0d8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28d0d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28d0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x28D0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0DCu;
            // 0x28d0e0: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D0E4u;
    // 0x28d0e4: 0x0  nop
    ctx->pc = 0x28d0e4u;
    // NOP
    // 0x28d0e8: 0x0  nop
    ctx->pc = 0x28d0e8u;
    // NOP
    // 0x28d0ec: 0x0  nop
    ctx->pc = 0x28d0ecu;
    // NOP
}
