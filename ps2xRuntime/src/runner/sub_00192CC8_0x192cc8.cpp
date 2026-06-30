#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192CC8
// Address: 0x192cc8 - 0x192ce0
void sub_00192CC8_0x192cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192CC8_0x192cc8");
#endif

    ctx->pc = 0x192cc8u;

    // 0x192cc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x192cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192ccc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x192cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192cd0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x192cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x192cd4: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x192cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x192cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x192CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192CD8u;
            // 0x192cdc: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192CE0u;
}
