#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016ADB0
// Address: 0x16adb0 - 0x16ae18
void sub_0016ADB0_0x16adb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016ADB0_0x16adb0");
#endif

    switch (ctx->pc) {
        case 0x16add0u: goto label_16add0;
        case 0x16ade0u: goto label_16ade0;
        case 0x16ade8u: goto label_16ade8;
        default: break;
    }

    ctx->pc = 0x16adb0u;

    // 0x16adb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16adb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16adb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16adb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16adb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16adb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16adbc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16ADBCu;
    {
        const bool branch_taken_0x16adbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16ADC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADBCu;
            // 0x16adc0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16adbc) {
            ctx->pc = 0x16ADD8u;
            goto label_16add8;
        }
    }
    ctx->pc = 0x16ADC4u;
    // 0x16adc4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16adc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16adc8: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16ADC8u;
    SET_GPR_U32(ctx, 31, 0x16ADD0u);
    ctx->pc = 0x16ADCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADC8u;
            // 0x16adcc: 0x24843a28  addiu       $a0, $a0, 0x3A28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADD0u; }
        if (ctx->pc != 0x16ADD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADD0u; }
        if (ctx->pc != 0x16ADD0u) { return; }
    }
    ctx->pc = 0x16ADD0u;
label_16add0:
    // 0x16add0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16ADD0u;
    {
        const bool branch_taken_0x16add0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADD0u;
            // 0x16add4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16add0) {
            ctx->pc = 0x16AE08u;
            goto label_16ae08;
        }
    }
    ctx->pc = 0x16ADD8u;
label_16add8:
    // 0x16add8: 0xc05ab86  jal         func_16AE18
    ctx->pc = 0x16ADD8u;
    SET_GPR_U32(ctx, 31, 0x16ADE0u);
    ctx->pc = 0x16AE18u;
    if (runtime->hasFunction(0x16AE18u)) {
        auto targetFn = runtime->lookupFunction(0x16AE18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADE0u; }
        if (ctx->pc != 0x16ADE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AE18_0x16ae18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADE0u; }
        if (ctx->pc != 0x16ADE0u) { return; }
    }
    ctx->pc = 0x16ADE0u;
label_16ade0:
    // 0x16ade0: 0xc05c6c2  jal         func_171B08
    ctx->pc = 0x16ADE0u;
    SET_GPR_U32(ctx, 31, 0x16ADE8u);
    ctx->pc = 0x16ADE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADE0u;
            // 0x16ade4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B08u;
    if (runtime->hasFunction(0x171B08u)) {
        auto targetFn = runtime->lookupFunction(0x171B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADE8u; }
        if (ctx->pc != 0x16ADE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B08_0x171b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADE8u; }
        if (ctx->pc != 0x16ADE8u) { return; }
    }
    ctx->pc = 0x16ADE8u;
label_16ade8:
    // 0x16ade8: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x16ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x16adec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x16adecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x16adf0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x16adf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16adf4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x16adf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x16adf8: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x16adf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
    // 0x16adfc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x16adfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16ae00: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ae04: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x16ae04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_16ae08:
    // 0x16ae08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ae08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ae0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16ae0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ae10: 0x3e00008  jr          $ra
    ctx->pc = 0x16AE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE10u;
            // 0x16ae14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AE18u;
}
