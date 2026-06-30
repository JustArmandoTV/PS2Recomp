#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B75F8
// Address: 0x1b75f8 - 0x1b7710
void sub_001B75F8_0x1b75f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B75F8_0x1b75f8");
#endif

    switch (ctx->pc) {
        case 0x1b75f8u: goto label_1b75f8;
        case 0x1b75fcu: goto label_1b75fc;
        case 0x1b7600u: goto label_1b7600;
        case 0x1b7604u: goto label_1b7604;
        case 0x1b7608u: goto label_1b7608;
        case 0x1b760cu: goto label_1b760c;
        case 0x1b7610u: goto label_1b7610;
        case 0x1b7614u: goto label_1b7614;
        case 0x1b7618u: goto label_1b7618;
        case 0x1b761cu: goto label_1b761c;
        case 0x1b7620u: goto label_1b7620;
        case 0x1b7624u: goto label_1b7624;
        case 0x1b7628u: goto label_1b7628;
        case 0x1b762cu: goto label_1b762c;
        case 0x1b7630u: goto label_1b7630;
        case 0x1b7634u: goto label_1b7634;
        case 0x1b7638u: goto label_1b7638;
        case 0x1b763cu: goto label_1b763c;
        case 0x1b7640u: goto label_1b7640;
        case 0x1b7644u: goto label_1b7644;
        case 0x1b7648u: goto label_1b7648;
        case 0x1b764cu: goto label_1b764c;
        case 0x1b7650u: goto label_1b7650;
        case 0x1b7654u: goto label_1b7654;
        case 0x1b7658u: goto label_1b7658;
        case 0x1b765cu: goto label_1b765c;
        case 0x1b7660u: goto label_1b7660;
        case 0x1b7664u: goto label_1b7664;
        case 0x1b7668u: goto label_1b7668;
        case 0x1b766cu: goto label_1b766c;
        case 0x1b7670u: goto label_1b7670;
        case 0x1b7674u: goto label_1b7674;
        case 0x1b7678u: goto label_1b7678;
        case 0x1b767cu: goto label_1b767c;
        case 0x1b7680u: goto label_1b7680;
        case 0x1b7684u: goto label_1b7684;
        case 0x1b7688u: goto label_1b7688;
        case 0x1b768cu: goto label_1b768c;
        case 0x1b7690u: goto label_1b7690;
        case 0x1b7694u: goto label_1b7694;
        case 0x1b7698u: goto label_1b7698;
        case 0x1b769cu: goto label_1b769c;
        case 0x1b76a0u: goto label_1b76a0;
        case 0x1b76a4u: goto label_1b76a4;
        case 0x1b76a8u: goto label_1b76a8;
        case 0x1b76acu: goto label_1b76ac;
        case 0x1b76b0u: goto label_1b76b0;
        case 0x1b76b4u: goto label_1b76b4;
        case 0x1b76b8u: goto label_1b76b8;
        case 0x1b76bcu: goto label_1b76bc;
        case 0x1b76c0u: goto label_1b76c0;
        case 0x1b76c4u: goto label_1b76c4;
        case 0x1b76c8u: goto label_1b76c8;
        case 0x1b76ccu: goto label_1b76cc;
        case 0x1b76d0u: goto label_1b76d0;
        case 0x1b76d4u: goto label_1b76d4;
        case 0x1b76d8u: goto label_1b76d8;
        case 0x1b76dcu: goto label_1b76dc;
        case 0x1b76e0u: goto label_1b76e0;
        case 0x1b76e4u: goto label_1b76e4;
        case 0x1b76e8u: goto label_1b76e8;
        case 0x1b76ecu: goto label_1b76ec;
        case 0x1b76f0u: goto label_1b76f0;
        case 0x1b76f4u: goto label_1b76f4;
        case 0x1b76f8u: goto label_1b76f8;
        case 0x1b76fcu: goto label_1b76fc;
        case 0x1b7700u: goto label_1b7700;
        case 0x1b7704u: goto label_1b7704;
        case 0x1b7708u: goto label_1b7708;
        case 0x1b770cu: goto label_1b770c;
        default: break;
    }

    ctx->pc = 0x1b75f8u;

label_1b75f8:
    // 0x1b75f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b75f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b75fc:
    // 0x1b75fc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1b75fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b7600:
    // 0x1b7600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b7604:
    // 0x1b7604: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b7604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b7608:
    // 0x1b7608: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b760c:
    // 0x1b760c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b760cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b7610:
    // 0x1b7610: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b7610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b7614:
    // 0x1b7614: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b7614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1b7618:
    // 0x1b7618: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b7618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1b761c:
    // 0x1b761c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b761cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7620:
    // 0x1b7620: 0x34a50221  ori         $a1, $a1, 0x221
    ctx->pc = 0x1b7620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)545);
label_1b7624:
    // 0x1b7624: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b7624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b7628:
    // 0x1b7628: 0x8d120000  lw          $s2, 0x0($t0)
    ctx->pc = 0x1b7628u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1b762c:
    // 0x1b762c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b762cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7630:
    // 0x1b7630: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1b7630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1b7634:
    // 0x1b7634: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1b7634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_1b7638:
    // 0x1b7638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b763c:
    // 0x1b763c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b763cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b7640:
    // 0x1b7640: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x1b7640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
label_1b7644:
    // 0x1b7644: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b7644u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1b7648:
    // 0x1b7648: 0x8c22ae68  lw          $v0, -0x5198($at)
    ctx->pc = 0x1b7648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946408)));
label_1b764c:
    // 0x1b764c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1b7650:
    if (ctx->pc == 0x1B7650u) {
        ctx->pc = 0x1B7650u;
            // 0x1b7650: 0x124880  sll         $t1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x1B7654u;
        goto label_1b7654;
    }
    ctx->pc = 0x1B764Cu;
    {
        const bool branch_taken_0x1b764c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B764Cu;
            // 0x1b7650: 0x124880  sll         $t1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b764c) {
            ctx->pc = 0x1B7670u;
            goto label_1b7670;
        }
    }
    ctx->pc = 0x1B7654u;
label_1b7654:
    // 0x1b7654: 0xc06a1ac  jal         func_1A86B0
label_1b7658:
    if (ctx->pc == 0x1B7658u) {
        ctx->pc = 0x1B765Cu;
        goto label_1b765c;
    }
    ctx->pc = 0x1B7654u;
    SET_GPR_U32(ctx, 31, 0x1B765Cu);
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B765Cu; }
        if (ctx->pc != 0x1B765Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B765Cu; }
        if (ctx->pc != 0x1B765Cu) { return; }
    }
    ctx->pc = 0x1B765Cu;
label_1b765c:
    // 0x1b765c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b765cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7660:
    // 0x1b7660: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b7660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1b7664:
    // 0x1b7664: 0x10000023  b           . + 4 + (0x23 << 2)
label_1b7668:
    if (ctx->pc == 0x1B7668u) {
        ctx->pc = 0x1B7668u;
            // 0x1b7668: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1B766Cu;
        goto label_1b766c;
    }
    ctx->pc = 0x1B7664u;
    {
        const bool branch_taken_0x1b7664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7664u;
            // 0x1b7668: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7664) {
            ctx->pc = 0x1B76F4u;
            goto label_1b76f4;
        }
    }
    ctx->pc = 0x1B766Cu;
label_1b766c:
    // 0x1b766c: 0x0  nop
    ctx->pc = 0x1b766cu;
    // NOP
label_1b7670:
    // 0x1b7670: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1b7670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1b7674:
    // 0x1b7674: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1b7674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1b7678:
    // 0x1b7678: 0x8c84ae40  lw          $a0, -0x51C0($a0)
    ctx->pc = 0x1b7678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946368)));
label_1b767c:
    // 0x1b767c: 0x40f809  jalr        $v0
label_1b7680:
    if (ctx->pc == 0x1B7680u) {
        ctx->pc = 0x1B7680u;
            // 0x1b7680: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7684u;
        goto label_1b7684;
    }
    ctx->pc = 0x1B767Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7684u);
        ctx->pc = 0x1B7680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B767Cu;
            // 0x1b7680: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B7684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B7684u; }
            if (ctx->pc != 0x1B7684u) { return; }
        }
        }
    }
    ctx->pc = 0x1B7684u;
label_1b7684:
    // 0x1b7684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7688:
    // 0x1b7688: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
label_1b768c:
    if (ctx->pc == 0x1B768Cu) {
        ctx->pc = 0x1B768Cu;
            // 0x1b768c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1B7690u;
        goto label_1b7690;
    }
    ctx->pc = 0x1B7688u;
    {
        const bool branch_taken_0x1b7688 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7688u;
            // 0x1b768c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7688) {
            ctx->pc = 0x1B76C8u;
            goto label_1b76c8;
        }
    }
    ctx->pc = 0x1B7690u;
label_1b7690:
    // 0x1b7690: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b7690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b7694:
    // 0x1b7694: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x1b7694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1b7698:
    // 0x1b7698: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1b7698u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_1b769c:
    // 0x1b769c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1b769cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1b76a0:
    // 0x1b76a0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1b76a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1b76a4:
    // 0x1b76a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b76a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1b76a8:
    // 0x1b76a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b76a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b76ac:
    // 0x1b76ac: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x1b76acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_1b76b0:
    // 0x1b76b0: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x1b76b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_1b76b4:
    // 0x1b76b4: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1b76b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1b76b8:
    // 0x1b76b8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1b76b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1b76bc:
    // 0x1b76bc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1b76c0:
    if (ctx->pc == 0x1B76C0u) {
        ctx->pc = 0x1B76C0u;
            // 0x1b76c0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1B76C4u;
        goto label_1b76c4;
    }
    ctx->pc = 0x1B76BCu;
    {
        const bool branch_taken_0x1b76bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B76C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B76BCu;
            // 0x1b76c0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76bc) {
            ctx->pc = 0x1B76F4u;
            goto label_1b76f4;
        }
    }
    ctx->pc = 0x1B76C4u;
label_1b76c4:
    // 0x1b76c4: 0x0  nop
    ctx->pc = 0x1b76c4u;
    // NOP
label_1b76c8:
    // 0x1b76c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b76cc:
    // 0x1b76cc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b76d0:
    // 0x1b76d0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_1b76d4:
    if (ctx->pc == 0x1B76D4u) {
        ctx->pc = 0x1B76D4u;
            // 0x1b76d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1B76D8u;
        goto label_1b76d8;
    }
    ctx->pc = 0x1B76D0u;
    {
        const bool branch_taken_0x1b76d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b76d0) {
            ctx->pc = 0x1B76D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B76D0u;
            // 0x1b76d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B76D8u;
            goto label_1b76d8;
        }
    }
    ctx->pc = 0x1B76D8u;
label_1b76d8:
    // 0x1b76d8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1b76d8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b76dc:
    // 0x1b76dc: 0x1012  mflo        $v0
    ctx->pc = 0x1b76dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b76e0:
    // 0x1b76e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1b76e4:
    // 0x1b76e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b76e8:
    // 0x1b76e8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1b76e8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b76ec:
    // 0x1b76ec: 0x1012  mflo        $v0
    ctx->pc = 0x1b76ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b76f0:
    // 0x1b76f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b76f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b76f4:
    // 0x1b76f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b76f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b76f8:
    // 0x1b76f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b76f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b76fc:
    // 0x1b76fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b76fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7700:
    // 0x1b7700: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b7700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b7704:
    // 0x1b7704: 0x3e00008  jr          $ra
label_1b7708:
    if (ctx->pc == 0x1B7708u) {
        ctx->pc = 0x1B7708u;
            // 0x1b7708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B770Cu;
        goto label_1b770c;
    }
    ctx->pc = 0x1B7704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7704u;
            // 0x1b7708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B770Cu;
label_1b770c:
    // 0x1b770c: 0x0  nop
    ctx->pc = 0x1b770cu;
    // NOP
}
