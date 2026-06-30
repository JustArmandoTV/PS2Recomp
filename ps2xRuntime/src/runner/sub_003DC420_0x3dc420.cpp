#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DC420
// Address: 0x3dc420 - 0x3dc430
void sub_003DC420_0x3dc420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC420_0x3dc420");
#endif

    ctx->pc = 0x3dc420u;

    // 0x3dc420: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC420u;
            // 0x3dc424: 0xc480006c  lwc1        $f0, 0x6C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DC428u;
    // 0x3dc428: 0x0  nop
    ctx->pc = 0x3dc428u;
    // NOP
    // 0x3dc42c: 0x0  nop
    ctx->pc = 0x3dc42cu;
    // NOP
}
