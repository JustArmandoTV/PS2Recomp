#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BE00
// Address: 0x33be00 - 0x33be20
void sub_0033BE00_0x33be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BE00_0x33be00");
#endif

    ctx->pc = 0x33be00u;

    // 0x33be00: 0x2484092c  addiu       $a0, $a0, 0x92C
    ctx->pc = 0x33be00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2348));
    // 0x33be04: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x33be04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x33be08: 0x0  nop
    ctx->pc = 0x33be08u;
    // NOP
    // 0x33be0c: 0x80c753c  j           func_31D4F0
    ctx->pc = 0x33BE0Cu;
    ctx->pc = 0x33BE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BE0Cu;
            // 0x33be10: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x33BE14u;
    // 0x33be14: 0x0  nop
    ctx->pc = 0x33be14u;
    // NOP
    // 0x33be18: 0x0  nop
    ctx->pc = 0x33be18u;
    // NOP
    // 0x33be1c: 0x0  nop
    ctx->pc = 0x33be1cu;
    // NOP
}
