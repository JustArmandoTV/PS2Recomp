#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D470
// Address: 0x31d470 - 0x31d490
void sub_0031D470_0x31d470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D470_0x31d470");
#endif

    ctx->pc = 0x31d470u;

    // 0x31d470: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x31d470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x31d474: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x31d474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31d478: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x31d478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31d47c: 0x846502f8  lh          $a1, 0x2F8($v1)
    ctx->pc = 0x31d47cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 760)));
    // 0x31d480: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31d484: 0xa4650304  sh          $a1, 0x304($v1)
    ctx->pc = 0x31d484u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 772), (uint16_t)GPR_U32(ctx, 5));
    // 0x31d488: 0x805d006  j           func_174018
    ctx->pc = 0x31D488u;
    ctx->pc = 0x31D48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D488u;
            // 0x31d48c: 0x8c440184  lw          $a0, 0x184($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00174018_0x174018(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x31D490u;
}
