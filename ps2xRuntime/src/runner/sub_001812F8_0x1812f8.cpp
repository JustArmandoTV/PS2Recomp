#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001812F8
// Address: 0x1812f8 - 0x181310
void sub_001812F8_0x1812f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001812F8_0x1812f8");
#endif

    ctx->pc = 0x1812f8u;

    // 0x1812f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1812f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1812fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1812fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181304: 0x804b6aa  j           func_12DAA8
    ctx->pc = 0x181304u;
    ctx->pc = 0x181308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181304u;
            // 0x181308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAA8u;
    if (runtime->hasFunction(0x12DAA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012DAA8_0x12daa8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18130Cu;
    // 0x18130c: 0x0  nop
    ctx->pc = 0x18130cu;
    // NOP
}
