#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA480
// Address: 0x1ba480 - 0x1ba638
void sub_001BA480_0x1ba480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA480_0x1ba480");
#endif

    switch (ctx->pc) {
        case 0x1ba4b8u: goto label_1ba4b8;
        case 0x1ba4e8u: goto label_1ba4e8;
        case 0x1ba4fcu: goto label_1ba4fc;
        case 0x1ba510u: goto label_1ba510;
        case 0x1ba524u: goto label_1ba524;
        case 0x1ba540u: goto label_1ba540;
        case 0x1ba554u: goto label_1ba554;
        case 0x1ba568u: goto label_1ba568;
        case 0x1ba57cu: goto label_1ba57c;
        default: break;
    }

    ctx->pc = 0x1ba480u;

    // 0x1ba480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ba480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ba484: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ba484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1ba488: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ba488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba48c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ba48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ba490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ba494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ba498: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1ba498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1ba49c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ba49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ba4a0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ba4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ba4a4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1ba4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1ba4a8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1ba4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1ba4ac: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ba4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1ba4b0: 0xc06e864  jal         func_1BA190
    ctx->pc = 0x1BA4B0u;
    SET_GPR_U32(ctx, 31, 0x1BA4B8u);
    ctx->pc = 0x1BA4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4B0u;
            // 0x1ba4b4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA190u;
    if (runtime->hasFunction(0x1BA190u)) {
        auto targetFn = runtime->lookupFunction(0x1BA190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4B8u; }
        if (ctx->pc != 0x1BA4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA190_0x1ba190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4B8u; }
        if (ctx->pc != 0x1BA4B8u) { return; }
    }
    ctx->pc = 0x1BA4B8u;
label_1ba4b8:
    // 0x1ba4b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba4bc: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA4BCu;
    {
        const bool branch_taken_0x1ba4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba4bc) {
            ctx->pc = 0x1BA4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4BCu;
            // 0x1ba4c0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA4D0u;
            goto label_1ba4d0;
        }
    }
    ctx->pc = 0x1BA4C4u;
    // 0x1ba4c4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1BA4C4u;
    {
        const bool branch_taken_0x1ba4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4C4u;
            // 0x1ba4c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4c4) {
            ctx->pc = 0x1BA620u;
            goto label_1ba620;
        }
    }
    ctx->pc = 0x1BA4CCu;
    // 0x1ba4cc: 0x0  nop
    ctx->pc = 0x1ba4ccu;
    // NOP
label_1ba4d0:
    // 0x1ba4d0: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x1ba4d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
    // 0x1ba4d4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1BA4D4u;
    {
        const bool branch_taken_0x1ba4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4D4u;
            // 0x1ba4d8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4d4) {
            ctx->pc = 0x1BA59Cu;
            goto label_1ba59c;
        }
    }
    ctx->pc = 0x1BA4DCu;
    // 0x1ba4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba4e0: 0xc06ed50  jal         func_1BB540
    ctx->pc = 0x1BA4E0u;
    SET_GPR_U32(ctx, 31, 0x1BA4E8u);
    ctx->pc = 0x1BA4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4E0u;
            // 0x1ba4e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB540u;
    if (runtime->hasFunction(0x1BB540u)) {
        auto targetFn = runtime->lookupFunction(0x1BB540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4E8u; }
        if (ctx->pc != 0x1BA4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB540_0x1bb540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4E8u; }
        if (ctx->pc != 0x1BA4E8u) { return; }
    }
    ctx->pc = 0x1BA4E8u;
label_1ba4e8:
    // 0x1ba4e8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BA4E8u;
    {
        const bool branch_taken_0x1ba4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4E8u;
            // 0x1ba4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4e8) {
            ctx->pc = 0x1BA538u;
            goto label_1ba538;
        }
    }
    ctx->pc = 0x1BA4F0u;
    // 0x1ba4f0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1ba4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ba4f4: 0xc06ee28  jal         func_1BB8A0
    ctx->pc = 0x1BA4F4u;
    SET_GPR_U32(ctx, 31, 0x1BA4FCu);
    ctx->pc = 0x1BA4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4F4u;
            // 0x1ba4f8: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8A0u;
    if (runtime->hasFunction(0x1BB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4FCu; }
        if (ctx->pc != 0x1BA4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB8A0_0x1bb8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA4FCu; }
        if (ctx->pc != 0x1BA4FCu) { return; }
    }
    ctx->pc = 0x1BA4FCu;
label_1ba4fc:
    // 0x1ba4fc: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1BA4FCu;
    {
        const bool branch_taken_0x1ba4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4FCu;
            // 0x1ba500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4fc) {
            ctx->pc = 0x1BA620u;
            goto label_1ba620;
        }
    }
    ctx->pc = 0x1BA504u;
    // 0x1ba504: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x1ba504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1ba508: 0xc06ee5e  jal         func_1BB978
    ctx->pc = 0x1BA508u;
    SET_GPR_U32(ctx, 31, 0x1BA510u);
    ctx->pc = 0x1BA50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA508u;
            // 0x1ba50c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB978u;
    if (runtime->hasFunction(0x1BB978u)) {
        auto targetFn = runtime->lookupFunction(0x1BB978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA510u; }
        if (ctx->pc != 0x1BA510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB978_0x1bb978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA510u; }
        if (ctx->pc != 0x1BA510u) { return; }
    }
    ctx->pc = 0x1BA510u;
label_1ba510:
    // 0x1ba510: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1BA510u;
    {
        const bool branch_taken_0x1ba510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA510u;
            // 0x1ba514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba510) {
            ctx->pc = 0x1BA620u;
            goto label_1ba620;
        }
    }
    ctx->pc = 0x1BA518u;
    // 0x1ba518: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x1ba518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1ba51c: 0xc06ee64  jal         func_1BB990
    ctx->pc = 0x1BA51Cu;
    SET_GPR_U32(ctx, 31, 0x1BA524u);
    ctx->pc = 0x1BA520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA51Cu;
            // 0x1ba520: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB990u;
    if (runtime->hasFunction(0x1BB990u)) {
        auto targetFn = runtime->lookupFunction(0x1BB990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA524u; }
        if (ctx->pc != 0x1BA524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB990_0x1bb990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA524u; }
        if (ctx->pc != 0x1BA524u) { return; }
    }
    ctx->pc = 0x1BA524u;
label_1ba524:
    // 0x1ba524: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BA524u;
    {
        const bool branch_taken_0x1ba524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA524u;
            // 0x1ba528: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba524) {
            ctx->pc = 0x1BA588u;
            goto label_1ba588;
        }
    }
    ctx->pc = 0x1BA52Cu;
    // 0x1ba52c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ba52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1ba530: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1BA530u;
    {
        const bool branch_taken_0x1ba530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA530u;
            // 0x1ba534: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba530) {
            ctx->pc = 0x1BA588u;
            goto label_1ba588;
        }
    }
    ctx->pc = 0x1BA538u;
label_1ba538:
    // 0x1ba538: 0xc06f0fa  jal         func_1BC3E8
    ctx->pc = 0x1BA538u;
    SET_GPR_U32(ctx, 31, 0x1BA540u);
    ctx->pc = 0x1BA53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA538u;
            // 0x1ba53c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC3E8u;
    if (runtime->hasFunction(0x1BC3E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BC3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA540u; }
        if (ctx->pc != 0x1BA540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC3E8_0x1bc3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA540u; }
        if (ctx->pc != 0x1BA540u) { return; }
    }
    ctx->pc = 0x1BA540u;
label_1ba540:
    // 0x1ba540: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BA540u;
    {
        const bool branch_taken_0x1ba540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA540u;
            // 0x1ba544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba540) {
            ctx->pc = 0x1BA58Cu;
            goto label_1ba58c;
        }
    }
    ctx->pc = 0x1BA548u;
    // 0x1ba548: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1ba548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ba54c: 0xc06f1b4  jal         func_1BC6D0
    ctx->pc = 0x1BA54Cu;
    SET_GPR_U32(ctx, 31, 0x1BA554u);
    ctx->pc = 0x1BA550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA54Cu;
            // 0x1ba550: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC6D0u;
    if (runtime->hasFunction(0x1BC6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1BC6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA554u; }
        if (ctx->pc != 0x1BA554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC6D0_0x1bc6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA554u; }
        if (ctx->pc != 0x1BA554u) { return; }
    }
    ctx->pc = 0x1BA554u;
label_1ba554:
    // 0x1ba554: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1BA554u;
    {
        const bool branch_taken_0x1ba554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA554u;
            // 0x1ba558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba554) {
            ctx->pc = 0x1BA620u;
            goto label_1ba620;
        }
    }
    ctx->pc = 0x1BA55Cu;
    // 0x1ba55c: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x1ba55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1ba560: 0xc06f1d0  jal         func_1BC740
    ctx->pc = 0x1BA560u;
    SET_GPR_U32(ctx, 31, 0x1BA568u);
    ctx->pc = 0x1BA564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA560u;
            // 0x1ba564: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC740u;
    if (runtime->hasFunction(0x1BC740u)) {
        auto targetFn = runtime->lookupFunction(0x1BC740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA568u; }
        if (ctx->pc != 0x1BA568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC740_0x1bc740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA568u; }
        if (ctx->pc != 0x1BA568u) { return; }
    }
    ctx->pc = 0x1BA568u;
label_1ba568:
    // 0x1ba568: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BA568u;
    {
        const bool branch_taken_0x1ba568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA568u;
            // 0x1ba56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba568) {
            ctx->pc = 0x1BA620u;
            goto label_1ba620;
        }
    }
    ctx->pc = 0x1BA570u;
    // 0x1ba570: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x1ba570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1ba574: 0xc06f1da  jal         func_1BC768
    ctx->pc = 0x1BA574u;
    SET_GPR_U32(ctx, 31, 0x1BA57Cu);
    ctx->pc = 0x1BA578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA574u;
            // 0x1ba578: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC768u;
    if (runtime->hasFunction(0x1BC768u)) {
        auto targetFn = runtime->lookupFunction(0x1BC768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA57Cu; }
        if (ctx->pc != 0x1BA57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC768_0x1bc768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA57Cu; }
        if (ctx->pc != 0x1BA57Cu) { return; }
    }
    ctx->pc = 0x1BA57Cu;
label_1ba57c:
    // 0x1ba57c: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BA57Cu;
    {
        const bool branch_taken_0x1ba57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba57c) {
            ctx->pc = 0x1BA580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA57Cu;
            // 0x1ba580: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA624u;
            goto label_1ba624;
        }
    }
    ctx->pc = 0x1BA584u;
    // 0x1ba584: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ba584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ba588:
    // 0x1ba588: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ba588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ba58c:
    // 0x1ba58c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ba58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ba590: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ba590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba594: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA594u;
    {
        const bool branch_taken_0x1ba594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA594u;
            // 0x1ba598: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba594) {
            ctx->pc = 0x1BA5A8u;
            goto label_1ba5a8;
        }
    }
    ctx->pc = 0x1BA59Cu;
label_1ba59c:
    // 0x1ba59c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba59cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba5a0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1BA5A0u;
    {
        const bool branch_taken_0x1ba5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA5A0u;
            // 0x1ba5a4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5a0) {
            ctx->pc = 0x1BA620u;
            goto label_1ba620;
        }
    }
    ctx->pc = 0x1BA5A8u;
label_1ba5a8:
    // 0x1ba5a8: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x1ba5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ba5ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ba5acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba5b0: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x1ba5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1ba5b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba5b8: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1ba5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ba5bc: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x1ba5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1ba5c0: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x1ba5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1ba5c4: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1ba5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1ba5c8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1ba5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1ba5cc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1ba5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1ba5d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ba5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ba5d4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1ba5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ba5d8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1ba5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ba5dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ba5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ba5e0: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1ba5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1ba5e4: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x1ba5e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba5e8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1ba5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1ba5ec: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1ba5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba5f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ba5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ba5f4: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1ba5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ba5f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ba5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ba5fc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ba5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ba600: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ba600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ba604: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1ba604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1ba608: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1ba608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1ba60c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ba60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ba610: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1ba610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1ba614: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1ba614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1ba618: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x1ba618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x1ba61c: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x1ba61cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
label_1ba620:
    // 0x1ba620: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ba620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ba624:
    // 0x1ba624: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1ba624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ba628: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ba628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba62c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA62Cu;
            // 0x1ba630: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA634u;
    // 0x1ba634: 0x0  nop
    ctx->pc = 0x1ba634u;
    // NOP
}
