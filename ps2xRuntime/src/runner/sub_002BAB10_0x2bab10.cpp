#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BAB10
// Address: 0x2bab10 - 0x2bab30
void sub_002BAB10_0x2bab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAB10_0x2bab10");
#endif

    ctx->pc = 0x2bab10u;

    // 0x2bab10: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2bab10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2bab14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bab14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bab18: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2bab18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2bab1c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2bab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2bab20: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2bab20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2bab24: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2bab24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2bab28: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB28u;
            // 0x2bab2c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BAB30u;
}
