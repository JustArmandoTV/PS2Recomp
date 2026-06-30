#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC400
// Address: 0x1ac400 - 0x1ac4b8
void sub_001AC400_0x1ac400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC400_0x1ac400");
#endif

    switch (ctx->pc) {
        case 0x1ac434u: goto label_1ac434;
        default: break;
    }

    ctx->pc = 0x1ac400u;

    // 0x1ac400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ac404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ac404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ac408: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ac408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ac40c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac410: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ac410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ac414: 0x26320e1c  addiu       $s2, $s1, 0xE1C
    ctx->pc = 0x1ac414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 3612));
    // 0x1ac418: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ac418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ac41c: 0x26302028  addiu       $s0, $s1, 0x2028
    ctx->pc = 0x1ac41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8232));
    // 0x1ac420: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ac420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ac424: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC424u;
    {
        const bool branch_taken_0x1ac424 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AC428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC424u;
            // 0x1ac428: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac424) {
            ctx->pc = 0x1AC43Cu;
            goto label_1ac43c;
        }
    }
    ctx->pc = 0x1AC42Cu;
    // 0x1ac42c: 0xc06975c  jal         func_1A5D70
    ctx->pc = 0x1AC42Cu;
    SET_GPR_U32(ctx, 31, 0x1AC434u);
    ctx->pc = 0x1A5D70u;
    if (runtime->hasFunction(0x1A5D70u)) {
        auto targetFn = runtime->lookupFunction(0x1A5D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC434u; }
        if (ctx->pc != 0x1AC434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5D70_0x1a5d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC434u; }
        if (ctx->pc != 0x1AC434u) { return; }
    }
    ctx->pc = 0x1AC434u;
label_1ac434:
    // 0x1ac434: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ac434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ac438: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ac438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ac43c:
    // 0x1ac43c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1ac43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ac440: 0x4410017  bgez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1AC440u;
    {
        const bool branch_taken_0x1ac440 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AC444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC440u;
            // 0x1ac444: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac440) {
            ctx->pc = 0x1AC4A0u;
            goto label_1ac4a0;
        }
    }
    ctx->pc = 0x1AC448u;
    // 0x1ac448: 0x6a220df7  ldl         $v0, 0xDF7($s1)
    ctx->pc = 0x1ac448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3575); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ac44c: 0x6e220df0  ldr         $v0, 0xDF0($s1)
    ctx->pc = 0x1ac44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3568); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ac450: 0x6a230dff  ldl         $v1, 0xDFF($s1)
    ctx->pc = 0x1ac450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ac454: 0x6e230df8  ldr         $v1, 0xDF8($s1)
    ctx->pc = 0x1ac454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ac458: 0x6a240e07  ldl         $a0, 0xE07($s1)
    ctx->pc = 0x1ac458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3591); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ac45c: 0x6e240e00  ldr         $a0, 0xE00($s1)
    ctx->pc = 0x1ac45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ac460: 0x6a250e0f  ldl         $a1, 0xE0F($s1)
    ctx->pc = 0x1ac460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ac464: 0x6e250e08  ldr         $a1, 0xE08($s1)
    ctx->pc = 0x1ac464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ac468: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x1ac468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac46c: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x1ac46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac470: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x1ac470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac474: 0xb6430008  sdr         $v1, 0x8($s2)
    ctx->pc = 0x1ac474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac478: 0xb2440017  sdl         $a0, 0x17($s2)
    ctx->pc = 0x1ac478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac47c: 0xb6440010  sdr         $a0, 0x10($s2)
    ctx->pc = 0x1ac47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac480: 0xb245001f  sdl         $a1, 0x1F($s2)
    ctx->pc = 0x1ac480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac484: 0xb6450018  sdr         $a1, 0x18($s2)
    ctx->pc = 0x1ac484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac488: 0x6a220e17  ldl         $v0, 0xE17($s1)
    ctx->pc = 0x1ac488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ac48c: 0x6e220e10  ldr         $v0, 0xE10($s1)
    ctx->pc = 0x1ac48cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ac490: 0x8e230e18  lw          $v1, 0xE18($s1)
    ctx->pc = 0x1ac490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3608)));
    // 0x1ac494: 0xb2420027  sdl         $v0, 0x27($s2)
    ctx->pc = 0x1ac494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac498: 0xb6420020  sdr         $v0, 0x20($s2)
    ctx->pc = 0x1ac498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac49c: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x1ac49cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_1ac4a0:
    // 0x1ac4a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ac4a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac4a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ac4a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac4a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ac4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC4ACu;
            // 0x1ac4b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC4B4u;
    // 0x1ac4b4: 0x0  nop
    ctx->pc = 0x1ac4b4u;
    // NOP
}
