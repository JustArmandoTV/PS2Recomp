#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152610
// Address: 0x152610 - 0x152750
void sub_00152610_0x152610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152610_0x152610");
#endif

    switch (ctx->pc) {
        case 0x15267cu: goto label_15267c;
        case 0x15268cu: goto label_15268c;
        case 0x15269cu: goto label_15269c;
        case 0x152710u: goto label_152710;
        case 0x152720u: goto label_152720;
        case 0x152730u: goto label_152730;
        case 0x152740u: goto label_152740;
        default: break;
    }

    ctx->pc = 0x152610u;

    // 0x152610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152614: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x152614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x152618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15261c: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x15261cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x152620: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x152620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152624: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x152624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x152628: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x152628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x15262c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x15262Cu;
    {
        const bool branch_taken_0x15262c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15262Cu;
            // 0x152630: 0x8ca7001c  lw          $a3, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15262c) {
            ctx->pc = 0x1526ACu;
            goto label_1526ac;
        }
    }
    ctx->pc = 0x152634u;
    // 0x152634: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x152634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x152638: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x152638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15263c: 0x30a50e77  andi        $a1, $a1, 0xE77
    ctx->pc = 0x15263cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3703);
    // 0x152640: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x152640u;
    {
        const bool branch_taken_0x152640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x152644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152640u;
            // 0x152644: 0x2506004c  addiu       $a2, $t0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152640) {
            ctx->pc = 0x152694u;
            goto label_152694;
        }
    }
    ctx->pc = 0x152648u;
    // 0x152648: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x152648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15264c: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15264Cu;
    {
        const bool branch_taken_0x15264c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15264c) {
            ctx->pc = 0x152650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15264Cu;
            // 0x152650: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152684u;
            goto label_152684;
        }
    }
    ctx->pc = 0x152654u;
    // 0x152654: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x152654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152658: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x152658u;
    {
        const bool branch_taken_0x152658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x152658) {
            ctx->pc = 0x15265Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152658u;
            // 0x15265c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152674u;
            goto label_152674;
        }
    }
    ctx->pc = 0x152660u;
    // 0x152660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152664: 0x50a30037  beql        $a1, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x152664u;
    {
        const bool branch_taken_0x152664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x152664) {
            ctx->pc = 0x152668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152664u;
            // 0x152668: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152744u;
            goto label_152744;
        }
    }
    ctx->pc = 0x15266Cu;
    // 0x15266c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x15266Cu;
    {
        const bool branch_taken_0x15266c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15266c) {
            ctx->pc = 0x152740u;
            goto label_152740;
        }
    }
    ctx->pc = 0x152674u;
label_152674:
    // 0x152674: 0xc04e0b0  jal         func_1382C0
    ctx->pc = 0x152674u;
    SET_GPR_U32(ctx, 31, 0x15267Cu);
    ctx->pc = 0x1382C0u;
    if (runtime->hasFunction(0x1382C0u)) {
        auto targetFn = runtime->lookupFunction(0x1382C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15267Cu; }
        if (ctx->pc != 0x15267Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001382C0_0x1382c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15267Cu; }
        if (ctx->pc != 0x15267Cu) { return; }
    }
    ctx->pc = 0x15267Cu;
label_15267c:
    // 0x15267c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x15267Cu;
    {
        const bool branch_taken_0x15267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15267c) {
            ctx->pc = 0x152740u;
            goto label_152740;
        }
    }
    ctx->pc = 0x152684u;
label_152684:
    // 0x152684: 0xc04e094  jal         func_138250
    ctx->pc = 0x152684u;
    SET_GPR_U32(ctx, 31, 0x15268Cu);
    ctx->pc = 0x138250u;
    if (runtime->hasFunction(0x138250u)) {
        auto targetFn = runtime->lookupFunction(0x138250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15268Cu; }
        if (ctx->pc != 0x15268Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138250_0x138250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15268Cu; }
        if (ctx->pc != 0x15268Cu) { return; }
    }
    ctx->pc = 0x15268Cu;
label_15268c:
    // 0x15268c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x15268Cu;
    {
        const bool branch_taken_0x15268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15268c) {
            ctx->pc = 0x152740u;
            goto label_152740;
        }
    }
    ctx->pc = 0x152694u;
label_152694:
    // 0x152694: 0xc04e108  jal         func_138420
    ctx->pc = 0x152694u;
    SET_GPR_U32(ctx, 31, 0x15269Cu);
    ctx->pc = 0x152698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152694u;
            // 0x152698: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138420u;
    if (runtime->hasFunction(0x138420u)) {
        auto targetFn = runtime->lookupFunction(0x138420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15269Cu; }
        if (ctx->pc != 0x15269Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138420_0x138420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15269Cu; }
        if (ctx->pc != 0x15269Cu) { return; }
    }
    ctx->pc = 0x15269Cu;
label_15269c:
    // 0x15269c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x15269Cu;
    {
        const bool branch_taken_0x15269c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15269c) {
            ctx->pc = 0x152740u;
            goto label_152740;
        }
    }
    ctx->pc = 0x1526A4u;
    // 0x1526a4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1526A4u;
    {
        const bool branch_taken_0x1526a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1526a4) {
            ctx->pc = 0x152740u;
            goto label_152740;
        }
    }
    ctx->pc = 0x1526ACu;
label_1526ac:
    // 0x1526ac: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1526acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1526b0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1526b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1526b4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1526B4u;
    {
        const bool branch_taken_0x1526b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1526b4) {
            ctx->pc = 0x152740u;
            goto label_152740;
        }
    }
    ctx->pc = 0x1526BCu;
    // 0x1526bc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1526bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1526c0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1526c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1526c4: 0x30a50e77  andi        $a1, $a1, 0xE77
    ctx->pc = 0x1526c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3703);
    // 0x1526c8: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1526C8u;
    {
        const bool branch_taken_0x1526c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1526CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1526C8u;
            // 0x1526cc: 0x2506004c  addiu       $a2, $t0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526c8) {
            ctx->pc = 0x152738u;
            goto label_152738;
        }
    }
    ctx->pc = 0x1526D0u;
    // 0x1526d0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1526d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1526d4: 0x50a30014  beql        $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1526D4u;
    {
        const bool branch_taken_0x1526d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1526d4) {
            ctx->pc = 0x1526D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1526D4u;
            // 0x1526d8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152728u;
            goto label_152728;
        }
    }
    ctx->pc = 0x1526DCu;
    // 0x1526dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1526dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1526e0: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1526E0u;
    {
        const bool branch_taken_0x1526e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1526e0) {
            ctx->pc = 0x1526E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1526E0u;
            // 0x1526e4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152718u;
            goto label_152718;
        }
    }
    ctx->pc = 0x1526E8u;
    // 0x1526e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1526e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1526ec: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1526ECu;
    {
        const bool branch_taken_0x1526ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1526ec) {
            ctx->pc = 0x1526F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1526ECu;
            // 0x1526f0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152708u;
            goto label_152708;
        }
    }
    ctx->pc = 0x1526F4u;
    // 0x1526f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1526f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1526f8: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1526F8u;
    {
        const bool branch_taken_0x1526f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1526f8) {
            ctx->pc = 0x152740u;
            goto label_152740;
        }
    }
    ctx->pc = 0x152700u;
    // 0x152700: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x152700u;
    {
        const bool branch_taken_0x152700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152700) {
            ctx->pc = 0x152740u;
            goto label_152740;
        }
    }
    ctx->pc = 0x152708u;
label_152708:
    // 0x152708: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x152708u;
    SET_GPR_U32(ctx, 31, 0x152710u);
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152710u; }
        if (ctx->pc != 0x152710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152710u; }
        if (ctx->pc != 0x152710u) { return; }
    }
    ctx->pc = 0x152710u;
label_152710:
    // 0x152710: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x152710u;
    {
        const bool branch_taken_0x152710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152710) {
            ctx->pc = 0x152740u;
            goto label_152740;
        }
    }
    ctx->pc = 0x152718u;
label_152718:
    // 0x152718: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x152718u;
    SET_GPR_U32(ctx, 31, 0x152720u);
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152720u; }
        if (ctx->pc != 0x152720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152720u; }
        if (ctx->pc != 0x152720u) { return; }
    }
    ctx->pc = 0x152720u;
label_152720:
    // 0x152720: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152720u;
    {
        const bool branch_taken_0x152720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152720) {
            ctx->pc = 0x152740u;
            goto label_152740;
        }
    }
    ctx->pc = 0x152728u;
label_152728:
    // 0x152728: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x152728u;
    SET_GPR_U32(ctx, 31, 0x152730u);
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152730u; }
        if (ctx->pc != 0x152730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152730u; }
        if (ctx->pc != 0x152730u) { return; }
    }
    ctx->pc = 0x152730u;
label_152730:
    // 0x152730: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x152730u;
    {
        const bool branch_taken_0x152730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152730) {
            ctx->pc = 0x152740u;
            goto label_152740;
        }
    }
    ctx->pc = 0x152738u;
label_152738:
    // 0x152738: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x152738u;
    SET_GPR_U32(ctx, 31, 0x152740u);
    ctx->pc = 0x15273Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152738u;
            // 0x15273c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152740u; }
        if (ctx->pc != 0x152740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152740u; }
        if (ctx->pc != 0x152740u) { return; }
    }
    ctx->pc = 0x152740u;
label_152740:
    // 0x152740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_152744:
    // 0x152744: 0x3e00008  jr          $ra
    ctx->pc = 0x152744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152744u;
            // 0x152748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15274Cu;
    // 0x15274c: 0x0  nop
    ctx->pc = 0x15274cu;
    // NOP
}
