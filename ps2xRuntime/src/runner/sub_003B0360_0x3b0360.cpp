#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B0360
// Address: 0x3b0360 - 0x3b0390
void sub_003B0360_0x3b0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0360_0x3b0360");
#endif

    ctx->pc = 0x3b0360u;

    // 0x3b0360: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x3b0360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3b0364: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3b0364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3b0368: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3b0368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3b036c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3b036cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3b0370: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x3b0370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x3b0374: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x3b0374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x3b0378: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x3b0378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x3b037c: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x3b037cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x3b0380: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x3b0380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x3b0384: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0384u;
            // 0x3b0388: 0xac600040  sw          $zero, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B038Cu;
    // 0x3b038c: 0x0  nop
    ctx->pc = 0x3b038cu;
    // NOP
}
