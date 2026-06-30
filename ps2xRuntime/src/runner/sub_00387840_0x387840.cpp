#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00387840
// Address: 0x387840 - 0x387860
void sub_00387840_0x387840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387840_0x387840");
#endif

    ctx->pc = 0x387840u;

    // 0x387840: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x387840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x387844: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x387844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387848: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x387848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x38784c: 0x3e00008  jr          $ra
    ctx->pc = 0x38784Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38784Cu;
            // 0x387850: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x387854u;
    // 0x387854: 0x0  nop
    ctx->pc = 0x387854u;
    // NOP
    // 0x387858: 0x0  nop
    ctx->pc = 0x387858u;
    // NOP
    // 0x38785c: 0x0  nop
    ctx->pc = 0x38785cu;
    // NOP
}
