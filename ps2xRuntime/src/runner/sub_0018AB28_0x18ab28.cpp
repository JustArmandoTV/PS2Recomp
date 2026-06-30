#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018AB28
// Address: 0x18ab28 - 0x18ab58
void sub_0018AB28_0x18ab28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AB28_0x18ab28");
#endif

    switch (ctx->pc) {
        case 0x18ab30u: goto label_18ab30;
        default: break;
    }

    ctx->pc = 0x18ab28u;

    // 0x18ab28: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x18ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18ab2c: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x18ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_18ab30:
    // 0x18ab30: 0x0  nop
    ctx->pc = 0x18ab30u;
    // NOP
    // 0x18ab34: 0x0  nop
    ctx->pc = 0x18ab34u;
    // NOP
    // 0x18ab38: 0x0  nop
    ctx->pc = 0x18ab38u;
    // NOP
    // 0x18ab3c: 0x0  nop
    ctx->pc = 0x18ab3cu;
    // NOP
    // 0x18ab40: 0x0  nop
    ctx->pc = 0x18ab40u;
    // NOP
    // 0x18ab44: 0x443fffa  bgezl       $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18AB44u;
    {
        const bool branch_taken_0x18ab44 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18ab44) {
            ctx->pc = 0x18AB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18AB44u;
            // 0x18ab48: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18AB30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18ab30;
        }
    }
    ctx->pc = 0x18AB4Cu;
    // 0x18ab4c: 0x3e00008  jr          $ra
    ctx->pc = 0x18AB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AB54u;
    // 0x18ab54: 0x0  nop
    ctx->pc = 0x18ab54u;
    // NOP
}
