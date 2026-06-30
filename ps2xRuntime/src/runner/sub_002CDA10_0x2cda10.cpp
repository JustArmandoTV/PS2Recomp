#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CDA10
// Address: 0x2cda10 - 0x2cda30
void sub_002CDA10_0x2cda10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDA10_0x2cda10");
#endif

    ctx->pc = 0x2cda10u;

    // 0x2cda10: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2cda10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2cda14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cda14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda18: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2cda18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2cda1c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2cda1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2cda20: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDA20u;
            // 0x2cda24: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDA28u;
    // 0x2cda28: 0x0  nop
    ctx->pc = 0x2cda28u;
    // NOP
    // 0x2cda2c: 0x0  nop
    ctx->pc = 0x2cda2cu;
    // NOP
}
