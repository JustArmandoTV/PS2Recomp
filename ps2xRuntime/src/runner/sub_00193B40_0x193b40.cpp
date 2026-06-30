#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193B40
// Address: 0x193b40 - 0x193b58
void sub_00193B40_0x193b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193B40_0x193b40");
#endif

    ctx->pc = 0x193b40u;

    // 0x193b40: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x193b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x193b44: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x193b44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x193b48: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x193b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x193b4c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x193b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x193b50: 0x3e00008  jr          $ra
    ctx->pc = 0x193B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193B50u;
            // 0x193b54: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193B58u;
}
