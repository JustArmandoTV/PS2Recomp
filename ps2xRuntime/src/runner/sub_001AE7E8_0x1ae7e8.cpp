#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AE7E8
// Address: 0x1ae7e8 - 0x1aeaf8
void sub_001AE7E8_0x1ae7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE7E8_0x1ae7e8");
#endif

    switch (ctx->pc) {
        case 0x1ae838u: goto label_1ae838;
        case 0x1ae870u: goto label_1ae870;
        case 0x1ae8d4u: goto label_1ae8d4;
        case 0x1ae944u: goto label_1ae944;
        default: break;
    }

    ctx->pc = 0x1ae7e8u;

    // 0x1ae7e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ae7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ae7ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ae7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ae7f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ae7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ae7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ae7f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ae7f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ae7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ae800: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ae800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae804: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ae804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ae808: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1ae808u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae80c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ae80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ae810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae814: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ae814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ae818: 0x8e702030  lw          $s0, 0x2030($s3)
    ctx->pc = 0x1ae818u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8240)));
    // 0x1ae81c: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x1ae81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x1ae820: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE820u;
    {
        const bool branch_taken_0x1ae820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE820u;
            // 0x1ae824: 0x26750950  addiu       $s5, $s3, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae820) {
            ctx->pc = 0x1AE830u;
            goto label_1ae830;
        }
    }
    ctx->pc = 0x1AE828u;
    // 0x1ae828: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE828u;
    {
        const bool branch_taken_0x1ae828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE828u;
            // 0x1ae82c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae828) {
            ctx->pc = 0x1AE850u;
            goto label_1ae850;
        }
    }
    ctx->pc = 0x1AE830u;
label_1ae830:
    // 0x1ae830: 0xc06c0d8  jal         func_1B0360
    ctx->pc = 0x1AE830u;
    SET_GPR_U32(ctx, 31, 0x1AE838u);
    ctx->pc = 0x1B0360u;
    if (runtime->hasFunction(0x1B0360u)) {
        auto targetFn = runtime->lookupFunction(0x1B0360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE838u; }
        if (ctx->pc != 0x1AE838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0360_0x1b0360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE838u; }
        if (ctx->pc != 0x1AE838u) { return; }
    }
    ctx->pc = 0x1AE838u;
label_1ae838:
    // 0x1ae838: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE838u;
    {
        const bool branch_taken_0x1ae838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE838u;
            // 0x1ae83c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae838) {
            ctx->pc = 0x1AE850u;
            goto label_1ae850;
        }
    }
    ctx->pc = 0x1AE840u;
    // 0x1ae840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae844: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae848: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1AE848u;
    {
        const bool branch_taken_0x1ae848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE848u;
            // 0x1ae84c: 0xaea3002c  sw          $v1, 0x2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae848) {
            ctx->pc = 0x1AEAD0u;
            goto label_1aead0;
        }
    }
    ctx->pc = 0x1AE850u;
label_1ae850:
    // 0x1ae850: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x1ae850u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ae854: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x1ae854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae858: 0x2544005c  addiu       $a0, $t2, 0x5C
    ctx->pc = 0x1ae858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 92));
    // 0x1ae85c: 0x2441025  or          $v0, $s2, $a0
    ctx->pc = 0x1ae85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1ae860: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1ae860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1ae864: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AE864u;
    {
        const bool branch_taken_0x1ae864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE864u;
            // 0x1ae868: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae864) {
            ctx->pc = 0x1AE8D0u;
            goto label_1ae8d0;
        }
    }
    ctx->pc = 0x1AE86Cu;
    // 0x1ae86c: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x1ae86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_1ae870:
    // 0x1ae870: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1ae870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ae874: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1ae874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ae878: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1ae878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1ae87c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1ae87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1ae880: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1ae880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1ae884: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1ae884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1ae888: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x1ae888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1ae88c: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x1ae88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1ae890: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1ae890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ae894: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1ae894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ae898: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1ae898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ae89c: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1ae89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ae8a0: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1ae8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ae8a4: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1ae8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ae8a8: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x1ae8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ae8ac: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x1ae8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ae8b0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1ae8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1ae8b4: 0x0  nop
    ctx->pc = 0x1ae8b4u;
    // NOP
    // 0x1ae8b8: 0x0  nop
    ctx->pc = 0x1ae8b8u;
    // NOP
    // 0x1ae8bc: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1AE8BCu;
    {
        const bool branch_taken_0x1ae8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE8BCu;
            // 0x1ae8c0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8bc) {
            ctx->pc = 0x1AE870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ae870;
        }
    }
    ctx->pc = 0x1AE8C4u;
    // 0x1ae8c4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AE8C4u;
    {
        const bool branch_taken_0x1ae8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE8C4u;
            // 0x1ae8c8: 0xde021120  ld          $v0, 0x1120($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8c4) {
            ctx->pc = 0x1AE90Cu;
            goto label_1ae90c;
        }
    }
    ctx->pc = 0x1AE8CCu;
    // 0x1ae8cc: 0x0  nop
    ctx->pc = 0x1ae8ccu;
    // NOP
label_1ae8d0:
    // 0x1ae8d0: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x1ae8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_1ae8d4:
    // 0x1ae8d4: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1ae8d4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae8d8: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1ae8d8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ae8dc: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1ae8dcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ae8e0: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x1ae8e0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ae8e4: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1ae8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1ae8e8: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1ae8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1ae8ec: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1ae8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x1ae8f0: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1ae8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1ae8f4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1ae8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1ae8f8: 0x0  nop
    ctx->pc = 0x1ae8f8u;
    // NOP
    // 0x1ae8fc: 0x0  nop
    ctx->pc = 0x1ae8fcu;
    // NOP
    // 0x1ae900: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1AE900u;
    {
        const bool branch_taken_0x1ae900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE900u;
            // 0x1ae904: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae900) {
            ctx->pc = 0x1AE8D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ae8d4;
        }
    }
    ctx->pc = 0x1AE908u;
    // 0x1ae908: 0xde021120  ld          $v0, 0x1120($s0)
    ctx->pc = 0x1ae908u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4384)));
label_1ae90c:
    // 0x1ae90c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ae90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae910: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x1ae910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1ae914: 0x14830042  bne         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1AE914u;
    {
        const bool branch_taken_0x1ae914 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AE918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE914u;
            // 0x1ae918: 0xfca200e0  sd          $v0, 0xE0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae914) {
            ctx->pc = 0x1AEA20u;
            goto label_1aea20;
        }
    }
    ctx->pc = 0x1AE91Cu;
    // 0x1ae91c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1ae91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1ae920: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ae920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ae924: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ae924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ae928: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1AE928u;
    {
        const bool branch_taken_0x1ae928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae928) {
            ctx->pc = 0x1AE92Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE928u;
            // 0x1ae92c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE95Cu;
            goto label_1ae95c;
        }
    }
    ctx->pc = 0x1AE930u;
    // 0x1ae930: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x1ae930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x1ae934: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE934u;
    {
        const bool branch_taken_0x1ae934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae934) {
            ctx->pc = 0x1AE938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE934u;
            // 0x1ae938: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE95Cu;
            goto label_1ae95c;
        }
    }
    ctx->pc = 0x1AE93Cu;
    // 0x1ae93c: 0xc06c116  jal         func_1B0458
    ctx->pc = 0x1AE93Cu;
    SET_GPR_U32(ctx, 31, 0x1AE944u);
    ctx->pc = 0x1AE940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE93Cu;
            // 0x1ae940: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0458u;
    if (runtime->hasFunction(0x1B0458u)) {
        auto targetFn = runtime->lookupFunction(0x1B0458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE944u; }
        if (ctx->pc != 0x1AE944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0458_0x1b0458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE944u; }
        if (ctx->pc != 0x1AE944u) { return; }
    }
    ctx->pc = 0x1AE944u;
label_1ae944:
    // 0x1ae944: 0x8e020164  lw          $v0, 0x164($s0)
    ctx->pc = 0x1ae944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x1ae948: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1ae948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x1ae94c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1ae94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ae950: 0xae030164  sw          $v1, 0x164($s0)
    ctx->pc = 0x1ae950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 3));
    // 0x1ae954: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x1ae954u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ae958: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ae958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ae95c:
    // 0x1ae95c: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x1ae95cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ae960: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ae960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ae964: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x1ae964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x1ae968: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1ae968u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ae96c: 0x2505000f  addiu       $a1, $t0, 0xF
    ctx->pc = 0x1ae96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x1ae970: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1ae970u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1ae974: 0x28a90000  slti        $t1, $a1, 0x0
    ctx->pc = 0x1ae974u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ae978: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ae978u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1ae97c: 0x2508001e  addiu       $t0, $t0, 0x1E
    ctx->pc = 0x1ae97cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30));
    // 0x1ae980: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1ae980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ae984: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ae984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ae988: 0x2487003f  addiu       $a3, $a0, 0x3F
    ctx->pc = 0x1ae988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x1ae98c: 0x2484007e  addiu       $a0, $a0, 0x7E
    ctx->pc = 0x1ae98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 126));
    // 0x1ae990: 0x2446003f  addiu       $a2, $v0, 0x3F
    ctx->pc = 0x1ae990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1ae994: 0x2442007e  addiu       $v0, $v0, 0x7E
    ctx->pc = 0x1ae994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 126));
    // 0x1ae998: 0x28e30000  slti        $v1, $a3, 0x0
    ctx->pc = 0x1ae998u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ae99c: 0x109280b  movn        $a1, $t0, $t1
    ctx->pc = 0x1ae99cu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x1ae9a0: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x1ae9a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x1ae9a4: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x1ae9a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ae9a8: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1ae9a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1ae9ac: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x1ae9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1ae9b0: 0x73983  sra         $a3, $a3, 6
    ctx->pc = 0x1ae9b0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
    // 0x1ae9b4: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1ae9b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1ae9b8: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x1ae9b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ae9bc: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x1ae9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x1ae9c0: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x1ae9c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x1ae9c4: 0x8e040164  lw          $a0, 0x164($s0)
    ctx->pc = 0x1ae9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x1ae9c8: 0x70c52818  mult1       $a1, $a2, $a1
    ctx->pc = 0x1ae9c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ae9cc: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x1ae9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1ae9d0: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x1ae9d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ae9d4: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x1ae9d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ae9d8: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1ae9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1ae9dc: 0xa627001e  sh          $a3, 0x1E($s1)
    ctx->pc = 0x1ae9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 7));
    // 0x1ae9e0: 0x1222021  addu        $a0, $t1, $v0
    ctx->pc = 0x1ae9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1ae9e4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1ae9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1ae9e8: 0x52a40  sll         $a1, $a1, 9
    ctx->pc = 0x1ae9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x1ae9ec: 0xa626001c  sh          $a2, 0x1C($s1)
    ctx->pc = 0x1ae9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ae9f0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1ae9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ae9f4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1ae9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ae9f8: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x1ae9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x1ae9fc: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1ae9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x1aea00: 0xa627000e  sh          $a3, 0xE($s1)
    ctx->pc = 0x1aea00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x1aea04: 0xa626000c  sh          $a2, 0xC($s1)
    ctx->pc = 0x1aea04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x1aea08: 0xae280008  sw          $t0, 0x8($s1)
    ctx->pc = 0x1aea08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 8));
    // 0x1aea0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1aea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1aea10: 0xae290018  sw          $t1, 0x18($s1)
    ctx->pc = 0x1aea10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 9));
    // 0x1aea14: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1AEA14u;
    {
        const bool branch_taken_0x1aea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA14u;
            // 0x1aea18: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea14) {
            ctx->pc = 0x1AEAACu;
            goto label_1aeaac;
        }
    }
    ctx->pc = 0x1AEA1Cu;
    // 0x1aea1c: 0x0  nop
    ctx->pc = 0x1aea1cu;
    // NOP
label_1aea20:
    // 0x1aea20: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1aea20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1aea24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aea28: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1aea28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aea2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AEA2Cu;
    {
        const bool branch_taken_0x1aea2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA2Cu;
            // 0x1aea30: 0x8e020138  lw          $v0, 0x138($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea2c) {
            ctx->pc = 0x1AEA54u;
            goto label_1aea54;
        }
    }
    ctx->pc = 0x1AEA34u;
    // 0x1aea34: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x1aea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x1aea38: 0xae050164  sw          $a1, 0x164($s0)
    ctx->pc = 0x1aea38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 5));
    // 0x1aea3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1aea3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1aea40: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1aea40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1aea44: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x1aea44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x1aea48: 0xae03013c  sw          $v1, 0x13C($s0)
    ctx->pc = 0x1aea48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 3));
    // 0x1aea4c: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x1aea4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1aea50: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x1aea50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_1aea54:
    // 0x1aea54: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x1aea54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x1aea58: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x1aea58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x1aea5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1aea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1aea60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1aea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1aea64: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1aea64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1aea68: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1aea68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1aea6c: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1aea6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1aea70: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x1aea70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1aea74: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x1aea74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1aea78: 0xb2250007  sdl         $a1, 0x7($s1)
    ctx->pc = 0x1aea78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aea7c: 0xb6250000  sdr         $a1, 0x0($s1)
    ctx->pc = 0x1aea7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aea80: 0xb226000f  sdl         $a2, 0xF($s1)
    ctx->pc = 0x1aea80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aea84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1aea84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aea88: 0xb6260008  sdr         $a2, 0x8($s1)
    ctx->pc = 0x1aea88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aea8c: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x1aea8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1aea90: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x1aea90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1aea94: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x1aea94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1aea98: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x1aea98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1aea9c: 0xb2290017  sdl         $t1, 0x17($s1)
    ctx->pc = 0x1aea9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aeaa0: 0xb6290010  sdr         $t1, 0x10($s1)
    ctx->pc = 0x1aeaa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aeaa4: 0xb222001f  sdl         $v0, 0x1F($s1)
    ctx->pc = 0x1aeaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aeaa8: 0xb6220018  sdr         $v0, 0x18($s1)
    ctx->pc = 0x1aeaa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aeaac:
    // 0x1aeaac: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x1aeaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1aeab0: 0x2542005c  addiu       $v0, $t2, 0x5C
    ctx->pc = 0x1aeab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 92));
    // 0x1aeab4: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x1aeab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x1aeab8: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1aeab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x1aeabc: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x1aeabcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x1aeac0: 0xa6200040  sh          $zero, 0x40($s1)
    ctx->pc = 0x1aeac0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x1aeac4: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x1aeac4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
    // 0x1aeac8: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x1aeac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x1aeacc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aeaccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aead0:
    // 0x1aead0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aead0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aead4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aead4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aead8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aead8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeadc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1aeadcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aeae0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1aeae0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aeae4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1aeae4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aeae8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1aeae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aeaec: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEAECu;
            // 0x1aeaf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEAF4u;
    // 0x1aeaf4: 0x0  nop
    ctx->pc = 0x1aeaf4u;
    // NOP
}
