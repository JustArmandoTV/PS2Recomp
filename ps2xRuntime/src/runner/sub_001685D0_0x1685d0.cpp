#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001685D0
// Address: 0x1685d0 - 0x168600
void sub_001685D0_0x1685d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001685D0_0x1685d0");
#endif

    switch (ctx->pc) {
        case 0x1685d8u: goto label_1685d8;
        default: break;
    }

    ctx->pc = 0x1685d0u;

    // 0x1685d0: 0x3402c350  ori         $v0, $zero, 0xC350
    ctx->pc = 0x1685d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x1685d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1685d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1685d8:
    // 0x1685d8: 0x0  nop
    ctx->pc = 0x1685d8u;
    // NOP
    // 0x1685dc: 0x0  nop
    ctx->pc = 0x1685dcu;
    // NOP
    // 0x1685e0: 0x0  nop
    ctx->pc = 0x1685e0u;
    // NOP
    // 0x1685e4: 0x0  nop
    ctx->pc = 0x1685e4u;
    // NOP
    // 0x1685e8: 0x0  nop
    ctx->pc = 0x1685e8u;
    // NOP
    // 0x1685ec: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1685ECu;
    {
        const bool branch_taken_0x1685ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1685ec) {
            ctx->pc = 0x1685F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1685ECu;
            // 0x1685f0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1685D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1685d8;
        }
    }
    ctx->pc = 0x1685F4u;
    // 0x1685f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1685F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1685FCu;
    // 0x1685fc: 0x0  nop
    ctx->pc = 0x1685fcu;
    // NOP
}
