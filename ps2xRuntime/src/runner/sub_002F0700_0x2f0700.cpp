#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0700
// Address: 0x2f0700 - 0x2f0710
void sub_002F0700_0x2f0700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0700_0x2f0700");
#endif

    ctx->pc = 0x2f0700u;

    // 0x2f0700: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f0700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2f0704: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0704u;
            // 0x2f0708: 0x8c42e3e8  lw          $v0, -0x1C18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F070Cu;
    // 0x2f070c: 0x0  nop
    ctx->pc = 0x2f070cu;
    // NOP
}
