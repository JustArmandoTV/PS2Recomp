#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C3F80
// Address: 0x2c3f80 - 0x2c3fa0
void sub_002C3F80_0x2c3f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3F80_0x2c3f80");
#endif

    ctx->pc = 0x2c3f80u;

    // 0x2c3f80: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c3f80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2c3f84: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c3f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f88: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2c3f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2c3f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3F8Cu;
            // 0x2c3f90: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3F94u;
    // 0x2c3f94: 0x0  nop
    ctx->pc = 0x2c3f94u;
    // NOP
    // 0x2c3f98: 0x0  nop
    ctx->pc = 0x2c3f98u;
    // NOP
    // 0x2c3f9c: 0x0  nop
    ctx->pc = 0x2c3f9cu;
    // NOP
}
