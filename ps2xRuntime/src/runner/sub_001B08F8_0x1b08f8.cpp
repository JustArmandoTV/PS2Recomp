#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B08F8
// Address: 0x1b08f8 - 0x1b0918
void sub_001B08F8_0x1b08f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B08F8_0x1b08f8");
#endif

    ctx->pc = 0x1b08f8u;

    // 0x1b08f8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B08F8u;
    {
        const bool branch_taken_0x1b08f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B08FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B08F8u;
            // 0x1b08fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08f8) {
            ctx->pc = 0x1B090Cu;
            goto label_1b090c;
        }
    }
    ctx->pc = 0x1B0900u;
    // 0x1b0900: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1b0900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1b0904: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x1b0904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1b0908: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b0908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b090c:
    // 0x1b090c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B090Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0914u;
    // 0x1b0914: 0x0  nop
    ctx->pc = 0x1b0914u;
    // NOP
}
