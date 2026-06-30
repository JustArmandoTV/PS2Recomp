#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBAB8
// Address: 0x1bbab8 - 0x1bbad0
void sub_001BBAB8_0x1bbab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBAB8_0x1bbab8");
#endif

    ctx->pc = 0x1bbab8u;

    // 0x1bbab8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1bbab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1bbabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbac0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1bbac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbac4: 0x8cc3008c  lw          $v1, 0x8C($a2)
    ctx->pc = 0x1bbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x1bbac8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBAC8u;
            // 0x1bbacc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBAD0u;
}
