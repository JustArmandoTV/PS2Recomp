#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166718
// Address: 0x166718 - 0x166748
void sub_00166718_0x166718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166718_0x166718");
#endif

    ctx->pc = 0x166718u;

    // 0x166718: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x166718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16671c: 0x24427250  addiu       $v0, $v0, 0x7250
    ctx->pc = 0x16671cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29264));
    // 0x166720: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x166720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166724: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x166724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x166728: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x166728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16672c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16672cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166730: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x166730u;
    {
        const bool branch_taken_0x166730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x166734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166730u;
            // 0x166734: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166730) {
            ctx->pc = 0x16673Cu;
            goto label_16673c;
        }
    }
    ctx->pc = 0x166738u;
    // 0x166738: 0xac407248  sw          $zero, 0x7248($v0)
    ctx->pc = 0x166738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29256), GPR_U32(ctx, 0));
label_16673c:
    // 0x16673c: 0x3e00008  jr          $ra
    ctx->pc = 0x16673Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166744u;
    // 0x166744: 0x0  nop
    ctx->pc = 0x166744u;
    // NOP
}
