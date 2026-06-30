#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A45D0
// Address: 0x2a45d0 - 0x2a45f0
void sub_002A45D0_0x2a45d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A45D0_0x2a45d0");
#endif

    ctx->pc = 0x2a45d0u;

    // 0x2a45d0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a45d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a45d4: 0xe48001b0  swc1        $f0, 0x1B0($a0)
    ctx->pc = 0x2a45d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 432), bits); }
    // 0x2a45d8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2a45d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a45dc: 0xe48001b4  swc1        $f0, 0x1B4($a0)
    ctx->pc = 0x2a45dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 436), bits); }
    // 0x2a45e0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a45e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a45e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A45E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A45E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A45E4u;
            // 0x2a45e8: 0xe48001b8  swc1        $f0, 0x1B8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 440), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A45ECu;
    // 0x2a45ec: 0x0  nop
    ctx->pc = 0x2a45ecu;
    // NOP
}
