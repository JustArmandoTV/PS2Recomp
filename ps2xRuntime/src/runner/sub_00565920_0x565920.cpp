#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00565920
// Address: 0x565920 - 0x565930
void sub_00565920_0x565920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00565920_0x565920");
#endif

    ctx->pc = 0x565920u;

    // 0x565920: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x565920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x565924: 0x3e00008  jr          $ra
    ctx->pc = 0x565924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x565928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565924u;
            // 0x565928: 0xac86005c  sw          $a2, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56592Cu;
    // 0x56592c: 0x0  nop
    ctx->pc = 0x56592cu;
    // NOP
}
