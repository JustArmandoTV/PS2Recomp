#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171AC0
// Address: 0x171ac0 - 0x171af8
void sub_00171AC0_0x171ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171AC0_0x171ac0");
#endif

    switch (ctx->pc) {
        case 0x171ad4u: goto label_171ad4;
        case 0x171adcu: goto label_171adc;
        case 0x171ae4u: goto label_171ae4;
        default: break;
    }

    ctx->pc = 0x171ac0u;

    // 0x171ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171ac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171acc: 0xc05c846  jal         func_172118
    ctx->pc = 0x171ACCu;
    SET_GPR_U32(ctx, 31, 0x171AD4u);
    ctx->pc = 0x171AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171ACCu;
            // 0x171ad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171AD4u; }
        if (ctx->pc != 0x171AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171AD4u; }
        if (ctx->pc != 0x171AD4u) { return; }
    }
    ctx->pc = 0x171AD4u;
label_171ad4:
    // 0x171ad4: 0xc05c6be  jal         func_171AF8
    ctx->pc = 0x171AD4u;
    SET_GPR_U32(ctx, 31, 0x171ADCu);
    ctx->pc = 0x171AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171AD4u;
            // 0x171ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AF8u;
    if (runtime->hasFunction(0x171AF8u)) {
        auto targetFn = runtime->lookupFunction(0x171AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171ADCu; }
        if (ctx->pc != 0x171ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AF8_0x171af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171ADCu; }
        if (ctx->pc != 0x171ADCu) { return; }
    }
    ctx->pc = 0x171ADCu;
label_171adc:
    // 0x171adc: 0xc05c84c  jal         func_172130
    ctx->pc = 0x171ADCu;
    SET_GPR_U32(ctx, 31, 0x171AE4u);
    ctx->pc = 0x171AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171ADCu;
            // 0x171ae0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171AE4u; }
        if (ctx->pc != 0x171AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171AE4u; }
        if (ctx->pc != 0x171AE4u) { return; }
    }
    ctx->pc = 0x171AE4u;
label_171ae4:
    // 0x171ae4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171ae8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171af0: 0x3e00008  jr          $ra
    ctx->pc = 0x171AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171AF0u;
            // 0x171af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171AF8u;
}
