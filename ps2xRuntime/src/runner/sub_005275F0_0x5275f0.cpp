#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005275F0
// Address: 0x5275f0 - 0x527610
void sub_005275F0_0x5275f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005275F0_0x5275f0");
#endif

    ctx->pc = 0x5275f0u;

    // 0x5275f0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5275f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x5275f4: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x5275f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
    // 0x5275f8: 0x8c45b5a0  lw          $a1, -0x4A60($v0)
    ctx->pc = 0x5275f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948256)));
    // 0x5275fc: 0x3c060052  lui         $a2, 0x52
    ctx->pc = 0x5275fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)82 << 16));
    // 0x527600: 0x2484ab70  addiu       $a0, $a0, -0x5490
    ctx->pc = 0x527600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945648));
    // 0x527604: 0x24c676b0  addiu       $a2, $a2, 0x76B0
    ctx->pc = 0x527604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30384));
    // 0x527608: 0x80a6ca4  j           func_29B290
    ctx->pc = 0x527608u;
    ctx->pc = 0x52760Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527608u;
            // 0x52760c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B290u;
    {
        auto targetFn = runtime->lookupFunction(0x29B290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x527610u;
}
