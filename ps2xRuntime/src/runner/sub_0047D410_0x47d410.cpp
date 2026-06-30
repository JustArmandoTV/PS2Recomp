#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047D410
// Address: 0x47d410 - 0x47d940
void sub_0047D410_0x47d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D410_0x47d410");
#endif

    switch (ctx->pc) {
        case 0x47d458u: goto label_47d458;
        case 0x47d484u: goto label_47d484;
        case 0x47d490u: goto label_47d490;
        case 0x47d4c0u: goto label_47d4c0;
        case 0x47d4ccu: goto label_47d4cc;
        case 0x47d4f8u: goto label_47d4f8;
        case 0x47d504u: goto label_47d504;
        case 0x47d530u: goto label_47d530;
        case 0x47d53cu: goto label_47d53c;
        case 0x47d57cu: goto label_47d57c;
        case 0x47d58cu: goto label_47d58c;
        case 0x47d59cu: goto label_47d59c;
        case 0x47d5acu: goto label_47d5ac;
        case 0x47d5b8u: goto label_47d5b8;
        case 0x47d5e4u: goto label_47d5e4;
        case 0x47d600u: goto label_47d600;
        case 0x47d62cu: goto label_47d62c;
        case 0x47d638u: goto label_47d638;
        case 0x47d668u: goto label_47d668;
        case 0x47d674u: goto label_47d674;
        case 0x47d69cu: goto label_47d69c;
        case 0x47d6a8u: goto label_47d6a8;
        case 0x47d6d0u: goto label_47d6d0;
        case 0x47d6dcu: goto label_47d6dc;
        case 0x47d704u: goto label_47d704;
        case 0x47d710u: goto label_47d710;
        case 0x47d738u: goto label_47d738;
        case 0x47d744u: goto label_47d744;
        case 0x47d76cu: goto label_47d76c;
        case 0x47d778u: goto label_47d778;
        case 0x47d7a0u: goto label_47d7a0;
        case 0x47d7acu: goto label_47d7ac;
        case 0x47d7d8u: goto label_47d7d8;
        case 0x47d7e4u: goto label_47d7e4;
        case 0x47d810u: goto label_47d810;
        case 0x47d81cu: goto label_47d81c;
        case 0x47d848u: goto label_47d848;
        case 0x47d854u: goto label_47d854;
        case 0x47d8a0u: goto label_47d8a0;
        case 0x47d8b0u: goto label_47d8b0;
        case 0x47d8c0u: goto label_47d8c0;
        case 0x47d8d0u: goto label_47d8d0;
        case 0x47d8e0u: goto label_47d8e0;
        case 0x47d8ecu: goto label_47d8ec;
        case 0x47d918u: goto label_47d918;
        default: break;
    }

    ctx->pc = 0x47d410u;

    // 0x47d410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47d414: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x47d414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x47d418: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47d418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x47d41c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47d41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47d420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47d420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47d424: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x47d424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
    // 0x47d428: 0x9085000d  lbu         $a1, 0xD($a0)
    ctx->pc = 0x47d428u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x47d42c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x47d42cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x47d430: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x47d430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x47d434: 0x10a4006f  beq         $a1, $a0, . + 4 + (0x6F << 2)
    ctx->pc = 0x47D434u;
    {
        const bool branch_taken_0x47d434 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x47D438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D434u;
            // 0x47d438: 0x24b1ffff  addiu       $s1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d434) {
            ctx->pc = 0x47D5F4u;
            goto label_47d5f4;
        }
    }
    ctx->pc = 0x47D43Cu;
    // 0x47d43c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x47d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x47d440: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47D440u;
    {
        const bool branch_taken_0x47d440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47d440) {
            ctx->pc = 0x47D444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D440u;
            // 0x47d444: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D450u;
            goto label_47d450;
        }
    }
    ctx->pc = 0x47D448u;
    // 0x47d448: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x47D448u;
    {
        const bool branch_taken_0x47d448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D448u;
            // 0x47d44c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d448) {
            ctx->pc = 0x47D928u;
            goto label_47d928;
        }
    }
    ctx->pc = 0x47D450u;
label_47d450:
    // 0x47d450: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D450u;
    SET_GPR_U32(ctx, 31, 0x47D458u);
    ctx->pc = 0x47D454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D450u;
            // 0x47d454: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D458u; }
        if (ctx->pc != 0x47D458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D458u; }
        if (ctx->pc != 0x47D458u) { return; }
    }
    ctx->pc = 0x47D458u;
label_47d458:
    // 0x47d458: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47D458u;
    {
        const bool branch_taken_0x47d458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d458) {
            ctx->pc = 0x47D45Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D458u;
            // 0x47d45c: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D478u;
            goto label_47d478;
        }
    }
    ctx->pc = 0x47D460u;
    // 0x47d460: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47d464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d468: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x47d468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d46c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x47d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x47d470: 0xa04300d5  sb          $v1, 0xD5($v0)
    ctx->pc = 0x47d470u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 213), (uint8_t)GPR_U32(ctx, 3));
    // 0x47d474: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x47d474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_47d478:
    // 0x47d478: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47d478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d47c: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D47Cu;
    SET_GPR_U32(ctx, 31, 0x47D484u);
    ctx->pc = 0x47D480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D47Cu;
            // 0x47d480: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D484u; }
        if (ctx->pc != 0x47D484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D484u; }
        if (ctx->pc != 0x47D484u) { return; }
    }
    ctx->pc = 0x47D484u;
label_47d484:
    // 0x47d484: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x47d484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x47d488: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D488u;
    SET_GPR_U32(ctx, 31, 0x47D490u);
    ctx->pc = 0x47D48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D488u;
            // 0x47d48c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D490u; }
        if (ctx->pc != 0x47D490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D490u; }
        if (ctx->pc != 0x47D490u) { return; }
    }
    ctx->pc = 0x47D490u;
label_47d490:
    // 0x47d490: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x47D490u;
    {
        const bool branch_taken_0x47d490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d490) {
            ctx->pc = 0x47D494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D490u;
            // 0x47d494: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D4B4u;
            goto label_47d4b4;
        }
    }
    ctx->pc = 0x47D498u;
    // 0x47d498: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d49c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d4a0: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x47d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d4a4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x47d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x47d4a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47d4ac: 0xa0440095  sb          $a0, 0x95($v0)
    ctx->pc = 0x47d4acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 4));
    // 0x47d4b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47d4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47d4b4:
    // 0x47d4b4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x47d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x47d4b8: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D4B8u;
    SET_GPR_U32(ctx, 31, 0x47D4C0u);
    ctx->pc = 0x47D4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D4B8u;
            // 0x47d4bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D4C0u; }
        if (ctx->pc != 0x47D4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D4C0u; }
        if (ctx->pc != 0x47D4C0u) { return; }
    }
    ctx->pc = 0x47D4C0u;
label_47d4c0:
    // 0x47d4c0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x47d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x47d4c4: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D4C4u;
    SET_GPR_U32(ctx, 31, 0x47D4CCu);
    ctx->pc = 0x47D4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D4C4u;
            // 0x47d4c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D4CCu; }
        if (ctx->pc != 0x47D4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D4CCu; }
        if (ctx->pc != 0x47D4CCu) { return; }
    }
    ctx->pc = 0x47D4CCu;
label_47d4cc:
    // 0x47d4cc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47D4CCu;
    {
        const bool branch_taken_0x47d4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d4cc) {
            ctx->pc = 0x47D4D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D4CCu;
            // 0x47d4d0: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D4ECu;
            goto label_47d4ec;
        }
    }
    ctx->pc = 0x47D4D4u;
    // 0x47d4d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d4d8: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x47d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d4dc: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x47d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x47d4e0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x47d4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x47d4e4: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x47d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x47d4e8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x47d4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_47d4ec:
    // 0x47d4ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x47d4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47d4f0: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D4F0u;
    SET_GPR_U32(ctx, 31, 0x47D4F8u);
    ctx->pc = 0x47D4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D4F0u;
            // 0x47d4f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D4F8u; }
        if (ctx->pc != 0x47D4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D4F8u; }
        if (ctx->pc != 0x47D4F8u) { return; }
    }
    ctx->pc = 0x47D4F8u;
label_47d4f8:
    // 0x47d4f8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x47d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x47d4fc: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D4FCu;
    SET_GPR_U32(ctx, 31, 0x47D504u);
    ctx->pc = 0x47D500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D4FCu;
            // 0x47d500: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D504u; }
        if (ctx->pc != 0x47D504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D504u; }
        if (ctx->pc != 0x47D504u) { return; }
    }
    ctx->pc = 0x47D504u;
label_47d504:
    // 0x47d504: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47D504u;
    {
        const bool branch_taken_0x47d504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d504) {
            ctx->pc = 0x47D508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D504u;
            // 0x47d508: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D524u;
            goto label_47d524;
        }
    }
    ctx->pc = 0x47D50Cu;
    // 0x47d50c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d510: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x47d510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d514: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x47d514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x47d518: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x47d518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x47d51c: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x47d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x47d520: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x47d520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_47d524:
    // 0x47d524: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x47d524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x47d528: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D528u;
    SET_GPR_U32(ctx, 31, 0x47D530u);
    ctx->pc = 0x47D52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D528u;
            // 0x47d52c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D530u; }
        if (ctx->pc != 0x47D530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D530u; }
        if (ctx->pc != 0x47D530u) { return; }
    }
    ctx->pc = 0x47D530u;
label_47d530:
    // 0x47d530: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x47d530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x47d534: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D534u;
    SET_GPR_U32(ctx, 31, 0x47D53Cu);
    ctx->pc = 0x47D538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D534u;
            // 0x47d538: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D53Cu; }
        if (ctx->pc != 0x47D53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D53Cu; }
        if (ctx->pc != 0x47D53Cu) { return; }
    }
    ctx->pc = 0x47D53Cu;
label_47d53c:
    // 0x47d53c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x47D53Cu;
    {
        const bool branch_taken_0x47d53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d53c) {
            ctx->pc = 0x47D540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D53Cu;
            // 0x47d540: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D570u;
            goto label_47d570;
        }
    }
    ctx->pc = 0x47D544u;
    // 0x47d544: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d548: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x47d548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d54c: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x47d54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d550: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x47d550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x47d554: 0xa08500e5  sb          $a1, 0xE5($a0)
    ctx->pc = 0x47d554u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 229), (uint8_t)GPR_U32(ctx, 5));
    // 0x47d558: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d55c: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x47d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x47d560: 0xa06500e6  sb          $a1, 0xE6($v1)
    ctx->pc = 0x47d560u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 230), (uint8_t)GPR_U32(ctx, 5));
    // 0x47d564: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x47d564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d568: 0xa04500e7  sb          $a1, 0xE7($v0)
    ctx->pc = 0x47d568u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 231), (uint8_t)GPR_U32(ctx, 5));
    // 0x47d56c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x47d56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_47d570:
    // 0x47d570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47d570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d574: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D574u;
    SET_GPR_U32(ctx, 31, 0x47D57Cu);
    ctx->pc = 0x47D578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D574u;
            // 0x47d578: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D57Cu; }
        if (ctx->pc != 0x47D57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D57Cu; }
        if (ctx->pc != 0x47D57Cu) { return; }
    }
    ctx->pc = 0x47D57Cu;
label_47d57c:
    // 0x47d57c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x47d57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x47d580: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x47d580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x47d584: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D584u;
    SET_GPR_U32(ctx, 31, 0x47D58Cu);
    ctx->pc = 0x47D588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D584u;
            // 0x47d588: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D58Cu; }
        if (ctx->pc != 0x47D58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D58Cu; }
        if (ctx->pc != 0x47D58Cu) { return; }
    }
    ctx->pc = 0x47D58Cu;
label_47d58c:
    // 0x47d58c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x47d58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x47d590: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x47d590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x47d594: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D594u;
    SET_GPR_U32(ctx, 31, 0x47D59Cu);
    ctx->pc = 0x47D598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D594u;
            // 0x47d598: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D59Cu; }
        if (ctx->pc != 0x47D59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D59Cu; }
        if (ctx->pc != 0x47D59Cu) { return; }
    }
    ctx->pc = 0x47D59Cu;
label_47d59c:
    // 0x47d59c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x47d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x47d5a0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x47d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x47d5a4: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D5A4u;
    SET_GPR_U32(ctx, 31, 0x47D5ACu);
    ctx->pc = 0x47D5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D5A4u;
            // 0x47d5a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D5ACu; }
        if (ctx->pc != 0x47D5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D5ACu; }
        if (ctx->pc != 0x47D5ACu) { return; }
    }
    ctx->pc = 0x47D5ACu;
label_47d5ac:
    // 0x47d5ac: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x47d5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x47d5b0: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D5B0u;
    SET_GPR_U32(ctx, 31, 0x47D5B8u);
    ctx->pc = 0x47D5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D5B0u;
            // 0x47d5b4: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D5B8u; }
        if (ctx->pc != 0x47D5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D5B8u; }
        if (ctx->pc != 0x47D5B8u) { return; }
    }
    ctx->pc = 0x47D5B8u;
label_47d5b8:
    // 0x47d5b8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47D5B8u;
    {
        const bool branch_taken_0x47d5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d5b8) {
            ctx->pc = 0x47D5BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D5B8u;
            // 0x47d5bc: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D5D8u;
            goto label_47d5d8;
        }
    }
    ctx->pc = 0x47D5C0u;
    // 0x47d5c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d5c4: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x47d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d5c8: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x47d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x47d5cc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x47d5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x47d5d0: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x47d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x47d5d4: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x47d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_47d5d8:
    // 0x47d5d8: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x47d5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x47d5dc: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D5DCu;
    SET_GPR_U32(ctx, 31, 0x47D5E4u);
    ctx->pc = 0x47D5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D5DCu;
            // 0x47d5e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D5E4u; }
        if (ctx->pc != 0x47D5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D5E4u; }
        if (ctx->pc != 0x47D5E4u) { return; }
    }
    ctx->pc = 0x47D5E4u;
label_47d5e4:
    // 0x47d5e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47d5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d5e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x47d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x47d5ec: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x47D5ECu;
    {
        const bool branch_taken_0x47d5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D5ECu;
            // 0x47d5f0: 0xac643e30  sw          $a0, 0x3E30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 15920), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d5ec) {
            ctx->pc = 0x47D924u;
            goto label_47d924;
        }
    }
    ctx->pc = 0x47D5F4u;
label_47d5f4:
    // 0x47d5f4: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x47d5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x47d5f8: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D5F8u;
    SET_GPR_U32(ctx, 31, 0x47D600u);
    ctx->pc = 0x47D5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D5F8u;
            // 0x47d5fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D600u; }
        if (ctx->pc != 0x47D600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D600u; }
        if (ctx->pc != 0x47D600u) { return; }
    }
    ctx->pc = 0x47D600u;
label_47d600:
    // 0x47d600: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47D600u;
    {
        const bool branch_taken_0x47d600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d600) {
            ctx->pc = 0x47D604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D600u;
            // 0x47d604: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D620u;
            goto label_47d620;
        }
    }
    ctx->pc = 0x47D608u;
    // 0x47d608: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d60c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47d60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d610: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x47d610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d614: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x47d614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x47d618: 0xa04300d5  sb          $v1, 0xD5($v0)
    ctx->pc = 0x47d618u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 213), (uint8_t)GPR_U32(ctx, 3));
    // 0x47d61c: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x47d61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_47d620:
    // 0x47d620: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47d620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d624: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D624u;
    SET_GPR_U32(ctx, 31, 0x47D62Cu);
    ctx->pc = 0x47D628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D624u;
            // 0x47d628: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D62Cu; }
        if (ctx->pc != 0x47D62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D62Cu; }
        if (ctx->pc != 0x47D62Cu) { return; }
    }
    ctx->pc = 0x47D62Cu;
label_47d62c:
    // 0x47d62c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x47d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x47d630: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D630u;
    SET_GPR_U32(ctx, 31, 0x47D638u);
    ctx->pc = 0x47D634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D630u;
            // 0x47d634: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D638u; }
        if (ctx->pc != 0x47D638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D638u; }
        if (ctx->pc != 0x47D638u) { return; }
    }
    ctx->pc = 0x47D638u;
label_47d638:
    // 0x47d638: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x47D638u;
    {
        const bool branch_taken_0x47d638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d638) {
            ctx->pc = 0x47D63Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D638u;
            // 0x47d63c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D65Cu;
            goto label_47d65c;
        }
    }
    ctx->pc = 0x47D640u;
    // 0x47d640: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d644: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47d644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d648: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x47d648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d64c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x47d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x47d650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47d654: 0xa0440095  sb          $a0, 0x95($v0)
    ctx->pc = 0x47d654u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 4));
    // 0x47d658: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47d658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47d65c:
    // 0x47d65c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x47d65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x47d660: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D660u;
    SET_GPR_U32(ctx, 31, 0x47D668u);
    ctx->pc = 0x47D664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D660u;
            // 0x47d664: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D668u; }
        if (ctx->pc != 0x47D668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D668u; }
        if (ctx->pc != 0x47D668u) { return; }
    }
    ctx->pc = 0x47D668u;
label_47d668:
    // 0x47d668: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x47d668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x47d66c: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D66Cu;
    SET_GPR_U32(ctx, 31, 0x47D674u);
    ctx->pc = 0x47D670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D66Cu;
            // 0x47d670: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D674u; }
        if (ctx->pc != 0x47D674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D674u; }
        if (ctx->pc != 0x47D674u) { return; }
    }
    ctx->pc = 0x47D674u;
label_47d674:
    // 0x47d674: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x47D674u;
    {
        const bool branch_taken_0x47d674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d674) {
            ctx->pc = 0x47D678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D674u;
            // 0x47d678: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D690u;
            goto label_47d690;
        }
    }
    ctx->pc = 0x47D67Cu;
    // 0x47d67c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d684: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x47d684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d688: 0xa04300db  sb          $v1, 0xDB($v0)
    ctx->pc = 0x47d688u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 219), (uint8_t)GPR_U32(ctx, 3));
    // 0x47d68c: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x47d68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_47d690:
    // 0x47d690: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x47d690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x47d694: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D694u;
    SET_GPR_U32(ctx, 31, 0x47D69Cu);
    ctx->pc = 0x47D698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D694u;
            // 0x47d698: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D69Cu; }
        if (ctx->pc != 0x47D69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D69Cu; }
        if (ctx->pc != 0x47D69Cu) { return; }
    }
    ctx->pc = 0x47D69Cu;
label_47d69c:
    // 0x47d69c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x47d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x47d6a0: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D6A0u;
    SET_GPR_U32(ctx, 31, 0x47D6A8u);
    ctx->pc = 0x47D6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D6A0u;
            // 0x47d6a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D6A8u; }
        if (ctx->pc != 0x47D6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D6A8u; }
        if (ctx->pc != 0x47D6A8u) { return; }
    }
    ctx->pc = 0x47D6A8u;
label_47d6a8:
    // 0x47d6a8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x47D6A8u;
    {
        const bool branch_taken_0x47d6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d6a8) {
            ctx->pc = 0x47D6ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D6A8u;
            // 0x47d6ac: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D6C4u;
            goto label_47d6c4;
        }
    }
    ctx->pc = 0x47D6B0u;
    // 0x47d6b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d6b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d6b8: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x47d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d6bc: 0xa04300ad  sb          $v1, 0xAD($v0)
    ctx->pc = 0x47d6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 173), (uint8_t)GPR_U32(ctx, 3));
    // 0x47d6c0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x47d6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_47d6c4:
    // 0x47d6c4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x47d6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x47d6c8: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D6C8u;
    SET_GPR_U32(ctx, 31, 0x47D6D0u);
    ctx->pc = 0x47D6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D6C8u;
            // 0x47d6cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D6D0u; }
        if (ctx->pc != 0x47D6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D6D0u; }
        if (ctx->pc != 0x47D6D0u) { return; }
    }
    ctx->pc = 0x47D6D0u;
label_47d6d0:
    // 0x47d6d0: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x47d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x47d6d4: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D6D4u;
    SET_GPR_U32(ctx, 31, 0x47D6DCu);
    ctx->pc = 0x47D6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D6D4u;
            // 0x47d6d8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D6DCu; }
        if (ctx->pc != 0x47D6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D6DCu; }
        if (ctx->pc != 0x47D6DCu) { return; }
    }
    ctx->pc = 0x47D6DCu;
label_47d6dc:
    // 0x47d6dc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x47D6DCu;
    {
        const bool branch_taken_0x47d6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d6dc) {
            ctx->pc = 0x47D6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D6DCu;
            // 0x47d6e0: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D6F8u;
            goto label_47d6f8;
        }
    }
    ctx->pc = 0x47D6E4u;
    // 0x47d6e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d6e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d6ec: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x47d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d6f0: 0xa04300dc  sb          $v1, 0xDC($v0)
    ctx->pc = 0x47d6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 220), (uint8_t)GPR_U32(ctx, 3));
    // 0x47d6f4: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x47d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_47d6f8:
    // 0x47d6f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x47d6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x47d6fc: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D6FCu;
    SET_GPR_U32(ctx, 31, 0x47D704u);
    ctx->pc = 0x47D700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D6FCu;
            // 0x47d700: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D704u; }
        if (ctx->pc != 0x47D704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D704u; }
        if (ctx->pc != 0x47D704u) { return; }
    }
    ctx->pc = 0x47D704u;
label_47d704:
    // 0x47d704: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x47d704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x47d708: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D708u;
    SET_GPR_U32(ctx, 31, 0x47D710u);
    ctx->pc = 0x47D70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D708u;
            // 0x47d70c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D710u; }
        if (ctx->pc != 0x47D710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D710u; }
        if (ctx->pc != 0x47D710u) { return; }
    }
    ctx->pc = 0x47D710u;
label_47d710:
    // 0x47d710: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x47D710u;
    {
        const bool branch_taken_0x47d710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d710) {
            ctx->pc = 0x47D714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D710u;
            // 0x47d714: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D72Cu;
            goto label_47d72c;
        }
    }
    ctx->pc = 0x47D718u;
    // 0x47d718: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d71c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d720: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x47d720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d724: 0xa04300b1  sb          $v1, 0xB1($v0)
    ctx->pc = 0x47d724u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 177), (uint8_t)GPR_U32(ctx, 3));
    // 0x47d728: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x47d728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_47d72c:
    // 0x47d72c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x47d72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x47d730: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D730u;
    SET_GPR_U32(ctx, 31, 0x47D738u);
    ctx->pc = 0x47D734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D730u;
            // 0x47d734: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D738u; }
        if (ctx->pc != 0x47D738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D738u; }
        if (ctx->pc != 0x47D738u) { return; }
    }
    ctx->pc = 0x47D738u;
label_47d738:
    // 0x47d738: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x47d738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x47d73c: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D73Cu;
    SET_GPR_U32(ctx, 31, 0x47D744u);
    ctx->pc = 0x47D740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D73Cu;
            // 0x47d740: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D744u; }
        if (ctx->pc != 0x47D744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D744u; }
        if (ctx->pc != 0x47D744u) { return; }
    }
    ctx->pc = 0x47D744u;
label_47d744:
    // 0x47d744: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x47D744u;
    {
        const bool branch_taken_0x47d744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d744) {
            ctx->pc = 0x47D748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D744u;
            // 0x47d748: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D760u;
            goto label_47d760;
        }
    }
    ctx->pc = 0x47D74Cu;
    // 0x47d74c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47d750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d754: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x47d754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d758: 0xa04300e4  sb          $v1, 0xE4($v0)
    ctx->pc = 0x47d758u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 228), (uint8_t)GPR_U32(ctx, 3));
    // 0x47d75c: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x47d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_47d760:
    // 0x47d760: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x47d760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x47d764: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D764u;
    SET_GPR_U32(ctx, 31, 0x47D76Cu);
    ctx->pc = 0x47D768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D764u;
            // 0x47d768: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D76Cu; }
        if (ctx->pc != 0x47D76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D76Cu; }
        if (ctx->pc != 0x47D76Cu) { return; }
    }
    ctx->pc = 0x47D76Cu;
label_47d76c:
    // 0x47d76c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x47d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x47d770: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D770u;
    SET_GPR_U32(ctx, 31, 0x47D778u);
    ctx->pc = 0x47D774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D770u;
            // 0x47d774: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D778u; }
        if (ctx->pc != 0x47D778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D778u; }
        if (ctx->pc != 0x47D778u) { return; }
    }
    ctx->pc = 0x47D778u;
label_47d778:
    // 0x47d778: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x47D778u;
    {
        const bool branch_taken_0x47d778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d778) {
            ctx->pc = 0x47D77Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D778u;
            // 0x47d77c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D794u;
            goto label_47d794;
        }
    }
    ctx->pc = 0x47D780u;
    // 0x47d780: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47d784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d788: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x47d788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d78c: 0xa04300d1  sb          $v1, 0xD1($v0)
    ctx->pc = 0x47d78cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 209), (uint8_t)GPR_U32(ctx, 3));
    // 0x47d790: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x47d790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_47d794:
    // 0x47d794: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x47d794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x47d798: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D798u;
    SET_GPR_U32(ctx, 31, 0x47D7A0u);
    ctx->pc = 0x47D79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D798u;
            // 0x47d79c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D7A0u; }
        if (ctx->pc != 0x47D7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D7A0u; }
        if (ctx->pc != 0x47D7A0u) { return; }
    }
    ctx->pc = 0x47D7A0u;
label_47d7a0:
    // 0x47d7a0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x47d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x47d7a4: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D7A4u;
    SET_GPR_U32(ctx, 31, 0x47D7ACu);
    ctx->pc = 0x47D7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D7A4u;
            // 0x47d7a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D7ACu; }
        if (ctx->pc != 0x47D7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D7ACu; }
        if (ctx->pc != 0x47D7ACu) { return; }
    }
    ctx->pc = 0x47D7ACu;
label_47d7ac:
    // 0x47d7ac: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47D7ACu;
    {
        const bool branch_taken_0x47d7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d7ac) {
            ctx->pc = 0x47D7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D7ACu;
            // 0x47d7b0: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D7CCu;
            goto label_47d7cc;
        }
    }
    ctx->pc = 0x47D7B4u;
    // 0x47d7b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d7b8: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x47d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d7bc: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x47d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x47d7c0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x47d7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x47d7c4: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x47d7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x47d7c8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x47d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_47d7cc:
    // 0x47d7cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x47d7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47d7d0: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D7D0u;
    SET_GPR_U32(ctx, 31, 0x47D7D8u);
    ctx->pc = 0x47D7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D7D0u;
            // 0x47d7d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D7D8u; }
        if (ctx->pc != 0x47D7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D7D8u; }
        if (ctx->pc != 0x47D7D8u) { return; }
    }
    ctx->pc = 0x47D7D8u;
label_47d7d8:
    // 0x47d7d8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x47d7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x47d7dc: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D7DCu;
    SET_GPR_U32(ctx, 31, 0x47D7E4u);
    ctx->pc = 0x47D7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D7DCu;
            // 0x47d7e0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D7E4u; }
        if (ctx->pc != 0x47D7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D7E4u; }
        if (ctx->pc != 0x47D7E4u) { return; }
    }
    ctx->pc = 0x47D7E4u;
label_47d7e4:
    // 0x47d7e4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47D7E4u;
    {
        const bool branch_taken_0x47d7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d7e4) {
            ctx->pc = 0x47D7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D7E4u;
            // 0x47d7e8: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D804u;
            goto label_47d804;
        }
    }
    ctx->pc = 0x47D7ECu;
    // 0x47d7ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d7f0: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x47d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d7f4: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x47d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x47d7f8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x47d7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x47d7fc: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x47d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x47d800: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x47d800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_47d804:
    // 0x47d804: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x47d804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x47d808: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D808u;
    SET_GPR_U32(ctx, 31, 0x47D810u);
    ctx->pc = 0x47D80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D808u;
            // 0x47d80c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D810u; }
        if (ctx->pc != 0x47D810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D810u; }
        if (ctx->pc != 0x47D810u) { return; }
    }
    ctx->pc = 0x47D810u;
label_47d810:
    // 0x47d810: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x47d810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x47d814: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D814u;
    SET_GPR_U32(ctx, 31, 0x47D81Cu);
    ctx->pc = 0x47D818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D814u;
            // 0x47d818: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D81Cu; }
        if (ctx->pc != 0x47D81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D81Cu; }
        if (ctx->pc != 0x47D81Cu) { return; }
    }
    ctx->pc = 0x47D81Cu;
label_47d81c:
    // 0x47d81c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47D81Cu;
    {
        const bool branch_taken_0x47d81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d81c) {
            ctx->pc = 0x47D820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D81Cu;
            // 0x47d820: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D83Cu;
            goto label_47d83c;
        }
    }
    ctx->pc = 0x47D824u;
    // 0x47d824: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d828: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x47d828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d82c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x47d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x47d830: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x47d830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x47d834: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x47d834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x47d838: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x47d838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_47d83c:
    // 0x47d83c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x47d83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x47d840: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D840u;
    SET_GPR_U32(ctx, 31, 0x47D848u);
    ctx->pc = 0x47D844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D840u;
            // 0x47d844: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D848u; }
        if (ctx->pc != 0x47D848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D848u; }
        if (ctx->pc != 0x47D848u) { return; }
    }
    ctx->pc = 0x47D848u;
label_47d848:
    // 0x47d848: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x47d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x47d84c: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D84Cu;
    SET_GPR_U32(ctx, 31, 0x47D854u);
    ctx->pc = 0x47D850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D84Cu;
            // 0x47d850: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D854u; }
        if (ctx->pc != 0x47D854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D854u; }
        if (ctx->pc != 0x47D854u) { return; }
    }
    ctx->pc = 0x47D854u;
label_47d854:
    // 0x47d854: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x47D854u;
    {
        const bool branch_taken_0x47d854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d854) {
            ctx->pc = 0x47D858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D854u;
            // 0x47d858: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D894u;
            goto label_47d894;
        }
    }
    ctx->pc = 0x47D85Cu;
    // 0x47d85c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d860: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47d860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d864: 0x8c4589d0  lw          $a1, -0x7630($v0)
    ctx->pc = 0x47d864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d868: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x47d868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x47d86c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x47d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x47d870: 0xa0a600e8  sb          $a2, 0xE8($a1)
    ctx->pc = 0x47d870u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 232), (uint8_t)GPR_U32(ctx, 6));
    // 0x47d874: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d878: 0x8c8489d0  lw          $a0, -0x7630($a0)
    ctx->pc = 0x47d878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937040)));
    // 0x47d87c: 0xa08600e9  sb          $a2, 0xE9($a0)
    ctx->pc = 0x47d87cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 233), (uint8_t)GPR_U32(ctx, 6));
    // 0x47d880: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x47d880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x47d884: 0xa06600ea  sb          $a2, 0xEA($v1)
    ctx->pc = 0x47d884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 234), (uint8_t)GPR_U32(ctx, 6));
    // 0x47d888: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x47d888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d88c: 0xa04600eb  sb          $a2, 0xEB($v0)
    ctx->pc = 0x47d88cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 235), (uint8_t)GPR_U32(ctx, 6));
    // 0x47d890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x47d890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47d894:
    // 0x47d894: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x47d894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x47d898: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D898u;
    SET_GPR_U32(ctx, 31, 0x47D8A0u);
    ctx->pc = 0x47D89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D898u;
            // 0x47d89c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D8A0u; }
        if (ctx->pc != 0x47D8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D8A0u; }
        if (ctx->pc != 0x47D8A0u) { return; }
    }
    ctx->pc = 0x47D8A0u;
label_47d8a0:
    // 0x47d8a0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x47d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x47d8a4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x47d8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x47d8a8: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D8A8u;
    SET_GPR_U32(ctx, 31, 0x47D8B0u);
    ctx->pc = 0x47D8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D8A8u;
            // 0x47d8ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D8B0u; }
        if (ctx->pc != 0x47D8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D8B0u; }
        if (ctx->pc != 0x47D8B0u) { return; }
    }
    ctx->pc = 0x47D8B0u;
label_47d8b0:
    // 0x47d8b0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x47d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x47d8b4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x47d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x47d8b8: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D8B8u;
    SET_GPR_U32(ctx, 31, 0x47D8C0u);
    ctx->pc = 0x47D8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D8B8u;
            // 0x47d8bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D8C0u; }
        if (ctx->pc != 0x47D8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D8C0u; }
        if (ctx->pc != 0x47D8C0u) { return; }
    }
    ctx->pc = 0x47D8C0u;
label_47d8c0:
    // 0x47d8c0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x47d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x47d8c4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x47d8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x47d8c8: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D8C8u;
    SET_GPR_U32(ctx, 31, 0x47D8D0u);
    ctx->pc = 0x47D8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D8C8u;
            // 0x47d8cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D8D0u; }
        if (ctx->pc != 0x47D8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D8D0u; }
        if (ctx->pc != 0x47D8D0u) { return; }
    }
    ctx->pc = 0x47D8D0u;
label_47d8d0:
    // 0x47d8d0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x47d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x47d8d4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x47d8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x47d8d8: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D8D8u;
    SET_GPR_U32(ctx, 31, 0x47D8E0u);
    ctx->pc = 0x47D8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D8D8u;
            // 0x47d8dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D8E0u; }
        if (ctx->pc != 0x47D8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D8E0u; }
        if (ctx->pc != 0x47D8E0u) { return; }
    }
    ctx->pc = 0x47D8E0u;
label_47d8e0:
    // 0x47d8e0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x47d8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x47d8e4: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x47D8E4u;
    SET_GPR_U32(ctx, 31, 0x47D8ECu);
    ctx->pc = 0x47D8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D8E4u;
            // 0x47d8e8: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D8ECu; }
        if (ctx->pc != 0x47D8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D8ECu; }
        if (ctx->pc != 0x47D8ECu) { return; }
    }
    ctx->pc = 0x47D8ECu;
label_47d8ec:
    // 0x47d8ec: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47D8ECu;
    {
        const bool branch_taken_0x47d8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d8ec) {
            ctx->pc = 0x47D8F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47D8ECu;
            // 0x47d8f0: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47D90Cu;
            goto label_47d90c;
        }
    }
    ctx->pc = 0x47D8F4u;
    // 0x47d8f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47d8f8: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x47d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x47d8fc: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x47d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x47d900: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x47d900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x47d904: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x47d904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x47d908: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x47d908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_47d90c:
    // 0x47d90c: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x47d90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x47d910: 0xc0ca4b0  jal         func_3292C0
    ctx->pc = 0x47D910u;
    SET_GPR_U32(ctx, 31, 0x47D918u);
    ctx->pc = 0x47D914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47D910u;
            // 0x47d914: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D918u; }
        if (ctx->pc != 0x47D918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47D918u; }
        if (ctx->pc != 0x47D918u) { return; }
    }
    ctx->pc = 0x47D918u;
label_47d918:
    // 0x47d918: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47d918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d91c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x47d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x47d920: 0xac643e30  sw          $a0, 0x3E30($v1)
    ctx->pc = 0x47d920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15920), GPR_U32(ctx, 4));
label_47d924:
    // 0x47d924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47d924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47d928:
    // 0x47d928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47d928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47d92c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47d92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47d930: 0x3e00008  jr          $ra
    ctx->pc = 0x47D930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47D930u;
            // 0x47d934: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47D938u;
    // 0x47d938: 0x0  nop
    ctx->pc = 0x47d938u;
    // NOP
    // 0x47d93c: 0x0  nop
    ctx->pc = 0x47d93cu;
    // NOP
}
