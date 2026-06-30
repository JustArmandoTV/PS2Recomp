#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00382030
// Address: 0x382030 - 0x382070
void sub_00382030_0x382030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382030_0x382030");
#endif

    ctx->pc = 0x382030u;

    // 0x382030: 0x8c88002c  lw          $t0, 0x2C($a0)
    ctx->pc = 0x382030u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x382034: 0xc03827  not         $a3, $a2
    ctx->pc = 0x382034u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x382038: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x382038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x38203c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x382040: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x382040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382044: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x382044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x382048: 0xe84024  and         $t0, $a3, $t0
    ctx->pc = 0x382048u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x38204c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x38204cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x382050: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x382050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x382054: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x382054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x382058: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x382058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x38205c: 0x808bff0  j           func_22FFC0
    ctx->pc = 0x38205Cu;
    ctx->pc = 0x382060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38205Cu;
            // 0x382060: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x382064u;
    // 0x382064: 0x0  nop
    ctx->pc = 0x382064u;
    // NOP
    // 0x382068: 0x0  nop
    ctx->pc = 0x382068u;
    // NOP
    // 0x38206c: 0x0  nop
    ctx->pc = 0x38206cu;
    // NOP
}
