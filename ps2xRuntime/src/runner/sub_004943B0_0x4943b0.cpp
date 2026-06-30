#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004943B0
// Address: 0x4943b0 - 0x4943c0
void sub_004943B0_0x4943b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004943B0_0x4943b0");
#endif

    ctx->pc = 0x4943b0u;

    // 0x4943b0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4943b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4943b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4943B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4943B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4943B4u;
            // 0x4943b8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4943BCu;
    // 0x4943bc: 0x0  nop
    ctx->pc = 0x4943bcu;
    // NOP
}
