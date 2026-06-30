#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A258
// Address: 0x10a258 - 0x10a270
void sub_0010A258_0x10a258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A258_0x10a258");
#endif

    ctx->pc = 0x10a258u;

    // 0x10a258: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x10a258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x10a25c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x10a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x10a260: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x10a260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x10a264: 0x3e00008  jr          $ra
    ctx->pc = 0x10A264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A264u;
            // 0x10a268: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A26Cu;
    // 0x10a26c: 0x0  nop
    ctx->pc = 0x10a26cu;
    // NOP
}
