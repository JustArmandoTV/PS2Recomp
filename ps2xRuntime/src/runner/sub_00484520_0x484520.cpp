#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00484520
// Address: 0x484520 - 0x485240
void sub_00484520_0x484520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484520_0x484520");
#endif

    switch (ctx->pc) {
        case 0x484520u: goto label_484520;
        case 0x484524u: goto label_484524;
        case 0x484528u: goto label_484528;
        case 0x48452cu: goto label_48452c;
        case 0x484530u: goto label_484530;
        case 0x484534u: goto label_484534;
        case 0x484538u: goto label_484538;
        case 0x48453cu: goto label_48453c;
        case 0x484540u: goto label_484540;
        case 0x484544u: goto label_484544;
        case 0x484548u: goto label_484548;
        case 0x48454cu: goto label_48454c;
        case 0x484550u: goto label_484550;
        case 0x484554u: goto label_484554;
        case 0x484558u: goto label_484558;
        case 0x48455cu: goto label_48455c;
        case 0x484560u: goto label_484560;
        case 0x484564u: goto label_484564;
        case 0x484568u: goto label_484568;
        case 0x48456cu: goto label_48456c;
        case 0x484570u: goto label_484570;
        case 0x484574u: goto label_484574;
        case 0x484578u: goto label_484578;
        case 0x48457cu: goto label_48457c;
        case 0x484580u: goto label_484580;
        case 0x484584u: goto label_484584;
        case 0x484588u: goto label_484588;
        case 0x48458cu: goto label_48458c;
        case 0x484590u: goto label_484590;
        case 0x484594u: goto label_484594;
        case 0x484598u: goto label_484598;
        case 0x48459cu: goto label_48459c;
        case 0x4845a0u: goto label_4845a0;
        case 0x4845a4u: goto label_4845a4;
        case 0x4845a8u: goto label_4845a8;
        case 0x4845acu: goto label_4845ac;
        case 0x4845b0u: goto label_4845b0;
        case 0x4845b4u: goto label_4845b4;
        case 0x4845b8u: goto label_4845b8;
        case 0x4845bcu: goto label_4845bc;
        case 0x4845c0u: goto label_4845c0;
        case 0x4845c4u: goto label_4845c4;
        case 0x4845c8u: goto label_4845c8;
        case 0x4845ccu: goto label_4845cc;
        case 0x4845d0u: goto label_4845d0;
        case 0x4845d4u: goto label_4845d4;
        case 0x4845d8u: goto label_4845d8;
        case 0x4845dcu: goto label_4845dc;
        case 0x4845e0u: goto label_4845e0;
        case 0x4845e4u: goto label_4845e4;
        case 0x4845e8u: goto label_4845e8;
        case 0x4845ecu: goto label_4845ec;
        case 0x4845f0u: goto label_4845f0;
        case 0x4845f4u: goto label_4845f4;
        case 0x4845f8u: goto label_4845f8;
        case 0x4845fcu: goto label_4845fc;
        case 0x484600u: goto label_484600;
        case 0x484604u: goto label_484604;
        case 0x484608u: goto label_484608;
        case 0x48460cu: goto label_48460c;
        case 0x484610u: goto label_484610;
        case 0x484614u: goto label_484614;
        case 0x484618u: goto label_484618;
        case 0x48461cu: goto label_48461c;
        case 0x484620u: goto label_484620;
        case 0x484624u: goto label_484624;
        case 0x484628u: goto label_484628;
        case 0x48462cu: goto label_48462c;
        case 0x484630u: goto label_484630;
        case 0x484634u: goto label_484634;
        case 0x484638u: goto label_484638;
        case 0x48463cu: goto label_48463c;
        case 0x484640u: goto label_484640;
        case 0x484644u: goto label_484644;
        case 0x484648u: goto label_484648;
        case 0x48464cu: goto label_48464c;
        case 0x484650u: goto label_484650;
        case 0x484654u: goto label_484654;
        case 0x484658u: goto label_484658;
        case 0x48465cu: goto label_48465c;
        case 0x484660u: goto label_484660;
        case 0x484664u: goto label_484664;
        case 0x484668u: goto label_484668;
        case 0x48466cu: goto label_48466c;
        case 0x484670u: goto label_484670;
        case 0x484674u: goto label_484674;
        case 0x484678u: goto label_484678;
        case 0x48467cu: goto label_48467c;
        case 0x484680u: goto label_484680;
        case 0x484684u: goto label_484684;
        case 0x484688u: goto label_484688;
        case 0x48468cu: goto label_48468c;
        case 0x484690u: goto label_484690;
        case 0x484694u: goto label_484694;
        case 0x484698u: goto label_484698;
        case 0x48469cu: goto label_48469c;
        case 0x4846a0u: goto label_4846a0;
        case 0x4846a4u: goto label_4846a4;
        case 0x4846a8u: goto label_4846a8;
        case 0x4846acu: goto label_4846ac;
        case 0x4846b0u: goto label_4846b0;
        case 0x4846b4u: goto label_4846b4;
        case 0x4846b8u: goto label_4846b8;
        case 0x4846bcu: goto label_4846bc;
        case 0x4846c0u: goto label_4846c0;
        case 0x4846c4u: goto label_4846c4;
        case 0x4846c8u: goto label_4846c8;
        case 0x4846ccu: goto label_4846cc;
        case 0x4846d0u: goto label_4846d0;
        case 0x4846d4u: goto label_4846d4;
        case 0x4846d8u: goto label_4846d8;
        case 0x4846dcu: goto label_4846dc;
        case 0x4846e0u: goto label_4846e0;
        case 0x4846e4u: goto label_4846e4;
        case 0x4846e8u: goto label_4846e8;
        case 0x4846ecu: goto label_4846ec;
        case 0x4846f0u: goto label_4846f0;
        case 0x4846f4u: goto label_4846f4;
        case 0x4846f8u: goto label_4846f8;
        case 0x4846fcu: goto label_4846fc;
        case 0x484700u: goto label_484700;
        case 0x484704u: goto label_484704;
        case 0x484708u: goto label_484708;
        case 0x48470cu: goto label_48470c;
        case 0x484710u: goto label_484710;
        case 0x484714u: goto label_484714;
        case 0x484718u: goto label_484718;
        case 0x48471cu: goto label_48471c;
        case 0x484720u: goto label_484720;
        case 0x484724u: goto label_484724;
        case 0x484728u: goto label_484728;
        case 0x48472cu: goto label_48472c;
        case 0x484730u: goto label_484730;
        case 0x484734u: goto label_484734;
        case 0x484738u: goto label_484738;
        case 0x48473cu: goto label_48473c;
        case 0x484740u: goto label_484740;
        case 0x484744u: goto label_484744;
        case 0x484748u: goto label_484748;
        case 0x48474cu: goto label_48474c;
        case 0x484750u: goto label_484750;
        case 0x484754u: goto label_484754;
        case 0x484758u: goto label_484758;
        case 0x48475cu: goto label_48475c;
        case 0x484760u: goto label_484760;
        case 0x484764u: goto label_484764;
        case 0x484768u: goto label_484768;
        case 0x48476cu: goto label_48476c;
        case 0x484770u: goto label_484770;
        case 0x484774u: goto label_484774;
        case 0x484778u: goto label_484778;
        case 0x48477cu: goto label_48477c;
        case 0x484780u: goto label_484780;
        case 0x484784u: goto label_484784;
        case 0x484788u: goto label_484788;
        case 0x48478cu: goto label_48478c;
        case 0x484790u: goto label_484790;
        case 0x484794u: goto label_484794;
        case 0x484798u: goto label_484798;
        case 0x48479cu: goto label_48479c;
        case 0x4847a0u: goto label_4847a0;
        case 0x4847a4u: goto label_4847a4;
        case 0x4847a8u: goto label_4847a8;
        case 0x4847acu: goto label_4847ac;
        case 0x4847b0u: goto label_4847b0;
        case 0x4847b4u: goto label_4847b4;
        case 0x4847b8u: goto label_4847b8;
        case 0x4847bcu: goto label_4847bc;
        case 0x4847c0u: goto label_4847c0;
        case 0x4847c4u: goto label_4847c4;
        case 0x4847c8u: goto label_4847c8;
        case 0x4847ccu: goto label_4847cc;
        case 0x4847d0u: goto label_4847d0;
        case 0x4847d4u: goto label_4847d4;
        case 0x4847d8u: goto label_4847d8;
        case 0x4847dcu: goto label_4847dc;
        case 0x4847e0u: goto label_4847e0;
        case 0x4847e4u: goto label_4847e4;
        case 0x4847e8u: goto label_4847e8;
        case 0x4847ecu: goto label_4847ec;
        case 0x4847f0u: goto label_4847f0;
        case 0x4847f4u: goto label_4847f4;
        case 0x4847f8u: goto label_4847f8;
        case 0x4847fcu: goto label_4847fc;
        case 0x484800u: goto label_484800;
        case 0x484804u: goto label_484804;
        case 0x484808u: goto label_484808;
        case 0x48480cu: goto label_48480c;
        case 0x484810u: goto label_484810;
        case 0x484814u: goto label_484814;
        case 0x484818u: goto label_484818;
        case 0x48481cu: goto label_48481c;
        case 0x484820u: goto label_484820;
        case 0x484824u: goto label_484824;
        case 0x484828u: goto label_484828;
        case 0x48482cu: goto label_48482c;
        case 0x484830u: goto label_484830;
        case 0x484834u: goto label_484834;
        case 0x484838u: goto label_484838;
        case 0x48483cu: goto label_48483c;
        case 0x484840u: goto label_484840;
        case 0x484844u: goto label_484844;
        case 0x484848u: goto label_484848;
        case 0x48484cu: goto label_48484c;
        case 0x484850u: goto label_484850;
        case 0x484854u: goto label_484854;
        case 0x484858u: goto label_484858;
        case 0x48485cu: goto label_48485c;
        case 0x484860u: goto label_484860;
        case 0x484864u: goto label_484864;
        case 0x484868u: goto label_484868;
        case 0x48486cu: goto label_48486c;
        case 0x484870u: goto label_484870;
        case 0x484874u: goto label_484874;
        case 0x484878u: goto label_484878;
        case 0x48487cu: goto label_48487c;
        case 0x484880u: goto label_484880;
        case 0x484884u: goto label_484884;
        case 0x484888u: goto label_484888;
        case 0x48488cu: goto label_48488c;
        case 0x484890u: goto label_484890;
        case 0x484894u: goto label_484894;
        case 0x484898u: goto label_484898;
        case 0x48489cu: goto label_48489c;
        case 0x4848a0u: goto label_4848a0;
        case 0x4848a4u: goto label_4848a4;
        case 0x4848a8u: goto label_4848a8;
        case 0x4848acu: goto label_4848ac;
        case 0x4848b0u: goto label_4848b0;
        case 0x4848b4u: goto label_4848b4;
        case 0x4848b8u: goto label_4848b8;
        case 0x4848bcu: goto label_4848bc;
        case 0x4848c0u: goto label_4848c0;
        case 0x4848c4u: goto label_4848c4;
        case 0x4848c8u: goto label_4848c8;
        case 0x4848ccu: goto label_4848cc;
        case 0x4848d0u: goto label_4848d0;
        case 0x4848d4u: goto label_4848d4;
        case 0x4848d8u: goto label_4848d8;
        case 0x4848dcu: goto label_4848dc;
        case 0x4848e0u: goto label_4848e0;
        case 0x4848e4u: goto label_4848e4;
        case 0x4848e8u: goto label_4848e8;
        case 0x4848ecu: goto label_4848ec;
        case 0x4848f0u: goto label_4848f0;
        case 0x4848f4u: goto label_4848f4;
        case 0x4848f8u: goto label_4848f8;
        case 0x4848fcu: goto label_4848fc;
        case 0x484900u: goto label_484900;
        case 0x484904u: goto label_484904;
        case 0x484908u: goto label_484908;
        case 0x48490cu: goto label_48490c;
        case 0x484910u: goto label_484910;
        case 0x484914u: goto label_484914;
        case 0x484918u: goto label_484918;
        case 0x48491cu: goto label_48491c;
        case 0x484920u: goto label_484920;
        case 0x484924u: goto label_484924;
        case 0x484928u: goto label_484928;
        case 0x48492cu: goto label_48492c;
        case 0x484930u: goto label_484930;
        case 0x484934u: goto label_484934;
        case 0x484938u: goto label_484938;
        case 0x48493cu: goto label_48493c;
        case 0x484940u: goto label_484940;
        case 0x484944u: goto label_484944;
        case 0x484948u: goto label_484948;
        case 0x48494cu: goto label_48494c;
        case 0x484950u: goto label_484950;
        case 0x484954u: goto label_484954;
        case 0x484958u: goto label_484958;
        case 0x48495cu: goto label_48495c;
        case 0x484960u: goto label_484960;
        case 0x484964u: goto label_484964;
        case 0x484968u: goto label_484968;
        case 0x48496cu: goto label_48496c;
        case 0x484970u: goto label_484970;
        case 0x484974u: goto label_484974;
        case 0x484978u: goto label_484978;
        case 0x48497cu: goto label_48497c;
        case 0x484980u: goto label_484980;
        case 0x484984u: goto label_484984;
        case 0x484988u: goto label_484988;
        case 0x48498cu: goto label_48498c;
        case 0x484990u: goto label_484990;
        case 0x484994u: goto label_484994;
        case 0x484998u: goto label_484998;
        case 0x48499cu: goto label_48499c;
        case 0x4849a0u: goto label_4849a0;
        case 0x4849a4u: goto label_4849a4;
        case 0x4849a8u: goto label_4849a8;
        case 0x4849acu: goto label_4849ac;
        case 0x4849b0u: goto label_4849b0;
        case 0x4849b4u: goto label_4849b4;
        case 0x4849b8u: goto label_4849b8;
        case 0x4849bcu: goto label_4849bc;
        case 0x4849c0u: goto label_4849c0;
        case 0x4849c4u: goto label_4849c4;
        case 0x4849c8u: goto label_4849c8;
        case 0x4849ccu: goto label_4849cc;
        case 0x4849d0u: goto label_4849d0;
        case 0x4849d4u: goto label_4849d4;
        case 0x4849d8u: goto label_4849d8;
        case 0x4849dcu: goto label_4849dc;
        case 0x4849e0u: goto label_4849e0;
        case 0x4849e4u: goto label_4849e4;
        case 0x4849e8u: goto label_4849e8;
        case 0x4849ecu: goto label_4849ec;
        case 0x4849f0u: goto label_4849f0;
        case 0x4849f4u: goto label_4849f4;
        case 0x4849f8u: goto label_4849f8;
        case 0x4849fcu: goto label_4849fc;
        case 0x484a00u: goto label_484a00;
        case 0x484a04u: goto label_484a04;
        case 0x484a08u: goto label_484a08;
        case 0x484a0cu: goto label_484a0c;
        case 0x484a10u: goto label_484a10;
        case 0x484a14u: goto label_484a14;
        case 0x484a18u: goto label_484a18;
        case 0x484a1cu: goto label_484a1c;
        case 0x484a20u: goto label_484a20;
        case 0x484a24u: goto label_484a24;
        case 0x484a28u: goto label_484a28;
        case 0x484a2cu: goto label_484a2c;
        case 0x484a30u: goto label_484a30;
        case 0x484a34u: goto label_484a34;
        case 0x484a38u: goto label_484a38;
        case 0x484a3cu: goto label_484a3c;
        case 0x484a40u: goto label_484a40;
        case 0x484a44u: goto label_484a44;
        case 0x484a48u: goto label_484a48;
        case 0x484a4cu: goto label_484a4c;
        case 0x484a50u: goto label_484a50;
        case 0x484a54u: goto label_484a54;
        case 0x484a58u: goto label_484a58;
        case 0x484a5cu: goto label_484a5c;
        case 0x484a60u: goto label_484a60;
        case 0x484a64u: goto label_484a64;
        case 0x484a68u: goto label_484a68;
        case 0x484a6cu: goto label_484a6c;
        case 0x484a70u: goto label_484a70;
        case 0x484a74u: goto label_484a74;
        case 0x484a78u: goto label_484a78;
        case 0x484a7cu: goto label_484a7c;
        case 0x484a80u: goto label_484a80;
        case 0x484a84u: goto label_484a84;
        case 0x484a88u: goto label_484a88;
        case 0x484a8cu: goto label_484a8c;
        case 0x484a90u: goto label_484a90;
        case 0x484a94u: goto label_484a94;
        case 0x484a98u: goto label_484a98;
        case 0x484a9cu: goto label_484a9c;
        case 0x484aa0u: goto label_484aa0;
        case 0x484aa4u: goto label_484aa4;
        case 0x484aa8u: goto label_484aa8;
        case 0x484aacu: goto label_484aac;
        case 0x484ab0u: goto label_484ab0;
        case 0x484ab4u: goto label_484ab4;
        case 0x484ab8u: goto label_484ab8;
        case 0x484abcu: goto label_484abc;
        case 0x484ac0u: goto label_484ac0;
        case 0x484ac4u: goto label_484ac4;
        case 0x484ac8u: goto label_484ac8;
        case 0x484accu: goto label_484acc;
        case 0x484ad0u: goto label_484ad0;
        case 0x484ad4u: goto label_484ad4;
        case 0x484ad8u: goto label_484ad8;
        case 0x484adcu: goto label_484adc;
        case 0x484ae0u: goto label_484ae0;
        case 0x484ae4u: goto label_484ae4;
        case 0x484ae8u: goto label_484ae8;
        case 0x484aecu: goto label_484aec;
        case 0x484af0u: goto label_484af0;
        case 0x484af4u: goto label_484af4;
        case 0x484af8u: goto label_484af8;
        case 0x484afcu: goto label_484afc;
        case 0x484b00u: goto label_484b00;
        case 0x484b04u: goto label_484b04;
        case 0x484b08u: goto label_484b08;
        case 0x484b0cu: goto label_484b0c;
        case 0x484b10u: goto label_484b10;
        case 0x484b14u: goto label_484b14;
        case 0x484b18u: goto label_484b18;
        case 0x484b1cu: goto label_484b1c;
        case 0x484b20u: goto label_484b20;
        case 0x484b24u: goto label_484b24;
        case 0x484b28u: goto label_484b28;
        case 0x484b2cu: goto label_484b2c;
        case 0x484b30u: goto label_484b30;
        case 0x484b34u: goto label_484b34;
        case 0x484b38u: goto label_484b38;
        case 0x484b3cu: goto label_484b3c;
        case 0x484b40u: goto label_484b40;
        case 0x484b44u: goto label_484b44;
        case 0x484b48u: goto label_484b48;
        case 0x484b4cu: goto label_484b4c;
        case 0x484b50u: goto label_484b50;
        case 0x484b54u: goto label_484b54;
        case 0x484b58u: goto label_484b58;
        case 0x484b5cu: goto label_484b5c;
        case 0x484b60u: goto label_484b60;
        case 0x484b64u: goto label_484b64;
        case 0x484b68u: goto label_484b68;
        case 0x484b6cu: goto label_484b6c;
        case 0x484b70u: goto label_484b70;
        case 0x484b74u: goto label_484b74;
        case 0x484b78u: goto label_484b78;
        case 0x484b7cu: goto label_484b7c;
        case 0x484b80u: goto label_484b80;
        case 0x484b84u: goto label_484b84;
        case 0x484b88u: goto label_484b88;
        case 0x484b8cu: goto label_484b8c;
        case 0x484b90u: goto label_484b90;
        case 0x484b94u: goto label_484b94;
        case 0x484b98u: goto label_484b98;
        case 0x484b9cu: goto label_484b9c;
        case 0x484ba0u: goto label_484ba0;
        case 0x484ba4u: goto label_484ba4;
        case 0x484ba8u: goto label_484ba8;
        case 0x484bacu: goto label_484bac;
        case 0x484bb0u: goto label_484bb0;
        case 0x484bb4u: goto label_484bb4;
        case 0x484bb8u: goto label_484bb8;
        case 0x484bbcu: goto label_484bbc;
        case 0x484bc0u: goto label_484bc0;
        case 0x484bc4u: goto label_484bc4;
        case 0x484bc8u: goto label_484bc8;
        case 0x484bccu: goto label_484bcc;
        case 0x484bd0u: goto label_484bd0;
        case 0x484bd4u: goto label_484bd4;
        case 0x484bd8u: goto label_484bd8;
        case 0x484bdcu: goto label_484bdc;
        case 0x484be0u: goto label_484be0;
        case 0x484be4u: goto label_484be4;
        case 0x484be8u: goto label_484be8;
        case 0x484becu: goto label_484bec;
        case 0x484bf0u: goto label_484bf0;
        case 0x484bf4u: goto label_484bf4;
        case 0x484bf8u: goto label_484bf8;
        case 0x484bfcu: goto label_484bfc;
        case 0x484c00u: goto label_484c00;
        case 0x484c04u: goto label_484c04;
        case 0x484c08u: goto label_484c08;
        case 0x484c0cu: goto label_484c0c;
        case 0x484c10u: goto label_484c10;
        case 0x484c14u: goto label_484c14;
        case 0x484c18u: goto label_484c18;
        case 0x484c1cu: goto label_484c1c;
        case 0x484c20u: goto label_484c20;
        case 0x484c24u: goto label_484c24;
        case 0x484c28u: goto label_484c28;
        case 0x484c2cu: goto label_484c2c;
        case 0x484c30u: goto label_484c30;
        case 0x484c34u: goto label_484c34;
        case 0x484c38u: goto label_484c38;
        case 0x484c3cu: goto label_484c3c;
        case 0x484c40u: goto label_484c40;
        case 0x484c44u: goto label_484c44;
        case 0x484c48u: goto label_484c48;
        case 0x484c4cu: goto label_484c4c;
        case 0x484c50u: goto label_484c50;
        case 0x484c54u: goto label_484c54;
        case 0x484c58u: goto label_484c58;
        case 0x484c5cu: goto label_484c5c;
        case 0x484c60u: goto label_484c60;
        case 0x484c64u: goto label_484c64;
        case 0x484c68u: goto label_484c68;
        case 0x484c6cu: goto label_484c6c;
        case 0x484c70u: goto label_484c70;
        case 0x484c74u: goto label_484c74;
        case 0x484c78u: goto label_484c78;
        case 0x484c7cu: goto label_484c7c;
        case 0x484c80u: goto label_484c80;
        case 0x484c84u: goto label_484c84;
        case 0x484c88u: goto label_484c88;
        case 0x484c8cu: goto label_484c8c;
        case 0x484c90u: goto label_484c90;
        case 0x484c94u: goto label_484c94;
        case 0x484c98u: goto label_484c98;
        case 0x484c9cu: goto label_484c9c;
        case 0x484ca0u: goto label_484ca0;
        case 0x484ca4u: goto label_484ca4;
        case 0x484ca8u: goto label_484ca8;
        case 0x484cacu: goto label_484cac;
        case 0x484cb0u: goto label_484cb0;
        case 0x484cb4u: goto label_484cb4;
        case 0x484cb8u: goto label_484cb8;
        case 0x484cbcu: goto label_484cbc;
        case 0x484cc0u: goto label_484cc0;
        case 0x484cc4u: goto label_484cc4;
        case 0x484cc8u: goto label_484cc8;
        case 0x484cccu: goto label_484ccc;
        case 0x484cd0u: goto label_484cd0;
        case 0x484cd4u: goto label_484cd4;
        case 0x484cd8u: goto label_484cd8;
        case 0x484cdcu: goto label_484cdc;
        case 0x484ce0u: goto label_484ce0;
        case 0x484ce4u: goto label_484ce4;
        case 0x484ce8u: goto label_484ce8;
        case 0x484cecu: goto label_484cec;
        case 0x484cf0u: goto label_484cf0;
        case 0x484cf4u: goto label_484cf4;
        case 0x484cf8u: goto label_484cf8;
        case 0x484cfcu: goto label_484cfc;
        case 0x484d00u: goto label_484d00;
        case 0x484d04u: goto label_484d04;
        case 0x484d08u: goto label_484d08;
        case 0x484d0cu: goto label_484d0c;
        case 0x484d10u: goto label_484d10;
        case 0x484d14u: goto label_484d14;
        case 0x484d18u: goto label_484d18;
        case 0x484d1cu: goto label_484d1c;
        case 0x484d20u: goto label_484d20;
        case 0x484d24u: goto label_484d24;
        case 0x484d28u: goto label_484d28;
        case 0x484d2cu: goto label_484d2c;
        case 0x484d30u: goto label_484d30;
        case 0x484d34u: goto label_484d34;
        case 0x484d38u: goto label_484d38;
        case 0x484d3cu: goto label_484d3c;
        case 0x484d40u: goto label_484d40;
        case 0x484d44u: goto label_484d44;
        case 0x484d48u: goto label_484d48;
        case 0x484d4cu: goto label_484d4c;
        case 0x484d50u: goto label_484d50;
        case 0x484d54u: goto label_484d54;
        case 0x484d58u: goto label_484d58;
        case 0x484d5cu: goto label_484d5c;
        case 0x484d60u: goto label_484d60;
        case 0x484d64u: goto label_484d64;
        case 0x484d68u: goto label_484d68;
        case 0x484d6cu: goto label_484d6c;
        case 0x484d70u: goto label_484d70;
        case 0x484d74u: goto label_484d74;
        case 0x484d78u: goto label_484d78;
        case 0x484d7cu: goto label_484d7c;
        case 0x484d80u: goto label_484d80;
        case 0x484d84u: goto label_484d84;
        case 0x484d88u: goto label_484d88;
        case 0x484d8cu: goto label_484d8c;
        case 0x484d90u: goto label_484d90;
        case 0x484d94u: goto label_484d94;
        case 0x484d98u: goto label_484d98;
        case 0x484d9cu: goto label_484d9c;
        case 0x484da0u: goto label_484da0;
        case 0x484da4u: goto label_484da4;
        case 0x484da8u: goto label_484da8;
        case 0x484dacu: goto label_484dac;
        case 0x484db0u: goto label_484db0;
        case 0x484db4u: goto label_484db4;
        case 0x484db8u: goto label_484db8;
        case 0x484dbcu: goto label_484dbc;
        case 0x484dc0u: goto label_484dc0;
        case 0x484dc4u: goto label_484dc4;
        case 0x484dc8u: goto label_484dc8;
        case 0x484dccu: goto label_484dcc;
        case 0x484dd0u: goto label_484dd0;
        case 0x484dd4u: goto label_484dd4;
        case 0x484dd8u: goto label_484dd8;
        case 0x484ddcu: goto label_484ddc;
        case 0x484de0u: goto label_484de0;
        case 0x484de4u: goto label_484de4;
        case 0x484de8u: goto label_484de8;
        case 0x484decu: goto label_484dec;
        case 0x484df0u: goto label_484df0;
        case 0x484df4u: goto label_484df4;
        case 0x484df8u: goto label_484df8;
        case 0x484dfcu: goto label_484dfc;
        case 0x484e00u: goto label_484e00;
        case 0x484e04u: goto label_484e04;
        case 0x484e08u: goto label_484e08;
        case 0x484e0cu: goto label_484e0c;
        case 0x484e10u: goto label_484e10;
        case 0x484e14u: goto label_484e14;
        case 0x484e18u: goto label_484e18;
        case 0x484e1cu: goto label_484e1c;
        case 0x484e20u: goto label_484e20;
        case 0x484e24u: goto label_484e24;
        case 0x484e28u: goto label_484e28;
        case 0x484e2cu: goto label_484e2c;
        case 0x484e30u: goto label_484e30;
        case 0x484e34u: goto label_484e34;
        case 0x484e38u: goto label_484e38;
        case 0x484e3cu: goto label_484e3c;
        case 0x484e40u: goto label_484e40;
        case 0x484e44u: goto label_484e44;
        case 0x484e48u: goto label_484e48;
        case 0x484e4cu: goto label_484e4c;
        case 0x484e50u: goto label_484e50;
        case 0x484e54u: goto label_484e54;
        case 0x484e58u: goto label_484e58;
        case 0x484e5cu: goto label_484e5c;
        case 0x484e60u: goto label_484e60;
        case 0x484e64u: goto label_484e64;
        case 0x484e68u: goto label_484e68;
        case 0x484e6cu: goto label_484e6c;
        case 0x484e70u: goto label_484e70;
        case 0x484e74u: goto label_484e74;
        case 0x484e78u: goto label_484e78;
        case 0x484e7cu: goto label_484e7c;
        case 0x484e80u: goto label_484e80;
        case 0x484e84u: goto label_484e84;
        case 0x484e88u: goto label_484e88;
        case 0x484e8cu: goto label_484e8c;
        case 0x484e90u: goto label_484e90;
        case 0x484e94u: goto label_484e94;
        case 0x484e98u: goto label_484e98;
        case 0x484e9cu: goto label_484e9c;
        case 0x484ea0u: goto label_484ea0;
        case 0x484ea4u: goto label_484ea4;
        case 0x484ea8u: goto label_484ea8;
        case 0x484eacu: goto label_484eac;
        case 0x484eb0u: goto label_484eb0;
        case 0x484eb4u: goto label_484eb4;
        case 0x484eb8u: goto label_484eb8;
        case 0x484ebcu: goto label_484ebc;
        case 0x484ec0u: goto label_484ec0;
        case 0x484ec4u: goto label_484ec4;
        case 0x484ec8u: goto label_484ec8;
        case 0x484eccu: goto label_484ecc;
        case 0x484ed0u: goto label_484ed0;
        case 0x484ed4u: goto label_484ed4;
        case 0x484ed8u: goto label_484ed8;
        case 0x484edcu: goto label_484edc;
        case 0x484ee0u: goto label_484ee0;
        case 0x484ee4u: goto label_484ee4;
        case 0x484ee8u: goto label_484ee8;
        case 0x484eecu: goto label_484eec;
        case 0x484ef0u: goto label_484ef0;
        case 0x484ef4u: goto label_484ef4;
        case 0x484ef8u: goto label_484ef8;
        case 0x484efcu: goto label_484efc;
        case 0x484f00u: goto label_484f00;
        case 0x484f04u: goto label_484f04;
        case 0x484f08u: goto label_484f08;
        case 0x484f0cu: goto label_484f0c;
        case 0x484f10u: goto label_484f10;
        case 0x484f14u: goto label_484f14;
        case 0x484f18u: goto label_484f18;
        case 0x484f1cu: goto label_484f1c;
        case 0x484f20u: goto label_484f20;
        case 0x484f24u: goto label_484f24;
        case 0x484f28u: goto label_484f28;
        case 0x484f2cu: goto label_484f2c;
        case 0x484f30u: goto label_484f30;
        case 0x484f34u: goto label_484f34;
        case 0x484f38u: goto label_484f38;
        case 0x484f3cu: goto label_484f3c;
        case 0x484f40u: goto label_484f40;
        case 0x484f44u: goto label_484f44;
        case 0x484f48u: goto label_484f48;
        case 0x484f4cu: goto label_484f4c;
        case 0x484f50u: goto label_484f50;
        case 0x484f54u: goto label_484f54;
        case 0x484f58u: goto label_484f58;
        case 0x484f5cu: goto label_484f5c;
        case 0x484f60u: goto label_484f60;
        case 0x484f64u: goto label_484f64;
        case 0x484f68u: goto label_484f68;
        case 0x484f6cu: goto label_484f6c;
        case 0x484f70u: goto label_484f70;
        case 0x484f74u: goto label_484f74;
        case 0x484f78u: goto label_484f78;
        case 0x484f7cu: goto label_484f7c;
        case 0x484f80u: goto label_484f80;
        case 0x484f84u: goto label_484f84;
        case 0x484f88u: goto label_484f88;
        case 0x484f8cu: goto label_484f8c;
        case 0x484f90u: goto label_484f90;
        case 0x484f94u: goto label_484f94;
        case 0x484f98u: goto label_484f98;
        case 0x484f9cu: goto label_484f9c;
        case 0x484fa0u: goto label_484fa0;
        case 0x484fa4u: goto label_484fa4;
        case 0x484fa8u: goto label_484fa8;
        case 0x484facu: goto label_484fac;
        case 0x484fb0u: goto label_484fb0;
        case 0x484fb4u: goto label_484fb4;
        case 0x484fb8u: goto label_484fb8;
        case 0x484fbcu: goto label_484fbc;
        case 0x484fc0u: goto label_484fc0;
        case 0x484fc4u: goto label_484fc4;
        case 0x484fc8u: goto label_484fc8;
        case 0x484fccu: goto label_484fcc;
        case 0x484fd0u: goto label_484fd0;
        case 0x484fd4u: goto label_484fd4;
        case 0x484fd8u: goto label_484fd8;
        case 0x484fdcu: goto label_484fdc;
        case 0x484fe0u: goto label_484fe0;
        case 0x484fe4u: goto label_484fe4;
        case 0x484fe8u: goto label_484fe8;
        case 0x484fecu: goto label_484fec;
        case 0x484ff0u: goto label_484ff0;
        case 0x484ff4u: goto label_484ff4;
        case 0x484ff8u: goto label_484ff8;
        case 0x484ffcu: goto label_484ffc;
        case 0x485000u: goto label_485000;
        case 0x485004u: goto label_485004;
        case 0x485008u: goto label_485008;
        case 0x48500cu: goto label_48500c;
        case 0x485010u: goto label_485010;
        case 0x485014u: goto label_485014;
        case 0x485018u: goto label_485018;
        case 0x48501cu: goto label_48501c;
        case 0x485020u: goto label_485020;
        case 0x485024u: goto label_485024;
        case 0x485028u: goto label_485028;
        case 0x48502cu: goto label_48502c;
        case 0x485030u: goto label_485030;
        case 0x485034u: goto label_485034;
        case 0x485038u: goto label_485038;
        case 0x48503cu: goto label_48503c;
        case 0x485040u: goto label_485040;
        case 0x485044u: goto label_485044;
        case 0x485048u: goto label_485048;
        case 0x48504cu: goto label_48504c;
        case 0x485050u: goto label_485050;
        case 0x485054u: goto label_485054;
        case 0x485058u: goto label_485058;
        case 0x48505cu: goto label_48505c;
        case 0x485060u: goto label_485060;
        case 0x485064u: goto label_485064;
        case 0x485068u: goto label_485068;
        case 0x48506cu: goto label_48506c;
        case 0x485070u: goto label_485070;
        case 0x485074u: goto label_485074;
        case 0x485078u: goto label_485078;
        case 0x48507cu: goto label_48507c;
        case 0x485080u: goto label_485080;
        case 0x485084u: goto label_485084;
        case 0x485088u: goto label_485088;
        case 0x48508cu: goto label_48508c;
        case 0x485090u: goto label_485090;
        case 0x485094u: goto label_485094;
        case 0x485098u: goto label_485098;
        case 0x48509cu: goto label_48509c;
        case 0x4850a0u: goto label_4850a0;
        case 0x4850a4u: goto label_4850a4;
        case 0x4850a8u: goto label_4850a8;
        case 0x4850acu: goto label_4850ac;
        case 0x4850b0u: goto label_4850b0;
        case 0x4850b4u: goto label_4850b4;
        case 0x4850b8u: goto label_4850b8;
        case 0x4850bcu: goto label_4850bc;
        case 0x4850c0u: goto label_4850c0;
        case 0x4850c4u: goto label_4850c4;
        case 0x4850c8u: goto label_4850c8;
        case 0x4850ccu: goto label_4850cc;
        case 0x4850d0u: goto label_4850d0;
        case 0x4850d4u: goto label_4850d4;
        case 0x4850d8u: goto label_4850d8;
        case 0x4850dcu: goto label_4850dc;
        case 0x4850e0u: goto label_4850e0;
        case 0x4850e4u: goto label_4850e4;
        case 0x4850e8u: goto label_4850e8;
        case 0x4850ecu: goto label_4850ec;
        case 0x4850f0u: goto label_4850f0;
        case 0x4850f4u: goto label_4850f4;
        case 0x4850f8u: goto label_4850f8;
        case 0x4850fcu: goto label_4850fc;
        case 0x485100u: goto label_485100;
        case 0x485104u: goto label_485104;
        case 0x485108u: goto label_485108;
        case 0x48510cu: goto label_48510c;
        case 0x485110u: goto label_485110;
        case 0x485114u: goto label_485114;
        case 0x485118u: goto label_485118;
        case 0x48511cu: goto label_48511c;
        case 0x485120u: goto label_485120;
        case 0x485124u: goto label_485124;
        case 0x485128u: goto label_485128;
        case 0x48512cu: goto label_48512c;
        case 0x485130u: goto label_485130;
        case 0x485134u: goto label_485134;
        case 0x485138u: goto label_485138;
        case 0x48513cu: goto label_48513c;
        case 0x485140u: goto label_485140;
        case 0x485144u: goto label_485144;
        case 0x485148u: goto label_485148;
        case 0x48514cu: goto label_48514c;
        case 0x485150u: goto label_485150;
        case 0x485154u: goto label_485154;
        case 0x485158u: goto label_485158;
        case 0x48515cu: goto label_48515c;
        case 0x485160u: goto label_485160;
        case 0x485164u: goto label_485164;
        case 0x485168u: goto label_485168;
        case 0x48516cu: goto label_48516c;
        case 0x485170u: goto label_485170;
        case 0x485174u: goto label_485174;
        case 0x485178u: goto label_485178;
        case 0x48517cu: goto label_48517c;
        case 0x485180u: goto label_485180;
        case 0x485184u: goto label_485184;
        case 0x485188u: goto label_485188;
        case 0x48518cu: goto label_48518c;
        case 0x485190u: goto label_485190;
        case 0x485194u: goto label_485194;
        case 0x485198u: goto label_485198;
        case 0x48519cu: goto label_48519c;
        case 0x4851a0u: goto label_4851a0;
        case 0x4851a4u: goto label_4851a4;
        case 0x4851a8u: goto label_4851a8;
        case 0x4851acu: goto label_4851ac;
        case 0x4851b0u: goto label_4851b0;
        case 0x4851b4u: goto label_4851b4;
        case 0x4851b8u: goto label_4851b8;
        case 0x4851bcu: goto label_4851bc;
        case 0x4851c0u: goto label_4851c0;
        case 0x4851c4u: goto label_4851c4;
        case 0x4851c8u: goto label_4851c8;
        case 0x4851ccu: goto label_4851cc;
        case 0x4851d0u: goto label_4851d0;
        case 0x4851d4u: goto label_4851d4;
        case 0x4851d8u: goto label_4851d8;
        case 0x4851dcu: goto label_4851dc;
        case 0x4851e0u: goto label_4851e0;
        case 0x4851e4u: goto label_4851e4;
        case 0x4851e8u: goto label_4851e8;
        case 0x4851ecu: goto label_4851ec;
        case 0x4851f0u: goto label_4851f0;
        case 0x4851f4u: goto label_4851f4;
        case 0x4851f8u: goto label_4851f8;
        case 0x4851fcu: goto label_4851fc;
        case 0x485200u: goto label_485200;
        case 0x485204u: goto label_485204;
        case 0x485208u: goto label_485208;
        case 0x48520cu: goto label_48520c;
        case 0x485210u: goto label_485210;
        case 0x485214u: goto label_485214;
        case 0x485218u: goto label_485218;
        case 0x48521cu: goto label_48521c;
        case 0x485220u: goto label_485220;
        case 0x485224u: goto label_485224;
        case 0x485228u: goto label_485228;
        case 0x48522cu: goto label_48522c;
        case 0x485230u: goto label_485230;
        case 0x485234u: goto label_485234;
        case 0x485238u: goto label_485238;
        case 0x48523cu: goto label_48523c;
        default: break;
    }

    ctx->pc = 0x484520u;

label_484520:
    // 0x484520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x484520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_484524:
    // 0x484524: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x484524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_484528:
    // 0x484528: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x484528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_48452c:
    // 0x48452c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_484530:
    // 0x484530: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x484530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_484534:
    // 0x484534: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x484534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_484538:
    // 0x484538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x484538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48453c:
    // 0x48453c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48453cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_484540:
    // 0x484540: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x484540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_484544:
    // 0x484544: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x484544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_484548:
    // 0x484548: 0xc10ca68  jal         func_4329A0
label_48454c:
    if (ctx->pc == 0x48454Cu) {
        ctx->pc = 0x48454Cu;
            // 0x48454c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x484550u;
        goto label_484550;
    }
    ctx->pc = 0x484548u;
    SET_GPR_U32(ctx, 31, 0x484550u);
    ctx->pc = 0x48454Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484548u;
            // 0x48454c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484550u; }
        if (ctx->pc != 0x484550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484550u; }
        if (ctx->pc != 0x484550u) { return; }
    }
    ctx->pc = 0x484550u;
label_484550:
    // 0x484550: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x484550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_484554:
    // 0x484554: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x484554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_484558:
    // 0x484558: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x484558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_48455c:
    // 0x48455c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x48455cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_484560:
    // 0x484560: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x484560u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_484564:
    // 0x484564: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x484564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_484568:
    // 0x484568: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x484568u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_48456c:
    // 0x48456c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48456cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_484570:
    // 0x484570: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x484570u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_484574:
    // 0x484574: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x484574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_484578:
    // 0x484578: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x484578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_48457c:
    // 0x48457c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x48457cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_484580:
    // 0x484580: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x484580u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_484584:
    // 0x484584: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x484584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_484588:
    // 0x484588: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x484588u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_48458c:
    // 0x48458c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x48458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_484590:
    // 0x484590: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x484590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_484594:
    // 0x484594: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x484594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_484598:
    // 0x484598: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x484598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_48459c:
    // 0x48459c: 0xc0582cc  jal         func_160B30
label_4845a0:
    if (ctx->pc == 0x4845A0u) {
        ctx->pc = 0x4845A0u;
            // 0x4845a0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4845A4u;
        goto label_4845a4;
    }
    ctx->pc = 0x48459Cu;
    SET_GPR_U32(ctx, 31, 0x4845A4u);
    ctx->pc = 0x4845A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48459Cu;
            // 0x4845a0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4845A4u; }
        if (ctx->pc != 0x4845A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4845A4u; }
        if (ctx->pc != 0x4845A4u) { return; }
    }
    ctx->pc = 0x4845A4u;
label_4845a4:
    // 0x4845a4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4845a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4845a8:
    // 0x4845a8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4845a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4845ac:
    // 0x4845ac: 0x2463f288  addiu       $v1, $v1, -0xD78
    ctx->pc = 0x4845acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963848));
label_4845b0:
    // 0x4845b0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4845b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4845b4:
    // 0x4845b4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4845b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4845b8:
    // 0x4845b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4845b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4845bc:
    // 0x4845bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4845bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4845c0:
    // 0x4845c0: 0xac447b98  sw          $a0, 0x7B98($v0)
    ctx->pc = 0x4845c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31640), GPR_U32(ctx, 4));
label_4845c4:
    // 0x4845c4: 0x2463f2a0  addiu       $v1, $v1, -0xD60
    ctx->pc = 0x4845c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963872));
label_4845c8:
    // 0x4845c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4845c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4845cc:
    // 0x4845cc: 0x2442f2d8  addiu       $v0, $v0, -0xD28
    ctx->pc = 0x4845ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963928));
label_4845d0:
    // 0x4845d0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4845d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4845d4:
    // 0x4845d4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4845d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4845d8:
    // 0x4845d8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4845d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4845dc:
    // 0x4845dc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4845dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4845e0:
    // 0x4845e0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4845e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4845e4:
    // 0x4845e4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4845e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4845e8:
    // 0x4845e8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4845e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4845ec:
    // 0x4845ec: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4845ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4845f0:
    // 0x4845f0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4845f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4845f4:
    // 0x4845f4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4845f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4845f8:
    // 0x4845f8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4845f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4845fc:
    // 0x4845fc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4845fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_484600:
    // 0x484600: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x484600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_484604:
    // 0x484604: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_484608:
    if (ctx->pc == 0x484608u) {
        ctx->pc = 0x48460Cu;
        goto label_48460c;
    }
    ctx->pc = 0x484604u;
    {
        const bool branch_taken_0x484604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x484604) {
            ctx->pc = 0x484698u;
            goto label_484698;
        }
    }
    ctx->pc = 0x48460Cu;
label_48460c:
    // 0x48460c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x48460cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_484610:
    // 0x484610: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x484610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_484614:
    // 0x484614: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x484614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_484618:
    // 0x484618: 0xc040138  jal         func_1004E0
label_48461c:
    if (ctx->pc == 0x48461Cu) {
        ctx->pc = 0x48461Cu;
            // 0x48461c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x484620u;
        goto label_484620;
    }
    ctx->pc = 0x484618u;
    SET_GPR_U32(ctx, 31, 0x484620u);
    ctx->pc = 0x48461Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484618u;
            // 0x48461c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484620u; }
        if (ctx->pc != 0x484620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484620u; }
        if (ctx->pc != 0x484620u) { return; }
    }
    ctx->pc = 0x484620u;
label_484620:
    // 0x484620: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x484620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_484624:
    // 0x484624: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x484624u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_484628:
    // 0x484628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x484628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48462c:
    // 0x48462c: 0x24a546c0  addiu       $a1, $a1, 0x46C0
    ctx->pc = 0x48462cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18112));
label_484630:
    // 0x484630: 0x24c63cf0  addiu       $a2, $a2, 0x3CF0
    ctx->pc = 0x484630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15600));
label_484634:
    // 0x484634: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x484634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_484638:
    // 0x484638: 0xc040840  jal         func_102100
label_48463c:
    if (ctx->pc == 0x48463Cu) {
        ctx->pc = 0x48463Cu;
            // 0x48463c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484640u;
        goto label_484640;
    }
    ctx->pc = 0x484638u;
    SET_GPR_U32(ctx, 31, 0x484640u);
    ctx->pc = 0x48463Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484638u;
            // 0x48463c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484640u; }
        if (ctx->pc != 0x484640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484640u; }
        if (ctx->pc != 0x484640u) { return; }
    }
    ctx->pc = 0x484640u;
label_484640:
    // 0x484640: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x484640u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_484644:
    // 0x484644: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x484644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484648:
    // 0x484648: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x484648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_48464c:
    // 0x48464c: 0xc0788fc  jal         func_1E23F0
label_484650:
    if (ctx->pc == 0x484650u) {
        ctx->pc = 0x484650u;
            // 0x484650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484654u;
        goto label_484654;
    }
    ctx->pc = 0x48464Cu;
    SET_GPR_U32(ctx, 31, 0x484654u);
    ctx->pc = 0x484650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48464Cu;
            // 0x484650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484654u; }
        if (ctx->pc != 0x484654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484654u; }
        if (ctx->pc != 0x484654u) { return; }
    }
    ctx->pc = 0x484654u;
label_484654:
    // 0x484654: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x484654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_484658:
    // 0x484658: 0xc0788fc  jal         func_1E23F0
label_48465c:
    if (ctx->pc == 0x48465Cu) {
        ctx->pc = 0x48465Cu;
            // 0x48465c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484660u;
        goto label_484660;
    }
    ctx->pc = 0x484658u;
    SET_GPR_U32(ctx, 31, 0x484660u);
    ctx->pc = 0x48465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484658u;
            // 0x48465c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484660u; }
        if (ctx->pc != 0x484660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484660u; }
        if (ctx->pc != 0x484660u) { return; }
    }
    ctx->pc = 0x484660u;
label_484660:
    // 0x484660: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x484660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484664:
    // 0x484664: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x484664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_484668:
    // 0x484668: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x484668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_48466c:
    // 0x48466c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x48466cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_484670:
    // 0x484670: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x484670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484674:
    // 0x484674: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x484674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_484678:
    // 0x484678: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x484678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_48467c:
    // 0x48467c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48467cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_484680:
    // 0x484680: 0xc0a997c  jal         func_2A65F0
label_484684:
    if (ctx->pc == 0x484684u) {
        ctx->pc = 0x484684u;
            // 0x484684: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x484688u;
        goto label_484688;
    }
    ctx->pc = 0x484680u;
    SET_GPR_U32(ctx, 31, 0x484688u);
    ctx->pc = 0x484684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484680u;
            // 0x484684: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484688u; }
        if (ctx->pc != 0x484688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484688u; }
        if (ctx->pc != 0x484688u) { return; }
    }
    ctx->pc = 0x484688u;
label_484688:
    // 0x484688: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x484688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_48468c:
    // 0x48468c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x48468cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_484690:
    // 0x484690: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_484694:
    if (ctx->pc == 0x484694u) {
        ctx->pc = 0x484694u;
            // 0x484694: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x484698u;
        goto label_484698;
    }
    ctx->pc = 0x484690u;
    {
        const bool branch_taken_0x484690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484690u;
            // 0x484694: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484690) {
            ctx->pc = 0x484664u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_484664;
        }
    }
    ctx->pc = 0x484698u;
label_484698:
    // 0x484698: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x484698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_48469c:
    // 0x48469c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x48469cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4846a0:
    // 0x4846a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4846a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4846a4:
    // 0x4846a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4846a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4846a8:
    // 0x4846a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4846a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4846ac:
    // 0x4846ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4846acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4846b0:
    // 0x4846b0: 0x3e00008  jr          $ra
label_4846b4:
    if (ctx->pc == 0x4846B4u) {
        ctx->pc = 0x4846B4u;
            // 0x4846b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4846B8u;
        goto label_4846b8;
    }
    ctx->pc = 0x4846B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4846B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4846B0u;
            // 0x4846b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4846B8u;
label_4846b8:
    // 0x4846b8: 0x0  nop
    ctx->pc = 0x4846b8u;
    // NOP
label_4846bc:
    // 0x4846bc: 0x0  nop
    ctx->pc = 0x4846bcu;
    // NOP
label_4846c0:
    // 0x4846c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4846c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4846c4:
    // 0x4846c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4846c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4846c8:
    // 0x4846c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4846c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4846cc:
    // 0x4846cc: 0xc0aeebc  jal         func_2BBAF0
label_4846d0:
    if (ctx->pc == 0x4846D0u) {
        ctx->pc = 0x4846D0u;
            // 0x4846d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4846D4u;
        goto label_4846d4;
    }
    ctx->pc = 0x4846CCu;
    SET_GPR_U32(ctx, 31, 0x4846D4u);
    ctx->pc = 0x4846D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4846CCu;
            // 0x4846d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4846D4u; }
        if (ctx->pc != 0x4846D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4846D4u; }
        if (ctx->pc != 0x4846D4u) { return; }
    }
    ctx->pc = 0x4846D4u;
label_4846d4:
    // 0x4846d4: 0xc0aeeb4  jal         func_2BBAD0
label_4846d8:
    if (ctx->pc == 0x4846D8u) {
        ctx->pc = 0x4846D8u;
            // 0x4846d8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4846DCu;
        goto label_4846dc;
    }
    ctx->pc = 0x4846D4u;
    SET_GPR_U32(ctx, 31, 0x4846DCu);
    ctx->pc = 0x4846D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4846D4u;
            // 0x4846d8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4846DCu; }
        if (ctx->pc != 0x4846DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4846DCu; }
        if (ctx->pc != 0x4846DCu) { return; }
    }
    ctx->pc = 0x4846DCu;
label_4846dc:
    // 0x4846dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4846dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4846e0:
    // 0x4846e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4846e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4846e4:
    // 0x4846e4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4846e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4846e8:
    // 0x4846e8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4846e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4846ec:
    // 0x4846ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4846ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4846f0:
    // 0x4846f0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4846f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4846f4:
    // 0x4846f4: 0xc0aeea4  jal         func_2BBA90
label_4846f8:
    if (ctx->pc == 0x4846F8u) {
        ctx->pc = 0x4846F8u;
            // 0x4846f8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4846FCu;
        goto label_4846fc;
    }
    ctx->pc = 0x4846F4u;
    SET_GPR_U32(ctx, 31, 0x4846FCu);
    ctx->pc = 0x4846F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4846F4u;
            // 0x4846f8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4846FCu; }
        if (ctx->pc != 0x4846FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4846FCu; }
        if (ctx->pc != 0x4846FCu) { return; }
    }
    ctx->pc = 0x4846FCu;
label_4846fc:
    // 0x4846fc: 0xc0aee8c  jal         func_2BBA30
label_484700:
    if (ctx->pc == 0x484700u) {
        ctx->pc = 0x484700u;
            // 0x484700: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x484704u;
        goto label_484704;
    }
    ctx->pc = 0x4846FCu;
    SET_GPR_U32(ctx, 31, 0x484704u);
    ctx->pc = 0x484700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4846FCu;
            // 0x484700: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484704u; }
        if (ctx->pc != 0x484704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484704u; }
        if (ctx->pc != 0x484704u) { return; }
    }
    ctx->pc = 0x484704u;
label_484704:
    // 0x484704: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x484704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_484708:
    // 0x484708: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x484708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_48470c:
    // 0x48470c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x48470cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_484710:
    // 0x484710: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x484710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_484714:
    // 0x484714: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x484714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_484718:
    // 0x484718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x484718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48471c:
    // 0x48471c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x48471cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_484720:
    // 0x484720: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x484720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_484724:
    // 0x484724: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x484724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_484728:
    // 0x484728: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x484728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_48472c:
    // 0x48472c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x48472cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_484730:
    // 0x484730: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x484730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_484734:
    // 0x484734: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x484734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_484738:
    // 0x484738: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x484738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_48473c:
    // 0x48473c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x48473cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_484740:
    // 0x484740: 0xc0775b8  jal         func_1DD6E0
label_484744:
    if (ctx->pc == 0x484744u) {
        ctx->pc = 0x484744u;
            // 0x484744: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x484748u;
        goto label_484748;
    }
    ctx->pc = 0x484740u;
    SET_GPR_U32(ctx, 31, 0x484748u);
    ctx->pc = 0x484744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484740u;
            // 0x484744: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484748u; }
        if (ctx->pc != 0x484748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484748u; }
        if (ctx->pc != 0x484748u) { return; }
    }
    ctx->pc = 0x484748u;
label_484748:
    // 0x484748: 0xc077314  jal         func_1DCC50
label_48474c:
    if (ctx->pc == 0x48474Cu) {
        ctx->pc = 0x48474Cu;
            // 0x48474c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x484750u;
        goto label_484750;
    }
    ctx->pc = 0x484748u;
    SET_GPR_U32(ctx, 31, 0x484750u);
    ctx->pc = 0x48474Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484748u;
            // 0x48474c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484750u; }
        if (ctx->pc != 0x484750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484750u; }
        if (ctx->pc != 0x484750u) { return; }
    }
    ctx->pc = 0x484750u;
label_484750:
    // 0x484750: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x484750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_484754:
    // 0x484754: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x484754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_484758:
    // 0x484758: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x484758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_48475c:
    // 0x48475c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x48475cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_484760:
    // 0x484760: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x484760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_484764:
    // 0x484764: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x484764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_484768:
    // 0x484768: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x484768u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_48476c:
    // 0x48476c: 0x24a5f340  addiu       $a1, $a1, -0xCC0
    ctx->pc = 0x48476cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964032));
label_484770:
    // 0x484770: 0x2484f380  addiu       $a0, $a0, -0xC80
    ctx->pc = 0x484770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
label_484774:
    // 0x484774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x484774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484778:
    // 0x484778: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x484778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_48477c:
    // 0x48477c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48477cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484780:
    // 0x484780: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x484780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
label_484784:
    // 0x484784: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x484784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_484788:
    // 0x484788: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x484788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_48478c:
    // 0x48478c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x48478cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_484790:
    // 0x484790: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x484790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_484794:
    // 0x484794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x484794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_484798:
    // 0x484798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48479c:
    // 0x48479c: 0x3e00008  jr          $ra
label_4847a0:
    if (ctx->pc == 0x4847A0u) {
        ctx->pc = 0x4847A0u;
            // 0x4847a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4847A4u;
        goto label_4847a4;
    }
    ctx->pc = 0x48479Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4847A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48479Cu;
            // 0x4847a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4847A4u;
label_4847a4:
    // 0x4847a4: 0x0  nop
    ctx->pc = 0x4847a4u;
    // NOP
label_4847a8:
    // 0x4847a8: 0x0  nop
    ctx->pc = 0x4847a8u;
    // NOP
label_4847ac:
    // 0x4847ac: 0x0  nop
    ctx->pc = 0x4847acu;
    // NOP
label_4847b0:
    // 0x4847b0: 0x3e00008  jr          $ra
label_4847b4:
    if (ctx->pc == 0x4847B4u) {
        ctx->pc = 0x4847B8u;
        goto label_4847b8;
    }
    ctx->pc = 0x4847B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4847B8u;
label_4847b8:
    // 0x4847b8: 0x0  nop
    ctx->pc = 0x4847b8u;
    // NOP
label_4847bc:
    // 0x4847bc: 0x0  nop
    ctx->pc = 0x4847bcu;
    // NOP
label_4847c0:
    // 0x4847c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4847c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4847c4:
    // 0x4847c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4847c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4847c8:
    // 0x4847c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4847c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4847cc:
    // 0x4847cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4847ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4847d0:
    // 0x4847d0: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x4847d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_4847d4:
    // 0x4847d4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4847d8:
    if (ctx->pc == 0x4847D8u) {
        ctx->pc = 0x4847D8u;
            // 0x4847d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4847DCu;
        goto label_4847dc;
    }
    ctx->pc = 0x4847D4u;
    {
        const bool branch_taken_0x4847d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4847D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4847D4u;
            // 0x4847d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4847d4) {
            ctx->pc = 0x48480Cu;
            goto label_48480c;
        }
    }
    ctx->pc = 0x4847DCu;
label_4847dc:
    // 0x4847dc: 0xc04008c  jal         func_100230
label_4847e0:
    if (ctx->pc == 0x4847E0u) {
        ctx->pc = 0x4847E0u;
            // 0x4847e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4847E4u;
        goto label_4847e4;
    }
    ctx->pc = 0x4847DCu;
    SET_GPR_U32(ctx, 31, 0x4847E4u);
    ctx->pc = 0x4847E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4847DCu;
            // 0x4847e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4847E4u; }
        if (ctx->pc != 0x4847E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4847E4u; }
        if (ctx->pc != 0x4847E4u) { return; }
    }
    ctx->pc = 0x4847E4u;
label_4847e4:
    // 0x4847e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4847e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4847e8:
    // 0x4847e8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4847e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4847ec:
    // 0x4847ec: 0xc0407c0  jal         func_101F00
label_4847f0:
    if (ctx->pc == 0x4847F0u) {
        ctx->pc = 0x4847F0u;
            // 0x4847f0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x4847F4u;
        goto label_4847f4;
    }
    ctx->pc = 0x4847ECu;
    SET_GPR_U32(ctx, 31, 0x4847F4u);
    ctx->pc = 0x4847F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4847ECu;
            // 0x4847f0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4847F4u; }
        if (ctx->pc != 0x4847F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4847F4u; }
        if (ctx->pc != 0x4847F4u) { return; }
    }
    ctx->pc = 0x4847F4u;
label_4847f4:
    // 0x4847f4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4847f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4847f8:
    // 0x4847f8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4847f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4847fc:
    // 0x4847fc: 0xc0407c0  jal         func_101F00
label_484800:
    if (ctx->pc == 0x484800u) {
        ctx->pc = 0x484800u;
            // 0x484800: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x484804u;
        goto label_484804;
    }
    ctx->pc = 0x4847FCu;
    SET_GPR_U32(ctx, 31, 0x484804u);
    ctx->pc = 0x484800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4847FCu;
            // 0x484800: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484804u; }
        if (ctx->pc != 0x484804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484804u; }
        if (ctx->pc != 0x484804u) { return; }
    }
    ctx->pc = 0x484804u;
label_484804:
    // 0x484804: 0xc0400a8  jal         func_1002A0
label_484808:
    if (ctx->pc == 0x484808u) {
        ctx->pc = 0x484808u;
            // 0x484808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48480Cu;
        goto label_48480c;
    }
    ctx->pc = 0x484804u;
    SET_GPR_U32(ctx, 31, 0x48480Cu);
    ctx->pc = 0x484808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484804u;
            // 0x484808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48480Cu; }
        if (ctx->pc != 0x48480Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48480Cu; }
        if (ctx->pc != 0x48480Cu) { return; }
    }
    ctx->pc = 0x48480Cu;
label_48480c:
    // 0x48480c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x48480cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_484810:
    // 0x484810: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x484810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_484814:
    // 0x484814: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_484818:
    if (ctx->pc == 0x484818u) {
        ctx->pc = 0x484818u;
            // 0x484818: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x48481Cu;
        goto label_48481c;
    }
    ctx->pc = 0x484814u;
    {
        const bool branch_taken_0x484814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x484814) {
            ctx->pc = 0x484818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x484814u;
            // 0x484818: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x484830u;
            goto label_484830;
        }
    }
    ctx->pc = 0x48481Cu;
label_48481c:
    // 0x48481c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x48481cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_484820:
    // 0x484820: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x484820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_484824:
    // 0x484824: 0x320f809  jalr        $t9
label_484828:
    if (ctx->pc == 0x484828u) {
        ctx->pc = 0x484828u;
            // 0x484828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48482Cu;
        goto label_48482c;
    }
    ctx->pc = 0x484824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48482Cu);
        ctx->pc = 0x484828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484824u;
            // 0x484828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48482Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48482Cu; }
            if (ctx->pc != 0x48482Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48482Cu;
label_48482c:
    // 0x48482c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x48482cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_484830:
    // 0x484830: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x484830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_484834:
    // 0x484834: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_484838:
    if (ctx->pc == 0x484838u) {
        ctx->pc = 0x484838u;
            // 0x484838: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x48483Cu;
        goto label_48483c;
    }
    ctx->pc = 0x484834u;
    {
        const bool branch_taken_0x484834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x484834) {
            ctx->pc = 0x484838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x484834u;
            // 0x484838: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x484850u;
            goto label_484850;
        }
    }
    ctx->pc = 0x48483Cu;
label_48483c:
    // 0x48483c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48483cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_484840:
    // 0x484840: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x484840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_484844:
    // 0x484844: 0x320f809  jalr        $t9
label_484848:
    if (ctx->pc == 0x484848u) {
        ctx->pc = 0x484848u;
            // 0x484848: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48484Cu;
        goto label_48484c;
    }
    ctx->pc = 0x484844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48484Cu);
        ctx->pc = 0x484848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484844u;
            // 0x484848: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48484Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48484Cu; }
            if (ctx->pc != 0x48484Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48484Cu;
label_48484c:
    // 0x48484c: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x48484cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_484850:
    // 0x484850: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x484850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_484854:
    // 0x484854: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_484858:
    if (ctx->pc == 0x484858u) {
        ctx->pc = 0x484858u;
            // 0x484858: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x48485Cu;
        goto label_48485c;
    }
    ctx->pc = 0x484854u;
    {
        const bool branch_taken_0x484854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x484854) {
            ctx->pc = 0x484858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x484854u;
            // 0x484858: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x484870u;
            goto label_484870;
        }
    }
    ctx->pc = 0x48485Cu;
label_48485c:
    // 0x48485c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48485cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_484860:
    // 0x484860: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x484860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_484864:
    // 0x484864: 0x320f809  jalr        $t9
label_484868:
    if (ctx->pc == 0x484868u) {
        ctx->pc = 0x484868u;
            // 0x484868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48486Cu;
        goto label_48486c;
    }
    ctx->pc = 0x484864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48486Cu);
        ctx->pc = 0x484868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484864u;
            // 0x484868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48486Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48486Cu; }
            if (ctx->pc != 0x48486Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48486Cu;
label_48486c:
    // 0x48486c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x48486cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_484870:
    // 0x484870: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x484870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_484874:
    // 0x484874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x484874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_484878:
    // 0x484878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48487c:
    // 0x48487c: 0x3e00008  jr          $ra
label_484880:
    if (ctx->pc == 0x484880u) {
        ctx->pc = 0x484880u;
            // 0x484880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x484884u;
        goto label_484884;
    }
    ctx->pc = 0x48487Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48487Cu;
            // 0x484880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x484884u;
label_484884:
    // 0x484884: 0x0  nop
    ctx->pc = 0x484884u;
    // NOP
label_484888:
    // 0x484888: 0x0  nop
    ctx->pc = 0x484888u;
    // NOP
label_48488c:
    // 0x48488c: 0x0  nop
    ctx->pc = 0x48488cu;
    // NOP
label_484890:
    // 0x484890: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x484890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_484894:
    // 0x484894: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x484894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_484898:
    // 0x484898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x484898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48489c:
    // 0x48489c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4848a0:
    // 0x4848a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4848a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4848a4:
    // 0x4848a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4848a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4848a8:
    // 0x4848a8: 0xc0892d0  jal         func_224B40
label_4848ac:
    if (ctx->pc == 0x4848ACu) {
        ctx->pc = 0x4848ACu;
            // 0x4848ac: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4848B0u;
        goto label_4848b0;
    }
    ctx->pc = 0x4848A8u;
    SET_GPR_U32(ctx, 31, 0x4848B0u);
    ctx->pc = 0x4848ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4848A8u;
            // 0x4848ac: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4848B0u; }
        if (ctx->pc != 0x4848B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4848B0u; }
        if (ctx->pc != 0x4848B0u) { return; }
    }
    ctx->pc = 0x4848B0u;
label_4848b0:
    // 0x4848b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4848b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4848b4:
    // 0x4848b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4848b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4848b8:
    // 0x4848b8: 0x8c427b98  lw          $v0, 0x7B98($v0)
    ctx->pc = 0x4848b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31640)));
label_4848bc:
    // 0x4848bc: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x4848bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4848c0:
    // 0x4848c0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4848c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4848c4:
    // 0x4848c4: 0xc0b6e68  jal         func_2DB9A0
label_4848c8:
    if (ctx->pc == 0x4848C8u) {
        ctx->pc = 0x4848C8u;
            // 0x4848c8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4848CCu;
        goto label_4848cc;
    }
    ctx->pc = 0x4848C4u;
    SET_GPR_U32(ctx, 31, 0x4848CCu);
    ctx->pc = 0x4848C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4848C4u;
            // 0x4848c8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4848CCu; }
        if (ctx->pc != 0x4848CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4848CCu; }
        if (ctx->pc != 0x4848CCu) { return; }
    }
    ctx->pc = 0x4848CCu;
label_4848cc:
    // 0x4848cc: 0xc0b6dac  jal         func_2DB6B0
label_4848d0:
    if (ctx->pc == 0x4848D0u) {
        ctx->pc = 0x4848D0u;
            // 0x4848d0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4848D4u;
        goto label_4848d4;
    }
    ctx->pc = 0x4848CCu;
    SET_GPR_U32(ctx, 31, 0x4848D4u);
    ctx->pc = 0x4848D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4848CCu;
            // 0x4848d0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4848D4u; }
        if (ctx->pc != 0x4848D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4848D4u; }
        if (ctx->pc != 0x4848D4u) { return; }
    }
    ctx->pc = 0x4848D4u;
label_4848d4:
    // 0x4848d4: 0xc0cac94  jal         func_32B250
label_4848d8:
    if (ctx->pc == 0x4848D8u) {
        ctx->pc = 0x4848D8u;
            // 0x4848d8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4848DCu;
        goto label_4848dc;
    }
    ctx->pc = 0x4848D4u;
    SET_GPR_U32(ctx, 31, 0x4848DCu);
    ctx->pc = 0x4848D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4848D4u;
            // 0x4848d8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4848DCu; }
        if (ctx->pc != 0x4848DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4848DCu; }
        if (ctx->pc != 0x4848DCu) { return; }
    }
    ctx->pc = 0x4848DCu;
label_4848dc:
    // 0x4848dc: 0xc0cac84  jal         func_32B210
label_4848e0:
    if (ctx->pc == 0x4848E0u) {
        ctx->pc = 0x4848E0u;
            // 0x4848e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4848E4u;
        goto label_4848e4;
    }
    ctx->pc = 0x4848DCu;
    SET_GPR_U32(ctx, 31, 0x4848E4u);
    ctx->pc = 0x4848E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4848DCu;
            // 0x4848e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4848E4u; }
        if (ctx->pc != 0x4848E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4848E4u; }
        if (ctx->pc != 0x4848E4u) { return; }
    }
    ctx->pc = 0x4848E4u;
label_4848e4:
    // 0x4848e4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4848e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4848e8:
    // 0x4848e8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4848e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4848ec:
    // 0x4848ec: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x4848ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4848f0:
    // 0x4848f0: 0xc0a5a68  jal         func_2969A0
label_4848f4:
    if (ctx->pc == 0x4848F4u) {
        ctx->pc = 0x4848F4u;
            // 0x4848f4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4848F8u;
        goto label_4848f8;
    }
    ctx->pc = 0x4848F0u;
    SET_GPR_U32(ctx, 31, 0x4848F8u);
    ctx->pc = 0x4848F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4848F0u;
            // 0x4848f4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4848F8u; }
        if (ctx->pc != 0x4848F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4848F8u; }
        if (ctx->pc != 0x4848F8u) { return; }
    }
    ctx->pc = 0x4848F8u;
label_4848f8:
    // 0x4848f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4848f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4848fc:
    // 0x4848fc: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x4848fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_484900:
    // 0x484900: 0x8c437b98  lw          $v1, 0x7B98($v0)
    ctx->pc = 0x484900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31640)));
label_484904:
    // 0x484904: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x484904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_484908:
    // 0x484908: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x484908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48490c:
    // 0x48490c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x48490cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484910:
    // 0x484910: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x484910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_484914:
    // 0x484914: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x484914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_484918:
    // 0x484918: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x484918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_48491c:
    // 0x48491c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x48491cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_484920:
    // 0x484920: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x484920u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_484924:
    // 0x484924: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x484924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_484928:
    // 0x484928: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x484928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_48492c:
    // 0x48492c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x48492cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_484930:
    // 0x484930: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x484930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_484934:
    // 0x484934: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x484934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_484938:
    // 0x484938: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x484938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_48493c:
    // 0x48493c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x48493cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_484940:
    // 0x484940: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x484940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_484944:
    // 0x484944: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x484944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_484948:
    // 0x484948: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x484948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_48494c:
    // 0x48494c: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x48494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_484950:
    // 0x484950: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x484950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_484954:
    // 0x484954: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x484954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_484958:
    // 0x484958: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x484958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_48495c:
    // 0x48495c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x48495cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_484960:
    // 0x484960: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x484960u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_484964:
    // 0x484964: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x484964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_484968:
    // 0x484968: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x484968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_48496c:
    // 0x48496c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x48496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_484970:
    // 0x484970: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x484970u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_484974:
    // 0x484974: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x484974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_484978:
    // 0x484978: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x484978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_48497c:
    // 0x48497c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x48497cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_484980:
    // 0x484980: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x484980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_484984:
    // 0x484984: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x484984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_484988:
    // 0x484988: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x484988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_48498c:
    // 0x48498c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x48498cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_484990:
    // 0x484990: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x484990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_484994:
    // 0x484994: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x484994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_484998:
    // 0x484998: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x484998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48499c:
    // 0x48499c: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x48499cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4849a0:
    // 0x4849a0: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x4849a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4849a4:
    // 0x4849a4: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x4849a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4849a8:
    // 0x4849a8: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x4849a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4849ac:
    // 0x4849ac: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x4849acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4849b0:
    // 0x4849b0: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x4849b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4849b4:
    // 0x4849b4: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x4849b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4849b8:
    // 0x4849b8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x4849b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4849bc:
    // 0x4849bc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4849bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4849c0:
    // 0x4849c0: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x4849c0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4849c4:
    // 0x4849c4: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x4849c4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4849c8:
    // 0x4849c8: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x4849c8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4849cc:
    // 0x4849cc: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x4849ccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4849d0:
    // 0x4849d0: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x4849d0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4849d4:
    // 0x4849d4: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x4849d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4849d8:
    // 0x4849d8: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x4849d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4849dc:
    // 0x4849dc: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x4849dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4849e0:
    // 0x4849e0: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x4849e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4849e4:
    // 0x4849e4: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x4849e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4849e8:
    // 0x4849e8: 0xc0a7a88  jal         func_29EA20
label_4849ec:
    if (ctx->pc == 0x4849ECu) {
        ctx->pc = 0x4849ECu;
            // 0x4849ec: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x4849F0u;
        goto label_4849f0;
    }
    ctx->pc = 0x4849E8u;
    SET_GPR_U32(ctx, 31, 0x4849F0u);
    ctx->pc = 0x4849ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4849E8u;
            // 0x4849ec: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4849F0u; }
        if (ctx->pc != 0x4849F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4849F0u; }
        if (ctx->pc != 0x4849F0u) { return; }
    }
    ctx->pc = 0x4849F0u;
label_4849f0:
    // 0x4849f0: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4849f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4849f4:
    // 0x4849f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4849f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4849f8:
    // 0x4849f8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4849fc:
    if (ctx->pc == 0x4849FCu) {
        ctx->pc = 0x4849FCu;
            // 0x4849fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x484A00u;
        goto label_484a00;
    }
    ctx->pc = 0x4849F8u;
    {
        const bool branch_taken_0x4849f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4849FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4849F8u;
            // 0x4849fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4849f8) {
            ctx->pc = 0x484A48u;
            goto label_484a48;
        }
    }
    ctx->pc = 0x484A00u;
label_484a00:
    // 0x484a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x484a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484a04:
    // 0x484a04: 0xc088ef4  jal         func_223BD0
label_484a08:
    if (ctx->pc == 0x484A08u) {
        ctx->pc = 0x484A08u;
            // 0x484a08: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x484A0Cu;
        goto label_484a0c;
    }
    ctx->pc = 0x484A04u;
    SET_GPR_U32(ctx, 31, 0x484A0Cu);
    ctx->pc = 0x484A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484A04u;
            // 0x484a08: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484A0Cu; }
        if (ctx->pc != 0x484A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484A0Cu; }
        if (ctx->pc != 0x484A0Cu) { return; }
    }
    ctx->pc = 0x484A0Cu;
label_484a0c:
    // 0x484a0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x484a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_484a10:
    // 0x484a10: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x484a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_484a14:
    // 0x484a14: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x484a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_484a18:
    // 0x484a18: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x484a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_484a1c:
    // 0x484a1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x484a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_484a20:
    // 0x484a20: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x484a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_484a24:
    // 0x484a24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x484a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_484a28:
    // 0x484a28: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x484a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_484a2c:
    // 0x484a2c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x484a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_484a30:
    // 0x484a30: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x484a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_484a34:
    // 0x484a34: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x484a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_484a38:
    // 0x484a38: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x484a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_484a3c:
    // 0x484a3c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x484a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_484a40:
    // 0x484a40: 0xc088b38  jal         func_222CE0
label_484a44:
    if (ctx->pc == 0x484A44u) {
        ctx->pc = 0x484A44u;
            // 0x484a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484A48u;
        goto label_484a48;
    }
    ctx->pc = 0x484A40u;
    SET_GPR_U32(ctx, 31, 0x484A48u);
    ctx->pc = 0x484A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484A40u;
            // 0x484a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484A48u; }
        if (ctx->pc != 0x484A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484A48u; }
        if (ctx->pc != 0x484A48u) { return; }
    }
    ctx->pc = 0x484A48u;
label_484a48:
    // 0x484a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x484a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484a4c:
    // 0x484a4c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x484a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_484a50:
    // 0x484a50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x484a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484a54:
    // 0x484a54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x484a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484a58:
    // 0x484a58: 0xc08914c  jal         func_224530
label_484a5c:
    if (ctx->pc == 0x484A5Cu) {
        ctx->pc = 0x484A5Cu;
            // 0x484a5c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x484A60u;
        goto label_484a60;
    }
    ctx->pc = 0x484A58u;
    SET_GPR_U32(ctx, 31, 0x484A60u);
    ctx->pc = 0x484A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484A58u;
            // 0x484a5c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484A60u; }
        if (ctx->pc != 0x484A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484A60u; }
        if (ctx->pc != 0x484A60u) { return; }
    }
    ctx->pc = 0x484A60u;
label_484a60:
    // 0x484a60: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x484a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_484a64:
    // 0x484a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x484a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484a68:
    // 0x484a68: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x484a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_484a6c:
    // 0x484a6c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x484a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_484a70:
    // 0x484a70: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x484a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_484a74:
    // 0x484a74: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x484a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_484a78:
    // 0x484a78: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x484a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_484a7c:
    // 0x484a7c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x484a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_484a80:
    // 0x484a80: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x484a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_484a84:
    // 0x484a84: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x484a84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_484a88:
    // 0x484a88: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x484a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_484a8c:
    // 0x484a8c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x484a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_484a90:
    // 0x484a90: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x484a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_484a94:
    // 0x484a94: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x484a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_484a98:
    // 0x484a98: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x484a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_484a9c:
    // 0x484a9c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x484a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_484aa0:
    // 0x484aa0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x484aa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_484aa4:
    // 0x484aa4: 0xc0892b0  jal         func_224AC0
label_484aa8:
    if (ctx->pc == 0x484AA8u) {
        ctx->pc = 0x484AA8u;
            // 0x484aa8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x484AACu;
        goto label_484aac;
    }
    ctx->pc = 0x484AA4u;
    SET_GPR_U32(ctx, 31, 0x484AACu);
    ctx->pc = 0x484AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484AA4u;
            // 0x484aa8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484AACu; }
        if (ctx->pc != 0x484AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484AACu; }
        if (ctx->pc != 0x484AACu) { return; }
    }
    ctx->pc = 0x484AACu;
label_484aac:
    // 0x484aac: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x484aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_484ab0:
    // 0x484ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x484ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484ab4:
    // 0x484ab4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x484ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_484ab8:
    // 0x484ab8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x484ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_484abc:
    // 0x484abc: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x484abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_484ac0:
    // 0x484ac0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x484ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_484ac4:
    // 0x484ac4: 0xc0891d8  jal         func_224760
label_484ac8:
    if (ctx->pc == 0x484AC8u) {
        ctx->pc = 0x484AC8u;
            // 0x484ac8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x484ACCu;
        goto label_484acc;
    }
    ctx->pc = 0x484AC4u;
    SET_GPR_U32(ctx, 31, 0x484ACCu);
    ctx->pc = 0x484AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484AC4u;
            // 0x484ac8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484ACCu; }
        if (ctx->pc != 0x484ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484ACCu; }
        if (ctx->pc != 0x484ACCu) { return; }
    }
    ctx->pc = 0x484ACCu;
label_484acc:
    // 0x484acc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x484accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_484ad0:
    // 0x484ad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x484ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484ad4:
    // 0x484ad4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x484ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_484ad8:
    // 0x484ad8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x484ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_484adc:
    // 0x484adc: 0xc08c164  jal         func_230590
label_484ae0:
    if (ctx->pc == 0x484AE0u) {
        ctx->pc = 0x484AE0u;
            // 0x484ae0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x484AE4u;
        goto label_484ae4;
    }
    ctx->pc = 0x484ADCu;
    SET_GPR_U32(ctx, 31, 0x484AE4u);
    ctx->pc = 0x484AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484ADCu;
            // 0x484ae0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484AE4u; }
        if (ctx->pc != 0x484AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484AE4u; }
        if (ctx->pc != 0x484AE4u) { return; }
    }
    ctx->pc = 0x484AE4u;
label_484ae4:
    // 0x484ae4: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x484ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_484ae8:
    // 0x484ae8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x484ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_484aec:
    // 0x484aec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x484aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_484af0:
    // 0x484af0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x484af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_484af4:
    // 0x484af4: 0xc0a7a88  jal         func_29EA20
label_484af8:
    if (ctx->pc == 0x484AF8u) {
        ctx->pc = 0x484AF8u;
            // 0x484af8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x484AFCu;
        goto label_484afc;
    }
    ctx->pc = 0x484AF4u;
    SET_GPR_U32(ctx, 31, 0x484AFCu);
    ctx->pc = 0x484AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484AF4u;
            // 0x484af8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484AFCu; }
        if (ctx->pc != 0x484AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484AFCu; }
        if (ctx->pc != 0x484AFCu) { return; }
    }
    ctx->pc = 0x484AFCu;
label_484afc:
    // 0x484afc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x484afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_484b00:
    // 0x484b00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x484b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484b04:
    // 0x484b04: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_484b08:
    if (ctx->pc == 0x484B08u) {
        ctx->pc = 0x484B08u;
            // 0x484b08: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x484B0Cu;
        goto label_484b0c;
    }
    ctx->pc = 0x484B04u;
    {
        const bool branch_taken_0x484b04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x484B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484B04u;
            // 0x484b08: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484b04) {
            ctx->pc = 0x484B28u;
            goto label_484b28;
        }
    }
    ctx->pc = 0x484B0Cu;
label_484b0c:
    // 0x484b0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x484b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_484b10:
    // 0x484b10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x484b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484b14:
    // 0x484b14: 0xc0869d0  jal         func_21A740
label_484b18:
    if (ctx->pc == 0x484B18u) {
        ctx->pc = 0x484B18u;
            // 0x484b18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484B1Cu;
        goto label_484b1c;
    }
    ctx->pc = 0x484B14u;
    SET_GPR_U32(ctx, 31, 0x484B1Cu);
    ctx->pc = 0x484B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484B14u;
            // 0x484b18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484B1Cu; }
        if (ctx->pc != 0x484B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484B1Cu; }
        if (ctx->pc != 0x484B1Cu) { return; }
    }
    ctx->pc = 0x484B1Cu;
label_484b1c:
    // 0x484b1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x484b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_484b20:
    // 0x484b20: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x484b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_484b24:
    // 0x484b24: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x484b24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_484b28:
    // 0x484b28: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x484b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_484b2c:
    // 0x484b2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x484b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_484b30:
    // 0x484b30: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x484b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_484b34:
    // 0x484b34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x484b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_484b38:
    // 0x484b38: 0xc08c650  jal         func_231940
label_484b3c:
    if (ctx->pc == 0x484B3Cu) {
        ctx->pc = 0x484B3Cu;
            // 0x484b3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484B40u;
        goto label_484b40;
    }
    ctx->pc = 0x484B38u;
    SET_GPR_U32(ctx, 31, 0x484B40u);
    ctx->pc = 0x484B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484B38u;
            // 0x484b3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484B40u; }
        if (ctx->pc != 0x484B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484B40u; }
        if (ctx->pc != 0x484B40u) { return; }
    }
    ctx->pc = 0x484B40u;
label_484b40:
    // 0x484b40: 0xc040180  jal         func_100600
label_484b44:
    if (ctx->pc == 0x484B44u) {
        ctx->pc = 0x484B44u;
            // 0x484b44: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x484B48u;
        goto label_484b48;
    }
    ctx->pc = 0x484B40u;
    SET_GPR_U32(ctx, 31, 0x484B48u);
    ctx->pc = 0x484B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484B40u;
            // 0x484b44: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484B48u; }
        if (ctx->pc != 0x484B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484B48u; }
        if (ctx->pc != 0x484B48u) { return; }
    }
    ctx->pc = 0x484B48u;
label_484b48:
    // 0x484b48: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_484b4c:
    if (ctx->pc == 0x484B4Cu) {
        ctx->pc = 0x484B4Cu;
            // 0x484b4c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x484B50u;
        goto label_484b50;
    }
    ctx->pc = 0x484B48u;
    {
        const bool branch_taken_0x484b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x484b48) {
            ctx->pc = 0x484B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x484B48u;
            // 0x484b4c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x484B98u;
            goto label_484b98;
        }
    }
    ctx->pc = 0x484B50u;
label_484b50:
    // 0x484b50: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x484b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_484b54:
    // 0x484b54: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x484b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_484b58:
    // 0x484b58: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x484b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_484b5c:
    // 0x484b5c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x484b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_484b60:
    // 0x484b60: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x484b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_484b64:
    // 0x484b64: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x484b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_484b68:
    // 0x484b68: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x484b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_484b6c:
    // 0x484b6c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x484b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_484b70:
    // 0x484b70: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x484b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_484b74:
    // 0x484b74: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x484b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_484b78:
    // 0x484b78: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x484b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_484b7c:
    // 0x484b7c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x484b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_484b80:
    // 0x484b80: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x484b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_484b84:
    // 0x484b84: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x484b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_484b88:
    // 0x484b88: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x484b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_484b8c:
    // 0x484b8c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x484b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_484b90:
    // 0x484b90: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x484b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_484b94:
    // 0x484b94: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x484b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_484b98:
    // 0x484b98: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x484b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_484b9c:
    // 0x484b9c: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x484b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_484ba0:
    // 0x484ba0: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x484ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_484ba4:
    // 0x484ba4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x484ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_484ba8:
    // 0x484ba8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x484ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_484bac:
    // 0x484bac: 0xc040180  jal         func_100600
label_484bb0:
    if (ctx->pc == 0x484BB0u) {
        ctx->pc = 0x484BB0u;
            // 0x484bb0: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x484BB4u;
        goto label_484bb4;
    }
    ctx->pc = 0x484BACu;
    SET_GPR_U32(ctx, 31, 0x484BB4u);
    ctx->pc = 0x484BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484BACu;
            // 0x484bb0: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484BB4u; }
        if (ctx->pc != 0x484BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484BB4u; }
        if (ctx->pc != 0x484BB4u) { return; }
    }
    ctx->pc = 0x484BB4u;
label_484bb4:
    // 0x484bb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x484bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484bb8:
    // 0x484bb8: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_484bbc:
    if (ctx->pc == 0x484BBCu) {
        ctx->pc = 0x484BC0u;
        goto label_484bc0;
    }
    ctx->pc = 0x484BB8u;
    {
        const bool branch_taken_0x484bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x484bb8) {
            ctx->pc = 0x484C38u;
            goto label_484c38;
        }
    }
    ctx->pc = 0x484BC0u;
label_484bc0:
    // 0x484bc0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x484bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_484bc4:
    // 0x484bc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x484bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_484bc8:
    // 0x484bc8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x484bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_484bcc:
    // 0x484bcc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x484bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_484bd0:
    // 0x484bd0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x484bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_484bd4:
    // 0x484bd4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x484bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_484bd8:
    // 0x484bd8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x484bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_484bdc:
    // 0x484bdc: 0xc040138  jal         func_1004E0
label_484be0:
    if (ctx->pc == 0x484BE0u) {
        ctx->pc = 0x484BE0u;
            // 0x484be0: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x484BE4u;
        goto label_484be4;
    }
    ctx->pc = 0x484BDCu;
    SET_GPR_U32(ctx, 31, 0x484BE4u);
    ctx->pc = 0x484BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484BDCu;
            // 0x484be0: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484BE4u; }
        if (ctx->pc != 0x484BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484BE4u; }
        if (ctx->pc != 0x484BE4u) { return; }
    }
    ctx->pc = 0x484BE4u;
label_484be4:
    // 0x484be4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x484be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_484be8:
    // 0x484be8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x484be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484bec:
    // 0x484bec: 0xc040138  jal         func_1004E0
label_484bf0:
    if (ctx->pc == 0x484BF0u) {
        ctx->pc = 0x484BF0u;
            // 0x484bf0: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x484BF4u;
        goto label_484bf4;
    }
    ctx->pc = 0x484BECu;
    SET_GPR_U32(ctx, 31, 0x484BF4u);
    ctx->pc = 0x484BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484BECu;
            // 0x484bf0: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484BF4u; }
        if (ctx->pc != 0x484BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484BF4u; }
        if (ctx->pc != 0x484BF4u) { return; }
    }
    ctx->pc = 0x484BF4u;
label_484bf4:
    // 0x484bf4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x484bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_484bf8:
    // 0x484bf8: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x484bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_484bfc:
    // 0x484bfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x484bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484c00:
    // 0x484c00: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x484c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_484c04:
    // 0x484c04: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x484c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_484c08:
    // 0x484c08: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x484c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_484c0c:
    // 0x484c0c: 0xc040840  jal         func_102100
label_484c10:
    if (ctx->pc == 0x484C10u) {
        ctx->pc = 0x484C10u;
            // 0x484c10: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x484C14u;
        goto label_484c14;
    }
    ctx->pc = 0x484C0Cu;
    SET_GPR_U32(ctx, 31, 0x484C14u);
    ctx->pc = 0x484C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484C0Cu;
            // 0x484c10: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484C14u; }
        if (ctx->pc != 0x484C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484C14u; }
        if (ctx->pc != 0x484C14u) { return; }
    }
    ctx->pc = 0x484C14u;
label_484c14:
    // 0x484c14: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x484c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_484c18:
    // 0x484c18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x484c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484c1c:
    // 0x484c1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x484c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_484c20:
    // 0x484c20: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x484c20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_484c24:
    // 0x484c24: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x484c24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_484c28:
    // 0x484c28: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x484c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_484c2c:
    // 0x484c2c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x484c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_484c30:
    // 0x484c30: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_484c34:
    if (ctx->pc == 0x484C34u) {
        ctx->pc = 0x484C38u;
        goto label_484c38;
    }
    ctx->pc = 0x484C30u;
    {
        const bool branch_taken_0x484c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x484c30) {
            ctx->pc = 0x484C1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_484c1c;
        }
    }
    ctx->pc = 0x484C38u;
label_484c38:
    // 0x484c38: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x484c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_484c3c:
    // 0x484c3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x484c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_484c40:
    // 0x484c40: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x484c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_484c44:
    // 0x484c44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x484c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_484c48:
    // 0x484c48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x484c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_484c4c:
    // 0x484c4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x484c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_484c50:
    // 0x484c50: 0xc0e7d2c  jal         func_39F4B0
label_484c54:
    if (ctx->pc == 0x484C54u) {
        ctx->pc = 0x484C54u;
            // 0x484c54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484C58u;
        goto label_484c58;
    }
    ctx->pc = 0x484C50u;
    SET_GPR_U32(ctx, 31, 0x484C58u);
    ctx->pc = 0x484C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484C50u;
            // 0x484c54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484C58u; }
        if (ctx->pc != 0x484C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484C58u; }
        if (ctx->pc != 0x484C58u) { return; }
    }
    ctx->pc = 0x484C58u;
label_484c58:
    // 0x484c58: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x484c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_484c5c:
    // 0x484c5c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x484c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_484c60:
    // 0x484c60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x484c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_484c64:
    // 0x484c64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x484c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_484c68:
    // 0x484c68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x484c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_484c6c:
    // 0x484c6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x484c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_484c70:
    // 0x484c70: 0xc0e7d2c  jal         func_39F4B0
label_484c74:
    if (ctx->pc == 0x484C74u) {
        ctx->pc = 0x484C74u;
            // 0x484c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484C78u;
        goto label_484c78;
    }
    ctx->pc = 0x484C70u;
    SET_GPR_U32(ctx, 31, 0x484C78u);
    ctx->pc = 0x484C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484C70u;
            // 0x484c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484C78u; }
        if (ctx->pc != 0x484C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484C78u; }
        if (ctx->pc != 0x484C78u) { return; }
    }
    ctx->pc = 0x484C78u;
label_484c78:
    // 0x484c78: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x484c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_484c7c:
    // 0x484c7c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x484c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_484c80:
    // 0x484c80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x484c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_484c84:
    // 0x484c84: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x484c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_484c88:
    // 0x484c88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x484c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_484c8c:
    // 0x484c8c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x484c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_484c90:
    // 0x484c90: 0xc0e7d2c  jal         func_39F4B0
label_484c94:
    if (ctx->pc == 0x484C94u) {
        ctx->pc = 0x484C94u;
            // 0x484c94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484C98u;
        goto label_484c98;
    }
    ctx->pc = 0x484C90u;
    SET_GPR_U32(ctx, 31, 0x484C98u);
    ctx->pc = 0x484C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484C90u;
            // 0x484c94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484C98u; }
        if (ctx->pc != 0x484C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484C98u; }
        if (ctx->pc != 0x484C98u) { return; }
    }
    ctx->pc = 0x484C98u;
label_484c98:
    // 0x484c98: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x484c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_484c9c:
    // 0x484c9c: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x484c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_484ca0:
    // 0x484ca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x484ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484ca4:
    // 0x484ca4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x484ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_484ca8:
    // 0x484ca8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x484ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_484cac:
    // 0x484cac: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x484cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_484cb0:
    // 0x484cb0: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x484cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_484cb4:
    // 0x484cb4: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x484cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_484cb8:
    // 0x484cb8: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x484cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
label_484cbc:
    // 0x484cbc: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x484cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_484cc0:
    // 0x484cc0: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x484cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
label_484cc4:
    // 0x484cc4: 0xc040180  jal         func_100600
label_484cc8:
    if (ctx->pc == 0x484CC8u) {
        ctx->pc = 0x484CC8u;
            // 0x484cc8: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x484CCCu;
        goto label_484ccc;
    }
    ctx->pc = 0x484CC4u;
    SET_GPR_U32(ctx, 31, 0x484CCCu);
    ctx->pc = 0x484CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484CC4u;
            // 0x484cc8: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484CCCu; }
        if (ctx->pc != 0x484CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484CCCu; }
        if (ctx->pc != 0x484CCCu) { return; }
    }
    ctx->pc = 0x484CCCu;
label_484ccc:
    // 0x484ccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x484cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484cd0:
    // 0x484cd0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_484cd4:
    if (ctx->pc == 0x484CD4u) {
        ctx->pc = 0x484CD4u;
            // 0x484cd4: 0x3c0246af  lui         $v0, 0x46AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
        ctx->pc = 0x484CD8u;
        goto label_484cd8;
    }
    ctx->pc = 0x484CD0u;
    {
        const bool branch_taken_0x484cd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x484cd0) {
            ctx->pc = 0x484CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x484CD0u;
            // 0x484cd4: 0x3c0246af  lui         $v0, 0x46AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x484D10u;
            goto label_484d10;
        }
    }
    ctx->pc = 0x484CD8u;
label_484cd8:
    // 0x484cd8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x484cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_484cdc:
    // 0x484cdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x484cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_484ce0:
    // 0x484ce0: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x484ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_484ce4:
    // 0x484ce4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x484ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_484ce8:
    // 0x484ce8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x484ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_484cec:
    // 0x484cec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x484cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_484cf0:
    // 0x484cf0: 0xc040138  jal         func_1004E0
label_484cf4:
    if (ctx->pc == 0x484CF4u) {
        ctx->pc = 0x484CF4u;
            // 0x484cf4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x484CF8u;
        goto label_484cf8;
    }
    ctx->pc = 0x484CF0u;
    SET_GPR_U32(ctx, 31, 0x484CF8u);
    ctx->pc = 0x484CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484CF0u;
            // 0x484cf4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484CF8u; }
        if (ctx->pc != 0x484CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484CF8u; }
        if (ctx->pc != 0x484CF8u) { return; }
    }
    ctx->pc = 0x484CF8u;
label_484cf8:
    // 0x484cf8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x484cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_484cfc:
    // 0x484cfc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x484cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_484d00:
    // 0x484d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x484d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484d04:
    // 0x484d04: 0xc04a576  jal         func_1295D8
label_484d08:
    if (ctx->pc == 0x484D08u) {
        ctx->pc = 0x484D08u;
            // 0x484d08: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x484D0Cu;
        goto label_484d0c;
    }
    ctx->pc = 0x484D04u;
    SET_GPR_U32(ctx, 31, 0x484D0Cu);
    ctx->pc = 0x484D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484D04u;
            // 0x484d08: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484D0Cu; }
        if (ctx->pc != 0x484D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484D0Cu; }
        if (ctx->pc != 0x484D0Cu) { return; }
    }
    ctx->pc = 0x484D0Cu;
label_484d0c:
    // 0x484d0c: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x484d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_484d10:
    // 0x484d10: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x484d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_484d14:
    // 0x484d14: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x484d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_484d18:
    // 0x484d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x484d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484d1c:
    // 0x484d1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x484d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_484d20:
    // 0x484d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x484d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484d24:
    // 0x484d24: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x484d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_484d28:
    // 0x484d28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x484d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484d2c:
    // 0x484d2c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x484d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_484d30:
    // 0x484d30: 0x34460aae  ori         $a2, $v0, 0xAAE
    ctx->pc = 0x484d30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2734);
label_484d34:
    // 0x484d34: 0xc122cd8  jal         func_48B360
label_484d38:
    if (ctx->pc == 0x484D38u) {
        ctx->pc = 0x484D38u;
            // 0x484d38: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->pc = 0x484D3Cu;
        goto label_484d3c;
    }
    ctx->pc = 0x484D34u;
    SET_GPR_U32(ctx, 31, 0x484D3Cu);
    ctx->pc = 0x484D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484D34u;
            // 0x484d38: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484D3Cu; }
        if (ctx->pc != 0x484D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484D3Cu; }
        if (ctx->pc != 0x484D3Cu) { return; }
    }
    ctx->pc = 0x484D3Cu;
label_484d3c:
    // 0x484d3c: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x484d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_484d40:
    // 0x484d40: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x484d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_484d44:
    // 0x484d44: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x484d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_484d48:
    // 0x484d48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x484d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484d4c:
    // 0x484d4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x484d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_484d50:
    // 0x484d50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x484d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484d54:
    // 0x484d54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x484d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_484d58:
    // 0x484d58: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x484d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_484d5c:
    // 0x484d5c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x484d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_484d60:
    // 0x484d60: 0xc122cd8  jal         func_48B360
label_484d64:
    if (ctx->pc == 0x484D64u) {
        ctx->pc = 0x484D64u;
            // 0x484d64: 0x344601ae  ori         $a2, $v0, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
        ctx->pc = 0x484D68u;
        goto label_484d68;
    }
    ctx->pc = 0x484D60u;
    SET_GPR_U32(ctx, 31, 0x484D68u);
    ctx->pc = 0x484D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484D60u;
            // 0x484d64: 0x344601ae  ori         $a2, $v0, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484D68u; }
        if (ctx->pc != 0x484D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484D68u; }
        if (ctx->pc != 0x484D68u) { return; }
    }
    ctx->pc = 0x484D68u;
label_484d68:
    // 0x484d68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x484d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_484d6c:
    // 0x484d6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x484d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_484d70:
    // 0x484d70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x484d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_484d74:
    // 0x484d74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_484d78:
    // 0x484d78: 0x3e00008  jr          $ra
label_484d7c:
    if (ctx->pc == 0x484D7Cu) {
        ctx->pc = 0x484D7Cu;
            // 0x484d7c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x484D80u;
        goto label_484d80;
    }
    ctx->pc = 0x484D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484D78u;
            // 0x484d7c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x484D80u;
label_484d80:
    // 0x484d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x484d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_484d84:
    // 0x484d84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x484d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_484d88:
    // 0x484d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x484d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_484d8c:
    // 0x484d8c: 0xc0e3580  jal         func_38D600
label_484d90:
    if (ctx->pc == 0x484D90u) {
        ctx->pc = 0x484D90u;
            // 0x484d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484D94u;
        goto label_484d94;
    }
    ctx->pc = 0x484D8Cu;
    SET_GPR_U32(ctx, 31, 0x484D94u);
    ctx->pc = 0x484D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484D8Cu;
            // 0x484d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484D94u; }
        if (ctx->pc != 0x484D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484D94u; }
        if (ctx->pc != 0x484D94u) { return; }
    }
    ctx->pc = 0x484D94u;
label_484d94:
    // 0x484d94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x484d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_484d98:
    // 0x484d98: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x484d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_484d9c:
    // 0x484d9c: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x484d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
label_484da0:
    // 0x484da0: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x484da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_484da4:
    // 0x484da4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x484da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484da8:
    // 0x484da8: 0xa2040068  sb          $a0, 0x68($s0)
    ctx->pc = 0x484da8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 4));
label_484dac:
    // 0x484dac: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x484dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
label_484db0:
    // 0x484db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x484db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_484db4:
    // 0x484db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_484db8:
    // 0x484db8: 0x3e00008  jr          $ra
label_484dbc:
    if (ctx->pc == 0x484DBCu) {
        ctx->pc = 0x484DBCu;
            // 0x484dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x484DC0u;
        goto label_484dc0;
    }
    ctx->pc = 0x484DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484DB8u;
            // 0x484dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x484DC0u;
label_484dc0:
    // 0x484dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x484dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_484dc4:
    // 0x484dc4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x484dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_484dc8:
    // 0x484dc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x484dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_484dcc:
    // 0x484dcc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x484dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_484dd0:
    // 0x484dd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x484dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_484dd4:
    // 0x484dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x484dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_484dd8:
    // 0x484dd8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x484dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_484ddc:
    // 0x484ddc: 0xc0bb2e8  jal         func_2ECBA0
label_484de0:
    if (ctx->pc == 0x484DE0u) {
        ctx->pc = 0x484DE0u;
            // 0x484de0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x484DE4u;
        goto label_484de4;
    }
    ctx->pc = 0x484DDCu;
    SET_GPR_U32(ctx, 31, 0x484DE4u);
    ctx->pc = 0x484DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484DDCu;
            // 0x484de0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484DE4u; }
        if (ctx->pc != 0x484DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484DE4u; }
        if (ctx->pc != 0x484DE4u) { return; }
    }
    ctx->pc = 0x484DE4u;
label_484de4:
    // 0x484de4: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x484de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_484de8:
    // 0x484de8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x484de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_484dec:
    // 0x484dec: 0xc122d2c  jal         func_48B4B0
label_484df0:
    if (ctx->pc == 0x484DF0u) {
        ctx->pc = 0x484DF0u;
            // 0x484df0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x484DF4u;
        goto label_484df4;
    }
    ctx->pc = 0x484DECu;
    SET_GPR_U32(ctx, 31, 0x484DF4u);
    ctx->pc = 0x484DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484DECu;
            // 0x484df0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484DF4u; }
        if (ctx->pc != 0x484DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484DF4u; }
        if (ctx->pc != 0x484DF4u) { return; }
    }
    ctx->pc = 0x484DF4u;
label_484df4:
    // 0x484df4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x484df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_484df8:
    // 0x484df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_484dfc:
    // 0x484dfc: 0x3e00008  jr          $ra
label_484e00:
    if (ctx->pc == 0x484E00u) {
        ctx->pc = 0x484E00u;
            // 0x484e00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x484E04u;
        goto label_484e04;
    }
    ctx->pc = 0x484DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484DFCu;
            // 0x484e00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x484E04u;
label_484e04:
    // 0x484e04: 0x0  nop
    ctx->pc = 0x484e04u;
    // NOP
label_484e08:
    // 0x484e08: 0x0  nop
    ctx->pc = 0x484e08u;
    // NOP
label_484e0c:
    // 0x484e0c: 0x0  nop
    ctx->pc = 0x484e0cu;
    // NOP
label_484e10:
    // 0x484e10: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x484e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_484e14:
    // 0x484e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x484e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484e18:
    // 0x484e18: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
label_484e1c:
    if (ctx->pc == 0x484E1Cu) {
        ctx->pc = 0x484E20u;
        goto label_484e20;
    }
    ctx->pc = 0x484E18u;
    {
        const bool branch_taken_0x484e18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x484e18) {
            ctx->pc = 0x484E94u;
            goto label_484e94;
        }
    }
    ctx->pc = 0x484E20u;
label_484e20:
    // 0x484e20: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_484e24:
    if (ctx->pc == 0x484E24u) {
        ctx->pc = 0x484E28u;
        goto label_484e28;
    }
    ctx->pc = 0x484E20u;
    {
        const bool branch_taken_0x484e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x484e20) {
            ctx->pc = 0x484E30u;
            goto label_484e30;
        }
    }
    ctx->pc = 0x484E28u;
label_484e28:
    // 0x484e28: 0x1000001a  b           . + 4 + (0x1A << 2)
label_484e2c:
    if (ctx->pc == 0x484E2Cu) {
        ctx->pc = 0x484E30u;
        goto label_484e30;
    }
    ctx->pc = 0x484E28u;
    {
        const bool branch_taken_0x484e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484e28) {
            ctx->pc = 0x484E94u;
            goto label_484e94;
        }
    }
    ctx->pc = 0x484E30u;
label_484e30:
    // 0x484e30: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x484e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_484e34:
    // 0x484e34: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x484e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_484e38:
    // 0x484e38: 0x8c637b98  lw          $v1, 0x7B98($v1)
    ctx->pc = 0x484e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31640)));
label_484e3c:
    // 0x484e3c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x484e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_484e40:
    // 0x484e40: 0x8c690030  lw          $t1, 0x30($v1)
    ctx->pc = 0x484e40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_484e44:
    // 0x484e44: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x484e44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
label_484e48:
    // 0x484e48: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x484e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_484e4c:
    // 0x484e4c: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x484e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_484e50:
    // 0x484e50: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x484e50u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_484e54:
    // 0x484e54: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x484e54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_484e58:
    // 0x484e58: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x484e58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_484e5c:
    // 0x484e5c: 0x8c650920  lw          $a1, 0x920($v1)
    ctx->pc = 0x484e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2336)));
label_484e60:
    // 0x484e60: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x484e60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_484e64:
    // 0x484e64: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x484e64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_484e68:
    // 0x484e68: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x484e68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_484e6c:
    // 0x484e6c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x484e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_484e70:
    // 0x484e70: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x484e70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_484e74:
    // 0x484e74: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x484e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_484e78:
    // 0x484e78: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x484e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_484e7c:
    // 0x484e7c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x484e7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_484e80:
    // 0x484e80: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x484e80u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_484e84:
    // 0x484e84: 0x1d40fff3  bgtz        $t2, . + 4 + (-0xD << 2)
label_484e88:
    if (ctx->pc == 0x484E88u) {
        ctx->pc = 0x484E88u;
            // 0x484e88: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x484E8Cu;
        goto label_484e8c;
    }
    ctx->pc = 0x484E84u;
    {
        const bool branch_taken_0x484e84 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x484E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484E84u;
            // 0x484e88: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484e84) {
            ctx->pc = 0x484E54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_484e54;
        }
    }
    ctx->pc = 0x484E8Cu;
label_484e8c:
    // 0x484e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x484e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484e90:
    // 0x484e90: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x484e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
label_484e94:
    // 0x484e94: 0x3e00008  jr          $ra
label_484e98:
    if (ctx->pc == 0x484E98u) {
        ctx->pc = 0x484E9Cu;
        goto label_484e9c;
    }
    ctx->pc = 0x484E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x484E9Cu;
label_484e9c:
    // 0x484e9c: 0x0  nop
    ctx->pc = 0x484e9cu;
    // NOP
label_484ea0:
    // 0x484ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x484ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_484ea4:
    // 0x484ea4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x484ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_484ea8:
    // 0x484ea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x484ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_484eac:
    // 0x484eac: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x484eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_484eb0:
    // 0x484eb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x484eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_484eb4:
    // 0x484eb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x484eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_484eb8:
    // 0x484eb8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x484eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_484ebc:
    // 0x484ebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x484ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_484ec0:
    // 0x484ec0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x484ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484ec4:
    // 0x484ec4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x484ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_484ec8:
    // 0x484ec8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x484ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_484ecc:
    // 0x484ecc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x484eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_484ed0:
    // 0x484ed0: 0xc08bff0  jal         func_22FFC0
label_484ed4:
    if (ctx->pc == 0x484ED4u) {
        ctx->pc = 0x484ED4u;
            // 0x484ed4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484ED8u;
        goto label_484ed8;
    }
    ctx->pc = 0x484ED0u;
    SET_GPR_U32(ctx, 31, 0x484ED8u);
    ctx->pc = 0x484ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484ED0u;
            // 0x484ed4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484ED8u; }
        if (ctx->pc != 0x484ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484ED8u; }
        if (ctx->pc != 0x484ED8u) { return; }
    }
    ctx->pc = 0x484ED8u;
label_484ed8:
    // 0x484ed8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x484ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_484edc:
    // 0x484edc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x484edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_484ee0:
    // 0x484ee0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x484ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484ee4:
    // 0x484ee4: 0xc08914c  jal         func_224530
label_484ee8:
    if (ctx->pc == 0x484EE8u) {
        ctx->pc = 0x484EE8u;
            // 0x484ee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484EECu;
        goto label_484eec;
    }
    ctx->pc = 0x484EE4u;
    SET_GPR_U32(ctx, 31, 0x484EECu);
    ctx->pc = 0x484EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484EE4u;
            // 0x484ee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484EECu; }
        if (ctx->pc != 0x484EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484EECu; }
        if (ctx->pc != 0x484EECu) { return; }
    }
    ctx->pc = 0x484EECu;
label_484eec:
    // 0x484eec: 0xc0e393c  jal         func_38E4F0
label_484ef0:
    if (ctx->pc == 0x484EF0u) {
        ctx->pc = 0x484EF0u;
            // 0x484ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484EF4u;
        goto label_484ef4;
    }
    ctx->pc = 0x484EECu;
    SET_GPR_U32(ctx, 31, 0x484EF4u);
    ctx->pc = 0x484EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x484EECu;
            // 0x484ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484EF4u; }
        if (ctx->pc != 0x484EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484EF4u; }
        if (ctx->pc != 0x484EF4u) { return; }
    }
    ctx->pc = 0x484EF4u;
label_484ef4:
    // 0x484ef4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x484ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_484ef8:
    // 0x484ef8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x484ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_484efc:
    // 0x484efc: 0xa20300d8  sb          $v1, 0xD8($s0)
    ctx->pc = 0x484efcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 3));
label_484f00:
    // 0x484f00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x484f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_484f04:
    // 0x484f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_484f08:
    // 0x484f08: 0x3e00008  jr          $ra
label_484f0c:
    if (ctx->pc == 0x484F0Cu) {
        ctx->pc = 0x484F0Cu;
            // 0x484f0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x484F10u;
        goto label_484f10;
    }
    ctx->pc = 0x484F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484F08u;
            // 0x484f0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x484F10u;
label_484f10:
    // 0x484f10: 0x3e00008  jr          $ra
label_484f14:
    if (ctx->pc == 0x484F14u) {
        ctx->pc = 0x484F14u;
            // 0x484f14: 0x240259f6  addiu       $v0, $zero, 0x59F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23030));
        ctx->pc = 0x484F18u;
        goto label_484f18;
    }
    ctx->pc = 0x484F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484F10u;
            // 0x484f14: 0x240259f6  addiu       $v0, $zero, 0x59F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23030));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x484F18u;
label_484f18:
    // 0x484f18: 0x0  nop
    ctx->pc = 0x484f18u;
    // NOP
label_484f1c:
    // 0x484f1c: 0x0  nop
    ctx->pc = 0x484f1cu;
    // NOP
label_484f20:
    // 0x484f20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x484f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_484f24:
    // 0x484f24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x484f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_484f28:
    // 0x484f28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x484f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_484f2c:
    // 0x484f2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x484f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_484f30:
    // 0x484f30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x484f30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_484f34:
    // 0x484f34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x484f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_484f38:
    // 0x484f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x484f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_484f3c:
    // 0x484f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x484f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_484f40:
    // 0x484f40: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x484f40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_484f44:
    // 0x484f44: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_484f48:
    if (ctx->pc == 0x484F48u) {
        ctx->pc = 0x484F48u;
            // 0x484f48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x484F4Cu;
        goto label_484f4c;
    }
    ctx->pc = 0x484F44u;
    {
        const bool branch_taken_0x484f44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x484F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484F44u;
            // 0x484f48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484f44) {
            ctx->pc = 0x484F88u;
            goto label_484f88;
        }
    }
    ctx->pc = 0x484F4Cu;
label_484f4c:
    // 0x484f4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x484f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484f50:
    // 0x484f50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x484f50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484f54:
    // 0x484f54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x484f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484f58:
    // 0x484f58: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x484f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_484f5c:
    // 0x484f5c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x484f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_484f60:
    // 0x484f60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x484f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_484f64:
    // 0x484f64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x484f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_484f68:
    // 0x484f68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x484f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_484f6c:
    // 0x484f6c: 0x320f809  jalr        $t9
label_484f70:
    if (ctx->pc == 0x484F70u) {
        ctx->pc = 0x484F74u;
        goto label_484f74;
    }
    ctx->pc = 0x484F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x484F74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x484F74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x484F74u; }
            if (ctx->pc != 0x484F74u) { return; }
        }
        }
    }
    ctx->pc = 0x484F74u;
label_484f74:
    // 0x484f74: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x484f74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_484f78:
    // 0x484f78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x484f78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_484f7c:
    // 0x484f7c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x484f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_484f80:
    // 0x484f80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_484f84:
    if (ctx->pc == 0x484F84u) {
        ctx->pc = 0x484F84u;
            // 0x484f84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x484F88u;
        goto label_484f88;
    }
    ctx->pc = 0x484F80u;
    {
        const bool branch_taken_0x484f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484F80u;
            // 0x484f84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484f80) {
            ctx->pc = 0x484F58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_484f58;
        }
    }
    ctx->pc = 0x484F88u;
label_484f88:
    // 0x484f88: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x484f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_484f8c:
    // 0x484f8c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x484f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_484f90:
    // 0x484f90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x484f90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_484f94:
    // 0x484f94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x484f94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_484f98:
    // 0x484f98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x484f98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_484f9c:
    // 0x484f9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x484f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_484fa0:
    // 0x484fa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_484fa4:
    // 0x484fa4: 0x3e00008  jr          $ra
label_484fa8:
    if (ctx->pc == 0x484FA8u) {
        ctx->pc = 0x484FA8u;
            // 0x484fa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x484FACu;
        goto label_484fac;
    }
    ctx->pc = 0x484FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484FA4u;
            // 0x484fa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x484FACu;
label_484fac:
    // 0x484fac: 0x0  nop
    ctx->pc = 0x484facu;
    // NOP
label_484fb0:
    // 0x484fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x484fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_484fb4:
    // 0x484fb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x484fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484fb8:
    // 0x484fb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x484fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_484fbc:
    // 0x484fbc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x484fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_484fc0:
    // 0x484fc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x484fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_484fc4:
    // 0x484fc4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x484fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_484fc8:
    // 0x484fc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x484fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_484fcc:
    // 0x484fcc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x484fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_484fd0:
    // 0x484fd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x484fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_484fd4:
    // 0x484fd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x484fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_484fd8:
    // 0x484fd8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x484fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_484fdc:
    // 0x484fdc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x484fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_484fe0:
    // 0x484fe0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x484fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_484fe4:
    // 0x484fe4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x484fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_484fe8:
    // 0x484fe8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x484fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_484fec:
    // 0x484fec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x484fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_484ff0:
    // 0x484ff0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x484ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_484ff4:
    // 0x484ff4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x484ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_484ff8:
    // 0x484ff8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x484ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_484ffc:
    // 0x484ffc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x484ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_485000:
    // 0x485000: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x485000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_485004:
    // 0x485004: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x485004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_485008:
    // 0x485008: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x485008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48500c:
    // 0x48500c: 0xc0a997c  jal         func_2A65F0
label_485010:
    if (ctx->pc == 0x485010u) {
        ctx->pc = 0x485010u;
            // 0x485010: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x485014u;
        goto label_485014;
    }
    ctx->pc = 0x48500Cu;
    SET_GPR_U32(ctx, 31, 0x485014u);
    ctx->pc = 0x485010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48500Cu;
            // 0x485010: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485014u; }
        if (ctx->pc != 0x485014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485014u; }
        if (ctx->pc != 0x485014u) { return; }
    }
    ctx->pc = 0x485014u;
label_485014:
    // 0x485014: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x485014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_485018:
    // 0x485018: 0xc0d879c  jal         func_361E70
label_48501c:
    if (ctx->pc == 0x48501Cu) {
        ctx->pc = 0x48501Cu;
            // 0x48501c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485020u;
        goto label_485020;
    }
    ctx->pc = 0x485018u;
    SET_GPR_U32(ctx, 31, 0x485020u);
    ctx->pc = 0x48501Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485018u;
            // 0x48501c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485020u; }
        if (ctx->pc != 0x485020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485020u; }
        if (ctx->pc != 0x485020u) { return; }
    }
    ctx->pc = 0x485020u;
label_485020:
    // 0x485020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x485020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_485024:
    // 0x485024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_485028:
    // 0x485028: 0x3e00008  jr          $ra
label_48502c:
    if (ctx->pc == 0x48502Cu) {
        ctx->pc = 0x48502Cu;
            // 0x48502c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x485030u;
        goto label_485030;
    }
    ctx->pc = 0x485028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48502Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485028u;
            // 0x48502c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x485030u;
label_485030:
    // 0x485030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x485030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_485034:
    // 0x485034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x485034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_485038:
    // 0x485038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x485038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48503c:
    // 0x48503c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x48503cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_485040:
    // 0x485040: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_485044:
    if (ctx->pc == 0x485044u) {
        ctx->pc = 0x485044u;
            // 0x485044: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485048u;
        goto label_485048;
    }
    ctx->pc = 0x485040u;
    {
        const bool branch_taken_0x485040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x485044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485040u;
            // 0x485044: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485040) {
            ctx->pc = 0x485160u;
            goto label_485160;
        }
    }
    ctx->pc = 0x485048u;
label_485048:
    // 0x485048: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x485048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_48504c:
    // 0x48504c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x48504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_485050:
    // 0x485050: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x485050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_485054:
    // 0x485054: 0xc075128  jal         func_1D44A0
label_485058:
    if (ctx->pc == 0x485058u) {
        ctx->pc = 0x485058u;
            // 0x485058: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x48505Cu;
        goto label_48505c;
    }
    ctx->pc = 0x485054u;
    SET_GPR_U32(ctx, 31, 0x48505Cu);
    ctx->pc = 0x485058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485054u;
            // 0x485058: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48505Cu; }
        if (ctx->pc != 0x48505Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48505Cu; }
        if (ctx->pc != 0x48505Cu) { return; }
    }
    ctx->pc = 0x48505Cu;
label_48505c:
    // 0x48505c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x48505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_485060:
    // 0x485060: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x485060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_485064:
    // 0x485064: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x485064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_485068:
    // 0x485068: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x485068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_48506c:
    // 0x48506c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x48506cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_485070:
    // 0x485070: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_485074:
    if (ctx->pc == 0x485074u) {
        ctx->pc = 0x485074u;
            // 0x485074: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x485078u;
        goto label_485078;
    }
    ctx->pc = 0x485070u;
    {
        const bool branch_taken_0x485070 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x485074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485070u;
            // 0x485074: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485070) {
            ctx->pc = 0x485080u;
            goto label_485080;
        }
    }
    ctx->pc = 0x485078u;
label_485078:
    // 0x485078: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x485078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_48507c:
    // 0x48507c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x48507cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_485080:
    // 0x485080: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x485080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_485084:
    // 0x485084: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x485084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_485088:
    // 0x485088: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x485088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_48508c:
    // 0x48508c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x48508cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_485090:
    // 0x485090: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x485090u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_485094:
    // 0x485094: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_485098:
    if (ctx->pc == 0x485098u) {
        ctx->pc = 0x485098u;
            // 0x485098: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x48509Cu;
        goto label_48509c;
    }
    ctx->pc = 0x485094u;
    {
        const bool branch_taken_0x485094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x485094) {
            ctx->pc = 0x485098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485094u;
            // 0x485098: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4850A8u;
            goto label_4850a8;
        }
    }
    ctx->pc = 0x48509Cu;
label_48509c:
    // 0x48509c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x48509cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4850a0:
    // 0x4850a0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4850a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4850a4:
    // 0x4850a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4850a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4850a8:
    // 0x4850a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4850a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4850ac:
    // 0x4850ac: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4850acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4850b0:
    // 0x4850b0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4850b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4850b4:
    // 0x4850b4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4850b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4850b8:
    // 0x4850b8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4850bc:
    if (ctx->pc == 0x4850BCu) {
        ctx->pc = 0x4850BCu;
            // 0x4850bc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4850C0u;
        goto label_4850c0;
    }
    ctx->pc = 0x4850B8u;
    {
        const bool branch_taken_0x4850b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4850b8) {
            ctx->pc = 0x4850BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4850B8u;
            // 0x4850bc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4850CCu;
            goto label_4850cc;
        }
    }
    ctx->pc = 0x4850C0u;
label_4850c0:
    // 0x4850c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4850c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4850c4:
    // 0x4850c4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4850c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4850c8:
    // 0x4850c8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4850c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4850cc:
    // 0x4850cc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4850ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4850d0:
    // 0x4850d0: 0x320f809  jalr        $t9
label_4850d4:
    if (ctx->pc == 0x4850D4u) {
        ctx->pc = 0x4850D4u;
            // 0x4850d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4850D8u;
        goto label_4850d8;
    }
    ctx->pc = 0x4850D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4850D8u);
        ctx->pc = 0x4850D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4850D0u;
            // 0x4850d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4850D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4850D8u; }
            if (ctx->pc != 0x4850D8u) { return; }
        }
        }
    }
    ctx->pc = 0x4850D8u;
label_4850d8:
    // 0x4850d8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4850d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4850dc:
    // 0x4850dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4850dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4850e0:
    // 0x4850e0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4850e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4850e4:
    // 0x4850e4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4850e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4850e8:
    // 0x4850e8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4850e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4850ec:
    // 0x4850ec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4850ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4850f0:
    // 0x4850f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4850f4:
    if (ctx->pc == 0x4850F4u) {
        ctx->pc = 0x4850F4u;
            // 0x4850f4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4850F8u;
        goto label_4850f8;
    }
    ctx->pc = 0x4850F0u;
    {
        const bool branch_taken_0x4850f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4850f0) {
            ctx->pc = 0x4850F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4850F0u;
            // 0x4850f4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x485104u;
            goto label_485104;
        }
    }
    ctx->pc = 0x4850F8u;
label_4850f8:
    // 0x4850f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4850f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4850fc:
    // 0x4850fc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4850fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_485100:
    // 0x485100: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x485100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_485104:
    // 0x485104: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x485104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_485108:
    // 0x485108: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x485108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_48510c:
    // 0x48510c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x48510cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_485110:
    // 0x485110: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x485110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_485114:
    // 0x485114: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x485114u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_485118:
    // 0x485118: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_48511c:
    if (ctx->pc == 0x48511Cu) {
        ctx->pc = 0x485120u;
        goto label_485120;
    }
    ctx->pc = 0x485118u;
    {
        const bool branch_taken_0x485118 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x485118) {
            ctx->pc = 0x485128u;
            goto label_485128;
        }
    }
    ctx->pc = 0x485120u;
label_485120:
    // 0x485120: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x485120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_485124:
    // 0x485124: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x485124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_485128:
    // 0x485128: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x485128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_48512c:
    // 0x48512c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x48512cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_485130:
    // 0x485130: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x485130u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_485134:
    // 0x485134: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_485138:
    if (ctx->pc == 0x485138u) {
        ctx->pc = 0x48513Cu;
        goto label_48513c;
    }
    ctx->pc = 0x485134u;
    {
        const bool branch_taken_0x485134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x485134) {
            ctx->pc = 0x485144u;
            goto label_485144;
        }
    }
    ctx->pc = 0x48513Cu;
label_48513c:
    // 0x48513c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x48513cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_485140:
    // 0x485140: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x485140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_485144:
    // 0x485144: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x485144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_485148:
    // 0x485148: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x485148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_48514c:
    // 0x48514c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x48514cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_485150:
    // 0x485150: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_485154:
    if (ctx->pc == 0x485154u) {
        ctx->pc = 0x485154u;
            // 0x485154: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x485158u;
        goto label_485158;
    }
    ctx->pc = 0x485150u;
    {
        const bool branch_taken_0x485150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x485150) {
            ctx->pc = 0x485154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485150u;
            // 0x485154: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x485164u;
            goto label_485164;
        }
    }
    ctx->pc = 0x485158u;
label_485158:
    // 0x485158: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x485158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_48515c:
    // 0x48515c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x48515cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_485160:
    // 0x485160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x485160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_485164:
    // 0x485164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_485168:
    // 0x485168: 0x3e00008  jr          $ra
label_48516c:
    if (ctx->pc == 0x48516Cu) {
        ctx->pc = 0x48516Cu;
            // 0x48516c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x485170u;
        goto label_485170;
    }
    ctx->pc = 0x485168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48516Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485168u;
            // 0x48516c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x485170u;
label_485170:
    // 0x485170: 0x8120f3c  j           func_483CF0
label_485174:
    if (ctx->pc == 0x485174u) {
        ctx->pc = 0x485174u;
            // 0x485174: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x485178u;
        goto label_485178;
    }
    ctx->pc = 0x485170u;
    ctx->pc = 0x485174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485170u;
            // 0x485174: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x483CF0u;
    {
        auto targetFn = runtime->lookupFunction(0x483CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x485178u;
label_485178:
    // 0x485178: 0x0  nop
    ctx->pc = 0x485178u;
    // NOP
label_48517c:
    // 0x48517c: 0x0  nop
    ctx->pc = 0x48517cu;
    // NOP
label_485180:
    // 0x485180: 0x81210dc  j           func_484370
label_485184:
    if (ctx->pc == 0x485184u) {
        ctx->pc = 0x485184u;
            // 0x485184: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x485188u;
        goto label_485188;
    }
    ctx->pc = 0x485180u;
    ctx->pc = 0x485184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485180u;
            // 0x485184: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x484370u;
    {
        auto targetFn = runtime->lookupFunction(0x484370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x485188u;
label_485188:
    // 0x485188: 0x0  nop
    ctx->pc = 0x485188u;
    // NOP
label_48518c:
    // 0x48518c: 0x0  nop
    ctx->pc = 0x48518cu;
    // NOP
label_485190:
    // 0x485190: 0x8120ee4  j           func_483B90
label_485194:
    if (ctx->pc == 0x485194u) {
        ctx->pc = 0x485194u;
            // 0x485194: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x485198u;
        goto label_485198;
    }
    ctx->pc = 0x485190u;
    ctx->pc = 0x485194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485190u;
            // 0x485194: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x483B90u;
    if (runtime->hasFunction(0x483B90u)) {
        auto targetFn = runtime->lookupFunction(0x483B90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00483B90_0x483b90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x485198u;
label_485198:
    // 0x485198: 0x0  nop
    ctx->pc = 0x485198u;
    // NOP
label_48519c:
    // 0x48519c: 0x0  nop
    ctx->pc = 0x48519cu;
    // NOP
label_4851a0:
    // 0x4851a0: 0x8120ec0  j           func_483B00
label_4851a4:
    if (ctx->pc == 0x4851A4u) {
        ctx->pc = 0x4851A4u;
            // 0x4851a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4851A8u;
        goto label_4851a8;
    }
    ctx->pc = 0x4851A0u;
    ctx->pc = 0x4851A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4851A0u;
            // 0x4851a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x483B00u;
    {
        auto targetFn = runtime->lookupFunction(0x483B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4851A8u;
label_4851a8:
    // 0x4851a8: 0x0  nop
    ctx->pc = 0x4851a8u;
    // NOP
label_4851ac:
    // 0x4851ac: 0x0  nop
    ctx->pc = 0x4851acu;
    // NOP
label_4851b0:
    // 0x4851b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4851b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4851b4:
    // 0x4851b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4851b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4851b8:
    // 0x4851b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4851b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4851bc:
    // 0x4851bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4851bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4851c0:
    // 0x4851c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4851c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4851c4:
    // 0x4851c4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4851c8:
    if (ctx->pc == 0x4851C8u) {
        ctx->pc = 0x4851C8u;
            // 0x4851c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4851CCu;
        goto label_4851cc;
    }
    ctx->pc = 0x4851C4u;
    {
        const bool branch_taken_0x4851c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4851C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4851C4u;
            // 0x4851c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4851c4) {
            ctx->pc = 0x485220u;
            goto label_485220;
        }
    }
    ctx->pc = 0x4851CCu;
label_4851cc:
    // 0x4851cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4851ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4851d0:
    // 0x4851d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4851d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4851d4:
    // 0x4851d4: 0x2463f3e0  addiu       $v1, $v1, -0xC20
    ctx->pc = 0x4851d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964192));
label_4851d8:
    // 0x4851d8: 0x2442f418  addiu       $v0, $v0, -0xBE8
    ctx->pc = 0x4851d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964248));
label_4851dc:
    // 0x4851dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4851dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4851e0:
    // 0x4851e0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4851e4:
    if (ctx->pc == 0x4851E4u) {
        ctx->pc = 0x4851E4u;
            // 0x4851e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4851E8u;
        goto label_4851e8;
    }
    ctx->pc = 0x4851E0u;
    {
        const bool branch_taken_0x4851e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4851E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4851E0u;
            // 0x4851e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4851e0) {
            ctx->pc = 0x485208u;
            goto label_485208;
        }
    }
    ctx->pc = 0x4851E8u;
label_4851e8:
    // 0x4851e8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4851e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4851ec:
    // 0x4851ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4851ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4851f0:
    // 0x4851f0: 0x2463f540  addiu       $v1, $v1, -0xAC0
    ctx->pc = 0x4851f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964544));
label_4851f4:
    // 0x4851f4: 0x2442f578  addiu       $v0, $v0, -0xA88
    ctx->pc = 0x4851f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964600));
label_4851f8:
    // 0x4851f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4851f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4851fc:
    // 0x4851fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4851fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_485200:
    // 0x485200: 0xc121490  jal         func_485240
label_485204:
    if (ctx->pc == 0x485204u) {
        ctx->pc = 0x485204u;
            // 0x485204: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x485208u;
        goto label_485208;
    }
    ctx->pc = 0x485200u;
    SET_GPR_U32(ctx, 31, 0x485208u);
    ctx->pc = 0x485204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485200u;
            // 0x485204: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x485240u;
    if (runtime->hasFunction(0x485240u)) {
        auto targetFn = runtime->lookupFunction(0x485240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485208u; }
        if (ctx->pc != 0x485208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00485240_0x485240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485208u; }
        if (ctx->pc != 0x485208u) { return; }
    }
    ctx->pc = 0x485208u;
label_485208:
    // 0x485208: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x485208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_48520c:
    // 0x48520c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48520cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_485210:
    // 0x485210: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_485214:
    if (ctx->pc == 0x485214u) {
        ctx->pc = 0x485214u;
            // 0x485214: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485218u;
        goto label_485218;
    }
    ctx->pc = 0x485210u;
    {
        const bool branch_taken_0x485210 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x485210) {
            ctx->pc = 0x485214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485210u;
            // 0x485214: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x485224u;
            goto label_485224;
        }
    }
    ctx->pc = 0x485218u;
label_485218:
    // 0x485218: 0xc0400a8  jal         func_1002A0
label_48521c:
    if (ctx->pc == 0x48521Cu) {
        ctx->pc = 0x48521Cu;
            // 0x48521c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485220u;
        goto label_485220;
    }
    ctx->pc = 0x485218u;
    SET_GPR_U32(ctx, 31, 0x485220u);
    ctx->pc = 0x48521Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485218u;
            // 0x48521c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485220u; }
        if (ctx->pc != 0x485220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485220u; }
        if (ctx->pc != 0x485220u) { return; }
    }
    ctx->pc = 0x485220u;
label_485220:
    // 0x485220: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x485220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485224:
    // 0x485224: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x485224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_485228:
    // 0x485228: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x485228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48522c:
    // 0x48522c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48522cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_485230:
    // 0x485230: 0x3e00008  jr          $ra
label_485234:
    if (ctx->pc == 0x485234u) {
        ctx->pc = 0x485234u;
            // 0x485234: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x485238u;
        goto label_485238;
    }
    ctx->pc = 0x485230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485230u;
            // 0x485234: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x485238u;
label_485238:
    // 0x485238: 0x0  nop
    ctx->pc = 0x485238u;
    // NOP
label_48523c:
    // 0x48523c: 0x0  nop
    ctx->pc = 0x48523cu;
    // NOP
}
