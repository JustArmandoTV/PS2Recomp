#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C82B0
// Address: 0x1c82b0 - 0x1c8310
void sub_001C82B0_0x1c82b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C82B0_0x1c82b0");
#endif

    switch (ctx->pc) {
        case 0x1c82c0u: goto label_1c82c0;
        default: break;
    }

    ctx->pc = 0x1c82b0u;

    // 0x1c82b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1c82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c82b4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1c82b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c82b8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1c82b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c82bc: 0x0  nop
    ctx->pc = 0x1c82bcu;
    // NOP
label_1c82c0:
    // 0x1c82c0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C82C0u;
    {
        const bool branch_taken_0x1c82c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c82c0) {
            ctx->pc = 0x1C82C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82C0u;
            // 0x1c82c4: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C82D4u;
            goto label_1c82d4;
        }
    }
    ctx->pc = 0x1C82C8u;
    // 0x1c82c8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C82C8u;
    {
        const bool branch_taken_0x1c82c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c82c8) {
            ctx->pc = 0x1C82CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82C8u;
            // 0x1c82cc: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C82E0u;
            goto label_1c82e0;
        }
    }
    ctx->pc = 0x1C82D0u;
    // 0x1c82d0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x1c82d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_1c82d4:
    // 0x1c82d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c82d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c82d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C82D8u;
    {
        const bool branch_taken_0x1c82d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82D8u;
            // 0x1c82dc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82d8) {
            ctx->pc = 0x1C8300u;
            goto label_1c8300;
        }
    }
    ctx->pc = 0x1C82E0u;
label_1c82e0:
    // 0x1c82e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c82e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c82e4: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x1c82e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x1c82e8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1c82e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c82ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c82ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c82f0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1c82f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c82f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c82f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c82f8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1c82f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c82fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c82fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c8300:
    // 0x1c8300: 0x1cc0ffef  bgtz        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C8300u;
    {
        const bool branch_taken_0x1c8300 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x1c8300) {
            ctx->pc = 0x1C82C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c82c0;
        }
    }
    ctx->pc = 0x1C8308u;
    // 0x1c8308: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8310u;
}
