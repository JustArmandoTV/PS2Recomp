#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015EAD0
// Address: 0x15ead0 - 0x15eae0
void sub_0015EAD0_0x15ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EAD0_0x15ead0");
#endif

    ctx->pc = 0x15ead0u;

    // 0x15ead0: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x15ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x15ead4: 0x3e00008  jr          $ra
    ctx->pc = 0x15EAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EAD4u;
            // 0x15ead8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15EADCu;
    // 0x15eadc: 0x0  nop
    ctx->pc = 0x15eadcu;
    // NOP
}
