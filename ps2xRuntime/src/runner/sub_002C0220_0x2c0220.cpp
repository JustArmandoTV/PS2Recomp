#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0220
// Address: 0x2c0220 - 0x2c0240
void sub_002C0220_0x2c0220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0220_0x2c0220");
#endif

    ctx->pc = 0x2c0220u;

    // 0x2c0220: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c0220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2c0224: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c0224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0228: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2c0228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2c022c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C022Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C022Cu;
            // 0x2c0230: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0234u;
    // 0x2c0234: 0x0  nop
    ctx->pc = 0x2c0234u;
    // NOP
    // 0x2c0238: 0x0  nop
    ctx->pc = 0x2c0238u;
    // NOP
    // 0x2c023c: 0x0  nop
    ctx->pc = 0x2c023cu;
    // NOP
}
