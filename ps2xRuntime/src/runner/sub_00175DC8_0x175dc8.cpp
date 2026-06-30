#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175DC8
// Address: 0x175dc8 - 0x175e00
void sub_00175DC8_0x175dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175DC8_0x175dc8");
#endif

    switch (ctx->pc) {
        case 0x175ddcu: goto label_175ddc;
        case 0x175de4u: goto label_175de4;
        case 0x175decu: goto label_175dec;
        default: break;
    }

    ctx->pc = 0x175dc8u;

    // 0x175dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175dd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175dd4: 0xc0599de  jal         func_166778
    ctx->pc = 0x175DD4u;
    SET_GPR_U32(ctx, 31, 0x175DDCu);
    ctx->pc = 0x175DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175DD4u;
            // 0x175dd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DDCu; }
        if (ctx->pc != 0x175DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DDCu; }
        if (ctx->pc != 0x175DDCu) { return; }
    }
    ctx->pc = 0x175DDCu;
label_175ddc:
    // 0x175ddc: 0xc05d780  jal         func_175E00
    ctx->pc = 0x175DDCu;
    SET_GPR_U32(ctx, 31, 0x175DE4u);
    ctx->pc = 0x175DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175DDCu;
            // 0x175de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175E00u;
    if (runtime->hasFunction(0x175E00u)) {
        auto targetFn = runtime->lookupFunction(0x175E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DE4u; }
        if (ctx->pc != 0x175DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175E00_0x175e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DE4u; }
        if (ctx->pc != 0x175DE4u) { return; }
    }
    ctx->pc = 0x175DE4u;
label_175de4:
    // 0x175de4: 0xc0599e0  jal         func_166780
    ctx->pc = 0x175DE4u;
    SET_GPR_U32(ctx, 31, 0x175DECu);
    ctx->pc = 0x175DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175DE4u;
            // 0x175de8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DECu; }
        if (ctx->pc != 0x175DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DECu; }
        if (ctx->pc != 0x175DECu) { return; }
    }
    ctx->pc = 0x175DECu;
label_175dec:
    // 0x175dec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x175decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175df0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175df8: 0x3e00008  jr          $ra
    ctx->pc = 0x175DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175DF8u;
            // 0x175dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175E00u;
}
