#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E360
// Address: 0x17e360 - 0x17e390
void sub_0017E360_0x17e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E360_0x17e360");
#endif

    switch (ctx->pc) {
        case 0x17e368u: goto label_17e368;
        default: break;
    }

    ctx->pc = 0x17e360u;

    // 0x17e360: 0x24021fff  addiu       $v0, $zero, 0x1FFF
    ctx->pc = 0x17e360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
    // 0x17e364: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x17e364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_17e368:
    // 0x17e368: 0x0  nop
    ctx->pc = 0x17e368u;
    // NOP
    // 0x17e36c: 0x0  nop
    ctx->pc = 0x17e36cu;
    // NOP
    // 0x17e370: 0x0  nop
    ctx->pc = 0x17e370u;
    // NOP
    // 0x17e374: 0x0  nop
    ctx->pc = 0x17e374u;
    // NOP
    // 0x17e378: 0x0  nop
    ctx->pc = 0x17e378u;
    // NOP
    // 0x17e37c: 0x443fffa  bgezl       $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17E37Cu;
    {
        const bool branch_taken_0x17e37c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17e37c) {
            ctx->pc = 0x17E380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17E37Cu;
            // 0x17e380: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17E368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17e368;
        }
    }
    ctx->pc = 0x17E384u;
    // 0x17e384: 0x3e00008  jr          $ra
    ctx->pc = 0x17E384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E38Cu;
    // 0x17e38c: 0x0  nop
    ctx->pc = 0x17e38cu;
    // NOP
}
