#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CF700
// Address: 0x2cf700 - 0x2cf720
void sub_002CF700_0x2cf700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF700_0x2cf700");
#endif

    ctx->pc = 0x2cf700u;

    // 0x2cf700: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2cf700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf704: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x2cf704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2cf708: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2cf708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2cf70c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF70Cu;
            // 0x2cf710: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF714u;
    // 0x2cf714: 0x0  nop
    ctx->pc = 0x2cf714u;
    // NOP
    // 0x2cf718: 0x0  nop
    ctx->pc = 0x2cf718u;
    // NOP
    // 0x2cf71c: 0x0  nop
    ctx->pc = 0x2cf71cu;
    // NOP
}
