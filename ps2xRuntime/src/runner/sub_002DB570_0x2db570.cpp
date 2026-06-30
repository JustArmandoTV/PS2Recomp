#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB570
// Address: 0x2db570 - 0x2db580
void sub_002DB570_0x2db570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB570_0x2db570");
#endif

    ctx->pc = 0x2db570u;

    // 0x2db570: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB570u;
            // 0x2db574: 0x248202e0  addiu       $v0, $a0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB578u;
    // 0x2db578: 0x0  nop
    ctx->pc = 0x2db578u;
    // NOP
    // 0x2db57c: 0x0  nop
    ctx->pc = 0x2db57cu;
    // NOP
}
