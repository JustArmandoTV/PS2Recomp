#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C48D8
// Address: 0x1c48d8 - 0x1c4910
void sub_001C48D8_0x1c48d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C48D8_0x1c48d8");
#endif

    switch (ctx->pc) {
        case 0x1c48e8u: goto label_1c48e8;
        default: break;
    }

    ctx->pc = 0x1c48d8u;

    // 0x1c48d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c48dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C48DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C48E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C48DCu;
            // 0x1c48e0: 0xac40a4dc  sw          $zero, -0x5B24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C48E4u;
    // 0x1c48e4: 0x0  nop
    ctx->pc = 0x1c48e4u;
    // NOP
label_1c48e8:
    // 0x1c48e8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c48ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C48ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C48F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C48ECu;
            // 0x1c48f0: 0x8c62a4dc  lw          $v0, -0x5B24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943964)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C48F4u;
    // 0x1c48f4: 0x0  nop
    ctx->pc = 0x1c48f4u;
    // NOP
    // 0x1c48f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c48f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c48fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c48fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4904: 0x807123a  j           func_1C48E8
    ctx->pc = 0x1C4904u;
    ctx->pc = 0x1C4908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4904u;
            // 0x1c4908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48E8u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1c48e8;
    ctx->pc = 0x1C490Cu;
    // 0x1c490c: 0x0  nop
    ctx->pc = 0x1c490cu;
    // NOP
}
