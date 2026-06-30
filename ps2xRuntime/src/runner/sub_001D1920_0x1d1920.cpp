#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1920
// Address: 0x1d1920 - 0x1d1940
void sub_001D1920_0x1d1920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1920_0x1d1920");
#endif

    ctx->pc = 0x1d1920u;

    // 0x1d1920: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x1d1920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
    // 0x1d1924: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d192c: 0x80732d4  j           func_1CCB50
    ctx->pc = 0x1D192Cu;
    ctx->pc = 0x1D1930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D192Cu;
            // 0x1d1930: 0x34450400  ori         $a1, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCB50u;
    if (runtime->hasFunction(0x1CCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1CCB50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CCB50_0x1ccb50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D1934u;
    // 0x1d1934: 0x0  nop
    ctx->pc = 0x1d1934u;
    // NOP
    // 0x1d1938: 0x0  nop
    ctx->pc = 0x1d1938u;
    // NOP
    // 0x1d193c: 0x0  nop
    ctx->pc = 0x1d193cu;
    // NOP
}
