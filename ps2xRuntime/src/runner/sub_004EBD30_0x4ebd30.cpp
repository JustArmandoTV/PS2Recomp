#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EBD30
// Address: 0x4ebd30 - 0x4ec0c0
void sub_004EBD30_0x4ebd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBD30_0x4ebd30");
#endif

    switch (ctx->pc) {
        case 0x4ebd30u: goto label_4ebd30;
        case 0x4ebd34u: goto label_4ebd34;
        case 0x4ebd38u: goto label_4ebd38;
        case 0x4ebd3cu: goto label_4ebd3c;
        case 0x4ebd40u: goto label_4ebd40;
        case 0x4ebd44u: goto label_4ebd44;
        case 0x4ebd48u: goto label_4ebd48;
        case 0x4ebd4cu: goto label_4ebd4c;
        case 0x4ebd50u: goto label_4ebd50;
        case 0x4ebd54u: goto label_4ebd54;
        case 0x4ebd58u: goto label_4ebd58;
        case 0x4ebd5cu: goto label_4ebd5c;
        case 0x4ebd60u: goto label_4ebd60;
        case 0x4ebd64u: goto label_4ebd64;
        case 0x4ebd68u: goto label_4ebd68;
        case 0x4ebd6cu: goto label_4ebd6c;
        case 0x4ebd70u: goto label_4ebd70;
        case 0x4ebd74u: goto label_4ebd74;
        case 0x4ebd78u: goto label_4ebd78;
        case 0x4ebd7cu: goto label_4ebd7c;
        case 0x4ebd80u: goto label_4ebd80;
        case 0x4ebd84u: goto label_4ebd84;
        case 0x4ebd88u: goto label_4ebd88;
        case 0x4ebd8cu: goto label_4ebd8c;
        case 0x4ebd90u: goto label_4ebd90;
        case 0x4ebd94u: goto label_4ebd94;
        case 0x4ebd98u: goto label_4ebd98;
        case 0x4ebd9cu: goto label_4ebd9c;
        case 0x4ebda0u: goto label_4ebda0;
        case 0x4ebda4u: goto label_4ebda4;
        case 0x4ebda8u: goto label_4ebda8;
        case 0x4ebdacu: goto label_4ebdac;
        case 0x4ebdb0u: goto label_4ebdb0;
        case 0x4ebdb4u: goto label_4ebdb4;
        case 0x4ebdb8u: goto label_4ebdb8;
        case 0x4ebdbcu: goto label_4ebdbc;
        case 0x4ebdc0u: goto label_4ebdc0;
        case 0x4ebdc4u: goto label_4ebdc4;
        case 0x4ebdc8u: goto label_4ebdc8;
        case 0x4ebdccu: goto label_4ebdcc;
        case 0x4ebdd0u: goto label_4ebdd0;
        case 0x4ebdd4u: goto label_4ebdd4;
        case 0x4ebdd8u: goto label_4ebdd8;
        case 0x4ebddcu: goto label_4ebddc;
        case 0x4ebde0u: goto label_4ebde0;
        case 0x4ebde4u: goto label_4ebde4;
        case 0x4ebde8u: goto label_4ebde8;
        case 0x4ebdecu: goto label_4ebdec;
        case 0x4ebdf0u: goto label_4ebdf0;
        case 0x4ebdf4u: goto label_4ebdf4;
        case 0x4ebdf8u: goto label_4ebdf8;
        case 0x4ebdfcu: goto label_4ebdfc;
        case 0x4ebe00u: goto label_4ebe00;
        case 0x4ebe04u: goto label_4ebe04;
        case 0x4ebe08u: goto label_4ebe08;
        case 0x4ebe0cu: goto label_4ebe0c;
        case 0x4ebe10u: goto label_4ebe10;
        case 0x4ebe14u: goto label_4ebe14;
        case 0x4ebe18u: goto label_4ebe18;
        case 0x4ebe1cu: goto label_4ebe1c;
        case 0x4ebe20u: goto label_4ebe20;
        case 0x4ebe24u: goto label_4ebe24;
        case 0x4ebe28u: goto label_4ebe28;
        case 0x4ebe2cu: goto label_4ebe2c;
        case 0x4ebe30u: goto label_4ebe30;
        case 0x4ebe34u: goto label_4ebe34;
        case 0x4ebe38u: goto label_4ebe38;
        case 0x4ebe3cu: goto label_4ebe3c;
        case 0x4ebe40u: goto label_4ebe40;
        case 0x4ebe44u: goto label_4ebe44;
        case 0x4ebe48u: goto label_4ebe48;
        case 0x4ebe4cu: goto label_4ebe4c;
        case 0x4ebe50u: goto label_4ebe50;
        case 0x4ebe54u: goto label_4ebe54;
        case 0x4ebe58u: goto label_4ebe58;
        case 0x4ebe5cu: goto label_4ebe5c;
        case 0x4ebe60u: goto label_4ebe60;
        case 0x4ebe64u: goto label_4ebe64;
        case 0x4ebe68u: goto label_4ebe68;
        case 0x4ebe6cu: goto label_4ebe6c;
        case 0x4ebe70u: goto label_4ebe70;
        case 0x4ebe74u: goto label_4ebe74;
        case 0x4ebe78u: goto label_4ebe78;
        case 0x4ebe7cu: goto label_4ebe7c;
        case 0x4ebe80u: goto label_4ebe80;
        case 0x4ebe84u: goto label_4ebe84;
        case 0x4ebe88u: goto label_4ebe88;
        case 0x4ebe8cu: goto label_4ebe8c;
        case 0x4ebe90u: goto label_4ebe90;
        case 0x4ebe94u: goto label_4ebe94;
        case 0x4ebe98u: goto label_4ebe98;
        case 0x4ebe9cu: goto label_4ebe9c;
        case 0x4ebea0u: goto label_4ebea0;
        case 0x4ebea4u: goto label_4ebea4;
        case 0x4ebea8u: goto label_4ebea8;
        case 0x4ebeacu: goto label_4ebeac;
        case 0x4ebeb0u: goto label_4ebeb0;
        case 0x4ebeb4u: goto label_4ebeb4;
        case 0x4ebeb8u: goto label_4ebeb8;
        case 0x4ebebcu: goto label_4ebebc;
        case 0x4ebec0u: goto label_4ebec0;
        case 0x4ebec4u: goto label_4ebec4;
        case 0x4ebec8u: goto label_4ebec8;
        case 0x4ebeccu: goto label_4ebecc;
        case 0x4ebed0u: goto label_4ebed0;
        case 0x4ebed4u: goto label_4ebed4;
        case 0x4ebed8u: goto label_4ebed8;
        case 0x4ebedcu: goto label_4ebedc;
        case 0x4ebee0u: goto label_4ebee0;
        case 0x4ebee4u: goto label_4ebee4;
        case 0x4ebee8u: goto label_4ebee8;
        case 0x4ebeecu: goto label_4ebeec;
        case 0x4ebef0u: goto label_4ebef0;
        case 0x4ebef4u: goto label_4ebef4;
        case 0x4ebef8u: goto label_4ebef8;
        case 0x4ebefcu: goto label_4ebefc;
        case 0x4ebf00u: goto label_4ebf00;
        case 0x4ebf04u: goto label_4ebf04;
        case 0x4ebf08u: goto label_4ebf08;
        case 0x4ebf0cu: goto label_4ebf0c;
        case 0x4ebf10u: goto label_4ebf10;
        case 0x4ebf14u: goto label_4ebf14;
        case 0x4ebf18u: goto label_4ebf18;
        case 0x4ebf1cu: goto label_4ebf1c;
        case 0x4ebf20u: goto label_4ebf20;
        case 0x4ebf24u: goto label_4ebf24;
        case 0x4ebf28u: goto label_4ebf28;
        case 0x4ebf2cu: goto label_4ebf2c;
        case 0x4ebf30u: goto label_4ebf30;
        case 0x4ebf34u: goto label_4ebf34;
        case 0x4ebf38u: goto label_4ebf38;
        case 0x4ebf3cu: goto label_4ebf3c;
        case 0x4ebf40u: goto label_4ebf40;
        case 0x4ebf44u: goto label_4ebf44;
        case 0x4ebf48u: goto label_4ebf48;
        case 0x4ebf4cu: goto label_4ebf4c;
        case 0x4ebf50u: goto label_4ebf50;
        case 0x4ebf54u: goto label_4ebf54;
        case 0x4ebf58u: goto label_4ebf58;
        case 0x4ebf5cu: goto label_4ebf5c;
        case 0x4ebf60u: goto label_4ebf60;
        case 0x4ebf64u: goto label_4ebf64;
        case 0x4ebf68u: goto label_4ebf68;
        case 0x4ebf6cu: goto label_4ebf6c;
        case 0x4ebf70u: goto label_4ebf70;
        case 0x4ebf74u: goto label_4ebf74;
        case 0x4ebf78u: goto label_4ebf78;
        case 0x4ebf7cu: goto label_4ebf7c;
        case 0x4ebf80u: goto label_4ebf80;
        case 0x4ebf84u: goto label_4ebf84;
        case 0x4ebf88u: goto label_4ebf88;
        case 0x4ebf8cu: goto label_4ebf8c;
        case 0x4ebf90u: goto label_4ebf90;
        case 0x4ebf94u: goto label_4ebf94;
        case 0x4ebf98u: goto label_4ebf98;
        case 0x4ebf9cu: goto label_4ebf9c;
        case 0x4ebfa0u: goto label_4ebfa0;
        case 0x4ebfa4u: goto label_4ebfa4;
        case 0x4ebfa8u: goto label_4ebfa8;
        case 0x4ebfacu: goto label_4ebfac;
        case 0x4ebfb0u: goto label_4ebfb0;
        case 0x4ebfb4u: goto label_4ebfb4;
        case 0x4ebfb8u: goto label_4ebfb8;
        case 0x4ebfbcu: goto label_4ebfbc;
        case 0x4ebfc0u: goto label_4ebfc0;
        case 0x4ebfc4u: goto label_4ebfc4;
        case 0x4ebfc8u: goto label_4ebfc8;
        case 0x4ebfccu: goto label_4ebfcc;
        case 0x4ebfd0u: goto label_4ebfd0;
        case 0x4ebfd4u: goto label_4ebfd4;
        case 0x4ebfd8u: goto label_4ebfd8;
        case 0x4ebfdcu: goto label_4ebfdc;
        case 0x4ebfe0u: goto label_4ebfe0;
        case 0x4ebfe4u: goto label_4ebfe4;
        case 0x4ebfe8u: goto label_4ebfe8;
        case 0x4ebfecu: goto label_4ebfec;
        case 0x4ebff0u: goto label_4ebff0;
        case 0x4ebff4u: goto label_4ebff4;
        case 0x4ebff8u: goto label_4ebff8;
        case 0x4ebffcu: goto label_4ebffc;
        case 0x4ec000u: goto label_4ec000;
        case 0x4ec004u: goto label_4ec004;
        case 0x4ec008u: goto label_4ec008;
        case 0x4ec00cu: goto label_4ec00c;
        case 0x4ec010u: goto label_4ec010;
        case 0x4ec014u: goto label_4ec014;
        case 0x4ec018u: goto label_4ec018;
        case 0x4ec01cu: goto label_4ec01c;
        case 0x4ec020u: goto label_4ec020;
        case 0x4ec024u: goto label_4ec024;
        case 0x4ec028u: goto label_4ec028;
        case 0x4ec02cu: goto label_4ec02c;
        case 0x4ec030u: goto label_4ec030;
        case 0x4ec034u: goto label_4ec034;
        case 0x4ec038u: goto label_4ec038;
        case 0x4ec03cu: goto label_4ec03c;
        case 0x4ec040u: goto label_4ec040;
        case 0x4ec044u: goto label_4ec044;
        case 0x4ec048u: goto label_4ec048;
        case 0x4ec04cu: goto label_4ec04c;
        case 0x4ec050u: goto label_4ec050;
        case 0x4ec054u: goto label_4ec054;
        case 0x4ec058u: goto label_4ec058;
        case 0x4ec05cu: goto label_4ec05c;
        case 0x4ec060u: goto label_4ec060;
        case 0x4ec064u: goto label_4ec064;
        case 0x4ec068u: goto label_4ec068;
        case 0x4ec06cu: goto label_4ec06c;
        case 0x4ec070u: goto label_4ec070;
        case 0x4ec074u: goto label_4ec074;
        case 0x4ec078u: goto label_4ec078;
        case 0x4ec07cu: goto label_4ec07c;
        case 0x4ec080u: goto label_4ec080;
        case 0x4ec084u: goto label_4ec084;
        case 0x4ec088u: goto label_4ec088;
        case 0x4ec08cu: goto label_4ec08c;
        case 0x4ec090u: goto label_4ec090;
        case 0x4ec094u: goto label_4ec094;
        case 0x4ec098u: goto label_4ec098;
        case 0x4ec09cu: goto label_4ec09c;
        case 0x4ec0a0u: goto label_4ec0a0;
        case 0x4ec0a4u: goto label_4ec0a4;
        case 0x4ec0a8u: goto label_4ec0a8;
        case 0x4ec0acu: goto label_4ec0ac;
        case 0x4ec0b0u: goto label_4ec0b0;
        case 0x4ec0b4u: goto label_4ec0b4;
        case 0x4ec0b8u: goto label_4ec0b8;
        case 0x4ec0bcu: goto label_4ec0bc;
        default: break;
    }

    ctx->pc = 0x4ebd30u;

label_4ebd30:
    // 0x4ebd30: 0x8c860068  lw          $a2, 0x68($a0)
    ctx->pc = 0x4ebd30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_4ebd34:
    // 0x4ebd34: 0x50c0000b  beql        $a2, $zero, . + 4 + (0xB << 2)
label_4ebd38:
    if (ctx->pc == 0x4EBD38u) {
        ctx->pc = 0x4EBD38u;
            // 0x4ebd38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EBD3Cu;
        goto label_4ebd3c;
    }
    ctx->pc = 0x4EBD34u;
    {
        const bool branch_taken_0x4ebd34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebd34) {
            ctx->pc = 0x4EBD38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBD34u;
            // 0x4ebd38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EBD64u;
            goto label_4ebd64;
        }
    }
    ctx->pc = 0x4EBD3Cu;
label_4ebd3c:
    // 0x4ebd3c: 0x8c840078  lw          $a0, 0x78($a0)
    ctx->pc = 0x4ebd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_4ebd40:
    // 0x4ebd40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4ebd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ebd44:
    // 0x4ebd44: 0x8c4301c4  lw          $v1, 0x1C4($v0)
    ctx->pc = 0x4ebd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
label_4ebd48:
    // 0x4ebd48: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
label_4ebd4c:
    if (ctx->pc == 0x4EBD4Cu) {
        ctx->pc = 0x4EBD4Cu;
            // 0x4ebd4c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = 0x4EBD50u;
        goto label_4ebd50;
    }
    ctx->pc = 0x4EBD48u;
    {
        const bool branch_taken_0x4ebd48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ebd48) {
            ctx->pc = 0x4EBD4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBD48u;
            // 0x4ebd4c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EBD58u;
            goto label_4ebd58;
        }
    }
    ctx->pc = 0x4EBD50u;
label_4ebd50:
    // 0x4ebd50: 0x10000004  b           . + 4 + (0x4 << 2)
label_4ebd54:
    if (ctx->pc == 0x4EBD54u) {
        ctx->pc = 0x4EBD58u;
        goto label_4ebd58;
    }
    ctx->pc = 0x4EBD50u;
    {
        const bool branch_taken_0x4ebd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebd50) {
            ctx->pc = 0x4EBD64u;
            goto label_4ebd64;
        }
    }
    ctx->pc = 0x4EBD58u;
label_4ebd58:
    // 0x4ebd58: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
label_4ebd5c:
    if (ctx->pc == 0x4EBD5Cu) {
        ctx->pc = 0x4EBD5Cu;
            // 0x4ebd5c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x4EBD60u;
        goto label_4ebd60;
    }
    ctx->pc = 0x4EBD58u;
    {
        const bool branch_taken_0x4ebd58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EBD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBD58u;
            // 0x4ebd5c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebd58) {
            ctx->pc = 0x4EBD40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ebd40;
        }
    }
    ctx->pc = 0x4EBD60u;
label_4ebd60:
    // 0x4ebd60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ebd60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ebd64:
    // 0x4ebd64: 0x3e00008  jr          $ra
label_4ebd68:
    if (ctx->pc == 0x4EBD68u) {
        ctx->pc = 0x4EBD6Cu;
        goto label_4ebd6c;
    }
    ctx->pc = 0x4EBD64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EBD6Cu;
label_4ebd6c:
    // 0x4ebd6c: 0x0  nop
    ctx->pc = 0x4ebd6cu;
    // NOP
label_4ebd70:
    // 0x4ebd70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4ebd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4ebd74:
    // 0x4ebd74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ebd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4ebd78:
    // 0x4ebd78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ebd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ebd7c:
    // 0x4ebd7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ebd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ebd80:
    // 0x4ebd80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ebd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ebd84:
    // 0x4ebd84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ebd84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebd88:
    // 0x4ebd88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ebd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ebd8c:
    // 0x4ebd8c: 0x8cc40db0  lw          $a0, 0xDB0($a2)
    ctx->pc = 0x4ebd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3504)));
label_4ebd90:
    // 0x4ebd90: 0x8cd00d98  lw          $s0, 0xD98($a2)
    ctx->pc = 0x4ebd90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3480)));
label_4ebd94:
    // 0x4ebd94: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x4ebd94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_4ebd98:
    // 0x4ebd98: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_4ebd9c:
    if (ctx->pc == 0x4EBD9Cu) {
        ctx->pc = 0x4EBD9Cu;
            // 0x4ebd9c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EBDA0u;
        goto label_4ebda0;
    }
    ctx->pc = 0x4EBD98u;
    {
        const bool branch_taken_0x4ebd98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EBD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBD98u;
            // 0x4ebd9c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebd98) {
            ctx->pc = 0x4EBDACu;
            goto label_4ebdac;
        }
    }
    ctx->pc = 0x4EBDA0u;
label_4ebda0:
    // 0x4ebda0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4ebda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4ebda4:
    // 0x4ebda4: 0x5483006a  bnel        $a0, $v1, . + 4 + (0x6A << 2)
label_4ebda8:
    if (ctx->pc == 0x4EBDA8u) {
        ctx->pc = 0x4EBDA8u;
            // 0x4ebda8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4EBDACu;
        goto label_4ebdac;
    }
    ctx->pc = 0x4EBDA4u;
    {
        const bool branch_taken_0x4ebda4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ebda4) {
            ctx->pc = 0x4EBDA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBDA4u;
            // 0x4ebda8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EBF50u;
            goto label_4ebf50;
        }
    }
    ctx->pc = 0x4EBDACu;
label_4ebdac:
    // 0x4ebdac: 0x8e230da0  lw          $v1, 0xDA0($s1)
    ctx->pc = 0x4ebdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_4ebdb0:
    // 0x4ebdb0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4ebdb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4ebdb4:
    // 0x4ebdb4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_4ebdb8:
    if (ctx->pc == 0x4EBDB8u) {
        ctx->pc = 0x4EBDB8u;
            // 0x4ebdb8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x4EBDBCu;
        goto label_4ebdbc;
    }
    ctx->pc = 0x4EBDB4u;
    {
        const bool branch_taken_0x4ebdb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ebdb4) {
            ctx->pc = 0x4EBDB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBDB4u;
            // 0x4ebdb8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EBDC8u;
            goto label_4ebdc8;
        }
    }
    ctx->pc = 0x4EBDBCu;
label_4ebdbc:
    // 0x4ebdbc: 0x10000063  b           . + 4 + (0x63 << 2)
label_4ebdc0:
    if (ctx->pc == 0x4EBDC0u) {
        ctx->pc = 0x4EBDC4u;
        goto label_4ebdc4;
    }
    ctx->pc = 0x4EBDBCu;
    {
        const bool branch_taken_0x4ebdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebdbc) {
            ctx->pc = 0x4EBF4Cu;
            goto label_4ebf4c;
        }
    }
    ctx->pc = 0x4EBDC4u;
label_4ebdc4:
    // 0x4ebdc4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x4ebdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4ebdc8:
    // 0x4ebdc8: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
label_4ebdcc:
    if (ctx->pc == 0x4EBDCCu) {
        ctx->pc = 0x4EBDCCu;
            // 0x4ebdcc: 0xae20118c  sw          $zero, 0x118C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 0));
        ctx->pc = 0x4EBDD0u;
        goto label_4ebdd0;
    }
    ctx->pc = 0x4EBDC8u;
    {
        const bool branch_taken_0x4ebdc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ebdc8) {
            ctx->pc = 0x4EBDCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBDC8u;
            // 0x4ebdcc: 0xae20118c  sw          $zero, 0x118C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EBDDCu;
            goto label_4ebddc;
        }
    }
    ctx->pc = 0x4EBDD0u;
label_4ebdd0:
    // 0x4ebdd0: 0xc0b6764  jal         func_2D9D90
label_4ebdd4:
    if (ctx->pc == 0x4EBDD4u) {
        ctx->pc = 0x4EBDD4u;
            // 0x4ebdd4: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->pc = 0x4EBDD8u;
        goto label_4ebdd8;
    }
    ctx->pc = 0x4EBDD0u;
    SET_GPR_U32(ctx, 31, 0x4EBDD8u);
    ctx->pc = 0x4EBDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBDD0u;
            // 0x4ebdd4: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBDD8u; }
        if (ctx->pc != 0x4EBDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBDD8u; }
        if (ctx->pc != 0x4EBDD8u) { return; }
    }
    ctx->pc = 0x4EBDD8u;
label_4ebdd8:
    // 0x4ebdd8: 0xae20118c  sw          $zero, 0x118C($s1)
    ctx->pc = 0x4ebdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 0));
label_4ebddc:
    // 0x4ebddc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ebddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ebde0:
    // 0x4ebde0: 0x8e250d60  lw          $a1, 0xD60($s1)
    ctx->pc = 0x4ebde0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_4ebde4:
    // 0x4ebde4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4ebde4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4ebde8:
    // 0x4ebde8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4ebde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4ebdec:
    // 0x4ebdec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ebdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ebdf0:
    // 0x4ebdf0: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x4ebdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_4ebdf4:
    // 0x4ebdf4: 0xa0a0001c  sb          $zero, 0x1C($a1)
    ctx->pc = 0x4ebdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28), (uint8_t)GPR_U32(ctx, 0));
label_4ebdf8:
    // 0x4ebdf8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4ebdf8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4ebdfc:
    // 0x4ebdfc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4ebdfcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4ebe00:
    // 0x4ebe00: 0xc04cbd8  jal         func_132F60
label_4ebe04:
    if (ctx->pc == 0x4EBE04u) {
        ctx->pc = 0x4EBE04u;
            // 0x4ebe04: 0xac430084  sw          $v1, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x4EBE08u;
        goto label_4ebe08;
    }
    ctx->pc = 0x4EBE00u;
    SET_GPR_U32(ctx, 31, 0x4EBE08u);
    ctx->pc = 0x4EBE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBE00u;
            // 0x4ebe04: 0xac430084  sw          $v1, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBE08u; }
        if (ctx->pc != 0x4EBE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBE08u; }
        if (ctx->pc != 0x4EBE08u) { return; }
    }
    ctx->pc = 0x4EBE08u;
label_4ebe08:
    // 0x4ebe08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ebe08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ebe0c:
    // 0x4ebe0c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4ebe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4ebe10:
    // 0x4ebe10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ebe10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ebe14:
    // 0x4ebe14: 0x24a58820  addiu       $a1, $a1, -0x77E0
    ctx->pc = 0x4ebe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936608));
label_4ebe18:
    // 0x4ebe18: 0xc0767f0  jal         func_1D9FC0
label_4ebe1c:
    if (ctx->pc == 0x4EBE1Cu) {
        ctx->pc = 0x4EBE1Cu;
            // 0x4ebe1c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4EBE20u;
        goto label_4ebe20;
    }
    ctx->pc = 0x4EBE18u;
    SET_GPR_U32(ctx, 31, 0x4EBE20u);
    ctx->pc = 0x4EBE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBE18u;
            // 0x4ebe1c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBE20u; }
        if (ctx->pc != 0x4EBE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBE20u; }
        if (ctx->pc != 0x4EBE20u) { return; }
    }
    ctx->pc = 0x4EBE20u;
label_4ebe20:
    // 0x4ebe20: 0xae200de8  sw          $zero, 0xDE8($s1)
    ctx->pc = 0x4ebe20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3560), GPR_U32(ctx, 0));
label_4ebe24:
    // 0x4ebe24: 0x3c02ffdb  lui         $v0, 0xFFDB
    ctx->pc = 0x4ebe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65499 << 16));
label_4ebe28:
    // 0x4ebe28: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x4ebe28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_4ebe2c:
    // 0x4ebe2c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x4ebe2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4ebe30:
    // 0x4ebe30: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4ebe30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4ebe34:
    // 0x4ebe34: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x4ebe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_4ebe38:
    // 0x4ebe38: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4ebe38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4ebe3c:
    // 0x4ebe3c: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x4ebe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_4ebe40:
    // 0x4ebe40: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x4ebe40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4ebe44:
    // 0x4ebe44: 0xc0a545c  jal         func_295170
label_4ebe48:
    if (ctx->pc == 0x4EBE48u) {
        ctx->pc = 0x4EBE48u;
            // 0x4ebe48: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4EBE4Cu;
        goto label_4ebe4c;
    }
    ctx->pc = 0x4EBE44u;
    SET_GPR_U32(ctx, 31, 0x4EBE4Cu);
    ctx->pc = 0x4EBE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBE44u;
            // 0x4ebe48: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBE4Cu; }
        if (ctx->pc != 0x4EBE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBE4Cu; }
        if (ctx->pc != 0x4EBE4Cu) { return; }
    }
    ctx->pc = 0x4EBE4Cu;
label_4ebe4c:
    // 0x4ebe4c: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x4ebe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_4ebe50:
    // 0x4ebe50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ebe50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ebe54:
    // 0x4ebe54: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4ebe54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4ebe58:
    // 0x4ebe58: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4ebe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4ebe5c:
    // 0x4ebe5c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4ebe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4ebe60:
    // 0x4ebe60: 0xc08bf20  jal         func_22FC80
label_4ebe64:
    if (ctx->pc == 0x4EBE64u) {
        ctx->pc = 0x4EBE64u;
            // 0x4ebe64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EBE68u;
        goto label_4ebe68;
    }
    ctx->pc = 0x4EBE60u;
    SET_GPR_U32(ctx, 31, 0x4EBE68u);
    ctx->pc = 0x4EBE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBE60u;
            // 0x4ebe64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBE68u; }
        if (ctx->pc != 0x4EBE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBE68u; }
        if (ctx->pc != 0x4EBE68u) { return; }
    }
    ctx->pc = 0x4EBE68u;
label_4ebe68:
    // 0x4ebe68: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x4ebe68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_4ebe6c:
    // 0x4ebe6c: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x4ebe6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_4ebe70:
    // 0x4ebe70: 0xae220de4  sw          $v0, 0xDE4($s1)
    ctx->pc = 0x4ebe70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 2));
label_4ebe74:
    // 0x4ebe74: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x4ebe74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_4ebe78:
    // 0x4ebe78: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_4ebe7c:
    if (ctx->pc == 0x4EBE7Cu) {
        ctx->pc = 0x4EBE80u;
        goto label_4ebe80;
    }
    ctx->pc = 0x4EBE78u;
    {
        const bool branch_taken_0x4ebe78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebe78) {
            ctx->pc = 0x4EBEA8u;
            goto label_4ebea8;
        }
    }
    ctx->pc = 0x4EBE80u;
label_4ebe80:
    // 0x4ebe80: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x4ebe80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_4ebe84:
    // 0x4ebe84: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4ebe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4ebe88:
    // 0x4ebe88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ebe88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ebe8c:
    // 0x4ebe8c: 0x8c6301c4  lw          $v1, 0x1C4($v1)
    ctx->pc = 0x4ebe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
label_4ebe90:
    // 0x4ebe90: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_4ebe94:
    if (ctx->pc == 0x4EBE94u) {
        ctx->pc = 0x4EBE98u;
        goto label_4ebe98;
    }
    ctx->pc = 0x4EBE90u;
    {
        const bool branch_taken_0x4ebe90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ebe90) {
            ctx->pc = 0x4EBEA8u;
            goto label_4ebea8;
        }
    }
    ctx->pc = 0x4EBE98u;
label_4ebe98:
    // 0x4ebe98: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4ebe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_4ebe9c:
    // 0x4ebe9c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
label_4ebea0:
    if (ctx->pc == 0x4EBEA0u) {
        ctx->pc = 0x4EBEA0u;
            // 0x4ebea0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x4EBEA4u;
        goto label_4ebea4;
    }
    ctx->pc = 0x4EBE9Cu;
    {
        const bool branch_taken_0x4ebe9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EBEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBE9Cu;
            // 0x4ebea0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebe9c) {
            ctx->pc = 0x4EBE88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ebe88;
        }
    }
    ctx->pc = 0x4EBEA4u;
label_4ebea4:
    // 0x4ebea4: 0x0  nop
    ctx->pc = 0x4ebea4u;
    // NOP
label_4ebea8:
    // 0x4ebea8: 0x264500b0  addiu       $a1, $s2, 0xB0
    ctx->pc = 0x4ebea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_4ebeac:
    // 0x4ebeac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4ebeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4ebeb0:
    // 0x4ebeb0: 0xc04cc90  jal         func_133240
label_4ebeb4:
    if (ctx->pc == 0x4EBEB4u) {
        ctx->pc = 0x4EBEB4u;
            // 0x4ebeb4: 0x262602c0  addiu       $a2, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->pc = 0x4EBEB8u;
        goto label_4ebeb8;
    }
    ctx->pc = 0x4EBEB0u;
    SET_GPR_U32(ctx, 31, 0x4EBEB8u);
    ctx->pc = 0x4EBEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBEB0u;
            // 0x4ebeb4: 0x262602c0  addiu       $a2, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBEB8u; }
        if (ctx->pc != 0x4EBEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBEB8u; }
        if (ctx->pc != 0x4EBEB8u) { return; }
    }
    ctx->pc = 0x4EBEB8u;
label_4ebeb8:
    // 0x4ebeb8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4ebeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4ebebc:
    // 0x4ebebc: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4ebebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_4ebec0:
    // 0x4ebec0: 0xc04cc44  jal         func_133110
label_4ebec4:
    if (ctx->pc == 0x4EBEC4u) {
        ctx->pc = 0x4EBEC4u;
            // 0x4ebec4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EBEC8u;
        goto label_4ebec8;
    }
    ctx->pc = 0x4EBEC0u;
    SET_GPR_U32(ctx, 31, 0x4EBEC8u);
    ctx->pc = 0x4EBEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBEC0u;
            // 0x4ebec4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBEC8u; }
        if (ctx->pc != 0x4EBEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBEC8u; }
        if (ctx->pc != 0x4EBEC8u) { return; }
    }
    ctx->pc = 0x4EBEC8u;
label_4ebec8:
    // 0x4ebec8: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x4ebec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_4ebecc:
    // 0x4ebecc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4ebeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4ebed0:
    // 0x4ebed0: 0xc075378  jal         func_1D4DE0
label_4ebed4:
    if (ctx->pc == 0x4EBED4u) {
        ctx->pc = 0x4EBED4u;
            // 0x4ebed4: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->pc = 0x4EBED8u;
        goto label_4ebed8;
    }
    ctx->pc = 0x4EBED0u;
    SET_GPR_U32(ctx, 31, 0x4EBED8u);
    ctx->pc = 0x4EBED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBED0u;
            // 0x4ebed4: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBED8u; }
        if (ctx->pc != 0x4EBED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBED8u; }
        if (ctx->pc != 0x4EBED8u) { return; }
    }
    ctx->pc = 0x4EBED8u;
label_4ebed8:
    // 0x4ebed8: 0xc6210880  lwc1        $f1, 0x880($s1)
    ctx->pc = 0x4ebed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ebedc:
    // 0x4ebedc: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x4ebedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_4ebee0:
    // 0x4ebee0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4ebee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ebee4:
    // 0x4ebee4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x4ebee4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4ebee8:
    // 0x4ebee8: 0xc0c753c  jal         func_31D4F0
label_4ebeec:
    if (ctx->pc == 0x4EBEECu) {
        ctx->pc = 0x4EBEECu;
            // 0x4ebeec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4EBEF0u;
        goto label_4ebef0;
    }
    ctx->pc = 0x4EBEE8u;
    SET_GPR_U32(ctx, 31, 0x4EBEF0u);
    ctx->pc = 0x4EBEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBEE8u;
            // 0x4ebeec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBEF0u; }
        if (ctx->pc != 0x4EBEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBEF0u; }
        if (ctx->pc != 0x4EBEF0u) { return; }
    }
    ctx->pc = 0x4EBEF0u;
label_4ebef0:
    // 0x4ebef0: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x4ebef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_4ebef4:
    // 0x4ebef4: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x4ebef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_4ebef8:
    // 0x4ebef8: 0xc62c0930  lwc1        $f12, 0x930($s1)
    ctx->pc = 0x4ebef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4ebefc:
    // 0x4ebefc: 0xc62d0880  lwc1        $f13, 0x880($s1)
    ctx->pc = 0x4ebefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4ebf00:
    // 0x4ebf00: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4ebf00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ebf04:
    // 0x4ebf04: 0xc0c753c  jal         func_31D4F0
label_4ebf08:
    if (ctx->pc == 0x4EBF08u) {
        ctx->pc = 0x4EBF08u;
            // 0x4ebf08: 0x2624092c  addiu       $a0, $s1, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
        ctx->pc = 0x4EBF0Cu;
        goto label_4ebf0c;
    }
    ctx->pc = 0x4EBF04u;
    SET_GPR_U32(ctx, 31, 0x4EBF0Cu);
    ctx->pc = 0x4EBF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBF04u;
            // 0x4ebf08: 0x2624092c  addiu       $a0, $s1, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBF0Cu; }
        if (ctx->pc != 0x4EBF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBF0Cu; }
        if (ctx->pc != 0x4EBF0Cu) { return; }
    }
    ctx->pc = 0x4EBF0Cu;
label_4ebf0c:
    // 0x4ebf0c: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x4ebf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_4ebf10:
    // 0x4ebf10: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x4ebf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_4ebf14:
    // 0x4ebf14: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x4ebf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_4ebf18:
    // 0x4ebf18: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x4ebf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_4ebf1c:
    // 0x4ebf1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ebf1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ebf20:
    // 0x4ebf20: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x4ebf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_4ebf24:
    // 0x4ebf24: 0xc0c6250  jal         func_318940
label_4ebf28:
    if (ctx->pc == 0x4EBF28u) {
        ctx->pc = 0x4EBF28u;
            // 0x4ebf28: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x4EBF2Cu;
        goto label_4ebf2c;
    }
    ctx->pc = 0x4EBF24u;
    SET_GPR_U32(ctx, 31, 0x4EBF2Cu);
    ctx->pc = 0x4EBF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBF24u;
            // 0x4ebf28: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBF2Cu; }
        if (ctx->pc != 0x4EBF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBF2Cu; }
        if (ctx->pc != 0x4EBF2Cu) { return; }
    }
    ctx->pc = 0x4EBF2Cu;
label_4ebf2c:
    // 0x4ebf2c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4ebf2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ebf30:
    // 0x4ebf30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ebf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ebf34:
    // 0x4ebf34: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4ebf34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4ebf38:
    // 0x4ebf38: 0x320f809  jalr        $t9
label_4ebf3c:
    if (ctx->pc == 0x4EBF3Cu) {
        ctx->pc = 0x4EBF3Cu;
            // 0x4ebf3c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4EBF40u;
        goto label_4ebf40;
    }
    ctx->pc = 0x4EBF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EBF40u);
        ctx->pc = 0x4EBF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBF38u;
            // 0x4ebf3c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EBF40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EBF40u; }
            if (ctx->pc != 0x4EBF40u) { return; }
        }
        }
    }
    ctx->pc = 0x4EBF40u;
label_4ebf40:
    // 0x4ebf40: 0x8e230d70  lw          $v1, 0xD70($s1)
    ctx->pc = 0x4ebf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_4ebf44:
    // 0x4ebf44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ebf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ebf48:
    // 0x4ebf48: 0xa06400dd  sb          $a0, 0xDD($v1)
    ctx->pc = 0x4ebf48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 221), (uint8_t)GPR_U32(ctx, 4));
label_4ebf4c:
    // 0x4ebf4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ebf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ebf50:
    // 0x4ebf50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ebf50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ebf54:
    // 0x4ebf54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ebf54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ebf58:
    // 0x4ebf58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ebf58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ebf5c:
    // 0x4ebf5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ebf5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ebf60:
    // 0x4ebf60: 0x3e00008  jr          $ra
label_4ebf64:
    if (ctx->pc == 0x4EBF64u) {
        ctx->pc = 0x4EBF64u;
            // 0x4ebf64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4EBF68u;
        goto label_4ebf68;
    }
    ctx->pc = 0x4EBF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBF60u;
            // 0x4ebf64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EBF68u;
label_4ebf68:
    // 0x4ebf68: 0x0  nop
    ctx->pc = 0x4ebf68u;
    // NOP
label_4ebf6c:
    // 0x4ebf6c: 0x0  nop
    ctx->pc = 0x4ebf6cu;
    // NOP
label_4ebf70:
    // 0x4ebf70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ebf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ebf74:
    // 0x4ebf74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ebf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ebf78:
    // 0x4ebf78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ebf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ebf7c:
    // 0x4ebf7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ebf7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebf80:
    // 0x4ebf80: 0xc0b622c  jal         func_2D88B0
label_4ebf84:
    if (ctx->pc == 0x4EBF84u) {
        ctx->pc = 0x4EBF84u;
            // 0x4ebf84: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->pc = 0x4EBF88u;
        goto label_4ebf88;
    }
    ctx->pc = 0x4EBF80u;
    SET_GPR_U32(ctx, 31, 0x4EBF88u);
    ctx->pc = 0x4EBF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBF80u;
            // 0x4ebf84: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D88B0u;
    if (runtime->hasFunction(0x2D88B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D88B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBF88u; }
        if (ctx->pc != 0x4EBF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D88B0_0x2d88b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EBF88u; }
        if (ctx->pc != 0x4EBF88u) { return; }
    }
    ctx->pc = 0x4EBF88u;
label_4ebf88:
    // 0x4ebf88: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4ebf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4ebf8c:
    // 0x4ebf8c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_4ebf90:
    if (ctx->pc == 0x4EBF90u) {
        ctx->pc = 0x4EBF90u;
            // 0x4ebf90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4EBF94u;
        goto label_4ebf94;
    }
    ctx->pc = 0x4EBF8Cu;
    {
        const bool branch_taken_0x4ebf8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebf8c) {
            ctx->pc = 0x4EBF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBF8Cu;
            // 0x4ebf90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EBFB4u;
            goto label_4ebfb4;
        }
    }
    ctx->pc = 0x4EBF94u;
label_4ebf94:
    // 0x4ebf94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4ebf98:
    if (ctx->pc == 0x4EBF98u) {
        ctx->pc = 0x4EBF98u;
            // 0x4ebf98: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4EBF9Cu;
        goto label_4ebf9c;
    }
    ctx->pc = 0x4EBF94u;
    {
        const bool branch_taken_0x4ebf94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ebf94) {
            ctx->pc = 0x4EBF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBF94u;
            // 0x4ebf98: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EBFB0u;
            goto label_4ebfb0;
        }
    }
    ctx->pc = 0x4EBF9Cu;
label_4ebf9c:
    // 0x4ebf9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ebf9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ebfa0:
    // 0x4ebfa0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4ebfa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4ebfa4:
    // 0x4ebfa4: 0x320f809  jalr        $t9
label_4ebfa8:
    if (ctx->pc == 0x4EBFA8u) {
        ctx->pc = 0x4EBFA8u;
            // 0x4ebfa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4EBFACu;
        goto label_4ebfac;
    }
    ctx->pc = 0x4EBFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EBFACu);
        ctx->pc = 0x4EBFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBFA4u;
            // 0x4ebfa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EBFACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EBFACu; }
            if (ctx->pc != 0x4EBFACu) { return; }
        }
        }
    }
    ctx->pc = 0x4EBFACu;
label_4ebfac:
    // 0x4ebfac: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4ebfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4ebfb0:
    // 0x4ebfb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ebfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ebfb4:
    // 0x4ebfb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ebfb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ebfb8:
    // 0x4ebfb8: 0x3e00008  jr          $ra
label_4ebfbc:
    if (ctx->pc == 0x4EBFBCu) {
        ctx->pc = 0x4EBFBCu;
            // 0x4ebfbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4EBFC0u;
        goto label_4ebfc0;
    }
    ctx->pc = 0x4EBFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EBFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EBFB8u;
            // 0x4ebfbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EBFC0u;
label_4ebfc0:
    // 0x4ebfc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4ebfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4ebfc4:
    // 0x4ebfc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ebfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ebfc8:
    // 0x4ebfc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ebfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4ebfcc:
    // 0x4ebfcc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4ebfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4ebfd0:
    // 0x4ebfd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ebfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ebfd4:
    // 0x4ebfd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ebfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ebfd8:
    // 0x4ebfd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ebfd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebfdc:
    // 0x4ebfdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ebfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ebfe0:
    // 0x4ebfe0: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x4ebfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ebfe4:
    // 0x4ebfe4: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x4ebfe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4ebfe8:
    // 0x4ebfe8: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x4ebfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ebfec:
    // 0x4ebfec: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x4ebfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ebff0:
    // 0x4ebff0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x4ebff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4ebff4:
    // 0x4ebff4: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x4ebff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4ebff8:
    // 0x4ebff8: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x4ebff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_4ebffc:
    // 0x4ebffc: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x4ebffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_4ec000:
    // 0x4ec000: 0xc483002c  lwc1        $f3, 0x2C($a0)
    ctx->pc = 0x4ec000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ec004:
    // 0x4ec004: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x4ec004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ec008:
    // 0x4ec008: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x4ec008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ec00c:
    // 0x4ec00c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x4ec00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ec010:
    // 0x4ec010: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4ec010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4ec014:
    // 0x4ec014: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4ec014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4ec018:
    // 0x4ec018: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4ec018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4ec01c:
    // 0x4ec01c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4ec01cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4ec020:
    // 0x4ec020: 0xc0a3830  jal         func_28E0C0
label_4ec024:
    if (ctx->pc == 0x4EC024u) {
        ctx->pc = 0x4EC024u;
            // 0x4ec024: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4EC028u;
        goto label_4ec028;
    }
    ctx->pc = 0x4EC020u;
    SET_GPR_U32(ctx, 31, 0x4EC028u);
    ctx->pc = 0x4EC024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC020u;
            // 0x4ec024: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC028u; }
        if (ctx->pc != 0x4EC028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC028u; }
        if (ctx->pc != 0x4EC028u) { return; }
    }
    ctx->pc = 0x4EC028u;
label_4ec028:
    // 0x4ec028: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ec028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ec02c:
    // 0x4ec02c: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x4ec02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4ec030:
    // 0x4ec030: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4ec030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4ec034:
    // 0x4ec034: 0xc0a7a88  jal         func_29EA20
label_4ec038:
    if (ctx->pc == 0x4EC038u) {
        ctx->pc = 0x4EC038u;
            // 0x4ec038: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x4EC03Cu;
        goto label_4ec03c;
    }
    ctx->pc = 0x4EC034u;
    SET_GPR_U32(ctx, 31, 0x4EC03Cu);
    ctx->pc = 0x4EC038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC034u;
            // 0x4ec038: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC03Cu; }
        if (ctx->pc != 0x4EC03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC03Cu; }
        if (ctx->pc != 0x4EC03Cu) { return; }
    }
    ctx->pc = 0x4EC03Cu;
label_4ec03c:
    // 0x4ec03c: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x4ec03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4ec040:
    // 0x4ec040: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4ec040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ec044:
    // 0x4ec044: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_4ec048:
    if (ctx->pc == 0x4EC048u) {
        ctx->pc = 0x4EC048u;
            // 0x4ec048: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4EC04Cu;
        goto label_4ec04c;
    }
    ctx->pc = 0x4EC044u;
    {
        const bool branch_taken_0x4ec044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC044u;
            // 0x4ec048: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec044) {
            ctx->pc = 0x4EC07Cu;
            goto label_4ec07c;
        }
    }
    ctx->pc = 0x4EC04Cu;
label_4ec04c:
    // 0x4ec04c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ec04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ec050:
    // 0x4ec050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ec050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ec054:
    // 0x4ec054: 0x8c420cf0  lw          $v0, 0xCF0($v0)
    ctx->pc = 0x4ec054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3312)));
label_4ec058:
    // 0x4ec058: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4ec058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4ec05c:
    // 0x4ec05c: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x4ec05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ec060:
    // 0x4ec060: 0xc08afe0  jal         func_22BF80
label_4ec064:
    if (ctx->pc == 0x4EC064u) {
        ctx->pc = 0x4EC064u;
            // 0x4ec064: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x4EC068u;
        goto label_4ec068;
    }
    ctx->pc = 0x4EC060u;
    SET_GPR_U32(ctx, 31, 0x4EC068u);
    ctx->pc = 0x4EC064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC060u;
            // 0x4ec064: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC068u; }
        if (ctx->pc != 0x4EC068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC068u; }
        if (ctx->pc != 0x4EC068u) { return; }
    }
    ctx->pc = 0x4EC068u;
label_4ec068:
    // 0x4ec068: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ec068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ec06c:
    // 0x4ec06c: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x4ec06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_4ec070:
    // 0x4ec070: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ec070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4ec074:
    // 0x4ec074: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x4ec074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_4ec078:
    // 0x4ec078: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x4ec078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_4ec07c:
    // 0x4ec07c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4ec07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4ec080:
    // 0x4ec080: 0xc08c798  jal         func_231E60
label_4ec084:
    if (ctx->pc == 0x4EC084u) {
        ctx->pc = 0x4EC084u;
            // 0x4ec084: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC088u;
        goto label_4ec088;
    }
    ctx->pc = 0x4EC080u;
    SET_GPR_U32(ctx, 31, 0x4EC088u);
    ctx->pc = 0x4EC084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC080u;
            // 0x4ec084: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC088u; }
        if (ctx->pc != 0x4EC088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC088u; }
        if (ctx->pc != 0x4EC088u) { return; }
    }
    ctx->pc = 0x4EC088u;
label_4ec088:
    // 0x4ec088: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x4ec088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_4ec08c:
    // 0x4ec08c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ec08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ec090:
    // 0x4ec090: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4ec090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4ec094:
    // 0x4ec094: 0x26440064  addiu       $a0, $s2, 0x64
    ctx->pc = 0x4ec094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
label_4ec098:
    // 0x4ec098: 0x8c42077c  lw          $v0, 0x77C($v0)
    ctx->pc = 0x4ec098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_4ec09c:
    // 0x4ec09c: 0xc13b500  jal         func_4ED400
label_4ec0a0:
    if (ctx->pc == 0x4EC0A0u) {
        ctx->pc = 0x4EC0A0u;
            // 0x4ec0a0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4EC0A4u;
        goto label_4ec0a4;
    }
    ctx->pc = 0x4EC09Cu;
    SET_GPR_U32(ctx, 31, 0x4EC0A4u);
    ctx->pc = 0x4EC0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC09Cu;
            // 0x4ec0a0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ED400u;
    if (runtime->hasFunction(0x4ED400u)) {
        auto targetFn = runtime->lookupFunction(0x4ED400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC0A4u; }
        if (ctx->pc != 0x4EC0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ED400_0x4ed400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC0A4u; }
        if (ctx->pc != 0x4EC0A4u) { return; }
    }
    ctx->pc = 0x4EC0A4u;
label_4ec0a4:
    // 0x4ec0a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ec0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4ec0a8:
    // 0x4ec0a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ec0a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ec0ac:
    // 0x4ec0ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ec0acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ec0b0:
    // 0x4ec0b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ec0b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ec0b4:
    // 0x4ec0b4: 0x3e00008  jr          $ra
label_4ec0b8:
    if (ctx->pc == 0x4EC0B8u) {
        ctx->pc = 0x4EC0B8u;
            // 0x4ec0b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4EC0BCu;
        goto label_4ec0bc;
    }
    ctx->pc = 0x4EC0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EC0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC0B4u;
            // 0x4ec0b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EC0BCu;
label_4ec0bc:
    // 0x4ec0bc: 0x0  nop
    ctx->pc = 0x4ec0bcu;
    // NOP
}
