#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00382070
// Address: 0x382070 - 0x382090
void sub_00382070_0x382070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382070_0x382070");
#endif

    ctx->pc = 0x382070u;

    // 0x382070: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x382070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x382074: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x382074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x382078: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x382078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38207c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x38207cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x382080: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x382080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x382084: 0x3e00008  jr          $ra
    ctx->pc = 0x382084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382084u;
            // 0x382088: 0xe482001c  swc1        $f2, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38208Cu;
    // 0x38208c: 0x0  nop
    ctx->pc = 0x38208cu;
    // NOP
}
