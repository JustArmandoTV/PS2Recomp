#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028E0A0
// Address: 0x28e0a0 - 0x28e0c0
void sub_0028E0A0_0x28e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E0A0_0x28e0a0");
#endif

    switch (ctx->pc) {
        case 0x28e0b0u: goto label_28e0b0;
        default: break;
    }

    ctx->pc = 0x28e0a0u;

    // 0x28e0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28e0a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e0a8: 0xc0a37ac  jal         func_28DEB0
    ctx->pc = 0x28E0A8u;
    SET_GPR_U32(ctx, 31, 0x28E0B0u);
    ctx->pc = 0x28DEB0u;
    if (runtime->hasFunction(0x28DEB0u)) {
        auto targetFn = runtime->lookupFunction(0x28DEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E0B0u; }
        if (ctx->pc != 0x28E0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DEB0_0x28deb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E0B0u; }
        if (ctx->pc != 0x28E0B0u) { return; }
    }
    ctx->pc = 0x28E0B0u;
label_28e0b0:
    // 0x28e0b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x28E0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E0B4u;
            // 0x28e0b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28E0BCu;
    // 0x28e0bc: 0x0  nop
    ctx->pc = 0x28e0bcu;
    // NOP
}
