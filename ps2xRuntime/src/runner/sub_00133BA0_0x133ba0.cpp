#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133BA0
// Address: 0x133ba0 - 0x133bf0
void sub_00133BA0_0x133ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133BA0_0x133ba0");
#endif

    ctx->pc = 0x133ba0u;

    // 0x133ba0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x133ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133ba4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x133ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x133ba8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x133ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133bac: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x133bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x133bb0: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x133bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133bb4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x133bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x133bb8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x133bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133bbc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x133bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x133bc0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x133bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133bc4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x133bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x133bc8: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x133bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133bcc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x133bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x133bd0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x133bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133bd4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x133bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x133bd8: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x133bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133bdc: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x133bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x133be0: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x133be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133be4: 0x3e00008  jr          $ra
    ctx->pc = 0x133BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133BE4u;
            // 0x133be8: 0xe4800028  swc1        $f0, 0x28($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133BECu;
    // 0x133bec: 0x0  nop
    ctx->pc = 0x133becu;
    // NOP
}
