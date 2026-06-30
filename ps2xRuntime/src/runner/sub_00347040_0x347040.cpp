#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347040
// Address: 0x347040 - 0x347050
void sub_00347040_0x347040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347040_0x347040");
#endif

    ctx->pc = 0x347040u;

    // 0x347040: 0x3e00008  jr          $ra
    ctx->pc = 0x347040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347040u;
            // 0x347044: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347048u;
    // 0x347048: 0x0  nop
    ctx->pc = 0x347048u;
    // NOP
    // 0x34704c: 0x0  nop
    ctx->pc = 0x34704cu;
    // NOP
}
