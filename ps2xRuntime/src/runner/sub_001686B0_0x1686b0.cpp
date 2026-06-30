#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001686B0
// Address: 0x1686b0 - 0x168738
void sub_001686B0_0x1686b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001686B0_0x1686b0");
#endif

    switch (ctx->pc) {
        case 0x1686fcu: goto label_1686fc;
        case 0x168710u: goto label_168710;
        case 0x168718u: goto label_168718;
        default: break;
    }

    ctx->pc = 0x1686b0u;

    // 0x1686b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1686b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1686b4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1686b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1686b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1686bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1686bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1686c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1686c4: 0x805a1ce  j           func_168738
    ctx->pc = 0x1686C4u;
    ctx->pc = 0x1686C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1686C4u;
            // 0x1686c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168738u;
    if (runtime->hasFunction(0x168738u)) {
        auto targetFn = runtime->lookupFunction(0x168738u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00168738_0x168738(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1686CCu;
    // 0x1686cc: 0x0  nop
    ctx->pc = 0x1686ccu;
    // NOP
    // 0x1686d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1686d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1686d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1686d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1686d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1686d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1686dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1686e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1686e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1686e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1686e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1686e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1686ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1686f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1686f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1686f4: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x1686F4u;
    SET_GPR_U32(ctx, 31, 0x1686FCu);
    ctx->pc = 0x1686F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1686F4u;
            // 0x1686f8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686FCu; }
        if (ctx->pc != 0x1686FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686FCu; }
        if (ctx->pc != 0x1686FCu) { return; }
    }
    ctx->pc = 0x1686FCu;
label_1686fc:
    // 0x1686fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1686fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168704: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x168704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168708: 0xc05a1ce  jal         func_168738
    ctx->pc = 0x168708u;
    SET_GPR_U32(ctx, 31, 0x168710u);
    ctx->pc = 0x16870Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168708u;
            // 0x16870c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168738u;
    if (runtime->hasFunction(0x168738u)) {
        auto targetFn = runtime->lookupFunction(0x168738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168710u; }
        if (ctx->pc != 0x168710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168738_0x168738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168710u; }
        if (ctx->pc != 0x168710u) { return; }
    }
    ctx->pc = 0x168710u;
label_168710:
    // 0x168710: 0xc05adca  jal         func_16B728
    ctx->pc = 0x168710u;
    SET_GPR_U32(ctx, 31, 0x168718u);
    ctx->pc = 0x168714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168710u;
            // 0x168714: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168718u; }
        if (ctx->pc != 0x168718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168718u; }
        if (ctx->pc != 0x168718u) { return; }
    }
    ctx->pc = 0x168718u;
label_168718:
    // 0x168718: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16871c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16871cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168720: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x168720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168728: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x168728u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16872c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16872cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168730: 0x3e00008  jr          $ra
    ctx->pc = 0x168730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168730u;
            // 0x168734: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168738u;
}
