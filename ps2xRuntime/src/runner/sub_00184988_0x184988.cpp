#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184988
// Address: 0x184988 - 0x1849f0
void sub_00184988_0x184988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184988_0x184988");
#endif

    switch (ctx->pc) {
        case 0x1849c0u: goto label_1849c0;
        default: break;
    }

    ctx->pc = 0x184988u;

    // 0x184988: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x184988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x18498c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184990: 0x24630258  addiu       $v1, $v1, 0x258
    ctx->pc = 0x184990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 600));
    // 0x184994: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x184994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x184998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18499c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18499cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1849a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1849a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1849a4: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1849A4u;
    {
        const bool branch_taken_0x1849a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1849A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1849A4u;
            // 0x1849a8: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1849a4) {
            ctx->pc = 0x1849B4u;
            goto label_1849b4;
        }
    }
    ctx->pc = 0x1849ACu;
    // 0x1849ac: 0x24420250  addiu       $v0, $v0, 0x250
    ctx->pc = 0x1849acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x1849b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1849b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1849b4:
    // 0x1849b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1849B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1849BCu;
    // 0x1849bc: 0x0  nop
    ctx->pc = 0x1849bcu;
    // NOP
label_1849c0:
    // 0x1849c0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1849c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1849c4: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x1849c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
    // 0x1849c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1849c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1849cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1849ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1849d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1849d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1849d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1849d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1849d8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1849D8u;
    {
        const bool branch_taken_0x1849d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1849DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1849D8u;
            // 0x1849dc: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1849d8) {
            ctx->pc = 0x1849E8u;
            goto label_1849e8;
        }
    }
    ctx->pc = 0x1849E0u;
    // 0x1849e0: 0x24420250  addiu       $v0, $v0, 0x250
    ctx->pc = 0x1849e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x1849e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1849e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1849e8:
    // 0x1849e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1849E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1849F0u;
}
