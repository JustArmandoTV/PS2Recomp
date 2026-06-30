#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044ADA0
// Address: 0x44ada0 - 0x44ae80
void sub_0044ADA0_0x44ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044ADA0_0x44ada0");
#endif

    switch (ctx->pc) {
        case 0x44add8u: goto label_44add8;
        case 0x44adfcu: goto label_44adfc;
        case 0x44ae20u: goto label_44ae20;
        case 0x44ae44u: goto label_44ae44;
        case 0x44ae64u: goto label_44ae64;
        default: break;
    }

    ctx->pc = 0x44ada0u;

    // 0x44ada0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44ada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44ada4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44ada4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44ada8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44adac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44adacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44adb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44adb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44adb4: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x44ADB4u;
    {
        const bool branch_taken_0x44adb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44ADB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44ADB4u;
            // 0x44adb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44adb4) {
            ctx->pc = 0x44AE64u;
            goto label_44ae64;
        }
    }
    ctx->pc = 0x44ADBCu;
    // 0x44adbc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44adc0: 0x8c457560  lw          $a1, 0x7560($v0)
    ctx->pc = 0x44adc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30048)));
    // 0x44adc4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x44ADC4u;
    {
        const bool branch_taken_0x44adc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x44adc4) {
            ctx->pc = 0x44ADE0u;
            goto label_44ade0;
        }
    }
    ctx->pc = 0x44ADCCu;
    // 0x44adcc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44adccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44add0: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x44ADD0u;
    SET_GPR_U32(ctx, 31, 0x44ADD8u);
    ctx->pc = 0x44ADD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44ADD0u;
            // 0x44add4: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ADD8u; }
        if (ctx->pc != 0x44ADD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ADD8u; }
        if (ctx->pc != 0x44ADD8u) { return; }
    }
    ctx->pc = 0x44ADD8u;
label_44add8:
    // 0x44add8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44add8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44addc: 0xac407560  sw          $zero, 0x7560($v0)
    ctx->pc = 0x44addcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30048), GPR_U32(ctx, 0));
label_44ade0:
    // 0x44ade0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ade4: 0x8c45757c  lw          $a1, 0x757C($v0)
    ctx->pc = 0x44ade4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30076)));
    // 0x44ade8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x44ADE8u;
    {
        const bool branch_taken_0x44ade8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ade8) {
            ctx->pc = 0x44AE04u;
            goto label_44ae04;
        }
    }
    ctx->pc = 0x44ADF0u;
    // 0x44adf0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44adf4: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x44ADF4u;
    SET_GPR_U32(ctx, 31, 0x44ADFCu);
    ctx->pc = 0x44ADF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44ADF4u;
            // 0x44adf8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ADFCu; }
        if (ctx->pc != 0x44ADFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44ADFCu; }
        if (ctx->pc != 0x44ADFCu) { return; }
    }
    ctx->pc = 0x44ADFCu;
label_44adfc:
    // 0x44adfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ae00: 0xac40757c  sw          $zero, 0x757C($v0)
    ctx->pc = 0x44ae00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30076), GPR_U32(ctx, 0));
label_44ae04:
    // 0x44ae04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ae08: 0x8c457578  lw          $a1, 0x7578($v0)
    ctx->pc = 0x44ae08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30072)));
    // 0x44ae0c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x44AE0Cu;
    {
        const bool branch_taken_0x44ae0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ae0c) {
            ctx->pc = 0x44AE28u;
            goto label_44ae28;
        }
    }
    ctx->pc = 0x44AE14u;
    // 0x44ae14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ae18: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x44AE18u;
    SET_GPR_U32(ctx, 31, 0x44AE20u);
    ctx->pc = 0x44AE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AE18u;
            // 0x44ae1c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AE20u; }
        if (ctx->pc != 0x44AE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AE20u; }
        if (ctx->pc != 0x44AE20u) { return; }
    }
    ctx->pc = 0x44AE20u;
label_44ae20:
    // 0x44ae20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ae24: 0xac407578  sw          $zero, 0x7578($v0)
    ctx->pc = 0x44ae24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30072), GPR_U32(ctx, 0));
label_44ae28:
    // 0x44ae28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ae2c: 0x8c457558  lw          $a1, 0x7558($v0)
    ctx->pc = 0x44ae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30040)));
    // 0x44ae30: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x44AE30u;
    {
        const bool branch_taken_0x44ae30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ae30) {
            ctx->pc = 0x44AE34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44AE30u;
            // 0x44ae34: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44AE50u;
            goto label_44ae50;
        }
    }
    ctx->pc = 0x44AE38u;
    // 0x44ae38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ae3c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x44AE3Cu;
    SET_GPR_U32(ctx, 31, 0x44AE44u);
    ctx->pc = 0x44AE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AE3Cu;
            // 0x44ae40: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AE44u; }
        if (ctx->pc != 0x44AE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AE44u; }
        if (ctx->pc != 0x44AE44u) { return; }
    }
    ctx->pc = 0x44AE44u;
label_44ae44:
    // 0x44ae44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ae48: 0xac407558  sw          $zero, 0x7558($v0)
    ctx->pc = 0x44ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30040), GPR_U32(ctx, 0));
    // 0x44ae4c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x44ae4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_44ae50:
    // 0x44ae50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44ae50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x44ae54: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44AE54u;
    {
        const bool branch_taken_0x44ae54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44ae54) {
            ctx->pc = 0x44AE58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44AE54u;
            // 0x44ae58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44AE68u;
            goto label_44ae68;
        }
    }
    ctx->pc = 0x44AE5Cu;
    // 0x44ae5c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x44AE5Cu;
    SET_GPR_U32(ctx, 31, 0x44AE64u);
    ctx->pc = 0x44AE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AE5Cu;
            // 0x44ae60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AE64u; }
        if (ctx->pc != 0x44AE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AE64u; }
        if (ctx->pc != 0x44AE64u) { return; }
    }
    ctx->pc = 0x44AE64u;
label_44ae64:
    // 0x44ae64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x44ae64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44ae68:
    // 0x44ae68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44ae68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44ae6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44ae6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44ae70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44ae70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44ae74: 0x3e00008  jr          $ra
    ctx->pc = 0x44AE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44AE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44AE74u;
            // 0x44ae78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44AE7Cu;
    // 0x44ae7c: 0x0  nop
    ctx->pc = 0x44ae7cu;
    // NOP
}
