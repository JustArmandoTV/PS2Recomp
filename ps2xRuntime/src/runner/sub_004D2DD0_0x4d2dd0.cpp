#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D2DD0
// Address: 0x4d2dd0 - 0x4d2e40
void sub_004D2DD0_0x4d2dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2DD0_0x4d2dd0");
#endif

    switch (ctx->pc) {
        case 0x4d2e10u: goto label_4d2e10;
        case 0x4d2e28u: goto label_4d2e28;
        default: break;
    }

    ctx->pc = 0x4d2dd0u;

    // 0x4d2dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d2dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d2dd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d2dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d2dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d2dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d2ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d2ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d2de0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d2de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2de4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4D2DE4u;
    {
        const bool branch_taken_0x4d2de4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2DE4u;
            // 0x4d2de8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2de4) {
            ctx->pc = 0x4D2E28u;
            goto label_4d2e28;
        }
    }
    ctx->pc = 0x4D2DECu;
    // 0x4d2dec: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D2DECu;
    {
        const bool branch_taken_0x4d2dec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2dec) {
            ctx->pc = 0x4D2DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2DECu;
            // 0x4d2df0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D2E14u;
            goto label_4d2e14;
        }
    }
    ctx->pc = 0x4D2DF4u;
    // 0x4d2df4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D2DF4u;
    {
        const bool branch_taken_0x4d2df4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2df4) {
            ctx->pc = 0x4D2E10u;
            goto label_4d2e10;
        }
    }
    ctx->pc = 0x4D2DFCu;
    // 0x4d2dfc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4d2dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4d2e00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D2E00u;
    {
        const bool branch_taken_0x4d2e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2e00) {
            ctx->pc = 0x4D2E10u;
            goto label_4d2e10;
        }
    }
    ctx->pc = 0x4D2E08u;
    // 0x4d2e08: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D2E08u;
    SET_GPR_U32(ctx, 31, 0x4D2E10u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2E10u; }
        if (ctx->pc != 0x4D2E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2E10u; }
        if (ctx->pc != 0x4D2E10u) { return; }
    }
    ctx->pc = 0x4D2E10u;
label_4d2e10:
    // 0x4d2e10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d2e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d2e14:
    // 0x4d2e14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d2e14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4d2e18: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D2E18u;
    {
        const bool branch_taken_0x4d2e18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d2e18) {
            ctx->pc = 0x4D2E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2E18u;
            // 0x4d2e1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D2E2Cu;
            goto label_4d2e2c;
        }
    }
    ctx->pc = 0x4D2E20u;
    // 0x4d2e20: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D2E20u;
    SET_GPR_U32(ctx, 31, 0x4D2E28u);
    ctx->pc = 0x4D2E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2E20u;
            // 0x4d2e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2E28u; }
        if (ctx->pc != 0x4D2E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2E28u; }
        if (ctx->pc != 0x4D2E28u) { return; }
    }
    ctx->pc = 0x4D2E28u;
label_4d2e28:
    // 0x4d2e28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d2e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d2e2c:
    // 0x4d2e2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d2e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d2e30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d2e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d2e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d2e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2e38: 0x3e00008  jr          $ra
    ctx->pc = 0x4D2E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2E38u;
            // 0x4d2e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D2E40u;
}
