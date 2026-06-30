#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00397760
// Address: 0x397760 - 0x397770
void sub_00397760_0x397760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397760_0x397760");
#endif

    ctx->pc = 0x397760u;

    // 0x397760: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x397760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x397764: 0x3e00008  jr          $ra
    ctx->pc = 0x397764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397764u;
            // 0x397768: 0x8c426488  lw          $v0, 0x6488($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25736)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39776Cu;
    // 0x39776c: 0x0  nop
    ctx->pc = 0x39776cu;
    // NOP
}
