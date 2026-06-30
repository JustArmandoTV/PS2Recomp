#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00474670
// Address: 0x474670 - 0x4747e0
void sub_00474670_0x474670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00474670_0x474670");
#endif

    switch (ctx->pc) {
        case 0x474670u: goto label_474670;
        case 0x474674u: goto label_474674;
        case 0x474678u: goto label_474678;
        case 0x47467cu: goto label_47467c;
        case 0x474680u: goto label_474680;
        case 0x474684u: goto label_474684;
        case 0x474688u: goto label_474688;
        case 0x47468cu: goto label_47468c;
        case 0x474690u: goto label_474690;
        case 0x474694u: goto label_474694;
        case 0x474698u: goto label_474698;
        case 0x47469cu: goto label_47469c;
        case 0x4746a0u: goto label_4746a0;
        case 0x4746a4u: goto label_4746a4;
        case 0x4746a8u: goto label_4746a8;
        case 0x4746acu: goto label_4746ac;
        case 0x4746b0u: goto label_4746b0;
        case 0x4746b4u: goto label_4746b4;
        case 0x4746b8u: goto label_4746b8;
        case 0x4746bcu: goto label_4746bc;
        case 0x4746c0u: goto label_4746c0;
        case 0x4746c4u: goto label_4746c4;
        case 0x4746c8u: goto label_4746c8;
        case 0x4746ccu: goto label_4746cc;
        case 0x4746d0u: goto label_4746d0;
        case 0x4746d4u: goto label_4746d4;
        case 0x4746d8u: goto label_4746d8;
        case 0x4746dcu: goto label_4746dc;
        case 0x4746e0u: goto label_4746e0;
        case 0x4746e4u: goto label_4746e4;
        case 0x4746e8u: goto label_4746e8;
        case 0x4746ecu: goto label_4746ec;
        case 0x4746f0u: goto label_4746f0;
        case 0x4746f4u: goto label_4746f4;
        case 0x4746f8u: goto label_4746f8;
        case 0x4746fcu: goto label_4746fc;
        case 0x474700u: goto label_474700;
        case 0x474704u: goto label_474704;
        case 0x474708u: goto label_474708;
        case 0x47470cu: goto label_47470c;
        case 0x474710u: goto label_474710;
        case 0x474714u: goto label_474714;
        case 0x474718u: goto label_474718;
        case 0x47471cu: goto label_47471c;
        case 0x474720u: goto label_474720;
        case 0x474724u: goto label_474724;
        case 0x474728u: goto label_474728;
        case 0x47472cu: goto label_47472c;
        case 0x474730u: goto label_474730;
        case 0x474734u: goto label_474734;
        case 0x474738u: goto label_474738;
        case 0x47473cu: goto label_47473c;
        case 0x474740u: goto label_474740;
        case 0x474744u: goto label_474744;
        case 0x474748u: goto label_474748;
        case 0x47474cu: goto label_47474c;
        case 0x474750u: goto label_474750;
        case 0x474754u: goto label_474754;
        case 0x474758u: goto label_474758;
        case 0x47475cu: goto label_47475c;
        case 0x474760u: goto label_474760;
        case 0x474764u: goto label_474764;
        case 0x474768u: goto label_474768;
        case 0x47476cu: goto label_47476c;
        case 0x474770u: goto label_474770;
        case 0x474774u: goto label_474774;
        case 0x474778u: goto label_474778;
        case 0x47477cu: goto label_47477c;
        case 0x474780u: goto label_474780;
        case 0x474784u: goto label_474784;
        case 0x474788u: goto label_474788;
        case 0x47478cu: goto label_47478c;
        case 0x474790u: goto label_474790;
        case 0x474794u: goto label_474794;
        case 0x474798u: goto label_474798;
        case 0x47479cu: goto label_47479c;
        case 0x4747a0u: goto label_4747a0;
        case 0x4747a4u: goto label_4747a4;
        case 0x4747a8u: goto label_4747a8;
        case 0x4747acu: goto label_4747ac;
        case 0x4747b0u: goto label_4747b0;
        case 0x4747b4u: goto label_4747b4;
        case 0x4747b8u: goto label_4747b8;
        case 0x4747bcu: goto label_4747bc;
        case 0x4747c0u: goto label_4747c0;
        case 0x4747c4u: goto label_4747c4;
        case 0x4747c8u: goto label_4747c8;
        case 0x4747ccu: goto label_4747cc;
        case 0x4747d0u: goto label_4747d0;
        case 0x4747d4u: goto label_4747d4;
        case 0x4747d8u: goto label_4747d8;
        case 0x4747dcu: goto label_4747dc;
        default: break;
    }

    ctx->pc = 0x474670u;

label_474670:
    // 0x474670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x474670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_474674:
    // 0x474674: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x474674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_474678:
    // 0x474678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x474678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47467c:
    // 0x47467c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x47467cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_474680:
    // 0x474680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x474680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_474684:
    // 0x474684: 0xc11d230  jal         func_4748C0
label_474688:
    if (ctx->pc == 0x474688u) {
        ctx->pc = 0x474688u;
            // 0x474688: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47468Cu;
        goto label_47468c;
    }
    ctx->pc = 0x474684u;
    SET_GPR_U32(ctx, 31, 0x47468Cu);
    ctx->pc = 0x474688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474684u;
            // 0x474688: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4748C0u;
    if (runtime->hasFunction(0x4748C0u)) {
        auto targetFn = runtime->lookupFunction(0x4748C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47468Cu; }
        if (ctx->pc != 0x47468Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004748C0_0x4748c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47468Cu; }
        if (ctx->pc != 0x47468Cu) { return; }
    }
    ctx->pc = 0x47468Cu;
label_47468c:
    // 0x47468c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47468cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_474690:
    // 0x474690: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x474690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_474694:
    // 0x474694: 0x2463ead0  addiu       $v1, $v1, -0x1530
    ctx->pc = 0x474694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961872));
label_474698:
    // 0x474698: 0x2442eb08  addiu       $v0, $v0, -0x14F8
    ctx->pc = 0x474698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961928));
label_47469c:
    // 0x47469c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47469cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4746a0:
    // 0x4746a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4746a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4746a4:
    // 0x4746a4: 0xc11d22c  jal         func_4748B0
label_4746a8:
    if (ctx->pc == 0x4746A8u) {
        ctx->pc = 0x4746A8u;
            // 0x4746a8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4746ACu;
        goto label_4746ac;
    }
    ctx->pc = 0x4746A4u;
    SET_GPR_U32(ctx, 31, 0x4746ACu);
    ctx->pc = 0x4746A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4746A4u;
            // 0x4746a8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4748B0u;
    if (runtime->hasFunction(0x4748B0u)) {
        auto targetFn = runtime->lookupFunction(0x4748B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4746ACu; }
        if (ctx->pc != 0x4746ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004748B0_0x4748b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4746ACu; }
        if (ctx->pc != 0x4746ACu) { return; }
    }
    ctx->pc = 0x4746ACu;
label_4746ac:
    // 0x4746ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4746acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4746b0:
    // 0x4746b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4746b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4746b4:
    // 0x4746b4: 0x2442ea10  addiu       $v0, $v0, -0x15F0
    ctx->pc = 0x4746b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961680));
label_4746b8:
    // 0x4746b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4746b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4746bc:
    // 0x4746bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4746bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4746c0:
    // 0x4746c0: 0x2442ea48  addiu       $v0, $v0, -0x15B8
    ctx->pc = 0x4746c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961736));
label_4746c4:
    // 0x4746c4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4746c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_4746c8:
    // 0x4746c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4746c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4746cc:
    // 0x4746cc: 0x8c4389e8  lw          $v1, -0x7618($v0)
    ctx->pc = 0x4746ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4746d0:
    // 0x4746d0: 0x8c790004  lw          $t9, 0x4($v1)
    ctx->pc = 0x4746d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4746d4:
    // 0x4746d4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4746d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_4746d8:
    // 0x4746d8: 0x34450fa9  ori         $a1, $v0, 0xFA9
    ctx->pc = 0x4746d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4009);
label_4746dc:
    // 0x4746dc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4746dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4746e0:
    // 0x4746e0: 0x320f809  jalr        $t9
label_4746e4:
    if (ctx->pc == 0x4746E4u) {
        ctx->pc = 0x4746E4u;
            // 0x4746e4: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x4746E8u;
        goto label_4746e8;
    }
    ctx->pc = 0x4746E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4746E8u);
        ctx->pc = 0x4746E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4746E0u;
            // 0x4746e4: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4746E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4746E8u; }
            if (ctx->pc != 0x4746E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4746E8u;
label_4746e8:
    // 0x4746e8: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x4746e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_4746ec:
    // 0x4746ec: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x4746ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_4746f0:
    // 0x4746f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4746f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4746f4:
    // 0x4746f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4746f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4746f8:
    // 0x4746f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4746f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4746fc:
    // 0x4746fc: 0x3e00008  jr          $ra
label_474700:
    if (ctx->pc == 0x474700u) {
        ctx->pc = 0x474700u;
            // 0x474700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x474704u;
        goto label_474704;
    }
    ctx->pc = 0x4746FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x474700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4746FCu;
            // 0x474700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x474704u;
label_474704:
    // 0x474704: 0x0  nop
    ctx->pc = 0x474704u;
    // NOP
label_474708:
    // 0x474708: 0x0  nop
    ctx->pc = 0x474708u;
    // NOP
label_47470c:
    // 0x47470c: 0x0  nop
    ctx->pc = 0x47470cu;
    // NOP
label_474710:
    // 0x474710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x474710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_474714:
    // 0x474714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x474714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_474718:
    // 0x474718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x474718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47471c:
    // 0x47471c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_474720:
    // 0x474720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x474720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_474724:
    // 0x474724: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_474728:
    if (ctx->pc == 0x474728u) {
        ctx->pc = 0x474728u;
            // 0x474728: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47472Cu;
        goto label_47472c;
    }
    ctx->pc = 0x474724u;
    {
        const bool branch_taken_0x474724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x474728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474724u;
            // 0x474728: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474724) {
            ctx->pc = 0x4747C4u;
            goto label_4747c4;
        }
    }
    ctx->pc = 0x47472Cu;
label_47472c:
    // 0x47472c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47472cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_474730:
    // 0x474730: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x474730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_474734:
    // 0x474734: 0x2463ead0  addiu       $v1, $v1, -0x1530
    ctx->pc = 0x474734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961872));
label_474738:
    // 0x474738: 0x2442eb08  addiu       $v0, $v0, -0x14F8
    ctx->pc = 0x474738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961928));
label_47473c:
    // 0x47473c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47473cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_474740:
    // 0x474740: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_474744:
    if (ctx->pc == 0x474744u) {
        ctx->pc = 0x474744u;
            // 0x474744: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x474748u;
        goto label_474748;
    }
    ctx->pc = 0x474740u;
    {
        const bool branch_taken_0x474740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x474744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474740u;
            // 0x474744: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474740) {
            ctx->pc = 0x4747ACu;
            goto label_4747ac;
        }
    }
    ctx->pc = 0x474748u;
label_474748:
    // 0x474748: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x474748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_47474c:
    // 0x47474c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47474cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_474750:
    // 0x474750: 0x2463ea80  addiu       $v1, $v1, -0x1580
    ctx->pc = 0x474750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961792));
label_474754:
    // 0x474754: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x474754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_474758:
    // 0x474758: 0x2442eab8  addiu       $v0, $v0, -0x1548
    ctx->pc = 0x474758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961848));
label_47475c:
    // 0x47475c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47475cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_474760:
    // 0x474760: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x474760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_474764:
    // 0x474764: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x474764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_474768:
    // 0x474768: 0xc0407c0  jal         func_101F00
label_47476c:
    if (ctx->pc == 0x47476Cu) {
        ctx->pc = 0x47476Cu;
            // 0x47476c: 0x24a53a00  addiu       $a1, $a1, 0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14848));
        ctx->pc = 0x474770u;
        goto label_474770;
    }
    ctx->pc = 0x474768u;
    SET_GPR_U32(ctx, 31, 0x474770u);
    ctx->pc = 0x47476Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474768u;
            // 0x47476c: 0x24a53a00  addiu       $a1, $a1, 0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474770u; }
        if (ctx->pc != 0x474770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474770u; }
        if (ctx->pc != 0x474770u) { return; }
    }
    ctx->pc = 0x474770u;
label_474770:
    // 0x474770: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x474770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_474774:
    // 0x474774: 0xc0a8cf8  jal         func_2A33E0
label_474778:
    if (ctx->pc == 0x474778u) {
        ctx->pc = 0x474778u;
            // 0x474778: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x47477Cu;
        goto label_47477c;
    }
    ctx->pc = 0x474774u;
    SET_GPR_U32(ctx, 31, 0x47477Cu);
    ctx->pc = 0x474778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474774u;
            // 0x474778: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47477Cu; }
        if (ctx->pc != 0x47477Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47477Cu; }
        if (ctx->pc != 0x47477Cu) { return; }
    }
    ctx->pc = 0x47477Cu;
label_47477c:
    // 0x47477c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x47477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_474780:
    // 0x474780: 0xc11d210  jal         func_474840
label_474784:
    if (ctx->pc == 0x474784u) {
        ctx->pc = 0x474784u;
            // 0x474784: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x474788u;
        goto label_474788;
    }
    ctx->pc = 0x474780u;
    SET_GPR_U32(ctx, 31, 0x474788u);
    ctx->pc = 0x474784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474780u;
            // 0x474784: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x474840u;
    if (runtime->hasFunction(0x474840u)) {
        auto targetFn = runtime->lookupFunction(0x474840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474788u; }
        if (ctx->pc != 0x474788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00474840_0x474840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474788u; }
        if (ctx->pc != 0x474788u) { return; }
    }
    ctx->pc = 0x474788u;
label_474788:
    // 0x474788: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x474788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_47478c:
    // 0x47478c: 0xc11d210  jal         func_474840
label_474790:
    if (ctx->pc == 0x474790u) {
        ctx->pc = 0x474790u;
            // 0x474790: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x474794u;
        goto label_474794;
    }
    ctx->pc = 0x47478Cu;
    SET_GPR_U32(ctx, 31, 0x474794u);
    ctx->pc = 0x474790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47478Cu;
            // 0x474790: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x474840u;
    if (runtime->hasFunction(0x474840u)) {
        auto targetFn = runtime->lookupFunction(0x474840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474794u; }
        if (ctx->pc != 0x474794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00474840_0x474840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474794u; }
        if (ctx->pc != 0x474794u) { return; }
    }
    ctx->pc = 0x474794u;
label_474794:
    // 0x474794: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x474794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_474798:
    // 0x474798: 0xc11d1f8  jal         func_4747E0
label_47479c:
    if (ctx->pc == 0x47479Cu) {
        ctx->pc = 0x47479Cu;
            // 0x47479c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4747A0u;
        goto label_4747a0;
    }
    ctx->pc = 0x474798u;
    SET_GPR_U32(ctx, 31, 0x4747A0u);
    ctx->pc = 0x47479Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474798u;
            // 0x47479c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4747E0u;
    if (runtime->hasFunction(0x4747E0u)) {
        auto targetFn = runtime->lookupFunction(0x4747E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4747A0u; }
        if (ctx->pc != 0x4747A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004747E0_0x4747e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4747A0u; }
        if (ctx->pc != 0x4747A0u) { return; }
    }
    ctx->pc = 0x4747A0u;
label_4747a0:
    // 0x4747a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4747a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4747a4:
    // 0x4747a4: 0xc0ae1c0  jal         func_2B8700
label_4747a8:
    if (ctx->pc == 0x4747A8u) {
        ctx->pc = 0x4747A8u;
            // 0x4747a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4747ACu;
        goto label_4747ac;
    }
    ctx->pc = 0x4747A4u;
    SET_GPR_U32(ctx, 31, 0x4747ACu);
    ctx->pc = 0x4747A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4747A4u;
            // 0x4747a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4747ACu; }
        if (ctx->pc != 0x4747ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4747ACu; }
        if (ctx->pc != 0x4747ACu) { return; }
    }
    ctx->pc = 0x4747ACu;
label_4747ac:
    // 0x4747ac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4747acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4747b0:
    // 0x4747b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4747b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4747b4:
    // 0x4747b4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4747b8:
    if (ctx->pc == 0x4747B8u) {
        ctx->pc = 0x4747B8u;
            // 0x4747b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4747BCu;
        goto label_4747bc;
    }
    ctx->pc = 0x4747B4u;
    {
        const bool branch_taken_0x4747b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4747b4) {
            ctx->pc = 0x4747B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4747B4u;
            // 0x4747b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4747C8u;
            goto label_4747c8;
        }
    }
    ctx->pc = 0x4747BCu;
label_4747bc:
    // 0x4747bc: 0xc0400a8  jal         func_1002A0
label_4747c0:
    if (ctx->pc == 0x4747C0u) {
        ctx->pc = 0x4747C0u;
            // 0x4747c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4747C4u;
        goto label_4747c4;
    }
    ctx->pc = 0x4747BCu;
    SET_GPR_U32(ctx, 31, 0x4747C4u);
    ctx->pc = 0x4747C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4747BCu;
            // 0x4747c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4747C4u; }
        if (ctx->pc != 0x4747C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4747C4u; }
        if (ctx->pc != 0x4747C4u) { return; }
    }
    ctx->pc = 0x4747C4u;
label_4747c4:
    // 0x4747c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4747c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4747c8:
    // 0x4747c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4747c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4747cc:
    // 0x4747cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4747ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4747d0:
    // 0x4747d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4747d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4747d4:
    // 0x4747d4: 0x3e00008  jr          $ra
label_4747d8:
    if (ctx->pc == 0x4747D8u) {
        ctx->pc = 0x4747D8u;
            // 0x4747d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4747DCu;
        goto label_4747dc;
    }
    ctx->pc = 0x4747D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4747D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4747D4u;
            // 0x4747d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4747DCu;
label_4747dc:
    // 0x4747dc: 0x0  nop
    ctx->pc = 0x4747dcu;
    // NOP
}
