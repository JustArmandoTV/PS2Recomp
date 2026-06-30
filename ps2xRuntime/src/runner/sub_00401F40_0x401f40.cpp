#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00401F40
// Address: 0x401f40 - 0x401f50
void sub_00401F40_0x401f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00401F40_0x401f40");
#endif

    ctx->pc = 0x401f40u;

    // 0x401f40: 0x3e00008  jr          $ra
    ctx->pc = 0x401F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x401F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401F40u;
            // 0x401f44: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x401F48u;
    // 0x401f48: 0x0  nop
    ctx->pc = 0x401f48u;
    // NOP
    // 0x401f4c: 0x0  nop
    ctx->pc = 0x401f4cu;
    // NOP
}
