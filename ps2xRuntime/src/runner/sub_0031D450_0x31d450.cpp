#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D450
// Address: 0x31d450 - 0x31d470
void sub_0031D450_0x31d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D450_0x31d450");
#endif

    ctx->pc = 0x31d450u;

    // 0x31d450: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x31d450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31d454: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31d454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31d458: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x31d458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x31d45c: 0x805d85a  j           func_176168
    ctx->pc = 0x31D45Cu;
    ctx->pc = 0x31D460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D45Cu;
            // 0x31d460: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00176168_0x176168(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x31D464u;
    // 0x31d464: 0x0  nop
    ctx->pc = 0x31d464u;
    // NOP
    // 0x31d468: 0x0  nop
    ctx->pc = 0x31d468u;
    // NOP
    // 0x31d46c: 0x0  nop
    ctx->pc = 0x31d46cu;
    // NOP
}
