#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F5E8
// Address: 0x19f5e8 - 0x19f840
void sub_0019F5E8_0x19f5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F5E8_0x19f5e8");
#endif

    switch (ctx->pc) {
        case 0x19f5e8u: goto label_19f5e8;
        case 0x19f5ecu: goto label_19f5ec;
        case 0x19f5f0u: goto label_19f5f0;
        case 0x19f5f4u: goto label_19f5f4;
        case 0x19f5f8u: goto label_19f5f8;
        case 0x19f5fcu: goto label_19f5fc;
        case 0x19f600u: goto label_19f600;
        case 0x19f604u: goto label_19f604;
        case 0x19f608u: goto label_19f608;
        case 0x19f60cu: goto label_19f60c;
        case 0x19f610u: goto label_19f610;
        case 0x19f614u: goto label_19f614;
        case 0x19f618u: goto label_19f618;
        case 0x19f61cu: goto label_19f61c;
        case 0x19f620u: goto label_19f620;
        case 0x19f624u: goto label_19f624;
        case 0x19f628u: goto label_19f628;
        case 0x19f62cu: goto label_19f62c;
        case 0x19f630u: goto label_19f630;
        case 0x19f634u: goto label_19f634;
        case 0x19f638u: goto label_19f638;
        case 0x19f63cu: goto label_19f63c;
        case 0x19f640u: goto label_19f640;
        case 0x19f644u: goto label_19f644;
        case 0x19f648u: goto label_19f648;
        case 0x19f64cu: goto label_19f64c;
        case 0x19f650u: goto label_19f650;
        case 0x19f654u: goto label_19f654;
        case 0x19f658u: goto label_19f658;
        case 0x19f65cu: goto label_19f65c;
        case 0x19f660u: goto label_19f660;
        case 0x19f664u: goto label_19f664;
        case 0x19f668u: goto label_19f668;
        case 0x19f66cu: goto label_19f66c;
        case 0x19f670u: goto label_19f670;
        case 0x19f674u: goto label_19f674;
        case 0x19f678u: goto label_19f678;
        case 0x19f67cu: goto label_19f67c;
        case 0x19f680u: goto label_19f680;
        case 0x19f684u: goto label_19f684;
        case 0x19f688u: goto label_19f688;
        case 0x19f68cu: goto label_19f68c;
        case 0x19f690u: goto label_19f690;
        case 0x19f694u: goto label_19f694;
        case 0x19f698u: goto label_19f698;
        case 0x19f69cu: goto label_19f69c;
        case 0x19f6a0u: goto label_19f6a0;
        case 0x19f6a4u: goto label_19f6a4;
        case 0x19f6a8u: goto label_19f6a8;
        case 0x19f6acu: goto label_19f6ac;
        case 0x19f6b0u: goto label_19f6b0;
        case 0x19f6b4u: goto label_19f6b4;
        case 0x19f6b8u: goto label_19f6b8;
        case 0x19f6bcu: goto label_19f6bc;
        case 0x19f6c0u: goto label_19f6c0;
        case 0x19f6c4u: goto label_19f6c4;
        case 0x19f6c8u: goto label_19f6c8;
        case 0x19f6ccu: goto label_19f6cc;
        case 0x19f6d0u: goto label_19f6d0;
        case 0x19f6d4u: goto label_19f6d4;
        case 0x19f6d8u: goto label_19f6d8;
        case 0x19f6dcu: goto label_19f6dc;
        case 0x19f6e0u: goto label_19f6e0;
        case 0x19f6e4u: goto label_19f6e4;
        case 0x19f6e8u: goto label_19f6e8;
        case 0x19f6ecu: goto label_19f6ec;
        case 0x19f6f0u: goto label_19f6f0;
        case 0x19f6f4u: goto label_19f6f4;
        case 0x19f6f8u: goto label_19f6f8;
        case 0x19f6fcu: goto label_19f6fc;
        case 0x19f700u: goto label_19f700;
        case 0x19f704u: goto label_19f704;
        case 0x19f708u: goto label_19f708;
        case 0x19f70cu: goto label_19f70c;
        case 0x19f710u: goto label_19f710;
        case 0x19f714u: goto label_19f714;
        case 0x19f718u: goto label_19f718;
        case 0x19f71cu: goto label_19f71c;
        case 0x19f720u: goto label_19f720;
        case 0x19f724u: goto label_19f724;
        case 0x19f728u: goto label_19f728;
        case 0x19f72cu: goto label_19f72c;
        case 0x19f730u: goto label_19f730;
        case 0x19f734u: goto label_19f734;
        case 0x19f738u: goto label_19f738;
        case 0x19f73cu: goto label_19f73c;
        case 0x19f740u: goto label_19f740;
        case 0x19f744u: goto label_19f744;
        case 0x19f748u: goto label_19f748;
        case 0x19f74cu: goto label_19f74c;
        case 0x19f750u: goto label_19f750;
        case 0x19f754u: goto label_19f754;
        case 0x19f758u: goto label_19f758;
        case 0x19f75cu: goto label_19f75c;
        case 0x19f760u: goto label_19f760;
        case 0x19f764u: goto label_19f764;
        case 0x19f768u: goto label_19f768;
        case 0x19f76cu: goto label_19f76c;
        case 0x19f770u: goto label_19f770;
        case 0x19f774u: goto label_19f774;
        case 0x19f778u: goto label_19f778;
        case 0x19f77cu: goto label_19f77c;
        case 0x19f780u: goto label_19f780;
        case 0x19f784u: goto label_19f784;
        case 0x19f788u: goto label_19f788;
        case 0x19f78cu: goto label_19f78c;
        case 0x19f790u: goto label_19f790;
        case 0x19f794u: goto label_19f794;
        case 0x19f798u: goto label_19f798;
        case 0x19f79cu: goto label_19f79c;
        case 0x19f7a0u: goto label_19f7a0;
        case 0x19f7a4u: goto label_19f7a4;
        case 0x19f7a8u: goto label_19f7a8;
        case 0x19f7acu: goto label_19f7ac;
        case 0x19f7b0u: goto label_19f7b0;
        case 0x19f7b4u: goto label_19f7b4;
        case 0x19f7b8u: goto label_19f7b8;
        case 0x19f7bcu: goto label_19f7bc;
        case 0x19f7c0u: goto label_19f7c0;
        case 0x19f7c4u: goto label_19f7c4;
        case 0x19f7c8u: goto label_19f7c8;
        case 0x19f7ccu: goto label_19f7cc;
        case 0x19f7d0u: goto label_19f7d0;
        case 0x19f7d4u: goto label_19f7d4;
        case 0x19f7d8u: goto label_19f7d8;
        case 0x19f7dcu: goto label_19f7dc;
        case 0x19f7e0u: goto label_19f7e0;
        case 0x19f7e4u: goto label_19f7e4;
        case 0x19f7e8u: goto label_19f7e8;
        case 0x19f7ecu: goto label_19f7ec;
        case 0x19f7f0u: goto label_19f7f0;
        case 0x19f7f4u: goto label_19f7f4;
        case 0x19f7f8u: goto label_19f7f8;
        case 0x19f7fcu: goto label_19f7fc;
        case 0x19f800u: goto label_19f800;
        case 0x19f804u: goto label_19f804;
        case 0x19f808u: goto label_19f808;
        case 0x19f80cu: goto label_19f80c;
        case 0x19f810u: goto label_19f810;
        case 0x19f814u: goto label_19f814;
        case 0x19f818u: goto label_19f818;
        case 0x19f81cu: goto label_19f81c;
        case 0x19f820u: goto label_19f820;
        case 0x19f824u: goto label_19f824;
        case 0x19f828u: goto label_19f828;
        case 0x19f82cu: goto label_19f82c;
        case 0x19f830u: goto label_19f830;
        case 0x19f834u: goto label_19f834;
        case 0x19f838u: goto label_19f838;
        case 0x19f83cu: goto label_19f83c;
        default: break;
    }

    ctx->pc = 0x19f5e8u;

label_19f5e8:
    // 0x19f5e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19f5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19f5ec:
    // 0x19f5ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f5f0:
    // 0x19f5f0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x19f5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_19f5f4:
    // 0x19f5f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f5f8:
    // 0x19f5f8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x19f5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_19f5fc:
    // 0x19f5fc: 0x26110408  addiu       $s1, $s0, 0x408
    ctx->pc = 0x19f5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1032));
label_19f600:
    // 0x19f600: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x19f600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_19f604:
    // 0x19f604: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x19f604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_19f608:
    // 0x19f608: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19f608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19f60c:
    // 0x19f60c: 0x8e1203f0  lw          $s2, 0x3F0($s0)
    ctx->pc = 0x19f60cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1008)));
label_19f610:
    // 0x19f610: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19f614:
    // 0x19f614: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x19f614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_19f618:
    // 0x19f618: 0x40f809  jalr        $v0
label_19f61c:
    if (ctx->pc == 0x19F61Cu) {
        ctx->pc = 0x19F61Cu;
            // 0x19f61c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19F620u;
        goto label_19f620;
    }
    ctx->pc = 0x19F618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F620u);
        ctx->pc = 0x19F61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F618u;
            // 0x19f61c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19F620u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19F620u; }
            if (ctx->pc != 0x19F620u) { return; }
        }
        }
    }
    ctx->pc = 0x19F620u;
label_19f620:
    // 0x19f620: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x19f620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_19f624:
    // 0x19f624: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x19f624u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_19f628:
    // 0x19f628: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19f628u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f62c:
    // 0x19f62c: 0x24a5a210  addiu       $a1, $a1, -0x5DF0
    ctx->pc = 0x19f62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943248));
label_19f630:
    // 0x19f630: 0x24c6a218  addiu       $a2, $a2, -0x5DE8
    ctx->pc = 0x19f630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943256));
label_19f634:
    // 0x19f634: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19f634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19f638:
    // 0x19f638: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_19f63c:
    if (ctx->pc == 0x19F63Cu) {
        ctx->pc = 0x19F63Cu;
            // 0x19f63c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x19F640u;
        goto label_19f640;
    }
    ctx->pc = 0x19F638u;
    {
        const bool branch_taken_0x19f638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F638u;
            // 0x19f63c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f638) {
            ctx->pc = 0x19F658u;
            goto label_19f658;
        }
    }
    ctx->pc = 0x19F640u;
label_19f640:
    // 0x19f640: 0x8e0203f4  lw          $v0, 0x3F4($s0)
    ctx->pc = 0x19f640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1012)));
label_19f644:
    // 0x19f644: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x19f644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_19f648:
    // 0x19f648: 0xc061cb0  jal         func_1872C0
label_19f64c:
    if (ctx->pc == 0x19F64Cu) {
        ctx->pc = 0x19F64Cu;
            // 0x19f64c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x19F650u;
        goto label_19f650;
    }
    ctx->pc = 0x19F648u;
    SET_GPR_U32(ctx, 31, 0x19F650u);
    ctx->pc = 0x19F64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F648u;
            // 0x19f64c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1872C0u;
    if (runtime->hasFunction(0x1872C0u)) {
        auto targetFn = runtime->lookupFunction(0x1872C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F650u; }
        if (ctx->pc != 0x19F650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001872C0_0x1872c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F650u; }
        if (ctx->pc != 0x19F650u) { return; }
    }
    ctx->pc = 0x19F650u;
label_19f650:
    // 0x19f650: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_19f654:
    if (ctx->pc == 0x19F654u) {
        ctx->pc = 0x19F654u;
            // 0x19f654: 0x261303fc  addiu       $s3, $s0, 0x3FC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1020));
        ctx->pc = 0x19F658u;
        goto label_19f658;
    }
    ctx->pc = 0x19F650u;
    {
        const bool branch_taken_0x19f650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F650u;
            // 0x19f654: 0x261303fc  addiu       $s3, $s0, 0x3FC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1020));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f650) {
            ctx->pc = 0x19F670u;
            goto label_19f670;
        }
    }
    ctx->pc = 0x19F658u;
label_19f658:
    // 0x19f658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f65c:
    // 0x19f65c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x19f65cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_19f660:
    // 0x19f660: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x19f660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_19f664:
    // 0x19f664: 0x1000002c  b           . + 4 + (0x2C << 2)
label_19f668:
    if (ctx->pc == 0x19F668u) {
        ctx->pc = 0x19F668u;
            // 0x19f668: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x19F66Cu;
        goto label_19f66c;
    }
    ctx->pc = 0x19F664u;
    {
        const bool branch_taken_0x19f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F664u;
            // 0x19f668: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f664) {
            ctx->pc = 0x19F718u;
            goto label_19f718;
        }
    }
    ctx->pc = 0x19F66Cu;
label_19f66c:
    // 0x19f66c: 0x0  nop
    ctx->pc = 0x19f66cu;
    // NOP
label_19f670:
    // 0x19f670: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x19f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_19f674:
    // 0x19f674: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_19f678:
    if (ctx->pc == 0x19F678u) {
        ctx->pc = 0x19F678u;
            // 0x19f678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19F67Cu;
        goto label_19f67c;
    }
    ctx->pc = 0x19F674u;
    {
        const bool branch_taken_0x19f674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F674u;
            // 0x19f678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f674) {
            ctx->pc = 0x19F6F8u;
            goto label_19f6f8;
        }
    }
    ctx->pc = 0x19F67Cu;
label_19f67c:
    // 0x19f67c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x19f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19f680:
    // 0x19f680: 0xc04a508  jal         func_129420
label_19f684:
    if (ctx->pc == 0x19F684u) {
        ctx->pc = 0x19F684u;
            // 0x19f684: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x19F688u;
        goto label_19f688;
    }
    ctx->pc = 0x19F680u;
    SET_GPR_U32(ctx, 31, 0x19F688u);
    ctx->pc = 0x19F684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F680u;
            // 0x19f684: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F688u; }
        if (ctx->pc != 0x19F688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F688u; }
        if (ctx->pc != 0x19F688u) { return; }
    }
    ctx->pc = 0x19F688u;
label_19f688:
    // 0x19f688: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x19f688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_19f68c:
    // 0x19f68c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x19f68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_19f690:
    // 0x19f690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f694:
    // 0x19f694: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x19f694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19f698:
    // 0x19f698: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x19f698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19f69c:
    // 0x19f69c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x19f69cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_19f6a0:
    // 0x19f6a0: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x19f6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_19f6a4:
    // 0x19f6a4: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x19f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_19f6a8:
    // 0x19f6a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19f6a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f6ac:
    // 0x19f6ac: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x19f6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_19f6b0:
    // 0x19f6b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f6b4:
    // 0x19f6b4: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x19f6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
label_19f6b8:
    // 0x19f6b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f6bc:
    // 0x19f6bc: 0x40f809  jalr        $v0
label_19f6c0:
    if (ctx->pc == 0x19F6C0u) {
        ctx->pc = 0x19F6C0u;
            // 0x19f6c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x19F6C4u;
        goto label_19f6c4;
    }
    ctx->pc = 0x19F6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F6C4u);
        ctx->pc = 0x19F6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F6BCu;
            // 0x19f6c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19F6C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19F6C4u; }
            if (ctx->pc != 0x19F6C4u) { return; }
        }
        }
    }
    ctx->pc = 0x19F6C4u;
label_19f6c4:
    // 0x19f6c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19f6c8:
    // 0x19f6c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f6cc:
    // 0x19f6cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19f6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f6d0:
    // 0x19f6d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19f6d4:
    // 0x19f6d4: 0x40f809  jalr        $v0
label_19f6d8:
    if (ctx->pc == 0x19F6D8u) {
        ctx->pc = 0x19F6D8u;
            // 0x19f6d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19F6DCu;
        goto label_19f6dc;
    }
    ctx->pc = 0x19F6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F6DCu);
        ctx->pc = 0x19F6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F6D4u;
            // 0x19f6d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19F6DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19F6DCu; }
            if (ctx->pc != 0x19F6DCu) { return; }
        }
        }
    }
    ctx->pc = 0x19F6DCu;
label_19f6dc:
    // 0x19f6dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19f6e0:
    // 0x19f6e0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x19f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_19f6e4:
    // 0x19f6e4: 0x40f809  jalr        $v0
label_19f6e8:
    if (ctx->pc == 0x19F6E8u) {
        ctx->pc = 0x19F6E8u;
            // 0x19f6e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19F6ECu;
        goto label_19f6ec;
    }
    ctx->pc = 0x19F6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F6ECu);
        ctx->pc = 0x19F6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F6E4u;
            // 0x19f6e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19F6ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19F6ECu; }
            if (ctx->pc != 0x19F6ECu) { return; }
        }
        }
    }
    ctx->pc = 0x19F6ECu;
label_19f6ec:
    // 0x19f6ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_19f6f0:
    if (ctx->pc == 0x19F6F0u) {
        ctx->pc = 0x19F6F0u;
            // 0x19f6f0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x19F6F4u;
        goto label_19f6f4;
    }
    ctx->pc = 0x19F6ECu;
    {
        const bool branch_taken_0x19f6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F6ECu;
            // 0x19f6f0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6ec) {
            ctx->pc = 0x19F71Cu;
            goto label_19f71c;
        }
    }
    ctx->pc = 0x19F6F4u;
label_19f6f4:
    // 0x19f6f4: 0x0  nop
    ctx->pc = 0x19f6f4u;
    // NOP
label_19f6f8:
    // 0x19f6f8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x19f6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_19f6fc:
    // 0x19f6fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f700:
    // 0x19f700: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19f700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19f704:
    // 0x19f704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f708:
    // 0x19f708: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x19f708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_19f70c:
    // 0x19f70c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x19f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_19f710:
    // 0x19f710: 0xc067e10  jal         func_19F840
label_19f714:
    if (ctx->pc == 0x19F714u) {
        ctx->pc = 0x19F714u;
            // 0x19f714: 0xae250008  sw          $a1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
        ctx->pc = 0x19F718u;
        goto label_19f718;
    }
    ctx->pc = 0x19F710u;
    SET_GPR_U32(ctx, 31, 0x19F718u);
    ctx->pc = 0x19F714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F710u;
            // 0x19f714: 0xae250008  sw          $a1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F840u;
    if (runtime->hasFunction(0x19F840u)) {
        auto targetFn = runtime->lookupFunction(0x19F840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F718u; }
        if (ctx->pc != 0x19F718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F840_0x19f840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F718u; }
        if (ctx->pc != 0x19F718u) { return; }
    }
    ctx->pc = 0x19F718u;
label_19f718:
    // 0x19f718: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x19f718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f71c:
    // 0x19f71c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x19f71cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_19f720:
    // 0x19f720: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x19f720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19f724:
    // 0x19f724: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x19f724u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_19f728:
    // 0x19f728: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19f728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19f72c:
    // 0x19f72c: 0x3e00008  jr          $ra
label_19f730:
    if (ctx->pc == 0x19F730u) {
        ctx->pc = 0x19F730u;
            // 0x19f730: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x19F734u;
        goto label_19f734;
    }
    ctx->pc = 0x19F72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F72Cu;
            // 0x19f730: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F734u;
label_19f734:
    // 0x19f734: 0x0  nop
    ctx->pc = 0x19f734u;
    // NOP
label_19f738:
    // 0x19f738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19f73c:
    // 0x19f73c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x19f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_19f740:
    // 0x19f740: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19f740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19f744:
    // 0x19f744: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19f744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19f748:
    // 0x19f748: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_19f74c:
    // 0x19f74c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f750:
    // 0x19f750: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x19f750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_19f754:
    // 0x19f754: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_19f758:
    // 0x19f758: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19f758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_19f75c:
    // 0x19f75c: 0x249003fc  addiu       $s0, $a0, 0x3FC
    ctx->pc = 0x19f75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1020));
label_19f760:
    // 0x19f760: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19f764:
    if (ctx->pc == 0x19F764u) {
        ctx->pc = 0x19F764u;
            // 0x19f764: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19F768u;
        goto label_19f768;
    }
    ctx->pc = 0x19F760u;
    {
        const bool branch_taken_0x19f760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F760u;
            // 0x19f764: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f760) {
            ctx->pc = 0x19F774u;
            goto label_19f774;
        }
    }
    ctx->pc = 0x19F768u;
label_19f768:
    // 0x19f768: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19f768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_19f76c:
    // 0x19f76c: 0xc0686c6  jal         func_1A1B18
label_19f770:
    if (ctx->pc == 0x19F770u) {
        ctx->pc = 0x19F770u;
            // 0x19f770: 0x2484a220  addiu       $a0, $a0, -0x5DE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943264));
        ctx->pc = 0x19F774u;
        goto label_19f774;
    }
    ctx->pc = 0x19F76Cu;
    SET_GPR_U32(ctx, 31, 0x19F774u);
    ctx->pc = 0x19F770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F76Cu;
            // 0x19f770: 0x2484a220  addiu       $a0, $a0, -0x5DE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F774u; }
        if (ctx->pc != 0x19F774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F774u; }
        if (ctx->pc != 0x19F774u) { return; }
    }
    ctx->pc = 0x19F774u;
label_19f774:
    // 0x19f774: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x19f774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_19f778:
    // 0x19f778: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x19f778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_19f77c:
    // 0x19f77c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f77cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19f780:
    // 0x19f780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f784:
    // 0x19f784: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19f784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f788:
    // 0x19f788: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19f788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_19f78c:
    // 0x19f78c: 0x3e00008  jr          $ra
label_19f790:
    if (ctx->pc == 0x19F790u) {
        ctx->pc = 0x19F790u;
            // 0x19f790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x19F794u;
        goto label_19f794;
    }
    ctx->pc = 0x19F78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F78Cu;
            // 0x19f790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F794u;
label_19f794:
    // 0x19f794: 0x0  nop
    ctx->pc = 0x19f794u;
    // NOP
label_19f798:
    // 0x19f798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19f79c:
    // 0x19f79c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19f79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f7a0:
    // 0x19f7a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19f7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_19f7a4:
    // 0x19f7a4: 0x24430408  addiu       $v1, $v0, 0x408
    ctx->pc = 0x19f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1032));
label_19f7a8:
    // 0x19f7a8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19f7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_19f7ac:
    // 0x19f7ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19f7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19f7b0:
    // 0x19f7b0: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x19f7b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_19f7b4:
    // 0x19f7b4: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_19f7b8:
    if (ctx->pc == 0x19F7B8u) {
        ctx->pc = 0x19F7B8u;
            // 0x19f7b8: 0x8c5000b8  lw          $s0, 0xB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
        ctx->pc = 0x19F7BCu;
        goto label_19f7bc;
    }
    ctx->pc = 0x19F7B4u;
    {
        const bool branch_taken_0x19f7b4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7B4u;
            // 0x19f7b8: 0x8c5000b8  lw          $s0, 0xB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7b4) {
            ctx->pc = 0x19F7D8u;
            goto label_19f7d8;
        }
    }
    ctx->pc = 0x19F7BCu;
label_19f7bc:
    // 0x19f7bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f7c0:
    // 0x19f7c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f7c4:
    // 0x19f7c4: 0xc06fa20  jal         func_1BE880
label_19f7c8:
    if (ctx->pc == 0x19F7C8u) {
        ctx->pc = 0x19F7C8u;
            // 0x19f7c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19F7CCu;
        goto label_19f7cc;
    }
    ctx->pc = 0x19F7C4u;
    SET_GPR_U32(ctx, 31, 0x19F7CCu);
    ctx->pc = 0x19F7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7C4u;
            // 0x19f7c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE880u;
    if (runtime->hasFunction(0x1BE880u)) {
        auto targetFn = runtime->lookupFunction(0x1BE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7CCu; }
        if (ctx->pc != 0x19F7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE880_0x1be880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7CCu; }
        if (ctx->pc != 0x19F7CCu) { return; }
    }
    ctx->pc = 0x19F7CCu;
label_19f7cc:
    // 0x19f7cc: 0x10000019  b           . + 4 + (0x19 << 2)
label_19f7d0:
    if (ctx->pc == 0x19F7D0u) {
        ctx->pc = 0x19F7D0u;
            // 0x19f7d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x19F7D4u;
        goto label_19f7d4;
    }
    ctx->pc = 0x19F7CCu;
    {
        const bool branch_taken_0x19f7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7CCu;
            // 0x19f7d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7cc) {
            ctx->pc = 0x19F834u;
            goto label_19f834;
        }
    }
    ctx->pc = 0x19F7D4u;
label_19f7d4:
    // 0x19f7d4: 0x0  nop
    ctx->pc = 0x19f7d4u;
    // NOP
label_19f7d8:
    // 0x19f7d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x19f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19f7dc:
    // 0x19f7dc: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x19f7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_19f7e0:
    // 0x19f7e0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x19f7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_19f7e4:
    // 0x19f7e4: 0x24a5a258  addiu       $a1, $a1, -0x5DA8
    ctx->pc = 0x19f7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943320));
label_19f7e8:
    // 0x19f7e8: 0x24c6a260  addiu       $a2, $a2, -0x5DA0
    ctx->pc = 0x19f7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943328));
label_19f7ec:
    // 0x19f7ec: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x19f7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19f7f0:
    // 0x19f7f0: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x19f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_19f7f4:
    // 0x19f7f4: 0xc061cb0  jal         func_1872C0
label_19f7f8:
    if (ctx->pc == 0x19F7F8u) {
        ctx->pc = 0x19F7F8u;
            // 0x19f7f8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x19F7FCu;
        goto label_19f7fc;
    }
    ctx->pc = 0x19F7F4u;
    SET_GPR_U32(ctx, 31, 0x19F7FCu);
    ctx->pc = 0x19F7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7F4u;
            // 0x19f7f8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1872C0u;
    if (runtime->hasFunction(0x1872C0u)) {
        auto targetFn = runtime->lookupFunction(0x1872C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7FCu; }
        if (ctx->pc != 0x19F7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001872C0_0x1872c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7FCu; }
        if (ctx->pc != 0x19F7FCu) { return; }
    }
    ctx->pc = 0x19F7FCu;
label_19f7fc:
    // 0x19f7fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f800:
    // 0x19f800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f804:
    // 0x19f804: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_19f808:
    if (ctx->pc == 0x19F808u) {
        ctx->pc = 0x19F808u;
            // 0x19f808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19F80Cu;
        goto label_19f80c;
    }
    ctx->pc = 0x19F804u;
    {
        const bool branch_taken_0x19f804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F804u;
            // 0x19f808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f804) {
            ctx->pc = 0x19F820u;
            goto label_19f820;
        }
    }
    ctx->pc = 0x19F80Cu;
label_19f80c:
    // 0x19f80c: 0xc06fa20  jal         func_1BE880
label_19f810:
    if (ctx->pc == 0x19F810u) {
        ctx->pc = 0x19F814u;
        goto label_19f814;
    }
    ctx->pc = 0x19F80Cu;
    SET_GPR_U32(ctx, 31, 0x19F814u);
    ctx->pc = 0x1BE880u;
    if (runtime->hasFunction(0x1BE880u)) {
        auto targetFn = runtime->lookupFunction(0x1BE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F814u; }
        if (ctx->pc != 0x19F814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE880_0x1be880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F814u; }
        if (ctx->pc != 0x19F814u) { return; }
    }
    ctx->pc = 0x19F814u;
label_19f814:
    // 0x19f814: 0x10000007  b           . + 4 + (0x7 << 2)
label_19f818:
    if (ctx->pc == 0x19F818u) {
        ctx->pc = 0x19F818u;
            // 0x19f818: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x19F81Cu;
        goto label_19f81c;
    }
    ctx->pc = 0x19F814u;
    {
        const bool branch_taken_0x19f814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F814u;
            // 0x19f818: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f814) {
            ctx->pc = 0x19F834u;
            goto label_19f834;
        }
    }
    ctx->pc = 0x19F81Cu;
label_19f81c:
    // 0x19f81c: 0x0  nop
    ctx->pc = 0x19f81cu;
    // NOP
label_19f820:
    // 0x19f820: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x19f820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19f824:
    // 0x19f824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f828:
    // 0x19f828: 0xc06fa20  jal         func_1BE880
label_19f82c:
    if (ctx->pc == 0x19F82Cu) {
        ctx->pc = 0x19F82Cu;
            // 0x19f82c: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x19F830u;
        goto label_19f830;
    }
    ctx->pc = 0x19F828u;
    SET_GPR_U32(ctx, 31, 0x19F830u);
    ctx->pc = 0x19F82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F828u;
            // 0x19f82c: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE880u;
    if (runtime->hasFunction(0x1BE880u)) {
        auto targetFn = runtime->lookupFunction(0x1BE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F830u; }
        if (ctx->pc != 0x19F830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE880_0x1be880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F830u; }
        if (ctx->pc != 0x19F830u) { return; }
    }
    ctx->pc = 0x19F830u;
label_19f830:
    // 0x19f830: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19f830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f834:
    // 0x19f834: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19f834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_19f838:
    // 0x19f838: 0x3e00008  jr          $ra
label_19f83c:
    if (ctx->pc == 0x19F83Cu) {
        ctx->pc = 0x19F83Cu;
            // 0x19f83c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x19F840u;
        goto label_fallthrough_0x19f838;
    }
    ctx->pc = 0x19F838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F838u;
            // 0x19f83c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x19f838:
    ctx->pc = 0x19F840u;
}
