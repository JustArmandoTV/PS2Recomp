#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C30F0
// Address: 0x3c30f0 - 0x3c3110
void sub_003C30F0_0x3c30f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C30F0_0x3c30f0");
#endif

    ctx->pc = 0x3c30f0u;

    // 0x3c30f0: 0x2484009c  addiu       $a0, $a0, 0x9C
    ctx->pc = 0x3c30f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 156));
    // 0x3c30f4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3c30f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3c30f8: 0x0  nop
    ctx->pc = 0x3c30f8u;
    // NOP
    // 0x3c30fc: 0x80c753c  j           func_31D4F0
    ctx->pc = 0x3C30FCu;
    ctx->pc = 0x3C3100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C30FCu;
            // 0x3c3100: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3C3104u;
    // 0x3c3104: 0x0  nop
    ctx->pc = 0x3c3104u;
    // NOP
    // 0x3c3108: 0x0  nop
    ctx->pc = 0x3c3108u;
    // NOP
    // 0x3c310c: 0x0  nop
    ctx->pc = 0x3c310cu;
    // NOP
}
