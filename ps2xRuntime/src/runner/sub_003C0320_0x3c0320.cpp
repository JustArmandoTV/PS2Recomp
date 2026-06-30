#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C0320
// Address: 0x3c0320 - 0x3c0330
void sub_003C0320_0x3c0320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0320_0x3c0320");
#endif

    ctx->pc = 0x3c0320u;

    // 0x3c0320: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0320u;
            // 0x3c0324: 0x8c8200c8  lw          $v0, 0xC8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C0328u;
    // 0x3c0328: 0x0  nop
    ctx->pc = 0x3c0328u;
    // NOP
    // 0x3c032c: 0x0  nop
    ctx->pc = 0x3c032cu;
    // NOP
}
