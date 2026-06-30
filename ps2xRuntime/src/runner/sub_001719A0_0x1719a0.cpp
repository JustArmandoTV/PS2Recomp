#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001719A0
// Address: 0x1719a0 - 0x1719f0
void sub_001719A0_0x1719a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001719A0_0x1719a0");
#endif

    switch (ctx->pc) {
        case 0x1719ccu: goto label_1719cc;
        case 0x1719d4u: goto label_1719d4;
        case 0x1719dcu: goto label_1719dc;
        default: break;
    }

    ctx->pc = 0x1719a0u;

    // 0x1719a0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1719a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1719a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1719a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1719a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1719a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1719ac: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x1719acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1719b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1719B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1719B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1719B0u;
            // 0x1719b4: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1719B8u;
    // 0x1719b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1719b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1719bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1719bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1719c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1719c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1719c4: 0xc05c846  jal         func_172118
    ctx->pc = 0x1719C4u;
    SET_GPR_U32(ctx, 31, 0x1719CCu);
    ctx->pc = 0x1719C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1719C4u;
            // 0x1719c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1719CCu; }
        if (ctx->pc != 0x1719CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1719CCu; }
        if (ctx->pc != 0x1719CCu) { return; }
    }
    ctx->pc = 0x1719CCu;
label_1719cc:
    // 0x1719cc: 0xc05c67c  jal         func_1719F0
    ctx->pc = 0x1719CCu;
    SET_GPR_U32(ctx, 31, 0x1719D4u);
    ctx->pc = 0x1719D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1719CCu;
            // 0x1719d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1719F0u;
    if (runtime->hasFunction(0x1719F0u)) {
        auto targetFn = runtime->lookupFunction(0x1719F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1719D4u; }
        if (ctx->pc != 0x1719D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001719F0_0x1719f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1719D4u; }
        if (ctx->pc != 0x1719D4u) { return; }
    }
    ctx->pc = 0x1719D4u;
label_1719d4:
    // 0x1719d4: 0xc05c84c  jal         func_172130
    ctx->pc = 0x1719D4u;
    SET_GPR_U32(ctx, 31, 0x1719DCu);
    ctx->pc = 0x1719D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1719D4u;
            // 0x1719d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1719DCu; }
        if (ctx->pc != 0x1719DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1719DCu; }
        if (ctx->pc != 0x1719DCu) { return; }
    }
    ctx->pc = 0x1719DCu;
label_1719dc:
    // 0x1719dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1719dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1719e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1719e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1719e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1719e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1719e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1719E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1719ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1719E8u;
            // 0x1719ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1719F0u;
}
