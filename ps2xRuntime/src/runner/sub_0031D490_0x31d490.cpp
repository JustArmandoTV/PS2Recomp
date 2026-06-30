#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D490
// Address: 0x31d490 - 0x31d4a0
void sub_0031D490_0x31d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D490_0x31d490");
#endif

    ctx->pc = 0x31d490u;

    // 0x31d490: 0x3e00008  jr          $ra
    ctx->pc = 0x31D490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D490u;
            // 0x31d494: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D498u;
    // 0x31d498: 0x0  nop
    ctx->pc = 0x31d498u;
    // NOP
    // 0x31d49c: 0x0  nop
    ctx->pc = 0x31d49cu;
    // NOP
}
