#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002426D0
// Address: 0x2426d0 - 0x2427a0
void sub_002426D0_0x2426d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002426D0_0x2426d0");
#endif

    switch (ctx->pc) {
        case 0x242710u: goto label_242710;
        case 0x242720u: goto label_242720;
        case 0x242744u: goto label_242744;
        case 0x24276cu: goto label_24276c;
        default: break;
    }

    ctx->pc = 0x2426d0u;

    // 0x2426d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2426d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2426d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2426d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2426d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2426d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2426dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2426dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2426e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2426e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2426e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2426e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2426e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2426e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2426ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2426ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2426f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2426f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2426f4: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2426F4u;
    {
        const bool branch_taken_0x2426f4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2426F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2426F4u;
            // 0x2426f8: 0x119843  sra         $s3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2426f4) {
            ctx->pc = 0x242704u;
            goto label_242704;
        }
    }
    ctx->pc = 0x2426FCu;
    // 0x2426fc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2426fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x242700: 0x39843  sra         $s3, $v1, 1
    ctx->pc = 0x242700u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
label_242704:
    // 0x242704: 0x1a60000a  blez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x242704u;
    {
        const bool branch_taken_0x242704 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x242704) {
            ctx->pc = 0x242730u;
            goto label_242730;
        }
    }
    ctx->pc = 0x24270Cu;
    // 0x24270c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24270cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_242710:
    // 0x242710: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x242710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242714: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x242714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242718: 0xc0909e8  jal         func_2427A0
    ctx->pc = 0x242718u;
    SET_GPR_U32(ctx, 31, 0x242720u);
    ctx->pc = 0x24271Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242718u;
            // 0x24271c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2427A0u;
    if (runtime->hasFunction(0x2427A0u)) {
        auto targetFn = runtime->lookupFunction(0x2427A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242720u; }
        if (ctx->pc != 0x242720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002427A0_0x2427a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242720u; }
        if (ctx->pc != 0x242720u) { return; }
    }
    ctx->pc = 0x242720u;
label_242720:
    // 0x242720: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x242720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x242724: 0x5e60fffa  bgtzl       $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x242724u;
    {
        const bool branch_taken_0x242724 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x242724) {
            ctx->pc = 0x242728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242724u;
            // 0x242728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242710;
        }
    }
    ctx->pc = 0x24272Cu;
    // 0x24272c: 0x0  nop
    ctx->pc = 0x24272cu;
    // NOP
label_242730:
    // 0x242730: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x242730u;
    {
        const bool branch_taken_0x242730 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x242730) {
            ctx->pc = 0x242778u;
            goto label_242778;
        }
    }
    ctx->pc = 0x242738u;
    // 0x242738: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x242738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x24273c: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x24273cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x242740: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x242740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_242744:
    // 0x242744: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x242744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x242748: 0x8e62fffc  lw          $v0, -0x4($s3)
    ctx->pc = 0x242748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x24274c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24274cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242750: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242754: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x242754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242758: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x242758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24275c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x24275cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x242760: 0xae63fffc  sw          $v1, -0x4($s3)
    ctx->pc = 0x242760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294967292), GPR_U32(ctx, 3));
    // 0x242764: 0xc0909e8  jal         func_2427A0
    ctx->pc = 0x242764u;
    SET_GPR_U32(ctx, 31, 0x24276Cu);
    ctx->pc = 0x242768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242764u;
            // 0x242768: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2427A0u;
    if (runtime->hasFunction(0x2427A0u)) {
        auto targetFn = runtime->lookupFunction(0x2427A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24276Cu; }
        if (ctx->pc != 0x24276Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002427A0_0x2427a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24276Cu; }
        if (ctx->pc != 0x24276Cu) { return; }
    }
    ctx->pc = 0x24276Cu;
label_24276c:
    // 0x24276c: 0x5e20fff5  bgtzl       $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x24276Cu;
    {
        const bool branch_taken_0x24276c = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x24276c) {
            ctx->pc = 0x242770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24276Cu;
            // 0x242770: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242744u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242744;
        }
    }
    ctx->pc = 0x242774u;
    // 0x242774: 0x0  nop
    ctx->pc = 0x242774u;
    // NOP
label_242778:
    // 0x242778: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x242778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24277c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24277cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242780: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x242780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242784: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24278c: 0x3e00008  jr          $ra
    ctx->pc = 0x24278Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24278Cu;
            // 0x242790: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242794u;
    // 0x242794: 0x0  nop
    ctx->pc = 0x242794u;
    // NOP
    // 0x242798: 0x0  nop
    ctx->pc = 0x242798u;
    // NOP
    // 0x24279c: 0x0  nop
    ctx->pc = 0x24279cu;
    // NOP
}
