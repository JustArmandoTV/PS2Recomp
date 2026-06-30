#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A270
// Address: 0x10a270 - 0x10a280
void sub_0010A270_0x10a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A270_0x10a270");
#endif

    ctx->pc = 0x10a270u;

    // 0x10a270: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x10a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10a274: 0x3e00008  jr          $ra
    ctx->pc = 0x10A274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A274u;
            // 0x10a278: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A27Cu;
    // 0x10a27c: 0x0  nop
    ctx->pc = 0x10a27cu;
    // NOP
}
