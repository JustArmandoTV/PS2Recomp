#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00301560
// Address: 0x301560 - 0x301570
void sub_00301560_0x301560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301560_0x301560");
#endif

    ctx->pc = 0x301560u;

    // 0x301560: 0x3e00008  jr          $ra
    ctx->pc = 0x301560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301560u;
            // 0x301564: 0x2482005c  addiu       $v0, $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x301568u;
    // 0x301568: 0x0  nop
    ctx->pc = 0x301568u;
    // NOP
    // 0x30156c: 0x0  nop
    ctx->pc = 0x30156cu;
    // NOP
}
