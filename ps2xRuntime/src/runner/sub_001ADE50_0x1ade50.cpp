#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADE50
// Address: 0x1ade50 - 0x1adf48
void sub_001ADE50_0x1ade50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADE50_0x1ade50");
#endif

    switch (ctx->pc) {
        case 0x1ade84u: goto label_1ade84;
        case 0x1ade98u: goto label_1ade98;
        case 0x1adec0u: goto label_1adec0;
        case 0x1aded4u: goto label_1aded4;
        case 0x1adee8u: goto label_1adee8;
        case 0x1adef8u: goto label_1adef8;
        case 0x1adf0cu: goto label_1adf0c;
        case 0x1adf20u: goto label_1adf20;
        default: break;
    }

    ctx->pc = 0x1ade50u;

    // 0x1ade50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ade50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ade54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ade54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ade58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ade58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ade5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ade60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ade60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ade64: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ade64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ade68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ade68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ade6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ade6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ade70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ade74: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x1ade74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1ade78: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ade78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ade7c: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1ADE7Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE84u);
    ctx->pc = 0x1ADE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE7Cu;
            // 0x1ade80: 0x8e112030  lw          $s1, 0x2030($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE84u; }
        if (ctx->pc != 0x1ADE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE84u; }
        if (ctx->pc != 0x1ADE84u) { return; }
    }
    ctx->pc = 0x1ADE84u;
label_1ade84:
    // 0x1ade84: 0x10530027  beq         $v0, $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x1ADE84u;
    {
        const bool branch_taken_0x1ade84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1ADE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE84u;
            // 0x1ade88: 0x2632008c  addiu       $s2, $s1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade84) {
            ctx->pc = 0x1ADF24u;
            goto label_1adf24;
        }
    }
    ctx->pc = 0x1ADE8Cu;
    // 0x1ade8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ade8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade90: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1ADE90u;
    SET_GPR_U32(ctx, 31, 0x1ADE98u);
    ctx->pc = 0x1ADE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE90u;
            // 0x1ade94: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE98u; }
        if (ctx->pc != 0x1ADE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE98u; }
        if (ctx->pc != 0x1ADE98u) { return; }
    }
    ctx->pc = 0x1ADE98u;
label_1ade98:
    // 0x1ade98: 0x54530003  bnel        $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADE98u;
    {
        const bool branch_taken_0x1ade98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1ade98) {
            ctx->pc = 0x1ADE9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE98u;
            // 0x1ade9c: 0x82420058  lb          $v0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADEA8u;
            goto label_1adea8;
        }
    }
    ctx->pc = 0x1ADEA0u;
    // 0x1adea0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1ADEA0u;
    {
        const bool branch_taken_0x1adea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEA0u;
            // 0x1adea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adea0) {
            ctx->pc = 0x1ADF24u;
            goto label_1adf24;
        }
    }
    ctx->pc = 0x1ADEA8u;
label_1adea8:
    // 0x1adea8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADEA8u;
    {
        const bool branch_taken_0x1adea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEA8u;
            // 0x1adeac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adea8) {
            ctx->pc = 0x1ADEB8u;
            goto label_1adeb8;
        }
    }
    ctx->pc = 0x1ADEB0u;
    // 0x1adeb0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1ADEB0u;
    {
        const bool branch_taken_0x1adeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEB0u;
            // 0x1adeb4: 0x8e22016c  lw          $v0, 0x16C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adeb0) {
            ctx->pc = 0x1ADF24u;
            goto label_1adf24;
        }
    }
    ctx->pc = 0x1ADEB8u;
label_1adeb8:
    // 0x1adeb8: 0xc06b82a  jal         func_1AE0A8
    ctx->pc = 0x1ADEB8u;
    SET_GPR_U32(ctx, 31, 0x1ADEC0u);
    ctx->pc = 0x1ADEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEB8u;
            // 0x1adebc: 0x8e510018  lw          $s1, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0A8u;
    if (runtime->hasFunction(0x1AE0A8u)) {
        auto targetFn = runtime->lookupFunction(0x1AE0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEC0u; }
        if (ctx->pc != 0x1ADEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE0A8_0x1ae0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEC0u; }
        if (ctx->pc != 0x1ADEC0u) { return; }
    }
    ctx->pc = 0x1ADEC0u;
label_1adec0:
    // 0x1adec0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1ADEC0u;
    {
        const bool branch_taken_0x1adec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEC0u;
            // 0x1adec4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adec0) {
            ctx->pc = 0x1ADF10u;
            goto label_1adf10;
        }
    }
    ctx->pc = 0x1ADEC8u;
    // 0x1adec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adecc: 0xc06b83e  jal         func_1AE0F8
    ctx->pc = 0x1ADECCu;
    SET_GPR_U32(ctx, 31, 0x1ADED4u);
    ctx->pc = 0x1ADED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADECCu;
            // 0x1aded0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F8u;
    if (runtime->hasFunction(0x1AE0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1AE0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADED4u; }
        if (ctx->pc != 0x1ADED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE0F8_0x1ae0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADED4u; }
        if (ctx->pc != 0x1ADED4u) { return; }
    }
    ctx->pc = 0x1ADED4u;
label_1aded4:
    // 0x1aded4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ADED4u;
    {
        const bool branch_taken_0x1aded4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADED4u;
            // 0x1aded8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aded4) {
            ctx->pc = 0x1ADF14u;
            goto label_1adf14;
        }
    }
    ctx->pc = 0x1ADEDCu;
    // 0x1adedc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1adedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adee0: 0xc06b852  jal         func_1AE148
    ctx->pc = 0x1ADEE0u;
    SET_GPR_U32(ctx, 31, 0x1ADEE8u);
    ctx->pc = 0x1ADEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEE0u;
            // 0x1adee4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE148u;
    if (runtime->hasFunction(0x1AE148u)) {
        auto targetFn = runtime->lookupFunction(0x1AE148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEE8u; }
        if (ctx->pc != 0x1ADEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE148_0x1ae148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEE8u; }
        if (ctx->pc != 0x1ADEE8u) { return; }
    }
    ctx->pc = 0x1ADEE8u;
label_1adee8:
    // 0x1adee8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ADEE8u;
    {
        const bool branch_taken_0x1adee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEE8u;
            // 0x1adeec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adee8) {
            ctx->pc = 0x1ADF14u;
            goto label_1adf14;
        }
    }
    ctx->pc = 0x1ADEF0u;
    // 0x1adef0: 0xc06b7d2  jal         func_1ADF48
    ctx->pc = 0x1ADEF0u;
    SET_GPR_U32(ctx, 31, 0x1ADEF8u);
    ctx->pc = 0x1ADEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEF0u;
            // 0x1adef4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADF48u;
    if (runtime->hasFunction(0x1ADF48u)) {
        auto targetFn = runtime->lookupFunction(0x1ADF48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEF8u; }
        if (ctx->pc != 0x1ADEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADF48_0x1adf48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEF8u; }
        if (ctx->pc != 0x1ADEF8u) { return; }
    }
    ctx->pc = 0x1ADEF8u;
label_1adef8:
    // 0x1adef8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADEF8u;
    {
        const bool branch_taken_0x1adef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adef8) {
            ctx->pc = 0x1ADEFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEF8u;
            // 0x1adefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADF14u;
            goto label_1adf14;
        }
    }
    ctx->pc = 0x1ADF00u;
    // 0x1adf00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1adf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf04: 0xc06b88a  jal         func_1AE228
    ctx->pc = 0x1ADF04u;
    SET_GPR_U32(ctx, 31, 0x1ADF0Cu);
    ctx->pc = 0x1ADF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF04u;
            // 0x1adf08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE228u;
    if (runtime->hasFunction(0x1AE228u)) {
        auto targetFn = runtime->lookupFunction(0x1AE228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF0Cu; }
        if (ctx->pc != 0x1ADF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE228_0x1ae228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF0Cu; }
        if (ctx->pc != 0x1ADF0Cu) { return; }
    }
    ctx->pc = 0x1ADF0Cu;
label_1adf0c:
    // 0x1adf0c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x1adf0cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1adf10:
    // 0x1adf10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adf14:
    // 0x1adf14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1adf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf18: 0xc06b7ea  jal         func_1ADFA8
    ctx->pc = 0x1ADF18u;
    SET_GPR_U32(ctx, 31, 0x1ADF20u);
    ctx->pc = 0x1ADF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF18u;
            // 0x1adf1c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADFA8u;
    if (runtime->hasFunction(0x1ADFA8u)) {
        auto targetFn = runtime->lookupFunction(0x1ADFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF20u; }
        if (ctx->pc != 0x1ADF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADFA8_0x1adfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF20u; }
        if (ctx->pc != 0x1ADF20u) { return; }
    }
    ctx->pc = 0x1ADF20u;
label_1adf20:
    // 0x1adf20: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1adf20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1adf24:
    // 0x1adf24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adf24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adf28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1adf28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1adf2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1adf2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adf30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1adf30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1adf34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1adf34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adf38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1adf38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1adf3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF3Cu;
            // 0x1adf40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADF44u;
    // 0x1adf44: 0x0  nop
    ctx->pc = 0x1adf44u;
    // NOP
}
