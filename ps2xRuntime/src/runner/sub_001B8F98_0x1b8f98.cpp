#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8F98
// Address: 0x1b8f98 - 0x1b8fb0
void sub_001B8F98_0x1b8f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8F98_0x1b8f98");
#endif

    ctx->pc = 0x1b8f98u;

    // 0x1b8f98: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1b8f98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b8f9c: 0xfc820158  sd          $v0, 0x158($a0)
    ctx->pc = 0x1b8f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 344), GPR_U64(ctx, 2));
    // 0x1b8fa0: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x1b8fa0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b8fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FA4u;
            // 0x1b8fa8: 0xfc830160  sd          $v1, 0x160($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 352), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8FACu;
    // 0x1b8fac: 0x0  nop
    ctx->pc = 0x1b8facu;
    // NOP
}
