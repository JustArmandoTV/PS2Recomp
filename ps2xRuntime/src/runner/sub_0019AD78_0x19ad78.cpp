#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019AD78
// Address: 0x19ad78 - 0x19ae10
void sub_0019AD78_0x19ad78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AD78_0x19ad78");
#endif

    switch (ctx->pc) {
        case 0x19adb0u: goto label_19adb0;
        case 0x19ade0u: goto label_19ade0;
        default: break;
    }

    ctx->pc = 0x19ad78u;

    // 0x19ad78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19ad78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19ad7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19ad7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19ad80: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19ad80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad84: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x19ad84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x19ad88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19ad88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad8c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x19ad8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x19ad90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ad90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19ad94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19ad98: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x19ad98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x19ad9c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19ad9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19ada0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19ada0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ada4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x19ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x19ada8: 0xc06e98e  jal         func_1BA638
    ctx->pc = 0x19ADA8u;
    SET_GPR_U32(ctx, 31, 0x19ADB0u);
    ctx->pc = 0x19ADACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ADA8u;
            // 0x19adac: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA638u;
    if (runtime->hasFunction(0x1BA638u)) {
        auto targetFn = runtime->lookupFunction(0x1BA638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ADB0u; }
        if (ctx->pc != 0x19ADB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA638_0x1ba638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ADB0u; }
        if (ctx->pc != 0x19ADB0u) { return; }
    }
    ctx->pc = 0x19ADB0u;
label_19adb0:
    // 0x19adb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19adb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19adb8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19ADB8u;
    {
        const bool branch_taken_0x19adb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19ADBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ADB8u;
            // 0x19adbc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19adb8) {
            ctx->pc = 0x19ADF8u;
            goto label_19adf8;
        }
    }
    ctx->pc = 0x19ADC0u;
    // 0x19adc0: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x19adc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19adc4: 0x5603000c  bnel        $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19ADC4u;
    {
        const bool branch_taken_0x19adc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19adc4) {
            ctx->pc = 0x19ADC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19ADC4u;
            // 0x19adc8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19ADF8u;
            goto label_19adf8;
        }
    }
    ctx->pc = 0x19ADCCu;
    // 0x19adcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19adccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19add0: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x19add0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x19add4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x19add4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x19add8: 0xc06ec3a  jal         func_1BB0E8
    ctx->pc = 0x19ADD8u;
    SET_GPR_U32(ctx, 31, 0x19ADE0u);
    ctx->pc = 0x19ADDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ADD8u;
            // 0x19addc: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0E8u;
    if (runtime->hasFunction(0x1BB0E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ADE0u; }
        if (ctx->pc != 0x19ADE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB0E8_0x1bb0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ADE0u; }
        if (ctx->pc != 0x19ADE0u) { return; }
    }
    ctx->pc = 0x19ADE0u;
label_19ade0:
    // 0x19ade0: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19ADE0u;
    {
        const bool branch_taken_0x19ade0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x19ADE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ADE0u;
            // 0x19ade4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ade0) {
            ctx->pc = 0x19ADF8u;
            goto label_19adf8;
        }
    }
    ctx->pc = 0x19ADE8u;
    // 0x19ade8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x19ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19adec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x19adecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19adf0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x19adf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x19adf4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x19adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_19adf8:
    // 0x19adf8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x19adf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19adfc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19adfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ae00: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x19ae00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19ae04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19ae04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ae08: 0x3e00008  jr          $ra
    ctx->pc = 0x19AE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE08u;
            // 0x19ae0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AE10u;
}
