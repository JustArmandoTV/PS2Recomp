#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A45B0
// Address: 0x2a45b0 - 0x2a45d0
void sub_002A45B0_0x2a45b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A45B0_0x2a45b0");
#endif

    ctx->pc = 0x2a45b0u;

    // 0x2a45b0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a45b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a45b4: 0xe48001bc  swc1        $f0, 0x1BC($a0)
    ctx->pc = 0x2a45b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 444), bits); }
    // 0x2a45b8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2a45b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a45bc: 0xe48001c0  swc1        $f0, 0x1C0($a0)
    ctx->pc = 0x2a45bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 448), bits); }
    // 0x2a45c0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a45c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a45c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A45C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A45C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A45C4u;
            // 0x2a45c8: 0xe48001c4  swc1        $f0, 0x1C4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 452), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A45CCu;
    // 0x2a45cc: 0x0  nop
    ctx->pc = 0x2a45ccu;
    // NOP
}
