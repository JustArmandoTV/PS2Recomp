#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0E90
// Address: 0x1e0e90 - 0x1e0ea0
void sub_001E0E90_0x1e0e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0E90_0x1e0e90");
#endif

    ctx->pc = 0x1e0e90u;

    // 0x1e0e90: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E90u;
            // 0x1e0e94: 0xe48c0dd8  swc1        $f12, 0xDD8($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3544), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0E98u;
    // 0x1e0e98: 0x0  nop
    ctx->pc = 0x1e0e98u;
    // NOP
    // 0x1e0e9c: 0x0  nop
    ctx->pc = 0x1e0e9cu;
    // NOP
}
