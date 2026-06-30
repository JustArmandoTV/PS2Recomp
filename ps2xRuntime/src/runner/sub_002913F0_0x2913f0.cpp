#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002913F0
// Address: 0x2913f0 - 0x291420
void sub_002913F0_0x2913f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002913F0_0x2913f0");
#endif

    switch (ctx->pc) {
        case 0x291408u: goto label_291408;
        default: break;
    }

    ctx->pc = 0x2913f0u;

    // 0x2913f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2913f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2913f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2913f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2913f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2913f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2913fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2913fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291400: 0xc0a43dc  jal         func_290F70
    ctx->pc = 0x291400u;
    SET_GPR_U32(ctx, 31, 0x291408u);
    ctx->pc = 0x291404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291400u;
            // 0x291404: 0x24c40030  addiu       $a0, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290F70u;
    if (runtime->hasFunction(0x290F70u)) {
        auto targetFn = runtime->lookupFunction(0x290F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291408u; }
        if (ctx->pc != 0x291408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00290F70_0x290f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291408u; }
        if (ctx->pc != 0x291408u) { return; }
    }
    ctx->pc = 0x291408u;
label_291408:
    // 0x291408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29140c: 0x3e00008  jr          $ra
    ctx->pc = 0x29140Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29140Cu;
            // 0x291410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291414u;
    // 0x291414: 0x0  nop
    ctx->pc = 0x291414u;
    // NOP
    // 0x291418: 0x0  nop
    ctx->pc = 0x291418u;
    // NOP
    // 0x29141c: 0x0  nop
    ctx->pc = 0x29141cu;
    // NOP
}
