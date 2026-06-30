#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171AA8
// Address: 0x171aa8 - 0x171ac0
void sub_00171AA8_0x171aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171AA8_0x171aa8");
#endif

    ctx->pc = 0x171aa8u;

    // 0x171aa8: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x171aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x171aac: 0x3e00008  jr          $ra
    ctx->pc = 0x171AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171AACu;
            // 0x171ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171AB4u;
    // 0x171ab4: 0x0  nop
    ctx->pc = 0x171ab4u;
    // NOP
    // 0x171ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x171AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171AC0u;
}
