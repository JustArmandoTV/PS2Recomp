#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00494490
// Address: 0x494490 - 0x4944b0
void sub_00494490_0x494490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494490_0x494490");
#endif

    ctx->pc = 0x494490u;

    // 0x494490: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x494490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x494494: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x494494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x494498: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x494498u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x49449c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x49449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4944a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4944A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4944A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4944A0u;
            // 0x4944a4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4944A8u;
    // 0x4944a8: 0x0  nop
    ctx->pc = 0x4944a8u;
    // NOP
    // 0x4944ac: 0x0  nop
    ctx->pc = 0x4944acu;
    // NOP
}
