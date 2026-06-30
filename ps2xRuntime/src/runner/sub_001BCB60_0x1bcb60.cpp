#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCB60
// Address: 0x1bcb60 - 0x1bcb98
void sub_001BCB60_0x1bcb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCB60_0x1bcb60");
#endif

    ctx->pc = 0x1bcb60u;

    // 0x1bcb60: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1bcb60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bcb64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcb68: 0x90c300dc  lbu         $v1, 0xDC($a2)
    ctx->pc = 0x1bcb68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x1bcb6c: 0x90c400dd  lbu         $a0, 0xDD($a2)
    ctx->pc = 0x1bcb6cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 221)));
    // 0x1bcb70: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bcb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcb74: 0x90c700de  lbu         $a3, 0xDE($a2)
    ctx->pc = 0x1bcb74u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 222)));
    // 0x1bcb78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bcb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bcb7c: 0x90c800df  lbu         $t0, 0xDF($a2)
    ctx->pc = 0x1bcb7cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 223)));
    // 0x1bcb80: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1bcb80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcb84: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bcb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bcb88: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1bcb88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bcb8c: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1bcb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1bcb90: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCB90u;
            // 0x1bcb94: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCB98u;
}
