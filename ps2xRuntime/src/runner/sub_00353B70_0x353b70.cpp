#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00353B70
// Address: 0x353b70 - 0x353bb0
void sub_00353B70_0x353b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353B70_0x353b70");
#endif

    ctx->pc = 0x353b70u;

    // 0x353b70: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x353b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x353b74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x353b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353b78: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x353b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x353b7c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x353b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x353b80: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x353b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x353b84: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x353b84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x353b88: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x353b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x353b8c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x353b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x353b90: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x353b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x353b94: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x353b94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x353b98: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x353b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x353b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x353B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353B9Cu;
            // 0x353ba0: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x353BA4u;
    // 0x353ba4: 0x0  nop
    ctx->pc = 0x353ba4u;
    // NOP
    // 0x353ba8: 0x0  nop
    ctx->pc = 0x353ba8u;
    // NOP
    // 0x353bac: 0x0  nop
    ctx->pc = 0x353bacu;
    // NOP
}
