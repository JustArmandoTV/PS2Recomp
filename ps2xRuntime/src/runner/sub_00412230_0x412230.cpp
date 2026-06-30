#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00412230
// Address: 0x412230 - 0x412240
void sub_00412230_0x412230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412230_0x412230");
#endif

    ctx->pc = 0x412230u;

    // 0x412230: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x412230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x412234: 0x3e00008  jr          $ra
    ctx->pc = 0x412234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412234u;
            // 0x412238: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41223Cu;
    // 0x41223c: 0x0  nop
    ctx->pc = 0x41223cu;
    // NOP
}
