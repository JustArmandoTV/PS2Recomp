#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B07E8
// Address: 0x1b07e8 - 0x1b08f8
void sub_001B07E8_0x1b07e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B07E8_0x1b07e8");
#endif

    switch (ctx->pc) {
        case 0x1b0848u: goto label_1b0848;
        case 0x1b0878u: goto label_1b0878;
        case 0x1b0898u: goto label_1b0898;
        default: break;
    }

    ctx->pc = 0x1b07e8u;

    // 0x1b07e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b07e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b07ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b07ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b07f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b07f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b07f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b07f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b07f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b07f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b07fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b07fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0800: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b0800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b0804: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b0804u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0808: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b0808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b080c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b0810: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b0810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b0814: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1b0814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1b0818: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b0818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b081c: 0x8c822030  lw          $v0, 0x2030($a0)
    ctx->pc = 0x1b081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1b0820: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1b0820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1b0824: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x1b0824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x1b0828: 0x24500180  addiu       $s0, $v0, 0x180
    ctx->pc = 0x1b0828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1b082c: 0x1860001f  blez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B082Cu;
    {
        const bool branch_taken_0x1b082c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B0830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B082Cu;
            // 0x1b0830: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b082c) {
            ctx->pc = 0x1B08ACu;
            goto label_1b08ac;
        }
    }
    ctx->pc = 0x1B0834u;
    // 0x1b0834: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1b0834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0838: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x1b0838u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b083c: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x1b083cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0840: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1b0840u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0844: 0x0  nop
    ctx->pc = 0x1b0844u;
    // NOP
label_1b0848:
    // 0x1b0848: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b0848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b084c: 0x50570004  beql        $v0, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B084Cu;
    {
        const bool branch_taken_0x1b084c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x1b084c) {
            ctx->pc = 0x1B0850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B084Cu;
            // 0x1b0850: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0860u;
            goto label_1b0860;
        }
    }
    ctx->pc = 0x1B0854u;
    // 0x1b0854: 0x54560013  bnel        $v0, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B0854u;
    {
        const bool branch_taken_0x1b0854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1b0854) {
            ctx->pc = 0x1B0858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0854u;
            // 0x1b0858: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B08A4u;
            goto label_1b08a4;
        }
    }
    ctx->pc = 0x1B085Cu;
    // 0x1b085c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1b085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1b0860:
    // 0x1b0860: 0x54550010  bnel        $v0, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B0860u;
    {
        const bool branch_taken_0x1b0860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1b0860) {
            ctx->pc = 0x1B0864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0860u;
            // 0x1b0864: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B08A4u;
            goto label_1b08a4;
        }
    }
    ctx->pc = 0x1B0868u;
    // 0x1b0868: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1b0868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b086c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b086cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0870: 0xc06c23e  jal         func_1B08F8
    ctx->pc = 0x1B0870u;
    SET_GPR_U32(ctx, 31, 0x1B0878u);
    ctx->pc = 0x1B0874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0870u;
            // 0x1b0874: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B08F8u;
    if (runtime->hasFunction(0x1B08F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B08F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0878u; }
        if (ctx->pc != 0x1B0878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B08F8_0x1b08f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0878u; }
        if (ctx->pc != 0x1B0878u) { return; }
    }
    ctx->pc = 0x1B0878u;
label_1b0878:
    // 0x1b0878: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0878u;
    {
        const bool branch_taken_0x1b0878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B087Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0878u;
            // 0x1b087c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0878) {
            ctx->pc = 0x1B0890u;
            goto label_1b0890;
        }
    }
    ctx->pc = 0x1B0880u;
    // 0x1b0880: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b0884: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b0884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b0888: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0888u;
    {
        const bool branch_taken_0x1b0888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B088Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0888u;
            // 0x1b088c: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0888) {
            ctx->pc = 0x1B08A0u;
            goto label_1b08a0;
        }
    }
    ctx->pc = 0x1B0890u;
label_1b0890:
    // 0x1b0890: 0xc06c23e  jal         func_1B08F8
    ctx->pc = 0x1B0890u;
    SET_GPR_U32(ctx, 31, 0x1B0898u);
    ctx->pc = 0x1B0894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0890u;
            // 0x1b0894: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B08F8u;
    if (runtime->hasFunction(0x1B08F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B08F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0898u; }
        if (ctx->pc != 0x1B0898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B08F8_0x1b08f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0898u; }
        if (ctx->pc != 0x1B0898u) { return; }
    }
    ctx->pc = 0x1B0898u;
label_1b0898:
    // 0x1b0898: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B0898u;
    {
        const bool branch_taken_0x1b0898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0898) {
            ctx->pc = 0x1B089Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0898u;
            // 0x1b089c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B08A0u;
            goto label_1b08a0;
        }
    }
    ctx->pc = 0x1B08A0u;
label_1b08a0:
    // 0x1b08a0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1b08a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1b08a4:
    // 0x1b08a4: 0x1660ffe8  bnez        $s3, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B08A4u;
    {
        const bool branch_taken_0x1b08a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B08A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B08A4u;
            // 0x1b08a8: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08a4) {
            ctx->pc = 0x1B0848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0848;
        }
    }
    ctx->pc = 0x1B08ACu;
label_1b08ac:
    // 0x1b08ac: 0x1e800004  bgtz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B08ACu;
    {
        const bool branch_taken_0x1b08ac = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x1B08B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B08ACu;
            // 0x1b08b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08ac) {
            ctx->pc = 0x1B08C0u;
            goto label_1b08c0;
        }
    }
    ctx->pc = 0x1B08B4u;
    // 0x1b08b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B08B4u;
    {
        const bool branch_taken_0x1b08b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B08B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B08B4u;
            // 0x1b08b8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08b4) {
            ctx->pc = 0x1B08C8u;
            goto label_1b08c8;
        }
    }
    ctx->pc = 0x1B08BCu;
    // 0x1b08bc: 0x0  nop
    ctx->pc = 0x1b08bcu;
    // NOP
label_1b08c0:
    // 0x1b08c0: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B08C0u;
    {
        const bool branch_taken_0x1b08c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B08C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B08C0u;
            // 0x1b08c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08c0) {
            ctx->pc = 0x1B08D0u;
            goto label_1b08d0;
        }
    }
    ctx->pc = 0x1B08C8u;
label_1b08c8:
    // 0x1b08c8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1b08c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1b08cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b08ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b08d0:
    // 0x1b08d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b08d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b08d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b08d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b08d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b08d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b08dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b08dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b08e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b08e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b08e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b08e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b08e8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1b08e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b08ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b08ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b08f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B08F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B08F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B08F0u;
            // 0x1b08f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B08F8u;
}
