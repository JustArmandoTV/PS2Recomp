#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BD6F0
// Address: 0x4bd6f0 - 0x4bd8a0
void sub_004BD6F0_0x4bd6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BD6F0_0x4bd6f0");
#endif

    switch (ctx->pc) {
        case 0x4bd720u: goto label_4bd720;
        case 0x4bd774u: goto label_4bd774;
        case 0x4bd808u: goto label_4bd808;
        case 0x4bd828u: goto label_4bd828;
        case 0x4bd83cu: goto label_4bd83c;
        case 0x4bd848u: goto label_4bd848;
        case 0x4bd84cu: goto label_4bd84c;
        case 0x4bd870u: goto label_4bd870;
        default: break;
    }

    ctx->pc = 0x4bd6f0u;

    // 0x4bd6f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4bd6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4bd6f4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4bd6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4bd6f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4bd6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4bd6fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bd6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4bd700: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bd700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4bd704: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4bd704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bd708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4bd70c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bd70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4bd710: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4bd710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd714: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4bd714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd718: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4BD718u;
    SET_GPR_U32(ctx, 31, 0x4BD720u);
    ctx->pc = 0x4BD71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD718u;
            // 0x4bd71c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD720u; }
        if (ctx->pc != 0x4BD720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD720u; }
        if (ctx->pc != 0x4BD720u) { return; }
    }
    ctx->pc = 0x4BD720u;
label_4bd720:
    // 0x4bd720: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4bd720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4bd724: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bd724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4bd728: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4bd728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4bd72c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4bd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4bd730: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4bd730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4bd734: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4bd734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4bd738: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4bd738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4bd73c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4bd73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bd740: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4bd740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x4bd744: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bd744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4bd748: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4bd748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x4bd74c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4bd74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4bd750: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4bd750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x4bd754: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4bd754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4bd758: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4bd758u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4bd75c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4bd75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x4bd760: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4bd760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x4bd764: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4bd764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4bd768: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4bd768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4bd76c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x4BD76Cu;
    SET_GPR_U32(ctx, 31, 0x4BD774u);
    ctx->pc = 0x4BD770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD76Cu;
            // 0x4bd770: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD774u; }
        if (ctx->pc != 0x4BD774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD774u; }
        if (ctx->pc != 0x4BD774u) { return; }
    }
    ctx->pc = 0x4BD774u;
label_4bd774:
    // 0x4bd774: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bd774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4bd778: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4bd778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4bd77c: 0x24630f08  addiu       $v1, $v1, 0xF08
    ctx->pc = 0x4bd77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3848));
    // 0x4bd780: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4bd780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4bd784: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4bd784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4bd788: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4bd788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4bd78c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bd78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4bd790: 0xac44a9e0  sw          $a0, -0x5620($v0)
    ctx->pc = 0x4bd790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945248), GPR_U32(ctx, 4));
    // 0x4bd794: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x4bd794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x4bd798: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bd798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bd79c: 0x24420f58  addiu       $v0, $v0, 0xF58
    ctx->pc = 0x4bd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3928));
    // 0x4bd7a0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4bd7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4bd7a4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4bd7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4bd7a8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4bd7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4bd7ac: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4bd7acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4bd7b0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4bd7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4bd7b4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4bd7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4bd7b8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4bd7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4bd7bc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4bd7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4bd7c0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4bd7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4bd7c4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4bd7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4bd7c8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4bd7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4bd7cc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4bd7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4bd7d0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x4bd7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x4bd7d4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x4bd7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x4bd7d8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x4bd7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x4bd7dc: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x4bd7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x4bd7e0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x4bd7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x4bd7e4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x4bd7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x4bd7e8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4bd7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4bd7ec: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4BD7ECu;
    {
        const bool branch_taken_0x4bd7ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd7ec) {
            ctx->pc = 0x4BD880u;
            goto label_4bd880;
        }
    }
    ctx->pc = 0x4BD7F4u;
    // 0x4bd7f4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4bd7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4bd7f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4bd7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4bd7fc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4bd7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4bd800: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4BD800u;
    SET_GPR_U32(ctx, 31, 0x4BD808u);
    ctx->pc = 0x4BD804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD800u;
            // 0x4bd804: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD808u; }
        if (ctx->pc != 0x4BD808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD808u; }
        if (ctx->pc != 0x4BD808u) { return; }
    }
    ctx->pc = 0x4BD808u;
label_4bd808:
    // 0x4bd808: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4bd808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4bd80c: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x4bd80cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x4bd810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bd810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd814: 0x24a5dfe0  addiu       $a1, $a1, -0x2020
    ctx->pc = 0x4bd814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959072));
    // 0x4bd818: 0x24c6d0b0  addiu       $a2, $a2, -0x2F50
    ctx->pc = 0x4bd818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955184));
    // 0x4bd81c: 0x24070120  addiu       $a3, $zero, 0x120
    ctx->pc = 0x4bd81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x4bd820: 0xc040840  jal         func_102100
    ctx->pc = 0x4BD820u;
    SET_GPR_U32(ctx, 31, 0x4BD828u);
    ctx->pc = 0x4BD824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD820u;
            // 0x4bd824: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD828u; }
        if (ctx->pc != 0x4BD828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD828u; }
        if (ctx->pc != 0x4BD828u) { return; }
    }
    ctx->pc = 0x4BD828u;
label_4bd828:
    // 0x4bd828: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4bd828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x4bd82c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4bd82cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd830: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4bd830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x4bd834: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4BD834u;
    SET_GPR_U32(ctx, 31, 0x4BD83Cu);
    ctx->pc = 0x4BD838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD834u;
            // 0x4bd838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD83Cu; }
        if (ctx->pc != 0x4BD83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD83Cu; }
        if (ctx->pc != 0x4BD83Cu) { return; }
    }
    ctx->pc = 0x4BD83Cu;
label_4bd83c:
    // 0x4bd83c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4bd83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4bd840: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4BD840u;
    SET_GPR_U32(ctx, 31, 0x4BD848u);
    ctx->pc = 0x4BD844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD840u;
            // 0x4bd844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD848u; }
        if (ctx->pc != 0x4BD848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD848u; }
        if (ctx->pc != 0x4BD848u) { return; }
    }
    ctx->pc = 0x4BD848u;
label_4bd848:
    // 0x4bd848: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4bd848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bd84c:
    // 0x4bd84c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4bd84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x4bd850: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4bd850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4bd854: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4bd854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x4bd858: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4bd858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4bd85c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4bd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x4bd860: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4bd860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4bd864: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bd864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4bd868: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4BD868u;
    SET_GPR_U32(ctx, 31, 0x4BD870u);
    ctx->pc = 0x4BD86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD868u;
            // 0x4bd86c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD870u; }
        if (ctx->pc != 0x4BD870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD870u; }
        if (ctx->pc != 0x4BD870u) { return; }
    }
    ctx->pc = 0x4BD870u;
label_4bd870:
    // 0x4bd870: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4bd870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4bd874: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4bd874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4bd878: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4BD878u;
    {
        const bool branch_taken_0x4bd878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD878u;
            // 0x4bd87c: 0x26520120  addiu       $s2, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd878) {
            ctx->pc = 0x4BD84Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bd84c;
        }
    }
    ctx->pc = 0x4BD880u;
label_4bd880:
    // 0x4bd880: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4bd880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd884: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bd884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bd888: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bd888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bd88c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bd88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bd890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bd890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bd894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd898: 0x3e00008  jr          $ra
    ctx->pc = 0x4BD898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD898u;
            // 0x4bd89c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BD8A0u;
}
