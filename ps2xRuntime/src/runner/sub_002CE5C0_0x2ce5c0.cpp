#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE5C0
// Address: 0x2ce5c0 - 0x2ce5d0
void sub_002CE5C0_0x2ce5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE5C0_0x2ce5c0");
#endif

    ctx->pc = 0x2ce5c0u;

    // 0x2ce5c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ce5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ce5c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ce5c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE5C8u;
            // 0x2ce5cc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE5D0u;
}
