#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E9D8
// Address: 0x16e9d8 - 0x16e9f0
void sub_0016E9D8_0x16e9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E9D8_0x16e9d8");
#endif

    ctx->pc = 0x16e9d8u;

    // 0x16e9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e9dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e9e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e9e4: 0x8060fc0  j           func_183F00
    ctx->pc = 0x16E9E4u;
    ctx->pc = 0x16E9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E9E4u;
            // 0x16e9e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F00u;
    if (runtime->hasFunction(0x183F00u)) {
        auto targetFn = runtime->lookupFunction(0x183F00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00183F00_0x183f00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16E9ECu;
    // 0x16e9ec: 0x0  nop
    ctx->pc = 0x16e9ecu;
    // NOP
}
