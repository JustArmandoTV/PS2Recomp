#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00352CA0
// Address: 0x352ca0 - 0x352ce0
void sub_00352CA0_0x352ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352CA0_0x352ca0");
#endif

    switch (ctx->pc) {
        case 0x352cbcu: goto label_352cbc;
        case 0x352cccu: goto label_352ccc;
        default: break;
    }

    ctx->pc = 0x352ca0u;

    // 0x352ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x352ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x352ca4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x352ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x352ca8: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x352ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x352cac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x352CACu;
    {
        const bool branch_taken_0x352cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352CACu;
            // 0x352cb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352cac) {
            ctx->pc = 0x352CC4u;
            goto label_352cc4;
        }
    }
    ctx->pc = 0x352CB4u;
    // 0x352cb4: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x352CB4u;
    SET_GPR_U32(ctx, 31, 0x352CBCu);
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352CBCu; }
        if (ctx->pc != 0x352CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352CBCu; }
        if (ctx->pc != 0x352CBCu) { return; }
    }
    ctx->pc = 0x352CBCu;
label_352cbc:
    // 0x352cbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x352CBCu;
    {
        const bool branch_taken_0x352cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352CBCu;
            // 0x352cc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352cbc) {
            ctx->pc = 0x352CD0u;
            goto label_352cd0;
        }
    }
    ctx->pc = 0x352CC4u;
label_352cc4:
    // 0x352cc4: 0xc050044  jal         func_140110
    ctx->pc = 0x352CC4u;
    SET_GPR_U32(ctx, 31, 0x352CCCu);
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352CCCu; }
        if (ctx->pc != 0x352CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x352CCCu; }
        if (ctx->pc != 0x352CCCu) { return; }
    }
    ctx->pc = 0x352CCCu;
label_352ccc:
    // 0x352ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x352cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_352cd0:
    // 0x352cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x352CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352CD0u;
            // 0x352cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352CD8u;
    // 0x352cd8: 0x0  nop
    ctx->pc = 0x352cd8u;
    // NOP
    // 0x352cdc: 0x0  nop
    ctx->pc = 0x352cdcu;
    // NOP
}
