#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010EF90
// Address: 0x10ef90 - 0x10f048
void sub_0010EF90_0x10ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EF90_0x10ef90");
#endif

    switch (ctx->pc) {
        case 0x10efccu: goto label_10efcc;
        case 0x10effcu: goto label_10effc;
        case 0x10f020u: goto label_10f020;
        case 0x10f030u: goto label_10f030;
        default: break;
    }

    ctx->pc = 0x10ef90u;

    // 0x10ef90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x10ef94: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x10ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x10ef98: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10ef9c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x10ef9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efa0: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x10efa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x10efa4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10efa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efa8: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x10efa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x10efac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10efacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10efb0: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x10efb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x10efb4: 0x2484ee60  addiu       $a0, $a0, -0x11A0
    ctx->pc = 0x10efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962784));
    // 0x10efb8: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x10efb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x10efbc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10efbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efc0: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x10efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x10efc4: 0xc043852  jal         func_10E148
    ctx->pc = 0x10EFC4u;
    SET_GPR_U32(ctx, 31, 0x10EFCCu);
    ctx->pc = 0x10EFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EFC4u;
            // 0x10efc8: 0x27a80068  addiu       $t0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E148u;
    if (runtime->hasFunction(0x10E148u)) {
        auto targetFn = runtime->lookupFunction(0x10E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EFCCu; }
        if (ctx->pc != 0x10EFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010E148_0x10e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EFCCu; }
        if (ctx->pc != 0x10EFCCu) { return; }
    }
    ctx->pc = 0x10EFCCu;
label_10efcc:
    // 0x10efcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10efccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10efd0: 0x3e00008  jr          $ra
    ctx->pc = 0x10EFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EFD0u;
            // 0x10efd4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EFD8u;
    // 0x10efd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10efd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10efdc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10efdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10efe0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10efe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10efe4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10efe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efe8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10efe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10efec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10efecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eff0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10eff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10eff4: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10EFF4u;
    SET_GPR_U32(ctx, 31, 0x10EFFCu);
    ctx->pc = 0x10EFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EFF4u;
            // 0x10eff8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EFFCu; }
        if (ctx->pc != 0x10EFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EFFCu; }
        if (ctx->pc != 0x10EFFCu) { return; }
    }
    ctx->pc = 0x10EFFCu;
label_10effc:
    // 0x10effc: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x10effcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x10f000: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x10f000u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x10f004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f008: 0x2484eeb8  addiu       $a0, $a0, -0x1148
    ctx->pc = 0x10f008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962872));
    // 0x10f00c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x10f00cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f010: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x10f010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f014: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f018: 0xc043852  jal         func_10E148
    ctx->pc = 0x10F018u;
    SET_GPR_U32(ctx, 31, 0x10F020u);
    ctx->pc = 0x10F01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F018u;
            // 0x10f01c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E148u;
    if (runtime->hasFunction(0x10E148u)) {
        auto targetFn = runtime->lookupFunction(0x10E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F020u; }
        if (ctx->pc != 0x10F020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010E148_0x10e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F020u; }
        if (ctx->pc != 0x10F020u) { return; }
    }
    ctx->pc = 0x10F020u;
label_10f020:
    // 0x10f020: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F020u;
    {
        const bool branch_taken_0x10f020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F020u;
            // 0x10f024: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f020) {
            ctx->pc = 0x10F034u;
            goto label_10f034;
        }
    }
    ctx->pc = 0x10F028u;
    // 0x10f028: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10F028u;
    SET_GPR_U32(ctx, 31, 0x10F030u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F030u; }
        if (ctx->pc != 0x10F030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F030u; }
        if (ctx->pc != 0x10F030u) { return; }
    }
    ctx->pc = 0x10F030u;
label_10f030:
    // 0x10f030: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10f030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10f034:
    // 0x10f034: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10f034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f038: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10f038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f03c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10f03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f040: 0x3e00008  jr          $ra
    ctx->pc = 0x10F040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F040u;
            // 0x10f044: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F048u;
}
