#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00114CE8
// Address: 0x114ce8 - 0x114de8
void sub_00114CE8_0x114ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114CE8_0x114ce8");
#endif

    switch (ctx->pc) {
        case 0x114d10u: goto label_114d10;
        case 0x114d24u: goto label_114d24;
        case 0x114d68u: goto label_114d68;
        case 0x114da8u: goto label_114da8;
        default: break;
    }

    ctx->pc = 0x114ce8u;

    // 0x114ce8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x114cec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x114cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x114cf0: 0x3c12005d  lui         $s2, 0x5D
    ctx->pc = 0x114cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
    // 0x114cf4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x114cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x114cf8: 0x8e42e460  lw          $v0, -0x1BA0($s2)
    ctx->pc = 0x114cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960224)));
    // 0x114cfc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x114cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x114d00: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x114D00u;
    {
        const bool branch_taken_0x114d00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x114D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114D00u;
            // 0x114d04: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d00) {
            ctx->pc = 0x114DCCu;
            goto label_114dcc;
        }
    }
    ctx->pc = 0x114D08u;
    // 0x114d08: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x114d08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x114d0c: 0x2630d000  addiu       $s0, $s1, -0x3000
    ctx->pc = 0x114d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955008));
label_114d10:
    // 0x114d10: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x114d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x114d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d18: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x114d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x114d1c: 0xc044094  jal         func_110250
    ctx->pc = 0x114D1Cu;
    SET_GPR_U32(ctx, 31, 0x114D24u);
    ctx->pc = 0x114D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114D1Cu;
            // 0x114d20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110250u;
    if (runtime->hasFunction(0x110250u)) {
        auto targetFn = runtime->lookupFunction(0x110250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114D24u; }
        if (ctx->pc != 0x114D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110250_0x110250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114D24u; }
        if (ctx->pc != 0x114D24u) { return; }
    }
    ctx->pc = 0x114D24u;
label_114d24:
    // 0x114d24: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114D24u;
    {
        const bool branch_taken_0x114d24 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x114d24) {
            ctx->pc = 0x114D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114D24u;
            // 0x114d28: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114D34u;
            goto label_114d34;
        }
    }
    ctx->pc = 0x114D2Cu;
    // 0x114d2c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x114D2Cu;
    {
        const bool branch_taken_0x114d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114D2Cu;
            // 0x114d30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d2c) {
            ctx->pc = 0x114DD0u;
            goto label_114dd0;
        }
    }
    ctx->pc = 0x114D34u;
label_114d34:
    // 0x114d34: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x114D34u;
    {
        const bool branch_taken_0x114d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114D34u;
            // 0x114d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d34) {
            ctx->pc = 0x114D9Cu;
            goto label_114d9c;
        }
    }
    ctx->pc = 0x114D3Cu;
    // 0x114d3c: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x114d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x114d40: 0xae40e460  sw          $zero, -0x1BA0($s2)
    ctx->pc = 0x114d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960224), GPR_U32(ctx, 0));
    // 0x114d44: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114d48: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x114d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x114d4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x114d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x114d54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d58: 0x2629ce00  addiu       $t1, $s1, -0x3200
    ctx->pc = 0x114d58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954496));
    // 0x114d5c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114d5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114d60: 0xc04410c  jal         func_110430
    ctx->pc = 0x114D60u;
    SET_GPR_U32(ctx, 31, 0x114D68u);
    ctx->pc = 0x114D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114D60u;
            // 0x114d64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114D68u; }
        if (ctx->pc != 0x114D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114D68u; }
        if (ctx->pc != 0x114D68u) { return; }
    }
    ctx->pc = 0x114D68u;
label_114d68:
    // 0x114d68: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114D68u;
    {
        const bool branch_taken_0x114d68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x114D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114D68u;
            // 0x114d6c: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d68) {
            ctx->pc = 0x114D7Cu;
            goto label_114d7c;
        }
    }
    ctx->pc = 0x114D70u;
    // 0x114d70: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x114d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x114d74: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x114D74u;
    {
        const bool branch_taken_0x114d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114D74u;
            // 0x114d78: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d74) {
            ctx->pc = 0x114DD0u;
            goto label_114dd0;
        }
    }
    ctx->pc = 0x114D7Cu;
label_114d7c:
    // 0x114d7c: 0x2627ce00  addiu       $a3, $s1, -0x3200
    ctx->pc = 0x114d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954496));
    // 0x114d80: 0x2466d028  addiu       $a2, $v1, -0x2FD8
    ctx->pc = 0x114d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955048));
    // 0x114d84: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x114d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x114d88: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x114d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x114d8c: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x114d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x114d90: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x114d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x114d94: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x114D94u;
    {
        const bool branch_taken_0x114d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114D94u;
            // 0x114d98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d94) {
            ctx->pc = 0x114DD0u;
            goto label_114dd0;
        }
    }
    ctx->pc = 0x114D9Cu;
label_114d9c:
    // 0x114d9c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x114d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x114da0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x114da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114da4: 0x0  nop
    ctx->pc = 0x114da4u;
    // NOP
label_114da8:
    // 0x114da8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x114dac: 0x0  nop
    ctx->pc = 0x114dacu;
    // NOP
    // 0x114db0: 0x0  nop
    ctx->pc = 0x114db0u;
    // NOP
    // 0x114db4: 0x0  nop
    ctx->pc = 0x114db4u;
    // NOP
    // 0x114db8: 0x0  nop
    ctx->pc = 0x114db8u;
    // NOP
    // 0x114dbc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x114DBCu;
    {
        const bool branch_taken_0x114dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x114dbc) {
            ctx->pc = 0x114DA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_114da8;
        }
    }
    ctx->pc = 0x114DC4u;
    // 0x114dc4: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x114DC4u;
    {
        const bool branch_taken_0x114dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114DC4u;
            // 0x114dc8: 0x2630d000  addiu       $s0, $s1, -0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dc4) {
            ctx->pc = 0x114D10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_114d10;
        }
    }
    ctx->pc = 0x114DCCu;
label_114dcc:
    // 0x114dcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x114dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114dd0:
    // 0x114dd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x114dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114dd4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x114dd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114dd8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x114dd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114ddc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x114ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114de0: 0x3e00008  jr          $ra
    ctx->pc = 0x114DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114DE0u;
            // 0x114de4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114DE8u;
}
