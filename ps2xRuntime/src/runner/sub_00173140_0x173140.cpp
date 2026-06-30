#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173140
// Address: 0x173140 - 0x173170
void sub_00173140_0x173140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173140_0x173140");
#endif

    switch (ctx->pc) {
        case 0x173154u: goto label_173154;
        case 0x17315cu: goto label_17315c;
        default: break;
    }

    ctx->pc = 0x173140u;

    // 0x173140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173144: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173148: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x173148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17314c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17314Cu;
    SET_GPR_U32(ctx, 31, 0x173154u);
    ctx->pc = 0x173150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17314Cu;
            // 0x173150: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173154u; }
        if (ctx->pc != 0x173154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173154u; }
        if (ctx->pc != 0x173154u) { return; }
    }
    ctx->pc = 0x173154u;
label_173154:
    // 0x173154: 0xc05cc5c  jal         func_173170
    ctx->pc = 0x173154u;
    SET_GPR_U32(ctx, 31, 0x17315Cu);
    ctx->pc = 0x173158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173154u;
            // 0x173158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173170u;
    if (runtime->hasFunction(0x173170u)) {
        auto targetFn = runtime->lookupFunction(0x173170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17315Cu; }
        if (ctx->pc != 0x17315Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173170_0x173170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17315Cu; }
        if (ctx->pc != 0x17315Cu) { return; }
    }
    ctx->pc = 0x17315Cu;
label_17315c:
    // 0x17315c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17315cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173160: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173164: 0x80599e0  j           func_166780
    ctx->pc = 0x173164u;
    ctx->pc = 0x173168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173164u;
            // 0x173168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17316Cu;
    // 0x17316c: 0x0  nop
    ctx->pc = 0x17316cu;
    // NOP
}
