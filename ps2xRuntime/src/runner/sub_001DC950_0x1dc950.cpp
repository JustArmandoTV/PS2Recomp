#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC950
// Address: 0x1dc950 - 0x1dc960
void sub_001DC950_0x1dc950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC950_0x1dc950");
#endif

    ctx->pc = 0x1dc950u;

    // 0x1dc950: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC950u;
            // 0x1dc954: 0x908211a0  lbu         $v0, 0x11A0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4512)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC958u;
    // 0x1dc958: 0x0  nop
    ctx->pc = 0x1dc958u;
    // NOP
    // 0x1dc95c: 0x0  nop
    ctx->pc = 0x1dc95cu;
    // NOP
}
