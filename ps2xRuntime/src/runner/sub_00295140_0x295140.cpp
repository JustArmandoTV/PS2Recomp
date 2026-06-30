#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295140
// Address: 0x295140 - 0x295170
void sub_00295140_0x295140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295140_0x295140");
#endif

    ctx->pc = 0x295140u;

    // 0x295140: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x295140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295144: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x295144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x295148: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x295148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29514c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x29514cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x295150: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x295150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295154: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x295154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x295158: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x295158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29515c: 0x3e00008  jr          $ra
    ctx->pc = 0x29515Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29515Cu;
            // 0x295160: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295164u;
    // 0x295164: 0x0  nop
    ctx->pc = 0x295164u;
    // NOP
    // 0x295168: 0x0  nop
    ctx->pc = 0x295168u;
    // NOP
    // 0x29516c: 0x0  nop
    ctx->pc = 0x29516cu;
    // NOP
}
