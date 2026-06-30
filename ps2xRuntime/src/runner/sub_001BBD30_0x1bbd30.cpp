#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBD30
// Address: 0x1bbd30 - 0x1bbda0
void sub_001BBD30_0x1bbd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBD30_0x1bbd30");
#endif

    switch (ctx->pc) {
        case 0x1bbd4cu: goto label_1bbd4c;
        case 0x1bbd68u: goto label_1bbd68;
        default: break;
    }

    ctx->pc = 0x1bbd30u;

    // 0x1bbd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbd34: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bbd34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bbd38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbd3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bbd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bbd40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bbd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bbd44: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BBD44u;
    SET_GPR_U32(ctx, 31, 0x1BBD4Cu);
    ctx->pc = 0x1BBD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD44u;
            // 0x1bbd48: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD4Cu; }
        if (ctx->pc != 0x1BBD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD4Cu; }
        if (ctx->pc != 0x1BBD4Cu) { return; }
    }
    ctx->pc = 0x1BBD4Cu;
label_1bbd4c:
    // 0x1bbd4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bbd4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bbd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbd54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd58: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BBD58u;
    {
        const bool branch_taken_0x1bbd58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD58u;
            // 0x1bbd5c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd58) {
            ctx->pc = 0x1BBD8Cu;
            goto label_1bbd8c;
        }
    }
    ctx->pc = 0x1BBD60u;
    // 0x1bbd60: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1BBD60u;
    SET_GPR_U32(ctx, 31, 0x1BBD68u);
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD68u; }
        if (ctx->pc != 0x1BBD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD68u; }
        if (ctx->pc != 0x1BBD68u) { return; }
    }
    ctx->pc = 0x1BBD68u;
label_1bbd68:
    // 0x1bbd68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbd6c: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x1bbd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1bbd70: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x1bbd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1bbd74: 0x8a04000b  lwl         $a0, 0xB($s0)
    ctx->pc = 0x1bbd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1bbd78: 0x9a040008  lwr         $a0, 0x8($s0)
    ctx->pc = 0x1bbd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1bbd7c: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x1bbd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bbd80: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x1bbd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bbd84: 0xaa24000b  swl         $a0, 0xB($s1)
    ctx->pc = 0x1bbd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bbd88: 0xba240008  swr         $a0, 0x8($s1)
    ctx->pc = 0x1bbd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bbd8c:
    // 0x1bbd8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbd8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbd90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bbd90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbd94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bbd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbd98: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD98u;
            // 0x1bbd9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBDA0u;
}
