#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF780
// Address: 0x1af780 - 0x1af7a0
void sub_001AF780_0x1af780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF780_0x1af780");
#endif

    ctx->pc = 0x1af780u;

    // 0x1af780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af784: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1af784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af78c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1af78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1af790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af794: 0x806419c  j           func_190670
    ctx->pc = 0x1AF794u;
    ctx->pc = 0x1AF798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF794u;
            // 0x1af798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190670u;
    if (runtime->hasFunction(0x190670u)) {
        auto targetFn = runtime->lookupFunction(0x190670u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00190670_0x190670(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AF79Cu;
    // 0x1af79c: 0x0  nop
    ctx->pc = 0x1af79cu;
    // NOP
}
