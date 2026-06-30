#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8870
// Address: 0x1b8870 - 0x1b8990
void sub_001B8870_0x1b8870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8870_0x1b8870");
#endif

    switch (ctx->pc) {
        case 0x1b889cu: goto label_1b889c;
        case 0x1b88a8u: goto label_1b88a8;
        case 0x1b88c4u: goto label_1b88c4;
        case 0x1b88d0u: goto label_1b88d0;
        case 0x1b88e0u: goto label_1b88e0;
        case 0x1b88fcu: goto label_1b88fc;
        case 0x1b8908u: goto label_1b8908;
        case 0x1b8918u: goto label_1b8918;
        case 0x1b8934u: goto label_1b8934;
        case 0x1b8940u: goto label_1b8940;
        case 0x1b8950u: goto label_1b8950;
        case 0x1b8960u: goto label_1b8960;
        default: break;
    }

    ctx->pc = 0x1b8870u;

    // 0x1b8870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8878: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b8878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b887c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b887cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b8880: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8884: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b8884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b8888: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B8888u;
    {
        const bool branch_taken_0x1b8888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B888Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8888u;
            // 0x1b888c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8888) {
            ctx->pc = 0x1B88B0u;
            goto label_1b88b0;
        }
    }
    ctx->pc = 0x1B8890u;
    // 0x1b8890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8894: 0xc06e2f8  jal         func_1B8BE0
    ctx->pc = 0x1B8894u;
    SET_GPR_U32(ctx, 31, 0x1B889Cu);
    ctx->pc = 0x1B8898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8894u;
            // 0x1b8898: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8BE0u;
    if (runtime->hasFunction(0x1B8BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B889Cu; }
        if (ctx->pc != 0x1B889Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8BE0_0x1b8be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B889Cu; }
        if (ctx->pc != 0x1B889Cu) { return; }
    }
    ctx->pc = 0x1B889Cu;
label_1b889c:
    // 0x1b889c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b88a0: 0xc06e264  jal         func_1B8990
    ctx->pc = 0x1B88A0u;
    SET_GPR_U32(ctx, 31, 0x1B88A8u);
    ctx->pc = 0x1B88A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88A0u;
            // 0x1b88a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8990u;
    if (runtime->hasFunction(0x1B8990u)) {
        auto targetFn = runtime->lookupFunction(0x1B8990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88A8u; }
        if (ctx->pc != 0x1B88A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8990_0x1b8990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88A8u; }
        if (ctx->pc != 0x1B88A8u) { return; }
    }
    ctx->pc = 0x1B88A8u;
label_1b88a8:
    // 0x1b88a8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1B88A8u;
    {
        const bool branch_taken_0x1b88a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88A8u;
            // 0x1b88ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88a8) {
            ctx->pc = 0x1B897Cu;
            goto label_1b897c;
        }
    }
    ctx->pc = 0x1B88B0u;
label_1b88b0:
    // 0x1b88b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b88b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B88B4u;
    {
        const bool branch_taken_0x1b88b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88B4u;
            // 0x1b88b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88b4) {
            ctx->pc = 0x1B88E8u;
            goto label_1b88e8;
        }
    }
    ctx->pc = 0x1B88BCu;
    // 0x1b88bc: 0xc06e2f8  jal         func_1B8BE0
    ctx->pc = 0x1B88BCu;
    SET_GPR_U32(ctx, 31, 0x1B88C4u);
    ctx->pc = 0x1B88C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88BCu;
            // 0x1b88c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8BE0u;
    if (runtime->hasFunction(0x1B8BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88C4u; }
        if (ctx->pc != 0x1B88C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8BE0_0x1b8be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88C4u; }
        if (ctx->pc != 0x1B88C4u) { return; }
    }
    ctx->pc = 0x1B88C4u;
label_1b88c4:
    // 0x1b88c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b88c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b88c8: 0xc06e2a0  jal         func_1B8A80
    ctx->pc = 0x1B88C8u;
    SET_GPR_U32(ctx, 31, 0x1B88D0u);
    ctx->pc = 0x1B88CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88C8u;
            // 0x1b88cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A80u;
    if (runtime->hasFunction(0x1B8A80u)) {
        auto targetFn = runtime->lookupFunction(0x1B8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88D0u; }
        if (ctx->pc != 0x1B88D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8A80_0x1b8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88D0u; }
        if (ctx->pc != 0x1B88D0u) { return; }
    }
    ctx->pc = 0x1B88D0u;
label_1b88d0:
    // 0x1b88d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b88d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b88d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b88d8: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1B88D8u;
    SET_GPR_U32(ctx, 31, 0x1B88E0u);
    ctx->pc = 0x1B88DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88D8u;
            // 0x1b88dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88E0u; }
        if (ctx->pc != 0x1B88E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88E0u; }
        if (ctx->pc != 0x1B88E0u) { return; }
    }
    ctx->pc = 0x1B88E0u;
label_1b88e0:
    // 0x1b88e0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1B88E0u;
    {
        const bool branch_taken_0x1b88e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88E0u;
            // 0x1b88e4: 0xae200bb4  sw          $zero, 0xBB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2996), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88e0) {
            ctx->pc = 0x1B8978u;
            goto label_1b8978;
        }
    }
    ctx->pc = 0x1B88E8u;
label_1b88e8:
    // 0x1b88e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b88ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B88ECu;
    {
        const bool branch_taken_0x1b88ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88ECu;
            // 0x1b88f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88ec) {
            ctx->pc = 0x1B8920u;
            goto label_1b8920;
        }
    }
    ctx->pc = 0x1B88F4u;
    // 0x1b88f4: 0xc06e2f8  jal         func_1B8BE0
    ctx->pc = 0x1B88F4u;
    SET_GPR_U32(ctx, 31, 0x1B88FCu);
    ctx->pc = 0x1B88F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88F4u;
            // 0x1b88f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8BE0u;
    if (runtime->hasFunction(0x1B8BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88FCu; }
        if (ctx->pc != 0x1B88FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8BE0_0x1b8be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88FCu; }
        if (ctx->pc != 0x1B88FCu) { return; }
    }
    ctx->pc = 0x1B88FCu;
label_1b88fc:
    // 0x1b88fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b88fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8900: 0xc06e2c8  jal         func_1B8B20
    ctx->pc = 0x1B8900u;
    SET_GPR_U32(ctx, 31, 0x1B8908u);
    ctx->pc = 0x1B8904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8900u;
            // 0x1b8904: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8B20u;
    if (runtime->hasFunction(0x1B8B20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8908u; }
        if (ctx->pc != 0x1B8908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8B20_0x1b8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8908u; }
        if (ctx->pc != 0x1B8908u) { return; }
    }
    ctx->pc = 0x1B8908u;
label_1b8908:
    // 0x1b8908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b890c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b890cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b8910: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1B8910u;
    SET_GPR_U32(ctx, 31, 0x1B8918u);
    ctx->pc = 0x1B8914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8910u;
            // 0x1b8914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8918u; }
        if (ctx->pc != 0x1B8918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8918u; }
        if (ctx->pc != 0x1B8918u) { return; }
    }
    ctx->pc = 0x1B8918u;
label_1b8918:
    // 0x1b8918: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B8918u;
    {
        const bool branch_taken_0x1b8918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B891Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8918u;
            // 0x1b891c: 0xae200bb0  sw          $zero, 0xBB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8918) {
            ctx->pc = 0x1B8978u;
            goto label_1b8978;
        }
    }
    ctx->pc = 0x1B8920u;
label_1b8920:
    // 0x1b8920: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1b8920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b8924: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B8924u;
    {
        const bool branch_taken_0x1b8924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8924u;
            // 0x1b8928: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8924) {
            ctx->pc = 0x1B8970u;
            goto label_1b8970;
        }
    }
    ctx->pc = 0x1B892Cu;
    // 0x1b892c: 0xc06e2f8  jal         func_1B8BE0
    ctx->pc = 0x1B892Cu;
    SET_GPR_U32(ctx, 31, 0x1B8934u);
    ctx->pc = 0x1B8930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B892Cu;
            // 0x1b8930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8BE0u;
    if (runtime->hasFunction(0x1B8BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8934u; }
        if (ctx->pc != 0x1B8934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8BE0_0x1b8be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8934u; }
        if (ctx->pc != 0x1B8934u) { return; }
    }
    ctx->pc = 0x1B8934u;
label_1b8934:
    // 0x1b8934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8938: 0xc06e2f0  jal         func_1B8BC0
    ctx->pc = 0x1B8938u;
    SET_GPR_U32(ctx, 31, 0x1B8940u);
    ctx->pc = 0x1B893Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8938u;
            // 0x1b893c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8BC0u;
    if (runtime->hasFunction(0x1B8BC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8940u; }
        if (ctx->pc != 0x1B8940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8BC0_0x1b8bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8940u; }
        if (ctx->pc != 0x1B8940u) { return; }
    }
    ctx->pc = 0x1B8940u;
label_1b8940:
    // 0x1b8940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8944: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b8944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b8948: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1B8948u;
    SET_GPR_U32(ctx, 31, 0x1B8950u);
    ctx->pc = 0x1B894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8948u;
            // 0x1b894c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8950u; }
        if (ctx->pc != 0x1B8950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8950u; }
        if (ctx->pc != 0x1B8950u) { return; }
    }
    ctx->pc = 0x1B8950u;
label_1b8950:
    // 0x1b8950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8954: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b8954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b8958: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1B8958u;
    SET_GPR_U32(ctx, 31, 0x1B8960u);
    ctx->pc = 0x1B895Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8958u;
            // 0x1b895c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8960u; }
        if (ctx->pc != 0x1B8960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8960u; }
        if (ctx->pc != 0x1B8960u) { return; }
    }
    ctx->pc = 0x1B8960u;
label_1b8960:
    // 0x1b8960: 0xae200bb4  sw          $zero, 0xBB4($s1)
    ctx->pc = 0x1b8960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2996), GPR_U32(ctx, 0));
    // 0x1b8964: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8964u;
    {
        const bool branch_taken_0x1b8964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8964u;
            // 0x1b8968: 0xae200bb0  sw          $zero, 0xBB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8964) {
            ctx->pc = 0x1B8978u;
            goto label_1b8978;
        }
    }
    ctx->pc = 0x1B896Cu;
    // 0x1b896c: 0x0  nop
    ctx->pc = 0x1b896cu;
    // NOP
label_1b8970:
    // 0x1b8970: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8970u;
    {
        const bool branch_taken_0x1b8970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8970u;
            // 0x1b8974: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8970) {
            ctx->pc = 0x1B897Cu;
            goto label_1b897c;
        }
    }
    ctx->pc = 0x1B8978u;
label_1b8978:
    // 0x1b8978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b8978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b897c:
    // 0x1b897c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b897cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8980: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8988: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8988u;
            // 0x1b898c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8990u;
}
