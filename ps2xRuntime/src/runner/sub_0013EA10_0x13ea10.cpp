#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013EA10
// Address: 0x13ea10 - 0x13ee20
void sub_0013EA10_0x13ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EA10_0x13ea10");
#endif

    switch (ctx->pc) {
        case 0x13ea34u: goto label_13ea34;
        case 0x13ea4cu: goto label_13ea4c;
        case 0x13ea5cu: goto label_13ea5c;
        case 0x13ea70u: goto label_13ea70;
        case 0x13ea9cu: goto label_13ea9c;
        case 0x13eab8u: goto label_13eab8;
        case 0x13eb20u: goto label_13eb20;
        case 0x13ece4u: goto label_13ece4;
        case 0x13ed4cu: goto label_13ed4c;
        case 0x13edc0u: goto label_13edc0;
        case 0x13ede8u: goto label_13ede8;
        default: break;
    }

    ctx->pc = 0x13ea10u;

label_13ea10:
    // 0x13ea10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13ea14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13ea18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13ea1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ea1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ea20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13ea20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ea28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13ea28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea2c: 0xc056964  jal         func_15A590
    ctx->pc = 0x13EA2Cu;
    SET_GPR_U32(ctx, 31, 0x13EA34u);
    ctx->pc = 0x13EA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA2Cu;
            // 0x13ea30: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A590u;
    if (runtime->hasFunction(0x15A590u)) {
        auto targetFn = runtime->lookupFunction(0x15A590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA34u; }
        if (ctx->pc != 0x13EA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A590_0x15a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA34u; }
        if (ctx->pc != 0x13EA34u) { return; }
    }
    ctx->pc = 0x13EA34u;
label_13ea34:
    // 0x13ea34: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13EA34u;
    {
        const bool branch_taken_0x13ea34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea34) {
            ctx->pc = 0x13EA38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA34u;
            // 0x13ea38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13EA64u;
            goto label_13ea64;
        }
    }
    ctx->pc = 0x13EA3Cu;
    // 0x13ea3c: 0x8e460044  lw          $a2, 0x44($s2)
    ctx->pc = 0x13ea3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x13ea40: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13ea44: 0xc056978  jal         func_15A5E0
    ctx->pc = 0x13EA44u;
    SET_GPR_U32(ctx, 31, 0x13EA4Cu);
    ctx->pc = 0x13EA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA44u;
            // 0x13ea48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A5E0u;
    if (runtime->hasFunction(0x15A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x15A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA4Cu; }
        if (ctx->pc != 0x13EA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A5E0_0x15a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA4Cu; }
        if (ctx->pc != 0x13EA4Cu) { return; }
    }
    ctx->pc = 0x13EA4Cu;
label_13ea4c:
    // 0x13ea4c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x13ea4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ea50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13ea50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea54: 0xc05699c  jal         func_15A670
    ctx->pc = 0x13EA54u;
    SET_GPR_U32(ctx, 31, 0x13EA5Cu);
    ctx->pc = 0x13EA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA54u;
            // 0x13ea58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A670u;
    if (runtime->hasFunction(0x15A670u)) {
        auto targetFn = runtime->lookupFunction(0x15A670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA5Cu; }
        if (ctx->pc != 0x13EA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A670_0x15a670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA5Cu; }
        if (ctx->pc != 0x13EA5Cu) { return; }
    }
    ctx->pc = 0x13EA5Cu;
label_13ea5c:
    // 0x13ea5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13EA5Cu;
    {
        const bool branch_taken_0x13ea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA5Cu;
            // 0x13ea60: 0xafb0004c  sw          $s0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea5c) {
            ctx->pc = 0x13EA74u;
            goto label_13ea74;
        }
    }
    ctx->pc = 0x13EA64u;
label_13ea64:
    // 0x13ea64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13ea64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea68: 0xc05699c  jal         func_15A670
    ctx->pc = 0x13EA68u;
    SET_GPR_U32(ctx, 31, 0x13EA70u);
    ctx->pc = 0x13EA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA68u;
            // 0x13ea6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A670u;
    if (runtime->hasFunction(0x15A670u)) {
        auto targetFn = runtime->lookupFunction(0x15A670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA70u; }
        if (ctx->pc != 0x13EA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A670_0x15a670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA70u; }
        if (ctx->pc != 0x13EA70u) { return; }
    }
    ctx->pc = 0x13EA70u;
label_13ea70:
    // 0x13ea70: 0xafb0004c  sw          $s0, 0x4C($sp)
    ctx->pc = 0x13ea70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
label_13ea74:
    // 0x13ea74: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x13ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x13ea78: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x13ea78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x13ea7c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13EA7Cu;
    {
        const bool branch_taken_0x13ea7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea7c) {
            ctx->pc = 0x13EA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA7Cu;
            // 0x13ea80: 0x8e470030  lw          $a3, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13EAA4u;
            goto label_13eaa4;
        }
    }
    ctx->pc = 0x13EA84u;
    // 0x13ea84: 0x8e470030  lw          $a3, 0x30($s2)
    ctx->pc = 0x13ea84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x13ea88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13ea88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea8c: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x13ea8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x13ea90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13ea90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea94: 0xc056758  jal         func_159D60
    ctx->pc = 0x13EA94u;
    SET_GPR_U32(ctx, 31, 0x13EA9Cu);
    ctx->pc = 0x13EA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA94u;
            // 0x13ea98: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159D60u;
    if (runtime->hasFunction(0x159D60u)) {
        auto targetFn = runtime->lookupFunction(0x159D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA9Cu; }
        if (ctx->pc != 0x13EA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159D60_0x159d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA9Cu; }
        if (ctx->pc != 0x13EA9Cu) { return; }
    }
    ctx->pc = 0x13EA9Cu;
label_13ea9c:
    // 0x13ea9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13EA9Cu;
    {
        const bool branch_taken_0x13ea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA9Cu;
            // 0x13eaa0: 0xae510034  sw          $s1, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea9c) {
            ctx->pc = 0x13EABCu;
            goto label_13eabc;
        }
    }
    ctx->pc = 0x13EAA4u;
label_13eaa4:
    // 0x13eaa4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13eaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eaa8: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x13eaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x13eaac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13eaacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eab0: 0xc0565e4  jal         func_159790
    ctx->pc = 0x13EAB0u;
    SET_GPR_U32(ctx, 31, 0x13EAB8u);
    ctx->pc = 0x13EAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EAB0u;
            // 0x13eab4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159790u;
    if (runtime->hasFunction(0x159790u)) {
        auto targetFn = runtime->lookupFunction(0x159790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EAB8u; }
        if (ctx->pc != 0x13EAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159790_0x159790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EAB8u; }
        if (ctx->pc != 0x13EAB8u) { return; }
    }
    ctx->pc = 0x13EAB8u;
label_13eab8:
    // 0x13eab8: 0xae510034  sw          $s1, 0x34($s2)
    ctx->pc = 0x13eab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
label_13eabc:
    // 0x13eabc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13eabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13eac0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13eac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13eac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13eac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13eac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13eac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eacc: 0x3e00008  jr          $ra
    ctx->pc = 0x13EACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EACCu;
            // 0x13ead0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13EAD4u;
    // 0x13ead4: 0x0  nop
    ctx->pc = 0x13ead4u;
    // NOP
    // 0x13ead8: 0x0  nop
    ctx->pc = 0x13ead8u;
    // NOP
    // 0x13eadc: 0x0  nop
    ctx->pc = 0x13eadcu;
    // NOP
    // 0x13eae0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13eae4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13eae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eae8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13eae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13eaec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13eaecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eaf0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13eaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13eaf4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13eaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13eaf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13eaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13eafc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13eafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13eb00: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x13eb00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x13eb04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13eb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13eb08: 0x267356f0  addiu       $s3, $s3, 0x56F0
    ctx->pc = 0x13eb08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22256));
    // 0x13eb0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13eb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13eb10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13eb10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb14: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13EB14u;
    {
        const bool branch_taken_0x13eb14 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x13EB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB14u;
            // 0x13eb18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb14) {
            ctx->pc = 0x13EB58u;
            goto label_13eb58;
        }
    }
    ctx->pc = 0x13EB1Cu;
    // 0x13eb1c: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x13eb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_13eb20:
    // 0x13eb20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13eb24: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x13eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x13eb28: 0x30420700  andi        $v0, $v0, 0x700
    ctx->pc = 0x13eb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
    // 0x13eb2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EB2Cu;
    {
        const bool branch_taken_0x13eb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eb2c) {
            ctx->pc = 0x13EB48u;
            goto label_13eb48;
        }
    }
    ctx->pc = 0x13EB34u;
    // 0x13eb34: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x13eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x13eb38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13eb38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13eb3c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x13eb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x13eb40: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x13eb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13eb44: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x13eb44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_13eb48:
    // 0x13eb48: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x13eb48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x13eb4c: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x13eb4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13eb50: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x13EB50u;
    {
        const bool branch_taken_0x13eb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB50u;
            // 0x13eb54: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb50) {
            ctx->pc = 0x13EB20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13eb20;
        }
    }
    ctx->pc = 0x13EB58u;
label_13eb58:
    // 0x13eb58: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EB58u;
    {
        const bool branch_taken_0x13eb58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eb58) {
            ctx->pc = 0x13EB68u;
            goto label_13eb68;
        }
    }
    ctx->pc = 0x13EB60u;
    // 0x13eb60: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x13EB60u;
    {
        const bool branch_taken_0x13eb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB60u;
            // 0x13eb64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb60) {
            ctx->pc = 0x13EDF4u;
            goto label_13edf4;
        }
    }
    ctx->pc = 0x13EB68u;
label_13eb68:
    // 0x13eb68: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13eb6c: 0x944256da  lhu         $v0, 0x56DA($v0)
    ctx->pc = 0x13eb6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22234)));
    // 0x13eb70: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13EB70u;
    {
        const bool branch_taken_0x13eb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eb70) {
            ctx->pc = 0x13EBACu;
            goto label_13ebac;
        }
    }
    ctx->pc = 0x13EB78u;
    // 0x13eb78: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13eb7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13eb80: 0x8c6456cc  lw          $a0, 0x56CC($v1)
    ctx->pc = 0x13eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22220)));
    // 0x13eb84: 0x904256d5  lbu         $v0, 0x56D5($v0)
    ctx->pc = 0x13eb84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22229)));
    // 0x13eb88: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13eb8c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x13eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x13eb90: 0x246356c0  addiu       $v1, $v1, 0x56C0
    ctx->pc = 0x13eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22208));
    // 0x13eb94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13eb98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13eb9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13eba0: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x13eba0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13eba4: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x13EBA4u;
    {
        const bool branch_taken_0x13eba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eba4) {
            ctx->pc = 0x13EC9Cu;
            goto label_13ec9c;
        }
    }
    ctx->pc = 0x13EBACu;
label_13ebac:
    // 0x13ebac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13ebb0: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x13ebb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x13ebb4: 0x904556d5  lbu         $a1, 0x56D5($v0)
    ctx->pc = 0x13ebb4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22229)));
    // 0x13ebb8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13ebbc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ebc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13ebc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13ebc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13ebc8: 0xa08556d5  sb          $a1, 0x56D5($a0)
    ctx->pc = 0x13ebc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22229), (uint8_t)GPR_U32(ctx, 5));
    // 0x13ebcc: 0x904256d4  lbu         $v0, 0x56D4($v0)
    ctx->pc = 0x13ebccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22228)));
    // 0x13ebd0: 0x906356d5  lbu         $v1, 0x56D5($v1)
    ctx->pc = 0x13ebd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22229)));
    // 0x13ebd4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EBD4u;
    {
        const bool branch_taken_0x13ebd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13EBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EBD4u;
            // 0x13ebd8: 0x24e756f0  addiu       $a3, $a3, 0x56F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebd4) {
            ctx->pc = 0x13EBE4u;
            goto label_13ebe4;
        }
    }
    ctx->pc = 0x13EBDCu;
    // 0x13ebdc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13ebe0: 0xa04056d5  sb          $zero, 0x56D5($v0)
    ctx->pc = 0x13ebe0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22229), (uint8_t)GPR_U32(ctx, 0));
label_13ebe4:
    // 0x13ebe4: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x13ebe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x13ebe8: 0x34059000  ori         $a1, $zero, 0x9000
    ctx->pc = 0x13ebe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x13ebec: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13ebecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13ebf0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ebf4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x13ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x13ebf8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13ebfc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13ec00: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x13ec00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x13ec04: 0x8ce8001c  lw          $t0, 0x1C($a3)
    ctx->pc = 0x13ec04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13ec08: 0x24e20018  addiu       $v0, $a3, 0x18
    ctx->pc = 0x13ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x13ec0c: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x13ec0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x13ec10: 0xace6001c  sw          $a2, 0x1C($a3)
    ctx->pc = 0x13ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 6));
    // 0x13ec14: 0xa5050002  sh          $a1, 0x2($t0)
    ctx->pc = 0x13ec14u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x13ec18: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x13ec18u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ec1c: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x13ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x13ec20: 0x948456d6  lhu         $a0, 0x56D6($a0)
    ctx->pc = 0x13ec20u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22230)));
    // 0x13ec24: 0x946356da  lhu         $v1, 0x56DA($v1)
    ctx->pc = 0x13ec24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22234)));
    // 0x13ec28: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13ec28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13ec2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EC2Cu;
    {
        const bool branch_taken_0x13ec2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC2Cu;
            // 0x13ec30: 0x308401ff  andi        $a0, $a0, 0x1FF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec2c) {
            ctx->pc = 0x13EC3Cu;
            goto label_13ec3c;
        }
    }
    ctx->pc = 0x13EC34u;
    // 0x13ec34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13EC34u;
    {
        const bool branch_taken_0x13ec34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC34u;
            // 0x13ec38: 0x24030200  addiu       $v1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec34) {
            ctx->pc = 0x13EC40u;
            goto label_13ec40;
        }
    }
    ctx->pc = 0x13EC3Cu;
label_13ec3c:
    // 0x13ec3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13ec3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ec40:
    // 0x13ec40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13ec40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13ec44: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x13ec44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x13ec48: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x13ec48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x13ec4c: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x13ec4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x13ec50: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13ec54: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13ec54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13ec58: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x13ec58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ec5c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x13ec5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x13ec60: 0xa5030002  sh          $v1, 0x2($t0)
    ctx->pc = 0x13ec60u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x13ec64: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x13ec64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x13ec68: 0x94c656da  lhu         $a2, 0x56DA($a2)
    ctx->pc = 0x13ec68u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22234)));
    // 0x13ec6c: 0x24e756b4  addiu       $a3, $a3, 0x56B4
    ctx->pc = 0x13ec6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22196));
    // 0x13ec70: 0x908456d5  lbu         $a0, 0x56D5($a0)
    ctx->pc = 0x13ec70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22229)));
    // 0x13ec74: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ec78: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x13ec78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13ec7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13ec7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13ec80: 0xa4a656da  sh          $a2, 0x56DA($a1)
    ctx->pc = 0x13ec80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22234), (uint16_t)GPR_U32(ctx, 6));
    // 0x13ec84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13ec88: 0x25050001  addiu       $a1, $t0, 0x1
    ctx->pc = 0x13ec88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x13ec8c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x13ec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x13ec90: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x13ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x13ec94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ec98: 0xac6256cc  sw          $v0, 0x56CC($v1)
    ctx->pc = 0x13ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22220), GPR_U32(ctx, 2));
label_13ec9c:
    // 0x13ec9c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13eca0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13eca4: 0x946456d6  lhu         $a0, 0x56D6($v1)
    ctx->pc = 0x13eca4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22230)));
    // 0x13eca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ecac: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13ECACu;
    {
        const bool branch_taken_0x13ecac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x13ECB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ECACu;
            // 0x13ecb0: 0xac44582c  sw          $a0, 0x582C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22572), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ecac) {
            ctx->pc = 0x13ECD8u;
            goto label_13ecd8;
        }
    }
    ctx->pc = 0x13ECB4u;
    // 0x13ecb4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13ecb8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x13ecb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecbc: 0x944556da  lhu         $a1, 0x56DA($v0)
    ctx->pc = 0x13ecbcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22234)));
    // 0x13ecc0: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x13ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13ecc4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ecc8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x13ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x13eccc: 0xfc44ce68  sd          $a0, -0x3198($v0)
    ctx->pc = 0x13ecccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294954600), GPR_U64(ctx, 4));
    // 0x13ecd0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x13ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13ecd4: 0xa46256da  sh          $v0, 0x56DA($v1)
    ctx->pc = 0x13ecd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22234), (uint16_t)GPR_U32(ctx, 2));
label_13ecd8:
    // 0x13ecd8: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x13ECD8u;
    {
        const bool branch_taken_0x13ecd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ECDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ECD8u;
            // 0x13ecdc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ecd8) {
            ctx->pc = 0x13ED78u;
            goto label_13ed78;
        }
    }
    ctx->pc = 0x13ECE0u;
    // 0x13ece0: 0x27b50078  addiu       $s5, $sp, 0x78
    ctx->pc = 0x13ece0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_13ece4:
    // 0x13ece4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x13ece4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x13ece8: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x13ece8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13ecec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x13ececu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x13ecf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13ecf4: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x13ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x13ecf8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13ecfc: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x13ecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x13ed00: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x13ed00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x13ed04: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x13ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13ed08: 0x2444ffd0  addiu       $a0, $v0, -0x30
    ctx->pc = 0x13ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x13ed0c: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x13ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x13ed10: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x13ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x13ed14: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x13ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x13ed18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ed1c: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x13ed1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13ed20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13ED20u;
    {
        const bool branch_taken_0x13ed20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ED24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED20u;
            // 0x13ed24: 0x24a70018  addiu       $a3, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed20) {
            ctx->pc = 0x13ED30u;
            goto label_13ed30;
        }
    }
    ctx->pc = 0x13ED28u;
    // 0x13ed28: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x13ED28u;
    {
        const bool branch_taken_0x13ed28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ED2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED28u;
            // 0x13ed2c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed28) {
            ctx->pc = 0x13EDF4u;
            goto label_13edf4;
        }
    }
    ctx->pc = 0x13ED30u;
label_13ed30:
    // 0x13ed30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13ed34: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x13ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x13ed38: 0x8c4556cc  lw          $a1, 0x56CC($v0)
    ctx->pc = 0x13ed38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22220)));
    // 0x13ed3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13ed3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed40: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x13ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13ed44: 0xc04fa84  jal         func_13EA10
    ctx->pc = 0x13ED44u;
    SET_GPR_U32(ctx, 31, 0x13ED4Cu);
    ctx->pc = 0x13ED48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED44u;
            // 0x13ed48: 0xace20010  sw          $v0, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EA10u;
    goto label_13ea10;
    ctx->pc = 0x13ED4Cu;
label_13ed4c:
    // 0x13ed4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13ed50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13ed50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x13ed54: 0x8c4556cc  lw          $a1, 0x56CC($v0)
    ctx->pc = 0x13ed54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22220)));
    // 0x13ed58: 0x290182b  sltu        $v1, $s4, $s0
    ctx->pc = 0x13ed58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x13ed5c: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x13ed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x13ed60: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x13ed60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x13ed64: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13ed68: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13ed6c: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x13ED6Cu;
    {
        const bool branch_taken_0x13ed6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13ED70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED6Cu;
            // 0x13ed70: 0xac4456cc  sw          $a0, 0x56CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22220), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed6c) {
            ctx->pc = 0x13ECE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13ece4;
        }
    }
    ctx->pc = 0x13ED74u;
    // 0x13ed74: 0x0  nop
    ctx->pc = 0x13ed74u;
    // NOP
label_13ed78:
    // 0x13ed78: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13ed7c: 0x944256da  lhu         $v0, 0x56DA($v0)
    ctx->pc = 0x13ed7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22234)));
    // 0x13ed80: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x13ED80u;
    {
        const bool branch_taken_0x13ed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ed80) {
            ctx->pc = 0x13ED84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED80u;
            // 0x13ed84: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13EDF4u;
            goto label_13edf4;
        }
    }
    ctx->pc = 0x13ED88u;
    // 0x13ed88: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x13ed88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13ed8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13ed90: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x13ed90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13ed94: 0x9450582c  lhu         $s0, 0x582C($v0)
    ctx->pc = 0x13ed94u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22572)));
    // 0x13ed98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13ed9c: 0x944456d6  lhu         $a0, 0x56D6($v0)
    ctx->pc = 0x13ed9cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22230)));
    // 0x13eda0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13eda4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13eda8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EDA8u;
    {
        const bool branch_taken_0x13eda8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDA8u;
            // 0x13edac: 0xa44456d6  sh          $a0, 0x56D6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 22230), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eda8) {
            ctx->pc = 0x13EDB8u;
            goto label_13edb8;
        }
    }
    ctx->pc = 0x13EDB0u;
    // 0x13edb0: 0x36028000  ori         $v0, $s0, 0x8000
    ctx->pc = 0x13edb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x13edb4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x13edb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_13edb8:
    // 0x13edb8: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x13EDB8u;
    SET_GPR_U32(ctx, 31, 0x13EDC0u);
    ctx->pc = 0x13EDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDB8u;
            // 0x13edbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EDC0u; }
        if (ctx->pc != 0x13EDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EDC0u; }
        if (ctx->pc != 0x13EDC0u) { return; }
    }
    ctx->pc = 0x13EDC0u;
label_13edc0:
    // 0x13edc0: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x13edc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x13edc4: 0x3c030700  lui         $v1, 0x700
    ctx->pc = 0x13edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1792 << 16));
    // 0x13edc8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13edc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13edcc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x13edccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x13edd0: 0x3c039000  lui         $v1, 0x9000
    ctx->pc = 0x13edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36864 << 16));
    // 0x13edd4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x13edd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x13edd8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x13edd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13eddc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x13eddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x13ede0: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x13EDE0u;
    SET_GPR_U32(ctx, 31, 0x13EDE8u);
    ctx->pc = 0x13EDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDE0u;
            // 0x13ede4: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EDE8u; }
        if (ctx->pc != 0x13EDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EDE8u; }
        if (ctx->pc != 0x13EDE8u) { return; }
    }
    ctx->pc = 0x13EDE8u;
label_13ede8:
    // 0x13ede8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13edec: 0xa44056da  sh          $zero, 0x56DA($v0)
    ctx->pc = 0x13edecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22234), (uint16_t)GPR_U32(ctx, 0));
    // 0x13edf0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x13edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13edf4:
    // 0x13edf4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13edf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13edf8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13edf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13edfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13edfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ee00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13ee00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ee04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13ee04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ee08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ee08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ee0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ee0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ee10: 0x3e00008  jr          $ra
    ctx->pc = 0x13EE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE10u;
            // 0x13ee14: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13EE18u;
    // 0x13ee18: 0x0  nop
    ctx->pc = 0x13ee18u;
    // NOP
    // 0x13ee1c: 0x0  nop
    ctx->pc = 0x13ee1cu;
    // NOP
}
