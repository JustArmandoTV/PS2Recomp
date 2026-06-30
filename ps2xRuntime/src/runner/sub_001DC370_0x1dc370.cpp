#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC370
// Address: 0x1dc370 - 0x1dc380
void sub_001DC370_0x1dc370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC370_0x1dc370");
#endif

    ctx->pc = 0x1dc370u;

    // 0x1dc370: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x1dc370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
    // 0x1dc374: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1dc374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1dc378: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC378u;
            // 0x1dc37c: 0xac830da0  sw          $v1, 0xDA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC380u;
}
