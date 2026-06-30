#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC6E0
// Address: 0x1ac6e0 - 0x1ac7a0
void sub_001AC6E0_0x1ac6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC6E0_0x1ac6e0");
#endif

    switch (ctx->pc) {
        case 0x1ac6e0u: goto label_1ac6e0;
        case 0x1ac6e4u: goto label_1ac6e4;
        case 0x1ac6e8u: goto label_1ac6e8;
        case 0x1ac6ecu: goto label_1ac6ec;
        case 0x1ac6f0u: goto label_1ac6f0;
        case 0x1ac6f4u: goto label_1ac6f4;
        case 0x1ac6f8u: goto label_1ac6f8;
        case 0x1ac6fcu: goto label_1ac6fc;
        case 0x1ac700u: goto label_1ac700;
        case 0x1ac704u: goto label_1ac704;
        case 0x1ac708u: goto label_1ac708;
        case 0x1ac70cu: goto label_1ac70c;
        case 0x1ac710u: goto label_1ac710;
        case 0x1ac714u: goto label_1ac714;
        case 0x1ac718u: goto label_1ac718;
        case 0x1ac71cu: goto label_1ac71c;
        case 0x1ac720u: goto label_1ac720;
        case 0x1ac724u: goto label_1ac724;
        case 0x1ac728u: goto label_1ac728;
        case 0x1ac72cu: goto label_1ac72c;
        case 0x1ac730u: goto label_1ac730;
        case 0x1ac734u: goto label_1ac734;
        case 0x1ac738u: goto label_1ac738;
        case 0x1ac73cu: goto label_1ac73c;
        case 0x1ac740u: goto label_1ac740;
        case 0x1ac744u: goto label_1ac744;
        case 0x1ac748u: goto label_1ac748;
        case 0x1ac74cu: goto label_1ac74c;
        case 0x1ac750u: goto label_1ac750;
        case 0x1ac754u: goto label_1ac754;
        case 0x1ac758u: goto label_1ac758;
        case 0x1ac75cu: goto label_1ac75c;
        case 0x1ac760u: goto label_1ac760;
        case 0x1ac764u: goto label_1ac764;
        case 0x1ac768u: goto label_1ac768;
        case 0x1ac76cu: goto label_1ac76c;
        case 0x1ac770u: goto label_1ac770;
        case 0x1ac774u: goto label_1ac774;
        case 0x1ac778u: goto label_1ac778;
        case 0x1ac77cu: goto label_1ac77c;
        case 0x1ac780u: goto label_1ac780;
        case 0x1ac784u: goto label_1ac784;
        case 0x1ac788u: goto label_1ac788;
        case 0x1ac78cu: goto label_1ac78c;
        case 0x1ac790u: goto label_1ac790;
        case 0x1ac794u: goto label_1ac794;
        case 0x1ac798u: goto label_1ac798;
        case 0x1ac79cu: goto label_1ac79c;
        default: break;
    }

    ctx->pc = 0x1ac6e0u;

label_1ac6e0:
    // 0x1ac6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ac6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ac6e4:
    // 0x1ac6e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac6e8:
    // 0x1ac6e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ac6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ac6ec:
    // 0x1ac6ec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ac6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1ac6f0:
    // 0x1ac6f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac6f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac6f4:
    // 0x1ac6f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ac6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1ac6f8:
    // 0x1ac6f8: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x1ac6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ac6fc:
    // 0x1ac6fc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ac6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1ac700:
    // 0x1ac700: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x1ac700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ac704:
    // 0x1ac704: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ac708:
    if (ctx->pc == 0x1AC708u) {
        ctx->pc = 0x1AC708u;
            // 0x1ac708: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->pc = 0x1AC70Cu;
        goto label_1ac70c;
    }
    ctx->pc = 0x1AC704u;
    {
        const bool branch_taken_0x1ac704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC704u;
            // 0x1ac708: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac704) {
            ctx->pc = 0x1AC730u;
            goto label_1ac730;
        }
    }
    ctx->pc = 0x1AC70Cu;
label_1ac70c:
    // 0x1ac70c: 0x0  nop
    ctx->pc = 0x1ac70cu;
    // NOP
label_1ac710:
    // 0x1ac710: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ac710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ac714:
    // 0x1ac714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac718:
    // 0x1ac718: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ac718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1ac71c:
    // 0x1ac71c: 0x40f809  jalr        $v0
label_1ac720:
    if (ctx->pc == 0x1AC720u) {
        ctx->pc = 0x1AC720u;
            // 0x1ac720: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC724u;
        goto label_1ac724;
    }
    ctx->pc = 0x1AC71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC724u);
        ctx->pc = 0x1AC720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC71Cu;
            // 0x1ac720: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AC724u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AC724u; }
            if (ctx->pc != 0x1AC724u) { return; }
        }
        }
    }
    ctx->pc = 0x1AC724u;
label_1ac724:
    // 0x1ac724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac728:
    // 0x1ac728: 0xc06b1e8  jal         func_1AC7A0
label_1ac72c:
    if (ctx->pc == 0x1AC72Cu) {
        ctx->pc = 0x1AC72Cu;
            // 0x1ac72c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1AC730u;
        goto label_1ac730;
    }
    ctx->pc = 0x1AC728u;
    SET_GPR_U32(ctx, 31, 0x1AC730u);
    ctx->pc = 0x1AC72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC728u;
            // 0x1ac72c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7A0u;
    if (runtime->hasFunction(0x1AC7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AC7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC730u; }
        if (ctx->pc != 0x1AC730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC7A0_0x1ac7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC730u; }
        if (ctx->pc != 0x1AC730u) { return; }
    }
    ctx->pc = 0x1AC730u;
label_1ac730:
    // 0x1ac730: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ac730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ac734:
    // 0x1ac734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac738:
    // 0x1ac738: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ac738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac73c:
    // 0x1ac73c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ac73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ac740:
    // 0x1ac740: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1ac740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1ac744:
    // 0x1ac744: 0x60f809  jalr        $v1
label_1ac748:
    if (ctx->pc == 0x1AC748u) {
        ctx->pc = 0x1AC748u;
            // 0x1ac748: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC74Cu;
        goto label_1ac74c;
    }
    ctx->pc = 0x1AC744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AC74Cu);
        ctx->pc = 0x1AC748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC744u;
            // 0x1ac748: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AC74Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AC74Cu; }
            if (ctx->pc != 0x1AC74Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1AC74Cu;
label_1ac74c:
    // 0x1ac74c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ac74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ac750:
    // 0x1ac750: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
label_1ac754:
    if (ctx->pc == 0x1AC754u) {
        ctx->pc = 0x1AC754u;
            // 0x1ac754: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AC758u;
        goto label_1ac758;
    }
    ctx->pc = 0x1AC750u;
    {
        const bool branch_taken_0x1ac750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1ac750) {
            ctx->pc = 0x1AC754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC750u;
            // 0x1ac754: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC76Cu;
            goto label_1ac76c;
        }
    }
    ctx->pc = 0x1AC758u;
label_1ac758:
    // 0x1ac758: 0xc064b62  jal         func_192D88
label_1ac75c:
    if (ctx->pc == 0x1AC75Cu) {
        ctx->pc = 0x1AC75Cu;
            // 0x1ac75c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1AC760u;
        goto label_1ac760;
    }
    ctx->pc = 0x1AC758u;
    SET_GPR_U32(ctx, 31, 0x1AC760u);
    ctx->pc = 0x1AC75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC758u;
            // 0x1ac75c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC760u; }
        if (ctx->pc != 0x1AC760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC760u; }
        if (ctx->pc != 0x1AC760u) { return; }
    }
    ctx->pc = 0x1AC760u;
label_1ac760:
    // 0x1ac760: 0x1052ffeb  beq         $v0, $s2, . + 4 + (-0x15 << 2)
label_1ac764:
    if (ctx->pc == 0x1AC764u) {
        ctx->pc = 0x1AC764u;
            // 0x1ac764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC768u;
        goto label_1ac768;
    }
    ctx->pc = 0x1AC760u;
    {
        const bool branch_taken_0x1ac760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1AC764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC760u;
            // 0x1ac764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac760) {
            ctx->pc = 0x1AC710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ac710;
        }
    }
    ctx->pc = 0x1AC768u;
label_1ac768:
    // 0x1ac768: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ac768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ac76c:
    // 0x1ac76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac770:
    // 0x1ac770: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ac770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac774:
    // 0x1ac774: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1ac774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1ac778:
    // 0x1ac778: 0x40f809  jalr        $v0
label_1ac77c:
    if (ctx->pc == 0x1AC77Cu) {
        ctx->pc = 0x1AC77Cu;
            // 0x1ac77c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC780u;
        goto label_1ac780;
    }
    ctx->pc = 0x1AC778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC780u);
        ctx->pc = 0x1AC77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC778u;
            // 0x1ac77c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AC780u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AC780u; }
            if (ctx->pc != 0x1AC780u) { return; }
        }
        }
    }
    ctx->pc = 0x1AC780u;
label_1ac780:
    // 0x1ac780: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac784:
    // 0x1ac784: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ac784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ac788:
    // 0x1ac788: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ac788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac78c:
    // 0x1ac78c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ac78cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ac790:
    // 0x1ac790: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ac790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac794:
    // 0x1ac794: 0x3e00008  jr          $ra
label_1ac798:
    if (ctx->pc == 0x1AC798u) {
        ctx->pc = 0x1AC798u;
            // 0x1ac798: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1AC79Cu;
        goto label_1ac79c;
    }
    ctx->pc = 0x1AC794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC794u;
            // 0x1ac798: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC79Cu;
label_1ac79c:
    // 0x1ac79c: 0x0  nop
    ctx->pc = 0x1ac79cu;
    // NOP
}
