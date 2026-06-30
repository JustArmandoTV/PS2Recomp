#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140440
// Address: 0x140440 - 0x140450
void sub_00140440_0x140440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140440_0x140440");
#endif

    ctx->pc = 0x140440u;

    // 0x140440: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x140440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x140444: 0x3e00008  jr          $ra
    ctx->pc = 0x140444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140444u;
            // 0x140448: 0xac645840  sw          $a0, 0x5840($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22592), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14044Cu;
    // 0x14044c: 0x0  nop
    ctx->pc = 0x14044cu;
    // NOP
}
