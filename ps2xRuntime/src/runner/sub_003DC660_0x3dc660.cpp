#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DC660
// Address: 0x3dc660 - 0x3dc670
void sub_003DC660_0x3dc660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC660_0x3dc660");
#endif

    ctx->pc = 0x3dc660u;

    // 0x3dc660: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC660u;
            // 0x3dc664: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DC668u;
    // 0x3dc668: 0x0  nop
    ctx->pc = 0x3dc668u;
    // NOP
    // 0x3dc66c: 0x0  nop
    ctx->pc = 0x3dc66cu;
    // NOP
}
