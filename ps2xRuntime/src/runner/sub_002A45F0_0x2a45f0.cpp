#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A45F0
// Address: 0x2a45f0 - 0x2a4610
void sub_002A45F0_0x2a45f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A45F0_0x2a45f0");
#endif

    ctx->pc = 0x2a45f0u;

    // 0x2a45f0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a45f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a45f4: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x2a45f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x2a45f8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2a45f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a45fc: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x2a45fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x2a4600: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a4600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4604: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4604u;
            // 0x2a4608: 0xe48001ac  swc1        $f0, 0x1AC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 428), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A460Cu;
    // 0x2a460c: 0x0  nop
    ctx->pc = 0x2a460cu;
    // NOP
}
