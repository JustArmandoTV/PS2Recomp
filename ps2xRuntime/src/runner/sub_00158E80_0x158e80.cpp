#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00158E80
// Address: 0x158e80 - 0x158ed0
void sub_00158E80_0x158e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158E80_0x158e80");
#endif

    switch (ctx->pc) {
        case 0x158e90u: goto label_158e90;
        default: break;
    }

    ctx->pc = 0x158e80u;

    // 0x158e80: 0x3c07006d  lui         $a3, 0x6D
    ctx->pc = 0x158e80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)109 << 16));
    // 0x158e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e88: 0x24e7cc30  addiu       $a3, $a3, -0x33D0
    ctx->pc = 0x158e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954032));
    // 0x158e8c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x158e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_158e90:
    // 0x158e90: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x158e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x158e94: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x158E94u;
    {
        const bool branch_taken_0x158e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158e94) {
            ctx->pc = 0x158EA8u;
            goto label_158ea8;
        }
    }
    ctx->pc = 0x158E9Cu;
    // 0x158e9c: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x158e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x158ea0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x158ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x158ea4: 0x0  nop
    ctx->pc = 0x158ea4u;
    // NOP
label_158ea8:
    // 0x158ea8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x158ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158eac: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x158EACu;
    {
        const bool branch_taken_0x158eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158eac) {
            ctx->pc = 0x158EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158EACu;
            // 0x158eb0: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158E90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158e90;
        }
    }
    ctx->pc = 0x158EB4u;
    // 0x158eb4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x158eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x158eb8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x158eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x158ebc: 0x8c63cc38  lw          $v1, -0x33C8($v1)
    ctx->pc = 0x158ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954040)));
    // 0x158ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x158EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158EC0u;
            // 0x158ec4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158EC8u;
    // 0x158ec8: 0x0  nop
    ctx->pc = 0x158ec8u;
    // NOP
    // 0x158ecc: 0x0  nop
    ctx->pc = 0x158eccu;
    // NOP
}
