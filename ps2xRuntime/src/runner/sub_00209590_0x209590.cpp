#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00209590
// Address: 0x209590 - 0x2095c0
void sub_00209590_0x209590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209590_0x209590");
#endif

    ctx->pc = 0x209590u;

    // 0x209590: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x209590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209594: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x209594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x209598: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x209598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20959c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x20959cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2095a0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2095a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2095a4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2095a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2095a8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2095a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2095ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2095ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2095B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2095ACu;
            // 0x2095b0: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2095B4u;
    // 0x2095b4: 0x0  nop
    ctx->pc = 0x2095b4u;
    // NOP
    // 0x2095b8: 0x0  nop
    ctx->pc = 0x2095b8u;
    // NOP
    // 0x2095bc: 0x0  nop
    ctx->pc = 0x2095bcu;
    // NOP
}
