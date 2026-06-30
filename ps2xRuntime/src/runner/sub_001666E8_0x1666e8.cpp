#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001666E8
// Address: 0x1666e8 - 0x166718
void sub_001666E8_0x1666e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001666E8_0x1666e8");
#endif

    ctx->pc = 0x1666e8u;

    // 0x1666e8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1666e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1666ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1666ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1666f0: 0x24637250  addiu       $v1, $v1, 0x7250
    ctx->pc = 0x1666f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29264));
    // 0x1666f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1666f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1666f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1666f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1666fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1666fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x166700: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x166700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166704: 0x14850002  bne         $a0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x166704u;
    {
        const bool branch_taken_0x166704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x166708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166704u;
            // 0x166708: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166704) {
            ctx->pc = 0x166710u;
            goto label_166710;
        }
    }
    ctx->pc = 0x16670Cu;
    // 0x16670c: 0xac407248  sw          $zero, 0x7248($v0)
    ctx->pc = 0x16670cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29256), GPR_U32(ctx, 0));
label_166710:
    // 0x166710: 0x3e00008  jr          $ra
    ctx->pc = 0x166710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166718u;
}
