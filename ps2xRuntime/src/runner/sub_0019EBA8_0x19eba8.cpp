#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019EBA8
// Address: 0x19eba8 - 0x19ebb8
void sub_0019EBA8_0x19eba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EBA8_0x19eba8");
#endif

    ctx->pc = 0x19eba8u;

    // 0x19eba8: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x19eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x19ebac: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x19ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x19ebb0: 0x3e00008  jr          $ra
    ctx->pc = 0x19EBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBB0u;
            // 0x19ebb4: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EBB8u;
}
