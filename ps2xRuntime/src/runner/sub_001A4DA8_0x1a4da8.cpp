#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4DA8
// Address: 0x1a4da8 - 0x1a4f48
void sub_001A4DA8_0x1a4da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4DA8_0x1a4da8");
#endif

    switch (ctx->pc) {
        case 0x1a4dc8u: goto label_1a4dc8;
        case 0x1a4df0u: goto label_1a4df0;
        case 0x1a4e10u: goto label_1a4e10;
        case 0x1a4e38u: goto label_1a4e38;
        case 0x1a4e58u: goto label_1a4e58;
        case 0x1a4e88u: goto label_1a4e88;
        case 0x1a4ea8u: goto label_1a4ea8;
        default: break;
    }

    ctx->pc = 0x1a4da8u;

    // 0x1a4da8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4DB0u;
    // 0x1a4db0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DB0u;
            // 0x1a4db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4DB8u;
    // 0x1a4db8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4dbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4dc0: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A4DC0u;
    SET_GPR_U32(ctx, 31, 0x1A4DC8u);
    ctx->pc = 0x1A4DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DC0u;
            // 0x1a4dc4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DC8u; }
        if (ctx->pc != 0x1A4DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DC8u; }
        if (ctx->pc != 0x1A4DC8u) { return; }
    }
    ctx->pc = 0x1A4DC8u;
label_1a4dc8:
    // 0x1a4dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4dcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DD0u;
            // 0x1a4dd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4DD8u;
    // 0x1a4dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4ddc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a4ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a4de0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a4de4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a4de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a4de8: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A4DE8u;
    SET_GPR_U32(ctx, 31, 0x1A4DF0u);
    ctx->pc = 0x1A4DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DE8u;
            // 0x1a4dec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DF0u; }
        if (ctx->pc != 0x1A4DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DF0u; }
        if (ctx->pc != 0x1A4DF0u) { return; }
    }
    ctx->pc = 0x1A4DF0u;
label_1a4df0:
    // 0x1a4df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4df4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a4df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a4df8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1a4df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a4dfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a4dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4E00u;
    {
        const bool branch_taken_0x1a4e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E00u;
            // 0x1a4e04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e00) {
            ctx->pc = 0x1A4E10u;
            goto label_1a4e10;
        }
    }
    ctx->pc = 0x1A4E08u;
    // 0x1a4e08: 0xc06e35c  jal         func_1B8D70
    ctx->pc = 0x1A4E08u;
    SET_GPR_U32(ctx, 31, 0x1A4E10u);
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E10u; }
        if (ctx->pc != 0x1A4E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E10u; }
        if (ctx->pc != 0x1A4E10u) { return; }
    }
    ctx->pc = 0x1A4E10u;
label_1a4e10:
    // 0x1a4e10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4e14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a4e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E18u;
            // 0x1a4e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4E20u;
    // 0x1a4e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4e24: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a4e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a4e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a4e2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a4e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a4e30: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A4E30u;
    SET_GPR_U32(ctx, 31, 0x1A4E38u);
    ctx->pc = 0x1A4E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E30u;
            // 0x1a4e34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E38u; }
        if (ctx->pc != 0x1A4E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E38u; }
        if (ctx->pc != 0x1A4E38u) { return; }
    }
    ctx->pc = 0x1A4E38u;
label_1a4e38:
    // 0x1a4e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e3c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a4e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a4e40: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1a4e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a4e44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a4e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4E48u;
    {
        const bool branch_taken_0x1a4e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E48u;
            // 0x1a4e4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e48) {
            ctx->pc = 0x1A4E58u;
            goto label_1a4e58;
        }
    }
    ctx->pc = 0x1A4E50u;
    // 0x1a4e50: 0xc06e35c  jal         func_1B8D70
    ctx->pc = 0x1A4E50u;
    SET_GPR_U32(ctx, 31, 0x1A4E58u);
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E58u; }
        if (ctx->pc != 0x1A4E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E58u; }
        if (ctx->pc != 0x1A4E58u) { return; }
    }
    ctx->pc = 0x1A4E58u;
label_1a4e58:
    // 0x1a4e58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4e5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a4e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e60: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E60u;
            // 0x1a4e64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4E68u;
    // 0x1a4e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a4e70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a4e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e74: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a4e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a4e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a4e7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a4e80: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A4E80u;
    SET_GPR_U32(ctx, 31, 0x1A4E88u);
    ctx->pc = 0x1A4E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E80u;
            // 0x1a4e84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E88u; }
        if (ctx->pc != 0x1A4E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E88u; }
        if (ctx->pc != 0x1A4E88u) { return; }
    }
    ctx->pc = 0x1A4E88u;
label_1a4e88:
    // 0x1a4e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e8c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1a4e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a4e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a4e94: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1a4e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a4e98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4E98u;
    {
        const bool branch_taken_0x1a4e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E98u;
            // 0x1a4e9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e98) {
            ctx->pc = 0x1A4EA8u;
            goto label_1a4ea8;
        }
    }
    ctx->pc = 0x1A4EA0u;
    // 0x1a4ea0: 0xc06e35c  jal         func_1B8D70
    ctx->pc = 0x1A4EA0u;
    SET_GPR_U32(ctx, 31, 0x1A4EA8u);
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4EA8u; }
        if (ctx->pc != 0x1A4EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4EA8u; }
        if (ctx->pc != 0x1A4EA8u) { return; }
    }
    ctx->pc = 0x1A4EA8u;
label_1a4ea8:
    // 0x1a4ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4eac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4eb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4EB4u;
            // 0x1a4eb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4EBCu;
    // 0x1a4ebc: 0x0  nop
    ctx->pc = 0x1a4ebcu;
    // NOP
    // 0x1a4ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4ec4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a4ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a4ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4ecc: 0x34a50a01  ori         $a1, $a1, 0xA01
    ctx->pc = 0x1a4eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2561);
    // 0x1a4ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4ed4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A4ED4u;
    ctx->pc = 0x1A4ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4ED4u;
            // 0x1a4ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A4EDCu;
    // 0x1a4edc: 0x0  nop
    ctx->pc = 0x1a4edcu;
    // NOP
    // 0x1a4ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4ee4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a4ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a4ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4eec: 0x34a50a01  ori         $a1, $a1, 0xA01
    ctx->pc = 0x1a4eecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2561);
    // 0x1a4ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4ef4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A4EF4u;
    ctx->pc = 0x1A4EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4EF4u;
            // 0x1a4ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A4EFCu;
    // 0x1a4efc: 0x0  nop
    ctx->pc = 0x1a4efcu;
    // NOP
    // 0x1a4f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4f04: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a4f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a4f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4f0c: 0x34a50a01  ori         $a1, $a1, 0xA01
    ctx->pc = 0x1a4f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2561);
    // 0x1a4f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4f14: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A4F14u;
    ctx->pc = 0x1A4F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F14u;
            // 0x1a4f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A4F1Cu;
    // 0x1a4f1c: 0x0  nop
    ctx->pc = 0x1a4f1cu;
    // NOP
    // 0x1a4f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4f24: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a4f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a4f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4f2c: 0x34a50a01  ori         $a1, $a1, 0xA01
    ctx->pc = 0x1a4f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2561);
    // 0x1a4f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4f34: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A4F34u;
    ctx->pc = 0x1A4F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F34u;
            // 0x1a4f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A4F3Cu;
    // 0x1a4f3c: 0x0  nop
    ctx->pc = 0x1a4f3cu;
    // NOP
    // 0x1a4f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F40u;
            // 0x1a4f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4F48u;
}
