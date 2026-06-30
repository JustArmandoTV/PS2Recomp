#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1C60
// Address: 0x2c1c60 - 0x2c1c80
void sub_002C1C60_0x2c1c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1C60_0x2c1c60");
#endif

    ctx->pc = 0x2c1c60u;

    // 0x2c1c60: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c1c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2c1c64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c1c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1c68: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2c1c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2c1c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C6Cu;
            // 0x2c1c70: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1C74u;
    // 0x2c1c74: 0x0  nop
    ctx->pc = 0x2c1c74u;
    // NOP
    // 0x2c1c78: 0x0  nop
    ctx->pc = 0x2c1c78u;
    // NOP
    // 0x2c1c7c: 0x0  nop
    ctx->pc = 0x2c1c7cu;
    // NOP
}
