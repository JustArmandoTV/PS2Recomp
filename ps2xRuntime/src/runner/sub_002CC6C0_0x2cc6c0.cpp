#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CC6C0
// Address: 0x2cc6c0 - 0x2cc820
void sub_002CC6C0_0x2cc6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC6C0_0x2cc6c0");
#endif

    switch (ctx->pc) {
        case 0x2cc6c0u: goto label_2cc6c0;
        case 0x2cc6c4u: goto label_2cc6c4;
        case 0x2cc6c8u: goto label_2cc6c8;
        case 0x2cc6ccu: goto label_2cc6cc;
        case 0x2cc6d0u: goto label_2cc6d0;
        case 0x2cc6d4u: goto label_2cc6d4;
        case 0x2cc6d8u: goto label_2cc6d8;
        case 0x2cc6dcu: goto label_2cc6dc;
        case 0x2cc6e0u: goto label_2cc6e0;
        case 0x2cc6e4u: goto label_2cc6e4;
        case 0x2cc6e8u: goto label_2cc6e8;
        case 0x2cc6ecu: goto label_2cc6ec;
        case 0x2cc6f0u: goto label_2cc6f0;
        case 0x2cc6f4u: goto label_2cc6f4;
        case 0x2cc6f8u: goto label_2cc6f8;
        case 0x2cc6fcu: goto label_2cc6fc;
        case 0x2cc700u: goto label_2cc700;
        case 0x2cc704u: goto label_2cc704;
        case 0x2cc708u: goto label_2cc708;
        case 0x2cc70cu: goto label_2cc70c;
        case 0x2cc710u: goto label_2cc710;
        case 0x2cc714u: goto label_2cc714;
        case 0x2cc718u: goto label_2cc718;
        case 0x2cc71cu: goto label_2cc71c;
        case 0x2cc720u: goto label_2cc720;
        case 0x2cc724u: goto label_2cc724;
        case 0x2cc728u: goto label_2cc728;
        case 0x2cc72cu: goto label_2cc72c;
        case 0x2cc730u: goto label_2cc730;
        case 0x2cc734u: goto label_2cc734;
        case 0x2cc738u: goto label_2cc738;
        case 0x2cc73cu: goto label_2cc73c;
        case 0x2cc740u: goto label_2cc740;
        case 0x2cc744u: goto label_2cc744;
        case 0x2cc748u: goto label_2cc748;
        case 0x2cc74cu: goto label_2cc74c;
        case 0x2cc750u: goto label_2cc750;
        case 0x2cc754u: goto label_2cc754;
        case 0x2cc758u: goto label_2cc758;
        case 0x2cc75cu: goto label_2cc75c;
        case 0x2cc760u: goto label_2cc760;
        case 0x2cc764u: goto label_2cc764;
        case 0x2cc768u: goto label_2cc768;
        case 0x2cc76cu: goto label_2cc76c;
        case 0x2cc770u: goto label_2cc770;
        case 0x2cc774u: goto label_2cc774;
        case 0x2cc778u: goto label_2cc778;
        case 0x2cc77cu: goto label_2cc77c;
        case 0x2cc780u: goto label_2cc780;
        case 0x2cc784u: goto label_2cc784;
        case 0x2cc788u: goto label_2cc788;
        case 0x2cc78cu: goto label_2cc78c;
        case 0x2cc790u: goto label_2cc790;
        case 0x2cc794u: goto label_2cc794;
        case 0x2cc798u: goto label_2cc798;
        case 0x2cc79cu: goto label_2cc79c;
        case 0x2cc7a0u: goto label_2cc7a0;
        case 0x2cc7a4u: goto label_2cc7a4;
        case 0x2cc7a8u: goto label_2cc7a8;
        case 0x2cc7acu: goto label_2cc7ac;
        case 0x2cc7b0u: goto label_2cc7b0;
        case 0x2cc7b4u: goto label_2cc7b4;
        case 0x2cc7b8u: goto label_2cc7b8;
        case 0x2cc7bcu: goto label_2cc7bc;
        case 0x2cc7c0u: goto label_2cc7c0;
        case 0x2cc7c4u: goto label_2cc7c4;
        case 0x2cc7c8u: goto label_2cc7c8;
        case 0x2cc7ccu: goto label_2cc7cc;
        case 0x2cc7d0u: goto label_2cc7d0;
        case 0x2cc7d4u: goto label_2cc7d4;
        case 0x2cc7d8u: goto label_2cc7d8;
        case 0x2cc7dcu: goto label_2cc7dc;
        case 0x2cc7e0u: goto label_2cc7e0;
        case 0x2cc7e4u: goto label_2cc7e4;
        case 0x2cc7e8u: goto label_2cc7e8;
        case 0x2cc7ecu: goto label_2cc7ec;
        case 0x2cc7f0u: goto label_2cc7f0;
        case 0x2cc7f4u: goto label_2cc7f4;
        case 0x2cc7f8u: goto label_2cc7f8;
        case 0x2cc7fcu: goto label_2cc7fc;
        case 0x2cc800u: goto label_2cc800;
        case 0x2cc804u: goto label_2cc804;
        case 0x2cc808u: goto label_2cc808;
        case 0x2cc80cu: goto label_2cc80c;
        case 0x2cc810u: goto label_2cc810;
        case 0x2cc814u: goto label_2cc814;
        case 0x2cc818u: goto label_2cc818;
        case 0x2cc81cu: goto label_2cc81c;
        default: break;
    }

    ctx->pc = 0x2cc6c0u;

label_2cc6c0:
    // 0x2cc6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cc6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cc6c4:
    // 0x2cc6c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cc6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cc6c8:
    // 0x2cc6c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cc6cc:
    // 0x2cc6cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cc6d0:
    // 0x2cc6d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cc6d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cc6d4:
    // 0x2cc6d4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2cc6d8:
    if (ctx->pc == 0x2CC6D8u) {
        ctx->pc = 0x2CC6D8u;
            // 0x2cc6d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC6DCu;
        goto label_2cc6dc;
    }
    ctx->pc = 0x2CC6D4u;
    {
        const bool branch_taken_0x2cc6d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC6D4u;
            // 0x2cc6d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6d4) {
            ctx->pc = 0x2CC808u;
            goto label_2cc808;
        }
    }
    ctx->pc = 0x2CC6DCu;
label_2cc6dc:
    // 0x2cc6dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cc6e0:
    // 0x2cc6e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cc6e4:
    // 0x2cc6e4: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x2cc6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_2cc6e8:
    // 0x2cc6e8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cc6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2cc6ec:
    // 0x2cc6ec: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x2cc6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_2cc6f0:
    // 0x2cc6f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2cc6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2cc6f4:
    // 0x2cc6f4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2cc6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2cc6f8:
    // 0x2cc6f8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2cc6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2cc6fc:
    // 0x2cc6fc: 0xc0407c0  jal         func_101F00
label_2cc700:
    if (ctx->pc == 0x2CC700u) {
        ctx->pc = 0x2CC700u;
            // 0x2cc700: 0x24a5c5c0  addiu       $a1, $a1, -0x3A40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952384));
        ctx->pc = 0x2CC704u;
        goto label_2cc704;
    }
    ctx->pc = 0x2CC6FCu;
    SET_GPR_U32(ctx, 31, 0x2CC704u);
    ctx->pc = 0x2CC700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC6FCu;
            // 0x2cc700: 0x24a5c5c0  addiu       $a1, $a1, -0x3A40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC704u; }
        if (ctx->pc != 0x2CC704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC704u; }
        if (ctx->pc != 0x2CC704u) { return; }
    }
    ctx->pc = 0x2CC704u;
label_2cc704:
    // 0x2cc704: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2cc704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2cc708:
    // 0x2cc708: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2cc70c:
    if (ctx->pc == 0x2CC70Cu) {
        ctx->pc = 0x2CC70Cu;
            // 0x2cc70c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2CC710u;
        goto label_2cc710;
    }
    ctx->pc = 0x2CC708u;
    {
        const bool branch_taken_0x2cc708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc708) {
            ctx->pc = 0x2CC70Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC708u;
            // 0x2cc70c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC71Cu;
            goto label_2cc71c;
        }
    }
    ctx->pc = 0x2CC710u;
label_2cc710:
    // 0x2cc710: 0xc07507c  jal         func_1D41F0
label_2cc714:
    if (ctx->pc == 0x2CC714u) {
        ctx->pc = 0x2CC714u;
            // 0x2cc714: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2CC718u;
        goto label_2cc718;
    }
    ctx->pc = 0x2CC710u;
    SET_GPR_U32(ctx, 31, 0x2CC718u);
    ctx->pc = 0x2CC714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC710u;
            // 0x2cc714: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC718u; }
        if (ctx->pc != 0x2CC718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC718u; }
        if (ctx->pc != 0x2CC718u) { return; }
    }
    ctx->pc = 0x2CC718u;
label_2cc718:
    // 0x2cc718: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2cc718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2cc71c:
    // 0x2cc71c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2cc720:
    if (ctx->pc == 0x2CC720u) {
        ctx->pc = 0x2CC720u;
            // 0x2cc720: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2CC724u;
        goto label_2cc724;
    }
    ctx->pc = 0x2CC71Cu;
    {
        const bool branch_taken_0x2cc71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc71c) {
            ctx->pc = 0x2CC720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC71Cu;
            // 0x2cc720: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC74Cu;
            goto label_2cc74c;
        }
    }
    ctx->pc = 0x2CC724u;
label_2cc724:
    // 0x2cc724: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cc728:
    if (ctx->pc == 0x2CC728u) {
        ctx->pc = 0x2CC72Cu;
        goto label_2cc72c;
    }
    ctx->pc = 0x2CC724u;
    {
        const bool branch_taken_0x2cc724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc724) {
            ctx->pc = 0x2CC748u;
            goto label_2cc748;
        }
    }
    ctx->pc = 0x2CC72Cu;
label_2cc72c:
    // 0x2cc72c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cc730:
    if (ctx->pc == 0x2CC730u) {
        ctx->pc = 0x2CC734u;
        goto label_2cc734;
    }
    ctx->pc = 0x2CC72Cu;
    {
        const bool branch_taken_0x2cc72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc72c) {
            ctx->pc = 0x2CC748u;
            goto label_2cc748;
        }
    }
    ctx->pc = 0x2CC734u;
label_2cc734:
    // 0x2cc734: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2cc734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2cc738:
    // 0x2cc738: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cc73c:
    if (ctx->pc == 0x2CC73Cu) {
        ctx->pc = 0x2CC740u;
        goto label_2cc740;
    }
    ctx->pc = 0x2CC738u;
    {
        const bool branch_taken_0x2cc738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc738) {
            ctx->pc = 0x2CC748u;
            goto label_2cc748;
        }
    }
    ctx->pc = 0x2CC740u;
label_2cc740:
    // 0x2cc740: 0xc0400a8  jal         func_1002A0
label_2cc744:
    if (ctx->pc == 0x2CC744u) {
        ctx->pc = 0x2CC748u;
        goto label_2cc748;
    }
    ctx->pc = 0x2CC740u;
    SET_GPR_U32(ctx, 31, 0x2CC748u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC748u; }
        if (ctx->pc != 0x2CC748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC748u; }
        if (ctx->pc != 0x2CC748u) { return; }
    }
    ctx->pc = 0x2CC748u;
label_2cc748:
    // 0x2cc748: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2cc748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2cc74c:
    // 0x2cc74c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2cc750:
    if (ctx->pc == 0x2CC750u) {
        ctx->pc = 0x2CC750u;
            // 0x2cc750: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2CC754u;
        goto label_2cc754;
    }
    ctx->pc = 0x2CC74Cu;
    {
        const bool branch_taken_0x2cc74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc74c) {
            ctx->pc = 0x2CC750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC74Cu;
            // 0x2cc750: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC77Cu;
            goto label_2cc77c;
        }
    }
    ctx->pc = 0x2CC754u;
label_2cc754:
    // 0x2cc754: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cc758:
    if (ctx->pc == 0x2CC758u) {
        ctx->pc = 0x2CC75Cu;
        goto label_2cc75c;
    }
    ctx->pc = 0x2CC754u;
    {
        const bool branch_taken_0x2cc754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc754) {
            ctx->pc = 0x2CC778u;
            goto label_2cc778;
        }
    }
    ctx->pc = 0x2CC75Cu;
label_2cc75c:
    // 0x2cc75c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cc760:
    if (ctx->pc == 0x2CC760u) {
        ctx->pc = 0x2CC764u;
        goto label_2cc764;
    }
    ctx->pc = 0x2CC75Cu;
    {
        const bool branch_taken_0x2cc75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc75c) {
            ctx->pc = 0x2CC778u;
            goto label_2cc778;
        }
    }
    ctx->pc = 0x2CC764u;
label_2cc764:
    // 0x2cc764: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2cc764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2cc768:
    // 0x2cc768: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cc76c:
    if (ctx->pc == 0x2CC76Cu) {
        ctx->pc = 0x2CC770u;
        goto label_2cc770;
    }
    ctx->pc = 0x2CC768u;
    {
        const bool branch_taken_0x2cc768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc768) {
            ctx->pc = 0x2CC778u;
            goto label_2cc778;
        }
    }
    ctx->pc = 0x2CC770u;
label_2cc770:
    // 0x2cc770: 0xc0400a8  jal         func_1002A0
label_2cc774:
    if (ctx->pc == 0x2CC774u) {
        ctx->pc = 0x2CC778u;
        goto label_2cc778;
    }
    ctx->pc = 0x2CC770u;
    SET_GPR_U32(ctx, 31, 0x2CC778u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC778u; }
        if (ctx->pc != 0x2CC778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC778u; }
        if (ctx->pc != 0x2CC778u) { return; }
    }
    ctx->pc = 0x2CC778u;
label_2cc778:
    // 0x2cc778: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2cc778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2cc77c:
    // 0x2cc77c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cc780:
    if (ctx->pc == 0x2CC780u) {
        ctx->pc = 0x2CC784u;
        goto label_2cc784;
    }
    ctx->pc = 0x2CC77Cu;
    {
        const bool branch_taken_0x2cc77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc77c) {
            ctx->pc = 0x2CC798u;
            goto label_2cc798;
        }
    }
    ctx->pc = 0x2CC784u;
label_2cc784:
    // 0x2cc784: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cc788:
    // 0x2cc788: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cc788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2cc78c:
    // 0x2cc78c: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x2cc78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
label_2cc790:
    // 0x2cc790: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2cc790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2cc794:
    // 0x2cc794: 0xac400e40  sw          $zero, 0xE40($v0)
    ctx->pc = 0x2cc794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3648), GPR_U32(ctx, 0));
label_2cc798:
    // 0x2cc798: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2cc79c:
    if (ctx->pc == 0x2CC79Cu) {
        ctx->pc = 0x2CC79Cu;
            // 0x2cc79c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CC7A0u;
        goto label_2cc7a0;
    }
    ctx->pc = 0x2CC798u;
    {
        const bool branch_taken_0x2cc798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc798) {
            ctx->pc = 0x2CC79Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC798u;
            // 0x2cc79c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC7F4u;
            goto label_2cc7f4;
        }
    }
    ctx->pc = 0x2CC7A0u;
label_2cc7a0:
    // 0x2cc7a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cc7a4:
    // 0x2cc7a4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2cc7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2cc7a8:
    // 0x2cc7a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cc7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cc7ac:
    // 0x2cc7ac: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2cc7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2cc7b0:
    // 0x2cc7b0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2cc7b4:
    if (ctx->pc == 0x2CC7B4u) {
        ctx->pc = 0x2CC7B4u;
            // 0x2cc7b4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2CC7B8u;
        goto label_2cc7b8;
    }
    ctx->pc = 0x2CC7B0u;
    {
        const bool branch_taken_0x2cc7b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc7b0) {
            ctx->pc = 0x2CC7B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC7B0u;
            // 0x2cc7b4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC7CCu;
            goto label_2cc7cc;
        }
    }
    ctx->pc = 0x2CC7B8u;
label_2cc7b8:
    // 0x2cc7b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cc7b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cc7bc:
    // 0x2cc7bc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cc7bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cc7c0:
    // 0x2cc7c0: 0x320f809  jalr        $t9
label_2cc7c4:
    if (ctx->pc == 0x2CC7C4u) {
        ctx->pc = 0x2CC7C4u;
            // 0x2cc7c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CC7C8u;
        goto label_2cc7c8;
    }
    ctx->pc = 0x2CC7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CC7C8u);
        ctx->pc = 0x2CC7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC7C0u;
            // 0x2cc7c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CC7C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CC7C8u; }
            if (ctx->pc != 0x2CC7C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2CC7C8u;
label_2cc7c8:
    // 0x2cc7c8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2cc7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2cc7cc:
    // 0x2cc7cc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2cc7d0:
    if (ctx->pc == 0x2CC7D0u) {
        ctx->pc = 0x2CC7D0u;
            // 0x2cc7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7D4u;
        goto label_2cc7d4;
    }
    ctx->pc = 0x2CC7CCu;
    {
        const bool branch_taken_0x2cc7cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc7cc) {
            ctx->pc = 0x2CC7D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC7CCu;
            // 0x2cc7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC7E8u;
            goto label_2cc7e8;
        }
    }
    ctx->pc = 0x2CC7D4u;
label_2cc7d4:
    // 0x2cc7d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cc7d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cc7d8:
    // 0x2cc7d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cc7d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cc7dc:
    // 0x2cc7dc: 0x320f809  jalr        $t9
label_2cc7e0:
    if (ctx->pc == 0x2CC7E0u) {
        ctx->pc = 0x2CC7E0u;
            // 0x2cc7e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CC7E4u;
        goto label_2cc7e4;
    }
    ctx->pc = 0x2CC7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CC7E4u);
        ctx->pc = 0x2CC7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC7DCu;
            // 0x2cc7e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CC7E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CC7E4u; }
            if (ctx->pc != 0x2CC7E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2CC7E4u;
label_2cc7e4:
    // 0x2cc7e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc7e8:
    // 0x2cc7e8: 0xc075bf8  jal         func_1D6FE0
label_2cc7ec:
    if (ctx->pc == 0x2CC7ECu) {
        ctx->pc = 0x2CC7ECu;
            // 0x2cc7ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7F0u;
        goto label_2cc7f0;
    }
    ctx->pc = 0x2CC7E8u;
    SET_GPR_U32(ctx, 31, 0x2CC7F0u);
    ctx->pc = 0x2CC7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC7E8u;
            // 0x2cc7ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC7F0u; }
        if (ctx->pc != 0x2CC7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC7F0u; }
        if (ctx->pc != 0x2CC7F0u) { return; }
    }
    ctx->pc = 0x2CC7F0u;
label_2cc7f0:
    // 0x2cc7f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cc7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cc7f4:
    // 0x2cc7f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cc7f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cc7f8:
    // 0x2cc7f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cc7fc:
    if (ctx->pc == 0x2CC7FCu) {
        ctx->pc = 0x2CC7FCu;
            // 0x2cc7fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC800u;
        goto label_2cc800;
    }
    ctx->pc = 0x2CC7F8u;
    {
        const bool branch_taken_0x2cc7f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cc7f8) {
            ctx->pc = 0x2CC7FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC7F8u;
            // 0x2cc7fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC80Cu;
            goto label_2cc80c;
        }
    }
    ctx->pc = 0x2CC800u;
label_2cc800:
    // 0x2cc800: 0xc0400a8  jal         func_1002A0
label_2cc804:
    if (ctx->pc == 0x2CC804u) {
        ctx->pc = 0x2CC804u;
            // 0x2cc804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC808u;
        goto label_2cc808;
    }
    ctx->pc = 0x2CC800u;
    SET_GPR_U32(ctx, 31, 0x2CC808u);
    ctx->pc = 0x2CC804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC800u;
            // 0x2cc804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC808u; }
        if (ctx->pc != 0x2CC808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC808u; }
        if (ctx->pc != 0x2CC808u) { return; }
    }
    ctx->pc = 0x2CC808u;
label_2cc808:
    // 0x2cc808: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cc808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc80c:
    // 0x2cc80c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cc80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cc810:
    // 0x2cc810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cc814:
    // 0x2cc814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc818:
    // 0x2cc818: 0x3e00008  jr          $ra
label_2cc81c:
    if (ctx->pc == 0x2CC81Cu) {
        ctx->pc = 0x2CC81Cu;
            // 0x2cc81c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CC820u;
        goto label_fallthrough_0x2cc818;
    }
    ctx->pc = 0x2CC818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC818u;
            // 0x2cc81c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cc818:
    ctx->pc = 0x2CC820u;
}
