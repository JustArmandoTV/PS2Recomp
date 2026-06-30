#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00398D70
// Address: 0x398d70 - 0x398dd0
void sub_00398D70_0x398d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398D70_0x398d70");
#endif

    switch (ctx->pc) {
        case 0x398da8u: goto label_398da8;
        case 0x398db0u: goto label_398db0;
        default: break;
    }

    ctx->pc = 0x398d70u;

    // 0x398d70: 0x80e6674  j           func_3999D0
    ctx->pc = 0x398D70u;
    ctx->pc = 0x398D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398D70u;
            // 0x398d74: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3999D0u;
    {
        auto targetFn = runtime->lookupFunction(0x3999D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x398D78u;
    // 0x398d78: 0x0  nop
    ctx->pc = 0x398d78u;
    // NOP
    // 0x398d7c: 0x0  nop
    ctx->pc = 0x398d7cu;
    // NOP
    // 0x398d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x398d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x398d84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x398d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x398d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x398d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x398d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x398d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x398d90: 0x8c9001d4  lw          $s0, 0x1D4($a0)
    ctx->pc = 0x398d90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x398d94: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x398D94u;
    {
        const bool branch_taken_0x398d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x398D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398D94u;
            // 0x398d98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d94) {
            ctx->pc = 0x398DB0u;
            goto label_398db0;
        }
    }
    ctx->pc = 0x398D9Cu;
    // 0x398d9c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x398d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x398da0: 0xc0b6158  jal         func_2D8560
    ctx->pc = 0x398DA0u;
    SET_GPR_U32(ctx, 31, 0x398DA8u);
    ctx->pc = 0x398DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398DA0u;
            // 0x398da4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8560u;
    if (runtime->hasFunction(0x2D8560u)) {
        auto targetFn = runtime->lookupFunction(0x2D8560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398DA8u; }
        if (ctx->pc != 0x398DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8560_0x2d8560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398DA8u; }
        if (ctx->pc != 0x398DA8u) { return; }
    }
    ctx->pc = 0x398DA8u;
label_398da8:
    // 0x398da8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x398DA8u;
    SET_GPR_U32(ctx, 31, 0x398DB0u);
    ctx->pc = 0x398DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398DA8u;
            // 0x398dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398DB0u; }
        if (ctx->pc != 0x398DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398DB0u; }
        if (ctx->pc != 0x398DB0u) { return; }
    }
    ctx->pc = 0x398DB0u;
label_398db0:
    // 0x398db0: 0xae2001d4  sw          $zero, 0x1D4($s1)
    ctx->pc = 0x398db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
    // 0x398db4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x398db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x398db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x398dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x398DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398DC0u;
            // 0x398dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x398DC8u;
    // 0x398dc8: 0x0  nop
    ctx->pc = 0x398dc8u;
    // NOP
    // 0x398dcc: 0x0  nop
    ctx->pc = 0x398dccu;
    // NOP
}
