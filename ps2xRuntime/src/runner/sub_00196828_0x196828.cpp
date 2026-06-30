#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196828
// Address: 0x196828 - 0x196968
void sub_00196828_0x196828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196828_0x196828");
#endif

    switch (ctx->pc) {
        case 0x196844u: goto label_196844;
        case 0x196850u: goto label_196850;
        case 0x196864u: goto label_196864;
        case 0x196874u: goto label_196874;
        case 0x196888u: goto label_196888;
        case 0x1968ecu: goto label_1968ec;
        default: break;
    }

    ctx->pc = 0x196828u;

    // 0x196828: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x196828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19682c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x19682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x196830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196834: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x196834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x196838: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19683c: 0xc06294e  jal         func_18A538
    ctx->pc = 0x19683Cu;
    SET_GPR_U32(ctx, 31, 0x196844u);
    ctx->pc = 0x196840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19683Cu;
            // 0x196840: 0x8e0403d4  lw          $a0, 0x3D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 980)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A538u;
    if (runtime->hasFunction(0x18A538u)) {
        auto targetFn = runtime->lookupFunction(0x18A538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196844u; }
        if (ctx->pc != 0x196844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A538_0x18a538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196844u; }
        if (ctx->pc != 0x196844u) { return; }
    }
    ctx->pc = 0x196844u;
label_196844:
    // 0x196844: 0x8e0403d4  lw          $a0, 0x3D4($s0)
    ctx->pc = 0x196844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 980)));
    // 0x196848: 0xc062958  jal         func_18A560
    ctx->pc = 0x196848u;
    SET_GPR_U32(ctx, 31, 0x196850u);
    ctx->pc = 0x19684Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196848u;
            // 0x19684c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A560u;
    if (runtime->hasFunction(0x18A560u)) {
        auto targetFn = runtime->lookupFunction(0x18A560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196850u; }
        if (ctx->pc != 0x196850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A560_0x18a560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196850u; }
        if (ctx->pc != 0x196850u) { return; }
    }
    ctx->pc = 0x196850u;
label_196850:
    // 0x196850: 0x8e0403d4  lw          $a0, 0x3D4($s0)
    ctx->pc = 0x196850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 980)));
    // 0x196854: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x196854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x196858: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x196858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x19685c: 0xc062962  jal         func_18A588
    ctx->pc = 0x19685Cu;
    SET_GPR_U32(ctx, 31, 0x196864u);
    ctx->pc = 0x196860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19685Cu;
            // 0x196860: 0x27a7008c  addiu       $a3, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A588u;
    if (runtime->hasFunction(0x18A588u)) {
        auto targetFn = runtime->lookupFunction(0x18A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196864u; }
        if (ctx->pc != 0x196864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A588_0x18a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196864u; }
        if (ctx->pc != 0x196864u) { return; }
    }
    ctx->pc = 0x196864u;
label_196864:
    // 0x196864: 0x8e0403d4  lw          $a0, 0x3D4($s0)
    ctx->pc = 0x196864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 980)));
    // 0x196868: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x196868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19686c: 0xc06296c  jal         func_18A5B0
    ctx->pc = 0x19686Cu;
    SET_GPR_U32(ctx, 31, 0x196874u);
    ctx->pc = 0x196870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19686Cu;
            // 0x196870: 0x27a60094  addiu       $a2, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A5B0u;
    if (runtime->hasFunction(0x18A5B0u)) {
        auto targetFn = runtime->lookupFunction(0x18A5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196874u; }
        if (ctx->pc != 0x196874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A5B0_0x18a5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196874u; }
        if (ctx->pc != 0x196874u) { return; }
    }
    ctx->pc = 0x196874u;
label_196874:
    // 0x196874: 0x260301dc  addiu       $v1, $s0, 0x1DC
    ctx->pc = 0x196874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
    // 0x196878: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x196878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x19687c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x19687Cu;
    {
        const bool branch_taken_0x19687c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19687Cu;
            // 0x196880: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19687c) {
            ctx->pc = 0x1968E8u;
            goto label_1968e8;
        }
    }
    ctx->pc = 0x196884u;
    // 0x196884: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x196884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_196888:
    // 0x196888: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x196888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x19688c: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x19688cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x196890: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x196890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x196894: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x196894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x196898: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x196898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x19689c: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x19689cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1968a0: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x1968a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1968a4: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x1968a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1968a8: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x1968a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1968ac: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x1968acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1968b0: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x1968b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1968b4: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x1968b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1968b8: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x1968b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1968bc: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x1968bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1968c0: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x1968c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1968c4: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x1968c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1968c8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1968c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1968cc: 0x0  nop
    ctx->pc = 0x1968ccu;
    // NOP
    // 0x1968d0: 0x0  nop
    ctx->pc = 0x1968d0u;
    // NOP
    // 0x1968d4: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1968D4u;
    {
        const bool branch_taken_0x1968d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1968D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1968D4u;
            // 0x1968d8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968d4) {
            ctx->pc = 0x196888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_196888;
        }
    }
    ctx->pc = 0x1968DCu;
    // 0x1968dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1968DCu;
    {
        const bool branch_taken_0x1968dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1968E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1968DCu;
            // 0x1968e0: 0x8fa20084  lw          $v0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968dc) {
            ctx->pc = 0x196924u;
            goto label_196924;
        }
    }
    ctx->pc = 0x1968E4u;
    // 0x1968e4: 0x0  nop
    ctx->pc = 0x1968e4u;
    // NOP
label_1968e8:
    // 0x1968e8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1968e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1968ec:
    // 0x1968ec: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x1968ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1968f0: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x1968f0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1968f4: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x1968f4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1968f8: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x1968f8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1968fc: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1968fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x196900: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x196900u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x196904: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x196904u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x196908: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x196908u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x19690c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x19690cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x196910: 0x0  nop
    ctx->pc = 0x196910u;
    // NOP
    // 0x196914: 0x0  nop
    ctx->pc = 0x196914u;
    // NOP
    // 0x196918: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x196918u;
    {
        const bool branch_taken_0x196918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x19691Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196918u;
            // 0x19691c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196918) {
            ctx->pc = 0x1968ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1968ec;
        }
    }
    ctx->pc = 0x196920u;
    // 0x196920: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x196920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_196924:
    // 0x196924: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x196924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x196928: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x196928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x19692c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x19692cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x196930: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x196930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x196934: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x196934u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x196938: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x196938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19693c: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x19693cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x196940: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x196940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x196944: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x196944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x196948: 0xae0602c8  sw          $a2, 0x2C8($s0)
    ctx->pc = 0x196948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 6));
    // 0x19694c: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x19694cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    // 0x196950: 0xae0202cc  sw          $v0, 0x2CC($s0)
    ctx->pc = 0x196950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
    // 0x196954: 0xae0502dc  sw          $a1, 0x2DC($s0)
    ctx->pc = 0x196954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 5));
    // 0x196958: 0xae0402d4  sw          $a0, 0x2D4($s0)
    ctx->pc = 0x196958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 4));
    // 0x19695c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x19695cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x196960: 0x3e00008  jr          $ra
    ctx->pc = 0x196960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196960u;
            // 0x196964: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196968u;
}
