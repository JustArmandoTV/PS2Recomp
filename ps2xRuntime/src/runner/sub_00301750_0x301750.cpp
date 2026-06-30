#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00301750
// Address: 0x301750 - 0x301770
void sub_00301750_0x301750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301750_0x301750");
#endif

    ctx->pc = 0x301750u;

    // 0x301750: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x301750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301754: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x301754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301758: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x301758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x30175c: 0x80c6250  j           func_318940
    ctx->pc = 0x30175Cu;
    ctx->pc = 0x301760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30175Cu;
            // 0x301760: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00318940_0x318940(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x301764u;
    // 0x301764: 0x0  nop
    ctx->pc = 0x301764u;
    // NOP
    // 0x301768: 0x0  nop
    ctx->pc = 0x301768u;
    // NOP
    // 0x30176c: 0x0  nop
    ctx->pc = 0x30176cu;
    // NOP
}
