#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C770
// Address: 0x17c770 - 0x17c878
void sub_0017C770_0x17c770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C770_0x17c770");
#endif

    switch (ctx->pc) {
        case 0x17c7a8u: goto label_17c7a8;
        case 0x17c7b8u: goto label_17c7b8;
        case 0x17c818u: goto label_17c818;
        case 0x17c828u: goto label_17c828;
        case 0x17c850u: goto label_17c850;
        default: break;
    }

    ctx->pc = 0x17c770u;

    // 0x17c770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17c770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17c774: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17c774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17c778: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17c778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c77c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17c77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17c780: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x17c780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c784: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17c788: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17c788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c78c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17c790: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17c790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c794: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x17c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x17c798: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x17c798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x17c79c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17c7a0: 0xc061f74  jal         func_187DD0
    ctx->pc = 0x17C7A0u;
    SET_GPR_U32(ctx, 31, 0x17C7A8u);
    ctx->pc = 0x17C7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C7A0u;
            // 0x17c7a4: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C7A8u; }
        if (ctx->pc != 0x17C7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DD0_0x187dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C7A8u; }
        if (ctx->pc != 0x17C7A8u) { return; }
    }
    ctx->pc = 0x17C7A8u;
label_17c7a8:
    // 0x17c7a8: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x17C7A8u;
    {
        const bool branch_taken_0x17c7a8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x17C7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C7A8u;
            // 0x17c7ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c7a8) {
            ctx->pc = 0x17C7E0u;
            goto label_17c7e0;
        }
    }
    ctx->pc = 0x17C7B0u;
    // 0x17c7b0: 0x3c07006d  lui         $a3, 0x6D
    ctx->pc = 0x17c7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)109 << 16));
    // 0x17c7b4: 0x24e8d740  addiu       $t0, $a3, -0x28C0
    ctx->pc = 0x17c7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956864));
label_17c7b8:
    // 0x17c7b8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x17c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17c7bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17c7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17c7c0: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x17c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17c7c4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x17c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x17c7c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c7cc: 0xd0282a  slt         $a1, $a2, $s0
    ctx->pc = 0x17c7ccu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x17c7d0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17C7D0u;
    {
        const bool branch_taken_0x17c7d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C7D0u;
            // 0x17c7d4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c7d0) {
            ctx->pc = 0x17C7B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c7b8;
        }
    }
    ctx->pc = 0x17C7D8u;
    // 0x17c7d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17C7D8u;
    {
        const bool branch_taken_0x17c7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C7D8u;
            // 0x17c7dc: 0x3c15006d  lui         $s5, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c7d8) {
            ctx->pc = 0x17C7E8u;
            goto label_17c7e8;
        }
    }
    ctx->pc = 0x17C7E0u;
label_17c7e0:
    // 0x17c7e0: 0x3c07006d  lui         $a3, 0x6D
    ctx->pc = 0x17c7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)109 << 16));
    // 0x17c7e4: 0x3c15006d  lui         $s5, 0x6D
    ctx->pc = 0x17c7e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)109 << 16));
label_17c7e8:
    // 0x17c7e8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x17c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x17c7ec: 0x26b2d840  addiu       $s2, $s5, -0x27C0
    ctx->pc = 0x17c7ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957120));
    // 0x17c7f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7f4: 0x248454c0  addiu       $a0, $a0, 0x54C0
    ctx->pc = 0x17c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21696));
    // 0x17c7f8: 0x26650400  addiu       $a1, $s3, 0x400
    ctx->pc = 0x17c7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    // 0x17c7fc: 0x24e7d740  addiu       $a3, $a3, -0x28C0
    ctx->pc = 0x17c7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956864));
    // 0x17c800: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x17c800u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17c804: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x17c804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c808: 0x115080  sll         $t2, $s1, 2
    ctx->pc = 0x17c808u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17c80c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17c80cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c810: 0xc04410c  jal         func_110430
    ctx->pc = 0x17C810u;
    SET_GPR_U32(ctx, 31, 0x17C818u);
    ctx->pc = 0x17C814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C810u;
            // 0x17c814: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C818u; }
        if (ctx->pc != 0x17C818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C818u; }
        if (ctx->pc != 0x17C818u) { return; }
    }
    ctx->pc = 0x17C818u;
label_17c818:
    // 0x17c818: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x17C818u;
    {
        const bool branch_taken_0x17c818 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x17C81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C818u;
            // 0x17c81c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c818) {
            ctx->pc = 0x17C848u;
            goto label_17c848;
        }
    }
    ctx->pc = 0x17C820u;
    // 0x17c820: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x17c820u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c824: 0x0  nop
    ctx->pc = 0x17c824u;
    // NOP
label_17c828:
    // 0x17c828: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x17c828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17c82c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17c82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17c830: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x17c830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x17c834: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x17c834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17c838: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17c838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c83c: 0xd1282a  slt         $a1, $a2, $s1
    ctx->pc = 0x17c83cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x17c840: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17C840u;
    {
        const bool branch_taken_0x17c840 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C840u;
            // 0x17c844: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c840) {
            ctx->pc = 0x17C828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c828;
        }
    }
    ctx->pc = 0x17C848u;
label_17c848:
    // 0x17c848: 0xc061f7a  jal         func_187DE8
    ctx->pc = 0x17C848u;
    SET_GPR_U32(ctx, 31, 0x17C850u);
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C850u; }
        if (ctx->pc != 0x17C850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DE8_0x187de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C850u; }
        if (ctx->pc != 0x17C850u) { return; }
    }
    ctx->pc = 0x17C850u;
label_17c850:
    // 0x17c850: 0x8ea2d840  lw          $v0, -0x27C0($s5)
    ctx->pc = 0x17c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294957120)));
    // 0x17c854: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17c854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c858: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17c858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c85c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17c85cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c860: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17c860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17c864: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x17c864u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c868: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x17c868u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17c86c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17c86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c870: 0x3e00008  jr          $ra
    ctx->pc = 0x17C870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C870u;
            // 0x17c874: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C878u;
}
