#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF100
// Address: 0x3bf100 - 0x3bf120
void sub_003BF100_0x3bf100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF100_0x3bf100");
#endif

    ctx->pc = 0x3bf100u;

    // 0x3bf100: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x3bf100u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x3bf104: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3bf104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf108: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3bf108u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3bf10c: 0xc44c00a0  lwc1        $f12, 0xA0($v0)
    ctx->pc = 0x3bf10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3bf110: 0x80c753c  j           func_31D4F0
    ctx->pc = 0x3BF110u;
    ctx->pc = 0x3BF114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF110u;
            // 0x3bf114: 0x2444009c  addiu       $a0, $v0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3BF118u;
    // 0x3bf118: 0x0  nop
    ctx->pc = 0x3bf118u;
    // NOP
    // 0x3bf11c: 0x0  nop
    ctx->pc = 0x3bf11cu;
    // NOP
}
