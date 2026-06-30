#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00376250
// Address: 0x376250 - 0x376260
void sub_00376250_0x376250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376250_0x376250");
#endif

    ctx->pc = 0x376250u;

    // 0x376250: 0x3e00008  jr          $ra
    ctx->pc = 0x376250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376250u;
            // 0x376254: 0xac8500e0  sw          $a1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x376258u;
    // 0x376258: 0x0  nop
    ctx->pc = 0x376258u;
    // NOP
    // 0x37625c: 0x0  nop
    ctx->pc = 0x37625cu;
    // NOP
}
