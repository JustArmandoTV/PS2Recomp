#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185448
// Address: 0x185448 - 0x185470
void sub_00185448_0x185448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185448_0x185448");
#endif

    ctx->pc = 0x185448u;

    // 0x185448: 0x3e00008  jr          $ra
    ctx->pc = 0x185448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18544Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185448u;
            // 0x18544c: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185450u;
    // 0x185450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x185454: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x185458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18545c: 0x24847ac8  addiu       $a0, $a0, 0x7AC8
    ctx->pc = 0x18545cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31432));
    // 0x185460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185464: 0x8061288  j           func_184A20
    ctx->pc = 0x185464u;
    ctx->pc = 0x185468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185464u;
            // 0x185468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A20u;
    if (runtime->hasFunction(0x184A20u)) {
        auto targetFn = runtime->lookupFunction(0x184A20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A20_0x184a20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18546Cu;
    // 0x18546c: 0x0  nop
    ctx->pc = 0x18546cu;
    // NOP
}
