#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CDAE0
// Address: 0x2cdae0 - 0x2cdaf0
void sub_002CDAE0_0x2cdae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDAE0_0x2cdae0");
#endif

    ctx->pc = 0x2cdae0u;

    // 0x2cdae0: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x2cdae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x2cdae4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDAE4u;
            // 0x2cdae8: 0xac860028  sw          $a2, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDAECu;
    // 0x2cdaec: 0x0  nop
    ctx->pc = 0x2cdaecu;
    // NOP
}
