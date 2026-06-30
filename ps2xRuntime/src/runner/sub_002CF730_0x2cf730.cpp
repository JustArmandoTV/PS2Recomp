#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CF730
// Address: 0x2cf730 - 0x2cf740
void sub_002CF730_0x2cf730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF730_0x2cf730");
#endif

    ctx->pc = 0x2cf730u;

    // 0x2cf730: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cf730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf734: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cf734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf738: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF738u;
            // 0x2cf73c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF740u;
}
