#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF7A0
// Address: 0x1af7a0 - 0x1af9c8
void sub_001AF7A0_0x1af7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF7A0_0x1af7a0");
#endif

    switch (ctx->pc) {
        case 0x1af7d0u: goto label_1af7d0;
        case 0x1af978u: goto label_1af978;
        case 0x1af980u: goto label_1af980;
        default: break;
    }

    ctx->pc = 0x1af7a0u;

    // 0x1af7a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1af7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1af7a4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1af7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1af7a8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1af7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1af7ac: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x1af7acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1af7b0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1af7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1af7b4: 0x2487000c  addiu       $a3, $a0, 0xC
    ctx->pc = 0x1af7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x1af7b8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1af7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1af7bc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1af7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1af7c0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1af7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1af7c4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1af7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1af7c8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1af7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1af7cc: 0x0  nop
    ctx->pc = 0x1af7ccu;
    // NOP
label_1af7d0:
    // 0x1af7d0: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1af7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1af7d4: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x1af7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1af7d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1af7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1af7dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1af7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1af7e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1af7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1af7e4: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AF7E4u;
    {
        const bool branch_taken_0x1af7e4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1AF7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF7E4u;
            // 0x1af7e8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7e4) {
            ctx->pc = 0x1AF7D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1af7d0;
        }
    }
    ctx->pc = 0x1AF7ECu;
    // 0x1af7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF7F4u;
    // 0x1af7f4: 0x0  nop
    ctx->pc = 0x1af7f4u;
    // NOP
    // 0x1af7f8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1af7f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af7fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af800: 0x2862fffd  slti        $v0, $v1, -0x3
    ctx->pc = 0x1af800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x1af804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af808: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF808u;
    {
        const bool branch_taken_0x1af808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF808u;
            // 0x1af80c: 0x2866ffff  slti        $a2, $v1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af808) {
            ctx->pc = 0x1AF820u;
            goto label_1af820;
        }
    }
    ctx->pc = 0x1AF810u;
    // 0x1af810: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF810u;
    {
        const bool branch_taken_0x1af810 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF810u;
            // 0x1af814: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af810) {
            ctx->pc = 0x1AF830u;
            goto label_1af830;
        }
    }
    ctx->pc = 0x1AF818u;
    // 0x1af818: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF818u;
    {
        const bool branch_taken_0x1af818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af818) {
            ctx->pc = 0x1AF830u;
            goto label_1af830;
        }
    }
    ctx->pc = 0x1AF820u;
label_1af820:
    // 0x1af820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af824: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AF824u;
    ctx->pc = 0x1AF828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF824u;
            // 0x1af828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AF82Cu;
    // 0x1af82c: 0x0  nop
    ctx->pc = 0x1af82cu;
    // NOP
label_1af830:
    // 0x1af830: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF830u;
            // 0x1af834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF838u;
    // 0x1af838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af83c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1af83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1af840: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1af840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af848: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af84c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1af84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1af850: 0x8e502030  lw          $s0, 0x2030($s2)
    ctx->pc = 0x1af850u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8240)));
    // 0x1af854: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1af854u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1af858: 0x12200054  beqz        $s1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1AF858u;
    {
        const bool branch_taken_0x1af858 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF858u;
            // 0x1af85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af858) {
            ctx->pc = 0x1AF9ACu;
            goto label_1af9ac;
        }
    }
    ctx->pc = 0x1AF860u;
    // 0x1af860: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1af860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1af864: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1af864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1af868: 0x244c1db0  addiu       $t4, $v0, 0x1DB0
    ctx->pc = 0x1af868u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 7600));
    // 0x1af86c: 0x6a09000b  ldl         $t1, 0xB($s0)
    ctx->pc = 0x1af86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1af870: 0x6e090004  ldr         $t1, 0x4($s0)
    ctx->pc = 0x1af870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1af874: 0x6a0a0013  ldl         $t2, 0x13($s0)
    ctx->pc = 0x1af874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1af878: 0x6e0a000c  ldr         $t2, 0xC($s0)
    ctx->pc = 0x1af878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1af87c: 0x6a0b001b  ldl         $t3, 0x1B($s0)
    ctx->pc = 0x1af87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x1af880: 0x6e0b0014  ldr         $t3, 0x14($s0)
    ctx->pc = 0x1af880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x1af884: 0xb1890007  sdl         $t1, 0x7($t4)
    ctx->pc = 0x1af884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af888: 0xb5890000  sdr         $t1, 0x0($t4)
    ctx->pc = 0x1af888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af88c: 0xb18a000f  sdl         $t2, 0xF($t4)
    ctx->pc = 0x1af88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af890: 0xb58a0008  sdr         $t2, 0x8($t4)
    ctx->pc = 0x1af890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af894: 0xb18b0017  sdl         $t3, 0x17($t4)
    ctx->pc = 0x1af894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af898: 0xb58b0010  sdr         $t3, 0x10($t4)
    ctx->pc = 0x1af898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af89c: 0x6a090023  ldl         $t1, 0x23($s0)
    ctx->pc = 0x1af89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1af8a0: 0x6e09001c  ldr         $t1, 0x1C($s0)
    ctx->pc = 0x1af8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1af8a4: 0x8e0a0024  lw          $t2, 0x24($s0)
    ctx->pc = 0x1af8a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1af8a8: 0xb189001f  sdl         $t1, 0x1F($t4)
    ctx->pc = 0x1af8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8ac: 0xb5890018  sdr         $t1, 0x18($t4)
    ctx->pc = 0x1af8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8b0: 0xad8a0020  sw          $t2, 0x20($t4)
    ctx->pc = 0x1af8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 32), GPR_U32(ctx, 10));
    // 0x1af8b4: 0x3c05006e  lui         $a1, 0x6E
    ctx->pc = 0x1af8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)110 << 16));
    // 0x1af8b8: 0x3c06006e  lui         $a2, 0x6E
    ctx->pc = 0x1af8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)110 << 16));
    // 0x1af8bc: 0x3c07006e  lui         $a3, 0x6E
    ctx->pc = 0x1af8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)110 << 16));
    // 0x1af8c0: 0x246b1dd8  addiu       $t3, $v1, 0x1DD8
    ctx->pc = 0x1af8c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 7640));
    // 0x1af8c4: 0x6a02002f  ldl         $v0, 0x2F($s0)
    ctx->pc = 0x1af8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1af8c8: 0x6e020028  ldr         $v0, 0x28($s0)
    ctx->pc = 0x1af8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1af8cc: 0xb1620007  sdl         $v0, 0x7($t3)
    ctx->pc = 0x1af8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8d0: 0xb5620000  sdr         $v0, 0x0($t3)
    ctx->pc = 0x1af8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8d4: 0x3c08006e  lui         $t0, 0x6E
    ctx->pc = 0x1af8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)110 << 16));
    // 0x1af8d8: 0x24a91de0  addiu       $t1, $a1, 0x1DE0
    ctx->pc = 0x1af8d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 7648));
    // 0x1af8dc: 0x6a0c0037  ldl         $t4, 0x37($s0)
    ctx->pc = 0x1af8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x1af8e0: 0x6e0c0030  ldr         $t4, 0x30($s0)
    ctx->pc = 0x1af8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x1af8e4: 0x6a02003f  ldl         $v0, 0x3F($s0)
    ctx->pc = 0x1af8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1af8e8: 0x6e020038  ldr         $v0, 0x38($s0)
    ctx->pc = 0x1af8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1af8ec: 0x6a030047  ldl         $v1, 0x47($s0)
    ctx->pc = 0x1af8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1af8f0: 0x6e030040  ldr         $v1, 0x40($s0)
    ctx->pc = 0x1af8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1af8f4: 0xb12c0007  sdl         $t4, 0x7($t1)
    ctx->pc = 0x1af8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8f8: 0xb52c0000  sdr         $t4, 0x0($t1)
    ctx->pc = 0x1af8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8fc: 0xb122000f  sdl         $v0, 0xF($t1)
    ctx->pc = 0x1af8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af900: 0xb5220008  sdr         $v0, 0x8($t1)
    ctx->pc = 0x1af900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af904: 0xb1230017  sdl         $v1, 0x17($t1)
    ctx->pc = 0x1af904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af908: 0xb5230010  sdr         $v1, 0x10($t1)
    ctx->pc = 0x1af908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af90c: 0x6a0c004f  ldl         $t4, 0x4F($s0)
    ctx->pc = 0x1af90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x1af910: 0x6e0c0048  ldr         $t4, 0x48($s0)
    ctx->pc = 0x1af910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x1af914: 0x6a020057  ldl         $v0, 0x57($s0)
    ctx->pc = 0x1af914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1af918: 0x6e020050  ldr         $v0, 0x50($s0)
    ctx->pc = 0x1af918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1af91c: 0x6a03005f  ldl         $v1, 0x5F($s0)
    ctx->pc = 0x1af91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1af920: 0x6e030058  ldr         $v1, 0x58($s0)
    ctx->pc = 0x1af920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1af924: 0xb12c001f  sdl         $t4, 0x1F($t1)
    ctx->pc = 0x1af924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af928: 0xb52c0018  sdr         $t4, 0x18($t1)
    ctx->pc = 0x1af928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af92c: 0xb1220027  sdl         $v0, 0x27($t1)
    ctx->pc = 0x1af92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af930: 0xb5220020  sdr         $v0, 0x20($t1)
    ctx->pc = 0x1af930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af934: 0xb123002f  sdl         $v1, 0x2F($t1)
    ctx->pc = 0x1af934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af938: 0xb5230028  sdr         $v1, 0x28($t1)
    ctx->pc = 0x1af938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af93c: 0x6a0c0067  ldl         $t4, 0x67($s0)
    ctx->pc = 0x1af93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x1af940: 0x6e0c0060  ldr         $t4, 0x60($s0)
    ctx->pc = 0x1af940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x1af944: 0x6a02006f  ldl         $v0, 0x6F($s0)
    ctx->pc = 0x1af944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1af948: 0x6e020068  ldr         $v0, 0x68($s0)
    ctx->pc = 0x1af948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1af94c: 0xb12c0037  sdl         $t4, 0x37($t1)
    ctx->pc = 0x1af94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af950: 0xb52c0030  sdr         $t4, 0x30($t1)
    ctx->pc = 0x1af950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af954: 0xb122003f  sdl         $v0, 0x3F($t1)
    ctx->pc = 0x1af954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af958: 0xb5220038  sdr         $v0, 0x38($t1)
    ctx->pc = 0x1af958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af95c: 0x8e021080  lw          $v0, 0x1080($s0)
    ctx->pc = 0x1af95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4224)));
    // 0x1af960: 0xacc21e20  sw          $v0, 0x1E20($a2)
    ctx->pc = 0x1af960u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7712), GPR_U32(ctx, 2));
    // 0x1af964: 0x8e031084  lw          $v1, 0x1084($s0)
    ctx->pc = 0x1af964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4228)));
    // 0x1af968: 0xace31e24  sw          $v1, 0x1E24($a3)
    ctx->pc = 0x1af968u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7716), GPR_U32(ctx, 3));
    // 0x1af96c: 0x8e021088  lw          $v0, 0x1088($s0)
    ctx->pc = 0x1af96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4232)));
    // 0x1af970: 0xc06c66a  jal         func_1B19A8
    ctx->pc = 0x1AF970u;
    SET_GPR_U32(ctx, 31, 0x1AF978u);
    ctx->pc = 0x1AF974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF970u;
            // 0x1af974: 0xad021e28  sw          $v0, 0x1E28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 7720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B19A8u;
    if (runtime->hasFunction(0x1B19A8u)) {
        auto targetFn = runtime->lookupFunction(0x1B19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF978u; }
        if (ctx->pc != 0x1AF978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B19A8_0x1b19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF978u; }
        if (ctx->pc != 0x1AF978u) { return; }
    }
    ctx->pc = 0x1AF978u;
label_1af978:
    // 0x1af978: 0xc06be72  jal         func_1AF9C8
    ctx->pc = 0x1AF978u;
    SET_GPR_U32(ctx, 31, 0x1AF980u);
    ctx->pc = 0x1AF97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF978u;
            // 0x1af97c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF9C8u;
    if (runtime->hasFunction(0x1AF9C8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF980u; }
        if (ctx->pc != 0x1AF980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9C8_0x1af9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF980u; }
        if (ctx->pc != 0x1AF980u) { return; }
    }
    ctx->pc = 0x1AF980u;
label_1af980:
    // 0x1af980: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1af980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1af984: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AF984u;
    {
        const bool branch_taken_0x1af984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF984u;
            // 0x1af988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af984) {
            ctx->pc = 0x1AF9A8u;
            goto label_1af9a8;
        }
    }
    ctx->pc = 0x1AF98Cu;
    // 0x1af98c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af98cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af990: 0x34a50f0c  ori         $a1, $a1, 0xF0C
    ctx->pc = 0x1af990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3852);
    // 0x1af994: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af998: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af99c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1af99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af9a0: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AF9A0u;
    ctx->pc = 0x1AF9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9A0u;
            // 0x1af9a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AF9A8u;
label_1af9a8:
    // 0x1af9a8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1af9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1af9ac:
    // 0x1af9ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af9b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af9b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af9b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af9b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af9b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1af9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF9BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9BCu;
            // 0x1af9c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF9C4u;
    // 0x1af9c4: 0x0  nop
    ctx->pc = 0x1af9c4u;
    // NOP
}
