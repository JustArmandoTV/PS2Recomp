#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B680
// Address: 0x16b680 - 0x16b6d0
void sub_0016B680_0x16b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B680_0x16b680");
#endif

    switch (ctx->pc) {
        case 0x16b6acu: goto label_16b6ac;
        case 0x16b6b4u: goto label_16b6b4;
        case 0x16b6bcu: goto label_16b6bc;
        default: break;
    }

    ctx->pc = 0x16b680u;

    // 0x16b680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b68c: 0x805c6f6  j           func_171BD8
    ctx->pc = 0x16B68Cu;
    ctx->pc = 0x16B690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B68Cu;
            // 0x16b690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171BD8u;
    {
        auto targetFn = runtime->lookupFunction(0x171BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16B694u;
    // 0x16b694: 0x0  nop
    ctx->pc = 0x16b694u;
    // NOP
    // 0x16b698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b69c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b6a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b6a4: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16B6A4u;
    SET_GPR_U32(ctx, 31, 0x16B6ACu);
    ctx->pc = 0x16B6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6A4u;
            // 0x16b6a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6ACu; }
        if (ctx->pc != 0x16B6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6ACu; }
        if (ctx->pc != 0x16B6ACu) { return; }
    }
    ctx->pc = 0x16B6ACu;
label_16b6ac:
    // 0x16b6ac: 0xc05adb4  jal         func_16B6D0
    ctx->pc = 0x16B6ACu;
    SET_GPR_U32(ctx, 31, 0x16B6B4u);
    ctx->pc = 0x16B6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6ACu;
            // 0x16b6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B6D0u;
    if (runtime->hasFunction(0x16B6D0u)) {
        auto targetFn = runtime->lookupFunction(0x16B6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6B4u; }
        if (ctx->pc != 0x16B6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B6D0_0x16b6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6B4u; }
        if (ctx->pc != 0x16B6B4u) { return; }
    }
    ctx->pc = 0x16B6B4u;
label_16b6b4:
    // 0x16b6b4: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16B6B4u;
    SET_GPR_U32(ctx, 31, 0x16B6BCu);
    ctx->pc = 0x16B6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6B4u;
            // 0x16b6b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6BCu; }
        if (ctx->pc != 0x16B6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6BCu; }
        if (ctx->pc != 0x16B6BCu) { return; }
    }
    ctx->pc = 0x16B6BCu;
label_16b6bc:
    // 0x16b6bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b6c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b6c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6C8u;
            // 0x16b6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B6D0u;
}
