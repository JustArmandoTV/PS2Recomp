#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A87F8
// Address: 0x1a87f8 - 0x1a88d0
void sub_001A87F8_0x1a87f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A87F8_0x1a87f8");
#endif

    switch (ctx->pc) {
        case 0x1a8868u: goto label_1a8868;
        default: break;
    }

    ctx->pc = 0x1a87f8u;

    // 0x1a87f8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1a87f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1a87fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A87FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87FCu;
            // 0x1a8800: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8804u;
    // 0x1a8804: 0x0  nop
    ctx->pc = 0x1a8804u;
    // NOP
    // 0x1a8808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a880c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a880cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8814: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8818: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a8818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a881c: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A881Cu;
    {
        const bool branch_taken_0x1a881c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A881Cu;
            // 0x1a8820: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a881c) {
            ctx->pc = 0x1A8860u;
            goto label_1a8860;
        }
    }
    ctx->pc = 0x1A8824u;
    // 0x1a8824: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a8824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1a8828: 0x24429980  addiu       $v0, $v0, -0x6680
    ctx->pc = 0x1a8828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941056));
    // 0x1a882c: 0x684301a3  ldl         $v1, 0x1A3($v0)
    ctx->pc = 0x1a882cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 419); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a8830: 0x6c43019c  ldr         $v1, 0x19C($v0)
    ctx->pc = 0x1a8830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 412); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a8834: 0x684401ab  ldl         $a0, 0x1AB($v0)
    ctx->pc = 0x1a8834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 427); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a8838: 0x6c4401a4  ldr         $a0, 0x1A4($v0)
    ctx->pc = 0x1a8838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 420); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a883c: 0x8c4501ac  lw          $a1, 0x1AC($v0)
    ctx->pc = 0x1a883cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x1a8840: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x1a8840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8844: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x1a8844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8848: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x1a8848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a884c: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x1a884cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8850: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x1a8850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x1a8854: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A8854u;
    {
        const bool branch_taken_0x1a8854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8854u;
            // 0x1a8858: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8854) {
            ctx->pc = 0x1A88BCu;
            goto label_1a88bc;
        }
    }
    ctx->pc = 0x1A885Cu;
    // 0x1a885c: 0x0  nop
    ctx->pc = 0x1a885cu;
    // NOP
label_1a8860:
    // 0x1a8860: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1A8860u;
    SET_GPR_U32(ctx, 31, 0x1A8868u);
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8868u; }
        if (ctx->pc != 0x1A8868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8868u; }
        if (ctx->pc != 0x1A8868u) { return; }
    }
    ctx->pc = 0x1A8868u;
label_1a8868:
    // 0x1a8868: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a8868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a886c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A886Cu;
    {
        const bool branch_taken_0x1a886c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A886Cu;
            // 0x1a8870: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a886c) {
            ctx->pc = 0x1A8890u;
            goto label_1a8890;
        }
    }
    ctx->pc = 0x1A8874u;
    // 0x1a8874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8878: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x1a8878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
    // 0x1a887c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a887cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8884: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A8884u;
    ctx->pc = 0x1A8888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8884u;
            // 0x1a8888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A888Cu;
    // 0x1a888c: 0x0  nop
    ctx->pc = 0x1a888cu;
    // NOP
label_1a8890:
    // 0x1a8890: 0x6a0209ff  ldl         $v0, 0x9FF($s0)
    ctx->pc = 0x1a8890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a8894: 0x6e0209f8  ldr         $v0, 0x9F8($s0)
    ctx->pc = 0x1a8894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2552); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a8898: 0x6a030a07  ldl         $v1, 0xA07($s0)
    ctx->pc = 0x1a8898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2567); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a889c: 0x6e030a00  ldr         $v1, 0xA00($s0)
    ctx->pc = 0x1a889cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a88a0: 0x8e040a08  lw          $a0, 0xA08($s0)
    ctx->pc = 0x1a88a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2568)));
    // 0x1a88a4: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x1a88a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a88a8: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x1a88a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a88ac: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x1a88acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a88b0: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x1a88b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a88b4: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x1a88b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x1a88b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a88b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a88bc:
    // 0x1a88bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a88bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a88c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a88c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a88c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a88c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A88C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A88CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A88C8u;
            // 0x1a88cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A88D0u;
}
