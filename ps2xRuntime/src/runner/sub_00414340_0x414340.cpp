#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00414340
// Address: 0x414340 - 0x4143d0
void sub_00414340_0x414340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414340_0x414340");
#endif

    ctx->pc = 0x414340u;

    // 0x414340: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x414340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x414344: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x414344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x414348: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x414348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41434c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x41434cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x414350: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x414350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x414354: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x414354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x414358: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x414358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41435c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x41435cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x414360: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x414360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x414364: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x414364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x414368: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x414368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41436c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x41436cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x414370: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x414370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x414374: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x414374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x414378: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x414378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41437c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x41437cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x414380: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x414380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x414384: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x414384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x414388: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x414388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41438c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x41438cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x414390: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x414390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x414394: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x414394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x414398: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x414398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41439c: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x41439cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x4143a0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x4143a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4143a4: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x4143a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x4143a8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x4143a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4143ac: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x4143acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x4143b0: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x4143b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4143b4: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x4143b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x4143b8: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x4143b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4143bc: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x4143bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x4143c0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x4143c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x4143c4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x4143c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x4143c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4143C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4143CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4143C8u;
            // 0x4143cc: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4143D0u;
}
