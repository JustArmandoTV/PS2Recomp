#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170238
// Address: 0x170238 - 0x170250
void sub_00170238_0x170238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170238_0x170238");
#endif

    ctx->pc = 0x170238u;

    // 0x170238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17023c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17023cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170240: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x170240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x170244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170248: 0x80593cc  j           func_164F30
    ctx->pc = 0x170248u;
    ctx->pc = 0x17024Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170248u;
            // 0x17024c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F30u;
    {
        auto targetFn = runtime->lookupFunction(0x164F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x170250u;
}
