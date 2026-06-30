#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00165250
// Address: 0x165250 - 0x165268
void sub_00165250_0x165250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165250_0x165250");
#endif

    ctx->pc = 0x165250u;

    // 0x165250: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x165250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x165254: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x165254u;
    {
        const bool branch_taken_0x165254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165254u;
            // 0x165258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165254) {
            ctx->pc = 0x165260u;
            goto label_165260;
        }
    }
    ctx->pc = 0x16525Cu;
    // 0x16525c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x16525cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_165260:
    // 0x165260: 0x3e00008  jr          $ra
    ctx->pc = 0x165260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165268u;
}
