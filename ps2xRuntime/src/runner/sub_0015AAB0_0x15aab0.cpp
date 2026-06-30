#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015AAB0
// Address: 0x15aab0 - 0x15ab60
void sub_0015AAB0_0x15aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AAB0_0x15aab0");
#endif

    switch (ctx->pc) {
        case 0x15aac8u: goto label_15aac8;
        case 0x15aae8u: goto label_15aae8;
        case 0x15aaf0u: goto label_15aaf0;
        case 0x15ab2cu: goto label_15ab2c;
        case 0x15ab34u: goto label_15ab34;
        case 0x15ab44u: goto label_15ab44;
        default: break;
    }

    ctx->pc = 0x15aab0u;

    // 0x15aab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15aab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15aab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15aab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15aab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15aabc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15aabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aac0: 0xc045968  jal         func_1165A0
    ctx->pc = 0x15AAC0u;
    SET_GPR_U32(ctx, 31, 0x15AAC8u);
    ctx->pc = 0x15AAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AAC0u;
            // 0x15aac4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAC8u; }
        if (ctx->pc != 0x15AAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAC8u; }
        if (ctx->pc != 0x15AAC8u) { return; }
    }
    ctx->pc = 0x15AAC8u;
label_15aac8:
    // 0x15aac8: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x15aac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x15aacc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15aaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15aad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aad4: 0x24a5aa10  addiu       $a1, $a1, -0x55F0
    ctx->pc = 0x15aad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945296));
    // 0x15aad8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15aad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aadc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15aadcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aae0: 0xc043014  jal         func_10C050
    ctx->pc = 0x15AAE0u;
    SET_GPR_U32(ctx, 31, 0x15AAE8u);
    ctx->pc = 0x15AAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AAE0u;
            // 0x15aae4: 0xaf808434  sw          $zero, -0x7BCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C050u;
    if (runtime->hasFunction(0x10C050u)) {
        auto targetFn = runtime->lookupFunction(0x10C050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAE8u; }
        if (ctx->pc != 0x15AAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C050_0x10c050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAE8u; }
        if (ctx->pc != 0x15AAE8u) { return; }
    }
    ctx->pc = 0x15AAE8u;
label_15aae8:
    // 0x15aae8: 0xc040e48  jal         func_103920
    ctx->pc = 0x15AAE8u;
    SET_GPR_U32(ctx, 31, 0x15AAF0u);
    ctx->pc = 0x15AAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AAE8u;
            // 0x15aaec: 0xaf82842c  sw          $v0, -0x7BD4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103920u;
    if (runtime->hasFunction(0x103920u)) {
        auto targetFn = runtime->lookupFunction(0x103920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAF0u; }
        if (ctx->pc != 0x15AAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103920_0x103920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AAF0u; }
        if (ctx->pc != 0x15AAF0u) { return; }
    }
    ctx->pc = 0x15AAF0u;
label_15aaf0:
    // 0x15aaf0: 0x32230100  andi        $v1, $s1, 0x100
    ctx->pc = 0x15aaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x15aaf4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15AAF4u;
    {
        const bool branch_taken_0x15aaf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aaf4) {
            ctx->pc = 0x15AAF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AAF4u;
            // 0x15aaf8: 0x32230200  andi        $v1, $s1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AB0Cu;
            goto label_15ab0c;
        }
    }
    ctx->pc = 0x15AAFCu;
    // 0x15aafc: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x15aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x15ab00: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x15ab00u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x15ab04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15ab04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x15ab08: 0x32230200  andi        $v1, $s1, 0x200
    ctx->pc = 0x15ab08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
label_15ab0c:
    // 0x15ab0c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15AB0Cu;
    {
        const bool branch_taken_0x15ab0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ab0c) {
            ctx->pc = 0x15AB10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB0Cu;
            // 0x15ab10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AB24u;
            goto label_15ab24;
        }
    }
    ctx->pc = 0x15AB14u;
    // 0x15ab14: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x15ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x15ab18: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x15ab18u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x15ab1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15ab1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x15ab20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15ab20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ab24:
    // 0x15ab24: 0xc040cee  jal         func_1033B8
    ctx->pc = 0x15AB24u;
    SET_GPR_U32(ctx, 31, 0x15AB2Cu);
    ctx->pc = 0x1033B8u;
    if (runtime->hasFunction(0x1033B8u)) {
        auto targetFn = runtime->lookupFunction(0x1033B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB2Cu; }
        if (ctx->pc != 0x15AB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001033B8_0x1033b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB2Cu; }
        if (ctx->pc != 0x15AB2Cu) { return; }
    }
    ctx->pc = 0x15AB2Cu;
label_15ab2c:
    // 0x15ab2c: 0xc0433aa  jal         func_10CEA8
    ctx->pc = 0x15AB2Cu;
    SET_GPR_U32(ctx, 31, 0x15AB34u);
    ctx->pc = 0x15AB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB2Cu;
            // 0x15ab30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEA8u;
    if (runtime->hasFunction(0x10CEA8u)) {
        auto targetFn = runtime->lookupFunction(0x10CEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB34u; }
        if (ctx->pc != 0x15AB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEA8_0x10cea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB34u; }
        if (ctx->pc != 0x15AB34u) { return; }
    }
    ctx->pc = 0x15AB34u;
label_15ab34:
    // 0x15ab34: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15AB34u;
    {
        const bool branch_taken_0x15ab34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ab34) {
            ctx->pc = 0x15AB38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB34u;
            // 0x15ab38: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AB48u;
            goto label_15ab48;
        }
    }
    ctx->pc = 0x15AB3Cu;
    // 0x15ab3c: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x15AB3Cu;
    SET_GPR_U32(ctx, 31, 0x15AB44u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB44u; }
        if (ctx->pc != 0x15AB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AB44u; }
        if (ctx->pc != 0x15AB44u) { return; }
    }
    ctx->pc = 0x15AB44u;
label_15ab44:
    // 0x15ab44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ab44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15ab48:
    // 0x15ab48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ab48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ab4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ab4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ab50: 0x3e00008  jr          $ra
    ctx->pc = 0x15AB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AB50u;
            // 0x15ab54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15AB58u;
    // 0x15ab58: 0x0  nop
    ctx->pc = 0x15ab58u;
    // NOP
    // 0x15ab5c: 0x0  nop
    ctx->pc = 0x15ab5cu;
    // NOP
}
