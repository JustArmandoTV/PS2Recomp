#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6970
// Address: 0x2b6970 - 0x2b6980
void sub_002B6970_0x2b6970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6970_0x2b6970");
#endif

    ctx->pc = 0x2b6970u;

    // 0x2b6970: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b6970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b6974: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6974u;
            // 0x2b6978: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B697Cu;
    // 0x2b697c: 0x0  nop
    ctx->pc = 0x2b697cu;
    // NOP
}
