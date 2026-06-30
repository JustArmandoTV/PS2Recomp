#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D500
// Address: 0x15d500 - 0x15d520
void sub_0015D500_0x15d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D500_0x15d500");
#endif

    ctx->pc = 0x15d500u;

    // 0x15d500: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x15d500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15d504: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15d504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15d508: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x15d508u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x15d50c: 0x3e00008  jr          $ra
    ctx->pc = 0x15D50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D50Cu;
            // 0x15d510: 0xfc670010  sd          $a3, 0x10($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D514u;
    // 0x15d514: 0x0  nop
    ctx->pc = 0x15d514u;
    // NOP
    // 0x15d518: 0x0  nop
    ctx->pc = 0x15d518u;
    // NOP
    // 0x15d51c: 0x0  nop
    ctx->pc = 0x15d51cu;
    // NOP
}
