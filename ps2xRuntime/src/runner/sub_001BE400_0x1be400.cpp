#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE400
// Address: 0x1be400 - 0x1be410
void sub_001BE400_0x1be400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE400_0x1be400");
#endif

    ctx->pc = 0x1be400u;

    // 0x1be400: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1be400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1be404: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE404u;
            // 0x1be408: 0x2442b548  addiu       $v0, $v0, -0x4AB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE40Cu;
    // 0x1be40c: 0x0  nop
    ctx->pc = 0x1be40cu;
    // NOP
}
