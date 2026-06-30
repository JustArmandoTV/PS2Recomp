#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00336910
// Address: 0x336910 - 0x336b90
void sub_00336910_0x336910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336910_0x336910");
#endif

    switch (ctx->pc) {
        case 0x336940u: goto label_336940;
        case 0x336994u: goto label_336994;
        case 0x336a10u: goto label_336a10;
        case 0x336a30u: goto label_336a30;
        case 0x336a44u: goto label_336a44;
        case 0x336a50u: goto label_336a50;
        case 0x336a54u: goto label_336a54;
        case 0x336a78u: goto label_336a78;
        case 0x336ac4u: goto label_336ac4;
        case 0x336accu: goto label_336acc;
        case 0x336aecu: goto label_336aec;
        case 0x336af4u: goto label_336af4;
        case 0x336b38u: goto label_336b38;
        case 0x336b40u: goto label_336b40;
        default: break;
    }

    ctx->pc = 0x336910u;

    // 0x336910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x336910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x336914: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x336914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x336918: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x336918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33691c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33691cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x336920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x336920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x336924: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x336924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33692c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33692cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336930: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x336930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336934: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x336934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336938: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x336938u;
    SET_GPR_U32(ctx, 31, 0x336940u);
    ctx->pc = 0x33693Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336938u;
            // 0x33693c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336940u; }
        if (ctx->pc != 0x336940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336940u; }
        if (ctx->pc != 0x336940u) { return; }
    }
    ctx->pc = 0x336940u;
label_336940:
    // 0x336940: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x336940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x336944: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x336944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x336948: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x336948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x33694c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x33694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x336950: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x336950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x336954: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x336954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x336958: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x336958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x33695c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33695cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x336960: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x336960u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x336964: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x336964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x336968: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x336968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x33696c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x33696cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x336970: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x336970u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x336974: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x336974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x336978: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x336978u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x33697c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x33697cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x336980: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x336980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x336984: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x336984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x336988: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x336988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33698c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x33698Cu;
    SET_GPR_U32(ctx, 31, 0x336994u);
    ctx->pc = 0x336990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33698Cu;
            // 0x336990: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336994u; }
        if (ctx->pc != 0x336994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336994u; }
        if (ctx->pc != 0x336994u) { return; }
    }
    ctx->pc = 0x336994u;
label_336994:
    // 0x336994: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x336994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x336998: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x336998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x33699c: 0x24634c68  addiu       $v1, $v1, 0x4C68
    ctx->pc = 0x33699cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19560));
    // 0x3369a0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x3369a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x3369a4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x3369a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x3369a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3369a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3369ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3369acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3369b0: 0xac443e68  sw          $a0, 0x3E68($v0)
    ctx->pc = 0x3369b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15976), GPR_U32(ctx, 4));
    // 0x3369b4: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x3369b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
    // 0x3369b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3369b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3369bc: 0x24424cb8  addiu       $v0, $v0, 0x4CB8
    ctx->pc = 0x3369bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19640));
    // 0x3369c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3369c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x3369c4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x3369c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x3369c8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x3369c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x3369cc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x3369ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x3369d0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x3369d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x3369d4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x3369d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x3369d8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x3369d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x3369dc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x3369dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x3369e0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x3369e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x3369e4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x3369e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x3369e8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x3369e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x3369ec: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x3369ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x3369f0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x3369f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x3369f4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3369F4u;
    {
        const bool branch_taken_0x3369f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3369f4) {
            ctx->pc = 0x336A88u;
            goto label_336a88;
        }
    }
    ctx->pc = 0x3369FCu;
    // 0x3369fc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x3369fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x336a00: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x336a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x336a04: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x336a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x336a08: 0xc040138  jal         func_1004E0
    ctx->pc = 0x336A08u;
    SET_GPR_U32(ctx, 31, 0x336A10u);
    ctx->pc = 0x336A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336A08u;
            // 0x336a0c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336A10u; }
        if (ctx->pc != 0x336A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336A10u; }
        if (ctx->pc != 0x336A10u) { return; }
    }
    ctx->pc = 0x336A10u;
label_336a10:
    // 0x336a10: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x336a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x336a14: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x336a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x336a18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x336a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336a1c: 0x24a56ab0  addiu       $a1, $a1, 0x6AB0
    ctx->pc = 0x336a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27312));
    // 0x336a20: 0x24c662b0  addiu       $a2, $a2, 0x62B0
    ctx->pc = 0x336a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25264));
    // 0x336a24: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x336a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x336a28: 0xc040840  jal         func_102100
    ctx->pc = 0x336A28u;
    SET_GPR_U32(ctx, 31, 0x336A30u);
    ctx->pc = 0x336A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336A28u;
            // 0x336a2c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336A30u; }
        if (ctx->pc != 0x336A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336A30u; }
        if (ctx->pc != 0x336A30u) { return; }
    }
    ctx->pc = 0x336A30u;
label_336a30:
    // 0x336a30: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x336a30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x336a34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x336a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336a38: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x336a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x336a3c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x336A3Cu;
    SET_GPR_U32(ctx, 31, 0x336A44u);
    ctx->pc = 0x336A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336A3Cu;
            // 0x336a40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336A44u; }
        if (ctx->pc != 0x336A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336A44u; }
        if (ctx->pc != 0x336A44u) { return; }
    }
    ctx->pc = 0x336A44u;
label_336a44:
    // 0x336a44: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x336a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x336a48: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x336A48u;
    SET_GPR_U32(ctx, 31, 0x336A50u);
    ctx->pc = 0x336A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336A48u;
            // 0x336a4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336A50u; }
        if (ctx->pc != 0x336A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336A50u; }
        if (ctx->pc != 0x336A50u) { return; }
    }
    ctx->pc = 0x336A50u;
label_336a50:
    // 0x336a50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x336a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336a54:
    // 0x336a54: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x336a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x336a58: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x336a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x336a5c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x336a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x336a60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x336a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336a64: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x336a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x336a68: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x336a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x336a6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x336a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x336a70: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x336A70u;
    SET_GPR_U32(ctx, 31, 0x336A78u);
    ctx->pc = 0x336A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336A70u;
            // 0x336a74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336A78u; }
        if (ctx->pc != 0x336A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336A78u; }
        if (ctx->pc != 0x336A78u) { return; }
    }
    ctx->pc = 0x336A78u;
label_336a78:
    // 0x336a78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x336a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x336a7c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x336a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x336a80: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x336A80u;
    {
        const bool branch_taken_0x336a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336A80u;
            // 0x336a84: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a80) {
            ctx->pc = 0x336A54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_336a54;
        }
    }
    ctx->pc = 0x336A88u;
label_336a88:
    // 0x336a88: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x336a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336a8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x336a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x336a90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x336a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336a94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x336a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x336AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336AA0u;
            // 0x336aa4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336AA8u;
    // 0x336aa8: 0x0  nop
    ctx->pc = 0x336aa8u;
    // NOP
    // 0x336aac: 0x0  nop
    ctx->pc = 0x336aacu;
    // NOP
    // 0x336ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x336ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x336ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336abc: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x336ABCu;
    SET_GPR_U32(ctx, 31, 0x336AC4u);
    ctx->pc = 0x336AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336ABCu;
            // 0x336ac0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336AC4u; }
        if (ctx->pc != 0x336AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336AC4u; }
        if (ctx->pc != 0x336AC4u) { return; }
    }
    ctx->pc = 0x336AC4u;
label_336ac4:
    // 0x336ac4: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x336AC4u;
    SET_GPR_U32(ctx, 31, 0x336ACCu);
    ctx->pc = 0x336AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336AC4u;
            // 0x336ac8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336ACCu; }
        if (ctx->pc != 0x336ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336ACCu; }
        if (ctx->pc != 0x336ACCu) { return; }
    }
    ctx->pc = 0x336ACCu;
label_336acc:
    // 0x336acc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x336accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x336ad0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x336ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x336ad4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x336ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x336ad8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x336ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x336adc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x336adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x336ae0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x336ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x336ae4: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x336AE4u;
    SET_GPR_U32(ctx, 31, 0x336AECu);
    ctx->pc = 0x336AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336AE4u;
            // 0x336ae8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336AECu; }
        if (ctx->pc != 0x336AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336AECu; }
        if (ctx->pc != 0x336AECu) { return; }
    }
    ctx->pc = 0x336AECu;
label_336aec:
    // 0x336aec: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x336AECu;
    SET_GPR_U32(ctx, 31, 0x336AF4u);
    ctx->pc = 0x336AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336AECu;
            // 0x336af0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336AF4u; }
        if (ctx->pc != 0x336AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336AF4u; }
        if (ctx->pc != 0x336AF4u) { return; }
    }
    ctx->pc = 0x336AF4u;
label_336af4:
    // 0x336af4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x336af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x336af8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x336af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x336afc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x336afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x336b00: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x336b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x336b04: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x336b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x336b08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x336b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336b0c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x336b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x336b10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x336b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x336b14: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x336b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x336b18: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x336b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x336b1c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x336b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x336b20: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x336b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x336b24: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x336b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x336b28: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x336b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x336b2c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x336b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x336b30: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x336B30u;
    SET_GPR_U32(ctx, 31, 0x336B38u);
    ctx->pc = 0x336B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336B30u;
            // 0x336b34: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336B38u; }
        if (ctx->pc != 0x336B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336B38u; }
        if (ctx->pc != 0x336B38u) { return; }
    }
    ctx->pc = 0x336B38u;
label_336b38:
    // 0x336b38: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x336B38u;
    SET_GPR_U32(ctx, 31, 0x336B40u);
    ctx->pc = 0x336B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336B38u;
            // 0x336b3c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336B40u; }
        if (ctx->pc != 0x336B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336B40u; }
        if (ctx->pc != 0x336B40u) { return; }
    }
    ctx->pc = 0x336B40u;
label_336b40:
    // 0x336b40: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x336b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x336b44: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x336b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x336b48: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x336b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x336b4c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x336b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x336b50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x336b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x336b54: 0x24844d20  addiu       $a0, $a0, 0x4D20
    ctx->pc = 0x336b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19744));
    // 0x336b58: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x336b58u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x336b5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x336b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x336b60: 0x24634d60  addiu       $v1, $v1, 0x4D60
    ctx->pc = 0x336b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19808));
    // 0x336b64: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x336b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x336b68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x336b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336b6c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x336b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x336b70: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x336b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x336b74: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x336b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x336b78: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x336b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x336b7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336b84: 0x3e00008  jr          $ra
    ctx->pc = 0x336B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336B84u;
            // 0x336b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336B8Cu;
    // 0x336b8c: 0x0  nop
    ctx->pc = 0x336b8cu;
    // NOP
}
