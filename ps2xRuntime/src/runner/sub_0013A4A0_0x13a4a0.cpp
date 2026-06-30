#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A4A0
// Address: 0x13a4a0 - 0x13a4e0
void sub_0013A4A0_0x13a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A4A0_0x13a4a0");
#endif

    ctx->pc = 0x13a4a0u;

    // 0x13a4a0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x13a4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4a4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x13a4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x13a4a8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x13a4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4ac: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x13a4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x13a4b0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x13a4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4b4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x13a4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x13a4b8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x13a4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4bc: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x13a4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x13a4c0: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x13a4c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x13a4c4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x13a4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4c8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x13a4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x13a4cc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x13a4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4d0: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x13a4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x13a4d4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x13a4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x13A4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A4D8u;
            // 0x13a4dc: 0xe4800020  swc1        $f0, 0x20($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A4E0u;
}
