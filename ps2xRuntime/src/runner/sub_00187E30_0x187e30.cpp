#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187E30
// Address: 0x187e30 - 0x187e48
void sub_00187E30_0x187e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187E30_0x187e30");
#endif

    ctx->pc = 0x187e30u;

    // 0x187e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187e34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x187e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x187e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187e40: 0x8061f38  j           func_187CE0
    ctx->pc = 0x187E40u;
    ctx->pc = 0x187E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187E40u;
            // 0x187e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187CE0u;
    {
        auto targetFn = runtime->lookupFunction(0x187CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x187E48u;
}
