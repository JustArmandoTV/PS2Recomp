#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ACCB0
// Address: 0x1accb0 - 0x1accd8
void sub_001ACCB0_0x1accb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACCB0_0x1accb0");
#endif

    ctx->pc = 0x1accb0u;

    // 0x1accb0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1accb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1accb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1accb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1accb8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1accb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1accbc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1accbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1accc0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1accc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1accc4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1accc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1accc8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1accc8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1acccc: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1accccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1accd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACCD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACCD0u;
            // 0x1accd4: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ACCD8u;
}
