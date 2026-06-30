#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035EE00
// Address: 0x35ee00 - 0x35ee40
void sub_0035EE00_0x35ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EE00_0x35ee00");
#endif

    switch (ctx->pc) {
        case 0x35ee1cu: goto label_35ee1c;
        case 0x35ee2cu: goto label_35ee2c;
        default: break;
    }

    ctx->pc = 0x35ee00u;

    // 0x35ee00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ee04: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x35ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x35ee08: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x35ee08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x35ee0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35EE0Cu;
    {
        const bool branch_taken_0x35ee0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EE0Cu;
            // 0x35ee10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ee0c) {
            ctx->pc = 0x35EE24u;
            goto label_35ee24;
        }
    }
    ctx->pc = 0x35EE14u;
    // 0x35ee14: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x35EE14u;
    SET_GPR_U32(ctx, 31, 0x35EE1Cu);
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EE1Cu; }
        if (ctx->pc != 0x35EE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EE1Cu; }
        if (ctx->pc != 0x35EE1Cu) { return; }
    }
    ctx->pc = 0x35EE1Cu;
label_35ee1c:
    // 0x35ee1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35EE1Cu;
    {
        const bool branch_taken_0x35ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EE1Cu;
            // 0x35ee20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ee1c) {
            ctx->pc = 0x35EE30u;
            goto label_35ee30;
        }
    }
    ctx->pc = 0x35EE24u;
label_35ee24:
    // 0x35ee24: 0xc050044  jal         func_140110
    ctx->pc = 0x35EE24u;
    SET_GPR_U32(ctx, 31, 0x35EE2Cu);
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EE2Cu; }
        if (ctx->pc != 0x35EE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EE2Cu; }
        if (ctx->pc != 0x35EE2Cu) { return; }
    }
    ctx->pc = 0x35EE2Cu;
label_35ee2c:
    // 0x35ee2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ee2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35ee30:
    // 0x35ee30: 0x3e00008  jr          $ra
    ctx->pc = 0x35EE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EE30u;
            // 0x35ee34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35EE38u;
    // 0x35ee38: 0x0  nop
    ctx->pc = 0x35ee38u;
    // NOP
    // 0x35ee3c: 0x0  nop
    ctx->pc = 0x35ee3cu;
    // NOP
}
