#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ECE10
// Address: 0x4ece10 - 0x4ece20
void sub_004ECE10_0x4ece10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECE10_0x4ece10");
#endif

    ctx->pc = 0x4ece10u;

    // 0x4ece10: 0x3e00008  jr          $ra
    ctx->pc = 0x4ECE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ECE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECE10u;
            // 0x4ece14: 0xac8501c4  sw          $a1, 0x1C4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 452), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ECE18u;
    // 0x4ece18: 0x0  nop
    ctx->pc = 0x4ece18u;
    // NOP
    // 0x4ece1c: 0x0  nop
    ctx->pc = 0x4ece1cu;
    // NOP
}
