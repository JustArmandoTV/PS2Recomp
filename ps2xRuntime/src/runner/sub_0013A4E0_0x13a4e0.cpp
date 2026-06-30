#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A4E0
// Address: 0x13a4e0 - 0x13a530
void sub_0013A4E0_0x13a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A4E0_0x13a4e0");
#endif

    ctx->pc = 0x13a4e0u;

    // 0x13a4e0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x13a4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4e4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x13a4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x13a4e8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x13a4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4ec: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x13a4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x13a4f0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x13a4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4f4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x13a4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x13a4f8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x13a4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4fc: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x13a4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x13a500: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x13a500u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x13a504: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x13a504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a508: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x13a508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x13a50c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x13a50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a510: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x13a510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x13a514: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x13a514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a518: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x13a518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x13a51c: 0xe48d0024  swc1        $f13, 0x24($a0)
    ctx->pc = 0x13a51cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x13a520: 0x3e00008  jr          $ra
    ctx->pc = 0x13A520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A520u;
            // 0x13a524: 0xe48e0028  swc1        $f14, 0x28($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A528u;
    // 0x13a528: 0x0  nop
    ctx->pc = 0x13a528u;
    // NOP
    // 0x13a52c: 0x0  nop
    ctx->pc = 0x13a52cu;
    // NOP
}
