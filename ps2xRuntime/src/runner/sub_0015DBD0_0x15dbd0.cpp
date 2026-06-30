#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015DBD0
// Address: 0x15dbd0 - 0x15dbe0
void sub_0015DBD0_0x15dbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DBD0_0x15dbd0");
#endif

    ctx->pc = 0x15dbd0u;

    // 0x15dbd0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x15dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x15dbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x15DBD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DBD4u;
            // 0x15dbd8: 0x8c42d120  lw          $v0, -0x2EE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DBDCu;
    // 0x15dbdc: 0x0  nop
    ctx->pc = 0x15dbdcu;
    // NOP
}
