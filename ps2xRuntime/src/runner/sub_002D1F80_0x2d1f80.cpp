#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1F80
// Address: 0x2d1f80 - 0x2d1fa0
void sub_002D1F80_0x2d1f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1F80_0x2d1f80");
#endif

    switch (ctx->pc) {
        case 0x2d1f94u: goto label_2d1f94;
        default: break;
    }

    ctx->pc = 0x2d1f80u;

    // 0x2d1f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1f84: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1F84u;
    {
        const bool branch_taken_0x2d1f84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F84u;
            // 0x2d1f88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f84) {
            ctx->pc = 0x2D1F94u;
            goto label_2d1f94;
        }
    }
    ctx->pc = 0x2D1F8Cu;
    // 0x2d1f8c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D1F8Cu;
    SET_GPR_U32(ctx, 31, 0x2D1F94u);
    ctx->pc = 0x2D1F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F8Cu;
            // 0x2d1f90: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F94u; }
        if (ctx->pc != 0x2D1F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F94u; }
        if (ctx->pc != 0x2D1F94u) { return; }
    }
    ctx->pc = 0x2D1F94u;
label_2d1f94:
    // 0x2d1f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1f98: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F98u;
            // 0x2d1f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1FA0u;
}
