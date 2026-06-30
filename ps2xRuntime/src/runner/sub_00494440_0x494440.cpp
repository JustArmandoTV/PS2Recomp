#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00494440
// Address: 0x494440 - 0x494460
void sub_00494440_0x494440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494440_0x494440");
#endif

    ctx->pc = 0x494440u;

    // 0x494440: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x494440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x494444: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x494444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494448: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x494448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x49444c: 0x3e00008  jr          $ra
    ctx->pc = 0x49444Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49444Cu;
            // 0x494450: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x494454u;
    // 0x494454: 0x0  nop
    ctx->pc = 0x494454u;
    // NOP
    // 0x494458: 0x0  nop
    ctx->pc = 0x494458u;
    // NOP
    // 0x49445c: 0x0  nop
    ctx->pc = 0x49445cu;
    // NOP
}
