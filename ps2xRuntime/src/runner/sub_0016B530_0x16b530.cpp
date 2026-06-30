#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B530
// Address: 0x16b530 - 0x16b5a0
void sub_0016B530_0x16b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B530_0x16b530");
#endif

    switch (ctx->pc) {
        case 0x16b57cu: goto label_16b57c;
        case 0x16b584u: goto label_16b584;
        case 0x16b58cu: goto label_16b58c;
        default: break;
    }

    ctx->pc = 0x16b530u;

    // 0x16b530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b534: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16b534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b53c: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x16b53cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x16b540: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B540u;
    {
        const bool branch_taken_0x16b540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16B544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B540u;
            // 0x16b544: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b540) {
            ctx->pc = 0x16B558u;
            goto label_16b558;
        }
    }
    ctx->pc = 0x16B548u;
    // 0x16b548: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16b548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16b54c: 0x24843b38  addiu       $a0, $a0, 0x3B38
    ctx->pc = 0x16b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15160));
    // 0x16b550: 0x8059f4e  j           func_167D38
    ctx->pc = 0x16B550u;
    ctx->pc = 0x16B554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B550u;
            // 0x16b554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16B558u;
label_16b558:
    // 0x16b558: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x16b558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x16b55c: 0x3e00008  jr          $ra
    ctx->pc = 0x16B55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B55Cu;
            // 0x16b560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B564u;
    // 0x16b564: 0x0  nop
    ctx->pc = 0x16b564u;
    // NOP
    // 0x16b568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b56c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b570: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b574: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16B574u;
    SET_GPR_U32(ctx, 31, 0x16B57Cu);
    ctx->pc = 0x16B578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B574u;
            // 0x16b578: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B57Cu; }
        if (ctx->pc != 0x16B57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B57Cu; }
        if (ctx->pc != 0x16B57Cu) { return; }
    }
    ctx->pc = 0x16B57Cu;
label_16b57c:
    // 0x16b57c: 0xc05ad68  jal         func_16B5A0
    ctx->pc = 0x16B57Cu;
    SET_GPR_U32(ctx, 31, 0x16B584u);
    ctx->pc = 0x16B580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B57Cu;
            // 0x16b580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B5A0u;
    if (runtime->hasFunction(0x16B5A0u)) {
        auto targetFn = runtime->lookupFunction(0x16B5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B584u; }
        if (ctx->pc != 0x16B584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B5A0_0x16b5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B584u; }
        if (ctx->pc != 0x16B584u) { return; }
    }
    ctx->pc = 0x16B584u;
label_16b584:
    // 0x16b584: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16B584u;
    SET_GPR_U32(ctx, 31, 0x16B58Cu);
    ctx->pc = 0x16B588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B584u;
            // 0x16b588: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B58Cu; }
        if (ctx->pc != 0x16B58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B58Cu; }
        if (ctx->pc != 0x16B58Cu) { return; }
    }
    ctx->pc = 0x16B58Cu;
label_16b58c:
    // 0x16b58c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b590: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b598: 0x3e00008  jr          $ra
    ctx->pc = 0x16B598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B598u;
            // 0x16b59c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B5A0u;
}
