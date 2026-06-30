#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051EFD0
// Address: 0x51efd0 - 0x51eff0
void sub_0051EFD0_0x51efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051EFD0_0x51efd0");
#endif

    ctx->pc = 0x51efd0u;

    // 0x51efd0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x51efd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x51efd4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x51efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x51efd8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x51efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x51efdc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x51efdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x51efe0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x51efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x51efe4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x51efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x51efe8: 0x3e00008  jr          $ra
    ctx->pc = 0x51EFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51EFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51EFE8u;
            // 0x51efec: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51EFF0u;
}
