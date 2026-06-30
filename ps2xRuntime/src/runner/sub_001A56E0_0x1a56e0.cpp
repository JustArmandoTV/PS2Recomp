#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A56E0
// Address: 0x1a56e0 - 0x1a5778
void sub_001A56E0_0x1a56e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A56E0_0x1a56e0");
#endif

    switch (ctx->pc) {
        case 0x1a5710u: goto label_1a5710;
        case 0x1a574cu: goto label_1a574c;
        case 0x1a575cu: goto label_1a575c;
        default: break;
    }

    ctx->pc = 0x1a56e0u;

    // 0x1a56e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a56e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a56e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a56e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a56e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a56e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56ec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a56ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a56f0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a56f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a56f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a56f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a56f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a56fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5700: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a5700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a5704: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a5708: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1A5708u;
    SET_GPR_U32(ctx, 31, 0x1A5710u);
    ctx->pc = 0x1A570Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5708u;
            // 0x1a570c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5710u; }
        if (ctx->pc != 0x1A5710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5710u; }
        if (ctx->pc != 0x1A5710u) { return; }
    }
    ctx->pc = 0x1A5710u;
label_1a5710:
    // 0x1a5710: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x1a5710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x1a5714: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1a5714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1a5718: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x1a5718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a571c: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x1a571cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a5720: 0x6a63000f  ldl         $v1, 0xF($s3)
    ctx->pc = 0x1a5720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a5724: 0x6e630008  ldr         $v1, 0x8($s3)
    ctx->pc = 0x1a5724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a5728: 0x6a650017  ldl         $a1, 0x17($s3)
    ctx->pc = 0x1a5728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a572c: 0x6e650010  ldr         $a1, 0x10($s3)
    ctx->pc = 0x1a572cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a5730: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x1a5730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5734: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x1a5734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5738: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x1a5738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a573c: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x1a573cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5740: 0xb2050017  sdl         $a1, 0x17($s0)
    ctx->pc = 0x1a5740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a5744: 0xc0695de  jal         func_1A5778
    ctx->pc = 0x1A5744u;
    SET_GPR_U32(ctx, 31, 0x1A574Cu);
    ctx->pc = 0x1A5748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5744u;
            // 0x1a5748: 0xb6050010  sdr         $a1, 0x10($s0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5778u;
    if (runtime->hasFunction(0x1A5778u)) {
        auto targetFn = runtime->lookupFunction(0x1A5778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A574Cu; }
        if (ctx->pc != 0x1A574Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5778_0x1a5778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A574Cu; }
        if (ctx->pc != 0x1A574Cu) { return; }
    }
    ctx->pc = 0x1A574Cu;
label_1a574c:
    // 0x1a574c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1a574cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1a5750: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a5750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1a5754: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1A5754u;
    SET_GPR_U32(ctx, 31, 0x1A575Cu);
    ctx->pc = 0x1A5758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5754u;
            // 0x1a5758: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A575Cu; }
        if (ctx->pc != 0x1A575Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A575Cu; }
        if (ctx->pc != 0x1A575Cu) { return; }
    }
    ctx->pc = 0x1A575Cu;
label_1a575c:
    // 0x1a575c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a575cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5760: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a5760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a5764: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5768: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a5768u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a576c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a576cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5770: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5770u;
            // 0x1a5774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5778u;
}
