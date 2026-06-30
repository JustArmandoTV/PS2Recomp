#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D85D0
// Address: 0x1d85d0 - 0x1d8610
void sub_001D85D0_0x1d85d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D85D0_0x1d85d0");
#endif

    ctx->pc = 0x1d85d0u;

    // 0x1d85d0: 0x8c851148  lw          $a1, 0x1148($a0)
    ctx->pc = 0x1d85d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4424)));
    // 0x1d85d4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D85D4u;
    {
        const bool branch_taken_0x1d85d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d85d4) {
            ctx->pc = 0x1D8600u;
            goto label_1d8600;
        }
    }
    ctx->pc = 0x1D85DCu;
    // 0x1d85dc: 0x8c831144  lw          $v1, 0x1144($a0)
    ctx->pc = 0x1d85dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4420)));
    // 0x1d85e0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D85E0u;
    {
        const bool branch_taken_0x1d85e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d85e0) {
            ctx->pc = 0x1D8600u;
            goto label_1d8600;
        }
    }
    ctx->pc = 0x1D85E8u;
    // 0x1d85e8: 0x9064005c  lbu         $a0, 0x5C($v1)
    ctx->pc = 0x1d85e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1d85ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d85ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d85f0: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D85F0u;
    {
        const bool branch_taken_0x1d85f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d85f0) {
            ctx->pc = 0x1D85F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85F0u;
            // 0x1d85f4: 0xa0a3005c  sb          $v1, 0x5C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 92), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8600u;
            goto label_1d8600;
        }
    }
    ctx->pc = 0x1D85F8u;
    // 0x1d85f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d85f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d85fc: 0xa0a3005c  sb          $v1, 0x5C($a1)
    ctx->pc = 0x1d85fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 92), (uint8_t)GPR_U32(ctx, 3));
label_1d8600:
    // 0x1d8600: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8608u;
    // 0x1d8608: 0x0  nop
    ctx->pc = 0x1d8608u;
    // NOP
    // 0x1d860c: 0x0  nop
    ctx->pc = 0x1d860cu;
    // NOP
}
