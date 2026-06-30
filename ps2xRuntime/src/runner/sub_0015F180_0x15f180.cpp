#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015F180
// Address: 0x15f180 - 0x15f1a0
void sub_0015F180_0x15f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F180_0x15f180");
#endif

    ctx->pc = 0x15f180u;

    // 0x15f180: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15f180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15f184: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15f184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15f188: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15f188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15f18c: 0x3e00008  jr          $ra
    ctx->pc = 0x15F18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F18Cu;
            // 0x15f190: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F194u;
    // 0x15f194: 0x0  nop
    ctx->pc = 0x15f194u;
    // NOP
    // 0x15f198: 0x0  nop
    ctx->pc = 0x15f198u;
    // NOP
    // 0x15f19c: 0x0  nop
    ctx->pc = 0x15f19cu;
    // NOP
}
