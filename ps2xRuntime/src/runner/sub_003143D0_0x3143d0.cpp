#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003143D0
// Address: 0x3143d0 - 0x314b10
void sub_003143D0_0x3143d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003143D0_0x3143d0");
#endif

    switch (ctx->pc) {
        case 0x3143d0u: goto label_3143d0;
        case 0x3143d4u: goto label_3143d4;
        case 0x3143d8u: goto label_3143d8;
        case 0x3143dcu: goto label_3143dc;
        case 0x3143e0u: goto label_3143e0;
        case 0x3143e4u: goto label_3143e4;
        case 0x3143e8u: goto label_3143e8;
        case 0x3143ecu: goto label_3143ec;
        case 0x3143f0u: goto label_3143f0;
        case 0x3143f4u: goto label_3143f4;
        case 0x3143f8u: goto label_3143f8;
        case 0x3143fcu: goto label_3143fc;
        case 0x314400u: goto label_314400;
        case 0x314404u: goto label_314404;
        case 0x314408u: goto label_314408;
        case 0x31440cu: goto label_31440c;
        case 0x314410u: goto label_314410;
        case 0x314414u: goto label_314414;
        case 0x314418u: goto label_314418;
        case 0x31441cu: goto label_31441c;
        case 0x314420u: goto label_314420;
        case 0x314424u: goto label_314424;
        case 0x314428u: goto label_314428;
        case 0x31442cu: goto label_31442c;
        case 0x314430u: goto label_314430;
        case 0x314434u: goto label_314434;
        case 0x314438u: goto label_314438;
        case 0x31443cu: goto label_31443c;
        case 0x314440u: goto label_314440;
        case 0x314444u: goto label_314444;
        case 0x314448u: goto label_314448;
        case 0x31444cu: goto label_31444c;
        case 0x314450u: goto label_314450;
        case 0x314454u: goto label_314454;
        case 0x314458u: goto label_314458;
        case 0x31445cu: goto label_31445c;
        case 0x314460u: goto label_314460;
        case 0x314464u: goto label_314464;
        case 0x314468u: goto label_314468;
        case 0x31446cu: goto label_31446c;
        case 0x314470u: goto label_314470;
        case 0x314474u: goto label_314474;
        case 0x314478u: goto label_314478;
        case 0x31447cu: goto label_31447c;
        case 0x314480u: goto label_314480;
        case 0x314484u: goto label_314484;
        case 0x314488u: goto label_314488;
        case 0x31448cu: goto label_31448c;
        case 0x314490u: goto label_314490;
        case 0x314494u: goto label_314494;
        case 0x314498u: goto label_314498;
        case 0x31449cu: goto label_31449c;
        case 0x3144a0u: goto label_3144a0;
        case 0x3144a4u: goto label_3144a4;
        case 0x3144a8u: goto label_3144a8;
        case 0x3144acu: goto label_3144ac;
        case 0x3144b0u: goto label_3144b0;
        case 0x3144b4u: goto label_3144b4;
        case 0x3144b8u: goto label_3144b8;
        case 0x3144bcu: goto label_3144bc;
        case 0x3144c0u: goto label_3144c0;
        case 0x3144c4u: goto label_3144c4;
        case 0x3144c8u: goto label_3144c8;
        case 0x3144ccu: goto label_3144cc;
        case 0x3144d0u: goto label_3144d0;
        case 0x3144d4u: goto label_3144d4;
        case 0x3144d8u: goto label_3144d8;
        case 0x3144dcu: goto label_3144dc;
        case 0x3144e0u: goto label_3144e0;
        case 0x3144e4u: goto label_3144e4;
        case 0x3144e8u: goto label_3144e8;
        case 0x3144ecu: goto label_3144ec;
        case 0x3144f0u: goto label_3144f0;
        case 0x3144f4u: goto label_3144f4;
        case 0x3144f8u: goto label_3144f8;
        case 0x3144fcu: goto label_3144fc;
        case 0x314500u: goto label_314500;
        case 0x314504u: goto label_314504;
        case 0x314508u: goto label_314508;
        case 0x31450cu: goto label_31450c;
        case 0x314510u: goto label_314510;
        case 0x314514u: goto label_314514;
        case 0x314518u: goto label_314518;
        case 0x31451cu: goto label_31451c;
        case 0x314520u: goto label_314520;
        case 0x314524u: goto label_314524;
        case 0x314528u: goto label_314528;
        case 0x31452cu: goto label_31452c;
        case 0x314530u: goto label_314530;
        case 0x314534u: goto label_314534;
        case 0x314538u: goto label_314538;
        case 0x31453cu: goto label_31453c;
        case 0x314540u: goto label_314540;
        case 0x314544u: goto label_314544;
        case 0x314548u: goto label_314548;
        case 0x31454cu: goto label_31454c;
        case 0x314550u: goto label_314550;
        case 0x314554u: goto label_314554;
        case 0x314558u: goto label_314558;
        case 0x31455cu: goto label_31455c;
        case 0x314560u: goto label_314560;
        case 0x314564u: goto label_314564;
        case 0x314568u: goto label_314568;
        case 0x31456cu: goto label_31456c;
        case 0x314570u: goto label_314570;
        case 0x314574u: goto label_314574;
        case 0x314578u: goto label_314578;
        case 0x31457cu: goto label_31457c;
        case 0x314580u: goto label_314580;
        case 0x314584u: goto label_314584;
        case 0x314588u: goto label_314588;
        case 0x31458cu: goto label_31458c;
        case 0x314590u: goto label_314590;
        case 0x314594u: goto label_314594;
        case 0x314598u: goto label_314598;
        case 0x31459cu: goto label_31459c;
        case 0x3145a0u: goto label_3145a0;
        case 0x3145a4u: goto label_3145a4;
        case 0x3145a8u: goto label_3145a8;
        case 0x3145acu: goto label_3145ac;
        case 0x3145b0u: goto label_3145b0;
        case 0x3145b4u: goto label_3145b4;
        case 0x3145b8u: goto label_3145b8;
        case 0x3145bcu: goto label_3145bc;
        case 0x3145c0u: goto label_3145c0;
        case 0x3145c4u: goto label_3145c4;
        case 0x3145c8u: goto label_3145c8;
        case 0x3145ccu: goto label_3145cc;
        case 0x3145d0u: goto label_3145d0;
        case 0x3145d4u: goto label_3145d4;
        case 0x3145d8u: goto label_3145d8;
        case 0x3145dcu: goto label_3145dc;
        case 0x3145e0u: goto label_3145e0;
        case 0x3145e4u: goto label_3145e4;
        case 0x3145e8u: goto label_3145e8;
        case 0x3145ecu: goto label_3145ec;
        case 0x3145f0u: goto label_3145f0;
        case 0x3145f4u: goto label_3145f4;
        case 0x3145f8u: goto label_3145f8;
        case 0x3145fcu: goto label_3145fc;
        case 0x314600u: goto label_314600;
        case 0x314604u: goto label_314604;
        case 0x314608u: goto label_314608;
        case 0x31460cu: goto label_31460c;
        case 0x314610u: goto label_314610;
        case 0x314614u: goto label_314614;
        case 0x314618u: goto label_314618;
        case 0x31461cu: goto label_31461c;
        case 0x314620u: goto label_314620;
        case 0x314624u: goto label_314624;
        case 0x314628u: goto label_314628;
        case 0x31462cu: goto label_31462c;
        case 0x314630u: goto label_314630;
        case 0x314634u: goto label_314634;
        case 0x314638u: goto label_314638;
        case 0x31463cu: goto label_31463c;
        case 0x314640u: goto label_314640;
        case 0x314644u: goto label_314644;
        case 0x314648u: goto label_314648;
        case 0x31464cu: goto label_31464c;
        case 0x314650u: goto label_314650;
        case 0x314654u: goto label_314654;
        case 0x314658u: goto label_314658;
        case 0x31465cu: goto label_31465c;
        case 0x314660u: goto label_314660;
        case 0x314664u: goto label_314664;
        case 0x314668u: goto label_314668;
        case 0x31466cu: goto label_31466c;
        case 0x314670u: goto label_314670;
        case 0x314674u: goto label_314674;
        case 0x314678u: goto label_314678;
        case 0x31467cu: goto label_31467c;
        case 0x314680u: goto label_314680;
        case 0x314684u: goto label_314684;
        case 0x314688u: goto label_314688;
        case 0x31468cu: goto label_31468c;
        case 0x314690u: goto label_314690;
        case 0x314694u: goto label_314694;
        case 0x314698u: goto label_314698;
        case 0x31469cu: goto label_31469c;
        case 0x3146a0u: goto label_3146a0;
        case 0x3146a4u: goto label_3146a4;
        case 0x3146a8u: goto label_3146a8;
        case 0x3146acu: goto label_3146ac;
        case 0x3146b0u: goto label_3146b0;
        case 0x3146b4u: goto label_3146b4;
        case 0x3146b8u: goto label_3146b8;
        case 0x3146bcu: goto label_3146bc;
        case 0x3146c0u: goto label_3146c0;
        case 0x3146c4u: goto label_3146c4;
        case 0x3146c8u: goto label_3146c8;
        case 0x3146ccu: goto label_3146cc;
        case 0x3146d0u: goto label_3146d0;
        case 0x3146d4u: goto label_3146d4;
        case 0x3146d8u: goto label_3146d8;
        case 0x3146dcu: goto label_3146dc;
        case 0x3146e0u: goto label_3146e0;
        case 0x3146e4u: goto label_3146e4;
        case 0x3146e8u: goto label_3146e8;
        case 0x3146ecu: goto label_3146ec;
        case 0x3146f0u: goto label_3146f0;
        case 0x3146f4u: goto label_3146f4;
        case 0x3146f8u: goto label_3146f8;
        case 0x3146fcu: goto label_3146fc;
        case 0x314700u: goto label_314700;
        case 0x314704u: goto label_314704;
        case 0x314708u: goto label_314708;
        case 0x31470cu: goto label_31470c;
        case 0x314710u: goto label_314710;
        case 0x314714u: goto label_314714;
        case 0x314718u: goto label_314718;
        case 0x31471cu: goto label_31471c;
        case 0x314720u: goto label_314720;
        case 0x314724u: goto label_314724;
        case 0x314728u: goto label_314728;
        case 0x31472cu: goto label_31472c;
        case 0x314730u: goto label_314730;
        case 0x314734u: goto label_314734;
        case 0x314738u: goto label_314738;
        case 0x31473cu: goto label_31473c;
        case 0x314740u: goto label_314740;
        case 0x314744u: goto label_314744;
        case 0x314748u: goto label_314748;
        case 0x31474cu: goto label_31474c;
        case 0x314750u: goto label_314750;
        case 0x314754u: goto label_314754;
        case 0x314758u: goto label_314758;
        case 0x31475cu: goto label_31475c;
        case 0x314760u: goto label_314760;
        case 0x314764u: goto label_314764;
        case 0x314768u: goto label_314768;
        case 0x31476cu: goto label_31476c;
        case 0x314770u: goto label_314770;
        case 0x314774u: goto label_314774;
        case 0x314778u: goto label_314778;
        case 0x31477cu: goto label_31477c;
        case 0x314780u: goto label_314780;
        case 0x314784u: goto label_314784;
        case 0x314788u: goto label_314788;
        case 0x31478cu: goto label_31478c;
        case 0x314790u: goto label_314790;
        case 0x314794u: goto label_314794;
        case 0x314798u: goto label_314798;
        case 0x31479cu: goto label_31479c;
        case 0x3147a0u: goto label_3147a0;
        case 0x3147a4u: goto label_3147a4;
        case 0x3147a8u: goto label_3147a8;
        case 0x3147acu: goto label_3147ac;
        case 0x3147b0u: goto label_3147b0;
        case 0x3147b4u: goto label_3147b4;
        case 0x3147b8u: goto label_3147b8;
        case 0x3147bcu: goto label_3147bc;
        case 0x3147c0u: goto label_3147c0;
        case 0x3147c4u: goto label_3147c4;
        case 0x3147c8u: goto label_3147c8;
        case 0x3147ccu: goto label_3147cc;
        case 0x3147d0u: goto label_3147d0;
        case 0x3147d4u: goto label_3147d4;
        case 0x3147d8u: goto label_3147d8;
        case 0x3147dcu: goto label_3147dc;
        case 0x3147e0u: goto label_3147e0;
        case 0x3147e4u: goto label_3147e4;
        case 0x3147e8u: goto label_3147e8;
        case 0x3147ecu: goto label_3147ec;
        case 0x3147f0u: goto label_3147f0;
        case 0x3147f4u: goto label_3147f4;
        case 0x3147f8u: goto label_3147f8;
        case 0x3147fcu: goto label_3147fc;
        case 0x314800u: goto label_314800;
        case 0x314804u: goto label_314804;
        case 0x314808u: goto label_314808;
        case 0x31480cu: goto label_31480c;
        case 0x314810u: goto label_314810;
        case 0x314814u: goto label_314814;
        case 0x314818u: goto label_314818;
        case 0x31481cu: goto label_31481c;
        case 0x314820u: goto label_314820;
        case 0x314824u: goto label_314824;
        case 0x314828u: goto label_314828;
        case 0x31482cu: goto label_31482c;
        case 0x314830u: goto label_314830;
        case 0x314834u: goto label_314834;
        case 0x314838u: goto label_314838;
        case 0x31483cu: goto label_31483c;
        case 0x314840u: goto label_314840;
        case 0x314844u: goto label_314844;
        case 0x314848u: goto label_314848;
        case 0x31484cu: goto label_31484c;
        case 0x314850u: goto label_314850;
        case 0x314854u: goto label_314854;
        case 0x314858u: goto label_314858;
        case 0x31485cu: goto label_31485c;
        case 0x314860u: goto label_314860;
        case 0x314864u: goto label_314864;
        case 0x314868u: goto label_314868;
        case 0x31486cu: goto label_31486c;
        case 0x314870u: goto label_314870;
        case 0x314874u: goto label_314874;
        case 0x314878u: goto label_314878;
        case 0x31487cu: goto label_31487c;
        case 0x314880u: goto label_314880;
        case 0x314884u: goto label_314884;
        case 0x314888u: goto label_314888;
        case 0x31488cu: goto label_31488c;
        case 0x314890u: goto label_314890;
        case 0x314894u: goto label_314894;
        case 0x314898u: goto label_314898;
        case 0x31489cu: goto label_31489c;
        case 0x3148a0u: goto label_3148a0;
        case 0x3148a4u: goto label_3148a4;
        case 0x3148a8u: goto label_3148a8;
        case 0x3148acu: goto label_3148ac;
        case 0x3148b0u: goto label_3148b0;
        case 0x3148b4u: goto label_3148b4;
        case 0x3148b8u: goto label_3148b8;
        case 0x3148bcu: goto label_3148bc;
        case 0x3148c0u: goto label_3148c0;
        case 0x3148c4u: goto label_3148c4;
        case 0x3148c8u: goto label_3148c8;
        case 0x3148ccu: goto label_3148cc;
        case 0x3148d0u: goto label_3148d0;
        case 0x3148d4u: goto label_3148d4;
        case 0x3148d8u: goto label_3148d8;
        case 0x3148dcu: goto label_3148dc;
        case 0x3148e0u: goto label_3148e0;
        case 0x3148e4u: goto label_3148e4;
        case 0x3148e8u: goto label_3148e8;
        case 0x3148ecu: goto label_3148ec;
        case 0x3148f0u: goto label_3148f0;
        case 0x3148f4u: goto label_3148f4;
        case 0x3148f8u: goto label_3148f8;
        case 0x3148fcu: goto label_3148fc;
        case 0x314900u: goto label_314900;
        case 0x314904u: goto label_314904;
        case 0x314908u: goto label_314908;
        case 0x31490cu: goto label_31490c;
        case 0x314910u: goto label_314910;
        case 0x314914u: goto label_314914;
        case 0x314918u: goto label_314918;
        case 0x31491cu: goto label_31491c;
        case 0x314920u: goto label_314920;
        case 0x314924u: goto label_314924;
        case 0x314928u: goto label_314928;
        case 0x31492cu: goto label_31492c;
        case 0x314930u: goto label_314930;
        case 0x314934u: goto label_314934;
        case 0x314938u: goto label_314938;
        case 0x31493cu: goto label_31493c;
        case 0x314940u: goto label_314940;
        case 0x314944u: goto label_314944;
        case 0x314948u: goto label_314948;
        case 0x31494cu: goto label_31494c;
        case 0x314950u: goto label_314950;
        case 0x314954u: goto label_314954;
        case 0x314958u: goto label_314958;
        case 0x31495cu: goto label_31495c;
        case 0x314960u: goto label_314960;
        case 0x314964u: goto label_314964;
        case 0x314968u: goto label_314968;
        case 0x31496cu: goto label_31496c;
        case 0x314970u: goto label_314970;
        case 0x314974u: goto label_314974;
        case 0x314978u: goto label_314978;
        case 0x31497cu: goto label_31497c;
        case 0x314980u: goto label_314980;
        case 0x314984u: goto label_314984;
        case 0x314988u: goto label_314988;
        case 0x31498cu: goto label_31498c;
        case 0x314990u: goto label_314990;
        case 0x314994u: goto label_314994;
        case 0x314998u: goto label_314998;
        case 0x31499cu: goto label_31499c;
        case 0x3149a0u: goto label_3149a0;
        case 0x3149a4u: goto label_3149a4;
        case 0x3149a8u: goto label_3149a8;
        case 0x3149acu: goto label_3149ac;
        case 0x3149b0u: goto label_3149b0;
        case 0x3149b4u: goto label_3149b4;
        case 0x3149b8u: goto label_3149b8;
        case 0x3149bcu: goto label_3149bc;
        case 0x3149c0u: goto label_3149c0;
        case 0x3149c4u: goto label_3149c4;
        case 0x3149c8u: goto label_3149c8;
        case 0x3149ccu: goto label_3149cc;
        case 0x3149d0u: goto label_3149d0;
        case 0x3149d4u: goto label_3149d4;
        case 0x3149d8u: goto label_3149d8;
        case 0x3149dcu: goto label_3149dc;
        case 0x3149e0u: goto label_3149e0;
        case 0x3149e4u: goto label_3149e4;
        case 0x3149e8u: goto label_3149e8;
        case 0x3149ecu: goto label_3149ec;
        case 0x3149f0u: goto label_3149f0;
        case 0x3149f4u: goto label_3149f4;
        case 0x3149f8u: goto label_3149f8;
        case 0x3149fcu: goto label_3149fc;
        case 0x314a00u: goto label_314a00;
        case 0x314a04u: goto label_314a04;
        case 0x314a08u: goto label_314a08;
        case 0x314a0cu: goto label_314a0c;
        case 0x314a10u: goto label_314a10;
        case 0x314a14u: goto label_314a14;
        case 0x314a18u: goto label_314a18;
        case 0x314a1cu: goto label_314a1c;
        case 0x314a20u: goto label_314a20;
        case 0x314a24u: goto label_314a24;
        case 0x314a28u: goto label_314a28;
        case 0x314a2cu: goto label_314a2c;
        case 0x314a30u: goto label_314a30;
        case 0x314a34u: goto label_314a34;
        case 0x314a38u: goto label_314a38;
        case 0x314a3cu: goto label_314a3c;
        case 0x314a40u: goto label_314a40;
        case 0x314a44u: goto label_314a44;
        case 0x314a48u: goto label_314a48;
        case 0x314a4cu: goto label_314a4c;
        case 0x314a50u: goto label_314a50;
        case 0x314a54u: goto label_314a54;
        case 0x314a58u: goto label_314a58;
        case 0x314a5cu: goto label_314a5c;
        case 0x314a60u: goto label_314a60;
        case 0x314a64u: goto label_314a64;
        case 0x314a68u: goto label_314a68;
        case 0x314a6cu: goto label_314a6c;
        case 0x314a70u: goto label_314a70;
        case 0x314a74u: goto label_314a74;
        case 0x314a78u: goto label_314a78;
        case 0x314a7cu: goto label_314a7c;
        case 0x314a80u: goto label_314a80;
        case 0x314a84u: goto label_314a84;
        case 0x314a88u: goto label_314a88;
        case 0x314a8cu: goto label_314a8c;
        case 0x314a90u: goto label_314a90;
        case 0x314a94u: goto label_314a94;
        case 0x314a98u: goto label_314a98;
        case 0x314a9cu: goto label_314a9c;
        case 0x314aa0u: goto label_314aa0;
        case 0x314aa4u: goto label_314aa4;
        case 0x314aa8u: goto label_314aa8;
        case 0x314aacu: goto label_314aac;
        case 0x314ab0u: goto label_314ab0;
        case 0x314ab4u: goto label_314ab4;
        case 0x314ab8u: goto label_314ab8;
        case 0x314abcu: goto label_314abc;
        case 0x314ac0u: goto label_314ac0;
        case 0x314ac4u: goto label_314ac4;
        case 0x314ac8u: goto label_314ac8;
        case 0x314accu: goto label_314acc;
        case 0x314ad0u: goto label_314ad0;
        case 0x314ad4u: goto label_314ad4;
        case 0x314ad8u: goto label_314ad8;
        case 0x314adcu: goto label_314adc;
        case 0x314ae0u: goto label_314ae0;
        case 0x314ae4u: goto label_314ae4;
        case 0x314ae8u: goto label_314ae8;
        case 0x314aecu: goto label_314aec;
        case 0x314af0u: goto label_314af0;
        case 0x314af4u: goto label_314af4;
        case 0x314af8u: goto label_314af8;
        case 0x314afcu: goto label_314afc;
        case 0x314b00u: goto label_314b00;
        case 0x314b04u: goto label_314b04;
        case 0x314b08u: goto label_314b08;
        case 0x314b0cu: goto label_314b0c;
        default: break;
    }

    ctx->pc = 0x3143d0u;

label_3143d0:
    // 0x3143d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3143d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3143d4:
    // 0x3143d4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3143d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3143d8:
    // 0x3143d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3143d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3143dc:
    // 0x3143dc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3143dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3143e0:
    // 0x3143e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3143e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3143e4:
    // 0x3143e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3143e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3143e8:
    // 0x3143e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3143e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3143ec:
    // 0x3143ec: 0xc10f6ec  jal         func_43DBB0
label_3143f0:
    if (ctx->pc == 0x3143F0u) {
        ctx->pc = 0x3143F0u;
            // 0x3143f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3143F4u;
        goto label_3143f4;
    }
    ctx->pc = 0x3143ECu;
    SET_GPR_U32(ctx, 31, 0x3143F4u);
    ctx->pc = 0x3143F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3143ECu;
            // 0x3143f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3143F4u; }
        if (ctx->pc != 0x3143F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3143F4u; }
        if (ctx->pc != 0x3143F4u) { return; }
    }
    ctx->pc = 0x3143F4u;
label_3143f4:
    // 0x3143f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3143f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3143f8:
    // 0x3143f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3143f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3143fc:
    // 0x3143fc: 0x24634350  addiu       $v1, $v1, 0x4350
    ctx->pc = 0x3143fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17232));
label_314400:
    // 0x314400: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x314400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_314404:
    // 0x314404: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x314404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_314408:
    // 0x314408: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x314408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31440c:
    // 0x31440c: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x31440cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_314410:
    // 0x314410: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x314410u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_314414:
    // 0x314414: 0xa2220068  sb          $v0, 0x68($s1)
    ctx->pc = 0x314414u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 2));
label_314418:
    // 0x314418: 0xc04cbd8  jal         func_132F60
label_31441c:
    if (ctx->pc == 0x31441Cu) {
        ctx->pc = 0x31441Cu;
            // 0x31441c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x314420u;
        goto label_314420;
    }
    ctx->pc = 0x314418u;
    SET_GPR_U32(ctx, 31, 0x314420u);
    ctx->pc = 0x31441Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314418u;
            // 0x31441c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314420u; }
        if (ctx->pc != 0x314420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314420u; }
        if (ctx->pc != 0x314420u) { return; }
    }
    ctx->pc = 0x314420u;
label_314420:
    // 0x314420: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x314420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_314424:
    // 0x314424: 0xc04cc04  jal         func_133010
label_314428:
    if (ctx->pc == 0x314428u) {
        ctx->pc = 0x314428u;
            // 0x314428: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x31442Cu;
        goto label_31442c;
    }
    ctx->pc = 0x314424u;
    SET_GPR_U32(ctx, 31, 0x31442Cu);
    ctx->pc = 0x314428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314424u;
            // 0x314428: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31442Cu; }
        if (ctx->pc != 0x31442Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31442Cu; }
        if (ctx->pc != 0x31442Cu) { return; }
    }
    ctx->pc = 0x31442Cu;
label_31442c:
    // 0x31442c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_314430:
    // 0x314430: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x314430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_314434:
    // 0x314434: 0xc040180  jal         func_100600
label_314438:
    if (ctx->pc == 0x314438u) {
        ctx->pc = 0x314438u;
            // 0x314438: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x31443Cu;
        goto label_31443c;
    }
    ctx->pc = 0x314434u;
    SET_GPR_U32(ctx, 31, 0x31443Cu);
    ctx->pc = 0x314438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314434u;
            // 0x314438: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31443Cu; }
        if (ctx->pc != 0x31443Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31443Cu; }
        if (ctx->pc != 0x31443Cu) { return; }
    }
    ctx->pc = 0x31443Cu;
label_31443c:
    // 0x31443c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_314440:
    if (ctx->pc == 0x314440u) {
        ctx->pc = 0x314440u;
            // 0x314440: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x314444u;
        goto label_314444;
    }
    ctx->pc = 0x31443Cu;
    {
        const bool branch_taken_0x31443c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31443c) {
            ctx->pc = 0x314440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31443Cu;
            // 0x314440: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314460u;
            goto label_314460;
        }
    }
    ctx->pc = 0x314444u;
label_314444:
    // 0x314444: 0x8e070d98  lw          $a3, 0xD98($s0)
    ctx->pc = 0x314444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_314448:
    // 0x314448: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x314448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_31444c:
    // 0x31444c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31444cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314450:
    // 0x314450: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x314450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_314454:
    // 0x314454: 0xc0c3f60  jal         func_30FD80
label_314458:
    if (ctx->pc == 0x314458u) {
        ctx->pc = 0x314458u;
            // 0x314458: 0x24c6f690  addiu       $a2, $a2, -0x970 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964880));
        ctx->pc = 0x31445Cu;
        goto label_31445c;
    }
    ctx->pc = 0x314454u;
    SET_GPR_U32(ctx, 31, 0x31445Cu);
    ctx->pc = 0x314458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314454u;
            // 0x314458: 0x24c6f690  addiu       $a2, $a2, -0x970 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31445Cu; }
        if (ctx->pc != 0x31445Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31445Cu; }
        if (ctx->pc != 0x31445Cu) { return; }
    }
    ctx->pc = 0x31445Cu;
label_31445c:
    // 0x31445c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x31445cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_314460:
    // 0x314460: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x314460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_314464:
    // 0x314464: 0x94460064  lhu         $a2, 0x64($v0)
    ctx->pc = 0x314464u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 100)));
label_314468:
    // 0x314468: 0x26040ec0  addiu       $a0, $s0, 0xEC0
    ctx->pc = 0x314468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3776));
label_31446c:
    // 0x31446c: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x31446cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_314470:
    // 0x314470: 0x34c60200  ori         $a2, $a2, 0x200
    ctx->pc = 0x314470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
label_314474:
    // 0x314474: 0xa4460064  sh          $a2, 0x64($v0)
    ctx->pc = 0x314474u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 100), (uint16_t)GPR_U32(ctx, 6));
label_314478:
    // 0x314478: 0xac4500c0  sw          $a1, 0xC0($v0)
    ctx->pc = 0x314478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 5));
label_31447c:
    // 0x31447c: 0xac4400c4  sw          $a0, 0xC4($v0)
    ctx->pc = 0x31447cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 4));
label_314480:
    // 0x314480: 0xac4300c8  sw          $v1, 0xC8($v0)
    ctx->pc = 0x314480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
label_314484:
    // 0x314484: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x314484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_314488:
    // 0x314488: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x314488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31448c:
    // 0x31448c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x31448cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_314490:
    // 0x314490: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x314490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_314494:
    // 0x314494: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x314494u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_314498:
    // 0x314498: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x314498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31449c:
    // 0x31449c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31449cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3144a0:
    // 0x3144a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3144a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3144a4:
    // 0x3144a4: 0x3e00008  jr          $ra
label_3144a8:
    if (ctx->pc == 0x3144A8u) {
        ctx->pc = 0x3144A8u;
            // 0x3144a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3144ACu;
        goto label_3144ac;
    }
    ctx->pc = 0x3144A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3144A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3144A4u;
            // 0x3144a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3144ACu;
label_3144ac:
    // 0x3144ac: 0x0  nop
    ctx->pc = 0x3144acu;
    // NOP
label_3144b0:
    // 0x3144b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3144b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3144b4:
    // 0x3144b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3144b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3144b8:
    // 0x3144b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3144b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3144bc:
    // 0x3144bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3144bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3144c0:
    // 0x3144c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3144c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3144c4:
    // 0x3144c4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_3144c8:
    if (ctx->pc == 0x3144C8u) {
        ctx->pc = 0x3144C8u;
            // 0x3144c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3144CCu;
        goto label_3144cc;
    }
    ctx->pc = 0x3144C4u;
    {
        const bool branch_taken_0x3144c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3144C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3144C4u;
            // 0x3144c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144c4) {
            ctx->pc = 0x314528u;
            goto label_314528;
        }
    }
    ctx->pc = 0x3144CCu;
label_3144cc:
    // 0x3144cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3144ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3144d0:
    // 0x3144d0: 0x24424350  addiu       $v0, $v0, 0x4350
    ctx->pc = 0x3144d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17232));
label_3144d4:
    // 0x3144d4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3144d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3144d8:
    // 0x3144d8: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x3144d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_3144dc:
    // 0x3144dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3144dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3144e0:
    // 0x3144e0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3144e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3144e4:
    // 0x3144e4: 0x320f809  jalr        $t9
label_3144e8:
    if (ctx->pc == 0x3144E8u) {
        ctx->pc = 0x3144E8u;
            // 0x3144e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3144ECu;
        goto label_3144ec;
    }
    ctx->pc = 0x3144E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3144ECu);
        ctx->pc = 0x3144E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3144E4u;
            // 0x3144e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3144ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3144ECu; }
            if (ctx->pc != 0x3144ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3144ECu;
label_3144ec:
    // 0x3144ec: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_3144f0:
    if (ctx->pc == 0x3144F0u) {
        ctx->pc = 0x3144F0u;
            // 0x3144f0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3144F4u;
        goto label_3144f4;
    }
    ctx->pc = 0x3144ECu;
    {
        const bool branch_taken_0x3144ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3144ec) {
            ctx->pc = 0x3144F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3144ECu;
            // 0x3144f0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314514u;
            goto label_314514;
        }
    }
    ctx->pc = 0x3144F4u;
label_3144f4:
    // 0x3144f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3144f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3144f8:
    // 0x3144f8: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x3144f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_3144fc:
    // 0x3144fc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_314500:
    if (ctx->pc == 0x314500u) {
        ctx->pc = 0x314500u;
            // 0x314500: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x314504u;
        goto label_314504;
    }
    ctx->pc = 0x3144FCu;
    {
        const bool branch_taken_0x3144fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x314500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3144FCu;
            // 0x314500: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144fc) {
            ctx->pc = 0x314510u;
            goto label_314510;
        }
    }
    ctx->pc = 0x314504u;
label_314504:
    // 0x314504: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x314504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_314508:
    // 0x314508: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x314508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_31450c:
    // 0x31450c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x31450cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_314510:
    // 0x314510: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x314510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_314514:
    // 0x314514: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x314514u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_314518:
    // 0x314518: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_31451c:
    if (ctx->pc == 0x31451Cu) {
        ctx->pc = 0x31451Cu;
            // 0x31451c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314520u;
        goto label_314520;
    }
    ctx->pc = 0x314518u;
    {
        const bool branch_taken_0x314518 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x314518) {
            ctx->pc = 0x31451Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314518u;
            // 0x31451c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31452Cu;
            goto label_31452c;
        }
    }
    ctx->pc = 0x314520u;
label_314520:
    // 0x314520: 0xc0400a8  jal         func_1002A0
label_314524:
    if (ctx->pc == 0x314524u) {
        ctx->pc = 0x314524u;
            // 0x314524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314528u;
        goto label_314528;
    }
    ctx->pc = 0x314520u;
    SET_GPR_U32(ctx, 31, 0x314528u);
    ctx->pc = 0x314524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314520u;
            // 0x314524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314528u; }
        if (ctx->pc != 0x314528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314528u; }
        if (ctx->pc != 0x314528u) { return; }
    }
    ctx->pc = 0x314528u;
label_314528:
    // 0x314528: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x314528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31452c:
    // 0x31452c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31452cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_314530:
    // 0x314530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x314530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314534:
    // 0x314534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x314534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_314538:
    // 0x314538: 0x3e00008  jr          $ra
label_31453c:
    if (ctx->pc == 0x31453Cu) {
        ctx->pc = 0x31453Cu;
            // 0x31453c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x314540u;
        goto label_314540;
    }
    ctx->pc = 0x314538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31453Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314538u;
            // 0x31453c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314540u;
label_314540:
    // 0x314540: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x314540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_314544:
    // 0x314544: 0x3e00008  jr          $ra
label_314548:
    if (ctx->pc == 0x314548u) {
        ctx->pc = 0x314548u;
            // 0x314548: 0xc440bcf0  lwc1        $f0, -0x4310($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x31454Cu;
        goto label_31454c;
    }
    ctx->pc = 0x314544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314544u;
            // 0x314548: 0xc440bcf0  lwc1        $f0, -0x4310($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31454Cu;
label_31454c:
    // 0x31454c: 0x0  nop
    ctx->pc = 0x31454cu;
    // NOP
label_314550:
    // 0x314550: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x314550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_314554:
    // 0x314554: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x314554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_314558:
    // 0x314558: 0xc440bcf0  lwc1        $f0, -0x4310($v0)
    ctx->pc = 0x314558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31455c:
    // 0x31455c: 0x3e00008  jr          $ra
label_314560:
    if (ctx->pc == 0x314560u) {
        ctx->pc = 0x314560u;
            // 0x314560: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x314564u;
        goto label_314564;
    }
    ctx->pc = 0x31455Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31455Cu;
            // 0x314560: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314564u;
label_314564:
    // 0x314564: 0x0  nop
    ctx->pc = 0x314564u;
    // NOP
label_314568:
    // 0x314568: 0x0  nop
    ctx->pc = 0x314568u;
    // NOP
label_31456c:
    // 0x31456c: 0x0  nop
    ctx->pc = 0x31456cu;
    // NOP
label_314570:
    // 0x314570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x314570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_314574:
    // 0x314574: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x314574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_314578:
    // 0x314578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31457c:
    // 0x31457c: 0x8c63f620  lw          $v1, -0x9E0($v1)
    ctx->pc = 0x31457cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964768)));
label_314580:
    // 0x314580: 0x54600036  bnel        $v1, $zero, . + 4 + (0x36 << 2)
label_314584:
    if (ctx->pc == 0x314584u) {
        ctx->pc = 0x314584u;
            // 0x314584: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x314588u;
        goto label_314588;
    }
    ctx->pc = 0x314580u;
    {
        const bool branch_taken_0x314580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x314580) {
            ctx->pc = 0x314584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314580u;
            // 0x314584: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31465Cu;
            goto label_31465c;
        }
    }
    ctx->pc = 0x314588u;
label_314588:
    // 0x314588: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x314588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_31458c:
    // 0x31458c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31458cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_314590:
    // 0x314590: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x314590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_314594:
    // 0x314594: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x314594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_314598:
    // 0x314598: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x314598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_31459c:
    // 0x31459c: 0x2484f620  addiu       $a0, $a0, -0x9E0
    ctx->pc = 0x31459cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964768));
label_3145a0:
    // 0x3145a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3145a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3145a4:
    // 0x3145a4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3145a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3145a8:
    // 0x3145a8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3145a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3145ac:
    // 0x3145ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3145acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3145b0:
    // 0x3145b0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3145b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_3145b4:
    // 0x3145b4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3145b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3145b8:
    // 0x3145b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3145b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3145bc:
    // 0x3145bc: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x3145bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_3145c0:
    // 0x3145c0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x3145c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_3145c4:
    // 0x3145c4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3145c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3145c8:
    // 0x3145c8: 0xc075128  jal         func_1D44A0
label_3145cc:
    if (ctx->pc == 0x3145CCu) {
        ctx->pc = 0x3145CCu;
            // 0x3145cc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x3145D0u;
        goto label_3145d0;
    }
    ctx->pc = 0x3145C8u;
    SET_GPR_U32(ctx, 31, 0x3145D0u);
    ctx->pc = 0x3145CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3145C8u;
            // 0x3145cc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3145D0u; }
        if (ctx->pc != 0x3145D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3145D0u; }
        if (ctx->pc != 0x3145D0u) { return; }
    }
    ctx->pc = 0x3145D0u;
label_3145d0:
    // 0x3145d0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3145d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3145d4:
    // 0x3145d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3145d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3145d8:
    // 0x3145d8: 0x8c86f620  lw          $a2, -0x9E0($a0)
    ctx->pc = 0x3145d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964768)));
label_3145dc:
    // 0x3145dc: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x3145dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_3145e0:
    // 0x3145e0: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x3145e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_3145e4:
    // 0x3145e4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3145e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3145e8:
    // 0x3145e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3145ec:
    if (ctx->pc == 0x3145ECu) {
        ctx->pc = 0x3145F0u;
        goto label_3145f0;
    }
    ctx->pc = 0x3145E8u;
    {
        const bool branch_taken_0x3145e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3145e8) {
            ctx->pc = 0x3145F8u;
            goto label_3145f8;
        }
    }
    ctx->pc = 0x3145F0u;
label_3145f0:
    // 0x3145f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3145f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3145f4:
    // 0x3145f4: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x3145f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_3145f8:
    // 0x3145f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3145f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3145fc:
    // 0x3145fc: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x3145fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_314600:
    // 0x314600: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x314600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_314604:
    // 0x314604: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x314604u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_314608:
    // 0x314608: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_31460c:
    if (ctx->pc == 0x31460Cu) {
        ctx->pc = 0x31460Cu;
            // 0x31460c: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x314610u;
        goto label_314610;
    }
    ctx->pc = 0x314608u;
    {
        const bool branch_taken_0x314608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31460Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314608u;
            // 0x31460c: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314608) {
            ctx->pc = 0x314618u;
            goto label_314618;
        }
    }
    ctx->pc = 0x314610u;
label_314610:
    // 0x314610: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x314610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_314614:
    // 0x314614: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x314614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_314618:
    // 0x314618: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x314618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31461c:
    // 0x31461c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x31461cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_314620:
    // 0x314620: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x314620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_314624:
    // 0x314624: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x314624u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_314628:
    // 0x314628: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_31462c:
    if (ctx->pc == 0x31462Cu) {
        ctx->pc = 0x314630u;
        goto label_314630;
    }
    ctx->pc = 0x314628u;
    {
        const bool branch_taken_0x314628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x314628) {
            ctx->pc = 0x314638u;
            goto label_314638;
        }
    }
    ctx->pc = 0x314630u;
label_314630:
    // 0x314630: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x314630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_314634:
    // 0x314634: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x314634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_314638:
    // 0x314638: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x314638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31463c:
    // 0x31463c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x31463cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_314640:
    // 0x314640: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x314640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_314644:
    // 0x314644: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x314644u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_314648:
    // 0x314648: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_31464c:
    if (ctx->pc == 0x31464Cu) {
        ctx->pc = 0x314650u;
        goto label_314650;
    }
    ctx->pc = 0x314648u;
    {
        const bool branch_taken_0x314648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x314648) {
            ctx->pc = 0x314658u;
            goto label_314658;
        }
    }
    ctx->pc = 0x314650u;
label_314650:
    // 0x314650: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x314650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_314654:
    // 0x314654: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x314654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_314658:
    // 0x314658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31465c:
    // 0x31465c: 0x3e00008  jr          $ra
label_314660:
    if (ctx->pc == 0x314660u) {
        ctx->pc = 0x314660u;
            // 0x314660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x314664u;
        goto label_314664;
    }
    ctx->pc = 0x31465Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31465Cu;
            // 0x314660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314664u;
label_314664:
    // 0x314664: 0x0  nop
    ctx->pc = 0x314664u;
    // NOP
label_314668:
    // 0x314668: 0x0  nop
    ctx->pc = 0x314668u;
    // NOP
label_31466c:
    // 0x31466c: 0x0  nop
    ctx->pc = 0x31466cu;
    // NOP
label_314670:
    // 0x314670: 0x3e00008  jr          $ra
label_314674:
    if (ctx->pc == 0x314674u) {
        ctx->pc = 0x314678u;
        goto label_314678;
    }
    ctx->pc = 0x314670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314678u;
label_314678:
    // 0x314678: 0x0  nop
    ctx->pc = 0x314678u;
    // NOP
label_31467c:
    // 0x31467c: 0x0  nop
    ctx->pc = 0x31467cu;
    // NOP
label_314680:
    // 0x314680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x314680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_314684:
    // 0x314684: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x314684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_314688:
    // 0x314688: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x314688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31468c:
    // 0x31468c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31468cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_314690:
    // 0x314690: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x314690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_314694:
    // 0x314694: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x314694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_314698:
    // 0x314698: 0xc075830  jal         func_1D60C0
label_31469c:
    if (ctx->pc == 0x31469Cu) {
        ctx->pc = 0x31469Cu;
            // 0x31469c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3146A0u;
        goto label_3146a0;
    }
    ctx->pc = 0x314698u;
    SET_GPR_U32(ctx, 31, 0x3146A0u);
    ctx->pc = 0x31469Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314698u;
            // 0x31469c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D60C0u;
    if (runtime->hasFunction(0x1D60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D60C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3146A0u; }
        if (ctx->pc != 0x3146A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D60C0_0x1d60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3146A0u; }
        if (ctx->pc != 0x3146A0u) { return; }
    }
    ctx->pc = 0x3146A0u;
label_3146a0:
    // 0x3146a0: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x3146a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3146a4:
    // 0x3146a4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3146a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3146a8:
    // 0x3146a8: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x3146a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_3146ac:
    // 0x3146ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3146acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3146b0:
    // 0x3146b0: 0x820511ad  lb          $a1, 0x11AD($s0)
    ctx->pc = 0x3146b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4525)));
label_3146b4:
    // 0x3146b4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3146b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3146b8:
    // 0x3146b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3146b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3146bc:
    // 0x3146bc: 0x10430071  beq         $v0, $v1, . + 4 + (0x71 << 2)
label_3146c0:
    if (ctx->pc == 0x3146C0u) {
        ctx->pc = 0x3146C0u;
            // 0x3146c0: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3146C4u;
        goto label_3146c4;
    }
    ctx->pc = 0x3146BCu;
    {
        const bool branch_taken_0x3146bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3146C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3146BCu;
            // 0x3146c0: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146bc) {
            ctx->pc = 0x314884u;
            goto label_314884;
        }
    }
    ctx->pc = 0x3146C4u;
label_3146c4:
    // 0x3146c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3146c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3146c8:
    // 0x3146c8: 0x50440040  beql        $v0, $a0, . + 4 + (0x40 << 2)
label_3146cc:
    if (ctx->pc == 0x3146CCu) {
        ctx->pc = 0x3146CCu;
            // 0x3146cc: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x3146D0u;
        goto label_3146d0;
    }
    ctx->pc = 0x3146C8u;
    {
        const bool branch_taken_0x3146c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3146c8) {
            ctx->pc = 0x3146CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3146C8u;
            // 0x3146cc: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3147CCu;
            goto label_3147cc;
        }
    }
    ctx->pc = 0x3146D0u;
label_3146d0:
    // 0x3146d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3146d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3146d4:
    // 0x3146d4: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
label_3146d8:
    if (ctx->pc == 0x3146D8u) {
        ctx->pc = 0x3146D8u;
            // 0x3146d8: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x3146DCu;
        goto label_3146dc;
    }
    ctx->pc = 0x3146D4u;
    {
        const bool branch_taken_0x3146d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3146d4) {
            ctx->pc = 0x3146D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3146D4u;
            // 0x3146d8: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314708u;
            goto label_314708;
        }
    }
    ctx->pc = 0x3146DCu;
label_3146dc:
    // 0x3146dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3146dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3146e0:
    // 0x3146e0: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_3146e4:
    if (ctx->pc == 0x3146E4u) {
        ctx->pc = 0x3146E4u;
            // 0x3146e4: 0x8e0311bc  lw          $v1, 0x11BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4540)));
        ctx->pc = 0x3146E8u;
        goto label_3146e8;
    }
    ctx->pc = 0x3146E0u;
    {
        const bool branch_taken_0x3146e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3146e0) {
            ctx->pc = 0x3146E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3146E0u;
            // 0x3146e4: 0x8e0311bc  lw          $v1, 0x11BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4540)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3146F0u;
            goto label_3146f0;
        }
    }
    ctx->pc = 0x3146E8u;
label_3146e8:
    // 0x3146e8: 0x1000006b  b           . + 4 + (0x6B << 2)
label_3146ec:
    if (ctx->pc == 0x3146ECu) {
        ctx->pc = 0x3146ECu;
            // 0x3146ec: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x3146F0u;
        goto label_3146f0;
    }
    ctx->pc = 0x3146E8u;
    {
        const bool branch_taken_0x3146e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3146ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3146E8u;
            // 0x3146ec: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146e8) {
            ctx->pc = 0x314898u;
            goto label_314898;
        }
    }
    ctx->pc = 0x3146F0u;
label_3146f0:
    // 0x3146f0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_3146f4:
    if (ctx->pc == 0x3146F4u) {
        ctx->pc = 0x3146F4u;
            // 0x3146f4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3146F8u;
        goto label_3146f8;
    }
    ctx->pc = 0x3146F0u;
    {
        const bool branch_taken_0x3146f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3146f0) {
            ctx->pc = 0x3146F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3146F0u;
            // 0x3146f4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314700u;
            goto label_314700;
        }
    }
    ctx->pc = 0x3146F8u;
label_3146f8:
    // 0x3146f8: 0x10000066  b           . + 4 + (0x66 << 2)
label_3146fc:
    if (ctx->pc == 0x3146FCu) {
        ctx->pc = 0x3146FCu;
            // 0x3146fc: 0xae440050  sw          $a0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 4));
        ctx->pc = 0x314700u;
        goto label_314700;
    }
    ctx->pc = 0x3146F8u;
    {
        const bool branch_taken_0x3146f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3146FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3146F8u;
            // 0x3146fc: 0xae440050  sw          $a0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146f8) {
            ctx->pc = 0x314894u;
            goto label_314894;
        }
    }
    ctx->pc = 0x314700u;
label_314700:
    // 0x314700: 0x10000064  b           . + 4 + (0x64 << 2)
label_314704:
    if (ctx->pc == 0x314704u) {
        ctx->pc = 0x314704u;
            // 0x314704: 0xae430050  sw          $v1, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x314708u;
        goto label_314708;
    }
    ctx->pc = 0x314700u;
    {
        const bool branch_taken_0x314700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314700u;
            // 0x314704: 0xae430050  sw          $v1, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314700) {
            ctx->pc = 0x314894u;
            goto label_314894;
        }
    }
    ctx->pc = 0x314708u;
label_314708:
    // 0x314708: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x314708u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_31470c:
    // 0x31470c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_314710:
    if (ctx->pc == 0x314710u) {
        ctx->pc = 0x314710u;
            // 0x314710: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314714u;
        goto label_314714;
    }
    ctx->pc = 0x31470Cu;
    {
        const bool branch_taken_0x31470c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x314710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31470Cu;
            // 0x314710: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31470c) {
            ctx->pc = 0x314724u;
            goto label_314724;
        }
    }
    ctx->pc = 0x314714u;
label_314714:
    // 0x314714: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x314714u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_314718:
    // 0x314718: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_31471c:
    if (ctx->pc == 0x31471Cu) {
        ctx->pc = 0x314720u;
        goto label_314720;
    }
    ctx->pc = 0x314718u;
    {
        const bool branch_taken_0x314718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x314718) {
            ctx->pc = 0x314724u;
            goto label_314724;
        }
    }
    ctx->pc = 0x314720u;
label_314720:
    // 0x314720: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x314720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_314724:
    // 0x314724: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_314728:
    if (ctx->pc == 0x314728u) {
        ctx->pc = 0x31472Cu;
        goto label_31472c;
    }
    ctx->pc = 0x314724u;
    {
        const bool branch_taken_0x314724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x314724) {
            ctx->pc = 0x314740u;
            goto label_314740;
        }
    }
    ctx->pc = 0x31472Cu;
label_31472c:
    // 0x31472c: 0xc075eb4  jal         func_1D7AD0
label_314730:
    if (ctx->pc == 0x314730u) {
        ctx->pc = 0x314730u;
            // 0x314730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314734u;
        goto label_314734;
    }
    ctx->pc = 0x31472Cu;
    SET_GPR_U32(ctx, 31, 0x314734u);
    ctx->pc = 0x314730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31472Cu;
            // 0x314730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314734u; }
        if (ctx->pc != 0x314734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314734u; }
        if (ctx->pc != 0x314734u) { return; }
    }
    ctx->pc = 0x314734u;
label_314734:
    // 0x314734: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_314738:
    if (ctx->pc == 0x314738u) {
        ctx->pc = 0x31473Cu;
        goto label_31473c;
    }
    ctx->pc = 0x314734u;
    {
        const bool branch_taken_0x314734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314734) {
            ctx->pc = 0x314740u;
            goto label_314740;
        }
    }
    ctx->pc = 0x31473Cu;
label_31473c:
    // 0x31473c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31473cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314740:
    // 0x314740: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_314744:
    if (ctx->pc == 0x314744u) {
        ctx->pc = 0x314744u;
            // 0x314744: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->pc = 0x314748u;
        goto label_314748;
    }
    ctx->pc = 0x314740u;
    {
        const bool branch_taken_0x314740 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x314740) {
            ctx->pc = 0x314744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314740u;
            // 0x314744: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3147B0u;
            goto label_3147b0;
        }
    }
    ctx->pc = 0x314748u;
label_314748:
    // 0x314748: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x314748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_31474c:
    // 0x31474c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x31474cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_314750:
    // 0x314750: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_314754:
    if (ctx->pc == 0x314754u) {
        ctx->pc = 0x314758u;
        goto label_314758;
    }
    ctx->pc = 0x314750u;
    {
        const bool branch_taken_0x314750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x314750) {
            ctx->pc = 0x3147ACu;
            goto label_3147ac;
        }
    }
    ctx->pc = 0x314758u;
label_314758:
    // 0x314758: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x314758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_31475c:
    // 0x31475c: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x31475cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_314760:
    // 0x314760: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_314764:
    if (ctx->pc == 0x314764u) {
        ctx->pc = 0x314764u;
            // 0x314764: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314768u;
        goto label_314768;
    }
    ctx->pc = 0x314760u;
    {
        const bool branch_taken_0x314760 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x314764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314760u;
            // 0x314764: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314760) {
            ctx->pc = 0x314778u;
            goto label_314778;
        }
    }
    ctx->pc = 0x314768u;
label_314768:
    // 0x314768: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x314768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_31476c:
    // 0x31476c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_314770:
    if (ctx->pc == 0x314770u) {
        ctx->pc = 0x314774u;
        goto label_314774;
    }
    ctx->pc = 0x31476Cu;
    {
        const bool branch_taken_0x31476c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31476c) {
            ctx->pc = 0x314778u;
            goto label_314778;
        }
    }
    ctx->pc = 0x314774u;
label_314774:
    // 0x314774: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x314774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_314778:
    // 0x314778: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_31477c:
    if (ctx->pc == 0x31477Cu) {
        ctx->pc = 0x314780u;
        goto label_314780;
    }
    ctx->pc = 0x314778u;
    {
        const bool branch_taken_0x314778 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x314778) {
            ctx->pc = 0x314794u;
            goto label_314794;
        }
    }
    ctx->pc = 0x314780u;
label_314780:
    // 0x314780: 0xc075eb4  jal         func_1D7AD0
label_314784:
    if (ctx->pc == 0x314784u) {
        ctx->pc = 0x314784u;
            // 0x314784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314788u;
        goto label_314788;
    }
    ctx->pc = 0x314780u;
    SET_GPR_U32(ctx, 31, 0x314788u);
    ctx->pc = 0x314784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314780u;
            // 0x314784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314788u; }
        if (ctx->pc != 0x314788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314788u; }
        if (ctx->pc != 0x314788u) { return; }
    }
    ctx->pc = 0x314788u;
label_314788:
    // 0x314788: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_31478c:
    if (ctx->pc == 0x31478Cu) {
        ctx->pc = 0x314790u;
        goto label_314790;
    }
    ctx->pc = 0x314788u;
    {
        const bool branch_taken_0x314788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314788) {
            ctx->pc = 0x314794u;
            goto label_314794;
        }
    }
    ctx->pc = 0x314790u;
label_314790:
    // 0x314790: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x314790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314794:
    // 0x314794: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_314798:
    if (ctx->pc == 0x314798u) {
        ctx->pc = 0x31479Cu;
        goto label_31479c;
    }
    ctx->pc = 0x314794u;
    {
        const bool branch_taken_0x314794 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x314794) {
            ctx->pc = 0x3147ACu;
            goto label_3147ac;
        }
    }
    ctx->pc = 0x31479Cu;
label_31479c:
    // 0x31479c: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x31479cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_3147a0:
    // 0x3147a0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3147a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3147a4:
    // 0x3147a4: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_3147a8:
    if (ctx->pc == 0x3147A8u) {
        ctx->pc = 0x3147A8u;
            // 0x3147a8: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x3147ACu;
        goto label_3147ac;
    }
    ctx->pc = 0x3147A4u;
    {
        const bool branch_taken_0x3147a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3147a4) {
            ctx->pc = 0x3147A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3147A4u;
            // 0x3147a8: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3147BCu;
            goto label_3147bc;
        }
    }
    ctx->pc = 0x3147ACu;
label_3147ac:
    // 0x3147ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x3147acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_3147b0:
    // 0x3147b0: 0xc073234  jal         func_1CC8D0
label_3147b4:
    if (ctx->pc == 0x3147B4u) {
        ctx->pc = 0x3147B4u;
            // 0x3147b4: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x3147B8u;
        goto label_3147b8;
    }
    ctx->pc = 0x3147B0u;
    SET_GPR_U32(ctx, 31, 0x3147B8u);
    ctx->pc = 0x3147B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3147B0u;
            // 0x3147b4: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3147B8u; }
        if (ctx->pc != 0x3147B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3147B8u; }
        if (ctx->pc != 0x3147B8u) { return; }
    }
    ctx->pc = 0x3147B8u;
label_3147b8:
    // 0x3147b8: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x3147b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_3147bc:
    // 0x3147bc: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3147bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3147c0:
    // 0x3147c0: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x3147c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_3147c4:
    // 0x3147c4: 0x10000033  b           . + 4 + (0x33 << 2)
label_3147c8:
    if (ctx->pc == 0x3147C8u) {
        ctx->pc = 0x3147C8u;
            // 0x3147c8: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3147CCu;
        goto label_3147cc;
    }
    ctx->pc = 0x3147C4u;
    {
        const bool branch_taken_0x3147c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3147C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3147C4u;
            // 0x3147c8: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147c4) {
            ctx->pc = 0x314894u;
            goto label_314894;
        }
    }
    ctx->pc = 0x3147CCu;
label_3147cc:
    // 0x3147cc: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x3147ccu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3147d0:
    // 0x3147d0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3147d4:
    if (ctx->pc == 0x3147D4u) {
        ctx->pc = 0x3147D4u;
            // 0x3147d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3147D8u;
        goto label_3147d8;
    }
    ctx->pc = 0x3147D0u;
    {
        const bool branch_taken_0x3147d0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3147D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3147D0u;
            // 0x3147d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147d0) {
            ctx->pc = 0x3147E8u;
            goto label_3147e8;
        }
    }
    ctx->pc = 0x3147D8u;
label_3147d8:
    // 0x3147d8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3147d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3147dc:
    // 0x3147dc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3147e0:
    if (ctx->pc == 0x3147E0u) {
        ctx->pc = 0x3147E4u;
        goto label_3147e4;
    }
    ctx->pc = 0x3147DCu;
    {
        const bool branch_taken_0x3147dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3147dc) {
            ctx->pc = 0x3147E8u;
            goto label_3147e8;
        }
    }
    ctx->pc = 0x3147E4u;
label_3147e4:
    // 0x3147e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3147e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3147e8:
    // 0x3147e8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3147ec:
    if (ctx->pc == 0x3147ECu) {
        ctx->pc = 0x3147F0u;
        goto label_3147f0;
    }
    ctx->pc = 0x3147E8u;
    {
        const bool branch_taken_0x3147e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3147e8) {
            ctx->pc = 0x314804u;
            goto label_314804;
        }
    }
    ctx->pc = 0x3147F0u;
label_3147f0:
    // 0x3147f0: 0xc075eb4  jal         func_1D7AD0
label_3147f4:
    if (ctx->pc == 0x3147F4u) {
        ctx->pc = 0x3147F4u;
            // 0x3147f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3147F8u;
        goto label_3147f8;
    }
    ctx->pc = 0x3147F0u;
    SET_GPR_U32(ctx, 31, 0x3147F8u);
    ctx->pc = 0x3147F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3147F0u;
            // 0x3147f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3147F8u; }
        if (ctx->pc != 0x3147F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3147F8u; }
        if (ctx->pc != 0x3147F8u) { return; }
    }
    ctx->pc = 0x3147F8u;
label_3147f8:
    // 0x3147f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3147fc:
    if (ctx->pc == 0x3147FCu) {
        ctx->pc = 0x314800u;
        goto label_314800;
    }
    ctx->pc = 0x3147F8u;
    {
        const bool branch_taken_0x3147f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3147f8) {
            ctx->pc = 0x314804u;
            goto label_314804;
        }
    }
    ctx->pc = 0x314800u;
label_314800:
    // 0x314800: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x314800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314804:
    // 0x314804: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_314808:
    if (ctx->pc == 0x314808u) {
        ctx->pc = 0x314808u;
            // 0x314808: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->pc = 0x31480Cu;
        goto label_31480c;
    }
    ctx->pc = 0x314804u;
    {
        const bool branch_taken_0x314804 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x314804) {
            ctx->pc = 0x314808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314804u;
            // 0x314808: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314874u;
            goto label_314874;
        }
    }
    ctx->pc = 0x31480Cu;
label_31480c:
    // 0x31480c: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x31480cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_314810:
    // 0x314810: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x314810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_314814:
    // 0x314814: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_314818:
    if (ctx->pc == 0x314818u) {
        ctx->pc = 0x31481Cu;
        goto label_31481c;
    }
    ctx->pc = 0x314814u;
    {
        const bool branch_taken_0x314814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x314814) {
            ctx->pc = 0x314870u;
            goto label_314870;
        }
    }
    ctx->pc = 0x31481Cu;
label_31481c:
    // 0x31481c: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x31481cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_314820:
    // 0x314820: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x314820u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_314824:
    // 0x314824: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_314828:
    if (ctx->pc == 0x314828u) {
        ctx->pc = 0x314828u;
            // 0x314828: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31482Cu;
        goto label_31482c;
    }
    ctx->pc = 0x314824u;
    {
        const bool branch_taken_0x314824 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x314828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314824u;
            // 0x314828: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314824) {
            ctx->pc = 0x31483Cu;
            goto label_31483c;
        }
    }
    ctx->pc = 0x31482Cu;
label_31482c:
    // 0x31482c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x31482cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_314830:
    // 0x314830: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_314834:
    if (ctx->pc == 0x314834u) {
        ctx->pc = 0x314838u;
        goto label_314838;
    }
    ctx->pc = 0x314830u;
    {
        const bool branch_taken_0x314830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x314830) {
            ctx->pc = 0x31483Cu;
            goto label_31483c;
        }
    }
    ctx->pc = 0x314838u;
label_314838:
    // 0x314838: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x314838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31483c:
    // 0x31483c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_314840:
    if (ctx->pc == 0x314840u) {
        ctx->pc = 0x314844u;
        goto label_314844;
    }
    ctx->pc = 0x31483Cu;
    {
        const bool branch_taken_0x31483c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31483c) {
            ctx->pc = 0x314858u;
            goto label_314858;
        }
    }
    ctx->pc = 0x314844u;
label_314844:
    // 0x314844: 0xc075eb4  jal         func_1D7AD0
label_314848:
    if (ctx->pc == 0x314848u) {
        ctx->pc = 0x314848u;
            // 0x314848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31484Cu;
        goto label_31484c;
    }
    ctx->pc = 0x314844u;
    SET_GPR_U32(ctx, 31, 0x31484Cu);
    ctx->pc = 0x314848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314844u;
            // 0x314848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31484Cu; }
        if (ctx->pc != 0x31484Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31484Cu; }
        if (ctx->pc != 0x31484Cu) { return; }
    }
    ctx->pc = 0x31484Cu;
label_31484c:
    // 0x31484c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_314850:
    if (ctx->pc == 0x314850u) {
        ctx->pc = 0x314854u;
        goto label_314854;
    }
    ctx->pc = 0x31484Cu;
    {
        const bool branch_taken_0x31484c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31484c) {
            ctx->pc = 0x314858u;
            goto label_314858;
        }
    }
    ctx->pc = 0x314854u;
label_314854:
    // 0x314854: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x314854u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314858:
    // 0x314858: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_31485c:
    if (ctx->pc == 0x31485Cu) {
        ctx->pc = 0x314860u;
        goto label_314860;
    }
    ctx->pc = 0x314858u;
    {
        const bool branch_taken_0x314858 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x314858) {
            ctx->pc = 0x314870u;
            goto label_314870;
        }
    }
    ctx->pc = 0x314860u;
label_314860:
    // 0x314860: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x314860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_314864:
    // 0x314864: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x314864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_314868:
    // 0x314868: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_31486c:
    if (ctx->pc == 0x31486Cu) {
        ctx->pc = 0x314870u;
        goto label_314870;
    }
    ctx->pc = 0x314868u;
    {
        const bool branch_taken_0x314868 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x314868) {
            ctx->pc = 0x314894u;
            goto label_314894;
        }
    }
    ctx->pc = 0x314870u;
label_314870:
    // 0x314870: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x314870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_314874:
    // 0x314874: 0xc073234  jal         func_1CC8D0
label_314878:
    if (ctx->pc == 0x314878u) {
        ctx->pc = 0x314878u;
            // 0x314878: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x31487Cu;
        goto label_31487c;
    }
    ctx->pc = 0x314874u;
    SET_GPR_U32(ctx, 31, 0x31487Cu);
    ctx->pc = 0x314878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314874u;
            // 0x314878: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31487Cu; }
        if (ctx->pc != 0x31487Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31487Cu; }
        if (ctx->pc != 0x31487Cu) { return; }
    }
    ctx->pc = 0x31487Cu;
label_31487c:
    // 0x31487c: 0x10000005  b           . + 4 + (0x5 << 2)
label_314880:
    if (ctx->pc == 0x314880u) {
        ctx->pc = 0x314884u;
        goto label_314884;
    }
    ctx->pc = 0x31487Cu;
    {
        const bool branch_taken_0x31487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31487c) {
            ctx->pc = 0x314894u;
            goto label_314894;
        }
    }
    ctx->pc = 0x314884u;
label_314884:
    // 0x314884: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x314884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_314888:
    // 0x314888: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x314888u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_31488c:
    // 0x31488c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x31488cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_314890:
    // 0x314890: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x314890u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_314894:
    // 0x314894: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x314894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_314898:
    // 0x314898: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x314898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_31489c:
    // 0x31489c: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_3148a0:
    if (ctx->pc == 0x3148A0u) {
        ctx->pc = 0x3148A0u;
            // 0x3148a0: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x3148A4u;
        goto label_3148a4;
    }
    ctx->pc = 0x31489Cu;
    {
        const bool branch_taken_0x31489c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31489c) {
            ctx->pc = 0x3148A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31489Cu;
            // 0x3148a0: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3148C0u;
            goto label_3148c0;
        }
    }
    ctx->pc = 0x3148A4u;
label_3148a4:
    // 0x3148a4: 0xc601118c  lwc1        $f1, 0x118C($s0)
    ctx->pc = 0x3148a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3148a8:
    // 0x3148a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3148a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3148ac:
    // 0x3148ac: 0x0  nop
    ctx->pc = 0x3148acu;
    // NOP
label_3148b0:
    // 0x3148b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3148b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3148b4:
    // 0x3148b4: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_3148b8:
    if (ctx->pc == 0x3148B8u) {
        ctx->pc = 0x3148B8u;
            // 0x3148b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3148BCu;
        goto label_3148bc;
    }
    ctx->pc = 0x3148B4u;
    {
        const bool branch_taken_0x3148b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3148b4) {
            ctx->pc = 0x3148B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3148B4u;
            // 0x3148b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3148F0u;
            goto label_3148f0;
        }
    }
    ctx->pc = 0x3148BCu;
label_3148bc:
    // 0x3148bc: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x3148bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3148c0:
    // 0x3148c0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_3148c4:
    if (ctx->pc == 0x3148C4u) {
        ctx->pc = 0x3148C4u;
            // 0x3148c4: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x3148C8u;
        goto label_3148c8;
    }
    ctx->pc = 0x3148C0u;
    {
        const bool branch_taken_0x3148c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3148c0) {
            ctx->pc = 0x3148C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3148C0u;
            // 0x3148c4: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3148DCu;
            goto label_3148dc;
        }
    }
    ctx->pc = 0x3148C8u;
label_3148c8:
    // 0x3148c8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3148c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3148cc:
    // 0x3148cc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3148ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3148d0:
    // 0x3148d0: 0xc057b7c  jal         func_15EDF0
label_3148d4:
    if (ctx->pc == 0x3148D4u) {
        ctx->pc = 0x3148D4u;
            // 0x3148d4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3148D8u;
        goto label_3148d8;
    }
    ctx->pc = 0x3148D0u;
    SET_GPR_U32(ctx, 31, 0x3148D8u);
    ctx->pc = 0x3148D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3148D0u;
            // 0x3148d4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3148D8u; }
        if (ctx->pc != 0x3148D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3148D8u; }
        if (ctx->pc != 0x3148D8u) { return; }
    }
    ctx->pc = 0x3148D8u;
label_3148d8:
    // 0x3148d8: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x3148d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_3148dc:
    // 0x3148dc: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x3148dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_3148e0:
    // 0x3148e0: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3148e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3148e4:
    // 0x3148e4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3148e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_3148e8:
    // 0x3148e8: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x3148e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_3148ec:
    // 0x3148ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3148ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3148f0:
    // 0x3148f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3148f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3148f4:
    // 0x3148f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3148f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3148f8:
    // 0x3148f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3148f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3148fc:
    // 0x3148fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3148fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_314900:
    // 0x314900: 0x3e00008  jr          $ra
label_314904:
    if (ctx->pc == 0x314904u) {
        ctx->pc = 0x314904u;
            // 0x314904: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x314908u;
        goto label_314908;
    }
    ctx->pc = 0x314900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314900u;
            // 0x314904: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314908u;
label_314908:
    // 0x314908: 0x0  nop
    ctx->pc = 0x314908u;
    // NOP
label_31490c:
    // 0x31490c: 0x0  nop
    ctx->pc = 0x31490cu;
    // NOP
label_314910:
    // 0x314910: 0x3e00008  jr          $ra
label_314914:
    if (ctx->pc == 0x314914u) {
        ctx->pc = 0x314918u;
        goto label_314918;
    }
    ctx->pc = 0x314910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314918u;
label_314918:
    // 0x314918: 0x0  nop
    ctx->pc = 0x314918u;
    // NOP
label_31491c:
    // 0x31491c: 0x0  nop
    ctx->pc = 0x31491cu;
    // NOP
label_314920:
    // 0x314920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x314920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_314924:
    // 0x314924: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x314924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_314928:
    // 0x314928: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x314928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31492c:
    // 0x31492c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31492cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_314930:
    // 0x314930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x314930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_314934:
    // 0x314934: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x314934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_314938:
    // 0x314938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x314938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31493c:
    // 0x31493c: 0xc12ca3c  jal         func_4B28F0
label_314940:
    if (ctx->pc == 0x314940u) {
        ctx->pc = 0x314940u;
            // 0x314940: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x314944u;
        goto label_314944;
    }
    ctx->pc = 0x31493Cu;
    SET_GPR_U32(ctx, 31, 0x314944u);
    ctx->pc = 0x314940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31493Cu;
            // 0x314940: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314944u; }
        if (ctx->pc != 0x314944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314944u; }
        if (ctx->pc != 0x314944u) { return; }
    }
    ctx->pc = 0x314944u;
label_314944:
    // 0x314944: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x314944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_314948:
    // 0x314948: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_31494c:
    if (ctx->pc == 0x31494Cu) {
        ctx->pc = 0x31494Cu;
            // 0x31494c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x314950u;
        goto label_314950;
    }
    ctx->pc = 0x314948u;
    {
        const bool branch_taken_0x314948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x314948) {
            ctx->pc = 0x31494Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314948u;
            // 0x31494c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31499Cu;
            goto label_31499c;
        }
    }
    ctx->pc = 0x314950u;
label_314950:
    // 0x314950: 0xc040180  jal         func_100600
label_314954:
    if (ctx->pc == 0x314954u) {
        ctx->pc = 0x314954u;
            // 0x314954: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x314958u;
        goto label_314958;
    }
    ctx->pc = 0x314950u;
    SET_GPR_U32(ctx, 31, 0x314958u);
    ctx->pc = 0x314954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314950u;
            // 0x314954: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314958u; }
        if (ctx->pc != 0x314958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314958u; }
        if (ctx->pc != 0x314958u) { return; }
    }
    ctx->pc = 0x314958u;
label_314958:
    // 0x314958: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_31495c:
    if (ctx->pc == 0x31495Cu) {
        ctx->pc = 0x31495Cu;
            // 0x31495c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314960u;
        goto label_314960;
    }
    ctx->pc = 0x314958u;
    {
        const bool branch_taken_0x314958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31495Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314958u;
            // 0x31495c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314958) {
            ctx->pc = 0x314994u;
            goto label_314994;
        }
    }
    ctx->pc = 0x314960u;
label_314960:
    // 0x314960: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x314960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_314964:
    // 0x314964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x314964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314968:
    // 0x314968: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x314968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_31496c:
    // 0x31496c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31496cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314970:
    // 0x314970: 0xc10ca68  jal         func_4329A0
label_314974:
    if (ctx->pc == 0x314974u) {
        ctx->pc = 0x314974u;
            // 0x314974: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314978u;
        goto label_314978;
    }
    ctx->pc = 0x314970u;
    SET_GPR_U32(ctx, 31, 0x314978u);
    ctx->pc = 0x314974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314970u;
            // 0x314974: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314978u; }
        if (ctx->pc != 0x314978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314978u; }
        if (ctx->pc != 0x314978u) { return; }
    }
    ctx->pc = 0x314978u;
label_314978:
    // 0x314978: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x314978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_31497c:
    // 0x31497c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x31497cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_314980:
    // 0x314980: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x314980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_314984:
    // 0x314984: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x314984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_314988:
    // 0x314988: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x314988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_31498c:
    // 0x31498c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31498cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_314990:
    // 0x314990: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x314990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_314994:
    // 0x314994: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x314994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_314998:
    // 0x314998: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x314998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31499c:
    // 0x31499c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31499cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3149a0:
    // 0x3149a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3149a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3149a4:
    // 0x3149a4: 0x3e00008  jr          $ra
label_3149a8:
    if (ctx->pc == 0x3149A8u) {
        ctx->pc = 0x3149A8u;
            // 0x3149a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3149ACu;
        goto label_3149ac;
    }
    ctx->pc = 0x3149A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3149A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3149A4u;
            // 0x3149a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3149ACu;
label_3149ac:
    // 0x3149ac: 0x0  nop
    ctx->pc = 0x3149acu;
    // NOP
label_3149b0:
    // 0x3149b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3149b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3149b4:
    // 0x3149b4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x3149b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_3149b8:
    // 0x3149b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3149b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3149bc:
    // 0x3149bc: 0x24a5cdb0  addiu       $a1, $a1, -0x3250
    ctx->pc = 0x3149bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954416));
label_3149c0:
    // 0x3149c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3149c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3149c4:
    // 0x3149c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3149c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3149c8:
    // 0x3149c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3149c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3149cc:
    // 0x3149cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3149ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3149d0:
    // 0x3149d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3149d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3149d4:
    // 0x3149d4: 0xc075728  jal         func_1D5CA0
label_3149d8:
    if (ctx->pc == 0x3149D8u) {
        ctx->pc = 0x3149D8u;
            // 0x3149d8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x3149DCu;
        goto label_3149dc;
    }
    ctx->pc = 0x3149D4u;
    SET_GPR_U32(ctx, 31, 0x3149DCu);
    ctx->pc = 0x3149D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3149D4u;
            // 0x3149d8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3149DCu; }
        if (ctx->pc != 0x3149DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3149DCu; }
        if (ctx->pc != 0x3149DCu) { return; }
    }
    ctx->pc = 0x3149DCu;
label_3149dc:
    // 0x3149dc: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
label_3149e0:
    if (ctx->pc == 0x3149E0u) {
        ctx->pc = 0x3149E0u;
            // 0x3149e0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3149E4u;
        goto label_3149e4;
    }
    ctx->pc = 0x3149DCu;
    {
        const bool branch_taken_0x3149dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3149dc) {
            ctx->pc = 0x3149E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3149DCu;
            // 0x3149e0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314AF0u;
            goto label_314af0;
        }
    }
    ctx->pc = 0x3149E4u;
label_3149e4:
    // 0x3149e4: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x3149e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3149e8:
    // 0x3149e8: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x3149e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3149ec:
    // 0x3149ec: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x3149ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_3149f0:
    // 0x3149f0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3149f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3149f4:
    // 0x3149f4: 0x8e320d6c  lw          $s2, 0xD6C($s1)
    ctx->pc = 0x3149f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_3149f8:
    // 0x3149f8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3149f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3149fc:
    // 0x3149fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3149fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_314a00:
    // 0x314a00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x314a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_314a04:
    // 0x314a04: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x314a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_314a08:
    // 0x314a08: 0x320f809  jalr        $t9
label_314a0c:
    if (ctx->pc == 0x314A0Cu) {
        ctx->pc = 0x314A0Cu;
            // 0x314a0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314A10u;
        goto label_314a10;
    }
    ctx->pc = 0x314A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314A10u);
        ctx->pc = 0x314A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314A08u;
            // 0x314a0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314A10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314A10u; }
            if (ctx->pc != 0x314A10u) { return; }
        }
        }
    }
    ctx->pc = 0x314A10u;
label_314a10:
    // 0x314a10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x314a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_314a14:
    // 0x314a14: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x314a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_314a18:
    // 0x314a18: 0xc6620024  lwc1        $f2, 0x24($s3)
    ctx->pc = 0x314a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_314a1c:
    // 0x314a1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x314a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_314a20:
    // 0x314a20: 0x0  nop
    ctx->pc = 0x314a20u;
    // NOP
label_314a24:
    // 0x314a24: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x314a24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_314a28:
    // 0x314a28: 0xc4640018  lwc1        $f4, 0x18($v1)
    ctx->pc = 0x314a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_314a2c:
    // 0x314a2c: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x314a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
label_314a30:
    // 0x314a30: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x314a30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_314a34:
    // 0x314a34: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x314a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_314a38:
    // 0x314a38: 0xc6230dbc  lwc1        $f3, 0xDBC($s1)
    ctx->pc = 0x314a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_314a3c:
    // 0x314a3c: 0x4604a042  mul.s       $f1, $f20, $f4
    ctx->pc = 0x314a3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_314a40:
    // 0x314a40: 0x4603085c  madd.s      $f1, $f1, $f3
    ctx->pc = 0x314a40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_314a44:
    // 0x314a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_314a48:
    // 0x314a48: 0x0  nop
    ctx->pc = 0x314a48u;
    // NOP
label_314a4c:
    // 0x314a4c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x314a4cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_314a50:
    // 0x314a50: 0xc0477a8  jal         func_11DEA0
label_314a54:
    if (ctx->pc == 0x314A54u) {
        ctx->pc = 0x314A54u;
            // 0x314a54: 0xe6610024  swc1        $f1, 0x24($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
        ctx->pc = 0x314A58u;
        goto label_314a58;
    }
    ctx->pc = 0x314A50u;
    SET_GPR_U32(ctx, 31, 0x314A58u);
    ctx->pc = 0x314A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314A50u;
            // 0x314a54: 0xe6610024  swc1        $f1, 0x24($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314A58u; }
        if (ctx->pc != 0x314A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314A58u; }
        if (ctx->pc != 0x314A58u) { return; }
    }
    ctx->pc = 0x314A58u;
label_314a58:
    // 0x314a58: 0x3c024563  lui         $v0, 0x4563
    ctx->pc = 0x314a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17763 << 16));
label_314a5c:
    // 0x314a5c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_314a60:
    // 0x314a60: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x314a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_314a64:
    // 0x314a64: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x314a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_314a68:
    // 0x314a68: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x314a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_314a6c:
    // 0x314a6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x314a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_314a70:
    // 0x314a70: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x314a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_314a74:
    // 0x314a74: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x314a74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_314a78:
    // 0x314a78: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x314a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_314a7c:
    // 0x314a7c: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x314a7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_314a80:
    // 0x314a80: 0x4614209d  msub.s      $f2, $f4, $f20
    ctx->pc = 0x314a80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[20]));
label_314a84:
    // 0x314a84: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x314a84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_314a88:
    // 0x314a88: 0xc6210dc0  lwc1        $f1, 0xDC0($s1)
    ctx->pc = 0x314a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_314a8c:
    // 0x314a8c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x314a8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_314a90:
    // 0x314a90: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x314a90u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_314a94:
    // 0x314a94: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x314a94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_314a98:
    // 0x314a98: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314a98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_314a9c:
    // 0x314a9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314a9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_314aa0:
    // 0x314aa0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x314aa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_314aa4:
    // 0x314aa4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x314aa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_314aa8:
    // 0x314aa8: 0xc04cab0  jal         func_132AC0
label_314aac:
    if (ctx->pc == 0x314AACu) {
        ctx->pc = 0x314AACu;
            // 0x314aac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314AB0u;
        goto label_314ab0;
    }
    ctx->pc = 0x314AA8u;
    SET_GPR_U32(ctx, 31, 0x314AB0u);
    ctx->pc = 0x314AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314AA8u;
            // 0x314aac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AB0u; }
        if (ctx->pc != 0x314AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AB0u; }
        if (ctx->pc != 0x314AB0u) { return; }
    }
    ctx->pc = 0x314AB0u;
label_314ab0:
    // 0x314ab0: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x314ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_314ab4:
    // 0x314ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x314ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_314ab8:
    // 0x314ab8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x314ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_314abc:
    // 0x314abc: 0x320f809  jalr        $t9
label_314ac0:
    if (ctx->pc == 0x314AC0u) {
        ctx->pc = 0x314AC0u;
            // 0x314ac0: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x314AC4u;
        goto label_314ac4;
    }
    ctx->pc = 0x314ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314AC4u);
        ctx->pc = 0x314AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314ABCu;
            // 0x314ac0: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x314AC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314AC4u; }
            if (ctx->pc != 0x314AC4u) { return; }
        }
        }
    }
    ctx->pc = 0x314AC4u;
label_314ac4:
    // 0x314ac4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x314ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_314ac8:
    // 0x314ac8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x314ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_314acc:
    // 0x314acc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x314accu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_314ad0:
    // 0x314ad0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x314ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_314ad4:
    // 0x314ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x314ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_314ad8:
    // 0x314ad8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x314ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_314adc:
    // 0x314adc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x314adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_314ae0:
    // 0x314ae0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x314ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_314ae4:
    // 0x314ae4: 0xc04c72c  jal         func_131CB0
label_314ae8:
    if (ctx->pc == 0x314AE8u) {
        ctx->pc = 0x314AE8u;
            // 0x314ae8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314AECu;
        goto label_314aec;
    }
    ctx->pc = 0x314AE4u;
    SET_GPR_U32(ctx, 31, 0x314AECu);
    ctx->pc = 0x314AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314AE4u;
            // 0x314ae8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AECu; }
        if (ctx->pc != 0x314AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314AECu; }
        if (ctx->pc != 0x314AECu) { return; }
    }
    ctx->pc = 0x314AECu;
label_314aec:
    // 0x314aec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x314aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_314af0:
    // 0x314af0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x314af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_314af4:
    // 0x314af4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x314af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_314af8:
    // 0x314af8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x314af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_314afc:
    // 0x314afc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x314afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_314b00:
    // 0x314b00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314b04:
    // 0x314b04: 0x3e00008  jr          $ra
label_314b08:
    if (ctx->pc == 0x314B08u) {
        ctx->pc = 0x314B08u;
            // 0x314b08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x314B0Cu;
        goto label_314b0c;
    }
    ctx->pc = 0x314B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314B04u;
            // 0x314b08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314B0Cu;
label_314b0c:
    // 0x314b0c: 0x0  nop
    ctx->pc = 0x314b0cu;
    // NOP
}
