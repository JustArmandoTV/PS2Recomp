#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5EE8
// Address: 0x1c5ee8 - 0x1c60f0
void sub_001C5EE8_0x1c5ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5EE8_0x1c5ee8");
#endif

    switch (ctx->pc) {
        case 0x1c5f08u: goto label_1c5f08;
        case 0x1c5f14u: goto label_1c5f14;
        case 0x1c5f20u: goto label_1c5f20;
        case 0x1c6020u: goto label_1c6020;
        default: break;
    }

    ctx->pc = 0x1c5ee8u;

    // 0x1c5ee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5eec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5ef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ef4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c5ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c5ef8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c5ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5efc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c5efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5f00: 0xc071784  jal         func_1C5E10
    ctx->pc = 0x1C5F00u;
    SET_GPR_U32(ctx, 31, 0x1C5F08u);
    ctx->pc = 0x1C5F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5F00u;
            // 0x1c5f04: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5E10u;
    if (runtime->hasFunction(0x1C5E10u)) {
        auto targetFn = runtime->lookupFunction(0x1C5E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F08u; }
        if (ctx->pc != 0x1C5F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5E10_0x1c5e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F08u; }
        if (ctx->pc != 0x1C5F08u) { return; }
    }
    ctx->pc = 0x1C5F08u;
label_1c5f08:
    // 0x1c5f08: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1c5f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1c5f0c: 0xc0717aa  jal         func_1C5EA8
    ctx->pc = 0x1C5F0Cu;
    SET_GPR_U32(ctx, 31, 0x1C5F14u);
    ctx->pc = 0x1C5F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5F0Cu;
            // 0x1c5f10: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5EA8u;
    if (runtime->hasFunction(0x1C5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1C5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F14u; }
        if (ctx->pc != 0x1C5F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5EA8_0x1c5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F14u; }
        if (ctx->pc != 0x1C5F14u) { return; }
    }
    ctx->pc = 0x1C5F14u;
label_1c5f14:
    // 0x1c5f14: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1c5f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1c5f18: 0xc0717a0  jal         func_1C5E80
    ctx->pc = 0x1C5F18u;
    SET_GPR_U32(ctx, 31, 0x1C5F20u);
    ctx->pc = 0x1C5F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5F18u;
            // 0x1c5f1c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5E80u;
    if (runtime->hasFunction(0x1C5E80u)) {
        auto targetFn = runtime->lookupFunction(0x1C5E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F20u; }
        if (ctx->pc != 0x1C5F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5E80_0x1c5e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F20u; }
        if (ctx->pc != 0x1C5F20u) { return; }
    }
    ctx->pc = 0x1C5F20u;
label_1c5f20:
    // 0x1c5f20: 0x26080024  addiu       $t0, $s0, 0x24
    ctx->pc = 0x1c5f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1c5f24: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1c5f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c5f28: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c5f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c5f2c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1c5f2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c5f30: 0x26080028  addiu       $t0, $s0, 0x28
    ctx->pc = 0x1c5f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1c5f34: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x1c5f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x1c5f38: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1c5f38u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1c5f3c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1c5f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c5f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c5f44: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c5f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c5f48: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1c5f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c5f4c: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1c5f4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1c5f50: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1c5f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c5f54: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1c5f54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c5f58: 0x2625005c  addiu       $a1, $s1, 0x5C
    ctx->pc = 0x1c5f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x1c5f5c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c5f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c5f60: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1c5f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1c5f64: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x1c5f64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c5f68: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1c5f68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c5f6c: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x1c5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1c5f70: 0x73e02  srl         $a3, $a3, 24
    ctx->pc = 0x1c5f70u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1c5f74: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1c5f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f78: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c5f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c5f7c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c5f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c5f80: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1c5f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c5f84: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1c5f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1c5f88: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1c5f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1c5f8c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1c5f8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c5f90: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c5f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c5f94: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1c5f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1c5f98: 0x6a020033  ldl         $v0, 0x33($s0)
    ctx->pc = 0x1c5f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c5f9c: 0x6e02002c  ldr         $v0, 0x2C($s0)
    ctx->pc = 0x1c5f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c5fa0: 0x6a03003b  ldl         $v1, 0x3B($s0)
    ctx->pc = 0x1c5fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c5fa4: 0x6e030034  ldr         $v1, 0x34($s0)
    ctx->pc = 0x1c5fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c5fa8: 0x6a060043  ldl         $a2, 0x43($s0)
    ctx->pc = 0x1c5fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1c5fac: 0x6e06003c  ldr         $a2, 0x3C($s0)
    ctx->pc = 0x1c5facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1c5fb0: 0x6a07004b  ldl         $a3, 0x4B($s0)
    ctx->pc = 0x1c5fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1c5fb4: 0x6e070044  ldr         $a3, 0x44($s0)
    ctx->pc = 0x1c5fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1c5fb8: 0xb2220023  sdl         $v0, 0x23($s1)
    ctx->pc = 0x1c5fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5fbc: 0xb622001c  sdr         $v0, 0x1C($s1)
    ctx->pc = 0x1c5fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5fc0: 0xb223002b  sdl         $v1, 0x2B($s1)
    ctx->pc = 0x1c5fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5fc4: 0xb6230024  sdr         $v1, 0x24($s1)
    ctx->pc = 0x1c5fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5fc8: 0xb2260033  sdl         $a2, 0x33($s1)
    ctx->pc = 0x1c5fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5fcc: 0xb626002c  sdr         $a2, 0x2C($s1)
    ctx->pc = 0x1c5fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5fd0: 0xb227003b  sdl         $a3, 0x3B($s1)
    ctx->pc = 0x1c5fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5fd4: 0xb6270034  sdr         $a3, 0x34($s1)
    ctx->pc = 0x1c5fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5fd8: 0x6a020053  ldl         $v0, 0x53($s0)
    ctx->pc = 0x1c5fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c5fdc: 0x6e02004c  ldr         $v0, 0x4C($s0)
    ctx->pc = 0x1c5fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c5fe0: 0x6a03005b  ldl         $v1, 0x5B($s0)
    ctx->pc = 0x1c5fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c5fe4: 0x6e030054  ldr         $v1, 0x54($s0)
    ctx->pc = 0x1c5fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c5fe8: 0x6a060063  ldl         $a2, 0x63($s0)
    ctx->pc = 0x1c5fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1c5fec: 0x6e06005c  ldr         $a2, 0x5C($s0)
    ctx->pc = 0x1c5fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1c5ff0: 0x6a07006b  ldl         $a3, 0x6B($s0)
    ctx->pc = 0x1c5ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1c5ff4: 0x6e070064  ldr         $a3, 0x64($s0)
    ctx->pc = 0x1c5ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1c5ff8: 0xb2220043  sdl         $v0, 0x43($s1)
    ctx->pc = 0x1c5ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c5ffc: 0xb622003c  sdr         $v0, 0x3C($s1)
    ctx->pc = 0x1c5ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c6000: 0xb223004b  sdl         $v1, 0x4B($s1)
    ctx->pc = 0x1c6000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c6004: 0xb6230044  sdr         $v1, 0x44($s1)
    ctx->pc = 0x1c6004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c6008: 0xb2260053  sdl         $a2, 0x53($s1)
    ctx->pc = 0x1c6008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c600c: 0xb626004c  sdr         $a2, 0x4C($s1)
    ctx->pc = 0x1c600cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c6010: 0xb227005b  sdl         $a3, 0x5B($s1)
    ctx->pc = 0x1c6010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c6014: 0xb6270054  sdr         $a3, 0x54($s1)
    ctx->pc = 0x1c6014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c6018: 0xc0717a0  jal         func_1C5E80
    ctx->pc = 0x1C6018u;
    SET_GPR_U32(ctx, 31, 0x1C6020u);
    ctx->pc = 0x1C601Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6018u;
            // 0x1c601c: 0xa220005b  sb          $zero, 0x5B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5E80u;
    if (runtime->hasFunction(0x1C5E80u)) {
        auto targetFn = runtime->lookupFunction(0x1C5E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6020u; }
        if (ctx->pc != 0x1C6020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5E80_0x1c5e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6020u; }
        if (ctx->pc != 0x1C6020u) { return; }
    }
    ctx->pc = 0x1C6020u;
label_1c6020:
    // 0x1c6020: 0x92040070  lbu         $a0, 0x70($s0)
    ctx->pc = 0x1c6020u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c6024: 0x26080074  addiu       $t0, $s0, 0x74
    ctx->pc = 0x1c6024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x1c6028: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c602c: 0xa2240060  sb          $a0, 0x60($s1)
    ctx->pc = 0x1c602cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6030: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6034: 0x92030071  lbu         $v1, 0x71($s0)
    ctx->pc = 0x1c6034u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
    // 0x1c6038: 0xa2230061  sb          $v1, 0x61($s1)
    ctx->pc = 0x1c6038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c603c: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x1c603cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c6040: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1c6040u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c6044: 0x26080078  addiu       $t0, $s0, 0x78
    ctx->pc = 0x1c6044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x1c6048: 0x62203  sra         $a0, $a2, 8
    ctx->pc = 0x1c6048u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 8));
    // 0x1c604c: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1c604cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1c6050: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c6050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6054: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1c6054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1c6058: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1c6058u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1c605c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c605cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c6060: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x1c6060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x1c6064: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c6064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c6068: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1c6068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1c606c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c606cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c6070: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x1c6070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x1c6074: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x1c6074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c6078: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1c6078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c607c: 0x2608007c  addiu       $t0, $s0, 0x7C
    ctx->pc = 0x1c607cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x1c6080: 0x62203  sra         $a0, $a2, 8
    ctx->pc = 0x1c6080u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 8));
    // 0x1c6084: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1c6084u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1c6088: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c6088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c608c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1c608cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1c6090: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1c6090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1c6094: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c6094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c6098: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x1c6098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x1c609c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c609cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c60a0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1c60a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1c60a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c60a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c60a8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c60a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c60ac: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x1c60acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x1c60b0: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x1c60b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c60b4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1c60b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c60b8: 0x62203  sra         $a0, $a2, 8
    ctx->pc = 0x1c60b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 8));
    // 0x1c60bc: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1c60bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1c60c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c60c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60c4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1c60c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1c60c8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1c60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1c60cc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c60ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c60d0: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x1c60d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x1c60d4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c60d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c60d8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1c60d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1c60dc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c60dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c60e0: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x1c60e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
    // 0x1c60e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c60e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c60e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C60E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C60ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C60E8u;
            // 0x1c60ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C60F0u;
}
