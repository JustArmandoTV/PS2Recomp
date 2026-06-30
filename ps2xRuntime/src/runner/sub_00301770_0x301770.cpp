#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00301770
// Address: 0x301770 - 0x301780
void sub_00301770_0x301770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301770_0x301770");
#endif

    ctx->pc = 0x301770u;

    // 0x301770: 0x3e00008  jr          $ra
    ctx->pc = 0x301770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301770u;
            // 0x301774: 0x24820890  addiu       $v0, $a0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x301778u;
    // 0x301778: 0x0  nop
    ctx->pc = 0x301778u;
    // NOP
    // 0x30177c: 0x0  nop
    ctx->pc = 0x30177cu;
    // NOP
}
