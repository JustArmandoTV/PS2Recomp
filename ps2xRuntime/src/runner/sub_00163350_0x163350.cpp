#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00163350
// Address: 0x163350 - 0x1638c0
void sub_00163350_0x163350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163350_0x163350");
#endif

    switch (ctx->pc) {
        case 0x163350u: goto label_163350;
        case 0x163354u: goto label_163354;
        case 0x163358u: goto label_163358;
        case 0x16335cu: goto label_16335c;
        case 0x163360u: goto label_163360;
        case 0x163364u: goto label_163364;
        case 0x163368u: goto label_163368;
        case 0x16336cu: goto label_16336c;
        case 0x163370u: goto label_163370;
        case 0x163374u: goto label_163374;
        case 0x163378u: goto label_163378;
        case 0x16337cu: goto label_16337c;
        case 0x163380u: goto label_163380;
        case 0x163384u: goto label_163384;
        case 0x163388u: goto label_163388;
        case 0x16338cu: goto label_16338c;
        case 0x163390u: goto label_163390;
        case 0x163394u: goto label_163394;
        case 0x163398u: goto label_163398;
        case 0x16339cu: goto label_16339c;
        case 0x1633a0u: goto label_1633a0;
        case 0x1633a4u: goto label_1633a4;
        case 0x1633a8u: goto label_1633a8;
        case 0x1633acu: goto label_1633ac;
        case 0x1633b0u: goto label_1633b0;
        case 0x1633b4u: goto label_1633b4;
        case 0x1633b8u: goto label_1633b8;
        case 0x1633bcu: goto label_1633bc;
        case 0x1633c0u: goto label_1633c0;
        case 0x1633c4u: goto label_1633c4;
        case 0x1633c8u: goto label_1633c8;
        case 0x1633ccu: goto label_1633cc;
        case 0x1633d0u: goto label_1633d0;
        case 0x1633d4u: goto label_1633d4;
        case 0x1633d8u: goto label_1633d8;
        case 0x1633dcu: goto label_1633dc;
        case 0x1633e0u: goto label_1633e0;
        case 0x1633e4u: goto label_1633e4;
        case 0x1633e8u: goto label_1633e8;
        case 0x1633ecu: goto label_1633ec;
        case 0x1633f0u: goto label_1633f0;
        case 0x1633f4u: goto label_1633f4;
        case 0x1633f8u: goto label_1633f8;
        case 0x1633fcu: goto label_1633fc;
        case 0x163400u: goto label_163400;
        case 0x163404u: goto label_163404;
        case 0x163408u: goto label_163408;
        case 0x16340cu: goto label_16340c;
        case 0x163410u: goto label_163410;
        case 0x163414u: goto label_163414;
        case 0x163418u: goto label_163418;
        case 0x16341cu: goto label_16341c;
        case 0x163420u: goto label_163420;
        case 0x163424u: goto label_163424;
        case 0x163428u: goto label_163428;
        case 0x16342cu: goto label_16342c;
        case 0x163430u: goto label_163430;
        case 0x163434u: goto label_163434;
        case 0x163438u: goto label_163438;
        case 0x16343cu: goto label_16343c;
        case 0x163440u: goto label_163440;
        case 0x163444u: goto label_163444;
        case 0x163448u: goto label_163448;
        case 0x16344cu: goto label_16344c;
        case 0x163450u: goto label_163450;
        case 0x163454u: goto label_163454;
        case 0x163458u: goto label_163458;
        case 0x16345cu: goto label_16345c;
        case 0x163460u: goto label_163460;
        case 0x163464u: goto label_163464;
        case 0x163468u: goto label_163468;
        case 0x16346cu: goto label_16346c;
        case 0x163470u: goto label_163470;
        case 0x163474u: goto label_163474;
        case 0x163478u: goto label_163478;
        case 0x16347cu: goto label_16347c;
        case 0x163480u: goto label_163480;
        case 0x163484u: goto label_163484;
        case 0x163488u: goto label_163488;
        case 0x16348cu: goto label_16348c;
        case 0x163490u: goto label_163490;
        case 0x163494u: goto label_163494;
        case 0x163498u: goto label_163498;
        case 0x16349cu: goto label_16349c;
        case 0x1634a0u: goto label_1634a0;
        case 0x1634a4u: goto label_1634a4;
        case 0x1634a8u: goto label_1634a8;
        case 0x1634acu: goto label_1634ac;
        case 0x1634b0u: goto label_1634b0;
        case 0x1634b4u: goto label_1634b4;
        case 0x1634b8u: goto label_1634b8;
        case 0x1634bcu: goto label_1634bc;
        case 0x1634c0u: goto label_1634c0;
        case 0x1634c4u: goto label_1634c4;
        case 0x1634c8u: goto label_1634c8;
        case 0x1634ccu: goto label_1634cc;
        case 0x1634d0u: goto label_1634d0;
        case 0x1634d4u: goto label_1634d4;
        case 0x1634d8u: goto label_1634d8;
        case 0x1634dcu: goto label_1634dc;
        case 0x1634e0u: goto label_1634e0;
        case 0x1634e4u: goto label_1634e4;
        case 0x1634e8u: goto label_1634e8;
        case 0x1634ecu: goto label_1634ec;
        case 0x1634f0u: goto label_1634f0;
        case 0x1634f4u: goto label_1634f4;
        case 0x1634f8u: goto label_1634f8;
        case 0x1634fcu: goto label_1634fc;
        case 0x163500u: goto label_163500;
        case 0x163504u: goto label_163504;
        case 0x163508u: goto label_163508;
        case 0x16350cu: goto label_16350c;
        case 0x163510u: goto label_163510;
        case 0x163514u: goto label_163514;
        case 0x163518u: goto label_163518;
        case 0x16351cu: goto label_16351c;
        case 0x163520u: goto label_163520;
        case 0x163524u: goto label_163524;
        case 0x163528u: goto label_163528;
        case 0x16352cu: goto label_16352c;
        case 0x163530u: goto label_163530;
        case 0x163534u: goto label_163534;
        case 0x163538u: goto label_163538;
        case 0x16353cu: goto label_16353c;
        case 0x163540u: goto label_163540;
        case 0x163544u: goto label_163544;
        case 0x163548u: goto label_163548;
        case 0x16354cu: goto label_16354c;
        case 0x163550u: goto label_163550;
        case 0x163554u: goto label_163554;
        case 0x163558u: goto label_163558;
        case 0x16355cu: goto label_16355c;
        case 0x163560u: goto label_163560;
        case 0x163564u: goto label_163564;
        case 0x163568u: goto label_163568;
        case 0x16356cu: goto label_16356c;
        case 0x163570u: goto label_163570;
        case 0x163574u: goto label_163574;
        case 0x163578u: goto label_163578;
        case 0x16357cu: goto label_16357c;
        case 0x163580u: goto label_163580;
        case 0x163584u: goto label_163584;
        case 0x163588u: goto label_163588;
        case 0x16358cu: goto label_16358c;
        case 0x163590u: goto label_163590;
        case 0x163594u: goto label_163594;
        case 0x163598u: goto label_163598;
        case 0x16359cu: goto label_16359c;
        case 0x1635a0u: goto label_1635a0;
        case 0x1635a4u: goto label_1635a4;
        case 0x1635a8u: goto label_1635a8;
        case 0x1635acu: goto label_1635ac;
        case 0x1635b0u: goto label_1635b0;
        case 0x1635b4u: goto label_1635b4;
        case 0x1635b8u: goto label_1635b8;
        case 0x1635bcu: goto label_1635bc;
        case 0x1635c0u: goto label_1635c0;
        case 0x1635c4u: goto label_1635c4;
        case 0x1635c8u: goto label_1635c8;
        case 0x1635ccu: goto label_1635cc;
        case 0x1635d0u: goto label_1635d0;
        case 0x1635d4u: goto label_1635d4;
        case 0x1635d8u: goto label_1635d8;
        case 0x1635dcu: goto label_1635dc;
        case 0x1635e0u: goto label_1635e0;
        case 0x1635e4u: goto label_1635e4;
        case 0x1635e8u: goto label_1635e8;
        case 0x1635ecu: goto label_1635ec;
        case 0x1635f0u: goto label_1635f0;
        case 0x1635f4u: goto label_1635f4;
        case 0x1635f8u: goto label_1635f8;
        case 0x1635fcu: goto label_1635fc;
        case 0x163600u: goto label_163600;
        case 0x163604u: goto label_163604;
        case 0x163608u: goto label_163608;
        case 0x16360cu: goto label_16360c;
        case 0x163610u: goto label_163610;
        case 0x163614u: goto label_163614;
        case 0x163618u: goto label_163618;
        case 0x16361cu: goto label_16361c;
        case 0x163620u: goto label_163620;
        case 0x163624u: goto label_163624;
        case 0x163628u: goto label_163628;
        case 0x16362cu: goto label_16362c;
        case 0x163630u: goto label_163630;
        case 0x163634u: goto label_163634;
        case 0x163638u: goto label_163638;
        case 0x16363cu: goto label_16363c;
        case 0x163640u: goto label_163640;
        case 0x163644u: goto label_163644;
        case 0x163648u: goto label_163648;
        case 0x16364cu: goto label_16364c;
        case 0x163650u: goto label_163650;
        case 0x163654u: goto label_163654;
        case 0x163658u: goto label_163658;
        case 0x16365cu: goto label_16365c;
        case 0x163660u: goto label_163660;
        case 0x163664u: goto label_163664;
        case 0x163668u: goto label_163668;
        case 0x16366cu: goto label_16366c;
        case 0x163670u: goto label_163670;
        case 0x163674u: goto label_163674;
        case 0x163678u: goto label_163678;
        case 0x16367cu: goto label_16367c;
        case 0x163680u: goto label_163680;
        case 0x163684u: goto label_163684;
        case 0x163688u: goto label_163688;
        case 0x16368cu: goto label_16368c;
        case 0x163690u: goto label_163690;
        case 0x163694u: goto label_163694;
        case 0x163698u: goto label_163698;
        case 0x16369cu: goto label_16369c;
        case 0x1636a0u: goto label_1636a0;
        case 0x1636a4u: goto label_1636a4;
        case 0x1636a8u: goto label_1636a8;
        case 0x1636acu: goto label_1636ac;
        case 0x1636b0u: goto label_1636b0;
        case 0x1636b4u: goto label_1636b4;
        case 0x1636b8u: goto label_1636b8;
        case 0x1636bcu: goto label_1636bc;
        case 0x1636c0u: goto label_1636c0;
        case 0x1636c4u: goto label_1636c4;
        case 0x1636c8u: goto label_1636c8;
        case 0x1636ccu: goto label_1636cc;
        case 0x1636d0u: goto label_1636d0;
        case 0x1636d4u: goto label_1636d4;
        case 0x1636d8u: goto label_1636d8;
        case 0x1636dcu: goto label_1636dc;
        case 0x1636e0u: goto label_1636e0;
        case 0x1636e4u: goto label_1636e4;
        case 0x1636e8u: goto label_1636e8;
        case 0x1636ecu: goto label_1636ec;
        case 0x1636f0u: goto label_1636f0;
        case 0x1636f4u: goto label_1636f4;
        case 0x1636f8u: goto label_1636f8;
        case 0x1636fcu: goto label_1636fc;
        case 0x163700u: goto label_163700;
        case 0x163704u: goto label_163704;
        case 0x163708u: goto label_163708;
        case 0x16370cu: goto label_16370c;
        case 0x163710u: goto label_163710;
        case 0x163714u: goto label_163714;
        case 0x163718u: goto label_163718;
        case 0x16371cu: goto label_16371c;
        case 0x163720u: goto label_163720;
        case 0x163724u: goto label_163724;
        case 0x163728u: goto label_163728;
        case 0x16372cu: goto label_16372c;
        case 0x163730u: goto label_163730;
        case 0x163734u: goto label_163734;
        case 0x163738u: goto label_163738;
        case 0x16373cu: goto label_16373c;
        case 0x163740u: goto label_163740;
        case 0x163744u: goto label_163744;
        case 0x163748u: goto label_163748;
        case 0x16374cu: goto label_16374c;
        case 0x163750u: goto label_163750;
        case 0x163754u: goto label_163754;
        case 0x163758u: goto label_163758;
        case 0x16375cu: goto label_16375c;
        case 0x163760u: goto label_163760;
        case 0x163764u: goto label_163764;
        case 0x163768u: goto label_163768;
        case 0x16376cu: goto label_16376c;
        case 0x163770u: goto label_163770;
        case 0x163774u: goto label_163774;
        case 0x163778u: goto label_163778;
        case 0x16377cu: goto label_16377c;
        case 0x163780u: goto label_163780;
        case 0x163784u: goto label_163784;
        case 0x163788u: goto label_163788;
        case 0x16378cu: goto label_16378c;
        case 0x163790u: goto label_163790;
        case 0x163794u: goto label_163794;
        case 0x163798u: goto label_163798;
        case 0x16379cu: goto label_16379c;
        case 0x1637a0u: goto label_1637a0;
        case 0x1637a4u: goto label_1637a4;
        case 0x1637a8u: goto label_1637a8;
        case 0x1637acu: goto label_1637ac;
        case 0x1637b0u: goto label_1637b0;
        case 0x1637b4u: goto label_1637b4;
        case 0x1637b8u: goto label_1637b8;
        case 0x1637bcu: goto label_1637bc;
        case 0x1637c0u: goto label_1637c0;
        case 0x1637c4u: goto label_1637c4;
        case 0x1637c8u: goto label_1637c8;
        case 0x1637ccu: goto label_1637cc;
        case 0x1637d0u: goto label_1637d0;
        case 0x1637d4u: goto label_1637d4;
        case 0x1637d8u: goto label_1637d8;
        case 0x1637dcu: goto label_1637dc;
        case 0x1637e0u: goto label_1637e0;
        case 0x1637e4u: goto label_1637e4;
        case 0x1637e8u: goto label_1637e8;
        case 0x1637ecu: goto label_1637ec;
        case 0x1637f0u: goto label_1637f0;
        case 0x1637f4u: goto label_1637f4;
        case 0x1637f8u: goto label_1637f8;
        case 0x1637fcu: goto label_1637fc;
        case 0x163800u: goto label_163800;
        case 0x163804u: goto label_163804;
        case 0x163808u: goto label_163808;
        case 0x16380cu: goto label_16380c;
        case 0x163810u: goto label_163810;
        case 0x163814u: goto label_163814;
        case 0x163818u: goto label_163818;
        case 0x16381cu: goto label_16381c;
        case 0x163820u: goto label_163820;
        case 0x163824u: goto label_163824;
        case 0x163828u: goto label_163828;
        case 0x16382cu: goto label_16382c;
        case 0x163830u: goto label_163830;
        case 0x163834u: goto label_163834;
        case 0x163838u: goto label_163838;
        case 0x16383cu: goto label_16383c;
        case 0x163840u: goto label_163840;
        case 0x163844u: goto label_163844;
        case 0x163848u: goto label_163848;
        case 0x16384cu: goto label_16384c;
        case 0x163850u: goto label_163850;
        case 0x163854u: goto label_163854;
        case 0x163858u: goto label_163858;
        case 0x16385cu: goto label_16385c;
        case 0x163860u: goto label_163860;
        case 0x163864u: goto label_163864;
        case 0x163868u: goto label_163868;
        case 0x16386cu: goto label_16386c;
        case 0x163870u: goto label_163870;
        case 0x163874u: goto label_163874;
        case 0x163878u: goto label_163878;
        case 0x16387cu: goto label_16387c;
        case 0x163880u: goto label_163880;
        case 0x163884u: goto label_163884;
        case 0x163888u: goto label_163888;
        case 0x16388cu: goto label_16388c;
        case 0x163890u: goto label_163890;
        case 0x163894u: goto label_163894;
        case 0x163898u: goto label_163898;
        case 0x16389cu: goto label_16389c;
        case 0x1638a0u: goto label_1638a0;
        case 0x1638a4u: goto label_1638a4;
        case 0x1638a8u: goto label_1638a8;
        case 0x1638acu: goto label_1638ac;
        case 0x1638b0u: goto label_1638b0;
        case 0x1638b4u: goto label_1638b4;
        case 0x1638b8u: goto label_1638b8;
        case 0x1638bcu: goto label_1638bc;
        default: break;
    }

    ctx->pc = 0x163350u;

label_163350:
    // 0x163350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x163350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_163354:
    // 0x163354: 0x28a21000  slti        $v0, $a1, 0x1000
    ctx->pc = 0x163354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4096) ? 1 : 0);
label_163358:
    // 0x163358: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x163358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_16335c:
    // 0x16335c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16335cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163360:
    // 0x163360: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x163360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_163364:
    // 0x163364: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x163364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_163368:
    // 0x163368: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x163368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16336c:
    // 0x16336c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x16336cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_163370:
    // 0x163370: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x163370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_163374:
    // 0x163374: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x163374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_163378:
    // 0x163378: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x163378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_16337c:
    // 0x16337c: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x16337cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_163380:
    // 0x163380: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x163380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_163384:
    // 0x163384: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x163384u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_163388:
    // 0x163388: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x163388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_16338c:
    // 0x16338c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x16338cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_163390:
    // 0x163390: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x163390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_163394:
    // 0x163394: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x163394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_163398:
    // 0x163398: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x163398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_16339c:
    // 0x16339c: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x16339cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1633a0:
    // 0x1633a0: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x1633a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1633a4:
    // 0x1633a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1633a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1633a8:
    // 0x1633a8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1633a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1633ac:
    // 0x1633ac: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1633acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1633b0:
    // 0x1633b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1633b4:
    if (ctx->pc == 0x1633B4u) {
        ctx->pc = 0x1633B4u;
            // 0x1633b4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x1633B8u;
        goto label_1633b8;
    }
    ctx->pc = 0x1633B0u;
    {
        const bool branch_taken_0x1633b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1633B0u;
            // 0x1633b4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633b0) {
            ctx->pc = 0x1633C8u;
            goto label_1633c8;
        }
    }
    ctx->pc = 0x1633B8u;
label_1633b8:
    // 0x1633b8: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x1633b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_1633bc:
    // 0x1633bc: 0x10000022  b           . + 4 + (0x22 << 2)
label_1633c0:
    if (ctx->pc == 0x1633C0u) {
        ctx->pc = 0x1633C0u;
            // 0x1633c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1633C4u;
        goto label_1633c4;
    }
    ctx->pc = 0x1633BCu;
    {
        const bool branch_taken_0x1633bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1633BCu;
            // 0x1633c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633bc) {
            ctx->pc = 0x163448u;
            goto label_163448;
        }
    }
    ctx->pc = 0x1633C4u;
label_1633c4:
    // 0x1633c4: 0x0  nop
    ctx->pc = 0x1633c4u;
    // NOP
label_1633c8:
    // 0x1633c8: 0xc058bd6  jal         func_162F58
label_1633cc:
    if (ctx->pc == 0x1633CCu) {
        ctx->pc = 0x1633D0u;
        goto label_1633d0;
    }
    ctx->pc = 0x1633C8u;
    SET_GPR_U32(ctx, 31, 0x1633D0u);
    ctx->pc = 0x162F58u;
    if (runtime->hasFunction(0x162F58u)) {
        auto targetFn = runtime->lookupFunction(0x162F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1633D0u; }
        if (ctx->pc != 0x1633D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162F58_0x162f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1633D0u; }
        if (ctx->pc != 0x1633D0u) { return; }
    }
    ctx->pc = 0x1633D0u;
label_1633d0:
    // 0x1633d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1633d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1633d4:
    // 0x1633d4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_1633d8:
    if (ctx->pc == 0x1633D8u) {
        ctx->pc = 0x1633D8u;
            // 0x1633d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1633DCu;
        goto label_1633dc;
    }
    ctx->pc = 0x1633D4u;
    {
        const bool branch_taken_0x1633d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1633D4u;
            // 0x1633d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633d4) {
            ctx->pc = 0x163448u;
            goto label_163448;
        }
    }
    ctx->pc = 0x1633DCu;
label_1633dc:
    // 0x1633dc: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1633dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1633e0:
    // 0x1633e0: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x1633e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1633e4:
    // 0x1633e4: 0x18800018  blez        $a0, . + 4 + (0x18 << 2)
label_1633e8:
    if (ctx->pc == 0x1633E8u) {
        ctx->pc = 0x1633E8u;
            // 0x1633e8: 0xa6230000  sh          $v1, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1633ECu;
        goto label_1633ec;
    }
    ctx->pc = 0x1633E4u;
    {
        const bool branch_taken_0x1633e4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1633E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1633E4u;
            // 0x1633e8: 0xa6230000  sh          $v1, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633e4) {
            ctx->pc = 0x163448u;
            goto label_163448;
        }
    }
    ctx->pc = 0x1633ECu;
label_1633ec:
    // 0x1633ec: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x1633ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
label_1633f0:
    // 0x1633f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1633f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1633f4:
    // 0x1633f4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1633f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1633f8:
    // 0x1633f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1633f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1633fc:
    // 0x1633fc: 0x93a40008  lbu         $a0, 0x8($sp)
    ctx->pc = 0x1633fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
label_163400:
    // 0x163400: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163404:
    // 0x163404: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x163404u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
label_163408:
    // 0x163408: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x163408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_16340c:
    // 0x16340c: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x16340cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_163410:
    // 0x163410: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x163410u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_163414:
    // 0x163414: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x163414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_163418:
    // 0x163418: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x163418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16341c:
    // 0x16341c: 0xa2a70000  sb          $a3, 0x0($s5)
    ctx->pc = 0x16341cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 7));
label_163420:
    // 0x163420: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x163420u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_163424:
    // 0x163424: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x163424u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_163428:
    // 0x163428: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x163428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_16342c:
    // 0x16342c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x16342cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_163430:
    // 0x163430: 0x24650007  addiu       $a1, $v1, 0x7
    ctx->pc = 0x163430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_163434:
    // 0x163434: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x163434u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_163438:
    // 0x163438: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x163438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_16343c:
    // 0x16343c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x16343cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_163440:
    // 0x163440: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x163440u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
label_163444:
    // 0x163444: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x163444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_163448:
    // 0x163448: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x163448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16344c:
    // 0x16344c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16344cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_163450:
    // 0x163450: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x163450u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_163454:
    // 0x163454: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x163454u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_163458:
    // 0x163458: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x163458u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16345c:
    // 0x16345c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x16345cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_163460:
    // 0x163460: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x163460u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_163464:
    // 0x163464: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x163464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_163468:
    // 0x163468: 0x3e00008  jr          $ra
label_16346c:
    if (ctx->pc == 0x16346Cu) {
        ctx->pc = 0x16346Cu;
            // 0x16346c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x163470u;
        goto label_163470;
    }
    ctx->pc = 0x163468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16346Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163468u;
            // 0x16346c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163470u;
label_163470:
    // 0x163470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x163470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_163474:
    // 0x163474: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x163474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_163478:
    // 0x163478: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x163478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16347c:
    // 0x16347c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x16347cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_163480:
    // 0x163480: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x163480u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163484:
    // 0x163484: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x163484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_163488:
    // 0x163488: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x163488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_16348c:
    // 0x16348c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x16348cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_163490:
    // 0x163490: 0x2612000f  addiu       $s2, $s0, 0xF
    ctx->pc = 0x163490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_163494:
    // 0x163494: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x163494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_163498:
    // 0x163498: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x163498u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_16349c:
    // 0x16349c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x16349cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1634a0:
    // 0x1634a0: 0x2614000d  addiu       $s4, $s0, 0xD
    ctx->pc = 0x1634a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_1634a4:
    // 0x1634a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1634a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1634a8:
    // 0x1634a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1634a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1634ac:
    // 0x1634ac: 0xa6150002  sh          $s5, 0x2($s0)
    ctx->pc = 0x1634acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 21));
label_1634b0:
    // 0x1634b0: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x1634b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1634b4:
    // 0x1634b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1634b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1634b8:
    // 0x1634b8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1634b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1634bc:
    // 0x1634bc: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x1634bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1634c0:
    // 0x1634c0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1634c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1634c4:
    // 0x1634c4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1634c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1634c8:
    // 0x1634c8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1634c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1634cc:
    // 0x1634cc: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x1634ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1634d0:
    // 0x1634d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1634d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1634d4:
    // 0x1634d4: 0xc058cd4  jal         func_163350
label_1634d8:
    if (ctx->pc == 0x1634D8u) {
        ctx->pc = 0x1634D8u;
            // 0x1634d8: 0xafb30008  sw          $s3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
        ctx->pc = 0x1634DCu;
        goto label_1634dc;
    }
    ctx->pc = 0x1634D4u;
    SET_GPR_U32(ctx, 31, 0x1634DCu);
    ctx->pc = 0x1634D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1634D4u;
            // 0x1634d8: 0xafb30008  sw          $s3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x163350u;
    goto label_163350;
    ctx->pc = 0x1634DCu;
label_1634dc:
    // 0x1634dc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1634e0:
    if (ctx->pc == 0x1634E0u) {
        ctx->pc = 0x1634E0u;
            // 0x1634e0: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1634E4u;
        goto label_1634e4;
    }
    ctx->pc = 0x1634DCu;
    {
        const bool branch_taken_0x1634dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1634E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1634DCu;
            // 0x1634e0: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634dc) {
            ctx->pc = 0x1634F0u;
            goto label_1634f0;
        }
    }
    ctx->pc = 0x1634E4u;
label_1634e4:
    // 0x1634e4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1634e8:
    if (ctx->pc == 0x1634E8u) {
        ctx->pc = 0x1634E8u;
            // 0x1634e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1634ECu;
        goto label_1634ec;
    }
    ctx->pc = 0x1634E4u;
    {
        const bool branch_taken_0x1634e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1634E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1634E4u;
            // 0x1634e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634e4) {
            ctx->pc = 0x163564u;
            goto label_163564;
        }
    }
    ctx->pc = 0x1634ECu;
label_1634ec:
    // 0x1634ec: 0x0  nop
    ctx->pc = 0x1634ecu;
    // NOP
label_1634f0:
    // 0x1634f0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1634f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1634f4:
    // 0x1634f4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1634f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1634f8:
    // 0x1634f8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1634f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1634fc:
    // 0x1634fc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1634fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_163500:
    // 0x163500: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x163500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_163504:
    // 0x163504: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x163504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_163508:
    // 0x163508: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x163508u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_16350c:
    // 0x16350c: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x16350cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_163510:
    // 0x163510: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x163510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_163514:
    // 0x163514: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x163514u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_163518:
    // 0x163518: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x163518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_16351c:
    // 0x16351c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16351cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_163520:
    // 0x163520: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x163520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163524:
    // 0x163524: 0x8e060044  lw          $a2, 0x44($s0)
    ctx->pc = 0x163524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_163528:
    // 0x163528: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x163528u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_16352c:
    // 0x16352c: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x16352cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_163530:
    // 0x163530: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x163530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_163534:
    // 0x163534: 0xa6020098  sh          $v0, 0x98($s0)
    ctx->pc = 0x163534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 2));
label_163538:
    // 0x163538: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x163538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16353c:
    // 0x16353c: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x16353cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_163540:
    // 0x163540: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x163540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_163544:
    // 0x163544: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x163544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
label_163548:
    // 0x163548: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x163548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_16354c:
    // 0x16354c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x16354cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_163550:
    // 0x163550: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x163550u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_163554:
    // 0x163554: 0x54470002  bnel        $v0, $a3, . + 4 + (0x2 << 2)
label_163558:
    if (ctx->pc == 0x163558u) {
        ctx->pc = 0x163558u;
            // 0x163558: 0xa600009c  sh          $zero, 0x9C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x16355Cu;
        goto label_16355c;
    }
    ctx->pc = 0x163554u;
    {
        const bool branch_taken_0x163554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x163554) {
            ctx->pc = 0x163558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163554u;
            // 0x163558: 0xa600009c  sh          $zero, 0x9C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163560u;
            goto label_163560;
        }
    }
    ctx->pc = 0x16355Cu;
label_16355c:
    // 0x16355c: 0xa615009c  sh          $s5, 0x9C($s0)
    ctx->pc = 0x16355cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 21));
label_163560:
    // 0x163560: 0x87a20010  lh          $v0, 0x10($sp)
    ctx->pc = 0x163560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_163564:
    // 0x163564: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x163564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_163568:
    // 0x163568: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x163568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16356c:
    // 0x16356c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x16356cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_163570:
    // 0x163570: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x163570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_163574:
    // 0x163574: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x163574u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_163578:
    // 0x163578: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x163578u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_16357c:
    // 0x16357c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16357cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_163580:
    // 0x163580: 0x3e00008  jr          $ra
label_163584:
    if (ctx->pc == 0x163584u) {
        ctx->pc = 0x163584u;
            // 0x163584: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x163588u;
        goto label_163588;
    }
    ctx->pc = 0x163580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163580u;
            // 0x163584: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163588u;
label_163588:
    // 0x163588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16358c:
    // 0x16358c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163590:
    // 0x163590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x163590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_163594:
    // 0x163594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x163594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163598:
    // 0x163598: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x163598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16359c:
    // 0x16359c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x16359cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1635a0:
    // 0x1635a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1635a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1635a4:
    // 0x1635a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1635a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1635a8:
    // 0x1635a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1635a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1635ac:
    // 0x1635ac: 0x14620053  bne         $v1, $v0, . + 4 + (0x53 << 2)
label_1635b0:
    if (ctx->pc == 0x1635B0u) {
        ctx->pc = 0x1635B0u;
            // 0x1635b0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1635B4u;
        goto label_1635b4;
    }
    ctx->pc = 0x1635ACu;
    {
        const bool branch_taken_0x1635ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1635B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1635ACu;
            // 0x1635b0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635ac) {
            ctx->pc = 0x1636FCu;
            goto label_1636fc;
        }
    }
    ctx->pc = 0x1635B4u;
label_1635b4:
    // 0x1635b4: 0xc05df6e  jal         func_177DB8
label_1635b8:
    if (ctx->pc == 0x1635B8u) {
        ctx->pc = 0x1635B8u;
            // 0x1635b8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1635BCu;
        goto label_1635bc;
    }
    ctx->pc = 0x1635B4u;
    SET_GPR_U32(ctx, 31, 0x1635BCu);
    ctx->pc = 0x1635B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1635B4u;
            // 0x1635b8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177DB8u;
    if (runtime->hasFunction(0x177DB8u)) {
        auto targetFn = runtime->lookupFunction(0x177DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1635BCu; }
        if (ctx->pc != 0x1635BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DB8_0x177db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1635BCu; }
        if (ctx->pc != 0x1635BCu) { return; }
    }
    ctx->pc = 0x1635BCu;
label_1635bc:
    // 0x1635bc: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_1635c0:
    if (ctx->pc == 0x1635C0u) {
        ctx->pc = 0x1635C0u;
            // 0x1635c0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1635C4u;
        goto label_1635c4;
    }
    ctx->pc = 0x1635BCu;
    {
        const bool branch_taken_0x1635bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1635bc) {
            ctx->pc = 0x1635C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1635BCu;
            // 0x1635c0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1636FCu;
            goto label_1636fc;
        }
    }
    ctx->pc = 0x1635C4u;
label_1635c4:
    // 0x1635c4: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1635c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1635c8:
    // 0x1635c8: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1635c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1635cc:
    // 0x1635cc: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1635ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1635d0:
    // 0x1635d0: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1635d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1635d4:
    // 0x1635d4: 0x40f809  jalr        $v0
label_1635d8:
    if (ctx->pc == 0x1635D8u) {
        ctx->pc = 0x1635D8u;
            // 0x1635d8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1635DCu;
        goto label_1635dc;
    }
    ctx->pc = 0x1635D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1635DCu);
        ctx->pc = 0x1635D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1635D4u;
            // 0x1635d8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1635DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1635DCu; }
            if (ctx->pc != 0x1635DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1635DCu;
label_1635dc:
    // 0x1635dc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1635dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1635e0:
    // 0x1635e0: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x1635e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1635e4:
    // 0x1635e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1635e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1635e8:
    // 0x1635e8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1635e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1635ec:
    // 0x1635ec: 0x875023  subu        $t2, $a0, $a3
    ctx->pc = 0x1635ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1635f0:
    // 0x1635f0: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x1635f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1635f4:
    // 0x1635f4: 0x6a102a  slt         $v0, $v1, $t2
    ctx->pc = 0x1635f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_1635f8:
    // 0x1635f8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1635f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1635fc:
    // 0x1635fc: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x1635fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
label_163600:
    // 0x163600: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x163600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_163604:
    // 0x163604: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x163604u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_163608:
    // 0x163608: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x163608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_16360c:
    // 0x16360c: 0xa2500b  movn        $t2, $a1, $v0
    ctx->pc = 0x16360cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
label_163610:
    // 0x163610: 0x1036021  addu        $t4, $t0, $v1
    ctx->pc = 0x163610u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_163614:
    // 0x163614: 0x14860020  bne         $a0, $a2, . + 4 + (0x20 << 2)
label_163618:
    if (ctx->pc == 0x163618u) {
        ctx->pc = 0x163618u;
            // 0x163618: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x16361Cu;
        goto label_16361c;
    }
    ctx->pc = 0x163614u;
    {
        const bool branch_taken_0x163614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x163618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163614u;
            // 0x163618: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163614) {
            ctx->pc = 0x163698u;
            goto label_163698;
        }
    }
    ctx->pc = 0x16361Cu;
label_16361c:
    // 0x16361c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x16361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_163620:
    // 0x163620: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x163620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163624:
    // 0x163624: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x163624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_163628:
    // 0x163628: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x163628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_16362c:
    // 0x16362c: 0x1940002b  blez        $t2, . + 4 + (0x2B << 2)
label_163630:
    if (ctx->pc == 0x163630u) {
        ctx->pc = 0x163630u;
            // 0x163630: 0x1026821  addu        $t5, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->pc = 0x163634u;
        goto label_163634;
    }
    ctx->pc = 0x16362Cu;
    {
        const bool branch_taken_0x16362c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x163630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16362Cu;
            // 0x163630: 0x1026821  addu        $t5, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16362c) {
            ctx->pc = 0x1636DCu;
            goto label_1636dc;
        }
    }
    ctx->pc = 0x163634u;
label_163634:
    // 0x163634: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x163634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163638:
    // 0x163638: 0x240bff00  addiu       $t3, $zero, -0x100
    ctx->pc = 0x163638u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_16363c:
    // 0x16363c: 0x0  nop
    ctx->pc = 0x16363cu;
    // NOP
label_163640:
    // 0x163640: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x163640u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_163644:
    // 0x163644: 0x92840  sll         $a1, $t1, 1
    ctx->pc = 0x163644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_163648:
    // 0x163648: 0xac3021  addu        $a2, $a1, $t4
    ctx->pc = 0x163648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_16364c:
    // 0x16364c: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x16364cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
label_163650:
    // 0x163650: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x163650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_163654:
    // 0x163654: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x163654u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_163658:
    // 0x163658: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x163658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_16365c:
    // 0x16365c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x16365cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_163660:
    // 0x163660: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x163660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_163664:
    // 0x163664: 0x12a382a  slt         $a3, $t1, $t2
    ctx->pc = 0x163664u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_163668:
    // 0x163668: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x163668u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_16366c:
    // 0x16366c: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x16366cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_163670:
    // 0x163670: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x163670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_163674:
    // 0x163674: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x163674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_163678:
    // 0x163678: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x163678u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_16367c:
    // 0x16367c: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x16367cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_163680:
    // 0x163680: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x163680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_163684:
    // 0x163684: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
label_163688:
    if (ctx->pc == 0x163688u) {
        ctx->pc = 0x163688u;
            // 0x163688: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x16368Cu;
        goto label_16368c;
    }
    ctx->pc = 0x163684u;
    {
        const bool branch_taken_0x163684 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x163688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163684u;
            // 0x163688: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163684) {
            ctx->pc = 0x163640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_163640;
        }
    }
    ctx->pc = 0x16368Cu;
label_16368c:
    // 0x16368c: 0x10000013  b           . + 4 + (0x13 << 2)
label_163690:
    if (ctx->pc == 0x163690u) {
        ctx->pc = 0x163690u;
            // 0x163690: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x163694u;
        goto label_163694;
    }
    ctx->pc = 0x16368Cu;
    {
        const bool branch_taken_0x16368c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16368Cu;
            // 0x163690: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16368c) {
            ctx->pc = 0x1636DCu;
            goto label_1636dc;
        }
    }
    ctx->pc = 0x163694u;
label_163694:
    // 0x163694: 0x0  nop
    ctx->pc = 0x163694u;
    // NOP
label_163698:
    // 0x163698: 0x19400010  blez        $t2, . + 4 + (0x10 << 2)
label_16369c:
    if (ctx->pc == 0x16369Cu) {
        ctx->pc = 0x16369Cu;
            // 0x16369c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1636A0u;
        goto label_1636a0;
    }
    ctx->pc = 0x163698u;
    {
        const bool branch_taken_0x163698 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x16369Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163698u;
            // 0x16369c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163698) {
            ctx->pc = 0x1636DCu;
            goto label_1636dc;
        }
    }
    ctx->pc = 0x1636A0u;
label_1636a0:
    // 0x1636a0: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x1636a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_1636a4:
    // 0x1636a4: 0x0  nop
    ctx->pc = 0x1636a4u;
    // NOP
label_1636a8:
    // 0x1636a8: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x1636a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1636ac:
    // 0x1636ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1636acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1636b0:
    // 0x1636b0: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1636b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1636b4:
    // 0x1636b4: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x1636b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1636b8:
    // 0x1636b8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1636b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1636bc:
    // 0x1636bc: 0x12a282a  slt         $a1, $t1, $t2
    ctx->pc = 0x1636bcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_1636c0:
    // 0x1636c0: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x1636c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1636c4:
    // 0x1636c4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1636c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_1636c8:
    // 0x1636c8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1636c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1636cc:
    // 0x1636cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1636ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1636d0:
    // 0x1636d0: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
label_1636d4:
    if (ctx->pc == 0x1636D4u) {
        ctx->pc = 0x1636D4u;
            // 0x1636d4: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1636D8u;
        goto label_1636d8;
    }
    ctx->pc = 0x1636D0u;
    {
        const bool branch_taken_0x1636d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1636D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1636D0u;
            // 0x1636d4: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636d0) {
            ctx->pc = 0x1636A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1636a8;
        }
    }
    ctx->pc = 0x1636D8u;
label_1636d8:
    // 0x1636d8: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x1636d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1636dc:
    // 0x1636dc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1636dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1636e0:
    // 0x1636e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1636e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1636e4:
    // 0x1636e4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1636e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1636e8:
    // 0x1636e8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1636e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1636ec:
    // 0x1636ec: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x1636ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1636f0:
    // 0x1636f0: 0xae0a0090  sw          $t2, 0x90($s0)
    ctx->pc = 0x1636f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 10));
label_1636f4:
    // 0x1636f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1636f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1636f8:
    // 0x1636f8: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1636f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1636fc:
    // 0x1636fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1636fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_163700:
    // 0x163700: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_163704:
    if (ctx->pc == 0x163704u) {
        ctx->pc = 0x163704u;
            // 0x163704: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x163708u;
        goto label_163708;
    }
    ctx->pc = 0x163700u;
    {
        const bool branch_taken_0x163700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163700) {
            ctx->pc = 0x163704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163700u;
            // 0x163704: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163728u;
            goto label_163728;
        }
    }
    ctx->pc = 0x163708u;
label_163708:
    // 0x163708: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x163708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_16370c:
    // 0x16370c: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x16370cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_163710:
    // 0x163710: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x163710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_163714:
    // 0x163714: 0x60f809  jalr        $v1
label_163718:
    if (ctx->pc == 0x163718u) {
        ctx->pc = 0x163718u;
            // 0x163718: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x16371Cu;
        goto label_16371c;
    }
    ctx->pc = 0x163714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16371Cu);
        ctx->pc = 0x163718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163714u;
            // 0x163718: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16371Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16371Cu; }
            if (ctx->pc != 0x16371Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16371Cu;
label_16371c:
    // 0x16371c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16371cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163720:
    // 0x163720: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x163720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_163724:
    // 0x163724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x163724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163728:
    // 0x163728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x163728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16372c:
    // 0x16372c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16372cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163730:
    // 0x163730: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x163730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_163734:
    // 0x163734: 0x3e00008  jr          $ra
label_163738:
    if (ctx->pc == 0x163738u) {
        ctx->pc = 0x163738u;
            // 0x163738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16373Cu;
        goto label_16373c;
    }
    ctx->pc = 0x163734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163734u;
            // 0x163738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16373Cu;
label_16373c:
    // 0x16373c: 0x0  nop
    ctx->pc = 0x16373cu;
    // NOP
label_163740:
    // 0x163740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_163744:
    // 0x163744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163748:
    // 0x163748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x163748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16374c:
    // 0x16374c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16374cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163750:
    // 0x163750: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x163750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_163754:
    // 0x163754: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x163754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_163758:
    // 0x163758: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x163758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16375c:
    // 0x16375c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_163760:
    // 0x163760: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x163760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_163764:
    // 0x163764: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
label_163768:
    if (ctx->pc == 0x163768u) {
        ctx->pc = 0x163768u;
            // 0x163768: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x16376Cu;
        goto label_16376c;
    }
    ctx->pc = 0x163764u;
    {
        const bool branch_taken_0x163764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163764u;
            // 0x163768: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163764) {
            ctx->pc = 0x163880u;
            goto label_163880;
        }
    }
    ctx->pc = 0x16376Cu;
label_16376c:
    // 0x16376c: 0xc05df6e  jal         func_177DB8
label_163770:
    if (ctx->pc == 0x163770u) {
        ctx->pc = 0x163770u;
            // 0x163770: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x163774u;
        goto label_163774;
    }
    ctx->pc = 0x16376Cu;
    SET_GPR_U32(ctx, 31, 0x163774u);
    ctx->pc = 0x163770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16376Cu;
            // 0x163770: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177DB8u;
    if (runtime->hasFunction(0x177DB8u)) {
        auto targetFn = runtime->lookupFunction(0x177DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163774u; }
        if (ctx->pc != 0x163774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DB8_0x177db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163774u; }
        if (ctx->pc != 0x163774u) { return; }
    }
    ctx->pc = 0x163774u;
label_163774:
    // 0x163774: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_163778:
    if (ctx->pc == 0x163778u) {
        ctx->pc = 0x163778u;
            // 0x163778: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x16377Cu;
        goto label_16377c;
    }
    ctx->pc = 0x163774u;
    {
        const bool branch_taken_0x163774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163774) {
            ctx->pc = 0x163778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163774u;
            // 0x163778: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163880u;
            goto label_163880;
        }
    }
    ctx->pc = 0x16377Cu;
label_16377c:
    // 0x16377c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x16377cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_163780:
    // 0x163780: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x163780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_163784:
    // 0x163784: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x163784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_163788:
    // 0x163788: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x163788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_16378c:
    // 0x16378c: 0x40f809  jalr        $v0
label_163790:
    if (ctx->pc == 0x163790u) {
        ctx->pc = 0x163790u;
            // 0x163790: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x163794u;
        goto label_163794;
    }
    ctx->pc = 0x16378Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163794u);
        ctx->pc = 0x163790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16378Cu;
            // 0x163790: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x163794u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x163794u; }
            if (ctx->pc != 0x163794u) { return; }
        }
        }
    }
    ctx->pc = 0x163794u;
label_163794:
    // 0x163794: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x163794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_163798:
    // 0x163798: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x163798u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_16379c:
    // 0x16379c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16379cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1637a0:
    // 0x1637a0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1637a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1637a4:
    // 0x1637a4: 0x894023  subu        $t0, $a0, $t1
    ctx->pc = 0x1637a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1637a8:
    // 0x1637a8: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x1637a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1637ac:
    // 0x1637ac: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x1637acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1637b0:
    // 0x1637b0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1637b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1637b4:
    // 0x1637b4: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x1637b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_1637b8:
    // 0x1637b8: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x1637b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1637bc:
    // 0x1637bc: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x1637bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1637c0:
    // 0x1637c0: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x1637c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1637c4:
    // 0x1637c4: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x1637c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
label_1637c8:
    // 0x1637c8: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x1637c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1637cc:
    // 0x1637cc: 0x14860018  bne         $a0, $a2, . + 4 + (0x18 << 2)
label_1637d0:
    if (ctx->pc == 0x1637D0u) {
        ctx->pc = 0x1637D0u;
            // 0x1637d0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1637D4u;
        goto label_1637d4;
    }
    ctx->pc = 0x1637CCu;
    {
        const bool branch_taken_0x1637cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1637D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1637CCu;
            // 0x1637d0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637cc) {
            ctx->pc = 0x163830u;
            goto label_163830;
        }
    }
    ctx->pc = 0x1637D4u;
label_1637d4:
    // 0x1637d4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1637d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1637d8:
    // 0x1637d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1637d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1637dc:
    // 0x1637dc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1637dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1637e0:
    // 0x1637e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1637e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1637e4:
    // 0x1637e4: 0x1900001f  blez        $t0, . + 4 + (0x1F << 2)
label_1637e8:
    if (ctx->pc == 0x1637E8u) {
        ctx->pc = 0x1637E8u;
            // 0x1637e8: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x1637ECu;
        goto label_1637ec;
    }
    ctx->pc = 0x1637E4u;
    {
        const bool branch_taken_0x1637e4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1637E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1637E4u;
            // 0x1637e8: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637e4) {
            ctx->pc = 0x163864u;
            goto label_163864;
        }
    }
    ctx->pc = 0x1637ECu;
label_1637ec:
    // 0x1637ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1637ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1637f0:
    // 0x1637f0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1637f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1637f4:
    // 0x1637f4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1637f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1637f8:
    // 0x1637f8: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x1637f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1637fc:
    // 0x1637fc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1637fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_163800:
    // 0x163800: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x163800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_163804:
    // 0x163804: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x163804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_163808:
    // 0x163808: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x163808u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_16380c:
    // 0x16380c: 0xe8282a  slt         $a1, $a3, $t0
    ctx->pc = 0x16380cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_163810:
    // 0x163810: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x163810u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_163814:
    // 0x163814: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x163814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_163818:
    // 0x163818: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x163818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_16381c:
    // 0x16381c: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_163820:
    if (ctx->pc == 0x163820u) {
        ctx->pc = 0x163820u;
            // 0x163820: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x163824u;
        goto label_163824;
    }
    ctx->pc = 0x16381Cu;
    {
        const bool branch_taken_0x16381c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x163820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16381Cu;
            // 0x163820: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16381c) {
            ctx->pc = 0x1637F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1637f0;
        }
    }
    ctx->pc = 0x163824u;
label_163824:
    // 0x163824: 0x1000000f  b           . + 4 + (0xF << 2)
label_163828:
    if (ctx->pc == 0x163828u) {
        ctx->pc = 0x163828u;
            // 0x163828: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x16382Cu;
        goto label_16382c;
    }
    ctx->pc = 0x163824u;
    {
        const bool branch_taken_0x163824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163824u;
            // 0x163828: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163824) {
            ctx->pc = 0x163864u;
            goto label_163864;
        }
    }
    ctx->pc = 0x16382Cu;
label_16382c:
    // 0x16382c: 0x0  nop
    ctx->pc = 0x16382cu;
    // NOP
label_163830:
    // 0x163830: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_163834:
    if (ctx->pc == 0x163834u) {
        ctx->pc = 0x163834u;
            // 0x163834: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163838u;
        goto label_163838;
    }
    ctx->pc = 0x163830u;
    {
        const bool branch_taken_0x163830 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x163834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163830u;
            // 0x163834: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163830) {
            ctx->pc = 0x163864u;
            goto label_163864;
        }
    }
    ctx->pc = 0x163838u;
label_163838:
    // 0x163838: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x163838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_16383c:
    // 0x16383c: 0x0  nop
    ctx->pc = 0x16383cu;
    // NOP
label_163840:
    // 0x163840: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x163840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_163844:
    // 0x163844: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x163844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_163848:
    // 0x163848: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x163848u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_16384c:
    // 0x16384c: 0xe8202a  slt         $a0, $a3, $t0
    ctx->pc = 0x16384cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_163850:
    // 0x163850: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x163850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_163854:
    // 0x163854: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x163854u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_163858:
    // 0x163858: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_16385c:
    if (ctx->pc == 0x16385Cu) {
        ctx->pc = 0x16385Cu;
            // 0x16385c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x163860u;
        goto label_163860;
    }
    ctx->pc = 0x163858u;
    {
        const bool branch_taken_0x163858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16385Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163858u;
            // 0x16385c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163858) {
            ctx->pc = 0x163840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_163840;
        }
    }
    ctx->pc = 0x163860u;
label_163860:
    // 0x163860: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x163860u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_163864:
    // 0x163864: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x163864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_163868:
    // 0x163868: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x163868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16386c:
    // 0x16386c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x16386cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_163870:
    // 0x163870: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x163870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_163874:
    // 0x163874: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x163874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_163878:
    // 0x163878: 0xae080090  sw          $t0, 0x90($s0)
    ctx->pc = 0x163878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_16387c:
    // 0x16387c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x16387cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_163880:
    // 0x163880: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x163880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_163884:
    // 0x163884: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_163888:
    if (ctx->pc == 0x163888u) {
        ctx->pc = 0x163888u;
            // 0x163888: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x16388Cu;
        goto label_16388c;
    }
    ctx->pc = 0x163884u;
    {
        const bool branch_taken_0x163884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163884) {
            ctx->pc = 0x163888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163884u;
            // 0x163888: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1638ACu;
            goto label_1638ac;
        }
    }
    ctx->pc = 0x16388Cu;
label_16388c:
    // 0x16388c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x16388cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_163890:
    // 0x163890: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x163890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_163894:
    // 0x163894: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x163894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_163898:
    // 0x163898: 0x60f809  jalr        $v1
label_16389c:
    if (ctx->pc == 0x16389Cu) {
        ctx->pc = 0x16389Cu;
            // 0x16389c: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x1638A0u;
        goto label_1638a0;
    }
    ctx->pc = 0x163898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1638A0u);
        ctx->pc = 0x16389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163898u;
            // 0x16389c: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1638A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1638A0u; }
            if (ctx->pc != 0x1638A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1638A0u;
label_1638a0:
    // 0x1638a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1638a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1638a4:
    // 0x1638a4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1638a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1638a8:
    // 0x1638a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1638a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1638ac:
    // 0x1638ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1638acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1638b0:
    // 0x1638b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1638b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1638b4:
    // 0x1638b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1638b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1638b8:
    // 0x1638b8: 0x3e00008  jr          $ra
label_1638bc:
    if (ctx->pc == 0x1638BCu) {
        ctx->pc = 0x1638BCu;
            // 0x1638bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1638C0u;
        goto label_fallthrough_0x1638b8;
    }
    ctx->pc = 0x1638B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1638BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1638B8u;
            // 0x1638bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1638b8:
    ctx->pc = 0x1638C0u;
}
