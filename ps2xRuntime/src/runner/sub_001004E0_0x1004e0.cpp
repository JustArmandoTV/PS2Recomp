#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001004E0
// Address: 0x1004e0 - 0x100500
void sub_001004E0_0x1004e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001004E0_0x1004e0");
#endif

    ctx->pc = 0x1004e0u;

    // 0x1004e0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1004e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1004e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1004e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1004e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x1004ec: 0x8c647378  lw          $a0, 0x7378($v1)
    ctx->pc = 0x1004ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
    // 0x1004f0: 0x80fe54c  j           func_3F9530
    ctx->pc = 0x1004F0u;
    ctx->pc = 0x1004F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1004F0u;
            // 0x1004f4: 0x8c46b6b0  lw          $a2, -0x4950($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003F9530_0x3f9530(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1004F8u;
    // 0x1004f8: 0x0  nop
    ctx->pc = 0x1004f8u;
    // NOP
    // 0x1004fc: 0x0  nop
    ctx->pc = 0x1004fcu;
    // NOP
}
