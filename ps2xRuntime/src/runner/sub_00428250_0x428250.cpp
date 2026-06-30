#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00428250
// Address: 0x428250 - 0x4282e0
void sub_00428250_0x428250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428250_0x428250");
#endif

    ctx->pc = 0x428250u;

    // 0x428250: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x428250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x428254: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x428254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x428258: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x428258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42825c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x42825cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x428260: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x428260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x428264: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x428264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x428268: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x428268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42826c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x42826cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x428270: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x428270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x428274: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x428274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x428278: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x428278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42827c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x42827cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x428280: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x428280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x428284: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x428284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x428288: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x428288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42828c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x42828cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x428290: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x428290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x428294: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x428294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x428298: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x428298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42829c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x42829cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x4282a0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x4282a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4282a4: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x4282a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x4282a8: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x4282a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4282ac: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x4282acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x4282b0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x4282b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4282b4: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x4282b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x4282b8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x4282b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4282bc: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x4282bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x4282c0: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x4282c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4282c4: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x4282c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x4282c8: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x4282c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4282cc: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x4282ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x4282d0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x4282d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x4282d4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x4282d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x4282d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4282D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4282DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4282D8u;
            // 0x4282dc: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4282E0u;
}
