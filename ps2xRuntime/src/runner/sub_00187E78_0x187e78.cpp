#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187E78
// Address: 0x187e78 - 0x187ea8
void sub_00187E78_0x187e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187E78_0x187e78");
#endif

    switch (ctx->pc) {
        case 0x187e90u: goto label_187e90;
        default: break;
    }

    ctx->pc = 0x187e78u;

    // 0x187e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187e7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x187e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187e88: 0x8061f50  j           func_187D40
    ctx->pc = 0x187E88u;
    ctx->pc = 0x187E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187E88u;
            // 0x187e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187D40u;
    {
        auto targetFn = runtime->lookupFunction(0x187D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x187E90u;
label_187e90:
    // 0x187e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187e94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x187e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187ea0: 0x8061f50  j           func_187D40
    ctx->pc = 0x187EA0u;
    ctx->pc = 0x187EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187EA0u;
            // 0x187ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187D40u;
    {
        auto targetFn = runtime->lookupFunction(0x187D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x187EA8u;
}
