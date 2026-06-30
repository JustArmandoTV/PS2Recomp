#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C7E0
// Address: 0x10c7e0 - 0x10c7f0
void sub_0010C7E0_0x10c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C7E0_0x10c7e0");
#endif

    ctx->pc = 0x10c7e0u;

    // 0x10c7e0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x10c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x10c7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x10C7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C7E4u;
            // 0x10c7e8: 0xac40e390  sw          $zero, -0x1C70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C7ECu;
    // 0x10c7ec: 0x0  nop
    ctx->pc = 0x10c7ecu;
    // NOP
}
