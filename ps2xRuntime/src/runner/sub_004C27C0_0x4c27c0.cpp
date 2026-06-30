#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C27C0
// Address: 0x4c27c0 - 0x4c27e0
void sub_004C27C0_0x4c27c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C27C0_0x4c27c0");
#endif

    ctx->pc = 0x4c27c0u;

    // 0x4c27c0: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x4c27c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x4c27c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c27c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c27c8: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x4c27c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x4c27cc: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x4c27ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x4c27d0: 0x804a576  j           func_1295D8
    ctx->pc = 0x4C27D0u;
    ctx->pc = 0x4C27D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C27D0u;
            // 0x4c27d4: 0xac8000c0  sw          $zero, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4C27D8u;
    // 0x4c27d8: 0x0  nop
    ctx->pc = 0x4c27d8u;
    // NOP
    // 0x4c27dc: 0x0  nop
    ctx->pc = 0x4c27dcu;
    // NOP
}
