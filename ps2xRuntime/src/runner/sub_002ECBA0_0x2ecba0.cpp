#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ECBA0
// Address: 0x2ecba0 - 0x2ecbc0
void sub_002ECBA0_0x2ecba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECBA0_0x2ecba0");
#endif

    ctx->pc = 0x2ecba0u;

    // 0x2ecba0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2ecba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecba4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2ecba4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecba8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ecba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ecbacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecbb4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ecbb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ecbb8: 0x80bb404  j           func_2ED010
    ctx->pc = 0x2ECBB8u;
    ctx->pc = 0x2ECBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECBB8u;
            // 0x2ecbbc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002ED010_0x2ed010(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2ECBC0u;
}
