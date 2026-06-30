#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8C40
// Address: 0x1d8c40 - 0x1d8c70
void sub_001D8C40_0x1d8c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8C40_0x1d8c40");
#endif

    ctx->pc = 0x1d8c40u;

    // 0x1d8c40: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8C40u;
    {
        const bool branch_taken_0x1d8c40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C40u;
            // 0x1d8c44: 0x8c841144  lw          $a0, 0x1144($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c40) {
            ctx->pc = 0x1D8C54u;
            goto label_1d8c54;
        }
    }
    ctx->pc = 0x1D8C48u;
    // 0x1d8c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8c4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8C4Cu;
    {
        const bool branch_taken_0x1d8c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C4Cu;
            // 0x1d8c50: 0xa083005c  sb          $v1, 0x5C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c4c) {
            ctx->pc = 0x1D8C5Cu;
            goto label_1d8c5c;
        }
    }
    ctx->pc = 0x1D8C54u;
label_1d8c54:
    // 0x1d8c54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8c58: 0xa083005c  sb          $v1, 0x5C($a0)
    ctx->pc = 0x1d8c58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 3));
label_1d8c5c:
    // 0x1d8c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8C64u;
    // 0x1d8c64: 0x0  nop
    ctx->pc = 0x1d8c64u;
    // NOP
    // 0x1d8c68: 0x0  nop
    ctx->pc = 0x1d8c68u;
    // NOP
    // 0x1d8c6c: 0x0  nop
    ctx->pc = 0x1d8c6cu;
    // NOP
}
