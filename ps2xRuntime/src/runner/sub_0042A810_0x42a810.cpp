#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042A810
// Address: 0x42a810 - 0x42ab90
void sub_0042A810_0x42a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042A810_0x42a810");
#endif

    switch (ctx->pc) {
        case 0x42a8a4u: goto label_42a8a4;
        case 0x42a8d4u: goto label_42a8d4;
        case 0x42a910u: goto label_42a910;
        case 0x42a938u: goto label_42a938;
        case 0x42a950u: goto label_42a950;
        case 0x42a960u: goto label_42a960;
        case 0x42a97cu: goto label_42a97c;
        case 0x42a988u: goto label_42a988;
        case 0x42a9f0u: goto label_42a9f0;
        case 0x42aa04u: goto label_42aa04;
        case 0x42aa60u: goto label_42aa60;
        case 0x42aaa8u: goto label_42aaa8;
        case 0x42aac0u: goto label_42aac0;
        case 0x42ab0cu: goto label_42ab0c;
        case 0x42ab24u: goto label_42ab24;
        case 0x42ab60u: goto label_42ab60;
        case 0x42ab78u: goto label_42ab78;
        default: break;
    }

    ctx->pc = 0x42a810u;

    // 0x42a810: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x42a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x42a814: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42a814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x42a818: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x42a818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x42a81c: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x42a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
    // 0x42a820: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x42a820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x42a824: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x42a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x42a828: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x42a828u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a82c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42a82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x42a830: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x42a830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a834: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42a834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x42a838: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x42a838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x42a83c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42a83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42a840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42a844: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42a844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42a848: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x42a848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x42a84c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x42a84cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42a850: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x42a850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a854: 0x8c620ce8  lw          $v0, 0xCE8($v1)
    ctx->pc = 0x42a854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3304)));
    // 0x42a858: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x42a858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x42a85c: 0xac620ce8  sw          $v0, 0xCE8($v1)
    ctx->pc = 0x42a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3304), GPR_U32(ctx, 2));
    // 0x42a860: 0x284203e7  slti        $v0, $v0, 0x3E7
    ctx->pc = 0x42a860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)999) ? 1 : 0);
    // 0x42a864: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42A864u;
    {
        const bool branch_taken_0x42a864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A864u;
            // 0x42a868: 0x24700ce8  addiu       $s0, $v1, 0xCE8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a864) {
            ctx->pc = 0x42A874u;
            goto label_42a874;
        }
    }
    ctx->pc = 0x42A86Cu;
    // 0x42a86c: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x42a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x42a870: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x42a870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_42a874:
    // 0x42a874: 0x8e420e34  lw          $v0, 0xE34($s2)
    ctx->pc = 0x42a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
    // 0x42a878: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x42a878u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x42a87c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42A87Cu;
    {
        const bool branch_taken_0x42a87c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x42A880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A87Cu;
            // 0x42a880: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a87c) {
            ctx->pc = 0x42A894u;
            goto label_42a894;
        }
    }
    ctx->pc = 0x42A884u;
    // 0x42a884: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x42a884u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x42a888: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x42A888u;
    {
        const bool branch_taken_0x42a888 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a888) {
            ctx->pc = 0x42A894u;
            goto label_42a894;
        }
    }
    ctx->pc = 0x42A890u;
    // 0x42a890: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x42a890u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42a894:
    // 0x42a894: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42A894u;
    {
        const bool branch_taken_0x42a894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a894) {
            ctx->pc = 0x42A8B0u;
            goto label_42a8b0;
        }
    }
    ctx->pc = 0x42A89Cu;
    // 0x42a89c: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x42A89Cu;
    SET_GPR_U32(ctx, 31, 0x42A8A4u);
    ctx->pc = 0x42A8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A89Cu;
            // 0x42a8a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A8A4u; }
        if (ctx->pc != 0x42A8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A8A4u; }
        if (ctx->pc != 0x42A8A4u) { return; }
    }
    ctx->pc = 0x42A8A4u;
label_42a8a4:
    // 0x42a8a4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x42A8A4u;
    {
        const bool branch_taken_0x42a8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a8a4) {
            ctx->pc = 0x42A8B0u;
            goto label_42a8b0;
        }
    }
    ctx->pc = 0x42A8ACu;
    // 0x42a8ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x42a8acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a8b0:
    // 0x42a8b0: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x42A8B0u;
    {
        const bool branch_taken_0x42a8b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a8b0) {
            ctx->pc = 0x42A8B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42A8B0u;
            // 0x42a8b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42A8CCu;
            goto label_42a8cc;
        }
    }
    ctx->pc = 0x42A8B8u;
    // 0x42a8b8: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x42a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
    // 0x42a8bc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x42a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x42a8c0: 0x5462002f  bnel        $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x42A8C0u;
    {
        const bool branch_taken_0x42a8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x42a8c0) {
            ctx->pc = 0x42A8C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42A8C0u;
            // 0x42a8c4: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42A980u;
            goto label_42a980;
        }
    }
    ctx->pc = 0x42A8C8u;
    // 0x42a8c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42a8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a8cc:
    // 0x42a8cc: 0xc0ba364  jal         func_2E8D90
    ctx->pc = 0x42A8CCu;
    SET_GPR_U32(ctx, 31, 0x42A8D4u);
    ctx->pc = 0x2E8D90u;
    if (runtime->hasFunction(0x2E8D90u)) {
        auto targetFn = runtime->lookupFunction(0x2E8D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A8D4u; }
        if (ctx->pc != 0x42A8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8D90_0x2e8d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A8D4u; }
        if (ctx->pc != 0x42A8D4u) { return; }
    }
    ctx->pc = 0x42A8D4u;
label_42a8d4:
    // 0x42a8d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42a8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a8d8: 0x824311aa  lb          $v1, 0x11AA($s2)
    ctx->pc = 0x42a8d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
    // 0x42a8dc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x42a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x42a8e0: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x42a8e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x42a8e4: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x42a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x42a8e8: 0x26460890  addiu       $a2, $s2, 0x890
    ctx->pc = 0x42a8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
    // 0x42a8ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x42a8f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x42a8f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a8f4: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x42a8f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x42a8f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x42a8f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a8fc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x42a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x42a900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42a904: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x42a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42a908: 0xc0bb0e8  jal         func_2EC3A0
    ctx->pc = 0x42A908u;
    SET_GPR_U32(ctx, 31, 0x42A910u);
    ctx->pc = 0x42A90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A908u;
            // 0x42a90c: 0x24470200  addiu       $a3, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A910u; }
        if (ctx->pc != 0x42A910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A910u; }
        if (ctx->pc != 0x42A910u) { return; }
    }
    ctx->pc = 0x42A910u;
label_42a910:
    // 0x42a910: 0x8ea30cc8  lw          $v1, 0xCC8($s5)
    ctx->pc = 0x42a910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3272)));
    // 0x42a914: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x42A914u;
    {
        const bool branch_taken_0x42a914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a914) {
            ctx->pc = 0x42A918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42A914u;
            // 0x42a918: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42A930u;
            goto label_42a930;
        }
    }
    ctx->pc = 0x42A91Cu;
    // 0x42a91c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x42a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x42a920: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x42a920u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x42a924: 0x5020000c  beql        $at, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x42A924u;
    {
        const bool branch_taken_0x42a924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a924) {
            ctx->pc = 0x42A928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42A924u;
            // 0x42a928: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42A958u;
            goto label_42a958;
        }
    }
    ctx->pc = 0x42A92Cu;
    // 0x42a92c: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x42a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_42a930:
    // 0x42a930: 0xc040180  jal         func_100600
    ctx->pc = 0x42A930u;
    SET_GPR_U32(ctx, 31, 0x42A938u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A938u; }
        if (ctx->pc != 0x42A938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A938u; }
        if (ctx->pc != 0x42A938u) { return; }
    }
    ctx->pc = 0x42A938u;
label_42a938:
    // 0x42a938: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x42A938u;
    {
        const bool branch_taken_0x42a938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a938) {
            ctx->pc = 0x42A97Cu;
            goto label_42a97c;
        }
    }
    ctx->pc = 0x42A940u;
    // 0x42a940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42a940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a944: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x42a944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a948: 0xc15a574  jal         func_5695D0
    ctx->pc = 0x42A948u;
    SET_GPR_U32(ctx, 31, 0x42A950u);
    ctx->pc = 0x42A94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A948u;
            // 0x42a94c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5695D0u;
    if (runtime->hasFunction(0x5695D0u)) {
        auto targetFn = runtime->lookupFunction(0x5695D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A950u; }
        if (ctx->pc != 0x42A950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005695D0_0x5695d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A950u; }
        if (ctx->pc != 0x42A950u) { return; }
    }
    ctx->pc = 0x42A950u;
label_42a950:
    // 0x42a950: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x42A950u;
    {
        const bool branch_taken_0x42a950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a950) {
            ctx->pc = 0x42A97Cu;
            goto label_42a97c;
        }
    }
    ctx->pc = 0x42A958u;
label_42a958:
    // 0x42a958: 0xc040180  jal         func_100600
    ctx->pc = 0x42A958u;
    SET_GPR_U32(ctx, 31, 0x42A960u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A960u; }
        if (ctx->pc != 0x42A960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A960u; }
        if (ctx->pc != 0x42A960u) { return; }
    }
    ctx->pc = 0x42A960u;
label_42a960:
    // 0x42a960: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42A960u;
    {
        const bool branch_taken_0x42a960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a960) {
            ctx->pc = 0x42A97Cu;
            goto label_42a97c;
        }
    }
    ctx->pc = 0x42A968u;
    // 0x42a968: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x42a968u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x42a96c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42a96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a970: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x42a970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x42a974: 0xc12ae68  jal         func_4AB9A0
    ctx->pc = 0x42A974u;
    SET_GPR_U32(ctx, 31, 0x42A97Cu);
    ctx->pc = 0x42A978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A974u;
            // 0x42a978: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AB9A0u;
    if (runtime->hasFunction(0x4AB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x4AB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A97Cu; }
        if (ctx->pc != 0x42A97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AB9A0_0x4ab9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A97Cu; }
        if (ctx->pc != 0x42A97Cu) { return; }
    }
    ctx->pc = 0x42A97Cu;
label_42a97c:
    // 0x42a97c: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x42a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_42a980:
    // 0x42a980: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x42A980u;
    SET_GPR_U32(ctx, 31, 0x42A988u);
    ctx->pc = 0x42A984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A980u;
            // 0x42a984: 0x34441aa9  ori         $a0, $v0, 0x1AA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6825);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A988u; }
        if (ctx->pc != 0x42A988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A988u; }
        if (ctx->pc != 0x42A988u) { return; }
    }
    ctx->pc = 0x42A988u;
label_42a988:
    // 0x42a988: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x42a988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x42a98c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x42a98cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x42a990: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x42a990u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42a994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42a994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42a998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42a998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42a99c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42a99cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42a9a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42a9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42a9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x42A9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42A9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A9A4u;
            // 0x42a9a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42A9ACu;
    // 0x42a9ac: 0x0  nop
    ctx->pc = 0x42a9acu;
    // NOP
    // 0x42a9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42a9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42a9b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x42a9b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42a9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x42a9bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42a9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42a9c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42a9c4: 0x8c850cf8  lw          $a1, 0xCF8($a0)
    ctx->pc = 0x42a9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3320)));
    // 0x42a9c8: 0x8c500ed0  lw          $s0, 0xED0($v0)
    ctx->pc = 0x42a9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x42a9cc: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x42A9CCu;
    {
        const bool branch_taken_0x42a9cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42A9CCu;
            // 0x42a9d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a9cc) {
            ctx->pc = 0x42AA0Cu;
            goto label_42aa0c;
        }
    }
    ctx->pc = 0x42A9D4u;
    // 0x42a9d4: 0x8e220cfc  lw          $v0, 0xCFC($s1)
    ctx->pc = 0x42a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3324)));
    // 0x42a9d8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x42A9D8u;
    {
        const bool branch_taken_0x42a9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42a9d8) {
            ctx->pc = 0x42A9DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42A9D8u;
            // 0x42a9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42AA10u;
            goto label_42aa10;
        }
    }
    ctx->pc = 0x42A9E0u;
    // 0x42a9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42a9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a9e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x42a9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a9e8: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x42A9E8u;
    SET_GPR_U32(ctx, 31, 0x42A9F0u);
    ctx->pc = 0x42A9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A9E8u;
            // 0x42a9ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A9F0u; }
        if (ctx->pc != 0x42A9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42A9F0u; }
        if (ctx->pc != 0x42A9F0u) { return; }
    }
    ctx->pc = 0x42A9F0u;
label_42a9f0:
    // 0x42a9f0: 0x8e250cfc  lw          $a1, 0xCFC($s1)
    ctx->pc = 0x42a9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3324)));
    // 0x42a9f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42a9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a9f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x42a9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42a9fc: 0xc0ab89c  jal         func_2AE270
    ctx->pc = 0x42A9FCu;
    SET_GPR_U32(ctx, 31, 0x42AA04u);
    ctx->pc = 0x42AA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42A9FCu;
            // 0x42aa00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AA04u; }
        if (ctx->pc != 0x42AA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AA04u; }
        if (ctx->pc != 0x42AA04u) { return; }
    }
    ctx->pc = 0x42AA04u;
label_42aa04:
    // 0x42aa04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x42AA04u;
    {
        const bool branch_taken_0x42aa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AA04u;
            // 0x42aa08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aa04) {
            ctx->pc = 0x42AA10u;
            goto label_42aa10;
        }
    }
    ctx->pc = 0x42AA0Cu;
label_42aa0c:
    // 0x42aa0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x42aa0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42aa10:
    // 0x42aa10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42aa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42aa14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42aa14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42aa18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42aa18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42aa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x42AA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42AA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AA1Cu;
            // 0x42aa20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42AA24u;
    // 0x42aa24: 0x0  nop
    ctx->pc = 0x42aa24u;
    // NOP
    // 0x42aa28: 0x0  nop
    ctx->pc = 0x42aa28u;
    // NOP
    // 0x42aa2c: 0x0  nop
    ctx->pc = 0x42aa2cu;
    // NOP
    // 0x42aa30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x42aa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x42aa34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x42aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x42aa38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x42aa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x42aa3c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x42aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x42aa40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42aa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x42aa44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42aa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42aa48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x42aa48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42aa4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42aa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42aa50: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x42aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x42aa54: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x42aa54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x42aa58: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x42AA58u;
    {
        const bool branch_taken_0x42aa58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AA58u;
            // 0x42aa5c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aa58) {
            ctx->pc = 0x42AA7Cu;
            goto label_42aa7c;
        }
    }
    ctx->pc = 0x42AA60u;
label_42aa60:
    // 0x42aa60: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x42aa60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x42aa64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x42aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x42aa68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x42aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x42aa6c: 0x0  nop
    ctx->pc = 0x42aa6cu;
    // NOP
    // 0x42aa70: 0x0  nop
    ctx->pc = 0x42aa70u;
    // NOP
    // 0x42aa74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x42AA74u;
    {
        const bool branch_taken_0x42aa74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42aa74) {
            ctx->pc = 0x42AA60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42aa60;
        }
    }
    ctx->pc = 0x42AA7Cu;
label_42aa7c:
    // 0x42aa7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x42aa80: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x42aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x42aa84: 0x8c50a348  lw          $s0, -0x5CB8($v0)
    ctx->pc = 0x42aa84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x42aa88: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x42aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
    // 0x42aa8c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x42aa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x42aa90: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x42aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x42aa94: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x42aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x42aa98: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x42aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x42aa9c: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x42aa9cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42aaa0: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x42AAA0u;
    SET_GPR_U32(ctx, 31, 0x42AAA8u);
    ctx->pc = 0x42AAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AAA0u;
            // 0x42aaa4: 0x24c6cae8  addiu       $a2, $a2, -0x3518 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AAA8u; }
        if (ctx->pc != 0x42AAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AAA8u; }
        if (ctx->pc != 0x42AAA8u) { return; }
    }
    ctx->pc = 0x42AAA8u;
label_42aaa8:
    // 0x42aaa8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x42aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x42aaac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x42aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x42aab0: 0x26460cf8  addiu       $a2, $s2, 0xCF8
    ctx->pc = 0x42aab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3320));
    // 0x42aab4: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x42aab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x42aab8: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x42AAB8u;
    SET_GPR_U32(ctx, 31, 0x42AAC0u);
    ctx->pc = 0x42AABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AAB8u;
            // 0x42aabc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AAC0u; }
        if (ctx->pc != 0x42AAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AAC0u; }
        if (ctx->pc != 0x42AAC0u) { return; }
    }
    ctx->pc = 0x42AAC0u;
label_42aac0:
    // 0x42aac0: 0x8e470968  lw          $a3, 0x968($s2)
    ctx->pc = 0x42aac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
    // 0x42aac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x42aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x42aac8: 0x14e20018  bne         $a3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x42AAC8u;
    {
        const bool branch_taken_0x42aac8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x42aac8) {
            ctx->pc = 0x42AB2Cu;
            goto label_42ab2c;
        }
    }
    ctx->pc = 0x42AAD0u;
    // 0x42aad0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x42aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x42aad4: 0x14e20015  bne         $a3, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x42AAD4u;
    {
        const bool branch_taken_0x42aad4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x42aad4) {
            ctx->pc = 0x42AB2Cu;
            goto label_42ab2c;
        }
    }
    ctx->pc = 0x42AADCu;
    // 0x42aadc: 0x56200002  bnel        $s1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x42AADCu;
    {
        const bool branch_taken_0x42aadc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x42aadc) {
            ctx->pc = 0x42AAE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42AADCu;
            // 0x42aae0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42AAE8u;
            goto label_42aae8;
        }
    }
    ctx->pc = 0x42AAE4u;
    // 0x42aae4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x42aae4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42aae8:
    // 0x42aae8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x42aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x42aaec: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x42aaecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x42aaf0: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x42aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x42aaf4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x42aaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x42aaf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42aafc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x42aafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x42ab00: 0x80480000  lb          $t0, 0x0($v0)
    ctx->pc = 0x42ab00u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42ab04: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x42AB04u;
    SET_GPR_U32(ctx, 31, 0x42AB0Cu);
    ctx->pc = 0x42AB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AB04u;
            // 0x42ab08: 0x24c6caf8  addiu       $a2, $a2, -0x3508 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AB0Cu; }
        if (ctx->pc != 0x42AB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AB0Cu; }
        if (ctx->pc != 0x42AB0Cu) { return; }
    }
    ctx->pc = 0x42AB0Cu;
label_42ab0c:
    // 0x42ab0c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x42ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x42ab10: 0x26460cfc  addiu       $a2, $s2, 0xCFC
    ctx->pc = 0x42ab10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3324));
    // 0x42ab14: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x42ab14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x42ab18: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x42ab18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x42ab1c: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x42AB1Cu;
    SET_GPR_U32(ctx, 31, 0x42AB24u);
    ctx->pc = 0x42AB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AB1Cu;
            // 0x42ab20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AB24u; }
        if (ctx->pc != 0x42AB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AB24u; }
        if (ctx->pc != 0x42AB24u) { return; }
    }
    ctx->pc = 0x42AB24u;
label_42ab24:
    // 0x42ab24: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x42AB24u;
    {
        const bool branch_taken_0x42ab24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AB24u;
            // 0x42ab28: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ab24) {
            ctx->pc = 0x42AB7Cu;
            goto label_42ab7c;
        }
    }
    ctx->pc = 0x42AB2Cu;
label_42ab2c:
    // 0x42ab2c: 0x56200002  bnel        $s1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x42AB2Cu;
    {
        const bool branch_taken_0x42ab2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x42ab2c) {
            ctx->pc = 0x42AB30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42AB2Cu;
            // 0x42ab30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42AB38u;
            goto label_42ab38;
        }
    }
    ctx->pc = 0x42AB34u;
    // 0x42ab34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x42ab34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ab38:
    // 0x42ab38: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x42ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x42ab3c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x42ab3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x42ab40: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x42ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x42ab44: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x42ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x42ab48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42ab4c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x42ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x42ab50: 0x80480000  lb          $t0, 0x0($v0)
    ctx->pc = 0x42ab50u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42ab54: 0x24c6caf8  addiu       $a2, $a2, -0x3508
    ctx->pc = 0x42ab54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953720));
    // 0x42ab58: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x42AB58u;
    SET_GPR_U32(ctx, 31, 0x42AB60u);
    ctx->pc = 0x42AB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AB58u;
            // 0x42ab5c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AB60u; }
        if (ctx->pc != 0x42AB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AB60u; }
        if (ctx->pc != 0x42AB60u) { return; }
    }
    ctx->pc = 0x42AB60u;
label_42ab60:
    // 0x42ab60: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x42ab60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x42ab64: 0x26460cfc  addiu       $a2, $s2, 0xCFC
    ctx->pc = 0x42ab64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3324));
    // 0x42ab68: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x42ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x42ab6c: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x42ab6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x42ab70: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x42AB70u;
    SET_GPR_U32(ctx, 31, 0x42AB78u);
    ctx->pc = 0x42AB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42AB70u;
            // 0x42ab74: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AB78u; }
        if (ctx->pc != 0x42AB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AB78u; }
        if (ctx->pc != 0x42AB78u) { return; }
    }
    ctx->pc = 0x42AB78u;
label_42ab78:
    // 0x42ab78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x42ab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_42ab7c:
    // 0x42ab7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42ab7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42ab80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42ab80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42ab84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42ab84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42ab88: 0x3e00008  jr          $ra
    ctx->pc = 0x42AB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42AB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AB88u;
            // 0x42ab8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42AB90u;
}
