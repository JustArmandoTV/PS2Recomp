#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051AE20
// Address: 0x51ae20 - 0x51b090
void sub_0051AE20_0x51ae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051AE20_0x51ae20");
#endif

    switch (ctx->pc) {
        case 0x51ae20u: goto label_51ae20;
        case 0x51ae24u: goto label_51ae24;
        case 0x51ae28u: goto label_51ae28;
        case 0x51ae2cu: goto label_51ae2c;
        case 0x51ae30u: goto label_51ae30;
        case 0x51ae34u: goto label_51ae34;
        case 0x51ae38u: goto label_51ae38;
        case 0x51ae3cu: goto label_51ae3c;
        case 0x51ae40u: goto label_51ae40;
        case 0x51ae44u: goto label_51ae44;
        case 0x51ae48u: goto label_51ae48;
        case 0x51ae4cu: goto label_51ae4c;
        case 0x51ae50u: goto label_51ae50;
        case 0x51ae54u: goto label_51ae54;
        case 0x51ae58u: goto label_51ae58;
        case 0x51ae5cu: goto label_51ae5c;
        case 0x51ae60u: goto label_51ae60;
        case 0x51ae64u: goto label_51ae64;
        case 0x51ae68u: goto label_51ae68;
        case 0x51ae6cu: goto label_51ae6c;
        case 0x51ae70u: goto label_51ae70;
        case 0x51ae74u: goto label_51ae74;
        case 0x51ae78u: goto label_51ae78;
        case 0x51ae7cu: goto label_51ae7c;
        case 0x51ae80u: goto label_51ae80;
        case 0x51ae84u: goto label_51ae84;
        case 0x51ae88u: goto label_51ae88;
        case 0x51ae8cu: goto label_51ae8c;
        case 0x51ae90u: goto label_51ae90;
        case 0x51ae94u: goto label_51ae94;
        case 0x51ae98u: goto label_51ae98;
        case 0x51ae9cu: goto label_51ae9c;
        case 0x51aea0u: goto label_51aea0;
        case 0x51aea4u: goto label_51aea4;
        case 0x51aea8u: goto label_51aea8;
        case 0x51aeacu: goto label_51aeac;
        case 0x51aeb0u: goto label_51aeb0;
        case 0x51aeb4u: goto label_51aeb4;
        case 0x51aeb8u: goto label_51aeb8;
        case 0x51aebcu: goto label_51aebc;
        case 0x51aec0u: goto label_51aec0;
        case 0x51aec4u: goto label_51aec4;
        case 0x51aec8u: goto label_51aec8;
        case 0x51aeccu: goto label_51aecc;
        case 0x51aed0u: goto label_51aed0;
        case 0x51aed4u: goto label_51aed4;
        case 0x51aed8u: goto label_51aed8;
        case 0x51aedcu: goto label_51aedc;
        case 0x51aee0u: goto label_51aee0;
        case 0x51aee4u: goto label_51aee4;
        case 0x51aee8u: goto label_51aee8;
        case 0x51aeecu: goto label_51aeec;
        case 0x51aef0u: goto label_51aef0;
        case 0x51aef4u: goto label_51aef4;
        case 0x51aef8u: goto label_51aef8;
        case 0x51aefcu: goto label_51aefc;
        case 0x51af00u: goto label_51af00;
        case 0x51af04u: goto label_51af04;
        case 0x51af08u: goto label_51af08;
        case 0x51af0cu: goto label_51af0c;
        case 0x51af10u: goto label_51af10;
        case 0x51af14u: goto label_51af14;
        case 0x51af18u: goto label_51af18;
        case 0x51af1cu: goto label_51af1c;
        case 0x51af20u: goto label_51af20;
        case 0x51af24u: goto label_51af24;
        case 0x51af28u: goto label_51af28;
        case 0x51af2cu: goto label_51af2c;
        case 0x51af30u: goto label_51af30;
        case 0x51af34u: goto label_51af34;
        case 0x51af38u: goto label_51af38;
        case 0x51af3cu: goto label_51af3c;
        case 0x51af40u: goto label_51af40;
        case 0x51af44u: goto label_51af44;
        case 0x51af48u: goto label_51af48;
        case 0x51af4cu: goto label_51af4c;
        case 0x51af50u: goto label_51af50;
        case 0x51af54u: goto label_51af54;
        case 0x51af58u: goto label_51af58;
        case 0x51af5cu: goto label_51af5c;
        case 0x51af60u: goto label_51af60;
        case 0x51af64u: goto label_51af64;
        case 0x51af68u: goto label_51af68;
        case 0x51af6cu: goto label_51af6c;
        case 0x51af70u: goto label_51af70;
        case 0x51af74u: goto label_51af74;
        case 0x51af78u: goto label_51af78;
        case 0x51af7cu: goto label_51af7c;
        case 0x51af80u: goto label_51af80;
        case 0x51af84u: goto label_51af84;
        case 0x51af88u: goto label_51af88;
        case 0x51af8cu: goto label_51af8c;
        case 0x51af90u: goto label_51af90;
        case 0x51af94u: goto label_51af94;
        case 0x51af98u: goto label_51af98;
        case 0x51af9cu: goto label_51af9c;
        case 0x51afa0u: goto label_51afa0;
        case 0x51afa4u: goto label_51afa4;
        case 0x51afa8u: goto label_51afa8;
        case 0x51afacu: goto label_51afac;
        case 0x51afb0u: goto label_51afb0;
        case 0x51afb4u: goto label_51afb4;
        case 0x51afb8u: goto label_51afb8;
        case 0x51afbcu: goto label_51afbc;
        case 0x51afc0u: goto label_51afc0;
        case 0x51afc4u: goto label_51afc4;
        case 0x51afc8u: goto label_51afc8;
        case 0x51afccu: goto label_51afcc;
        case 0x51afd0u: goto label_51afd0;
        case 0x51afd4u: goto label_51afd4;
        case 0x51afd8u: goto label_51afd8;
        case 0x51afdcu: goto label_51afdc;
        case 0x51afe0u: goto label_51afe0;
        case 0x51afe4u: goto label_51afe4;
        case 0x51afe8u: goto label_51afe8;
        case 0x51afecu: goto label_51afec;
        case 0x51aff0u: goto label_51aff0;
        case 0x51aff4u: goto label_51aff4;
        case 0x51aff8u: goto label_51aff8;
        case 0x51affcu: goto label_51affc;
        case 0x51b000u: goto label_51b000;
        case 0x51b004u: goto label_51b004;
        case 0x51b008u: goto label_51b008;
        case 0x51b00cu: goto label_51b00c;
        case 0x51b010u: goto label_51b010;
        case 0x51b014u: goto label_51b014;
        case 0x51b018u: goto label_51b018;
        case 0x51b01cu: goto label_51b01c;
        case 0x51b020u: goto label_51b020;
        case 0x51b024u: goto label_51b024;
        case 0x51b028u: goto label_51b028;
        case 0x51b02cu: goto label_51b02c;
        case 0x51b030u: goto label_51b030;
        case 0x51b034u: goto label_51b034;
        case 0x51b038u: goto label_51b038;
        case 0x51b03cu: goto label_51b03c;
        case 0x51b040u: goto label_51b040;
        case 0x51b044u: goto label_51b044;
        case 0x51b048u: goto label_51b048;
        case 0x51b04cu: goto label_51b04c;
        case 0x51b050u: goto label_51b050;
        case 0x51b054u: goto label_51b054;
        case 0x51b058u: goto label_51b058;
        case 0x51b05cu: goto label_51b05c;
        case 0x51b060u: goto label_51b060;
        case 0x51b064u: goto label_51b064;
        case 0x51b068u: goto label_51b068;
        case 0x51b06cu: goto label_51b06c;
        case 0x51b070u: goto label_51b070;
        case 0x51b074u: goto label_51b074;
        case 0x51b078u: goto label_51b078;
        case 0x51b07cu: goto label_51b07c;
        case 0x51b080u: goto label_51b080;
        case 0x51b084u: goto label_51b084;
        case 0x51b088u: goto label_51b088;
        case 0x51b08cu: goto label_51b08c;
        default: break;
    }

    ctx->pc = 0x51ae20u;

label_51ae20:
    // 0x51ae20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x51ae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_51ae24:
    // 0x51ae24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_51ae28:
    // 0x51ae28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x51ae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_51ae2c:
    // 0x51ae2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x51ae2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_51ae30:
    // 0x51ae30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51ae34:
    // 0x51ae34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51ae34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51ae38:
    // 0x51ae38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51ae3c:
    // 0x51ae3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51ae40:
    // 0x51ae40: 0x8c528a08  lw          $s2, -0x75F8($v0)
    ctx->pc = 0x51ae40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_51ae44:
    // 0x51ae44: 0xc0c7538  jal         func_31D4E0
label_51ae48:
    if (ctx->pc == 0x51AE48u) {
        ctx->pc = 0x51AE48u;
            // 0x51ae48: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51AE4Cu;
        goto label_51ae4c;
    }
    ctx->pc = 0x51AE44u;
    SET_GPR_U32(ctx, 31, 0x51AE4Cu);
    ctx->pc = 0x51AE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AE44u;
            // 0x51ae48: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4E0u;
    if (runtime->hasFunction(0x31D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AE4Cu; }
        if (ctx->pc != 0x51AE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4E0_0x31d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AE4Cu; }
        if (ctx->pc != 0x51AE4Cu) { return; }
    }
    ctx->pc = 0x51AE4Cu;
label_51ae4c:
    // 0x51ae4c: 0xc075e78  jal         func_1D79E0
label_51ae50:
    if (ctx->pc == 0x51AE50u) {
        ctx->pc = 0x51AE50u;
            // 0x51ae50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51AE54u;
        goto label_51ae54;
    }
    ctx->pc = 0x51AE4Cu;
    SET_GPR_U32(ctx, 31, 0x51AE54u);
    ctx->pc = 0x51AE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AE4Cu;
            // 0x51ae50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D79E0u;
    if (runtime->hasFunction(0x1D79E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D79E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AE54u; }
        if (ctx->pc != 0x51AE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D79E0_0x1d79e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AE54u; }
        if (ctx->pc != 0x51AE54u) { return; }
    }
    ctx->pc = 0x51AE54u;
label_51ae54:
    // 0x51ae54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x51ae54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51ae58:
    // 0x51ae58: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_51ae5c:
    // 0x51ae5c: 0x8c43ce50  lw          $v1, -0x31B0($v0)
    ctx->pc = 0x51ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954576)));
label_51ae60:
    // 0x51ae60: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x51ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_51ae64:
    // 0x51ae64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x51ae64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_51ae68:
    // 0x51ae68: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x51ae68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_51ae6c:
    // 0x51ae6c: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x51ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
label_51ae70:
    // 0x51ae70: 0xc05b774  jal         func_16DDD0
label_51ae74:
    if (ctx->pc == 0x51AE74u) {
        ctx->pc = 0x51AE78u;
        goto label_51ae78;
    }
    ctx->pc = 0x51AE70u;
    SET_GPR_U32(ctx, 31, 0x51AE78u);
    ctx->pc = 0x16DDD0u;
    if (runtime->hasFunction(0x16DDD0u)) {
        auto targetFn = runtime->lookupFunction(0x16DDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AE78u; }
        if (ctx->pc != 0x51AE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DDD0_0x16ddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AE78u; }
        if (ctx->pc != 0x51AE78u) { return; }
    }
    ctx->pc = 0x51AE78u;
label_51ae78:
    // 0x51ae78: 0xc072cd2  jal         func_1CB348
label_51ae7c:
    if (ctx->pc == 0x51AE7Cu) {
        ctx->pc = 0x51AE80u;
        goto label_51ae80;
    }
    ctx->pc = 0x51AE78u;
    SET_GPR_U32(ctx, 31, 0x51AE80u);
    ctx->pc = 0x1CB348u;
    if (runtime->hasFunction(0x1CB348u)) {
        auto targetFn = runtime->lookupFunction(0x1CB348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AE80u; }
        if (ctx->pc != 0x51AE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB348_0x1cb348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AE80u; }
        if (ctx->pc != 0x51AE80u) { return; }
    }
    ctx->pc = 0x51AE80u;
label_51ae80:
    // 0x51ae80: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x51ae80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51ae84:
    // 0x51ae84: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x51ae84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_51ae88:
    // 0x51ae88: 0x320f809  jalr        $t9
label_51ae8c:
    if (ctx->pc == 0x51AE8Cu) {
        ctx->pc = 0x51AE8Cu;
            // 0x51ae8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51AE90u;
        goto label_51ae90;
    }
    ctx->pc = 0x51AE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51AE90u);
        ctx->pc = 0x51AE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AE88u;
            // 0x51ae8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51AE90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51AE90u; }
            if (ctx->pc != 0x51AE90u) { return; }
        }
        }
    }
    ctx->pc = 0x51AE90u;
label_51ae90:
    // 0x51ae90: 0xc0578d4  jal         func_15E350
label_51ae94:
    if (ctx->pc == 0x51AE94u) {
        ctx->pc = 0x51AE94u;
            // 0x51ae94: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x51AE98u;
        goto label_51ae98;
    }
    ctx->pc = 0x51AE90u;
    SET_GPR_U32(ctx, 31, 0x51AE98u);
    ctx->pc = 0x51AE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AE90u;
            // 0x51ae94: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E350u;
    if (runtime->hasFunction(0x15E350u)) {
        auto targetFn = runtime->lookupFunction(0x15E350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AE98u; }
        if (ctx->pc != 0x51AE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E350_0x15e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AE98u; }
        if (ctx->pc != 0x51AE98u) { return; }
    }
    ctx->pc = 0x51AE98u;
label_51ae98:
    // 0x51ae98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_51ae9c:
    if (ctx->pc == 0x51AE9Cu) {
        ctx->pc = 0x51AEA0u;
        goto label_51aea0;
    }
    ctx->pc = 0x51AE98u;
    {
        const bool branch_taken_0x51ae98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51ae98) {
            ctx->pc = 0x51AEE0u;
            goto label_51aee0;
        }
    }
    ctx->pc = 0x51AEA0u;
label_51aea0:
    // 0x51aea0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_51aea4:
    // 0x51aea4: 0x8c43ce48  lw          $v1, -0x31B8($v0)
    ctx->pc = 0x51aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954568)));
label_51aea8:
    // 0x51aea8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x51aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_51aeac:
    // 0x51aeac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x51aeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_51aeb0:
    // 0x51aeb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_51aeb4:
    if (ctx->pc == 0x51AEB4u) {
        ctx->pc = 0x51AEB4u;
            // 0x51aeb4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x51AEB8u;
        goto label_51aeb8;
    }
    ctx->pc = 0x51AEB0u;
    {
        const bool branch_taken_0x51aeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x51AEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AEB0u;
            // 0x51aeb4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51aeb0) {
            ctx->pc = 0x51AEC8u;
            goto label_51aec8;
        }
    }
    ctx->pc = 0x51AEB8u;
label_51aeb8:
    // 0x51aeb8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_51aebc:
    // 0x51aebc: 0x8c42ce40  lw          $v0, -0x31C0($v0)
    ctx->pc = 0x51aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954560)));
label_51aec0:
    // 0x51aec0: 0x401027  not         $v0, $v0
    ctx->pc = 0x51aec0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_51aec4:
    // 0x51aec4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x51aec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_51aec8:
    // 0x51aec8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x51aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_51aecc:
    // 0x51aecc: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x51aeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_51aed0:
    // 0x51aed0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x51aed0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_51aed4:
    // 0x51aed4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x51aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_51aed8:
    // 0x51aed8: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x51aed8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
label_51aedc:
    // 0x51aedc: 0x0  nop
    ctx->pc = 0x51aedcu;
    // NOP
label_51aee0:
    // 0x51aee0: 0xc11bb74  jal         func_46EDD0
label_51aee4:
    if (ctx->pc == 0x51AEE4u) {
        ctx->pc = 0x51AEE8u;
        goto label_51aee8;
    }
    ctx->pc = 0x51AEE0u;
    SET_GPR_U32(ctx, 31, 0x51AEE8u);
    ctx->pc = 0x46EDD0u;
    if (runtime->hasFunction(0x46EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AEE8u; }
        if (ctx->pc != 0x51AEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDD0_0x46edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AEE8u; }
        if (ctx->pc != 0x51AEE8u) { return; }
    }
    ctx->pc = 0x51AEE8u;
label_51aee8:
    // 0x51aee8: 0x9043002c  lbu         $v1, 0x2C($v0)
    ctx->pc = 0x51aee8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
label_51aeec:
    // 0x51aeec: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_51aef0:
    if (ctx->pc == 0x51AEF0u) {
        ctx->pc = 0x51AEF4u;
        goto label_51aef4;
    }
    ctx->pc = 0x51AEECu;
    {
        const bool branch_taken_0x51aeec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51aeec) {
            ctx->pc = 0x51AF28u;
            goto label_51af28;
        }
    }
    ctx->pc = 0x51AEF4u;
label_51aef4:
    // 0x51aef4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x51aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_51aef8:
    // 0x51aef8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_51aefc:
    // 0x51aefc: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x51aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_51af00:
    // 0x51af00: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x51af00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51af04:
    // 0x51af04: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x51af04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_51af08:
    // 0x51af08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51af08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51af0c:
    // 0x51af0c: 0x0  nop
    ctx->pc = 0x51af0cu;
    // NOP
label_51af10:
    // 0x51af10: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x51af10u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
label_51af14:
    // 0x51af14: 0x0  nop
    ctx->pc = 0x51af14u;
    // NOP
label_51af18:
    // 0x51af18: 0x0  nop
    ctx->pc = 0x51af18u;
    // NOP
label_51af1c:
    // 0x51af1c: 0xc1204d0  jal         func_481340
label_51af20:
    if (ctx->pc == 0x51AF20u) {
        ctx->pc = 0x51AF24u;
        goto label_51af24;
    }
    ctx->pc = 0x51AF1Cu;
    SET_GPR_U32(ctx, 31, 0x51AF24u);
    ctx->pc = 0x481340u;
    if (runtime->hasFunction(0x481340u)) {
        auto targetFn = runtime->lookupFunction(0x481340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AF24u; }
        if (ctx->pc != 0x51AF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481340_0x481340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AF24u; }
        if (ctx->pc != 0x51AF24u) { return; }
    }
    ctx->pc = 0x51AF24u;
label_51af24:
    // 0x51af24: 0x0  nop
    ctx->pc = 0x51af24u;
    // NOP
label_51af28:
    // 0x51af28: 0xc075e78  jal         func_1D79E0
label_51af2c:
    if (ctx->pc == 0x51AF2Cu) {
        ctx->pc = 0x51AF30u;
        goto label_51af30;
    }
    ctx->pc = 0x51AF28u;
    SET_GPR_U32(ctx, 31, 0x51AF30u);
    ctx->pc = 0x1D79E0u;
    if (runtime->hasFunction(0x1D79E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D79E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AF30u; }
        if (ctx->pc != 0x51AF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D79E0_0x1d79e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AF30u; }
        if (ctx->pc != 0x51AF30u) { return; }
    }
    ctx->pc = 0x51AF30u;
label_51af30:
    // 0x51af30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x51af30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51af34:
    // 0x51af34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51af34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51af38:
    // 0x51af38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x51af38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_51af3c:
    // 0x51af3c: 0xc146c54  jal         func_51B150
label_51af40:
    if (ctx->pc == 0x51AF40u) {
        ctx->pc = 0x51AF40u;
            // 0x51af40: 0x24060700  addiu       $a2, $zero, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
        ctx->pc = 0x51AF44u;
        goto label_51af44;
    }
    ctx->pc = 0x51AF3Cu;
    SET_GPR_U32(ctx, 31, 0x51AF44u);
    ctx->pc = 0x51AF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AF3Cu;
            // 0x51af40: 0x24060700  addiu       $a2, $zero, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51B150u;
    if (runtime->hasFunction(0x51B150u)) {
        auto targetFn = runtime->lookupFunction(0x51B150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AF44u; }
        if (ctx->pc != 0x51AF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051B150_0x51b150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AF44u; }
        if (ctx->pc != 0x51AF44u) { return; }
    }
    ctx->pc = 0x51AF44u;
label_51af44:
    // 0x51af44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_51af48:
    if (ctx->pc == 0x51AF48u) {
        ctx->pc = 0x51AF4Cu;
        goto label_51af4c;
    }
    ctx->pc = 0x51AF44u;
    {
        const bool branch_taken_0x51af44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51af44) {
            ctx->pc = 0x51AF58u;
            goto label_51af58;
        }
    }
    ctx->pc = 0x51AF4Cu;
label_51af4c:
    // 0x51af4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x51af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51af50:
    // 0x51af50: 0x1000000d  b           . + 4 + (0xD << 2)
label_51af54:
    if (ctx->pc == 0x51AF54u) {
        ctx->pc = 0x51AF54u;
            // 0x51af54: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x51AF58u;
        goto label_51af58;
    }
    ctx->pc = 0x51AF50u;
    {
        const bool branch_taken_0x51af50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51AF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AF50u;
            // 0x51af54: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51af50) {
            ctx->pc = 0x51AF88u;
            goto label_51af88;
        }
    }
    ctx->pc = 0x51AF58u;
label_51af58:
    // 0x51af58: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x51af58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_51af5c:
    // 0x51af5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_51af60:
    if (ctx->pc == 0x51AF60u) {
        ctx->pc = 0x51AF64u;
        goto label_51af64;
    }
    ctx->pc = 0x51AF5Cu;
    {
        const bool branch_taken_0x51af5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51af5c) {
            ctx->pc = 0x51AF88u;
            goto label_51af88;
        }
    }
    ctx->pc = 0x51AF64u;
label_51af64:
    // 0x51af64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x51af64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_51af68:
    // 0x51af68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51af68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51af6c:
    // 0x51af6c: 0xc146c48  jal         func_51B120
label_51af70:
    if (ctx->pc == 0x51AF70u) {
        ctx->pc = 0x51AF70u;
            // 0x51af70: 0x24060700  addiu       $a2, $zero, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
        ctx->pc = 0x51AF74u;
        goto label_51af74;
    }
    ctx->pc = 0x51AF6Cu;
    SET_GPR_U32(ctx, 31, 0x51AF74u);
    ctx->pc = 0x51AF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AF6Cu;
            // 0x51af70: 0x24060700  addiu       $a2, $zero, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51B120u;
    if (runtime->hasFunction(0x51B120u)) {
        auto targetFn = runtime->lookupFunction(0x51B120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AF74u; }
        if (ctx->pc != 0x51AF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051B120_0x51b120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AF74u; }
        if (ctx->pc != 0x51AF74u) { return; }
    }
    ctx->pc = 0x51AF74u;
label_51af74:
    // 0x51af74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_51af78:
    if (ctx->pc == 0x51AF78u) {
        ctx->pc = 0x51AF7Cu;
        goto label_51af7c;
    }
    ctx->pc = 0x51AF74u;
    {
        const bool branch_taken_0x51af74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x51af74) {
            ctx->pc = 0x51AF88u;
            goto label_51af88;
        }
    }
    ctx->pc = 0x51AF7Cu;
label_51af7c:
    // 0x51af7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51af7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51af80:
    // 0x51af80: 0xc1468e8  jal         func_51A3A0
label_51af84:
    if (ctx->pc == 0x51AF84u) {
        ctx->pc = 0x51AF84u;
            // 0x51af84: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x51AF88u;
        goto label_51af88;
    }
    ctx->pc = 0x51AF80u;
    SET_GPR_U32(ctx, 31, 0x51AF88u);
    ctx->pc = 0x51AF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AF80u;
            // 0x51af84: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51A3A0u;
    if (runtime->hasFunction(0x51A3A0u)) {
        auto targetFn = runtime->lookupFunction(0x51A3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AF88u; }
        if (ctx->pc != 0x51AF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051A3A0_0x51a3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AF88u; }
        if (ctx->pc != 0x51AF88u) { return; }
    }
    ctx->pc = 0x51AF88u;
label_51af88:
    // 0x51af88: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x51af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_51af8c:
    // 0x51af8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_51af90:
    if (ctx->pc == 0x51AF90u) {
        ctx->pc = 0x51AF94u;
        goto label_51af94;
    }
    ctx->pc = 0x51AF8Cu;
    {
        const bool branch_taken_0x51af8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51af8c) {
            ctx->pc = 0x51AFA0u;
            goto label_51afa0;
        }
    }
    ctx->pc = 0x51AF94u;
label_51af94:
    // 0x51af94: 0xc1468e8  jal         func_51A3A0
label_51af98:
    if (ctx->pc == 0x51AF98u) {
        ctx->pc = 0x51AF98u;
            // 0x51af98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51AF9Cu;
        goto label_51af9c;
    }
    ctx->pc = 0x51AF94u;
    SET_GPR_U32(ctx, 31, 0x51AF9Cu);
    ctx->pc = 0x51AF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AF94u;
            // 0x51af98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51A3A0u;
    if (runtime->hasFunction(0x51A3A0u)) {
        auto targetFn = runtime->lookupFunction(0x51A3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AF9Cu; }
        if (ctx->pc != 0x51AF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051A3A0_0x51a3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AF9Cu; }
        if (ctx->pc != 0x51AF9Cu) { return; }
    }
    ctx->pc = 0x51AF9Cu;
label_51af9c:
    // 0x51af9c: 0x0  nop
    ctx->pc = 0x51af9cu;
    // NOP
label_51afa0:
    // 0x51afa0: 0xc077318  jal         func_1DCC60
label_51afa4:
    if (ctx->pc == 0x51AFA4u) {
        ctx->pc = 0x51AFA8u;
        goto label_51afa8;
    }
    ctx->pc = 0x51AFA0u;
    SET_GPR_U32(ctx, 31, 0x51AFA8u);
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFA8u; }
        if (ctx->pc != 0x51AFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFA8u; }
        if (ctx->pc != 0x51AFA8u) { return; }
    }
    ctx->pc = 0x51AFA8u;
label_51afa8:
    // 0x51afa8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x51afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_51afac:
    // 0x51afac: 0xc146a70  jal         func_51A9C0
label_51afb0:
    if (ctx->pc == 0x51AFB0u) {
        ctx->pc = 0x51AFB0u;
            // 0x51afb0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x51AFB4u;
        goto label_51afb4;
    }
    ctx->pc = 0x51AFACu;
    SET_GPR_U32(ctx, 31, 0x51AFB4u);
    ctx->pc = 0x51AFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AFACu;
            // 0x51afb0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51A9C0u;
    if (runtime->hasFunction(0x51A9C0u)) {
        auto targetFn = runtime->lookupFunction(0x51A9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFB4u; }
        if (ctx->pc != 0x51AFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051A9C0_0x51a9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFB4u; }
        if (ctx->pc != 0x51AFB4u) { return; }
    }
    ctx->pc = 0x51AFB4u;
label_51afb4:
    // 0x51afb4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_51afb8:
    if (ctx->pc == 0x51AFB8u) {
        ctx->pc = 0x51AFBCu;
        goto label_51afbc;
    }
    ctx->pc = 0x51AFB4u;
    {
        const bool branch_taken_0x51afb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51afb4) {
            ctx->pc = 0x51B010u;
            goto label_51b010;
        }
    }
    ctx->pc = 0x51AFBCu;
label_51afbc:
    // 0x51afbc: 0xc0c7538  jal         func_31D4E0
label_51afc0:
    if (ctx->pc == 0x51AFC0u) {
        ctx->pc = 0x51AFC4u;
        goto label_51afc4;
    }
    ctx->pc = 0x51AFBCu;
    SET_GPR_U32(ctx, 31, 0x51AFC4u);
    ctx->pc = 0x31D4E0u;
    if (runtime->hasFunction(0x31D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFC4u; }
        if (ctx->pc != 0x51AFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4E0_0x31d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFC4u; }
        if (ctx->pc != 0x51AFC4u) { return; }
    }
    ctx->pc = 0x51AFC4u;
label_51afc4:
    // 0x51afc4: 0xc057b78  jal         func_15EDE0
label_51afc8:
    if (ctx->pc == 0x51AFC8u) {
        ctx->pc = 0x51AFC8u;
            // 0x51afc8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x51AFCCu;
        goto label_51afcc;
    }
    ctx->pc = 0x51AFC4u;
    SET_GPR_U32(ctx, 31, 0x51AFCCu);
    ctx->pc = 0x51AFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AFC4u;
            // 0x51afc8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDE0u;
    if (runtime->hasFunction(0x15EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFCCu; }
        if (ctx->pc != 0x51AFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDE0_0x15ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFCCu; }
        if (ctx->pc != 0x51AFCCu) { return; }
    }
    ctx->pc = 0x51AFCCu;
label_51afcc:
    // 0x51afcc: 0xc0c05c4  jal         func_301710
label_51afd0:
    if (ctx->pc == 0x51AFD0u) {
        ctx->pc = 0x51AFD4u;
        goto label_51afd4;
    }
    ctx->pc = 0x51AFCCu;
    SET_GPR_U32(ctx, 31, 0x51AFD4u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFD4u; }
        if (ctx->pc != 0x51AFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFD4u; }
        if (ctx->pc != 0x51AFD4u) { return; }
    }
    ctx->pc = 0x51AFD4u;
label_51afd4:
    // 0x51afd4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x51afd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51afd8:
    // 0x51afd8: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x51afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
label_51afdc:
    // 0x51afdc: 0xc072740  jal         func_1C9D00
label_51afe0:
    if (ctx->pc == 0x51AFE0u) {
        ctx->pc = 0x51AFE0u;
            // 0x51afe0: 0x34440400  ori         $a0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->pc = 0x51AFE4u;
        goto label_51afe4;
    }
    ctx->pc = 0x51AFDCu;
    SET_GPR_U32(ctx, 31, 0x51AFE4u);
    ctx->pc = 0x51AFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AFDCu;
            // 0x51afe0: 0x34440400  ori         $a0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9D00u;
    if (runtime->hasFunction(0x1C9D00u)) {
        auto targetFn = runtime->lookupFunction(0x1C9D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFE4u; }
        if (ctx->pc != 0x51AFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9D00_0x1c9d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFE4u; }
        if (ctx->pc != 0x51AFE4u) { return; }
    }
    ctx->pc = 0x51AFE4u;
label_51afe4:
    // 0x51afe4: 0xc146c30  jal         func_51B0C0
label_51afe8:
    if (ctx->pc == 0x51AFE8u) {
        ctx->pc = 0x51AFE8u;
            // 0x51afe8: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x51AFECu;
        goto label_51afec;
    }
    ctx->pc = 0x51AFE4u;
    SET_GPR_U32(ctx, 31, 0x51AFECu);
    ctx->pc = 0x51AFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AFE4u;
            // 0x51afe8: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51B0C0u;
    if (runtime->hasFunction(0x51B0C0u)) {
        auto targetFn = runtime->lookupFunction(0x51B0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFECu; }
        if (ctx->pc != 0x51AFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051B0C0_0x51b0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFECu; }
        if (ctx->pc != 0x51AFECu) { return; }
    }
    ctx->pc = 0x51AFECu;
label_51afec:
    // 0x51afec: 0xc146c2c  jal         func_51B0B0
label_51aff0:
    if (ctx->pc == 0x51AFF0u) {
        ctx->pc = 0x51AFF0u;
            // 0x51aff0: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x51AFF4u;
        goto label_51aff4;
    }
    ctx->pc = 0x51AFECu;
    SET_GPR_U32(ctx, 31, 0x51AFF4u);
    ctx->pc = 0x51AFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AFECu;
            // 0x51aff0: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51B0B0u;
    if (runtime->hasFunction(0x51B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x51B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFF4u; }
        if (ctx->pc != 0x51AFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051B0B0_0x51b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFF4u; }
        if (ctx->pc != 0x51AFF4u) { return; }
    }
    ctx->pc = 0x51AFF4u;
label_51aff4:
    // 0x51aff4: 0xc146c28  jal         func_51B0A0
label_51aff8:
    if (ctx->pc == 0x51AFF8u) {
        ctx->pc = 0x51AFF8u;
            // 0x51aff8: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x51AFFCu;
        goto label_51affc;
    }
    ctx->pc = 0x51AFF4u;
    SET_GPR_U32(ctx, 31, 0x51AFFCu);
    ctx->pc = 0x51AFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AFF4u;
            // 0x51aff8: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51B0A0u;
    if (runtime->hasFunction(0x51B0A0u)) {
        auto targetFn = runtime->lookupFunction(0x51B0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFFCu; }
        if (ctx->pc != 0x51AFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051B0A0_0x51b0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AFFCu; }
        if (ctx->pc != 0x51AFFCu) { return; }
    }
    ctx->pc = 0x51AFFCu;
label_51affc:
    // 0x51affc: 0xc0b369c  jal         func_2CDA70
label_51b000:
    if (ctx->pc == 0x51B000u) {
        ctx->pc = 0x51B004u;
        goto label_51b004;
    }
    ctx->pc = 0x51AFFCu;
    SET_GPR_U32(ctx, 31, 0x51B004u);
    ctx->pc = 0x2CDA70u;
    if (runtime->hasFunction(0x2CDA70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B004u; }
        if (ctx->pc != 0x51B004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDA70_0x2cda70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B004u; }
        if (ctx->pc != 0x51B004u) { return; }
    }
    ctx->pc = 0x51B004u;
label_51b004:
    // 0x51b004: 0xc146c24  jal         func_51B090
label_51b008:
    if (ctx->pc == 0x51B008u) {
        ctx->pc = 0x51B008u;
            // 0x51b008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51B00Cu;
        goto label_51b00c;
    }
    ctx->pc = 0x51B004u;
    SET_GPR_U32(ctx, 31, 0x51B00Cu);
    ctx->pc = 0x51B008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B004u;
            // 0x51b008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51B090u;
    if (runtime->hasFunction(0x51B090u)) {
        auto targetFn = runtime->lookupFunction(0x51B090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B00Cu; }
        if (ctx->pc != 0x51B00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051B090_0x51b090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B00Cu; }
        if (ctx->pc != 0x51B00Cu) { return; }
    }
    ctx->pc = 0x51B00Cu;
label_51b00c:
    // 0x51b00c: 0x0  nop
    ctx->pc = 0x51b00cu;
    // NOP
label_51b010:
    // 0x51b010: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51b010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51b014:
    // 0x51b014: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x51b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_51b018:
    // 0x51b018: 0xc0aa46c  jal         func_2A91B0
label_51b01c:
    if (ctx->pc == 0x51B01Cu) {
        ctx->pc = 0x51B01Cu;
            // 0x51b01c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x51B020u;
        goto label_51b020;
    }
    ctx->pc = 0x51B018u;
    SET_GPR_U32(ctx, 31, 0x51B020u);
    ctx->pc = 0x51B01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B018u;
            // 0x51b01c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A91B0u;
    if (runtime->hasFunction(0x2A91B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A91B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B020u; }
        if (ctx->pc != 0x51B020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A91B0_0x2a91b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B020u; }
        if (ctx->pc != 0x51B020u) { return; }
    }
    ctx->pc = 0x51B020u;
label_51b020:
    // 0x51b020: 0x92420082  lbu         $v0, 0x82($s2)
    ctx->pc = 0x51b020u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 130)));
label_51b024:
    // 0x51b024: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x51b024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51b028:
    // 0x51b028: 0xa242007d  sb          $v0, 0x7D($s2)
    ctx->pc = 0x51b028u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 125), (uint8_t)GPR_U32(ctx, 2));
label_51b02c:
    // 0x51b02c: 0x92420082  lbu         $v0, 0x82($s2)
    ctx->pc = 0x51b02cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 130)));
label_51b030:
    // 0x51b030: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x51b030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_51b034:
    // 0x51b034: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x51b034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_51b038:
    // 0x51b038: 0xc0aa330  jal         func_2A8CC0
label_51b03c:
    if (ctx->pc == 0x51B03Cu) {
        ctx->pc = 0x51B03Cu;
            // 0x51b03c: 0xa242007e  sb          $v0, 0x7E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 126), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x51B040u;
        goto label_51b040;
    }
    ctx->pc = 0x51B038u;
    SET_GPR_U32(ctx, 31, 0x51B040u);
    ctx->pc = 0x51B03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B038u;
            // 0x51b03c: 0xa242007e  sb          $v0, 0x7E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 126), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8CC0u;
    if (runtime->hasFunction(0x2A8CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2A8CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B040u; }
        if (ctx->pc != 0x51B040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8CC0_0x2a8cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B040u; }
        if (ctx->pc != 0x51B040u) { return; }
    }
    ctx->pc = 0x51B040u;
label_51b040:
    // 0x51b040: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x51b040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_51b044:
    // 0x51b044: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x51b044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_51b048:
    // 0x51b048: 0x320f809  jalr        $t9
label_51b04c:
    if (ctx->pc == 0x51B04Cu) {
        ctx->pc = 0x51B04Cu;
            // 0x51b04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51B050u;
        goto label_51b050;
    }
    ctx->pc = 0x51B048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51B050u);
        ctx->pc = 0x51B04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B048u;
            // 0x51b04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51B050u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51B050u; }
            if (ctx->pc != 0x51B050u) { return; }
        }
        }
    }
    ctx->pc = 0x51B050u;
label_51b050:
    // 0x51b050: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x51b050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_51b054:
    // 0x51b054: 0x30630054  andi        $v1, $v1, 0x54
    ctx->pc = 0x51b054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)84);
label_51b058:
    // 0x51b058: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x51b058u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_51b05c:
    // 0x51b05c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x51b05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_51b060:
    // 0x51b060: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
label_51b064:
    if (ctx->pc == 0x51B064u) {
        ctx->pc = 0x51B068u;
        goto label_51b068;
    }
    ctx->pc = 0x51B060u;
    {
        const bool branch_taken_0x51b060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x51b060) {
            ctx->pc = 0x51AE70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51ae70;
        }
    }
    ctx->pc = 0x51B068u;
label_51b068:
    // 0x51b068: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x51b068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_51b06c:
    // 0x51b06c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x51b06cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_51b070:
    // 0x51b070: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51b070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51b074:
    // 0x51b074: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51b074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51b078:
    // 0x51b078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51b078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51b07c:
    // 0x51b07c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51b07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51b080:
    // 0x51b080: 0x3e00008  jr          $ra
label_51b084:
    if (ctx->pc == 0x51B084u) {
        ctx->pc = 0x51B084u;
            // 0x51b084: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x51B088u;
        goto label_51b088;
    }
    ctx->pc = 0x51B080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B080u;
            // 0x51b084: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B088u;
label_51b088:
    // 0x51b088: 0x0  nop
    ctx->pc = 0x51b088u;
    // NOP
label_51b08c:
    // 0x51b08c: 0x0  nop
    ctx->pc = 0x51b08cu;
    // NOP
}
