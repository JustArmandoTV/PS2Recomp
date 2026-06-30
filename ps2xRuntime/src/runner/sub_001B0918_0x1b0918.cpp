#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0918
// Address: 0x1b0918 - 0x1b0930
void sub_001B0918_0x1b0918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0918_0x1b0918");
#endif

    ctx->pc = 0x1b0918u;

    // 0x1b0918: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x1b0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1b091c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1b091cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b0920: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x1b0920u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b0924: 0x5180b  movn        $v1, $zero, $a1
    ctx->pc = 0x1b0924u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1b0928: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B092Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0928u;
            // 0x1b092c: 0xac83005c  sw          $v1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0930u;
}
