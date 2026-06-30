#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039F4B0
// Address: 0x39f4b0 - 0x39f4c0
void sub_0039F4B0_0x39f4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F4B0_0x39f4b0");
#endif

    ctx->pc = 0x39f4b0u;

    // 0x39f4b0: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x39f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x39f4b4: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x39f4b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x39f4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x39F4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F4B8u;
            // 0x39f4bc: 0xac86001c  sw          $a2, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39F4C0u;
}
