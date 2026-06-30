#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CBE0
// Address: 0x19cbe0 - 0x19cc00
void sub_0019CBE0_0x19cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CBE0_0x19cbe0");
#endif

    switch (ctx->pc) {
        case 0x19cbf0u: goto label_19cbf0;
        default: break;
    }

    ctx->pc = 0x19cbe0u;

    // 0x19cbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19cbe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19cbe8: 0xc067376  jal         func_19CDD8
    ctx->pc = 0x19CBE8u;
    SET_GPR_U32(ctx, 31, 0x19CBF0u);
    ctx->pc = 0x19CBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CBE8u;
            // 0x19cbec: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CDD8u;
    if (runtime->hasFunction(0x19CDD8u)) {
        auto targetFn = runtime->lookupFunction(0x19CDD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBF0u; }
        if (ctx->pc != 0x19CBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CDD8_0x19cdd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBF0u; }
        if (ctx->pc != 0x19CBF0u) { return; }
    }
    ctx->pc = 0x19CBF0u;
label_19cbf0:
    // 0x19cbf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19cbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cbf4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x19cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x19cbf8: 0x8067376  j           func_19CDD8
    ctx->pc = 0x19CBF8u;
    ctx->pc = 0x19CBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CBF8u;
            // 0x19cbfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CDD8u;
    if (runtime->hasFunction(0x19CDD8u)) {
        auto targetFn = runtime->lookupFunction(0x19CDD8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019CDD8_0x19cdd8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19CC00u;
}
