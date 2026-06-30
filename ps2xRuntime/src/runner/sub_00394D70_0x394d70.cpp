#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00394D70
// Address: 0x394d70 - 0x394dd0
void sub_00394D70_0x394d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394D70_0x394d70");
#endif

    switch (ctx->pc) {
        case 0x394d8cu: goto label_394d8c;
        case 0x394da8u: goto label_394da8;
        default: break;
    }

    ctx->pc = 0x394d70u;

    // 0x394d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x394d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x394d74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x394d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x394d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x394d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x394d7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x394d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x394d80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x394d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d84: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x394d84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
    // 0x394d88: 0x26106150  addiu       $s0, $s0, 0x6150
    ctx->pc = 0x394d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24912));
label_394d8c:
    // 0x394d8c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x394d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x394d90: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x394D90u;
    {
        const bool branch_taken_0x394d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x394d90) {
            ctx->pc = 0x394DA8u;
            goto label_394da8;
        }
    }
    ctx->pc = 0x394D98u;
    // 0x394d98: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x394d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x394d9c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x394d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x394da0: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x394DA0u;
    SET_GPR_U32(ctx, 31, 0x394DA8u);
    ctx->pc = 0x394DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394DA0u;
            // 0x394da4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394DA8u; }
        if (ctx->pc != 0x394DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394DA8u; }
        if (ctx->pc != 0x394DA8u) { return; }
    }
    ctx->pc = 0x394DA8u;
label_394da8:
    // 0x394da8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x394da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x394dac: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x394dacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x394db0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x394DB0u;
    {
        const bool branch_taken_0x394db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x394DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394DB0u;
            // 0x394db4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394db0) {
            ctx->pc = 0x394D8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_394d8c;
        }
    }
    ctx->pc = 0x394DB8u;
    // 0x394db8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x394db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x394dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x394dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x394DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394DC4u;
            // 0x394dc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x394DCCu;
    // 0x394dcc: 0x0  nop
    ctx->pc = 0x394dccu;
    // NOP
}
