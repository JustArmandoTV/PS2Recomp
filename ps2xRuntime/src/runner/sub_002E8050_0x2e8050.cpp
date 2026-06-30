#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E8050
// Address: 0x2e8050 - 0x2e80a0
void sub_002E8050_0x2e8050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8050_0x2e8050");
#endif

    switch (ctx->pc) {
        case 0x2e8068u: goto label_2e8068;
        default: break;
    }

    ctx->pc = 0x2e8050u;

    // 0x2e8050: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2e8050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2e8054: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e8054u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8058: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e8058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e805c: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x2e805cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x2e8060: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x2e8060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e8064: 0x24c61240  addiu       $a2, $a2, 0x1240
    ctx->pc = 0x2e8064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4672));
label_2e8068:
    // 0x2e8068: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x2e8068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e806c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2e806cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2e8070: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x2e8070u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2e8074: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e8074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e8078: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2e8078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2e807c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2e807cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x2e8080: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E8080u;
    {
        const bool branch_taken_0x2e8080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8080u;
            // 0x2e8084: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8080) {
            ctx->pc = 0x2E8068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8068;
        }
    }
    ctx->pc = 0x2E8088u;
    // 0x2e8088: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e8088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e808c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E808Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E808Cu;
            // 0x2e8090: 0xa4670f08  sh          $a3, 0xF08($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 3848), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8094u;
    // 0x2e8094: 0x0  nop
    ctx->pc = 0x2e8094u;
    // NOP
    // 0x2e8098: 0x0  nop
    ctx->pc = 0x2e8098u;
    // NOP
    // 0x2e809c: 0x0  nop
    ctx->pc = 0x2e809cu;
    // NOP
}
