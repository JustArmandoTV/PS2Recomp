#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0690
// Address: 0x2f0690 - 0x2f06b0
void sub_002F0690_0x2f0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0690_0x2f0690");
#endif

    ctx->pc = 0x2f0690u;

    // 0x2f0690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f0690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f0694: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2f0694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2f0698: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2f0698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f069c: 0x0  nop
    ctx->pc = 0x2f069cu;
    // NOP
    // 0x2f06a0: 0x805182c  j           func_1460B0
    ctx->pc = 0x2F06A0u;
    ctx->pc = 0x1460B0u;
    if (runtime->hasFunction(0x1460B0u)) {
        auto targetFn = runtime->lookupFunction(0x1460B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001460B0_0x1460b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F06A8u;
    // 0x2f06a8: 0x0  nop
    ctx->pc = 0x2f06a8u;
    // NOP
    // 0x2f06ac: 0x0  nop
    ctx->pc = 0x2f06acu;
    // NOP
}
