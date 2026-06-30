#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047F910
// Address: 0x47f910 - 0x47f920
void sub_0047F910_0x47f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F910_0x47f910");
#endif

    ctx->pc = 0x47f910u;

    // 0x47f910: 0x3e00008  jr          $ra
    ctx->pc = 0x47F910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F910u;
            // 0x47f914: 0x8c8200d0  lw          $v0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47F918u;
    // 0x47f918: 0x0  nop
    ctx->pc = 0x47f918u;
    // NOP
    // 0x47f91c: 0x0  nop
    ctx->pc = 0x47f91cu;
    // NOP
}
