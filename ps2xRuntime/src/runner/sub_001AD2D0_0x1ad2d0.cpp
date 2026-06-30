#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AD2D0
// Address: 0x1ad2d0 - 0x1ad6a0
void sub_001AD2D0_0x1ad2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD2D0_0x1ad2d0");
#endif

    switch (ctx->pc) {
        case 0x1ad33cu: goto label_1ad33c;
        case 0x1ad34cu: goto label_1ad34c;
        case 0x1ad358u: goto label_1ad358;
        case 0x1ad390u: goto label_1ad390;
        case 0x1ad428u: goto label_1ad428;
        case 0x1ad4e4u: goto label_1ad4e4;
        default: break;
    }

    ctx->pc = 0x1ad2d0u;

    // 0x1ad2d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ad2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ad2d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2d8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1ad2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1ad2dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ad2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2e0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1ad2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1ad2e4: 0x8e030df0  lw          $v1, 0xDF0($s0)
    ctx->pc = 0x1ad2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3568)));
    // 0x1ad2e8: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1AD2E8u;
    {
        const bool branch_taken_0x1ad2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2E8u;
            // 0x1ad2ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2e8) {
            ctx->pc = 0x1AD380u;
            goto label_1ad380;
        }
    }
    ctx->pc = 0x1AD2F0u;
    // 0x1ad2f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1ad2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ad2f4: 0x6a020dab  ldl         $v0, 0xDAB($s0)
    ctx->pc = 0x1ad2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3499); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ad2f8: 0x6e020da4  ldr         $v0, 0xDA4($s0)
    ctx->pc = 0x1ad2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3492); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ad2fc: 0x6a030db3  ldl         $v1, 0xDB3($s0)
    ctx->pc = 0x1ad2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ad300: 0x6e030dac  ldr         $v1, 0xDAC($s0)
    ctx->pc = 0x1ad300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3500); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ad304: 0x6a070dbb  ldl         $a3, 0xDBB($s0)
    ctx->pc = 0x1ad304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1ad308: 0x6e070db4  ldr         $a3, 0xDB4($s0)
    ctx->pc = 0x1ad308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3508); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1ad30c: 0x6a080dc3  ldl         $t0, 0xDC3($s0)
    ctx->pc = 0x1ad30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3523); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1ad310: 0x6e080dbc  ldr         $t0, 0xDBC($s0)
    ctx->pc = 0x1ad310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3516); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1ad314: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1ad314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad318: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1ad318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad31c: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1ad31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad320: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1ad320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad324: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x1ad324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad328: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x1ad328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad32c: 0xb3a8001f  sdl         $t0, 0x1F($sp)
    ctx->pc = 0x1ad32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad330: 0xb7a80018  sdr         $t0, 0x18($sp)
    ctx->pc = 0x1ad330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad334: 0xc06dd7e  jal         func_1B75F8
    ctx->pc = 0x1AD334u;
    SET_GPR_U32(ctx, 31, 0x1AD33Cu);
    ctx->pc = 0x1AD338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD334u;
            // 0x1ad338: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B75F8u;
    if (runtime->hasFunction(0x1B75F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B75F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD33Cu; }
        if (ctx->pc != 0x1AD33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B75F8_0x1b75f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD33Cu; }
        if (ctx->pc != 0x1AD33Cu) { return; }
    }
    ctx->pc = 0x1AD33Cu;
label_1ad33c:
    // 0x1ad33c: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x1ad33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1ad340: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x1ad340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1ad344: 0xc06dd7e  jal         func_1B75F8
    ctx->pc = 0x1AD344u;
    SET_GPR_U32(ctx, 31, 0x1AD34Cu);
    ctx->pc = 0x1AD348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD344u;
            // 0x1ad348: 0x26040df4  addiu       $a0, $s0, 0xDF4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3572));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B75F8u;
    if (runtime->hasFunction(0x1B75F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B75F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD34Cu; }
        if (ctx->pc != 0x1AD34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B75F8_0x1b75f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD34Cu; }
        if (ctx->pc != 0x1AD34Cu) { return; }
    }
    ctx->pc = 0x1AD34Cu;
label_1ad34c:
    // 0x1ad34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad350: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AD350u;
    SET_GPR_U32(ctx, 31, 0x1AD358u);
    ctx->pc = 0x1AD354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD350u;
            // 0x1ad354: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD358u; }
        if (ctx->pc != 0x1AD358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD358u; }
        if (ctx->pc != 0x1AD358u) { return; }
    }
    ctx->pc = 0x1AD358u;
label_1ad358:
    // 0x1ad358: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1ad358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad35c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ad35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ad360: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1ad360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ad364: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x1ad364u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ad368: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1ad368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ad36c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD36Cu;
    {
        const bool branch_taken_0x1ad36c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD36Cu;
            // 0x1ad370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad36c) {
            ctx->pc = 0x1AD380u;
            goto label_1ad380;
        }
    }
    ctx->pc = 0x1AD374u;
    // 0x1ad374: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1ad374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ad378: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1ad378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ad37c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ad380:
    // 0x1ad380: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1ad380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad384: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1ad384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ad388: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD388u;
            // 0x1ad38c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD390u;
label_1ad390:
    // 0x1ad390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ad390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad394: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1ad394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ad398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ad39c: 0x25100d88  addiu       $s0, $t0, 0xD88
    ctx->pc = 0x1ad39cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 3464));
    // 0x1ad3a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ad3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ad3a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1ad3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad3a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ad3ac: 0x8cb10014  lw          $s1, 0x14($a1)
    ctx->pc = 0x1ad3acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1ad3b0: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x1ad3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1ad3b4: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD3B4u;
    {
        const bool branch_taken_0x1ad3b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD3B4u;
            // 0x1ad3b8: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3b4) {
            ctx->pc = 0x1AD3E0u;
            goto label_1ad3e0;
        }
    }
    ctx->pc = 0x1AD3BCu;
    // 0x1ad3bc: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD3BCu;
    {
        const bool branch_taken_0x1ad3bc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1AD3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD3BCu;
            // 0x1ad3c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3bc) {
            ctx->pc = 0x1AD3E0u;
            goto label_1ad3e0;
        }
    }
    ctx->pc = 0x1AD3C4u;
    // 0x1ad3c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ad3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad3c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ad3c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad3cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad3d0: 0x25080da4  addiu       $t0, $t0, 0xDA4
    ctx->pc = 0x1ad3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3492));
    // 0x1ad3d4: 0x806b522  j           func_1AD488
    ctx->pc = 0x1AD3D4u;
    ctx->pc = 0x1AD3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD3D4u;
            // 0x1ad3d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD488u;
    goto label_1ad488;
    ctx->pc = 0x1AD3DCu;
    // 0x1ad3dc: 0x0  nop
    ctx->pc = 0x1ad3dcu;
    // NOP
label_1ad3e0:
    // 0x1ad3e0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1ad3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1ad3e4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AD3E4u;
    {
        const bool branch_taken_0x1ad3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad3e4) {
            ctx->pc = 0x1AD418u;
            goto label_1ad418;
        }
    }
    ctx->pc = 0x1AD3ECu;
    // 0x1ad3ec: 0x8d023720  lw          $v0, 0x3720($t0)
    ctx->pc = 0x1ad3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 14112)));
    // 0x1ad3f0: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AD3F0u;
    {
        const bool branch_taken_0x1ad3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad3f0) {
            ctx->pc = 0x1AD3F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD3F0u;
            // 0x1ad3f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD474u;
            goto label_1ad474;
        }
    }
    ctx->pc = 0x1AD3F8u;
    // 0x1ad3f8: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x1ad3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x1ad3fc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ad3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1ad400: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ad400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1ad404: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ad404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ad408: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1ad408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1ad40c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1AD40Cu;
    {
        const bool branch_taken_0x1ad40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD40Cu;
            // 0x1ad410: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad40c) {
            ctx->pc = 0x1AD470u;
            goto label_1ad470;
        }
    }
    ctx->pc = 0x1AD414u;
    // 0x1ad414: 0x0  nop
    ctx->pc = 0x1ad414u;
    // NOP
label_1ad418:
    // 0x1ad418: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD418u;
    {
        const bool branch_taken_0x1ad418 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD418u;
            // 0x1ad41c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad418) {
            ctx->pc = 0x1AD440u;
            goto label_1ad440;
        }
    }
    ctx->pc = 0x1AD420u;
    // 0x1ad420: 0xc06b5a8  jal         func_1AD6A0
    ctx->pc = 0x1AD420u;
    SET_GPR_U32(ctx, 31, 0x1AD428u);
    ctx->pc = 0x1AD424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD420u;
            // 0x1ad424: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD6A0u;
    if (runtime->hasFunction(0x1AD6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD428u; }
        if (ctx->pc != 0x1AD428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD6A0_0x1ad6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD428u; }
        if (ctx->pc != 0x1AD428u) { return; }
    }
    ctx->pc = 0x1AD428u;
label_1ad428:
    // 0x1ad428: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1ad428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ad42c: 0x9603003a  lhu         $v1, 0x3A($s0)
    ctx->pc = 0x1ad42cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x1ad430: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ad430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ad434: 0xa60304ba  sh          $v1, 0x4BA($s0)
    ctx->pc = 0x1ad434u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1210), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ad438: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AD438u;
    {
        const bool branch_taken_0x1ad438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD438u;
            // 0x1ad43c: 0xa44304ba  sh          $v1, 0x4BA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 1210), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad438) {
            ctx->pc = 0x1AD470u;
            goto label_1ad470;
        }
    }
    ctx->pc = 0x1AD440u;
label_1ad440:
    // 0x1ad440: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1ad440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1ad444: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1ad444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1ad448: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x1ad448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1ad44c: 0x8e060078  lw          $a2, 0x78($s0)
    ctx->pc = 0x1ad44cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1ad450: 0x8e07007c  lw          $a3, 0x7C($s0)
    ctx->pc = 0x1ad450u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1ad454: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1ad454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1ad458: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1ad458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1ad45c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1ad45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1ad460: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x1ad460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x1ad464: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x1ad464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x1ad468: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x1ad468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x1ad46c: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x1ad46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
label_1ad470:
    // 0x1ad470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ad474:
    // 0x1ad474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ad474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ad478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad47c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD47Cu;
            // 0x1ad480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD484u;
    // 0x1ad484: 0x0  nop
    ctx->pc = 0x1ad484u;
    // NOP
label_1ad488:
    // 0x1ad488: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ad488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ad48c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ad48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ad490: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ad490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad494: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ad494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ad498: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ad498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ad49c: 0x3c140064  lui         $s4, 0x64
    ctx->pc = 0x1ad49cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)100 << 16));
    // 0x1ad4a0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ad4a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ad4a4: 0x8e94ae40  lw          $s4, -0x51C0($s4)
    ctx->pc = 0x1ad4a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946368)));
    // 0x1ad4a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ad4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ad4ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ad4acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4b0: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x1ad4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1ad4b4: 0x3c06055d  lui         $a2, 0x55D
    ctx->pc = 0x1ad4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1373 << 16));
    // 0x1ad4b8: 0x34c64a80  ori         $a2, $a2, 0x4A80
    ctx->pc = 0x1ad4b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19072);
    // 0x1ad4bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ad4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ad4c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ad4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ad4c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ad4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ad4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ad4cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ad4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ad4d0: 0x3c130064  lui         $s3, 0x64
    ctx->pc = 0x1ad4d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)100 << 16));
    // 0x1ad4d4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1ad4d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ad4d8: 0x8e73abe8  lw          $s3, -0x5418($s3)
    ctx->pc = 0x1ad4d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945768)));
    // 0x1ad4dc: 0xc065aba  jal         func_196AE8
    ctx->pc = 0x1AD4DCu;
    SET_GPR_U32(ctx, 31, 0x1AD4E4u);
    ctx->pc = 0x1AD4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD4DCu;
            // 0x1ad4e0: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196AE8u;
    if (runtime->hasFunction(0x196AE8u)) {
        auto targetFn = runtime->lookupFunction(0x196AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4E4u; }
        if (ctx->pc != 0x1AD4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196AE8_0x196ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4E4u; }
        if (ctx->pc != 0x1AD4E4u) { return; }
    }
    ctx->pc = 0x1AD4E4u;
label_1ad4e4:
    // 0x1ad4e4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1ad4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ad4e8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1ad4e8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1ad4ec: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x1ad4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x1ad4f0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1ad4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1ad4f4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x1ad4f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1ad4f8: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x1ad4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1ad4fc: 0xaeb20004  sw          $s2, 0x4($s5)
    ctx->pc = 0x1ad4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
    // 0x1ad500: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x1ad500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ad504: 0xa6a3001e  sh          $v1, 0x1E($s5)
    ctx->pc = 0x1ad504u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ad508: 0x12400045  beqz        $s2, . + 4 + (0x45 << 2)
    ctx->pc = 0x1AD508u;
    {
        const bool branch_taken_0x1ad508 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD508u;
            // 0x1ad50c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad508) {
            ctx->pc = 0x1AD620u;
            goto label_1ad620;
        }
    }
    ctx->pc = 0x1AD510u;
    // 0x1ad510: 0x24027512  addiu       $v0, $zero, 0x7512
    ctx->pc = 0x1ad510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29970));
    // 0x1ad514: 0x12820006  beq         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AD514u;
    {
        const bool branch_taken_0x1ad514 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD514u;
            // 0x1ad518: 0x3402ea24  ori         $v0, $zero, 0xEA24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad514) {
            ctx->pc = 0x1AD530u;
            goto label_1ad530;
        }
    }
    ctx->pc = 0x1AD51Cu;
    // 0x1ad51c: 0x56820041  bnel        $s4, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1AD51Cu;
    {
        const bool branch_taken_0x1ad51c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad51c) {
            ctx->pc = 0x1AD520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD51Cu;
            // 0x1ad520: 0xb3001a  div         $zero, $a1, $s3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD624u;
            goto label_1ad624;
        }
    }
    ctx->pc = 0x1AD524u;
    // 0x1ad524: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AD524u;
    {
        const bool branch_taken_0x1ad524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD524u;
            // 0x1ad528: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad524) {
            ctx->pc = 0x1AD540u;
            goto label_1ad540;
        }
    }
    ctx->pc = 0x1AD52Cu;
    // 0x1ad52c: 0x0  nop
    ctx->pc = 0x1ad52cu;
    // NOP
label_1ad530:
    // 0x1ad530: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1ad530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1ad534: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD534u;
    {
        const bool branch_taken_0x1ad534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD534u;
            // 0x1ad538: 0x2448ac10  addiu       $t0, $v0, -0x53F0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad534) {
            ctx->pc = 0x1AD544u;
            goto label_1ad544;
        }
    }
    ctx->pc = 0x1AD53Cu;
    // 0x1ad53c: 0x0  nop
    ctx->pc = 0x1ad53cu;
    // NOP
label_1ad540:
    // 0x1ad540: 0x2448ac30  addiu       $t0, $v0, -0x53D0
    ctx->pc = 0x1ad540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945840));
label_1ad544:
    // 0x1ad544: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1ad544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ad548: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1ad548u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ad54c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AD54Cu;
    {
        const bool branch_taken_0x1ad54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad54c) {
            ctx->pc = 0x1AD550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD54Cu;
            // 0x1ad550: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD554u;
            goto label_1ad554;
        }
    }
    ctx->pc = 0x1AD554u;
label_1ad554:
    // 0x1ad554: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1ad554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ad558: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1ad558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1ad55c: 0x2010  mfhi        $a0
    ctx->pc = 0x1ad55cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1ad560: 0x2812  mflo        $a1
    ctx->pc = 0x1ad560u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1ad564: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1ad564u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ad568: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1ad568u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad56c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ad56cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ad570: 0x2012  mflo        $a0
    ctx->pc = 0x1ad570u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1ad574: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad578: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1ad578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ad57c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD57Cu;
    {
        const bool branch_taken_0x1ad57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD57Cu;
            // 0x1ad580: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad57c) {
            ctx->pc = 0x1AD5A8u;
            goto label_1ad5a8;
        }
    }
    ctx->pc = 0x1AD584u;
    // 0x1ad584: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x1ad584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1ad588: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ad588u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad58c: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1ad58cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ad590: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AD590u;
    {
        const bool branch_taken_0x1ad590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad590) {
            ctx->pc = 0x1AD594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD590u;
            // 0x1ad594: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD598u;
            goto label_1ad598;
        }
    }
    ctx->pc = 0x1AD598u;
label_1ad598:
    // 0x1ad598: 0x2010  mfhi        $a0
    ctx->pc = 0x1ad598u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1ad59c: 0x1812  mflo        $v1
    ctx->pc = 0x1ad59cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1ad5a0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1AD5A0u;
    {
        const bool branch_taken_0x1ad5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD5A0u;
            // 0x1ad5a4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad5a0) {
            ctx->pc = 0x1AD60Cu;
            goto label_1ad60c;
        }
    }
    ctx->pc = 0x1AD5A8u;
label_1ad5a8:
    // 0x1ad5a8: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x1ad5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1ad5ac: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1ad5acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ad5b0: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1ad5b0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ad5b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AD5B4u;
    {
        const bool branch_taken_0x1ad5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5b4) {
            ctx->pc = 0x1AD5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD5B4u;
            // 0x1ad5b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD5BCu;
            goto label_1ad5bc;
        }
    }
    ctx->pc = 0x1AD5BCu;
label_1ad5bc:
    // 0x1ad5bc: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x1ad5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1ad5c0: 0x1810  mfhi        $v1
    ctx->pc = 0x1ad5c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ad5c4: 0x2012  mflo        $a0
    ctx->pc = 0x1ad5c4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1ad5c8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1ad5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5cc: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1ad5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ad5d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD5D0u;
    {
        const bool branch_taken_0x1ad5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD5D0u;
            // 0x1ad5d4: 0x24890001  addiu       $t1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad5d0) {
            ctx->pc = 0x1AD5E8u;
            goto label_1ad5e8;
        }
    }
    ctx->pc = 0x1AD5D8u;
    // 0x1ad5d8: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x1ad5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x1ad5dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ad5dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AD5E0u;
    {
        const bool branch_taken_0x1ad5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD5E0u;
            // 0x1ad5e4: 0xa23821  addu        $a3, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad5e0) {
            ctx->pc = 0x1AD60Cu;
            goto label_1ad60c;
        }
    }
    ctx->pc = 0x1AD5E8u;
label_1ad5e8:
    // 0x1ad5e8: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x1ad5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1ad5ec: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1ad5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ad5f0: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1ad5f0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ad5f4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AD5F4u;
    {
        const bool branch_taken_0x1ad5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5f4) {
            ctx->pc = 0x1AD5F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD5F4u;
            // 0x1ad5f8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD5FCu;
            goto label_1ad5fc;
        }
    }
    ctx->pc = 0x1AD5FCu;
label_1ad5fc:
    // 0x1ad5fc: 0x1812  mflo        $v1
    ctx->pc = 0x1ad5fcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1ad600: 0x2010  mfhi        $a0
    ctx->pc = 0x1ad600u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1ad604: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ad604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ad608: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ad608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ad60c:
    // 0x1ad60c: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x1ad60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1ad610: 0x4b2018  mult        $a0, $v0, $t3
    ctx->pc = 0x1ad610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ad614: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AD614u;
    {
        const bool branch_taken_0x1ad614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD614u;
            // 0x1ad618: 0x894821  addu        $t1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad614) {
            ctx->pc = 0x1AD668u;
            goto label_1ad668;
        }
    }
    ctx->pc = 0x1AD61Cu;
    // 0x1ad61c: 0x0  nop
    ctx->pc = 0x1ad61cu;
    // NOP
label_1ad620:
    // 0x1ad620: 0xb3001a  div         $zero, $a1, $s3
    ctx->pc = 0x1ad620u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ad624:
    // 0x1ad624: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1ad624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ad628: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1ad628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ad62c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1ad62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ad630: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AD630u;
    {
        const bool branch_taken_0x1ad630 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad630) {
            ctx->pc = 0x1AD634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD630u;
            // 0x1ad634: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD638u;
            goto label_1ad638;
        }
    }
    ctx->pc = 0x1AD638u;
label_1ad638:
    // 0x1ad638: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1ad638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ad63c: 0x1012  mflo        $v0
    ctx->pc = 0x1ad63cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ad640: 0x3810  mfhi        $a3
    ctx->pc = 0x1ad640u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1ad644: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1ad644u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ad648: 0x1012  mflo        $v0
    ctx->pc = 0x1ad648u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ad64c: 0x2010  mfhi        $a0
    ctx->pc = 0x1ad64cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1ad650: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1ad650u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ad654: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1ad654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad658: 0x1012  mflo        $v0
    ctx->pc = 0x1ad658u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ad65c: 0x2810  mfhi        $a1
    ctx->pc = 0x1ad65cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1ad660: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1ad660u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad664: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1ad664u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ad668:
    // 0x1ad668: 0xaea70014  sw          $a3, 0x14($s5)
    ctx->pc = 0x1ad668u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 7));
    // 0x1ad66c: 0xaeaa0008  sw          $t2, 0x8($s5)
    ctx->pc = 0x1ad66cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 10));
    // 0x1ad670: 0xaea9000c  sw          $t1, 0xC($s5)
    ctx->pc = 0x1ad670u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 9));
    // 0x1ad674: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x1ad674u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x1ad678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad67c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ad67cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad680: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ad680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad684: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ad684u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ad688: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ad688u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad68c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ad68cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ad690: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ad690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad694: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD694u;
            // 0x1ad698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD69Cu;
    // 0x1ad69c: 0x0  nop
    ctx->pc = 0x1ad69cu;
    // NOP
}
