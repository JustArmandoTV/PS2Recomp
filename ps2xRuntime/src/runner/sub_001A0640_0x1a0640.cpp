#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0640
// Address: 0x1a0640 - 0x1a07f0
void sub_001A0640_0x1a0640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0640_0x1a0640");
#endif

    switch (ctx->pc) {
        case 0x1a0670u: goto label_1a0670;
        case 0x1a06b8u: goto label_1a06b8;
        case 0x1a06c0u: goto label_1a06c0;
        case 0x1a06d4u: goto label_1a06d4;
        case 0x1a06e0u: goto label_1a06e0;
        case 0x1a06e8u: goto label_1a06e8;
        case 0x1a0744u: goto label_1a0744;
        case 0x1a075cu: goto label_1a075c;
        case 0x1a0770u: goto label_1a0770;
        case 0x1a0790u: goto label_1a0790;
        case 0x1a07a0u: goto label_1a07a0;
        default: break;
    }

    ctx->pc = 0x1a0640u;

    // 0x1a0640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a064c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a064cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0650: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a0650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a0654: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a0654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0658: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a0658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a065c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a065cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0660: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a0660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a0664: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a0664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a0668: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x1A0668u;
    SET_GPR_U32(ctx, 31, 0x1A0670u);
    ctx->pc = 0x1A066Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0668u;
            // 0x1a066c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0670u; }
        if (ctx->pc != 0x1A0670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0670u; }
        if (ctx->pc != 0x1A0670u) { return; }
    }
    ctx->pc = 0x1A0670u;
label_1a0670:
    // 0x1a0670: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a0670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a067c: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A067Cu;
    {
        const bool branch_taken_0x1a067c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A067Cu;
            // 0x1a0680: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a067c) {
            ctx->pc = 0x1A06B0u;
            goto label_1a06b0;
        }
    }
    ctx->pc = 0x1A0684u;
    // 0x1a0684: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a0684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a0688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a068c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a068cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0690: 0x2484a668  addiu       $a0, $a0, -0x5998
    ctx->pc = 0x1a0690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944360));
    // 0x1a0694: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a0694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0698: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a0698u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a069c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a069cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a06a0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a06a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a06a4: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x1A06A4u;
    ctx->pc = 0x1A06A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06A4u;
            // 0x1a06a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A06ACu;
    // 0x1a06ac: 0x0  nop
    ctx->pc = 0x1a06acu;
    // NOP
label_1a06b0:
    // 0x1a06b0: 0xc06719a  jal         func_19C668
    ctx->pc = 0x1A06B0u;
    SET_GPR_U32(ctx, 31, 0x1A06B8u);
    ctx->pc = 0x19C668u;
    if (runtime->hasFunction(0x19C668u)) {
        auto targetFn = runtime->lookupFunction(0x19C668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06B8u; }
        if (ctx->pc != 0x1A06B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C668_0x19c668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06B8u; }
        if (ctx->pc != 0x1A06B8u) { return; }
    }
    ctx->pc = 0x1A06B8u;
label_1a06b8:
    // 0x1a06b8: 0xc06011a  jal         func_180468
    ctx->pc = 0x1A06B8u;
    SET_GPR_U32(ctx, 31, 0x1A06C0u);
    ctx->pc = 0x1A06BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06B8u;
            // 0x1a06bc: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180468u;
    if (runtime->hasFunction(0x180468u)) {
        auto targetFn = runtime->lookupFunction(0x180468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06C0u; }
        if (ctx->pc != 0x1A06C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180468_0x180468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06C0u; }
        if (ctx->pc != 0x1A06C0u) { return; }
    }
    ctx->pc = 0x1A06C0u;
label_1a06c0:
    // 0x1a06c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a06c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a06c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06c8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1a06c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06cc: 0xc06816e  jal         func_1A05B8
    ctx->pc = 0x1A06CCu;
    SET_GPR_U32(ctx, 31, 0x1A06D4u);
    ctx->pc = 0x1A06D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06CCu;
            // 0x1a06d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A05B8u;
    if (runtime->hasFunction(0x1A05B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A05B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06D4u; }
        if (ctx->pc != 0x1A06D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A05B8_0x1a05b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06D4u; }
        if (ctx->pc != 0x1A06D4u) { return; }
    }
    ctx->pc = 0x1A06D4u;
label_1a06d4:
    // 0x1a06d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a06d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06d8: 0xc06808a  jal         func_1A0228
    ctx->pc = 0x1A06D8u;
    SET_GPR_U32(ctx, 31, 0x1A06E0u);
    ctx->pc = 0x1A06DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06D8u;
            // 0x1a06dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0228u;
    if (runtime->hasFunction(0x1A0228u)) {
        auto targetFn = runtime->lookupFunction(0x1A0228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06E0u; }
        if (ctx->pc != 0x1A06E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0228_0x1a0228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06E0u; }
        if (ctx->pc != 0x1A06E0u) { return; }
    }
    ctx->pc = 0x1A06E0u;
label_1a06e0:
    // 0x1a06e0: 0xc068062  jal         func_1A0188
    ctx->pc = 0x1A06E0u;
    SET_GPR_U32(ctx, 31, 0x1A06E8u);
    ctx->pc = 0x1A06E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06E0u;
            // 0x1a06e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0188u;
    if (runtime->hasFunction(0x1A0188u)) {
        auto targetFn = runtime->lookupFunction(0x1A0188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06E8u; }
        if (ctx->pc != 0x1A06E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0188_0x1a0188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06E8u; }
        if (ctx->pc != 0x1A06E8u) { return; }
    }
    ctx->pc = 0x1A06E8u;
label_1a06e8:
    // 0x1a06e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a06ec: 0x8e03055c  lw          $v1, 0x55C($s0)
    ctx->pc = 0x1a06ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1372)));
    // 0x1a06f0: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x1a06f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x1a06f4: 0xae130570  sw          $s3, 0x570($s0)
    ctx->pc = 0x1a06f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 19));
    // 0x1a06f8: 0xae140574  sw          $s4, 0x574($s0)
    ctx->pc = 0x1a06f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1396), GPR_U32(ctx, 20));
    // 0x1a06fc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A06FCu;
    {
        const bool branch_taken_0x1a06fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06FCu;
            // 0x1a0700: 0xae110558  sw          $s1, 0x558($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06fc) {
            ctx->pc = 0x1A0708u;
            goto label_1a0708;
        }
    }
    ctx->pc = 0x1A0704u;
    // 0x1a0704: 0xae110564  sw          $s1, 0x564($s0)
    ctx->pc = 0x1a0704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 17));
label_1a0708:
    // 0x1a0708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a070c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a070cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0710: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a0710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0714: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a0714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a0718: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a0718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a071c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a071cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0720: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0720u;
            // 0x1a0724: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0728u;
    // 0x1a0728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a072c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a072cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0730: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a0730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0734: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0738: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a073c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x1A073Cu;
    SET_GPR_U32(ctx, 31, 0x1A0744u);
    ctx->pc = 0x1A0740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A073Cu;
            // 0x1a0740: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0744u; }
        if (ctx->pc != 0x1A0744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0744u; }
        if (ctx->pc != 0x1A0744u) { return; }
    }
    ctx->pc = 0x1A0744u;
label_1a0744:
    // 0x1a0744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0748: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0748u;
    {
        const bool branch_taken_0x1a0748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A074Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0748u;
            // 0x1a074c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0748) {
            ctx->pc = 0x1A0768u;
            goto label_1a0768;
        }
    }
    ctx->pc = 0x1A0750u;
    // 0x1a0750: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a0750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a0754: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x1A0754u;
    SET_GPR_U32(ctx, 31, 0x1A075Cu);
    ctx->pc = 0x1A0758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0754u;
            // 0x1a0758: 0x2484a6a0  addiu       $a0, $a0, -0x5960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A075Cu; }
        if (ctx->pc != 0x1A075Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A075Cu; }
        if (ctx->pc != 0x1A075Cu) { return; }
    }
    ctx->pc = 0x1A075Cu;
label_1a075c:
    // 0x1a075c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A075Cu;
    {
        const bool branch_taken_0x1a075c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A075Cu;
            // 0x1a0760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a075c) {
            ctx->pc = 0x1A07C0u;
            goto label_1a07c0;
        }
    }
    ctx->pc = 0x1A0764u;
    // 0x1a0764: 0x0  nop
    ctx->pc = 0x1a0764u;
    // NOP
label_1a0768:
    // 0x1a0768: 0xc068106  jal         func_1A0418
    ctx->pc = 0x1A0768u;
    SET_GPR_U32(ctx, 31, 0x1A0770u);
    ctx->pc = 0x1A0418u;
    if (runtime->hasFunction(0x1A0418u)) {
        auto targetFn = runtime->lookupFunction(0x1A0418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0770u; }
        if (ctx->pc != 0x1A0770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0418_0x1a0418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0770u; }
        if (ctx->pc != 0x1A0770u) { return; }
    }
    ctx->pc = 0x1A0770u;
label_1a0770:
    // 0x1a0770: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x1a0770u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a0774: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A0774u;
    {
        const bool branch_taken_0x1a0774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0774u;
            // 0x1a0778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0774) {
            ctx->pc = 0x1A07C0u;
            goto label_1a07c0;
        }
    }
    ctx->pc = 0x1A077Cu;
    // 0x1a077c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A077Cu;
    {
        const bool branch_taken_0x1a077c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1A0780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A077Cu;
            // 0x1a0780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a077c) {
            ctx->pc = 0x1A0798u;
            goto label_1a0798;
        }
    }
    ctx->pc = 0x1A0784u;
    // 0x1a0784: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a0784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a0788: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x1A0788u;
    SET_GPR_U32(ctx, 31, 0x1A0790u);
    ctx->pc = 0x1A078Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0788u;
            // 0x1a078c: 0x2484a6d0  addiu       $a0, $a0, -0x5930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0790u; }
        if (ctx->pc != 0x1A0790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0790u; }
        if (ctx->pc != 0x1A0790u) { return; }
    }
    ctx->pc = 0x1A0790u;
label_1a0790:
    // 0x1a0790: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A0790u;
    {
        const bool branch_taken_0x1a0790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0790u;
            // 0x1a0794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0790) {
            ctx->pc = 0x1A07C0u;
            goto label_1a07c0;
        }
    }
    ctx->pc = 0x1A0798u;
label_1a0798:
    // 0x1a0798: 0xc0681fc  jal         func_1A07F0
    ctx->pc = 0x1A0798u;
    SET_GPR_U32(ctx, 31, 0x1A07A0u);
    ctx->pc = 0x1A079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0798u;
            // 0x1a079c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A07F0u;
    if (runtime->hasFunction(0x1A07F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A07F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A07A0u; }
        if (ctx->pc != 0x1A07A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A07F0_0x1a07f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A07A0u; }
        if (ctx->pc != 0x1A07A0u) { return; }
    }
    ctx->pc = 0x1A07A0u;
label_1a07a0:
    // 0x1a07a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a07a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a07a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a07a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a07a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a07a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a07ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a07acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a07b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a07b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a07b4: 0x8068202  j           func_1A0808
    ctx->pc = 0x1A07B4u;
    ctx->pc = 0x1A07B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A07B4u;
            // 0x1a07b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0808u;
    {
        auto targetFn = runtime->lookupFunction(0x1A0808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A07BCu;
    // 0x1a07bc: 0x0  nop
    ctx->pc = 0x1a07bcu;
    // NOP
label_1a07c0:
    // 0x1a07c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a07c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a07c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a07c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a07c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a07c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a07cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A07CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A07D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A07CCu;
            // 0x1a07d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A07D4u;
    // 0x1a07d4: 0x0  nop
    ctx->pc = 0x1a07d4u;
    // NOP
    // 0x1a07d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a07d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a07dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a07dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a07e0: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x1a07e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1a07e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a07e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a07e8: 0x806018a  j           func_180628
    ctx->pc = 0x1A07E8u;
    ctx->pc = 0x1A07ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A07E8u;
            // 0x1a07ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180628u;
    if (runtime->hasFunction(0x180628u)) {
        auto targetFn = runtime->lookupFunction(0x180628u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180628_0x180628(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A07F0u;
}
