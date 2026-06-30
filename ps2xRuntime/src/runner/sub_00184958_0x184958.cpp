#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184958
// Address: 0x184958 - 0x184970
void sub_00184958_0x184958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184958_0x184958");
#endif

    ctx->pc = 0x184958u;

    // 0x184958: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x184958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x18495c: 0x24630248  addiu       $v1, $v1, 0x248
    ctx->pc = 0x18495cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 584));
    // 0x184960: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x184960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184964: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x184964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x184968: 0x3e00008  jr          $ra
    ctx->pc = 0x184968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18496Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184968u;
            // 0x18496c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184970u;
}
