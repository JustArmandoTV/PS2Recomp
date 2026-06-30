#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8F80
// Address: 0x1b8f80 - 0x1b8f98
void sub_001B8F80_0x1b8f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8F80_0x1b8f80");
#endif

    ctx->pc = 0x1b8f80u;

    // 0x1b8f80: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1b8f80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b8f84: 0xfc820148  sd          $v0, 0x148($a0)
    ctx->pc = 0x1b8f84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 328), GPR_U64(ctx, 2));
    // 0x1b8f88: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x1b8f88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b8f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F8Cu;
            // 0x1b8f90: 0xfc830150  sd          $v1, 0x150($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 336), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8F94u;
    // 0x1b8f94: 0x0  nop
    ctx->pc = 0x1b8f94u;
    // NOP
}
