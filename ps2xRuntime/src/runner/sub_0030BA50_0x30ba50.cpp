#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030BA50
// Address: 0x30ba50 - 0x30ba70
void sub_0030BA50_0x30ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BA50_0x30ba50");
#endif

    ctx->pc = 0x30ba50u;

    // 0x30ba50: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x30ba50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30ba54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x30ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30ba58: 0xa02827  not         $a1, $a1
    ctx->pc = 0x30ba58u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x30ba5c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x30ba5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x30ba60: 0x3e00008  jr          $ra
    ctx->pc = 0x30BA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA60u;
            // 0x30ba64: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30BA68u;
    // 0x30ba68: 0x0  nop
    ctx->pc = 0x30ba68u;
    // NOP
    // 0x30ba6c: 0x0  nop
    ctx->pc = 0x30ba6cu;
    // NOP
}
