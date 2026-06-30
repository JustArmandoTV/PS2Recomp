#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB978
// Address: 0x1bb978 - 0x1bb990
void sub_001BB978_0x1bb978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB978_0x1bb978");
#endif

    ctx->pc = 0x1bb978u;

    // 0x1bb978: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb97c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb980: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1bb980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1bb984: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB984u;
            // 0x1bb988: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB98Cu;
    // 0x1bb98c: 0x0  nop
    ctx->pc = 0x1bb98cu;
    // NOP
}
