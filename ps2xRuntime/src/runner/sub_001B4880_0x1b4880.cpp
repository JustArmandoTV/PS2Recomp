#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4880
// Address: 0x1b4880 - 0x1b4978
void sub_001B4880_0x1b4880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4880_0x1b4880");
#endif

    switch (ctx->pc) {
        case 0x1b4880u: goto label_1b4880;
        case 0x1b4884u: goto label_1b4884;
        case 0x1b4888u: goto label_1b4888;
        case 0x1b488cu: goto label_1b488c;
        case 0x1b4890u: goto label_1b4890;
        case 0x1b4894u: goto label_1b4894;
        case 0x1b4898u: goto label_1b4898;
        case 0x1b489cu: goto label_1b489c;
        case 0x1b48a0u: goto label_1b48a0;
        case 0x1b48a4u: goto label_1b48a4;
        case 0x1b48a8u: goto label_1b48a8;
        case 0x1b48acu: goto label_1b48ac;
        case 0x1b48b0u: goto label_1b48b0;
        case 0x1b48b4u: goto label_1b48b4;
        case 0x1b48b8u: goto label_1b48b8;
        case 0x1b48bcu: goto label_1b48bc;
        case 0x1b48c0u: goto label_1b48c0;
        case 0x1b48c4u: goto label_1b48c4;
        case 0x1b48c8u: goto label_1b48c8;
        case 0x1b48ccu: goto label_1b48cc;
        case 0x1b48d0u: goto label_1b48d0;
        case 0x1b48d4u: goto label_1b48d4;
        case 0x1b48d8u: goto label_1b48d8;
        case 0x1b48dcu: goto label_1b48dc;
        case 0x1b48e0u: goto label_1b48e0;
        case 0x1b48e4u: goto label_1b48e4;
        case 0x1b48e8u: goto label_1b48e8;
        case 0x1b48ecu: goto label_1b48ec;
        case 0x1b48f0u: goto label_1b48f0;
        case 0x1b48f4u: goto label_1b48f4;
        case 0x1b48f8u: goto label_1b48f8;
        case 0x1b48fcu: goto label_1b48fc;
        case 0x1b4900u: goto label_1b4900;
        case 0x1b4904u: goto label_1b4904;
        case 0x1b4908u: goto label_1b4908;
        case 0x1b490cu: goto label_1b490c;
        case 0x1b4910u: goto label_1b4910;
        case 0x1b4914u: goto label_1b4914;
        case 0x1b4918u: goto label_1b4918;
        case 0x1b491cu: goto label_1b491c;
        case 0x1b4920u: goto label_1b4920;
        case 0x1b4924u: goto label_1b4924;
        case 0x1b4928u: goto label_1b4928;
        case 0x1b492cu: goto label_1b492c;
        case 0x1b4930u: goto label_1b4930;
        case 0x1b4934u: goto label_1b4934;
        case 0x1b4938u: goto label_1b4938;
        case 0x1b493cu: goto label_1b493c;
        case 0x1b4940u: goto label_1b4940;
        case 0x1b4944u: goto label_1b4944;
        case 0x1b4948u: goto label_1b4948;
        case 0x1b494cu: goto label_1b494c;
        case 0x1b4950u: goto label_1b4950;
        case 0x1b4954u: goto label_1b4954;
        case 0x1b4958u: goto label_1b4958;
        case 0x1b495cu: goto label_1b495c;
        case 0x1b4960u: goto label_1b4960;
        case 0x1b4964u: goto label_1b4964;
        case 0x1b4968u: goto label_1b4968;
        case 0x1b496cu: goto label_1b496c;
        case 0x1b4970u: goto label_1b4970;
        case 0x1b4974u: goto label_1b4974;
        default: break;
    }

    ctx->pc = 0x1b4880u;

label_1b4880:
    // 0x1b4880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b4884:
    // 0x1b4884: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b4884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b4888:
    // 0x1b4888: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b4888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b488c:
    // 0x1b488c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b4890:
    // 0x1b4890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4894:
    // 0x1b4894: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b4894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b4898:
    // 0x1b4898: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b4898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1b489c:
    // 0x1b489c: 0xc06a234  jal         func_1A88D0
label_1b48a0:
    if (ctx->pc == 0x1B48A0u) {
        ctx->pc = 0x1B48A0u;
            // 0x1b48a0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1B48A4u;
        goto label_1b48a4;
    }
    ctx->pc = 0x1B489Cu;
    SET_GPR_U32(ctx, 31, 0x1B48A4u);
    ctx->pc = 0x1B48A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B489Cu;
            // 0x1b48a0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B48A4u; }
        if (ctx->pc != 0x1B48A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B48A4u; }
        if (ctx->pc != 0x1B48A4u) { return; }
    }
    ctx->pc = 0x1B48A4u;
label_1b48a4:
    // 0x1b48a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b48a8:
    if (ctx->pc == 0x1B48A8u) {
        ctx->pc = 0x1B48A8u;
            // 0x1b48a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B48ACu;
        goto label_1b48ac;
    }
    ctx->pc = 0x1B48A4u;
    {
        const bool branch_taken_0x1b48a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B48A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B48A4u;
            // 0x1b48a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48a4) {
            ctx->pc = 0x1B48D0u;
            goto label_1b48d0;
        }
    }
    ctx->pc = 0x1B48ACu;
label_1b48ac:
    // 0x1b48ac: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b48acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1b48b0:
    // 0x1b48b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b48b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b48b4:
    // 0x1b48b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b48b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b48b8:
    // 0x1b48b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b48b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b48bc:
    // 0x1b48bc: 0x34a50136  ori         $a1, $a1, 0x136
    ctx->pc = 0x1b48bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)310);
label_1b48c0:
    // 0x1b48c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b48c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b48c4:
    // 0x1b48c4: 0x806a1ac  j           func_1A86B0
label_1b48c8:
    if (ctx->pc == 0x1B48C8u) {
        ctx->pc = 0x1B48C8u;
            // 0x1b48c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B48CCu;
        goto label_1b48cc;
    }
    ctx->pc = 0x1B48C4u;
    ctx->pc = 0x1B48C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B48C4u;
            // 0x1b48c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B48CCu;
label_1b48cc:
    // 0x1b48cc: 0x0  nop
    ctx->pc = 0x1b48ccu;
    // NOP
label_1b48d0:
    // 0x1b48d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b48d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b48d4:
    // 0x1b48d4: 0xc06d288  jal         func_1B4A20
label_1b48d8:
    if (ctx->pc == 0x1B48D8u) {
        ctx->pc = 0x1B48D8u;
            // 0x1b48d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B48DCu;
        goto label_1b48dc;
    }
    ctx->pc = 0x1B48D4u;
    SET_GPR_U32(ctx, 31, 0x1B48DCu);
    ctx->pc = 0x1B48D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B48D4u;
            // 0x1b48d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A20u;
    if (runtime->hasFunction(0x1B4A20u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B48DCu; }
        if (ctx->pc != 0x1B48DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A20_0x1b4a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B48DCu; }
        if (ctx->pc != 0x1B48DCu) { return; }
    }
    ctx->pc = 0x1B48DCu;
label_1b48dc:
    // 0x1b48dc: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_1b48e0:
    if (ctx->pc == 0x1B48E0u) {
        ctx->pc = 0x1B48E0u;
            // 0x1b48e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1B48E4u;
        goto label_1b48e4;
    }
    ctx->pc = 0x1B48DCu;
    {
        const bool branch_taken_0x1b48dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b48dc) {
            ctx->pc = 0x1B48E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B48DCu;
            // 0x1b48e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4960u;
            goto label_1b4960;
        }
    }
    ctx->pc = 0x1B48E4u;
label_1b48e4:
    // 0x1b48e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b48e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b48e8:
    // 0x1b48e8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b48e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b48ec:
    // 0x1b48ec: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1b48ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b48f0:
    // 0x1b48f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b48f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b48f4:
    // 0x1b48f4: 0xc06e35c  jal         func_1B8D70
label_1b48f8:
    if (ctx->pc == 0x1B48F8u) {
        ctx->pc = 0x1B48F8u;
            // 0x1b48f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B48FCu;
        goto label_1b48fc;
    }
    ctx->pc = 0x1B48F4u;
    SET_GPR_U32(ctx, 31, 0x1B48FCu);
    ctx->pc = 0x1B48F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B48F4u;
            // 0x1b48f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B48FCu; }
        if (ctx->pc != 0x1B48FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B48FCu; }
        if (ctx->pc != 0x1B48FCu) { return; }
    }
    ctx->pc = 0x1B48FCu;
label_1b48fc:
    // 0x1b48fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b48fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4900:
    // 0x1b4900: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b4900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b4904:
    // 0x1b4904: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1b4908:
    if (ctx->pc == 0x1B4908u) {
        ctx->pc = 0x1B4908u;
            // 0x1b4908: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x1B490Cu;
        goto label_1b490c;
    }
    ctx->pc = 0x1B4904u;
    {
        const bool branch_taken_0x1b4904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4904u;
            // 0x1b4908: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4904) {
            ctx->pc = 0x1B4940u;
            goto label_1b4940;
        }
    }
    ctx->pc = 0x1B490Cu;
label_1b490c:
    // 0x1b490c: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x1b490cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_1b4910:
    // 0x1b4910: 0x8e02096c  lw          $v0, 0x96C($s0)
    ctx->pc = 0x1b4910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
label_1b4914:
    // 0x1b4914: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_1b4918:
    if (ctx->pc == 0x1B4918u) {
        ctx->pc = 0x1B4918u;
            // 0x1b4918: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x1B491Cu;
        goto label_1b491c;
    }
    ctx->pc = 0x1B4914u;
    {
        const bool branch_taken_0x1b4914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b4914) {
            ctx->pc = 0x1B4918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4914u;
            // 0x1b4918: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4940u;
            goto label_1b4940;
        }
    }
    ctx->pc = 0x1B491Cu;
label_1b491c:
    // 0x1b491c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_1b4920:
    if (ctx->pc == 0x1B4920u) {
        ctx->pc = 0x1B4920u;
            // 0x1b4920: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x1B4924u;
        goto label_1b4924;
    }
    ctx->pc = 0x1B491Cu;
    {
        const bool branch_taken_0x1b491c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b491c) {
            ctx->pc = 0x1B4920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B491Cu;
            // 0x1b4920: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4938u;
            goto label_1b4938;
        }
    }
    ctx->pc = 0x1B4924u;
label_1b4924:
    // 0x1b4924: 0xc06e140  jal         func_1B8500
label_1b4928:
    if (ctx->pc == 0x1B4928u) {
        ctx->pc = 0x1B492Cu;
        goto label_1b492c;
    }
    ctx->pc = 0x1B4924u;
    SET_GPR_U32(ctx, 31, 0x1B492Cu);
    ctx->pc = 0x1B8500u;
    if (runtime->hasFunction(0x1B8500u)) {
        auto targetFn = runtime->lookupFunction(0x1B8500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B492Cu; }
        if (ctx->pc != 0x1B492Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8500_0x1b8500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B492Cu; }
        if (ctx->pc != 0x1B492Cu) { return; }
    }
    ctx->pc = 0x1B492Cu;
label_1b492c:
    // 0x1b492c: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x1b492cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_1b4930:
    // 0x1b4930: 0xfe0237f0  sd          $v0, 0x37F0($s0)
    ctx->pc = 0x1b4930u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 14320), GPR_U64(ctx, 2));
label_1b4934:
    // 0x1b4934: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b4934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b4938:
    // 0x1b4938: 0xae020968  sw          $v0, 0x968($s0)
    ctx->pc = 0x1b4938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2408), GPR_U32(ctx, 2));
label_1b493c:
    // 0x1b493c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b493cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1b4940:
    // 0x1b4940: 0x8c429bd4  lw          $v0, -0x642C($v0)
    ctx->pc = 0x1b4940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941652)));
label_1b4944:
    // 0x1b4944: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b4948:
    if (ctx->pc == 0x1B4948u) {
        ctx->pc = 0x1B4948u;
            // 0x1b4948: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B494Cu;
        goto label_1b494c;
    }
    ctx->pc = 0x1B4944u;
    {
        const bool branch_taken_0x1b4944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4944) {
            ctx->pc = 0x1B4948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4944u;
            // 0x1b4948: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B495Cu;
            goto label_1b495c;
        }
    }
    ctx->pc = 0x1B494Cu;
label_1b494c:
    // 0x1b494c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1b494cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b4950:
    // 0x1b4950: 0x40f809  jalr        $v0
label_1b4954:
    if (ctx->pc == 0x1B4954u) {
        ctx->pc = 0x1B4954u;
            // 0x1b4954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4958u;
        goto label_1b4958;
    }
    ctx->pc = 0x1B4950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4958u);
        ctx->pc = 0x1B4954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4950u;
            // 0x1b4954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4958u; }
            if (ctx->pc != 0x1B4958u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4958u;
label_1b4958:
    // 0x1b4958: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b4958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b495c:
    // 0x1b495c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b495cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4960:
    // 0x1b4960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b4964:
    // 0x1b4964: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b4964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4968:
    // 0x1b4968: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b4968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b496c:
    // 0x1b496c: 0x3e00008  jr          $ra
label_1b4970:
    if (ctx->pc == 0x1B4970u) {
        ctx->pc = 0x1B4970u;
            // 0x1b4970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B4974u;
        goto label_1b4974;
    }
    ctx->pc = 0x1B496Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B496Cu;
            // 0x1b4970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4974u;
label_1b4974:
    // 0x1b4974: 0x0  nop
    ctx->pc = 0x1b4974u;
    // NOP
}
