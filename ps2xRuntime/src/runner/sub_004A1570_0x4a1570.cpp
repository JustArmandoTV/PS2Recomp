#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A1570
// Address: 0x4a1570 - 0x4a1800
void sub_004A1570_0x4a1570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1570_0x4a1570");
#endif

    switch (ctx->pc) {
        case 0x4a15a0u: goto label_4a15a0;
        case 0x4a15f4u: goto label_4a15f4;
        case 0x4a1678u: goto label_4a1678;
        case 0x4a1698u: goto label_4a1698;
        case 0x4a16acu: goto label_4a16ac;
        case 0x4a16b8u: goto label_4a16b8;
        case 0x4a16bcu: goto label_4a16bc;
        case 0x4a16e0u: goto label_4a16e0;
        case 0x4a1724u: goto label_4a1724;
        case 0x4a172cu: goto label_4a172c;
        case 0x4a174cu: goto label_4a174c;
        case 0x4a1754u: goto label_4a1754;
        case 0x4a1798u: goto label_4a1798;
        case 0x4a17a0u: goto label_4a17a0;
        default: break;
    }

    ctx->pc = 0x4a1570u;

    // 0x4a1570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a1570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a1574: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4a1574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a1578: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a1578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4a157c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a157cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4a1580: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a1580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a1584: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a1584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a1588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a158c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a158cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a1590: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a1590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1594: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4a1594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1598: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4A1598u;
    SET_GPR_U32(ctx, 31, 0x4A15A0u);
    ctx->pc = 0x4A159Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1598u;
            // 0x4a159c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A15A0u; }
        if (ctx->pc != 0x4A15A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A15A0u; }
        if (ctx->pc != 0x4A15A0u) { return; }
    }
    ctx->pc = 0x4A15A0u;
label_4a15a0:
    // 0x4a15a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4a15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4a15a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4a15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4a15a8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4a15a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4a15ac: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4a15acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4a15b0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4a15b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4a15b4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4a15b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4a15b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4a15b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4a15bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4a15bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a15c0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4a15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x4a15c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4a15c8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4a15c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x4a15cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4a15ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4a15d0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4a15d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x4a15d4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4a15d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4a15d8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4a15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4a15dc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4a15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x4a15e0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4a15e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x4a15e4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4a15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4a15e8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4a15e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4a15ec: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x4A15ECu;
    SET_GPR_U32(ctx, 31, 0x4A15F4u);
    ctx->pc = 0x4A15F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A15ECu;
            // 0x4a15f0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A15F4u; }
        if (ctx->pc != 0x4A15F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A15F4u; }
        if (ctx->pc != 0x4A15F4u) { return; }
    }
    ctx->pc = 0x4A15F4u;
label_4a15f4:
    // 0x4a15f4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a15f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4a15f8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4a15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4a15fc: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x4a15fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x4a1600: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4a1600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4a1604: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4a1604u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4a1608: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a1608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4a160c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4a160cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4a1610: 0xac447c20  sw          $a0, 0x7C20($v0)
    ctx->pc = 0x4a1610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31776), GPR_U32(ctx, 4));
    // 0x4a1614: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x4a1614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x4a1618: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a1618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4a161c: 0x24420318  addiu       $v0, $v0, 0x318
    ctx->pc = 0x4a161cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 792));
    // 0x4a1620: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4a1620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4a1624: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4a1624u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4a1628: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4a1628u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4a162c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4a162cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4a1630: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4a1630u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4a1634: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4a1634u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4a1638: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4a1638u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4a163c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4a163cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4a1640: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4a1640u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4a1644: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4a1644u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4a1648: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4a1648u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4a164c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4a164cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4a1650: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4a1650u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4a1654: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4A1654u;
    {
        const bool branch_taken_0x4a1654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1654) {
            ctx->pc = 0x4A16F0u;
            goto label_4a16f0;
        }
    }
    ctx->pc = 0x4A165Cu;
    // 0x4a165c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4a165cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4a1660: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x4a1660u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4a1664: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4a1664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a1668: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4a1668u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a166c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4a166cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4a1670: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4A1670u;
    SET_GPR_U32(ctx, 31, 0x4A1678u);
    ctx->pc = 0x4A1674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1670u;
            // 0x4a1674: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1678u; }
        if (ctx->pc != 0x4A1678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1678u; }
        if (ctx->pc != 0x4A1678u) { return; }
    }
    ctx->pc = 0x4A1678u;
label_4a1678:
    // 0x4a1678: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x4a1678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x4a167c: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x4a167cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x4a1680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a1680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1684: 0x24a51710  addiu       $a1, $a1, 0x1710
    ctx->pc = 0x4a1684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5904));
    // 0x4a1688: 0x24c60d50  addiu       $a2, $a2, 0xD50
    ctx->pc = 0x4a1688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3408));
    // 0x4a168c: 0x24070150  addiu       $a3, $zero, 0x150
    ctx->pc = 0x4a168cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x4a1690: 0xc040840  jal         func_102100
    ctx->pc = 0x4A1690u;
    SET_GPR_U32(ctx, 31, 0x4A1698u);
    ctx->pc = 0x4A1694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1690u;
            // 0x4a1694: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1698u; }
        if (ctx->pc != 0x4A1698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1698u; }
        if (ctx->pc != 0x4A1698u) { return; }
    }
    ctx->pc = 0x4A1698u;
label_4a1698:
    // 0x4a1698: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4a1698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x4a169c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a169cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a16a0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4a16a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x4a16a4: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4A16A4u;
    SET_GPR_U32(ctx, 31, 0x4A16ACu);
    ctx->pc = 0x4A16A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A16A4u;
            // 0x4a16a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A16ACu; }
        if (ctx->pc != 0x4A16ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A16ACu; }
        if (ctx->pc != 0x4A16ACu) { return; }
    }
    ctx->pc = 0x4A16ACu;
label_4a16ac:
    // 0x4a16ac: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4a16acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4a16b0: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4A16B0u;
    SET_GPR_U32(ctx, 31, 0x4A16B8u);
    ctx->pc = 0x4A16B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A16B0u;
            // 0x4a16b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A16B8u; }
        if (ctx->pc != 0x4A16B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A16B8u; }
        if (ctx->pc != 0x4A16B8u) { return; }
    }
    ctx->pc = 0x4A16B8u;
label_4a16b8:
    // 0x4a16b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a16b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a16bc:
    // 0x4a16bc: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4a16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x4a16c0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4a16c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4a16c4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4a16c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x4a16c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a16c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a16cc: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4a16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x4a16d0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4a16d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4a16d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a16d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a16d8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4A16D8u;
    SET_GPR_U32(ctx, 31, 0x4A16E0u);
    ctx->pc = 0x4A16DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A16D8u;
            // 0x4a16dc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A16E0u; }
        if (ctx->pc != 0x4A16E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A16E0u; }
        if (ctx->pc != 0x4A16E0u) { return; }
    }
    ctx->pc = 0x4A16E0u;
label_4a16e0:
    // 0x4a16e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4a16e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4a16e4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4a16e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4a16e8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A16E8u;
    {
        const bool branch_taken_0x4a16e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A16ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A16E8u;
            // 0x4a16ec: 0x26520150  addiu       $s2, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a16e8) {
            ctx->pc = 0x4A16BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a16bc;
        }
    }
    ctx->pc = 0x4A16F0u;
label_4a16f0:
    // 0x4a16f0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4a16f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a16f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a16f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a16f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a16f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a16fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a16fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a1700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a1700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a1704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a1704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1708: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A170Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1708u;
            // 0x4a170c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A1710u;
    // 0x4a1710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a1710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a1714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a1714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a1718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a1718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a171c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x4A171Cu;
    SET_GPR_U32(ctx, 31, 0x4A1724u);
    ctx->pc = 0x4A1720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A171Cu;
            // 0x4a1720: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1724u; }
        if (ctx->pc != 0x4A1724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1724u; }
        if (ctx->pc != 0x4A1724u) { return; }
    }
    ctx->pc = 0x4A1724u;
label_4a1724:
    // 0x4a1724: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x4A1724u;
    SET_GPR_U32(ctx, 31, 0x4A172Cu);
    ctx->pc = 0x4A1728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1724u;
            // 0x4a1728: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A172Cu; }
        if (ctx->pc != 0x4A172Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A172Cu; }
        if (ctx->pc != 0x4A172Cu) { return; }
    }
    ctx->pc = 0x4A172Cu;
label_4a172c:
    // 0x4a172c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4a172cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4a1730: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4a1730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4a1734: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4a1734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x4a1738: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4a1738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x4a173c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a173cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a1740: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4a1740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x4a1744: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x4A1744u;
    SET_GPR_U32(ctx, 31, 0x4A174Cu);
    ctx->pc = 0x4A1748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1744u;
            // 0x4a1748: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A174Cu; }
        if (ctx->pc != 0x4A174Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A174Cu; }
        if (ctx->pc != 0x4A174Cu) { return; }
    }
    ctx->pc = 0x4A174Cu;
label_4a174c:
    // 0x4a174c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x4A174Cu;
    SET_GPR_U32(ctx, 31, 0x4A1754u);
    ctx->pc = 0x4A1750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A174Cu;
            // 0x4a1750: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1754u; }
        if (ctx->pc != 0x4A1754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1754u; }
        if (ctx->pc != 0x4A1754u) { return; }
    }
    ctx->pc = 0x4A1754u;
label_4a1754:
    // 0x4a1754: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4a1754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x4a1758: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4a1758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x4a175c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4a175cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x4a1760: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4a1760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x4a1764: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4a1764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x4a1768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a1768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a176c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4a176cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x4a1770: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4a1770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a1774: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4a1774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x4a1778: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4a1778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x4a177c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4a177cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x4a1780: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4a1780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x4a1784: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4a1784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x4a1788: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4a1788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x4a178c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4a178cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x4a1790: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x4A1790u;
    SET_GPR_U32(ctx, 31, 0x4A1798u);
    ctx->pc = 0x4A1794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1790u;
            // 0x4a1794: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1798u; }
        if (ctx->pc != 0x4A1798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1798u; }
        if (ctx->pc != 0x4A1798u) { return; }
    }
    ctx->pc = 0x4A1798u;
label_4a1798:
    // 0x4a1798: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x4A1798u;
    SET_GPR_U32(ctx, 31, 0x4A17A0u);
    ctx->pc = 0x4A179Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1798u;
            // 0x4a179c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A17A0u; }
        if (ctx->pc != 0x4A17A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A17A0u; }
        if (ctx->pc != 0x4A17A0u) { return; }
    }
    ctx->pc = 0x4A17A0u;
label_4a17a0:
    // 0x4a17a0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4a17a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x4a17a4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x4a17a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x4a17a8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4a17a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x4a17ac: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4a17acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x4a17b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4a17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a17b4: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x4a17b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x4a17b8: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x4a17b8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a17bc: 0x24a50230  addiu       $a1, $a1, 0x230
    ctx->pc = 0x4a17bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 560));
    // 0x4a17c0: 0x24840270  addiu       $a0, $a0, 0x270
    ctx->pc = 0x4a17c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 624));
    // 0x4a17c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a17c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a17c8: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x4a17c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4a17cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a17ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a17d0: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x4a17d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
    // 0x4a17d4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4a17d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4a17d8: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x4a17d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x4a17dc: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x4a17dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x4a17e0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x4a17e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x4a17e4: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x4a17e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x4a17e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a17e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a17ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a17ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a17f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A17F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A17F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A17F0u;
            // 0x4a17f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A17F8u;
    // 0x4a17f8: 0x0  nop
    ctx->pc = 0x4a17f8u;
    // NOP
    // 0x4a17fc: 0x0  nop
    ctx->pc = 0x4a17fcu;
    // NOP
}
