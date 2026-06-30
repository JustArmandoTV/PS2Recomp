#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00407500
// Address: 0x407500 - 0x4079b0
void sub_00407500_0x407500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407500_0x407500");
#endif

    switch (ctx->pc) {
        case 0x407500u: goto label_407500;
        case 0x407504u: goto label_407504;
        case 0x407508u: goto label_407508;
        case 0x40750cu: goto label_40750c;
        case 0x407510u: goto label_407510;
        case 0x407514u: goto label_407514;
        case 0x407518u: goto label_407518;
        case 0x40751cu: goto label_40751c;
        case 0x407520u: goto label_407520;
        case 0x407524u: goto label_407524;
        case 0x407528u: goto label_407528;
        case 0x40752cu: goto label_40752c;
        case 0x407530u: goto label_407530;
        case 0x407534u: goto label_407534;
        case 0x407538u: goto label_407538;
        case 0x40753cu: goto label_40753c;
        case 0x407540u: goto label_407540;
        case 0x407544u: goto label_407544;
        case 0x407548u: goto label_407548;
        case 0x40754cu: goto label_40754c;
        case 0x407550u: goto label_407550;
        case 0x407554u: goto label_407554;
        case 0x407558u: goto label_407558;
        case 0x40755cu: goto label_40755c;
        case 0x407560u: goto label_407560;
        case 0x407564u: goto label_407564;
        case 0x407568u: goto label_407568;
        case 0x40756cu: goto label_40756c;
        case 0x407570u: goto label_407570;
        case 0x407574u: goto label_407574;
        case 0x407578u: goto label_407578;
        case 0x40757cu: goto label_40757c;
        case 0x407580u: goto label_407580;
        case 0x407584u: goto label_407584;
        case 0x407588u: goto label_407588;
        case 0x40758cu: goto label_40758c;
        case 0x407590u: goto label_407590;
        case 0x407594u: goto label_407594;
        case 0x407598u: goto label_407598;
        case 0x40759cu: goto label_40759c;
        case 0x4075a0u: goto label_4075a0;
        case 0x4075a4u: goto label_4075a4;
        case 0x4075a8u: goto label_4075a8;
        case 0x4075acu: goto label_4075ac;
        case 0x4075b0u: goto label_4075b0;
        case 0x4075b4u: goto label_4075b4;
        case 0x4075b8u: goto label_4075b8;
        case 0x4075bcu: goto label_4075bc;
        case 0x4075c0u: goto label_4075c0;
        case 0x4075c4u: goto label_4075c4;
        case 0x4075c8u: goto label_4075c8;
        case 0x4075ccu: goto label_4075cc;
        case 0x4075d0u: goto label_4075d0;
        case 0x4075d4u: goto label_4075d4;
        case 0x4075d8u: goto label_4075d8;
        case 0x4075dcu: goto label_4075dc;
        case 0x4075e0u: goto label_4075e0;
        case 0x4075e4u: goto label_4075e4;
        case 0x4075e8u: goto label_4075e8;
        case 0x4075ecu: goto label_4075ec;
        case 0x4075f0u: goto label_4075f0;
        case 0x4075f4u: goto label_4075f4;
        case 0x4075f8u: goto label_4075f8;
        case 0x4075fcu: goto label_4075fc;
        case 0x407600u: goto label_407600;
        case 0x407604u: goto label_407604;
        case 0x407608u: goto label_407608;
        case 0x40760cu: goto label_40760c;
        case 0x407610u: goto label_407610;
        case 0x407614u: goto label_407614;
        case 0x407618u: goto label_407618;
        case 0x40761cu: goto label_40761c;
        case 0x407620u: goto label_407620;
        case 0x407624u: goto label_407624;
        case 0x407628u: goto label_407628;
        case 0x40762cu: goto label_40762c;
        case 0x407630u: goto label_407630;
        case 0x407634u: goto label_407634;
        case 0x407638u: goto label_407638;
        case 0x40763cu: goto label_40763c;
        case 0x407640u: goto label_407640;
        case 0x407644u: goto label_407644;
        case 0x407648u: goto label_407648;
        case 0x40764cu: goto label_40764c;
        case 0x407650u: goto label_407650;
        case 0x407654u: goto label_407654;
        case 0x407658u: goto label_407658;
        case 0x40765cu: goto label_40765c;
        case 0x407660u: goto label_407660;
        case 0x407664u: goto label_407664;
        case 0x407668u: goto label_407668;
        case 0x40766cu: goto label_40766c;
        case 0x407670u: goto label_407670;
        case 0x407674u: goto label_407674;
        case 0x407678u: goto label_407678;
        case 0x40767cu: goto label_40767c;
        case 0x407680u: goto label_407680;
        case 0x407684u: goto label_407684;
        case 0x407688u: goto label_407688;
        case 0x40768cu: goto label_40768c;
        case 0x407690u: goto label_407690;
        case 0x407694u: goto label_407694;
        case 0x407698u: goto label_407698;
        case 0x40769cu: goto label_40769c;
        case 0x4076a0u: goto label_4076a0;
        case 0x4076a4u: goto label_4076a4;
        case 0x4076a8u: goto label_4076a8;
        case 0x4076acu: goto label_4076ac;
        case 0x4076b0u: goto label_4076b0;
        case 0x4076b4u: goto label_4076b4;
        case 0x4076b8u: goto label_4076b8;
        case 0x4076bcu: goto label_4076bc;
        case 0x4076c0u: goto label_4076c0;
        case 0x4076c4u: goto label_4076c4;
        case 0x4076c8u: goto label_4076c8;
        case 0x4076ccu: goto label_4076cc;
        case 0x4076d0u: goto label_4076d0;
        case 0x4076d4u: goto label_4076d4;
        case 0x4076d8u: goto label_4076d8;
        case 0x4076dcu: goto label_4076dc;
        case 0x4076e0u: goto label_4076e0;
        case 0x4076e4u: goto label_4076e4;
        case 0x4076e8u: goto label_4076e8;
        case 0x4076ecu: goto label_4076ec;
        case 0x4076f0u: goto label_4076f0;
        case 0x4076f4u: goto label_4076f4;
        case 0x4076f8u: goto label_4076f8;
        case 0x4076fcu: goto label_4076fc;
        case 0x407700u: goto label_407700;
        case 0x407704u: goto label_407704;
        case 0x407708u: goto label_407708;
        case 0x40770cu: goto label_40770c;
        case 0x407710u: goto label_407710;
        case 0x407714u: goto label_407714;
        case 0x407718u: goto label_407718;
        case 0x40771cu: goto label_40771c;
        case 0x407720u: goto label_407720;
        case 0x407724u: goto label_407724;
        case 0x407728u: goto label_407728;
        case 0x40772cu: goto label_40772c;
        case 0x407730u: goto label_407730;
        case 0x407734u: goto label_407734;
        case 0x407738u: goto label_407738;
        case 0x40773cu: goto label_40773c;
        case 0x407740u: goto label_407740;
        case 0x407744u: goto label_407744;
        case 0x407748u: goto label_407748;
        case 0x40774cu: goto label_40774c;
        case 0x407750u: goto label_407750;
        case 0x407754u: goto label_407754;
        case 0x407758u: goto label_407758;
        case 0x40775cu: goto label_40775c;
        case 0x407760u: goto label_407760;
        case 0x407764u: goto label_407764;
        case 0x407768u: goto label_407768;
        case 0x40776cu: goto label_40776c;
        case 0x407770u: goto label_407770;
        case 0x407774u: goto label_407774;
        case 0x407778u: goto label_407778;
        case 0x40777cu: goto label_40777c;
        case 0x407780u: goto label_407780;
        case 0x407784u: goto label_407784;
        case 0x407788u: goto label_407788;
        case 0x40778cu: goto label_40778c;
        case 0x407790u: goto label_407790;
        case 0x407794u: goto label_407794;
        case 0x407798u: goto label_407798;
        case 0x40779cu: goto label_40779c;
        case 0x4077a0u: goto label_4077a0;
        case 0x4077a4u: goto label_4077a4;
        case 0x4077a8u: goto label_4077a8;
        case 0x4077acu: goto label_4077ac;
        case 0x4077b0u: goto label_4077b0;
        case 0x4077b4u: goto label_4077b4;
        case 0x4077b8u: goto label_4077b8;
        case 0x4077bcu: goto label_4077bc;
        case 0x4077c0u: goto label_4077c0;
        case 0x4077c4u: goto label_4077c4;
        case 0x4077c8u: goto label_4077c8;
        case 0x4077ccu: goto label_4077cc;
        case 0x4077d0u: goto label_4077d0;
        case 0x4077d4u: goto label_4077d4;
        case 0x4077d8u: goto label_4077d8;
        case 0x4077dcu: goto label_4077dc;
        case 0x4077e0u: goto label_4077e0;
        case 0x4077e4u: goto label_4077e4;
        case 0x4077e8u: goto label_4077e8;
        case 0x4077ecu: goto label_4077ec;
        case 0x4077f0u: goto label_4077f0;
        case 0x4077f4u: goto label_4077f4;
        case 0x4077f8u: goto label_4077f8;
        case 0x4077fcu: goto label_4077fc;
        case 0x407800u: goto label_407800;
        case 0x407804u: goto label_407804;
        case 0x407808u: goto label_407808;
        case 0x40780cu: goto label_40780c;
        case 0x407810u: goto label_407810;
        case 0x407814u: goto label_407814;
        case 0x407818u: goto label_407818;
        case 0x40781cu: goto label_40781c;
        case 0x407820u: goto label_407820;
        case 0x407824u: goto label_407824;
        case 0x407828u: goto label_407828;
        case 0x40782cu: goto label_40782c;
        case 0x407830u: goto label_407830;
        case 0x407834u: goto label_407834;
        case 0x407838u: goto label_407838;
        case 0x40783cu: goto label_40783c;
        case 0x407840u: goto label_407840;
        case 0x407844u: goto label_407844;
        case 0x407848u: goto label_407848;
        case 0x40784cu: goto label_40784c;
        case 0x407850u: goto label_407850;
        case 0x407854u: goto label_407854;
        case 0x407858u: goto label_407858;
        case 0x40785cu: goto label_40785c;
        case 0x407860u: goto label_407860;
        case 0x407864u: goto label_407864;
        case 0x407868u: goto label_407868;
        case 0x40786cu: goto label_40786c;
        case 0x407870u: goto label_407870;
        case 0x407874u: goto label_407874;
        case 0x407878u: goto label_407878;
        case 0x40787cu: goto label_40787c;
        case 0x407880u: goto label_407880;
        case 0x407884u: goto label_407884;
        case 0x407888u: goto label_407888;
        case 0x40788cu: goto label_40788c;
        case 0x407890u: goto label_407890;
        case 0x407894u: goto label_407894;
        case 0x407898u: goto label_407898;
        case 0x40789cu: goto label_40789c;
        case 0x4078a0u: goto label_4078a0;
        case 0x4078a4u: goto label_4078a4;
        case 0x4078a8u: goto label_4078a8;
        case 0x4078acu: goto label_4078ac;
        case 0x4078b0u: goto label_4078b0;
        case 0x4078b4u: goto label_4078b4;
        case 0x4078b8u: goto label_4078b8;
        case 0x4078bcu: goto label_4078bc;
        case 0x4078c0u: goto label_4078c0;
        case 0x4078c4u: goto label_4078c4;
        case 0x4078c8u: goto label_4078c8;
        case 0x4078ccu: goto label_4078cc;
        case 0x4078d0u: goto label_4078d0;
        case 0x4078d4u: goto label_4078d4;
        case 0x4078d8u: goto label_4078d8;
        case 0x4078dcu: goto label_4078dc;
        case 0x4078e0u: goto label_4078e0;
        case 0x4078e4u: goto label_4078e4;
        case 0x4078e8u: goto label_4078e8;
        case 0x4078ecu: goto label_4078ec;
        case 0x4078f0u: goto label_4078f0;
        case 0x4078f4u: goto label_4078f4;
        case 0x4078f8u: goto label_4078f8;
        case 0x4078fcu: goto label_4078fc;
        case 0x407900u: goto label_407900;
        case 0x407904u: goto label_407904;
        case 0x407908u: goto label_407908;
        case 0x40790cu: goto label_40790c;
        case 0x407910u: goto label_407910;
        case 0x407914u: goto label_407914;
        case 0x407918u: goto label_407918;
        case 0x40791cu: goto label_40791c;
        case 0x407920u: goto label_407920;
        case 0x407924u: goto label_407924;
        case 0x407928u: goto label_407928;
        case 0x40792cu: goto label_40792c;
        case 0x407930u: goto label_407930;
        case 0x407934u: goto label_407934;
        case 0x407938u: goto label_407938;
        case 0x40793cu: goto label_40793c;
        case 0x407940u: goto label_407940;
        case 0x407944u: goto label_407944;
        case 0x407948u: goto label_407948;
        case 0x40794cu: goto label_40794c;
        case 0x407950u: goto label_407950;
        case 0x407954u: goto label_407954;
        case 0x407958u: goto label_407958;
        case 0x40795cu: goto label_40795c;
        case 0x407960u: goto label_407960;
        case 0x407964u: goto label_407964;
        case 0x407968u: goto label_407968;
        case 0x40796cu: goto label_40796c;
        case 0x407970u: goto label_407970;
        case 0x407974u: goto label_407974;
        case 0x407978u: goto label_407978;
        case 0x40797cu: goto label_40797c;
        case 0x407980u: goto label_407980;
        case 0x407984u: goto label_407984;
        case 0x407988u: goto label_407988;
        case 0x40798cu: goto label_40798c;
        case 0x407990u: goto label_407990;
        case 0x407994u: goto label_407994;
        case 0x407998u: goto label_407998;
        case 0x40799cu: goto label_40799c;
        case 0x4079a0u: goto label_4079a0;
        case 0x4079a4u: goto label_4079a4;
        case 0x4079a8u: goto label_4079a8;
        case 0x4079acu: goto label_4079ac;
        default: break;
    }

    ctx->pc = 0x407500u;

label_407500:
    // 0x407500: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x407500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_407504:
    // 0x407504: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x407504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_407508:
    // 0x407508: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x407508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_40750c:
    // 0x40750c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40750cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_407510:
    // 0x407510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x407510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_407514:
    // 0x407514: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x407514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_407518:
    // 0x407518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x407518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40751c:
    // 0x40751c: 0x9083005c  lbu         $v1, 0x5C($a0)
    ctx->pc = 0x40751cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
label_407520:
    // 0x407520: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_407524:
    if (ctx->pc == 0x407524u) {
        ctx->pc = 0x407524u;
            // 0x407524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x407528u;
        goto label_407528;
    }
    ctx->pc = 0x407520u;
    {
        const bool branch_taken_0x407520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x407524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407520u;
            // 0x407524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407520) {
            ctx->pc = 0x4075A4u;
            goto label_4075a4;
        }
    }
    ctx->pc = 0x407528u;
label_407528:
    // 0x407528: 0x8e140050  lw          $s4, 0x50($s0)
    ctx->pc = 0x407528u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_40752c:
    // 0x40752c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x40752cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407530:
    // 0x407530: 0x8e130058  lw          $s3, 0x58($s0)
    ctx->pc = 0x407530u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_407534:
    // 0x407534: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x407534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407538:
    // 0x407538: 0x8e83015c  lw          $v1, 0x15C($s4)
    ctx->pc = 0x407538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 348)));
label_40753c:
    // 0x40753c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_407540:
    if (ctx->pc == 0x407540u) {
        ctx->pc = 0x407544u;
        goto label_407544;
    }
    ctx->pc = 0x40753Cu;
    {
        const bool branch_taken_0x40753c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x40753c) {
            ctx->pc = 0x407550u;
            goto label_407550;
        }
    }
    ctx->pc = 0x407544u;
label_407544:
    // 0x407544: 0x10000004  b           . + 4 + (0x4 << 2)
label_407548:
    if (ctx->pc == 0x407548u) {
        ctx->pc = 0x40754Cu;
        goto label_40754c;
    }
    ctx->pc = 0x407544u;
    {
        const bool branch_taken_0x407544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x407544) {
            ctx->pc = 0x407558u;
            goto label_407558;
        }
    }
    ctx->pc = 0x40754Cu;
label_40754c:
    // 0x40754c: 0x0  nop
    ctx->pc = 0x40754cu;
    // NOP
label_407550:
    // 0x407550: 0x1000000d  b           . + 4 + (0xD << 2)
label_407554:
    if (ctx->pc == 0x407554u) {
        ctx->pc = 0x407554u;
            // 0x407554: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x407558u;
        goto label_407558;
    }
    ctx->pc = 0x407550u;
    {
        const bool branch_taken_0x407550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407550u;
            // 0x407554: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407550) {
            ctx->pc = 0x407588u;
            goto label_407588;
        }
    }
    ctx->pc = 0x407558u;
label_407558:
    // 0x407558: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_40755c:
    if (ctx->pc == 0x40755Cu) {
        ctx->pc = 0x407560u;
        goto label_407560;
    }
    ctx->pc = 0x407558u;
    {
        const bool branch_taken_0x407558 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x407558) {
            ctx->pc = 0x407570u;
            goto label_407570;
        }
    }
    ctx->pc = 0x407560u;
label_407560:
    // 0x407560: 0xc0e3658  jal         func_38D960
label_407564:
    if (ctx->pc == 0x407564u) {
        ctx->pc = 0x407564u;
            // 0x407564: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x407568u;
        goto label_407568;
    }
    ctx->pc = 0x407560u;
    SET_GPR_U32(ctx, 31, 0x407568u);
    ctx->pc = 0x407564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407560u;
            // 0x407564: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407568u; }
        if (ctx->pc != 0x407568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407568u; }
        if (ctx->pc != 0x407568u) { return; }
    }
    ctx->pc = 0x407568u;
label_407568:
    // 0x407568: 0x10000007  b           . + 4 + (0x7 << 2)
label_40756c:
    if (ctx->pc == 0x40756Cu) {
        ctx->pc = 0x407570u;
        goto label_407570;
    }
    ctx->pc = 0x407568u;
    {
        const bool branch_taken_0x407568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x407568) {
            ctx->pc = 0x407588u;
            goto label_407588;
        }
    }
    ctx->pc = 0x407570u;
label_407570:
    // 0x407570: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x407570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_407574:
    // 0x407574: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x407574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_407578:
    // 0x407578: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x407578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_40757c:
    // 0x40757c: 0x320f809  jalr        $t9
label_407580:
    if (ctx->pc == 0x407580u) {
        ctx->pc = 0x407580u;
            // 0x407580: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x407584u;
        goto label_407584;
    }
    ctx->pc = 0x40757Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x407584u);
        ctx->pc = 0x407580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40757Cu;
            // 0x407580: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x407584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x407584u; }
            if (ctx->pc != 0x407584u) { return; }
        }
        }
    }
    ctx->pc = 0x407584u;
label_407584:
    // 0x407584: 0x0  nop
    ctx->pc = 0x407584u;
    // NOP
label_407588:
    // 0x407588: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x407588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_40758c:
    // 0x40758c: 0x1e60ffea  bgtz        $s3, . + 4 + (-0x16 << 2)
label_407590:
    if (ctx->pc == 0x407590u) {
        ctx->pc = 0x407590u;
            // 0x407590: 0x26940170  addiu       $s4, $s4, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
        ctx->pc = 0x407594u;
        goto label_407594;
    }
    ctx->pc = 0x40758Cu;
    {
        const bool branch_taken_0x40758c = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x407590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40758Cu;
            // 0x407590: 0x26940170  addiu       $s4, $s4, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40758c) {
            ctx->pc = 0x407538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_407538;
        }
    }
    ctx->pc = 0x407594u;
label_407594:
    // 0x407594: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x407594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_407598:
    // 0x407598: 0x2431826  xor         $v1, $s2, $v1
    ctx->pc = 0x407598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 3));
label_40759c:
    // 0x40759c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x40759cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4075a0:
    // 0x4075a0: 0xa203005c  sb          $v1, 0x5C($s0)
    ctx->pc = 0x4075a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 3));
label_4075a4:
    // 0x4075a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4075a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4075a8:
    // 0x4075a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4075a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4075ac:
    // 0x4075ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4075acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4075b0:
    // 0x4075b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4075b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4075b4:
    // 0x4075b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4075b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4075b8:
    // 0x4075b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4075b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4075bc:
    // 0x4075bc: 0x3e00008  jr          $ra
label_4075c0:
    if (ctx->pc == 0x4075C0u) {
        ctx->pc = 0x4075C0u;
            // 0x4075c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4075C4u;
        goto label_4075c4;
    }
    ctx->pc = 0x4075BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4075C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4075BCu;
            // 0x4075c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4075C4u;
label_4075c4:
    // 0x4075c4: 0x0  nop
    ctx->pc = 0x4075c4u;
    // NOP
label_4075c8:
    // 0x4075c8: 0x0  nop
    ctx->pc = 0x4075c8u;
    // NOP
label_4075cc:
    // 0x4075cc: 0x0  nop
    ctx->pc = 0x4075ccu;
    // NOP
label_4075d0:
    // 0x4075d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4075d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4075d4:
    // 0x4075d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4075d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4075d8:
    // 0x4075d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4075d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4075dc:
    // 0x4075dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4075dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4075e0:
    // 0x4075e0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x4075e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4075e4:
    // 0x4075e4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_4075e8:
    if (ctx->pc == 0x4075E8u) {
        ctx->pc = 0x4075E8u;
            // 0x4075e8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x4075ECu;
        goto label_4075ec;
    }
    ctx->pc = 0x4075E4u;
    {
        const bool branch_taken_0x4075e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4075e4) {
            ctx->pc = 0x4075E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4075E4u;
            // 0x4075e8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4075FCu;
            goto label_4075fc;
        }
    }
    ctx->pc = 0x4075ECu;
label_4075ec:
    // 0x4075ec: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x4075ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_4075f0:
    // 0x4075f0: 0xc0407c0  jal         func_101F00
label_4075f4:
    if (ctx->pc == 0x4075F4u) {
        ctx->pc = 0x4075F4u;
            // 0x4075f4: 0x24a57630  addiu       $a1, $a1, 0x7630 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30256));
        ctx->pc = 0x4075F8u;
        goto label_4075f8;
    }
    ctx->pc = 0x4075F0u;
    SET_GPR_U32(ctx, 31, 0x4075F8u);
    ctx->pc = 0x4075F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4075F0u;
            // 0x4075f4: 0x24a57630  addiu       $a1, $a1, 0x7630 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4075F8u; }
        if (ctx->pc != 0x4075F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4075F8u; }
        if (ctx->pc != 0x4075F8u) { return; }
    }
    ctx->pc = 0x4075F8u;
label_4075f8:
    // 0x4075f8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x4075f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4075fc:
    // 0x4075fc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_407600:
    if (ctx->pc == 0x407600u) {
        ctx->pc = 0x407600u;
            // 0x407600: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x407604u;
        goto label_407604;
    }
    ctx->pc = 0x4075FCu;
    {
        const bool branch_taken_0x4075fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4075fc) {
            ctx->pc = 0x407600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4075FCu;
            // 0x407600: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407610u;
            goto label_407610;
        }
    }
    ctx->pc = 0x407604u;
label_407604:
    // 0x407604: 0xc04008c  jal         func_100230
label_407608:
    if (ctx->pc == 0x407608u) {
        ctx->pc = 0x40760Cu;
        goto label_40760c;
    }
    ctx->pc = 0x407604u;
    SET_GPR_U32(ctx, 31, 0x40760Cu);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40760Cu; }
        if (ctx->pc != 0x40760Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40760Cu; }
        if (ctx->pc != 0x40760Cu) { return; }
    }
    ctx->pc = 0x40760Cu;
label_40760c:
    // 0x40760c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x40760cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_407610:
    // 0x407610: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x407610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_407614:
    // 0x407614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x407614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_407618:
    // 0x407618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x407618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40761c:
    // 0x40761c: 0x3e00008  jr          $ra
label_407620:
    if (ctx->pc == 0x407620u) {
        ctx->pc = 0x407620u;
            // 0x407620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x407624u;
        goto label_407624;
    }
    ctx->pc = 0x40761Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40761Cu;
            // 0x407620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x407624u;
label_407624:
    // 0x407624: 0x0  nop
    ctx->pc = 0x407624u;
    // NOP
label_407628:
    // 0x407628: 0x0  nop
    ctx->pc = 0x407628u;
    // NOP
label_40762c:
    // 0x40762c: 0x0  nop
    ctx->pc = 0x40762cu;
    // NOP
label_407630:
    // 0x407630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x407630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_407634:
    // 0x407634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x407634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_407638:
    // 0x407638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x407638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40763c:
    // 0x40763c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_407640:
    // 0x407640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x407640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_407644:
    // 0x407644: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_407648:
    if (ctx->pc == 0x407648u) {
        ctx->pc = 0x407648u;
            // 0x407648: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40764Cu;
        goto label_40764c;
    }
    ctx->pc = 0x407644u;
    {
        const bool branch_taken_0x407644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x407648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407644u;
            // 0x407648: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407644) {
            ctx->pc = 0x40770Cu;
            goto label_40770c;
        }
    }
    ctx->pc = 0x40764Cu;
label_40764c:
    // 0x40764c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40764cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_407650:
    // 0x407650: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x407650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_407654:
    // 0x407654: 0x2463a940  addiu       $v1, $v1, -0x56C0
    ctx->pc = 0x407654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945088));
label_407658:
    // 0x407658: 0x2442a980  addiu       $v0, $v0, -0x5680
    ctx->pc = 0x407658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945152));
label_40765c:
    // 0x40765c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40765cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_407660:
    // 0x407660: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x407660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_407664:
    // 0x407664: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x407664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_407668:
    // 0x407668: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x407668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_40766c:
    // 0x40766c: 0x320f809  jalr        $t9
label_407670:
    if (ctx->pc == 0x407670u) {
        ctx->pc = 0x407674u;
        goto label_407674;
    }
    ctx->pc = 0x40766Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x407674u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x407674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x407674u; }
            if (ctx->pc != 0x407674u) { return; }
        }
        }
    }
    ctx->pc = 0x407674u;
label_407674:
    // 0x407674: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_407678:
    if (ctx->pc == 0x407678u) {
        ctx->pc = 0x407678u;
            // 0x407678: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x40767Cu;
        goto label_40767c;
    }
    ctx->pc = 0x407674u;
    {
        const bool branch_taken_0x407674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x407674) {
            ctx->pc = 0x407678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x407674u;
            // 0x407678: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4076F8u;
            goto label_4076f8;
        }
    }
    ctx->pc = 0x40767Cu;
label_40767c:
    // 0x40767c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x40767cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_407680:
    // 0x407680: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x407680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_407684:
    // 0x407684: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x407684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_407688:
    // 0x407688: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x407688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_40768c:
    // 0x40768c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40768cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_407690:
    // 0x407690: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x407690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_407694:
    // 0x407694: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x407694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_407698:
    // 0x407698: 0xc0aecc4  jal         func_2BB310
label_40769c:
    if (ctx->pc == 0x40769Cu) {
        ctx->pc = 0x40769Cu;
            // 0x40769c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4076A0u;
        goto label_4076a0;
    }
    ctx->pc = 0x407698u;
    SET_GPR_U32(ctx, 31, 0x4076A0u);
    ctx->pc = 0x40769Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407698u;
            // 0x40769c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4076A0u; }
        if (ctx->pc != 0x4076A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4076A0u; }
        if (ctx->pc != 0x4076A0u) { return; }
    }
    ctx->pc = 0x4076A0u;
label_4076a0:
    // 0x4076a0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4076a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4076a4:
    // 0x4076a4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4076a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4076a8:
    // 0x4076a8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4076ac:
    if (ctx->pc == 0x4076ACu) {
        ctx->pc = 0x4076ACu;
            // 0x4076ac: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4076B0u;
        goto label_4076b0;
    }
    ctx->pc = 0x4076A8u;
    {
        const bool branch_taken_0x4076a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4076a8) {
            ctx->pc = 0x4076ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4076A8u;
            // 0x4076ac: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4076C4u;
            goto label_4076c4;
        }
    }
    ctx->pc = 0x4076B0u;
label_4076b0:
    // 0x4076b0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4076b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4076b4:
    // 0x4076b4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4076b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4076b8:
    // 0x4076b8: 0x320f809  jalr        $t9
label_4076bc:
    if (ctx->pc == 0x4076BCu) {
        ctx->pc = 0x4076BCu;
            // 0x4076bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4076C0u;
        goto label_4076c0;
    }
    ctx->pc = 0x4076B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4076C0u);
        ctx->pc = 0x4076BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4076B8u;
            // 0x4076bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4076C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4076C0u; }
            if (ctx->pc != 0x4076C0u) { return; }
        }
        }
    }
    ctx->pc = 0x4076C0u;
label_4076c0:
    // 0x4076c0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4076c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4076c4:
    // 0x4076c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4076c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4076c8:
    // 0x4076c8: 0xc0aec9c  jal         func_2BB270
label_4076cc:
    if (ctx->pc == 0x4076CCu) {
        ctx->pc = 0x4076CCu;
            // 0x4076cc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4076D0u;
        goto label_4076d0;
    }
    ctx->pc = 0x4076C8u;
    SET_GPR_U32(ctx, 31, 0x4076D0u);
    ctx->pc = 0x4076CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4076C8u;
            // 0x4076cc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4076D0u; }
        if (ctx->pc != 0x4076D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4076D0u; }
        if (ctx->pc != 0x4076D0u) { return; }
    }
    ctx->pc = 0x4076D0u;
label_4076d0:
    // 0x4076d0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4076d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4076d4:
    // 0x4076d4: 0xc0aec88  jal         func_2BB220
label_4076d8:
    if (ctx->pc == 0x4076D8u) {
        ctx->pc = 0x4076D8u;
            // 0x4076d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4076DCu;
        goto label_4076dc;
    }
    ctx->pc = 0x4076D4u;
    SET_GPR_U32(ctx, 31, 0x4076DCu);
    ctx->pc = 0x4076D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4076D4u;
            // 0x4076d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4076DCu; }
        if (ctx->pc != 0x4076DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4076DCu; }
        if (ctx->pc != 0x4076DCu) { return; }
    }
    ctx->pc = 0x4076DCu;
label_4076dc:
    // 0x4076dc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4076dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4076e0:
    // 0x4076e0: 0xc0aec0c  jal         func_2BB030
label_4076e4:
    if (ctx->pc == 0x4076E4u) {
        ctx->pc = 0x4076E4u;
            // 0x4076e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4076E8u;
        goto label_4076e8;
    }
    ctx->pc = 0x4076E0u;
    SET_GPR_U32(ctx, 31, 0x4076E8u);
    ctx->pc = 0x4076E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4076E0u;
            // 0x4076e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4076E8u; }
        if (ctx->pc != 0x4076E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4076E8u; }
        if (ctx->pc != 0x4076E8u) { return; }
    }
    ctx->pc = 0x4076E8u;
label_4076e8:
    // 0x4076e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4076e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4076ec:
    // 0x4076ec: 0xc0aeaa8  jal         func_2BAAA0
label_4076f0:
    if (ctx->pc == 0x4076F0u) {
        ctx->pc = 0x4076F0u;
            // 0x4076f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4076F4u;
        goto label_4076f4;
    }
    ctx->pc = 0x4076ECu;
    SET_GPR_U32(ctx, 31, 0x4076F4u);
    ctx->pc = 0x4076F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4076ECu;
            // 0x4076f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4076F4u; }
        if (ctx->pc != 0x4076F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4076F4u; }
        if (ctx->pc != 0x4076F4u) { return; }
    }
    ctx->pc = 0x4076F4u;
label_4076f4:
    // 0x4076f4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4076f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4076f8:
    // 0x4076f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4076f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4076fc:
    // 0x4076fc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_407700:
    if (ctx->pc == 0x407700u) {
        ctx->pc = 0x407700u;
            // 0x407700: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x407704u;
        goto label_407704;
    }
    ctx->pc = 0x4076FCu;
    {
        const bool branch_taken_0x4076fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4076fc) {
            ctx->pc = 0x407700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4076FCu;
            // 0x407700: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407710u;
            goto label_407710;
        }
    }
    ctx->pc = 0x407704u;
label_407704:
    // 0x407704: 0xc0400a8  jal         func_1002A0
label_407708:
    if (ctx->pc == 0x407708u) {
        ctx->pc = 0x407708u;
            // 0x407708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40770Cu;
        goto label_40770c;
    }
    ctx->pc = 0x407704u;
    SET_GPR_U32(ctx, 31, 0x40770Cu);
    ctx->pc = 0x407708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407704u;
            // 0x407708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40770Cu; }
        if (ctx->pc != 0x40770Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40770Cu; }
        if (ctx->pc != 0x40770Cu) { return; }
    }
    ctx->pc = 0x40770Cu;
label_40770c:
    // 0x40770c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40770cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407710:
    // 0x407710: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x407710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_407714:
    // 0x407714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x407714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_407718:
    // 0x407718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x407718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40771c:
    // 0x40771c: 0x3e00008  jr          $ra
label_407720:
    if (ctx->pc == 0x407720u) {
        ctx->pc = 0x407720u;
            // 0x407720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x407724u;
        goto label_407724;
    }
    ctx->pc = 0x40771Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40771Cu;
            // 0x407720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x407724u;
label_407724:
    // 0x407724: 0x0  nop
    ctx->pc = 0x407724u;
    // NOP
label_407728:
    // 0x407728: 0x0  nop
    ctx->pc = 0x407728u;
    // NOP
label_40772c:
    // 0x40772c: 0x0  nop
    ctx->pc = 0x40772cu;
    // NOP
label_407730:
    // 0x407730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x407730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_407734:
    // 0x407734: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x407734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_407738:
    // 0x407738: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x407738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_40773c:
    // 0x40773c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x40773cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_407740:
    // 0x407740: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x407740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_407744:
    // 0x407744: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x407744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_407748:
    // 0x407748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x407748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40774c:
    // 0x40774c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40774cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_407750:
    // 0x407750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x407750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_407754:
    // 0x407754: 0xc040138  jal         func_1004E0
label_407758:
    if (ctx->pc == 0x407758u) {
        ctx->pc = 0x407758u;
            // 0x407758: 0x240402d8  addiu       $a0, $zero, 0x2D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 728));
        ctx->pc = 0x40775Cu;
        goto label_40775c;
    }
    ctx->pc = 0x407754u;
    SET_GPR_U32(ctx, 31, 0x40775Cu);
    ctx->pc = 0x407758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407754u;
            // 0x407758: 0x240402d8  addiu       $a0, $zero, 0x2D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40775Cu; }
        if (ctx->pc != 0x40775Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40775Cu; }
        if (ctx->pc != 0x40775Cu) { return; }
    }
    ctx->pc = 0x40775Cu;
label_40775c:
    // 0x40775c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x40775cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_407760:
    // 0x407760: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x407760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407764:
    // 0x407764: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x407764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407768:
    // 0x407768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x407768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40776c:
    // 0x40776c: 0xc04a576  jal         func_1295D8
label_407770:
    if (ctx->pc == 0x407770u) {
        ctx->pc = 0x407770u;
            // 0x407770: 0x240602d8  addiu       $a2, $zero, 0x2D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 728));
        ctx->pc = 0x407774u;
        goto label_407774;
    }
    ctx->pc = 0x40776Cu;
    SET_GPR_U32(ctx, 31, 0x407774u);
    ctx->pc = 0x407770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40776Cu;
            // 0x407770: 0x240602d8  addiu       $a2, $zero, 0x2D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407774u; }
        if (ctx->pc != 0x407774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407774u; }
        if (ctx->pc != 0x407774u) { return; }
    }
    ctx->pc = 0x407774u;
label_407774:
    // 0x407774: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x407774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407778:
    // 0x407778: 0x24033aa3  addiu       $v1, $zero, 0x3AA3
    ctx->pc = 0x407778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15011));
label_40777c:
    // 0x40777c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x40777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_407780:
    // 0x407780: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x407780u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_407784:
    // 0x407784: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x407784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_407788:
    // 0x407788: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x407788u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
label_40778c:
    // 0x40778c: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x40778cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
label_407790:
    // 0x407790: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x407790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_407794:
    // 0x407794: 0xc04cb1c  jal         func_132C70
label_407798:
    if (ctx->pc == 0x407798u) {
        ctx->pc = 0x407798u;
            // 0x407798: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->pc = 0x40779Cu;
        goto label_40779c;
    }
    ctx->pc = 0x407794u;
    SET_GPR_U32(ctx, 31, 0x40779Cu);
    ctx->pc = 0x407798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407794u;
            // 0x407798: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40779Cu; }
        if (ctx->pc != 0x40779Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40779Cu; }
        if (ctx->pc != 0x40779Cu) { return; }
    }
    ctx->pc = 0x40779Cu;
label_40779c:
    // 0x40779c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x40779cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4077a0:
    // 0x4077a0: 0x2a42000e  slti        $v0, $s2, 0xE
    ctx->pc = 0x4077a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)14) ? 1 : 0);
label_4077a4:
    // 0x4077a4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4077a8:
    if (ctx->pc == 0x4077A8u) {
        ctx->pc = 0x4077A8u;
            // 0x4077a8: 0x26310034  addiu       $s1, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->pc = 0x4077ACu;
        goto label_4077ac;
    }
    ctx->pc = 0x4077A4u;
    {
        const bool branch_taken_0x4077a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4077A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4077A4u;
            // 0x4077a8: 0x26310034  addiu       $s1, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4077a4) {
            ctx->pc = 0x407778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_407778;
        }
    }
    ctx->pc = 0x4077ACu;
label_4077ac:
    // 0x4077ac: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x4077acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4077b0:
    // 0x4077b0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x4077b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_4077b4:
    // 0x4077b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4077b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4077b8:
    // 0x4077b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4077b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4077bc:
    // 0x4077bc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x4077bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4077c0:
    // 0x4077c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4077c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4077c4:
    // 0x4077c4: 0xc040138  jal         func_1004E0
label_4077c8:
    if (ctx->pc == 0x4077C8u) {
        ctx->pc = 0x4077C8u;
            // 0x4077c8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4077CCu;
        goto label_4077cc;
    }
    ctx->pc = 0x4077C4u;
    SET_GPR_U32(ctx, 31, 0x4077CCu);
    ctx->pc = 0x4077C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4077C4u;
            // 0x4077c8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4077CCu; }
        if (ctx->pc != 0x4077CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4077CCu; }
        if (ctx->pc != 0x4077CCu) { return; }
    }
    ctx->pc = 0x4077CCu;
label_4077cc:
    // 0x4077cc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x4077ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_4077d0:
    // 0x4077d0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x4077d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_4077d4:
    // 0x4077d4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4077d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4077d8:
    // 0x4077d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4077d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4077dc:
    // 0x4077dc: 0x24a57870  addiu       $a1, $a1, 0x7870
    ctx->pc = 0x4077dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30832));
label_4077e0:
    // 0x4077e0: 0x24c67630  addiu       $a2, $a2, 0x7630
    ctx->pc = 0x4077e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30256));
label_4077e4:
    // 0x4077e4: 0xc040840  jal         func_102100
label_4077e8:
    if (ctx->pc == 0x4077E8u) {
        ctx->pc = 0x4077E8u;
            // 0x4077e8: 0x24070170  addiu       $a3, $zero, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
        ctx->pc = 0x4077ECu;
        goto label_4077ec;
    }
    ctx->pc = 0x4077E4u;
    SET_GPR_U32(ctx, 31, 0x4077ECu);
    ctx->pc = 0x4077E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4077E4u;
            // 0x4077e8: 0x24070170  addiu       $a3, $zero, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4077ECu; }
        if (ctx->pc != 0x4077ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4077ECu; }
        if (ctx->pc != 0x4077ECu) { return; }
    }
    ctx->pc = 0x4077ECu;
label_4077ec:
    // 0x4077ec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4077ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4077f0:
    // 0x4077f0: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x4077f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
label_4077f4:
    // 0x4077f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4077f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4077f8:
    // 0x4077f8: 0xae150050  sw          $s5, 0x50($s0)
    ctx->pc = 0x4077f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 21));
label_4077fc:
    // 0x4077fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4077fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407800:
    // 0x407800: 0x2652ba90  addiu       $s2, $s2, -0x4570
    ctx->pc = 0x407800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949520));
label_407804:
    // 0x407804: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x407804u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_407808:
    // 0x407808: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
label_40780c:
    if (ctx->pc == 0x40780Cu) {
        ctx->pc = 0x40780Cu;
            // 0x40780c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x407810u;
        goto label_407810;
    }
    ctx->pc = 0x407808u;
    {
        const bool branch_taken_0x407808 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x40780Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407808u;
            // 0x40780c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407808) {
            ctx->pc = 0x407838u;
            goto label_407838;
        }
    }
    ctx->pc = 0x407810u;
label_407810:
    // 0x407810: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x407810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_407814:
    // 0x407814: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x407814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_407818:
    // 0x407818: 0xc0d879c  jal         func_361E70
label_40781c:
    if (ctx->pc == 0x40781Cu) {
        ctx->pc = 0x40781Cu;
            // 0x40781c: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x407820u;
        goto label_407820;
    }
    ctx->pc = 0x407818u;
    SET_GPR_U32(ctx, 31, 0x407820u);
    ctx->pc = 0x40781Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407818u;
            // 0x40781c: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407820u; }
        if (ctx->pc != 0x407820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407820u; }
        if (ctx->pc != 0x407820u) { return; }
    }
    ctx->pc = 0x407820u;
label_407820:
    // 0x407820: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x407820u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_407824:
    // 0x407824: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x407824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_407828:
    // 0x407828: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x407828u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_40782c:
    // 0x40782c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_407830:
    if (ctx->pc == 0x407830u) {
        ctx->pc = 0x407830u;
            // 0x407830: 0x26b50170  addiu       $s5, $s5, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 368));
        ctx->pc = 0x407834u;
        goto label_407834;
    }
    ctx->pc = 0x40782Cu;
    {
        const bool branch_taken_0x40782c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x407830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40782Cu;
            // 0x407830: 0x26b50170  addiu       $s5, $s5, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40782c) {
            ctx->pc = 0x407810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_407810;
        }
    }
    ctx->pc = 0x407834u;
label_407834:
    // 0x407834: 0x0  nop
    ctx->pc = 0x407834u;
    // NOP
label_407838:
    // 0x407838: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x407838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_40783c:
    // 0x40783c: 0x2a23000e  slti        $v1, $s1, 0xE
    ctx->pc = 0x40783cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)14) ? 1 : 0);
label_407840:
    // 0x407840: 0x26730034  addiu       $s3, $s3, 0x34
    ctx->pc = 0x407840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
label_407844:
    // 0x407844: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_407848:
    if (ctx->pc == 0x407848u) {
        ctx->pc = 0x407848u;
            // 0x407848: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x40784Cu;
        goto label_40784c;
    }
    ctx->pc = 0x407844u;
    {
        const bool branch_taken_0x407844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x407848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407844u;
            // 0x407848: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407844) {
            ctx->pc = 0x407804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_407804;
        }
    }
    ctx->pc = 0x40784Cu;
label_40784c:
    // 0x40784c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x40784cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_407850:
    // 0x407850: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x407850u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_407854:
    // 0x407854: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x407854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_407858:
    // 0x407858: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x407858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40785c:
    // 0x40785c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40785cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_407860:
    // 0x407860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x407860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_407864:
    // 0x407864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x407864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_407868:
    // 0x407868: 0x3e00008  jr          $ra
label_40786c:
    if (ctx->pc == 0x40786Cu) {
        ctx->pc = 0x40786Cu;
            // 0x40786c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x407870u;
        goto label_407870;
    }
    ctx->pc = 0x407868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40786Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407868u;
            // 0x40786c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x407870u;
label_407870:
    // 0x407870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x407870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_407874:
    // 0x407874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x407874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_407878:
    // 0x407878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x407878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40787c:
    // 0x40787c: 0xc0aeebc  jal         func_2BBAF0
label_407880:
    if (ctx->pc == 0x407880u) {
        ctx->pc = 0x407880u;
            // 0x407880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x407884u;
        goto label_407884;
    }
    ctx->pc = 0x40787Cu;
    SET_GPR_U32(ctx, 31, 0x407884u);
    ctx->pc = 0x407880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40787Cu;
            // 0x407880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407884u; }
        if (ctx->pc != 0x407884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407884u; }
        if (ctx->pc != 0x407884u) { return; }
    }
    ctx->pc = 0x407884u;
label_407884:
    // 0x407884: 0xc0aeeb4  jal         func_2BBAD0
label_407888:
    if (ctx->pc == 0x407888u) {
        ctx->pc = 0x407888u;
            // 0x407888: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x40788Cu;
        goto label_40788c;
    }
    ctx->pc = 0x407884u;
    SET_GPR_U32(ctx, 31, 0x40788Cu);
    ctx->pc = 0x407888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407884u;
            // 0x407888: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40788Cu; }
        if (ctx->pc != 0x40788Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40788Cu; }
        if (ctx->pc != 0x40788Cu) { return; }
    }
    ctx->pc = 0x40788Cu;
label_40788c:
    // 0x40788c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x40788cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_407890:
    // 0x407890: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x407890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_407894:
    // 0x407894: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x407894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_407898:
    // 0x407898: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x407898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_40789c:
    // 0x40789c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40789cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4078a0:
    // 0x4078a0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4078a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4078a4:
    // 0x4078a4: 0xc0aeea4  jal         func_2BBA90
label_4078a8:
    if (ctx->pc == 0x4078A8u) {
        ctx->pc = 0x4078A8u;
            // 0x4078a8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4078ACu;
        goto label_4078ac;
    }
    ctx->pc = 0x4078A4u;
    SET_GPR_U32(ctx, 31, 0x4078ACu);
    ctx->pc = 0x4078A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4078A4u;
            // 0x4078a8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4078ACu; }
        if (ctx->pc != 0x4078ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4078ACu; }
        if (ctx->pc != 0x4078ACu) { return; }
    }
    ctx->pc = 0x4078ACu;
label_4078ac:
    // 0x4078ac: 0xc0aee8c  jal         func_2BBA30
label_4078b0:
    if (ctx->pc == 0x4078B0u) {
        ctx->pc = 0x4078B0u;
            // 0x4078b0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4078B4u;
        goto label_4078b4;
    }
    ctx->pc = 0x4078ACu;
    SET_GPR_U32(ctx, 31, 0x4078B4u);
    ctx->pc = 0x4078B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4078ACu;
            // 0x4078b0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4078B4u; }
        if (ctx->pc != 0x4078B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4078B4u; }
        if (ctx->pc != 0x4078B4u) { return; }
    }
    ctx->pc = 0x4078B4u;
label_4078b4:
    // 0x4078b4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4078b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4078b8:
    // 0x4078b8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4078b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_4078bc:
    // 0x4078bc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4078bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4078c0:
    // 0x4078c0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4078c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_4078c4:
    // 0x4078c4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4078c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_4078c8:
    // 0x4078c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4078c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4078cc:
    // 0x4078cc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4078ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_4078d0:
    // 0x4078d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4078d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4078d4:
    // 0x4078d4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4078d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_4078d8:
    // 0x4078d8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4078d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_4078dc:
    // 0x4078dc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4078dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_4078e0:
    // 0x4078e0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4078e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_4078e4:
    // 0x4078e4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4078e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_4078e8:
    // 0x4078e8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4078e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_4078ec:
    // 0x4078ec: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4078ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_4078f0:
    // 0x4078f0: 0xc0775b8  jal         func_1DD6E0
label_4078f4:
    if (ctx->pc == 0x4078F4u) {
        ctx->pc = 0x4078F4u;
            // 0x4078f4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4078F8u;
        goto label_4078f8;
    }
    ctx->pc = 0x4078F0u;
    SET_GPR_U32(ctx, 31, 0x4078F8u);
    ctx->pc = 0x4078F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4078F0u;
            // 0x4078f4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4078F8u; }
        if (ctx->pc != 0x4078F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4078F8u; }
        if (ctx->pc != 0x4078F8u) { return; }
    }
    ctx->pc = 0x4078F8u;
label_4078f8:
    // 0x4078f8: 0xc077314  jal         func_1DCC50
label_4078fc:
    if (ctx->pc == 0x4078FCu) {
        ctx->pc = 0x4078FCu;
            // 0x4078fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x407900u;
        goto label_407900;
    }
    ctx->pc = 0x4078F8u;
    SET_GPR_U32(ctx, 31, 0x407900u);
    ctx->pc = 0x4078FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4078F8u;
            // 0x4078fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407900u; }
        if (ctx->pc != 0x407900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407900u; }
        if (ctx->pc != 0x407900u) { return; }
    }
    ctx->pc = 0x407900u;
label_407900:
    // 0x407900: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x407900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_407904:
    // 0x407904: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x407904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_407908:
    // 0x407908: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x407908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_40790c:
    // 0x40790c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x40790cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_407910:
    // 0x407910: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x407910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_407914:
    // 0x407914: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x407914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_407918:
    // 0x407918: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x407918u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_40791c:
    // 0x40791c: 0x24a5a940  addiu       $a1, $a1, -0x56C0
    ctx->pc = 0x40791cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945088));
label_407920:
    // 0x407920: 0x2484a980  addiu       $a0, $a0, -0x5680
    ctx->pc = 0x407920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945152));
label_407924:
    // 0x407924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x407924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_407928:
    // 0x407928: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x407928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_40792c:
    // 0x40792c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40792cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407930:
    // 0x407930: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x407930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
label_407934:
    // 0x407934: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x407934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_407938:
    // 0x407938: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x407938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_40793c:
    // 0x40793c: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x40793cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_407940:
    // 0x407940: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x407940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_407944:
    // 0x407944: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x407944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
label_407948:
    // 0x407948: 0xa203016c  sb          $v1, 0x16C($s0)
    ctx->pc = 0x407948u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 364), (uint8_t)GPR_U32(ctx, 3));
label_40794c:
    // 0x40794c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40794cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_407950:
    // 0x407950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x407950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_407954:
    // 0x407954: 0x3e00008  jr          $ra
label_407958:
    if (ctx->pc == 0x407958u) {
        ctx->pc = 0x407958u;
            // 0x407958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40795Cu;
        goto label_40795c;
    }
    ctx->pc = 0x407954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407954u;
            // 0x407958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40795Cu;
label_40795c:
    // 0x40795c: 0x0  nop
    ctx->pc = 0x40795cu;
    // NOP
label_407960:
    // 0x407960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x407960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_407964:
    // 0x407964: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x407964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_407968:
    // 0x407968: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x407968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40796c:
    // 0x40796c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40796cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_407970:
    // 0x407970: 0x8c4272a0  lw          $v0, 0x72A0($v0)
    ctx->pc = 0x407970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29344)));
label_407974:
    // 0x407974: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x407974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_407978:
    // 0x407978: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x407978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_40797c:
    // 0x40797c: 0xc04f278  jal         func_13C9E0
label_407980:
    if (ctx->pc == 0x407980u) {
        ctx->pc = 0x407980u;
            // 0x407980: 0x244400a0  addiu       $a0, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->pc = 0x407984u;
        goto label_407984;
    }
    ctx->pc = 0x40797Cu;
    SET_GPR_U32(ctx, 31, 0x407984u);
    ctx->pc = 0x407980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40797Cu;
            // 0x407980: 0x244400a0  addiu       $a0, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407984u; }
        if (ctx->pc != 0x407984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407984u; }
        if (ctx->pc != 0x407984u) { return; }
    }
    ctx->pc = 0x407984u;
label_407984:
    // 0x407984: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x407984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_407988:
    // 0x407988: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x407988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_40798c:
    // 0x40798c: 0x8c4272a0  lw          $v0, 0x72A0($v0)
    ctx->pc = 0x40798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29344)));
label_407990:
    // 0x407990: 0xc04ce80  jal         func_133A00
label_407994:
    if (ctx->pc == 0x407994u) {
        ctx->pc = 0x407994u;
            // 0x407994: 0x244400a0  addiu       $a0, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->pc = 0x407998u;
        goto label_407998;
    }
    ctx->pc = 0x407990u;
    SET_GPR_U32(ctx, 31, 0x407998u);
    ctx->pc = 0x407994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407990u;
            // 0x407994: 0x244400a0  addiu       $a0, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407998u; }
        if (ctx->pc != 0x407998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407998u; }
        if (ctx->pc != 0x407998u) { return; }
    }
    ctx->pc = 0x407998u;
label_407998:
    // 0x407998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x407998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40799c:
    // 0x40799c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40799cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4079a0:
    // 0x4079a0: 0x3e00008  jr          $ra
label_4079a4:
    if (ctx->pc == 0x4079A4u) {
        ctx->pc = 0x4079A4u;
            // 0x4079a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4079A8u;
        goto label_4079a8;
    }
    ctx->pc = 0x4079A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4079A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4079A0u;
            // 0x4079a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4079A8u;
label_4079a8:
    // 0x4079a8: 0x0  nop
    ctx->pc = 0x4079a8u;
    // NOP
label_4079ac:
    // 0x4079ac: 0x0  nop
    ctx->pc = 0x4079acu;
    // NOP
}
