#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BD610
// Address: 0x2bd610 - 0x2bd620
void sub_002BD610_0x2bd610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD610_0x2bd610");
#endif

    ctx->pc = 0x2bd610u;

    // 0x2bd610: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD610u;
            // 0x2bd614: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BD618u;
    // 0x2bd618: 0x0  nop
    ctx->pc = 0x2bd618u;
    // NOP
    // 0x2bd61c: 0x0  nop
    ctx->pc = 0x2bd61cu;
    // NOP
}
