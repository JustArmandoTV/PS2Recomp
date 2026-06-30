#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127840
// Address: 0x127840 - 0x1279c8
void sub_00127840_0x127840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127840_0x127840");
#endif

    switch (ctx->pc) {
        case 0x127868u: goto label_127868;
        case 0x127894u: goto label_127894;
        case 0x1278d4u: goto label_1278d4;
        case 0x1278d8u: goto label_1278d8;
        case 0x1278e8u: goto label_1278e8;
        case 0x127914u: goto label_127914;
        case 0x127930u: goto label_127930;
        case 0x127988u: goto label_127988;
        default: break;
    }

    ctx->pc = 0x127840u;

label_127840:
    // 0x127840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x127844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127848: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x127848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12784c: 0x24100058  addiu       $s0, $zero, 0x58
    ctx->pc = 0x12784cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x127850: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127854: 0xb08018  mult        $s0, $a1, $s0
    ctx->pc = 0x127854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x127858: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x127858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12785c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12785cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127860: 0xc04a2e4  jal         func_128B90
    ctx->pc = 0x127860u;
    SET_GPR_U32(ctx, 31, 0x127868u);
    ctx->pc = 0x127864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127860u;
            // 0x127864: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B90u;
    if (runtime->hasFunction(0x128B90u)) {
        auto targetFn = runtime->lookupFunction(0x128B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127868u; }
        if (ctx->pc != 0x127868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128B90_0x128b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127868u; }
        if (ctx->pc != 0x127868u) { return; }
    }
    ctx->pc = 0x127868u;
label_127868:
    // 0x127868: 0x244f000c  addiu       $t7, $v0, 0xC
    ctx->pc = 0x127868u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x12786c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12786cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127870: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x127870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127874: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x127874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x127878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12787c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12787Cu;
    {
        const bool branch_taken_0x12787c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x127880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12787Cu;
            // 0x127880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12787c) {
            ctx->pc = 0x127898u;
            goto label_127898;
        }
    }
    ctx->pc = 0x127884u;
    // 0x127884: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x127884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x127888: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x127888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x12788c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x12788Cu;
    SET_GPR_U32(ctx, 31, 0x127894u);
    ctx->pc = 0x127890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12788Cu;
            // 0x127890: 0xae2f0008  sw          $t7, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127894u; }
        if (ctx->pc != 0x127894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127894u; }
        if (ctx->pc != 0x127894u) { return; }
    }
    ctx->pc = 0x127894u;
label_127894:
    // 0x127894: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x127894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_127898:
    // 0x127898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12789c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12789cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1278a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1278a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1278a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1278a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1278a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1278A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1278ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1278A8u;
            // 0x1278ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1278B0u;
    // 0x1278b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1278b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1278b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1278b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1278b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1278b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1278bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1278bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1278c0: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x1278c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1278c4: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1278C4u;
    {
        const bool branch_taken_0x1278c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1278C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1278C4u;
            // 0x1278c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278c4) {
            ctx->pc = 0x1278D4u;
            goto label_1278d4;
        }
    }
    ctx->pc = 0x1278CCu;
    // 0x1278cc: 0xc049e72  jal         func_1279C8
    ctx->pc = 0x1278CCu;
    SET_GPR_U32(ctx, 31, 0x1278D4u);
    ctx->pc = 0x1279C8u;
    if (runtime->hasFunction(0x1279C8u)) {
        auto targetFn = runtime->lookupFunction(0x1279C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1278D4u; }
        if (ctx->pc != 0x1278D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001279C8_0x1279c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1278D4u; }
        if (ctx->pc != 0x1278D4u) { return; }
    }
    ctx->pc = 0x1278D4u;
label_1278d4:
    // 0x1278d4: 0x263001d8  addiu       $s0, $s1, 0x1D8
    ctx->pc = 0x1278d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
label_1278d8:
    // 0x1278d8: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x1278d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1278dc: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x1278dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1278e0: 0x5c00006  bltz        $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1278E0u;
    {
        const bool branch_taken_0x1278e0 = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x1278E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1278E0u;
            // 0x1278e4: 0x8e0d0008  lw          $t5, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278e0) {
            ctx->pc = 0x1278FCu;
            goto label_1278fc;
        }
    }
    ctx->pc = 0x1278E8u;
label_1278e8:
    // 0x1278e8: 0x85af000c  lh          $t7, 0xC($t5)
    ctx->pc = 0x1278e8u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x1278ec: 0x11e00015  beqz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x1278ECu;
    {
        const bool branch_taken_0x1278ec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1278F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1278ECu;
            // 0x1278f0: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278ec) {
            ctx->pc = 0x127944u;
            goto label_127944;
        }
    }
    ctx->pc = 0x1278F4u;
    // 0x1278f4: 0x5c1fffc  bgez        $t6, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1278F4u;
    {
        const bool branch_taken_0x1278f4 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x1278F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1278F4u;
            // 0x1278f8: 0x25ad0058  addiu       $t5, $t5, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278f4) {
            ctx->pc = 0x1278E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1278e8;
        }
    }
    ctx->pc = 0x1278FCu;
label_1278fc:
    // 0x1278fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1278fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x127900: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x127900u;
    {
        const bool branch_taken_0x127900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127900) {
            ctx->pc = 0x127904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127900u;
            // 0x127904: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1278D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1278d8;
        }
    }
    ctx->pc = 0x127908u;
    // 0x127908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x127908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12790c: 0xc049e10  jal         func_127840
    ctx->pc = 0x12790Cu;
    SET_GPR_U32(ctx, 31, 0x127914u);
    ctx->pc = 0x127910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12790Cu;
            // 0x127910: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127840u;
    goto label_127840;
    ctx->pc = 0x127914u;
label_127914:
    // 0x127914: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127914u;
    {
        const bool branch_taken_0x127914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127914u;
            // 0x127918: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127914) {
            ctx->pc = 0x127924u;
            goto label_127924;
        }
    }
    ctx->pc = 0x12791Cu;
    // 0x12791c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x12791Cu;
    {
        const bool branch_taken_0x12791c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12791Cu;
            // 0x127920: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12791c) {
            ctx->pc = 0x1278D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1278d8;
        }
    }
    ctx->pc = 0x127924u;
label_127924:
    // 0x127924: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x127924u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x127928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12792c: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12792cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_127930:
    // 0x127930: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127934: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127938: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x127938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12793c: 0x3e00008  jr          $ra
    ctx->pc = 0x12793Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12793Cu;
            // 0x127940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127944u;
label_127944:
    // 0x127944: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x127944u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127948: 0xadb10054  sw          $s1, 0x54($t5)
    ctx->pc = 0x127948u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 17));
    // 0x12794c: 0xa5af000c  sh          $t7, 0xC($t5)
    ctx->pc = 0x12794cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x127950: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x127950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127954: 0xada00000  sw          $zero, 0x0($t5)
    ctx->pc = 0x127954u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
    // 0x127958: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x127958u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12795c: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x12795cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x127960: 0xa5af000e  sh          $t7, 0xE($t5)
    ctx->pc = 0x127960u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 14), (uint16_t)GPR_U32(ctx, 15));
    // 0x127964: 0xada00004  sw          $zero, 0x4($t5)
    ctx->pc = 0x127964u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 0));
    // 0x127968: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x127968u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x12796c: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x12796cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x127970: 0xada00018  sw          $zero, 0x18($t5)
    ctx->pc = 0x127970u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 0));
    // 0x127974: 0xada00030  sw          $zero, 0x30($t5)
    ctx->pc = 0x127974u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 0));
    // 0x127978: 0xada00034  sw          $zero, 0x34($t5)
    ctx->pc = 0x127978u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 0));
    // 0x12797c: 0xada00044  sw          $zero, 0x44($t5)
    ctx->pc = 0x12797cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 0));
    // 0x127980: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x127980u;
    {
        const bool branch_taken_0x127980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127980u;
            // 0x127984: 0xada00048  sw          $zero, 0x48($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127980) {
            ctx->pc = 0x127930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127930;
        }
    }
    ctx->pc = 0x127988u;
label_127988:
    // 0x127988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12798c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x12798cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x127990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x127994: 0x24a576d0  addiu       $a1, $a1, 0x76D0
    ctx->pc = 0x127994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30416));
    // 0x127998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12799c: 0x804a0fc  j           func_1283F0
    ctx->pc = 0x12799Cu;
    ctx->pc = 0x1279A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12799Cu;
            // 0x1279a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283F0u;
    if (runtime->hasFunction(0x1283F0u)) {
        auto targetFn = runtime->lookupFunction(0x1283F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001283F0_0x1283f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1279A4u;
    // 0x1279a4: 0x0  nop
    ctx->pc = 0x1279a4u;
    // NOP
    // 0x1279a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1279a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1279ac: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x1279acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x1279b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1279b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1279b4: 0x8de41ad8  lw          $a0, 0x1AD8($t7)
    ctx->pc = 0x1279b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x1279b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1279b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1279bc: 0x8049e62  j           func_127988
    ctx->pc = 0x1279BCu;
    ctx->pc = 0x1279C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1279BCu;
            // 0x1279c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127988u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_127988;
    ctx->pc = 0x1279C4u;
    // 0x1279c4: 0x0  nop
    ctx->pc = 0x1279c4u;
    // NOP
}
