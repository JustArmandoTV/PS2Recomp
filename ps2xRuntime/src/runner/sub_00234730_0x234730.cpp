#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234730
// Address: 0x234730 - 0x234750
void sub_00234730_0x234730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234730_0x234730");
#endif

    switch (ctx->pc) {
        case 0x234740u: goto label_234740;
        default: break;
    }

    ctx->pc = 0x234730u;

    // 0x234730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234738: 0xc08edb8  jal         func_23B6E0
    ctx->pc = 0x234738u;
    SET_GPR_U32(ctx, 31, 0x234740u);
    ctx->pc = 0x23473Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234738u;
            // 0x23473c: 0x8c84007c  lw          $a0, 0x7C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B6E0u;
    if (runtime->hasFunction(0x23B6E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234740u; }
        if (ctx->pc != 0x234740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B6E0_0x23b6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234740u; }
        if (ctx->pc != 0x234740u) { return; }
    }
    ctx->pc = 0x234740u;
label_234740:
    // 0x234740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234744: 0x3e00008  jr          $ra
    ctx->pc = 0x234744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234744u;
            // 0x234748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23474Cu;
    // 0x23474c: 0x0  nop
    ctx->pc = 0x23474cu;
    // NOP
}
