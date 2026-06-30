#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005004E0
// Address: 0x5004e0 - 0x500500
void sub_005004E0_0x5004e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005004E0_0x5004e0");
#endif

    ctx->pc = 0x5004e0u;

    // 0x5004e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x5004e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5004e4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x5004e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5004e8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x5004e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x5004ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x5004ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x5004f0: 0x3e00008  jr          $ra
    ctx->pc = 0x5004F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5004F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5004F0u;
            // 0x5004f4: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5004F8u;
    // 0x5004f8: 0x0  nop
    ctx->pc = 0x5004f8u;
    // NOP
    // 0x5004fc: 0x0  nop
    ctx->pc = 0x5004fcu;
    // NOP
}
