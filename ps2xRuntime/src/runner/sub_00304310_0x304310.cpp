#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304310
// Address: 0x304310 - 0x304320
void sub_00304310_0x304310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304310_0x304310");
#endif

    ctx->pc = 0x304310u;

    // 0x304310: 0x8c830d9c  lw          $v1, 0xD9C($a0)
    ctx->pc = 0x304310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3484)));
    // 0x304314: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x304314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x304318: 0x3e00008  jr          $ra
    ctx->pc = 0x304318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30431Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304318u;
            // 0x30431c: 0xac830d9c  sw          $v1, 0xD9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304320u;
}
