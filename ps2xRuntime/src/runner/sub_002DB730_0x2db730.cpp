#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB730
// Address: 0x2db730 - 0x2db740
void sub_002DB730_0x2db730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB730_0x2db730");
#endif

    ctx->pc = 0x2db730u;

    // 0x2db730: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2db730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2db734: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB734u;
            // 0x2db738: 0x8c42e410  lw          $v0, -0x1BF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB73Cu;
    // 0x2db73c: 0x0  nop
    ctx->pc = 0x2db73cu;
    // NOP
}
