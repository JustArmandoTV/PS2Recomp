#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00348760
// Address: 0x348760 - 0x348780
void sub_00348760_0x348760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348760_0x348760");
#endif

    ctx->pc = 0x348760u;

    // 0x348760: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x348760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x348764: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x348764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x348768: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x348768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x34876c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x34876cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x348770: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x348770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x348774: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x348774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x348778: 0x3e00008  jr          $ra
    ctx->pc = 0x348778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34877Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348778u;
            // 0x34877c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x348780u;
}
