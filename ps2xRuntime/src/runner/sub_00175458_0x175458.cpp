#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175458
// Address: 0x175458 - 0x175488
void sub_00175458_0x175458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175458_0x175458");
#endif

    switch (ctx->pc) {
        case 0x17546cu: goto label_17546c;
        case 0x175474u: goto label_175474;
        default: break;
    }

    ctx->pc = 0x175458u;

    // 0x175458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17545c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17545cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175460: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175464: 0xc0599de  jal         func_166778
    ctx->pc = 0x175464u;
    SET_GPR_U32(ctx, 31, 0x17546Cu);
    ctx->pc = 0x175468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175464u;
            // 0x175468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17546Cu; }
        if (ctx->pc != 0x17546Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17546Cu; }
        if (ctx->pc != 0x17546Cu) { return; }
    }
    ctx->pc = 0x17546Cu;
label_17546c:
    // 0x17546c: 0xc05d522  jal         func_175488
    ctx->pc = 0x17546Cu;
    SET_GPR_U32(ctx, 31, 0x175474u);
    ctx->pc = 0x175470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17546Cu;
            // 0x175470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175488u;
    if (runtime->hasFunction(0x175488u)) {
        auto targetFn = runtime->lookupFunction(0x175488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175474u; }
        if (ctx->pc != 0x175474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175488_0x175488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175474u; }
        if (ctx->pc != 0x175474u) { return; }
    }
    ctx->pc = 0x175474u;
label_175474:
    // 0x175474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175478: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x175478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17547c: 0x80599e0  j           func_166780
    ctx->pc = 0x17547Cu;
    ctx->pc = 0x175480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17547Cu;
            // 0x175480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x175484u;
    // 0x175484: 0x0  nop
    ctx->pc = 0x175484u;
    // NOP
}
