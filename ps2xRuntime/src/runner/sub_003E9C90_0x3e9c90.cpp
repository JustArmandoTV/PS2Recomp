#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E9C90
// Address: 0x3e9c90 - 0x3e9cd0
void sub_003E9C90_0x3e9c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9C90_0x3e9c90");
#endif

    ctx->pc = 0x3e9c90u;

    // 0x3e9c90: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x3e9c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3e9c94: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E9C94u;
    {
        const bool branch_taken_0x3e9c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9c94) {
            ctx->pc = 0x3E9C98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9C94u;
            // 0x3e9c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E9CBCu;
            goto label_3e9cbc;
        }
    }
    ctx->pc = 0x3E9C9Cu;
    // 0x3e9c9c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x3e9c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3e9ca0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x3e9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3e9ca4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3e9ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3e9ca8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9CA8u;
    {
        const bool branch_taken_0x3e9ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9ca8) {
            ctx->pc = 0x3E9CB8u;
            goto label_3e9cb8;
        }
    }
    ctx->pc = 0x3E9CB0u;
    // 0x3e9cb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E9CB0u;
    {
        const bool branch_taken_0x3e9cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9CB0u;
            // 0x3e9cb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9cb0) {
            ctx->pc = 0x3E9CBCu;
            goto label_3e9cbc;
        }
    }
    ctx->pc = 0x3E9CB8u;
label_3e9cb8:
    // 0x3e9cb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e9cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9cbc:
    // 0x3e9cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E9CC4u;
    // 0x3e9cc4: 0x0  nop
    ctx->pc = 0x3e9cc4u;
    // NOP
    // 0x3e9cc8: 0x0  nop
    ctx->pc = 0x3e9cc8u;
    // NOP
    // 0x3e9ccc: 0x0  nop
    ctx->pc = 0x3e9cccu;
    // NOP
}
