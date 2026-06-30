#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F8960
// Address: 0x2f8960 - 0x2f8970
void sub_002F8960_0x2f8960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8960_0x2f8960");
#endif

    ctx->pc = 0x2f8960u;

    // 0x2f8960: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8960u;
            // 0x2f8964: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8968u;
    // 0x2f8968: 0x0  nop
    ctx->pc = 0x2f8968u;
    // NOP
    // 0x2f896c: 0x0  nop
    ctx->pc = 0x2f896cu;
    // NOP
}
