#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192CE0
// Address: 0x192ce0 - 0x192d08
void sub_00192CE0_0x192ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192CE0_0x192ce0");
#endif

    ctx->pc = 0x192ce0u;

    // 0x192ce0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x192ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192ce4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x192ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x192ce8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x192ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x192cec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x192cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x192cf0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x192cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x192cf4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x192cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x192cf8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x192cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x192cfc: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x192cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x192d00: 0x3e00008  jr          $ra
    ctx->pc = 0x192D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192D00u;
            // 0x192d04: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192D08u;
}
