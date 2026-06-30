#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FECE0
// Address: 0x1fece0 - 0x1fedb0
void sub_001FECE0_0x1fece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FECE0_0x1fece0");
#endif

    switch (ctx->pc) {
        case 0x1fece0u: goto label_1fece0;
        case 0x1fece4u: goto label_1fece4;
        case 0x1fece8u: goto label_1fece8;
        case 0x1fececu: goto label_1fecec;
        case 0x1fecf0u: goto label_1fecf0;
        case 0x1fecf4u: goto label_1fecf4;
        case 0x1fecf8u: goto label_1fecf8;
        case 0x1fecfcu: goto label_1fecfc;
        case 0x1fed00u: goto label_1fed00;
        case 0x1fed04u: goto label_1fed04;
        case 0x1fed08u: goto label_1fed08;
        case 0x1fed0cu: goto label_1fed0c;
        case 0x1fed10u: goto label_1fed10;
        case 0x1fed14u: goto label_1fed14;
        case 0x1fed18u: goto label_1fed18;
        case 0x1fed1cu: goto label_1fed1c;
        case 0x1fed20u: goto label_1fed20;
        case 0x1fed24u: goto label_1fed24;
        case 0x1fed28u: goto label_1fed28;
        case 0x1fed2cu: goto label_1fed2c;
        case 0x1fed30u: goto label_1fed30;
        case 0x1fed34u: goto label_1fed34;
        case 0x1fed38u: goto label_1fed38;
        case 0x1fed3cu: goto label_1fed3c;
        case 0x1fed40u: goto label_1fed40;
        case 0x1fed44u: goto label_1fed44;
        case 0x1fed48u: goto label_1fed48;
        case 0x1fed4cu: goto label_1fed4c;
        case 0x1fed50u: goto label_1fed50;
        case 0x1fed54u: goto label_1fed54;
        case 0x1fed58u: goto label_1fed58;
        case 0x1fed5cu: goto label_1fed5c;
        case 0x1fed60u: goto label_1fed60;
        case 0x1fed64u: goto label_1fed64;
        case 0x1fed68u: goto label_1fed68;
        case 0x1fed6cu: goto label_1fed6c;
        case 0x1fed70u: goto label_1fed70;
        case 0x1fed74u: goto label_1fed74;
        case 0x1fed78u: goto label_1fed78;
        case 0x1fed7cu: goto label_1fed7c;
        case 0x1fed80u: goto label_1fed80;
        case 0x1fed84u: goto label_1fed84;
        case 0x1fed88u: goto label_1fed88;
        case 0x1fed8cu: goto label_1fed8c;
        case 0x1fed90u: goto label_1fed90;
        case 0x1fed94u: goto label_1fed94;
        case 0x1fed98u: goto label_1fed98;
        case 0x1fed9cu: goto label_1fed9c;
        case 0x1feda0u: goto label_1feda0;
        case 0x1feda4u: goto label_1feda4;
        case 0x1feda8u: goto label_1feda8;
        case 0x1fedacu: goto label_1fedac;
        default: break;
    }

    ctx->pc = 0x1fece0u;

label_1fece0:
    // 0x1fece0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1fece4:
    // 0x1fece4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1fece8:
    // 0x1fece8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fecec:
    // 0x1fecec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fececu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fecf0:
    // 0x1fecf0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fecf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fecf4:
    // 0x1fecf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fecf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fecf8:
    // 0x1fecf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fecf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fecfc:
    // 0x1fecfc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fecfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fed00:
    // 0x1fed00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fed04:
    // 0x1fed04: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1fed04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1fed08:
    // 0x1fed08: 0x6200021  bltz        $s1, . + 4 + (0x21 << 2)
label_1fed0c:
    if (ctx->pc == 0x1FED0Cu) {
        ctx->pc = 0x1FED0Cu;
            // 0x1fed0c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FED10u;
        goto label_1fed10;
    }
    ctx->pc = 0x1FED08u;
    {
        const bool branch_taken_0x1fed08 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1FED0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FED08u;
            // 0x1fed0c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed08) {
            ctx->pc = 0x1FED90u;
            goto label_1fed90;
        }
    }
    ctx->pc = 0x1FED10u;
label_1fed10:
    // 0x1fed10: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1fed10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fed14:
    // 0x1fed14: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1fed14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1fed18:
    // 0x1fed18: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x1fed18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1fed1c:
    // 0x1fed1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fed1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fed20:
    // 0x1fed20: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1fed20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fed24:
    // 0x1fed24: 0x80c30005  lb          $v1, 0x5($a2)
    ctx->pc = 0x1fed24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
label_1fed28:
    // 0x1fed28: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x1fed28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_1fed2c:
    // 0x1fed2c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1fed2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1fed30:
    // 0x1fed30: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1fed30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1fed34:
    // 0x1fed34: 0x320f809  jalr        $t9
label_1fed38:
    if (ctx->pc == 0x1FED38u) {
        ctx->pc = 0x1FED38u;
            // 0x1fed38: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = 0x1FED3Cu;
        goto label_1fed3c;
    }
    ctx->pc = 0x1FED34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FED3Cu);
        ctx->pc = 0x1FED38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FED34u;
            // 0x1fed38: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FED3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FED3Cu; }
            if (ctx->pc != 0x1FED3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FED3Cu;
label_1fed3c:
    // 0x1fed3c: 0x27a3005c  addiu       $v1, $sp, 0x5C
    ctx->pc = 0x1fed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1fed40:
    // 0x1fed40: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1fed40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1fed44:
    // 0x1fed44: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1fed48:
    if (ctx->pc == 0x1FED48u) {
        ctx->pc = 0x1FED4Cu;
        goto label_1fed4c;
    }
    ctx->pc = 0x1FED44u;
    {
        const bool branch_taken_0x1fed44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed44) {
            ctx->pc = 0x1FED80u;
            goto label_1fed80;
        }
    }
    ctx->pc = 0x1FED4Cu;
label_1fed4c:
    // 0x1fed4c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1fed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fed50:
    // 0x1fed50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1fed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1fed54:
    // 0x1fed54: 0x80630004  lb          $v1, 0x4($v1)
    ctx->pc = 0x1fed54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_1fed58:
    // 0x1fed58: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x1fed58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_1fed5c:
    // 0x1fed5c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1fed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1fed60:
    // 0x1fed60: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1fed60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1fed64:
    // 0x1fed64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fed64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fed68:
    // 0x1fed68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fed6c:
    // 0x1fed6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fed70:
    // 0x1fed70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fed70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fed74:
    // 0x1fed74: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1fed74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1fed78:
    // 0x1fed78: 0x320f809  jalr        $t9
label_1fed7c:
    if (ctx->pc == 0x1FED7Cu) {
        ctx->pc = 0x1FED7Cu;
            // 0x1fed7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FED80u;
        goto label_1fed80;
    }
    ctx->pc = 0x1FED78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FED80u);
        ctx->pc = 0x1FED7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FED78u;
            // 0x1fed7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FED80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FED80u; }
            if (ctx->pc != 0x1FED80u) { return; }
        }
        }
    }
    ctx->pc = 0x1FED80u;
label_1fed80:
    // 0x1fed80: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1fed80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1fed84:
    // 0x1fed84: 0x621ffe2  bgez        $s1, . + 4 + (-0x1E << 2)
label_1fed88:
    if (ctx->pc == 0x1FED88u) {
        ctx->pc = 0x1FED88u;
            // 0x1fed88: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x1FED8Cu;
        goto label_1fed8c;
    }
    ctx->pc = 0x1FED84u;
    {
        const bool branch_taken_0x1fed84 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1FED88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FED84u;
            // 0x1fed88: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed84) {
            ctx->pc = 0x1FED10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fed10;
        }
    }
    ctx->pc = 0x1FED8Cu;
label_1fed8c:
    // 0x1fed8c: 0x0  nop
    ctx->pc = 0x1fed8cu;
    // NOP
label_1fed90:
    // 0x1fed90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fed90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fed94:
    // 0x1fed94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fed94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fed98:
    // 0x1fed98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fed98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fed9c:
    // 0x1fed9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fed9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1feda0:
    // 0x1feda0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1feda0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1feda4:
    // 0x1feda4: 0x3e00008  jr          $ra
label_1feda8:
    if (ctx->pc == 0x1FEDA8u) {
        ctx->pc = 0x1FEDA8u;
            // 0x1feda8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1FEDACu;
        goto label_1fedac;
    }
    ctx->pc = 0x1FEDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEDA4u;
            // 0x1feda8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEDACu;
label_1fedac:
    // 0x1fedac: 0x0  nop
    ctx->pc = 0x1fedacu;
    // NOP
}
