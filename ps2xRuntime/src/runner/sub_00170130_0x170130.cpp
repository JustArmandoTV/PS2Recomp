#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170130
// Address: 0x170130 - 0x170148
void sub_00170130_0x170130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170130_0x170130");
#endif

    ctx->pc = 0x170130u;

    // 0x170130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170138: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x170138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17013c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17013cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170140: 0x805938a  j           func_164E28
    ctx->pc = 0x170140u;
    ctx->pc = 0x170144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170140u;
            // 0x170144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E28u;
    if (runtime->hasFunction(0x164E28u)) {
        auto targetFn = runtime->lookupFunction(0x164E28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00164E28_0x164e28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170148u;
}
