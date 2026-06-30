#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C3650
// Address: 0x2c3650 - 0x2c37f0
void sub_002C3650_0x2c3650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3650_0x2c3650");
#endif

    switch (ctx->pc) {
        case 0x2c3680u: goto label_2c3680;
        case 0x2c36d4u: goto label_2c36d4;
        case 0x2c3750u: goto label_2c3750;
        case 0x2c3770u: goto label_2c3770;
        case 0x2c3784u: goto label_2c3784;
        case 0x2c3790u: goto label_2c3790;
        case 0x2c3794u: goto label_2c3794;
        case 0x2c37b8u: goto label_2c37b8;
        default: break;
    }

    ctx->pc = 0x2c3650u;

    // 0x2c3650: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c3650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c3654: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c3654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c3658: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c3658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c365c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c365cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c3660: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c3660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c3664: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c3664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c366c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c366cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c3670: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c3670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3674: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c3674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3678: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C3678u;
    SET_GPR_U32(ctx, 31, 0x2C3680u);
    ctx->pc = 0x2C367Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3678u;
            // 0x2c367c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3680u; }
        if (ctx->pc != 0x2C3680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3680u; }
        if (ctx->pc != 0x2C3680u) { return; }
    }
    ctx->pc = 0x2C3680u;
label_2c3680:
    // 0x2c3680: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c3680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c3684: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c3688: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c3688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c368c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c3690: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c3690u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c3694: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c3694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c3698: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c3698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c369c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c369cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c36a0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c36a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c36a8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c36a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c36ac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c36acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c36b0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c36b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c36b4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c36b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c36b8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c36b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c36bc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c36bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c36c0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c36c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c36c4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c36c8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c36c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c36cc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C36CCu;
    SET_GPR_U32(ctx, 31, 0x2C36D4u);
    ctx->pc = 0x2C36D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C36CCu;
            // 0x2c36d0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C36D4u; }
        if (ctx->pc != 0x2C36D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C36D4u; }
        if (ctx->pc != 0x2C36D4u) { return; }
    }
    ctx->pc = 0x2C36D4u;
label_2c36d4:
    // 0x2c36d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c36d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c36d8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c36d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c36dc: 0x24631168  addiu       $v1, $v1, 0x1168
    ctx->pc = 0x2c36dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4456));
    // 0x2c36e0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2c36e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2c36e4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c36e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c36e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c36ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c36ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c36f0: 0xac440da8  sw          $a0, 0xDA8($v0)
    ctx->pc = 0x2c36f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3496), GPR_U32(ctx, 4));
    // 0x2c36f4: 0x24631180  addiu       $v1, $v1, 0x1180
    ctx->pc = 0x2c36f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4480));
    // 0x2c36f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c36fc: 0x244211b8  addiu       $v0, $v0, 0x11B8
    ctx->pc = 0x2c36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4536));
    // 0x2c3700: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c3700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c3704: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c3704u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c3708: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c3708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c370c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c370cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c3710: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c3710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c3714: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c3714u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c3718: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c3718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c371c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c371cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c3720: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c3720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c3724: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c3724u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c3728: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c3728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c372c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c372cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c3730: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c3730u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c3734: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C3734u;
    {
        const bool branch_taken_0x2c3734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3734) {
            ctx->pc = 0x2C37C8u;
            goto label_2c37c8;
        }
    }
    ctx->pc = 0x2C373Cu;
    // 0x2c373c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c373cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c3740: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c3740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c3744: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c3744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c3748: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C3748u;
    SET_GPR_U32(ctx, 31, 0x2C3750u);
    ctx->pc = 0x2C374Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3748u;
            // 0x2c374c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3750u; }
        if (ctx->pc != 0x2C3750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3750u; }
        if (ctx->pc != 0x2C3750u) { return; }
    }
    ctx->pc = 0x2C3750u;
label_2c3750:
    // 0x2c3750: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c3750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c3754: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c3754u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c3758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c3758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c375c: 0x24a53250  addiu       $a1, $a1, 0x3250
    ctx->pc = 0x2c375cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12880));
    // 0x2c3760: 0x24c62eb0  addiu       $a2, $a2, 0x2EB0
    ctx->pc = 0x2c3760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11952));
    // 0x2c3764: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2c3764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c3768: 0xc040840  jal         func_102100
    ctx->pc = 0x2C3768u;
    SET_GPR_U32(ctx, 31, 0x2C3770u);
    ctx->pc = 0x2C376Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3768u;
            // 0x2c376c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3770u; }
        if (ctx->pc != 0x2C3770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3770u; }
        if (ctx->pc != 0x2C3770u) { return; }
    }
    ctx->pc = 0x2C3770u;
label_2c3770:
    // 0x2c3770: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c3770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c3774: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c3774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3778: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c3778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c377c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C377Cu;
    SET_GPR_U32(ctx, 31, 0x2C3784u);
    ctx->pc = 0x2C3780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C377Cu;
            // 0x2c3780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3784u; }
        if (ctx->pc != 0x2C3784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3784u; }
        if (ctx->pc != 0x2C3784u) { return; }
    }
    ctx->pc = 0x2C3784u;
label_2c3784:
    // 0x2c3784: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c3784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c3788: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C3788u;
    SET_GPR_U32(ctx, 31, 0x2C3790u);
    ctx->pc = 0x2C378Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3788u;
            // 0x2c378c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3790u; }
        if (ctx->pc != 0x2C3790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3790u; }
        if (ctx->pc != 0x2C3790u) { return; }
    }
    ctx->pc = 0x2C3790u;
label_2c3790:
    // 0x2c3790: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c3790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3794:
    // 0x2c3794: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c3794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c3798: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c3798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c379c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c379cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c37a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c37a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c37a4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c37a8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c37a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c37ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c37acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c37b0: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C37B0u;
    SET_GPR_U32(ctx, 31, 0x2C37B8u);
    ctx->pc = 0x2C37B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C37B0u;
            // 0x2c37b4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C37B8u; }
        if (ctx->pc != 0x2C37B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C37B8u; }
        if (ctx->pc != 0x2C37B8u) { return; }
    }
    ctx->pc = 0x2C37B8u;
label_2c37b8:
    // 0x2c37b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c37b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c37bc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c37bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c37c0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C37C0u;
    {
        const bool branch_taken_0x2c37c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C37C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C37C0u;
            // 0x2c37c4: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37c0) {
            ctx->pc = 0x2C3794u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c3794;
        }
    }
    ctx->pc = 0x2C37C8u;
label_2c37c8:
    // 0x2c37c8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c37c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c37ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c37d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c37d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c37d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c37d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c37d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c37d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c37dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c37dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c37e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C37E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C37E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C37E0u;
            // 0x2c37e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C37E8u;
    // 0x2c37e8: 0x0  nop
    ctx->pc = 0x2c37e8u;
    // NOP
    // 0x2c37ec: 0x0  nop
    ctx->pc = 0x2c37ecu;
    // NOP
}
