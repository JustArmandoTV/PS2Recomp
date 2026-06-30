#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139B50
// Address: 0x139b50 - 0x139b70
void sub_00139B50_0x139b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139B50_0x139b50");
#endif

    ctx->pc = 0x139b50u;

    // 0x139b50: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x139b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x139b54: 0x8c634fcc  lw          $v1, 0x4FCC($v1)
    ctx->pc = 0x139b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20428)));
    // 0x139b58: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x139B58u;
    {
        const bool branch_taken_0x139b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x139b58) {
            ctx->pc = 0x139B64u;
            goto label_139b64;
        }
    }
    ctx->pc = 0x139B60u;
    // 0x139b60: 0xaf84801c  sw          $a0, -0x7FE4($gp)
    ctx->pc = 0x139b60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 4));
label_139b64:
    // 0x139b64: 0x3e00008  jr          $ra
    ctx->pc = 0x139B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139B6Cu;
    // 0x139b6c: 0x0  nop
    ctx->pc = 0x139b6cu;
    // NOP
}
