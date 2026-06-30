#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B8700
// Address: 0x2b8700 - 0x2b87b0
void sub_002B8700_0x2b8700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8700_0x2b8700");
#endif

    switch (ctx->pc) {
        case 0x2b8700u: goto label_2b8700;
        case 0x2b8704u: goto label_2b8704;
        case 0x2b8708u: goto label_2b8708;
        case 0x2b870cu: goto label_2b870c;
        case 0x2b8710u: goto label_2b8710;
        case 0x2b8714u: goto label_2b8714;
        case 0x2b8718u: goto label_2b8718;
        case 0x2b871cu: goto label_2b871c;
        case 0x2b8720u: goto label_2b8720;
        case 0x2b8724u: goto label_2b8724;
        case 0x2b8728u: goto label_2b8728;
        case 0x2b872cu: goto label_2b872c;
        case 0x2b8730u: goto label_2b8730;
        case 0x2b8734u: goto label_2b8734;
        case 0x2b8738u: goto label_2b8738;
        case 0x2b873cu: goto label_2b873c;
        case 0x2b8740u: goto label_2b8740;
        case 0x2b8744u: goto label_2b8744;
        case 0x2b8748u: goto label_2b8748;
        case 0x2b874cu: goto label_2b874c;
        case 0x2b8750u: goto label_2b8750;
        case 0x2b8754u: goto label_2b8754;
        case 0x2b8758u: goto label_2b8758;
        case 0x2b875cu: goto label_2b875c;
        case 0x2b8760u: goto label_2b8760;
        case 0x2b8764u: goto label_2b8764;
        case 0x2b8768u: goto label_2b8768;
        case 0x2b876cu: goto label_2b876c;
        case 0x2b8770u: goto label_2b8770;
        case 0x2b8774u: goto label_2b8774;
        case 0x2b8778u: goto label_2b8778;
        case 0x2b877cu: goto label_2b877c;
        case 0x2b8780u: goto label_2b8780;
        case 0x2b8784u: goto label_2b8784;
        case 0x2b8788u: goto label_2b8788;
        case 0x2b878cu: goto label_2b878c;
        case 0x2b8790u: goto label_2b8790;
        case 0x2b8794u: goto label_2b8794;
        case 0x2b8798u: goto label_2b8798;
        case 0x2b879cu: goto label_2b879c;
        case 0x2b87a0u: goto label_2b87a0;
        case 0x2b87a4u: goto label_2b87a4;
        case 0x2b87a8u: goto label_2b87a8;
        case 0x2b87acu: goto label_2b87ac;
        default: break;
    }

    ctx->pc = 0x2b8700u;

label_2b8700:
    // 0x2b8700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b8700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b8704:
    // 0x2b8704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b8704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b8708:
    // 0x2b8708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b870c:
    // 0x2b870c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b8710:
    // 0x2b8710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b8710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b8714:
    // 0x2b8714: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_2b8718:
    if (ctx->pc == 0x2B8718u) {
        ctx->pc = 0x2B8718u;
            // 0x2b8718: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B871Cu;
        goto label_2b871c;
    }
    ctx->pc = 0x2B8714u;
    {
        const bool branch_taken_0x2b8714 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8714u;
            // 0x2b8718: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8714) {
            ctx->pc = 0x2B8798u;
            goto label_2b8798;
        }
    }
    ctx->pc = 0x2B871Cu;
label_2b871c:
    // 0x2b871c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b871cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b8720:
    // 0x2b8720: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2b8720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2b8724:
    // 0x2b8724: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b8724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b8728:
    // 0x2b8728: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2b8728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2b872c:
    // 0x2b872c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2b8730:
    if (ctx->pc == 0x2B8730u) {
        ctx->pc = 0x2B8730u;
            // 0x2b8730: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2B8734u;
        goto label_2b8734;
    }
    ctx->pc = 0x2B872Cu;
    {
        const bool branch_taken_0x2b872c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b872c) {
            ctx->pc = 0x2B8730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B872Cu;
            // 0x2b8730: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8748u;
            goto label_2b8748;
        }
    }
    ctx->pc = 0x2B8734u;
label_2b8734:
    // 0x2b8734: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b8734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b8738:
    // 0x2b8738: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b8738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b873c:
    // 0x2b873c: 0x320f809  jalr        $t9
label_2b8740:
    if (ctx->pc == 0x2B8740u) {
        ctx->pc = 0x2B8740u;
            // 0x2b8740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B8744u;
        goto label_2b8744;
    }
    ctx->pc = 0x2B873Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B8744u);
        ctx->pc = 0x2B8740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B873Cu;
            // 0x2b8740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B8744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B8744u; }
            if (ctx->pc != 0x2B8744u) { return; }
        }
        }
    }
    ctx->pc = 0x2B8744u;
label_2b8744:
    // 0x2b8744: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2b8744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2b8748:
    // 0x2b8748: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2b874c:
    if (ctx->pc == 0x2B874Cu) {
        ctx->pc = 0x2B8750u;
        goto label_2b8750;
    }
    ctx->pc = 0x2B8748u;
    {
        const bool branch_taken_0x2b8748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8748) {
            ctx->pc = 0x2B8760u;
            goto label_2b8760;
        }
    }
    ctx->pc = 0x2B8750u;
label_2b8750:
    // 0x2b8750: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b8750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b8754:
    // 0x2b8754: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b8754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b8758:
    // 0x2b8758: 0x320f809  jalr        $t9
label_2b875c:
    if (ctx->pc == 0x2B875Cu) {
        ctx->pc = 0x2B875Cu;
            // 0x2b875c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B8760u;
        goto label_2b8760;
    }
    ctx->pc = 0x2B8758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B8760u);
        ctx->pc = 0x2B875Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8758u;
            // 0x2b875c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B8760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B8760u; }
            if (ctx->pc != 0x2B8760u) { return; }
        }
        }
    }
    ctx->pc = 0x2B8760u;
label_2b8760:
    // 0x2b8760: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_2b8764:
    if (ctx->pc == 0x2B8764u) {
        ctx->pc = 0x2B8764u;
            // 0x2b8764: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2B8768u;
        goto label_2b8768;
    }
    ctx->pc = 0x2B8760u;
    {
        const bool branch_taken_0x2b8760 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8760) {
            ctx->pc = 0x2B8764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8760u;
            // 0x2b8764: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8784u;
            goto label_2b8784;
        }
    }
    ctx->pc = 0x2B8768u;
label_2b8768:
    // 0x2b8768: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b8768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b876c:
    // 0x2b876c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b876cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b8770:
    // 0x2b8770: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2b8770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_2b8774:
    // 0x2b8774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8778:
    // 0x2b8778: 0xc057a68  jal         func_15E9A0
label_2b877c:
    if (ctx->pc == 0x2B877Cu) {
        ctx->pc = 0x2B877Cu;
            // 0x2b877c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B8780u;
        goto label_2b8780;
    }
    ctx->pc = 0x2B8778u;
    SET_GPR_U32(ctx, 31, 0x2B8780u);
    ctx->pc = 0x2B877Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8778u;
            // 0x2b877c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8780u; }
        if (ctx->pc != 0x2B8780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8780u; }
        if (ctx->pc != 0x2B8780u) { return; }
    }
    ctx->pc = 0x2B8780u;
label_2b8780:
    // 0x2b8780: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b8780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b8784:
    // 0x2b8784: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b8784u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2b8788:
    // 0x2b8788: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2b878c:
    if (ctx->pc == 0x2B878Cu) {
        ctx->pc = 0x2B878Cu;
            // 0x2b878c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8790u;
        goto label_2b8790;
    }
    ctx->pc = 0x2B8788u;
    {
        const bool branch_taken_0x2b8788 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b8788) {
            ctx->pc = 0x2B878Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8788u;
            // 0x2b878c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B879Cu;
            goto label_2b879c;
        }
    }
    ctx->pc = 0x2B8790u;
label_2b8790:
    // 0x2b8790: 0xc0400a8  jal         func_1002A0
label_2b8794:
    if (ctx->pc == 0x2B8794u) {
        ctx->pc = 0x2B8794u;
            // 0x2b8794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8798u;
        goto label_2b8798;
    }
    ctx->pc = 0x2B8790u;
    SET_GPR_U32(ctx, 31, 0x2B8798u);
    ctx->pc = 0x2B8794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8790u;
            // 0x2b8794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8798u; }
        if (ctx->pc != 0x2B8798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8798u; }
        if (ctx->pc != 0x2B8798u) { return; }
    }
    ctx->pc = 0x2B8798u;
label_2b8798:
    // 0x2b8798: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b8798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b879c:
    // 0x2b879c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b879cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b87a0:
    // 0x2b87a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b87a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b87a4:
    // 0x2b87a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b87a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b87a8:
    // 0x2b87a8: 0x3e00008  jr          $ra
label_2b87ac:
    if (ctx->pc == 0x2B87ACu) {
        ctx->pc = 0x2B87ACu;
            // 0x2b87ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B87B0u;
        goto label_fallthrough_0x2b87a8;
    }
    ctx->pc = 0x2B87A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B87ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B87A8u;
            // 0x2b87ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b87a8:
    ctx->pc = 0x2B87B0u;
}
