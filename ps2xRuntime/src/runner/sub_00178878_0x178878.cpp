#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178878
// Address: 0x178878 - 0x178888
void sub_00178878_0x178878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178878_0x178878");
#endif

    ctx->pc = 0x178878u;

    // 0x178878: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x178878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x17887c: 0x3e00008  jr          $ra
    ctx->pc = 0x17887Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17887Cu;
            // 0x178880: 0x2442d5d8  addiu       $v0, $v0, -0x2A28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178884u;
    // 0x178884: 0x0  nop
    ctx->pc = 0x178884u;
    // NOP
}
