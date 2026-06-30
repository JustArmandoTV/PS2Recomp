#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A600
// Address: 0x18a600 - 0x18a778
void sub_0018A600_0x18a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A600_0x18a600");
#endif

    switch (ctx->pc) {
        case 0x18a65cu: goto label_18a65c;
        case 0x18a6c4u: goto label_18a6c4;
        case 0x18a728u: goto label_18a728;
        case 0x18a750u: goto label_18a750;
        case 0x18a760u: goto label_18a760;
        default: break;
    }

    ctx->pc = 0x18a600u;

    // 0x18a600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a604: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x18a604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x18a608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a60c: 0x24846a40  addiu       $a0, $a0, 0x6A40
    ctx->pc = 0x18a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27200));
    // 0x18a610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a614: 0x8062988  j           func_18A620
    ctx->pc = 0x18A614u;
    ctx->pc = 0x18A618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A614u;
            // 0x18a618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A620u;
    goto label_18a620;
    ctx->pc = 0x18A61Cu;
    // 0x18a61c: 0x0  nop
    ctx->pc = 0x18a61cu;
    // NOP
label_18a620:
    // 0x18a620: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x18a620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x18a624: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18a624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18a628: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x18a628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x18a62c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x18a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x18a630: 0x3e00008  jr          $ra
    ctx->pc = 0x18A630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A630u;
            // 0x18a634: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A638u;
    // 0x18a638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a63c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18a640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18a648: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18a648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a64c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18a650: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18a650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18a654: 0xc064076  jal         func_1901D8
    ctx->pc = 0x18A654u;
    SET_GPR_U32(ctx, 31, 0x18A65Cu);
    ctx->pc = 0x18A658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A654u;
            // 0x18a658: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1901D8u;
    if (runtime->hasFunction(0x1901D8u)) {
        auto targetFn = runtime->lookupFunction(0x1901D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A65Cu; }
        if (ctx->pc != 0x18A65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001901D8_0x1901d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A65Cu; }
        if (ctx->pc != 0x18A65Cu) { return; }
    }
    ctx->pc = 0x18A65Cu;
label_18a65c:
    // 0x18a65c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x18a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x18a660: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x18a660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x18a664: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a668: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A668u;
    {
        const bool branch_taken_0x18a668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A668u;
            // 0x18a66c: 0x34a50203  ori         $a1, $a1, 0x203 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)515);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a668) {
            ctx->pc = 0x18A688u;
            goto label_18a688;
        }
    }
    ctx->pc = 0x18A670u;
    // 0x18a670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a674: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18a678: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18a678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a67c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18a67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18a680: 0x80629ca  j           func_18A728
    ctx->pc = 0x18A680u;
    ctx->pc = 0x18A684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A680u;
            // 0x18a684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A728u;
    goto label_18a728;
    ctx->pc = 0x18A688u;
label_18a688:
    // 0x18a688: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x18a688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x18a68c: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x18a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x18a690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18a694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a698: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18a698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a69c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18a69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18a6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6A0u;
            // 0x18a6a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A6A8u;
    // 0x18a6a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a6ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18a6b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a6b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a6b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18a6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18a6b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a6bc: 0xc064076  jal         func_1901D8
    ctx->pc = 0x18A6BCu;
    SET_GPR_U32(ctx, 31, 0x18A6C4u);
    ctx->pc = 0x18A6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6BCu;
            // 0x18a6c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1901D8u;
    if (runtime->hasFunction(0x1901D8u)) {
        auto targetFn = runtime->lookupFunction(0x1901D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A6C4u; }
        if (ctx->pc != 0x18A6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001901D8_0x1901d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A6C4u; }
        if (ctx->pc != 0x18A6C4u) { return; }
    }
    ctx->pc = 0x18A6C4u;
label_18a6c4:
    // 0x18a6c4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x18a6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x18a6c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A6C8u;
    {
        const bool branch_taken_0x18a6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6C8u;
            // 0x18a6cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6c8) {
            ctx->pc = 0x18A6E8u;
            goto label_18a6e8;
        }
    }
    ctx->pc = 0x18A6D0u;
    // 0x18a6d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a6d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a6d4: 0x34a50204  ori         $a1, $a1, 0x204
    ctx->pc = 0x18a6d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)516);
    // 0x18a6d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a6d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18a6dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a6e0: 0x80629ca  j           func_18A728
    ctx->pc = 0x18A6E0u;
    ctx->pc = 0x18A6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6E0u;
            // 0x18a6e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A728u;
    goto label_18a728;
    ctx->pc = 0x18A6E8u;
label_18a6e8:
    // 0x18a6e8: 0x6a02000b  ldl         $v0, 0xB($s0)
    ctx->pc = 0x18a6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x18a6ec: 0x6e020004  ldr         $v0, 0x4($s0)
    ctx->pc = 0x18a6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x18a6f0: 0x6a030013  ldl         $v1, 0x13($s0)
    ctx->pc = 0x18a6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x18a6f4: 0x6e03000c  ldr         $v1, 0xC($s0)
    ctx->pc = 0x18a6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x18a6f8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x18a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18a6fc: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x18a6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a700: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x18a700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a704: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x18a704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a708: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x18a708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a70c: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x18a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x18a710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a718: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18a718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18a71c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A71Cu;
            // 0x18a720: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A724u;
    // 0x18a724: 0x0  nop
    ctx->pc = 0x18a724u;
    // NOP
label_18a728:
    // 0x18a728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a72c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18a72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a730: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18a730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18a734: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18a734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a738: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18a73c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A73Cu;
    {
        const bool branch_taken_0x18a73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A73Cu;
            // 0x18a740: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a73c) {
            ctx->pc = 0x18A758u;
            goto label_18a758;
        }
    }
    ctx->pc = 0x18A744u;
    // 0x18a744: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x18a744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x18a748: 0xc0629de  jal         func_18A778
    ctx->pc = 0x18A748u;
    SET_GPR_U32(ctx, 31, 0x18A750u);
    ctx->pc = 0x18A74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A748u;
            // 0x18a74c: 0x24846a40  addiu       $a0, $a0, 0x6A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A778u;
    if (runtime->hasFunction(0x18A778u)) {
        auto targetFn = runtime->lookupFunction(0x18A778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A750u; }
        if (ctx->pc != 0x18A750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A778_0x18a778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A750u; }
        if (ctx->pc != 0x18A750u) { return; }
    }
    ctx->pc = 0x18A750u;
label_18a750:
    // 0x18a750: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18A750u;
    {
        const bool branch_taken_0x18a750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A750u;
            // 0x18a754: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a750) {
            ctx->pc = 0x18A764u;
            goto label_18a764;
        }
    }
    ctx->pc = 0x18A758u;
label_18a758:
    // 0x18a758: 0xc0629de  jal         func_18A778
    ctx->pc = 0x18A758u;
    SET_GPR_U32(ctx, 31, 0x18A760u);
    ctx->pc = 0x18A778u;
    if (runtime->hasFunction(0x18A778u)) {
        auto targetFn = runtime->lookupFunction(0x18A778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A760u; }
        if (ctx->pc != 0x18A760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A778_0x18a778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A760u; }
        if (ctx->pc != 0x18A760u) { return; }
    }
    ctx->pc = 0x18A760u;
label_18a760:
    // 0x18a760: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18a760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18a764:
    // 0x18a764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a768: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18a768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18a76c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A76Cu;
            // 0x18a770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A774u;
    // 0x18a774: 0x0  nop
    ctx->pc = 0x18a774u;
    // NOP
}
