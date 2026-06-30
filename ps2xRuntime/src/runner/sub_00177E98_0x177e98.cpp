#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177E98
// Address: 0x177e98 - 0x177eb0
void sub_00177E98_0x177e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177E98_0x177e98");
#endif

    ctx->pc = 0x177e98u;

    // 0x177e98: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x177e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x177e9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x177e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177ea0: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x177EA0u;
    {
        const bool branch_taken_0x177ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x177ea0) {
            ctx->pc = 0x177EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177EA0u;
            // 0x177ea4: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177EA8u;
            goto label_177ea8;
        }
    }
    ctx->pc = 0x177EA8u;
label_177ea8:
    // 0x177ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x177EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177EB0u;
}
