#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00526660
// Address: 0x526660 - 0x526850
void sub_00526660_0x526660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00526660_0x526660");
#endif

    switch (ctx->pc) {
        case 0x526660u: goto label_526660;
        case 0x526664u: goto label_526664;
        case 0x526668u: goto label_526668;
        case 0x52666cu: goto label_52666c;
        case 0x526670u: goto label_526670;
        case 0x526674u: goto label_526674;
        case 0x526678u: goto label_526678;
        case 0x52667cu: goto label_52667c;
        case 0x526680u: goto label_526680;
        case 0x526684u: goto label_526684;
        case 0x526688u: goto label_526688;
        case 0x52668cu: goto label_52668c;
        case 0x526690u: goto label_526690;
        case 0x526694u: goto label_526694;
        case 0x526698u: goto label_526698;
        case 0x52669cu: goto label_52669c;
        case 0x5266a0u: goto label_5266a0;
        case 0x5266a4u: goto label_5266a4;
        case 0x5266a8u: goto label_5266a8;
        case 0x5266acu: goto label_5266ac;
        case 0x5266b0u: goto label_5266b0;
        case 0x5266b4u: goto label_5266b4;
        case 0x5266b8u: goto label_5266b8;
        case 0x5266bcu: goto label_5266bc;
        case 0x5266c0u: goto label_5266c0;
        case 0x5266c4u: goto label_5266c4;
        case 0x5266c8u: goto label_5266c8;
        case 0x5266ccu: goto label_5266cc;
        case 0x5266d0u: goto label_5266d0;
        case 0x5266d4u: goto label_5266d4;
        case 0x5266d8u: goto label_5266d8;
        case 0x5266dcu: goto label_5266dc;
        case 0x5266e0u: goto label_5266e0;
        case 0x5266e4u: goto label_5266e4;
        case 0x5266e8u: goto label_5266e8;
        case 0x5266ecu: goto label_5266ec;
        case 0x5266f0u: goto label_5266f0;
        case 0x5266f4u: goto label_5266f4;
        case 0x5266f8u: goto label_5266f8;
        case 0x5266fcu: goto label_5266fc;
        case 0x526700u: goto label_526700;
        case 0x526704u: goto label_526704;
        case 0x526708u: goto label_526708;
        case 0x52670cu: goto label_52670c;
        case 0x526710u: goto label_526710;
        case 0x526714u: goto label_526714;
        case 0x526718u: goto label_526718;
        case 0x52671cu: goto label_52671c;
        case 0x526720u: goto label_526720;
        case 0x526724u: goto label_526724;
        case 0x526728u: goto label_526728;
        case 0x52672cu: goto label_52672c;
        case 0x526730u: goto label_526730;
        case 0x526734u: goto label_526734;
        case 0x526738u: goto label_526738;
        case 0x52673cu: goto label_52673c;
        case 0x526740u: goto label_526740;
        case 0x526744u: goto label_526744;
        case 0x526748u: goto label_526748;
        case 0x52674cu: goto label_52674c;
        case 0x526750u: goto label_526750;
        case 0x526754u: goto label_526754;
        case 0x526758u: goto label_526758;
        case 0x52675cu: goto label_52675c;
        case 0x526760u: goto label_526760;
        case 0x526764u: goto label_526764;
        case 0x526768u: goto label_526768;
        case 0x52676cu: goto label_52676c;
        case 0x526770u: goto label_526770;
        case 0x526774u: goto label_526774;
        case 0x526778u: goto label_526778;
        case 0x52677cu: goto label_52677c;
        case 0x526780u: goto label_526780;
        case 0x526784u: goto label_526784;
        case 0x526788u: goto label_526788;
        case 0x52678cu: goto label_52678c;
        case 0x526790u: goto label_526790;
        case 0x526794u: goto label_526794;
        case 0x526798u: goto label_526798;
        case 0x52679cu: goto label_52679c;
        case 0x5267a0u: goto label_5267a0;
        case 0x5267a4u: goto label_5267a4;
        case 0x5267a8u: goto label_5267a8;
        case 0x5267acu: goto label_5267ac;
        case 0x5267b0u: goto label_5267b0;
        case 0x5267b4u: goto label_5267b4;
        case 0x5267b8u: goto label_5267b8;
        case 0x5267bcu: goto label_5267bc;
        case 0x5267c0u: goto label_5267c0;
        case 0x5267c4u: goto label_5267c4;
        case 0x5267c8u: goto label_5267c8;
        case 0x5267ccu: goto label_5267cc;
        case 0x5267d0u: goto label_5267d0;
        case 0x5267d4u: goto label_5267d4;
        case 0x5267d8u: goto label_5267d8;
        case 0x5267dcu: goto label_5267dc;
        case 0x5267e0u: goto label_5267e0;
        case 0x5267e4u: goto label_5267e4;
        case 0x5267e8u: goto label_5267e8;
        case 0x5267ecu: goto label_5267ec;
        case 0x5267f0u: goto label_5267f0;
        case 0x5267f4u: goto label_5267f4;
        case 0x5267f8u: goto label_5267f8;
        case 0x5267fcu: goto label_5267fc;
        case 0x526800u: goto label_526800;
        case 0x526804u: goto label_526804;
        case 0x526808u: goto label_526808;
        case 0x52680cu: goto label_52680c;
        case 0x526810u: goto label_526810;
        case 0x526814u: goto label_526814;
        case 0x526818u: goto label_526818;
        case 0x52681cu: goto label_52681c;
        case 0x526820u: goto label_526820;
        case 0x526824u: goto label_526824;
        case 0x526828u: goto label_526828;
        case 0x52682cu: goto label_52682c;
        case 0x526830u: goto label_526830;
        case 0x526834u: goto label_526834;
        case 0x526838u: goto label_526838;
        case 0x52683cu: goto label_52683c;
        case 0x526840u: goto label_526840;
        case 0x526844u: goto label_526844;
        case 0x526848u: goto label_526848;
        case 0x52684cu: goto label_52684c;
        default: break;
    }

    ctx->pc = 0x526660u;

label_526660:
    // 0x526660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x526660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_526664:
    // 0x526664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x526664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_526668:
    // 0x526668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x526668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52666c:
    // 0x52666c: 0xc13ac80  jal         func_4EB200
label_526670:
    if (ctx->pc == 0x526670u) {
        ctx->pc = 0x526670u;
            // 0x526670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526674u;
        goto label_526674;
    }
    ctx->pc = 0x52666Cu;
    SET_GPR_U32(ctx, 31, 0x526674u);
    ctx->pc = 0x526670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52666Cu;
            // 0x526670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EB200u;
    if (runtime->hasFunction(0x4EB200u)) {
        auto targetFn = runtime->lookupFunction(0x4EB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526674u; }
        if (ctx->pc != 0x526674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EB200_0x4eb200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526674u; }
        if (ctx->pc != 0x526674u) { return; }
    }
    ctx->pc = 0x526674u;
label_526674:
    // 0x526674: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x526674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_526678:
    // 0x526678: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x526678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52667c:
    // 0x52667c: 0x246363e0  addiu       $v1, $v1, 0x63E0
    ctx->pc = 0x52667cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25568));
label_526680:
    // 0x526680: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x526680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_526684:
    // 0x526684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x526684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_526688:
    // 0x526688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x526688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52668c:
    // 0x52668c: 0x3e00008  jr          $ra
label_526690:
    if (ctx->pc == 0x526690u) {
        ctx->pc = 0x526690u;
            // 0x526690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x526694u;
        goto label_526694;
    }
    ctx->pc = 0x52668Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x526690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52668Cu;
            // 0x526690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x526694u;
label_526694:
    // 0x526694: 0x0  nop
    ctx->pc = 0x526694u;
    // NOP
label_526698:
    // 0x526698: 0x0  nop
    ctx->pc = 0x526698u;
    // NOP
label_52669c:
    // 0x52669c: 0x0  nop
    ctx->pc = 0x52669cu;
    // NOP
label_5266a0:
    // 0x5266a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5266a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_5266a4:
    // 0x5266a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5266a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5266a8:
    // 0x5266a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5266a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_5266ac:
    // 0x5266ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5266acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5266b0:
    // 0x5266b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5266b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5266b4:
    // 0x5266b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5266b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5266b8:
    // 0x5266b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5266b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5266bc:
    // 0x5266bc: 0x90840009  lbu         $a0, 0x9($a0)
    ctx->pc = 0x5266bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
label_5266c0:
    // 0x5266c0: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
label_5266c4:
    if (ctx->pc == 0x5266C4u) {
        ctx->pc = 0x5266C4u;
            // 0x5266c4: 0x8c700e80  lw          $s0, 0xE80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
        ctx->pc = 0x5266C8u;
        goto label_5266c8;
    }
    ctx->pc = 0x5266C0u;
    {
        const bool branch_taken_0x5266c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x5266C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5266C0u;
            // 0x5266c4: 0x8c700e80  lw          $s0, 0xE80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5266c0) {
            ctx->pc = 0x526718u;
            goto label_526718;
        }
    }
    ctx->pc = 0x5266C8u;
label_5266c8:
    // 0x5266c8: 0x8e030960  lw          $v1, 0x960($s0)
    ctx->pc = 0x5266c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2400)));
label_5266cc:
    // 0x5266cc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x5266ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_5266d0:
    // 0x5266d0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_5266d4:
    if (ctx->pc == 0x5266D4u) {
        ctx->pc = 0x5266D8u;
        goto label_5266d8;
    }
    ctx->pc = 0x5266D0u;
    {
        const bool branch_taken_0x5266d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5266d0) {
            ctx->pc = 0x526718u;
            goto label_526718;
        }
    }
    ctx->pc = 0x5266D8u;
label_5266d8:
    // 0x5266d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5266d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5266dc:
    // 0x5266dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5266dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5266e0:
    // 0x5266e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5266e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5266e4:
    // 0x5266e4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5266e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5266e8:
    // 0x5266e8: 0x320f809  jalr        $t9
label_5266ec:
    if (ctx->pc == 0x5266ECu) {
        ctx->pc = 0x5266ECu;
            // 0x5266ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5266F0u;
        goto label_5266f0;
    }
    ctx->pc = 0x5266E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5266F0u);
        ctx->pc = 0x5266ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5266E8u;
            // 0x5266ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5266F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5266F0u; }
            if (ctx->pc != 0x5266F0u) { return; }
        }
        }
    }
    ctx->pc = 0x5266F0u;
label_5266f0:
    // 0x5266f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5266f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5266f4:
    // 0x5266f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5266f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5266f8:
    // 0x5266f8: 0xc1314cc  jal         func_4C5330
label_5266fc:
    if (ctx->pc == 0x5266FCu) {
        ctx->pc = 0x5266FCu;
            // 0x5266fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526700u;
        goto label_526700;
    }
    ctx->pc = 0x5266F8u;
    SET_GPR_U32(ctx, 31, 0x526700u);
    ctx->pc = 0x5266FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5266F8u;
            // 0x5266fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C5330u;
    if (runtime->hasFunction(0x4C5330u)) {
        auto targetFn = runtime->lookupFunction(0x4C5330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526700u; }
        if (ctx->pc != 0x526700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C5330_0x4c5330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526700u; }
        if (ctx->pc != 0x526700u) { return; }
    }
    ctx->pc = 0x526700u;
label_526700:
    // 0x526700: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x526700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_526704:
    // 0x526704: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x526704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_526708:
    // 0x526708: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x526708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_52670c:
    // 0x52670c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x52670cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_526710:
    // 0x526710: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
label_526714:
    if (ctx->pc == 0x526714u) {
        ctx->pc = 0x526714u;
            // 0x526714: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x526718u;
        goto label_526718;
    }
    ctx->pc = 0x526710u;
    {
        const bool branch_taken_0x526710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x526710) {
            ctx->pc = 0x526714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x526710u;
            // 0x526714: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5266E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5266e0;
        }
    }
    ctx->pc = 0x526718u;
label_526718:
    // 0x526718: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x526718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_52671c:
    // 0x52671c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52671cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_526720:
    // 0x526720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x526720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_526724:
    // 0x526724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x526724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_526728:
    // 0x526728: 0x3e00008  jr          $ra
label_52672c:
    if (ctx->pc == 0x52672Cu) {
        ctx->pc = 0x52672Cu;
            // 0x52672c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x526730u;
        goto label_526730;
    }
    ctx->pc = 0x526728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52672Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526728u;
            // 0x52672c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x526730u;
label_526730:
    // 0x526730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x526730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_526734:
    // 0x526734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x526734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_526738:
    // 0x526738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x526738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52673c:
    // 0x52673c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52673cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_526740:
    // 0x526740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x526740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_526744:
    // 0x526744: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_526748:
    if (ctx->pc == 0x526748u) {
        ctx->pc = 0x526748u;
            // 0x526748: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52674Cu;
        goto label_52674c;
    }
    ctx->pc = 0x526744u;
    {
        const bool branch_taken_0x526744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x526748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526744u;
            // 0x526748: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x526744) {
            ctx->pc = 0x526778u;
            goto label_526778;
        }
    }
    ctx->pc = 0x52674Cu;
label_52674c:
    // 0x52674c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52674cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_526750:
    // 0x526750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x526750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_526754:
    // 0x526754: 0x244263f0  addiu       $v0, $v0, 0x63F0
    ctx->pc = 0x526754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25584));
label_526758:
    // 0x526758: 0xc131a10  jal         func_4C6840
label_52675c:
    if (ctx->pc == 0x52675Cu) {
        ctx->pc = 0x52675Cu;
            // 0x52675c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x526760u;
        goto label_526760;
    }
    ctx->pc = 0x526758u;
    SET_GPR_U32(ctx, 31, 0x526760u);
    ctx->pc = 0x52675Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526758u;
            // 0x52675c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C6840u;
    if (runtime->hasFunction(0x4C6840u)) {
        auto targetFn = runtime->lookupFunction(0x4C6840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526760u; }
        if (ctx->pc != 0x526760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C6840_0x4c6840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526760u; }
        if (ctx->pc != 0x526760u) { return; }
    }
    ctx->pc = 0x526760u;
label_526760:
    // 0x526760: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x526760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_526764:
    // 0x526764: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x526764u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_526768:
    // 0x526768: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52676c:
    if (ctx->pc == 0x52676Cu) {
        ctx->pc = 0x52676Cu;
            // 0x52676c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526770u;
        goto label_526770;
    }
    ctx->pc = 0x526768u;
    {
        const bool branch_taken_0x526768 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x526768) {
            ctx->pc = 0x52676Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x526768u;
            // 0x52676c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52677Cu;
            goto label_52677c;
        }
    }
    ctx->pc = 0x526770u;
label_526770:
    // 0x526770: 0xc0400a8  jal         func_1002A0
label_526774:
    if (ctx->pc == 0x526774u) {
        ctx->pc = 0x526774u;
            // 0x526774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526778u;
        goto label_526778;
    }
    ctx->pc = 0x526770u;
    SET_GPR_U32(ctx, 31, 0x526778u);
    ctx->pc = 0x526774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526770u;
            // 0x526774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526778u; }
        if (ctx->pc != 0x526778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526778u; }
        if (ctx->pc != 0x526778u) { return; }
    }
    ctx->pc = 0x526778u;
label_526778:
    // 0x526778: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x526778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52677c:
    // 0x52677c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52677cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_526780:
    // 0x526780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x526780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_526784:
    // 0x526784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x526784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_526788:
    // 0x526788: 0x3e00008  jr          $ra
label_52678c:
    if (ctx->pc == 0x52678Cu) {
        ctx->pc = 0x52678Cu;
            // 0x52678c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x526790u;
        goto label_526790;
    }
    ctx->pc = 0x526788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52678Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526788u;
            // 0x52678c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x526790u;
label_526790:
    // 0x526790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x526790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_526794:
    // 0x526794: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x526794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_526798:
    // 0x526798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x526798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52679c:
    // 0x52679c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52679cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5267a0:
    // 0x5267a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5267a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5267a4:
    // 0x5267a4: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x5267a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
label_5267a8:
    // 0x5267a8: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_5267ac:
    if (ctx->pc == 0x5267ACu) {
        ctx->pc = 0x5267ACu;
            // 0x5267ac: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5267B0u;
        goto label_5267b0;
    }
    ctx->pc = 0x5267A8u;
    {
        const bool branch_taken_0x5267a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5267ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5267A8u;
            // 0x5267ac: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5267a8) {
            ctx->pc = 0x526830u;
            goto label_526830;
        }
    }
    ctx->pc = 0x5267B0u;
label_5267b0:
    // 0x5267b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5267b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5267b4:
    // 0x5267b4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5267b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5267b8:
    // 0x5267b8: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x5267b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_5267bc:
    // 0x5267bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x5267bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5267c0:
    // 0x5267c0: 0x8c710e80  lw          $s1, 0xE80($v1)
    ctx->pc = 0x5267c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_5267c4:
    // 0x5267c4: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x5267c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5267c8:
    // 0x5267c8: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x5267c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_5267cc:
    // 0x5267cc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x5267ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_5267d0:
    // 0x5267d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5267d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5267d4:
    // 0x5267d4: 0x0  nop
    ctx->pc = 0x5267d4u;
    // NOP
label_5267d8:
    // 0x5267d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5267d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_5267dc:
    // 0x5267dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5267dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5267e0:
    // 0x5267e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x5267e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_5267e4:
    // 0x5267e4: 0x0  nop
    ctx->pc = 0x5267e4u;
    // NOP
label_5267e8:
    // 0x5267e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x5267e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_5267ec:
    // 0x5267ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5267ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5267f0:
    // 0x5267f0: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x5267f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
label_5267f4:
    // 0x5267f4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5267f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5267f8:
    // 0x5267f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5267f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5267fc:
    // 0x5267fc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5267fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_526800:
    // 0x526800: 0x320f809  jalr        $t9
label_526804:
    if (ctx->pc == 0x526804u) {
        ctx->pc = 0x526804u;
            // 0x526804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526808u;
        goto label_526808;
    }
    ctx->pc = 0x526800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x526808u);
        ctx->pc = 0x526804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526800u;
            // 0x526804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x526808u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x526808u; }
            if (ctx->pc != 0x526808u) { return; }
        }
        }
    }
    ctx->pc = 0x526808u;
label_526808:
    // 0x526808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x526808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_52680c:
    // 0x52680c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x52680cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_526810:
    // 0x526810: 0xc1318f8  jal         func_4C63E0
label_526814:
    if (ctx->pc == 0x526814u) {
        ctx->pc = 0x526814u;
            // 0x526814: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x526818u;
        goto label_526818;
    }
    ctx->pc = 0x526810u;
    SET_GPR_U32(ctx, 31, 0x526818u);
    ctx->pc = 0x526814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x526810u;
            // 0x526814: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C63E0u;
    if (runtime->hasFunction(0x4C63E0u)) {
        auto targetFn = runtime->lookupFunction(0x4C63E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526818u; }
        if (ctx->pc != 0x526818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C63E0_0x4c63e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x526818u; }
        if (ctx->pc != 0x526818u) { return; }
    }
    ctx->pc = 0x526818u;
label_526818:
    // 0x526818: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x526818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_52681c:
    // 0x52681c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x52681cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_526820:
    // 0x526820: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x526820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_526824:
    // 0x526824: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x526824u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_526828:
    // 0x526828: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
label_52682c:
    if (ctx->pc == 0x52682Cu) {
        ctx->pc = 0x52682Cu;
            // 0x52682c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x526830u;
        goto label_526830;
    }
    ctx->pc = 0x526828u;
    {
        const bool branch_taken_0x526828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x526828) {
            ctx->pc = 0x52682Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x526828u;
            // 0x52682c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5267F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5267f8;
        }
    }
    ctx->pc = 0x526830u;
label_526830:
    // 0x526830: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x526830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_526834:
    // 0x526834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x526834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_526838:
    // 0x526838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x526838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52683c:
    // 0x52683c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52683cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_526840:
    // 0x526840: 0x3e00008  jr          $ra
label_526844:
    if (ctx->pc == 0x526844u) {
        ctx->pc = 0x526844u;
            // 0x526844: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x526848u;
        goto label_526848;
    }
    ctx->pc = 0x526840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x526844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x526840u;
            // 0x526844: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x526848u;
label_526848:
    // 0x526848: 0x0  nop
    ctx->pc = 0x526848u;
    // NOP
label_52684c:
    // 0x52684c: 0x0  nop
    ctx->pc = 0x52684cu;
    // NOP
}
