#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00110DC8
// Address: 0x110dc8 - 0x1111f0
void sub_00110DC8_0x110dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110DC8_0x110dc8");
#endif

    switch (ctx->pc) {
        case 0x110de4u: goto label_110de4;
        case 0x110decu: goto label_110dec;
        case 0x110e00u: goto label_110e00;
        case 0x110e1cu: goto label_110e1c;
        case 0x110ed4u: goto label_110ed4;
        case 0x110f28u: goto label_110f28;
        case 0x110f78u: goto label_110f78;
        case 0x110fe0u: goto label_110fe0;
        case 0x11103cu: goto label_11103c;
        case 0x111168u: goto label_111168;
        case 0x1111a4u: goto label_1111a4;
        case 0x1111dcu: goto label_1111dc;
        default: break;
    }

    ctx->pc = 0x110dc8u;

    // 0x110dc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110dd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x110dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x110dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110dd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110ddc: 0xc0442d8  jal         func_110B60
    ctx->pc = 0x110DDCu;
    SET_GPR_U32(ctx, 31, 0x110DE4u);
    ctx->pc = 0x110DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110DDCu;
            // 0x110de0: 0x3c11005d  lui         $s1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110B60u;
    if (runtime->hasFunction(0x110B60u)) {
        auto targetFn = runtime->lookupFunction(0x110B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110DE4u; }
        if (ctx->pc != 0x110DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110B60_0x110b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110DE4u; }
        if (ctx->pc != 0x110DE4u) { return; }
    }
    ctx->pc = 0x110DE4u;
label_110de4:
    // 0x110de4: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x110DE4u;
    SET_GPR_U32(ctx, 31, 0x110DECu);
    ctx->pc = 0x110DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110DE4u;
            // 0x110de8: 0x8e24e448  lw          $a0, -0x1BB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110DECu; }
        if (ctx->pc != 0x110DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110DECu; }
        if (ctx->pc != 0x110DECu) { return; }
    }
    ctx->pc = 0x110DECu;
label_110dec:
    // 0x110dec: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x110decu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x110df0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x110DF0u;
    {
        const bool branch_taken_0x110df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110DF0u;
            // 0x110df4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110df0) {
            ctx->pc = 0x110E08u;
            goto label_110e08;
        }
    }
    ctx->pc = 0x110DF8u;
    // 0x110df8: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x110DF8u;
    SET_GPR_U32(ctx, 31, 0x110E00u);
    ctx->pc = 0x110DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110DF8u;
            // 0x110dfc: 0x8e24e448  lw          $a0, -0x1BB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110E00u; }
        if (ctx->pc != 0x110E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110E00u; }
        if (ctx->pc != 0x110E00u) { return; }
    }
    ctx->pc = 0x110E00u;
label_110e00:
    // 0x110e00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x110E00u;
    {
        const bool branch_taken_0x110e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110E00u;
            // 0x110e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e00) {
            ctx->pc = 0x110E20u;
            goto label_110e20;
        }
    }
    ctx->pc = 0x110E08u;
label_110e08:
    // 0x110e08: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x110e08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x110e0c: 0x2442c940  addiu       $v0, $v0, -0x36C0
    ctx->pc = 0x110e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953280));
    // 0x110e10: 0x8e24e448  lw          $a0, -0x1BB8($s1)
    ctx->pc = 0x110e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960200)));
    // 0x110e14: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x110E14u;
    SET_GPR_U32(ctx, 31, 0x110E1Cu);
    ctx->pc = 0x110E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110E14u;
            // 0x110e18: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110E1Cu; }
        if (ctx->pc != 0x110E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110E1Cu; }
        if (ctx->pc != 0x110E1Cu) { return; }
    }
    ctx->pc = 0x110E1Cu;
label_110e1c:
    // 0x110e1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x110e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110e20:
    // 0x110e20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x110e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110e24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110e28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x110E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110E2Cu;
            // 0x110e30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110E34u;
    // 0x110e34: 0x0  nop
    ctx->pc = 0x110e34u;
    // NOP
    // 0x110e38: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x110e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x110e3c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x110e3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x110e40: 0x8c43e440  lw          $v1, -0x1BC0($v0)
    ctx->pc = 0x110e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960192)));
    // 0x110e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x110e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x110e4c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x110E4Cu;
    {
        const bool branch_taken_0x110e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110E4Cu;
            // 0x110e50: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e4c) {
            ctx->pc = 0x110E58u;
            goto label_110e58;
        }
    }
    ctx->pc = 0x110E54u;
    // 0x110e54: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x110e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_110e58:
    // 0x110e58: 0x24030440  addiu       $v1, $zero, 0x440
    ctx->pc = 0x110e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x110e5c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x110e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x110e60: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x110e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x110e64: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x110e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x110e68: 0xac45e438  sw          $a1, -0x1BC8($v0)
    ctx->pc = 0x110e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960184), GPR_U32(ctx, 5));
    // 0x110e6c: 0x2484c0c0  addiu       $a0, $a0, -0x3F40
    ctx->pc = 0x110e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951104));
    // 0x110e70: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x110e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x110e74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x110e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x110e78: 0x658025  or          $s0, $v1, $a1
    ctx->pc = 0x110e78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x110e7c: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x110e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x110e80: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x110e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x110e84: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x110e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x110e88: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x110e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x110e8c: 0x8a060007  lwl         $a2, 0x7($s0)
    ctx->pc = 0x110e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x110e90: 0x9a060004  lwr         $a2, 0x4($s0)
    ctx->pc = 0x110e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x110e94: 0xaba60007  swl         $a2, 0x7($sp)
    ctx->pc = 0x110e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x110e98: 0xbba60004  swr         $a2, 0x4($sp)
    ctx->pc = 0x110e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x110e9c: 0x8a03000b  lwl         $v1, 0xB($s0)
    ctx->pc = 0x110e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x110ea0: 0x9a030008  lwr         $v1, 0x8($s0)
    ctx->pc = 0x110ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x110ea4: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x110ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x110ea8: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x110ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x110eac: 0x8a07000f  lwl         $a3, 0xF($s0)
    ctx->pc = 0x110eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x110eb0: 0x9a07000c  lwr         $a3, 0xC($s0)
    ctx->pc = 0x110eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x110eb4: 0xaba7000f  swl         $a3, 0xF($sp)
    ctx->pc = 0x110eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x110eb8: 0xbba7000c  swr         $a3, 0xC($sp)
    ctx->pc = 0x110eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x110ebc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x110ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110ec0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110EC0u;
    {
        const bool branch_taken_0x110ec0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x110EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110EC0u;
            // 0x110ec4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ec0) {
            ctx->pc = 0x110ED4u;
            goto label_110ed4;
        }
    }
    ctx->pc = 0x110EC8u;
    // 0x110ec8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x110ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x110ecc: 0xc04a508  jal         func_129420
    ctx->pc = 0x110ECCu;
    SET_GPR_U32(ctx, 31, 0x110ED4u);
    ctx->pc = 0x110ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110ECCu;
            // 0x110ed0: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110ED4u; }
        if (ctx->pc != 0x110ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110ED4u; }
        if (ctx->pc != 0x110ED4u) { return; }
    }
    ctx->pc = 0x110ED4u;
label_110ed4:
    // 0x110ed4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x110ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x110ed8: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x110ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x110edc: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x110edcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x110ee0: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x110EE0u;
    {
        const bool branch_taken_0x110ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110EE0u;
            // 0x110ee4: 0x3c020063  lui         $v0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ee0) {
            ctx->pc = 0x111168u;
            goto label_111168;
        }
    }
    ctx->pc = 0x110EE8u;
    // 0x110ee8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x110ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x110eec: 0x2442eee0  addiu       $v0, $v0, -0x1120
    ctx->pc = 0x110eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962912));
    // 0x110ef0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x110ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x110ef4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x110ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110ef8: 0x800008  jr          $a0
    ctx->pc = 0x110EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110F00u: goto label_110f00;
            case 0x110FA8u: goto label_110fa8;
            case 0x111084u: goto label_111084;
            case 0x111120u: goto label_111120;
            case 0x111168u: goto label_111168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x110F00u;
label_110f00:
    // 0x110f00: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x110f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x110f04: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x110F04u;
    {
        const bool branch_taken_0x110f04 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x110F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110F04u;
            // 0x110f08: 0x26070014  addiu       $a3, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f04) {
            ctx->pc = 0x110F50u;
            goto label_110f50;
        }
    }
    ctx->pc = 0x110F0Cu;
    // 0x110f0c: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x110f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x110f10: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x110f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x110f14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f18: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x110F18u;
    {
        const bool branch_taken_0x110f18 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x110F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110F18u;
            // 0x110f1c: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f18) {
            ctx->pc = 0x110F50u;
            goto label_110f50;
        }
    }
    ctx->pc = 0x110F20u;
    // 0x110f20: 0x26090024  addiu       $t1, $s0, 0x24
    ctx->pc = 0x110f20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x110f24: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x110f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_110f28:
    // 0x110f28: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x110f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x110f2c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x110f2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110f30: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x110f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x110f34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x110f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x110f38: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x110f38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x110f3c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x110f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x110f40: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x110f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x110f44: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x110f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110f48: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x110F48u;
    {
        const bool branch_taken_0x110f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110F48u;
            // 0x110f4c: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f48) {
            ctx->pc = 0x110F28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110f28;
        }
    }
    ctx->pc = 0x110F50u;
label_110f50:
    // 0x110f50: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x110f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x110f54: 0x18600084  blez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x110F54u;
    {
        const bool branch_taken_0x110f54 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x110F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110F54u;
            // 0x110f58: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f54) {
            ctx->pc = 0x111168u;
            goto label_111168;
        }
    }
    ctx->pc = 0x110F5Cu;
    // 0x110f5c: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x110f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x110f60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f64: 0x18600080  blez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x110F64u;
    {
        const bool branch_taken_0x110f64 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x110F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110F64u;
            // 0x110f68: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f64) {
            ctx->pc = 0x111168u;
            goto label_111168;
        }
    }
    ctx->pc = 0x110F6Cu;
    // 0x110f6c: 0x24e90050  addiu       $t1, $a3, 0x50
    ctx->pc = 0x110f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x110f70: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x110f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x110f74: 0x0  nop
    ctx->pc = 0x110f74u;
    // NOP
label_110f78:
    // 0x110f78: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x110f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x110f7c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x110f7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110f80: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x110f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x110f84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x110f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x110f88: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x110f88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x110f8c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x110f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x110f90: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x110f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x110f94: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x110f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110f98: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x110F98u;
    {
        const bool branch_taken_0x110f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110F98u;
            // 0x110f9c: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f98) {
            ctx->pc = 0x110F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110f78;
        }
    }
    ctx->pc = 0x110FA0u;
    // 0x110fa0: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x110FA0u;
    {
        const bool branch_taken_0x110fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110FA0u;
            // 0x110fa4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fa0) {
            ctx->pc = 0x11116Cu;
            goto label_11116c;
        }
    }
    ctx->pc = 0x110FA8u;
label_110fa8:
    // 0x110fa8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x110fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x110fac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x110facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110fb0: 0x1860006e  blez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x110FB0u;
    {
        const bool branch_taken_0x110fb0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x110FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110FB0u;
            // 0x110fb4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fb0) {
            ctx->pc = 0x11116Cu;
            goto label_11116c;
        }
    }
    ctx->pc = 0x110FB8u;
    // 0x110fb8: 0x8a040017  lwl         $a0, 0x17($s0)
    ctx->pc = 0x110fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x110fbc: 0x9a040014  lwr         $a0, 0x14($s0)
    ctx->pc = 0x110fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x110fc0: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x110fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x110fc4: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x110fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x110fc8: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x110fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x110fcc: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x110fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110fd0: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x110fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x110fd4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x110fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x110fd8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x110FD8u;
    {
        const bool branch_taken_0x110fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110FD8u;
            // 0x110fdc: 0x26020158  addiu       $v0, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fd8) {
            ctx->pc = 0x11103Cu;
            goto label_11103c;
        }
    }
    ctx->pc = 0x110FE0u;
label_110fe0:
    // 0x110fe0: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x110fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x110fe4: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x110fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x110fe8: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x110fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x110fec: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x110fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x110ff0: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x110ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x110ff4: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x110ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x110ff8: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x110ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x110ffc: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x110ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x111000: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x111000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111004: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x111004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111008: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x111008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11100c: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x11100cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111010: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x111010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111014: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x111014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111018: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x111018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11101c: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x11101cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111020: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x111020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x111024: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x111024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x111028: 0x0  nop
    ctx->pc = 0x111028u;
    // NOP
    // 0x11102c: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11102Cu;
    {
        const bool branch_taken_0x11102c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x11102c) {
            ctx->pc = 0x110FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110fe0;
        }
    }
    ctx->pc = 0x111034u;
    // 0x111034: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x111034u;
    {
        const bool branch_taken_0x111034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111034) {
            ctx->pc = 0x111070u;
            goto label_111070;
        }
    }
    ctx->pc = 0x11103Cu;
label_11103c:
    // 0x11103c: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x11103cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x111040: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x111040u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x111044: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x111044u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x111048: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x111048u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x11104c: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x11104cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x111050: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x111050u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x111054: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x111054u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x111058: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x111058u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x11105c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x11105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x111060: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x111060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x111064: 0x0  nop
    ctx->pc = 0x111064u;
    // NOP
    // 0x111068: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x111068u;
    {
        const bool branch_taken_0x111068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x111068) {
            ctx->pc = 0x11103Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11103c;
        }
    }
    ctx->pc = 0x111070u;
label_111070:
    // 0x111070: 0x88880003  lwl         $t0, 0x3($a0)
    ctx->pc = 0x111070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x111074: 0x98880000  lwr         $t0, 0x0($a0)
    ctx->pc = 0x111074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x111078: 0xa8c80003  swl         $t0, 0x3($a2)
    ctx->pc = 0x111078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11107c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x11107Cu;
    {
        const bool branch_taken_0x11107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11107Cu;
            // 0x111080: 0xb8c80000  swr         $t0, 0x0($a2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11107c) {
            ctx->pc = 0x111168u;
            goto label_111168;
        }
    }
    ctx->pc = 0x111084u;
label_111084:
    // 0x111084: 0x8a060017  lwl         $a2, 0x17($s0)
    ctx->pc = 0x111084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x111088: 0x9a060014  lwr         $a2, 0x14($s0)
    ctx->pc = 0x111088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x11108c: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x11108cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111090: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x111090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111094: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x111094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111098: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x111098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11109c: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x11109cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1110a0: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x1110a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1110a4: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x1110a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1110a8: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x1110a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1110ac: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x1110acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1110b0: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x1110b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1110b4: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x1110b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1110b8: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1110b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1110bc: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1110bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1110c0: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x1110c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1110c4: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x1110c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1110c8: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x1110c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1110cc: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x1110ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1110d0: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x1110d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1110d4: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x1110d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1110d8: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x1110d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1110dc: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x1110dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1110e0: 0x6a040047  ldl         $a0, 0x47($s0)
    ctx->pc = 0x1110e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1110e4: 0x6e040040  ldr         $a0, 0x40($s0)
    ctx->pc = 0x1110e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1110e8: 0x6a05004f  ldl         $a1, 0x4F($s0)
    ctx->pc = 0x1110e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1110ec: 0x6e050048  ldr         $a1, 0x48($s0)
    ctx->pc = 0x1110ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1110f0: 0x6a060057  ldl         $a2, 0x57($s0)
    ctx->pc = 0x1110f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1110f4: 0x6e060050  ldr         $a2, 0x50($s0)
    ctx->pc = 0x1110f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1110f8: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x1110f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1110fc: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x1110fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111100: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x111100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111104: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x111104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111108: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x111108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11110c: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x11110cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111110: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x111110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111114: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x111114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111118: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x111118u;
    {
        const bool branch_taken_0x111118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11111Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111118u;
            // 0x11111c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111118) {
            ctx->pc = 0x11116Cu;
            goto label_11116c;
        }
    }
    ctx->pc = 0x111120u;
label_111120:
    // 0x111120: 0x8a070017  lwl         $a3, 0x17($s0)
    ctx->pc = 0x111120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x111124: 0x9a070014  lwr         $a3, 0x14($s0)
    ctx->pc = 0x111124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x111128: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x111128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11112c: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x11112cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111130: 0x8a04001b  lwl         $a0, 0x1B($s0)
    ctx->pc = 0x111130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x111134: 0x9a040018  lwr         $a0, 0x18($s0)
    ctx->pc = 0x111134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x111138: 0xaba40017  swl         $a0, 0x17($sp)
    ctx->pc = 0x111138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11113c: 0xbba40014  swr         $a0, 0x14($sp)
    ctx->pc = 0x11113cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111140: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x111140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x111144: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x111144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x111148: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111148u;
    {
        const bool branch_taken_0x111148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11114Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111148u;
            // 0x11114c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111148) {
            ctx->pc = 0x111160u;
            goto label_111160;
        }
    }
    ctx->pc = 0x111150u;
    // 0x111150: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x111150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x111154: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x111154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x111158: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x111158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11115c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11115cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_111160:
    // 0x111160: 0xc04a508  jal         func_129420
    ctx->pc = 0x111160u;
    SET_GPR_U32(ctx, 31, 0x111168u);
    ctx->pc = 0x111164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111160u;
            // 0x111164: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111168u; }
        if (ctx->pc != 0x111168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111168u; }
        if (ctx->pc != 0x111168u) { return; }
    }
    ctx->pc = 0x111168u;
label_111168:
    // 0x111168: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x111168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11116c:
    // 0x11116c: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11116Cu;
    {
        const bool branch_taken_0x11116c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x111170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11116Cu;
            // 0x111170: 0x3c07005d  lui         $a3, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11116c) {
            ctx->pc = 0x1111D4u;
            goto label_1111d4;
        }
    }
    ctx->pc = 0x111174u;
    // 0x111174: 0x41023  negu        $v0, $a0
    ctx->pc = 0x111174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x111178: 0x8ce3e3b8  lw          $v1, -0x1C48($a3)
    ctx->pc = 0x111178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960056)));
    // 0x11117c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11117cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111180: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x111180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x111184: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111184u;
    {
        const bool branch_taken_0x111184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x111188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111184u;
            // 0x111188: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111184) {
            ctx->pc = 0x1111A0u;
            goto label_1111a0;
        }
    }
    ctx->pc = 0x11118Cu;
    // 0x11118c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11118cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111190: 0xace2e3b8  sw          $v0, -0x1C48($a3)
    ctx->pc = 0x111190u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960056), GPR_U32(ctx, 2));
    // 0x111194: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x111194u;
    {
        const bool branch_taken_0x111194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111194u;
            // 0x111198: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111194) {
            ctx->pc = 0x1111E0u;
            goto label_1111e0;
        }
    }
    ctx->pc = 0x11119Cu;
    // 0x11119c: 0x0  nop
    ctx->pc = 0x11119cu;
    // NOP
label_1111a0:
    // 0x1111a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1111a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1111a4:
    // 0x1111a4: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1111a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1111a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1111A8u;
    {
        const bool branch_taken_0x1111a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1111A8u;
            // 0x1111ac: 0x24e2e3b8  addiu       $v0, $a3, -0x1C48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111a8) {
            ctx->pc = 0x1111DCu;
            goto label_1111dc;
        }
    }
    ctx->pc = 0x1111B0u;
    // 0x1111b0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1111b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1111b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1111b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1111b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1111b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1111bc: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1111BCu;
    {
        const bool branch_taken_0x1111bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1111C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1111BCu;
            // 0x1111c0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111bc) {
            ctx->pc = 0x1111A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1111a4;
        }
    }
    ctx->pc = 0x1111C4u;
    // 0x1111c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1111c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1111c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1111c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1111cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1111CCu;
    {
        const bool branch_taken_0x1111cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1111CCu;
            // 0x1111d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111cc) {
            ctx->pc = 0x1111E0u;
            goto label_1111e0;
        }
    }
    ctx->pc = 0x1111D4u;
label_1111d4:
    // 0x1111d4: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x1111D4u;
    SET_GPR_U32(ctx, 31, 0x1111DCu);
    ctx->pc = 0x10C390u;
    if (runtime->hasFunction(0x10C390u)) {
        auto targetFn = runtime->lookupFunction(0x10C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1111DCu; }
        if (ctx->pc != 0x1111DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C390_0x10c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1111DCu; }
        if (ctx->pc != 0x1111DCu) { return; }
    }
    ctx->pc = 0x1111DCu;
label_1111dc:
    // 0x1111dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1111dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1111e0:
    // 0x1111e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1111e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1111e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1111E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1111E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1111E4u;
            // 0x1111e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1111ECu;
    // 0x1111ec: 0x0  nop
    ctx->pc = 0x1111ecu;
    // NOP
}
