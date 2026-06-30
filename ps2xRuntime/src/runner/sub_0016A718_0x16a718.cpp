#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A718
// Address: 0x16a718 - 0x16a840
void sub_0016A718_0x16a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A718_0x16a718");
#endif

    switch (ctx->pc) {
        case 0x16a744u: goto label_16a744;
        case 0x16a758u: goto label_16a758;
        case 0x16a794u: goto label_16a794;
        case 0x16a7a8u: goto label_16a7a8;
        case 0x16a7b0u: goto label_16a7b0;
        case 0x16a7b8u: goto label_16a7b8;
        case 0x16a7ccu: goto label_16a7cc;
        case 0x16a7d4u: goto label_16a7d4;
        case 0x16a7ecu: goto label_16a7ec;
        case 0x16a81cu: goto label_16a81c;
        case 0x16a824u: goto label_16a824;
        case 0x16a82cu: goto label_16a82c;
        default: break;
    }

    ctx->pc = 0x16a718u;

    // 0x16a718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a71c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a728: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16a728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a72c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16a72cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a730: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16a730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16a734: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a738: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a73c: 0xc05a148  jal         func_168520
    ctx->pc = 0x16A73Cu;
    SET_GPR_U32(ctx, 31, 0x16A744u);
    ctx->pc = 0x16A740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A73Cu;
            // 0x16a740: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A744u; }
        if (ctx->pc != 0x16A744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A744u; }
        if (ctx->pc != 0x16A744u) { return; }
    }
    ctx->pc = 0x16A744u;
label_16a744:
    // 0x16a744: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16a744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16a748: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A748u;
    {
        const bool branch_taken_0x16a748 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A748u;
            // 0x16a74c: 0x248438d0  addiu       $a0, $a0, 0x38D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a748) {
            ctx->pc = 0x16A760u;
            goto label_16a760;
        }
    }
    ctx->pc = 0x16A750u;
    // 0x16a750: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16A750u;
    SET_GPR_U32(ctx, 31, 0x16A758u);
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A758u; }
        if (ctx->pc != 0x16A758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A758u; }
        if (ctx->pc != 0x16A758u) { return; }
    }
    ctx->pc = 0x16A758u;
label_16a758:
    // 0x16a758: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x16A758u;
    {
        const bool branch_taken_0x16a758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A758u;
            // 0x16a75c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a758) {
            ctx->pc = 0x16A7F0u;
            goto label_16a7f0;
        }
    }
    ctx->pc = 0x16A760u;
label_16a760:
    // 0x16a760: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x16a760u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x16a764: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16a764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a768: 0x10710020  beq         $v1, $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x16A768u;
    {
        const bool branch_taken_0x16a768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x16A76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A768u;
            // 0x16a76c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a768) {
            ctx->pc = 0x16A7ECu;
            goto label_16a7ec;
        }
    }
    ctx->pc = 0x16A770u;
    // 0x16a770: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A770u;
    {
        const bool branch_taken_0x16a770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a770) {
            ctx->pc = 0x16A774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A770u;
            // 0x16a774: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A780u;
            goto label_16a780;
        }
    }
    ctx->pc = 0x16A778u;
    // 0x16a778: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x16A778u;
    {
        const bool branch_taken_0x16a778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A778u;
            // 0x16a77c: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a778) {
            ctx->pc = 0x16A7ECu;
            goto label_16a7ec;
        }
    }
    ctx->pc = 0x16A780u;
label_16a780:
    // 0x16a780: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A780u;
    {
        const bool branch_taken_0x16a780 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a780) {
            ctx->pc = 0x16A7A0u;
            goto label_16a7a0;
        }
    }
    ctx->pc = 0x16A788u;
    // 0x16a788: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16a788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16a78c: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16A78Cu;
    SET_GPR_U32(ctx, 31, 0x16A794u);
    ctx->pc = 0x16A790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A78Cu;
            // 0x16a790: 0x248438f8  addiu       $a0, $a0, 0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A794u; }
        if (ctx->pc != 0x16A794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A794u; }
        if (ctx->pc != 0x16A794u) { return; }
    }
    ctx->pc = 0x16A794u;
label_16a794:
    // 0x16a794: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16A794u;
    {
        const bool branch_taken_0x16a794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A794u;
            // 0x16a798: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a794) {
            ctx->pc = 0x16A7F0u;
            goto label_16a7f0;
        }
    }
    ctx->pc = 0x16A79Cu;
    // 0x16a79c: 0x0  nop
    ctx->pc = 0x16a79cu;
    // NOP
label_16a7a0:
    // 0x16a7a0: 0xc05c396  jal         func_170E58
    ctx->pc = 0x16A7A0u;
    SET_GPR_U32(ctx, 31, 0x16A7A8u);
    ctx->pc = 0x170E58u;
    if (runtime->hasFunction(0x170E58u)) {
        auto targetFn = runtime->lookupFunction(0x170E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7A8u; }
        if (ctx->pc != 0x16A7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170E58_0x170e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7A8u; }
        if (ctx->pc != 0x16A7A8u) { return; }
    }
    ctx->pc = 0x16A7A8u;
label_16a7a8:
    // 0x16a7a8: 0xc0599d2  jal         func_166748
    ctx->pc = 0x16A7A8u;
    SET_GPR_U32(ctx, 31, 0x16A7B0u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7B0u; }
        if (ctx->pc != 0x16A7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7B0u; }
        if (ctx->pc != 0x16A7B0u) { return; }
    }
    ctx->pc = 0x16A7B0u;
label_16a7b0:
    // 0x16a7b0: 0xc05c30c  jal         func_170C30
    ctx->pc = 0x16A7B0u;
    SET_GPR_U32(ctx, 31, 0x16A7B8u);
    ctx->pc = 0x16A7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A7B0u;
            // 0x16a7b4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C30u;
    if (runtime->hasFunction(0x170C30u)) {
        auto targetFn = runtime->lookupFunction(0x170C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7B8u; }
        if (ctx->pc != 0x16A7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C30_0x170c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7B8u; }
        if (ctx->pc != 0x16A7B8u) { return; }
    }
    ctx->pc = 0x16A7B8u;
label_16a7b8:
    // 0x16a7b8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x16a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16a7bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a7c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a7c4: 0xc05a7e8  jal         func_169FA0
    ctx->pc = 0x16A7C4u;
    SET_GPR_U32(ctx, 31, 0x16A7CCu);
    ctx->pc = 0x16A7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A7C4u;
            // 0x16a7c8: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169FA0u;
    if (runtime->hasFunction(0x169FA0u)) {
        auto targetFn = runtime->lookupFunction(0x169FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7CCu; }
        if (ctx->pc != 0x16A7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169FA0_0x169fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7CCu; }
        if (ctx->pc != 0x16A7CCu) { return; }
    }
    ctx->pc = 0x16A7CCu;
label_16a7cc:
    // 0x16a7cc: 0xc0599d8  jal         func_166760
    ctx->pc = 0x16A7CCu;
    SET_GPR_U32(ctx, 31, 0x16A7D4u);
    ctx->pc = 0x16A7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A7CCu;
            // 0x16a7d0: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7D4u; }
        if (ctx->pc != 0x16A7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7D4u; }
        if (ctx->pc != 0x16A7D4u) { return; }
    }
    ctx->pc = 0x16A7D4u;
label_16a7d4:
    // 0x16a7d4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16a7d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a7dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16a7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a7e0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16a7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a7e4: 0xc05a148  jal         func_168520
    ctx->pc = 0x16A7E4u;
    SET_GPR_U32(ctx, 31, 0x16A7ECu);
    ctx->pc = 0x16A7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A7E4u;
            // 0x16a7e8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7ECu; }
        if (ctx->pc != 0x16A7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7ECu; }
        if (ctx->pc != 0x16A7ECu) { return; }
    }
    ctx->pc = 0x16A7ECu;
label_16a7ec:
    // 0x16a7ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16a7f0:
    // 0x16a7f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a7f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a7f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a7f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a7f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x16A7FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A7FCu;
            // 0x16a800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A804u;
    // 0x16a804: 0x0  nop
    ctx->pc = 0x16a804u;
    // NOP
    // 0x16a808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a80c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a810: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16a810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16a814: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16A814u;
    SET_GPR_U32(ctx, 31, 0x16A81Cu);
    ctx->pc = 0x16A818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A814u;
            // 0x16a818: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A81Cu; }
        if (ctx->pc != 0x16A81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A81Cu; }
        if (ctx->pc != 0x16A81Cu) { return; }
    }
    ctx->pc = 0x16A81Cu;
label_16a81c:
    // 0x16a81c: 0xc05aa10  jal         func_16A840
    ctx->pc = 0x16A81Cu;
    SET_GPR_U32(ctx, 31, 0x16A824u);
    ctx->pc = 0x16A820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A81Cu;
            // 0x16a820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A840u;
    if (runtime->hasFunction(0x16A840u)) {
        auto targetFn = runtime->lookupFunction(0x16A840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A824u; }
        if (ctx->pc != 0x16A824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A840_0x16a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A824u; }
        if (ctx->pc != 0x16A824u) { return; }
    }
    ctx->pc = 0x16A824u;
label_16a824:
    // 0x16a824: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16A824u;
    SET_GPR_U32(ctx, 31, 0x16A82Cu);
    ctx->pc = 0x16A828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A824u;
            // 0x16a828: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A82Cu; }
        if (ctx->pc != 0x16A82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A82Cu; }
        if (ctx->pc != 0x16A82Cu) { return; }
    }
    ctx->pc = 0x16A82Cu;
label_16a82c:
    // 0x16a82c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16a82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a830: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a838: 0x3e00008  jr          $ra
    ctx->pc = 0x16A838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A838u;
            // 0x16a83c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A840u;
}
