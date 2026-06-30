#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044AC90
// Address: 0x44ac90 - 0x44ad10
void sub_0044AC90_0x44ac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044AC90_0x44ac90");
#endif

    switch (ctx->pc) {
        case 0x44acccu: goto label_44accc;
        case 0x44acfcu: goto label_44acfc;
        default: break;
    }

    ctx->pc = 0x44ac90u;

    // 0x44ac90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x44ac94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ac98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44ac9c: 0x90427548  lbu         $v0, 0x7548($v0)
    ctx->pc = 0x44ac9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30024)));
    // 0x44aca0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x44ACA0u;
    {
        const bool branch_taken_0x44aca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44ACA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44ACA0u;
            // 0x44aca4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44aca0) {
            ctx->pc = 0x44ACD4u;
            goto label_44acd4;
        }
    }
    ctx->pc = 0x44ACA8u;
    // 0x44aca8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44acac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44acacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x44acb0: 0x90477550  lbu         $a3, 0x7550($v0)
    ctx->pc = 0x44acb0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30032)));
    // 0x44acb4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x44acb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x44acb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44acbc: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x44acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x44acc0: 0x34e20001  ori         $v0, $a3, 0x1
    ctx->pc = 0x44acc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x44acc4: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x44ACC4u;
    SET_GPR_U32(ctx, 31, 0x44ACCCu);
    ctx->pc = 0x44ACC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44ACC4u;
            // 0x44acc8: 0xa0627550  sb          $v0, 0x7550($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 30032), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ACCCu; }
        if (ctx->pc != 0x44ACCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ACCCu; }
        if (ctx->pc != 0x44ACCCu) { return; }
    }
    ctx->pc = 0x44ACCCu;
label_44accc:
    // 0x44accc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x44ACCCu;
    {
        const bool branch_taken_0x44accc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44ACD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44ACCCu;
            // 0x44acd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44accc) {
            ctx->pc = 0x44AD00u;
            goto label_44ad00;
        }
    }
    ctx->pc = 0x44ACD4u;
label_44acd4:
    // 0x44acd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44acd8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x44acdc: 0x90447550  lbu         $a0, 0x7550($v0)
    ctx->pc = 0x44acdcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30032)));
    // 0x44ace0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x44ace0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x44ace4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ace8: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x44ace8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x44acec: 0x8c423eb8  lw          $v0, 0x3EB8($v0)
    ctx->pc = 0x44acecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16056)));
    // 0x44acf0: 0xa0647550  sb          $a0, 0x7550($v1)
    ctx->pc = 0x44acf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30032), (uint8_t)GPR_U32(ctx, 4));
    // 0x44acf4: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x44ACF4u;
    SET_GPR_U32(ctx, 31, 0x44ACFCu);
    ctx->pc = 0x44ACF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44ACF4u;
            // 0x44acf8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ACFCu; }
        if (ctx->pc != 0x44ACFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ACFCu; }
        if (ctx->pc != 0x44ACFCu) { return; }
    }
    ctx->pc = 0x44ACFCu;
label_44acfc:
    // 0x44acfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44acfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44ad00:
    // 0x44ad00: 0x3e00008  jr          $ra
    ctx->pc = 0x44AD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44AD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44AD00u;
            // 0x44ad04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44AD08u;
    // 0x44ad08: 0x0  nop
    ctx->pc = 0x44ad08u;
    // NOP
    // 0x44ad0c: 0x0  nop
    ctx->pc = 0x44ad0cu;
    // NOP
}
