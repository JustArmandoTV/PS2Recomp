#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001530B0
// Address: 0x1530b0 - 0x1530f0
void sub_001530B0_0x1530b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001530B0_0x1530b0");
#endif

    switch (ctx->pc) {
        case 0x1530ccu: goto label_1530cc;
        case 0x1530dcu: goto label_1530dc;
        default: break;
    }

    ctx->pc = 0x1530b0u;

    // 0x1530b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1530b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1530b4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1530b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1530b8: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1530b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1530bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1530BCu;
    {
        const bool branch_taken_0x1530bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1530C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1530BCu;
            // 0x1530c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1530bc) {
            ctx->pc = 0x1530D4u;
            goto label_1530d4;
        }
    }
    ctx->pc = 0x1530C4u;
    // 0x1530c4: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x1530C4u;
    SET_GPR_U32(ctx, 31, 0x1530CCu);
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1530CCu; }
        if (ctx->pc != 0x1530CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1530CCu; }
        if (ctx->pc != 0x1530CCu) { return; }
    }
    ctx->pc = 0x1530CCu;
label_1530cc:
    // 0x1530cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1530CCu;
    {
        const bool branch_taken_0x1530cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1530D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1530CCu;
            // 0x1530d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1530cc) {
            ctx->pc = 0x1530E0u;
            goto label_1530e0;
        }
    }
    ctx->pc = 0x1530D4u;
label_1530d4:
    // 0x1530d4: 0xc050044  jal         func_140110
    ctx->pc = 0x1530D4u;
    SET_GPR_U32(ctx, 31, 0x1530DCu);
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1530DCu; }
        if (ctx->pc != 0x1530DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1530DCu; }
        if (ctx->pc != 0x1530DCu) { return; }
    }
    ctx->pc = 0x1530DCu;
label_1530dc:
    // 0x1530dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1530dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1530e0:
    // 0x1530e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1530E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1530E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1530E0u;
            // 0x1530e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1530E8u;
    // 0x1530e8: 0x0  nop
    ctx->pc = 0x1530e8u;
    // NOP
    // 0x1530ec: 0x0  nop
    ctx->pc = 0x1530ecu;
    // NOP
}
