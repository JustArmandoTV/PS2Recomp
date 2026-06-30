#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00502530
// Address: 0x502530 - 0x502840
void sub_00502530_0x502530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00502530_0x502530");
#endif

    switch (ctx->pc) {
        case 0x502530u: goto label_502530;
        case 0x502534u: goto label_502534;
        case 0x502538u: goto label_502538;
        case 0x50253cu: goto label_50253c;
        case 0x502540u: goto label_502540;
        case 0x502544u: goto label_502544;
        case 0x502548u: goto label_502548;
        case 0x50254cu: goto label_50254c;
        case 0x502550u: goto label_502550;
        case 0x502554u: goto label_502554;
        case 0x502558u: goto label_502558;
        case 0x50255cu: goto label_50255c;
        case 0x502560u: goto label_502560;
        case 0x502564u: goto label_502564;
        case 0x502568u: goto label_502568;
        case 0x50256cu: goto label_50256c;
        case 0x502570u: goto label_502570;
        case 0x502574u: goto label_502574;
        case 0x502578u: goto label_502578;
        case 0x50257cu: goto label_50257c;
        case 0x502580u: goto label_502580;
        case 0x502584u: goto label_502584;
        case 0x502588u: goto label_502588;
        case 0x50258cu: goto label_50258c;
        case 0x502590u: goto label_502590;
        case 0x502594u: goto label_502594;
        case 0x502598u: goto label_502598;
        case 0x50259cu: goto label_50259c;
        case 0x5025a0u: goto label_5025a0;
        case 0x5025a4u: goto label_5025a4;
        case 0x5025a8u: goto label_5025a8;
        case 0x5025acu: goto label_5025ac;
        case 0x5025b0u: goto label_5025b0;
        case 0x5025b4u: goto label_5025b4;
        case 0x5025b8u: goto label_5025b8;
        case 0x5025bcu: goto label_5025bc;
        case 0x5025c0u: goto label_5025c0;
        case 0x5025c4u: goto label_5025c4;
        case 0x5025c8u: goto label_5025c8;
        case 0x5025ccu: goto label_5025cc;
        case 0x5025d0u: goto label_5025d0;
        case 0x5025d4u: goto label_5025d4;
        case 0x5025d8u: goto label_5025d8;
        case 0x5025dcu: goto label_5025dc;
        case 0x5025e0u: goto label_5025e0;
        case 0x5025e4u: goto label_5025e4;
        case 0x5025e8u: goto label_5025e8;
        case 0x5025ecu: goto label_5025ec;
        case 0x5025f0u: goto label_5025f0;
        case 0x5025f4u: goto label_5025f4;
        case 0x5025f8u: goto label_5025f8;
        case 0x5025fcu: goto label_5025fc;
        case 0x502600u: goto label_502600;
        case 0x502604u: goto label_502604;
        case 0x502608u: goto label_502608;
        case 0x50260cu: goto label_50260c;
        case 0x502610u: goto label_502610;
        case 0x502614u: goto label_502614;
        case 0x502618u: goto label_502618;
        case 0x50261cu: goto label_50261c;
        case 0x502620u: goto label_502620;
        case 0x502624u: goto label_502624;
        case 0x502628u: goto label_502628;
        case 0x50262cu: goto label_50262c;
        case 0x502630u: goto label_502630;
        case 0x502634u: goto label_502634;
        case 0x502638u: goto label_502638;
        case 0x50263cu: goto label_50263c;
        case 0x502640u: goto label_502640;
        case 0x502644u: goto label_502644;
        case 0x502648u: goto label_502648;
        case 0x50264cu: goto label_50264c;
        case 0x502650u: goto label_502650;
        case 0x502654u: goto label_502654;
        case 0x502658u: goto label_502658;
        case 0x50265cu: goto label_50265c;
        case 0x502660u: goto label_502660;
        case 0x502664u: goto label_502664;
        case 0x502668u: goto label_502668;
        case 0x50266cu: goto label_50266c;
        case 0x502670u: goto label_502670;
        case 0x502674u: goto label_502674;
        case 0x502678u: goto label_502678;
        case 0x50267cu: goto label_50267c;
        case 0x502680u: goto label_502680;
        case 0x502684u: goto label_502684;
        case 0x502688u: goto label_502688;
        case 0x50268cu: goto label_50268c;
        case 0x502690u: goto label_502690;
        case 0x502694u: goto label_502694;
        case 0x502698u: goto label_502698;
        case 0x50269cu: goto label_50269c;
        case 0x5026a0u: goto label_5026a0;
        case 0x5026a4u: goto label_5026a4;
        case 0x5026a8u: goto label_5026a8;
        case 0x5026acu: goto label_5026ac;
        case 0x5026b0u: goto label_5026b0;
        case 0x5026b4u: goto label_5026b4;
        case 0x5026b8u: goto label_5026b8;
        case 0x5026bcu: goto label_5026bc;
        case 0x5026c0u: goto label_5026c0;
        case 0x5026c4u: goto label_5026c4;
        case 0x5026c8u: goto label_5026c8;
        case 0x5026ccu: goto label_5026cc;
        case 0x5026d0u: goto label_5026d0;
        case 0x5026d4u: goto label_5026d4;
        case 0x5026d8u: goto label_5026d8;
        case 0x5026dcu: goto label_5026dc;
        case 0x5026e0u: goto label_5026e0;
        case 0x5026e4u: goto label_5026e4;
        case 0x5026e8u: goto label_5026e8;
        case 0x5026ecu: goto label_5026ec;
        case 0x5026f0u: goto label_5026f0;
        case 0x5026f4u: goto label_5026f4;
        case 0x5026f8u: goto label_5026f8;
        case 0x5026fcu: goto label_5026fc;
        case 0x502700u: goto label_502700;
        case 0x502704u: goto label_502704;
        case 0x502708u: goto label_502708;
        case 0x50270cu: goto label_50270c;
        case 0x502710u: goto label_502710;
        case 0x502714u: goto label_502714;
        case 0x502718u: goto label_502718;
        case 0x50271cu: goto label_50271c;
        case 0x502720u: goto label_502720;
        case 0x502724u: goto label_502724;
        case 0x502728u: goto label_502728;
        case 0x50272cu: goto label_50272c;
        case 0x502730u: goto label_502730;
        case 0x502734u: goto label_502734;
        case 0x502738u: goto label_502738;
        case 0x50273cu: goto label_50273c;
        case 0x502740u: goto label_502740;
        case 0x502744u: goto label_502744;
        case 0x502748u: goto label_502748;
        case 0x50274cu: goto label_50274c;
        case 0x502750u: goto label_502750;
        case 0x502754u: goto label_502754;
        case 0x502758u: goto label_502758;
        case 0x50275cu: goto label_50275c;
        case 0x502760u: goto label_502760;
        case 0x502764u: goto label_502764;
        case 0x502768u: goto label_502768;
        case 0x50276cu: goto label_50276c;
        case 0x502770u: goto label_502770;
        case 0x502774u: goto label_502774;
        case 0x502778u: goto label_502778;
        case 0x50277cu: goto label_50277c;
        case 0x502780u: goto label_502780;
        case 0x502784u: goto label_502784;
        case 0x502788u: goto label_502788;
        case 0x50278cu: goto label_50278c;
        case 0x502790u: goto label_502790;
        case 0x502794u: goto label_502794;
        case 0x502798u: goto label_502798;
        case 0x50279cu: goto label_50279c;
        case 0x5027a0u: goto label_5027a0;
        case 0x5027a4u: goto label_5027a4;
        case 0x5027a8u: goto label_5027a8;
        case 0x5027acu: goto label_5027ac;
        case 0x5027b0u: goto label_5027b0;
        case 0x5027b4u: goto label_5027b4;
        case 0x5027b8u: goto label_5027b8;
        case 0x5027bcu: goto label_5027bc;
        case 0x5027c0u: goto label_5027c0;
        case 0x5027c4u: goto label_5027c4;
        case 0x5027c8u: goto label_5027c8;
        case 0x5027ccu: goto label_5027cc;
        case 0x5027d0u: goto label_5027d0;
        case 0x5027d4u: goto label_5027d4;
        case 0x5027d8u: goto label_5027d8;
        case 0x5027dcu: goto label_5027dc;
        case 0x5027e0u: goto label_5027e0;
        case 0x5027e4u: goto label_5027e4;
        case 0x5027e8u: goto label_5027e8;
        case 0x5027ecu: goto label_5027ec;
        case 0x5027f0u: goto label_5027f0;
        case 0x5027f4u: goto label_5027f4;
        case 0x5027f8u: goto label_5027f8;
        case 0x5027fcu: goto label_5027fc;
        case 0x502800u: goto label_502800;
        case 0x502804u: goto label_502804;
        case 0x502808u: goto label_502808;
        case 0x50280cu: goto label_50280c;
        case 0x502810u: goto label_502810;
        case 0x502814u: goto label_502814;
        case 0x502818u: goto label_502818;
        case 0x50281cu: goto label_50281c;
        case 0x502820u: goto label_502820;
        case 0x502824u: goto label_502824;
        case 0x502828u: goto label_502828;
        case 0x50282cu: goto label_50282c;
        case 0x502830u: goto label_502830;
        case 0x502834u: goto label_502834;
        case 0x502838u: goto label_502838;
        case 0x50283cu: goto label_50283c;
        default: break;
    }

    ctx->pc = 0x502530u;

label_502530:
    // 0x502530: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x502530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_502534:
    // 0x502534: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x502534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_502538:
    // 0x502538: 0x3e00008  jr          $ra
label_50253c:
    if (ctx->pc == 0x50253Cu) {
        ctx->pc = 0x50253Cu;
            // 0x50253c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x502540u;
        goto label_502540;
    }
    ctx->pc = 0x502538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50253Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502538u;
            // 0x50253c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x502540u;
label_502540:
    // 0x502540: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x502540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_502544:
    // 0x502544: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x502544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_502548:
    // 0x502548: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x502548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_50254c:
    // 0x50254c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x50254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_502550:
    // 0x502550: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x502550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_502554:
    // 0x502554: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x502554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_502558:
    // 0x502558: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x502558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_50255c:
    // 0x50255c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x50255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_502560:
    // 0x502560: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x502560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_502564:
    // 0x502564: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x502564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_502568:
    // 0x502568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x502568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50256c:
    // 0x50256c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50256cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_502570:
    // 0x502570: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x502570u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_502574:
    // 0x502574: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_502578:
    if (ctx->pc == 0x502578u) {
        ctx->pc = 0x502578u;
            // 0x502578: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50257Cu;
        goto label_50257c;
    }
    ctx->pc = 0x502574u;
    {
        const bool branch_taken_0x502574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x502578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502574u;
            // 0x502578: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502574) {
            ctx->pc = 0x5025C4u;
            goto label_5025c4;
        }
    }
    ctx->pc = 0x50257Cu;
label_50257c:
    // 0x50257c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x50257cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_502580:
    // 0x502580: 0x50a30048  beql        $a1, $v1, . + 4 + (0x48 << 2)
label_502584:
    if (ctx->pc == 0x502584u) {
        ctx->pc = 0x502584u;
            // 0x502584: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x502588u;
        goto label_502588;
    }
    ctx->pc = 0x502580u;
    {
        const bool branch_taken_0x502580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x502580) {
            ctx->pc = 0x502584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502580u;
            // 0x502584: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5026A4u;
            goto label_5026a4;
        }
    }
    ctx->pc = 0x502588u;
label_502588:
    // 0x502588: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x502588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50258c:
    // 0x50258c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_502590:
    if (ctx->pc == 0x502590u) {
        ctx->pc = 0x502594u;
        goto label_502594;
    }
    ctx->pc = 0x50258Cu;
    {
        const bool branch_taken_0x50258c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x50258c) {
            ctx->pc = 0x50259Cu;
            goto label_50259c;
        }
    }
    ctx->pc = 0x502594u;
label_502594:
    // 0x502594: 0x10000042  b           . + 4 + (0x42 << 2)
label_502598:
    if (ctx->pc == 0x502598u) {
        ctx->pc = 0x50259Cu;
        goto label_50259c;
    }
    ctx->pc = 0x502594u;
    {
        const bool branch_taken_0x502594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502594) {
            ctx->pc = 0x5026A0u;
            goto label_5026a0;
        }
    }
    ctx->pc = 0x50259Cu;
label_50259c:
    // 0x50259c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5025a0:
    // 0x5025a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5025a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5025a4:
    // 0x5025a4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x5025a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_5025a8:
    // 0x5025a8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x5025a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_5025ac:
    // 0x5025ac: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x5025acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_5025b0:
    // 0x5025b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x5025b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_5025b4:
    // 0x5025b4: 0x320f809  jalr        $t9
label_5025b8:
    if (ctx->pc == 0x5025B8u) {
        ctx->pc = 0x5025B8u;
            // 0x5025b8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x5025BCu;
        goto label_5025bc;
    }
    ctx->pc = 0x5025B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5025BCu);
        ctx->pc = 0x5025B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5025B4u;
            // 0x5025b8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5025BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5025BCu; }
            if (ctx->pc != 0x5025BCu) { return; }
        }
        }
    }
    ctx->pc = 0x5025BCu;
label_5025bc:
    // 0x5025bc: 0x10000038  b           . + 4 + (0x38 << 2)
label_5025c0:
    if (ctx->pc == 0x5025C0u) {
        ctx->pc = 0x5025C4u;
        goto label_5025c4;
    }
    ctx->pc = 0x5025BCu;
    {
        const bool branch_taken_0x5025bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5025bc) {
            ctx->pc = 0x5026A0u;
            goto label_5026a0;
        }
    }
    ctx->pc = 0x5025C4u;
label_5025c4:
    // 0x5025c4: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x5025c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_5025c8:
    // 0x5025c8: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_5025cc:
    if (ctx->pc == 0x5025CCu) {
        ctx->pc = 0x5025D0u;
        goto label_5025d0;
    }
    ctx->pc = 0x5025C8u;
    {
        const bool branch_taken_0x5025c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5025c8) {
            ctx->pc = 0x5026A0u;
            goto label_5026a0;
        }
    }
    ctx->pc = 0x5025D0u;
label_5025d0:
    // 0x5025d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5025d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5025d4:
    // 0x5025d4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5025d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_5025d8:
    // 0x5025d8: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x5025d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_5025dc:
    // 0x5025dc: 0x26b40084  addiu       $s4, $s5, 0x84
    ctx->pc = 0x5025dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_5025e0:
    // 0x5025e0: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x5025e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_5025e4:
    // 0x5025e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5025e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5025e8:
    // 0x5025e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5025e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5025ec:
    // 0x5025ec: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x5025ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_5025f0:
    // 0x5025f0: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x5025f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_5025f4:
    // 0x5025f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5025f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5025f8:
    // 0x5025f8: 0x8cb10130  lw          $s1, 0x130($a1)
    ctx->pc = 0x5025f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_5025fc:
    // 0x5025fc: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x5025fcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_502600:
    // 0x502600: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x502600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_502604:
    // 0x502604: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x502604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_502608:
    // 0x502608: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x502608u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_50260c:
    // 0x50260c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50260cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_502610:
    // 0x502610: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x502610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_502614:
    // 0x502614: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x502614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_502618:
    // 0x502618: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x502618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_50261c:
    // 0x50261c: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x50261cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_502620:
    // 0x502620: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x502620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_502624:
    // 0x502624: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x502624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_502628:
    // 0x502628: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x502628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_50262c:
    // 0x50262c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x50262cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_502630:
    // 0x502630: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x502630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_502634:
    // 0x502634: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x502634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_502638:
    // 0x502638: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x502638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_50263c:
    // 0x50263c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x50263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_502640:
    // 0x502640: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x502640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_502644:
    // 0x502644: 0xc140ca0  jal         func_503280
label_502648:
    if (ctx->pc == 0x502648u) {
        ctx->pc = 0x502648u;
            // 0x502648: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50264Cu;
        goto label_50264c;
    }
    ctx->pc = 0x502644u;
    SET_GPR_U32(ctx, 31, 0x50264Cu);
    ctx->pc = 0x502648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502644u;
            // 0x502648: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x503280u;
    if (runtime->hasFunction(0x503280u)) {
        auto targetFn = runtime->lookupFunction(0x503280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50264Cu; }
        if (ctx->pc != 0x50264Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00503280_0x503280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50264Cu; }
        if (ctx->pc != 0x50264Cu) { return; }
    }
    ctx->pc = 0x50264Cu;
label_50264c:
    // 0x50264c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x50264cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_502650:
    // 0x502650: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x502650u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_502654:
    // 0x502654: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_502658:
    if (ctx->pc == 0x502658u) {
        ctx->pc = 0x502658u;
            // 0x502658: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x50265Cu;
        goto label_50265c;
    }
    ctx->pc = 0x502654u;
    {
        const bool branch_taken_0x502654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x502658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502654u;
            // 0x502658: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502654) {
            ctx->pc = 0x502624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_502624;
        }
    }
    ctx->pc = 0x50265Cu;
label_50265c:
    // 0x50265c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50265cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_502660:
    // 0x502660: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x502660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_502664:
    // 0x502664: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_502668:
    if (ctx->pc == 0x502668u) {
        ctx->pc = 0x50266Cu;
        goto label_50266c;
    }
    ctx->pc = 0x502664u;
    {
        const bool branch_taken_0x502664 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x502664) {
            ctx->pc = 0x5026A0u;
            goto label_5026a0;
        }
    }
    ctx->pc = 0x50266Cu;
label_50266c:
    // 0x50266c: 0xc04e738  jal         func_139CE0
label_502670:
    if (ctx->pc == 0x502670u) {
        ctx->pc = 0x502670u;
            // 0x502670: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x502674u;
        goto label_502674;
    }
    ctx->pc = 0x50266Cu;
    SET_GPR_U32(ctx, 31, 0x502674u);
    ctx->pc = 0x502670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50266Cu;
            // 0x502670: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502674u; }
        if (ctx->pc != 0x502674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502674u; }
        if (ctx->pc != 0x502674u) { return; }
    }
    ctx->pc = 0x502674u;
label_502674:
    // 0x502674: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x502674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_502678:
    // 0x502678: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x502678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_50267c:
    // 0x50267c: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x50267cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_502680:
    // 0x502680: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x502680u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_502684:
    // 0x502684: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x502684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_502688:
    // 0x502688: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x502688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50268c:
    // 0x50268c: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x50268cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_502690:
    // 0x502690: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x502690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_502694:
    // 0x502694: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x502694u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_502698:
    // 0x502698: 0xc055ea8  jal         func_157AA0
label_50269c:
    if (ctx->pc == 0x50269Cu) {
        ctx->pc = 0x50269Cu;
            // 0x50269c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5026A0u;
        goto label_5026a0;
    }
    ctx->pc = 0x502698u;
    SET_GPR_U32(ctx, 31, 0x5026A0u);
    ctx->pc = 0x50269Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502698u;
            // 0x50269c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5026A0u; }
        if (ctx->pc != 0x5026A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5026A0u; }
        if (ctx->pc != 0x5026A0u) { return; }
    }
    ctx->pc = 0x5026A0u;
label_5026a0:
    // 0x5026a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x5026a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_5026a4:
    // 0x5026a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x5026a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_5026a8:
    // 0x5026a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x5026a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_5026ac:
    // 0x5026ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x5026acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_5026b0:
    // 0x5026b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x5026b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5026b4:
    // 0x5026b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5026b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5026b8:
    // 0x5026b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5026b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5026bc:
    // 0x5026bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5026bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5026c0:
    // 0x5026c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5026c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5026c4:
    // 0x5026c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5026c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5026c8:
    // 0x5026c8: 0x3e00008  jr          $ra
label_5026cc:
    if (ctx->pc == 0x5026CCu) {
        ctx->pc = 0x5026CCu;
            // 0x5026cc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x5026D0u;
        goto label_5026d0;
    }
    ctx->pc = 0x5026C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5026CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5026C8u;
            // 0x5026cc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5026D0u;
label_5026d0:
    // 0x5026d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5026d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_5026d4:
    // 0x5026d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5026d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5026d8:
    // 0x5026d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5026d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5026dc:
    // 0x5026dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5026dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5026e0:
    // 0x5026e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5026e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5026e4:
    // 0x5026e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5026e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5026e8:
    // 0x5026e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5026e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5026ec:
    // 0x5026ec: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x5026ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_5026f0:
    // 0x5026f0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_5026f4:
    if (ctx->pc == 0x5026F4u) {
        ctx->pc = 0x5026F4u;
            // 0x5026f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5026F8u;
        goto label_5026f8;
    }
    ctx->pc = 0x5026F0u;
    {
        const bool branch_taken_0x5026f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x5026F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5026F0u;
            // 0x5026f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5026f0) {
            ctx->pc = 0x502724u;
            goto label_502724;
        }
    }
    ctx->pc = 0x5026F8u;
label_5026f8:
    // 0x5026f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5026f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5026fc:
    // 0x5026fc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_502700:
    if (ctx->pc == 0x502700u) {
        ctx->pc = 0x502700u;
            // 0x502700: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x502704u;
        goto label_502704;
    }
    ctx->pc = 0x5026FCu;
    {
        const bool branch_taken_0x5026fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5026fc) {
            ctx->pc = 0x502700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5026FCu;
            // 0x502700: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502718u;
            goto label_502718;
        }
    }
    ctx->pc = 0x502704u;
label_502704:
    // 0x502704: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x502704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_502708:
    // 0x502708: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
label_50270c:
    if (ctx->pc == 0x50270Cu) {
        ctx->pc = 0x502710u;
        goto label_502710;
    }
    ctx->pc = 0x502708u;
    {
        const bool branch_taken_0x502708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x502708) {
            ctx->pc = 0x502798u;
            goto label_502798;
        }
    }
    ctx->pc = 0x502710u;
label_502710:
    // 0x502710: 0x10000021  b           . + 4 + (0x21 << 2)
label_502714:
    if (ctx->pc == 0x502714u) {
        ctx->pc = 0x502718u;
        goto label_502718;
    }
    ctx->pc = 0x502710u;
    {
        const bool branch_taken_0x502710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x502710) {
            ctx->pc = 0x502798u;
            goto label_502798;
        }
    }
    ctx->pc = 0x502718u;
label_502718:
    // 0x502718: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x502718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_50271c:
    // 0x50271c: 0x320f809  jalr        $t9
label_502720:
    if (ctx->pc == 0x502720u) {
        ctx->pc = 0x502724u;
        goto label_502724;
    }
    ctx->pc = 0x50271Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x502724u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x502724u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x502724u; }
            if (ctx->pc != 0x502724u) { return; }
        }
        }
    }
    ctx->pc = 0x502724u;
label_502724:
    // 0x502724: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x502724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_502728:
    // 0x502728: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_50272c:
    if (ctx->pc == 0x50272Cu) {
        ctx->pc = 0x502730u;
        goto label_502730;
    }
    ctx->pc = 0x502728u;
    {
        const bool branch_taken_0x502728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x502728) {
            ctx->pc = 0x502798u;
            goto label_502798;
        }
    }
    ctx->pc = 0x502730u;
label_502730:
    // 0x502730: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x502730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_502734:
    // 0x502734: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x502734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_502738:
    // 0x502738: 0x8c430cb4  lw          $v1, 0xCB4($v0)
    ctx->pc = 0x502738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_50273c:
    // 0x50273c: 0x8c420cb8  lw          $v0, 0xCB8($v0)
    ctx->pc = 0x50273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3256)));
label_502740:
    // 0x502740: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_502744:
    if (ctx->pc == 0x502744u) {
        ctx->pc = 0x502744u;
            // 0x502744: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502748u;
        goto label_502748;
    }
    ctx->pc = 0x502740u;
    {
        const bool branch_taken_0x502740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x502740) {
            ctx->pc = 0x502744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502740u;
            // 0x502744: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502748u;
            goto label_502748;
        }
    }
    ctx->pc = 0x502748u;
label_502748:
    // 0x502748: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x502748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50274c:
    // 0x50274c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_502750:
    if (ctx->pc == 0x502750u) {
        ctx->pc = 0x502750u;
            // 0x502750: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502754u;
        goto label_502754;
    }
    ctx->pc = 0x50274Cu;
    {
        const bool branch_taken_0x50274c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50274c) {
            ctx->pc = 0x502750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50274Cu;
            // 0x502750: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502768u;
            goto label_502768;
        }
    }
    ctx->pc = 0x502754u;
label_502754:
    // 0x502754: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x502754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_502758:
    // 0x502758: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x502758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_50275c:
    // 0x50275c: 0x320f809  jalr        $t9
label_502760:
    if (ctx->pc == 0x502760u) {
        ctx->pc = 0x502760u;
            // 0x502760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502764u;
        goto label_502764;
    }
    ctx->pc = 0x50275Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x502764u);
        ctx->pc = 0x502760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50275Cu;
            // 0x502760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x502764u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x502764u; }
            if (ctx->pc != 0x502764u) { return; }
        }
        }
    }
    ctx->pc = 0x502764u;
label_502764:
    // 0x502764: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x502764u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_502768:
    // 0x502768: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x502768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50276c:
    // 0x50276c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x50276cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_502770:
    // 0x502770: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x502770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_502774:
    // 0x502774: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x502774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_502778:
    // 0x502778: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x502778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50277c:
    // 0x50277c: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x50277cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_502780:
    // 0x502780: 0x320f809  jalr        $t9
label_502784:
    if (ctx->pc == 0x502784u) {
        ctx->pc = 0x502788u;
        goto label_502788;
    }
    ctx->pc = 0x502780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x502788u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x502788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x502788u; }
            if (ctx->pc != 0x502788u) { return; }
        }
        }
    }
    ctx->pc = 0x502788u;
label_502788:
    // 0x502788: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x502788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_50278c:
    // 0x50278c: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x50278cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_502790:
    // 0x502790: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_502794:
    if (ctx->pc == 0x502794u) {
        ctx->pc = 0x502794u;
            // 0x502794: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x502798u;
        goto label_502798;
    }
    ctx->pc = 0x502790u;
    {
        const bool branch_taken_0x502790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x502794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502790u;
            // 0x502794: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502790) {
            ctx->pc = 0x50276Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50276c;
        }
    }
    ctx->pc = 0x502798u;
label_502798:
    // 0x502798: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x502798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_50279c:
    // 0x50279c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50279cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5027a0:
    // 0x5027a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5027a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5027a4:
    // 0x5027a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5027a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5027a8:
    // 0x5027a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5027a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5027ac:
    // 0x5027ac: 0x3e00008  jr          $ra
label_5027b0:
    if (ctx->pc == 0x5027B0u) {
        ctx->pc = 0x5027B0u;
            // 0x5027b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x5027B4u;
        goto label_5027b4;
    }
    ctx->pc = 0x5027ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5027B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5027ACu;
            // 0x5027b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5027B4u;
label_5027b4:
    // 0x5027b4: 0x0  nop
    ctx->pc = 0x5027b4u;
    // NOP
label_5027b8:
    // 0x5027b8: 0x0  nop
    ctx->pc = 0x5027b8u;
    // NOP
label_5027bc:
    // 0x5027bc: 0x0  nop
    ctx->pc = 0x5027bcu;
    // NOP
label_5027c0:
    // 0x5027c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5027c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_5027c4:
    // 0x5027c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5027c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5027c8:
    // 0x5027c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5027c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5027cc:
    // 0x5027cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5027ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5027d0:
    // 0x5027d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5027d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5027d4:
    // 0x5027d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5027d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5027d8:
    // 0x5027d8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x5027d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_5027dc:
    // 0x5027dc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_5027e0:
    if (ctx->pc == 0x5027E0u) {
        ctx->pc = 0x5027E0u;
            // 0x5027e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5027E4u;
        goto label_5027e4;
    }
    ctx->pc = 0x5027DCu;
    {
        const bool branch_taken_0x5027dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5027E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5027DCu;
            // 0x5027e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5027dc) {
            ctx->pc = 0x502818u;
            goto label_502818;
        }
    }
    ctx->pc = 0x5027E4u;
label_5027e4:
    // 0x5027e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5027e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5027e8:
    // 0x5027e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5027e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5027ec:
    // 0x5027ec: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x5027ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_5027f0:
    // 0x5027f0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x5027f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_5027f4:
    // 0x5027f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x5027f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5027f8:
    // 0x5027f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5027f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5027fc:
    // 0x5027fc: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x5027fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_502800:
    // 0x502800: 0x320f809  jalr        $t9
label_502804:
    if (ctx->pc == 0x502804u) {
        ctx->pc = 0x502808u;
        goto label_502808;
    }
    ctx->pc = 0x502800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x502808u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x502808u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x502808u; }
            if (ctx->pc != 0x502808u) { return; }
        }
        }
    }
    ctx->pc = 0x502808u;
label_502808:
    // 0x502808: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x502808u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_50280c:
    // 0x50280c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x50280cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_502810:
    // 0x502810: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_502814:
    if (ctx->pc == 0x502814u) {
        ctx->pc = 0x502814u;
            // 0x502814: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x502818u;
        goto label_502818;
    }
    ctx->pc = 0x502810u;
    {
        const bool branch_taken_0x502810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x502814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502810u;
            // 0x502814: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502810) {
            ctx->pc = 0x5027ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5027ec;
        }
    }
    ctx->pc = 0x502818u;
label_502818:
    // 0x502818: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x502818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_50281c:
    // 0x50281c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50281cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_502820:
    // 0x502820: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x502820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_502824:
    // 0x502824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x502824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_502828:
    // 0x502828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x502828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50282c:
    // 0x50282c: 0x3e00008  jr          $ra
label_502830:
    if (ctx->pc == 0x502830u) {
        ctx->pc = 0x502830u;
            // 0x502830: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x502834u;
        goto label_502834;
    }
    ctx->pc = 0x50282Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x502830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50282Cu;
            // 0x502830: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x502834u;
label_502834:
    // 0x502834: 0x0  nop
    ctx->pc = 0x502834u;
    // NOP
label_502838:
    // 0x502838: 0x0  nop
    ctx->pc = 0x502838u;
    // NOP
label_50283c:
    // 0x50283c: 0x0  nop
    ctx->pc = 0x50283cu;
    // NOP
}
