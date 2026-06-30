#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C8750
// Address: 0x2c8750 - 0x2c8850
void sub_002C8750_0x2c8750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8750_0x2c8750");
#endif

    switch (ctx->pc) {
        case 0x2c8750u: goto label_2c8750;
        case 0x2c8754u: goto label_2c8754;
        case 0x2c8758u: goto label_2c8758;
        case 0x2c875cu: goto label_2c875c;
        case 0x2c8760u: goto label_2c8760;
        case 0x2c8764u: goto label_2c8764;
        case 0x2c8768u: goto label_2c8768;
        case 0x2c876cu: goto label_2c876c;
        case 0x2c8770u: goto label_2c8770;
        case 0x2c8774u: goto label_2c8774;
        case 0x2c8778u: goto label_2c8778;
        case 0x2c877cu: goto label_2c877c;
        case 0x2c8780u: goto label_2c8780;
        case 0x2c8784u: goto label_2c8784;
        case 0x2c8788u: goto label_2c8788;
        case 0x2c878cu: goto label_2c878c;
        case 0x2c8790u: goto label_2c8790;
        case 0x2c8794u: goto label_2c8794;
        case 0x2c8798u: goto label_2c8798;
        case 0x2c879cu: goto label_2c879c;
        case 0x2c87a0u: goto label_2c87a0;
        case 0x2c87a4u: goto label_2c87a4;
        case 0x2c87a8u: goto label_2c87a8;
        case 0x2c87acu: goto label_2c87ac;
        case 0x2c87b0u: goto label_2c87b0;
        case 0x2c87b4u: goto label_2c87b4;
        case 0x2c87b8u: goto label_2c87b8;
        case 0x2c87bcu: goto label_2c87bc;
        case 0x2c87c0u: goto label_2c87c0;
        case 0x2c87c4u: goto label_2c87c4;
        case 0x2c87c8u: goto label_2c87c8;
        case 0x2c87ccu: goto label_2c87cc;
        case 0x2c87d0u: goto label_2c87d0;
        case 0x2c87d4u: goto label_2c87d4;
        case 0x2c87d8u: goto label_2c87d8;
        case 0x2c87dcu: goto label_2c87dc;
        case 0x2c87e0u: goto label_2c87e0;
        case 0x2c87e4u: goto label_2c87e4;
        case 0x2c87e8u: goto label_2c87e8;
        case 0x2c87ecu: goto label_2c87ec;
        case 0x2c87f0u: goto label_2c87f0;
        case 0x2c87f4u: goto label_2c87f4;
        case 0x2c87f8u: goto label_2c87f8;
        case 0x2c87fcu: goto label_2c87fc;
        case 0x2c8800u: goto label_2c8800;
        case 0x2c8804u: goto label_2c8804;
        case 0x2c8808u: goto label_2c8808;
        case 0x2c880cu: goto label_2c880c;
        case 0x2c8810u: goto label_2c8810;
        case 0x2c8814u: goto label_2c8814;
        case 0x2c8818u: goto label_2c8818;
        case 0x2c881cu: goto label_2c881c;
        case 0x2c8820u: goto label_2c8820;
        case 0x2c8824u: goto label_2c8824;
        case 0x2c8828u: goto label_2c8828;
        case 0x2c882cu: goto label_2c882c;
        case 0x2c8830u: goto label_2c8830;
        case 0x2c8834u: goto label_2c8834;
        case 0x2c8838u: goto label_2c8838;
        case 0x2c883cu: goto label_2c883c;
        case 0x2c8840u: goto label_2c8840;
        case 0x2c8844u: goto label_2c8844;
        case 0x2c8848u: goto label_2c8848;
        case 0x2c884cu: goto label_2c884c;
        default: break;
    }

    ctx->pc = 0x2c8750u;

label_2c8750:
    // 0x2c8750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c8754:
    // 0x2c8754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c8754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c8758:
    // 0x2c8758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c875c:
    // 0x2c875c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c875cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c8760:
    // 0x2c8760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8764:
    // 0x2c8764: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2c8768:
    if (ctx->pc == 0x2C8768u) {
        ctx->pc = 0x2C8768u;
            // 0x2c8768: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C876Cu;
        goto label_2c876c;
    }
    ctx->pc = 0x2C8764u;
    {
        const bool branch_taken_0x2c8764 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8764u;
            // 0x2c8768: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8764) {
            ctx->pc = 0x2C87A8u;
            goto label_2c87a8;
        }
    }
    ctx->pc = 0x2C876Cu;
label_2c876c:
    // 0x2c876c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c8770:
    if (ctx->pc == 0x2C8770u) {
        ctx->pc = 0x2C8770u;
            // 0x2c8770: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C8774u;
        goto label_2c8774;
    }
    ctx->pc = 0x2C876Cu;
    {
        const bool branch_taken_0x2c876c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c876c) {
            ctx->pc = 0x2C8770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C876Cu;
            // 0x2c8770: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8794u;
            goto label_2c8794;
        }
    }
    ctx->pc = 0x2C8774u;
label_2c8774:
    // 0x2c8774: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2c8778:
    if (ctx->pc == 0x2C8778u) {
        ctx->pc = 0x2C877Cu;
        goto label_2c877c;
    }
    ctx->pc = 0x2C8774u;
    {
        const bool branch_taken_0x2c8774 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8774) {
            ctx->pc = 0x2C8790u;
            goto label_2c8790;
        }
    }
    ctx->pc = 0x2C877Cu;
label_2c877c:
    // 0x2c877c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c877cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c8780:
    // 0x2c8780: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c8784:
    if (ctx->pc == 0x2C8784u) {
        ctx->pc = 0x2C8788u;
        goto label_2c8788;
    }
    ctx->pc = 0x2C8780u;
    {
        const bool branch_taken_0x2c8780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8780) {
            ctx->pc = 0x2C8790u;
            goto label_2c8790;
        }
    }
    ctx->pc = 0x2C8788u;
label_2c8788:
    // 0x2c8788: 0xc0400a8  jal         func_1002A0
label_2c878c:
    if (ctx->pc == 0x2C878Cu) {
        ctx->pc = 0x2C8790u;
        goto label_2c8790;
    }
    ctx->pc = 0x2C8788u;
    SET_GPR_U32(ctx, 31, 0x2C8790u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8790u; }
        if (ctx->pc != 0x2C8790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8790u; }
        if (ctx->pc != 0x2C8790u) { return; }
    }
    ctx->pc = 0x2C8790u;
label_2c8790:
    // 0x2c8790: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c8790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c8794:
    // 0x2c8794: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c8794u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c8798:
    // 0x2c8798: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c879c:
    if (ctx->pc == 0x2C879Cu) {
        ctx->pc = 0x2C879Cu;
            // 0x2c879c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C87A0u;
        goto label_2c87a0;
    }
    ctx->pc = 0x2C8798u;
    {
        const bool branch_taken_0x2c8798 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c8798) {
            ctx->pc = 0x2C879Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8798u;
            // 0x2c879c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C87ACu;
            goto label_2c87ac;
        }
    }
    ctx->pc = 0x2C87A0u;
label_2c87a0:
    // 0x2c87a0: 0xc0400a8  jal         func_1002A0
label_2c87a4:
    if (ctx->pc == 0x2C87A4u) {
        ctx->pc = 0x2C87A4u;
            // 0x2c87a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C87A8u;
        goto label_2c87a8;
    }
    ctx->pc = 0x2C87A0u;
    SET_GPR_U32(ctx, 31, 0x2C87A8u);
    ctx->pc = 0x2C87A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C87A0u;
            // 0x2c87a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C87A8u; }
        if (ctx->pc != 0x2C87A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C87A8u; }
        if (ctx->pc != 0x2C87A8u) { return; }
    }
    ctx->pc = 0x2C87A8u;
label_2c87a8:
    // 0x2c87a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c87a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c87ac:
    // 0x2c87ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c87acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c87b0:
    // 0x2c87b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c87b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c87b4:
    // 0x2c87b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c87b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c87b8:
    // 0x2c87b8: 0x3e00008  jr          $ra
label_2c87bc:
    if (ctx->pc == 0x2C87BCu) {
        ctx->pc = 0x2C87BCu;
            // 0x2c87bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C87C0u;
        goto label_2c87c0;
    }
    ctx->pc = 0x2C87B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C87BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C87B8u;
            // 0x2c87bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C87C0u;
label_2c87c0:
    // 0x2c87c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c87c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c87c4:
    // 0x2c87c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c87c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c87c8:
    // 0x2c87c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c87c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c87cc:
    // 0x2c87cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c87ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c87d0:
    // 0x2c87d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c87d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c87d4:
    // 0x2c87d4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_2c87d8:
    if (ctx->pc == 0x2C87D8u) {
        ctx->pc = 0x2C87D8u;
            // 0x2c87d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C87DCu;
        goto label_2c87dc;
    }
    ctx->pc = 0x2C87D4u;
    {
        const bool branch_taken_0x2c87d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C87D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C87D4u;
            // 0x2c87d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c87d4) {
            ctx->pc = 0x2C8834u;
            goto label_2c8834;
        }
    }
    ctx->pc = 0x2C87DCu;
label_2c87dc:
    // 0x2c87dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c87e0:
    // 0x2c87e0: 0x24420660  addiu       $v0, $v0, 0x660
    ctx->pc = 0x2c87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
label_2c87e4:
    // 0x2c87e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c87e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c87e8:
    // 0x2c87e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c87e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c87ec:
    // 0x2c87ec: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c87ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c87f0:
    // 0x2c87f0: 0x320f809  jalr        $t9
label_2c87f4:
    if (ctx->pc == 0x2C87F4u) {
        ctx->pc = 0x2C87F8u;
        goto label_2c87f8;
    }
    ctx->pc = 0x2C87F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C87F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C87F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C87F8u; }
            if (ctx->pc != 0x2C87F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C87F8u;
label_2c87f8:
    // 0x2c87f8: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c87fc:
    if (ctx->pc == 0x2C87FCu) {
        ctx->pc = 0x2C87FCu;
            // 0x2c87fc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C8800u;
        goto label_2c8800;
    }
    ctx->pc = 0x2C87F8u;
    {
        const bool branch_taken_0x2c87f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c87f8) {
            ctx->pc = 0x2C87FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C87F8u;
            // 0x2c87fc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8820u;
            goto label_2c8820;
        }
    }
    ctx->pc = 0x2C8800u;
label_2c8800:
    // 0x2c8800: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c8804:
    // 0x2c8804: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c8804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2c8808:
    // 0x2c8808: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2c880c:
    if (ctx->pc == 0x2C880Cu) {
        ctx->pc = 0x2C880Cu;
            // 0x2c880c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C8810u;
        goto label_2c8810;
    }
    ctx->pc = 0x2C8808u;
    {
        const bool branch_taken_0x2c8808 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C880Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8808u;
            // 0x2c880c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8808) {
            ctx->pc = 0x2C881Cu;
            goto label_2c881c;
        }
    }
    ctx->pc = 0x2C8810u;
label_2c8810:
    // 0x2c8810: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c8814:
    // 0x2c8814: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c8814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c8818:
    // 0x2c8818: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c8818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c881c:
    // 0x2c881c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c881cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c8820:
    // 0x2c8820: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c8820u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c8824:
    // 0x2c8824: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c8828:
    if (ctx->pc == 0x2C8828u) {
        ctx->pc = 0x2C8828u;
            // 0x2c8828: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C882Cu;
        goto label_2c882c;
    }
    ctx->pc = 0x2C8824u;
    {
        const bool branch_taken_0x2c8824 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c8824) {
            ctx->pc = 0x2C8828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8824u;
            // 0x2c8828: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8838u;
            goto label_2c8838;
        }
    }
    ctx->pc = 0x2C882Cu;
label_2c882c:
    // 0x2c882c: 0xc0400a8  jal         func_1002A0
label_2c8830:
    if (ctx->pc == 0x2C8830u) {
        ctx->pc = 0x2C8830u;
            // 0x2c8830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8834u;
        goto label_2c8834;
    }
    ctx->pc = 0x2C882Cu;
    SET_GPR_U32(ctx, 31, 0x2C8834u);
    ctx->pc = 0x2C8830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C882Cu;
            // 0x2c8830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8834u; }
        if (ctx->pc != 0x2C8834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8834u; }
        if (ctx->pc != 0x2C8834u) { return; }
    }
    ctx->pc = 0x2C8834u;
label_2c8834:
    // 0x2c8834: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c8834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8838:
    // 0x2c8838: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c883c:
    // 0x2c883c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c883cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8840:
    // 0x2c8840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8844:
    // 0x2c8844: 0x3e00008  jr          $ra
label_2c8848:
    if (ctx->pc == 0x2C8848u) {
        ctx->pc = 0x2C8848u;
            // 0x2c8848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C884Cu;
        goto label_2c884c;
    }
    ctx->pc = 0x2C8844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8844u;
            // 0x2c8848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C884Cu;
label_2c884c:
    // 0x2c884c: 0x0  nop
    ctx->pc = 0x2c884cu;
    // NOP
}
