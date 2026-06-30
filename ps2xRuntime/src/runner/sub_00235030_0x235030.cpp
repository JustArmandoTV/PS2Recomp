#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00235030
// Address: 0x235030 - 0x235050
void sub_00235030_0x235030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235030_0x235030");
#endif

    ctx->pc = 0x235030u;

    // 0x235030: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x235030u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x235034: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x235034u;
    {
        const bool branch_taken_0x235034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x235034) {
            ctx->pc = 0x235048u;
            goto label_235048;
        }
    }
    ctx->pc = 0x23503Cu;
    // 0x23503c: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23503cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x235040: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x235040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x235044: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x235044u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_235048:
    // 0x235048: 0x3e00008  jr          $ra
    ctx->pc = 0x235048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x235050u;
}
