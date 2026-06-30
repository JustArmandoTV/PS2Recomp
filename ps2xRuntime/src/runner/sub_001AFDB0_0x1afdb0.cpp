#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AFDB0
// Address: 0x1afdb0 - 0x1afed8
void sub_001AFDB0_0x1afdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFDB0_0x1afdb0");
#endif

    switch (ctx->pc) {
        case 0x1afde8u: goto label_1afde8;
        case 0x1afe20u: goto label_1afe20;
        case 0x1afe30u: goto label_1afe30;
        case 0x1afe70u: goto label_1afe70;
        case 0x1afeb4u: goto label_1afeb4;
        default: break;
    }

    ctx->pc = 0x1afdb0u;

    // 0x1afdb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1afdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1afdb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1afdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1afdb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1afdbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1afdbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afdc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1afdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1afdc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1afdc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afdc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1afdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1afdcc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1afdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1afdd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1afdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1afdd4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1afdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1afdd8: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AFDD8u;
    {
        const bool branch_taken_0x1afdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AFDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDD8u;
            // 0x1afddc: 0x8e132030  lw          $s3, 0x2030($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afdd8) {
            ctx->pc = 0x1AFE28u;
            goto label_1afe28;
        }
    }
    ctx->pc = 0x1AFDE0u;
    // 0x1afde0: 0xc06c082  jal         func_1B0208
    ctx->pc = 0x1AFDE0u;
    SET_GPR_U32(ctx, 31, 0x1AFDE8u);
    ctx->pc = 0x1AFDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDE0u;
            // 0x1afde4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0208u;
    if (runtime->hasFunction(0x1B0208u)) {
        auto targetFn = runtime->lookupFunction(0x1B0208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDE8u; }
        if (ctx->pc != 0x1AFDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0208_0x1b0208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDE8u; }
        if (ctx->pc != 0x1AFDE8u) { return; }
    }
    ctx->pc = 0x1AFDE8u;
label_1afde8:
    // 0x1afde8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1afde8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afdec: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1afdecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1afdf0: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AFDF0u;
    {
        const bool branch_taken_0x1afdf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDF0u;
            // 0x1afdf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afdf0) {
            ctx->pc = 0x1AFE18u;
            goto label_1afe18;
        }
    }
    ctx->pc = 0x1AFDF8u;
    // 0x1afdf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afdf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afdfc: 0x34a50f1f  ori         $a1, $a1, 0xF1F
    ctx->pc = 0x1afdfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3871);
    // 0x1afe00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1afe00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afe04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1afe04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afe08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1afe08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1afe0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1afe0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afe10: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AFE10u;
    ctx->pc = 0x1AFE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE10u;
            // 0x1afe14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AFE18u;
label_1afe18:
    // 0x1afe18: 0xc06c092  jal         func_1B0248
    ctx->pc = 0x1AFE18u;
    SET_GPR_U32(ctx, 31, 0x1AFE20u);
    ctx->pc = 0x1AFE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE18u;
            // 0x1afe1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0248u;
    if (runtime->hasFunction(0x1B0248u)) {
        auto targetFn = runtime->lookupFunction(0x1B0248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE20u; }
        if (ctx->pc != 0x1AFE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0248_0x1b0248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE20u; }
        if (ctx->pc != 0x1AFE20u) { return; }
    }
    ctx->pc = 0x1AFE20u;
label_1afe20:
    // 0x1afe20: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1AFE20u;
    {
        const bool branch_taken_0x1afe20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE20u;
            // 0x1afe24: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe20) {
            ctx->pc = 0x1AFEA8u;
            goto label_1afea8;
        }
    }
    ctx->pc = 0x1AFE28u;
label_1afe28:
    // 0x1afe28: 0xc06bfb6  jal         func_1AFED8
    ctx->pc = 0x1AFE28u;
    SET_GPR_U32(ctx, 31, 0x1AFE30u);
    ctx->pc = 0x1AFED8u;
    if (runtime->hasFunction(0x1AFED8u)) {
        auto targetFn = runtime->lookupFunction(0x1AFED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE30u; }
        if (ctx->pc != 0x1AFE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFED8_0x1afed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE30u; }
        if (ctx->pc != 0x1AFE30u) { return; }
    }
    ctx->pc = 0x1AFE30u;
label_1afe30:
    // 0x1afe30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1afe30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afe34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1afe34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe38: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1afe38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1afe3c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1afe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afe40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe44: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AFE44u;
    {
        const bool branch_taken_0x1afe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AFE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE44u;
            // 0x1afe48: 0x34a50f0e  ori         $a1, $a1, 0xF0E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3854);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe44) {
            ctx->pc = 0x1AFE68u;
            goto label_1afe68;
        }
    }
    ctx->pc = 0x1AFE4Cu;
    // 0x1afe4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afe4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afe50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1afe50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afe54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1afe54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afe58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1afe58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1afe5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1afe5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afe60: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AFE60u;
    ctx->pc = 0x1AFE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE60u;
            // 0x1afe64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AFE68u;
label_1afe68:
    // 0x1afe68: 0xc06c070  jal         func_1B01C0
    ctx->pc = 0x1AFE68u;
    SET_GPR_U32(ctx, 31, 0x1AFE70u);
    ctx->pc = 0x1AFE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE68u;
            // 0x1afe6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B01C0u;
    if (runtime->hasFunction(0x1B01C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B01C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE70u; }
        if (ctx->pc != 0x1AFE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01C0_0x1b01c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE70u; }
        if (ctx->pc != 0x1AFE70u) { return; }
    }
    ctx->pc = 0x1AFE70u;
label_1afe70:
    // 0x1afe70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1afe74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe78: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x1afe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x1afe7c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1afe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1afe80: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AFE80u;
    {
        const bool branch_taken_0x1afe80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1AFE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE80u;
            // 0x1afe84: 0x34a50f0f  ori         $a1, $a1, 0xF0F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3855);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe80) {
            ctx->pc = 0x1AFEA8u;
            goto label_1afea8;
        }
    }
    ctx->pc = 0x1AFE88u;
    // 0x1afe88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afe88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afe8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1afe8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afe90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1afe90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afe94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1afe94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1afe98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1afe98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afe9c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AFE9Cu;
    ctx->pc = 0x1AFEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE9Cu;
            // 0x1afea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AFEA4u;
    // 0x1afea4: 0x0  nop
    ctx->pc = 0x1afea4u;
    // NOP
label_1afea8:
    // 0x1afea8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1afea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1afeac: 0xc06c10a  jal         func_1B0428
    ctx->pc = 0x1AFEACu;
    SET_GPR_U32(ctx, 31, 0x1AFEB4u);
    ctx->pc = 0x1AFEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFEACu;
            // 0x1afeb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0428u;
    if (runtime->hasFunction(0x1B0428u)) {
        auto targetFn = runtime->lookupFunction(0x1B0428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEB4u; }
        if (ctx->pc != 0x1AFEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0428_0x1b0428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEB4u; }
        if (ctx->pc != 0x1AFEB4u) { return; }
    }
    ctx->pc = 0x1AFEB4u;
label_1afeb4:
    // 0x1afeb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1afeb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afeb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afeb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afebc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1afebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afec0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1afec0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afec4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1afec4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1afec8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1afec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFECCu;
            // 0x1afed0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFED4u;
    // 0x1afed4: 0x0  nop
    ctx->pc = 0x1afed4u;
    // NOP
}
