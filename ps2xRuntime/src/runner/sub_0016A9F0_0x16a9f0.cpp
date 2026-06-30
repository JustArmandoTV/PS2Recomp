#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A9F0
// Address: 0x16a9f0 - 0x16aa18
void sub_0016A9F0_0x16a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A9F0_0x16a9f0");
#endif

    switch (ctx->pc) {
        case 0x16aa00u: goto label_16aa00;
        case 0x16aa08u: goto label_16aa08;
        default: break;
    }

    ctx->pc = 0x16a9f0u;

    // 0x16a9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a9f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a9f8: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16A9F8u;
    SET_GPR_U32(ctx, 31, 0x16AA00u);
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA00u; }
        if (ctx->pc != 0x16AA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA00u; }
        if (ctx->pc != 0x16AA00u) { return; }
    }
    ctx->pc = 0x16AA00u;
label_16aa00:
    // 0x16aa00: 0xc05aa86  jal         func_16AA18
    ctx->pc = 0x16AA00u;
    SET_GPR_U32(ctx, 31, 0x16AA08u);
    ctx->pc = 0x16AA18u;
    if (runtime->hasFunction(0x16AA18u)) {
        auto targetFn = runtime->lookupFunction(0x16AA18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA08u; }
        if (ctx->pc != 0x16AA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AA18_0x16aa18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA08u; }
        if (ctx->pc != 0x16AA08u) { return; }
    }
    ctx->pc = 0x16AA08u;
label_16aa08:
    // 0x16aa08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16aa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aa0c: 0x805adca  j           func_16B728
    ctx->pc = 0x16AA0Cu;
    ctx->pc = 0x16AA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA0Cu;
            // 0x16aa10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016B728_0x16b728(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16AA14u;
    // 0x16aa14: 0x0  nop
    ctx->pc = 0x16aa14u;
    // NOP
}
