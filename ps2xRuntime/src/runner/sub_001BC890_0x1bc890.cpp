#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC890
// Address: 0x1bc890 - 0x1bc8a0
void sub_001BC890_0x1bc890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC890_0x1bc890");
#endif

    ctx->pc = 0x1bc890u;

    // 0x1bc890: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc898: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC898u;
            // 0x1bc89c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC8A0u;
}
