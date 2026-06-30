#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B46F8
// Address: 0x1b46f8 - 0x1b4880
void sub_001B46F8_0x1b46f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B46F8_0x1b46f8");
#endif

    switch (ctx->pc) {
        case 0x1b46f8u: goto label_1b46f8;
        case 0x1b46fcu: goto label_1b46fc;
        case 0x1b4700u: goto label_1b4700;
        case 0x1b4704u: goto label_1b4704;
        case 0x1b4708u: goto label_1b4708;
        case 0x1b470cu: goto label_1b470c;
        case 0x1b4710u: goto label_1b4710;
        case 0x1b4714u: goto label_1b4714;
        case 0x1b4718u: goto label_1b4718;
        case 0x1b471cu: goto label_1b471c;
        case 0x1b4720u: goto label_1b4720;
        case 0x1b4724u: goto label_1b4724;
        case 0x1b4728u: goto label_1b4728;
        case 0x1b472cu: goto label_1b472c;
        case 0x1b4730u: goto label_1b4730;
        case 0x1b4734u: goto label_1b4734;
        case 0x1b4738u: goto label_1b4738;
        case 0x1b473cu: goto label_1b473c;
        case 0x1b4740u: goto label_1b4740;
        case 0x1b4744u: goto label_1b4744;
        case 0x1b4748u: goto label_1b4748;
        case 0x1b474cu: goto label_1b474c;
        case 0x1b4750u: goto label_1b4750;
        case 0x1b4754u: goto label_1b4754;
        case 0x1b4758u: goto label_1b4758;
        case 0x1b475cu: goto label_1b475c;
        case 0x1b4760u: goto label_1b4760;
        case 0x1b4764u: goto label_1b4764;
        case 0x1b4768u: goto label_1b4768;
        case 0x1b476cu: goto label_1b476c;
        case 0x1b4770u: goto label_1b4770;
        case 0x1b4774u: goto label_1b4774;
        case 0x1b4778u: goto label_1b4778;
        case 0x1b477cu: goto label_1b477c;
        case 0x1b4780u: goto label_1b4780;
        case 0x1b4784u: goto label_1b4784;
        case 0x1b4788u: goto label_1b4788;
        case 0x1b478cu: goto label_1b478c;
        case 0x1b4790u: goto label_1b4790;
        case 0x1b4794u: goto label_1b4794;
        case 0x1b4798u: goto label_1b4798;
        case 0x1b479cu: goto label_1b479c;
        case 0x1b47a0u: goto label_1b47a0;
        case 0x1b47a4u: goto label_1b47a4;
        case 0x1b47a8u: goto label_1b47a8;
        case 0x1b47acu: goto label_1b47ac;
        case 0x1b47b0u: goto label_1b47b0;
        case 0x1b47b4u: goto label_1b47b4;
        case 0x1b47b8u: goto label_1b47b8;
        case 0x1b47bcu: goto label_1b47bc;
        case 0x1b47c0u: goto label_1b47c0;
        case 0x1b47c4u: goto label_1b47c4;
        case 0x1b47c8u: goto label_1b47c8;
        case 0x1b47ccu: goto label_1b47cc;
        case 0x1b47d0u: goto label_1b47d0;
        case 0x1b47d4u: goto label_1b47d4;
        case 0x1b47d8u: goto label_1b47d8;
        case 0x1b47dcu: goto label_1b47dc;
        case 0x1b47e0u: goto label_1b47e0;
        case 0x1b47e4u: goto label_1b47e4;
        case 0x1b47e8u: goto label_1b47e8;
        case 0x1b47ecu: goto label_1b47ec;
        case 0x1b47f0u: goto label_1b47f0;
        case 0x1b47f4u: goto label_1b47f4;
        case 0x1b47f8u: goto label_1b47f8;
        case 0x1b47fcu: goto label_1b47fc;
        case 0x1b4800u: goto label_1b4800;
        case 0x1b4804u: goto label_1b4804;
        case 0x1b4808u: goto label_1b4808;
        case 0x1b480cu: goto label_1b480c;
        case 0x1b4810u: goto label_1b4810;
        case 0x1b4814u: goto label_1b4814;
        case 0x1b4818u: goto label_1b4818;
        case 0x1b481cu: goto label_1b481c;
        case 0x1b4820u: goto label_1b4820;
        case 0x1b4824u: goto label_1b4824;
        case 0x1b4828u: goto label_1b4828;
        case 0x1b482cu: goto label_1b482c;
        case 0x1b4830u: goto label_1b4830;
        case 0x1b4834u: goto label_1b4834;
        case 0x1b4838u: goto label_1b4838;
        case 0x1b483cu: goto label_1b483c;
        case 0x1b4840u: goto label_1b4840;
        case 0x1b4844u: goto label_1b4844;
        case 0x1b4848u: goto label_1b4848;
        case 0x1b484cu: goto label_1b484c;
        case 0x1b4850u: goto label_1b4850;
        case 0x1b4854u: goto label_1b4854;
        case 0x1b4858u: goto label_1b4858;
        case 0x1b485cu: goto label_1b485c;
        case 0x1b4860u: goto label_1b4860;
        case 0x1b4864u: goto label_1b4864;
        case 0x1b4868u: goto label_1b4868;
        case 0x1b486cu: goto label_1b486c;
        case 0x1b4870u: goto label_1b4870;
        case 0x1b4874u: goto label_1b4874;
        case 0x1b4878u: goto label_1b4878;
        case 0x1b487cu: goto label_1b487c;
        default: break;
    }

    ctx->pc = 0x1b46f8u;

label_1b46f8:
    // 0x1b46f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b46f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b46fc:
    // 0x1b46fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b4700:
    // 0x1b4700: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b4700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b4704:
    // 0x1b4704: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b4704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b4708:
    // 0x1b4708: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b4708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b470c:
    // 0x1b470c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b470cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b4710:
    // 0x1b4710: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b4714:
    // 0x1b4714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4718:
    // 0x1b4718: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b4718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1b471c:
    // 0x1b471c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1b471cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1b4720:
    // 0x1b4720: 0xc06a234  jal         func_1A88D0
label_1b4724:
    if (ctx->pc == 0x1B4724u) {
        ctx->pc = 0x1B4724u;
            // 0x1b4724: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1B4728u;
        goto label_1b4728;
    }
    ctx->pc = 0x1B4720u;
    SET_GPR_U32(ctx, 31, 0x1B4728u);
    ctx->pc = 0x1B4724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4720u;
            // 0x1b4724: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4728u; }
        if (ctx->pc != 0x1B4728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4728u; }
        if (ctx->pc != 0x1B4728u) { return; }
    }
    ctx->pc = 0x1B4728u;
label_1b4728:
    // 0x1b4728: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b472c:
    if (ctx->pc == 0x1B472Cu) {
        ctx->pc = 0x1B472Cu;
            // 0x1b472c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4730u;
        goto label_1b4730;
    }
    ctx->pc = 0x1B4728u;
    {
        const bool branch_taken_0x1b4728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B472Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4728u;
            // 0x1b472c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4728) {
            ctx->pc = 0x1B4748u;
            goto label_1b4748;
        }
    }
    ctx->pc = 0x1B4730u;
label_1b4730:
    // 0x1b4730: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b4730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1b4734:
    // 0x1b4734: 0xc06a1ac  jal         func_1A86B0
label_1b4738:
    if (ctx->pc == 0x1B4738u) {
        ctx->pc = 0x1B4738u;
            // 0x1b4738: 0x34a5013a  ori         $a1, $a1, 0x13A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)314);
        ctx->pc = 0x1B473Cu;
        goto label_1b473c;
    }
    ctx->pc = 0x1B4734u;
    SET_GPR_U32(ctx, 31, 0x1B473Cu);
    ctx->pc = 0x1B4738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4734u;
            // 0x1b4738: 0x34a5013a  ori         $a1, $a1, 0x13A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)314);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B473Cu; }
        if (ctx->pc != 0x1B473Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B473Cu; }
        if (ctx->pc != 0x1B473Cu) { return; }
    }
    ctx->pc = 0x1B473Cu;
label_1b473c:
    // 0x1b473c: 0x10000021  b           . + 4 + (0x21 << 2)
label_1b4740:
    if (ctx->pc == 0x1B4740u) {
        ctx->pc = 0x1B4740u;
            // 0x1b4740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4744u;
        goto label_1b4744;
    }
    ctx->pc = 0x1B473Cu;
    {
        const bool branch_taken_0x1b473c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B473Cu;
            // 0x1b4740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b473c) {
            ctx->pc = 0x1B47C4u;
            goto label_1b47c4;
        }
    }
    ctx->pc = 0x1B4744u;
label_1b4744:
    // 0x1b4744: 0x0  nop
    ctx->pc = 0x1b4744u;
    // NOP
label_1b4748:
    // 0x1b4748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b474c:
    // 0x1b474c: 0xc06d288  jal         func_1B4A20
label_1b4750:
    if (ctx->pc == 0x1B4750u) {
        ctx->pc = 0x1B4750u;
            // 0x1b4750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B4754u;
        goto label_1b4754;
    }
    ctx->pc = 0x1B474Cu;
    SET_GPR_U32(ctx, 31, 0x1B4754u);
    ctx->pc = 0x1B4750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B474Cu;
            // 0x1b4750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A20u;
    if (runtime->hasFunction(0x1B4A20u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4754u; }
        if (ctx->pc != 0x1B4754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A20_0x1b4a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4754u; }
        if (ctx->pc != 0x1B4754u) { return; }
    }
    ctx->pc = 0x1B4754u;
label_1b4754:
    // 0x1b4754: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1b4758:
    if (ctx->pc == 0x1B4758u) {
        ctx->pc = 0x1B4758u;
            // 0x1b4758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B475Cu;
        goto label_1b475c;
    }
    ctx->pc = 0x1B4754u;
    {
        const bool branch_taken_0x1b4754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4754u;
            // 0x1b4758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4754) {
            ctx->pc = 0x1B47C4u;
            goto label_1b47c4;
        }
    }
    ctx->pc = 0x1B475Cu;
label_1b475c:
    // 0x1b475c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1b475cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b4760:
    // 0x1b4760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4764:
    // 0x1b4764: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b4764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b4768:
    // 0x1b4768: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1b4768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b476c:
    // 0x1b476c: 0xc06e35c  jal         func_1B8D70
label_1b4770:
    if (ctx->pc == 0x1B4770u) {
        ctx->pc = 0x1B4770u;
            // 0x1b4770: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4774u;
        goto label_1b4774;
    }
    ctx->pc = 0x1B476Cu;
    SET_GPR_U32(ctx, 31, 0x1B4774u);
    ctx->pc = 0x1B4770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B476Cu;
            // 0x1b4770: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4774u; }
        if (ctx->pc != 0x1B4774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4774u; }
        if (ctx->pc != 0x1B4774u) { return; }
    }
    ctx->pc = 0x1B4774u;
label_1b4774:
    // 0x1b4774: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b4774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1b4778:
    // 0x1b4778: 0x8c629bd4  lw          $v0, -0x642C($v1)
    ctx->pc = 0x1b4778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941652)));
label_1b477c:
    // 0x1b477c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b4780:
    if (ctx->pc == 0x1B4780u) {
        ctx->pc = 0x1B4780u;
            // 0x1b4780: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1B4784u;
        goto label_1b4784;
    }
    ctx->pc = 0x1B477Cu;
    {
        const bool branch_taken_0x1b477c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b477c) {
            ctx->pc = 0x1B4780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B477Cu;
            // 0x1b4780: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4794u;
            goto label_1b4794;
        }
    }
    ctx->pc = 0x1B4784u;
label_1b4784:
    // 0x1b4784: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1b4784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b4788:
    // 0x1b4788: 0x40f809  jalr        $v0
label_1b478c:
    if (ctx->pc == 0x1B478Cu) {
        ctx->pc = 0x1B478Cu;
            // 0x1b478c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4790u;
        goto label_1b4790;
    }
    ctx->pc = 0x1B4788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4790u);
        ctx->pc = 0x1B478Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4788u;
            // 0x1b478c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B4790u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B4790u; }
            if (ctx->pc != 0x1B4790u) { return; }
        }
        }
    }
    ctx->pc = 0x1B4790u;
label_1b4790:
    // 0x1b4790: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b4790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b4794:
    // 0x1b4794: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1b4798:
    if (ctx->pc == 0x1B4798u) {
        ctx->pc = 0x1B4798u;
            // 0x1b4798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B479Cu;
        goto label_1b479c;
    }
    ctx->pc = 0x1B4794u;
    {
        const bool branch_taken_0x1b4794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4794u;
            // 0x1b4798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4794) {
            ctx->pc = 0x1B47C4u;
            goto label_1b47c4;
        }
    }
    ctx->pc = 0x1B479Cu;
label_1b479c:
    // 0x1b479c: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x1b479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_1b47a0:
    // 0x1b47a0: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_1b47a4:
    if (ctx->pc == 0x1B47A4u) {
        ctx->pc = 0x1B47A4u;
            // 0x1b47a4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x1B47A8u;
        goto label_1b47a8;
    }
    ctx->pc = 0x1B47A0u;
    {
        const bool branch_taken_0x1b47a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b47a0) {
            ctx->pc = 0x1B47A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B47A0u;
            // 0x1b47a4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B47BCu;
            goto label_1b47bc;
        }
    }
    ctx->pc = 0x1B47A8u;
label_1b47a8:
    // 0x1b47a8: 0xc06e140  jal         func_1B8500
label_1b47ac:
    if (ctx->pc == 0x1B47ACu) {
        ctx->pc = 0x1B47B0u;
        goto label_1b47b0;
    }
    ctx->pc = 0x1B47A8u;
    SET_GPR_U32(ctx, 31, 0x1B47B0u);
    ctx->pc = 0x1B8500u;
    if (runtime->hasFunction(0x1B8500u)) {
        auto targetFn = runtime->lookupFunction(0x1B8500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47B0u; }
        if (ctx->pc != 0x1B47B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8500_0x1b8500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47B0u; }
        if (ctx->pc != 0x1B47B0u) { return; }
    }
    ctx->pc = 0x1B47B0u;
label_1b47b0:
    // 0x1b47b0: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x1b47b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_1b47b4:
    // 0x1b47b4: 0xfe0237f0  sd          $v0, 0x37F0($s0)
    ctx->pc = 0x1b47b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 14320), GPR_U64(ctx, 2));
label_1b47b8:
    // 0x1b47b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b47b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b47bc:
    // 0x1b47bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b47c0:
    // 0x1b47c0: 0xae030968  sw          $v1, 0x968($s0)
    ctx->pc = 0x1b47c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2408), GPR_U32(ctx, 3));
label_1b47c4:
    // 0x1b47c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b47c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b47c8:
    // 0x1b47c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b47c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b47cc:
    // 0x1b47cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b47ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b47d0:
    // 0x1b47d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b47d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b47d4:
    // 0x1b47d4: 0x3e00008  jr          $ra
label_1b47d8:
    if (ctx->pc == 0x1B47D8u) {
        ctx->pc = 0x1B47D8u;
            // 0x1b47d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B47DCu;
        goto label_1b47dc;
    }
    ctx->pc = 0x1B47D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B47D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B47D4u;
            // 0x1b47d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B47DCu;
label_1b47dc:
    // 0x1b47dc: 0x0  nop
    ctx->pc = 0x1b47dcu;
    // NOP
label_1b47e0:
    // 0x1b47e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b47e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b47e4:
    // 0x1b47e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b47e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b47e8:
    // 0x1b47e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b47e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b47ec:
    // 0x1b47ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b47ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b47f0:
    // 0x1b47f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b47f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b47f4:
    // 0x1b47f4: 0xc06a234  jal         func_1A88D0
label_1b47f8:
    if (ctx->pc == 0x1B47F8u) {
        ctx->pc = 0x1B47F8u;
            // 0x1b47f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B47FCu;
        goto label_1b47fc;
    }
    ctx->pc = 0x1B47F4u;
    SET_GPR_U32(ctx, 31, 0x1B47FCu);
    ctx->pc = 0x1B47F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B47F4u;
            // 0x1b47f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47FCu; }
        if (ctx->pc != 0x1B47FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47FCu; }
        if (ctx->pc != 0x1B47FCu) { return; }
    }
    ctx->pc = 0x1B47FCu;
label_1b47fc:
    // 0x1b47fc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b47fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1b4800:
    // 0x1b4800: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b4804:
    if (ctx->pc == 0x1B4804u) {
        ctx->pc = 0x1B4804u;
            // 0x1b4804: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4808u;
        goto label_1b4808;
    }
    ctx->pc = 0x1B4800u;
    {
        const bool branch_taken_0x1b4800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4800u;
            // 0x1b4804: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4800) {
            ctx->pc = 0x1B4820u;
            goto label_1b4820;
        }
    }
    ctx->pc = 0x1B4808u;
label_1b4808:
    // 0x1b4808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b480c:
    // 0x1b480c: 0x34a5013b  ori         $a1, $a1, 0x13B
    ctx->pc = 0x1b480cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)315);
label_1b4810:
    // 0x1b4810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b4814:
    // 0x1b4814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4818:
    // 0x1b4818: 0x806a1ac  j           func_1A86B0
label_1b481c:
    if (ctx->pc == 0x1B481Cu) {
        ctx->pc = 0x1B481Cu;
            // 0x1b481c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B4820u;
        goto label_1b4820;
    }
    ctx->pc = 0x1B4818u;
    ctx->pc = 0x1B481Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4818u;
            // 0x1b481c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B4820u;
label_1b4820:
    // 0x1b4820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4824:
    // 0x1b4824: 0xc06d288  jal         func_1B4A20
label_1b4828:
    if (ctx->pc == 0x1B4828u) {
        ctx->pc = 0x1B4828u;
            // 0x1b4828: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B482Cu;
        goto label_1b482c;
    }
    ctx->pc = 0x1B4824u;
    SET_GPR_U32(ctx, 31, 0x1B482Cu);
    ctx->pc = 0x1B4828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4824u;
            // 0x1b4828: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A20u;
    if (runtime->hasFunction(0x1B4A20u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B482Cu; }
        if (ctx->pc != 0x1B482Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A20_0x1b4a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B482Cu; }
        if (ctx->pc != 0x1B482Cu) { return; }
    }
    ctx->pc = 0x1B482Cu;
label_1b482c:
    // 0x1b482c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b482cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4830:
    // 0x1b4830: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1b4830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b4834:
    // 0x1b4834: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b4834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b4838:
    // 0x1b4838: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1b4838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b483c:
    // 0x1b483c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1b4840:
    if (ctx->pc == 0x1B4840u) {
        ctx->pc = 0x1B4840u;
            // 0x1b4840: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4844u;
        goto label_1b4844;
    }
    ctx->pc = 0x1B483Cu;
    {
        const bool branch_taken_0x1b483c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B483Cu;
            // 0x1b4840: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b483c) {
            ctx->pc = 0x1B4868u;
            goto label_1b4868;
        }
    }
    ctx->pc = 0x1B4844u;
label_1b4844:
    // 0x1b4844: 0x8e02096c  lw          $v0, 0x96C($s0)
    ctx->pc = 0x1b4844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
label_1b4848:
    // 0x1b4848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b484c:
    // 0x1b484c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b484cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b4850:
    // 0x1b4850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4854:
    // 0x1b4854: 0xae02096c  sw          $v0, 0x96C($s0)
    ctx->pc = 0x1b4854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2412), GPR_U32(ctx, 2));
label_1b4858:
    // 0x1b4858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b485c:
    // 0x1b485c: 0x806e35c  j           func_1B8D70
label_1b4860:
    if (ctx->pc == 0x1B4860u) {
        ctx->pc = 0x1B4860u;
            // 0x1b4860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B4864u;
        goto label_1b4864;
    }
    ctx->pc = 0x1B485Cu;
    ctx->pc = 0x1B4860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B485Cu;
            // 0x1b4860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B4864u;
label_1b4864:
    // 0x1b4864: 0x0  nop
    ctx->pc = 0x1b4864u;
    // NOP
label_1b4868:
    // 0x1b4868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b486c:
    // 0x1b486c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b486cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b4870:
    // 0x1b4870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4874:
    // 0x1b4874: 0x3e00008  jr          $ra
label_1b4878:
    if (ctx->pc == 0x1B4878u) {
        ctx->pc = 0x1B4878u;
            // 0x1b4878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B487Cu;
        goto label_1b487c;
    }
    ctx->pc = 0x1B4874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4874u;
            // 0x1b4878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B487Cu;
label_1b487c:
    // 0x1b487c: 0x0  nop
    ctx->pc = 0x1b487cu;
    // NOP
}
