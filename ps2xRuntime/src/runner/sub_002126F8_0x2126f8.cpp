#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002126F8
// Address: 0x2126f8 - 0x212708
void sub_002126F8_0x2126f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002126F8_0x2126f8");
#endif

    ctx->pc = 0x2126f8u;

    // 0x2126f8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2126f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2126fc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2126fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x212700: 0x3e00008  jr          $ra
    ctx->pc = 0x212700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212700u;
            // 0x212704: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212708u;
}
