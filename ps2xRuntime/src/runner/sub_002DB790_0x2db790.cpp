#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB790
// Address: 0x2db790 - 0x2db7c0
void sub_002DB790_0x2db790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB790_0x2db790");
#endif

    ctx->pc = 0x2db790u;

    // 0x2db790: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2db790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db794: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2db794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2db798: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2db798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db79c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2db79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2db7a0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2db7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db7a4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2db7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2db7a8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2db7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB7ACu;
            // 0x2db7b0: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB7B4u;
    // 0x2db7b4: 0x0  nop
    ctx->pc = 0x2db7b4u;
    // NOP
    // 0x2db7b8: 0x0  nop
    ctx->pc = 0x2db7b8u;
    // NOP
    // 0x2db7bc: 0x0  nop
    ctx->pc = 0x2db7bcu;
    // NOP
}
