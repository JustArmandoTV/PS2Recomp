#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171FA0
// Address: 0x171fa0 - 0x171ff0
void sub_00171FA0_0x171fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171FA0_0x171fa0");
#endif

    switch (ctx->pc) {
        case 0x171fd4u: goto label_171fd4;
        case 0x171fdcu: goto label_171fdc;
        default: break;
    }

    ctx->pc = 0x171fa0u;

    // 0x171fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171fa8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x171fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x171fac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171fb4: 0x805c2f2  j           func_170BC8
    ctx->pc = 0x171FB4u;
    ctx->pc = 0x171FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171FB4u;
            // 0x171fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170BC8u;
    if (runtime->hasFunction(0x170BC8u)) {
        auto targetFn = runtime->lookupFunction(0x170BC8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00170BC8_0x170bc8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x171FBCu;
    // 0x171fbc: 0x0  nop
    ctx->pc = 0x171fbcu;
    // NOP
    // 0x171fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171fc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171fc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171fcc: 0xc0599de  jal         func_166778
    ctx->pc = 0x171FCCu;
    SET_GPR_U32(ctx, 31, 0x171FD4u);
    ctx->pc = 0x171FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171FCCu;
            // 0x171fd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FD4u; }
        if (ctx->pc != 0x171FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FD4u; }
        if (ctx->pc != 0x171FD4u) { return; }
    }
    ctx->pc = 0x171FD4u;
label_171fd4:
    // 0x171fd4: 0xc05c7fc  jal         func_171FF0
    ctx->pc = 0x171FD4u;
    SET_GPR_U32(ctx, 31, 0x171FDCu);
    ctx->pc = 0x171FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171FD4u;
            // 0x171fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171FF0u;
    if (runtime->hasFunction(0x171FF0u)) {
        auto targetFn = runtime->lookupFunction(0x171FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FDCu; }
        if (ctx->pc != 0x171FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171FF0_0x171ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FDCu; }
        if (ctx->pc != 0x171FDCu) { return; }
    }
    ctx->pc = 0x171FDCu;
label_171fdc:
    // 0x171fdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171fe0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171fe4: 0x80599e0  j           func_166780
    ctx->pc = 0x171FE4u;
    ctx->pc = 0x171FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171FE4u;
            // 0x171fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x171FECu;
    // 0x171fec: 0x0  nop
    ctx->pc = 0x171fecu;
    // NOP
}
