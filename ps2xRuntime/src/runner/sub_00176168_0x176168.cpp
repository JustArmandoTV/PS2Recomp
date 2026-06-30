#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176168
// Address: 0x176168 - 0x1761a8
void sub_00176168_0x176168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176168_0x176168");
#endif

    switch (ctx->pc) {
        case 0x176184u: goto label_176184;
        case 0x176190u: goto label_176190;
        default: break;
    }

    ctx->pc = 0x176168u;

    // 0x176168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17616c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17616cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176174: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x176178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17617c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17617Cu;
    SET_GPR_U32(ctx, 31, 0x176184u);
    ctx->pc = 0x176180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17617Cu;
            // 0x176180: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176184u; }
        if (ctx->pc != 0x176184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176184u; }
        if (ctx->pc != 0x176184u) { return; }
    }
    ctx->pc = 0x176184u;
label_176184:
    // 0x176184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176188: 0xc05d86a  jal         func_1761A8
    ctx->pc = 0x176188u;
    SET_GPR_U32(ctx, 31, 0x176190u);
    ctx->pc = 0x17618Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176188u;
            // 0x17618c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1761A8u;
    if (runtime->hasFunction(0x1761A8u)) {
        auto targetFn = runtime->lookupFunction(0x1761A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176190u; }
        if (ctx->pc != 0x176190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001761A8_0x1761a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176190u; }
        if (ctx->pc != 0x176190u) { return; }
    }
    ctx->pc = 0x176190u;
label_176190:
    // 0x176190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176194: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17619c: 0x80599e0  j           func_166780
    ctx->pc = 0x17619Cu;
    ctx->pc = 0x1761A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17619Cu;
            // 0x1761a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1761A4u;
    // 0x1761a4: 0x0  nop
    ctx->pc = 0x1761a4u;
    // NOP
}
