#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8E20
// Address: 0x1b8e20 - 0x1b8e40
void sub_001B8E20_0x1b8e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8E20_0x1b8e20");
#endif

    ctx->pc = 0x1b8e20u;

    // 0x1b8e20: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1b8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1b8e24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b8e28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b8e2c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b8e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b8e30: 0x8c821fac  lw          $v0, 0x1FAC($a0)
    ctx->pc = 0x1b8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8108)));
    // 0x1b8e34: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E34u;
            // 0x1b8e38: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8E3Cu;
    // 0x1b8e3c: 0x0  nop
    ctx->pc = 0x1b8e3cu;
    // NOP
}
