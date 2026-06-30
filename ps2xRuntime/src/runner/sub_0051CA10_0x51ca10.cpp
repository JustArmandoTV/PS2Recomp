#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051CA10
// Address: 0x51ca10 - 0x51ca30
void sub_0051CA10_0x51ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051CA10_0x51ca10");
#endif

    ctx->pc = 0x51ca10u;

    // 0x51ca10: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x51ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x51ca14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x51ca14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51ca18: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x51ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x51ca1c: 0x3e00008  jr          $ra
    ctx->pc = 0x51CA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51CA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51CA1Cu;
            // 0x51ca20: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51CA24u;
    // 0x51ca24: 0x0  nop
    ctx->pc = 0x51ca24u;
    // NOP
    // 0x51ca28: 0x0  nop
    ctx->pc = 0x51ca28u;
    // NOP
    // 0x51ca2c: 0x0  nop
    ctx->pc = 0x51ca2cu;
    // NOP
}
