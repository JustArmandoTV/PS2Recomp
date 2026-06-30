#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A7B8
// Address: 0x17a7b8 - 0x17a7e8
void sub_0017A7B8_0x17a7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A7B8_0x17a7b8");
#endif

    switch (ctx->pc) {
        case 0x17a7c0u: goto label_17a7c0;
        default: break;
    }

    ctx->pc = 0x17a7b8u;

    // 0x17a7b8: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x17a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x17a7bc: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x17a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_17a7c0:
    // 0x17a7c0: 0x0  nop
    ctx->pc = 0x17a7c0u;
    // NOP
    // 0x17a7c4: 0x0  nop
    ctx->pc = 0x17a7c4u;
    // NOP
    // 0x17a7c8: 0x0  nop
    ctx->pc = 0x17a7c8u;
    // NOP
    // 0x17a7cc: 0x0  nop
    ctx->pc = 0x17a7ccu;
    // NOP
    // 0x17a7d0: 0x0  nop
    ctx->pc = 0x17a7d0u;
    // NOP
    // 0x17a7d4: 0x443fffa  bgezl       $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17A7D4u;
    {
        const bool branch_taken_0x17a7d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17a7d4) {
            ctx->pc = 0x17A7D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17A7D4u;
            // 0x17a7d8: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17A7C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a7c0;
        }
    }
    ctx->pc = 0x17A7DCu;
    // 0x17a7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x17A7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A7E4u;
    // 0x17a7e4: 0x0  nop
    ctx->pc = 0x17a7e4u;
    // NOP
}
