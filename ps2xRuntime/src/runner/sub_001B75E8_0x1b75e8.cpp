#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B75E8
// Address: 0x1b75e8 - 0x1b75f8
void sub_001B75E8_0x1b75e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B75E8_0x1b75e8");
#endif

    ctx->pc = 0x1b75e8u;

    // 0x1b75e8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1b75e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b75ec: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1b75ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1b75f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B75F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B75F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B75F0u;
            // 0x1b75f4: 0xac850d88  sw          $a1, 0xD88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3464), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B75F8u;
}
