#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A45E0
// Address: 0x1a45e0 - 0x1a4600
void sub_001A45E0_0x1a45e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A45E0_0x1a45e0");
#endif

    switch (ctx->pc) {
        case 0x1a45f0u: goto label_1a45f0;
        default: break;
    }

    ctx->pc = 0x1a45e0u;

    // 0x1a45e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a45e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a45e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a45e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a45e8: 0xc05caf4  jal         func_172BD0
    ctx->pc = 0x1A45E8u;
    SET_GPR_U32(ctx, 31, 0x1A45F0u);
    ctx->pc = 0x172BD0u;
    if (runtime->hasFunction(0x172BD0u)) {
        auto targetFn = runtime->lookupFunction(0x172BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A45F0u; }
        if (ctx->pc != 0x1A45F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172BD0_0x172bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A45F0u; }
        if (ctx->pc != 0x1A45F0u) { return; }
    }
    ctx->pc = 0x1A45F0u;
label_1a45f0:
    // 0x1a45f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a45f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a45f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a45f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a45f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A45F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A45FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A45F8u;
            // 0x1a45fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4600u;
}
