#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2710
// Address: 0x2c2710 - 0x2c2824
void sub_002C2710_0x2c2710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2710_0x2c2710");
#endif

    switch (ctx->pc) {
        case 0x2c2710u: goto label_2c2710;
        case 0x2c2714u: goto label_2c2714;
        case 0x2c2718u: goto label_2c2718;
        case 0x2c271cu: goto label_2c271c;
        case 0x2c2720u: goto label_2c2720;
        case 0x2c2724u: goto label_2c2724;
        case 0x2c2728u: goto label_2c2728;
        case 0x2c272cu: goto label_2c272c;
        case 0x2c2730u: goto label_2c2730;
        case 0x2c2734u: goto label_2c2734;
        case 0x2c2738u: goto label_2c2738;
        case 0x2c273cu: goto label_2c273c;
        case 0x2c2740u: goto label_2c2740;
        case 0x2c2744u: goto label_2c2744;
        case 0x2c2748u: goto label_2c2748;
        case 0x2c274cu: goto label_2c274c;
        case 0x2c2750u: goto label_2c2750;
        case 0x2c2754u: goto label_2c2754;
        case 0x2c2758u: goto label_2c2758;
        case 0x2c275cu: goto label_2c275c;
        case 0x2c2760u: goto label_2c2760;
        case 0x2c2764u: goto label_2c2764;
        case 0x2c2768u: goto label_2c2768;
        case 0x2c276cu: goto label_2c276c;
        case 0x2c2770u: goto label_2c2770;
        case 0x2c2774u: goto label_2c2774;
        case 0x2c2778u: goto label_2c2778;
        case 0x2c277cu: goto label_2c277c;
        case 0x2c2780u: goto label_2c2780;
        case 0x2c2784u: goto label_2c2784;
        case 0x2c2788u: goto label_2c2788;
        case 0x2c278cu: goto label_2c278c;
        case 0x2c2790u: goto label_2c2790;
        case 0x2c2794u: goto label_2c2794;
        case 0x2c2798u: goto label_2c2798;
        case 0x2c279cu: goto label_2c279c;
        case 0x2c27a0u: goto label_2c27a0;
        case 0x2c27a4u: goto label_2c27a4;
        case 0x2c27a8u: goto label_2c27a8;
        case 0x2c27acu: goto label_2c27ac;
        case 0x2c27b0u: goto label_2c27b0;
        case 0x2c27b4u: goto label_2c27b4;
        case 0x2c27b8u: goto label_2c27b8;
        case 0x2c27bcu: goto label_2c27bc;
        case 0x2c27c0u: goto label_2c27c0;
        case 0x2c27c4u: goto label_2c27c4;
        case 0x2c27c8u: goto label_2c27c8;
        case 0x2c27ccu: goto label_2c27cc;
        case 0x2c27d0u: goto label_2c27d0;
        case 0x2c27d4u: goto label_2c27d4;
        case 0x2c27d8u: goto label_2c27d8;
        case 0x2c27dcu: goto label_2c27dc;
        case 0x2c27e0u: goto label_2c27e0;
        case 0x2c27e4u: goto label_2c27e4;
        case 0x2c27e8u: goto label_2c27e8;
        case 0x2c27ecu: goto label_2c27ec;
        case 0x2c27f0u: goto label_2c27f0;
        case 0x2c27f4u: goto label_2c27f4;
        case 0x2c27f8u: goto label_2c27f8;
        case 0x2c27fcu: goto label_2c27fc;
        case 0x2c2800u: goto label_2c2800;
        case 0x2c2804u: goto label_2c2804;
        case 0x2c2808u: goto label_2c2808;
        case 0x2c280cu: goto label_2c280c;
        case 0x2c2810u: goto label_2c2810;
        case 0x2c2814u: goto label_2c2814;
        case 0x2c2818u: goto label_2c2818;
        case 0x2c281cu: goto label_2c281c;
        case 0x2c2820u: goto label_2c2820;
        default: break;
    }

    ctx->pc = 0x2c2710u;

label_2c2710:
    // 0x2c2710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c2714:
    // 0x2c2714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c2714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c2718:
    // 0x2c2718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c271c:
    // 0x2c271c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c271cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c2720:
    // 0x2c2720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c2720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c2724:
    // 0x2c2724: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2c2728:
    if (ctx->pc == 0x2C2728u) {
        ctx->pc = 0x2C2728u;
            // 0x2c2728: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C272Cu;
        goto label_2c272c;
    }
    ctx->pc = 0x2C2724u;
    {
        const bool branch_taken_0x2c2724 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2724u;
            // 0x2c2728: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2724) {
            ctx->pc = 0x2C2858u;
            return;
        }
    }
    ctx->pc = 0x2C272Cu;
label_2c272c:
    // 0x2c272c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c272cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c2730:
    // 0x2c2730: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c2734:
    // 0x2c2734: 0x24631480  addiu       $v1, $v1, 0x1480
    ctx->pc = 0x2c2734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5248));
label_2c2738:
    // 0x2c2738: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c2738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c273c:
    // 0x2c273c: 0x244214b8  addiu       $v0, $v0, 0x14B8
    ctx->pc = 0x2c273cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5304));
label_2c2740:
    // 0x2c2740: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c2740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c2744:
    // 0x2c2744: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c2744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c2748:
    // 0x2c2748: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c2748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c274c:
    // 0x2c274c: 0xc0407c0  jal         func_101F00
label_2c2750:
    if (ctx->pc == 0x2C2750u) {
        ctx->pc = 0x2C2750u;
            // 0x2c2750: 0x24a525d0  addiu       $a1, $a1, 0x25D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9680));
        ctx->pc = 0x2C2754u;
        goto label_2c2754;
    }
    ctx->pc = 0x2C274Cu;
    SET_GPR_U32(ctx, 31, 0x2C2754u);
    ctx->pc = 0x2C2750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C274Cu;
            // 0x2c2750: 0x24a525d0  addiu       $a1, $a1, 0x25D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2754u; }
        if (ctx->pc != 0x2C2754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2754u; }
        if (ctx->pc != 0x2C2754u) { return; }
    }
    ctx->pc = 0x2C2754u;
label_2c2754:
    // 0x2c2754: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c2754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c2758:
    // 0x2c2758: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2c275c:
    if (ctx->pc == 0x2C275Cu) {
        ctx->pc = 0x2C275Cu;
            // 0x2c275c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C2760u;
        goto label_2c2760;
    }
    ctx->pc = 0x2C2758u;
    {
        const bool branch_taken_0x2c2758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2758) {
            ctx->pc = 0x2C275Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2758u;
            // 0x2c275c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C276Cu;
            goto label_2c276c;
        }
    }
    ctx->pc = 0x2C2760u;
label_2c2760:
    // 0x2c2760: 0xc07507c  jal         func_1D41F0
label_2c2764:
    if (ctx->pc == 0x2C2764u) {
        ctx->pc = 0x2C2764u;
            // 0x2c2764: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2C2768u;
        goto label_2c2768;
    }
    ctx->pc = 0x2C2760u;
    SET_GPR_U32(ctx, 31, 0x2C2768u);
    ctx->pc = 0x2C2764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2760u;
            // 0x2c2764: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2768u; }
        if (ctx->pc != 0x2C2768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2768u; }
        if (ctx->pc != 0x2C2768u) { return; }
    }
    ctx->pc = 0x2C2768u;
label_2c2768:
    // 0x2c2768: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c2768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c276c:
    // 0x2c276c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c2770:
    if (ctx->pc == 0x2C2770u) {
        ctx->pc = 0x2C2770u;
            // 0x2c2770: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C2774u;
        goto label_2c2774;
    }
    ctx->pc = 0x2C276Cu;
    {
        const bool branch_taken_0x2c276c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c276c) {
            ctx->pc = 0x2C2770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C276Cu;
            // 0x2c2770: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C279Cu;
            goto label_2c279c;
        }
    }
    ctx->pc = 0x2C2774u;
label_2c2774:
    // 0x2c2774: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c2778:
    if (ctx->pc == 0x2C2778u) {
        ctx->pc = 0x2C277Cu;
        goto label_2c277c;
    }
    ctx->pc = 0x2C2774u;
    {
        const bool branch_taken_0x2c2774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2774) {
            ctx->pc = 0x2C2798u;
            goto label_2c2798;
        }
    }
    ctx->pc = 0x2C277Cu;
label_2c277c:
    // 0x2c277c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c2780:
    if (ctx->pc == 0x2C2780u) {
        ctx->pc = 0x2C2784u;
        goto label_2c2784;
    }
    ctx->pc = 0x2C277Cu;
    {
        const bool branch_taken_0x2c277c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c277c) {
            ctx->pc = 0x2C2798u;
            goto label_2c2798;
        }
    }
    ctx->pc = 0x2C2784u;
label_2c2784:
    // 0x2c2784: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c2784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c2788:
    // 0x2c2788: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c278c:
    if (ctx->pc == 0x2C278Cu) {
        ctx->pc = 0x2C2790u;
        goto label_2c2790;
    }
    ctx->pc = 0x2C2788u;
    {
        const bool branch_taken_0x2c2788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2788) {
            ctx->pc = 0x2C2798u;
            goto label_2c2798;
        }
    }
    ctx->pc = 0x2C2790u;
label_2c2790:
    // 0x2c2790: 0xc0400a8  jal         func_1002A0
label_2c2794:
    if (ctx->pc == 0x2C2794u) {
        ctx->pc = 0x2C2798u;
        goto label_2c2798;
    }
    ctx->pc = 0x2C2790u;
    SET_GPR_U32(ctx, 31, 0x2C2798u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2798u; }
        if (ctx->pc != 0x2C2798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2798u; }
        if (ctx->pc != 0x2C2798u) { return; }
    }
    ctx->pc = 0x2C2798u;
label_2c2798:
    // 0x2c2798: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c2798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c279c:
    // 0x2c279c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c27a0:
    if (ctx->pc == 0x2C27A0u) {
        ctx->pc = 0x2C27A0u;
            // 0x2c27a0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C27A4u;
        goto label_2c27a4;
    }
    ctx->pc = 0x2C279Cu;
    {
        const bool branch_taken_0x2c279c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c279c) {
            ctx->pc = 0x2C27A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C279Cu;
            // 0x2c27a0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C27CCu;
            goto label_2c27cc;
        }
    }
    ctx->pc = 0x2C27A4u;
label_2c27a4:
    // 0x2c27a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c27a8:
    if (ctx->pc == 0x2C27A8u) {
        ctx->pc = 0x2C27ACu;
        goto label_2c27ac;
    }
    ctx->pc = 0x2C27A4u;
    {
        const bool branch_taken_0x2c27a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c27a4) {
            ctx->pc = 0x2C27C8u;
            goto label_2c27c8;
        }
    }
    ctx->pc = 0x2C27ACu;
label_2c27ac:
    // 0x2c27ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c27b0:
    if (ctx->pc == 0x2C27B0u) {
        ctx->pc = 0x2C27B4u;
        goto label_2c27b4;
    }
    ctx->pc = 0x2C27ACu;
    {
        const bool branch_taken_0x2c27ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c27ac) {
            ctx->pc = 0x2C27C8u;
            goto label_2c27c8;
        }
    }
    ctx->pc = 0x2C27B4u;
label_2c27b4:
    // 0x2c27b4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c27b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c27b8:
    // 0x2c27b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c27bc:
    if (ctx->pc == 0x2C27BCu) {
        ctx->pc = 0x2C27C0u;
        goto label_2c27c0;
    }
    ctx->pc = 0x2C27B8u;
    {
        const bool branch_taken_0x2c27b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c27b8) {
            ctx->pc = 0x2C27C8u;
            goto label_2c27c8;
        }
    }
    ctx->pc = 0x2C27C0u;
label_2c27c0:
    // 0x2c27c0: 0xc0400a8  jal         func_1002A0
label_2c27c4:
    if (ctx->pc == 0x2C27C4u) {
        ctx->pc = 0x2C27C8u;
        goto label_2c27c8;
    }
    ctx->pc = 0x2C27C0u;
    SET_GPR_U32(ctx, 31, 0x2C27C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C27C8u; }
        if (ctx->pc != 0x2C27C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C27C8u; }
        if (ctx->pc != 0x2C27C8u) { return; }
    }
    ctx->pc = 0x2C27C8u;
label_2c27c8:
    // 0x2c27c8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c27c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c27cc:
    // 0x2c27cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c27d0:
    if (ctx->pc == 0x2C27D0u) {
        ctx->pc = 0x2C27D4u;
        goto label_2c27d4;
    }
    ctx->pc = 0x2C27CCu;
    {
        const bool branch_taken_0x2c27cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c27cc) {
            ctx->pc = 0x2C27E8u;
            goto label_2c27e8;
        }
    }
    ctx->pc = 0x2C27D4u;
label_2c27d4:
    // 0x2c27d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c27d8:
    // 0x2c27d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c27dc:
    // 0x2c27dc: 0x24631470  addiu       $v1, $v1, 0x1470
    ctx->pc = 0x2c27dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5232));
label_2c27e0:
    // 0x2c27e0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c27e4:
    // 0x2c27e4: 0xac400e28  sw          $zero, 0xE28($v0)
    ctx->pc = 0x2c27e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3624), GPR_U32(ctx, 0));
label_2c27e8:
    // 0x2c27e8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c27ec:
    if (ctx->pc == 0x2C27ECu) {
        ctx->pc = 0x2C27ECu;
            // 0x2c27ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C27F0u;
        goto label_2c27f0;
    }
    ctx->pc = 0x2C27E8u;
    {
        const bool branch_taken_0x2c27e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c27e8) {
            ctx->pc = 0x2C27ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C27E8u;
            // 0x2c27ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2844u;
            return;
        }
    }
    ctx->pc = 0x2C27F0u;
label_2c27f0:
    // 0x2c27f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c27f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c27f4:
    // 0x2c27f4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c27f8:
    // 0x2c27f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c27f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c27fc:
    // 0x2c27fc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c27fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c2800:
    // 0x2c2800: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c2804:
    if (ctx->pc == 0x2C2804u) {
        ctx->pc = 0x2C2804u;
            // 0x2c2804: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C2808u;
        goto label_2c2808;
    }
    ctx->pc = 0x2C2800u;
    {
        const bool branch_taken_0x2c2800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2800) {
            ctx->pc = 0x2C2804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2800u;
            // 0x2c2804: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C281Cu;
            goto label_2c281c;
        }
    }
    ctx->pc = 0x2C2808u;
label_2c2808:
    // 0x2c2808: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c2808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c280c:
    // 0x2c280c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c280cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c2810:
    // 0x2c2810: 0x320f809  jalr        $t9
label_2c2814:
    if (ctx->pc == 0x2C2814u) {
        ctx->pc = 0x2C2814u;
            // 0x2c2814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C2818u;
        goto label_2c2818;
    }
    ctx->pc = 0x2C2810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C2818u);
        ctx->pc = 0x2C2814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2810u;
            // 0x2c2814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C2818u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C2818u; }
            if (ctx->pc != 0x2C2818u) { return; }
        }
        }
    }
    ctx->pc = 0x2C2818u;
label_2c2818:
    // 0x2c2818: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c2818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c281c:
    // 0x2c281c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c2820:
    if (ctx->pc == 0x2C2820u) {
        ctx->pc = 0x2C2820u;
            // 0x2c2820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C2824u;
        goto label_fallthrough_0x2c281c;
    }
    ctx->pc = 0x2C281Cu;
    {
        const bool branch_taken_0x2c281c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c281c) {
            ctx->pc = 0x2C2820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C281Cu;
            // 0x2c2820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2838u;
            return;
        }
    }
label_fallthrough_0x2c281c:
    ctx->pc = 0x2C2824u;
}
