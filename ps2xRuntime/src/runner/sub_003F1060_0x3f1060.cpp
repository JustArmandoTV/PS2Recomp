#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F1060
// Address: 0x3f1060 - 0x3f1070
void sub_003F1060_0x3f1060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1060_0x3f1060");
#endif

    ctx->pc = 0x3f1060u;

    // 0x3f1060: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3f1060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3f1064: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x3f1064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x3f1068: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F106Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1068u;
            // 0x3f106c: 0xac80004c  sw          $zero, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F1070u;
}
