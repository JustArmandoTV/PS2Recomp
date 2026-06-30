#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B4F0
// Address: 0x19b4f0 - 0x19b510
void sub_0019B4F0_0x19b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B4F0_0x19b4f0");
#endif

    switch (ctx->pc) {
        case 0x19b500u: goto label_19b500;
        default: break;
    }

    ctx->pc = 0x19b4f0u;

    // 0x19b4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b4f8: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x19B4F8u;
    SET_GPR_U32(ctx, 31, 0x19B500u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B500u; }
        if (ctx->pc != 0x19B500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B500u; }
        if (ctx->pc != 0x19B500u) { return; }
    }
    ctx->pc = 0x19B500u;
label_19b500:
    // 0x19b500: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x19b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x19b504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b508: 0x3e00008  jr          $ra
    ctx->pc = 0x19B508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B508u;
            // 0x19b50c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B510u;
}
