#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347680
// Address: 0x347680 - 0x347690
void sub_00347680_0x347680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347680_0x347680");
#endif

    ctx->pc = 0x347680u;

    // 0x347680: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x347680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x347684: 0x3e00008  jr          $ra
    ctx->pc = 0x347684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347684u;
            // 0x347688: 0x8c423ea8  lw          $v0, 0x3EA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16040)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34768Cu;
    // 0x34768c: 0x0  nop
    ctx->pc = 0x34768cu;
    // NOP
}
