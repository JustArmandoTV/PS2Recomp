#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192650
// Address: 0x192650 - 0x192700
void sub_00192650_0x192650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192650_0x192650");
#endif

    switch (ctx->pc) {
        case 0x192674u: goto label_192674;
        default: break;
    }

    ctx->pc = 0x192650u;

    // 0x192650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x192654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192658: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x192658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19265c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19265cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x192660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x192660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192664: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x192664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x192668: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x192668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19266c: 0xc064adc  jal         func_192B70
    ctx->pc = 0x19266Cu;
    SET_GPR_U32(ctx, 31, 0x192674u);
    ctx->pc = 0x192670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19266Cu;
            // 0x192670: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192B70u;
    if (runtime->hasFunction(0x192B70u)) {
        auto targetFn = runtime->lookupFunction(0x192B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192674u; }
        if (ctx->pc != 0x192674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B70_0x192b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192674u; }
        if (ctx->pc != 0x192674u) { return; }
    }
    ctx->pc = 0x192674u;
label_192674:
    // 0x192674: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x192674u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x192678: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x192678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x19267c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x19267cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x192680: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x192680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192684: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x192684u;
    {
        const bool branch_taken_0x192684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192684u;
            // 0x192688: 0x34a50202  ori         $a1, $a1, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192684) {
            ctx->pc = 0x1926A8u;
            goto label_1926a8;
        }
    }
    ctx->pc = 0x19268Cu;
    // 0x19268c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19268cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192694: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x192694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192698: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x192698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19269c: 0x8064a68  j           func_1929A0
    ctx->pc = 0x19269Cu;
    ctx->pc = 0x1926A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19269Cu;
            // 0x1926a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1929A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1929A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1926A4u;
    // 0x1926a4: 0x0  nop
    ctx->pc = 0x1926a4u;
    // NOP
label_1926a8:
    // 0x1926a8: 0x6a03004f  ldl         $v1, 0x4F($s0)
    ctx->pc = 0x1926a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1926ac: 0x6e030048  ldr         $v1, 0x48($s0)
    ctx->pc = 0x1926acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1926b0: 0x6a040057  ldl         $a0, 0x57($s0)
    ctx->pc = 0x1926b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1926b4: 0x6e040050  ldr         $a0, 0x50($s0)
    ctx->pc = 0x1926b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1926b8: 0x6a05005f  ldl         $a1, 0x5F($s0)
    ctx->pc = 0x1926b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1926bc: 0x6e050058  ldr         $a1, 0x58($s0)
    ctx->pc = 0x1926bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1926c0: 0x6a060067  ldl         $a2, 0x67($s0)
    ctx->pc = 0x1926c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1926c4: 0x6e060060  ldr         $a2, 0x60($s0)
    ctx->pc = 0x1926c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1926c8: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x1926c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1926cc: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x1926ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1926d0: 0xb244000f  sdl         $a0, 0xF($s2)
    ctx->pc = 0x1926d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1926d4: 0xb6440008  sdr         $a0, 0x8($s2)
    ctx->pc = 0x1926d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1926d8: 0xb2450017  sdl         $a1, 0x17($s2)
    ctx->pc = 0x1926d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1926dc: 0xb6450010  sdr         $a1, 0x10($s2)
    ctx->pc = 0x1926dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1926e0: 0xb246001f  sdl         $a2, 0x1F($s2)
    ctx->pc = 0x1926e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1926e4: 0xb6460018  sdr         $a2, 0x18($s2)
    ctx->pc = 0x1926e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1926e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1926e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1926ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1926ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1926f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1926f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1926f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1926f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1926f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1926F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1926FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1926F8u;
            // 0x1926fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192700u;
}
