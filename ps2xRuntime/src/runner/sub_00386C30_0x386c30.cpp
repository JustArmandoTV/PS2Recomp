#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00386C30
// Address: 0x386c30 - 0x386c70
void sub_00386C30_0x386c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386C30_0x386c30");
#endif

    ctx->pc = 0x386c30u;

    // 0x386c30: 0x8c88002c  lw          $t0, 0x2C($a0)
    ctx->pc = 0x386c30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x386c34: 0xc03827  not         $a3, $a2
    ctx->pc = 0x386c34u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x386c38: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x386c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x386c3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x386c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x386c40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x386c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386c44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x386c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386c48: 0xe84024  and         $t0, $a3, $t0
    ctx->pc = 0x386c48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x386c4c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x386c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x386c50: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x386c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x386c54: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x386c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x386c58: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x386c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x386c5c: 0x808bff0  j           func_22FFC0
    ctx->pc = 0x386C5Cu;
    ctx->pc = 0x386C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386C5Cu;
            // 0x386c60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x386C64u;
    // 0x386c64: 0x0  nop
    ctx->pc = 0x386c64u;
    // NOP
    // 0x386c68: 0x0  nop
    ctx->pc = 0x386c68u;
    // NOP
    // 0x386c6c: 0x0  nop
    ctx->pc = 0x386c6cu;
    // NOP
}
