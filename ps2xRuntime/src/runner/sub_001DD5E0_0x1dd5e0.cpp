#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD5E0
// Address: 0x1dd5e0 - 0x1dd600
void sub_001DD5E0_0x1dd5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD5E0_0x1dd5e0");
#endif

    ctx->pc = 0x1dd5e0u;

    // 0x1dd5e0: 0x908202c5  lbu         $v0, 0x2C5($a0)
    ctx->pc = 0x1dd5e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
    // 0x1dd5e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1dd5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd5e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1dd5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dd5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD5ECu;
            // 0x1dd5f0: 0x24420280  addiu       $v0, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD5F4u;
    // 0x1dd5f4: 0x0  nop
    ctx->pc = 0x1dd5f4u;
    // NOP
    // 0x1dd5f8: 0x0  nop
    ctx->pc = 0x1dd5f8u;
    // NOP
    // 0x1dd5fc: 0x0  nop
    ctx->pc = 0x1dd5fcu;
    // NOP
}
