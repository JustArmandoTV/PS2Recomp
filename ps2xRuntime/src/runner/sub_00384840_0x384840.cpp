#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384840
// Address: 0x384840 - 0x384860
void sub_00384840_0x384840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384840_0x384840");
#endif

    ctx->pc = 0x384840u;

    // 0x384840: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x384840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x384844: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x384844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x384848: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x384848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x38484c: 0x3e00008  jr          $ra
    ctx->pc = 0x38484Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38484Cu;
            // 0x384850: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384854u;
    // 0x384854: 0x0  nop
    ctx->pc = 0x384854u;
    // NOP
    // 0x384858: 0x0  nop
    ctx->pc = 0x384858u;
    // NOP
    // 0x38485c: 0x0  nop
    ctx->pc = 0x38485cu;
    // NOP
}
