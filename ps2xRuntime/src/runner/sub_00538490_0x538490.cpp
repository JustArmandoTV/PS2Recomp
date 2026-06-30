#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00538490
// Address: 0x538490 - 0x5384b0
void sub_00538490_0x538490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00538490_0x538490");
#endif

    ctx->pc = 0x538490u;

    // 0x538490: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x538490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x538494: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x538494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x538498: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x538498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x53849c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x53849cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x5384a0: 0x3e00008  jr          $ra
    ctx->pc = 0x5384A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5384A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5384A0u;
            // 0x5384a4: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5384A8u;
    // 0x5384a8: 0x0  nop
    ctx->pc = 0x5384a8u;
    // NOP
    // 0x5384ac: 0x0  nop
    ctx->pc = 0x5384acu;
    // NOP
}
