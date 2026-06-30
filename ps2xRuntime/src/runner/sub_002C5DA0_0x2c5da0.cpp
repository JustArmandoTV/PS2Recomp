#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5DA0
// Address: 0x2c5da0 - 0x2c5e10
void sub_002C5DA0_0x2c5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5DA0_0x2c5da0");
#endif

    switch (ctx->pc) {
        case 0x2c5de0u: goto label_2c5de0;
        case 0x2c5df8u: goto label_2c5df8;
        default: break;
    }

    ctx->pc = 0x2c5da0u;

    // 0x2c5da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c5da4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c5da8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c5dac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5db0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5db4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C5DB4u;
    {
        const bool branch_taken_0x2c5db4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5DB4u;
            // 0x2c5db8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5db4) {
            ctx->pc = 0x2C5DF8u;
            goto label_2c5df8;
        }
    }
    ctx->pc = 0x2C5DBCu;
    // 0x2c5dbc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5DBCu;
    {
        const bool branch_taken_0x2c5dbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5dbc) {
            ctx->pc = 0x2C5DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5DBCu;
            // 0x2c5dc0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5DE4u;
            goto label_2c5de4;
        }
    }
    ctx->pc = 0x2C5DC4u;
    // 0x2c5dc4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5DC4u;
    {
        const bool branch_taken_0x2c5dc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5dc4) {
            ctx->pc = 0x2C5DE0u;
            goto label_2c5de0;
        }
    }
    ctx->pc = 0x2C5DCCu;
    // 0x2c5dcc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c5dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c5dd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5DD0u;
    {
        const bool branch_taken_0x2c5dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5dd0) {
            ctx->pc = 0x2C5DE0u;
            goto label_2c5de0;
        }
    }
    ctx->pc = 0x2C5DD8u;
    // 0x2c5dd8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C5DD8u;
    SET_GPR_U32(ctx, 31, 0x2C5DE0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DE0u; }
        if (ctx->pc != 0x2C5DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DE0u; }
        if (ctx->pc != 0x2C5DE0u) { return; }
    }
    ctx->pc = 0x2C5DE0u;
label_2c5de0:
    // 0x2c5de0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c5de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c5de4:
    // 0x2c5de4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5de4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5de8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5DE8u;
    {
        const bool branch_taken_0x2c5de8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c5de8) {
            ctx->pc = 0x2C5DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5DE8u;
            // 0x2c5dec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5DFCu;
            goto label_2c5dfc;
        }
    }
    ctx->pc = 0x2C5DF0u;
    // 0x2c5df0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C5DF0u;
    SET_GPR_U32(ctx, 31, 0x2C5DF8u);
    ctx->pc = 0x2C5DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5DF0u;
            // 0x2c5df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DF8u; }
        if (ctx->pc != 0x2C5DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5DF8u; }
        if (ctx->pc != 0x2C5DF8u) { return; }
    }
    ctx->pc = 0x2C5DF8u;
label_2c5df8:
    // 0x2c5df8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c5df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c5dfc:
    // 0x2c5dfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5e08: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5E08u;
            // 0x2c5e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5E10u;
}
