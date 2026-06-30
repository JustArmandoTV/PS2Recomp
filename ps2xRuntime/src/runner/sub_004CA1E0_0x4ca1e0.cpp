#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CA1E0
// Address: 0x4ca1e0 - 0x4ca200
void sub_004CA1E0_0x4ca1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA1E0_0x4ca1e0");
#endif

    ctx->pc = 0x4ca1e0u;

    // 0x4ca1e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ca1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4ca1e4: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4ca1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
    // 0x4ca1e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ca1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4ca1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4CA1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA1ECu;
            // 0x4ca1f0: 0xac60e3c0  sw          $zero, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CA1F4u;
    // 0x4ca1f4: 0x0  nop
    ctx->pc = 0x4ca1f4u;
    // NOP
    // 0x4ca1f8: 0x0  nop
    ctx->pc = 0x4ca1f8u;
    // NOP
    // 0x4ca1fc: 0x0  nop
    ctx->pc = 0x4ca1fcu;
    // NOP
}
