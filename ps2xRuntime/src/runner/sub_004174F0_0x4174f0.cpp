#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004174F0
// Address: 0x4174f0 - 0x417760
void sub_004174F0_0x4174f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004174F0_0x4174f0");
#endif

    switch (ctx->pc) {
        case 0x4174f0u: goto label_4174f0;
        case 0x4174f4u: goto label_4174f4;
        case 0x4174f8u: goto label_4174f8;
        case 0x4174fcu: goto label_4174fc;
        case 0x417500u: goto label_417500;
        case 0x417504u: goto label_417504;
        case 0x417508u: goto label_417508;
        case 0x41750cu: goto label_41750c;
        case 0x417510u: goto label_417510;
        case 0x417514u: goto label_417514;
        case 0x417518u: goto label_417518;
        case 0x41751cu: goto label_41751c;
        case 0x417520u: goto label_417520;
        case 0x417524u: goto label_417524;
        case 0x417528u: goto label_417528;
        case 0x41752cu: goto label_41752c;
        case 0x417530u: goto label_417530;
        case 0x417534u: goto label_417534;
        case 0x417538u: goto label_417538;
        case 0x41753cu: goto label_41753c;
        case 0x417540u: goto label_417540;
        case 0x417544u: goto label_417544;
        case 0x417548u: goto label_417548;
        case 0x41754cu: goto label_41754c;
        case 0x417550u: goto label_417550;
        case 0x417554u: goto label_417554;
        case 0x417558u: goto label_417558;
        case 0x41755cu: goto label_41755c;
        case 0x417560u: goto label_417560;
        case 0x417564u: goto label_417564;
        case 0x417568u: goto label_417568;
        case 0x41756cu: goto label_41756c;
        case 0x417570u: goto label_417570;
        case 0x417574u: goto label_417574;
        case 0x417578u: goto label_417578;
        case 0x41757cu: goto label_41757c;
        case 0x417580u: goto label_417580;
        case 0x417584u: goto label_417584;
        case 0x417588u: goto label_417588;
        case 0x41758cu: goto label_41758c;
        case 0x417590u: goto label_417590;
        case 0x417594u: goto label_417594;
        case 0x417598u: goto label_417598;
        case 0x41759cu: goto label_41759c;
        case 0x4175a0u: goto label_4175a0;
        case 0x4175a4u: goto label_4175a4;
        case 0x4175a8u: goto label_4175a8;
        case 0x4175acu: goto label_4175ac;
        case 0x4175b0u: goto label_4175b0;
        case 0x4175b4u: goto label_4175b4;
        case 0x4175b8u: goto label_4175b8;
        case 0x4175bcu: goto label_4175bc;
        case 0x4175c0u: goto label_4175c0;
        case 0x4175c4u: goto label_4175c4;
        case 0x4175c8u: goto label_4175c8;
        case 0x4175ccu: goto label_4175cc;
        case 0x4175d0u: goto label_4175d0;
        case 0x4175d4u: goto label_4175d4;
        case 0x4175d8u: goto label_4175d8;
        case 0x4175dcu: goto label_4175dc;
        case 0x4175e0u: goto label_4175e0;
        case 0x4175e4u: goto label_4175e4;
        case 0x4175e8u: goto label_4175e8;
        case 0x4175ecu: goto label_4175ec;
        case 0x4175f0u: goto label_4175f0;
        case 0x4175f4u: goto label_4175f4;
        case 0x4175f8u: goto label_4175f8;
        case 0x4175fcu: goto label_4175fc;
        case 0x417600u: goto label_417600;
        case 0x417604u: goto label_417604;
        case 0x417608u: goto label_417608;
        case 0x41760cu: goto label_41760c;
        case 0x417610u: goto label_417610;
        case 0x417614u: goto label_417614;
        case 0x417618u: goto label_417618;
        case 0x41761cu: goto label_41761c;
        case 0x417620u: goto label_417620;
        case 0x417624u: goto label_417624;
        case 0x417628u: goto label_417628;
        case 0x41762cu: goto label_41762c;
        case 0x417630u: goto label_417630;
        case 0x417634u: goto label_417634;
        case 0x417638u: goto label_417638;
        case 0x41763cu: goto label_41763c;
        case 0x417640u: goto label_417640;
        case 0x417644u: goto label_417644;
        case 0x417648u: goto label_417648;
        case 0x41764cu: goto label_41764c;
        case 0x417650u: goto label_417650;
        case 0x417654u: goto label_417654;
        case 0x417658u: goto label_417658;
        case 0x41765cu: goto label_41765c;
        case 0x417660u: goto label_417660;
        case 0x417664u: goto label_417664;
        case 0x417668u: goto label_417668;
        case 0x41766cu: goto label_41766c;
        case 0x417670u: goto label_417670;
        case 0x417674u: goto label_417674;
        case 0x417678u: goto label_417678;
        case 0x41767cu: goto label_41767c;
        case 0x417680u: goto label_417680;
        case 0x417684u: goto label_417684;
        case 0x417688u: goto label_417688;
        case 0x41768cu: goto label_41768c;
        case 0x417690u: goto label_417690;
        case 0x417694u: goto label_417694;
        case 0x417698u: goto label_417698;
        case 0x41769cu: goto label_41769c;
        case 0x4176a0u: goto label_4176a0;
        case 0x4176a4u: goto label_4176a4;
        case 0x4176a8u: goto label_4176a8;
        case 0x4176acu: goto label_4176ac;
        case 0x4176b0u: goto label_4176b0;
        case 0x4176b4u: goto label_4176b4;
        case 0x4176b8u: goto label_4176b8;
        case 0x4176bcu: goto label_4176bc;
        case 0x4176c0u: goto label_4176c0;
        case 0x4176c4u: goto label_4176c4;
        case 0x4176c8u: goto label_4176c8;
        case 0x4176ccu: goto label_4176cc;
        case 0x4176d0u: goto label_4176d0;
        case 0x4176d4u: goto label_4176d4;
        case 0x4176d8u: goto label_4176d8;
        case 0x4176dcu: goto label_4176dc;
        case 0x4176e0u: goto label_4176e0;
        case 0x4176e4u: goto label_4176e4;
        case 0x4176e8u: goto label_4176e8;
        case 0x4176ecu: goto label_4176ec;
        case 0x4176f0u: goto label_4176f0;
        case 0x4176f4u: goto label_4176f4;
        case 0x4176f8u: goto label_4176f8;
        case 0x4176fcu: goto label_4176fc;
        case 0x417700u: goto label_417700;
        case 0x417704u: goto label_417704;
        case 0x417708u: goto label_417708;
        case 0x41770cu: goto label_41770c;
        case 0x417710u: goto label_417710;
        case 0x417714u: goto label_417714;
        case 0x417718u: goto label_417718;
        case 0x41771cu: goto label_41771c;
        case 0x417720u: goto label_417720;
        case 0x417724u: goto label_417724;
        case 0x417728u: goto label_417728;
        case 0x41772cu: goto label_41772c;
        case 0x417730u: goto label_417730;
        case 0x417734u: goto label_417734;
        case 0x417738u: goto label_417738;
        case 0x41773cu: goto label_41773c;
        case 0x417740u: goto label_417740;
        case 0x417744u: goto label_417744;
        case 0x417748u: goto label_417748;
        case 0x41774cu: goto label_41774c;
        case 0x417750u: goto label_417750;
        case 0x417754u: goto label_417754;
        case 0x417758u: goto label_417758;
        case 0x41775cu: goto label_41775c;
        default: break;
    }

    ctx->pc = 0x4174f0u;

label_4174f0:
    // 0x4174f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4174f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4174f4:
    // 0x4174f4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4174f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4174f8:
    // 0x4174f8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4174f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4174fc:
    // 0x4174fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4174fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_417500:
    // 0x417500: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x417500u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_417504:
    // 0x417504: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x417504u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_417508:
    // 0x417508: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x417508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41750c:
    // 0x41750c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x41750cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_417510:
    // 0x417510: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x417510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_417514:
    // 0x417514: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x417514u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_417518:
    // 0x417518: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x417518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_41751c:
    // 0x41751c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x41751cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_417520:
    // 0x417520: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x417520u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_417524:
    // 0x417524: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x417524u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_417528:
    // 0x417528: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x417528u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_41752c:
    // 0x41752c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41752cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_417530:
    // 0x417530: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x417530u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_417534:
    // 0x417534: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x417534u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_417538:
    // 0x417538: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x417538u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_41753c:
    // 0x41753c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x41753cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_417540:
    // 0x417540: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x417540u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_417544:
    // 0x417544: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x417544u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_417548:
    // 0x417548: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x417548u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_41754c:
    // 0x41754c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x41754cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_417550:
    // 0x417550: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x417550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_417554:
    // 0x417554: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x417554u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_417558:
    // 0x417558: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x417558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41755c:
    // 0x41755c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x41755cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_417560:
    // 0x417560: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x417560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_417564:
    // 0x417564: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x417564u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_417568:
    // 0x417568: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x417568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_41756c:
    // 0x41756c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x41756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_417570:
    // 0x417570: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x417570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_417574:
    // 0x417574: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x417574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_417578:
    // 0x417578: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x417578u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_41757c:
    // 0x41757c: 0x3e00008  jr          $ra
label_417580:
    if (ctx->pc == 0x417580u) {
        ctx->pc = 0x417580u;
            // 0x417580: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x417584u;
        goto label_417584;
    }
    ctx->pc = 0x41757Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41757Cu;
            // 0x417580: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x417584u;
label_417584:
    // 0x417584: 0x0  nop
    ctx->pc = 0x417584u;
    // NOP
label_417588:
    // 0x417588: 0x0  nop
    ctx->pc = 0x417588u;
    // NOP
label_41758c:
    // 0x41758c: 0x0  nop
    ctx->pc = 0x41758cu;
    // NOP
label_417590:
    // 0x417590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x417590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_417594:
    // 0x417594: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x417594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_417598:
    // 0x417598: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x417598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41759c:
    // 0x41759c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4175a0:
    // 0x4175a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4175a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4175a4:
    // 0x4175a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4175a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4175a8:
    // 0x4175a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4175a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4175ac:
    // 0x4175ac: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4175acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4175b0:
    // 0x4175b0: 0x10a30036  beq         $a1, $v1, . + 4 + (0x36 << 2)
label_4175b4:
    if (ctx->pc == 0x4175B4u) {
        ctx->pc = 0x4175B4u;
            // 0x4175b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4175B8u;
        goto label_4175b8;
    }
    ctx->pc = 0x4175B0u;
    {
        const bool branch_taken_0x4175b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4175B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4175B0u;
            // 0x4175b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4175b0) {
            ctx->pc = 0x41768Cu;
            goto label_41768c;
        }
    }
    ctx->pc = 0x4175B8u;
label_4175b8:
    // 0x4175b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4175b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4175bc:
    // 0x4175bc: 0x50a30030  beql        $a1, $v1, . + 4 + (0x30 << 2)
label_4175c0:
    if (ctx->pc == 0x4175C0u) {
        ctx->pc = 0x4175C0u;
            // 0x4175c0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4175C4u;
        goto label_4175c4;
    }
    ctx->pc = 0x4175BCu;
    {
        const bool branch_taken_0x4175bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4175bc) {
            ctx->pc = 0x4175C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4175BCu;
            // 0x4175c0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x417680u;
            goto label_417680;
        }
    }
    ctx->pc = 0x4175C4u;
label_4175c4:
    // 0x4175c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4175c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4175c8:
    // 0x4175c8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4175cc:
    if (ctx->pc == 0x4175CCu) {
        ctx->pc = 0x4175D0u;
        goto label_4175d0;
    }
    ctx->pc = 0x4175C8u;
    {
        const bool branch_taken_0x4175c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4175c8) {
            ctx->pc = 0x4175D8u;
            goto label_4175d8;
        }
    }
    ctx->pc = 0x4175D0u;
label_4175d0:
    // 0x4175d0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_4175d4:
    if (ctx->pc == 0x4175D4u) {
        ctx->pc = 0x4175D8u;
        goto label_4175d8;
    }
    ctx->pc = 0x4175D0u;
    {
        const bool branch_taken_0x4175d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4175d0) {
            ctx->pc = 0x4176C0u;
            goto label_4176c0;
        }
    }
    ctx->pc = 0x4175D8u;
label_4175d8:
    // 0x4175d8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4175d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4175dc:
    // 0x4175dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4175dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4175e0:
    // 0x4175e0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4175e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4175e4:
    // 0x4175e4: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4175e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4175e8:
    // 0x4175e8: 0x10640035  beq         $v1, $a0, . + 4 + (0x35 << 2)
label_4175ec:
    if (ctx->pc == 0x4175ECu) {
        ctx->pc = 0x4175F0u;
        goto label_4175f0;
    }
    ctx->pc = 0x4175E8u;
    {
        const bool branch_taken_0x4175e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4175e8) {
            ctx->pc = 0x4176C0u;
            goto label_4176c0;
        }
    }
    ctx->pc = 0x4175F0u;
label_4175f0:
    // 0x4175f0: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x4175f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4175f4:
    // 0x4175f4: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x4175f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_4175f8:
    // 0x4175f8: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x4175f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_4175fc:
    // 0x4175fc: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x4175fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_417600:
    // 0x417600: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x417600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_417604:
    // 0x417604: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x417604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_417608:
    // 0x417608: 0x8d080014  lw          $t0, 0x14($t0)
    ctx->pc = 0x417608u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_41760c:
    // 0x41760c: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x41760cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_417610:
    // 0x417610: 0x25080056  addiu       $t0, $t0, 0x56
    ctx->pc = 0x417610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 86));
label_417614:
    // 0x417614: 0xae080090  sw          $t0, 0x90($s0)
    ctx->pc = 0x417614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_417618:
    // 0x417618: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x417618u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_41761c:
    // 0x41761c: 0x8d080014  lw          $t0, 0x14($t0)
    ctx->pc = 0x41761cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_417620:
    // 0x417620: 0x8d08000c  lw          $t0, 0xC($t0)
    ctx->pc = 0x417620u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_417624:
    // 0x417624: 0x25080056  addiu       $t0, $t0, 0x56
    ctx->pc = 0x417624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 86));
label_417628:
    // 0x417628: 0xae080094  sw          $t0, 0x94($s0)
    ctx->pc = 0x417628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 8));
label_41762c:
    // 0x41762c: 0x8e090084  lw          $t1, 0x84($s0)
    ctx->pc = 0x41762cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_417630:
    // 0x417630: 0x8ce8fdb8  lw          $t0, -0x248($a3)
    ctx->pc = 0x417630u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294966712)));
label_417634:
    // 0x417634: 0x8d290030  lw          $t1, 0x30($t1)
    ctx->pc = 0x417634u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_417638:
    // 0x417638: 0x8d270120  lw          $a3, 0x120($t1)
    ctx->pc = 0x417638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 288)));
label_41763c:
    // 0x41763c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x41763cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_417640:
    // 0x417640: 0xad270120  sw          $a3, 0x120($t1)
    ctx->pc = 0x417640u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 288), GPR_U32(ctx, 7));
label_417644:
    // 0x417644: 0x8cc7fdc0  lw          $a3, -0x240($a2)
    ctx->pc = 0x417644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294966720)));
label_417648:
    // 0x417648: 0x8d2601b0  lw          $a2, 0x1B0($t1)
    ctx->pc = 0x417648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 432)));
label_41764c:
    // 0x41764c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x41764cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_417650:
    // 0x417650: 0xad2601b0  sw          $a2, 0x1B0($t1)
    ctx->pc = 0x417650u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 432), GPR_U32(ctx, 6));
label_417654:
    // 0x417654: 0x8ca6fdc8  lw          $a2, -0x238($a1)
    ctx->pc = 0x417654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294966728)));
label_417658:
    // 0x417658: 0x8d250240  lw          $a1, 0x240($t1)
    ctx->pc = 0x417658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 576)));
label_41765c:
    // 0x41765c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x41765cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_417660:
    // 0x417660: 0xad250240  sw          $a1, 0x240($t1)
    ctx->pc = 0x417660u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 5));
label_417664:
    // 0x417664: 0x8c84fdd0  lw          $a0, -0x230($a0)
    ctx->pc = 0x417664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966736)));
label_417668:
    // 0x417668: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x417668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_41766c:
    // 0x41766c: 0xad240240  sw          $a0, 0x240($t1)
    ctx->pc = 0x41766cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 4));
label_417670:
    // 0x417670: 0x8c63fdd8  lw          $v1, -0x228($v1)
    ctx->pc = 0x417670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966744)));
label_417674:
    // 0x417674: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x417674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_417678:
    // 0x417678: 0x10000011  b           . + 4 + (0x11 << 2)
label_41767c:
    if (ctx->pc == 0x41767Cu) {
        ctx->pc = 0x41767Cu;
            // 0x41767c: 0xad230240  sw          $v1, 0x240($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 3));
        ctx->pc = 0x417680u;
        goto label_417680;
    }
    ctx->pc = 0x417678u;
    {
        const bool branch_taken_0x417678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41767Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417678u;
            // 0x41767c: 0xad230240  sw          $v1, 0x240($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417678) {
            ctx->pc = 0x4176C0u;
            goto label_4176c0;
        }
    }
    ctx->pc = 0x417680u;
label_417680:
    // 0x417680: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x417680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_417684:
    // 0x417684: 0x320f809  jalr        $t9
label_417688:
    if (ctx->pc == 0x417688u) {
        ctx->pc = 0x41768Cu;
        goto label_41768c;
    }
    ctx->pc = 0x417684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41768Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41768Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41768Cu; }
            if (ctx->pc != 0x41768Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41768Cu;
label_41768c:
    // 0x41768c: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x41768cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_417690:
    // 0x417690: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_417694:
    if (ctx->pc == 0x417694u) {
        ctx->pc = 0x417698u;
        goto label_417698;
    }
    ctx->pc = 0x417690u;
    {
        const bool branch_taken_0x417690 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x417690) {
            ctx->pc = 0x4176C0u;
            goto label_4176c0;
        }
    }
    ctx->pc = 0x417698u;
label_417698:
    // 0x417698: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x417698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41769c:
    // 0x41769c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x41769cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4176a0:
    // 0x4176a0: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4176a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4176a4:
    // 0x4176a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4176a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4176a8:
    // 0x4176a8: 0xc0e3658  jal         func_38D960
label_4176ac:
    if (ctx->pc == 0x4176ACu) {
        ctx->pc = 0x4176ACu;
            // 0x4176ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4176B0u;
        goto label_4176b0;
    }
    ctx->pc = 0x4176A8u;
    SET_GPR_U32(ctx, 31, 0x4176B0u);
    ctx->pc = 0x4176ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4176A8u;
            // 0x4176ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4176B0u; }
        if (ctx->pc != 0x4176B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4176B0u; }
        if (ctx->pc != 0x4176B0u) { return; }
    }
    ctx->pc = 0x4176B0u;
label_4176b0:
    // 0x4176b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4176b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4176b4:
    // 0x4176b4: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4176b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4176b8:
    // 0x4176b8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4176bc:
    if (ctx->pc == 0x4176BCu) {
        ctx->pc = 0x4176BCu;
            // 0x4176bc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4176C0u;
        goto label_4176c0;
    }
    ctx->pc = 0x4176B8u;
    {
        const bool branch_taken_0x4176b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4176BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4176B8u;
            // 0x4176bc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4176b8) {
            ctx->pc = 0x4176A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4176a0;
        }
    }
    ctx->pc = 0x4176C0u;
label_4176c0:
    // 0x4176c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4176c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4176c4:
    // 0x4176c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4176c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4176c8:
    // 0x4176c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4176c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4176cc:
    // 0x4176cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4176ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4176d0:
    // 0x4176d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4176d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4176d4:
    // 0x4176d4: 0x3e00008  jr          $ra
label_4176d8:
    if (ctx->pc == 0x4176D8u) {
        ctx->pc = 0x4176D8u;
            // 0x4176d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4176DCu;
        goto label_4176dc;
    }
    ctx->pc = 0x4176D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4176D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4176D4u;
            // 0x4176d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4176DCu;
label_4176dc:
    // 0x4176dc: 0x0  nop
    ctx->pc = 0x4176dcu;
    // NOP
label_4176e0:
    // 0x4176e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4176e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4176e4:
    // 0x4176e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4176e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4176e8:
    // 0x4176e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4176e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4176ec:
    // 0x4176ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4176ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4176f0:
    // 0x4176f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4176f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4176f4:
    // 0x4176f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4176f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4176f8:
    // 0x4176f8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4176f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4176fc:
    // 0x4176fc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_417700:
    if (ctx->pc == 0x417700u) {
        ctx->pc = 0x417700u;
            // 0x417700: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417704u;
        goto label_417704;
    }
    ctx->pc = 0x4176FCu;
    {
        const bool branch_taken_0x4176fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x417700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4176FCu;
            // 0x417700: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4176fc) {
            ctx->pc = 0x417738u;
            goto label_417738;
        }
    }
    ctx->pc = 0x417704u;
label_417704:
    // 0x417704: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x417704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_417708:
    // 0x417708: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x417708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41770c:
    // 0x41770c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x41770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_417710:
    // 0x417710: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x417710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_417714:
    // 0x417714: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x417714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_417718:
    // 0x417718: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x417718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41771c:
    // 0x41771c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x41771cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_417720:
    // 0x417720: 0x320f809  jalr        $t9
label_417724:
    if (ctx->pc == 0x417724u) {
        ctx->pc = 0x417728u;
        goto label_417728;
    }
    ctx->pc = 0x417720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x417728u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x417728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x417728u; }
            if (ctx->pc != 0x417728u) { return; }
        }
        }
    }
    ctx->pc = 0x417728u;
label_417728:
    // 0x417728: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x417728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_41772c:
    // 0x41772c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x41772cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_417730:
    // 0x417730: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_417734:
    if (ctx->pc == 0x417734u) {
        ctx->pc = 0x417734u;
            // 0x417734: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x417738u;
        goto label_417738;
    }
    ctx->pc = 0x417730u;
    {
        const bool branch_taken_0x417730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x417734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417730u;
            // 0x417734: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417730) {
            ctx->pc = 0x41770Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41770c;
        }
    }
    ctx->pc = 0x417738u;
label_417738:
    // 0x417738: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x417738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41773c:
    // 0x41773c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41773cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_417740:
    // 0x417740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x417740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_417744:
    // 0x417744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x417744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_417748:
    // 0x417748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x417748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41774c:
    // 0x41774c: 0x3e00008  jr          $ra
label_417750:
    if (ctx->pc == 0x417750u) {
        ctx->pc = 0x417750u;
            // 0x417750: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x417754u;
        goto label_417754;
    }
    ctx->pc = 0x41774Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41774Cu;
            // 0x417750: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x417754u;
label_417754:
    // 0x417754: 0x0  nop
    ctx->pc = 0x417754u;
    // NOP
label_417758:
    // 0x417758: 0x0  nop
    ctx->pc = 0x417758u;
    // NOP
label_41775c:
    // 0x41775c: 0x0  nop
    ctx->pc = 0x41775cu;
    // NOP
}
