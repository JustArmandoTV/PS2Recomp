#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172118
// Address: 0x172118 - 0x172130
void sub_00172118_0x172118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172118_0x172118");
#endif

    ctx->pc = 0x172118u;

    // 0x172118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17211c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17211cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172124: 0x80599de  j           func_166778
    ctx->pc = 0x172124u;
    ctx->pc = 0x172128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172124u;
            // 0x172128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166778_0x166778(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17212Cu;
    // 0x17212c: 0x0  nop
    ctx->pc = 0x17212cu;
    // NOP
}
