#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003846F0
// Address: 0x3846f0 - 0x384700
void sub_003846F0_0x3846f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003846F0_0x3846f0");
#endif

    ctx->pc = 0x3846f0u;

    // 0x3846f0: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x3846f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3846f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3846F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3846F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3846F4u;
            // 0x3846f8: 0xa085001c  sb          $a1, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3846FCu;
    // 0x3846fc: 0x0  nop
    ctx->pc = 0x3846fcu;
    // NOP
}
