#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00411FD0
// Address: 0x411fd0 - 0x411ff0
void sub_00411FD0_0x411fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411FD0_0x411fd0");
#endif

    ctx->pc = 0x411fd0u;

    // 0x411fd0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x411fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x411fd4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x411fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411fd8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x411fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x411fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x411FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411FDCu;
            // 0x411fe0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x411FE4u;
    // 0x411fe4: 0x0  nop
    ctx->pc = 0x411fe4u;
    // NOP
    // 0x411fe8: 0x0  nop
    ctx->pc = 0x411fe8u;
    // NOP
    // 0x411fec: 0x0  nop
    ctx->pc = 0x411fecu;
    // NOP
}
