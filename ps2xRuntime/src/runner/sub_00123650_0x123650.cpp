#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00123650
// Address: 0x123650 - 0x1236b0
void sub_00123650_0x123650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123650_0x123650");
#endif

    switch (ctx->pc) {
        case 0x12366cu: goto label_12366c;
        case 0x123680u: goto label_123680;
        case 0x123688u: goto label_123688;
        default: break;
    }

    ctx->pc = 0x123650u;

    // 0x123650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x123658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12365c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12365cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123660: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x123660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x123664: 0xc049760  jal         func_125D80
    ctx->pc = 0x123664u;
    SET_GPR_U32(ctx, 31, 0x12366Cu);
    ctx->pc = 0x123668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123664u;
            // 0x123668: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12366Cu; }
        if (ctx->pc != 0x12366Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12366Cu; }
        if (ctx->pc != 0x12366Cu) { return; }
    }
    ctx->pc = 0x12366Cu;
label_12366c:
    // 0x12366c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12366cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123670: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x123670u;
    {
        const bool branch_taken_0x123670 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x123674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123670u;
            // 0x123674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123670) {
            ctx->pc = 0x1236A0u;
            goto label_1236a0;
        }
    }
    ctx->pc = 0x123678u;
    // 0x123678: 0xc049622  jal         func_125888
    ctx->pc = 0x123678u;
    SET_GPR_U32(ctx, 31, 0x123680u);
    ctx->pc = 0x12367Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123678u;
            // 0x12367c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123680u; }
        if (ctx->pc != 0x123680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123680u; }
        if (ctx->pc != 0x123680u) { return; }
    }
    ctx->pc = 0x123680u;
label_123680:
    // 0x123680: 0xc048d52  jal         func_123548
    ctx->pc = 0x123680u;
    SET_GPR_U32(ctx, 31, 0x123688u);
    ctx->pc = 0x123684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123680u;
            // 0x123684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123548u;
    if (runtime->hasFunction(0x123548u)) {
        auto targetFn = runtime->lookupFunction(0x123548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123688u; }
        if (ctx->pc != 0x123688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123548_0x123548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123688u; }
        if (ctx->pc != 0x123688u) { return; }
    }
    ctx->pc = 0x123688u;
label_123688:
    // 0x123688: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x123688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12368c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12368cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123690: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x123690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x123694: 0x3e00008  jr          $ra
    ctx->pc = 0x123694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123694u;
            // 0x123698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12369Cu;
    // 0x12369c: 0x0  nop
    ctx->pc = 0x12369cu;
    // NOP
label_1236a0:
    // 0x1236a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1236a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1236a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1236a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1236a8: 0x8048d52  j           func_123548
    ctx->pc = 0x1236A8u;
    ctx->pc = 0x1236ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1236A8u;
            // 0x1236ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123548u;
    if (runtime->hasFunction(0x123548u)) {
        auto targetFn = runtime->lookupFunction(0x123548u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00123548_0x123548(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1236B0u;
}
