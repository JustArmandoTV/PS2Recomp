#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167FD8
// Address: 0x167fd8 - 0x167ff8
void sub_00167FD8_0x167fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167FD8_0x167fd8");
#endif

    ctx->pc = 0x167fd8u;

    // 0x167fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167fdc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x167fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x167fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167fe4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x167fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x167fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167fec: 0x8043366  j           func_10CD98
    ctx->pc = 0x167FECu;
    ctx->pc = 0x167FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167FECu;
            // 0x167ff0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (runtime->hasFunction(0x10CD98u)) {
        auto targetFn = runtime->lookupFunction(0x10CD98u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010CD98_0x10cd98(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x167FF4u;
    // 0x167ff4: 0x0  nop
    ctx->pc = 0x167ff4u;
    // NOP
}
