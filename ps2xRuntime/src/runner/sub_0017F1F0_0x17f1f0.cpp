#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F1F0
// Address: 0x17f1f0 - 0x17f248
void sub_0017F1F0_0x17f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F1F0_0x17f1f0");
#endif

    switch (ctx->pc) {
        case 0x17f210u: goto label_17f210;
        case 0x17f234u: goto label_17f234;
        default: break;
    }

    ctx->pc = 0x17f1f0u;

    // 0x17f1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f1f4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x17f1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17f1f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17f1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17f1fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f204: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17f204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17f208: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x17F208u;
    SET_GPR_U32(ctx, 31, 0x17F210u);
    ctx->pc = 0x17F20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F208u;
            // 0x17f20c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F210u; }
        if (ctx->pc != 0x17F210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F210u; }
        if (ctx->pc != 0x17F210u) { return; }
    }
    ctx->pc = 0x17F210u;
label_17f210:
    // 0x17f210: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x17f210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x17f214: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x17f214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x17f218: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x17f218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17f21c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17f21cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17f220: 0x24a56538  addiu       $a1, $a1, 0x6538
    ctx->pc = 0x17f220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25912));
    // 0x17f224: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17f224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f228: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x17f228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17f22c: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x17F22Cu;
    SET_GPR_U32(ctx, 31, 0x17F234u);
    ctx->pc = 0x17F230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F22Cu;
            // 0x17f230: 0xa3a00005  sb          $zero, 0x5($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F234u; }
        if (ctx->pc != 0x17F234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F234u; }
        if (ctx->pc != 0x17F234u) { return; }
    }
    ctx->pc = 0x17F234u;
label_17f234:
    // 0x17f234: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17f234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f238: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x17f238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x17f23c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17f23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f240: 0x3e00008  jr          $ra
    ctx->pc = 0x17F240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F240u;
            // 0x17f244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F248u;
}
