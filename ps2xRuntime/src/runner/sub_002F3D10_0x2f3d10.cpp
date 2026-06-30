#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F3D10
// Address: 0x2f3d10 - 0x2f3d30
void sub_002F3D10_0x2f3d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3D10_0x2f3d10");
#endif

    ctx->pc = 0x2f3d10u;

    // 0x2f3d10: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2f3d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d18: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2f3d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2f3d1c: 0x80751b8  j           func_1D46E0
    ctx->pc = 0x2F3D1Cu;
    ctx->pc = 0x2F3D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3D1Cu;
            // 0x2f3d20: 0x24841d0c  addiu       $a0, $a0, 0x1D0C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7436));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F3D24u;
    // 0x2f3d24: 0x0  nop
    ctx->pc = 0x2f3d24u;
    // NOP
    // 0x2f3d28: 0x0  nop
    ctx->pc = 0x2f3d28u;
    // NOP
    // 0x2f3d2c: 0x0  nop
    ctx->pc = 0x2f3d2cu;
    // NOP
}
