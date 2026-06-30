#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B86D8
// Address: 0x1b86d8 - 0x1b8770
void sub_001B86D8_0x1b86d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B86D8_0x1b86d8");
#endif

    switch (ctx->pc) {
        case 0x1b86d8u: goto label_1b86d8;
        case 0x1b86dcu: goto label_1b86dc;
        case 0x1b86e0u: goto label_1b86e0;
        case 0x1b86e4u: goto label_1b86e4;
        case 0x1b86e8u: goto label_1b86e8;
        case 0x1b86ecu: goto label_1b86ec;
        case 0x1b86f0u: goto label_1b86f0;
        case 0x1b86f4u: goto label_1b86f4;
        case 0x1b86f8u: goto label_1b86f8;
        case 0x1b86fcu: goto label_1b86fc;
        case 0x1b8700u: goto label_1b8700;
        case 0x1b8704u: goto label_1b8704;
        case 0x1b8708u: goto label_1b8708;
        case 0x1b870cu: goto label_1b870c;
        case 0x1b8710u: goto label_1b8710;
        case 0x1b8714u: goto label_1b8714;
        case 0x1b8718u: goto label_1b8718;
        case 0x1b871cu: goto label_1b871c;
        case 0x1b8720u: goto label_1b8720;
        case 0x1b8724u: goto label_1b8724;
        case 0x1b8728u: goto label_1b8728;
        case 0x1b872cu: goto label_1b872c;
        case 0x1b8730u: goto label_1b8730;
        case 0x1b8734u: goto label_1b8734;
        case 0x1b8738u: goto label_1b8738;
        case 0x1b873cu: goto label_1b873c;
        case 0x1b8740u: goto label_1b8740;
        case 0x1b8744u: goto label_1b8744;
        case 0x1b8748u: goto label_1b8748;
        case 0x1b874cu: goto label_1b874c;
        case 0x1b8750u: goto label_1b8750;
        case 0x1b8754u: goto label_1b8754;
        case 0x1b8758u: goto label_1b8758;
        case 0x1b875cu: goto label_1b875c;
        case 0x1b8760u: goto label_1b8760;
        case 0x1b8764u: goto label_1b8764;
        case 0x1b8768u: goto label_1b8768;
        case 0x1b876cu: goto label_1b876c;
        default: break;
    }

    ctx->pc = 0x1b86d8u;

label_1b86d8:
    // 0x1b86d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b86d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b86dc:
    // 0x1b86dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b86dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b86e0:
    // 0x1b86e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b86e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b86e4:
    // 0x1b86e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b86e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b86e8:
    // 0x1b86e8: 0x806e1bc  j           func_1B86F0
label_1b86ec:
    if (ctx->pc == 0x1B86ECu) {
        ctx->pc = 0x1B86ECu;
            // 0x1b86ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B86F0u;
        goto label_1b86f0;
    }
    ctx->pc = 0x1B86E8u;
    ctx->pc = 0x1B86ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86E8u;
            // 0x1b86ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B86F0u;
    goto label_1b86f0;
    ctx->pc = 0x1B86F0u;
label_1b86f0:
    // 0x1b86f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b86f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b86f4:
    // 0x1b86f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b86f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1b86f8:
    // 0x1b86f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b86f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b86fc:
    // 0x1b86fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b86fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8700:
    // 0x1b8700: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b8704:
    // 0x1b8704: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b8704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8708:
    // 0x1b8708: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b8708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b870c:
    // 0x1b870c: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x1b870cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b8710:
    // 0x1b8710: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8714:
    // 0x1b8714: 0x2a22000f  slti        $v0, $s1, 0xF
    ctx->pc = 0x1b8714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
label_1b8718:
    // 0x1b8718: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1b871c:
    if (ctx->pc == 0x1B871Cu) {
        ctx->pc = 0x1B871Cu;
            // 0x1b871c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x1B8720u;
        goto label_1b8720;
    }
    ctx->pc = 0x1B8718u;
    {
        const bool branch_taken_0x1b8718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B871Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8718u;
            // 0x1b871c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8718) {
            ctx->pc = 0x1B8754u;
            goto label_1b8754;
        }
    }
    ctx->pc = 0x1B8720u;
label_1b8720:
    // 0x1b8720: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b8720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8724:
    // 0x1b8724: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b8724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1b8728:
    // 0x1b8728: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b872c:
    if (ctx->pc == 0x1B872Cu) {
        ctx->pc = 0x1B872Cu;
            // 0x1b872c: 0x2421821  addu        $v1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B8730u;
        goto label_1b8730;
    }
    ctx->pc = 0x1B8728u;
    {
        const bool branch_taken_0x1b8728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B872Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8728u;
            // 0x1b872c: 0x2421821  addu        $v1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8728) {
            ctx->pc = 0x1B8754u;
            goto label_1b8754;
        }
    }
    ctx->pc = 0x1B8730u;
label_1b8730:
    // 0x1b8730: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b8730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b8734:
    // 0x1b8734: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8738:
    // 0x1b8738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b873c:
    // 0x1b873c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b873cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8740:
    // 0x1b8740: 0x40f809  jalr        $v0
label_1b8744:
    if (ctx->pc == 0x1B8744u) {
        ctx->pc = 0x1B8744u;
            // 0x1b8744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8748u;
        goto label_1b8748;
    }
    ctx->pc = 0x1B8740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8748u);
        ctx->pc = 0x1B8744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8740u;
            // 0x1b8744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B8748u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B8748u; }
            if (ctx->pc != 0x1B8748u) { return; }
        }
        }
    }
    ctx->pc = 0x1B8748u;
label_1b8748:
    // 0x1b8748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b8748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b874c:
    // 0x1b874c: 0x1080fff2  beqz        $a0, . + 4 + (-0xE << 2)
label_1b8750:
    if (ctx->pc == 0x1B8750u) {
        ctx->pc = 0x1B8750u;
            // 0x1b8750: 0x2a22000f  slti        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->pc = 0x1B8754u;
        goto label_1b8754;
    }
    ctx->pc = 0x1B874Cu;
    {
        const bool branch_taken_0x1b874c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B874Cu;
            // 0x1b8750: 0x2a22000f  slti        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b874c) {
            ctx->pc = 0x1B8718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b8718;
        }
    }
    ctx->pc = 0x1B8754u;
label_1b8754:
    // 0x1b8754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8758:
    // 0x1b8758: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b8758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b875c:
    // 0x1b875c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b875cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b8760:
    // 0x1b8760: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b8760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8764:
    // 0x1b8764: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b8764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b8768:
    // 0x1b8768: 0x3e00008  jr          $ra
label_1b876c:
    if (ctx->pc == 0x1B876Cu) {
        ctx->pc = 0x1B876Cu;
            // 0x1b876c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B8770u;
        goto label_fallthrough_0x1b8768;
    }
    ctx->pc = 0x1B8768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B876Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8768u;
            // 0x1b876c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b8768:
    ctx->pc = 0x1B8770u;
}
