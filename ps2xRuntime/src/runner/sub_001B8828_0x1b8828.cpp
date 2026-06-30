#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8828
// Address: 0x1b8828 - 0x1b8870
void sub_001B8828_0x1b8828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8828_0x1b8828");
#endif

    switch (ctx->pc) {
        case 0x1b8848u: goto label_1b8848;
        default: break;
    }

    ctx->pc = 0x1b8828u;

    // 0x1b8828: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b8828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b882c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1b882cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1b8830: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b8830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b8834: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b8834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8838: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1b8838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1b883c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b883cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b8840: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1b8840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1b8844: 0x2482001c  addiu       $v0, $a0, 0x1C
    ctx->pc = 0x1b8844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_1b8848:
    // 0x1b8848: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b8848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b884c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1b884cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1b8850: 0x0  nop
    ctx->pc = 0x1b8850u;
    // NOP
    // 0x1b8854: 0x0  nop
    ctx->pc = 0x1b8854u;
    // NOP
    // 0x1b8858: 0x0  nop
    ctx->pc = 0x1b8858u;
    // NOP
    // 0x1b885c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B885Cu;
    {
        const bool branch_taken_0x1b885c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B8860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B885Cu;
            // 0x1b8860: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b885c) {
            ctx->pc = 0x1B8848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b8848;
        }
    }
    ctx->pc = 0x1B8864u;
    // 0x1b8864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b8864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b8868: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B886Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8868u;
            // 0x1b886c: 0xac820020  sw          $v0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8870u;
}
