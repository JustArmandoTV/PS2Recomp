#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBDA0
// Address: 0x1bbda0 - 0x1bbe10
void sub_001BBDA0_0x1bbda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBDA0_0x1bbda0");
#endif

    switch (ctx->pc) {
        case 0x1bbdbcu: goto label_1bbdbc;
        case 0x1bbdd8u: goto label_1bbdd8;
        default: break;
    }

    ctx->pc = 0x1bbda0u;

    // 0x1bbda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbda4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bbda4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bbda8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbdac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bbdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bbdb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bbdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bbdb4: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BBDB4u;
    SET_GPR_U32(ctx, 31, 0x1BBDBCu);
    ctx->pc = 0x1BBDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBDB4u;
            // 0x1bbdb8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBDBCu; }
        if (ctx->pc != 0x1BBDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBDBCu; }
        if (ctx->pc != 0x1BBDBCu) { return; }
    }
    ctx->pc = 0x1BBDBCu;
label_1bbdbc:
    // 0x1bbdbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bbdbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bbdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbdc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdc8: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BBDC8u;
    {
        const bool branch_taken_0x1bbdc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBDC8u;
            // 0x1bbdcc: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbdc8) {
            ctx->pc = 0x1BBDFCu;
            goto label_1bbdfc;
        }
    }
    ctx->pc = 0x1BBDD0u;
    // 0x1bbdd0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1BBDD0u;
    SET_GPR_U32(ctx, 31, 0x1BBDD8u);
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBDD8u; }
        if (ctx->pc != 0x1BBDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBDD8u; }
        if (ctx->pc != 0x1BBDD8u) { return; }
    }
    ctx->pc = 0x1BBDD8u;
label_1bbdd8:
    // 0x1bbdd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbddc: 0x6a030013  ldl         $v1, 0x13($s0)
    ctx->pc = 0x1bbddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1bbde0: 0x6e03000c  ldr         $v1, 0xC($s0)
    ctx->pc = 0x1bbde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1bbde4: 0x8a040017  lwl         $a0, 0x17($s0)
    ctx->pc = 0x1bbde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1bbde8: 0x9a040014  lwr         $a0, 0x14($s0)
    ctx->pc = 0x1bbde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1bbdec: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x1bbdecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bbdf0: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x1bbdf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bbdf4: 0xaa24000b  swl         $a0, 0xB($s1)
    ctx->pc = 0x1bbdf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bbdf8: 0xba240008  swr         $a0, 0x8($s1)
    ctx->pc = 0x1bbdf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1bbdfc:
    // 0x1bbdfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbdfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbe00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bbe00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbe04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bbe04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbe08: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBE08u;
            // 0x1bbe0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBE10u;
}
