#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028CC30
// Address: 0x28cc30 - 0x28cc90
void sub_0028CC30_0x28cc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CC30_0x28cc30");
#endif

    ctx->pc = 0x28cc30u;

    // 0x28cc30: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x28cc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cc34: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28cc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x28cc38: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x28cc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cc3c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x28cc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x28cc40: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x28cc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cc44: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x28cc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x28cc48: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x28cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x28cc4c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x28cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x28cc50: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x28cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x28cc54: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x28cc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cc58: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x28cc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28cc5c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x28cc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cc60: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x28cc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x28cc64: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x28cc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cc68: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x28cc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x28cc6c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x28cc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cc70: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x28cc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x28cc74: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x28cc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cc78: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x28cc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x28cc7c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x28cc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cc80: 0x3e00008  jr          $ra
    ctx->pc = 0x28CC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC80u;
            // 0x28cc84: 0xe4800024  swc1        $f0, 0x24($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CC88u;
    // 0x28cc88: 0x0  nop
    ctx->pc = 0x28cc88u;
    // NOP
    // 0x28cc8c: 0x0  nop
    ctx->pc = 0x28cc8cu;
    // NOP
}
