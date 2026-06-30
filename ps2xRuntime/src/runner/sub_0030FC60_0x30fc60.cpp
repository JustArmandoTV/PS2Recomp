#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030FC60
// Address: 0x30fc60 - 0x30fc70
void sub_0030FC60_0x30fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FC60_0x30fc60");
#endif

    ctx->pc = 0x30fc60u;

    // 0x30fc60: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x30fc60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x30fc64: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x30fc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30fc68: 0x3e00008  jr          $ra
    ctx->pc = 0x30FC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FC68u;
            // 0x30fc6c: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30FC70u;
}
