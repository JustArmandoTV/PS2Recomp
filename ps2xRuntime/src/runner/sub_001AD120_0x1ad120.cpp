#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AD120
// Address: 0x1ad120 - 0x1ad1f0
void sub_001AD120_0x1ad120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD120_0x1ad120");
#endif

    switch (ctx->pc) {
        case 0x1ad14cu: goto label_1ad14c;
        default: break;
    }

    ctx->pc = 0x1ad120u;

    // 0x1ad120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ad120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ad124: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ad124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ad128: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ad128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad12c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ad12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ad130: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ad130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad134: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ad134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad138: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1ad138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ad13c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ad13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ad140: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ad140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ad144: 0xc06dd7e  jal         func_1B75F8
    ctx->pc = 0x1AD144u;
    SET_GPR_U32(ctx, 31, 0x1AD14Cu);
    ctx->pc = 0x1AD148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD144u;
            // 0x1ad148: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B75F8u;
    if (runtime->hasFunction(0x1B75F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B75F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD14Cu; }
        if (ctx->pc != 0x1AD14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B75F8_0x1b75f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD14Cu; }
        if (ctx->pc != 0x1AD14Cu) { return; }
    }
    ctx->pc = 0x1AD14Cu;
label_1ad14c:
    // 0x1ad14c: 0x26500d88  addiu       $s0, $s2, 0xD88
    ctx->pc = 0x1ad14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3464));
    // 0x1ad150: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ad150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad154: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1ad154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ad158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad15c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1ad15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ad160: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1ad160u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ad164: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1ad164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1ad168: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x1ad168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x1ad16c: 0xae240034  sw          $a0, 0x34($s1)
    ctx->pc = 0x1ad16cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 4));
    // 0x1ad170: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1ad170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1ad174: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1ad174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ad178: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1AD178u;
    {
        const bool branch_taken_0x1ad178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD178u;
            // 0x1ad17c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad178) {
            ctx->pc = 0x1AD1D8u;
            goto label_1ad1d8;
        }
    }
    ctx->pc = 0x1AD180u;
    // 0x1ad180: 0x6a220013  ldl         $v0, 0x13($s1)
    ctx->pc = 0x1ad180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ad184: 0x6e22000c  ldr         $v0, 0xC($s1)
    ctx->pc = 0x1ad184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ad188: 0x6a23001b  ldl         $v1, 0x1B($s1)
    ctx->pc = 0x1ad188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ad18c: 0x6e230014  ldr         $v1, 0x14($s1)
    ctx->pc = 0x1ad18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ad190: 0x6a240023  ldl         $a0, 0x23($s1)
    ctx->pc = 0x1ad190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ad194: 0x6e24001c  ldr         $a0, 0x1C($s1)
    ctx->pc = 0x1ad194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ad198: 0x6a25002b  ldl         $a1, 0x2B($s1)
    ctx->pc = 0x1ad198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ad19c: 0x6e250024  ldr         $a1, 0x24($s1)
    ctx->pc = 0x1ad19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ad1a0: 0xb2420df7  sdl         $v0, 0xDF7($s2)
    ctx->pc = 0x1ad1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3575); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad1a4: 0xb6420df0  sdr         $v0, 0xDF0($s2)
    ctx->pc = 0x1ad1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3568); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad1a8: 0xb2430dff  sdl         $v1, 0xDFF($s2)
    ctx->pc = 0x1ad1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad1ac: 0xb6430df8  sdr         $v1, 0xDF8($s2)
    ctx->pc = 0x1ad1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad1b0: 0xb2440e07  sdl         $a0, 0xE07($s2)
    ctx->pc = 0x1ad1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3591); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad1b4: 0xb6440e00  sdr         $a0, 0xE00($s2)
    ctx->pc = 0x1ad1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad1b8: 0xb2450e0f  sdl         $a1, 0xE0F($s2)
    ctx->pc = 0x1ad1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad1bc: 0xb6450e08  sdr         $a1, 0xE08($s2)
    ctx->pc = 0x1ad1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad1c0: 0x6a220033  ldl         $v0, 0x33($s1)
    ctx->pc = 0x1ad1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ad1c4: 0x6e22002c  ldr         $v0, 0x2C($s1)
    ctx->pc = 0x1ad1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ad1c8: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1ad1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1ad1cc: 0xb2420e17  sdl         $v0, 0xE17($s2)
    ctx->pc = 0x1ad1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad1d0: 0xb6420e10  sdr         $v0, 0xE10($s2)
    ctx->pc = 0x1ad1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ad1d4: 0xae430e18  sw          $v1, 0xE18($s2)
    ctx->pc = 0x1ad1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3608), GPR_U32(ctx, 3));
label_1ad1d8:
    // 0x1ad1d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ad1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ad1dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ad1dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad1e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ad1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ad1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1E4u;
            // 0x1ad1e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD1ECu;
    // 0x1ad1ec: 0x0  nop
    ctx->pc = 0x1ad1ecu;
    // NOP
}
