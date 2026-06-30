#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168820
// Address: 0x168820 - 0x1688d0
void sub_00168820_0x168820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168820_0x168820");
#endif

    switch (ctx->pc) {
        case 0x168884u: goto label_168884;
        case 0x1688a0u: goto label_1688a0;
        case 0x1688a8u: goto label_1688a8;
        default: break;
    }

    ctx->pc = 0x168820u;

    // 0x168820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168824: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x168824u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x168828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16882c: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x16882cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x168830: 0x25087c87  addiu       $t0, $t0, 0x7C87
    ctx->pc = 0x168830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31879));
    // 0x168834: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x168834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x168838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16883c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x16883cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x168840: 0x805a2e2  j           func_168B88
    ctx->pc = 0x168840u;
    ctx->pc = 0x168844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168840u;
            // 0x168844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168B88u;
    if (runtime->hasFunction(0x168B88u)) {
        auto targetFn = runtime->lookupFunction(0x168B88u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00168B88_0x168b88(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x168848u;
    // 0x168848: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x168848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16884c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16884cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168858: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x168858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16885c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16885cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168860: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x168860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168864: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x168864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x168868: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x168868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16886c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16886cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x168870: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x168870u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168874: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x168874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x168878: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16887c: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16887Cu;
    SET_GPR_U32(ctx, 31, 0x168884u);
    ctx->pc = 0x168880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16887Cu;
            // 0x168880: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168884u; }
        if (ctx->pc != 0x168884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168884u; }
        if (ctx->pc != 0x168884u) { return; }
    }
    ctx->pc = 0x168884u;
label_168884:
    // 0x168884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168888: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16888c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16888cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168890: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x168890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168894: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x168894u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168898: 0xc05a234  jal         func_1688D0
    ctx->pc = 0x168898u;
    SET_GPR_U32(ctx, 31, 0x1688A0u);
    ctx->pc = 0x16889Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168898u;
            // 0x16889c: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1688D0u;
    if (runtime->hasFunction(0x1688D0u)) {
        auto targetFn = runtime->lookupFunction(0x1688D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688A0u; }
        if (ctx->pc != 0x1688A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001688D0_0x1688d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688A0u; }
        if (ctx->pc != 0x1688A0u) { return; }
    }
    ctx->pc = 0x1688A0u;
label_1688a0:
    // 0x1688a0: 0xc05adca  jal         func_16B728
    ctx->pc = 0x1688A0u;
    SET_GPR_U32(ctx, 31, 0x1688A8u);
    ctx->pc = 0x1688A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1688A0u;
            // 0x1688a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688A8u; }
        if (ctx->pc != 0x1688A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688A8u; }
        if (ctx->pc != 0x1688A8u) { return; }
    }
    ctx->pc = 0x1688A8u;
label_1688a8:
    // 0x1688a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1688a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1688ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1688acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1688b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1688b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1688b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1688b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1688b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1688bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1688bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1688c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1688c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1688c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1688c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1688c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1688C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1688CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1688C8u;
            // 0x1688cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1688D0u;
}
