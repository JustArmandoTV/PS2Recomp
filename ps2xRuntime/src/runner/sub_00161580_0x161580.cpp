#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161580
// Address: 0x161580 - 0x1615b0
void sub_00161580_0x161580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161580_0x161580");
#endif

    switch (ctx->pc) {
        case 0x161598u: goto label_161598;
        default: break;
    }

    ctx->pc = 0x161580u;

    // 0x161580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16158c: 0x8061f74  j           func_187DD0
    ctx->pc = 0x16158Cu;
    ctx->pc = 0x161590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16158Cu;
            // 0x161590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DD0_0x187dd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x161594u;
    // 0x161594: 0x0  nop
    ctx->pc = 0x161594u;
    // NOP
label_161598:
    // 0x161598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16159c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16159cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1615a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1615a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1615a4: 0x8061f7a  j           func_187DE8
    ctx->pc = 0x1615A4u;
    ctx->pc = 0x1615A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1615A4u;
            // 0x1615a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DE8_0x187de8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1615ACu;
    // 0x1615ac: 0x0  nop
    ctx->pc = 0x1615acu;
    // NOP
}
