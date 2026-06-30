#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8910
// Address: 0x1a8910 - 0x1a8928
void sub_001A8910_0x1a8910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8910_0x1a8910");
#endif

    ctx->pc = 0x1a8910u;

    // 0x1a8910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a891c: 0x806154e  j           func_185538
    ctx->pc = 0x1A891Cu;
    ctx->pc = 0x1A8920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A891Cu;
            // 0x1a8920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185538u;
    if (runtime->hasFunction(0x185538u)) {
        auto targetFn = runtime->lookupFunction(0x185538u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00185538_0x185538(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A8924u;
    // 0x1a8924: 0x0  nop
    ctx->pc = 0x1a8924u;
    // NOP
}
