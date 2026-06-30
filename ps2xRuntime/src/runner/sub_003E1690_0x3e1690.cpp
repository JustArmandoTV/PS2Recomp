#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E1690
// Address: 0x3e1690 - 0x3e1720
void sub_003E1690_0x3e1690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1690_0x3e1690");
#endif

    ctx->pc = 0x3e1690u;

    // 0x3e1690: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3e1690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e1694: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3e1694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3e1698: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3e1698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e169c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x3e169cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3e16a0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3e16a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e16a4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3e16a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3e16a8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3e16a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e16ac: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3e16acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3e16b0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3e16b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e16b4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x3e16b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3e16b8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3e16b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e16bc: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x3e16bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3e16c0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3e16c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e16c4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x3e16c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x3e16c8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3e16c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e16cc: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x3e16ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x3e16d0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3e16d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e16d4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x3e16d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x3e16d8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3e16d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e16dc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x3e16dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x3e16e0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x3e16e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e16e4: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x3e16e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x3e16e8: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x3e16e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e16ec: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x3e16ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x3e16f0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3e16f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e16f4: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x3e16f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x3e16f8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x3e16f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e16fc: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x3e16fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x3e1700: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x3e1700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e1704: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x3e1704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x3e1708: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x3e1708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e170c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x3e170cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x3e1710: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x3e1710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x3e1714: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3e1714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3e1718: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E171Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1718u;
            // 0x3e171c: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E1720u;
}
