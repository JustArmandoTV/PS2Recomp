#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005024C0
// Address: 0x5024c0 - 0x5024d0
void sub_005024C0_0x5024c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005024C0_0x5024c0");
#endif

    ctx->pc = 0x5024c0u;

    // 0x5024c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x5024c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5024c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x5024c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5024c8: 0x3e00008  jr          $ra
    ctx->pc = 0x5024C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5024CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5024C8u;
            // 0x5024cc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5024D0u;
}
