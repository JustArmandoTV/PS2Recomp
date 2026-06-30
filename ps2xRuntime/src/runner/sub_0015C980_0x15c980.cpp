#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C980
// Address: 0x15c980 - 0x15c9a0
void sub_0015C980_0x15c980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C980_0x15c980");
#endif

    ctx->pc = 0x15c980u;

    // 0x15c980: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15c980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15c984: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x15c984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x15c988: 0xe44c57cc  swc1        $f12, 0x57CC($v0)
    ctx->pc = 0x15c988u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 22476), bits); }
    // 0x15c98c: 0x240401fa  addiu       $a0, $zero, 0x1FA
    ctx->pc = 0x15c98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 506));
    // 0x15c990: 0x24a557c0  addiu       $a1, $a1, 0x57C0
    ctx->pc = 0x15c990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22464));
    // 0x15c994: 0x80573a0  j           func_15CE80
    ctx->pc = 0x15C994u;
    ctx->pc = 0x15C998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C994u;
            // 0x15c998: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CE80u;
    if (runtime->hasFunction(0x15CE80u)) {
        auto targetFn = runtime->lookupFunction(0x15CE80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015CE80_0x15ce80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15C99Cu;
    // 0x15c99c: 0x0  nop
    ctx->pc = 0x15c99cu;
    // NOP
}
