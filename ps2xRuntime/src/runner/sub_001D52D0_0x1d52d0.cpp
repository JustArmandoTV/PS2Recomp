#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D52D0
// Address: 0x1d52d0 - 0x1d52f0
void sub_001D52D0_0x1d52d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D52D0_0x1d52d0");
#endif

    ctx->pc = 0x1d52d0u;

    // 0x1d52d0: 0x8c8200fc  lw          $v0, 0xFC($a0)
    ctx->pc = 0x1d52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x1d52d4: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1d52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1d52d8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D52D8u;
    {
        const bool branch_taken_0x1d52d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d52d8) {
            ctx->pc = 0x1D52DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D52D8u;
            // 0x1d52dc: 0x24820054  addiu       $v0, $a0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D52E4u;
            goto label_1d52e4;
        }
    }
    ctx->pc = 0x1D52E0u;
    // 0x1d52e0: 0x248200a8  addiu       $v0, $a0, 0xA8
    ctx->pc = 0x1d52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
label_1d52e4:
    // 0x1d52e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D52E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D52ECu;
    // 0x1d52ec: 0x0  nop
    ctx->pc = 0x1d52ecu;
    // NOP
}
