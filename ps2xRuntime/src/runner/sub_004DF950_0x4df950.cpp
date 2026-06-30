#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DF950
// Address: 0x4df950 - 0x4dfae0
void sub_004DF950_0x4df950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF950_0x4df950");
#endif

    switch (ctx->pc) {
        case 0x4df96cu: goto label_4df96c;
        case 0x4df98cu: goto label_4df98c;
        case 0x4df9d4u: goto label_4df9d4;
        case 0x4df9f0u: goto label_4df9f0;
        case 0x4dfa10u: goto label_4dfa10;
        case 0x4dfa70u: goto label_4dfa70;
        case 0x4dfa7cu: goto label_4dfa7c;
        case 0x4dfa88u: goto label_4dfa88;
        case 0x4dfa94u: goto label_4dfa94;
        case 0x4dfaa0u: goto label_4dfaa0;
        case 0x4dfaacu: goto label_4dfaac;
        case 0x4dfac4u: goto label_4dfac4;
        default: break;
    }

    ctx->pc = 0x4df950u;

    // 0x4df950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4df950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4df954: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4df954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4df958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4df958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4df95c: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x4df95cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
    // 0x4df960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4df960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4df964: 0xc137ef0  jal         func_4DFBC0
    ctx->pc = 0x4DF964u;
    SET_GPR_U32(ctx, 31, 0x4DF96Cu);
    ctx->pc = 0x4DF968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF964u;
            // 0x4df968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DFBC0u;
    if (runtime->hasFunction(0x4DFBC0u)) {
        auto targetFn = runtime->lookupFunction(0x4DFBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF96Cu; }
        if (ctx->pc != 0x4DF96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DFBC0_0x4dfbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF96Cu; }
        if (ctx->pc != 0x4DF96Cu) { return; }
    }
    ctx->pc = 0x4DF96Cu;
label_4df96c:
    // 0x4df96c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4df96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4df970: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4df970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4df974: 0x24633260  addiu       $v1, $v1, 0x3260
    ctx->pc = 0x4df974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12896));
    // 0x4df978: 0x24423298  addiu       $v0, $v0, 0x3298
    ctx->pc = 0x4df978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12952));
    // 0x4df97c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4df97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4df980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4df980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df984: 0xc137eec  jal         func_4DFBB0
    ctx->pc = 0x4DF984u;
    SET_GPR_U32(ctx, 31, 0x4DF98Cu);
    ctx->pc = 0x4DF988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF984u;
            // 0x4df988: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DFBB0u;
    if (runtime->hasFunction(0x4DFBB0u)) {
        auto targetFn = runtime->lookupFunction(0x4DFBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF98Cu; }
        if (ctx->pc != 0x4DF98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DFBB0_0x4dfbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF98Cu; }
        if (ctx->pc != 0x4DF98Cu) { return; }
    }
    ctx->pc = 0x4DF98Cu;
label_4df98c:
    // 0x4df98c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4df98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4df990: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x4df990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x4df994: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4df994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4df998: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4df998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4df99c: 0x244231b0  addiu       $v0, $v0, 0x31B0
    ctx->pc = 0x4df99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12720));
    // 0x4df9a0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4df9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4df9a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4df9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4df9a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4df9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4df9ac: 0x244231e8  addiu       $v0, $v0, 0x31E8
    ctx->pc = 0x4df9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12776));
    // 0x4df9b0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4df9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4df9b4: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x4df9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x4df9b8: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x4df9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x4df9bc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4df9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4df9c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4df9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4df9c4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x4df9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x4df9c8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4df9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4df9cc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4DF9CCu;
    SET_GPR_U32(ctx, 31, 0x4DF9D4u);
    ctx->pc = 0x4DF9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF9CCu;
            // 0x4df9d0: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF9D4u; }
        if (ctx->pc != 0x4DF9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF9D4u; }
        if (ctx->pc != 0x4DF9D4u) { return; }
    }
    ctx->pc = 0x4DF9D4u;
label_4df9d4:
    // 0x4df9d4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4df9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4df9d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4df9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df9dc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DF9DCu;
    {
        const bool branch_taken_0x4df9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF9DCu;
            // 0x4df9e0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df9dc) {
            ctx->pc = 0x4DF9F4u;
            goto label_4df9f4;
        }
    }
    ctx->pc = 0x4DF9E4u;
    // 0x4df9e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4df9e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4df9e8: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4DF9E8u;
    SET_GPR_U32(ctx, 31, 0x4DF9F0u);
    ctx->pc = 0x4DF9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF9E8u;
            // 0x4df9ec: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF9F0u; }
        if (ctx->pc != 0x4DF9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DF9F0u; }
        if (ctx->pc != 0x4DF9F0u) { return; }
    }
    ctx->pc = 0x4DF9F0u;
label_4df9f0:
    // 0x4df9f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4df9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4df9f4:
    // 0x4df9f4: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4df9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4df9f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4df9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df9fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4df9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dfa00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dfa00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dfa04: 0x3e00008  jr          $ra
    ctx->pc = 0x4DFA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DFA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFA04u;
            // 0x4dfa08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DFA0Cu;
    // 0x4dfa0c: 0x0  nop
    ctx->pc = 0x4dfa0cu;
    // NOP
label_4dfa10:
    // 0x4dfa10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dfa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4dfa14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dfa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4dfa18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dfa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4dfa1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dfa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4dfa20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dfa20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dfa24: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4DFA24u;
    {
        const bool branch_taken_0x4dfa24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFA24u;
            // 0x4dfa28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfa24) {
            ctx->pc = 0x4DFAC4u;
            goto label_4dfac4;
        }
    }
    ctx->pc = 0x4DFA2Cu;
    // 0x4dfa2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dfa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4dfa30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dfa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4dfa34: 0x24633260  addiu       $v1, $v1, 0x3260
    ctx->pc = 0x4dfa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12896));
    // 0x4dfa38: 0x24423298  addiu       $v0, $v0, 0x3298
    ctx->pc = 0x4dfa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12952));
    // 0x4dfa3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dfa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dfa40: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4DFA40u;
    {
        const bool branch_taken_0x4dfa40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFA40u;
            // 0x4dfa44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfa40) {
            ctx->pc = 0x4DFAACu;
            goto label_4dfaac;
        }
    }
    ctx->pc = 0x4DFA48u;
    // 0x4dfa48: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dfa48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4dfa4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dfa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4dfa50: 0x24633210  addiu       $v1, $v1, 0x3210
    ctx->pc = 0x4dfa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12816));
    // 0x4dfa54: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4dfa54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x4dfa58: 0x24423248  addiu       $v0, $v0, 0x3248
    ctx->pc = 0x4dfa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12872));
    // 0x4dfa5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dfa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dfa60: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4dfa60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4dfa64: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4dfa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4dfa68: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4DFA68u;
    SET_GPR_U32(ctx, 31, 0x4DFA70u);
    ctx->pc = 0x4DFA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFA68u;
            // 0x4dfa6c: 0x24a5f510  addiu       $a1, $a1, -0xAF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFA70u; }
        if (ctx->pc != 0x4DFA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFA70u; }
        if (ctx->pc != 0x4DFA70u) { return; }
    }
    ctx->pc = 0x4DFA70u;
label_4dfa70:
    // 0x4dfa70: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4dfa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4dfa74: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4DFA74u;
    SET_GPR_U32(ctx, 31, 0x4DFA7Cu);
    ctx->pc = 0x4DFA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFA74u;
            // 0x4dfa78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFA7Cu; }
        if (ctx->pc != 0x4DFA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFA7Cu; }
        if (ctx->pc != 0x4DFA7Cu) { return; }
    }
    ctx->pc = 0x4DFA7Cu;
label_4dfa7c:
    // 0x4dfa7c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4dfa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4dfa80: 0xc137ed0  jal         func_4DFB40
    ctx->pc = 0x4DFA80u;
    SET_GPR_U32(ctx, 31, 0x4DFA88u);
    ctx->pc = 0x4DFA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFA80u;
            // 0x4dfa84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DFB40u;
    if (runtime->hasFunction(0x4DFB40u)) {
        auto targetFn = runtime->lookupFunction(0x4DFB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFA88u; }
        if (ctx->pc != 0x4DFA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DFB40_0x4dfb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFA88u; }
        if (ctx->pc != 0x4DFA88u) { return; }
    }
    ctx->pc = 0x4DFA88u;
label_4dfa88:
    // 0x4dfa88: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4dfa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4dfa8c: 0xc137ed0  jal         func_4DFB40
    ctx->pc = 0x4DFA8Cu;
    SET_GPR_U32(ctx, 31, 0x4DFA94u);
    ctx->pc = 0x4DFA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFA8Cu;
            // 0x4dfa90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DFB40u;
    if (runtime->hasFunction(0x4DFB40u)) {
        auto targetFn = runtime->lookupFunction(0x4DFB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFA94u; }
        if (ctx->pc != 0x4DFA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DFB40_0x4dfb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFA94u; }
        if (ctx->pc != 0x4DFA94u) { return; }
    }
    ctx->pc = 0x4DFA94u;
label_4dfa94:
    // 0x4dfa94: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4dfa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4dfa98: 0xc137eb8  jal         func_4DFAE0
    ctx->pc = 0x4DFA98u;
    SET_GPR_U32(ctx, 31, 0x4DFAA0u);
    ctx->pc = 0x4DFA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFA98u;
            // 0x4dfa9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DFAE0u;
    if (runtime->hasFunction(0x4DFAE0u)) {
        auto targetFn = runtime->lookupFunction(0x4DFAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFAA0u; }
        if (ctx->pc != 0x4DFAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DFAE0_0x4dfae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFAA0u; }
        if (ctx->pc != 0x4DFAA0u) { return; }
    }
    ctx->pc = 0x4DFAA0u;
label_4dfaa0:
    // 0x4dfaa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dfaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dfaa4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4DFAA4u;
    SET_GPR_U32(ctx, 31, 0x4DFAACu);
    ctx->pc = 0x4DFAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFAA4u;
            // 0x4dfaa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFAACu; }
        if (ctx->pc != 0x4DFAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFAACu; }
        if (ctx->pc != 0x4DFAACu) { return; }
    }
    ctx->pc = 0x4DFAACu;
label_4dfaac:
    // 0x4dfaac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4dfaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4dfab0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dfab0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4dfab4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DFAB4u;
    {
        const bool branch_taken_0x4dfab4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4dfab4) {
            ctx->pc = 0x4DFAB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFAB4u;
            // 0x4dfab8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DFAC8u;
            goto label_4dfac8;
        }
    }
    ctx->pc = 0x4DFABCu;
    // 0x4dfabc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4DFABCu;
    SET_GPR_U32(ctx, 31, 0x4DFAC4u);
    ctx->pc = 0x4DFAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFABCu;
            // 0x4dfac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFAC4u; }
        if (ctx->pc != 0x4DFAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFAC4u; }
        if (ctx->pc != 0x4DFAC4u) { return; }
    }
    ctx->pc = 0x4DFAC4u;
label_4dfac4:
    // 0x4dfac4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4dfac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dfac8:
    // 0x4dfac8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dfac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4dfacc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dfaccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dfad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dfad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dfad4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DFAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DFAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFAD4u;
            // 0x4dfad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DFADCu;
    // 0x4dfadc: 0x0  nop
    ctx->pc = 0x4dfadcu;
    // NOP
}
