#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181CC8
// Address: 0x181cc8 - 0x181cf8
void sub_00181CC8_0x181cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181CC8_0x181cc8");
#endif

    switch (ctx->pc) {
        case 0x181cdcu: goto label_181cdc;
        case 0x181ce4u: goto label_181ce4;
        default: break;
    }

    ctx->pc = 0x181cc8u;

    // 0x181cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181ccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181cd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x181cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x181cd4: 0xc060704  jal         func_181C10
    ctx->pc = 0x181CD4u;
    SET_GPR_U32(ctx, 31, 0x181CDCu);
    ctx->pc = 0x181CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181CD4u;
            // 0x181cd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C10u;
    if (runtime->hasFunction(0x181C10u)) {
        auto targetFn = runtime->lookupFunction(0x181C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181CDCu; }
        if (ctx->pc != 0x181CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C10_0x181c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181CDCu; }
        if (ctx->pc != 0x181CDCu) { return; }
    }
    ctx->pc = 0x181CDCu;
label_181cdc:
    // 0x181cdc: 0xc06073e  jal         func_181CF8
    ctx->pc = 0x181CDCu;
    SET_GPR_U32(ctx, 31, 0x181CE4u);
    ctx->pc = 0x181CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181CDCu;
            // 0x181ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181CF8u;
    if (runtime->hasFunction(0x181CF8u)) {
        auto targetFn = runtime->lookupFunction(0x181CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181CE4u; }
        if (ctx->pc != 0x181CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181CF8_0x181cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181CE4u; }
        if (ctx->pc != 0x181CE4u) { return; }
    }
    ctx->pc = 0x181CE4u;
label_181ce4:
    // 0x181ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181ce8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x181ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181cec: 0x806070a  j           func_181C28
    ctx->pc = 0x181CECu;
    ctx->pc = 0x181CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181CECu;
            // 0x181cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C28u;
    if (runtime->hasFunction(0x181C28u)) {
        auto targetFn = runtime->lookupFunction(0x181C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00181C28_0x181c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x181CF4u;
    // 0x181cf4: 0x0  nop
    ctx->pc = 0x181cf4u;
    // NOP
}
