#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00337DB0
// Address: 0x337db0 - 0x337e20
void sub_00337DB0_0x337db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337DB0_0x337db0");
#endif

    switch (ctx->pc) {
        case 0x337df0u: goto label_337df0;
        case 0x337e08u: goto label_337e08;
        default: break;
    }

    ctx->pc = 0x337db0u;

    // 0x337db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x337db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x337db4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x337db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x337db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x337dbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337dc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x337dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337dc4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x337DC4u;
    {
        const bool branch_taken_0x337dc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x337DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337DC4u;
            // 0x337dc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337dc4) {
            ctx->pc = 0x337E08u;
            goto label_337e08;
        }
    }
    ctx->pc = 0x337DCCu;
    // 0x337dcc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x337DCCu;
    {
        const bool branch_taken_0x337dcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x337dcc) {
            ctx->pc = 0x337DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x337DCCu;
            // 0x337dd0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x337DF4u;
            goto label_337df4;
        }
    }
    ctx->pc = 0x337DD4u;
    // 0x337dd4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x337DD4u;
    {
        const bool branch_taken_0x337dd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x337dd4) {
            ctx->pc = 0x337DF0u;
            goto label_337df0;
        }
    }
    ctx->pc = 0x337DDCu;
    // 0x337ddc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x337ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x337de0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337DE0u;
    {
        const bool branch_taken_0x337de0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x337de0) {
            ctx->pc = 0x337DF0u;
            goto label_337df0;
        }
    }
    ctx->pc = 0x337DE8u;
    // 0x337de8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x337DE8u;
    SET_GPR_U32(ctx, 31, 0x337DF0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337DF0u; }
        if (ctx->pc != 0x337DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337DF0u; }
        if (ctx->pc != 0x337DF0u) { return; }
    }
    ctx->pc = 0x337DF0u;
label_337df0:
    // 0x337df0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x337df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_337df4:
    // 0x337df4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x337df4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x337df8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337DF8u;
    {
        const bool branch_taken_0x337df8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x337df8) {
            ctx->pc = 0x337DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x337DF8u;
            // 0x337dfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x337E0Cu;
            goto label_337e0c;
        }
    }
    ctx->pc = 0x337E00u;
    // 0x337e00: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x337E00u;
    SET_GPR_U32(ctx, 31, 0x337E08u);
    ctx->pc = 0x337E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337E00u;
            // 0x337e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337E08u; }
        if (ctx->pc != 0x337E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337E08u; }
        if (ctx->pc != 0x337E08u) { return; }
    }
    ctx->pc = 0x337E08u;
label_337e08:
    // 0x337e08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x337e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_337e0c:
    // 0x337e0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x337e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337e10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337e14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337e18: 0x3e00008  jr          $ra
    ctx->pc = 0x337E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337E18u;
            // 0x337e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x337E20u;
}
