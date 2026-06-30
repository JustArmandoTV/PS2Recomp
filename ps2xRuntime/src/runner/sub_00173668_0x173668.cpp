#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173668
// Address: 0x173668 - 0x173680
void sub_00173668_0x173668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173668_0x173668");
#endif

    ctx->pc = 0x173668u;

    // 0x173668: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x173668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17366c: 0x24633f3c  addiu       $v1, $v1, 0x3F3C
    ctx->pc = 0x17366cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16188));
    // 0x173670: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x173670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x173674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x173678: 0x3e00008  jr          $ra
    ctx->pc = 0x173678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17367Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173678u;
            // 0x17367c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173680u;
}
