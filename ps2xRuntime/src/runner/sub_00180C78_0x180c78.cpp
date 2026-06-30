#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180C78
// Address: 0x180c78 - 0x180c90
void sub_00180C78_0x180c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180C78_0x180c78");
#endif

    ctx->pc = 0x180c78u;

    // 0x180c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180c84: 0x8061f74  j           func_187DD0
    ctx->pc = 0x180C84u;
    ctx->pc = 0x180C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180C84u;
            // 0x180c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DD0_0x187dd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x180C8Cu;
    // 0x180c8c: 0x0  nop
    ctx->pc = 0x180c8cu;
    // NOP
}
