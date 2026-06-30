#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053D6F0
// Address: 0x53d6f0 - 0x53d740
void sub_0053D6F0_0x53d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053D6F0_0x53d6f0");
#endif

    ctx->pc = 0x53d6f0u;

    // 0x53d6f0: 0x9082009f  lbu         $v0, 0x9F($a0)
    ctx->pc = 0x53d6f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 159)));
    // 0x53d6f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x53D6F4u;
    {
        const bool branch_taken_0x53d6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53d6f4) {
            ctx->pc = 0x53D718u;
            goto label_53d718;
        }
    }
    ctx->pc = 0x53D6FCu;
    // 0x53d6fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x53d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x53d700: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x53D700u;
    {
        const bool branch_taken_0x53d700 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x53d700) {
            ctx->pc = 0x53D718u;
            goto label_53d718;
        }
    }
    ctx->pc = 0x53D708u;
    // 0x53d708: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x53d70c: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x53d70cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x53d710: 0x8c423e28  lw          $v0, 0x3E28($v0)
    ctx->pc = 0x53d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
    // 0x53d714: 0xa0430022  sb          $v1, 0x22($v0)
    ctx->pc = 0x53d714u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 3));
label_53d718:
    // 0x53d718: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53d718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x53d71c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x53d71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53d720: 0xac46d000  sw          $a2, -0x3000($v0)
    ctx->pc = 0x53d720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955008), GPR_U32(ctx, 6));
    // 0x53d724: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x53d724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x53d728: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x53d728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x53d72c: 0x8057b7c  j           func_15EDF0
    ctx->pc = 0x53D72Cu;
    ctx->pc = 0x53D730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53D72Cu;
            // 0x53d730: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x53D734u;
    // 0x53d734: 0x0  nop
    ctx->pc = 0x53d734u;
    // NOP
    // 0x53d738: 0x0  nop
    ctx->pc = 0x53d738u;
    // NOP
    // 0x53d73c: 0x0  nop
    ctx->pc = 0x53d73cu;
    // NOP
}
