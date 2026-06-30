#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00494430
// Address: 0x494430 - 0x494440
void sub_00494430_0x494430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494430_0x494430");
#endif

    ctx->pc = 0x494430u;

    // 0x494430: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x494430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x494434: 0x3e00008  jr          $ra
    ctx->pc = 0x494434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494434u;
            // 0x494438: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49443Cu;
    // 0x49443c: 0x0  nop
    ctx->pc = 0x49443cu;
    // NOP
}
