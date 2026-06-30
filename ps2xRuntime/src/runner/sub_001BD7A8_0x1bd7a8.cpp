#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD7A8
// Address: 0x1bd7a8 - 0x1bd918
void sub_001BD7A8_0x1bd7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD7A8_0x1bd7a8");
#endif

    switch (ctx->pc) {
        case 0x1bd7e8u: goto label_1bd7e8;
        default: break;
    }

    ctx->pc = 0x1bd7a8u;

    // 0x1bd7a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd7ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd7b4: 0x806f5f0  j           func_1BD7C0
    ctx->pc = 0x1BD7B4u;
    ctx->pc = 0x1BD7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7B4u;
            // 0x1bd7b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD7C0u;
    goto label_1bd7c0;
    ctx->pc = 0x1BD7BCu;
    // 0x1bd7bc: 0x0  nop
    ctx->pc = 0x1bd7bcu;
    // NOP
label_1bd7c0:
    // 0x1bd7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bd7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bd7c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bd7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bd7c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1bd7c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd7cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bd7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bd7d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bd7d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd7d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bd7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd7d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bd7dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bd7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bd7e0: 0xc06f646  jal         func_1BD918
    ctx->pc = 0x1BD7E0u;
    SET_GPR_U32(ctx, 31, 0x1BD7E8u);
    ctx->pc = 0x1BD7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7E0u;
            // 0x1bd7e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD918u;
    if (runtime->hasFunction(0x1BD918u)) {
        auto targetFn = runtime->lookupFunction(0x1BD918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7E8u; }
        if (ctx->pc != 0x1BD7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD918_0x1bd918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7E8u; }
        if (ctx->pc != 0x1BD7E8u) { return; }
    }
    ctx->pc = 0x1BD7E8u;
label_1bd7e8:
    // 0x1bd7e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd7ec: 0x54430044  bnel        $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1BD7ECu;
    {
        const bool branch_taken_0x1bd7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd7ec) {
            ctx->pc = 0x1BD7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7ECu;
            // 0x1bd7f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD900u;
            goto label_1bd900;
        }
    }
    ctx->pc = 0x1BD7F4u;
    // 0x1bd7f4: 0x2e220065  sltiu       $v0, $s1, 0x65
    ctx->pc = 0x1bd7f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x1bd7f8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1BD7F8u;
    {
        const bool branch_taken_0x1bd7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD7F8u;
            // 0x1bd7fc: 0xae110034  sw          $s1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7f8) {
            ctx->pc = 0x1BD8D8u;
            goto label_1bd8d8;
        }
    }
    ctx->pc = 0x1BD800u;
    // 0x1bd800: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1bd800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bd804: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1bd804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1bd808: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd80c: 0x8c63b280  lw          $v1, -0x4D80($v1)
    ctx->pc = 0x1bd80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x1bd810: 0x600008  jr          $v1
    ctx->pc = 0x1BD810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD818u: goto label_1bd818;
            case 0x1BD838u: goto label_1bd838;
            case 0x1BD858u: goto label_1bd858;
            case 0x1BD878u: goto label_1bd878;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD8B8u: goto label_1bd8b8;
            case 0x1BD8D8u: goto label_1bd8d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BD818u;
label_1bd818:
    // 0x1bd818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd81c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd81cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd820: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bd820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd824: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bd824u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd828: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bd828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd82c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bd82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bd830: 0x806f66e  j           func_1BD9B8
    ctx->pc = 0x1BD830u;
    ctx->pc = 0x1BD834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD830u;
            // 0x1bd834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD9B8u;
    {
        auto targetFn = runtime->lookupFunction(0x1BD9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BD838u;
label_1bd838:
    // 0x1bd838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd83c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd83cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd840: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bd840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd844: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bd844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bd848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd84c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bd84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bd850: 0x806f6aa  j           func_1BDAA8
    ctx->pc = 0x1BD850u;
    ctx->pc = 0x1BD854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD850u;
            // 0x1bd854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDAA8u;
    {
        auto targetFn = runtime->lookupFunction(0x1BDAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BD858u;
label_1bd858:
    // 0x1bd858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd85c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd85cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd860: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bd860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd864: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bd864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd868: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bd868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd86c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bd86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bd870: 0x806f6b2  j           func_1BDAC8
    ctx->pc = 0x1BD870u;
    ctx->pc = 0x1BD874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD870u;
            // 0x1bd874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDAC8u;
    {
        auto targetFn = runtime->lookupFunction(0x1BDAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BD878u;
label_1bd878:
    // 0x1bd878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd87c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd87cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd880: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bd880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd884: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bd884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd888: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bd888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd88c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bd88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bd890: 0x806f6ba  j           func_1BDAE8
    ctx->pc = 0x1BD890u;
    ctx->pc = 0x1BD894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD890u;
            // 0x1bd894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDAE8u;
    {
        auto targetFn = runtime->lookupFunction(0x1BDAE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BD898u;
label_1bd898:
    // 0x1bd898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd89c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd8a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bd8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bd8a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd8a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bd8a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd8ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bd8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bd8b0: 0x806f6c2  j           func_1BDB08
    ctx->pc = 0x1BD8B0u;
    ctx->pc = 0x1BD8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8B0u;
            // 0x1bd8b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB08u;
    {
        auto targetFn = runtime->lookupFunction(0x1BDB08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BD8B8u;
label_1bd8b8:
    // 0x1bd8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd8bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd8c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bd8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bd8c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd8c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bd8c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd8cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bd8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bd8d0: 0x806f676  j           func_1BD9D8
    ctx->pc = 0x1BD8D0u;
    ctx->pc = 0x1BD8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8D0u;
            // 0x1bd8d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD9D8u;
    {
        auto targetFn = runtime->lookupFunction(0x1BD9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BD8D8u;
label_1bd8d8:
    // 0x1bd8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd8e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bd8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bd8e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd8e8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1bd8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1bd8ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bd8ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd8f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bd8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bd8f4: 0x24c6b240  addiu       $a2, $a2, -0x4DC0
    ctx->pc = 0x1bd8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947392));
    // 0x1bd8f8: 0x806f9cc  j           func_1BE730
    ctx->pc = 0x1BD8F8u;
    ctx->pc = 0x1BD8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD8F8u;
            // 0x1bd8fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE730u;
    if (runtime->hasFunction(0x1BE730u)) {
        auto targetFn = runtime->lookupFunction(0x1BE730u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE730_0x1be730(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BD900u;
label_1bd900:
    // 0x1bd900: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bd900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd904: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bd904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd908: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bd908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bd90c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD90Cu;
            // 0x1bd910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD914u;
    // 0x1bd914: 0x0  nop
    ctx->pc = 0x1bd914u;
    // NOP
}
