#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175058
// Address: 0x175058 - 0x175098
void sub_00175058_0x175058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175058_0x175058");
#endif

    switch (ctx->pc) {
        case 0x175074u: goto label_175074;
        case 0x175080u: goto label_175080;
        default: break;
    }

    ctx->pc = 0x175058u;

    // 0x175058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17505c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17505cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17506c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17506Cu;
    SET_GPR_U32(ctx, 31, 0x175074u);
    ctx->pc = 0x175070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17506Cu;
            // 0x175070: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175074u; }
        if (ctx->pc != 0x175074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175074u; }
        if (ctx->pc != 0x175074u) { return; }
    }
    ctx->pc = 0x175074u;
label_175074:
    // 0x175074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175078: 0xc05d426  jal         func_175098
    ctx->pc = 0x175078u;
    SET_GPR_U32(ctx, 31, 0x175080u);
    ctx->pc = 0x17507Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175078u;
            // 0x17507c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175098u;
    if (runtime->hasFunction(0x175098u)) {
        auto targetFn = runtime->lookupFunction(0x175098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175080u; }
        if (ctx->pc != 0x175080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175098_0x175098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175080u; }
        if (ctx->pc != 0x175080u) { return; }
    }
    ctx->pc = 0x175080u;
label_175080:
    // 0x175080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17508c: 0x80599e0  j           func_166780
    ctx->pc = 0x17508Cu;
    ctx->pc = 0x175090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17508Cu;
            // 0x175090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x175094u;
    // 0x175094: 0x0  nop
    ctx->pc = 0x175094u;
    // NOP
}
