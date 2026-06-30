#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00412280
// Address: 0x412280 - 0x412290
void sub_00412280_0x412280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412280_0x412280");
#endif

    ctx->pc = 0x412280u;

    // 0x412280: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x412280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x412284: 0x3e00008  jr          $ra
    ctx->pc = 0x412284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412284u;
            // 0x412288: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41228Cu;
    // 0x41228c: 0x0  nop
    ctx->pc = 0x41228cu;
    // NOP
}
