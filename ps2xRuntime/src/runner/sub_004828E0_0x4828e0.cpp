#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004828E0
// Address: 0x4828e0 - 0x482b00
void sub_004828E0_0x4828e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004828E0_0x4828e0");
#endif

    switch (ctx->pc) {
        case 0x482910u: goto label_482910;
        case 0x482964u: goto label_482964;
        case 0x4829e8u: goto label_4829e8;
        case 0x482a08u: goto label_482a08;
        case 0x482a1cu: goto label_482a1c;
        case 0x482a28u: goto label_482a28;
        case 0x482a2cu: goto label_482a2c;
        case 0x482a50u: goto label_482a50;
        case 0x482a94u: goto label_482a94;
        case 0x482ab8u: goto label_482ab8;
        case 0x482ac0u: goto label_482ac0;
        default: break;
    }

    ctx->pc = 0x4828e0u;

    // 0x4828e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4828e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4828e4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4828e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4828e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4828e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4828ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4828ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4828f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4828f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4828f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4828f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4828f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4828f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4828fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4828fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x482900: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x482900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482904: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x482904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482908: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x482908u;
    SET_GPR_U32(ctx, 31, 0x482910u);
    ctx->pc = 0x48290Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482908u;
            // 0x48290c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482910u; }
        if (ctx->pc != 0x482910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482910u; }
        if (ctx->pc != 0x482910u) { return; }
    }
    ctx->pc = 0x482910u;
label_482910:
    // 0x482910: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x482910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x482914: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x482914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x482918: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x482918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x48291c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x48291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x482920: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x482920u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x482924: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x482924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x482928: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x482928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x48292c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48292cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x482930: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x482930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x482934: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x482934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x482938: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x482938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x48293c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x48293cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x482940: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x482940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x482944: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x482944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x482948: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x482948u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x48294c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x48294cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x482950: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x482950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x482954: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x482954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x482958: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x482958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x48295c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x48295Cu;
    SET_GPR_U32(ctx, 31, 0x482964u);
    ctx->pc = 0x482960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48295Cu;
            // 0x482960: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482964u; }
        if (ctx->pc != 0x482964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482964u; }
        if (ctx->pc != 0x482964u) { return; }
    }
    ctx->pc = 0x482964u;
label_482964:
    // 0x482964: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x482964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x482968: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x482968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x48296c: 0x2463f0d8  addiu       $v1, $v1, -0xF28
    ctx->pc = 0x48296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963416));
    // 0x482970: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x482970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x482974: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x482974u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x482978: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x482978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48297c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48297cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x482980: 0xac447b90  sw          $a0, 0x7B90($v0)
    ctx->pc = 0x482980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31632), GPR_U32(ctx, 4));
    // 0x482984: 0x2463f0f0  addiu       $v1, $v1, -0xF10
    ctx->pc = 0x482984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x482988: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x482988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x48298c: 0x2442f128  addiu       $v0, $v0, -0xED8
    ctx->pc = 0x48298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963496));
    // 0x482990: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x482990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x482994: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x482994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x482998: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x482998u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x48299c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x48299cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4829a0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4829a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4829a4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4829a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4829a8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4829a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4829ac: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4829acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4829b0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4829b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4829b4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4829b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4829b8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4829b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4829bc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4829bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4829c0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4829c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4829c4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4829C4u;
    {
        const bool branch_taken_0x4829c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4829c4) {
            ctx->pc = 0x482A60u;
            goto label_482a60;
        }
    }
    ctx->pc = 0x4829CCu;
    // 0x4829cc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4829ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4829d0: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x4829d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4829d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4829d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4829d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4829d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4829dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4829dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4829e0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4829E0u;
    SET_GPR_U32(ctx, 31, 0x4829E8u);
    ctx->pc = 0x4829E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4829E0u;
            // 0x4829e4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4829E8u; }
        if (ctx->pc != 0x4829E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4829E8u; }
        if (ctx->pc != 0x4829E8u) { return; }
    }
    ctx->pc = 0x4829E8u;
label_4829e8:
    // 0x4829e8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4829e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x4829ec: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x4829ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x4829f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4829f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4829f4: 0x24a52a80  addiu       $a1, $a1, 0x2A80
    ctx->pc = 0x4829f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10880));
    // 0x4829f8: 0x24c62280  addiu       $a2, $a2, 0x2280
    ctx->pc = 0x4829f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8832));
    // 0x4829fc: 0x24070230  addiu       $a3, $zero, 0x230
    ctx->pc = 0x4829fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x482a00: 0xc040840  jal         func_102100
    ctx->pc = 0x482A00u;
    SET_GPR_U32(ctx, 31, 0x482A08u);
    ctx->pc = 0x482A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482A00u;
            // 0x482a04: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482A08u; }
        if (ctx->pc != 0x482A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482A08u; }
        if (ctx->pc != 0x482A08u) { return; }
    }
    ctx->pc = 0x482A08u;
label_482a08:
    // 0x482a08: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x482a08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x482a0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x482a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482a10: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x482a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x482a14: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x482A14u;
    SET_GPR_U32(ctx, 31, 0x482A1Cu);
    ctx->pc = 0x482A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482A14u;
            // 0x482a18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482A1Cu; }
        if (ctx->pc != 0x482A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482A1Cu; }
        if (ctx->pc != 0x482A1Cu) { return; }
    }
    ctx->pc = 0x482A1Cu;
label_482a1c:
    // 0x482a1c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x482a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x482a20: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x482A20u;
    SET_GPR_U32(ctx, 31, 0x482A28u);
    ctx->pc = 0x482A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482A20u;
            // 0x482a24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482A28u; }
        if (ctx->pc != 0x482A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482A28u; }
        if (ctx->pc != 0x482A28u) { return; }
    }
    ctx->pc = 0x482A28u;
label_482a28:
    // 0x482a28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x482a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_482a2c:
    // 0x482a2c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x482a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x482a30: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x482a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x482a34: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x482a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x482a38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x482a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x482a3c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x482a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x482a40: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x482a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x482a44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x482a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x482a48: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x482A48u;
    SET_GPR_U32(ctx, 31, 0x482A50u);
    ctx->pc = 0x482A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482A48u;
            // 0x482a4c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482A50u; }
        if (ctx->pc != 0x482A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482A50u; }
        if (ctx->pc != 0x482A50u) { return; }
    }
    ctx->pc = 0x482A50u;
label_482a50:
    // 0x482a50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x482a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x482a54: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x482a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x482a58: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x482A58u;
    {
        const bool branch_taken_0x482a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x482A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482A58u;
            // 0x482a5c: 0x26520230  addiu       $s2, $s2, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482a58) {
            ctx->pc = 0x482A2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_482a2c;
        }
    }
    ctx->pc = 0x482A60u;
label_482a60:
    // 0x482a60: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x482a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482a64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x482a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x482a68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x482a68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x482a6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x482a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482a70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x482a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482a74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482a78: 0x3e00008  jr          $ra
    ctx->pc = 0x482A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482A78u;
            // 0x482a7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x482A80u;
    // 0x482a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x482a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x482a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x482a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x482a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x482a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x482a8c: 0xc0b1370  jal         func_2C4DC0
    ctx->pc = 0x482A8Cu;
    SET_GPR_U32(ctx, 31, 0x482A94u);
    ctx->pc = 0x482A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482A8Cu;
            // 0x482a90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482A94u; }
        if (ctx->pc != 0x482A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482A94u; }
        if (ctx->pc != 0x482A94u) { return; }
    }
    ctx->pc = 0x482A94u;
label_482a94:
    // 0x482a94: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x482a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x482a98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x482a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x482a9c: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x482a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
    // 0x482aa0: 0x24429360  addiu       $v0, $v0, -0x6CA0
    ctx->pc = 0x482aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
    // 0x482aa4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x482aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x482aa8: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x482aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x482aac: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x482aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x482ab0: 0xc0adb98  jal         func_2B6E60
    ctx->pc = 0x482AB0u;
    SET_GPR_U32(ctx, 31, 0x482AB8u);
    ctx->pc = 0x482AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482AB0u;
            // 0x482ab4: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6E60u;
    if (runtime->hasFunction(0x2B6E60u)) {
        auto targetFn = runtime->lookupFunction(0x2B6E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482AB8u; }
        if (ctx->pc != 0x482AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6E60_0x2b6e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482AB8u; }
        if (ctx->pc != 0x482AB8u) { return; }
    }
    ctx->pc = 0x482AB8u;
label_482ab8:
    // 0x482ab8: 0xc0ada8c  jal         func_2B6A30
    ctx->pc = 0x482AB8u;
    SET_GPR_U32(ctx, 31, 0x482AC0u);
    ctx->pc = 0x482ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482AB8u;
            // 0x482abc: 0x260401a0  addiu       $a0, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A30u;
    if (runtime->hasFunction(0x2B6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2B6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482AC0u; }
        if (ctx->pc != 0x482AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6A30_0x2b6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482AC0u; }
        if (ctx->pc != 0x482AC0u) { return; }
    }
    ctx->pc = 0x482AC0u;
label_482ac0:
    // 0x482ac0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x482ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x482ac4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x482ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x482ac8: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x482ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x482acc: 0x2442f190  addiu       $v0, $v0, -0xE70
    ctx->pc = 0x482accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963600));
    // 0x482ad0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x482ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x482ad4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x482ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x482ad8: 0x2463f1d0  addiu       $v1, $v1, -0xE30
    ctx->pc = 0x482ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963664));
    // 0x482adc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x482adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482ae0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x482ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x482ae4: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x482ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x482ae8: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x482ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x482aec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x482aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482af4: 0x3e00008  jr          $ra
    ctx->pc = 0x482AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482AF4u;
            // 0x482af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x482AFCu;
    // 0x482afc: 0x0  nop
    ctx->pc = 0x482afcu;
    // NOP
}
