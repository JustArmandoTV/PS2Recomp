#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00362A00
// Address: 0x362a00 - 0x362a10
void sub_00362A00_0x362a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362A00_0x362a00");
#endif

    ctx->pc = 0x362a00u;

    // 0x362a00: 0x3e00008  jr          $ra
    ctx->pc = 0x362A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362A00u;
            // 0x362a04: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x362A08u;
    // 0x362a08: 0x0  nop
    ctx->pc = 0x362a08u;
    // NOP
    // 0x362a0c: 0x0  nop
    ctx->pc = 0x362a0cu;
    // NOP
}
