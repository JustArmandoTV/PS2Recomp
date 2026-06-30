#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C400
// Address: 0x51c400 - 0x51c420
void sub_0051C400_0x51c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C400_0x51c400");
#endif

    ctx->pc = 0x51c400u;

    // 0x51c400: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x51c400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x51c404: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x51c404u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x51c408: 0x24840eb8  addiu       $a0, $a0, 0xEB8
    ctx->pc = 0x51c408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3768));
    // 0x51c40c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51c40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c410: 0x80751b8  j           func_1D46E0
    ctx->pc = 0x51C410u;
    ctx->pc = 0x51C414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51C410u;
            // 0x51c414: 0x24c66b00  addiu       $a2, $a2, 0x6B00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x51C418u;
    // 0x51c418: 0x0  nop
    ctx->pc = 0x51c418u;
    // NOP
    // 0x51c41c: 0x0  nop
    ctx->pc = 0x51c41cu;
    // NOP
}
