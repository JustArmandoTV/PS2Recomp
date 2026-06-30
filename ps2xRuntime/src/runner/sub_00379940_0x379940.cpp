#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00379940
// Address: 0x379940 - 0x379950
void sub_00379940_0x379940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379940_0x379940");
#endif

    ctx->pc = 0x379940u;

    // 0x379940: 0x3e00008  jr          $ra
    ctx->pc = 0x379940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379940u;
            // 0x379944: 0x8c8200d4  lw          $v0, 0xD4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x379948u;
    // 0x379948: 0x0  nop
    ctx->pc = 0x379948u;
    // NOP
    // 0x37994c: 0x0  nop
    ctx->pc = 0x37994cu;
    // NOP
}
