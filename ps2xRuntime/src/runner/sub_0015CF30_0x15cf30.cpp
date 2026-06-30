#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015CF30
// Address: 0x15cf30 - 0x15cf60
void sub_0015CF30_0x15cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CF30_0x15cf30");
#endif

    ctx->pc = 0x15cf30u;

    // 0x15cf30: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15cf30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cf34: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15cf38: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x15cf38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15cf3c: 0x2463ce40  addiu       $v1, $v1, -0x31C0
    ctx->pc = 0x15cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954560));
    // 0x15cf40: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15cf44: 0x240502da  addiu       $a1, $zero, 0x2DA
    ctx->pc = 0x15cf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 730));
    // 0x15cf48: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x15cf48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15cf4c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x15cf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x15cf50: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x15cf50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x15cf54: 0x8056dd0  j           func_15B740
    ctx->pc = 0x15CF54u;
    ctx->pc = 0x15CF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF54u;
            // 0x15cf58: 0x7c620010  sq          $v0, 0x10($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B740u;
    if (runtime->hasFunction(0x15B740u)) {
        auto targetFn = runtime->lookupFunction(0x15B740u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015B740_0x15b740(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15CF5Cu;
    // 0x15cf5c: 0x0  nop
    ctx->pc = 0x15cf5cu;
    // NOP
}
