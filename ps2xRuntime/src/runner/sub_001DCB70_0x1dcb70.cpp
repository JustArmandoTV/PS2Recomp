#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCB70
// Address: 0x1dcb70 - 0x1dcba0
void sub_001DCB70_0x1dcb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCB70_0x1dcb70");
#endif

    ctx->pc = 0x1dcb70u;

    // 0x1dcb70: 0x8085010c  lb          $a1, 0x10C($a0)
    ctx->pc = 0x1dcb70u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x1dcb74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dcb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcb78: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dcb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcb7c: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x1dcb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1dcb80: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1dcb80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1dcb84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1dcb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1dcb88: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dcb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dcb8c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1dcb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dcb90: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCB90u;
            // 0x1dcb94: 0xac660080  sw          $a2, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCB98u;
    // 0x1dcb98: 0x0  nop
    ctx->pc = 0x1dcb98u;
    // NOP
    // 0x1dcb9c: 0x0  nop
    ctx->pc = 0x1dcb9cu;
    // NOP
}
