#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B768
// Address: 0x16b768 - 0x16b790
void sub_0016B768_0x16b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B768_0x16b768");
#endif

    switch (ctx->pc) {
        case 0x16b778u: goto label_16b778;
        case 0x16b780u: goto label_16b780;
        default: break;
    }

    ctx->pc = 0x16b768u;

    // 0x16b768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b76c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b770: 0xc0599de  jal         func_166778
    ctx->pc = 0x16B770u;
    SET_GPR_U32(ctx, 31, 0x16B778u);
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B778u; }
        if (ctx->pc != 0x16B778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B778u; }
        if (ctx->pc != 0x16B778u) { return; }
    }
    ctx->pc = 0x16B778u;
label_16b778:
    // 0x16b778: 0xc05ade4  jal         func_16B790
    ctx->pc = 0x16B778u;
    SET_GPR_U32(ctx, 31, 0x16B780u);
    ctx->pc = 0x16B790u;
    if (runtime->hasFunction(0x16B790u)) {
        auto targetFn = runtime->lookupFunction(0x16B790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B780u; }
        if (ctx->pc != 0x16B780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B790_0x16b790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B780u; }
        if (ctx->pc != 0x16B780u) { return; }
    }
    ctx->pc = 0x16B780u;
label_16b780:
    // 0x16b780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b784: 0x80599e0  j           func_166780
    ctx->pc = 0x16B784u;
    ctx->pc = 0x16B788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B784u;
            // 0x16b788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16B78Cu;
    // 0x16b78c: 0x0  nop
    ctx->pc = 0x16b78cu;
    // NOP
}
