#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164F40
// Address: 0x164f40 - 0x164f48
void sub_00164F40_0x164f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164F40_0x164f40");
#endif

    ctx->pc = 0x164f40u;

    // 0x164f40: 0x3e00008  jr          $ra
    ctx->pc = 0x164F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F40u;
            // 0x164f44: 0x8c8200cc  lw          $v0, 0xCC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164F48u;
}
