#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0410
// Address: 0x1b0410 - 0x1b0428
void sub_001B0410_0x1b0410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0410_0x1b0410");
#endif

    ctx->pc = 0x1b0410u;

    // 0x1b0410: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0410u;
    {
        const bool branch_taken_0x1b0410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0410u;
            // 0x1b0414: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0410) {
            ctx->pc = 0x1B041Cu;
            goto label_1b041c;
        }
    }
    ctx->pc = 0x1B0418u;
    // 0x1b0418: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b0418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1b041c:
    // 0x1b041c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B041Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0424u;
    // 0x1b0424: 0x0  nop
    ctx->pc = 0x1b0424u;
    // NOP
}
