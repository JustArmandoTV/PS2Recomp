#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B708
// Address: 0x19b708 - 0x19b7b0
void sub_0019B708_0x19b708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B708_0x19b708");
#endif

    switch (ctx->pc) {
        case 0x19b73cu: goto label_19b73c;
        case 0x19b754u: goto label_19b754;
        case 0x19b768u: goto label_19b768;
        case 0x19b778u: goto label_19b778;
        case 0x19b790u: goto label_19b790;
        case 0x19b7a0u: goto label_19b7a0;
        default: break;
    }

    ctx->pc = 0x19b708u;

    // 0x19b708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b70c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x19b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x19b710: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x19b710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x19b714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b718: 0x24488f50  addiu       $t0, $v0, -0x70B0
    ctx->pc = 0x19b718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938448));
    // 0x19b71c: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x19b71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x19b720: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x19b720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x19b724: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x19b724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b728: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x19b728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b72c: 0x24053820  addiu       $a1, $zero, 0x3820
    ctx->pc = 0x19b72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14368));
    // 0x19b730: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x19b730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x19b734: 0xc06a124  jal         func_1A8490
    ctx->pc = 0x19B734u;
    SET_GPR_U32(ctx, 31, 0x19B73Cu);
    ctx->pc = 0x19B738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B734u;
            // 0x19b738: 0x24649018  addiu       $a0, $v1, -0x6FE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8490u;
    if (runtime->hasFunction(0x1A8490u)) {
        auto targetFn = runtime->lookupFunction(0x1A8490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B73Cu; }
        if (ctx->pc != 0x19B73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8490_0x1a8490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B73Cu; }
        if (ctx->pc != 0x19B73Cu) { return; }
    }
    ctx->pc = 0x19B73Cu;
label_19b73c:
    // 0x19b73c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b740: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19B740u;
    {
        const bool branch_taken_0x19b740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19B744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B740u;
            // 0x19b744: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b740) {
            ctx->pc = 0x19B760u;
            goto label_19b760;
        }
    }
    ctx->pc = 0x19B748u;
    // 0x19b748: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19b748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19b74c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19B74Cu;
    SET_GPR_U32(ctx, 31, 0x19B754u);
    ctx->pc = 0x19B750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B74Cu;
            // 0x19b750: 0x24849020  addiu       $a0, $a0, -0x6FE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B754u; }
        if (ctx->pc != 0x19B754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B754u; }
        if (ctx->pc != 0x19B754u) { return; }
    }
    ctx->pc = 0x19B754u;
label_19b754:
    // 0x19b754: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19B754u;
    {
        const bool branch_taken_0x19b754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B754u;
            // 0x19b758: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b754) {
            ctx->pc = 0x19B7A0u;
            goto label_19b7a0;
        }
    }
    ctx->pc = 0x19B75Cu;
    // 0x19b75c: 0x0  nop
    ctx->pc = 0x19b75cu;
    // NOP
label_19b760:
    // 0x19b760: 0xc06a128  jal         func_1A84A0
    ctx->pc = 0x19B760u;
    SET_GPR_U32(ctx, 31, 0x19B768u);
    ctx->pc = 0x1A84A0u;
    if (runtime->hasFunction(0x1A84A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A84A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B768u; }
        if (ctx->pc != 0x19B768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A84A0_0x1a84a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B768u; }
        if (ctx->pc != 0x19B768u) { return; }
    }
    ctx->pc = 0x19B768u;
label_19b768:
    // 0x19b768: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B768u;
    {
        const bool branch_taken_0x19b768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B768u;
            // 0x19b76c: 0x3c05001a  lui         $a1, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b768) {
            ctx->pc = 0x19B780u;
            goto label_19b780;
        }
    }
    ctx->pc = 0x19B770u;
    // 0x19b770: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x19B770u;
    SET_GPR_U32(ctx, 31, 0x19B778u);
    ctx->pc = 0x19B774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B770u;
            // 0x19b774: 0x2404fed3  addiu       $a0, $zero, -0x12D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966995));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B778u; }
        if (ctx->pc != 0x19B778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B778u; }
        if (ctx->pc != 0x19B778u) { return; }
    }
    ctx->pc = 0x19B778u;
label_19b778:
    // 0x19b778: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19B778u;
    {
        const bool branch_taken_0x19b778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B778u;
            // 0x19b77c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b778) {
            ctx->pc = 0x19B7A4u;
            goto label_19b7a4;
        }
    }
    ctx->pc = 0x19B780u;
label_19b780:
    // 0x19b780: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19b780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b784: 0x24a5b7d0  addiu       $a1, $a1, -0x4830
    ctx->pc = 0x19b784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948816));
    // 0x19b788: 0xc06a1d8  jal         func_1A8760
    ctx->pc = 0x19B788u;
    SET_GPR_U32(ctx, 31, 0x19B790u);
    ctx->pc = 0x19B78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B788u;
            // 0x19b78c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8760u;
    if (runtime->hasFunction(0x1A8760u)) {
        auto targetFn = runtime->lookupFunction(0x1A8760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B790u; }
        if (ctx->pc != 0x19B790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8760_0x1a8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B790u; }
        if (ctx->pc != 0x19B790u) { return; }
    }
    ctx->pc = 0x19B790u;
label_19b790:
    // 0x19b790: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B790u;
    {
        const bool branch_taken_0x19b790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B790u;
            // 0x19b794: 0x2404fed1  addiu       $a0, $zero, -0x12F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966993));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b790) {
            ctx->pc = 0x19B7A0u;
            goto label_19b7a0;
        }
    }
    ctx->pc = 0x19B798u;
    // 0x19b798: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x19B798u;
    SET_GPR_U32(ctx, 31, 0x19B7A0u);
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7A0u; }
        if (ctx->pc != 0x19B7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7A0u; }
        if (ctx->pc != 0x19B7A0u) { return; }
    }
    ctx->pc = 0x19B7A0u;
label_19b7a0:
    // 0x19b7a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b7a4:
    // 0x19b7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x19B7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7A4u;
            // 0x19b7a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B7ACu;
    // 0x19b7ac: 0x0  nop
    ctx->pc = 0x19b7acu;
    // NOP
}
