#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481480
// Address: 0x481480 - 0x4814a0
void sub_00481480_0x481480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481480_0x481480");
#endif

    ctx->pc = 0x481480u;

    // 0x481480: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x481480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x481484: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x481484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x481488: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x481488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x48148c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x48148cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x481490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x481490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x481494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x481494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x481498: 0x3e00008  jr          $ra
    ctx->pc = 0x481498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48149Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481498u;
            // 0x48149c: 0xac670208  sw          $a3, 0x208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 520), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4814A0u;
}
