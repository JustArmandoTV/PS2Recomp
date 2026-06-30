#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8F68
// Address: 0x1b8f68 - 0x1b8f80
void sub_001B8F68_0x1b8f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8F68_0x1b8f68");
#endif

    ctx->pc = 0x1b8f68u;

    // 0x1b8f68: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1b8f68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b8f6c: 0xfc820138  sd          $v0, 0x138($a0)
    ctx->pc = 0x1b8f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 312), GPR_U64(ctx, 2));
    // 0x1b8f70: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x1b8f70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b8f74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F74u;
            // 0x1b8f78: 0xfc830140  sd          $v1, 0x140($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 320), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8F7Cu;
    // 0x1b8f7c: 0x0  nop
    ctx->pc = 0x1b8f7cu;
    // NOP
}
