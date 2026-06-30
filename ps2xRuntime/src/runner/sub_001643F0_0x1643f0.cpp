#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001643F0
// Address: 0x1643f0 - 0x164410
void sub_001643F0_0x1643f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001643F0_0x1643f0");
#endif

    ctx->pc = 0x1643f0u;

    // 0x1643f0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1643f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1643f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1643f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1643f8: 0x248461dc  addiu       $a0, $a0, 0x61DC
    ctx->pc = 0x1643f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25052));
    // 0x1643fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1643fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164400: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x164400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x164404: 0x3e00008  jr          $ra
    ctx->pc = 0x164404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164404u;
            // 0x164408: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16440Cu;
    // 0x16440c: 0x0  nop
    ctx->pc = 0x16440cu;
    // NOP
}
