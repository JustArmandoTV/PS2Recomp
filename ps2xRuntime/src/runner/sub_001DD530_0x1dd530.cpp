#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD530
// Address: 0x1dd530 - 0x1dd540
void sub_001DD530_0x1dd530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD530_0x1dd530");
#endif

    ctx->pc = 0x1dd530u;

    // 0x1dd530: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1dd530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1dd534: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd538: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD538u;
            // 0x1dd53c: 0x9042007d  lbu         $v0, 0x7D($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 125)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD540u;
}
