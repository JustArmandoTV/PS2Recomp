#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224FF0
// Address: 0x224ff0 - 0x225090
void sub_00224FF0_0x224ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224FF0_0x224ff0");
#endif

    switch (ctx->pc) {
        case 0x224ff0u: goto label_224ff0;
        case 0x224ff4u: goto label_224ff4;
        case 0x224ff8u: goto label_224ff8;
        case 0x224ffcu: goto label_224ffc;
        case 0x225000u: goto label_225000;
        case 0x225004u: goto label_225004;
        case 0x225008u: goto label_225008;
        case 0x22500cu: goto label_22500c;
        case 0x225010u: goto label_225010;
        case 0x225014u: goto label_225014;
        case 0x225018u: goto label_225018;
        case 0x22501cu: goto label_22501c;
        case 0x225020u: goto label_225020;
        case 0x225024u: goto label_225024;
        case 0x225028u: goto label_225028;
        case 0x22502cu: goto label_22502c;
        case 0x225030u: goto label_225030;
        case 0x225034u: goto label_225034;
        case 0x225038u: goto label_225038;
        case 0x22503cu: goto label_22503c;
        case 0x225040u: goto label_225040;
        case 0x225044u: goto label_225044;
        case 0x225048u: goto label_225048;
        case 0x22504cu: goto label_22504c;
        case 0x225050u: goto label_225050;
        case 0x225054u: goto label_225054;
        case 0x225058u: goto label_225058;
        case 0x22505cu: goto label_22505c;
        case 0x225060u: goto label_225060;
        case 0x225064u: goto label_225064;
        case 0x225068u: goto label_225068;
        case 0x22506cu: goto label_22506c;
        case 0x225070u: goto label_225070;
        case 0x225074u: goto label_225074;
        case 0x225078u: goto label_225078;
        case 0x22507cu: goto label_22507c;
        case 0x225080u: goto label_225080;
        case 0x225084u: goto label_225084;
        case 0x225088u: goto label_225088;
        case 0x22508cu: goto label_22508c;
        default: break;
    }

    ctx->pc = 0x224ff0u;

label_224ff0:
    // 0x224ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x224ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_224ff4:
    // 0x224ff4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x224ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_224ff8:
    // 0x224ff8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x224ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_224ffc:
    // 0x224ffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x224ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_225000:
    // 0x225000: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x225000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_225004:
    // 0x225004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_225008:
    // 0x225008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22500c:
    // 0x22500c: 0x948301e4  lhu         $v1, 0x1E4($a0)
    ctx->pc = 0x22500cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 484)));
label_225010:
    // 0x225010: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x225010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_225014:
    // 0x225014: 0x6200010  bltz        $s1, . + 4 + (0x10 << 2)
label_225018:
    if (ctx->pc == 0x225018u) {
        ctx->pc = 0x225018u;
            // 0x225018: 0x267201e0  addiu       $s2, $s3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
        ctx->pc = 0x22501Cu;
        goto label_22501c;
    }
    ctx->pc = 0x225014u;
    {
        const bool branch_taken_0x225014 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x225018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225014u;
            // 0x225018: 0x267201e0  addiu       $s2, $s3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225014) {
            ctx->pc = 0x225058u;
            goto label_225058;
        }
    }
    ctx->pc = 0x22501Cu;
label_22501c:
    // 0x22501c: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x22501cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_225020:
    // 0x225020: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x225020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_225024:
    // 0x225024: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x225024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_225028:
    // 0x225028: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x225028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22502c:
    // 0x22502c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_225030:
    if (ctx->pc == 0x225030u) {
        ctx->pc = 0x225034u;
        goto label_225034;
    }
    ctx->pc = 0x22502Cu;
    {
        const bool branch_taken_0x22502c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22502c) {
            ctx->pc = 0x225048u;
            goto label_225048;
        }
    }
    ctx->pc = 0x225034u;
label_225034:
    // 0x225034: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x225034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225038:
    // 0x225038: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x225038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_22503c:
    // 0x22503c: 0x320f809  jalr        $t9
label_225040:
    if (ctx->pc == 0x225040u) {
        ctx->pc = 0x225040u;
            // 0x225040: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225044u;
        goto label_225044;
    }
    ctx->pc = 0x22503Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x225044u);
        ctx->pc = 0x225040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22503Cu;
            // 0x225040: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x225044u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x225044u; }
            if (ctx->pc != 0x225044u) { return; }
        }
        }
    }
    ctx->pc = 0x225044u;
label_225044:
    // 0x225044: 0x0  nop
    ctx->pc = 0x225044u;
    // NOP
label_225048:
    // 0x225048: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x225048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_22504c:
    // 0x22504c: 0x621fff4  bgez        $s1, . + 4 + (-0xC << 2)
label_225050:
    if (ctx->pc == 0x225050u) {
        ctx->pc = 0x225050u;
            // 0x225050: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x225054u;
        goto label_225054;
    }
    ctx->pc = 0x22504Cu;
    {
        const bool branch_taken_0x22504c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x225050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22504Cu;
            // 0x225050: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22504c) {
            ctx->pc = 0x225020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225020;
        }
    }
    ctx->pc = 0x225054u;
label_225054:
    // 0x225054: 0x0  nop
    ctx->pc = 0x225054u;
    // NOP
label_225058:
    // 0x225058: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x225058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22505c:
    // 0x22505c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22505cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_225060:
    // 0x225060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_225064:
    // 0x225064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_225068:
    // 0x225068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22506c:
    // 0x22506c: 0x3e00008  jr          $ra
label_225070:
    if (ctx->pc == 0x225070u) {
        ctx->pc = 0x225070u;
            // 0x225070: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x225074u;
        goto label_225074;
    }
    ctx->pc = 0x22506Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22506Cu;
            // 0x225070: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225074u;
label_225074:
    // 0x225074: 0x0  nop
    ctx->pc = 0x225074u;
    // NOP
label_225078:
    // 0x225078: 0x0  nop
    ctx->pc = 0x225078u;
    // NOP
label_22507c:
    // 0x22507c: 0x0  nop
    ctx->pc = 0x22507cu;
    // NOP
label_225080:
    // 0x225080: 0x3e00008  jr          $ra
label_225084:
    if (ctx->pc == 0x225084u) {
        ctx->pc = 0x225088u;
        goto label_225088;
    }
    ctx->pc = 0x225080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225088u;
label_225088:
    // 0x225088: 0x0  nop
    ctx->pc = 0x225088u;
    // NOP
label_22508c:
    // 0x22508c: 0x0  nop
    ctx->pc = 0x22508cu;
    // NOP
}
