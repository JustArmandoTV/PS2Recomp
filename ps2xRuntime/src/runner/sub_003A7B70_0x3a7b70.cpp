#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A7B70
// Address: 0x3a7b70 - 0x3a7b90
void sub_003A7B70_0x3a7b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7B70_0x3a7b70");
#endif

    ctx->pc = 0x3a7b70u;

    // 0x3a7b70: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x3a7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3a7b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7b78: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x3a7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x3a7b7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a7b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a7b80: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x3a7b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x3a7b84: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7B84u;
            // 0x3a7b88: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A7B8Cu;
    // 0x3a7b8c: 0x0  nop
    ctx->pc = 0x3a7b8cu;
    // NOP
}
