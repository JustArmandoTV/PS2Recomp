#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A108
// Address: 0x16a108 - 0x16a130
void sub_0016A108_0x16a108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A108_0x16a108");
#endif

    switch (ctx->pc) {
        case 0x16a118u: goto label_16a118;
        case 0x16a120u: goto label_16a120;
        default: break;
    }

    ctx->pc = 0x16a108u;

    // 0x16a108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a10c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a110: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16A110u;
    SET_GPR_U32(ctx, 31, 0x16A118u);
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A118u; }
        if (ctx->pc != 0x16A118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A118u; }
        if (ctx->pc != 0x16A118u) { return; }
    }
    ctx->pc = 0x16A118u;
label_16a118:
    // 0x16a118: 0xc05a84c  jal         func_16A130
    ctx->pc = 0x16A118u;
    SET_GPR_U32(ctx, 31, 0x16A120u);
    ctx->pc = 0x16A130u;
    if (runtime->hasFunction(0x16A130u)) {
        auto targetFn = runtime->lookupFunction(0x16A130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A120u; }
        if (ctx->pc != 0x16A120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A130_0x16a130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A120u; }
        if (ctx->pc != 0x16A120u) { return; }
    }
    ctx->pc = 0x16A120u;
label_16a120:
    // 0x16a120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a124: 0x805adca  j           func_16B728
    ctx->pc = 0x16A124u;
    ctx->pc = 0x16A128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A124u;
            // 0x16a128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016B728_0x16b728(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16A12Cu;
    // 0x16a12c: 0x0  nop
    ctx->pc = 0x16a12cu;
    // NOP
}
