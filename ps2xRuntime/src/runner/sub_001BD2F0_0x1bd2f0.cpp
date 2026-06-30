#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD2F0
// Address: 0x1bd2f0 - 0x1bd300
void sub_001BD2F0_0x1bd2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD2F0_0x1bd2f0");
#endif

    ctx->pc = 0x1bd2f0u;

    // 0x1bd2f0: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x1bd2f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1bd2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2F4u;
            // 0x1bd2f8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD2FCu;
    // 0x1bd2fc: 0x0  nop
    ctx->pc = 0x1bd2fcu;
    // NOP
}
