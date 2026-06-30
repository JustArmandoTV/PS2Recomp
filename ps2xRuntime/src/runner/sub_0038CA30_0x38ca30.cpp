#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038CA30
// Address: 0x38ca30 - 0x38ca90
void sub_0038CA30_0x38ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CA30_0x38ca30");
#endif

    switch (ctx->pc) {
        case 0x38ca30u: goto label_38ca30;
        case 0x38ca34u: goto label_38ca34;
        case 0x38ca38u: goto label_38ca38;
        case 0x38ca3cu: goto label_38ca3c;
        case 0x38ca40u: goto label_38ca40;
        case 0x38ca44u: goto label_38ca44;
        case 0x38ca48u: goto label_38ca48;
        case 0x38ca4cu: goto label_38ca4c;
        case 0x38ca50u: goto label_38ca50;
        case 0x38ca54u: goto label_38ca54;
        case 0x38ca58u: goto label_38ca58;
        case 0x38ca5cu: goto label_38ca5c;
        case 0x38ca60u: goto label_38ca60;
        case 0x38ca64u: goto label_38ca64;
        case 0x38ca68u: goto label_38ca68;
        case 0x38ca6cu: goto label_38ca6c;
        case 0x38ca70u: goto label_38ca70;
        case 0x38ca74u: goto label_38ca74;
        case 0x38ca78u: goto label_38ca78;
        case 0x38ca7cu: goto label_38ca7c;
        case 0x38ca80u: goto label_38ca80;
        case 0x38ca84u: goto label_38ca84;
        case 0x38ca88u: goto label_38ca88;
        case 0x38ca8cu: goto label_38ca8c;
        default: break;
    }

    ctx->pc = 0x38ca30u;

label_38ca30:
    // 0x38ca30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38ca30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38ca34:
    // 0x38ca34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38ca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38ca38:
    // 0x38ca38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38ca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38ca3c:
    // 0x38ca3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38ca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38ca40:
    // 0x38ca40: 0x90830020  lbu         $v1, 0x20($a0)
    ctx->pc = 0x38ca40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_38ca44:
    // 0x38ca44: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_38ca48:
    if (ctx->pc == 0x38CA48u) {
        ctx->pc = 0x38CA48u;
            // 0x38ca48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x38CA4Cu;
        goto label_38ca4c;
    }
    ctx->pc = 0x38CA44u;
    {
        const bool branch_taken_0x38ca44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ca44) {
            ctx->pc = 0x38CA48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38CA44u;
            // 0x38ca48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38CA78u;
            goto label_38ca78;
        }
    }
    ctx->pc = 0x38CA4Cu;
label_38ca4c:
    // 0x38ca4c: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x38ca4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38ca50:
    // 0x38ca50: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x38ca50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_38ca54:
    // 0x38ca54: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x38ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38ca58:
    // 0x38ca58: 0x8c990024  lw          $t9, 0x24($a0)
    ctx->pc = 0x38ca58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_38ca5c:
    // 0x38ca5c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x38ca5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_38ca60:
    // 0x38ca60: 0x320f809  jalr        $t9
label_38ca64:
    if (ctx->pc == 0x38CA64u) {
        ctx->pc = 0x38CA68u;
        goto label_38ca68;
    }
    ctx->pc = 0x38CA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38CA68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38CA68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38CA68u; }
            if (ctx->pc != 0x38CA68u) { return; }
        }
        }
    }
    ctx->pc = 0x38CA68u;
label_38ca68:
    // 0x38ca68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x38ca68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38ca6c:
    // 0x38ca6c: 0x1e00fff9  bgtz        $s0, . + 4 + (-0x7 << 2)
label_38ca70:
    if (ctx->pc == 0x38CA70u) {
        ctx->pc = 0x38CA70u;
            // 0x38ca70: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x38CA74u;
        goto label_38ca74;
    }
    ctx->pc = 0x38CA6Cu;
    {
        const bool branch_taken_0x38ca6c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x38CA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CA6Cu;
            // 0x38ca70: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca6c) {
            ctx->pc = 0x38CA54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38ca54;
        }
    }
    ctx->pc = 0x38CA74u;
label_38ca74:
    // 0x38ca74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38ca74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38ca78:
    // 0x38ca78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38ca78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38ca7c:
    // 0x38ca7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38ca7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38ca80:
    // 0x38ca80: 0x3e00008  jr          $ra
label_38ca84:
    if (ctx->pc == 0x38CA84u) {
        ctx->pc = 0x38CA84u;
            // 0x38ca84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x38CA88u;
        goto label_38ca88;
    }
    ctx->pc = 0x38CA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CA80u;
            // 0x38ca84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38CA88u;
label_38ca88:
    // 0x38ca88: 0x0  nop
    ctx->pc = 0x38ca88u;
    // NOP
label_38ca8c:
    // 0x38ca8c: 0x0  nop
    ctx->pc = 0x38ca8cu;
    // NOP
}
