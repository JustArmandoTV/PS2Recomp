#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116748
// Address: 0x116748 - 0x116848
void sub_00116748_0x116748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116748_0x116748");
#endif

    switch (ctx->pc) {
        case 0x116788u: goto label_116788;
        case 0x116794u: goto label_116794;
        case 0x1167a4u: goto label_1167a4;
        case 0x1167b8u: goto label_1167b8;
        case 0x1167d0u: goto label_1167d0;
        case 0x1167e4u: goto label_1167e4;
        case 0x116800u: goto label_116800;
        default: break;
    }

    ctx->pc = 0x116748u;

    // 0x116748: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x116748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11674c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11674cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x116750: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x116750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x116754: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x116754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x116758: 0x3c150011  lui         $s5, 0x11
    ctx->pc = 0x116758u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)17 << 16));
    // 0x11675c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11675cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x116760: 0x3c140011  lui         $s4, 0x11
    ctx->pc = 0x116760u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)17 << 16));
    // 0x116764: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x116764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x116768: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x116768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11676c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116770: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x116770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x116774: 0x2450eac0  addiu       $s0, $v0, -0x1540
    ctx->pc = 0x116774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961856));
    // 0x116778: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x116778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11677c: 0x8c44eac0  lw          $a0, -0x1540($v0)
    ctx->pc = 0x11677cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961856)));
    // 0x116780: 0xc045a12  jal         func_116848
    ctx->pc = 0x116780u;
    SET_GPR_U32(ctx, 31, 0x116788u);
    ctx->pc = 0x116784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116780u;
            // 0x116784: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116848u;
    if (runtime->hasFunction(0x116848u)) {
        auto targetFn = runtime->lookupFunction(0x116848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116788u; }
        if (ctx->pc != 0x116788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116788u; }
        if (ctx->pc != 0x116788u) { return; }
    }
    ctx->pc = 0x116788u;
label_116788:
    // 0x116788: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x116788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11678c: 0xc045a12  jal         func_116848
    ctx->pc = 0x11678Cu;
    SET_GPR_U32(ctx, 31, 0x116794u);
    ctx->pc = 0x116790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11678Cu;
            // 0x116790: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116848u;
    if (runtime->hasFunction(0x116848u)) {
        auto targetFn = runtime->lookupFunction(0x116848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116794u; }
        if (ctx->pc != 0x116794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116794u; }
        if (ctx->pc != 0x116794u) { return; }
    }
    ctx->pc = 0x116794u;
label_116794:
    // 0x116794: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x116794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x116798: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x116798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x11679c: 0xc0459c0  jal         func_116700
    ctx->pc = 0x11679Cu;
    SET_GPR_U32(ctx, 31, 0x1167A4u);
    ctx->pc = 0x1167A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11679Cu;
            // 0x1167a0: 0x26a666c0  addiu       $a2, $s5, 0x66C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 26304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116700u;
    if (runtime->hasFunction(0x116700u)) {
        auto targetFn = runtime->lookupFunction(0x116700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167A4u; }
        if (ctx->pc != 0x1167A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116700_0x116700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167A4u; }
        if (ctx->pc != 0x1167A4u) { return; }
    }
    ctx->pc = 0x1167A4u;
label_1167a4:
    // 0x1167a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1167a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1167a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1167ac: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1167acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1167b0: 0xc0459c0  jal         func_116700
    ctx->pc = 0x1167B0u;
    SET_GPR_U32(ctx, 31, 0x1167B8u);
    ctx->pc = 0x1167B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1167B0u;
            // 0x1167b4: 0x26866688  addiu       $a2, $s4, 0x6688 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 26248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116700u;
    if (runtime->hasFunction(0x116700u)) {
        auto targetFn = runtime->lookupFunction(0x116700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167B8u; }
        if (ctx->pc != 0x1167B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116700_0x116700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167B8u; }
        if (ctx->pc != 0x1167B8u) { return; }
    }
    ctx->pc = 0x1167B8u;
label_1167b8:
    // 0x1167b8: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x1167b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
    // 0x1167bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1167bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167c0: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x1167c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x1167c4: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1167C4u;
    {
        const bool branch_taken_0x1167c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1167C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1167C4u;
            // 0x1167c8: 0x3c16005d  lui         $s6, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167c4) {
            ctx->pc = 0x116818u;
            goto label_116818;
        }
    }
    ctx->pc = 0x1167CCu;
    // 0x1167cc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1167ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1167d0:
    // 0x1167d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1167D0u;
    {
        const bool branch_taken_0x1167d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1167D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1167D0u;
            // 0x1167d4: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167d0) {
            ctx->pc = 0x1167F0u;
            goto label_1167f0;
        }
    }
    ctx->pc = 0x1167D8u;
    // 0x1167d8: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1167d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1167dc: 0xc0459c0  jal         func_116700
    ctx->pc = 0x1167DCu;
    SET_GPR_U32(ctx, 31, 0x1167E4u);
    ctx->pc = 0x1167E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1167DCu;
            // 0x1167e0: 0x26a666c0  addiu       $a2, $s5, 0x66C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 26304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116700u;
    if (runtime->hasFunction(0x116700u)) {
        auto targetFn = runtime->lookupFunction(0x116700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167E4u; }
        if (ctx->pc != 0x1167E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116700_0x116700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167E4u; }
        if (ctx->pc != 0x1167E4u) { return; }
    }
    ctx->pc = 0x1167E4u;
label_1167e4:
    // 0x1167e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1167e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1167E8u;
    {
        const bool branch_taken_0x1167e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1167ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1167E8u;
            // 0x1167ec: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167e8) {
            ctx->pc = 0x116808u;
            goto label_116808;
        }
    }
    ctx->pc = 0x1167F0u;
label_1167f0:
    // 0x1167f0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1167f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1167f4: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1167f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1167f8: 0xc0459c0  jal         func_116700
    ctx->pc = 0x1167F8u;
    SET_GPR_U32(ctx, 31, 0x116800u);
    ctx->pc = 0x1167FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1167F8u;
            // 0x1167fc: 0x26866688  addiu       $a2, $s4, 0x6688 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 26248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116700u;
    if (runtime->hasFunction(0x116700u)) {
        auto targetFn = runtime->lookupFunction(0x116700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116800u; }
        if (ctx->pc != 0x116800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116700_0x116700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116800u; }
        if (ctx->pc != 0x116800u) { return; }
    }
    ctx->pc = 0x116800u;
label_116800:
    // 0x116800: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116804: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x116804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_116808:
    // 0x116808: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x116808u;
    {
        const bool branch_taken_0x116808 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x11680Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116808u;
            // 0x11680c: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116808) {
            ctx->pc = 0x1167D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1167d0;
        }
    }
    ctx->pc = 0x116810u;
    // 0x116810: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x116810u;
    {
        const bool branch_taken_0x116810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116810u;
            // 0x116814: 0xaed1eab8  sw          $s1, -0x1548($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294961848), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116810) {
            ctx->pc = 0x11681Cu;
            goto label_11681c;
        }
    }
    ctx->pc = 0x116818u;
label_116818:
    // 0x116818: 0xaed1eab8  sw          $s1, -0x1548($s6)
    ctx->pc = 0x116818u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294961848), GPR_U32(ctx, 17));
label_11681c:
    // 0x11681c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11681cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116820: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x116820u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116824: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x116824u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116828: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x116828u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11682c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11682cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116830: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x116830u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116834: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x116834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11683c: 0x3e00008  jr          $ra
    ctx->pc = 0x11683Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11683Cu;
            // 0x116840: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116844u;
    // 0x116844: 0x0  nop
    ctx->pc = 0x116844u;
    // NOP
}
