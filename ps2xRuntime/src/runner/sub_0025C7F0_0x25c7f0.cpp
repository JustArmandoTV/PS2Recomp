#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025C7F0
// Address: 0x25c7f0 - 0x25c810
void sub_0025C7F0_0x25c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C7F0_0x25c7f0");
#endif

    switch (ctx->pc) {
        case 0x25c804u: goto label_25c804;
        default: break;
    }

    ctx->pc = 0x25c7f0u;

    // 0x25c7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c7f8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x25c7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c7fc: 0xc097204  jal         func_25C810
    ctx->pc = 0x25C7FCu;
    SET_GPR_U32(ctx, 31, 0x25C804u);
    ctx->pc = 0x25C800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C7FCu;
            // 0x25c800: 0x83a6001c  lb          $a2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C810u;
    if (runtime->hasFunction(0x25C810u)) {
        auto targetFn = runtime->lookupFunction(0x25C810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C804u; }
        if (ctx->pc != 0x25C804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025C810_0x25c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C804u; }
        if (ctx->pc != 0x25C804u) { return; }
    }
    ctx->pc = 0x25C804u;
label_25c804:
    // 0x25c804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c808: 0x3e00008  jr          $ra
    ctx->pc = 0x25C808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C808u;
            // 0x25c80c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C810u;
}
