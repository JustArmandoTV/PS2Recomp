#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049FE40
// Address: 0x49fe40 - 0x49fe50
void sub_0049FE40_0x49fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FE40_0x49fe40");
#endif

    ctx->pc = 0x49fe40u;

    // 0x49fe40: 0x3e00008  jr          $ra
    ctx->pc = 0x49FE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FE40u;
            // 0x49fe44: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49FE48u;
    // 0x49fe48: 0x0  nop
    ctx->pc = 0x49fe48u;
    // NOP
    // 0x49fe4c: 0x0  nop
    ctx->pc = 0x49fe4cu;
    // NOP
}
