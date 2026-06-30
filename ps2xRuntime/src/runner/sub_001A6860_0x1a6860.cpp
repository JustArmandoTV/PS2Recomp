#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6860
// Address: 0x1a6860 - 0x1a6880
void sub_001A6860_0x1a6860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6860_0x1a6860");
#endif

    switch (ctx->pc) {
        case 0x1a6870u: goto label_1a6870;
        default: break;
    }

    ctx->pc = 0x1a6860u;

    // 0x1a6860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6868: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A6868u;
    SET_GPR_U32(ctx, 31, 0x1A6870u);
    ctx->pc = 0x1A686Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6868u;
            // 0x1a686c: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6870u; }
        if (ctx->pc != 0x1A6870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6870u; }
        if (ctx->pc != 0x1A6870u) { return; }
    }
    ctx->pc = 0x1A6870u;
label_1a6870:
    // 0x1a6870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6874: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a6874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a6878: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A687Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6878u;
            // 0x1a687c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6880u;
}
