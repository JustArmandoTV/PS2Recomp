#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172130
// Address: 0x172130 - 0x172168
void sub_00172130_0x172130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172130_0x172130");
#endif

    switch (ctx->pc) {
        case 0x172148u: goto label_172148;
        default: break;
    }

    ctx->pc = 0x172130u;

    // 0x172130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17213c: 0x80599e0  j           func_166780
    ctx->pc = 0x17213Cu;
    ctx->pc = 0x172140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17213Cu;
            // 0x172140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x172144u;
    // 0x172144: 0x0  nop
    ctx->pc = 0x172144u;
    // NOP
label_172148:
    // 0x172148: 0x3e00008  jr          $ra
    ctx->pc = 0x172148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17214Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172148u;
            // 0x17214c: 0x8082004d  lb          $v0, 0x4D($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172150u;
    // 0x172150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172154: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x172154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17215c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17215cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172160: 0x8059f4e  j           func_167D38
    ctx->pc = 0x172160u;
    ctx->pc = 0x172164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172160u;
            // 0x172164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x172168u;
}
