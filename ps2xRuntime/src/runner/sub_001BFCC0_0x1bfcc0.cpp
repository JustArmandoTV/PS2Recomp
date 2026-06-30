#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFCC0
// Address: 0x1bfcc0 - 0x1bfda0
void sub_001BFCC0_0x1bfcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFCC0_0x1bfcc0");
#endif

    switch (ctx->pc) {
        case 0x1bfd4cu: goto label_1bfd4c;
        case 0x1bfd68u: goto label_1bfd68;
        case 0x1bfd84u: goto label_1bfd84;
        default: break;
    }

    ctx->pc = 0x1bfcc0u;

    // 0x1bfcc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bfcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bfcc4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1bfcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1bfcc8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1bfcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1bfccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bfcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfcd0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1bfcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1bfcd4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1bfcd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bfcd8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1bfcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1bfcdc: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1bfcdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bfce0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1bfce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1bfce4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1bfce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfce8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bfce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1bfcec: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bfcecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bfcf0: 0x246ab7c0  addiu       $t2, $v1, -0x4840
    ctx->pc = 0x1bfcf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948800));
    // 0x1bfcf4: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x1bfcf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1bfcf8: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x1bfcf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1bfcfc: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x1bfcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bfd00: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x1bfd00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bfd04: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1bfd04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1bfd08: 0x24a9b7d8  addiu       $t1, $a1, -0x4828
    ctx->pc = 0x1bfd08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948824));
    // 0x1bfd0c: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x1bfd0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1bfd10: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x1bfd10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1bfd14: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x1bfd14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bfd18: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x1bfd18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bfd1c: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x1bfd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1bfd20: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1bfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bfd24: 0x24c7b7f0  addiu       $a3, $a2, -0x4810
    ctx->pc = 0x1bfd24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948848));
    // 0x1bfd28: 0x68ea0007  ldl         $t2, 0x7($a3)
    ctx->pc = 0x1bfd28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1bfd2c: 0x6cea0000  ldr         $t2, 0x0($a3)
    ctx->pc = 0x1bfd2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1bfd30: 0xb24a0007  sdl         $t2, 0x7($s2)
    ctx->pc = 0x1bfd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bfd34: 0xb64a0000  sdr         $t2, 0x0($s2)
    ctx->pc = 0x1bfd34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bfd38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bfd38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfd3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bfd40: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1bfd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1bfd44: 0xc04b156  jal         func_12C558
    ctx->pc = 0x1BFD44u;
    SET_GPR_U32(ctx, 31, 0x1BFD4Cu);
    ctx->pc = 0x1BFD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD44u;
            // 0x1bfd48: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD4Cu; }
        if (ctx->pc != 0x1BFD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD4Cu; }
        if (ctx->pc != 0x1BFD4Cu) { return; }
    }
    ctx->pc = 0x1BFD4Cu;
label_1bfd4c:
    // 0x1bfd4c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1bfd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bfd50: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x1bfd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1bfd54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bfd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfd58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bfd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bfd5c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1bfd5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1bfd60: 0xc04b156  jal         func_12C558
    ctx->pc = 0x1BFD60u;
    SET_GPR_U32(ctx, 31, 0x1BFD68u);
    ctx->pc = 0x1BFD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD60u;
            // 0x1bfd64: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD68u; }
        if (ctx->pc != 0x1BFD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD68u; }
        if (ctx->pc != 0x1BFD68u) { return; }
    }
    ctx->pc = 0x1BFD68u;
label_1bfd68:
    // 0x1bfd68: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1bfd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1bfd6c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1bfd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1bfd70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bfd70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfd74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bfd74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bfd78: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x1bfd78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1bfd7c: 0xc04b156  jal         func_12C558
    ctx->pc = 0x1BFD7Cu;
    SET_GPR_U32(ctx, 31, 0x1BFD84u);
    ctx->pc = 0x1BFD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD7Cu;
            // 0x1bfd80: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD84u; }
        if (ctx->pc != 0x1BFD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFD84u; }
        if (ctx->pc != 0x1BFD84u) { return; }
    }
    ctx->pc = 0x1BFD84u;
label_1bfd84:
    // 0x1bfd84: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1bfd84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bfd88: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1bfd88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfd8c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1bfd8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfd90: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1bfd90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1bfd94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bfd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfd98: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFD98u;
            // 0x1bfd9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFDA0u;
}
