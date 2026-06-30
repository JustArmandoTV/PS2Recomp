#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175700
// Address: 0x175700 - 0x175740
void sub_00175700_0x175700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175700_0x175700");
#endif

    switch (ctx->pc) {
        case 0x17571cu: goto label_17571c;
        case 0x175728u: goto label_175728;
        default: break;
    }

    ctx->pc = 0x175700u;

    // 0x175700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17570c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17570cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175710: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175714: 0xc0599de  jal         func_166778
    ctx->pc = 0x175714u;
    SET_GPR_U32(ctx, 31, 0x17571Cu);
    ctx->pc = 0x175718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175714u;
            // 0x175718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17571Cu; }
        if (ctx->pc != 0x17571Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17571Cu; }
        if (ctx->pc != 0x17571Cu) { return; }
    }
    ctx->pc = 0x17571Cu;
label_17571c:
    // 0x17571c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17571cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175720: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x175720u;
    SET_GPR_U32(ctx, 31, 0x175728u);
    ctx->pc = 0x175724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175720u;
            // 0x175724: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175728u; }
        if (ctx->pc != 0x175728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175740_0x175740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175728u; }
        if (ctx->pc != 0x175728u) { return; }
    }
    ctx->pc = 0x175728u;
label_175728:
    // 0x175728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17572c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17572cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175734: 0x80599e0  j           func_166780
    ctx->pc = 0x175734u;
    ctx->pc = 0x175738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175734u;
            // 0x175738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17573Cu;
    // 0x17573c: 0x0  nop
    ctx->pc = 0x17573cu;
    // NOP
}
