#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044AD10
// Address: 0x44ad10 - 0x44ad40
void sub_0044AD10_0x44ad10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044AD10_0x44ad10");
#endif

    ctx->pc = 0x44ad10u;

    // 0x44ad10: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x44ad10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x44ad14: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x44AD14u;
    {
        const bool branch_taken_0x44ad14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ad14) {
            ctx->pc = 0x44AD18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44AD14u;
            // 0x44ad18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44AD28u;
            goto label_44ad28;
        }
    }
    ctx->pc = 0x44AD1Cu;
    // 0x44ad1c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x44ad20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x44AD20u;
    {
        const bool branch_taken_0x44ad20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44AD20u;
            // 0x44ad24: 0xa0607548  sb          $zero, 0x7548($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 30024), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ad20) {
            ctx->pc = 0x44AD30u;
            goto label_44ad30;
        }
    }
    ctx->pc = 0x44AD28u;
label_44ad28:
    // 0x44ad28: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x44ad2c: 0xa0647548  sb          $a0, 0x7548($v1)
    ctx->pc = 0x44ad2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30024), (uint8_t)GPR_U32(ctx, 4));
label_44ad30:
    // 0x44ad30: 0x3e00008  jr          $ra
    ctx->pc = 0x44AD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44AD38u;
    // 0x44ad38: 0x0  nop
    ctx->pc = 0x44ad38u;
    // NOP
    // 0x44ad3c: 0x0  nop
    ctx->pc = 0x44ad3cu;
    // NOP
}
