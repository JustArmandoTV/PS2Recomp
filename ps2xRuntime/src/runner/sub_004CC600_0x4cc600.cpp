#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CC600
// Address: 0x4cc600 - 0x4cc620
void sub_004CC600_0x4cc600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CC600_0x4cc600");
#endif

    ctx->pc = 0x4cc600u;

    // 0x4cc600: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4cc600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4cc604: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4cc604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc608: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4cc608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4cc60c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4cc60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cc610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cc610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4cc614: 0x80a997c  j           func_2A65F0
    ctx->pc = 0x4CC614u;
    ctx->pc = 0x4CC618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC614u;
            // 0x4cc618: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4CC61Cu;
    // 0x4cc61c: 0x0  nop
    ctx->pc = 0x4cc61cu;
    // NOP
}
