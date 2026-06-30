#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BDE0
// Address: 0x33bde0 - 0x33be00
void sub_0033BDE0_0x33bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BDE0_0x33bde0");
#endif

    ctx->pc = 0x33bde0u;

    // 0x33bde0: 0x2484087c  addiu       $a0, $a0, 0x87C
    ctx->pc = 0x33bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2172));
    // 0x33bde4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x33bde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x33bde8: 0x0  nop
    ctx->pc = 0x33bde8u;
    // NOP
    // 0x33bdec: 0x80c753c  j           func_31D4F0
    ctx->pc = 0x33BDECu;
    ctx->pc = 0x33BDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BDECu;
            // 0x33bdf0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x33BDF4u;
    // 0x33bdf4: 0x0  nop
    ctx->pc = 0x33bdf4u;
    // NOP
    // 0x33bdf8: 0x0  nop
    ctx->pc = 0x33bdf8u;
    // NOP
    // 0x33bdfc: 0x0  nop
    ctx->pc = 0x33bdfcu;
    // NOP
}
