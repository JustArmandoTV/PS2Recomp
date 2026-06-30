#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BB670
// Address: 0x2bb670 - 0x2bb680
void sub_002BB670_0x2bb670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB670_0x2bb670");
#endif

    ctx->pc = 0x2bb670u;

    // 0x2bb670: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2bb670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2bb674: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB674u;
            // 0x2bb678: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB67Cu;
    // 0x2bb67c: 0x0  nop
    ctx->pc = 0x2bb67cu;
    // NOP
}
