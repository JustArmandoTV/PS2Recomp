#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004943E0
// Address: 0x4943e0 - 0x494400
void sub_004943E0_0x4943e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004943E0_0x4943e0");
#endif

    ctx->pc = 0x4943e0u;

    // 0x4943e0: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x4943e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4943e4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4943e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4943e8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x4943e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4943ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4943ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4943f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4943F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4943F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4943F0u;
            // 0x4943f4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4943F8u;
    // 0x4943f8: 0x0  nop
    ctx->pc = 0x4943f8u;
    // NOP
    // 0x4943fc: 0x0  nop
    ctx->pc = 0x4943fcu;
    // NOP
}
