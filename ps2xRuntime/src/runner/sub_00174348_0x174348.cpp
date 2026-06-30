#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174348
// Address: 0x174348 - 0x174378
void sub_00174348_0x174348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174348_0x174348");
#endif

    switch (ctx->pc) {
        case 0x17435cu: goto label_17435c;
        case 0x174364u: goto label_174364;
        default: break;
    }

    ctx->pc = 0x174348u;

    // 0x174348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17434c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17434cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174350: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x174350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174354: 0xc0599de  jal         func_166778
    ctx->pc = 0x174354u;
    SET_GPR_U32(ctx, 31, 0x17435Cu);
    ctx->pc = 0x174358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174354u;
            // 0x174358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17435Cu; }
        if (ctx->pc != 0x17435Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17435Cu; }
        if (ctx->pc != 0x17435Cu) { return; }
    }
    ctx->pc = 0x17435Cu;
label_17435c:
    // 0x17435c: 0xc05d0de  jal         func_174378
    ctx->pc = 0x17435Cu;
    SET_GPR_U32(ctx, 31, 0x174364u);
    ctx->pc = 0x174360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17435Cu;
            // 0x174360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174378u;
    if (runtime->hasFunction(0x174378u)) {
        auto targetFn = runtime->lookupFunction(0x174378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174364u; }
        if (ctx->pc != 0x174364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174378_0x174378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174364u; }
        if (ctx->pc != 0x174364u) { return; }
    }
    ctx->pc = 0x174364u;
label_174364:
    // 0x174364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174368: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x174368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17436c: 0x80599e0  j           func_166780
    ctx->pc = 0x17436Cu;
    ctx->pc = 0x174370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17436Cu;
            // 0x174370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174374u;
    // 0x174374: 0x0  nop
    ctx->pc = 0x174374u;
    // NOP
}
