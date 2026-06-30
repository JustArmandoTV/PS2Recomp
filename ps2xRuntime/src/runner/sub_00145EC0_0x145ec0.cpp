#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00145EC0
// Address: 0x145ec0 - 0x145ef0
void sub_00145EC0_0x145ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145EC0_0x145ec0");
#endif

    ctx->pc = 0x145ec0u;

    // 0x145ec0: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145EC0u;
    {
        const bool branch_taken_0x145ec0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ec0) {
            ctx->pc = 0x145ED0u;
            goto label_145ed0;
        }
    }
    ctx->pc = 0x145EC8u;
    // 0x145ec8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145EC8u;
    {
        const bool branch_taken_0x145ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145EC8u;
            // 0x145ecc: 0xaf8882e0  sw          $t0, -0x7D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935264), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ec8) {
            ctx->pc = 0x145EDCu;
            goto label_145edc;
        }
    }
    ctx->pc = 0x145ED0u;
label_145ed0:
    // 0x145ed0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x145ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x145ed4: 0x24421230  addiu       $v0, $v0, 0x1230
    ctx->pc = 0x145ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4656));
    // 0x145ed8: 0xaf8282e0  sw          $v0, -0x7D20($gp)
    ctx->pc = 0x145ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935264), GPR_U32(ctx, 2));
label_145edc:
    // 0x145edc: 0x8051664  j           func_145990
    ctx->pc = 0x145EDCu;
    ctx->pc = 0x145990u;
    if (runtime->hasFunction(0x145990u)) {
        auto targetFn = runtime->lookupFunction(0x145990u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00145990_0x145990(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x145EE4u;
    // 0x145ee4: 0x0  nop
    ctx->pc = 0x145ee4u;
    // NOP
    // 0x145ee8: 0x0  nop
    ctx->pc = 0x145ee8u;
    // NOP
    // 0x145eec: 0x0  nop
    ctx->pc = 0x145eecu;
    // NOP
}
