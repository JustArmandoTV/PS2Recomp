#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028E900
// Address: 0x28e900 - 0x28e990
void sub_0028E900_0x28e900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E900_0x28e900");
#endif

    ctx->pc = 0x28e900u;

    // 0x28e900: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x28e900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e904: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28e904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x28e908: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x28e908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e90c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x28e90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28e910: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x28e910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e914: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x28e914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x28e918: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x28e918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x28e91c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x28e91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e920: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x28e920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x28e924: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x28e924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e928: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x28e928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x28e92c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x28e92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e930: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x28e930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x28e934: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x28e934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x28e938: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x28e938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e93c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x28e93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x28e940: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x28e940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e944: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x28e944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x28e948: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x28e948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e94c: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x28e94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x28e950: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x28e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e954: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x28e954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x28e958: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x28e958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e95c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x28e95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x28e960: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x28e960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e964: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x28e964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x28e968: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x28e968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e96c: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x28e96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x28e970: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x28e970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e974: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x28e974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x28e978: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x28e978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x28e97c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x28e97cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x28e980: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x28e980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x28e984: 0x3e00008  jr          $ra
    ctx->pc = 0x28E984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E984u;
            // 0x28e988: 0xac800040  sw          $zero, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28E98Cu;
    // 0x28e98c: 0x0  nop
    ctx->pc = 0x28e98cu;
    // NOP
}
