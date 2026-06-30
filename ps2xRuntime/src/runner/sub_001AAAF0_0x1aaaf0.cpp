#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AAAF0
// Address: 0x1aaaf0 - 0x1aabb0
void sub_001AAAF0_0x1aaaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAAF0_0x1aaaf0");
#endif

    switch (ctx->pc) {
        case 0x1aab90u: goto label_1aab90;
        default: break;
    }

    ctx->pc = 0x1aaaf0u;

    // 0x1aaaf0: 0x8c831fec  lw          $v1, 0x1FEC($a0)
    ctx->pc = 0x1aaaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8172)));
    // 0x1aaaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAF4u;
            // 0x1aaaf8: 0x8c620020  lw          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAAFCu;
    // 0x1aaafc: 0x0  nop
    ctx->pc = 0x1aaafcu;
    // NOP
    // 0x1aab00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aab04: 0x3c07006e  lui         $a3, 0x6E
    ctx->pc = 0x1aab04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)110 << 16));
    // 0x1aab08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aab0c: 0x24e71db0  addiu       $a3, $a3, 0x1DB0
    ctx->pc = 0x1aab0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7600));
    // 0x1aab10: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1aab10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1aab14: 0x2408ffc0  addiu       $t0, $zero, -0x40
    ctx->pc = 0x1aab14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1aab18: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x1aab18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1aab1c: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x1aab1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1aab20: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x1aab20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1aab24: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x1aab24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1aab28: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x1aab28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1aab2c: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x1aab2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1aab30: 0x6889001f  ldl         $t1, 0x1F($a0)
    ctx->pc = 0x1aab30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1aab34: 0x6c890018  ldr         $t1, 0x18($a0)
    ctx->pc = 0x1aab34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1aab38: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x1aab38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aab3c: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x1aab3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aab40: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x1aab40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aab44: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x1aab44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aab48: 0xb0e60017  sdl         $a2, 0x17($a3)
    ctx->pc = 0x1aab48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aab4c: 0xb4e60010  sdr         $a2, 0x10($a3)
    ctx->pc = 0x1aab4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aab50: 0xb0e9001f  sdl         $t1, 0x1F($a3)
    ctx->pc = 0x1aab50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aab54: 0xb4e90018  sdr         $t1, 0x18($a3)
    ctx->pc = 0x1aab54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aab58: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1aab58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1aab5c: 0xace30020  sw          $v1, 0x20($a3)
    ctx->pc = 0x1aab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 3));
    // 0x1aab60: 0x24441dd8  addiu       $a0, $v0, 0x1DD8
    ctx->pc = 0x1aab60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7640));
    // 0x1aab64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aab64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aab68: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1aab68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1aab6c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1aab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1aab70: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x1aab70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1aab74: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x1aab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1aab78: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x1aab78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1aab7c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1aab7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x1aab80: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x1aab80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x1aab84: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x1aab84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x1aab88: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1AAB88u;
    SET_GPR_U32(ctx, 31, 0x1AAB90u);
    ctx->pc = 0x1AAB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB88u;
            // 0x1aab8c: 0xace30020  sw          $v1, 0x20($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB90u; }
        if (ctx->pc != 0x1AAB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB90u; }
        if (ctx->pc != 0x1AAB90u) { return; }
    }
    ctx->pc = 0x1AAB90u;
label_1aab90:
    // 0x1aab90: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1aab90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1aab94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aab94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aab98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aab98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aab9c: 0x24841de0  addiu       $a0, $a0, 0x1DE0
    ctx->pc = 0x1aab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7648));
    // 0x1aaba0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1aaba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1aaba4: 0x804a576  j           func_1295D8
    ctx->pc = 0x1AABA4u;
    ctx->pc = 0x1AABA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABA4u;
            // 0x1aaba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AABACu;
    // 0x1aabac: 0x0  nop
    ctx->pc = 0x1aabacu;
    // NOP
}
