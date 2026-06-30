#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048C9E0
// Address: 0x48c9e0 - 0x48cab0
void sub_0048C9E0_0x48c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C9E0_0x48c9e0");
#endif

    switch (ctx->pc) {
        case 0x48c9e0u: goto label_48c9e0;
        case 0x48c9e4u: goto label_48c9e4;
        case 0x48c9e8u: goto label_48c9e8;
        case 0x48c9ecu: goto label_48c9ec;
        case 0x48c9f0u: goto label_48c9f0;
        case 0x48c9f4u: goto label_48c9f4;
        case 0x48c9f8u: goto label_48c9f8;
        case 0x48c9fcu: goto label_48c9fc;
        case 0x48ca00u: goto label_48ca00;
        case 0x48ca04u: goto label_48ca04;
        case 0x48ca08u: goto label_48ca08;
        case 0x48ca0cu: goto label_48ca0c;
        case 0x48ca10u: goto label_48ca10;
        case 0x48ca14u: goto label_48ca14;
        case 0x48ca18u: goto label_48ca18;
        case 0x48ca1cu: goto label_48ca1c;
        case 0x48ca20u: goto label_48ca20;
        case 0x48ca24u: goto label_48ca24;
        case 0x48ca28u: goto label_48ca28;
        case 0x48ca2cu: goto label_48ca2c;
        case 0x48ca30u: goto label_48ca30;
        case 0x48ca34u: goto label_48ca34;
        case 0x48ca38u: goto label_48ca38;
        case 0x48ca3cu: goto label_48ca3c;
        case 0x48ca40u: goto label_48ca40;
        case 0x48ca44u: goto label_48ca44;
        case 0x48ca48u: goto label_48ca48;
        case 0x48ca4cu: goto label_48ca4c;
        case 0x48ca50u: goto label_48ca50;
        case 0x48ca54u: goto label_48ca54;
        case 0x48ca58u: goto label_48ca58;
        case 0x48ca5cu: goto label_48ca5c;
        case 0x48ca60u: goto label_48ca60;
        case 0x48ca64u: goto label_48ca64;
        case 0x48ca68u: goto label_48ca68;
        case 0x48ca6cu: goto label_48ca6c;
        case 0x48ca70u: goto label_48ca70;
        case 0x48ca74u: goto label_48ca74;
        case 0x48ca78u: goto label_48ca78;
        case 0x48ca7cu: goto label_48ca7c;
        case 0x48ca80u: goto label_48ca80;
        case 0x48ca84u: goto label_48ca84;
        case 0x48ca88u: goto label_48ca88;
        case 0x48ca8cu: goto label_48ca8c;
        case 0x48ca90u: goto label_48ca90;
        case 0x48ca94u: goto label_48ca94;
        case 0x48ca98u: goto label_48ca98;
        case 0x48ca9cu: goto label_48ca9c;
        case 0x48caa0u: goto label_48caa0;
        case 0x48caa4u: goto label_48caa4;
        case 0x48caa8u: goto label_48caa8;
        case 0x48caacu: goto label_48caac;
        default: break;
    }

    ctx->pc = 0x48c9e0u;

label_48c9e0:
    // 0x48c9e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x48c9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_48c9e4:
    // 0x48c9e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x48c9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_48c9e8:
    // 0x48c9e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48c9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48c9ec:
    // 0x48c9ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48c9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48c9f0:
    // 0x48c9f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x48c9f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_48c9f4:
    // 0x48c9f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48c9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48c9f8:
    // 0x48c9f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x48c9f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48c9fc:
    // 0x48c9fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48ca00:
    // 0x48ca00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x48ca00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_48ca04:
    // 0x48ca04: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x48ca04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_48ca08:
    // 0x48ca08: 0xc1234b8  jal         func_48D2E0
label_48ca0c:
    if (ctx->pc == 0x48CA0Cu) {
        ctx->pc = 0x48CA0Cu;
            // 0x48ca0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x48CA10u;
        goto label_48ca10;
    }
    ctx->pc = 0x48CA08u;
    SET_GPR_U32(ctx, 31, 0x48CA10u);
    ctx->pc = 0x48CA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48CA08u;
            // 0x48ca0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D2E0u;
    if (runtime->hasFunction(0x48D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x48D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48CA10u; }
        if (ctx->pc != 0x48CA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D2E0_0x48d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48CA10u; }
        if (ctx->pc != 0x48CA10u) { return; }
    }
    ctx->pc = 0x48CA10u;
label_48ca10:
    // 0x48ca10: 0x9242007c  lbu         $v0, 0x7C($s2)
    ctx->pc = 0x48ca10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 124)));
label_48ca14:
    // 0x48ca14: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_48ca18:
    if (ctx->pc == 0x48CA18u) {
        ctx->pc = 0x48CA18u;
            // 0x48ca18: 0xa240007c  sb          $zero, 0x7C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x48CA1Cu;
        goto label_48ca1c;
    }
    ctx->pc = 0x48CA14u;
    {
        const bool branch_taken_0x48ca14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ca14) {
            ctx->pc = 0x48CA18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CA14u;
            // 0x48ca18: 0xa240007c  sb          $zero, 0x7C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CA3Cu;
            goto label_48ca3c;
        }
    }
    ctx->pc = 0x48CA1Cu;
label_48ca1c:
    // 0x48ca1c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x48ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_48ca20:
    // 0x48ca20: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x48ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_48ca24:
    // 0x48ca24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48ca28:
    // 0x48ca28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48ca2c:
    // 0x48ca2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48ca2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48ca30:
    // 0x48ca30: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x48ca30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_48ca34:
    // 0x48ca34: 0x320f809  jalr        $t9
label_48ca38:
    if (ctx->pc == 0x48CA38u) {
        ctx->pc = 0x48CA38u;
            // 0x48ca38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48CA3Cu;
        goto label_48ca3c;
    }
    ctx->pc = 0x48CA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48CA3Cu);
        ctx->pc = 0x48CA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CA34u;
            // 0x48ca38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48CA3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48CA3Cu; }
            if (ctx->pc != 0x48CA3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48CA3Cu;
label_48ca3c:
    // 0x48ca3c: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
label_48ca40:
    if (ctx->pc == 0x48CA40u) {
        ctx->pc = 0x48CA40u;
            // 0x48ca40: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->pc = 0x48CA44u;
        goto label_48ca44;
    }
    ctx->pc = 0x48CA3Cu;
    {
        const bool branch_taken_0x48ca3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ca3c) {
            ctx->pc = 0x48CA40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48CA3Cu;
            // 0x48ca40: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48CA68u;
            goto label_48ca68;
        }
    }
    ctx->pc = 0x48CA44u;
label_48ca44:
    // 0x48ca44: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x48ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_48ca48:
    // 0x48ca48: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x48ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_48ca4c:
    // 0x48ca4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48ca50:
    // 0x48ca50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48ca50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48ca54:
    // 0x48ca54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48ca54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48ca58:
    // 0x48ca58: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x48ca58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_48ca5c:
    // 0x48ca5c: 0x320f809  jalr        $t9
label_48ca60:
    if (ctx->pc == 0x48CA60u) {
        ctx->pc = 0x48CA64u;
        goto label_48ca64;
    }
    ctx->pc = 0x48CA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48CA64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48CA64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48CA64u; }
            if (ctx->pc != 0x48CA64u) { return; }
        }
        }
    }
    ctx->pc = 0x48CA64u;
label_48ca64:
    // 0x48ca64: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x48ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_48ca68:
    // 0x48ca68: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x48ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_48ca6c:
    // 0x48ca6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48ca6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48ca70:
    // 0x48ca70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48ca74:
    // 0x48ca74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48ca74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48ca78:
    // 0x48ca78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48ca78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48ca7c:
    // 0x48ca7c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x48ca7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_48ca80:
    // 0x48ca80: 0x320f809  jalr        $t9
label_48ca84:
    if (ctx->pc == 0x48CA84u) {
        ctx->pc = 0x48CA84u;
            // 0x48ca84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48CA88u;
        goto label_48ca88;
    }
    ctx->pc = 0x48CA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48CA88u);
        ctx->pc = 0x48CA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CA80u;
            // 0x48ca84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48CA88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48CA88u; }
            if (ctx->pc != 0x48CA88u) { return; }
        }
        }
    }
    ctx->pc = 0x48CA88u;
label_48ca88:
    // 0x48ca88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x48ca88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_48ca8c:
    // 0x48ca8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48ca8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48ca90:
    // 0x48ca90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48ca90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48ca94:
    // 0x48ca94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48ca94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48ca98:
    // 0x48ca98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48ca98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48ca9c:
    // 0x48ca9c: 0x3e00008  jr          $ra
label_48caa0:
    if (ctx->pc == 0x48CAA0u) {
        ctx->pc = 0x48CAA0u;
            // 0x48caa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x48CAA4u;
        goto label_48caa4;
    }
    ctx->pc = 0x48CA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48CA9Cu;
            // 0x48caa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48CAA4u;
label_48caa4:
    // 0x48caa4: 0x0  nop
    ctx->pc = 0x48caa4u;
    // NOP
label_48caa8:
    // 0x48caa8: 0x0  nop
    ctx->pc = 0x48caa8u;
    // NOP
label_48caac:
    // 0x48caac: 0x0  nop
    ctx->pc = 0x48caacu;
    // NOP
}
