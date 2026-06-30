#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C990
// Address: 0x51c990 - 0x51c9b0
void sub_0051C990_0x51c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C990_0x51c990");
#endif

    ctx->pc = 0x51c990u;

    // 0x51c990: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x51c990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x51c994: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x51c994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c998: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x51c998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x51c99c: 0x3e00008  jr          $ra
    ctx->pc = 0x51C99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C99Cu;
            // 0x51c9a0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C9A4u;
    // 0x51c9a4: 0x0  nop
    ctx->pc = 0x51c9a4u;
    // NOP
    // 0x51c9a8: 0x0  nop
    ctx->pc = 0x51c9a8u;
    // NOP
    // 0x51c9ac: 0x0  nop
    ctx->pc = 0x51c9acu;
    // NOP
}
