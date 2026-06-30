#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A610
// Address: 0x17a610 - 0x17a700
void sub_0017A610_0x17a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A610_0x17a610");
#endif

    switch (ctx->pc) {
        case 0x17a654u: goto label_17a654;
        case 0x17a65cu: goto label_17a65c;
        case 0x17a668u: goto label_17a668;
        case 0x17a67cu: goto label_17a67c;
        case 0x17a6d0u: goto label_17a6d0;
        default: break;
    }

    ctx->pc = 0x17a610u;

    // 0x17a610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a614: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a618: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a61c: 0x24041200  addiu       $a0, $zero, 0x1200
    ctx->pc = 0x17a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x17a620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a624: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a628: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x17a628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a62c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17a62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17a630: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17a630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a634: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17a634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17a638: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17a638u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a63c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17a63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17a640: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x17a640u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a644: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17a648: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x17a648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x17a64c: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17A64Cu;
    SET_GPR_U32(ctx, 31, 0x17A654u);
    ctx->pc = 0x17A650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A64Cu;
            // 0x17a650: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A654u; }
        if (ctx->pc != 0x17A654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A654u; }
        if (ctx->pc != 0x17A654u) { return; }
    }
    ctx->pc = 0x17A654u;
label_17a654:
    // 0x17a654: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x17A654u;
    SET_GPR_U32(ctx, 31, 0x17A65Cu);
    ctx->pc = 0x17A658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A654u;
            // 0x17a658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A65Cu; }
        if (ctx->pc != 0x17A65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A65Cu; }
        if (ctx->pc != 0x17A65Cu) { return; }
    }
    ctx->pc = 0x17A65Cu;
label_17a65c:
    // 0x17a65c: 0x24041201  addiu       $a0, $zero, 0x1201
    ctx->pc = 0x17a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4609));
    // 0x17a660: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17A660u;
    SET_GPR_U32(ctx, 31, 0x17A668u);
    ctx->pc = 0x17A664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A660u;
            // 0x17a664: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A668u; }
        if (ctx->pc != 0x17A668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A668u; }
        if (ctx->pc != 0x17A668u) { return; }
    }
    ctx->pc = 0x17A668u;
label_17a668:
    // 0x17a668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a66c: 0x12030019  beq         $s0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x17A66Cu;
    {
        const bool branch_taken_0x17a66c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x17A670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A66Cu;
            // 0x17a670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a66c) {
            ctx->pc = 0x17A6D4u;
            goto label_17a6d4;
        }
    }
    ctx->pc = 0x17A674u;
    // 0x17a674: 0xc061f80  jal         func_187E00
    ctx->pc = 0x17A674u;
    SET_GPR_U32(ctx, 31, 0x17A67Cu);
    ctx->pc = 0x187E00u;
    if (runtime->hasFunction(0x187E00u)) {
        auto targetFn = runtime->lookupFunction(0x187E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A67Cu; }
        if (ctx->pc != 0x17A67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E00_0x187e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A67Cu; }
        if (ctx->pc != 0x17A67Cu) { return; }
    }
    ctx->pc = 0x17A67Cu;
label_17a67c:
    // 0x17a67c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a680: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x17a680u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17a684: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A684u;
    {
        const bool branch_taken_0x17a684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A684u;
            // 0x17a688: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a684) {
            ctx->pc = 0x17A69Cu;
            goto label_17a69c;
        }
    }
    ctx->pc = 0x17A68Cu;
    // 0x17a68c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A68Cu;
    {
        const bool branch_taken_0x17a68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A68Cu;
            // 0x17a690: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a68c) {
            ctx->pc = 0x17A69Cu;
            goto label_17a69c;
        }
    }
    ctx->pc = 0x17A694u;
    // 0x17a694: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17A694u;
    {
        const bool branch_taken_0x17a694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17a694) {
            ctx->pc = 0x17A6C8u;
            goto label_17a6c8;
        }
    }
    ctx->pc = 0x17A69Cu;
label_17a69c:
    // 0x17a69c: 0xa2240002  sb          $a0, 0x2($s1)
    ctx->pc = 0x17a69cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x17a6a0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x17a6a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a6a4: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x17a6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x17a6a8: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x17a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x17a6ac: 0x8a420003  lwl         $v0, 0x3($s2)
    ctx->pc = 0x17a6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x17a6b0: 0x9a420000  lwr         $v0, 0x0($s2)
    ctx->pc = 0x17a6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x17a6b4: 0xaa220017  swl         $v0, 0x17($s1)
    ctx->pc = 0x17a6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17a6b8: 0xba220014  swr         $v0, 0x14($s1)
    ctx->pc = 0x17a6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17a6bc: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x17a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x17a6c0: 0xae360010  sw          $s6, 0x10($s1)
    ctx->pc = 0x17a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
    // 0x17a6c4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x17a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_17a6c8:
    // 0x17a6c8: 0xc061f9e  jal         func_187E78
    ctx->pc = 0x17A6C8u;
    SET_GPR_U32(ctx, 31, 0x17A6D0u);
    ctx->pc = 0x187E78u;
    if (runtime->hasFunction(0x187E78u)) {
        auto targetFn = runtime->lookupFunction(0x187E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A6D0u; }
        if (ctx->pc != 0x17A6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E78_0x187e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A6D0u; }
        if (ctx->pc != 0x17A6D0u) { return; }
    }
    ctx->pc = 0x17A6D0u;
label_17a6d0:
    // 0x17a6d0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x17a6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a6d4:
    // 0x17a6d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a6d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a6d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a6dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17a6dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a6e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17a6e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a6e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17a6e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a6e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17a6e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a6ec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17a6ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a6f0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x17a6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17a6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A6F4u;
            // 0x17a6f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A6FCu;
    // 0x17a6fc: 0x0  nop
    ctx->pc = 0x17a6fcu;
    // NOP
}
