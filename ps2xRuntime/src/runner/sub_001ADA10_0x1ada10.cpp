#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADA10
// Address: 0x1ada10 - 0x1adb40
void sub_001ADA10_0x1ada10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADA10_0x1ada10");
#endif

    switch (ctx->pc) {
        case 0x1ada64u: goto label_1ada64;
        case 0x1ada7cu: goto label_1ada7c;
        case 0x1ada98u: goto label_1ada98;
        case 0x1adaa4u: goto label_1adaa4;
        case 0x1adac0u: goto label_1adac0;
        case 0x1adaf8u: goto label_1adaf8;
        case 0x1adb0cu: goto label_1adb0c;
        case 0x1adb18u: goto label_1adb18;
        default: break;
    }

    ctx->pc = 0x1ada10u;

    // 0x1ada10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ada10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ada14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ada14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ada18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ada1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ada1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada20: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ada20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ada24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ada24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ada28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ada2c: 0x2612090c  addiu       $s2, $s0, 0x90C
    ctx->pc = 0x1ada2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2316));
    // 0x1ada30: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1ada30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1ada34: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1ada34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada38: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1ada38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1ada3c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1ada3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada40: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ada40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ada44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ada44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ada48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ada4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ada4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada50: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1ada50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1ada54: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1ADA54u;
    {
        const bool branch_taken_0x1ada54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA54u;
            // 0x1ada58: 0x8e132030  lw          $s3, 0x2030($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada54) {
            ctx->pc = 0x1ADB18u;
            goto label_1adb18;
        }
    }
    ctx->pc = 0x1ADA5Cu;
    // 0x1ada5c: 0xc065030  jal         func_1940C0
    ctx->pc = 0x1ADA5Cu;
    SET_GPR_U32(ctx, 31, 0x1ADA64u);
    ctx->pc = 0x1940C0u;
    if (runtime->hasFunction(0x1940C0u)) {
        auto targetFn = runtime->lookupFunction(0x1940C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA64u; }
        if (ctx->pc != 0x1ADA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001940C0_0x1940c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA64u; }
        if (ctx->pc != 0x1ADA64u) { return; }
    }
    ctx->pc = 0x1ADA64u;
label_1ada64:
    // 0x1ada64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ADA64u;
    {
        const bool branch_taken_0x1ada64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA64u;
            // 0x1ada68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada64) {
            ctx->pc = 0x1ADA88u;
            goto label_1ada88;
        }
    }
    ctx->pc = 0x1ADA6Cu;
    // 0x1ada6c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ada6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ada70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ada70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada74: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1ADA74u;
    SET_GPR_U32(ctx, 31, 0x1ADA7Cu);
    ctx->pc = 0x1ADA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA74u;
            // 0x1ada78: 0x34a50f16  ori         $a1, $a1, 0xF16 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3862);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA7Cu; }
        if (ctx->pc != 0x1ADA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA7Cu; }
        if (ctx->pc != 0x1ADA7Cu) { return; }
    }
    ctx->pc = 0x1ADA7Cu;
label_1ada7c:
    // 0x1ada7c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1ADA7Cu;
    {
        const bool branch_taken_0x1ada7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA7Cu;
            // 0x1ada80: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada7c) {
            ctx->pc = 0x1ADB1Cu;
            goto label_1adb1c;
        }
    }
    ctx->pc = 0x1ADA84u;
    // 0x1ada84: 0x0  nop
    ctx->pc = 0x1ada84u;
    // NOP
label_1ada88:
    // 0x1ada88: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1ada88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ada8c: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1ada8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1ada90: 0xc065048  jal         func_194120
    ctx->pc = 0x1ADA90u;
    SET_GPR_U32(ctx, 31, 0x1ADA98u);
    ctx->pc = 0x1ADA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA90u;
            // 0x1ada94: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194120u;
    if (runtime->hasFunction(0x194120u)) {
        auto targetFn = runtime->lookupFunction(0x194120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA98u; }
        if (ctx->pc != 0x1ADA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194120_0x194120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA98u; }
        if (ctx->pc != 0x1ADA98u) { return; }
    }
    ctx->pc = 0x1ADA98u;
label_1ada98:
    // 0x1ada98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ada98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada9c: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1ADA9Cu;
    SET_GPR_U32(ctx, 31, 0x1ADAA4u);
    ctx->pc = 0x1ADAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA9Cu;
            // 0x1adaa0: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAA4u; }
        if (ctx->pc != 0x1ADAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAA4u; }
        if (ctx->pc != 0x1ADAA4u) { return; }
    }
    ctx->pc = 0x1ADAA4u;
label_1adaa4:
    // 0x1adaa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adaa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADAA8u;
    {
        const bool branch_taken_0x1adaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADAA8u;
            // 0x1adaac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adaa8) {
            ctx->pc = 0x1ADAB8u;
            goto label_1adab8;
        }
    }
    ctx->pc = 0x1ADAB0u;
    // 0x1adab0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1ADAB0u;
    {
        const bool branch_taken_0x1adab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADAB0u;
            // 0x1adab4: 0xae600114  sw          $zero, 0x114($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adab0) {
            ctx->pc = 0x1ADAE8u;
            goto label_1adae8;
        }
    }
    ctx->pc = 0x1ADAB8u;
label_1adab8:
    // 0x1adab8: 0xc069754  jal         func_1A5D50
    ctx->pc = 0x1ADAB8u;
    SET_GPR_U32(ctx, 31, 0x1ADAC0u);
    ctx->pc = 0x1A5D50u;
    if (runtime->hasFunction(0x1A5D50u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAC0u; }
        if (ctx->pc != 0x1ADAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D50_0x1a5d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAC0u; }
        if (ctx->pc != 0x1ADAC0u) { return; }
    }
    ctx->pc = 0x1ADAC0u;
label_1adac0:
    // 0x1adac0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1adac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1adac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1adac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adac8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1adac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1adacc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADACCu;
    {
        const bool branch_taken_0x1adacc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ADAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADACCu;
            // 0x1adad0: 0x64102a  slt         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adacc) {
            ctx->pc = 0x1ADAE0u;
            goto label_1adae0;
        }
    }
    ctx->pc = 0x1ADAD4u;
    // 0x1adad4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1adad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1adad8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1adad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1adadc: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1adadcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1adae0:
    // 0x1adae0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1adae0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1adae4: 0xae630114  sw          $v1, 0x114($s3)
    ctx->pc = 0x1adae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 3));
label_1adae8:
    // 0x1adae8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1adae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adaec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1adaecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adaf0: 0xc06b6d0  jal         func_1ADB40
    ctx->pc = 0x1ADAF0u;
    SET_GPR_U32(ctx, 31, 0x1ADAF8u);
    ctx->pc = 0x1ADAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADAF0u;
            // 0x1adaf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB40u;
    if (runtime->hasFunction(0x1ADB40u)) {
        auto targetFn = runtime->lookupFunction(0x1ADB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAF8u; }
        if (ctx->pc != 0x1ADAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADB40_0x1adb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAF8u; }
        if (ctx->pc != 0x1ADAF8u) { return; }
    }
    ctx->pc = 0x1ADAF8u;
label_1adaf8:
    // 0x1adaf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1adaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adafc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1adafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adb00: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1adb00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb04: 0xc06b718  jal         func_1ADC60
    ctx->pc = 0x1ADB04u;
    SET_GPR_U32(ctx, 31, 0x1ADB0Cu);
    ctx->pc = 0x1ADB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB04u;
            // 0x1adb08: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADC60u;
    if (runtime->hasFunction(0x1ADC60u)) {
        auto targetFn = runtime->lookupFunction(0x1ADC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB0Cu; }
        if (ctx->pc != 0x1ADB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADC60_0x1adc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB0Cu; }
        if (ctx->pc != 0x1ADB0Cu) { return; }
    }
    ctx->pc = 0x1ADB0Cu;
label_1adb0c:
    // 0x1adb0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb10: 0xc06b726  jal         func_1ADC98
    ctx->pc = 0x1ADB10u;
    SET_GPR_U32(ctx, 31, 0x1ADB18u);
    ctx->pc = 0x1ADB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB10u;
            // 0x1adb14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADC98u;
    if (runtime->hasFunction(0x1ADC98u)) {
        auto targetFn = runtime->lookupFunction(0x1ADC98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB18u; }
        if (ctx->pc != 0x1ADB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADC98_0x1adc98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB18u; }
        if (ctx->pc != 0x1ADB18u) { return; }
    }
    ctx->pc = 0x1ADB18u;
label_1adb18:
    // 0x1adb18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1adb18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1adb1c:
    // 0x1adb1c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1adb1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1adb20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1adb20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adb24: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1adb24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1adb28: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1adb28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adb2c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1adb2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1adb30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1adb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adb34: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB34u;
            // 0x1adb38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADB3Cu;
    // 0x1adb3c: 0x0  nop
    ctx->pc = 0x1adb3cu;
    // NOP
}
