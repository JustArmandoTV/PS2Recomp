#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036D870
// Address: 0x36d870 - 0x36d8a0
void sub_0036D870_0x36d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D870_0x36d870");
#endif

    switch (ctx->pc) {
        case 0x36d890u: goto label_36d890;
        default: break;
    }

    ctx->pc = 0x36d870u;

    // 0x36d870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d878: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x36d878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36d87c: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x36D87Cu;
    {
        const bool branch_taken_0x36d87c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d87c) {
            ctx->pc = 0x36D880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36D87Cu;
            // 0x36d880: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36D894u;
            goto label_36d894;
        }
    }
    ctx->pc = 0x36D884u;
    // 0x36d884: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x36d884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36d888: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x36D888u;
    SET_GPR_U32(ctx, 31, 0x36D890u);
    ctx->pc = 0x36D88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D888u;
            // 0x36d88c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D890u; }
        if (ctx->pc != 0x36D890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D890u; }
        if (ctx->pc != 0x36D890u) { return; }
    }
    ctx->pc = 0x36D890u;
label_36d890:
    // 0x36d890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36d894:
    // 0x36d894: 0x3e00008  jr          $ra
    ctx->pc = 0x36D894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D894u;
            // 0x36d898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36D89Cu;
    // 0x36d89c: 0x0  nop
    ctx->pc = 0x36d89cu;
    // NOP
}
