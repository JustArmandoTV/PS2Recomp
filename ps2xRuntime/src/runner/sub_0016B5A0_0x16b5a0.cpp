#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B5A0
// Address: 0x16b5a0 - 0x16b610
void sub_0016B5A0_0x16b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B5A0_0x16b5a0");
#endif

    switch (ctx->pc) {
        case 0x16b5ecu: goto label_16b5ec;
        case 0x16b5f4u: goto label_16b5f4;
        case 0x16b5fcu: goto label_16b5fc;
        default: break;
    }

    ctx->pc = 0x16b5a0u;

    // 0x16b5a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b5a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16b5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5a8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B5A8u;
    {
        const bool branch_taken_0x16b5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5A8u;
            // 0x16b5ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5a8) {
            ctx->pc = 0x16B5C8u;
            goto label_16b5c8;
        }
    }
    ctx->pc = 0x16B5B0u;
    // 0x16b5b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x16b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16b5b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B5B4u;
    {
        const bool branch_taken_0x16b5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5B4u;
            // 0x16b5b8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5b4) {
            ctx->pc = 0x16B5C8u;
            goto label_16b5c8;
        }
    }
    ctx->pc = 0x16B5BCu;
    // 0x16b5bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b5c0: 0x805c824  j           func_172090
    ctx->pc = 0x16B5C0u;
    ctx->pc = 0x16B5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5C0u;
            // 0x16b5c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172090u;
    {
        auto targetFn = runtime->lookupFunction(0x172090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16B5C8u;
label_16b5c8:
    // 0x16b5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x16B5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5CCu;
            // 0x16b5d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B5D4u;
    // 0x16b5d4: 0x0  nop
    ctx->pc = 0x16b5d4u;
    // NOP
    // 0x16b5d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b5dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b5e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b5e4: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16B5E4u;
    SET_GPR_U32(ctx, 31, 0x16B5ECu);
    ctx->pc = 0x16B5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5E4u;
            // 0x16b5e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5ECu; }
        if (ctx->pc != 0x16B5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5ECu; }
        if (ctx->pc != 0x16B5ECu) { return; }
    }
    ctx->pc = 0x16B5ECu;
label_16b5ec:
    // 0x16b5ec: 0xc05ad84  jal         func_16B610
    ctx->pc = 0x16B5ECu;
    SET_GPR_U32(ctx, 31, 0x16B5F4u);
    ctx->pc = 0x16B5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5ECu;
            // 0x16b5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B610u;
    if (runtime->hasFunction(0x16B610u)) {
        auto targetFn = runtime->lookupFunction(0x16B610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5F4u; }
        if (ctx->pc != 0x16B5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B610_0x16b610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5F4u; }
        if (ctx->pc != 0x16B5F4u) { return; }
    }
    ctx->pc = 0x16B5F4u;
label_16b5f4:
    // 0x16b5f4: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16B5F4u;
    SET_GPR_U32(ctx, 31, 0x16B5FCu);
    ctx->pc = 0x16B5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5F4u;
            // 0x16b5f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5FCu; }
        if (ctx->pc != 0x16B5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5FCu; }
        if (ctx->pc != 0x16B5FCu) { return; }
    }
    ctx->pc = 0x16B5FCu;
label_16b5fc:
    // 0x16b5fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b600: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b608: 0x3e00008  jr          $ra
    ctx->pc = 0x16B608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B608u;
            // 0x16b60c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B610u;
}
