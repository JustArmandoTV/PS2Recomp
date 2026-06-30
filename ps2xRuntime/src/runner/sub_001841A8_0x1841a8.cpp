#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001841A8
// Address: 0x1841a8 - 0x184870
void sub_001841A8_0x1841a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001841A8_0x1841a8");
#endif

    switch (ctx->pc) {
        case 0x1841a8u: goto label_1841a8;
        case 0x1841acu: goto label_1841ac;
        case 0x1841b0u: goto label_1841b0;
        case 0x1841b4u: goto label_1841b4;
        case 0x1841b8u: goto label_1841b8;
        case 0x1841bcu: goto label_1841bc;
        case 0x1841c0u: goto label_1841c0;
        case 0x1841c4u: goto label_1841c4;
        case 0x1841c8u: goto label_1841c8;
        case 0x1841ccu: goto label_1841cc;
        case 0x1841d0u: goto label_1841d0;
        case 0x1841d4u: goto label_1841d4;
        case 0x1841d8u: goto label_1841d8;
        case 0x1841dcu: goto label_1841dc;
        case 0x1841e0u: goto label_1841e0;
        case 0x1841e4u: goto label_1841e4;
        case 0x1841e8u: goto label_1841e8;
        case 0x1841ecu: goto label_1841ec;
        case 0x1841f0u: goto label_1841f0;
        case 0x1841f4u: goto label_1841f4;
        case 0x1841f8u: goto label_1841f8;
        case 0x1841fcu: goto label_1841fc;
        case 0x184200u: goto label_184200;
        case 0x184204u: goto label_184204;
        case 0x184208u: goto label_184208;
        case 0x18420cu: goto label_18420c;
        case 0x184210u: goto label_184210;
        case 0x184214u: goto label_184214;
        case 0x184218u: goto label_184218;
        case 0x18421cu: goto label_18421c;
        case 0x184220u: goto label_184220;
        case 0x184224u: goto label_184224;
        case 0x184228u: goto label_184228;
        case 0x18422cu: goto label_18422c;
        case 0x184230u: goto label_184230;
        case 0x184234u: goto label_184234;
        case 0x184238u: goto label_184238;
        case 0x18423cu: goto label_18423c;
        case 0x184240u: goto label_184240;
        case 0x184244u: goto label_184244;
        case 0x184248u: goto label_184248;
        case 0x18424cu: goto label_18424c;
        case 0x184250u: goto label_184250;
        case 0x184254u: goto label_184254;
        case 0x184258u: goto label_184258;
        case 0x18425cu: goto label_18425c;
        case 0x184260u: goto label_184260;
        case 0x184264u: goto label_184264;
        case 0x184268u: goto label_184268;
        case 0x18426cu: goto label_18426c;
        case 0x184270u: goto label_184270;
        case 0x184274u: goto label_184274;
        case 0x184278u: goto label_184278;
        case 0x18427cu: goto label_18427c;
        case 0x184280u: goto label_184280;
        case 0x184284u: goto label_184284;
        case 0x184288u: goto label_184288;
        case 0x18428cu: goto label_18428c;
        case 0x184290u: goto label_184290;
        case 0x184294u: goto label_184294;
        case 0x184298u: goto label_184298;
        case 0x18429cu: goto label_18429c;
        case 0x1842a0u: goto label_1842a0;
        case 0x1842a4u: goto label_1842a4;
        case 0x1842a8u: goto label_1842a8;
        case 0x1842acu: goto label_1842ac;
        case 0x1842b0u: goto label_1842b0;
        case 0x1842b4u: goto label_1842b4;
        case 0x1842b8u: goto label_1842b8;
        case 0x1842bcu: goto label_1842bc;
        case 0x1842c0u: goto label_1842c0;
        case 0x1842c4u: goto label_1842c4;
        case 0x1842c8u: goto label_1842c8;
        case 0x1842ccu: goto label_1842cc;
        case 0x1842d0u: goto label_1842d0;
        case 0x1842d4u: goto label_1842d4;
        case 0x1842d8u: goto label_1842d8;
        case 0x1842dcu: goto label_1842dc;
        case 0x1842e0u: goto label_1842e0;
        case 0x1842e4u: goto label_1842e4;
        case 0x1842e8u: goto label_1842e8;
        case 0x1842ecu: goto label_1842ec;
        case 0x1842f0u: goto label_1842f0;
        case 0x1842f4u: goto label_1842f4;
        case 0x1842f8u: goto label_1842f8;
        case 0x1842fcu: goto label_1842fc;
        case 0x184300u: goto label_184300;
        case 0x184304u: goto label_184304;
        case 0x184308u: goto label_184308;
        case 0x18430cu: goto label_18430c;
        case 0x184310u: goto label_184310;
        case 0x184314u: goto label_184314;
        case 0x184318u: goto label_184318;
        case 0x18431cu: goto label_18431c;
        case 0x184320u: goto label_184320;
        case 0x184324u: goto label_184324;
        case 0x184328u: goto label_184328;
        case 0x18432cu: goto label_18432c;
        case 0x184330u: goto label_184330;
        case 0x184334u: goto label_184334;
        case 0x184338u: goto label_184338;
        case 0x18433cu: goto label_18433c;
        case 0x184340u: goto label_184340;
        case 0x184344u: goto label_184344;
        case 0x184348u: goto label_184348;
        case 0x18434cu: goto label_18434c;
        case 0x184350u: goto label_184350;
        case 0x184354u: goto label_184354;
        case 0x184358u: goto label_184358;
        case 0x18435cu: goto label_18435c;
        case 0x184360u: goto label_184360;
        case 0x184364u: goto label_184364;
        case 0x184368u: goto label_184368;
        case 0x18436cu: goto label_18436c;
        case 0x184370u: goto label_184370;
        case 0x184374u: goto label_184374;
        case 0x184378u: goto label_184378;
        case 0x18437cu: goto label_18437c;
        case 0x184380u: goto label_184380;
        case 0x184384u: goto label_184384;
        case 0x184388u: goto label_184388;
        case 0x18438cu: goto label_18438c;
        case 0x184390u: goto label_184390;
        case 0x184394u: goto label_184394;
        case 0x184398u: goto label_184398;
        case 0x18439cu: goto label_18439c;
        case 0x1843a0u: goto label_1843a0;
        case 0x1843a4u: goto label_1843a4;
        case 0x1843a8u: goto label_1843a8;
        case 0x1843acu: goto label_1843ac;
        case 0x1843b0u: goto label_1843b0;
        case 0x1843b4u: goto label_1843b4;
        case 0x1843b8u: goto label_1843b8;
        case 0x1843bcu: goto label_1843bc;
        case 0x1843c0u: goto label_1843c0;
        case 0x1843c4u: goto label_1843c4;
        case 0x1843c8u: goto label_1843c8;
        case 0x1843ccu: goto label_1843cc;
        case 0x1843d0u: goto label_1843d0;
        case 0x1843d4u: goto label_1843d4;
        case 0x1843d8u: goto label_1843d8;
        case 0x1843dcu: goto label_1843dc;
        case 0x1843e0u: goto label_1843e0;
        case 0x1843e4u: goto label_1843e4;
        case 0x1843e8u: goto label_1843e8;
        case 0x1843ecu: goto label_1843ec;
        case 0x1843f0u: goto label_1843f0;
        case 0x1843f4u: goto label_1843f4;
        case 0x1843f8u: goto label_1843f8;
        case 0x1843fcu: goto label_1843fc;
        case 0x184400u: goto label_184400;
        case 0x184404u: goto label_184404;
        case 0x184408u: goto label_184408;
        case 0x18440cu: goto label_18440c;
        case 0x184410u: goto label_184410;
        case 0x184414u: goto label_184414;
        case 0x184418u: goto label_184418;
        case 0x18441cu: goto label_18441c;
        case 0x184420u: goto label_184420;
        case 0x184424u: goto label_184424;
        case 0x184428u: goto label_184428;
        case 0x18442cu: goto label_18442c;
        case 0x184430u: goto label_184430;
        case 0x184434u: goto label_184434;
        case 0x184438u: goto label_184438;
        case 0x18443cu: goto label_18443c;
        case 0x184440u: goto label_184440;
        case 0x184444u: goto label_184444;
        case 0x184448u: goto label_184448;
        case 0x18444cu: goto label_18444c;
        case 0x184450u: goto label_184450;
        case 0x184454u: goto label_184454;
        case 0x184458u: goto label_184458;
        case 0x18445cu: goto label_18445c;
        case 0x184460u: goto label_184460;
        case 0x184464u: goto label_184464;
        case 0x184468u: goto label_184468;
        case 0x18446cu: goto label_18446c;
        case 0x184470u: goto label_184470;
        case 0x184474u: goto label_184474;
        case 0x184478u: goto label_184478;
        case 0x18447cu: goto label_18447c;
        case 0x184480u: goto label_184480;
        case 0x184484u: goto label_184484;
        case 0x184488u: goto label_184488;
        case 0x18448cu: goto label_18448c;
        case 0x184490u: goto label_184490;
        case 0x184494u: goto label_184494;
        case 0x184498u: goto label_184498;
        case 0x18449cu: goto label_18449c;
        case 0x1844a0u: goto label_1844a0;
        case 0x1844a4u: goto label_1844a4;
        case 0x1844a8u: goto label_1844a8;
        case 0x1844acu: goto label_1844ac;
        case 0x1844b0u: goto label_1844b0;
        case 0x1844b4u: goto label_1844b4;
        case 0x1844b8u: goto label_1844b8;
        case 0x1844bcu: goto label_1844bc;
        case 0x1844c0u: goto label_1844c0;
        case 0x1844c4u: goto label_1844c4;
        case 0x1844c8u: goto label_1844c8;
        case 0x1844ccu: goto label_1844cc;
        case 0x1844d0u: goto label_1844d0;
        case 0x1844d4u: goto label_1844d4;
        case 0x1844d8u: goto label_1844d8;
        case 0x1844dcu: goto label_1844dc;
        case 0x1844e0u: goto label_1844e0;
        case 0x1844e4u: goto label_1844e4;
        case 0x1844e8u: goto label_1844e8;
        case 0x1844ecu: goto label_1844ec;
        case 0x1844f0u: goto label_1844f0;
        case 0x1844f4u: goto label_1844f4;
        case 0x1844f8u: goto label_1844f8;
        case 0x1844fcu: goto label_1844fc;
        case 0x184500u: goto label_184500;
        case 0x184504u: goto label_184504;
        case 0x184508u: goto label_184508;
        case 0x18450cu: goto label_18450c;
        case 0x184510u: goto label_184510;
        case 0x184514u: goto label_184514;
        case 0x184518u: goto label_184518;
        case 0x18451cu: goto label_18451c;
        case 0x184520u: goto label_184520;
        case 0x184524u: goto label_184524;
        case 0x184528u: goto label_184528;
        case 0x18452cu: goto label_18452c;
        case 0x184530u: goto label_184530;
        case 0x184534u: goto label_184534;
        case 0x184538u: goto label_184538;
        case 0x18453cu: goto label_18453c;
        case 0x184540u: goto label_184540;
        case 0x184544u: goto label_184544;
        case 0x184548u: goto label_184548;
        case 0x18454cu: goto label_18454c;
        case 0x184550u: goto label_184550;
        case 0x184554u: goto label_184554;
        case 0x184558u: goto label_184558;
        case 0x18455cu: goto label_18455c;
        case 0x184560u: goto label_184560;
        case 0x184564u: goto label_184564;
        case 0x184568u: goto label_184568;
        case 0x18456cu: goto label_18456c;
        case 0x184570u: goto label_184570;
        case 0x184574u: goto label_184574;
        case 0x184578u: goto label_184578;
        case 0x18457cu: goto label_18457c;
        case 0x184580u: goto label_184580;
        case 0x184584u: goto label_184584;
        case 0x184588u: goto label_184588;
        case 0x18458cu: goto label_18458c;
        case 0x184590u: goto label_184590;
        case 0x184594u: goto label_184594;
        case 0x184598u: goto label_184598;
        case 0x18459cu: goto label_18459c;
        case 0x1845a0u: goto label_1845a0;
        case 0x1845a4u: goto label_1845a4;
        case 0x1845a8u: goto label_1845a8;
        case 0x1845acu: goto label_1845ac;
        case 0x1845b0u: goto label_1845b0;
        case 0x1845b4u: goto label_1845b4;
        case 0x1845b8u: goto label_1845b8;
        case 0x1845bcu: goto label_1845bc;
        case 0x1845c0u: goto label_1845c0;
        case 0x1845c4u: goto label_1845c4;
        case 0x1845c8u: goto label_1845c8;
        case 0x1845ccu: goto label_1845cc;
        case 0x1845d0u: goto label_1845d0;
        case 0x1845d4u: goto label_1845d4;
        case 0x1845d8u: goto label_1845d8;
        case 0x1845dcu: goto label_1845dc;
        case 0x1845e0u: goto label_1845e0;
        case 0x1845e4u: goto label_1845e4;
        case 0x1845e8u: goto label_1845e8;
        case 0x1845ecu: goto label_1845ec;
        case 0x1845f0u: goto label_1845f0;
        case 0x1845f4u: goto label_1845f4;
        case 0x1845f8u: goto label_1845f8;
        case 0x1845fcu: goto label_1845fc;
        case 0x184600u: goto label_184600;
        case 0x184604u: goto label_184604;
        case 0x184608u: goto label_184608;
        case 0x18460cu: goto label_18460c;
        case 0x184610u: goto label_184610;
        case 0x184614u: goto label_184614;
        case 0x184618u: goto label_184618;
        case 0x18461cu: goto label_18461c;
        case 0x184620u: goto label_184620;
        case 0x184624u: goto label_184624;
        case 0x184628u: goto label_184628;
        case 0x18462cu: goto label_18462c;
        case 0x184630u: goto label_184630;
        case 0x184634u: goto label_184634;
        case 0x184638u: goto label_184638;
        case 0x18463cu: goto label_18463c;
        case 0x184640u: goto label_184640;
        case 0x184644u: goto label_184644;
        case 0x184648u: goto label_184648;
        case 0x18464cu: goto label_18464c;
        case 0x184650u: goto label_184650;
        case 0x184654u: goto label_184654;
        case 0x184658u: goto label_184658;
        case 0x18465cu: goto label_18465c;
        case 0x184660u: goto label_184660;
        case 0x184664u: goto label_184664;
        case 0x184668u: goto label_184668;
        case 0x18466cu: goto label_18466c;
        case 0x184670u: goto label_184670;
        case 0x184674u: goto label_184674;
        case 0x184678u: goto label_184678;
        case 0x18467cu: goto label_18467c;
        case 0x184680u: goto label_184680;
        case 0x184684u: goto label_184684;
        case 0x184688u: goto label_184688;
        case 0x18468cu: goto label_18468c;
        case 0x184690u: goto label_184690;
        case 0x184694u: goto label_184694;
        case 0x184698u: goto label_184698;
        case 0x18469cu: goto label_18469c;
        case 0x1846a0u: goto label_1846a0;
        case 0x1846a4u: goto label_1846a4;
        case 0x1846a8u: goto label_1846a8;
        case 0x1846acu: goto label_1846ac;
        case 0x1846b0u: goto label_1846b0;
        case 0x1846b4u: goto label_1846b4;
        case 0x1846b8u: goto label_1846b8;
        case 0x1846bcu: goto label_1846bc;
        case 0x1846c0u: goto label_1846c0;
        case 0x1846c4u: goto label_1846c4;
        case 0x1846c8u: goto label_1846c8;
        case 0x1846ccu: goto label_1846cc;
        case 0x1846d0u: goto label_1846d0;
        case 0x1846d4u: goto label_1846d4;
        case 0x1846d8u: goto label_1846d8;
        case 0x1846dcu: goto label_1846dc;
        case 0x1846e0u: goto label_1846e0;
        case 0x1846e4u: goto label_1846e4;
        case 0x1846e8u: goto label_1846e8;
        case 0x1846ecu: goto label_1846ec;
        case 0x1846f0u: goto label_1846f0;
        case 0x1846f4u: goto label_1846f4;
        case 0x1846f8u: goto label_1846f8;
        case 0x1846fcu: goto label_1846fc;
        case 0x184700u: goto label_184700;
        case 0x184704u: goto label_184704;
        case 0x184708u: goto label_184708;
        case 0x18470cu: goto label_18470c;
        case 0x184710u: goto label_184710;
        case 0x184714u: goto label_184714;
        case 0x184718u: goto label_184718;
        case 0x18471cu: goto label_18471c;
        case 0x184720u: goto label_184720;
        case 0x184724u: goto label_184724;
        case 0x184728u: goto label_184728;
        case 0x18472cu: goto label_18472c;
        case 0x184730u: goto label_184730;
        case 0x184734u: goto label_184734;
        case 0x184738u: goto label_184738;
        case 0x18473cu: goto label_18473c;
        case 0x184740u: goto label_184740;
        case 0x184744u: goto label_184744;
        case 0x184748u: goto label_184748;
        case 0x18474cu: goto label_18474c;
        case 0x184750u: goto label_184750;
        case 0x184754u: goto label_184754;
        case 0x184758u: goto label_184758;
        case 0x18475cu: goto label_18475c;
        case 0x184760u: goto label_184760;
        case 0x184764u: goto label_184764;
        case 0x184768u: goto label_184768;
        case 0x18476cu: goto label_18476c;
        case 0x184770u: goto label_184770;
        case 0x184774u: goto label_184774;
        case 0x184778u: goto label_184778;
        case 0x18477cu: goto label_18477c;
        case 0x184780u: goto label_184780;
        case 0x184784u: goto label_184784;
        case 0x184788u: goto label_184788;
        case 0x18478cu: goto label_18478c;
        case 0x184790u: goto label_184790;
        case 0x184794u: goto label_184794;
        case 0x184798u: goto label_184798;
        case 0x18479cu: goto label_18479c;
        case 0x1847a0u: goto label_1847a0;
        case 0x1847a4u: goto label_1847a4;
        case 0x1847a8u: goto label_1847a8;
        case 0x1847acu: goto label_1847ac;
        case 0x1847b0u: goto label_1847b0;
        case 0x1847b4u: goto label_1847b4;
        case 0x1847b8u: goto label_1847b8;
        case 0x1847bcu: goto label_1847bc;
        case 0x1847c0u: goto label_1847c0;
        case 0x1847c4u: goto label_1847c4;
        case 0x1847c8u: goto label_1847c8;
        case 0x1847ccu: goto label_1847cc;
        case 0x1847d0u: goto label_1847d0;
        case 0x1847d4u: goto label_1847d4;
        case 0x1847d8u: goto label_1847d8;
        case 0x1847dcu: goto label_1847dc;
        case 0x1847e0u: goto label_1847e0;
        case 0x1847e4u: goto label_1847e4;
        case 0x1847e8u: goto label_1847e8;
        case 0x1847ecu: goto label_1847ec;
        case 0x1847f0u: goto label_1847f0;
        case 0x1847f4u: goto label_1847f4;
        case 0x1847f8u: goto label_1847f8;
        case 0x1847fcu: goto label_1847fc;
        case 0x184800u: goto label_184800;
        case 0x184804u: goto label_184804;
        case 0x184808u: goto label_184808;
        case 0x18480cu: goto label_18480c;
        case 0x184810u: goto label_184810;
        case 0x184814u: goto label_184814;
        case 0x184818u: goto label_184818;
        case 0x18481cu: goto label_18481c;
        case 0x184820u: goto label_184820;
        case 0x184824u: goto label_184824;
        case 0x184828u: goto label_184828;
        case 0x18482cu: goto label_18482c;
        case 0x184830u: goto label_184830;
        case 0x184834u: goto label_184834;
        case 0x184838u: goto label_184838;
        case 0x18483cu: goto label_18483c;
        case 0x184840u: goto label_184840;
        case 0x184844u: goto label_184844;
        case 0x184848u: goto label_184848;
        case 0x18484cu: goto label_18484c;
        case 0x184850u: goto label_184850;
        case 0x184854u: goto label_184854;
        case 0x184858u: goto label_184858;
        case 0x18485cu: goto label_18485c;
        case 0x184860u: goto label_184860;
        case 0x184864u: goto label_184864;
        case 0x184868u: goto label_184868;
        case 0x18486cu: goto label_18486c;
        default: break;
    }

    ctx->pc = 0x1841a8u;

label_1841a8:
    // 0x1841a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1841a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1841ac:
    // 0x1841ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1841acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1841b0:
    // 0x1841b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1841b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1841b4:
    // 0x1841b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1841b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1841b8:
    // 0x1841b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1841b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1841bc:
    // 0x1841bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1841bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1841c0:
    // 0x1841c0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1841c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1841c4:
    // 0x1841c4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1841c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1841c8:
    // 0x1841c8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1841c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1841cc:
    // 0x1841cc: 0x82220058  lb          $v0, 0x58($s1)
    ctx->pc = 0x1841ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_1841d0:
    // 0x1841d0: 0x1443005d  bne         $v0, $v1, . + 4 + (0x5D << 2)
label_1841d4:
    if (ctx->pc == 0x1841D4u) {
        ctx->pc = 0x1841D4u;
            // 0x1841d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1841D8u;
        goto label_1841d8;
    }
    ctx->pc = 0x1841D0u;
    {
        const bool branch_taken_0x1841d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1841D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1841D0u;
            // 0x1841d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1841d0) {
            ctx->pc = 0x184348u;
            goto label_184348;
        }
    }
    ctx->pc = 0x1841D8u;
label_1841d8:
    // 0x1841d8: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x1841d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_1841dc:
    // 0x1841dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1841dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1841e0:
    // 0x1841e0: 0x92230052  lbu         $v1, 0x52($s1)
    ctx->pc = 0x1841e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_1841e4:
    // 0x1841e4: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_1841e8:
    if (ctx->pc == 0x1841E8u) {
        ctx->pc = 0x1841E8u;
            // 0x1841e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1841ECu;
        goto label_1841ec;
    }
    ctx->pc = 0x1841E4u;
    {
        const bool branch_taken_0x1841e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1841E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1841E4u;
            // 0x1841e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1841e4) {
            ctx->pc = 0x184248u;
            goto label_184248;
        }
    }
    ctx->pc = 0x1841ECu;
label_1841ec:
    // 0x1841ec: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1841ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1841f0:
    // 0x1841f0: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x1841f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1841f4:
    // 0x1841f4: 0x0  nop
    ctx->pc = 0x1841f4u;
    // NOP
label_1841f8:
    // 0x1841f8: 0xc05ef26  jal         func_17BC98
label_1841fc:
    if (ctx->pc == 0x1841FCu) {
        ctx->pc = 0x1841FCu;
            // 0x1841fc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x184200u;
        goto label_184200;
    }
    ctx->pc = 0x1841F8u;
    SET_GPR_U32(ctx, 31, 0x184200u);
    ctx->pc = 0x1841FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1841F8u;
            // 0x1841fc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BC98u;
    if (runtime->hasFunction(0x17BC98u)) {
        auto targetFn = runtime->lookupFunction(0x17BC98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184200u; }
        if (ctx->pc != 0x184200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BC98_0x17bc98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184200u; }
        if (ctx->pc != 0x184200u) { return; }
    }
    ctx->pc = 0x184200u;
label_184200:
    // 0x184200: 0x1054000b  beq         $v0, $s4, . + 4 + (0xB << 2)
label_184204:
    if (ctx->pc == 0x184204u) {
        ctx->pc = 0x184204u;
            // 0x184204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184208u;
        goto label_184208;
    }
    ctx->pc = 0x184200u;
    {
        const bool branch_taken_0x184200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x184204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184200u;
            // 0x184204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184200) {
            ctx->pc = 0x184230u;
            goto label_184230;
        }
    }
    ctx->pc = 0x184208u;
label_184208:
    // 0x184208: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x184208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18420c:
    // 0x18420c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x18420cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_184210:
    // 0x184210: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x184210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_184214:
    // 0x184214: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x184214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_184218:
    // 0x184218: 0x40f809  jalr        $v0
label_18421c:
    if (ctx->pc == 0x18421Cu) {
        ctx->pc = 0x184220u;
        goto label_184220;
    }
    ctx->pc = 0x184218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184220u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x184220u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184220u; }
            if (ctx->pc != 0x184220u) { return; }
        }
        }
    }
    ctx->pc = 0x184220u;
label_184220:
    // 0x184220: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x184220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_184224:
    // 0x184224: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x184224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_184228:
    // 0x184228: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x184228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_18422c:
    // 0x18422c: 0x82900a  movz        $s2, $a0, $v0
    ctx->pc = 0x18422cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_184230:
    // 0x184230: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x184230u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_184234:
    // 0x184234: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x184234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_184238:
    // 0x184238: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x184238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_18423c:
    // 0x18423c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x18423cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_184240:
    // 0x184240: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_184244:
    if (ctx->pc == 0x184244u) {
        ctx->pc = 0x184244u;
            // 0x184244: 0x92230052  lbu         $v1, 0x52($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->pc = 0x184248u;
        goto label_184248;
    }
    ctx->pc = 0x184240u;
    {
        const bool branch_taken_0x184240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184240u;
            // 0x184244: 0x92230052  lbu         $v1, 0x52($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184240) {
            ctx->pc = 0x1841F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1841f8;
        }
    }
    ctx->pc = 0x184248u;
label_184248:
    // 0x184248: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x184248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_18424c:
    // 0x18424c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x18424cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_184250:
    // 0x184250: 0x1642003d  bne         $s2, $v0, . + 4 + (0x3D << 2)
label_184254:
    if (ctx->pc == 0x184254u) {
        ctx->pc = 0x184254u;
            // 0x184254: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x184258u;
        goto label_184258;
    }
    ctx->pc = 0x184250u;
    {
        const bool branch_taken_0x184250 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x184254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184250u;
            // 0x184254: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184250) {
            ctx->pc = 0x184348u;
            goto label_184348;
        }
    }
    ctx->pc = 0x184258u;
label_184258:
    // 0x184258: 0x1a40003b  blez        $s2, . + 4 + (0x3B << 2)
label_18425c:
    if (ctx->pc == 0x18425Cu) {
        ctx->pc = 0x18425Cu;
            // 0x18425c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184260u;
        goto label_184260;
    }
    ctx->pc = 0x184258u;
    {
        const bool branch_taken_0x184258 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x18425Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184258u;
            // 0x18425c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184258) {
            ctx->pc = 0x184348u;
            goto label_184348;
        }
    }
    ctx->pc = 0x184260u;
label_184260:
    // 0x184260: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x184260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_184264:
    // 0x184264: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x184264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_184268:
    // 0x184268: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x184268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18426c:
    // 0x18426c: 0x0  nop
    ctx->pc = 0x18426cu;
    // NOP
label_184270:
    // 0x184270: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x184270u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_184274:
    // 0x184274: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x184274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_184278:
    // 0x184278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x184278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18427c:
    // 0x18427c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x18427cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_184280:
    // 0x184280: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x184280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_184284:
    // 0x184284: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x184284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_184288:
    // 0x184288: 0x40f809  jalr        $v0
label_18428c:
    if (ctx->pc == 0x18428Cu) {
        ctx->pc = 0x18428Cu;
            // 0x18428c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x184290u;
        goto label_184290;
    }
    ctx->pc = 0x184288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184290u);
        ctx->pc = 0x18428Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184288u;
            // 0x18428c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x184290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184290u; }
            if (ctx->pc != 0x184290u) { return; }
        }
        }
    }
    ctx->pc = 0x184290u;
label_184290:
    // 0x184290: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x184290u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_184294:
    // 0x184294: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x184294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_184298:
    // 0x184298: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x184298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_18429c:
    // 0x18429c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18429cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1842a0:
    // 0x1842a0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1842a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1842a4:
    // 0x1842a4: 0x40f809  jalr        $v0
label_1842a8:
    if (ctx->pc == 0x1842A8u) {
        ctx->pc = 0x1842A8u;
            // 0x1842a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1842ACu;
        goto label_1842ac;
    }
    ctx->pc = 0x1842A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1842ACu);
        ctx->pc = 0x1842A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1842A4u;
            // 0x1842a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1842ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1842ACu; }
            if (ctx->pc != 0x1842ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1842ACu;
label_1842ac:
    // 0x1842ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1842acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1842b0:
    // 0x1842b0: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1842b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1842b4:
    // 0x1842b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1842b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1842b8:
    // 0x1842b8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1842b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1842bc:
    // 0x1842bc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1842bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1842c0:
    // 0x1842c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1842c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1842c4:
    // 0x1842c4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1842c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1842c8:
    // 0x1842c8: 0x40f809  jalr        $v0
label_1842cc:
    if (ctx->pc == 0x1842CCu) {
        ctx->pc = 0x1842CCu;
            // 0x1842cc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1842D0u;
        goto label_1842d0;
    }
    ctx->pc = 0x1842C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1842D0u);
        ctx->pc = 0x1842CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1842C8u;
            // 0x1842cc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1842D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1842D0u; }
            if (ctx->pc != 0x1842D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1842D0u;
label_1842d0:
    // 0x1842d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1842d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1842d4:
    // 0x1842d4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1842d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1842d8:
    // 0x1842d8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1842d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1842dc:
    // 0x1842dc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1842e0:
    if (ctx->pc == 0x1842E0u) {
        ctx->pc = 0x1842E0u;
            // 0x1842e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1842E4u;
        goto label_1842e4;
    }
    ctx->pc = 0x1842DCu;
    {
        const bool branch_taken_0x1842dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1842E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1842DCu;
            // 0x1842e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1842dc) {
            ctx->pc = 0x184308u;
            goto label_184308;
        }
    }
    ctx->pc = 0x1842E4u;
label_1842e4:
    // 0x1842e4: 0x0  nop
    ctx->pc = 0x1842e4u;
    // NOP
label_1842e8:
    // 0x1842e8: 0x0  nop
    ctx->pc = 0x1842e8u;
    // NOP
label_1842ec:
    // 0x1842ec: 0x0  nop
    ctx->pc = 0x1842ecu;
    // NOP
label_1842f0:
    // 0x1842f0: 0x0  nop
    ctx->pc = 0x1842f0u;
    // NOP
label_1842f4:
    // 0x1842f4: 0x0  nop
    ctx->pc = 0x1842f4u;
    // NOP
label_1842f8:
    // 0x1842f8: 0x0  nop
    ctx->pc = 0x1842f8u;
    // NOP
label_1842fc:
    // 0x1842fc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_184300:
    if (ctx->pc == 0x184300u) {
        ctx->pc = 0x184304u;
        goto label_184304;
    }
    ctx->pc = 0x1842FCu;
    {
        const bool branch_taken_0x1842fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1842fc) {
            ctx->pc = 0x1842E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1842e8;
        }
    }
    ctx->pc = 0x184304u;
label_184304:
    // 0x184304: 0x0  nop
    ctx->pc = 0x184304u;
    // NOP
label_184308:
    // 0x184308: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x184308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18430c:
    // 0x18430c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x18430cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_184310:
    // 0x184310: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x184310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_184314:
    // 0x184314: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x184314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_184318:
    // 0x184318: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x184318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18431c:
    // 0x18431c: 0x40f809  jalr        $v0
label_184320:
    if (ctx->pc == 0x184320u) {
        ctx->pc = 0x184320u;
            // 0x184320: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x184324u;
        goto label_184324;
    }
    ctx->pc = 0x18431Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184324u);
        ctx->pc = 0x184320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18431Cu;
            // 0x184320: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x184324u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184324u; }
            if (ctx->pc != 0x184324u) { return; }
        }
        }
    }
    ctx->pc = 0x184324u;
label_184324:
    // 0x184324: 0xa220005b  sb          $zero, 0x5B($s1)
    ctx->pc = 0x184324u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
label_184328:
    // 0x184328: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x184328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_18432c:
    // 0x18432c: 0xc05efbe  jal         func_17BEF8
label_184330:
    if (ctx->pc == 0x184330u) {
        ctx->pc = 0x184330u;
            // 0x184330: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x184334u;
        goto label_184334;
    }
    ctx->pc = 0x18432Cu;
    SET_GPR_U32(ctx, 31, 0x184334u);
    ctx->pc = 0x184330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18432Cu;
            // 0x184330: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BEF8u;
    if (runtime->hasFunction(0x17BEF8u)) {
        auto targetFn = runtime->lookupFunction(0x17BEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184334u; }
        if (ctx->pc != 0x184334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BEF8_0x17bef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184334u; }
        if (ctx->pc != 0x184334u) { return; }
    }
    ctx->pc = 0x184334u;
label_184334:
    // 0x184334: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x184334u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_184338:
    // 0x184338: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x184338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18433c:
    // 0x18433c: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
label_184340:
    if (ctx->pc == 0x184340u) {
        ctx->pc = 0x184340u;
            // 0x184340: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x184344u;
        goto label_184344;
    }
    ctx->pc = 0x18433Cu;
    {
        const bool branch_taken_0x18433c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18433c) {
            ctx->pc = 0x184340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18433Cu;
            // 0x184340: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x184270u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_184270;
        }
    }
    ctx->pc = 0x184344u;
label_184344:
    // 0x184344: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x184344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_184348:
    // 0x184348: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x184348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18434c:
    // 0x18434c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x18434cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_184350:
    // 0x184350: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x184350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_184354:
    // 0x184354: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x184354u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_184358:
    // 0x184358: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x184358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_18435c:
    // 0x18435c: 0x3e00008  jr          $ra
label_184360:
    if (ctx->pc == 0x184360u) {
        ctx->pc = 0x184360u;
            // 0x184360: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x184364u;
        goto label_184364;
    }
    ctx->pc = 0x18435Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18435Cu;
            // 0x184360: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184364u;
label_184364:
    // 0x184364: 0x0  nop
    ctx->pc = 0x184364u;
    // NOP
label_184368:
    // 0x184368: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18436c:
    // 0x18436c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18436cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_184370:
    // 0x184370: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_184374:
    // 0x184374: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x184374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184378:
    // 0x184378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18437c:
    // 0x18437c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_184380:
    // 0x184380: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x184380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_184384:
    // 0x184384: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_184388:
    if (ctx->pc == 0x184388u) {
        ctx->pc = 0x184388u;
            // 0x184388: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x18438Cu;
        goto label_18438c;
    }
    ctx->pc = 0x184384u;
    {
        const bool branch_taken_0x184384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x184388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184384u;
            // 0x184388: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184384) {
            ctx->pc = 0x18439Cu;
            goto label_18439c;
        }
    }
    ctx->pc = 0x18438Cu;
label_18438c:
    // 0x18438c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18438cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_184390:
    // 0x184390: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x184390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_184394:
    // 0x184394: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
label_184398:
    if (ctx->pc == 0x184398u) {
        ctx->pc = 0x184398u;
            // 0x184398: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x18439Cu;
        goto label_18439c;
    }
    ctx->pc = 0x184394u;
    {
        const bool branch_taken_0x184394 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x184398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184394u;
            // 0x184398: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184394) {
            ctx->pc = 0x1843F8u;
            goto label_1843f8;
        }
    }
    ctx->pc = 0x18439Cu;
label_18439c:
    // 0x18439c: 0xc061256  jal         func_184958
label_1843a0:
    if (ctx->pc == 0x1843A0u) {
        ctx->pc = 0x1843A0u;
            // 0x1843a0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1843A4u;
        goto label_1843a4;
    }
    ctx->pc = 0x18439Cu;
    SET_GPR_U32(ctx, 31, 0x1843A4u);
    ctx->pc = 0x1843A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18439Cu;
            // 0x1843a0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184958u;
    if (runtime->hasFunction(0x184958u)) {
        auto targetFn = runtime->lookupFunction(0x184958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843A4u; }
        if (ctx->pc != 0x1843A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184958_0x184958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843A4u; }
        if (ctx->pc != 0x1843A4u) { return; }
    }
    ctx->pc = 0x1843A4u;
label_1843a4:
    // 0x1843a4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1843a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1843a8:
    // 0x1843a8: 0x2450f330  addiu       $s0, $v0, -0xCD0
    ctx->pc = 0x1843a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964016));
label_1843ac:
    // 0x1843ac: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1843acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1843b0:
    // 0x1843b0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1843b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1843b4:
    // 0x1843b4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
label_1843b8:
    if (ctx->pc == 0x1843B8u) {
        ctx->pc = 0x1843B8u;
            // 0x1843b8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x1843BCu;
        goto label_1843bc;
    }
    ctx->pc = 0x1843B4u;
    {
        const bool branch_taken_0x1843b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1843b4) {
            ctx->pc = 0x1843B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1843B4u;
            // 0x1843b8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1843C8u;
            goto label_1843c8;
        }
    }
    ctx->pc = 0x1843BCu;
label_1843bc:
    // 0x1843bc: 0xc06106a  jal         func_1841A8
label_1843c0:
    if (ctx->pc == 0x1843C0u) {
        ctx->pc = 0x1843C0u;
            // 0x1843c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1843C4u;
        goto label_1843c4;
    }
    ctx->pc = 0x1843BCu;
    SET_GPR_U32(ctx, 31, 0x1843C4u);
    ctx->pc = 0x1843C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1843BCu;
            // 0x1843c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1841A8u;
    goto label_1841a8;
    ctx->pc = 0x1843C4u;
label_1843c4:
    // 0x1843c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1843c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1843c8:
    // 0x1843c8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
label_1843cc:
    if (ctx->pc == 0x1843CCu) {
        ctx->pc = 0x1843CCu;
            // 0x1843cc: 0x26100064  addiu       $s0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->pc = 0x1843D0u;
        goto label_1843d0;
    }
    ctx->pc = 0x1843C8u;
    {
        const bool branch_taken_0x1843c8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1843CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1843C8u;
            // 0x1843cc: 0x26100064  addiu       $s0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1843c8) {
            ctx->pc = 0x1843B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1843b0;
        }
    }
    ctx->pc = 0x1843D0u;
label_1843d0:
    // 0x1843d0: 0xc06125c  jal         func_184970
label_1843d4:
    if (ctx->pc == 0x1843D4u) {
        ctx->pc = 0x1843D8u;
        goto label_1843d8;
    }
    ctx->pc = 0x1843D0u;
    SET_GPR_U32(ctx, 31, 0x1843D8u);
    ctx->pc = 0x184970u;
    if (runtime->hasFunction(0x184970u)) {
        auto targetFn = runtime->lookupFunction(0x184970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843D8u; }
        if (ctx->pc != 0x1843D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184970_0x184970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843D8u; }
        if (ctx->pc != 0x1843D8u) { return; }
    }
    ctx->pc = 0x1843D8u;
label_1843d8:
    // 0x1843d8: 0xc05ef28  jal         func_17BCA0
label_1843dc:
    if (ctx->pc == 0x1843DCu) {
        ctx->pc = 0x1843E0u;
        goto label_1843e0;
    }
    ctx->pc = 0x1843D8u;
    SET_GPR_U32(ctx, 31, 0x1843E0u);
    ctx->pc = 0x17BCA0u;
    if (runtime->hasFunction(0x17BCA0u)) {
        auto targetFn = runtime->lookupFunction(0x17BCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843E0u; }
        if (ctx->pc != 0x1843E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017BCA0_0x17bca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843E0u; }
        if (ctx->pc != 0x1843E0u) { return; }
    }
    ctx->pc = 0x1843E0u;
label_1843e0:
    // 0x1843e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1843e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1843e4:
    // 0x1843e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1843e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1843e8:
    // 0x1843e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1843e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1843ec:
    // 0x1843ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1843ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1843f0:
    // 0x1843f0: 0x8061e5a  j           func_187968
label_1843f4:
    if (ctx->pc == 0x1843F4u) {
        ctx->pc = 0x1843F4u;
            // 0x1843f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1843F8u;
        goto label_1843f8;
    }
    ctx->pc = 0x1843F0u;
    ctx->pc = 0x1843F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1843F0u;
            // 0x1843f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187968u;
    {
        auto targetFn = runtime->lookupFunction(0x187968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1843F8u;
label_1843f8:
    // 0x1843f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1843f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1843fc:
    // 0x1843fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1843fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_184400:
    // 0x184400: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x184400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_184404:
    // 0x184404: 0x3e00008  jr          $ra
label_184408:
    if (ctx->pc == 0x184408u) {
        ctx->pc = 0x184408u;
            // 0x184408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x18440Cu;
        goto label_18440c;
    }
    ctx->pc = 0x184404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184404u;
            // 0x184408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18440Cu;
label_18440c:
    // 0x18440c: 0x0  nop
    ctx->pc = 0x18440cu;
    // NOP
label_184410:
    // 0x184410: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_184414:
    // 0x184414: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_184418:
    // 0x184418: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_18441c:
    // 0x18441c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18441cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184420:
    // 0x184420: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_184424:
    if (ctx->pc == 0x184424u) {
        ctx->pc = 0x184424u;
            // 0x184424: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x184428u;
        goto label_184428;
    }
    ctx->pc = 0x184420u;
    {
        const bool branch_taken_0x184420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x184424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184420u;
            // 0x184424: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184420) {
            ctx->pc = 0x184438u;
            goto label_184438;
        }
    }
    ctx->pc = 0x184428u;
label_184428:
    // 0x184428: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18442c:
    // 0x18442c: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x18442cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_184430:
    // 0x184430: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_184434:
    if (ctx->pc == 0x184434u) {
        ctx->pc = 0x184434u;
            // 0x184434: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x184438u;
        goto label_184438;
    }
    ctx->pc = 0x184430u;
    {
        const bool branch_taken_0x184430 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x184434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184430u;
            // 0x184434: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184430) {
            ctx->pc = 0x184450u;
            goto label_184450;
        }
    }
    ctx->pc = 0x184438u;
label_184438:
    // 0x184438: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_18443c:
    // 0x18443c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18443cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184440:
    // 0x184440: 0x248477c8  addiu       $a0, $a0, 0x77C8
    ctx->pc = 0x184440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30664));
label_184444:
    // 0x184444: 0x805b99c  j           func_16E670
label_184448:
    if (ctx->pc == 0x184448u) {
        ctx->pc = 0x184448u;
            // 0x184448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18444Cu;
        goto label_18444c;
    }
    ctx->pc = 0x184444u;
    ctx->pc = 0x184448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184444u;
            // 0x184448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016E670_0x16e670(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18444Cu;
label_18444c:
    // 0x18444c: 0x0  nop
    ctx->pc = 0x18444cu;
    // NOP
label_184450:
    // 0x184450: 0x3e00008  jr          $ra
label_184454:
    if (ctx->pc == 0x184454u) {
        ctx->pc = 0x184454u;
            // 0x184454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x184458u;
        goto label_184458;
    }
    ctx->pc = 0x184450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184450u;
            // 0x184454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184458u;
label_184458:
    // 0x184458: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18445c:
    // 0x18445c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18445cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184460:
    // 0x184460: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_184464:
    // 0x184464: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
label_184468:
    if (ctx->pc == 0x184468u) {
        ctx->pc = 0x184468u;
            // 0x184468: 0xa0850052  sb          $a1, 0x52($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x18446Cu;
        goto label_18446c;
    }
    ctx->pc = 0x184464u;
    {
        const bool branch_taken_0x184464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x184464) {
            ctx->pc = 0x184468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x184464u;
            // 0x184468: 0xa0850052  sb          $a1, 0x52($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18447Cu;
            goto label_18447c;
        }
    }
    ctx->pc = 0x18446Cu;
label_18446c:
    // 0x18446c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18446cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_184470:
    // 0x184470: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x184470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_184474:
    // 0x184474: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
label_184478:
    if (ctx->pc == 0x184478u) {
        ctx->pc = 0x184478u;
            // 0x184478: 0xa0850052  sb          $a1, 0x52($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x18447Cu;
        goto label_18447c;
    }
    ctx->pc = 0x184474u;
    {
        const bool branch_taken_0x184474 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x184474) {
            ctx->pc = 0x184478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x184474u;
            // 0x184478: 0xa0850052  sb          $a1, 0x52($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18447Cu;
            goto label_18447c;
        }
    }
    ctx->pc = 0x18447Cu;
label_18447c:
    // 0x18447c: 0x3e00008  jr          $ra
label_184480:
    if (ctx->pc == 0x184480u) {
        ctx->pc = 0x184484u;
        goto label_184484;
    }
    ctx->pc = 0x18447Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184484u;
label_184484:
    // 0x184484: 0x0  nop
    ctx->pc = 0x184484u;
    // NOP
label_184488:
    // 0x184488: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18448c:
    // 0x18448c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18448cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_184490:
    // 0x184490: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_184494:
    // 0x184494: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x184494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184498:
    // 0x184498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18449c:
    // 0x18449c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18449cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1844a0:
    // 0x1844a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1844a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1844a4:
    // 0x1844a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1844a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1844a8:
    // 0x1844a8: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
label_1844ac:
    if (ctx->pc == 0x1844ACu) {
        ctx->pc = 0x1844ACu;
            // 0x1844ac: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1844B0u;
        goto label_1844b0;
    }
    ctx->pc = 0x1844A8u;
    {
        const bool branch_taken_0x1844a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1844ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1844A8u;
            // 0x1844ac: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844a8) {
            ctx->pc = 0x1844C0u;
            goto label_1844c0;
        }
    }
    ctx->pc = 0x1844B0u;
label_1844b0:
    // 0x1844b0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1844b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1844b4:
    // 0x1844b4: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x1844b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_1844b8:
    // 0x1844b8: 0x5860000d  blezl       $v1, . + 4 + (0xD << 2)
label_1844bc:
    if (ctx->pc == 0x1844BCu) {
        ctx->pc = 0x1844BCu;
            // 0x1844bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1844C0u;
        goto label_1844c0;
    }
    ctx->pc = 0x1844B8u;
    {
        const bool branch_taken_0x1844b8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1844b8) {
            ctx->pc = 0x1844BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1844B8u;
            // 0x1844bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1844F0u;
            goto label_1844f0;
        }
    }
    ctx->pc = 0x1844C0u;
label_1844c0:
    // 0x1844c0: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x1844c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_1844c4:
    // 0x1844c4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_1844c8:
    if (ctx->pc == 0x1844C8u) {
        ctx->pc = 0x1844C8u;
            // 0x1844c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1844CCu;
        goto label_1844cc;
    }
    ctx->pc = 0x1844C4u;
    {
        const bool branch_taken_0x1844c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1844c4) {
            ctx->pc = 0x1844C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1844C4u;
            // 0x1844c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1844CCu;
            goto label_1844cc;
        }
    }
    ctx->pc = 0x1844CCu;
label_1844cc:
    // 0x1844cc: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1844ccu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1844d0:
    // 0x1844d0: 0x1810  mfhi        $v1
    ctx->pc = 0x1844d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1844d4:
    // 0x1844d4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1844d8:
    if (ctx->pc == 0x1844D8u) {
        ctx->pc = 0x1844D8u;
            // 0x1844d8: 0xae300030  sw          $s0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
        ctx->pc = 0x1844DCu;
        goto label_1844dc;
    }
    ctx->pc = 0x1844D4u;
    {
        const bool branch_taken_0x1844d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1844d4) {
            ctx->pc = 0x1844D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1844D4u;
            // 0x1844d8: 0xae300030  sw          $s0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1844ECu;
            goto label_1844ec;
        }
    }
    ctx->pc = 0x1844DCu;
label_1844dc:
    // 0x1844dc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1844dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1844e0:
    // 0x1844e0: 0xc05b97e  jal         func_16E5F8
label_1844e4:
    if (ctx->pc == 0x1844E4u) {
        ctx->pc = 0x1844E4u;
            // 0x1844e4: 0x248477f0  addiu       $a0, $a0, 0x77F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30704));
        ctx->pc = 0x1844E8u;
        goto label_1844e8;
    }
    ctx->pc = 0x1844E0u;
    SET_GPR_U32(ctx, 31, 0x1844E8u);
    ctx->pc = 0x1844E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1844E0u;
            // 0x1844e4: 0x248477f0  addiu       $a0, $a0, 0x77F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844E8u; }
        if (ctx->pc != 0x1844E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844E8u; }
        if (ctx->pc != 0x1844E8u) { return; }
    }
    ctx->pc = 0x1844E8u;
label_1844e8:
    // 0x1844e8: 0xae300030  sw          $s0, 0x30($s1)
    ctx->pc = 0x1844e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
label_1844ec:
    // 0x1844ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1844ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1844f0:
    // 0x1844f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1844f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1844f4:
    // 0x1844f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1844f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1844f8:
    // 0x1844f8: 0x3e00008  jr          $ra
label_1844fc:
    if (ctx->pc == 0x1844FCu) {
        ctx->pc = 0x1844FCu;
            // 0x1844fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x184500u;
        goto label_184500;
    }
    ctx->pc = 0x1844F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1844FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1844F8u;
            // 0x1844fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184500u;
label_184500:
    // 0x184500: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_184504:
    // 0x184504: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x184504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184508:
    // 0x184508: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_18450c:
    // 0x18450c: 0x5102a  slt         $v0, $zero, $a1
    ctx->pc = 0x18450cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_184510:
    // 0x184510: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
label_184514:
    if (ctx->pc == 0x184514u) {
        ctx->pc = 0x184514u;
            // 0x184514: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->pc = 0x184518u;
        goto label_184518;
    }
    ctx->pc = 0x184510u;
    {
        const bool branch_taken_0x184510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x184514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184510u;
            // 0x184514: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184510) {
            ctx->pc = 0x184528u;
            goto label_184528;
        }
    }
    ctx->pc = 0x184518u;
label_184518:
    // 0x184518: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18451c:
    // 0x18451c: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x18451cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_184520:
    // 0x184520: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_184524:
    if (ctx->pc == 0x184524u) {
        ctx->pc = 0x184528u;
        goto label_184528;
    }
    ctx->pc = 0x184520u;
    {
        const bool branch_taken_0x184520 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x184520) {
            ctx->pc = 0x184538u;
            goto label_184538;
        }
    }
    ctx->pc = 0x184528u;
label_184528:
    // 0x184528: 0x28a3fc19  slti        $v1, $a1, -0x3E7
    ctx->pc = 0x184528u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966297) ? 1 : 0);
label_18452c:
    // 0x18452c: 0x2402fc19  addiu       $v0, $zero, -0x3E7
    ctx->pc = 0x18452cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
label_184530:
    // 0x184530: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x184530u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_184534:
    // 0x184534: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x184534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
label_184538:
    // 0x184538: 0x3e00008  jr          $ra
label_18453c:
    if (ctx->pc == 0x18453Cu) {
        ctx->pc = 0x184540u;
        goto label_184540;
    }
    ctx->pc = 0x184538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184540u;
label_184540:
    // 0x184540: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_184544:
    // 0x184544: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x184544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184548:
    // 0x184548: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_18454c:
    // 0x18454c: 0x28c9fff1  slti        $t1, $a2, -0xF
    ctx->pc = 0x18454cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967281) ? 1 : 0);
label_184550:
    // 0x184550: 0x14670005  bne         $v1, $a3, . + 4 + (0x5 << 2)
label_184554:
    if (ctx->pc == 0x184554u) {
        ctx->pc = 0x184554u;
            // 0x184554: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184558u;
        goto label_184558;
    }
    ctx->pc = 0x184550u;
    {
        const bool branch_taken_0x184550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x184554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184550u;
            // 0x184554: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184550) {
            ctx->pc = 0x184568u;
            goto label_184568;
        }
    }
    ctx->pc = 0x184558u;
label_184558:
    // 0x184558: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18455c:
    // 0x18455c: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x18455cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_184560:
    // 0x184560: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
label_184564:
    if (ctx->pc == 0x184564u) {
        ctx->pc = 0x184568u;
        goto label_184568;
    }
    ctx->pc = 0x184560u;
    {
        const bool branch_taken_0x184560 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x184560) {
            ctx->pc = 0x184588u;
            goto label_184588;
        }
    }
    ctx->pc = 0x184568u;
label_184568:
    // 0x184568: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x184568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_18456c:
    // 0x18456c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x18456cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_184570:
    // 0x184570: 0xc9100a  movz        $v0, $a2, $t1
    ctx->pc = 0x184570u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_184574:
    // 0x184574: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x184574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_184578:
    // 0x184578: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x184578u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_18457c:
    // 0x18457c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x18457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_184580:
    // 0x184580: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x184580u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_184584:
    // 0x184584: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x184584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_184588:
    // 0x184588: 0x3e00008  jr          $ra
label_18458c:
    if (ctx->pc == 0x18458Cu) {
        ctx->pc = 0x184590u;
        goto label_184590;
    }
    ctx->pc = 0x184588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184590u;
label_184590:
    // 0x184590: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_184594:
    // 0x184594: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x184594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184598:
    // 0x184598: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_18459c:
    // 0x18459c: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
label_1845a0:
    if (ctx->pc == 0x1845A0u) {
        ctx->pc = 0x1845A0u;
            // 0x1845a0: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->pc = 0x1845A4u;
        goto label_1845a4;
    }
    ctx->pc = 0x18459Cu;
    {
        const bool branch_taken_0x18459c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x18459c) {
            ctx->pc = 0x1845A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18459Cu;
            // 0x1845a0: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1845B4u;
            goto label_1845b4;
        }
    }
    ctx->pc = 0x1845A4u;
label_1845a4:
    // 0x1845a4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1845a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1845a8:
    // 0x1845a8: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x1845a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_1845ac:
    // 0x1845ac: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
label_1845b0:
    if (ctx->pc == 0x1845B0u) {
        ctx->pc = 0x1845B0u;
            // 0x1845b0: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->pc = 0x1845B4u;
        goto label_1845b4;
    }
    ctx->pc = 0x1845ACu;
    {
        const bool branch_taken_0x1845ac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1845ac) {
            ctx->pc = 0x1845B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1845ACu;
            // 0x1845b0: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1845B4u;
            goto label_1845b4;
        }
    }
    ctx->pc = 0x1845B4u;
label_1845b4:
    // 0x1845b4: 0x3e00008  jr          $ra
label_1845b8:
    if (ctx->pc == 0x1845B8u) {
        ctx->pc = 0x1845BCu;
        goto label_1845bc;
    }
    ctx->pc = 0x1845B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1845BCu;
label_1845bc:
    // 0x1845bc: 0x0  nop
    ctx->pc = 0x1845bcu;
    // NOP
label_1845c0:
    // 0x1845c0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1845c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1845c4:
    // 0x1845c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1845c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1845c8:
    // 0x1845c8: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x1845c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_1845cc:
    // 0x1845cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1845ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1845d0:
    // 0x1845d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1845d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1845d4:
    // 0x1845d4: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1845d8:
    if (ctx->pc == 0x1845D8u) {
        ctx->pc = 0x1845D8u;
            // 0x1845d8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1845DCu;
        goto label_1845dc;
    }
    ctx->pc = 0x1845D4u;
    {
        const bool branch_taken_0x1845d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1845D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1845D4u;
            // 0x1845d8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1845d4) {
            ctx->pc = 0x1845ECu;
            goto label_1845ec;
        }
    }
    ctx->pc = 0x1845DCu;
label_1845dc:
    // 0x1845dc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1845dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1845e0:
    // 0x1845e0: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x1845e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_1845e4:
    // 0x1845e4: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
label_1845e8:
    if (ctx->pc == 0x1845E8u) {
        ctx->pc = 0x1845E8u;
            // 0x1845e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1845ECu;
        goto label_1845ec;
    }
    ctx->pc = 0x1845E4u;
    {
        const bool branch_taken_0x1845e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1845E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1845E4u;
            // 0x1845e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1845e4) {
            ctx->pc = 0x184608u;
            goto label_184608;
        }
    }
    ctx->pc = 0x1845ECu;
label_1845ec:
    // 0x1845ec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1845ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1845f0:
    // 0x1845f0: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
label_1845f4:
    if (ctx->pc == 0x1845F4u) {
        ctx->pc = 0x1845F4u;
            // 0x1845f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1845F8u;
        goto label_1845f8;
    }
    ctx->pc = 0x1845F0u;
    {
        const bool branch_taken_0x1845f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1845F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1845F0u;
            // 0x1845f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1845f0) {
            ctx->pc = 0x184608u;
            goto label_184608;
        }
    }
    ctx->pc = 0x1845F8u;
label_1845f8:
    // 0x1845f8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1845f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1845fc:
    // 0x1845fc: 0xc05b99c  jal         func_16E670
label_184600:
    if (ctx->pc == 0x184600u) {
        ctx->pc = 0x184600u;
            // 0x184600: 0x24847830  addiu       $a0, $a0, 0x7830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30768));
        ctx->pc = 0x184604u;
        goto label_184604;
    }
    ctx->pc = 0x1845FCu;
    SET_GPR_U32(ctx, 31, 0x184604u);
    ctx->pc = 0x184600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1845FCu;
            // 0x184600: 0x24847830  addiu       $a0, $a0, 0x7830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184604u; }
        if (ctx->pc != 0x184604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184604u; }
        if (ctx->pc != 0x184604u) { return; }
    }
    ctx->pc = 0x184604u;
label_184604:
    // 0x184604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184608:
    // 0x184608: 0x3e00008  jr          $ra
label_18460c:
    if (ctx->pc == 0x18460Cu) {
        ctx->pc = 0x18460Cu;
            // 0x18460c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x184610u;
        goto label_184610;
    }
    ctx->pc = 0x184608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18460Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184608u;
            // 0x18460c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184610u;
label_184610:
    // 0x184610: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_184614:
    // 0x184614: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_184618:
    // 0x184618: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_18461c:
    // 0x18461c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18461cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184620:
    // 0x184620: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_184624:
    if (ctx->pc == 0x184624u) {
        ctx->pc = 0x184624u;
            // 0x184624: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x184628u;
        goto label_184628;
    }
    ctx->pc = 0x184620u;
    {
        const bool branch_taken_0x184620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x184624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184620u;
            // 0x184624: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184620) {
            ctx->pc = 0x184638u;
            goto label_184638;
        }
    }
    ctx->pc = 0x184628u;
label_184628:
    // 0x184628: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x184628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_18462c:
    // 0x18462c: 0x8c83ced0  lw          $v1, -0x3130($a0)
    ctx->pc = 0x18462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954704)));
label_184630:
    // 0x184630: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_184634:
    if (ctx->pc == 0x184634u) {
        ctx->pc = 0x184634u;
            // 0x184634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184638u;
        goto label_184638;
    }
    ctx->pc = 0x184630u;
    {
        const bool branch_taken_0x184630 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x184634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184630u;
            // 0x184634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184630) {
            ctx->pc = 0x184648u;
            goto label_184648;
        }
    }
    ctx->pc = 0x184638u;
label_184638:
    // 0x184638: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_18463c:
    // 0x18463c: 0xc05b99c  jal         func_16E670
label_184640:
    if (ctx->pc == 0x184640u) {
        ctx->pc = 0x184640u;
            // 0x184640: 0x24847860  addiu       $a0, $a0, 0x7860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30816));
        ctx->pc = 0x184644u;
        goto label_184644;
    }
    ctx->pc = 0x18463Cu;
    SET_GPR_U32(ctx, 31, 0x184644u);
    ctx->pc = 0x184640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18463Cu;
            // 0x184640: 0x24847860  addiu       $a0, $a0, 0x7860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184644u; }
        if (ctx->pc != 0x184644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184644u; }
        if (ctx->pc != 0x184644u) { return; }
    }
    ctx->pc = 0x184644u;
label_184644:
    // 0x184644: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x184644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184648:
    // 0x184648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18464c:
    // 0x18464c: 0x3e00008  jr          $ra
label_184650:
    if (ctx->pc == 0x184650u) {
        ctx->pc = 0x184650u;
            // 0x184650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x184654u;
        goto label_184654;
    }
    ctx->pc = 0x18464Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18464Cu;
            // 0x184650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184654u;
label_184654:
    // 0x184654: 0x0  nop
    ctx->pc = 0x184654u;
    // NOP
label_184658:
    // 0x184658: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18465c:
    // 0x18465c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18465cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184660:
    // 0x184660: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_184664:
    // 0x184664: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_184668:
    if (ctx->pc == 0x184668u) {
        ctx->pc = 0x184668u;
            // 0x184668: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18466Cu;
        goto label_18466c;
    }
    ctx->pc = 0x184664u;
    {
        const bool branch_taken_0x184664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x184668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184664u;
            // 0x184668: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184664) {
            ctx->pc = 0x18467Cu;
            goto label_18467c;
        }
    }
    ctx->pc = 0x18466Cu;
label_18466c:
    // 0x18466c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x18466cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_184670:
    // 0x184670: 0x8c83ced0  lw          $v1, -0x3130($a0)
    ctx->pc = 0x184670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954704)));
label_184674:
    // 0x184674: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
label_184678:
    if (ctx->pc == 0x184678u) {
        ctx->pc = 0x184678u;
            // 0x184678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18467Cu;
        goto label_18467c;
    }
    ctx->pc = 0x184674u;
    {
        const bool branch_taken_0x184674 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x184678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184674u;
            // 0x184678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184674) {
            ctx->pc = 0x184680u;
            goto label_184680;
        }
    }
    ctx->pc = 0x18467Cu;
label_18467c:
    // 0x18467c: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x18467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_184680:
    // 0x184680: 0x3e00008  jr          $ra
label_184684:
    if (ctx->pc == 0x184684u) {
        ctx->pc = 0x184688u;
        goto label_184688;
    }
    ctx->pc = 0x184680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184688u;
label_184688:
    // 0x184688: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18468c:
    // 0x18468c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18468cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184690:
    // 0x184690: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_184694:
    // 0x184694: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_184698:
    if (ctx->pc == 0x184698u) {
        ctx->pc = 0x184698u;
            // 0x184698: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18469Cu;
        goto label_18469c;
    }
    ctx->pc = 0x184694u;
    {
        const bool branch_taken_0x184694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x184698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184694u;
            // 0x184698: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184694) {
            ctx->pc = 0x1846ACu;
            goto label_1846ac;
        }
    }
    ctx->pc = 0x18469Cu;
label_18469c:
    // 0x18469c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x18469cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_1846a0:
    // 0x1846a0: 0x8c83ced0  lw          $v1, -0x3130($a0)
    ctx->pc = 0x1846a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954704)));
label_1846a4:
    // 0x1846a4: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
label_1846a8:
    if (ctx->pc == 0x1846A8u) {
        ctx->pc = 0x1846A8u;
            // 0x1846a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1846ACu;
        goto label_1846ac;
    }
    ctx->pc = 0x1846A4u;
    {
        const bool branch_taken_0x1846a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1846A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1846A4u;
            // 0x1846a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1846a4) {
            ctx->pc = 0x1846B0u;
            goto label_1846b0;
        }
    }
    ctx->pc = 0x1846ACu;
label_1846ac:
    // 0x1846ac: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x1846acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_1846b0:
    // 0x1846b0: 0x3e00008  jr          $ra
label_1846b4:
    if (ctx->pc == 0x1846B4u) {
        ctx->pc = 0x1846B8u;
        goto label_1846b8;
    }
    ctx->pc = 0x1846B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1846B8u;
label_1846b8:
    // 0x1846b8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1846b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1846bc:
    // 0x1846bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1846bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1846c0:
    // 0x1846c0: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x1846c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_1846c4:
    // 0x1846c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1846c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1846c8:
    // 0x1846c8: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
label_1846cc:
    if (ctx->pc == 0x1846CCu) {
        ctx->pc = 0x1846CCu;
            // 0x1846cc: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1846D0u;
        goto label_1846d0;
    }
    ctx->pc = 0x1846C8u;
    {
        const bool branch_taken_0x1846c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1846CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1846C8u;
            // 0x1846cc: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1846c8) {
            ctx->pc = 0x1846E0u;
            goto label_1846e0;
        }
    }
    ctx->pc = 0x1846D0u;
label_1846d0:
    // 0x1846d0: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1846d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_1846d4:
    // 0x1846d4: 0x8c83ced0  lw          $v1, -0x3130($a0)
    ctx->pc = 0x1846d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954704)));
label_1846d8:
    // 0x1846d8: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1846dc:
    if (ctx->pc == 0x1846DCu) {
        ctx->pc = 0x1846DCu;
            // 0x1846dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1846E0u;
        goto label_1846e0;
    }
    ctx->pc = 0x1846D8u;
    {
        const bool branch_taken_0x1846d8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1846DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1846D8u;
            // 0x1846dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1846d8) {
            ctx->pc = 0x1846E8u;
            goto label_1846e8;
        }
    }
    ctx->pc = 0x1846E0u;
label_1846e0:
    // 0x1846e0: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1846e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1846e4:
    // 0x1846e4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1846e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_1846e8:
    // 0x1846e8: 0x3e00008  jr          $ra
label_1846ec:
    if (ctx->pc == 0x1846ECu) {
        ctx->pc = 0x1846F0u;
        goto label_1846f0;
    }
    ctx->pc = 0x1846E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1846F0u;
label_1846f0:
    // 0x1846f0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1846f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1846f4:
    // 0x1846f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1846f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1846f8:
    // 0x1846f8: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x1846f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_1846fc:
    // 0x1846fc: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_184700:
    if (ctx->pc == 0x184700u) {
        ctx->pc = 0x184700u;
            // 0x184700: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184704u;
        goto label_184704;
    }
    ctx->pc = 0x1846FCu;
    {
        const bool branch_taken_0x1846fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x184700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1846FCu;
            // 0x184700: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1846fc) {
            ctx->pc = 0x184714u;
            goto label_184714;
        }
    }
    ctx->pc = 0x184704u;
label_184704:
    // 0x184704: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x184704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_184708:
    // 0x184708: 0x8c83ced0  lw          $v1, -0x3130($a0)
    ctx->pc = 0x184708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954704)));
label_18470c:
    // 0x18470c: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
label_184710:
    if (ctx->pc == 0x184710u) {
        ctx->pc = 0x184710u;
            // 0x184710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184714u;
        goto label_184714;
    }
    ctx->pc = 0x18470Cu;
    {
        const bool branch_taken_0x18470c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x184710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18470Cu;
            // 0x184710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18470c) {
            ctx->pc = 0x184718u;
            goto label_184718;
        }
    }
    ctx->pc = 0x184714u;
label_184714:
    // 0x184714: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x184714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_184718:
    // 0x184718: 0x3e00008  jr          $ra
label_18471c:
    if (ctx->pc == 0x18471Cu) {
        ctx->pc = 0x184720u;
        goto label_184720;
    }
    ctx->pc = 0x184718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184720u;
label_184720:
    // 0x184720: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_184724:
    // 0x184724: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x184724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184728:
    // 0x184728: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_18472c:
    // 0x18472c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_184730:
    if (ctx->pc == 0x184730u) {
        ctx->pc = 0x184730u;
            // 0x184730: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x184734u;
        goto label_184734;
    }
    ctx->pc = 0x18472Cu;
    {
        const bool branch_taken_0x18472c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x184730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18472Cu;
            // 0x184730: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18472c) {
            ctx->pc = 0x18473Cu;
            goto label_18473c;
        }
    }
    ctx->pc = 0x184734u;
label_184734:
    // 0x184734: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x184734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_184738:
    // 0x184738: 0x8c83ced0  lw          $v1, -0x3130($a0)
    ctx->pc = 0x184738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954704)));
label_18473c:
    // 0x18473c: 0x3e00008  jr          $ra
label_184740:
    if (ctx->pc == 0x184740u) {
        ctx->pc = 0x184744u;
        goto label_184744;
    }
    ctx->pc = 0x18473Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184744u;
label_184744:
    // 0x184744: 0x0  nop
    ctx->pc = 0x184744u;
    // NOP
label_184748:
    // 0x184748: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18474c:
    // 0x18474c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18474cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_184750:
    // 0x184750: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_184754:
    // 0x184754: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x184754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184758:
    // 0x184758: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_18475c:
    if (ctx->pc == 0x18475Cu) {
        ctx->pc = 0x18475Cu;
            // 0x18475c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x184760u;
        goto label_184760;
    }
    ctx->pc = 0x184758u;
    {
        const bool branch_taken_0x184758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18475Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184758u;
            // 0x18475c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184758) {
            ctx->pc = 0x184770u;
            goto label_184770;
        }
    }
    ctx->pc = 0x184760u;
label_184760:
    // 0x184760: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x184760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_184764:
    // 0x184764: 0x8c83ced0  lw          $v1, -0x3130($a0)
    ctx->pc = 0x184764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954704)));
label_184768:
    // 0x184768: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_18476c:
    if (ctx->pc == 0x18476Cu) {
        ctx->pc = 0x18476Cu;
            // 0x18476c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184770u;
        goto label_184770;
    }
    ctx->pc = 0x184768u;
    {
        const bool branch_taken_0x184768 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18476Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184768u;
            // 0x18476c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184768) {
            ctx->pc = 0x184780u;
            goto label_184780;
        }
    }
    ctx->pc = 0x184770u;
label_184770:
    // 0x184770: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_184774:
    // 0x184774: 0xc05b99c  jal         func_16E670
label_184778:
    if (ctx->pc == 0x184778u) {
        ctx->pc = 0x184778u;
            // 0x184778: 0x24847888  addiu       $a0, $a0, 0x7888 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30856));
        ctx->pc = 0x18477Cu;
        goto label_18477c;
    }
    ctx->pc = 0x184774u;
    SET_GPR_U32(ctx, 31, 0x18477Cu);
    ctx->pc = 0x184778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184774u;
            // 0x184778: 0x24847888  addiu       $a0, $a0, 0x7888 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18477Cu; }
        if (ctx->pc != 0x18477Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18477Cu; }
        if (ctx->pc != 0x18477Cu) { return; }
    }
    ctx->pc = 0x18477Cu;
label_18477c:
    // 0x18477c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18477cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184780:
    // 0x184780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184784:
    // 0x184784: 0x3e00008  jr          $ra
label_184788:
    if (ctx->pc == 0x184788u) {
        ctx->pc = 0x184788u;
            // 0x184788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18478Cu;
        goto label_18478c;
    }
    ctx->pc = 0x184784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184784u;
            // 0x184788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18478Cu;
label_18478c:
    // 0x18478c: 0x0  nop
    ctx->pc = 0x18478cu;
    // NOP
label_184790:
    // 0x184790: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_184794:
    // 0x184794: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_184798:
    // 0x184798: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_18479c:
    // 0x18479c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18479cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1847a0:
    // 0x1847a0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1847a4:
    if (ctx->pc == 0x1847A4u) {
        ctx->pc = 0x1847A4u;
            // 0x1847a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1847A8u;
        goto label_1847a8;
    }
    ctx->pc = 0x1847A0u;
    {
        const bool branch_taken_0x1847a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1847A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1847A0u;
            // 0x1847a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1847a0) {
            ctx->pc = 0x1847B8u;
            goto label_1847b8;
        }
    }
    ctx->pc = 0x1847A8u;
label_1847a8:
    // 0x1847a8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1847a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1847ac:
    // 0x1847ac: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x1847acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_1847b0:
    // 0x1847b0: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_1847b4:
    if (ctx->pc == 0x1847B4u) {
        ctx->pc = 0x1847B4u;
            // 0x1847b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1847B8u;
        goto label_1847b8;
    }
    ctx->pc = 0x1847B0u;
    {
        const bool branch_taken_0x1847b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1847B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1847B0u;
            // 0x1847b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1847b0) {
            ctx->pc = 0x1847D0u;
            goto label_1847d0;
        }
    }
    ctx->pc = 0x1847B8u;
label_1847b8:
    // 0x1847b8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1847b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1847bc:
    // 0x1847bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1847bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1847c0:
    // 0x1847c0: 0x248478b0  addiu       $a0, $a0, 0x78B0
    ctx->pc = 0x1847c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30896));
label_1847c4:
    // 0x1847c4: 0x805b99c  j           func_16E670
label_1847c8:
    if (ctx->pc == 0x1847C8u) {
        ctx->pc = 0x1847C8u;
            // 0x1847c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1847CCu;
        goto label_1847cc;
    }
    ctx->pc = 0x1847C4u;
    ctx->pc = 0x1847C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1847C4u;
            // 0x1847c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016E670_0x16e670(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1847CCu;
label_1847cc:
    // 0x1847cc: 0x0  nop
    ctx->pc = 0x1847ccu;
    // NOP
label_1847d0:
    // 0x1847d0: 0x3e00008  jr          $ra
label_1847d4:
    if (ctx->pc == 0x1847D4u) {
        ctx->pc = 0x1847D4u;
            // 0x1847d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1847D8u;
        goto label_1847d8;
    }
    ctx->pc = 0x1847D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1847D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1847D0u;
            // 0x1847d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1847D8u;
label_1847d8:
    // 0x1847d8: 0x3e00008  jr          $ra
label_1847dc:
    if (ctx->pc == 0x1847DCu) {
        ctx->pc = 0x1847E0u;
        goto label_1847e0;
    }
    ctx->pc = 0x1847D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1847E0u;
label_1847e0:
    // 0x1847e0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1847e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1847e4:
    // 0x1847e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1847e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1847e8:
    // 0x1847e8: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x1847e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_1847ec:
    // 0x1847ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1847ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1847f0:
    // 0x1847f0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1847f4:
    if (ctx->pc == 0x1847F4u) {
        ctx->pc = 0x1847F4u;
            // 0x1847f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1847F8u;
        goto label_1847f8;
    }
    ctx->pc = 0x1847F0u;
    {
        const bool branch_taken_0x1847f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1847F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1847F0u;
            // 0x1847f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1847f0) {
            ctx->pc = 0x184808u;
            goto label_184808;
        }
    }
    ctx->pc = 0x1847F8u;
label_1847f8:
    // 0x1847f8: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1847f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_1847fc:
    // 0x1847fc: 0x8c83ced0  lw          $v1, -0x3130($a0)
    ctx->pc = 0x1847fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954704)));
label_184800:
    // 0x184800: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_184804:
    if (ctx->pc == 0x184804u) {
        ctx->pc = 0x184804u;
            // 0x184804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184808u;
        goto label_184808;
    }
    ctx->pc = 0x184800u;
    {
        const bool branch_taken_0x184800 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x184804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184800u;
            // 0x184804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184800) {
            ctx->pc = 0x184818u;
            goto label_184818;
        }
    }
    ctx->pc = 0x184808u;
label_184808:
    // 0x184808: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_18480c:
    // 0x18480c: 0xc05b99c  jal         func_16E670
label_184810:
    if (ctx->pc == 0x184810u) {
        ctx->pc = 0x184810u;
            // 0x184810: 0x248478d8  addiu       $a0, $a0, 0x78D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30936));
        ctx->pc = 0x184814u;
        goto label_184814;
    }
    ctx->pc = 0x18480Cu;
    SET_GPR_U32(ctx, 31, 0x184814u);
    ctx->pc = 0x184810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18480Cu;
            // 0x184810: 0x248478d8  addiu       $a0, $a0, 0x78D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184814u; }
        if (ctx->pc != 0x184814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184814u; }
        if (ctx->pc != 0x184814u) { return; }
    }
    ctx->pc = 0x184814u;
label_184814:
    // 0x184814: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x184814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184818:
    // 0x184818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18481c:
    // 0x18481c: 0x3e00008  jr          $ra
label_184820:
    if (ctx->pc == 0x184820u) {
        ctx->pc = 0x184820u;
            // 0x184820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x184824u;
        goto label_184824;
    }
    ctx->pc = 0x18481Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18481Cu;
            // 0x184820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184824u;
label_184824:
    // 0x184824: 0x0  nop
    ctx->pc = 0x184824u;
    // NOP
label_184828:
    // 0x184828: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18482c:
    // 0x18482c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18482cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_184830:
    // 0x184830: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x184830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_184834:
    // 0x184834: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x184834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184838:
    // 0x184838: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_18483c:
    if (ctx->pc == 0x18483Cu) {
        ctx->pc = 0x18483Cu;
            // 0x18483c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x184840u;
        goto label_184840;
    }
    ctx->pc = 0x184838u;
    {
        const bool branch_taken_0x184838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18483Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184838u;
            // 0x18483c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184838) {
            ctx->pc = 0x184850u;
            goto label_184850;
        }
    }
    ctx->pc = 0x184840u;
label_184840:
    // 0x184840: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_184844:
    // 0x184844: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x184844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
label_184848:
    // 0x184848: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_18484c:
    if (ctx->pc == 0x18484Cu) {
        ctx->pc = 0x18484Cu;
            // 0x18484c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x184850u;
        goto label_184850;
    }
    ctx->pc = 0x184848u;
    {
        const bool branch_taken_0x184848 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18484Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184848u;
            // 0x18484c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184848) {
            ctx->pc = 0x184868u;
            goto label_184868;
        }
    }
    ctx->pc = 0x184850u;
label_184850:
    // 0x184850: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x184850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_184854:
    // 0x184854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184858:
    // 0x184858: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x184858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_18485c:
    // 0x18485c: 0x805b99c  j           func_16E670
label_184860:
    if (ctx->pc == 0x184860u) {
        ctx->pc = 0x184860u;
            // 0x184860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x184864u;
        goto label_184864;
    }
    ctx->pc = 0x18485Cu;
    ctx->pc = 0x184860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18485Cu;
            // 0x184860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016E670_0x16e670(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184864u;
label_184864:
    // 0x184864: 0x0  nop
    ctx->pc = 0x184864u;
    // NOP
label_184868:
    // 0x184868: 0x3e00008  jr          $ra
label_18486c:
    if (ctx->pc == 0x18486Cu) {
        ctx->pc = 0x18486Cu;
            // 0x18486c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x184870u;
        goto label_fallthrough_0x184868;
    }
    ctx->pc = 0x184868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18486Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184868u;
            // 0x18486c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x184868:
    ctx->pc = 0x184870u;
}
