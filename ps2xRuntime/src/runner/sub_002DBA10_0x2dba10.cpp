#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DBA10
// Address: 0x2dba10 - 0x2dba20
void sub_002DBA10_0x2dba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBA10_0x2dba10");
#endif

    ctx->pc = 0x2dba10u;

    // 0x2dba10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dba10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2dba14: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBA14u;
            // 0x2dba18: 0x8c42e3e0  lw          $v0, -0x1C20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DBA1Cu;
    // 0x2dba1c: 0x0  nop
    ctx->pc = 0x2dba1cu;
    // NOP
}
