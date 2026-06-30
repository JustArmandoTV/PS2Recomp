#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1940
// Address: 0x1d1940 - 0x1d1960
void sub_001D1940_0x1d1940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1940_0x1d1940");
#endif

    ctx->pc = 0x1d1940u;

    // 0x1d1940: 0xa08002b6  sb          $zero, 0x2B6($a0)
    ctx->pc = 0x1d1940u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 694), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d1944: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x1d1944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
    // 0x1d1948: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d194c: 0x34450400  ori         $a1, $v0, 0x400
    ctx->pc = 0x1d194cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1d1950: 0x80732d4  j           func_1CCB50
    ctx->pc = 0x1D1950u;
    ctx->pc = 0x1D1954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1950u;
            // 0x1d1954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCB50u;
    if (runtime->hasFunction(0x1CCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1CCB50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CCB50_0x1ccb50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D1958u;
    // 0x1d1958: 0x0  nop
    ctx->pc = 0x1d1958u;
    // NOP
    // 0x1d195c: 0x0  nop
    ctx->pc = 0x1d195cu;
    // NOP
}
