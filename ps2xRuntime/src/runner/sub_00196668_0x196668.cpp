#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196668
// Address: 0x196668 - 0x196690
void sub_00196668_0x196668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196668_0x196668");
#endif

    ctx->pc = 0x196668u;

    // 0x196668: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x196668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x19666c: 0xac44ff34  sw          $a0, -0xCC($v0)
    ctx->pc = 0x19666cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967092), GPR_U32(ctx, 4));
    // 0x196670: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196670u;
    {
        const bool branch_taken_0x196670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x196674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196670u;
            // 0x196674: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196670) {
            ctx->pc = 0x196684u;
            goto label_196684;
        }
    }
    ctx->pc = 0x196678u;
    // 0x196678: 0x8c830188  lw          $v1, 0x188($a0)
    ctx->pc = 0x196678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x19667c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x19667cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x196680: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x196680u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_196684:
    // 0x196684: 0x3e00008  jr          $ra
    ctx->pc = 0x196684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19668Cu;
    // 0x19668c: 0x0  nop
    ctx->pc = 0x19668cu;
    // NOP
}
