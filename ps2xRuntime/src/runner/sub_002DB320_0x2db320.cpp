#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB320
// Address: 0x2db320 - 0x2db340
void sub_002DB320_0x2db320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB320_0x2db320");
#endif

    ctx->pc = 0x2db320u;

    // 0x2db320: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x2db320u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
    // 0x2db324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db328: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2db328u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db32c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2db32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2db330: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2db330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2db334: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB334u;
            // 0x2db338: 0x24420280  addiu       $v0, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB33Cu;
    // 0x2db33c: 0x0  nop
    ctx->pc = 0x2db33cu;
    // NOP
}
