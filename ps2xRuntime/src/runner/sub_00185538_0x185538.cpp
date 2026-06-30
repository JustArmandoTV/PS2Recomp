#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185538
// Address: 0x185538 - 0x185568
void sub_00185538_0x185538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185538_0x185538");
#endif

    switch (ctx->pc) {
        case 0x185548u: goto label_185548;
        case 0x185550u: goto label_185550;
        case 0x185558u: goto label_185558;
        default: break;
    }

    ctx->pc = 0x185538u;

    // 0x185538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18553c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18553cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185540: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x185540u;
    SET_GPR_U32(ctx, 31, 0x185548u);
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185548u; }
        if (ctx->pc != 0x185548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185548u; }
        if (ctx->pc != 0x185548u) { return; }
    }
    ctx->pc = 0x185548u;
label_185548:
    // 0x185548: 0xc06155a  jal         func_185568
    ctx->pc = 0x185548u;
    SET_GPR_U32(ctx, 31, 0x185550u);
    ctx->pc = 0x185568u;
    if (runtime->hasFunction(0x185568u)) {
        auto targetFn = runtime->lookupFunction(0x185568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185550u; }
        if (ctx->pc != 0x185550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185568_0x185568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185550u; }
        if (ctx->pc != 0x185550u) { return; }
    }
    ctx->pc = 0x185550u;
label_185550:
    // 0x185550: 0xc061282  jal         func_184A08
    ctx->pc = 0x185550u;
    SET_GPR_U32(ctx, 31, 0x185558u);
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185558u; }
        if (ctx->pc != 0x185558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185558u; }
        if (ctx->pc != 0x185558u) { return; }
    }
    ctx->pc = 0x185558u;
label_185558:
    // 0x185558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18555c: 0x8061270  j           func_1849C0
    ctx->pc = 0x18555Cu;
    ctx->pc = 0x185560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18555Cu;
            // 0x185560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1849C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x185564u;
    // 0x185564: 0x0  nop
    ctx->pc = 0x185564u;
    // NOP
}
