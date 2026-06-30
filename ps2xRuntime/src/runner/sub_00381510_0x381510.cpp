#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00381510
// Address: 0x381510 - 0x381530
void sub_00381510_0x381510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381510_0x381510");
#endif

    ctx->pc = 0x381510u;

    // 0x381510: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x381510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x381514: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x381514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x381518: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x381518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x38151c: 0x3e00008  jr          $ra
    ctx->pc = 0x38151Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38151Cu;
            // 0x381520: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x381524u;
    // 0x381524: 0x0  nop
    ctx->pc = 0x381524u;
    // NOP
    // 0x381528: 0x0  nop
    ctx->pc = 0x381528u;
    // NOP
    // 0x38152c: 0x0  nop
    ctx->pc = 0x38152cu;
    // NOP
}
