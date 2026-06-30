#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00129DA8
// Address: 0x129da8 - 0x129dd8
void sub_00129DA8_0x129da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129DA8_0x129da8");
#endif

    ctx->pc = 0x129da8u;

    // 0x129da8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x129DA8u;
    {
        const bool branch_taken_0x129da8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x129da8) {
            ctx->pc = 0x129DCCu;
            goto label_129dcc;
        }
    }
    ctx->pc = 0x129DB0u;
    // 0x129db0: 0x8caf0004  lw          $t7, 0x4($a1)
    ctx->pc = 0x129db0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x129db4: 0x8c8d004c  lw          $t5, 0x4C($a0)
    ctx->pc = 0x129db4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x129db8: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x129db8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x129dbc: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x129dbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x129dc0: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x129dc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x129dc4: 0xacae0000  sw          $t6, 0x0($a1)
    ctx->pc = 0x129dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
    // 0x129dc8: 0xade50000  sw          $a1, 0x0($t7)
    ctx->pc = 0x129dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 5));
label_129dcc:
    // 0x129dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x129DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x129DD4u;
    // 0x129dd4: 0x0  nop
    ctx->pc = 0x129dd4u;
    // NOP
}
