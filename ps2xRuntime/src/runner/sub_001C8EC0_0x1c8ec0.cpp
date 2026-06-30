#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8EC0
// Address: 0x1c8ec0 - 0x1c8ef0
void sub_001C8EC0_0x1c8ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8EC0_0x1c8ec0");
#endif

    switch (ctx->pc) {
        case 0x1c8ec8u: goto label_1c8ec8;
        default: break;
    }

    ctx->pc = 0x1c8ec0u;

    // 0x1c8ec0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c8ec0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ec4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c8ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c8ec8:
    // 0x1c8ec8: 0x2c621d80  sltiu       $v0, $v1, 0x1D80
    ctx->pc = 0x1c8ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7552) ? 1 : 0);
    // 0x1c8ecc: 0x0  nop
    ctx->pc = 0x1c8eccu;
    // NOP
    // 0x1c8ed0: 0x0  nop
    ctx->pc = 0x1c8ed0u;
    // NOP
    // 0x1c8ed4: 0x0  nop
    ctx->pc = 0x1c8ed4u;
    // NOP
    // 0x1c8ed8: 0x0  nop
    ctx->pc = 0x1c8ed8u;
    // NOP
    // 0x1c8edc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C8EDCu;
    {
        const bool branch_taken_0x1c8edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8edc) {
            ctx->pc = 0x1C8EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8EDCu;
            // 0x1c8ee0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8EC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8ec8;
        }
    }
    ctx->pc = 0x1C8EE4u;
    // 0x1c8ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8EECu;
    // 0x1c8eec: 0x0  nop
    ctx->pc = 0x1c8eecu;
    // NOP
}
