#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B948
// Address: 0x16b948 - 0x16b998
void sub_0016B948_0x16b948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B948_0x16b948");
#endif

    switch (ctx->pc) {
        case 0x16b974u: goto label_16b974;
        case 0x16b97cu: goto label_16b97c;
        case 0x16b984u: goto label_16b984;
        default: break;
    }

    ctx->pc = 0x16b948u;

    // 0x16b948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b94c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b954: 0x805adda  j           func_16B768
    ctx->pc = 0x16B954u;
    ctx->pc = 0x16B958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B954u;
            // 0x16b958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B768u;
    if (runtime->hasFunction(0x16B768u)) {
        auto targetFn = runtime->lookupFunction(0x16B768u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016B768_0x16b768(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16B95Cu;
    // 0x16b95c: 0x0  nop
    ctx->pc = 0x16b95cu;
    // NOP
    // 0x16b960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b96c: 0xc0599de  jal         func_166778
    ctx->pc = 0x16B96Cu;
    SET_GPR_U32(ctx, 31, 0x16B974u);
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B974u; }
        if (ctx->pc != 0x16B974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B974u; }
        if (ctx->pc != 0x16B974u) { return; }
    }
    ctx->pc = 0x16B974u;
label_16b974:
    // 0x16b974: 0xc05ae66  jal         func_16B998
    ctx->pc = 0x16B974u;
    SET_GPR_U32(ctx, 31, 0x16B97Cu);
    ctx->pc = 0x16B998u;
    if (runtime->hasFunction(0x16B998u)) {
        auto targetFn = runtime->lookupFunction(0x16B998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B97Cu; }
        if (ctx->pc != 0x16B97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B998_0x16b998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B97Cu; }
        if (ctx->pc != 0x16B97Cu) { return; }
    }
    ctx->pc = 0x16B97Cu;
label_16b97c:
    // 0x16b97c: 0xc0599e0  jal         func_166780
    ctx->pc = 0x16B97Cu;
    SET_GPR_U32(ctx, 31, 0x16B984u);
    ctx->pc = 0x16B980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B97Cu;
            // 0x16b980: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B984u; }
        if (ctx->pc != 0x16B984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B984u; }
        if (ctx->pc != 0x16B984u) { return; }
    }
    ctx->pc = 0x16B984u;
label_16b984:
    // 0x16b984: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b988: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b98c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b98cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b990: 0x3e00008  jr          $ra
    ctx->pc = 0x16B990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B990u;
            // 0x16b994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B998u;
}
