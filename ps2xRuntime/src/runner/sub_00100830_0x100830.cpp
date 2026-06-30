#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100830
// Address: 0x100830 - 0x100850
void sub_00100830_0x100830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100830_0x100830");
#endif

    switch (ctx->pc) {
        case 0x100840u: goto label_100840;
        default: break;
    }

    ctx->pc = 0x100830u;

    // 0x100830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100838: 0xc049760  jal         func_125D80
    ctx->pc = 0x100838u;
    SET_GPR_U32(ctx, 31, 0x100840u);
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100840u; }
        if (ctx->pc != 0x100840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100840u; }
        if (ctx->pc != 0x100840u) { return; }
    }
    ctx->pc = 0x100840u;
label_100840:
    // 0x100840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100844: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x100844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100848: 0x3e00008  jr          $ra
    ctx->pc = 0x100848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10084Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100848u;
            // 0x10084c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100850u;
}
