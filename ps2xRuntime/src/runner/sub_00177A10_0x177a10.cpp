#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177A10
// Address: 0x177a10 - 0x177a40
void sub_00177A10_0x177a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177A10_0x177a10");
#endif

    switch (ctx->pc) {
        case 0x177a24u: goto label_177a24;
        case 0x177a2cu: goto label_177a2c;
        default: break;
    }

    ctx->pc = 0x177a10u;

    // 0x177a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177a18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x177a1c: 0xc0599de  jal         func_166778
    ctx->pc = 0x177A1Cu;
    SET_GPR_U32(ctx, 31, 0x177A24u);
    ctx->pc = 0x177A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A1Cu;
            // 0x177a20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A24u; }
        if (ctx->pc != 0x177A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A24u; }
        if (ctx->pc != 0x177A24u) { return; }
    }
    ctx->pc = 0x177A24u;
label_177a24:
    // 0x177a24: 0xc05de90  jal         func_177A40
    ctx->pc = 0x177A24u;
    SET_GPR_U32(ctx, 31, 0x177A2Cu);
    ctx->pc = 0x177A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A24u;
            // 0x177a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177A40u;
    if (runtime->hasFunction(0x177A40u)) {
        auto targetFn = runtime->lookupFunction(0x177A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A2Cu; }
        if (ctx->pc != 0x177A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177A40_0x177a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A2Cu; }
        if (ctx->pc != 0x177A2Cu) { return; }
    }
    ctx->pc = 0x177A2Cu;
label_177a2c:
    // 0x177a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177a30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177a34: 0x80599e0  j           func_166780
    ctx->pc = 0x177A34u;
    ctx->pc = 0x177A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A34u;
            // 0x177a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x177A3Cu;
    // 0x177a3c: 0x0  nop
    ctx->pc = 0x177a3cu;
    // NOP
}
