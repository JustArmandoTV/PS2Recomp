#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171CB8
// Address: 0x171cb8 - 0x171cf8
void sub_00171CB8_0x171cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171CB8_0x171cb8");
#endif

    switch (ctx->pc) {
        case 0x171cd4u: goto label_171cd4;
        case 0x171cdcu: goto label_171cdc;
        case 0x171ce4u: goto label_171ce4;
        default: break;
    }

    ctx->pc = 0x171cb8u;

    // 0x171cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x171CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171CB8u;
            // 0x171cbc: 0xa0850048  sb          $a1, 0x48($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171CC0u;
    // 0x171cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171cc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171ccc: 0xc05c846  jal         func_172118
    ctx->pc = 0x171CCCu;
    SET_GPR_U32(ctx, 31, 0x171CD4u);
    ctx->pc = 0x171CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171CCCu;
            // 0x171cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171CD4u; }
        if (ctx->pc != 0x171CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171CD4u; }
        if (ctx->pc != 0x171CD4u) { return; }
    }
    ctx->pc = 0x171CD4u;
label_171cd4:
    // 0x171cd4: 0xc05c73e  jal         func_171CF8
    ctx->pc = 0x171CD4u;
    SET_GPR_U32(ctx, 31, 0x171CDCu);
    ctx->pc = 0x171CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171CD4u;
            // 0x171cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171CF8u;
    if (runtime->hasFunction(0x171CF8u)) {
        auto targetFn = runtime->lookupFunction(0x171CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171CDCu; }
        if (ctx->pc != 0x171CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171CF8_0x171cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171CDCu; }
        if (ctx->pc != 0x171CDCu) { return; }
    }
    ctx->pc = 0x171CDCu;
label_171cdc:
    // 0x171cdc: 0xc05c84c  jal         func_172130
    ctx->pc = 0x171CDCu;
    SET_GPR_U32(ctx, 31, 0x171CE4u);
    ctx->pc = 0x171CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171CDCu;
            // 0x171ce0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171CE4u; }
        if (ctx->pc != 0x171CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171CE4u; }
        if (ctx->pc != 0x171CE4u) { return; }
    }
    ctx->pc = 0x171CE4u;
label_171ce4:
    // 0x171ce4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171ce8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x171CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171CF0u;
            // 0x171cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171CF8u;
}
