#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170C68
// Address: 0x170c68 - 0x170c80
void sub_00170C68_0x170c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170C68_0x170c68");
#endif

    ctx->pc = 0x170c68u;

    // 0x170c68: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x170c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x170c6c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x170C6Cu;
    {
        const bool branch_taken_0x170c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170C6Cu;
            // 0x170c70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c6c) {
            ctx->pc = 0x170C78u;
            goto label_170c78;
        }
    }
    ctx->pc = 0x170C74u;
    // 0x170c74: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x170c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_170c78:
    // 0x170c78: 0x3e00008  jr          $ra
    ctx->pc = 0x170C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170C80u;
}
