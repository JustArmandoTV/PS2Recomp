#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8FB0
// Address: 0x1b8fb0 - 0x1b8fc8
void sub_001B8FB0_0x1b8fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8FB0_0x1b8fb0");
#endif

    ctx->pc = 0x1b8fb0u;

    // 0x1b8fb0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1b8fb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b8fb4: 0xfc820168  sd          $v0, 0x168($a0)
    ctx->pc = 0x1b8fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 360), GPR_U64(ctx, 2));
    // 0x1b8fb8: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x1b8fb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b8fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FBCu;
            // 0x1b8fc0: 0xfc830170  sd          $v1, 0x170($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 368), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8FC4u;
    // 0x1b8fc4: 0x0  nop
    ctx->pc = 0x1b8fc4u;
    // NOP
}
