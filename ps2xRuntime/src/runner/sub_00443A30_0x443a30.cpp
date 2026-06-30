#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00443A30
// Address: 0x443a30 - 0x443a40
void sub_00443A30_0x443a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443A30_0x443a30");
#endif

    ctx->pc = 0x443a30u;

    // 0x443a30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x443a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x443a34: 0x3e00008  jr          $ra
    ctx->pc = 0x443A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443A34u;
            // 0x443a38: 0x8c427528  lw          $v0, 0x7528($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29992)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443A3Cu;
    // 0x443a3c: 0x0  nop
    ctx->pc = 0x443a3cu;
    // NOP
}
