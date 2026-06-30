#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001643D0
// Address: 0x1643d0 - 0x1643f0
void sub_001643D0_0x1643d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001643D0_0x1643d0");
#endif

    ctx->pc = 0x1643d0u;

    // 0x1643d0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1643d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1643d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1643d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1643d8: 0x248461dc  addiu       $a0, $a0, 0x61DC
    ctx->pc = 0x1643d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25052));
    // 0x1643dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1643dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1643e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1643e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1643e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1643E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1643E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1643E4u;
            // 0x1643e8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1643ECu;
    // 0x1643ec: 0x0  nop
    ctx->pc = 0x1643ecu;
    // NOP
}
