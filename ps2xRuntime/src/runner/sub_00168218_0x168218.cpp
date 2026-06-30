#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168218
// Address: 0x168218 - 0x168238
void sub_00168218_0x168218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168218_0x168218");
#endif

    ctx->pc = 0x168218u;

    // 0x168218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16821c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16821cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x168220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168224: 0x24843388  addiu       $a0, $a0, 0x3388
    ctx->pc = 0x168224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13192));
    // 0x168228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16822c: 0x805e196  j           func_178658
    ctx->pc = 0x16822Cu;
    ctx->pc = 0x168230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16822Cu;
            // 0x168230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178658u;
    if (runtime->hasFunction(0x178658u)) {
        auto targetFn = runtime->lookupFunction(0x178658u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178658_0x178658(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x168234u;
    // 0x168234: 0x0  nop
    ctx->pc = 0x168234u;
    // NOP
}
