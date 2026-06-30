#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172080
// Address: 0x172080 - 0x1720c8
void sub_00172080_0x172080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172080_0x172080");
#endif

    switch (ctx->pc) {
        case 0x172090u: goto label_172090;
        case 0x1720a4u: goto label_1720a4;
        case 0x1720acu: goto label_1720ac;
        case 0x1720b4u: goto label_1720b4;
        default: break;
    }

    ctx->pc = 0x172080u;

    // 0x172080: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x172080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x172084: 0x3e00008  jr          $ra
    ctx->pc = 0x172084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172084u;
            // 0x172088: 0x8c620050  lw          $v0, 0x50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17208Cu;
    // 0x17208c: 0x0  nop
    ctx->pc = 0x17208cu;
    // NOP
label_172090:
    // 0x172090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172098: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x172098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17209c: 0xc05c846  jal         func_172118
    ctx->pc = 0x17209Cu;
    SET_GPR_U32(ctx, 31, 0x1720A4u);
    ctx->pc = 0x1720A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17209Cu;
            // 0x1720a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1720A4u; }
        if (ctx->pc != 0x1720A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1720A4u; }
        if (ctx->pc != 0x1720A4u) { return; }
    }
    ctx->pc = 0x1720A4u;
label_1720a4:
    // 0x1720a4: 0xc05c832  jal         func_1720C8
    ctx->pc = 0x1720A4u;
    SET_GPR_U32(ctx, 31, 0x1720ACu);
    ctx->pc = 0x1720A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1720A4u;
            // 0x1720a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720C8u;
    if (runtime->hasFunction(0x1720C8u)) {
        auto targetFn = runtime->lookupFunction(0x1720C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1720ACu; }
        if (ctx->pc != 0x1720ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720C8_0x1720c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1720ACu; }
        if (ctx->pc != 0x1720ACu) { return; }
    }
    ctx->pc = 0x1720ACu;
label_1720ac:
    // 0x1720ac: 0xc05c84c  jal         func_172130
    ctx->pc = 0x1720ACu;
    SET_GPR_U32(ctx, 31, 0x1720B4u);
    ctx->pc = 0x1720B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1720ACu;
            // 0x1720b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1720B4u; }
        if (ctx->pc != 0x1720B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1720B4u; }
        if (ctx->pc != 0x1720B4u) { return; }
    }
    ctx->pc = 0x1720B4u;
label_1720b4:
    // 0x1720b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1720b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1720b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1720b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1720bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1720bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1720c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1720C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1720C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1720C0u;
            // 0x1720c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1720C8u;
}
