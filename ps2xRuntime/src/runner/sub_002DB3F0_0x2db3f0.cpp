#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB3F0
// Address: 0x2db3f0 - 0x2db400
void sub_002DB3F0_0x2db3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB3F0_0x2db3f0");
#endif

    ctx->pc = 0x2db3f0u;

    // 0x2db3f0: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x2db3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db3f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2db3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB3F8u;
            // 0x2db3fc: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB400u;
}
