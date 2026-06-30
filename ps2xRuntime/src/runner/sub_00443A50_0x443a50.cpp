#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00443A50
// Address: 0x443a50 - 0x443a60
void sub_00443A50_0x443a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443A50_0x443a50");
#endif

    ctx->pc = 0x443a50u;

    // 0x443a50: 0x3e00008  jr          $ra
    ctx->pc = 0x443A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443A50u;
            // 0x443a54: 0xc4800044  lwc1        $f0, 0x44($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443A58u;
    // 0x443a58: 0x0  nop
    ctx->pc = 0x443a58u;
    // NOP
    // 0x443a5c: 0x0  nop
    ctx->pc = 0x443a5cu;
    // NOP
}
