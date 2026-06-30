#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172BD0
// Address: 0x172bd0 - 0x172c00
void sub_00172BD0_0x172bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172BD0_0x172bd0");
#endif

    switch (ctx->pc) {
        case 0x172be4u: goto label_172be4;
        case 0x172becu: goto label_172bec;
        default: break;
    }

    ctx->pc = 0x172bd0u;

    // 0x172bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172bd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172bd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x172bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x172bdc: 0xc0599de  jal         func_166778
    ctx->pc = 0x172BDCu;
    SET_GPR_U32(ctx, 31, 0x172BE4u);
    ctx->pc = 0x172BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172BDCu;
            // 0x172be0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172BE4u; }
        if (ctx->pc != 0x172BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172BE4u; }
        if (ctx->pc != 0x172BE4u) { return; }
    }
    ctx->pc = 0x172BE4u;
label_172be4:
    // 0x172be4: 0xc05cb00  jal         func_172C00
    ctx->pc = 0x172BE4u;
    SET_GPR_U32(ctx, 31, 0x172BECu);
    ctx->pc = 0x172BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172BE4u;
            // 0x172be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172C00u;
    if (runtime->hasFunction(0x172C00u)) {
        auto targetFn = runtime->lookupFunction(0x172C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172BECu; }
        if (ctx->pc != 0x172BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172C00_0x172c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172BECu; }
        if (ctx->pc != 0x172BECu) { return; }
    }
    ctx->pc = 0x172BECu;
label_172bec:
    // 0x172bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172bf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x172bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172bf4: 0x80599e0  j           func_166780
    ctx->pc = 0x172BF4u;
    ctx->pc = 0x172BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172BF4u;
            // 0x172bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x172BFCu;
    // 0x172bfc: 0x0  nop
    ctx->pc = 0x172bfcu;
    // NOP
}
