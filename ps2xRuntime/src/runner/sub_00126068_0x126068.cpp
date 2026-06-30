#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00126068
// Address: 0x126068 - 0x126080
void sub_00126068_0x126068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126068_0x126068");
#endif

    switch (ctx->pc) {
        case 0x126078u: goto label_126078;
        default: break;
    }

    ctx->pc = 0x126068u;

    // 0x126068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12606c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12606cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126070: 0xc04ae08  jal         func_12B820
    ctx->pc = 0x126070u;
    SET_GPR_U32(ctx, 31, 0x126078u);
    ctx->pc = 0x126074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126070u;
            // 0x126074: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B820u;
    if (runtime->hasFunction(0x12B820u)) {
        auto targetFn = runtime->lookupFunction(0x12B820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126078u; }
        if (ctx->pc != 0x126078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B820_0x12b820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126078u; }
        if (ctx->pc != 0x126078u) { return; }
    }
    ctx->pc = 0x126078u;
label_126078:
    // 0x126078: 0xc040086  jal         func_100218
    ctx->pc = 0x126078u;
    SET_GPR_U32(ctx, 31, 0x126080u);
    ctx->pc = 0x12607Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126078u;
            // 0x12607c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100218u;
    if (runtime->hasFunction(0x100218u)) {
        auto targetFn = runtime->lookupFunction(0x100218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126080u; }
        if (ctx->pc != 0x126080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100218_0x100218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126080u; }
        if (ctx->pc != 0x126080u) { return; }
    }
    ctx->pc = 0x126080u;
}
