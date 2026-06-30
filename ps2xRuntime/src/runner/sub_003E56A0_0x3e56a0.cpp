#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E56A0
// Address: 0x3e56a0 - 0x3e56e0
void sub_003E56A0_0x3e56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E56A0_0x3e56a0");
#endif

    switch (ctx->pc) {
        case 0x3e56b8u: goto label_3e56b8;
        default: break;
    }

    ctx->pc = 0x3e56a0u;

    // 0x3e56a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3e56a4: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3e56a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x3e56a8: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x3e56a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3e56ac: 0x24a50e80  addiu       $a1, $a1, 0xE80
    ctx->pc = 0x3e56acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3712));
    // 0x3e56b0: 0x8c64077c  lw          $a0, 0x77C($v1)
    ctx->pc = 0x3e56b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
    // 0x3e56b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e56b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e56b8:
    // 0x3e56b8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3e56b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3e56bc: 0x80630e3f  lb          $v1, 0xE3F($v1)
    ctx->pc = 0x3e56bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3647)));
    // 0x3e56c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E56C0u;
    {
        const bool branch_taken_0x3e56c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e56c0) {
            ctx->pc = 0x3E56D8u;
            goto label_3e56d8;
        }
    }
    ctx->pc = 0x3E56C8u;
    // 0x3e56c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e56c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e56cc: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x3e56ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3e56d0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3E56D0u;
    {
        const bool branch_taken_0x3e56d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E56D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E56D0u;
            // 0x3e56d4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e56d0) {
            ctx->pc = 0x3E56B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e56b8;
        }
    }
    ctx->pc = 0x3E56D8u;
label_3e56d8:
    // 0x3e56d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E56D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E56E0u;
}
