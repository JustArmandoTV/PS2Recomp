#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002316F0
// Address: 0x2316f0 - 0x231850
void sub_002316F0_0x2316f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002316F0_0x2316f0");
#endif

    switch (ctx->pc) {
        case 0x2316f0u: goto label_2316f0;
        case 0x2316f4u: goto label_2316f4;
        case 0x2316f8u: goto label_2316f8;
        case 0x2316fcu: goto label_2316fc;
        case 0x231700u: goto label_231700;
        case 0x231704u: goto label_231704;
        case 0x231708u: goto label_231708;
        case 0x23170cu: goto label_23170c;
        case 0x231710u: goto label_231710;
        case 0x231714u: goto label_231714;
        case 0x231718u: goto label_231718;
        case 0x23171cu: goto label_23171c;
        case 0x231720u: goto label_231720;
        case 0x231724u: goto label_231724;
        case 0x231728u: goto label_231728;
        case 0x23172cu: goto label_23172c;
        case 0x231730u: goto label_231730;
        case 0x231734u: goto label_231734;
        case 0x231738u: goto label_231738;
        case 0x23173cu: goto label_23173c;
        case 0x231740u: goto label_231740;
        case 0x231744u: goto label_231744;
        case 0x231748u: goto label_231748;
        case 0x23174cu: goto label_23174c;
        case 0x231750u: goto label_231750;
        case 0x231754u: goto label_231754;
        case 0x231758u: goto label_231758;
        case 0x23175cu: goto label_23175c;
        case 0x231760u: goto label_231760;
        case 0x231764u: goto label_231764;
        case 0x231768u: goto label_231768;
        case 0x23176cu: goto label_23176c;
        case 0x231770u: goto label_231770;
        case 0x231774u: goto label_231774;
        case 0x231778u: goto label_231778;
        case 0x23177cu: goto label_23177c;
        case 0x231780u: goto label_231780;
        case 0x231784u: goto label_231784;
        case 0x231788u: goto label_231788;
        case 0x23178cu: goto label_23178c;
        case 0x231790u: goto label_231790;
        case 0x231794u: goto label_231794;
        case 0x231798u: goto label_231798;
        case 0x23179cu: goto label_23179c;
        case 0x2317a0u: goto label_2317a0;
        case 0x2317a4u: goto label_2317a4;
        case 0x2317a8u: goto label_2317a8;
        case 0x2317acu: goto label_2317ac;
        case 0x2317b0u: goto label_2317b0;
        case 0x2317b4u: goto label_2317b4;
        case 0x2317b8u: goto label_2317b8;
        case 0x2317bcu: goto label_2317bc;
        case 0x2317c0u: goto label_2317c0;
        case 0x2317c4u: goto label_2317c4;
        case 0x2317c8u: goto label_2317c8;
        case 0x2317ccu: goto label_2317cc;
        case 0x2317d0u: goto label_2317d0;
        case 0x2317d4u: goto label_2317d4;
        case 0x2317d8u: goto label_2317d8;
        case 0x2317dcu: goto label_2317dc;
        case 0x2317e0u: goto label_2317e0;
        case 0x2317e4u: goto label_2317e4;
        case 0x2317e8u: goto label_2317e8;
        case 0x2317ecu: goto label_2317ec;
        case 0x2317f0u: goto label_2317f0;
        case 0x2317f4u: goto label_2317f4;
        case 0x2317f8u: goto label_2317f8;
        case 0x2317fcu: goto label_2317fc;
        case 0x231800u: goto label_231800;
        case 0x231804u: goto label_231804;
        case 0x231808u: goto label_231808;
        case 0x23180cu: goto label_23180c;
        case 0x231810u: goto label_231810;
        case 0x231814u: goto label_231814;
        case 0x231818u: goto label_231818;
        case 0x23181cu: goto label_23181c;
        case 0x231820u: goto label_231820;
        case 0x231824u: goto label_231824;
        case 0x231828u: goto label_231828;
        case 0x23182cu: goto label_23182c;
        case 0x231830u: goto label_231830;
        case 0x231834u: goto label_231834;
        case 0x231838u: goto label_231838;
        case 0x23183cu: goto label_23183c;
        case 0x231840u: goto label_231840;
        case 0x231844u: goto label_231844;
        case 0x231848u: goto label_231848;
        case 0x23184cu: goto label_23184c;
        default: break;
    }

    ctx->pc = 0x2316f0u;

label_2316f0:
    // 0x2316f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2316f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2316f4:
    // 0x2316f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2316f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2316f8:
    // 0x2316f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2316f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2316fc:
    // 0x2316fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2316fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_231700:
    // 0x231700: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x231700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231704:
    // 0x231704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x231704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_231708:
    // 0x231708: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x231708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_23170c:
    // 0x23170c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_231710:
    if (ctx->pc == 0x231710u) {
        ctx->pc = 0x231710u;
            // 0x231710: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231714u;
        goto label_231714;
    }
    ctx->pc = 0x23170Cu;
    {
        const bool branch_taken_0x23170c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23170Cu;
            // 0x231710: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23170c) {
            ctx->pc = 0x231730u;
            goto label_231730;
        }
    }
    ctx->pc = 0x231714u;
label_231714:
    // 0x231714: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x231714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_231718:
    // 0x231718: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x231718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_23171c:
    // 0x23171c: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x23171cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
label_231720:
    // 0x231720: 0xc08d1cc  jal         func_234730
label_231724:
    if (ctx->pc == 0x231724u) {
        ctx->pc = 0x231724u;
            // 0x231724: 0xafb10054  sw          $s1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 17));
        ctx->pc = 0x231728u;
        goto label_231728;
    }
    ctx->pc = 0x231720u;
    SET_GPR_U32(ctx, 31, 0x231728u);
    ctx->pc = 0x231724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231720u;
            // 0x231724: 0xafb10054  sw          $s1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231728u; }
        if (ctx->pc != 0x231728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231728u; }
        if (ctx->pc != 0x231728u) { return; }
    }
    ctx->pc = 0x231728u;
label_231728:
    // 0x231728: 0x10000040  b           . + 4 + (0x40 << 2)
label_23172c:
    if (ctx->pc == 0x23172Cu) {
        ctx->pc = 0x23172Cu;
            // 0x23172c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231730u;
        goto label_231730;
    }
    ctx->pc = 0x231728u;
    {
        const bool branch_taken_0x231728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23172Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231728u;
            // 0x23172c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231728) {
            ctx->pc = 0x23182Cu;
            goto label_23182c;
        }
    }
    ctx->pc = 0x231730u;
label_231730:
    // 0x231730: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x231730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_231734:
    // 0x231734: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x231734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231738:
    // 0x231738: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x231738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_23173c:
    // 0x23173c: 0x320f809  jalr        $t9
label_231740:
    if (ctx->pc == 0x231740u) {
        ctx->pc = 0x231744u;
        goto label_231744;
    }
    ctx->pc = 0x23173Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231744u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x231744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231744u; }
            if (ctx->pc != 0x231744u) { return; }
        }
        }
    }
    ctx->pc = 0x231744u;
label_231744:
    // 0x231744: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x231744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_231748:
    // 0x231748: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
label_23174c:
    if (ctx->pc == 0x23174Cu) {
        ctx->pc = 0x23174Cu;
            // 0x23174c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x231750u;
        goto label_231750;
    }
    ctx->pc = 0x231748u;
    {
        const bool branch_taken_0x231748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x231748) {
            ctx->pc = 0x23174Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231748u;
            // 0x23174c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23178Cu;
            goto label_23178c;
        }
    }
    ctx->pc = 0x231750u;
label_231750:
    // 0x231750: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x231750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_231754:
    // 0x231754: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x231754u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_231758:
    // 0x231758: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_23175c:
    if (ctx->pc == 0x23175Cu) {
        ctx->pc = 0x231760u;
        goto label_231760;
    }
    ctx->pc = 0x231758u;
    {
        const bool branch_taken_0x231758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231758) {
            ctx->pc = 0x231788u;
            goto label_231788;
        }
    }
    ctx->pc = 0x231760u;
label_231760:
    // 0x231760: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x231760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_231764:
    // 0x231764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x231764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231768:
    // 0x231768: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x231768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23176c:
    // 0x23176c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x23176cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_231770:
    // 0x231770: 0x320f809  jalr        $t9
label_231774:
    if (ctx->pc == 0x231774u) {
        ctx->pc = 0x231774u;
            // 0x231774: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x231778u;
        goto label_231778;
    }
    ctx->pc = 0x231770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231778u);
        ctx->pc = 0x231774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231770u;
            // 0x231774: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231778u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231778u; }
            if (ctx->pc != 0x231778u) { return; }
        }
        }
    }
    ctx->pc = 0x231778u;
label_231778:
    // 0x231778: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x231778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_23177c:
    // 0x23177c: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x23177cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
label_231780:
    // 0x231780: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x231780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_231784:
    // 0x231784: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x231784u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
label_231788:
    // 0x231788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23178c:
    // 0x23178c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23178cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_231790:
    // 0x231790: 0xc087ec0  jal         func_21FB00
label_231794:
    if (ctx->pc == 0x231794u) {
        ctx->pc = 0x231794u;
            // 0x231794: 0xa242008c  sb          $v0, 0x8C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x231798u;
        goto label_231798;
    }
    ctx->pc = 0x231790u;
    SET_GPR_U32(ctx, 31, 0x231798u);
    ctx->pc = 0x231794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231790u;
            // 0x231794: 0xa242008c  sb          $v0, 0x8C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB00u;
    if (runtime->hasFunction(0x21FB00u)) {
        auto targetFn = runtime->lookupFunction(0x21FB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231798u; }
        if (ctx->pc != 0x231798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FB00_0x21fb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231798u; }
        if (ctx->pc != 0x231798u) { return; }
    }
    ctx->pc = 0x231798u;
label_231798:
    // 0x231798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23179c:
    // 0x23179c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23179cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2317a0:
    // 0x2317a0: 0xc08fb10  jal         func_23EC40
label_2317a4:
    if (ctx->pc == 0x2317A4u) {
        ctx->pc = 0x2317A4u;
            // 0x2317a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2317A8u;
        goto label_2317a8;
    }
    ctx->pc = 0x2317A0u;
    SET_GPR_U32(ctx, 31, 0x2317A8u);
    ctx->pc = 0x2317A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2317A0u;
            // 0x2317a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EC40u;
    if (runtime->hasFunction(0x23EC40u)) {
        auto targetFn = runtime->lookupFunction(0x23EC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2317A8u; }
        if (ctx->pc != 0x2317A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023EC40_0x23ec40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2317A8u; }
        if (ctx->pc != 0x2317A8u) { return; }
    }
    ctx->pc = 0x2317A8u;
label_2317a8:
    // 0x2317a8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2317a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2317ac:
    // 0x2317ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2317acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2317b0:
    // 0x2317b0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2317b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2317b4:
    // 0x2317b4: 0x320f809  jalr        $t9
label_2317b8:
    if (ctx->pc == 0x2317B8u) {
        ctx->pc = 0x2317B8u;
            // 0x2317b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2317BCu;
        goto label_2317bc;
    }
    ctx->pc = 0x2317B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2317BCu);
        ctx->pc = 0x2317B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2317B4u;
            // 0x2317b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2317BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2317BCu; }
            if (ctx->pc != 0x2317BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2317BCu;
label_2317bc:
    // 0x2317bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2317bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2317c0:
    // 0x2317c0: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
label_2317c4:
    if (ctx->pc == 0x2317C4u) {
        ctx->pc = 0x2317C4u;
            // 0x2317c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2317C8u;
        goto label_2317c8;
    }
    ctx->pc = 0x2317C0u;
    {
        const bool branch_taken_0x2317c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2317c0) {
            ctx->pc = 0x2317C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2317C0u;
            // 0x2317c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2317F8u;
            goto label_2317f8;
        }
    }
    ctx->pc = 0x2317C8u;
label_2317c8:
    // 0x2317c8: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x2317c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2317cc:
    // 0x2317cc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2317ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2317d0:
    // 0x2317d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2317d4:
    if (ctx->pc == 0x2317D4u) {
        ctx->pc = 0x2317D4u;
            // 0x2317d4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x2317D8u;
        goto label_2317d8;
    }
    ctx->pc = 0x2317D0u;
    {
        const bool branch_taken_0x2317d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2317d0) {
            ctx->pc = 0x2317D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2317D0u;
            // 0x2317d4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2317E4u;
            goto label_2317e4;
        }
    }
    ctx->pc = 0x2317D8u;
label_2317d8:
    // 0x2317d8: 0xc08c650  jal         func_231940
label_2317dc:
    if (ctx->pc == 0x2317DCu) {
        ctx->pc = 0x2317DCu;
            // 0x2317dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2317E0u;
        goto label_2317e0;
    }
    ctx->pc = 0x2317D8u;
    SET_GPR_U32(ctx, 31, 0x2317E0u);
    ctx->pc = 0x2317DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2317D8u;
            // 0x2317dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2317E0u; }
        if (ctx->pc != 0x2317E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2317E0u; }
        if (ctx->pc != 0x2317E0u) { return; }
    }
    ctx->pc = 0x2317E0u;
label_2317e0:
    // 0x2317e0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2317e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2317e4:
    // 0x2317e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2317e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2317e8:
    // 0x2317e8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2317e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2317ec:
    // 0x2317ec: 0x320f809  jalr        $t9
label_2317f0:
    if (ctx->pc == 0x2317F0u) {
        ctx->pc = 0x2317F4u;
        goto label_2317f4;
    }
    ctx->pc = 0x2317ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2317F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2317F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2317F4u; }
            if (ctx->pc != 0x2317F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2317F4u;
label_2317f4:
    // 0x2317f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2317f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2317f8:
    // 0x2317f8: 0xa242008c  sb          $v0, 0x8C($s2)
    ctx->pc = 0x2317f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 2));
label_2317fc:
    // 0x2317fc: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x2317fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_231800:
    // 0x231800: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_231804:
    if (ctx->pc == 0x231804u) {
        ctx->pc = 0x231804u;
            // 0x231804: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231808u;
        goto label_231808;
    }
    ctx->pc = 0x231800u;
    {
        const bool branch_taken_0x231800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231800) {
            ctx->pc = 0x231804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231800u;
            // 0x231804: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23182Cu;
            goto label_23182c;
        }
    }
    ctx->pc = 0x231808u;
label_231808:
    // 0x231808: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x231808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_23180c:
    // 0x23180c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_231810:
    if (ctx->pc == 0x231810u) {
        ctx->pc = 0x231814u;
        goto label_231814;
    }
    ctx->pc = 0x23180Cu;
    {
        const bool branch_taken_0x23180c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23180c) {
            ctx->pc = 0x231828u;
            goto label_231828;
        }
    }
    ctx->pc = 0x231814u;
label_231814:
    // 0x231814: 0x8242008c  lb          $v0, 0x8C($s2)
    ctx->pc = 0x231814u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
label_231818:
    // 0x231818: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23181c:
    if (ctx->pc == 0x23181Cu) {
        ctx->pc = 0x231820u;
        goto label_231820;
    }
    ctx->pc = 0x231818u;
    {
        const bool branch_taken_0x231818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231818) {
            ctx->pc = 0x231828u;
            goto label_231828;
        }
    }
    ctx->pc = 0x231820u;
label_231820:
    // 0x231820: 0xc08d1c4  jal         func_234710
label_231824:
    if (ctx->pc == 0x231824u) {
        ctx->pc = 0x231824u;
            // 0x231824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231828u;
        goto label_231828;
    }
    ctx->pc = 0x231820u;
    SET_GPR_U32(ctx, 31, 0x231828u);
    ctx->pc = 0x231824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231820u;
            // 0x231824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231828u; }
        if (ctx->pc != 0x231828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231828u; }
        if (ctx->pc != 0x231828u) { return; }
    }
    ctx->pc = 0x231828u;
label_231828:
    // 0x231828: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23182c:
    // 0x23182c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23182cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_231830:
    // 0x231830: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x231830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_231834:
    // 0x231834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x231834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_231838:
    // 0x231838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x231838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23183c:
    // 0x23183c: 0x3e00008  jr          $ra
label_231840:
    if (ctx->pc == 0x231840u) {
        ctx->pc = 0x231840u;
            // 0x231840: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x231844u;
        goto label_231844;
    }
    ctx->pc = 0x23183Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23183Cu;
            // 0x231840: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x231844u;
label_231844:
    // 0x231844: 0x0  nop
    ctx->pc = 0x231844u;
    // NOP
label_231848:
    // 0x231848: 0x0  nop
    ctx->pc = 0x231848u;
    // NOP
label_23184c:
    // 0x23184c: 0x0  nop
    ctx->pc = 0x23184cu;
    // NOP
}
