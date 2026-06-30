#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053D920
// Address: 0x53d920 - 0x53d930
void sub_0053D920_0x53d920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053D920_0x53d920");
#endif

    ctx->pc = 0x53d920u;

    // 0x53d920: 0x3e00008  jr          $ra
    ctx->pc = 0x53D920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53D924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D920u;
            // 0x53d924: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53D928u;
    // 0x53d928: 0x0  nop
    ctx->pc = 0x53d928u;
    // NOP
    // 0x53d92c: 0x0  nop
    ctx->pc = 0x53d92cu;
    // NOP
}
