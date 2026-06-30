#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00426D90
// Address: 0x426d90 - 0x426e00
void sub_00426D90_0x426d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426D90_0x426d90");
#endif

    switch (ctx->pc) {
        case 0x426dd0u: goto label_426dd0;
        case 0x426de8u: goto label_426de8;
        default: break;
    }

    ctx->pc = 0x426d90u;

    // 0x426d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x426d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x426d94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x426d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x426d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x426d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x426d9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x426d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x426da0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x426da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426da4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x426DA4u;
    {
        const bool branch_taken_0x426da4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x426DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426DA4u;
            // 0x426da8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426da4) {
            ctx->pc = 0x426DE8u;
            goto label_426de8;
        }
    }
    ctx->pc = 0x426DACu;
    // 0x426dac: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x426DACu;
    {
        const bool branch_taken_0x426dac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x426dac) {
            ctx->pc = 0x426DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x426DACu;
            // 0x426db0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x426DD4u;
            goto label_426dd4;
        }
    }
    ctx->pc = 0x426DB4u;
    // 0x426db4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x426DB4u;
    {
        const bool branch_taken_0x426db4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x426db4) {
            ctx->pc = 0x426DD0u;
            goto label_426dd0;
        }
    }
    ctx->pc = 0x426DBCu;
    // 0x426dbc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x426dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x426dc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x426DC0u;
    {
        const bool branch_taken_0x426dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x426dc0) {
            ctx->pc = 0x426DD0u;
            goto label_426dd0;
        }
    }
    ctx->pc = 0x426DC8u;
    // 0x426dc8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x426DC8u;
    SET_GPR_U32(ctx, 31, 0x426DD0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426DD0u; }
        if (ctx->pc != 0x426DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426DD0u; }
        if (ctx->pc != 0x426DD0u) { return; }
    }
    ctx->pc = 0x426DD0u;
label_426dd0:
    // 0x426dd0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x426dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_426dd4:
    // 0x426dd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x426dd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x426dd8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x426DD8u;
    {
        const bool branch_taken_0x426dd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x426dd8) {
            ctx->pc = 0x426DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x426DD8u;
            // 0x426ddc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x426DECu;
            goto label_426dec;
        }
    }
    ctx->pc = 0x426DE0u;
    // 0x426de0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x426DE0u;
    SET_GPR_U32(ctx, 31, 0x426DE8u);
    ctx->pc = 0x426DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426DE0u;
            // 0x426de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426DE8u; }
        if (ctx->pc != 0x426DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426DE8u; }
        if (ctx->pc != 0x426DE8u) { return; }
    }
    ctx->pc = 0x426DE8u;
label_426de8:
    // 0x426de8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x426de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_426dec:
    // 0x426dec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x426decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x426df0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x426df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x426df4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x426df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x426df8: 0x3e00008  jr          $ra
    ctx->pc = 0x426DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426DF8u;
            // 0x426dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x426E00u;
}
