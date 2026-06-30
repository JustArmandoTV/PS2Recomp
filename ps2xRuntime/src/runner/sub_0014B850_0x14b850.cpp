#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B850
// Address: 0x14b850 - 0x14b890
void sub_0014B850_0x14b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B850_0x14b850");
#endif

    switch (ctx->pc) {
        case 0x14b87cu: goto label_14b87c;
        case 0x14b884u: goto label_14b884;
        default: break;
    }

    ctx->pc = 0x14b850u;

    // 0x14b850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b85c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14b860: 0x93888068  lbu         $t0, -0x7F98($gp)
    ctx->pc = 0x14b860u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934632)));
    // 0x14b864: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14b864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b868: 0x93898069  lbu         $t1, -0x7F97($gp)
    ctx->pc = 0x14b868u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934633)));
    // 0x14b86c: 0x938a806a  lbu         $t2, -0x7F96($gp)
    ctx->pc = 0x14b86cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934634)));
    // 0x14b870: 0x938b806b  lbu         $t3, -0x7F95($gp)
    ctx->pc = 0x14b870u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934635)));
    // 0x14b874: 0xc0574a0  jal         func_15D280
    ctx->pc = 0x14B874u;
    SET_GPR_U32(ctx, 31, 0x14B87Cu);
    ctx->pc = 0x14B878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B874u;
            // 0x14b878: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D280u;
    if (runtime->hasFunction(0x15D280u)) {
        auto targetFn = runtime->lookupFunction(0x15D280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B87Cu; }
        if (ctx->pc != 0x14B87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D280_0x15d280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B87Cu; }
        if (ctx->pc != 0x14B87Cu) { return; }
    }
    ctx->pc = 0x14B87Cu;
label_14b87c:
    // 0x14b87c: 0xc0574b0  jal         func_15D2C0
    ctx->pc = 0x14B87Cu;
    SET_GPR_U32(ctx, 31, 0x14B884u);
    ctx->pc = 0x14B880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B87Cu;
            // 0x14b880: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D2C0u;
    if (runtime->hasFunction(0x15D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B884u; }
        if (ctx->pc != 0x14B884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D2C0_0x15d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B884u; }
        if (ctx->pc != 0x14B884u) { return; }
    }
    ctx->pc = 0x14B884u;
label_14b884:
    // 0x14b884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b888: 0x3e00008  jr          $ra
    ctx->pc = 0x14B888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B888u;
            // 0x14b88c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B890u;
}
