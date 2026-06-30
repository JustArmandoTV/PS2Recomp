#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D8DA0
// Address: 0x2d8da0 - 0x2d8dd0
void sub_002D8DA0_0x2d8da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8DA0_0x2d8da0");
#endif

    ctx->pc = 0x2d8da0u;

    // 0x2d8da0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2d8da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d8da4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d8da8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2d8da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2d8dac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d8dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d8db0: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2d8db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d8db4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2d8db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x2d8db8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d8db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d8dbc: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8DBCu;
    {
        const bool branch_taken_0x2d8dbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8dbc) {
            ctx->pc = 0x2D8DC8u;
            goto label_2d8dc8;
        }
    }
    ctx->pc = 0x2D8DC4u;
    // 0x2d8dc4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2d8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_2d8dc8:
    // 0x2d8dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8DD0u;
}
