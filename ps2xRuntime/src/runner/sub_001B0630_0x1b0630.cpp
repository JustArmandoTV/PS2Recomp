#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0630
// Address: 0x1b0630 - 0x1b0750
void sub_001B0630_0x1b0630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0630_0x1b0630");
#endif

    switch (ctx->pc) {
        case 0x1b064cu: goto label_1b064c;
        case 0x1b065cu: goto label_1b065c;
        case 0x1b067cu: goto label_1b067c;
        case 0x1b06a0u: goto label_1b06a0;
        case 0x1b06ccu: goto label_1b06cc;
        case 0x1b06e0u: goto label_1b06e0;
        case 0x1b06f8u: goto label_1b06f8;
        case 0x1b070cu: goto label_1b070c;
        case 0x1b0724u: goto label_1b0724;
        case 0x1b0738u: goto label_1b0738;
        default: break;
    }

    ctx->pc = 0x1b0630u;

    // 0x1b0630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b0634: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b0634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b0638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b063c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b0640: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b0640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b0644: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1B0644u;
    SET_GPR_U32(ctx, 31, 0x1B064Cu);
    ctx->pc = 0x1B0648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0644u;
            // 0x1b0648: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B064Cu; }
        if (ctx->pc != 0x1B064Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B064Cu; }
        if (ctx->pc != 0x1B064Cu) { return; }
    }
    ctx->pc = 0x1B064Cu;
label_1b064c:
    // 0x1b064c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1b064cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1b0650: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1b0650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1b0654: 0xc06c1fa  jal         func_1B07E8
    ctx->pc = 0x1B0654u;
    SET_GPR_U32(ctx, 31, 0x1B065Cu);
    ctx->pc = 0x1B0658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0654u;
            // 0x1b0658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B07E8u;
    if (runtime->hasFunction(0x1B07E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B07E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B065Cu; }
        if (ctx->pc != 0x1B065Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B07E8_0x1b07e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B065Cu; }
        if (ctx->pc != 0x1B065Cu) { return; }
    }
    ctx->pc = 0x1B065Cu;
label_1b065c:
    // 0x1b065c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1b065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b0660: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1b0660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0668: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1b0668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1b066c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b066cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b0670: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1b0670u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1b0674: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B0674u;
    SET_GPR_U32(ctx, 31, 0x1B067Cu);
    ctx->pc = 0x1B0678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0674u;
            // 0x1b0678: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B067Cu; }
        if (ctx->pc != 0x1B067Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B067Cu; }
        if (ctx->pc != 0x1B067Cu) { return; }
    }
    ctx->pc = 0x1B067Cu;
label_1b067c:
    // 0x1b067c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b067cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0680: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b0684: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0684u;
    {
        const bool branch_taken_0x1b0684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0684) {
            ctx->pc = 0x1B0688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0684u;
            // 0x1b0688: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B06D8u;
            goto label_1b06d8;
        }
    }
    ctx->pc = 0x1B068Cu;
    // 0x1b068c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B068Cu;
    {
        const bool branch_taken_0x1b068c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B068Cu;
            // 0x1b0690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b068c) {
            ctx->pc = 0x1B06A8u;
            goto label_1b06a8;
        }
    }
    ctx->pc = 0x1B0694u;
    // 0x1b0694: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x1b0694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1b0698: 0xc06df30  jal         func_1B7CC0
    ctx->pc = 0x1B0698u;
    SET_GPR_U32(ctx, 31, 0x1B06A0u);
    ctx->pc = 0x1B069Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0698u;
            // 0x1b069c: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7CC0u;
    if (runtime->hasFunction(0x1B7CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06A0u; }
        if (ctx->pc != 0x1B06A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7CC0_0x1b7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06A0u; }
        if (ctx->pc != 0x1B06A0u) { return; }
    }
    ctx->pc = 0x1B06A0u;
label_1b06a0:
    // 0x1b06a0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1B06A0u;
    {
        const bool branch_taken_0x1b06a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06a0) {
            ctx->pc = 0x1B06A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06A0u;
            // 0x1b06a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B06D8u;
            goto label_1b06d8;
        }
    }
    ctx->pc = 0x1B06A8u;
label_1b06a8:
    // 0x1b06a8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1b06a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b06ac: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B06ACu;
    {
        const bool branch_taken_0x1b06ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06ac) {
            ctx->pc = 0x1B06B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06ACu;
            // 0x1b06b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B06D8u;
            goto label_1b06d8;
        }
    }
    ctx->pc = 0x1B06B4u;
    // 0x1b06b4: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B06B4u;
    {
        const bool branch_taken_0x1b06b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06b4) {
            ctx->pc = 0x1B06B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06B4u;
            // 0x1b06b8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B06D8u;
            goto label_1b06d8;
        }
    }
    ctx->pc = 0x1B06BCu;
    // 0x1b06bc: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x1b06bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1b06c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b06c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b06c4: 0xc06df30  jal         func_1B7CC0
    ctx->pc = 0x1B06C4u;
    SET_GPR_U32(ctx, 31, 0x1B06CCu);
    ctx->pc = 0x1B06C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06C4u;
            // 0x1b06c8: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7CC0u;
    if (runtime->hasFunction(0x1B7CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06CCu; }
        if (ctx->pc != 0x1B06CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7CC0_0x1b7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06CCu; }
        if (ctx->pc != 0x1B06CCu) { return; }
    }
    ctx->pc = 0x1B06CCu;
label_1b06cc:
    // 0x1b06cc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B06CCu;
    {
        const bool branch_taken_0x1b06cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06cc) {
            ctx->pc = 0x1B06D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06CCu;
            // 0x1b06d0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B06D8u;
            goto label_1b06d8;
        }
    }
    ctx->pc = 0x1B06D4u;
    // 0x1b06d4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1b06d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b06d8:
    // 0x1b06d8: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1B06D8u;
    SET_GPR_U32(ctx, 31, 0x1B06E0u);
    ctx->pc = 0x1B06DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06D8u;
            // 0x1b06dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06E0u; }
        if (ctx->pc != 0x1B06E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06E0u; }
        if (ctx->pc != 0x1B06E0u) { return; }
    }
    ctx->pc = 0x1B06E0u;
label_1b06e0:
    // 0x1b06e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b06e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b06e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b06e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b06e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b06e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b06ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b06ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b06f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B06F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B06F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06F0u;
            // 0x1b06f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B06F8u;
label_1b06f8:
    // 0x1b06f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b06f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b06fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b06fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0700: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b0700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b0704: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B0704u;
    SET_GPR_U32(ctx, 31, 0x1B070Cu);
    ctx->pc = 0x1B0708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0704u;
            // 0x1b0708: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B070Cu; }
        if (ctx->pc != 0x1B070Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B070Cu; }
        if (ctx->pc != 0x1B070Cu) { return; }
    }
    ctx->pc = 0x1B070Cu;
label_1b070c:
    // 0x1b070c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b070cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b0710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0714: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0714u;
    {
        const bool branch_taken_0x1b0714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0714u;
            // 0x1b0718: 0x34a50183  ori         $a1, $a1, 0x183 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)387);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0714) {
            ctx->pc = 0x1B0730u;
            goto label_1b0730;
        }
    }
    ctx->pc = 0x1B071Cu;
    // 0x1b071c: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1B071Cu;
    SET_GPR_U32(ctx, 31, 0x1B0724u);
    ctx->pc = 0x1B0720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B071Cu;
            // 0x1b0720: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0724u; }
        if (ctx->pc != 0x1B0724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0724u; }
        if (ctx->pc != 0x1B0724u) { return; }
    }
    ctx->pc = 0x1B0724u;
label_1b0724:
    // 0x1b0724: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0724u;
    {
        const bool branch_taken_0x1b0724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0724u;
            // 0x1b0728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0724) {
            ctx->pc = 0x1B073Cu;
            goto label_1b073c;
        }
    }
    ctx->pc = 0x1B072Cu;
    // 0x1b072c: 0x0  nop
    ctx->pc = 0x1b072cu;
    // NOP
label_1b0730:
    // 0x1b0730: 0xc06c1d4  jal         func_1B0750
    ctx->pc = 0x1B0730u;
    SET_GPR_U32(ctx, 31, 0x1B0738u);
    ctx->pc = 0x1B0750u;
    if (runtime->hasFunction(0x1B0750u)) {
        auto targetFn = runtime->lookupFunction(0x1B0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0738u; }
        if (ctx->pc != 0x1B0738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0750_0x1b0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0738u; }
        if (ctx->pc != 0x1B0738u) { return; }
    }
    ctx->pc = 0x1B0738u;
label_1b0738:
    // 0x1b0738: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b0738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b073c:
    // 0x1b073c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b073cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0740: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b0740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0744: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0744u;
            // 0x1b0748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B074Cu;
    // 0x1b074c: 0x0  nop
    ctx->pc = 0x1b074cu;
    // NOP
}
