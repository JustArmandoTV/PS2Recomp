#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CB60
// Address: 0x19cb60 - 0x19cb80
void sub_0019CB60_0x19cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CB60_0x19cb60");
#endif

    ctx->pc = 0x19cb60u;

    // 0x19cb60: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x19cb64: 0x3e00008  jr          $ra
    ctx->pc = 0x19CB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB64u;
            // 0x19cb68: 0x8c629930  lw          $v0, -0x66D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940976)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CB6Cu;
    // 0x19cb6c: 0x0  nop
    ctx->pc = 0x19cb6cu;
    // NOP
    // 0x19cb70: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x19cb74: 0x3e00008  jr          $ra
    ctx->pc = 0x19CB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB74u;
            // 0x19cb78: 0xac449934  sw          $a0, -0x66CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940980), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CB7Cu;
    // 0x19cb7c: 0x0  nop
    ctx->pc = 0x19cb7cu;
    // NOP
}
