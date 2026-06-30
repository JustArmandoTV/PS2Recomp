#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00554250
// Address: 0x554250 - 0x5548b0
void sub_00554250_0x554250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00554250_0x554250");
#endif

    switch (ctx->pc) {
        case 0x554250u: goto label_554250;
        case 0x554254u: goto label_554254;
        case 0x554258u: goto label_554258;
        case 0x55425cu: goto label_55425c;
        case 0x554260u: goto label_554260;
        case 0x554264u: goto label_554264;
        case 0x554268u: goto label_554268;
        case 0x55426cu: goto label_55426c;
        case 0x554270u: goto label_554270;
        case 0x554274u: goto label_554274;
        case 0x554278u: goto label_554278;
        case 0x55427cu: goto label_55427c;
        case 0x554280u: goto label_554280;
        case 0x554284u: goto label_554284;
        case 0x554288u: goto label_554288;
        case 0x55428cu: goto label_55428c;
        case 0x554290u: goto label_554290;
        case 0x554294u: goto label_554294;
        case 0x554298u: goto label_554298;
        case 0x55429cu: goto label_55429c;
        case 0x5542a0u: goto label_5542a0;
        case 0x5542a4u: goto label_5542a4;
        case 0x5542a8u: goto label_5542a8;
        case 0x5542acu: goto label_5542ac;
        case 0x5542b0u: goto label_5542b0;
        case 0x5542b4u: goto label_5542b4;
        case 0x5542b8u: goto label_5542b8;
        case 0x5542bcu: goto label_5542bc;
        case 0x5542c0u: goto label_5542c0;
        case 0x5542c4u: goto label_5542c4;
        case 0x5542c8u: goto label_5542c8;
        case 0x5542ccu: goto label_5542cc;
        case 0x5542d0u: goto label_5542d0;
        case 0x5542d4u: goto label_5542d4;
        case 0x5542d8u: goto label_5542d8;
        case 0x5542dcu: goto label_5542dc;
        case 0x5542e0u: goto label_5542e0;
        case 0x5542e4u: goto label_5542e4;
        case 0x5542e8u: goto label_5542e8;
        case 0x5542ecu: goto label_5542ec;
        case 0x5542f0u: goto label_5542f0;
        case 0x5542f4u: goto label_5542f4;
        case 0x5542f8u: goto label_5542f8;
        case 0x5542fcu: goto label_5542fc;
        case 0x554300u: goto label_554300;
        case 0x554304u: goto label_554304;
        case 0x554308u: goto label_554308;
        case 0x55430cu: goto label_55430c;
        case 0x554310u: goto label_554310;
        case 0x554314u: goto label_554314;
        case 0x554318u: goto label_554318;
        case 0x55431cu: goto label_55431c;
        case 0x554320u: goto label_554320;
        case 0x554324u: goto label_554324;
        case 0x554328u: goto label_554328;
        case 0x55432cu: goto label_55432c;
        case 0x554330u: goto label_554330;
        case 0x554334u: goto label_554334;
        case 0x554338u: goto label_554338;
        case 0x55433cu: goto label_55433c;
        case 0x554340u: goto label_554340;
        case 0x554344u: goto label_554344;
        case 0x554348u: goto label_554348;
        case 0x55434cu: goto label_55434c;
        case 0x554350u: goto label_554350;
        case 0x554354u: goto label_554354;
        case 0x554358u: goto label_554358;
        case 0x55435cu: goto label_55435c;
        case 0x554360u: goto label_554360;
        case 0x554364u: goto label_554364;
        case 0x554368u: goto label_554368;
        case 0x55436cu: goto label_55436c;
        case 0x554370u: goto label_554370;
        case 0x554374u: goto label_554374;
        case 0x554378u: goto label_554378;
        case 0x55437cu: goto label_55437c;
        case 0x554380u: goto label_554380;
        case 0x554384u: goto label_554384;
        case 0x554388u: goto label_554388;
        case 0x55438cu: goto label_55438c;
        case 0x554390u: goto label_554390;
        case 0x554394u: goto label_554394;
        case 0x554398u: goto label_554398;
        case 0x55439cu: goto label_55439c;
        case 0x5543a0u: goto label_5543a0;
        case 0x5543a4u: goto label_5543a4;
        case 0x5543a8u: goto label_5543a8;
        case 0x5543acu: goto label_5543ac;
        case 0x5543b0u: goto label_5543b0;
        case 0x5543b4u: goto label_5543b4;
        case 0x5543b8u: goto label_5543b8;
        case 0x5543bcu: goto label_5543bc;
        case 0x5543c0u: goto label_5543c0;
        case 0x5543c4u: goto label_5543c4;
        case 0x5543c8u: goto label_5543c8;
        case 0x5543ccu: goto label_5543cc;
        case 0x5543d0u: goto label_5543d0;
        case 0x5543d4u: goto label_5543d4;
        case 0x5543d8u: goto label_5543d8;
        case 0x5543dcu: goto label_5543dc;
        case 0x5543e0u: goto label_5543e0;
        case 0x5543e4u: goto label_5543e4;
        case 0x5543e8u: goto label_5543e8;
        case 0x5543ecu: goto label_5543ec;
        case 0x5543f0u: goto label_5543f0;
        case 0x5543f4u: goto label_5543f4;
        case 0x5543f8u: goto label_5543f8;
        case 0x5543fcu: goto label_5543fc;
        case 0x554400u: goto label_554400;
        case 0x554404u: goto label_554404;
        case 0x554408u: goto label_554408;
        case 0x55440cu: goto label_55440c;
        case 0x554410u: goto label_554410;
        case 0x554414u: goto label_554414;
        case 0x554418u: goto label_554418;
        case 0x55441cu: goto label_55441c;
        case 0x554420u: goto label_554420;
        case 0x554424u: goto label_554424;
        case 0x554428u: goto label_554428;
        case 0x55442cu: goto label_55442c;
        case 0x554430u: goto label_554430;
        case 0x554434u: goto label_554434;
        case 0x554438u: goto label_554438;
        case 0x55443cu: goto label_55443c;
        case 0x554440u: goto label_554440;
        case 0x554444u: goto label_554444;
        case 0x554448u: goto label_554448;
        case 0x55444cu: goto label_55444c;
        case 0x554450u: goto label_554450;
        case 0x554454u: goto label_554454;
        case 0x554458u: goto label_554458;
        case 0x55445cu: goto label_55445c;
        case 0x554460u: goto label_554460;
        case 0x554464u: goto label_554464;
        case 0x554468u: goto label_554468;
        case 0x55446cu: goto label_55446c;
        case 0x554470u: goto label_554470;
        case 0x554474u: goto label_554474;
        case 0x554478u: goto label_554478;
        case 0x55447cu: goto label_55447c;
        case 0x554480u: goto label_554480;
        case 0x554484u: goto label_554484;
        case 0x554488u: goto label_554488;
        case 0x55448cu: goto label_55448c;
        case 0x554490u: goto label_554490;
        case 0x554494u: goto label_554494;
        case 0x554498u: goto label_554498;
        case 0x55449cu: goto label_55449c;
        case 0x5544a0u: goto label_5544a0;
        case 0x5544a4u: goto label_5544a4;
        case 0x5544a8u: goto label_5544a8;
        case 0x5544acu: goto label_5544ac;
        case 0x5544b0u: goto label_5544b0;
        case 0x5544b4u: goto label_5544b4;
        case 0x5544b8u: goto label_5544b8;
        case 0x5544bcu: goto label_5544bc;
        case 0x5544c0u: goto label_5544c0;
        case 0x5544c4u: goto label_5544c4;
        case 0x5544c8u: goto label_5544c8;
        case 0x5544ccu: goto label_5544cc;
        case 0x5544d0u: goto label_5544d0;
        case 0x5544d4u: goto label_5544d4;
        case 0x5544d8u: goto label_5544d8;
        case 0x5544dcu: goto label_5544dc;
        case 0x5544e0u: goto label_5544e0;
        case 0x5544e4u: goto label_5544e4;
        case 0x5544e8u: goto label_5544e8;
        case 0x5544ecu: goto label_5544ec;
        case 0x5544f0u: goto label_5544f0;
        case 0x5544f4u: goto label_5544f4;
        case 0x5544f8u: goto label_5544f8;
        case 0x5544fcu: goto label_5544fc;
        case 0x554500u: goto label_554500;
        case 0x554504u: goto label_554504;
        case 0x554508u: goto label_554508;
        case 0x55450cu: goto label_55450c;
        case 0x554510u: goto label_554510;
        case 0x554514u: goto label_554514;
        case 0x554518u: goto label_554518;
        case 0x55451cu: goto label_55451c;
        case 0x554520u: goto label_554520;
        case 0x554524u: goto label_554524;
        case 0x554528u: goto label_554528;
        case 0x55452cu: goto label_55452c;
        case 0x554530u: goto label_554530;
        case 0x554534u: goto label_554534;
        case 0x554538u: goto label_554538;
        case 0x55453cu: goto label_55453c;
        case 0x554540u: goto label_554540;
        case 0x554544u: goto label_554544;
        case 0x554548u: goto label_554548;
        case 0x55454cu: goto label_55454c;
        case 0x554550u: goto label_554550;
        case 0x554554u: goto label_554554;
        case 0x554558u: goto label_554558;
        case 0x55455cu: goto label_55455c;
        case 0x554560u: goto label_554560;
        case 0x554564u: goto label_554564;
        case 0x554568u: goto label_554568;
        case 0x55456cu: goto label_55456c;
        case 0x554570u: goto label_554570;
        case 0x554574u: goto label_554574;
        case 0x554578u: goto label_554578;
        case 0x55457cu: goto label_55457c;
        case 0x554580u: goto label_554580;
        case 0x554584u: goto label_554584;
        case 0x554588u: goto label_554588;
        case 0x55458cu: goto label_55458c;
        case 0x554590u: goto label_554590;
        case 0x554594u: goto label_554594;
        case 0x554598u: goto label_554598;
        case 0x55459cu: goto label_55459c;
        case 0x5545a0u: goto label_5545a0;
        case 0x5545a4u: goto label_5545a4;
        case 0x5545a8u: goto label_5545a8;
        case 0x5545acu: goto label_5545ac;
        case 0x5545b0u: goto label_5545b0;
        case 0x5545b4u: goto label_5545b4;
        case 0x5545b8u: goto label_5545b8;
        case 0x5545bcu: goto label_5545bc;
        case 0x5545c0u: goto label_5545c0;
        case 0x5545c4u: goto label_5545c4;
        case 0x5545c8u: goto label_5545c8;
        case 0x5545ccu: goto label_5545cc;
        case 0x5545d0u: goto label_5545d0;
        case 0x5545d4u: goto label_5545d4;
        case 0x5545d8u: goto label_5545d8;
        case 0x5545dcu: goto label_5545dc;
        case 0x5545e0u: goto label_5545e0;
        case 0x5545e4u: goto label_5545e4;
        case 0x5545e8u: goto label_5545e8;
        case 0x5545ecu: goto label_5545ec;
        case 0x5545f0u: goto label_5545f0;
        case 0x5545f4u: goto label_5545f4;
        case 0x5545f8u: goto label_5545f8;
        case 0x5545fcu: goto label_5545fc;
        case 0x554600u: goto label_554600;
        case 0x554604u: goto label_554604;
        case 0x554608u: goto label_554608;
        case 0x55460cu: goto label_55460c;
        case 0x554610u: goto label_554610;
        case 0x554614u: goto label_554614;
        case 0x554618u: goto label_554618;
        case 0x55461cu: goto label_55461c;
        case 0x554620u: goto label_554620;
        case 0x554624u: goto label_554624;
        case 0x554628u: goto label_554628;
        case 0x55462cu: goto label_55462c;
        case 0x554630u: goto label_554630;
        case 0x554634u: goto label_554634;
        case 0x554638u: goto label_554638;
        case 0x55463cu: goto label_55463c;
        case 0x554640u: goto label_554640;
        case 0x554644u: goto label_554644;
        case 0x554648u: goto label_554648;
        case 0x55464cu: goto label_55464c;
        case 0x554650u: goto label_554650;
        case 0x554654u: goto label_554654;
        case 0x554658u: goto label_554658;
        case 0x55465cu: goto label_55465c;
        case 0x554660u: goto label_554660;
        case 0x554664u: goto label_554664;
        case 0x554668u: goto label_554668;
        case 0x55466cu: goto label_55466c;
        case 0x554670u: goto label_554670;
        case 0x554674u: goto label_554674;
        case 0x554678u: goto label_554678;
        case 0x55467cu: goto label_55467c;
        case 0x554680u: goto label_554680;
        case 0x554684u: goto label_554684;
        case 0x554688u: goto label_554688;
        case 0x55468cu: goto label_55468c;
        case 0x554690u: goto label_554690;
        case 0x554694u: goto label_554694;
        case 0x554698u: goto label_554698;
        case 0x55469cu: goto label_55469c;
        case 0x5546a0u: goto label_5546a0;
        case 0x5546a4u: goto label_5546a4;
        case 0x5546a8u: goto label_5546a8;
        case 0x5546acu: goto label_5546ac;
        case 0x5546b0u: goto label_5546b0;
        case 0x5546b4u: goto label_5546b4;
        case 0x5546b8u: goto label_5546b8;
        case 0x5546bcu: goto label_5546bc;
        case 0x5546c0u: goto label_5546c0;
        case 0x5546c4u: goto label_5546c4;
        case 0x5546c8u: goto label_5546c8;
        case 0x5546ccu: goto label_5546cc;
        case 0x5546d0u: goto label_5546d0;
        case 0x5546d4u: goto label_5546d4;
        case 0x5546d8u: goto label_5546d8;
        case 0x5546dcu: goto label_5546dc;
        case 0x5546e0u: goto label_5546e0;
        case 0x5546e4u: goto label_5546e4;
        case 0x5546e8u: goto label_5546e8;
        case 0x5546ecu: goto label_5546ec;
        case 0x5546f0u: goto label_5546f0;
        case 0x5546f4u: goto label_5546f4;
        case 0x5546f8u: goto label_5546f8;
        case 0x5546fcu: goto label_5546fc;
        case 0x554700u: goto label_554700;
        case 0x554704u: goto label_554704;
        case 0x554708u: goto label_554708;
        case 0x55470cu: goto label_55470c;
        case 0x554710u: goto label_554710;
        case 0x554714u: goto label_554714;
        case 0x554718u: goto label_554718;
        case 0x55471cu: goto label_55471c;
        case 0x554720u: goto label_554720;
        case 0x554724u: goto label_554724;
        case 0x554728u: goto label_554728;
        case 0x55472cu: goto label_55472c;
        case 0x554730u: goto label_554730;
        case 0x554734u: goto label_554734;
        case 0x554738u: goto label_554738;
        case 0x55473cu: goto label_55473c;
        case 0x554740u: goto label_554740;
        case 0x554744u: goto label_554744;
        case 0x554748u: goto label_554748;
        case 0x55474cu: goto label_55474c;
        case 0x554750u: goto label_554750;
        case 0x554754u: goto label_554754;
        case 0x554758u: goto label_554758;
        case 0x55475cu: goto label_55475c;
        case 0x554760u: goto label_554760;
        case 0x554764u: goto label_554764;
        case 0x554768u: goto label_554768;
        case 0x55476cu: goto label_55476c;
        case 0x554770u: goto label_554770;
        case 0x554774u: goto label_554774;
        case 0x554778u: goto label_554778;
        case 0x55477cu: goto label_55477c;
        case 0x554780u: goto label_554780;
        case 0x554784u: goto label_554784;
        case 0x554788u: goto label_554788;
        case 0x55478cu: goto label_55478c;
        case 0x554790u: goto label_554790;
        case 0x554794u: goto label_554794;
        case 0x554798u: goto label_554798;
        case 0x55479cu: goto label_55479c;
        case 0x5547a0u: goto label_5547a0;
        case 0x5547a4u: goto label_5547a4;
        case 0x5547a8u: goto label_5547a8;
        case 0x5547acu: goto label_5547ac;
        case 0x5547b0u: goto label_5547b0;
        case 0x5547b4u: goto label_5547b4;
        case 0x5547b8u: goto label_5547b8;
        case 0x5547bcu: goto label_5547bc;
        case 0x5547c0u: goto label_5547c0;
        case 0x5547c4u: goto label_5547c4;
        case 0x5547c8u: goto label_5547c8;
        case 0x5547ccu: goto label_5547cc;
        case 0x5547d0u: goto label_5547d0;
        case 0x5547d4u: goto label_5547d4;
        case 0x5547d8u: goto label_5547d8;
        case 0x5547dcu: goto label_5547dc;
        case 0x5547e0u: goto label_5547e0;
        case 0x5547e4u: goto label_5547e4;
        case 0x5547e8u: goto label_5547e8;
        case 0x5547ecu: goto label_5547ec;
        case 0x5547f0u: goto label_5547f0;
        case 0x5547f4u: goto label_5547f4;
        case 0x5547f8u: goto label_5547f8;
        case 0x5547fcu: goto label_5547fc;
        case 0x554800u: goto label_554800;
        case 0x554804u: goto label_554804;
        case 0x554808u: goto label_554808;
        case 0x55480cu: goto label_55480c;
        case 0x554810u: goto label_554810;
        case 0x554814u: goto label_554814;
        case 0x554818u: goto label_554818;
        case 0x55481cu: goto label_55481c;
        case 0x554820u: goto label_554820;
        case 0x554824u: goto label_554824;
        case 0x554828u: goto label_554828;
        case 0x55482cu: goto label_55482c;
        case 0x554830u: goto label_554830;
        case 0x554834u: goto label_554834;
        case 0x554838u: goto label_554838;
        case 0x55483cu: goto label_55483c;
        case 0x554840u: goto label_554840;
        case 0x554844u: goto label_554844;
        case 0x554848u: goto label_554848;
        case 0x55484cu: goto label_55484c;
        case 0x554850u: goto label_554850;
        case 0x554854u: goto label_554854;
        case 0x554858u: goto label_554858;
        case 0x55485cu: goto label_55485c;
        case 0x554860u: goto label_554860;
        case 0x554864u: goto label_554864;
        case 0x554868u: goto label_554868;
        case 0x55486cu: goto label_55486c;
        case 0x554870u: goto label_554870;
        case 0x554874u: goto label_554874;
        case 0x554878u: goto label_554878;
        case 0x55487cu: goto label_55487c;
        case 0x554880u: goto label_554880;
        case 0x554884u: goto label_554884;
        case 0x554888u: goto label_554888;
        case 0x55488cu: goto label_55488c;
        case 0x554890u: goto label_554890;
        case 0x554894u: goto label_554894;
        case 0x554898u: goto label_554898;
        case 0x55489cu: goto label_55489c;
        case 0x5548a0u: goto label_5548a0;
        case 0x5548a4u: goto label_5548a4;
        case 0x5548a8u: goto label_5548a8;
        case 0x5548acu: goto label_5548ac;
        default: break;
    }

    ctx->pc = 0x554250u;

label_554250:
    // 0x554250: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x554250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_554254:
    // 0x554254: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x554254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_554258:
    // 0x554258: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x554258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_55425c:
    // 0x55425c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x55425cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_554260:
    // 0x554260: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x554260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_554264:
    // 0x554264: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x554264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_554268:
    // 0x554268: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x554268u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_55426c:
    // 0x55426c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x55426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_554270:
    // 0x554270: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x554270u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_554274:
    // 0x554274: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x554274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_554278:
    // 0x554278: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x554278u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_55427c:
    // 0x55427c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x55427cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_554280:
    // 0x554280: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x554280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_554284:
    // 0x554284: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x554284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_554288:
    // 0x554288: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x554288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_55428c:
    // 0x55428c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x55428cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_554290:
    // 0x554290: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x554290u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_554294:
    // 0x554294: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x554294u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_554298:
    // 0x554298: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x554298u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_55429c:
    // 0x55429c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55429cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_5542a0:
    // 0x5542a0: 0x9451dc02  lhu         $s1, -0x23FE($v0)
    ctx->pc = 0x5542a0u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958082)));
label_5542a4:
    // 0x5542a4: 0x9472dc00  lhu         $s2, -0x2400($v1)
    ctx->pc = 0x5542a4u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294958080)));
label_5542a8:
    // 0x5542a8: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x5542a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_5542ac:
    // 0x5542ac: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x5542acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_5542b0:
    // 0x5542b0: 0xc0506ac  jal         func_141AB0
label_5542b4:
    if (ctx->pc == 0x5542B4u) {
        ctx->pc = 0x5542B4u;
            // 0x5542b4: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5542B8u;
        goto label_5542b8;
    }
    ctx->pc = 0x5542B0u;
    SET_GPR_U32(ctx, 31, 0x5542B8u);
    ctx->pc = 0x5542B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5542B0u;
            // 0x5542b4: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5542B8u; }
        if (ctx->pc != 0x5542B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5542B8u; }
        if (ctx->pc != 0x5542B8u) { return; }
    }
    ctx->pc = 0x5542B8u;
label_5542b8:
    // 0x5542b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5542b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5542bc:
    // 0x5542bc: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x5542bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5542c0:
    // 0x5542c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5542c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5542c4:
    // 0x5542c4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5542c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5542c8:
    // 0x5542c8: 0x320f809  jalr        $t9
label_5542cc:
    if (ctx->pc == 0x5542CCu) {
        ctx->pc = 0x5542CCu;
            // 0x5542cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5542D0u;
        goto label_5542d0;
    }
    ctx->pc = 0x5542C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5542D0u);
        ctx->pc = 0x5542CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5542C8u;
            // 0x5542cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5542D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5542D0u; }
            if (ctx->pc != 0x5542D0u) { return; }
        }
        }
    }
    ctx->pc = 0x5542D0u;
label_5542d0:
    // 0x5542d0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5542d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5542d4:
    // 0x5542d4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x5542d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_5542d8:
    // 0x5542d8: 0xc455e08c  lwc1        $f21, -0x1F74($v0)
    ctx->pc = 0x5542d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_5542dc:
    // 0x5542dc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5542dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5542e0:
    // 0x5542e0: 0xc474e088  lwc1        $f20, -0x1F78($v1)
    ctx->pc = 0x5542e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5542e4:
    // 0x5542e4: 0x2b6b021  addu        $s6, $s5, $s6
    ctx->pc = 0x5542e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_5542e8:
    // 0x5542e8: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x5542e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_5542ec:
    // 0x5542ec: 0x24a5e0b0  addiu       $a1, $a1, -0x1F50
    ctx->pc = 0x5542ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959280));
label_5542f0:
    // 0x5542f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x5542f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_5542f4:
    // 0x5542f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x5542f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_5542f8:
    // 0x5542f8: 0x0  nop
    ctx->pc = 0x5542f8u;
    // NOP
label_5542fc:
    // 0x5542fc: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x5542fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_554300:
    // 0x554300: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x554300u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_554304:
    // 0x554304: 0x46151002  mul.s       $f0, $f2, $f21
    ctx->pc = 0x554304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_554308:
    // 0x554308: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x554308u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_55430c:
    // 0x55430c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x55430cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554310:
    // 0x554310: 0x0  nop
    ctx->pc = 0x554310u;
    // NOP
label_554314:
    // 0x554314: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x554314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_554318:
    // 0x554318: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x554318u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_55431c:
    // 0x55431c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x55431cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554320:
    // 0x554320: 0x0  nop
    ctx->pc = 0x554320u;
    // NOP
label_554324:
    // 0x554324: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x554324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_554328:
    // 0x554328: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x554328u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_55432c:
    // 0x55432c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x55432cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554330:
    // 0x554330: 0x0  nop
    ctx->pc = 0x554330u;
    // NOP
label_554334:
    // 0x554334: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x554334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_554338:
    // 0x554338: 0x46010381  sub.s       $f14, $f0, $f1
    ctx->pc = 0x554338u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_55433c:
    // 0x55433c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x55433cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554340:
    // 0x554340: 0x0  nop
    ctx->pc = 0x554340u;
    // NOP
label_554344:
    // 0x554344: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x554344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_554348:
    // 0x554348: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_55434c:
    if (ctx->pc == 0x55434Cu) {
        ctx->pc = 0x55434Cu;
            // 0x55434c: 0x460203c1  sub.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x554350u;
        goto label_554350;
    }
    ctx->pc = 0x554348u;
    {
        const bool branch_taken_0x554348 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x55434Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554348u;
            // 0x55434c: 0x460203c1  sub.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x554348) {
            ctx->pc = 0x55435Cu;
            goto label_55435c;
        }
    }
    ctx->pc = 0x554350u;
label_554350:
    // 0x554350: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x554350u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554354:
    // 0x554354: 0x10000008  b           . + 4 + (0x8 << 2)
label_554358:
    if (ctx->pc == 0x554358u) {
        ctx->pc = 0x554358u;
            // 0x554358: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55435Cu;
        goto label_55435c;
    }
    ctx->pc = 0x554354u;
    {
        const bool branch_taken_0x554354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554354u;
            // 0x554358: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554354) {
            ctx->pc = 0x554378u;
            goto label_554378;
        }
    }
    ctx->pc = 0x55435Cu;
label_55435c:
    // 0x55435c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x55435cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_554360:
    // 0x554360: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x554360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_554364:
    // 0x554364: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554368:
    // 0x554368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55436c:
    // 0x55436c: 0x0  nop
    ctx->pc = 0x55436cu;
    // NOP
label_554370:
    // 0x554370: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x554370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_554374:
    // 0x554374: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x554374u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_554378:
    // 0x554378: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_55437c:
    if (ctx->pc == 0x55437Cu) {
        ctx->pc = 0x55437Cu;
            // 0x55437c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x554380u;
        goto label_554380;
    }
    ctx->pc = 0x554378u;
    {
        const bool branch_taken_0x554378 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x554378) {
            ctx->pc = 0x55437Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554378u;
            // 0x55437c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55438Cu;
            goto label_55438c;
        }
    }
    ctx->pc = 0x554380u;
label_554380:
    // 0x554380: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x554380u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554384:
    // 0x554384: 0x10000007  b           . + 4 + (0x7 << 2)
label_554388:
    if (ctx->pc == 0x554388u) {
        ctx->pc = 0x554388u;
            // 0x554388: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55438Cu;
        goto label_55438c;
    }
    ctx->pc = 0x554384u;
    {
        const bool branch_taken_0x554384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554384u;
            // 0x554388: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554384) {
            ctx->pc = 0x5543A4u;
            goto label_5543a4;
        }
    }
    ctx->pc = 0x55438Cu;
label_55438c:
    // 0x55438c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x55438cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_554390:
    // 0x554390: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554394:
    // 0x554394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554398:
    // 0x554398: 0x0  nop
    ctx->pc = 0x554398u;
    // NOP
label_55439c:
    // 0x55439c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55439cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5543a0:
    // 0x5543a0: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5543a0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5543a4:
    // 0x5543a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5543a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5543a8:
    // 0x5543a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5543a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5543ac:
    // 0x5543ac: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5543acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5543b0:
    // 0x5543b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5543b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5543b4:
    // 0x5543b4: 0xc0bc284  jal         func_2F0A10
label_5543b8:
    if (ctx->pc == 0x5543B8u) {
        ctx->pc = 0x5543B8u;
            // 0x5543b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5543BCu;
        goto label_5543bc;
    }
    ctx->pc = 0x5543B4u;
    SET_GPR_U32(ctx, 31, 0x5543BCu);
    ctx->pc = 0x5543B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5543B4u;
            // 0x5543b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5543BCu; }
        if (ctx->pc != 0x5543BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5543BCu; }
        if (ctx->pc != 0x5543BCu) { return; }
    }
    ctx->pc = 0x5543BCu;
label_5543bc:
    // 0x5543bc: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x5543bcu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5543c0:
    // 0x5543c0: 0x0  nop
    ctx->pc = 0x5543c0u;
    // NOP
label_5543c4:
    // 0x5543c4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x5543c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_5543c8:
    // 0x5543c8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x5543c8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5543cc:
    // 0x5543cc: 0x0  nop
    ctx->pc = 0x5543ccu;
    // NOP
label_5543d0:
    // 0x5543d0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x5543d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_5543d4:
    // 0x5543d4: 0x46156dc0  add.s       $f23, $f13, $f21
    ctx->pc = 0x5543d4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
label_5543d8:
    // 0x5543d8: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_5543dc:
    if (ctx->pc == 0x5543DCu) {
        ctx->pc = 0x5543DCu;
            // 0x5543dc: 0x46146580  add.s       $f22, $f12, $f20 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x5543E0u;
        goto label_5543e0;
    }
    ctx->pc = 0x5543D8u;
    {
        const bool branch_taken_0x5543d8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x5543DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5543D8u;
            // 0x5543dc: 0x46146580  add.s       $f22, $f12, $f20 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5543d8) {
            ctx->pc = 0x5543ECu;
            goto label_5543ec;
        }
    }
    ctx->pc = 0x5543E0u;
label_5543e0:
    // 0x5543e0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x5543e0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5543e4:
    // 0x5543e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_5543e8:
    if (ctx->pc == 0x5543E8u) {
        ctx->pc = 0x5543E8u;
            // 0x5543e8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5543ECu;
        goto label_5543ec;
    }
    ctx->pc = 0x5543E4u;
    {
        const bool branch_taken_0x5543e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5543E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5543E4u;
            // 0x5543e8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5543e4) {
            ctx->pc = 0x554408u;
            goto label_554408;
        }
    }
    ctx->pc = 0x5543ECu;
label_5543ec:
    // 0x5543ec: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x5543ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_5543f0:
    // 0x5543f0: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x5543f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_5543f4:
    // 0x5543f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5543f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5543f8:
    // 0x5543f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5543f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5543fc:
    // 0x5543fc: 0x0  nop
    ctx->pc = 0x5543fcu;
    // NOP
label_554400:
    // 0x554400: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x554400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_554404:
    // 0x554404: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x554404u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_554408:
    // 0x554408: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_55440c:
    if (ctx->pc == 0x55440Cu) {
        ctx->pc = 0x55440Cu;
            // 0x55440c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x554410u;
        goto label_554410;
    }
    ctx->pc = 0x554408u;
    {
        const bool branch_taken_0x554408 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x554408) {
            ctx->pc = 0x55440Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554408u;
            // 0x55440c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55441Cu;
            goto label_55441c;
        }
    }
    ctx->pc = 0x554410u;
label_554410:
    // 0x554410: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x554410u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554414:
    // 0x554414: 0x10000007  b           . + 4 + (0x7 << 2)
label_554418:
    if (ctx->pc == 0x554418u) {
        ctx->pc = 0x554418u;
            // 0x554418: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55441Cu;
        goto label_55441c;
    }
    ctx->pc = 0x554414u;
    {
        const bool branch_taken_0x554414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554414u;
            // 0x554418: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554414) {
            ctx->pc = 0x554434u;
            goto label_554434;
        }
    }
    ctx->pc = 0x55441Cu;
label_55441c:
    // 0x55441c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x55441cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_554420:
    // 0x554420: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554424:
    // 0x554424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554428:
    // 0x554428: 0x0  nop
    ctx->pc = 0x554428u;
    // NOP
label_55442c:
    // 0x55442c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55442cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_554430:
    // 0x554430: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x554430u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_554434:
    // 0x554434: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x554434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_554438:
    // 0x554438: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x554438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_55443c:
    // 0x55443c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55443cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_554440:
    // 0x554440: 0x24a5e080  addiu       $a1, $a1, -0x1F80
    ctx->pc = 0x554440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
label_554444:
    // 0x554444: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x554444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_554448:
    // 0x554448: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x554448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55444c:
    // 0x55444c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x55444cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_554450:
    // 0x554450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x554450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_554454:
    // 0x554454: 0xc0bc284  jal         func_2F0A10
label_554458:
    if (ctx->pc == 0x554458u) {
        ctx->pc = 0x554458u;
            // 0x554458: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x55445Cu;
        goto label_55445c;
    }
    ctx->pc = 0x554454u;
    SET_GPR_U32(ctx, 31, 0x55445Cu);
    ctx->pc = 0x554458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x554454u;
            // 0x554458: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55445Cu; }
        if (ctx->pc != 0x55445Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55445Cu; }
        if (ctx->pc != 0x55445Cu) { return; }
    }
    ctx->pc = 0x55445Cu;
label_55445c:
    // 0x55445c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x55445cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554460:
    // 0x554460: 0x0  nop
    ctx->pc = 0x554460u;
    // NOP
label_554464:
    // 0x554464: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x554464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_554468:
    // 0x554468: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x554468u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55446c:
    // 0x55446c: 0x0  nop
    ctx->pc = 0x55446cu;
    // NOP
label_554470:
    // 0x554470: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x554470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_554474:
    // 0x554474: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_554478:
    if (ctx->pc == 0x554478u) {
        ctx->pc = 0x554478u;
            // 0x554478: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x55447Cu;
        goto label_55447c;
    }
    ctx->pc = 0x554474u;
    {
        const bool branch_taken_0x554474 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x554478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554474u;
            // 0x554478: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x554474) {
            ctx->pc = 0x554488u;
            goto label_554488;
        }
    }
    ctx->pc = 0x55447Cu;
label_55447c:
    // 0x55447c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x55447cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554480:
    // 0x554480: 0x10000008  b           . + 4 + (0x8 << 2)
label_554484:
    if (ctx->pc == 0x554484u) {
        ctx->pc = 0x554484u;
            // 0x554484: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554488u;
        goto label_554488;
    }
    ctx->pc = 0x554480u;
    {
        const bool branch_taken_0x554480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554480u;
            // 0x554484: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554480) {
            ctx->pc = 0x5544A4u;
            goto label_5544a4;
        }
    }
    ctx->pc = 0x554488u;
label_554488:
    // 0x554488: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x554488u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_55448c:
    // 0x55448c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x55448cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_554490:
    // 0x554490: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554494:
    // 0x554494: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554498:
    // 0x554498: 0x0  nop
    ctx->pc = 0x554498u;
    // NOP
label_55449c:
    // 0x55449c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55449cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5544a0:
    // 0x5544a0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x5544a0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_5544a4:
    // 0x5544a4: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_5544a8:
    if (ctx->pc == 0x5544A8u) {
        ctx->pc = 0x5544A8u;
            // 0x5544a8: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x5544ACu;
        goto label_5544ac;
    }
    ctx->pc = 0x5544A4u;
    {
        const bool branch_taken_0x5544a4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x5544a4) {
            ctx->pc = 0x5544A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5544A4u;
            // 0x5544a8: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5544B8u;
            goto label_5544b8;
        }
    }
    ctx->pc = 0x5544ACu;
label_5544ac:
    // 0x5544ac: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5544acu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5544b0:
    // 0x5544b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_5544b4:
    if (ctx->pc == 0x5544B4u) {
        ctx->pc = 0x5544B4u;
            // 0x5544b4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5544B8u;
        goto label_5544b8;
    }
    ctx->pc = 0x5544B0u;
    {
        const bool branch_taken_0x5544b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5544B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5544B0u;
            // 0x5544b4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5544b0) {
            ctx->pc = 0x5544D0u;
            goto label_5544d0;
        }
    }
    ctx->pc = 0x5544B8u;
label_5544b8:
    // 0x5544b8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x5544b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_5544bc:
    // 0x5544bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5544bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5544c0:
    // 0x5544c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5544c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5544c4:
    // 0x5544c4: 0x0  nop
    ctx->pc = 0x5544c4u;
    // NOP
label_5544c8:
    // 0x5544c8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5544c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5544cc:
    // 0x5544cc: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5544ccu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5544d0:
    // 0x5544d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5544d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5544d4:
    // 0x5544d4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5544d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5544d8:
    // 0x5544d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5544d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5544dc:
    // 0x5544dc: 0x24a5e080  addiu       $a1, $a1, -0x1F80
    ctx->pc = 0x5544dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
label_5544e0:
    // 0x5544e0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5544e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5544e4:
    // 0x5544e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5544e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5544e8:
    // 0x5544e8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x5544e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_5544ec:
    // 0x5544ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5544ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5544f0:
    // 0x5544f0: 0xc0bc284  jal         func_2F0A10
label_5544f4:
    if (ctx->pc == 0x5544F4u) {
        ctx->pc = 0x5544F4u;
            // 0x5544f4: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x5544F8u;
        goto label_5544f8;
    }
    ctx->pc = 0x5544F0u;
    SET_GPR_U32(ctx, 31, 0x5544F8u);
    ctx->pc = 0x5544F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5544F0u;
            // 0x5544f4: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5544F8u; }
        if (ctx->pc != 0x5544F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5544F8u; }
        if (ctx->pc != 0x5544F8u) { return; }
    }
    ctx->pc = 0x5544F8u;
label_5544f8:
    // 0x5544f8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x5544f8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5544fc:
    // 0x5544fc: 0x0  nop
    ctx->pc = 0x5544fcu;
    // NOP
label_554500:
    // 0x554500: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x554500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_554504:
    // 0x554504: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x554504u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554508:
    // 0x554508: 0x0  nop
    ctx->pc = 0x554508u;
    // NOP
label_55450c:
    // 0x55450c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x55450cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_554510:
    // 0x554510: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_554514:
    if (ctx->pc == 0x554514u) {
        ctx->pc = 0x554514u;
            // 0x554514: 0x46156d41  sub.s       $f21, $f13, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[21]);
        ctx->pc = 0x554518u;
        goto label_554518;
    }
    ctx->pc = 0x554510u;
    {
        const bool branch_taken_0x554510 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x554514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554510u;
            // 0x554514: 0x46156d41  sub.s       $f21, $f13, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x554510) {
            ctx->pc = 0x554524u;
            goto label_554524;
        }
    }
    ctx->pc = 0x554518u;
label_554518:
    // 0x554518: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x554518u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55451c:
    // 0x55451c: 0x10000008  b           . + 4 + (0x8 << 2)
label_554520:
    if (ctx->pc == 0x554520u) {
        ctx->pc = 0x554520u;
            // 0x554520: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554524u;
        goto label_554524;
    }
    ctx->pc = 0x55451Cu;
    {
        const bool branch_taken_0x55451c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55451Cu;
            // 0x554520: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55451c) {
            ctx->pc = 0x554540u;
            goto label_554540;
        }
    }
    ctx->pc = 0x554524u;
label_554524:
    // 0x554524: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x554524u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_554528:
    // 0x554528: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x554528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_55452c:
    // 0x55452c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55452cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554530:
    // 0x554530: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554534:
    // 0x554534: 0x0  nop
    ctx->pc = 0x554534u;
    // NOP
label_554538:
    // 0x554538: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x554538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55453c:
    // 0x55453c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x55453cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_554540:
    // 0x554540: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_554544:
    if (ctx->pc == 0x554544u) {
        ctx->pc = 0x554544u;
            // 0x554544: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x554548u;
        goto label_554548;
    }
    ctx->pc = 0x554540u;
    {
        const bool branch_taken_0x554540 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x554540) {
            ctx->pc = 0x554544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554540u;
            // 0x554544: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x554554u;
            goto label_554554;
        }
    }
    ctx->pc = 0x554548u;
label_554548:
    // 0x554548: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x554548u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55454c:
    // 0x55454c: 0x10000007  b           . + 4 + (0x7 << 2)
label_554550:
    if (ctx->pc == 0x554550u) {
        ctx->pc = 0x554550u;
            // 0x554550: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554554u;
        goto label_554554;
    }
    ctx->pc = 0x55454Cu;
    {
        const bool branch_taken_0x55454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55454Cu;
            // 0x554550: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55454c) {
            ctx->pc = 0x55456Cu;
            goto label_55456c;
        }
    }
    ctx->pc = 0x554554u;
label_554554:
    // 0x554554: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x554554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_554558:
    // 0x554558: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55455c:
    // 0x55455c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55455cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554560:
    // 0x554560: 0x0  nop
    ctx->pc = 0x554560u;
    // NOP
label_554564:
    // 0x554564: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x554564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_554568:
    // 0x554568: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x554568u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_55456c:
    // 0x55456c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x55456cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_554570:
    // 0x554570: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x554570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_554574:
    // 0x554574: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x554574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_554578:
    // 0x554578: 0x24a5e080  addiu       $a1, $a1, -0x1F80
    ctx->pc = 0x554578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
label_55457c:
    // 0x55457c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x55457cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_554580:
    // 0x554580: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x554580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_554584:
    // 0x554584: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x554584u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_554588:
    // 0x554588: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x554588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55458c:
    // 0x55458c: 0xc0bc284  jal         func_2F0A10
label_554590:
    if (ctx->pc == 0x554590u) {
        ctx->pc = 0x554590u;
            // 0x554590: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x554594u;
        goto label_554594;
    }
    ctx->pc = 0x55458Cu;
    SET_GPR_U32(ctx, 31, 0x554594u);
    ctx->pc = 0x554590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55458Cu;
            // 0x554590: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554594u; }
        if (ctx->pc != 0x554594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554594u; }
        if (ctx->pc != 0x554594u) { return; }
    }
    ctx->pc = 0x554594u;
label_554594:
    // 0x554594: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x554594u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554598:
    // 0x554598: 0x0  nop
    ctx->pc = 0x554598u;
    // NOP
label_55459c:
    // 0x55459c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x55459cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_5545a0:
    // 0x5545a0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x5545a0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5545a4:
    // 0x5545a4: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_5545a8:
    if (ctx->pc == 0x5545A8u) {
        ctx->pc = 0x5545A8u;
            // 0x5545a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5545ACu;
        goto label_5545ac;
    }
    ctx->pc = 0x5545A4u;
    {
        const bool branch_taken_0x5545a4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x5545A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5545A4u;
            // 0x5545a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5545a4) {
            ctx->pc = 0x5545B8u;
            goto label_5545b8;
        }
    }
    ctx->pc = 0x5545ACu;
label_5545ac:
    // 0x5545ac: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x5545acu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5545b0:
    // 0x5545b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_5545b4:
    if (ctx->pc == 0x5545B4u) {
        ctx->pc = 0x5545B4u;
            // 0x5545b4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5545B8u;
        goto label_5545b8;
    }
    ctx->pc = 0x5545B0u;
    {
        const bool branch_taken_0x5545b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5545B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5545B0u;
            // 0x5545b4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5545b0) {
            ctx->pc = 0x5545D4u;
            goto label_5545d4;
        }
    }
    ctx->pc = 0x5545B8u;
label_5545b8:
    // 0x5545b8: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x5545b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_5545bc:
    // 0x5545bc: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x5545bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_5545c0:
    // 0x5545c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5545c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5545c4:
    // 0x5545c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5545c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5545c8:
    // 0x5545c8: 0x0  nop
    ctx->pc = 0x5545c8u;
    // NOP
label_5545cc:
    // 0x5545cc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5545ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5545d0:
    // 0x5545d0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x5545d0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_5545d4:
    // 0x5545d4: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_5545d8:
    if (ctx->pc == 0x5545D8u) {
        ctx->pc = 0x5545D8u;
            // 0x5545d8: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x5545DCu;
        goto label_5545dc;
    }
    ctx->pc = 0x5545D4u;
    {
        const bool branch_taken_0x5545d4 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x5545d4) {
            ctx->pc = 0x5545D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5545D4u;
            // 0x5545d8: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5545E8u;
            goto label_5545e8;
        }
    }
    ctx->pc = 0x5545DCu;
label_5545dc:
    // 0x5545dc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5545dcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5545e0:
    // 0x5545e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_5545e4:
    if (ctx->pc == 0x5545E4u) {
        ctx->pc = 0x5545E4u;
            // 0x5545e4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5545E8u;
        goto label_5545e8;
    }
    ctx->pc = 0x5545E0u;
    {
        const bool branch_taken_0x5545e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5545E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5545E0u;
            // 0x5545e4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5545e0) {
            ctx->pc = 0x554600u;
            goto label_554600;
        }
    }
    ctx->pc = 0x5545E8u;
label_5545e8:
    // 0x5545e8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x5545e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_5545ec:
    // 0x5545ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5545ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5545f0:
    // 0x5545f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5545f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5545f4:
    // 0x5545f4: 0x0  nop
    ctx->pc = 0x5545f4u;
    // NOP
label_5545f8:
    // 0x5545f8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5545f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5545fc:
    // 0x5545fc: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5545fcu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_554600:
    // 0x554600: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x554600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_554604:
    // 0x554604: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x554604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_554608:
    // 0x554608: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x554608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55460c:
    // 0x55460c: 0x24a5e080  addiu       $a1, $a1, -0x1F80
    ctx->pc = 0x55460cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
label_554610:
    // 0x554610: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x554610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_554614:
    // 0x554614: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x554614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_554618:
    // 0x554618: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x554618u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_55461c:
    // 0x55461c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55461cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_554620:
    // 0x554620: 0xc0bc284  jal         func_2F0A10
label_554624:
    if (ctx->pc == 0x554624u) {
        ctx->pc = 0x554624u;
            // 0x554624: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x554628u;
        goto label_554628;
    }
    ctx->pc = 0x554620u;
    SET_GPR_U32(ctx, 31, 0x554628u);
    ctx->pc = 0x554624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x554620u;
            // 0x554624: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554628u; }
        if (ctx->pc != 0x554628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554628u; }
        if (ctx->pc != 0x554628u) { return; }
    }
    ctx->pc = 0x554628u;
label_554628:
    // 0x554628: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x554628u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55462c:
    // 0x55462c: 0x0  nop
    ctx->pc = 0x55462cu;
    // NOP
label_554630:
    // 0x554630: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x554630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_554634:
    // 0x554634: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x554634u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
label_554638:
    // 0x554638: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_55463c:
    if (ctx->pc == 0x55463Cu) {
        ctx->pc = 0x55463Cu;
            // 0x55463c: 0x26b5e0a0  addiu       $s5, $s5, -0x1F60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959264));
        ctx->pc = 0x554640u;
        goto label_554640;
    }
    ctx->pc = 0x554638u;
    {
        const bool branch_taken_0x554638 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x55463Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554638u;
            // 0x55463c: 0x26b5e0a0  addiu       $s5, $s5, -0x1F60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x554638) {
            ctx->pc = 0x55464Cu;
            goto label_55464c;
        }
    }
    ctx->pc = 0x554640u;
label_554640:
    // 0x554640: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x554640u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554644:
    // 0x554644: 0x10000008  b           . + 4 + (0x8 << 2)
label_554648:
    if (ctx->pc == 0x554648u) {
        ctx->pc = 0x554648u;
            // 0x554648: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55464Cu;
        goto label_55464c;
    }
    ctx->pc = 0x554644u;
    {
        const bool branch_taken_0x554644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554644u;
            // 0x554648: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554644) {
            ctx->pc = 0x554668u;
            goto label_554668;
        }
    }
    ctx->pc = 0x55464Cu;
label_55464c:
    // 0x55464c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x55464cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_554650:
    // 0x554650: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x554650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_554654:
    // 0x554654: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554658:
    // 0x554658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55465c:
    // 0x55465c: 0x0  nop
    ctx->pc = 0x55465cu;
    // NOP
label_554660:
    // 0x554660: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x554660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_554664:
    // 0x554664: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x554664u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_554668:
    // 0x554668: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_55466c:
    if (ctx->pc == 0x55466Cu) {
        ctx->pc = 0x55466Cu;
            // 0x55466c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x554670u;
        goto label_554670;
    }
    ctx->pc = 0x554668u;
    {
        const bool branch_taken_0x554668 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x554668) {
            ctx->pc = 0x55466Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554668u;
            // 0x55466c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55467Cu;
            goto label_55467c;
        }
    }
    ctx->pc = 0x554670u;
label_554670:
    // 0x554670: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x554670u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554674:
    // 0x554674: 0x10000007  b           . + 4 + (0x7 << 2)
label_554678:
    if (ctx->pc == 0x554678u) {
        ctx->pc = 0x554678u;
            // 0x554678: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55467Cu;
        goto label_55467c;
    }
    ctx->pc = 0x554674u;
    {
        const bool branch_taken_0x554674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554674u;
            // 0x554678: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554674) {
            ctx->pc = 0x554694u;
            goto label_554694;
        }
    }
    ctx->pc = 0x55467Cu;
label_55467c:
    // 0x55467c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x55467cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_554680:
    // 0x554680: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554684:
    // 0x554684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554688:
    // 0x554688: 0x0  nop
    ctx->pc = 0x554688u;
    // NOP
label_55468c:
    // 0x55468c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55468cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_554690:
    // 0x554690: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x554690u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_554694:
    // 0x554694: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x554694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_554698:
    // 0x554698: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x554698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55469c:
    // 0x55469c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x55469cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5546a0:
    // 0x5546a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x5546a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5546a4:
    // 0x5546a4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x5546a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_5546a8:
    // 0x5546a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5546a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5546ac:
    // 0x5546ac: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x5546acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_5546b0:
    // 0x5546b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5546b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5546b4:
    // 0x5546b4: 0xc0bc284  jal         func_2F0A10
label_5546b8:
    if (ctx->pc == 0x5546B8u) {
        ctx->pc = 0x5546B8u;
            // 0x5546b8: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x5546BCu;
        goto label_5546bc;
    }
    ctx->pc = 0x5546B4u;
    SET_GPR_U32(ctx, 31, 0x5546BCu);
    ctx->pc = 0x5546B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5546B4u;
            // 0x5546b8: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5546BCu; }
        if (ctx->pc != 0x5546BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5546BCu; }
        if (ctx->pc != 0x5546BCu) { return; }
    }
    ctx->pc = 0x5546BCu;
label_5546bc:
    // 0x5546bc: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x5546bcu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5546c0:
    // 0x5546c0: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_5546c4:
    if (ctx->pc == 0x5546C4u) {
        ctx->pc = 0x5546C4u;
            // 0x5546c4: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5546C8u;
        goto label_5546c8;
    }
    ctx->pc = 0x5546C0u;
    {
        const bool branch_taken_0x5546c0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x5546C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5546C0u;
            // 0x5546c4: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5546c0) {
            ctx->pc = 0x5546D4u;
            goto label_5546d4;
        }
    }
    ctx->pc = 0x5546C8u;
label_5546c8:
    // 0x5546c8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x5546c8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5546cc:
    // 0x5546cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_5546d0:
    if (ctx->pc == 0x5546D0u) {
        ctx->pc = 0x5546D0u;
            // 0x5546d0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5546D4u;
        goto label_5546d4;
    }
    ctx->pc = 0x5546CCu;
    {
        const bool branch_taken_0x5546cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5546D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5546CCu;
            // 0x5546d0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5546cc) {
            ctx->pc = 0x5546F0u;
            goto label_5546f0;
        }
    }
    ctx->pc = 0x5546D4u;
label_5546d4:
    // 0x5546d4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x5546d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_5546d8:
    // 0x5546d8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x5546d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_5546dc:
    // 0x5546dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5546dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5546e0:
    // 0x5546e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5546e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5546e4:
    // 0x5546e4: 0x0  nop
    ctx->pc = 0x5546e4u;
    // NOP
label_5546e8:
    // 0x5546e8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5546e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5546ec:
    // 0x5546ec: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x5546ecu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_5546f0:
    // 0x5546f0: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_5546f4:
    if (ctx->pc == 0x5546F4u) {
        ctx->pc = 0x5546F4u;
            // 0x5546f4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x5546F8u;
        goto label_5546f8;
    }
    ctx->pc = 0x5546F0u;
    {
        const bool branch_taken_0x5546f0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x5546f0) {
            ctx->pc = 0x5546F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5546F0u;
            // 0x5546f4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x554704u;
            goto label_554704;
        }
    }
    ctx->pc = 0x5546F8u;
label_5546f8:
    // 0x5546f8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5546f8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5546fc:
    // 0x5546fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_554700:
    if (ctx->pc == 0x554700u) {
        ctx->pc = 0x554700u;
            // 0x554700: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554704u;
        goto label_554704;
    }
    ctx->pc = 0x5546FCu;
    {
        const bool branch_taken_0x5546fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5546FCu;
            // 0x554700: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5546fc) {
            ctx->pc = 0x55471Cu;
            goto label_55471c;
        }
    }
    ctx->pc = 0x554704u;
label_554704:
    // 0x554704: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x554704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_554708:
    // 0x554708: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55470c:
    // 0x55470c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55470cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554710:
    // 0x554710: 0x0  nop
    ctx->pc = 0x554710u;
    // NOP
label_554714:
    // 0x554714: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x554714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_554718:
    // 0x554718: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x554718u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_55471c:
    // 0x55471c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x55471cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_554720:
    // 0x554720: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x554720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_554724:
    // 0x554724: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x554724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_554728:
    // 0x554728: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x554728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55472c:
    // 0x55472c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55472cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_554730:
    // 0x554730: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x554730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_554734:
    // 0x554734: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x554734u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_554738:
    // 0x554738: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x554738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55473c:
    // 0x55473c: 0xc0bc284  jal         func_2F0A10
label_554740:
    if (ctx->pc == 0x554740u) {
        ctx->pc = 0x554740u;
            // 0x554740: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x554744u;
        goto label_554744;
    }
    ctx->pc = 0x55473Cu;
    SET_GPR_U32(ctx, 31, 0x554744u);
    ctx->pc = 0x554740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55473Cu;
            // 0x554740: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554744u; }
        if (ctx->pc != 0x554744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554744u; }
        if (ctx->pc != 0x554744u) { return; }
    }
    ctx->pc = 0x554744u;
label_554744:
    // 0x554744: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x554744u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554748:
    // 0x554748: 0x0  nop
    ctx->pc = 0x554748u;
    // NOP
label_55474c:
    // 0x55474c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x55474cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_554750:
    // 0x554750: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x554750u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_554754:
    // 0x554754: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_554758:
    if (ctx->pc == 0x554758u) {
        ctx->pc = 0x554758u;
            // 0x554758: 0x2694e090  addiu       $s4, $s4, -0x1F70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959248));
        ctx->pc = 0x55475Cu;
        goto label_55475c;
    }
    ctx->pc = 0x554754u;
    {
        const bool branch_taken_0x554754 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x554758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554754u;
            // 0x554758: 0x2694e090  addiu       $s4, $s4, -0x1F70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x554754) {
            ctx->pc = 0x554768u;
            goto label_554768;
        }
    }
    ctx->pc = 0x55475Cu;
label_55475c:
    // 0x55475c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x55475cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554760:
    // 0x554760: 0x10000008  b           . + 4 + (0x8 << 2)
label_554764:
    if (ctx->pc == 0x554764u) {
        ctx->pc = 0x554764u;
            // 0x554764: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554768u;
        goto label_554768;
    }
    ctx->pc = 0x554760u;
    {
        const bool branch_taken_0x554760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554760u;
            // 0x554764: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554760) {
            ctx->pc = 0x554784u;
            goto label_554784;
        }
    }
    ctx->pc = 0x554768u;
label_554768:
    // 0x554768: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x554768u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_55476c:
    // 0x55476c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x55476cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_554770:
    // 0x554770: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554774:
    // 0x554774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554778:
    // 0x554778: 0x0  nop
    ctx->pc = 0x554778u;
    // NOP
label_55477c:
    // 0x55477c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55477cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_554780:
    // 0x554780: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x554780u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_554784:
    // 0x554784: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_554788:
    if (ctx->pc == 0x554788u) {
        ctx->pc = 0x554788u;
            // 0x554788: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x55478Cu;
        goto label_55478c;
    }
    ctx->pc = 0x554784u;
    {
        const bool branch_taken_0x554784 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x554784) {
            ctx->pc = 0x554788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554784u;
            // 0x554788: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x554798u;
            goto label_554798;
        }
    }
    ctx->pc = 0x55478Cu;
label_55478c:
    // 0x55478c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x55478cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554790:
    // 0x554790: 0x10000007  b           . + 4 + (0x7 << 2)
label_554794:
    if (ctx->pc == 0x554794u) {
        ctx->pc = 0x554794u;
            // 0x554794: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554798u;
        goto label_554798;
    }
    ctx->pc = 0x554790u;
    {
        const bool branch_taken_0x554790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554790u;
            // 0x554794: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554790) {
            ctx->pc = 0x5547B0u;
            goto label_5547b0;
        }
    }
    ctx->pc = 0x554798u;
label_554798:
    // 0x554798: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x554798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_55479c:
    // 0x55479c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55479cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5547a0:
    // 0x5547a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5547a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5547a4:
    // 0x5547a4: 0x0  nop
    ctx->pc = 0x5547a4u;
    // NOP
label_5547a8:
    // 0x5547a8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5547a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5547ac:
    // 0x5547ac: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5547acu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5547b0:
    // 0x5547b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5547b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5547b4:
    // 0x5547b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5547b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5547b8:
    // 0x5547b8: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x5547b8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_5547bc:
    // 0x5547bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x5547bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5547c0:
    // 0x5547c0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5547c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5547c4:
    // 0x5547c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5547c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5547c8:
    // 0x5547c8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x5547c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_5547cc:
    // 0x5547cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5547ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5547d0:
    // 0x5547d0: 0xc0bc284  jal         func_2F0A10
label_5547d4:
    if (ctx->pc == 0x5547D4u) {
        ctx->pc = 0x5547D4u;
            // 0x5547d4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x5547D8u;
        goto label_5547d8;
    }
    ctx->pc = 0x5547D0u;
    SET_GPR_U32(ctx, 31, 0x5547D8u);
    ctx->pc = 0x5547D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5547D0u;
            // 0x5547d4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5547D8u; }
        if (ctx->pc != 0x5547D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5547D8u; }
        if (ctx->pc != 0x5547D8u) { return; }
    }
    ctx->pc = 0x5547D8u;
label_5547d8:
    // 0x5547d8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x5547d8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5547dc:
    // 0x5547dc: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_5547e0:
    if (ctx->pc == 0x5547E0u) {
        ctx->pc = 0x5547E0u;
            // 0x5547e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5547E4u;
        goto label_5547e4;
    }
    ctx->pc = 0x5547DCu;
    {
        const bool branch_taken_0x5547dc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x5547E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5547DCu;
            // 0x5547e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5547dc) {
            ctx->pc = 0x5547F0u;
            goto label_5547f0;
        }
    }
    ctx->pc = 0x5547E4u;
label_5547e4:
    // 0x5547e4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x5547e4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5547e8:
    // 0x5547e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_5547ec:
    if (ctx->pc == 0x5547ECu) {
        ctx->pc = 0x5547ECu;
            // 0x5547ec: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5547F0u;
        goto label_5547f0;
    }
    ctx->pc = 0x5547E8u;
    {
        const bool branch_taken_0x5547e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5547ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5547E8u;
            // 0x5547ec: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5547e8) {
            ctx->pc = 0x55480Cu;
            goto label_55480c;
        }
    }
    ctx->pc = 0x5547F0u;
label_5547f0:
    // 0x5547f0: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x5547f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_5547f4:
    // 0x5547f4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x5547f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_5547f8:
    // 0x5547f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5547f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5547fc:
    // 0x5547fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5547fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554800:
    // 0x554800: 0x0  nop
    ctx->pc = 0x554800u;
    // NOP
label_554804:
    // 0x554804: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x554804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_554808:
    // 0x554808: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x554808u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_55480c:
    // 0x55480c: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_554810:
    if (ctx->pc == 0x554810u) {
        ctx->pc = 0x554810u;
            // 0x554810: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x554814u;
        goto label_554814;
    }
    ctx->pc = 0x55480Cu;
    {
        const bool branch_taken_0x55480c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x55480c) {
            ctx->pc = 0x554810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55480Cu;
            // 0x554810: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x554820u;
            goto label_554820;
        }
    }
    ctx->pc = 0x554814u;
label_554814:
    // 0x554814: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x554814u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554818:
    // 0x554818: 0x10000007  b           . + 4 + (0x7 << 2)
label_55481c:
    if (ctx->pc == 0x55481Cu) {
        ctx->pc = 0x55481Cu;
            // 0x55481c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x554820u;
        goto label_554820;
    }
    ctx->pc = 0x554818u;
    {
        const bool branch_taken_0x554818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55481Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554818u;
            // 0x55481c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554818) {
            ctx->pc = 0x554838u;
            goto label_554838;
        }
    }
    ctx->pc = 0x554820u;
label_554820:
    // 0x554820: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x554820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_554824:
    // 0x554824: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554828:
    // 0x554828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55482c:
    // 0x55482c: 0x0  nop
    ctx->pc = 0x55482cu;
    // NOP
label_554830:
    // 0x554830: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x554830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_554834:
    // 0x554834: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x554834u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_554838:
    // 0x554838: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x554838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_55483c:
    // 0x55483c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x55483cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_554840:
    // 0x554840: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x554840u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_554844:
    // 0x554844: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x554844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_554848:
    // 0x554848: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x554848u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_55484c:
    // 0x55484c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_554850:
    // 0x554850: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x554850u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_554854:
    // 0x554854: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x554854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_554858:
    // 0x554858: 0xc0bc284  jal         func_2F0A10
label_55485c:
    if (ctx->pc == 0x55485Cu) {
        ctx->pc = 0x55485Cu;
            // 0x55485c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x554860u;
        goto label_554860;
    }
    ctx->pc = 0x554858u;
    SET_GPR_U32(ctx, 31, 0x554860u);
    ctx->pc = 0x55485Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x554858u;
            // 0x55485c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554860u; }
        if (ctx->pc != 0x554860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554860u; }
        if (ctx->pc != 0x554860u) { return; }
    }
    ctx->pc = 0x554860u;
label_554860:
    // 0x554860: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x554860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_554864:
    // 0x554864: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x554864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_554868:
    // 0x554868: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x554868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55486c:
    // 0x55486c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x55486cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_554870:
    // 0x554870: 0x320f809  jalr        $t9
label_554874:
    if (ctx->pc == 0x554874u) {
        ctx->pc = 0x554878u;
        goto label_554878;
    }
    ctx->pc = 0x554870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x554878u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x554878u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x554878u; }
            if (ctx->pc != 0x554878u) { return; }
        }
        }
    }
    ctx->pc = 0x554878u;
label_554878:
    // 0x554878: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x554878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_55487c:
    // 0x55487c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x55487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_554880:
    // 0x554880: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x554880u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_554884:
    // 0x554884: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x554884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_554888:
    // 0x554888: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x554888u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55488c:
    // 0x55488c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x55488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_554890:
    // 0x554890: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x554890u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_554894:
    // 0x554894: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x554894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_554898:
    // 0x554898: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x554898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55489c:
    // 0x55489c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x55489cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5548a0:
    // 0x5548a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5548a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5548a4:
    // 0x5548a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5548a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5548a8:
    // 0x5548a8: 0x3e00008  jr          $ra
label_5548ac:
    if (ctx->pc == 0x5548ACu) {
        ctx->pc = 0x5548ACu;
            // 0x5548ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x5548B0u;
        goto label_fallthrough_0x5548a8;
    }
    ctx->pc = 0x5548A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5548ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5548A8u;
            // 0x5548ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x5548a8:
    ctx->pc = 0x5548B0u;
}
