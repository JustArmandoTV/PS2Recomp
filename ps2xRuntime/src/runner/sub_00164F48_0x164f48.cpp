#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164F48
// Address: 0x164f48 - 0x164f50
void sub_00164F48_0x164f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164F48_0x164f48");
#endif

    ctx->pc = 0x164f48u;

    // 0x164f48: 0x3e00008  jr          $ra
    ctx->pc = 0x164F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F48u;
            // 0x164f4c: 0x848200e0  lh          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164F50u;
}
