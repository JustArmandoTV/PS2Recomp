#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C3640
// Address: 0x2c3640 - 0x2c3650
void sub_002C3640_0x2c3640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3640_0x2c3640");
#endif

    ctx->pc = 0x2c3640u;

    // 0x2c3640: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3640u;
            // 0x2c3644: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3648u;
    // 0x2c3648: 0x0  nop
    ctx->pc = 0x2c3648u;
    // NOP
    // 0x2c364c: 0x0  nop
    ctx->pc = 0x2c364cu;
    // NOP
}
