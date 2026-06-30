#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A530
// Address: 0x13a530 - 0x13a570
void sub_0013A530_0x13a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A530_0x13a530");
#endif

    ctx->pc = 0x13a530u;

    // 0x13a530: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x13a530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a534: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x13a534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x13a538: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x13a538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a53c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x13a53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x13a540: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x13a540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a544: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x13a544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x13a548: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x13a548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a54c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x13a54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x13a550: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x13a550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a554: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x13a554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x13a558: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x13a558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a55c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x13a55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x13a560: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x13a560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a564: 0x3e00008  jr          $ra
    ctx->pc = 0x13A564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A564u;
            // 0x13a568: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A56Cu;
    // 0x13a56c: 0x0  nop
    ctx->pc = 0x13a56cu;
    // NOP
}
