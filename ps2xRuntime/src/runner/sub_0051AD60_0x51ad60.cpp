#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051AD60
// Address: 0x51ad60 - 0x51ae20
void sub_0051AD60_0x51ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051AD60_0x51ad60");
#endif

    switch (ctx->pc) {
        case 0x51add4u: goto label_51add4;
        case 0x51ae08u: goto label_51ae08;
        default: break;
    }

    ctx->pc = 0x51ad60u;

    // 0x51ad60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51ad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x51ad64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x51ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x51ad68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51ad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51ad6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51ad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51ad70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x51ad70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51ad74: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x51AD74u;
    {
        const bool branch_taken_0x51ad74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x51AD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AD74u;
            // 0x51ad78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ad74) {
            ctx->pc = 0x51AE08u;
            goto label_51ae08;
        }
    }
    ctx->pc = 0x51AD7Cu;
    // 0x51ad7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51ad80: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51ad84: 0x24425a60  addiu       $v0, $v0, 0x5A60
    ctx->pc = 0x51ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23136));
    // 0x51ad88: 0x24635a6c  addiu       $v1, $v1, 0x5A6C
    ctx->pc = 0x51ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23148));
    // 0x51ad8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x51ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x51ad90: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x51ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x51ad94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x51AD94u;
    {
        const bool branch_taken_0x51ad94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x51AD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AD94u;
            // 0x51ad98: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ad94) {
            ctx->pc = 0x51ADD4u;
            goto label_51add4;
        }
    }
    ctx->pc = 0x51AD9Cu;
    // 0x51ad9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51ada0: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x51ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x51ada4: 0x24630c68  addiu       $v1, $v1, 0xC68
    ctx->pc = 0x51ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3176));
    // 0x51ada8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x51ADA8u;
    {
        const bool branch_taken_0x51ada8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x51ADACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51ADA8u;
            // 0x51adac: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ada8) {
            ctx->pc = 0x51ADD4u;
            goto label_51add4;
        }
    }
    ctx->pc = 0x51ADB0u;
    // 0x51adb0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x51ADB0u;
    {
        const bool branch_taken_0x51adb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51adb0) {
            ctx->pc = 0x51ADD4u;
            goto label_51add4;
        }
    }
    ctx->pc = 0x51ADB8u;
    // 0x51adb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x51ADB8u;
    {
        const bool branch_taken_0x51adb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51adb8) {
            ctx->pc = 0x51ADD4u;
            goto label_51add4;
        }
    }
    ctx->pc = 0x51ADC0u;
    // 0x51adc0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x51adc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x51adc4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x51ADC4u;
    {
        const bool branch_taken_0x51adc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51adc4) {
            ctx->pc = 0x51ADD4u;
            goto label_51add4;
        }
    }
    ctx->pc = 0x51ADCCu;
    // 0x51adcc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51ADCCu;
    SET_GPR_U32(ctx, 31, 0x51ADD4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51ADD4u; }
        if (ctx->pc != 0x51ADD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51ADD4u; }
        if (ctx->pc != 0x51ADD4u) { return; }
    }
    ctx->pc = 0x51ADD4u;
label_51add4:
    // 0x51add4: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x51ADD4u;
    {
        const bool branch_taken_0x51add4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x51add4) {
            ctx->pc = 0x51ADD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51ADD4u;
            // 0x51add8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51ADF4u;
            goto label_51adf4;
        }
    }
    ctx->pc = 0x51ADDCu;
    // 0x51addc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51addcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51ade0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51ade4: 0x24635a48  addiu       $v1, $v1, 0x5A48
    ctx->pc = 0x51ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23112));
    // 0x51ade8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x51ade8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x51adec: 0xac403e40  sw          $zero, 0x3E40($v0)
    ctx->pc = 0x51adecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15936), GPR_U32(ctx, 0));
    // 0x51adf0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x51adf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_51adf4:
    // 0x51adf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51adf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x51adf8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x51ADF8u;
    {
        const bool branch_taken_0x51adf8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x51adf8) {
            ctx->pc = 0x51ADFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51ADF8u;
            // 0x51adfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51AE0Cu;
            goto label_51ae0c;
        }
    }
    ctx->pc = 0x51AE00u;
    // 0x51ae00: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51AE00u;
    SET_GPR_U32(ctx, 31, 0x51AE08u);
    ctx->pc = 0x51AE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51AE00u;
            // 0x51ae04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AE08u; }
        if (ctx->pc != 0x51AE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51AE08u; }
        if (ctx->pc != 0x51AE08u) { return; }
    }
    ctx->pc = 0x51AE08u;
label_51ae08:
    // 0x51ae08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x51ae08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51ae0c:
    // 0x51ae0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51ae0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51ae10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51ae10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51ae14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51ae14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51ae18: 0x3e00008  jr          $ra
    ctx->pc = 0x51AE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51AE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51AE18u;
            // 0x51ae1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51AE20u;
}
