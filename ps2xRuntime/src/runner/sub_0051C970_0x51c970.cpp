#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C970
// Address: 0x51c970 - 0x51c990
void sub_0051C970_0x51c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C970_0x51c970");
#endif

    ctx->pc = 0x51c970u;

    // 0x51c970: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x51c970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x51c974: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x51c974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c978: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x51c978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x51c97c: 0x3e00008  jr          $ra
    ctx->pc = 0x51C97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C97Cu;
            // 0x51c980: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C984u;
    // 0x51c984: 0x0  nop
    ctx->pc = 0x51c984u;
    // NOP
    // 0x51c988: 0x0  nop
    ctx->pc = 0x51c988u;
    // NOP
    // 0x51c98c: 0x0  nop
    ctx->pc = 0x51c98cu;
    // NOP
}
