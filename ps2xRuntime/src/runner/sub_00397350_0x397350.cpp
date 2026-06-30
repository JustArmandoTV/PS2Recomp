#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00397350
// Address: 0x397350 - 0x397390
void sub_00397350_0x397350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397350_0x397350");
#endif

    switch (ctx->pc) {
        case 0x39736cu: goto label_39736c;
        case 0x39737cu: goto label_39737c;
        default: break;
    }

    ctx->pc = 0x397350u;

    // 0x397350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397354: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x397354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x397358: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x397358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x39735c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39735Cu;
    {
        const bool branch_taken_0x39735c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39735Cu;
            // 0x397360: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39735c) {
            ctx->pc = 0x397374u;
            goto label_397374;
        }
    }
    ctx->pc = 0x397364u;
    // 0x397364: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x397364u;
    SET_GPR_U32(ctx, 31, 0x39736Cu);
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39736Cu; }
        if (ctx->pc != 0x39736Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39736Cu; }
        if (ctx->pc != 0x39736Cu) { return; }
    }
    ctx->pc = 0x39736Cu;
label_39736c:
    // 0x39736c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39736Cu;
    {
        const bool branch_taken_0x39736c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39736Cu;
            // 0x397370: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39736c) {
            ctx->pc = 0x397380u;
            goto label_397380;
        }
    }
    ctx->pc = 0x397374u;
label_397374:
    // 0x397374: 0xc050044  jal         func_140110
    ctx->pc = 0x397374u;
    SET_GPR_U32(ctx, 31, 0x39737Cu);
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39737Cu; }
        if (ctx->pc != 0x39737Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39737Cu; }
        if (ctx->pc != 0x39737Cu) { return; }
    }
    ctx->pc = 0x39737Cu;
label_39737c:
    // 0x39737c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39737cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_397380:
    // 0x397380: 0x3e00008  jr          $ra
    ctx->pc = 0x397380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397380u;
            // 0x397384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x397388u;
    // 0x397388: 0x0  nop
    ctx->pc = 0x397388u;
    // NOP
    // 0x39738c: 0x0  nop
    ctx->pc = 0x39738cu;
    // NOP
}
