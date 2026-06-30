#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184B20
// Address: 0x184b20 - 0x184b50
void sub_00184B20_0x184b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184B20_0x184b20");
#endif

    switch (ctx->pc) {
        case 0x184b30u: goto label_184b30;
        case 0x184b38u: goto label_184b38;
        case 0x184b40u: goto label_184b40;
        default: break;
    }

    ctx->pc = 0x184b20u;

    // 0x184b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184b28: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x184B28u;
    SET_GPR_U32(ctx, 31, 0x184B30u);
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B30u; }
        if (ctx->pc != 0x184B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B30u; }
        if (ctx->pc != 0x184B30u) { return; }
    }
    ctx->pc = 0x184B30u;
label_184b30:
    // 0x184b30: 0xc0612d4  jal         func_184B50
    ctx->pc = 0x184B30u;
    SET_GPR_U32(ctx, 31, 0x184B38u);
    ctx->pc = 0x184B50u;
    if (runtime->hasFunction(0x184B50u)) {
        auto targetFn = runtime->lookupFunction(0x184B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B38u; }
        if (ctx->pc != 0x184B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184B50_0x184b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B38u; }
        if (ctx->pc != 0x184B38u) { return; }
    }
    ctx->pc = 0x184B38u;
label_184b38:
    // 0x184b38: 0xc061282  jal         func_184A08
    ctx->pc = 0x184B38u;
    SET_GPR_U32(ctx, 31, 0x184B40u);
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B40u; }
        if (ctx->pc != 0x184B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B40u; }
        if (ctx->pc != 0x184B40u) { return; }
    }
    ctx->pc = 0x184B40u;
label_184b40:
    // 0x184b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184b44: 0x8061270  j           func_1849C0
    ctx->pc = 0x184B44u;
    ctx->pc = 0x184B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184B44u;
            // 0x184b48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1849C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x184B4Cu;
    // 0x184b4c: 0x0  nop
    ctx->pc = 0x184b4cu;
    // NOP
}
