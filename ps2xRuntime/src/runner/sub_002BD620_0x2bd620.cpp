#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BD620
// Address: 0x2bd620 - 0x2bd950
void sub_002BD620_0x2bd620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD620_0x2bd620");
#endif

    switch (ctx->pc) {
        case 0x2bd650u: goto label_2bd650;
        case 0x2bd6a4u: goto label_2bd6a4;
        case 0x2bd720u: goto label_2bd720;
        case 0x2bd740u: goto label_2bd740;
        case 0x2bd754u: goto label_2bd754;
        case 0x2bd760u: goto label_2bd760;
        case 0x2bd764u: goto label_2bd764;
        case 0x2bd788u: goto label_2bd788;
        case 0x2bd810u: goto label_2bd810;
        case 0x2bd818u: goto label_2bd818;
        case 0x2bd8fcu: goto label_2bd8fc;
        case 0x2bd934u: goto label_2bd934;
        default: break;
    }

    ctx->pc = 0x2bd620u;

    // 0x2bd620: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bd620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bd624: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2bd624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bd628: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bd628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bd62c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bd62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bd630: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bd630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bd634: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bd634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bd63c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd640: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bd640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd644: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2bd644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd648: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2BD648u;
    SET_GPR_U32(ctx, 31, 0x2BD650u);
    ctx->pc = 0x2BD64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD648u;
            // 0x2bd64c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD650u; }
        if (ctx->pc != 0x2BD650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD650u; }
        if (ctx->pc != 0x2BD650u) { return; }
    }
    ctx->pc = 0x2BD650u;
label_2bd650:
    // 0x2bd650: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bd650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bd654: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bd658: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2bd658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2bd65c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bd65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2bd660: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2bd660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2bd664: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2bd664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2bd668: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2bd668u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2bd66c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bd66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bd670: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2bd670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2bd674: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bd674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bd678: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2bd678u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2bd67c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2bd67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bd680: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2bd680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2bd684: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2bd684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2bd688: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2bd688u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2bd68c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2bd68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2bd690: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2bd690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2bd694: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2bd694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2bd698: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2bd698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2bd69c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2BD69Cu;
    SET_GPR_U32(ctx, 31, 0x2BD6A4u);
    ctx->pc = 0x2BD6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD69Cu;
            // 0x2bd6a0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD6A4u; }
        if (ctx->pc != 0x2BD6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD6A4u; }
        if (ctx->pc != 0x2BD6A4u) { return; }
    }
    ctx->pc = 0x2BD6A4u;
label_2bd6a4:
    // 0x2bd6a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bd6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bd6a8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2bd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2bd6ac: 0x24631ed8  addiu       $v1, $v1, 0x1ED8
    ctx->pc = 0x2bd6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
    // 0x2bd6b0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2bd6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2bd6b4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2bd6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2bd6b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bd6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bd6bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bd6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bd6c0: 0xac440d50  sw          $a0, 0xD50($v0)
    ctx->pc = 0x2bd6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3408), GPR_U32(ctx, 4));
    // 0x2bd6c4: 0x24631ef0  addiu       $v1, $v1, 0x1EF0
    ctx->pc = 0x2bd6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7920));
    // 0x2bd6c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bd6cc: 0x24421f28  addiu       $v0, $v0, 0x1F28
    ctx->pc = 0x2bd6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7976));
    // 0x2bd6d0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2bd6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2bd6d4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2bd6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2bd6d8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2bd6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2bd6dc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2bd6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2bd6e0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2bd6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2bd6e4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2bd6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2bd6e8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2bd6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2bd6ec: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2bd6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2bd6f0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2bd6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2bd6f4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2bd6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2bd6f8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2bd6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2bd6fc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2bd6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2bd700: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2bd700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2bd704: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2BD704u;
    {
        const bool branch_taken_0x2bd704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd704) {
            ctx->pc = 0x2BD798u;
            goto label_2bd798;
        }
    }
    ctx->pc = 0x2BD70Cu;
    // 0x2bd70c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2bd70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2bd710: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2bd710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bd714: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bd714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bd718: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2BD718u;
    SET_GPR_U32(ctx, 31, 0x2BD720u);
    ctx->pc = 0x2BD71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD718u;
            // 0x2bd71c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD720u; }
        if (ctx->pc != 0x2BD720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD720u; }
        if (ctx->pc != 0x2BD720u) { return; }
    }
    ctx->pc = 0x2BD720u;
label_2bd720:
    // 0x2bd720: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bd720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bd724: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2bd724u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2bd728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bd728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd72c: 0x24a5d7c0  addiu       $a1, $a1, -0x2840
    ctx->pc = 0x2bd72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956992));
    // 0x2bd730: 0x24c6d370  addiu       $a2, $a2, -0x2C90
    ctx->pc = 0x2bd730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955888));
    // 0x2bd734: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x2bd734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2bd738: 0xc040840  jal         func_102100
    ctx->pc = 0x2BD738u;
    SET_GPR_U32(ctx, 31, 0x2BD740u);
    ctx->pc = 0x2BD73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD738u;
            // 0x2bd73c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD740u; }
        if (ctx->pc != 0x2BD740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD740u; }
        if (ctx->pc != 0x2BD740u) { return; }
    }
    ctx->pc = 0x2BD740u;
label_2bd740:
    // 0x2bd740: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2bd740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2bd744: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bd744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd748: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2bd748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2bd74c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2BD74Cu;
    SET_GPR_U32(ctx, 31, 0x2BD754u);
    ctx->pc = 0x2BD750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD74Cu;
            // 0x2bd750: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD754u; }
        if (ctx->pc != 0x2BD754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD754u; }
        if (ctx->pc != 0x2BD754u) { return; }
    }
    ctx->pc = 0x2BD754u;
label_2bd754:
    // 0x2bd754: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2bd754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2bd758: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2BD758u;
    SET_GPR_U32(ctx, 31, 0x2BD760u);
    ctx->pc = 0x2BD75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD758u;
            // 0x2bd75c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD760u; }
        if (ctx->pc != 0x2BD760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD760u; }
        if (ctx->pc != 0x2BD760u) { return; }
    }
    ctx->pc = 0x2BD760u;
label_2bd760:
    // 0x2bd760: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bd760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd764:
    // 0x2bd764: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2bd764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2bd768: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2bd768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2bd76c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2bd76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2bd770: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bd770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd774: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2bd774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2bd778: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2bd778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2bd77c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bd77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bd780: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2BD780u;
    SET_GPR_U32(ctx, 31, 0x2BD788u);
    ctx->pc = 0x2BD784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD780u;
            // 0x2bd784: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD788u; }
        if (ctx->pc != 0x2BD788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD788u; }
        if (ctx->pc != 0x2BD788u) { return; }
    }
    ctx->pc = 0x2BD788u;
label_2bd788:
    // 0x2bd788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bd788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2bd78c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2bd78cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2bd790: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BD790u;
    {
        const bool branch_taken_0x2bd790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD790u;
            // 0x2bd794: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd790) {
            ctx->pc = 0x2BD764u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bd764;
        }
    }
    ctx->pc = 0x2BD798u;
label_2bd798:
    // 0x2bd798: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2bd798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd79c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bd79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bd7a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bd7a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd7a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bd7a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd7a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd7a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd7ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd7acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD7B0u;
            // 0x2bd7b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BD7B8u;
    // 0x2bd7b8: 0x0  nop
    ctx->pc = 0x2bd7b8u;
    // NOP
    // 0x2bd7bc: 0x0  nop
    ctx->pc = 0x2bd7bcu;
    // NOP
    // 0x2bd7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bd7c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bd7c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bd7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bd7cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bd7ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd7d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd7d4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bd7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2bd7d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bd7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bd7dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2bd7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2bd7e0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2bd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2bd7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bd7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd7e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2bd7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2bd7ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bd7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd7f0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2bd7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2bd7f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2bd7f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2bd7f8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2bd7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2bd7fc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2bd7fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2bd800: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2bd800u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bd804: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2bd804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bd808: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2BD808u;
    SET_GPR_U32(ctx, 31, 0x2BD810u);
    ctx->pc = 0x2BD80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD808u;
            // 0x2bd80c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD810u; }
        if (ctx->pc != 0x2BD810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD810u; }
        if (ctx->pc != 0x2BD810u) { return; }
    }
    ctx->pc = 0x2BD810u;
label_2bd810:
    // 0x2bd810: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2BD810u;
    SET_GPR_U32(ctx, 31, 0x2BD818u);
    ctx->pc = 0x2BD814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD810u;
            // 0x2bd814: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD818u; }
        if (ctx->pc != 0x2BD818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD818u; }
        if (ctx->pc != 0x2BD818u) { return; }
    }
    ctx->pc = 0x2BD818u;
label_2bd818:
    // 0x2bd818: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bd818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bd81c: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x2bd81cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
    // 0x2bd820: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2bd820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2bd824: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x2bd824u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
    // 0x2bd828: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x2bd828u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
    // 0x2bd82c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2bd82cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x2bd830: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2bd830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x2bd834: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2bd834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2bd838: 0x8c4b0788  lw          $t3, 0x788($v0)
    ctx->pc = 0x2bd838u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x2bd83c: 0x254ac560  addiu       $t2, $t2, -0x3AA0
    ctx->pc = 0x2bd83cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952288));
    // 0x2bd840: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2bd840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2bd844: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bd844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bd848: 0x25292660  addiu       $t1, $t1, 0x2660
    ctx->pc = 0x2bd848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9824));
    // 0x2bd84c: 0x25082670  addiu       $t0, $t0, 0x2670
    ctx->pc = 0x2bd84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9840));
    // 0x2bd850: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2bd850u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2bd854: 0x24e726b0  addiu       $a3, $a3, 0x26B0
    ctx->pc = 0x2bd854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9904));
    // 0x2bd858: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x2bd858u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2bd85c: 0x24c6ec90  addiu       $a2, $a2, -0x1370
    ctx->pc = 0x2bd85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962320));
    // 0x2bd860: 0x24a5ecd0  addiu       $a1, $a1, -0x1330
    ctx->pc = 0x2bd860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962384));
    // 0x2bd864: 0x24842428  addiu       $a0, $a0, 0x2428
    ctx->pc = 0x2bd864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9256));
    // 0x2bd868: 0x24631ec8  addiu       $v1, $v1, 0x1EC8
    ctx->pc = 0x2bd868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7880));
    // 0x2bd86c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bd86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd870: 0xa20a004d  sb          $t2, 0x4D($s0)
    ctx->pc = 0x2bd870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 10));
    // 0x2bd874: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x2bd874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x2bd878: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2bd878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2bd87c: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x2bd87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x2bd880: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x2bd880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
    // 0x2bd884: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2bd884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2bd888: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x2bd888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
    // 0x2bd88c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2bd88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2bd890: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x2bd890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x2bd894: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2bd894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x2bd898: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x2bd898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x2bd89c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2bd89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x2bd8a0: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2bd8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2bd8a4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2bd8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x2bd8a8: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2bd8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x2bd8ac: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2bd8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x2bd8b0: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2bd8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x2bd8b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bd8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd8b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd8b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD8BCu;
            // 0x2bd8c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BD8C4u;
    // 0x2bd8c4: 0x0  nop
    ctx->pc = 0x2bd8c4u;
    // NOP
    // 0x2bd8c8: 0x0  nop
    ctx->pc = 0x2bd8c8u;
    // NOP
    // 0x2bd8cc: 0x0  nop
    ctx->pc = 0x2bd8ccu;
    // NOP
    // 0x2bd8d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bd8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bd8d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bd8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bd8d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bd8dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd8e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bd8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd8e4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BD8E4u;
    {
        const bool branch_taken_0x2bd8e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD8E4u;
            // 0x2bd8e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8e4) {
            ctx->pc = 0x2BD934u;
            goto label_2bd934;
        }
    }
    ctx->pc = 0x2BD8ECu;
    // 0x2bd8ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bd8f0: 0x24421ec8  addiu       $v0, $v0, 0x1EC8
    ctx->pc = 0x2bd8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7880));
    // 0x2bd8f4: 0xc0b6100  jal         func_2D8400
    ctx->pc = 0x2BD8F4u;
    SET_GPR_U32(ctx, 31, 0x2BD8FCu);
    ctx->pc = 0x2BD8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD8F4u;
            // 0x2bd8f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8400u;
    if (runtime->hasFunction(0x2D8400u)) {
        auto targetFn = runtime->lookupFunction(0x2D8400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD8FCu; }
        if (ctx->pc != 0x2BD8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8400_0x2d8400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD8FCu; }
        if (ctx->pc != 0x2BD8FCu) { return; }
    }
    ctx->pc = 0x2BD8FCu;
label_2bd8fc:
    // 0x2bd8fc: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD8FCu;
    {
        const bool branch_taken_0x2bd8fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd8fc) {
            ctx->pc = 0x2BD900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD8FCu;
            // 0x2bd900: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD920u;
            goto label_2bd920;
        }
    }
    ctx->pc = 0x2BD904u;
    // 0x2bd904: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bd908: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x2bd908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
    // 0x2bd90c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bd90cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2bd910: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2bd910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2bd914: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2bd914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2bd918: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2bd918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2bd91c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bd91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bd920:
    // 0x2bd920: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bd920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bd924: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD924u;
    {
        const bool branch_taken_0x2bd924 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bd924) {
            ctx->pc = 0x2BD928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD924u;
            // 0x2bd928: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD938u;
            goto label_2bd938;
        }
    }
    ctx->pc = 0x2BD92Cu;
    // 0x2bd92c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BD92Cu;
    SET_GPR_U32(ctx, 31, 0x2BD934u);
    ctx->pc = 0x2BD930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD92Cu;
            // 0x2bd930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD934u; }
        if (ctx->pc != 0x2BD934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD934u; }
        if (ctx->pc != 0x2BD934u) { return; }
    }
    ctx->pc = 0x2BD934u;
label_2bd934:
    // 0x2bd934: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bd934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bd938:
    // 0x2bd938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bd938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd93c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd93cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd944: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD944u;
            // 0x2bd948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BD94Cu;
    // 0x2bd94c: 0x0  nop
    ctx->pc = 0x2bd94cu;
    // NOP
}
