#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010AD98
// Address: 0x10ad98 - 0x10ae28
void sub_0010AD98_0x10ad98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AD98_0x10ad98");
#endif

    switch (ctx->pc) {
        case 0x10add8u: goto label_10add8;
        case 0x10ae04u: goto label_10ae04;
        default: break;
    }

    ctx->pc = 0x10ad98u;

    // 0x10ad98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ad98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ad9c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x10ad9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ada0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ada4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ada4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ada8: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x10ADA8u;
    {
        const bool branch_taken_0x10ada8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ADACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADA8u;
            // 0x10adac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ada8) {
            ctx->pc = 0x10AE04u;
            goto label_10ae04;
        }
    }
    ctx->pc = 0x10ADB0u;
    // 0x10adb0: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x10adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x10adb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10adb8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10ADB8u;
    {
        const bool branch_taken_0x10adb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10ADBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADB8u;
            // 0x10adbc: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10adb8) {
            ctx->pc = 0x10ADE0u;
            goto label_10ade0;
        }
    }
    ctx->pc = 0x10ADC0u;
    // 0x10adc0: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10ADC0u;
    {
        const bool branch_taken_0x10adc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10adc0) {
            ctx->pc = 0x10ADC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADC0u;
            // 0x10adc4: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10ADCCu;
            goto label_10adcc;
        }
    }
    ctx->pc = 0x10ADC8u;
    // 0x10adc8: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x10adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10adcc:
    // 0x10adcc: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x10adccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10add0: 0xc04297e  jal         func_10A5F8
    ctx->pc = 0x10ADD0u;
    SET_GPR_U32(ctx, 31, 0x10ADD8u);
    ctx->pc = 0x10ADD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADD0u;
            // 0x10add4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A5F8u;
    if (runtime->hasFunction(0x10A5F8u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADD8u; }
        if (ctx->pc != 0x10ADD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A5F8_0x10a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADD8u; }
        if (ctx->pc != 0x10ADD8u) { return; }
    }
    ctx->pc = 0x10ADD8u;
label_10add8:
    // 0x10add8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10ADD8u;
    {
        const bool branch_taken_0x10add8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ADDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADD8u;
            // 0x10addc: 0x8e030108  lw          $v1, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10add8) {
            ctx->pc = 0x10AE08u;
            goto label_10ae08;
        }
    }
    ctx->pc = 0x10ADE0u;
label_10ade0:
    // 0x10ade0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10ADE0u;
    {
        const bool branch_taken_0x10ade0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10ade0) {
            ctx->pc = 0x10ADE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADE0u;
            // 0x10ade4: 0x8e0501d8  lw          $a1, 0x1D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10ADF4u;
            goto label_10adf4;
        }
    }
    ctx->pc = 0x10ADE8u;
    // 0x10ade8: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x10ade8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x10adec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10ADECu;
    {
        const bool branch_taken_0x10adec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ADF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADECu;
            // 0x10adf0: 0x8e0601f4  lw          $a2, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10adec) {
            ctx->pc = 0x10ADF8u;
            goto label_10adf8;
        }
    }
    ctx->pc = 0x10ADF4u;
label_10adf4:
    // 0x10adf4: 0x8e0601e8  lw          $a2, 0x1E8($s0)
    ctx->pc = 0x10adf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_10adf8:
    // 0x10adf8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x10adf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10adfc: 0xc042a2e  jal         func_10A8B8
    ctx->pc = 0x10ADFCu;
    SET_GPR_U32(ctx, 31, 0x10AE04u);
    ctx->pc = 0x10AE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADFCu;
            // 0x10ae00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A8B8u;
    if (runtime->hasFunction(0x10A8B8u)) {
        auto targetFn = runtime->lookupFunction(0x10A8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE04u; }
        if (ctx->pc != 0x10AE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A8B8_0x10a8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE04u; }
        if (ctx->pc != 0x10AE04u) { return; }
    }
    ctx->pc = 0x10AE04u;
label_10ae04:
    // 0x10ae04: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x10ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_10ae08:
    // 0x10ae08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ae0c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10AE0Cu;
    {
        const bool branch_taken_0x10ae0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10AE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE0Cu;
            // 0x10ae10: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae0c) {
            ctx->pc = 0x10AE1Cu;
            goto label_10ae1c;
        }
    }
    ctx->pc = 0x10AE14u;
    // 0x10ae14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ae18: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x10ae18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_10ae1c:
    // 0x10ae1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ae1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ae20: 0x3e00008  jr          $ra
    ctx->pc = 0x10AE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE20u;
            // 0x10ae24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AE28u;
}
