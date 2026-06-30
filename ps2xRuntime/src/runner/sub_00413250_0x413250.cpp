#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00413250
// Address: 0x413250 - 0x413270
void sub_00413250_0x413250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413250_0x413250");
#endif

    ctx->pc = 0x413250u;

    // 0x413250: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x413250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x413254: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x413254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413258: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x413258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x41325c: 0x3e00008  jr          $ra
    ctx->pc = 0x41325Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41325Cu;
            // 0x413260: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x413264u;
    // 0x413264: 0x0  nop
    ctx->pc = 0x413264u;
    // NOP
    // 0x413268: 0x0  nop
    ctx->pc = 0x413268u;
    // NOP
    // 0x41326c: 0x0  nop
    ctx->pc = 0x41326cu;
    // NOP
}
