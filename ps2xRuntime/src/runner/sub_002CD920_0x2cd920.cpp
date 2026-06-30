#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CD920
// Address: 0x2cd920 - 0x2cd940
void sub_002CD920_0x2cd920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD920_0x2cd920");
#endif

    ctx->pc = 0x2cd920u;

    // 0x2cd920: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2cd920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cd924: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2cd924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd928: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2cd928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cd92c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cd92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd930: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cd930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cd934: 0x80b4904  j           func_2D2410
    ctx->pc = 0x2CD934u;
    ctx->pc = 0x2CD938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD934u;
            // 0x2cd938: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002D2410_0x2d2410(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2CD93Cu;
    // 0x2cd93c: 0x0  nop
    ctx->pc = 0x2cd93cu;
    // NOP
}
