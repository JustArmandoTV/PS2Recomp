#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CD570
// Address: 0x3cd570 - 0x3ce070
void sub_003CD570_0x3cd570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD570_0x3cd570");
#endif

    switch (ctx->pc) {
        case 0x3cd570u: goto label_3cd570;
        case 0x3cd574u: goto label_3cd574;
        case 0x3cd578u: goto label_3cd578;
        case 0x3cd57cu: goto label_3cd57c;
        case 0x3cd580u: goto label_3cd580;
        case 0x3cd584u: goto label_3cd584;
        case 0x3cd588u: goto label_3cd588;
        case 0x3cd58cu: goto label_3cd58c;
        case 0x3cd590u: goto label_3cd590;
        case 0x3cd594u: goto label_3cd594;
        case 0x3cd598u: goto label_3cd598;
        case 0x3cd59cu: goto label_3cd59c;
        case 0x3cd5a0u: goto label_3cd5a0;
        case 0x3cd5a4u: goto label_3cd5a4;
        case 0x3cd5a8u: goto label_3cd5a8;
        case 0x3cd5acu: goto label_3cd5ac;
        case 0x3cd5b0u: goto label_3cd5b0;
        case 0x3cd5b4u: goto label_3cd5b4;
        case 0x3cd5b8u: goto label_3cd5b8;
        case 0x3cd5bcu: goto label_3cd5bc;
        case 0x3cd5c0u: goto label_3cd5c0;
        case 0x3cd5c4u: goto label_3cd5c4;
        case 0x3cd5c8u: goto label_3cd5c8;
        case 0x3cd5ccu: goto label_3cd5cc;
        case 0x3cd5d0u: goto label_3cd5d0;
        case 0x3cd5d4u: goto label_3cd5d4;
        case 0x3cd5d8u: goto label_3cd5d8;
        case 0x3cd5dcu: goto label_3cd5dc;
        case 0x3cd5e0u: goto label_3cd5e0;
        case 0x3cd5e4u: goto label_3cd5e4;
        case 0x3cd5e8u: goto label_3cd5e8;
        case 0x3cd5ecu: goto label_3cd5ec;
        case 0x3cd5f0u: goto label_3cd5f0;
        case 0x3cd5f4u: goto label_3cd5f4;
        case 0x3cd5f8u: goto label_3cd5f8;
        case 0x3cd5fcu: goto label_3cd5fc;
        case 0x3cd600u: goto label_3cd600;
        case 0x3cd604u: goto label_3cd604;
        case 0x3cd608u: goto label_3cd608;
        case 0x3cd60cu: goto label_3cd60c;
        case 0x3cd610u: goto label_3cd610;
        case 0x3cd614u: goto label_3cd614;
        case 0x3cd618u: goto label_3cd618;
        case 0x3cd61cu: goto label_3cd61c;
        case 0x3cd620u: goto label_3cd620;
        case 0x3cd624u: goto label_3cd624;
        case 0x3cd628u: goto label_3cd628;
        case 0x3cd62cu: goto label_3cd62c;
        case 0x3cd630u: goto label_3cd630;
        case 0x3cd634u: goto label_3cd634;
        case 0x3cd638u: goto label_3cd638;
        case 0x3cd63cu: goto label_3cd63c;
        case 0x3cd640u: goto label_3cd640;
        case 0x3cd644u: goto label_3cd644;
        case 0x3cd648u: goto label_3cd648;
        case 0x3cd64cu: goto label_3cd64c;
        case 0x3cd650u: goto label_3cd650;
        case 0x3cd654u: goto label_3cd654;
        case 0x3cd658u: goto label_3cd658;
        case 0x3cd65cu: goto label_3cd65c;
        case 0x3cd660u: goto label_3cd660;
        case 0x3cd664u: goto label_3cd664;
        case 0x3cd668u: goto label_3cd668;
        case 0x3cd66cu: goto label_3cd66c;
        case 0x3cd670u: goto label_3cd670;
        case 0x3cd674u: goto label_3cd674;
        case 0x3cd678u: goto label_3cd678;
        case 0x3cd67cu: goto label_3cd67c;
        case 0x3cd680u: goto label_3cd680;
        case 0x3cd684u: goto label_3cd684;
        case 0x3cd688u: goto label_3cd688;
        case 0x3cd68cu: goto label_3cd68c;
        case 0x3cd690u: goto label_3cd690;
        case 0x3cd694u: goto label_3cd694;
        case 0x3cd698u: goto label_3cd698;
        case 0x3cd69cu: goto label_3cd69c;
        case 0x3cd6a0u: goto label_3cd6a0;
        case 0x3cd6a4u: goto label_3cd6a4;
        case 0x3cd6a8u: goto label_3cd6a8;
        case 0x3cd6acu: goto label_3cd6ac;
        case 0x3cd6b0u: goto label_3cd6b0;
        case 0x3cd6b4u: goto label_3cd6b4;
        case 0x3cd6b8u: goto label_3cd6b8;
        case 0x3cd6bcu: goto label_3cd6bc;
        case 0x3cd6c0u: goto label_3cd6c0;
        case 0x3cd6c4u: goto label_3cd6c4;
        case 0x3cd6c8u: goto label_3cd6c8;
        case 0x3cd6ccu: goto label_3cd6cc;
        case 0x3cd6d0u: goto label_3cd6d0;
        case 0x3cd6d4u: goto label_3cd6d4;
        case 0x3cd6d8u: goto label_3cd6d8;
        case 0x3cd6dcu: goto label_3cd6dc;
        case 0x3cd6e0u: goto label_3cd6e0;
        case 0x3cd6e4u: goto label_3cd6e4;
        case 0x3cd6e8u: goto label_3cd6e8;
        case 0x3cd6ecu: goto label_3cd6ec;
        case 0x3cd6f0u: goto label_3cd6f0;
        case 0x3cd6f4u: goto label_3cd6f4;
        case 0x3cd6f8u: goto label_3cd6f8;
        case 0x3cd6fcu: goto label_3cd6fc;
        case 0x3cd700u: goto label_3cd700;
        case 0x3cd704u: goto label_3cd704;
        case 0x3cd708u: goto label_3cd708;
        case 0x3cd70cu: goto label_3cd70c;
        case 0x3cd710u: goto label_3cd710;
        case 0x3cd714u: goto label_3cd714;
        case 0x3cd718u: goto label_3cd718;
        case 0x3cd71cu: goto label_3cd71c;
        case 0x3cd720u: goto label_3cd720;
        case 0x3cd724u: goto label_3cd724;
        case 0x3cd728u: goto label_3cd728;
        case 0x3cd72cu: goto label_3cd72c;
        case 0x3cd730u: goto label_3cd730;
        case 0x3cd734u: goto label_3cd734;
        case 0x3cd738u: goto label_3cd738;
        case 0x3cd73cu: goto label_3cd73c;
        case 0x3cd740u: goto label_3cd740;
        case 0x3cd744u: goto label_3cd744;
        case 0x3cd748u: goto label_3cd748;
        case 0x3cd74cu: goto label_3cd74c;
        case 0x3cd750u: goto label_3cd750;
        case 0x3cd754u: goto label_3cd754;
        case 0x3cd758u: goto label_3cd758;
        case 0x3cd75cu: goto label_3cd75c;
        case 0x3cd760u: goto label_3cd760;
        case 0x3cd764u: goto label_3cd764;
        case 0x3cd768u: goto label_3cd768;
        case 0x3cd76cu: goto label_3cd76c;
        case 0x3cd770u: goto label_3cd770;
        case 0x3cd774u: goto label_3cd774;
        case 0x3cd778u: goto label_3cd778;
        case 0x3cd77cu: goto label_3cd77c;
        case 0x3cd780u: goto label_3cd780;
        case 0x3cd784u: goto label_3cd784;
        case 0x3cd788u: goto label_3cd788;
        case 0x3cd78cu: goto label_3cd78c;
        case 0x3cd790u: goto label_3cd790;
        case 0x3cd794u: goto label_3cd794;
        case 0x3cd798u: goto label_3cd798;
        case 0x3cd79cu: goto label_3cd79c;
        case 0x3cd7a0u: goto label_3cd7a0;
        case 0x3cd7a4u: goto label_3cd7a4;
        case 0x3cd7a8u: goto label_3cd7a8;
        case 0x3cd7acu: goto label_3cd7ac;
        case 0x3cd7b0u: goto label_3cd7b0;
        case 0x3cd7b4u: goto label_3cd7b4;
        case 0x3cd7b8u: goto label_3cd7b8;
        case 0x3cd7bcu: goto label_3cd7bc;
        case 0x3cd7c0u: goto label_3cd7c0;
        case 0x3cd7c4u: goto label_3cd7c4;
        case 0x3cd7c8u: goto label_3cd7c8;
        case 0x3cd7ccu: goto label_3cd7cc;
        case 0x3cd7d0u: goto label_3cd7d0;
        case 0x3cd7d4u: goto label_3cd7d4;
        case 0x3cd7d8u: goto label_3cd7d8;
        case 0x3cd7dcu: goto label_3cd7dc;
        case 0x3cd7e0u: goto label_3cd7e0;
        case 0x3cd7e4u: goto label_3cd7e4;
        case 0x3cd7e8u: goto label_3cd7e8;
        case 0x3cd7ecu: goto label_3cd7ec;
        case 0x3cd7f0u: goto label_3cd7f0;
        case 0x3cd7f4u: goto label_3cd7f4;
        case 0x3cd7f8u: goto label_3cd7f8;
        case 0x3cd7fcu: goto label_3cd7fc;
        case 0x3cd800u: goto label_3cd800;
        case 0x3cd804u: goto label_3cd804;
        case 0x3cd808u: goto label_3cd808;
        case 0x3cd80cu: goto label_3cd80c;
        case 0x3cd810u: goto label_3cd810;
        case 0x3cd814u: goto label_3cd814;
        case 0x3cd818u: goto label_3cd818;
        case 0x3cd81cu: goto label_3cd81c;
        case 0x3cd820u: goto label_3cd820;
        case 0x3cd824u: goto label_3cd824;
        case 0x3cd828u: goto label_3cd828;
        case 0x3cd82cu: goto label_3cd82c;
        case 0x3cd830u: goto label_3cd830;
        case 0x3cd834u: goto label_3cd834;
        case 0x3cd838u: goto label_3cd838;
        case 0x3cd83cu: goto label_3cd83c;
        case 0x3cd840u: goto label_3cd840;
        case 0x3cd844u: goto label_3cd844;
        case 0x3cd848u: goto label_3cd848;
        case 0x3cd84cu: goto label_3cd84c;
        case 0x3cd850u: goto label_3cd850;
        case 0x3cd854u: goto label_3cd854;
        case 0x3cd858u: goto label_3cd858;
        case 0x3cd85cu: goto label_3cd85c;
        case 0x3cd860u: goto label_3cd860;
        case 0x3cd864u: goto label_3cd864;
        case 0x3cd868u: goto label_3cd868;
        case 0x3cd86cu: goto label_3cd86c;
        case 0x3cd870u: goto label_3cd870;
        case 0x3cd874u: goto label_3cd874;
        case 0x3cd878u: goto label_3cd878;
        case 0x3cd87cu: goto label_3cd87c;
        case 0x3cd880u: goto label_3cd880;
        case 0x3cd884u: goto label_3cd884;
        case 0x3cd888u: goto label_3cd888;
        case 0x3cd88cu: goto label_3cd88c;
        case 0x3cd890u: goto label_3cd890;
        case 0x3cd894u: goto label_3cd894;
        case 0x3cd898u: goto label_3cd898;
        case 0x3cd89cu: goto label_3cd89c;
        case 0x3cd8a0u: goto label_3cd8a0;
        case 0x3cd8a4u: goto label_3cd8a4;
        case 0x3cd8a8u: goto label_3cd8a8;
        case 0x3cd8acu: goto label_3cd8ac;
        case 0x3cd8b0u: goto label_3cd8b0;
        case 0x3cd8b4u: goto label_3cd8b4;
        case 0x3cd8b8u: goto label_3cd8b8;
        case 0x3cd8bcu: goto label_3cd8bc;
        case 0x3cd8c0u: goto label_3cd8c0;
        case 0x3cd8c4u: goto label_3cd8c4;
        case 0x3cd8c8u: goto label_3cd8c8;
        case 0x3cd8ccu: goto label_3cd8cc;
        case 0x3cd8d0u: goto label_3cd8d0;
        case 0x3cd8d4u: goto label_3cd8d4;
        case 0x3cd8d8u: goto label_3cd8d8;
        case 0x3cd8dcu: goto label_3cd8dc;
        case 0x3cd8e0u: goto label_3cd8e0;
        case 0x3cd8e4u: goto label_3cd8e4;
        case 0x3cd8e8u: goto label_3cd8e8;
        case 0x3cd8ecu: goto label_3cd8ec;
        case 0x3cd8f0u: goto label_3cd8f0;
        case 0x3cd8f4u: goto label_3cd8f4;
        case 0x3cd8f8u: goto label_3cd8f8;
        case 0x3cd8fcu: goto label_3cd8fc;
        case 0x3cd900u: goto label_3cd900;
        case 0x3cd904u: goto label_3cd904;
        case 0x3cd908u: goto label_3cd908;
        case 0x3cd90cu: goto label_3cd90c;
        case 0x3cd910u: goto label_3cd910;
        case 0x3cd914u: goto label_3cd914;
        case 0x3cd918u: goto label_3cd918;
        case 0x3cd91cu: goto label_3cd91c;
        case 0x3cd920u: goto label_3cd920;
        case 0x3cd924u: goto label_3cd924;
        case 0x3cd928u: goto label_3cd928;
        case 0x3cd92cu: goto label_3cd92c;
        case 0x3cd930u: goto label_3cd930;
        case 0x3cd934u: goto label_3cd934;
        case 0x3cd938u: goto label_3cd938;
        case 0x3cd93cu: goto label_3cd93c;
        case 0x3cd940u: goto label_3cd940;
        case 0x3cd944u: goto label_3cd944;
        case 0x3cd948u: goto label_3cd948;
        case 0x3cd94cu: goto label_3cd94c;
        case 0x3cd950u: goto label_3cd950;
        case 0x3cd954u: goto label_3cd954;
        case 0x3cd958u: goto label_3cd958;
        case 0x3cd95cu: goto label_3cd95c;
        case 0x3cd960u: goto label_3cd960;
        case 0x3cd964u: goto label_3cd964;
        case 0x3cd968u: goto label_3cd968;
        case 0x3cd96cu: goto label_3cd96c;
        case 0x3cd970u: goto label_3cd970;
        case 0x3cd974u: goto label_3cd974;
        case 0x3cd978u: goto label_3cd978;
        case 0x3cd97cu: goto label_3cd97c;
        case 0x3cd980u: goto label_3cd980;
        case 0x3cd984u: goto label_3cd984;
        case 0x3cd988u: goto label_3cd988;
        case 0x3cd98cu: goto label_3cd98c;
        case 0x3cd990u: goto label_3cd990;
        case 0x3cd994u: goto label_3cd994;
        case 0x3cd998u: goto label_3cd998;
        case 0x3cd99cu: goto label_3cd99c;
        case 0x3cd9a0u: goto label_3cd9a0;
        case 0x3cd9a4u: goto label_3cd9a4;
        case 0x3cd9a8u: goto label_3cd9a8;
        case 0x3cd9acu: goto label_3cd9ac;
        case 0x3cd9b0u: goto label_3cd9b0;
        case 0x3cd9b4u: goto label_3cd9b4;
        case 0x3cd9b8u: goto label_3cd9b8;
        case 0x3cd9bcu: goto label_3cd9bc;
        case 0x3cd9c0u: goto label_3cd9c0;
        case 0x3cd9c4u: goto label_3cd9c4;
        case 0x3cd9c8u: goto label_3cd9c8;
        case 0x3cd9ccu: goto label_3cd9cc;
        case 0x3cd9d0u: goto label_3cd9d0;
        case 0x3cd9d4u: goto label_3cd9d4;
        case 0x3cd9d8u: goto label_3cd9d8;
        case 0x3cd9dcu: goto label_3cd9dc;
        case 0x3cd9e0u: goto label_3cd9e0;
        case 0x3cd9e4u: goto label_3cd9e4;
        case 0x3cd9e8u: goto label_3cd9e8;
        case 0x3cd9ecu: goto label_3cd9ec;
        case 0x3cd9f0u: goto label_3cd9f0;
        case 0x3cd9f4u: goto label_3cd9f4;
        case 0x3cd9f8u: goto label_3cd9f8;
        case 0x3cd9fcu: goto label_3cd9fc;
        case 0x3cda00u: goto label_3cda00;
        case 0x3cda04u: goto label_3cda04;
        case 0x3cda08u: goto label_3cda08;
        case 0x3cda0cu: goto label_3cda0c;
        case 0x3cda10u: goto label_3cda10;
        case 0x3cda14u: goto label_3cda14;
        case 0x3cda18u: goto label_3cda18;
        case 0x3cda1cu: goto label_3cda1c;
        case 0x3cda20u: goto label_3cda20;
        case 0x3cda24u: goto label_3cda24;
        case 0x3cda28u: goto label_3cda28;
        case 0x3cda2cu: goto label_3cda2c;
        case 0x3cda30u: goto label_3cda30;
        case 0x3cda34u: goto label_3cda34;
        case 0x3cda38u: goto label_3cda38;
        case 0x3cda3cu: goto label_3cda3c;
        case 0x3cda40u: goto label_3cda40;
        case 0x3cda44u: goto label_3cda44;
        case 0x3cda48u: goto label_3cda48;
        case 0x3cda4cu: goto label_3cda4c;
        case 0x3cda50u: goto label_3cda50;
        case 0x3cda54u: goto label_3cda54;
        case 0x3cda58u: goto label_3cda58;
        case 0x3cda5cu: goto label_3cda5c;
        case 0x3cda60u: goto label_3cda60;
        case 0x3cda64u: goto label_3cda64;
        case 0x3cda68u: goto label_3cda68;
        case 0x3cda6cu: goto label_3cda6c;
        case 0x3cda70u: goto label_3cda70;
        case 0x3cda74u: goto label_3cda74;
        case 0x3cda78u: goto label_3cda78;
        case 0x3cda7cu: goto label_3cda7c;
        case 0x3cda80u: goto label_3cda80;
        case 0x3cda84u: goto label_3cda84;
        case 0x3cda88u: goto label_3cda88;
        case 0x3cda8cu: goto label_3cda8c;
        case 0x3cda90u: goto label_3cda90;
        case 0x3cda94u: goto label_3cda94;
        case 0x3cda98u: goto label_3cda98;
        case 0x3cda9cu: goto label_3cda9c;
        case 0x3cdaa0u: goto label_3cdaa0;
        case 0x3cdaa4u: goto label_3cdaa4;
        case 0x3cdaa8u: goto label_3cdaa8;
        case 0x3cdaacu: goto label_3cdaac;
        case 0x3cdab0u: goto label_3cdab0;
        case 0x3cdab4u: goto label_3cdab4;
        case 0x3cdab8u: goto label_3cdab8;
        case 0x3cdabcu: goto label_3cdabc;
        case 0x3cdac0u: goto label_3cdac0;
        case 0x3cdac4u: goto label_3cdac4;
        case 0x3cdac8u: goto label_3cdac8;
        case 0x3cdaccu: goto label_3cdacc;
        case 0x3cdad0u: goto label_3cdad0;
        case 0x3cdad4u: goto label_3cdad4;
        case 0x3cdad8u: goto label_3cdad8;
        case 0x3cdadcu: goto label_3cdadc;
        case 0x3cdae0u: goto label_3cdae0;
        case 0x3cdae4u: goto label_3cdae4;
        case 0x3cdae8u: goto label_3cdae8;
        case 0x3cdaecu: goto label_3cdaec;
        case 0x3cdaf0u: goto label_3cdaf0;
        case 0x3cdaf4u: goto label_3cdaf4;
        case 0x3cdaf8u: goto label_3cdaf8;
        case 0x3cdafcu: goto label_3cdafc;
        case 0x3cdb00u: goto label_3cdb00;
        case 0x3cdb04u: goto label_3cdb04;
        case 0x3cdb08u: goto label_3cdb08;
        case 0x3cdb0cu: goto label_3cdb0c;
        case 0x3cdb10u: goto label_3cdb10;
        case 0x3cdb14u: goto label_3cdb14;
        case 0x3cdb18u: goto label_3cdb18;
        case 0x3cdb1cu: goto label_3cdb1c;
        case 0x3cdb20u: goto label_3cdb20;
        case 0x3cdb24u: goto label_3cdb24;
        case 0x3cdb28u: goto label_3cdb28;
        case 0x3cdb2cu: goto label_3cdb2c;
        case 0x3cdb30u: goto label_3cdb30;
        case 0x3cdb34u: goto label_3cdb34;
        case 0x3cdb38u: goto label_3cdb38;
        case 0x3cdb3cu: goto label_3cdb3c;
        case 0x3cdb40u: goto label_3cdb40;
        case 0x3cdb44u: goto label_3cdb44;
        case 0x3cdb48u: goto label_3cdb48;
        case 0x3cdb4cu: goto label_3cdb4c;
        case 0x3cdb50u: goto label_3cdb50;
        case 0x3cdb54u: goto label_3cdb54;
        case 0x3cdb58u: goto label_3cdb58;
        case 0x3cdb5cu: goto label_3cdb5c;
        case 0x3cdb60u: goto label_3cdb60;
        case 0x3cdb64u: goto label_3cdb64;
        case 0x3cdb68u: goto label_3cdb68;
        case 0x3cdb6cu: goto label_3cdb6c;
        case 0x3cdb70u: goto label_3cdb70;
        case 0x3cdb74u: goto label_3cdb74;
        case 0x3cdb78u: goto label_3cdb78;
        case 0x3cdb7cu: goto label_3cdb7c;
        case 0x3cdb80u: goto label_3cdb80;
        case 0x3cdb84u: goto label_3cdb84;
        case 0x3cdb88u: goto label_3cdb88;
        case 0x3cdb8cu: goto label_3cdb8c;
        case 0x3cdb90u: goto label_3cdb90;
        case 0x3cdb94u: goto label_3cdb94;
        case 0x3cdb98u: goto label_3cdb98;
        case 0x3cdb9cu: goto label_3cdb9c;
        case 0x3cdba0u: goto label_3cdba0;
        case 0x3cdba4u: goto label_3cdba4;
        case 0x3cdba8u: goto label_3cdba8;
        case 0x3cdbacu: goto label_3cdbac;
        case 0x3cdbb0u: goto label_3cdbb0;
        case 0x3cdbb4u: goto label_3cdbb4;
        case 0x3cdbb8u: goto label_3cdbb8;
        case 0x3cdbbcu: goto label_3cdbbc;
        case 0x3cdbc0u: goto label_3cdbc0;
        case 0x3cdbc4u: goto label_3cdbc4;
        case 0x3cdbc8u: goto label_3cdbc8;
        case 0x3cdbccu: goto label_3cdbcc;
        case 0x3cdbd0u: goto label_3cdbd0;
        case 0x3cdbd4u: goto label_3cdbd4;
        case 0x3cdbd8u: goto label_3cdbd8;
        case 0x3cdbdcu: goto label_3cdbdc;
        case 0x3cdbe0u: goto label_3cdbe0;
        case 0x3cdbe4u: goto label_3cdbe4;
        case 0x3cdbe8u: goto label_3cdbe8;
        case 0x3cdbecu: goto label_3cdbec;
        case 0x3cdbf0u: goto label_3cdbf0;
        case 0x3cdbf4u: goto label_3cdbf4;
        case 0x3cdbf8u: goto label_3cdbf8;
        case 0x3cdbfcu: goto label_3cdbfc;
        case 0x3cdc00u: goto label_3cdc00;
        case 0x3cdc04u: goto label_3cdc04;
        case 0x3cdc08u: goto label_3cdc08;
        case 0x3cdc0cu: goto label_3cdc0c;
        case 0x3cdc10u: goto label_3cdc10;
        case 0x3cdc14u: goto label_3cdc14;
        case 0x3cdc18u: goto label_3cdc18;
        case 0x3cdc1cu: goto label_3cdc1c;
        case 0x3cdc20u: goto label_3cdc20;
        case 0x3cdc24u: goto label_3cdc24;
        case 0x3cdc28u: goto label_3cdc28;
        case 0x3cdc2cu: goto label_3cdc2c;
        case 0x3cdc30u: goto label_3cdc30;
        case 0x3cdc34u: goto label_3cdc34;
        case 0x3cdc38u: goto label_3cdc38;
        case 0x3cdc3cu: goto label_3cdc3c;
        case 0x3cdc40u: goto label_3cdc40;
        case 0x3cdc44u: goto label_3cdc44;
        case 0x3cdc48u: goto label_3cdc48;
        case 0x3cdc4cu: goto label_3cdc4c;
        case 0x3cdc50u: goto label_3cdc50;
        case 0x3cdc54u: goto label_3cdc54;
        case 0x3cdc58u: goto label_3cdc58;
        case 0x3cdc5cu: goto label_3cdc5c;
        case 0x3cdc60u: goto label_3cdc60;
        case 0x3cdc64u: goto label_3cdc64;
        case 0x3cdc68u: goto label_3cdc68;
        case 0x3cdc6cu: goto label_3cdc6c;
        case 0x3cdc70u: goto label_3cdc70;
        case 0x3cdc74u: goto label_3cdc74;
        case 0x3cdc78u: goto label_3cdc78;
        case 0x3cdc7cu: goto label_3cdc7c;
        case 0x3cdc80u: goto label_3cdc80;
        case 0x3cdc84u: goto label_3cdc84;
        case 0x3cdc88u: goto label_3cdc88;
        case 0x3cdc8cu: goto label_3cdc8c;
        case 0x3cdc90u: goto label_3cdc90;
        case 0x3cdc94u: goto label_3cdc94;
        case 0x3cdc98u: goto label_3cdc98;
        case 0x3cdc9cu: goto label_3cdc9c;
        case 0x3cdca0u: goto label_3cdca0;
        case 0x3cdca4u: goto label_3cdca4;
        case 0x3cdca8u: goto label_3cdca8;
        case 0x3cdcacu: goto label_3cdcac;
        case 0x3cdcb0u: goto label_3cdcb0;
        case 0x3cdcb4u: goto label_3cdcb4;
        case 0x3cdcb8u: goto label_3cdcb8;
        case 0x3cdcbcu: goto label_3cdcbc;
        case 0x3cdcc0u: goto label_3cdcc0;
        case 0x3cdcc4u: goto label_3cdcc4;
        case 0x3cdcc8u: goto label_3cdcc8;
        case 0x3cdcccu: goto label_3cdccc;
        case 0x3cdcd0u: goto label_3cdcd0;
        case 0x3cdcd4u: goto label_3cdcd4;
        case 0x3cdcd8u: goto label_3cdcd8;
        case 0x3cdcdcu: goto label_3cdcdc;
        case 0x3cdce0u: goto label_3cdce0;
        case 0x3cdce4u: goto label_3cdce4;
        case 0x3cdce8u: goto label_3cdce8;
        case 0x3cdcecu: goto label_3cdcec;
        case 0x3cdcf0u: goto label_3cdcf0;
        case 0x3cdcf4u: goto label_3cdcf4;
        case 0x3cdcf8u: goto label_3cdcf8;
        case 0x3cdcfcu: goto label_3cdcfc;
        case 0x3cdd00u: goto label_3cdd00;
        case 0x3cdd04u: goto label_3cdd04;
        case 0x3cdd08u: goto label_3cdd08;
        case 0x3cdd0cu: goto label_3cdd0c;
        case 0x3cdd10u: goto label_3cdd10;
        case 0x3cdd14u: goto label_3cdd14;
        case 0x3cdd18u: goto label_3cdd18;
        case 0x3cdd1cu: goto label_3cdd1c;
        case 0x3cdd20u: goto label_3cdd20;
        case 0x3cdd24u: goto label_3cdd24;
        case 0x3cdd28u: goto label_3cdd28;
        case 0x3cdd2cu: goto label_3cdd2c;
        case 0x3cdd30u: goto label_3cdd30;
        case 0x3cdd34u: goto label_3cdd34;
        case 0x3cdd38u: goto label_3cdd38;
        case 0x3cdd3cu: goto label_3cdd3c;
        case 0x3cdd40u: goto label_3cdd40;
        case 0x3cdd44u: goto label_3cdd44;
        case 0x3cdd48u: goto label_3cdd48;
        case 0x3cdd4cu: goto label_3cdd4c;
        case 0x3cdd50u: goto label_3cdd50;
        case 0x3cdd54u: goto label_3cdd54;
        case 0x3cdd58u: goto label_3cdd58;
        case 0x3cdd5cu: goto label_3cdd5c;
        case 0x3cdd60u: goto label_3cdd60;
        case 0x3cdd64u: goto label_3cdd64;
        case 0x3cdd68u: goto label_3cdd68;
        case 0x3cdd6cu: goto label_3cdd6c;
        case 0x3cdd70u: goto label_3cdd70;
        case 0x3cdd74u: goto label_3cdd74;
        case 0x3cdd78u: goto label_3cdd78;
        case 0x3cdd7cu: goto label_3cdd7c;
        case 0x3cdd80u: goto label_3cdd80;
        case 0x3cdd84u: goto label_3cdd84;
        case 0x3cdd88u: goto label_3cdd88;
        case 0x3cdd8cu: goto label_3cdd8c;
        case 0x3cdd90u: goto label_3cdd90;
        case 0x3cdd94u: goto label_3cdd94;
        case 0x3cdd98u: goto label_3cdd98;
        case 0x3cdd9cu: goto label_3cdd9c;
        case 0x3cdda0u: goto label_3cdda0;
        case 0x3cdda4u: goto label_3cdda4;
        case 0x3cdda8u: goto label_3cdda8;
        case 0x3cddacu: goto label_3cddac;
        case 0x3cddb0u: goto label_3cddb0;
        case 0x3cddb4u: goto label_3cddb4;
        case 0x3cddb8u: goto label_3cddb8;
        case 0x3cddbcu: goto label_3cddbc;
        case 0x3cddc0u: goto label_3cddc0;
        case 0x3cddc4u: goto label_3cddc4;
        case 0x3cddc8u: goto label_3cddc8;
        case 0x3cddccu: goto label_3cddcc;
        case 0x3cddd0u: goto label_3cddd0;
        case 0x3cddd4u: goto label_3cddd4;
        case 0x3cddd8u: goto label_3cddd8;
        case 0x3cdddcu: goto label_3cdddc;
        case 0x3cdde0u: goto label_3cdde0;
        case 0x3cdde4u: goto label_3cdde4;
        case 0x3cdde8u: goto label_3cdde8;
        case 0x3cddecu: goto label_3cddec;
        case 0x3cddf0u: goto label_3cddf0;
        case 0x3cddf4u: goto label_3cddf4;
        case 0x3cddf8u: goto label_3cddf8;
        case 0x3cddfcu: goto label_3cddfc;
        case 0x3cde00u: goto label_3cde00;
        case 0x3cde04u: goto label_3cde04;
        case 0x3cde08u: goto label_3cde08;
        case 0x3cde0cu: goto label_3cde0c;
        case 0x3cde10u: goto label_3cde10;
        case 0x3cde14u: goto label_3cde14;
        case 0x3cde18u: goto label_3cde18;
        case 0x3cde1cu: goto label_3cde1c;
        case 0x3cde20u: goto label_3cde20;
        case 0x3cde24u: goto label_3cde24;
        case 0x3cde28u: goto label_3cde28;
        case 0x3cde2cu: goto label_3cde2c;
        case 0x3cde30u: goto label_3cde30;
        case 0x3cde34u: goto label_3cde34;
        case 0x3cde38u: goto label_3cde38;
        case 0x3cde3cu: goto label_3cde3c;
        case 0x3cde40u: goto label_3cde40;
        case 0x3cde44u: goto label_3cde44;
        case 0x3cde48u: goto label_3cde48;
        case 0x3cde4cu: goto label_3cde4c;
        case 0x3cde50u: goto label_3cde50;
        case 0x3cde54u: goto label_3cde54;
        case 0x3cde58u: goto label_3cde58;
        case 0x3cde5cu: goto label_3cde5c;
        case 0x3cde60u: goto label_3cde60;
        case 0x3cde64u: goto label_3cde64;
        case 0x3cde68u: goto label_3cde68;
        case 0x3cde6cu: goto label_3cde6c;
        case 0x3cde70u: goto label_3cde70;
        case 0x3cde74u: goto label_3cde74;
        case 0x3cde78u: goto label_3cde78;
        case 0x3cde7cu: goto label_3cde7c;
        case 0x3cde80u: goto label_3cde80;
        case 0x3cde84u: goto label_3cde84;
        case 0x3cde88u: goto label_3cde88;
        case 0x3cde8cu: goto label_3cde8c;
        case 0x3cde90u: goto label_3cde90;
        case 0x3cde94u: goto label_3cde94;
        case 0x3cde98u: goto label_3cde98;
        case 0x3cde9cu: goto label_3cde9c;
        case 0x3cdea0u: goto label_3cdea0;
        case 0x3cdea4u: goto label_3cdea4;
        case 0x3cdea8u: goto label_3cdea8;
        case 0x3cdeacu: goto label_3cdeac;
        case 0x3cdeb0u: goto label_3cdeb0;
        case 0x3cdeb4u: goto label_3cdeb4;
        case 0x3cdeb8u: goto label_3cdeb8;
        case 0x3cdebcu: goto label_3cdebc;
        case 0x3cdec0u: goto label_3cdec0;
        case 0x3cdec4u: goto label_3cdec4;
        case 0x3cdec8u: goto label_3cdec8;
        case 0x3cdeccu: goto label_3cdecc;
        case 0x3cded0u: goto label_3cded0;
        case 0x3cded4u: goto label_3cded4;
        case 0x3cded8u: goto label_3cded8;
        case 0x3cdedcu: goto label_3cdedc;
        case 0x3cdee0u: goto label_3cdee0;
        case 0x3cdee4u: goto label_3cdee4;
        case 0x3cdee8u: goto label_3cdee8;
        case 0x3cdeecu: goto label_3cdeec;
        case 0x3cdef0u: goto label_3cdef0;
        case 0x3cdef4u: goto label_3cdef4;
        case 0x3cdef8u: goto label_3cdef8;
        case 0x3cdefcu: goto label_3cdefc;
        case 0x3cdf00u: goto label_3cdf00;
        case 0x3cdf04u: goto label_3cdf04;
        case 0x3cdf08u: goto label_3cdf08;
        case 0x3cdf0cu: goto label_3cdf0c;
        case 0x3cdf10u: goto label_3cdf10;
        case 0x3cdf14u: goto label_3cdf14;
        case 0x3cdf18u: goto label_3cdf18;
        case 0x3cdf1cu: goto label_3cdf1c;
        case 0x3cdf20u: goto label_3cdf20;
        case 0x3cdf24u: goto label_3cdf24;
        case 0x3cdf28u: goto label_3cdf28;
        case 0x3cdf2cu: goto label_3cdf2c;
        case 0x3cdf30u: goto label_3cdf30;
        case 0x3cdf34u: goto label_3cdf34;
        case 0x3cdf38u: goto label_3cdf38;
        case 0x3cdf3cu: goto label_3cdf3c;
        case 0x3cdf40u: goto label_3cdf40;
        case 0x3cdf44u: goto label_3cdf44;
        case 0x3cdf48u: goto label_3cdf48;
        case 0x3cdf4cu: goto label_3cdf4c;
        case 0x3cdf50u: goto label_3cdf50;
        case 0x3cdf54u: goto label_3cdf54;
        case 0x3cdf58u: goto label_3cdf58;
        case 0x3cdf5cu: goto label_3cdf5c;
        case 0x3cdf60u: goto label_3cdf60;
        case 0x3cdf64u: goto label_3cdf64;
        case 0x3cdf68u: goto label_3cdf68;
        case 0x3cdf6cu: goto label_3cdf6c;
        case 0x3cdf70u: goto label_3cdf70;
        case 0x3cdf74u: goto label_3cdf74;
        case 0x3cdf78u: goto label_3cdf78;
        case 0x3cdf7cu: goto label_3cdf7c;
        case 0x3cdf80u: goto label_3cdf80;
        case 0x3cdf84u: goto label_3cdf84;
        case 0x3cdf88u: goto label_3cdf88;
        case 0x3cdf8cu: goto label_3cdf8c;
        case 0x3cdf90u: goto label_3cdf90;
        case 0x3cdf94u: goto label_3cdf94;
        case 0x3cdf98u: goto label_3cdf98;
        case 0x3cdf9cu: goto label_3cdf9c;
        case 0x3cdfa0u: goto label_3cdfa0;
        case 0x3cdfa4u: goto label_3cdfa4;
        case 0x3cdfa8u: goto label_3cdfa8;
        case 0x3cdfacu: goto label_3cdfac;
        case 0x3cdfb0u: goto label_3cdfb0;
        case 0x3cdfb4u: goto label_3cdfb4;
        case 0x3cdfb8u: goto label_3cdfb8;
        case 0x3cdfbcu: goto label_3cdfbc;
        case 0x3cdfc0u: goto label_3cdfc0;
        case 0x3cdfc4u: goto label_3cdfc4;
        case 0x3cdfc8u: goto label_3cdfc8;
        case 0x3cdfccu: goto label_3cdfcc;
        case 0x3cdfd0u: goto label_3cdfd0;
        case 0x3cdfd4u: goto label_3cdfd4;
        case 0x3cdfd8u: goto label_3cdfd8;
        case 0x3cdfdcu: goto label_3cdfdc;
        case 0x3cdfe0u: goto label_3cdfe0;
        case 0x3cdfe4u: goto label_3cdfe4;
        case 0x3cdfe8u: goto label_3cdfe8;
        case 0x3cdfecu: goto label_3cdfec;
        case 0x3cdff0u: goto label_3cdff0;
        case 0x3cdff4u: goto label_3cdff4;
        case 0x3cdff8u: goto label_3cdff8;
        case 0x3cdffcu: goto label_3cdffc;
        case 0x3ce000u: goto label_3ce000;
        case 0x3ce004u: goto label_3ce004;
        case 0x3ce008u: goto label_3ce008;
        case 0x3ce00cu: goto label_3ce00c;
        case 0x3ce010u: goto label_3ce010;
        case 0x3ce014u: goto label_3ce014;
        case 0x3ce018u: goto label_3ce018;
        case 0x3ce01cu: goto label_3ce01c;
        case 0x3ce020u: goto label_3ce020;
        case 0x3ce024u: goto label_3ce024;
        case 0x3ce028u: goto label_3ce028;
        case 0x3ce02cu: goto label_3ce02c;
        case 0x3ce030u: goto label_3ce030;
        case 0x3ce034u: goto label_3ce034;
        case 0x3ce038u: goto label_3ce038;
        case 0x3ce03cu: goto label_3ce03c;
        case 0x3ce040u: goto label_3ce040;
        case 0x3ce044u: goto label_3ce044;
        case 0x3ce048u: goto label_3ce048;
        case 0x3ce04cu: goto label_3ce04c;
        case 0x3ce050u: goto label_3ce050;
        case 0x3ce054u: goto label_3ce054;
        case 0x3ce058u: goto label_3ce058;
        case 0x3ce05cu: goto label_3ce05c;
        case 0x3ce060u: goto label_3ce060;
        case 0x3ce064u: goto label_3ce064;
        case 0x3ce068u: goto label_3ce068;
        case 0x3ce06cu: goto label_3ce06c;
        default: break;
    }

    ctx->pc = 0x3cd570u;

label_3cd570:
    // 0x3cd570: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3cd570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3cd574:
    // 0x3cd574: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cd574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cd578:
    // 0x3cd578: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3cd578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3cd57c:
    // 0x3cd57c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3cd580:
    // 0x3cd580: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3cd580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3cd584:
    // 0x3cd584: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x3cd584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_3cd588:
    // 0x3cd588: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3cd588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3cd58c:
    // 0x3cd58c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3cd58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3cd590:
    // 0x3cd590: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3cd590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3cd594:
    // 0x3cd594: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3cd594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3cd598:
    // 0x3cd598: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3cd598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3cd59c:
    // 0x3cd59c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3cd59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3cd5a0:
    // 0x3cd5a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cd5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3cd5a4:
    // 0x3cd5a4: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x3cd5a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
label_3cd5a8:
    // 0x3cd5a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3cd5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3cd5ac:
    // 0x3cd5ac: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x3cd5acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_3cd5b0:
    // 0x3cd5b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3cd5b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3cd5b4:
    // 0x3cd5b4: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3cd5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_3cd5b8:
    // 0x3cd5b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3cd5b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3cd5bc:
    // 0x3cd5bc: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x3cd5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
label_3cd5c0:
    // 0x3cd5c0: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x3cd5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3cd5c4:
    // 0x3cd5c4: 0x265290b0  addiu       $s2, $s2, -0x6F50
    ctx->pc = 0x3cd5c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938800));
label_3cd5c8:
    // 0x3cd5c8: 0x8c870058  lw          $a3, 0x58($a0)
    ctx->pc = 0x3cd5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3cd5cc:
    // 0x3cd5cc: 0x26319bc0  addiu       $s1, $s1, -0x6440
    ctx->pc = 0x3cd5ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941632));
label_3cd5d0:
    // 0x3cd5d0: 0x84860060  lh          $a2, 0x60($a0)
    ctx->pc = 0x3cd5d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
label_3cd5d4:
    // 0x3cd5d4: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x3cd5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
label_3cd5d8:
    // 0x3cd5d8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3cd5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3cd5dc:
    // 0x3cd5dc: 0x84850064  lh          $a1, 0x64($a0)
    ctx->pc = 0x3cd5dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3cd5e0:
    // 0x3cd5e0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3cd5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3cd5e4:
    // 0x3cd5e4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x3cd5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3cd5e8:
    // 0x3cd5e8: 0x844490b8  lh          $a0, -0x6F48($v0)
    ctx->pc = 0x3cd5e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294938808)));
label_3cd5ec:
    // 0x3cd5ec: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x3cd5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3cd5f0:
    // 0x3cd5f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3cd5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cd5f4:
    // 0x3cd5f4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cd5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cd5f8:
    // 0x3cd5f8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3cd5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3cd5fc:
    // 0x3cd5fc: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x3cd5fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
label_3cd600:
    // 0x3cd600: 0xc22823  subu        $a1, $a2, $v0
    ctx->pc = 0x3cd600u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3cd604:
    // 0x3cd604: 0x8c620e80  lw          $v0, 0xE80($v1)
    ctx->pc = 0x3cd604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3cd608:
    // 0x3cd608: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x3cd608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3cd60c:
    // 0x3cd60c: 0x8c42078c  lw          $v0, 0x78C($v0)
    ctx->pc = 0x3cd60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1932)));
label_3cd610:
    // 0x3cd610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cd610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd614:
    // 0x3cd614: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x3cd614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_3cd618:
    // 0x3cd618: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3cd618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3cd61c:
    // 0x3cd61c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3cd620:
    if (ctx->pc == 0x3CD620u) {
        ctx->pc = 0x3CD620u;
            // 0x3cd620: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3CD624u;
        goto label_3cd624;
    }
    ctx->pc = 0x3CD61Cu;
    {
        const bool branch_taken_0x3cd61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD61Cu;
            // 0x3cd620: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd61c) {
            ctx->pc = 0x3CD62Cu;
            goto label_3cd62c;
        }
    }
    ctx->pc = 0x3CD624u;
label_3cd624:
    // 0x3cd624: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3cd624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cd628:
    // 0x3cd628: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x3cd628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_3cd62c:
    // 0x3cd62c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x3cd62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_3cd630:
    // 0x3cd630: 0x9042005c  lbu         $v0, 0x5C($v0)
    ctx->pc = 0x3cd630u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 92)));
label_3cd634:
    // 0x3cd634: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3cd634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3cd638:
    // 0x3cd638: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cd638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cd63c:
    // 0x3cd63c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3cd63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3cd640:
    // 0x3cd640: 0xc0506ac  jal         func_141AB0
label_3cd644:
    if (ctx->pc == 0x3CD644u) {
        ctx->pc = 0x3CD644u;
            // 0x3cd644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD648u;
        goto label_3cd648;
    }
    ctx->pc = 0x3CD640u;
    SET_GPR_U32(ctx, 31, 0x3CD648u);
    ctx->pc = 0x3CD644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD640u;
            // 0x3cd644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD648u; }
        if (ctx->pc != 0x3CD648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD648u; }
        if (ctx->pc != 0x3CD648u) { return; }
    }
    ctx->pc = 0x3CD648u;
label_3cd648:
    // 0x3cd648: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x3cd648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3cd64c:
    // 0x3cd64c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3cd64cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cd650:
    // 0x3cd650: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3cd650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cd654:
    // 0x3cd654: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3cd654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3cd658:
    // 0x3cd658: 0x320f809  jalr        $t9
label_3cd65c:
    if (ctx->pc == 0x3CD65Cu) {
        ctx->pc = 0x3CD65Cu;
            // 0x3cd65c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3CD660u;
        goto label_3cd660;
    }
    ctx->pc = 0x3CD658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CD660u);
        ctx->pc = 0x3CD65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD658u;
            // 0x3cd65c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CD660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CD660u; }
            if (ctx->pc != 0x3CD660u) { return; }
        }
        }
    }
    ctx->pc = 0x3CD660u;
label_3cd660:
    // 0x3cd660: 0x8644000c  lh          $a0, 0xC($s2)
    ctx->pc = 0x3cd660u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_3cd664:
    // 0x3cd664: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3cd664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3cd668:
    // 0x3cd668: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3cd668u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3cd66c:
    // 0x3cd66c: 0xc62200dc  lwc1        $f2, 0xDC($s1)
    ctx->pc = 0x3cd66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cd670:
    // 0x3cd670: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3cd670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cd674:
    // 0x3cd674: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3cd674u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd678:
    // 0x3cd678: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3cd678u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd67c:
    // 0x3cd67c: 0x0  nop
    ctx->pc = 0x3cd67cu;
    // NOP
label_3cd680:
    // 0x3cd680: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cd680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cd684:
    // 0x3cd684: 0x8c420d78  lw          $v0, 0xD78($v0)
    ctx->pc = 0x3cd684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
label_3cd688:
    // 0x3cd688: 0x24570010  addiu       $s7, $v0, 0x10
    ctx->pc = 0x3cd688u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3cd68c:
    // 0x3cd68c: 0x4600a0c0  add.s       $f3, $f20, $f0
    ctx->pc = 0x3cd68cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3cd690:
    // 0x3cd690: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cd690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd694:
    // 0x3cd694: 0x0  nop
    ctx->pc = 0x3cd694u;
    // NOP
label_3cd698:
    // 0x3cd698: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x3cd698u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3cd69c:
    // 0x3cd69c: 0x46020d1c  madd.s      $f20, $f1, $f2
    ctx->pc = 0x3cd69cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3cd6a0:
    // 0x3cd6a0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x3cd6a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3cd6a4:
    // 0x3cd6a4: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x3cd6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_3cd6a8:
    // 0x3cd6a8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x3cd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_3cd6ac:
    // 0x3cd6ac: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x3cd6acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3cd6b0:
    // 0x3cd6b0: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x3cd6b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3cd6b4:
    // 0x3cd6b4: 0x84460068  lh          $a2, 0x68($v0)
    ctx->pc = 0x3cd6b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_3cd6b8:
    // 0x3cd6b8: 0x8c640d78  lw          $a0, 0xD78($v1)
    ctx->pc = 0x3cd6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3448)));
label_3cd6bc:
    // 0x3cd6bc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3cd6bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd6c0:
    // 0x3cd6c0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3cd6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3cd6c4:
    // 0x3cd6c4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x3cd6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3cd6c8:
    // 0x3cd6c8: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x3cd6c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_3cd6cc:
    // 0x3cd6cc: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x3cd6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3cd6d0:
    // 0x3cd6d0: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x3cd6d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3cd6d4:
    // 0x3cd6d4: 0x14a30010  bne         $a1, $v1, . + 4 + (0x10 << 2)
label_3cd6d8:
    if (ctx->pc == 0x3CD6D8u) {
        ctx->pc = 0x3CD6D8u;
            // 0x3cd6d8: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3CD6DCu;
        goto label_3cd6dc;
    }
    ctx->pc = 0x3CD6D4u;
    {
        const bool branch_taken_0x3cd6d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CD6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD6D4u;
            // 0x3cd6d8: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd6d4) {
            ctx->pc = 0x3CD718u;
            goto label_3cd718;
        }
    }
    ctx->pc = 0x3CD6DCu;
label_3cd6dc:
    // 0x3cd6dc: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x3cd6dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_3cd6e0:
    // 0x3cd6e0: 0x92e30001  lbu         $v1, 0x1($s7)
    ctx->pc = 0x3cd6e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_3cd6e4:
    // 0x3cd6e4: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_3cd6e8:
    if (ctx->pc == 0x3CD6E8u) {
        ctx->pc = 0x3CD6ECu;
        goto label_3cd6ec;
    }
    ctx->pc = 0x3CD6E4u;
    {
        const bool branch_taken_0x3cd6e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3cd6e4) {
            ctx->pc = 0x3CD718u;
            goto label_3cd718;
        }
    }
    ctx->pc = 0x3CD6ECu;
label_3cd6ec:
    // 0x3cd6ec: 0x94c40002  lhu         $a0, 0x2($a2)
    ctx->pc = 0x3cd6ecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_3cd6f0:
    // 0x3cd6f0: 0x96e30002  lhu         $v1, 0x2($s7)
    ctx->pc = 0x3cd6f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_3cd6f4:
    // 0x3cd6f4: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_3cd6f8:
    if (ctx->pc == 0x3CD6F8u) {
        ctx->pc = 0x3CD6FCu;
        goto label_3cd6fc;
    }
    ctx->pc = 0x3CD6F4u;
    {
        const bool branch_taken_0x3cd6f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3cd6f4) {
            ctx->pc = 0x3CD718u;
            goto label_3cd718;
        }
    }
    ctx->pc = 0x3CD6FCu;
label_3cd6fc:
    // 0x3cd6fc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x3cd6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_3cd700:
    // 0x3cd700: 0x3c03ffdc  lui         $v1, 0xFFDC
    ctx->pc = 0x3cd700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65500 << 16));
label_3cd704:
    // 0x3cd704: 0x9044005d  lbu         $a0, 0x5D($v0)
    ctx->pc = 0x3cd704u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 93)));
label_3cd708:
    // 0x3cd708: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x3cd708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_3cd70c:
    // 0x3cd70c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3cd70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3cd710:
    // 0x3cd710: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3cd710u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3cd714:
    // 0x3cd714: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x3cd714u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3cd718:
    // 0x3cd718: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3cd718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3cd71c:
    // 0x3cd71c: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x3cd71cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
label_3cd720:
    // 0x3cd720: 0x94de0002  lhu         $fp, 0x2($a2)
    ctx->pc = 0x3cd720u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_3cd724:
    // 0x3cd724: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_3cd728:
    if (ctx->pc == 0x3CD728u) {
        ctx->pc = 0x3CD728u;
            // 0x3cd728: 0x90d60001  lbu         $s6, 0x1($a2) (Delay Slot)
        SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->pc = 0x3CD72Cu;
        goto label_3cd72c;
    }
    ctx->pc = 0x3CD724u;
    {
        const bool branch_taken_0x3cd724 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD724u;
            // 0x3cd728: 0x90d60001  lbu         $s6, 0x1($a2) (Delay Slot)
        SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd724) {
            ctx->pc = 0x3CD738u;
            goto label_3cd738;
        }
    }
    ctx->pc = 0x3CD72Cu;
label_3cd72c:
    // 0x3cd72c: 0x64030063  daddiu      $v1, $zero, 0x63
    ctx->pc = 0x3cd72cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)99);
label_3cd730:
    // 0x3cd730: 0x6416003b  daddiu      $s6, $zero, 0x3B
    ctx->pc = 0x3cd730u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)59);
label_3cd734:
    // 0x3cd734: 0x641e03e7  daddiu      $fp, $zero, 0x3E7
    ctx->pc = 0x3cd734u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)999);
label_3cd738:
    // 0x3cd738: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x3cd738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_3cd73c:
    // 0x3cd73c: 0x449825  or          $s3, $v0, $a0
    ctx->pc = 0x3cd73cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3cd740:
    // 0x3cd740: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x3cd740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3cd744:
    // 0x3cd744: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3cd744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_3cd748:
    // 0x3cd748: 0x3c08bf80  lui         $t0, 0xBF80
    ctx->pc = 0x3cd748u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49024 << 16));
label_3cd74c:
    // 0x3cd74c: 0x34446667  ori         $a0, $v0, 0x6667
    ctx->pc = 0x3cd74cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_3cd750:
    // 0x3cd750: 0x86090002  lh          $t1, 0x2($s0)
    ctx->pc = 0x3cd750u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cd754:
    // 0x3cd754: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x3cd754u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cd758:
    // 0x3cd758: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x3cd758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3cd75c:
    // 0x3cd75c: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x3cd75cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_3cd760:
    // 0x3cd760: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cd760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd764:
    // 0x3cd764: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3cd764u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3cd768:
    // 0x3cd768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cd768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd76c:
    // 0x3cd76c: 0x0  nop
    ctx->pc = 0x3cd76cu;
    // NOP
label_3cd770:
    // 0x3cd770: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cd770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cd774:
    // 0x3cd774: 0x1010  mfhi        $v0
    ctx->pc = 0x3cd774u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3cd778:
    // 0x3cd778: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cd778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cd77c:
    // 0x3cd77c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3cd77cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_3cd780:
    // 0x3cd780: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3cd780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd784:
    // 0x3cd784: 0x455021  addu        $t2, $v0, $a1
    ctx->pc = 0x3cd784u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3cd788:
    // 0x3cd788: 0x2542000d  addiu       $v0, $t2, 0xD
    ctx->pc = 0x3cd788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 13));
label_3cd78c:
    // 0x3cd78c: 0xa2880  sll         $a1, $t2, 2
    ctx->pc = 0x3cd78cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_3cd790:
    // 0x3cd790: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3cd790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3cd794:
    // 0x3cd794: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x3cd794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_3cd798:
    // 0x3cd798: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3cd798u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd79c:
    // 0x3cd79c: 0x222a821  addu        $s5, $s1, $v0
    ctx->pc = 0x3cd79cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3cd7a0:
    // 0x3cd7a0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cd7a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cd7a4:
    // 0x3cd7a4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3cd7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3cd7a8:
    // 0x3cd7a8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x3cd7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3cd7ac:
    // 0x3cd7ac: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3cd7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3cd7b0:
    // 0x3cd7b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cd7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cd7b4:
    // 0x3cd7b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3cd7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3cd7b8:
    // 0x3cd7b8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3cd7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3cd7bc:
    // 0x3cd7bc: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x3cd7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cd7c0:
    // 0x3cd7c0: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x3cd7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cd7c4:
    // 0x3cd7c4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3cd7c4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3cd7c8:
    // 0x3cd7c8: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3cd7c8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3cd7cc:
    // 0x3cd7cc: 0x44889000  mtc1        $t0, $f18
    ctx->pc = 0x3cd7ccu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cd7d0:
    // 0x3cd7d0: 0xc0bc284  jal         func_2F0A10
label_3cd7d4:
    if (ctx->pc == 0x3CD7D4u) {
        ctx->pc = 0x3CD7D4u;
            // 0x3cd7d4: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3CD7D8u;
        goto label_3cd7d8;
    }
    ctx->pc = 0x3CD7D0u;
    SET_GPR_U32(ctx, 31, 0x3CD7D8u);
    ctx->pc = 0x3CD7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD7D0u;
            // 0x3cd7d4: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD7D8u; }
        if (ctx->pc != 0x3CD7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD7D8u; }
        if (ctx->pc != 0x3CD7D8u) { return; }
    }
    ctx->pc = 0x3CD7D8u;
label_3cd7d8:
    // 0x3cd7d8: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x3cd7d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cd7dc:
    // 0x3cd7dc: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x3cd7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cd7e0:
    // 0x3cd7e0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3cd7e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3cd7e4:
    // 0x3cd7e4: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cd7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cd7e8:
    // 0x3cd7e8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cd7e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cd7ec:
    // 0x3cd7ec: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3cd7ecu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3cd7f0:
    // 0x3cd7f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3cd7f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd7f4:
    // 0x3cd7f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3cd7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd7f8:
    // 0x3cd7f8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cd7f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cd7fc:
    // 0x3cd7fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3cd7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3cd800:
    // 0x3cd800: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x3cd800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_3cd804:
    // 0x3cd804: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cd804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cd808:
    // 0x3cd808: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3cd808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3cd80c:
    // 0x3cd80c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cd80cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd810:
    // 0x3cd810: 0x222a821  addu        $s5, $s1, $v0
    ctx->pc = 0x3cd810u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3cd814:
    // 0x3cd814: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cd814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cd818:
    // 0x3cd818: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cd818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cd81c:
    // 0x3cd81c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cd81cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd820:
    // 0x3cd820: 0x0  nop
    ctx->pc = 0x3cd820u;
    // NOP
label_3cd824:
    // 0x3cd824: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cd824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cd828:
    // 0x3cd828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cd828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd82c:
    // 0x3cd82c: 0x0  nop
    ctx->pc = 0x3cd82cu;
    // NOP
label_3cd830:
    // 0x3cd830: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cd830u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cd834:
    // 0x3cd834: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3cd834u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3cd838:
    // 0x3cd838: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x3cd838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cd83c:
    // 0x3cd83c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x3cd83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cd840:
    // 0x3cd840: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cd840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cd844:
    // 0x3cd844: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3cd844u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3cd848:
    // 0x3cd848: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3cd848u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3cd84c:
    // 0x3cd84c: 0xc0bc284  jal         func_2F0A10
label_3cd850:
    if (ctx->pc == 0x3CD850u) {
        ctx->pc = 0x3CD850u;
            // 0x3cd850: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3CD854u;
        goto label_3cd854;
    }
    ctx->pc = 0x3CD84Cu;
    SET_GPR_U32(ctx, 31, 0x3CD854u);
    ctx->pc = 0x3CD850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD84Cu;
            // 0x3cd850: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD854u; }
        if (ctx->pc != 0x3CD854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD854u; }
        if (ctx->pc != 0x3CD854u) { return; }
    }
    ctx->pc = 0x3CD854u;
label_3cd854:
    // 0x3cd854: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3cd854u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cd858:
    // 0x3cd858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cd858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd85c:
    // 0x3cd85c: 0x0  nop
    ctx->pc = 0x3cd85cu;
    // NOP
label_3cd860:
    // 0x3cd860: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cd860u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cd864:
    // 0x3cd864: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cd864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cd868:
    // 0x3cd868: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x3cd868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cd86c:
    // 0x3cd86c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cd86cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cd870:
    // 0x3cd870: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3cd870u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd874:
    // 0x3cd874: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cd874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cd878:
    // 0x3cd878: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cd878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cd87c:
    // 0x3cd87c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3cd87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd880:
    // 0x3cd880: 0x26350170  addiu       $s5, $s1, 0x170
    ctx->pc = 0x3cd880u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_3cd884:
    // 0x3cd884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cd884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd888:
    // 0x3cd888: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cd888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cd88c:
    // 0x3cd88c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cd88cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd890:
    // 0x3cd890: 0x0  nop
    ctx->pc = 0x3cd890u;
    // NOP
label_3cd894:
    // 0x3cd894: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cd894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cd898:
    // 0x3cd898: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cd898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cd89c:
    // 0x3cd89c: 0xc6200178  lwc1        $f0, 0x178($s1)
    ctx->pc = 0x3cd89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cd8a0:
    // 0x3cd8a0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3cd8a0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3cd8a4:
    // 0x3cd8a4: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3cd8a4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3cd8a8:
    // 0x3cd8a8: 0xc621017c  lwc1        $f1, 0x17C($s1)
    ctx->pc = 0x3cd8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cd8ac:
    // 0x3cd8ac: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3cd8acu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3cd8b0:
    // 0x3cd8b0: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3cd8b0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3cd8b4:
    // 0x3cd8b4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cd8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cd8b8:
    // 0x3cd8b8: 0xc0bc284  jal         func_2F0A10
label_3cd8bc:
    if (ctx->pc == 0x3CD8BCu) {
        ctx->pc = 0x3CD8BCu;
            // 0x3cd8bc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3CD8C0u;
        goto label_3cd8c0;
    }
    ctx->pc = 0x3CD8B8u;
    SET_GPR_U32(ctx, 31, 0x3CD8C0u);
    ctx->pc = 0x3CD8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD8B8u;
            // 0x3cd8bc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD8C0u; }
        if (ctx->pc != 0x3CD8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD8C0u; }
        if (ctx->pc != 0x3CD8C0u) { return; }
    }
    ctx->pc = 0x3CD8C0u;
label_3cd8c0:
    // 0x3cd8c0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3cd8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_3cd8c4:
    // 0x3cd8c4: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3cd8c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cd8c8:
    // 0x3cd8c8: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x3cd8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_3cd8cc:
    // 0x3cd8cc: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3cd8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_3cd8d0:
    // 0x3cd8d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cd8d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd8d4:
    // 0x3cd8d4: 0x347c2  srl         $t0, $v1, 31
    ctx->pc = 0x3cd8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_3cd8d8:
    // 0x3cd8d8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3cd8d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3cd8dc:
    // 0x3cd8dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cd8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cd8e0:
    // 0x3cd8e0: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cd8e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cd8e4:
    // 0x3cd8e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3cd8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd8e8:
    // 0x3cd8e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3cd8e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd8ec:
    // 0x3cd8ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cd8ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd8f0:
    // 0x3cd8f0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cd8f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cd8f4:
    // 0x3cd8f4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cd8f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cd8f8:
    // 0x3cd8f8: 0x2810  mfhi        $a1
    ctx->pc = 0x3cd8f8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3cd8fc:
    // 0x3cd8fc: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x3cd8fcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_3cd900:
    // 0x3cd900: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cd900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cd904:
    // 0x3cd904: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x3cd904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_3cd908:
    // 0x3cd908: 0x2525000d  addiu       $a1, $t1, 0xD
    ctx->pc = 0x3cd908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 13));
label_3cd90c:
    // 0x3cd90c: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x3cd90cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_3cd910:
    // 0x3cd910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cd910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd914:
    // 0x3cd914: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3cd914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3cd918:
    // 0x3cd918: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cd918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cd91c:
    // 0x3cd91c: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3cd91cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3cd920:
    // 0x3cd920: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x3cd920u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_3cd924:
    // 0x3cd924: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3cd924u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3cd928:
    // 0x3cd928: 0x2c84023  subu        $t0, $s6, $t0
    ctx->pc = 0x3cd928u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
label_3cd92c:
    // 0x3cd92c: 0x311600ff  andi        $s6, $t0, 0xFF
    ctx->pc = 0x3cd92cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_3cd930:
    // 0x3cd930: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x3cd930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cd934:
    // 0x3cd934: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x3cd934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cd938:
    // 0x3cd938: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3cd938u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3cd93c:
    // 0x3cd93c: 0x225a821  addu        $s5, $s1, $a1
    ctx->pc = 0x3cd93cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3cd940:
    // 0x3cd940: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3cd940u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3cd944:
    // 0x3cd944: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cd944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cd948:
    // 0x3cd948: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x3cd948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cd94c:
    // 0x3cd94c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x3cd94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cd950:
    // 0x3cd950: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3cd950u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3cd954:
    // 0x3cd954: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3cd954u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3cd958:
    // 0x3cd958: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cd958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cd95c:
    // 0x3cd95c: 0xc0bc284  jal         func_2F0A10
label_3cd960:
    if (ctx->pc == 0x3CD960u) {
        ctx->pc = 0x3CD960u;
            // 0x3cd960: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3CD964u;
        goto label_3cd964;
    }
    ctx->pc = 0x3CD95Cu;
    SET_GPR_U32(ctx, 31, 0x3CD964u);
    ctx->pc = 0x3CD960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD95Cu;
            // 0x3cd960: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD964u; }
        if (ctx->pc != 0x3CD964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD964u; }
        if (ctx->pc != 0x3CD964u) { return; }
    }
    ctx->pc = 0x3CD964u;
label_3cd964:
    // 0x3cd964: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x3cd964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cd968:
    // 0x3cd968: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x3cd968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_3cd96c:
    // 0x3cd96c: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x3cd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_3cd970:
    // 0x3cd970: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cd970u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cd974:
    // 0x3cd974: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x3cd974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cd978:
    // 0x3cd978: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3cd978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3cd97c:
    // 0x3cd97c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3cd97cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd980:
    // 0x3cd980: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3cd980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd984:
    // 0x3cd984: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cd984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cd988:
    // 0x3cd988: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cd988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cd98c:
    // 0x3cd98c: 0x222a821  addu        $s5, $s1, $v0
    ctx->pc = 0x3cd98cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3cd990:
    // 0x3cd990: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cd990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd994:
    // 0x3cd994: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cd994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cd998:
    // 0x3cd998: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cd998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cd99c:
    // 0x3cd99c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cd99cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd9a0:
    // 0x3cd9a0: 0x0  nop
    ctx->pc = 0x3cd9a0u;
    // NOP
label_3cd9a4:
    // 0x3cd9a4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cd9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cd9a8:
    // 0x3cd9a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cd9a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd9ac:
    // 0x3cd9ac: 0x0  nop
    ctx->pc = 0x3cd9acu;
    // NOP
label_3cd9b0:
    // 0x3cd9b0: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cd9b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cd9b4:
    // 0x3cd9b4: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cd9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cd9b8:
    // 0x3cd9b8: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x3cd9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cd9bc:
    // 0x3cd9bc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3cd9bcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3cd9c0:
    // 0x3cd9c0: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3cd9c0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3cd9c4:
    // 0x3cd9c4: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x3cd9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cd9c8:
    // 0x3cd9c8: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3cd9c8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3cd9cc:
    // 0x3cd9cc: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3cd9ccu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3cd9d0:
    // 0x3cd9d0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cd9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cd9d4:
    // 0x3cd9d4: 0xc0bc284  jal         func_2F0A10
label_3cd9d8:
    if (ctx->pc == 0x3CD9D8u) {
        ctx->pc = 0x3CD9D8u;
            // 0x3cd9d8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3CD9DCu;
        goto label_3cd9dc;
    }
    ctx->pc = 0x3CD9D4u;
    SET_GPR_U32(ctx, 31, 0x3CD9DCu);
    ctx->pc = 0x3CD9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD9D4u;
            // 0x3cd9d8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD9DCu; }
        if (ctx->pc != 0x3CD9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD9DCu; }
        if (ctx->pc != 0x3CD9DCu) { return; }
    }
    ctx->pc = 0x3CD9DCu;
label_3cd9dc:
    // 0x3cd9dc: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3cd9dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cd9e0:
    // 0x3cd9e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cd9e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd9e4:
    // 0x3cd9e4: 0x0  nop
    ctx->pc = 0x3cd9e4u;
    // NOP
label_3cd9e8:
    // 0x3cd9e8: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cd9e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cd9ec:
    // 0x3cd9ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cd9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cd9f0:
    // 0x3cd9f0: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x3cd9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cd9f4:
    // 0x3cd9f4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cd9f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cd9f8:
    // 0x3cd9f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3cd9f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd9fc:
    // 0x3cd9fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cd9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cda00:
    // 0x3cda00: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cda00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cda04:
    // 0x3cda04: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3cda04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cda08:
    // 0x3cda08: 0x26350180  addiu       $s5, $s1, 0x180
    ctx->pc = 0x3cda08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_3cda0c:
    // 0x3cda0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cda0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cda10:
    // 0x3cda10: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cda10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cda14:
    // 0x3cda14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cda14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cda18:
    // 0x3cda18: 0x0  nop
    ctx->pc = 0x3cda18u;
    // NOP
label_3cda1c:
    // 0x3cda1c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cda1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cda20:
    // 0x3cda20: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cda20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cda24:
    // 0x3cda24: 0xc6200188  lwc1        $f0, 0x188($s1)
    ctx->pc = 0x3cda24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cda28:
    // 0x3cda28: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3cda28u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3cda2c:
    // 0x3cda2c: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3cda2cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3cda30:
    // 0x3cda30: 0xc621018c  lwc1        $f1, 0x18C($s1)
    ctx->pc = 0x3cda30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cda34:
    // 0x3cda34: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3cda34u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3cda38:
    // 0x3cda38: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3cda38u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3cda3c:
    // 0x3cda3c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cda3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cda40:
    // 0x3cda40: 0xc0bc284  jal         func_2F0A10
label_3cda44:
    if (ctx->pc == 0x3CDA44u) {
        ctx->pc = 0x3CDA44u;
            // 0x3cda44: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3CDA48u;
        goto label_3cda48;
    }
    ctx->pc = 0x3CDA40u;
    SET_GPR_U32(ctx, 31, 0x3CDA48u);
    ctx->pc = 0x3CDA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CDA40u;
            // 0x3cda44: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDA48u; }
        if (ctx->pc != 0x3CDA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDA48u; }
        if (ctx->pc != 0x3CDA48u) { return; }
    }
    ctx->pc = 0x3CDA48u;
label_3cda48:
    // 0x3cda48: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x3cda48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_3cda4c:
    // 0x3cda4c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3cda4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cda50:
    // 0x3cda50: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x3cda50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
label_3cda54:
    // 0x3cda54: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x3cda54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_3cda58:
    // 0x3cda58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cda58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cda5c:
    // 0x3cda5c: 0x347c2  srl         $t0, $v1, 31
    ctx->pc = 0x3cda5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_3cda60:
    // 0x3cda60: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3cda60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3cda64:
    // 0x3cda64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cda64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cda68:
    // 0x3cda68: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cda68u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cda6c:
    // 0x3cda6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3cda6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cda70:
    // 0x3cda70: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3cda70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cda74:
    // 0x3cda74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cda74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cda78:
    // 0x3cda78: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cda78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cda7c:
    // 0x3cda7c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cda7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cda80:
    // 0x3cda80: 0x2810  mfhi        $a1
    ctx->pc = 0x3cda80u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3cda84:
    // 0x3cda84: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x3cda84u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_3cda88:
    // 0x3cda88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cda88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cda8c:
    // 0x3cda8c: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x3cda8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_3cda90:
    // 0x3cda90: 0x2525000d  addiu       $a1, $t1, 0xD
    ctx->pc = 0x3cda90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 13));
label_3cda94:
    // 0x3cda94: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x3cda94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_3cda98:
    // 0x3cda98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cda98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cda9c:
    // 0x3cda9c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3cda9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3cdaa0:
    // 0x3cdaa0: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x3cdaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cdaa4:
    // 0x3cdaa4: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3cdaa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3cdaa8:
    // 0x3cdaa8: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x3cdaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cdaac:
    // 0x3cdaac: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cdaacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cdab0:
    // 0x3cdab0: 0x225a821  addu        $s5, $s1, $a1
    ctx->pc = 0x3cdab0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3cdab4:
    // 0x3cdab4: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x3cdab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3cdab8:
    // 0x3cdab8: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x3cdab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_3cdabc:
    // 0x3cdabc: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x3cdabcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3cdac0:
    // 0x3cdac0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cdac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cdac4:
    // 0x3cdac4: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x3cdac4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_3cdac8:
    // 0x3cdac8: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3cdac8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3cdacc:
    // 0x3cdacc: 0x3c84023  subu        $t0, $fp, $t0
    ctx->pc = 0x3cdaccu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
label_3cdad0:
    // 0x3cdad0: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x3cdad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cdad4:
    // 0x3cdad4: 0x3116ffff  andi        $s6, $t0, 0xFFFF
    ctx->pc = 0x3cdad4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_3cdad8:
    // 0x3cdad8: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x3cdad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cdadc:
    // 0x3cdadc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3cdadcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3cdae0:
    // 0x3cdae0: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3cdae0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3cdae4:
    // 0x3cdae4: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3cdae4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3cdae8:
    // 0x3cdae8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cdae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cdaec:
    // 0x3cdaec: 0xc0bc284  jal         func_2F0A10
label_3cdaf0:
    if (ctx->pc == 0x3CDAF0u) {
        ctx->pc = 0x3CDAF0u;
            // 0x3cdaf0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3CDAF4u;
        goto label_3cdaf4;
    }
    ctx->pc = 0x3CDAECu;
    SET_GPR_U32(ctx, 31, 0x3CDAF4u);
    ctx->pc = 0x3CDAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CDAECu;
            // 0x3cdaf0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDAF4u; }
        if (ctx->pc != 0x3CDAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDAF4u; }
        if (ctx->pc != 0x3CDAF4u) { return; }
    }
    ctx->pc = 0x3CDAF4u;
label_3cdaf4:
    // 0x3cdaf4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3cdaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_3cdaf8:
    // 0x3cdaf8: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3cdaf8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cdafc:
    // 0x3cdafc: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x3cdafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_3cdb00:
    // 0x3cdb00: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3cdb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_3cdb04:
    // 0x3cdb04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cdb04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdb08:
    // 0x3cdb08: 0x347c2  srl         $t0, $v1, 31
    ctx->pc = 0x3cdb08u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_3cdb0c:
    // 0x3cdb0c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3cdb0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3cdb10:
    // 0x3cdb10: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3cdb10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cdb14:
    // 0x3cdb14: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cdb14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cdb18:
    // 0x3cdb18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cdb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cdb1c:
    // 0x3cdb1c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3cdb1cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdb20:
    // 0x3cdb20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cdb20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cdb24:
    // 0x3cdb24: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cdb24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cdb28:
    // 0x3cdb28: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cdb28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cdb2c:
    // 0x3cdb2c: 0x2810  mfhi        $a1
    ctx->pc = 0x3cdb2cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3cdb30:
    // 0x3cdb30: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x3cdb30u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_3cdb34:
    // 0x3cdb34: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cdb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cdb38:
    // 0x3cdb38: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x3cdb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_3cdb3c:
    // 0x3cdb3c: 0x24a5000d  addiu       $a1, $a1, 0xD
    ctx->pc = 0x3cdb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
label_3cdb40:
    // 0x3cdb40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cdb40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdb44:
    // 0x3cdb44: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3cdb44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3cdb48:
    // 0x3cdb48: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cdb48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cdb4c:
    // 0x3cdb4c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3cdb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3cdb50:
    // 0x3cdb50: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x3cdb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cdb54:
    // 0x3cdb54: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cdb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cdb58:
    // 0x3cdb58: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3cdb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cdb5c:
    // 0x3cdb5c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3cdb5cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3cdb60:
    // 0x3cdb60: 0x4601131c  madd.s      $f12, $f2, $f1
    ctx->pc = 0x3cdb60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3cdb64:
    // 0x3cdb64: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x3cdb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cdb68:
    // 0x3cdb68: 0x46006380  add.s       $f14, $f12, $f0
    ctx->pc = 0x3cdb68u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_3cdb6c:
    // 0x3cdb6c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cdb6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cdb70:
    // 0x3cdb70: 0xc0bc284  jal         func_2F0A10
label_3cdb74:
    if (ctx->pc == 0x3CDB74u) {
        ctx->pc = 0x3CDB74u;
            // 0x3cdb74: 0x4601a341  sub.s       $f13, $f20, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
        ctx->pc = 0x3CDB78u;
        goto label_3cdb78;
    }
    ctx->pc = 0x3CDB70u;
    SET_GPR_U32(ctx, 31, 0x3CDB78u);
    ctx->pc = 0x3CDB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CDB70u;
            // 0x3cdb74: 0x4601a341  sub.s       $f13, $f20, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDB78u; }
        if (ctx->pc != 0x3CDB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDB78u; }
        if (ctx->pc != 0x3CDB78u) { return; }
    }
    ctx->pc = 0x3CDB78u;
label_3cdb78:
    // 0x3cdb78: 0x8643000e  lh          $v1, 0xE($s2)
    ctx->pc = 0x3cdb78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_3cdb7c:
    // 0x3cdb7c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3cdb7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3cdb80:
    // 0x3cdb80: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x3cdb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3cdb84:
    // 0x3cdb84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cdb84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdb88:
    // 0x3cdb88: 0x0  nop
    ctx->pc = 0x3cdb88u;
    // NOP
label_3cdb8c:
    // 0x3cdb8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cdb8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cdb90:
    // 0x3cdb90: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3cdb90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3cdb94:
    // 0x3cdb94: 0x1440fec2  bnez        $v0, . + 4 + (-0x13E << 2)
label_3cdb98:
    if (ctx->pc == 0x3CDB98u) {
        ctx->pc = 0x3CDB98u;
            // 0x3cdb98: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x3CDB9Cu;
        goto label_3cdb9c;
    }
    ctx->pc = 0x3CDB94u;
    {
        const bool branch_taken_0x3cdb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CDB94u;
            // 0x3cdb98: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdb94) {
            ctx->pc = 0x3CD6A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3cd6a0;
        }
    }
    ctx->pc = 0x3CDB9Cu;
label_3cdb9c:
    // 0x3cdb9c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3cdb9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3cdba0:
    // 0x3cdba0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x3cdba0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3cdba4:
    // 0x3cdba4: 0x8c440d78  lw          $a0, 0xD78($v0)
    ctx->pc = 0x3cdba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
label_3cdba8:
    // 0x3cdba8: 0xc0ca680  jal         func_329A00
label_3cdbac:
    if (ctx->pc == 0x3CDBACu) {
        ctx->pc = 0x3CDBACu;
            // 0x3cdbac: 0x27a5010c  addiu       $a1, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->pc = 0x3CDBB0u;
        goto label_3cdbb0;
    }
    ctx->pc = 0x3CDBA8u;
    SET_GPR_U32(ctx, 31, 0x3CDBB0u);
    ctx->pc = 0x3CDBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CDBA8u;
            // 0x3cdbac: 0x27a5010c  addiu       $a1, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329A00u;
    if (runtime->hasFunction(0x329A00u)) {
        auto targetFn = runtime->lookupFunction(0x329A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDBB0u; }
        if (ctx->pc != 0x3CDBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329A00_0x329a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDBB0u; }
        if (ctx->pc != 0x3CDBB0u) { return; }
    }
    ctx->pc = 0x3CDBB0u;
label_3cdbb0:
    // 0x3cdbb0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x3cdbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_3cdbb4:
    // 0x3cdbb4: 0x93b3010d  lbu         $s3, 0x10D($sp)
    ctx->pc = 0x3cdbb4u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 269)));
label_3cdbb8:
    // 0x3cdbb8: 0x97b6010e  lhu         $s6, 0x10E($sp)
    ctx->pc = 0x3cdbb8u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 270)));
label_3cdbbc:
    // 0x3cdbbc: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x3cdbbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_3cdbc0:
    // 0x3cdbc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cdbc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdbc4:
    // 0x3cdbc4: 0x93a2010c  lbu         $v0, 0x10C($sp)
    ctx->pc = 0x3cdbc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 268)));
label_3cdbc8:
    // 0x3cdbc8: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x3cdbc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_3cdbcc:
    // 0x3cdbcc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_3cdbd0:
    if (ctx->pc == 0x3CDBD0u) {
        ctx->pc = 0x3CDBD0u;
            // 0x3cdbd0: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3CDBD4u;
        goto label_3cdbd4;
    }
    ctx->pc = 0x3CDBCCu;
    {
        const bool branch_taken_0x3cdbcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CDBCCu;
            // 0x3cdbd0: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdbcc) {
            ctx->pc = 0x3CDBE0u;
            goto label_3cdbe0;
        }
    }
    ctx->pc = 0x3CDBD4u;
label_3cdbd4:
    // 0x3cdbd4: 0x64020063  daddiu      $v0, $zero, 0x63
    ctx->pc = 0x3cdbd4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)99);
label_3cdbd8:
    // 0x3cdbd8: 0x6413003b  daddiu      $s3, $zero, 0x3B
    ctx->pc = 0x3cdbd8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)59);
label_3cdbdc:
    // 0x3cdbdc: 0x641603e7  daddiu      $s6, $zero, 0x3E7
    ctx->pc = 0x3cdbdcu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)999);
label_3cdbe0:
    // 0x3cdbe0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x3cdbe0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3cdbe4:
    // 0x3cdbe4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3cdbe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3cdbe8:
    // 0x3cdbe8: 0x647c2  srl         $t0, $a2, 31
    ctx->pc = 0x3cdbe8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_3cdbec:
    // 0x3cdbec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cdbecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cdbf0:
    // 0x3cdbf0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3cdbf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3cdbf4:
    // 0x3cdbf4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3cdbf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3cdbf8:
    // 0x3cdbf8: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x3cdbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_3cdbfc:
    // 0x3cdbfc: 0x34656667  ori         $a1, $v1, 0x6667
    ctx->pc = 0x3cdbfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_3cdc00:
    // 0x3cdc00: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x3cdc00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3cdc04:
    // 0x3cdc04: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3cdc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3cdc08:
    // 0x3cdc08: 0x83a025  or          $s4, $a0, $v1
    ctx->pc = 0x3cdc08u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3cdc0c:
    // 0x3cdc0c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3cdc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_3cdc10:
    // 0x3cdc10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cdc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cdc14:
    // 0x3cdc14: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x3cdc14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cdc18:
    // 0x3cdc18: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cdc18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cdc1c:
    // 0x3cdc1c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3cdc1cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3cdc20:
    // 0x3cdc20: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3cdc20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cdc24:
    // 0x3cdc24: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3cdc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cdc28:
    // 0x3cdc28: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3cdc28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdc2c:
    // 0x3cdc2c: 0x0  nop
    ctx->pc = 0x3cdc2cu;
    // NOP
label_3cdc30:
    // 0x3cdc30: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cdc30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cdc34:
    // 0x3cdc34: 0x2810  mfhi        $a1
    ctx->pc = 0x3cdc34u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3cdc38:
    // 0x3cdc38: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x3cdc38u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_3cdc3c:
    // 0x3cdc3c: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x3cdc3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_3cdc40:
    // 0x3cdc40: 0x2525000d  addiu       $a1, $t1, 0xD
    ctx->pc = 0x3cdc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 13));
label_3cdc44:
    // 0x3cdc44: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x3cdc44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_3cdc48:
    // 0x3cdc48: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3cdc48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3cdc4c:
    // 0x3cdc4c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3cdc4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3cdc50:
    // 0x3cdc50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cdc50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdc54:
    // 0x3cdc54: 0x225a821  addu        $s5, $s1, $a1
    ctx->pc = 0x3cdc54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3cdc58:
    // 0x3cdc58: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cdc58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cdc5c:
    // 0x3cdc5c: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3cdc5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3cdc60:
    // 0x3cdc60: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x3cdc60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_3cdc64:
    // 0x3cdc64: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cdc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cdc68:
    // 0x3cdc68: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3cdc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_3cdc6c:
    // 0x3cdc6c: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x3cdc6cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3cdc70:
    // 0x3cdc70: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x3cdc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cdc74:
    // 0x3cdc74: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x3cdc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cdc78:
    // 0x3cdc78: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3cdc78u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3cdc7c:
    // 0x3cdc7c: 0xc0bc284  jal         func_2F0A10
label_3cdc80:
    if (ctx->pc == 0x3CDC80u) {
        ctx->pc = 0x3CDC80u;
            // 0x3cdc80: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3CDC84u;
        goto label_3cdc84;
    }
    ctx->pc = 0x3CDC7Cu;
    SET_GPR_U32(ctx, 31, 0x3CDC84u);
    ctx->pc = 0x3CDC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CDC7Cu;
            // 0x3cdc80: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDC84u; }
        if (ctx->pc != 0x3CDC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDC84u; }
        if (ctx->pc != 0x3CDC84u) { return; }
    }
    ctx->pc = 0x3CDC84u;
label_3cdc84:
    // 0x3cdc84: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x3cdc84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cdc88:
    // 0x3cdc88: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x3cdc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_3cdc8c:
    // 0x3cdc8c: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x3cdc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_3cdc90:
    // 0x3cdc90: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cdc90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cdc94:
    // 0x3cdc94: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x3cdc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cdc98:
    // 0x3cdc98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3cdc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3cdc9c:
    // 0x3cdc9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3cdc9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdca0:
    // 0x3cdca0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3cdca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cdca4:
    // 0x3cdca4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cdca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cdca8:
    // 0x3cdca8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cdca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cdcac:
    // 0x3cdcac: 0x222a821  addu        $s5, $s1, $v0
    ctx->pc = 0x3cdcacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3cdcb0:
    // 0x3cdcb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cdcb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cdcb4:
    // 0x3cdcb4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cdcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cdcb8:
    // 0x3cdcb8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cdcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cdcbc:
    // 0x3cdcbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cdcbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdcc0:
    // 0x3cdcc0: 0x0  nop
    ctx->pc = 0x3cdcc0u;
    // NOP
label_3cdcc4:
    // 0x3cdcc4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cdcc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cdcc8:
    // 0x3cdcc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cdcc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdccc:
    // 0x3cdccc: 0x0  nop
    ctx->pc = 0x3cdcccu;
    // NOP
label_3cdcd0:
    // 0x3cdcd0: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cdcd0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cdcd4:
    // 0x3cdcd4: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cdcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cdcd8:
    // 0x3cdcd8: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x3cdcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cdcdc:
    // 0x3cdcdc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3cdcdcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3cdce0:
    // 0x3cdce0: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3cdce0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3cdce4:
    // 0x3cdce4: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x3cdce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cdce8:
    // 0x3cdce8: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3cdce8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3cdcec:
    // 0x3cdcec: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3cdcecu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3cdcf0:
    // 0x3cdcf0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cdcf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cdcf4:
    // 0x3cdcf4: 0xc0bc284  jal         func_2F0A10
label_3cdcf8:
    if (ctx->pc == 0x3CDCF8u) {
        ctx->pc = 0x3CDCF8u;
            // 0x3cdcf8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3CDCFCu;
        goto label_3cdcfc;
    }
    ctx->pc = 0x3CDCF4u;
    SET_GPR_U32(ctx, 31, 0x3CDCFCu);
    ctx->pc = 0x3CDCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CDCF4u;
            // 0x3cdcf8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDCFCu; }
        if (ctx->pc != 0x3CDCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDCFCu; }
        if (ctx->pc != 0x3CDCFCu) { return; }
    }
    ctx->pc = 0x3CDCFCu;
label_3cdcfc:
    // 0x3cdcfc: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3cdcfcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cdd00:
    // 0x3cdd00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cdd00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdd04:
    // 0x3cdd04: 0x0  nop
    ctx->pc = 0x3cdd04u;
    // NOP
label_3cdd08:
    // 0x3cdd08: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cdd08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cdd0c:
    // 0x3cdd0c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cdd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cdd10:
    // 0x3cdd10: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x3cdd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cdd14:
    // 0x3cdd14: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cdd14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cdd18:
    // 0x3cdd18: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3cdd18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdd1c:
    // 0x3cdd1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cdd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cdd20:
    // 0x3cdd20: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cdd20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cdd24:
    // 0x3cdd24: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3cdd24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cdd28:
    // 0x3cdd28: 0x26350170  addiu       $s5, $s1, 0x170
    ctx->pc = 0x3cdd28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_3cdd2c:
    // 0x3cdd2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cdd2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cdd30:
    // 0x3cdd30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cdd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cdd34:
    // 0x3cdd34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cdd34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdd38:
    // 0x3cdd38: 0x0  nop
    ctx->pc = 0x3cdd38u;
    // NOP
label_3cdd3c:
    // 0x3cdd3c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cdd3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cdd40:
    // 0x3cdd40: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cdd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cdd44:
    // 0x3cdd44: 0xc6200178  lwc1        $f0, 0x178($s1)
    ctx->pc = 0x3cdd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cdd48:
    // 0x3cdd48: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3cdd48u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3cdd4c:
    // 0x3cdd4c: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3cdd4cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3cdd50:
    // 0x3cdd50: 0xc621017c  lwc1        $f1, 0x17C($s1)
    ctx->pc = 0x3cdd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cdd54:
    // 0x3cdd54: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3cdd54u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3cdd58:
    // 0x3cdd58: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3cdd58u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3cdd5c:
    // 0x3cdd5c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cdd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cdd60:
    // 0x3cdd60: 0xc0bc284  jal         func_2F0A10
label_3cdd64:
    if (ctx->pc == 0x3CDD64u) {
        ctx->pc = 0x3CDD64u;
            // 0x3cdd64: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3CDD68u;
        goto label_3cdd68;
    }
    ctx->pc = 0x3CDD60u;
    SET_GPR_U32(ctx, 31, 0x3CDD68u);
    ctx->pc = 0x3CDD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CDD60u;
            // 0x3cdd64: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDD68u; }
        if (ctx->pc != 0x3CDD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDD68u; }
        if (ctx->pc != 0x3CDD68u) { return; }
    }
    ctx->pc = 0x3CDD68u;
label_3cdd68:
    // 0x3cdd68: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3cdd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_3cdd6c:
    // 0x3cdd6c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3cdd6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cdd70:
    // 0x3cdd70: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x3cdd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_3cdd74:
    // 0x3cdd74: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3cdd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_3cdd78:
    // 0x3cdd78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cdd78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdd7c:
    // 0x3cdd7c: 0x347c2  srl         $t0, $v1, 31
    ctx->pc = 0x3cdd7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_3cdd80:
    // 0x3cdd80: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3cdd80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3cdd84:
    // 0x3cdd84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cdd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cdd88:
    // 0x3cdd88: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cdd88u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cdd8c:
    // 0x3cdd8c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3cdd8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cdd90:
    // 0x3cdd90: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3cdd90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdd94:
    // 0x3cdd94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cdd94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cdd98:
    // 0x3cdd98: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cdd98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cdd9c:
    // 0x3cdd9c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cdd9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cdda0:
    // 0x3cdda0: 0x2810  mfhi        $a1
    ctx->pc = 0x3cdda0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3cdda4:
    // 0x3cdda4: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x3cdda4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_3cdda8:
    // 0x3cdda8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cdda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cddac:
    // 0x3cddac: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x3cddacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_3cddb0:
    // 0x3cddb0: 0x2525000d  addiu       $a1, $t1, 0xD
    ctx->pc = 0x3cddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 13));
label_3cddb4:
    // 0x3cddb4: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x3cddb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_3cddb8:
    // 0x3cddb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cddb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cddbc:
    // 0x3cddbc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3cddbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3cddc0:
    // 0x3cddc0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cddc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cddc4:
    // 0x3cddc4: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3cddc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3cddc8:
    // 0x3cddc8: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x3cddc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_3cddcc:
    // 0x3cddcc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3cddccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3cddd0:
    // 0x3cddd0: 0x2684023  subu        $t0, $s3, $t0
    ctx->pc = 0x3cddd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
label_3cddd4:
    // 0x3cddd4: 0x311300ff  andi        $s3, $t0, 0xFF
    ctx->pc = 0x3cddd4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_3cddd8:
    // 0x3cddd8: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x3cddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cdddc:
    // 0x3cdddc: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x3cdddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cdde0:
    // 0x3cdde0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3cdde0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3cdde4:
    // 0x3cdde4: 0x225a821  addu        $s5, $s1, $a1
    ctx->pc = 0x3cdde4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3cdde8:
    // 0x3cdde8: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3cdde8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3cddec:
    // 0x3cddec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3cddecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cddf0:
    // 0x3cddf0: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x3cddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cddf4:
    // 0x3cddf4: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x3cddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cddf8:
    // 0x3cddf8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3cddf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3cddfc:
    // 0x3cddfc: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3cddfcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3cde00:
    // 0x3cde00: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cde00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cde04:
    // 0x3cde04: 0xc0bc284  jal         func_2F0A10
label_3cde08:
    if (ctx->pc == 0x3CDE08u) {
        ctx->pc = 0x3CDE08u;
            // 0x3cde08: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3CDE0Cu;
        goto label_3cde0c;
    }
    ctx->pc = 0x3CDE04u;
    SET_GPR_U32(ctx, 31, 0x3CDE0Cu);
    ctx->pc = 0x3CDE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CDE04u;
            // 0x3cde08: 0x4600ab80  add.s       $f14, $f21, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDE0Cu; }
        if (ctx->pc != 0x3CDE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDE0Cu; }
        if (ctx->pc != 0x3CDE0Cu) { return; }
    }
    ctx->pc = 0x3CDE0Cu;
label_3cde0c:
    // 0x3cde0c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x3cde0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cde10:
    // 0x3cde10: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x3cde10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_3cde14:
    // 0x3cde14: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x3cde14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_3cde18:
    // 0x3cde18: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cde18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cde1c:
    // 0x3cde1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3cde1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3cde20:
    // 0x3cde20: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3cde20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cde24:
    // 0x3cde24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3cde24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cde28:
    // 0x3cde28: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x3cde28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3cde2c:
    // 0x3cde2c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cde2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cde30:
    // 0x3cde30: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cde30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cde34:
    // 0x3cde34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cde34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cde38:
    // 0x3cde38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3cde38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cde3c:
    // 0x3cde3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cde3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cde40:
    // 0x3cde40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cde40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cde44:
    // 0x3cde44: 0x0  nop
    ctx->pc = 0x3cde44u;
    // NOP
label_3cde48:
    // 0x3cde48: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cde48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cde4c:
    // 0x3cde4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cde4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cde50:
    // 0x3cde50: 0x0  nop
    ctx->pc = 0x3cde50u;
    // NOP
label_3cde54:
    // 0x3cde54: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cde54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cde58:
    // 0x3cde58: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x3cde58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cde5c:
    // 0x3cde5c: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cde5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cde60:
    // 0x3cde60: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x3cde60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cde64:
    // 0x3cde64: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3cde64u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3cde68:
    // 0x3cde68: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3cde68u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3cde6c:
    // 0x3cde6c: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x3cde6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cde70:
    // 0x3cde70: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3cde70u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3cde74:
    // 0x3cde74: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3cde74u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3cde78:
    // 0x3cde78: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cde78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cde7c:
    // 0x3cde7c: 0xc0bc284  jal         func_2F0A10
label_3cde80:
    if (ctx->pc == 0x3CDE80u) {
        ctx->pc = 0x3CDE80u;
            // 0x3cde80: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3CDE84u;
        goto label_3cde84;
    }
    ctx->pc = 0x3CDE7Cu;
    SET_GPR_U32(ctx, 31, 0x3CDE84u);
    ctx->pc = 0x3CDE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CDE7Cu;
            // 0x3cde80: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDE84u; }
        if (ctx->pc != 0x3CDE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDE84u; }
        if (ctx->pc != 0x3CDE84u) { return; }
    }
    ctx->pc = 0x3CDE84u;
label_3cde84:
    // 0x3cde84: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3cde84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cde88:
    // 0x3cde88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cde88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cde8c:
    // 0x3cde8c: 0x0  nop
    ctx->pc = 0x3cde8cu;
    // NOP
label_3cde90:
    // 0x3cde90: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cde90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cde94:
    // 0x3cde94: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cde94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cde98:
    // 0x3cde98: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x3cde98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cde9c:
    // 0x3cde9c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cde9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cdea0:
    // 0x3cdea0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3cdea0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdea4:
    // 0x3cdea4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cdea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cdea8:
    // 0x3cdea8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cdea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cdeac:
    // 0x3cdeac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3cdeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cdeb0:
    // 0x3cdeb0: 0x26330180  addiu       $s3, $s1, 0x180
    ctx->pc = 0x3cdeb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_3cdeb4:
    // 0x3cdeb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cdeb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cdeb8:
    // 0x3cdeb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3cdeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cdebc:
    // 0x3cdebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cdebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdec0:
    // 0x3cdec0: 0x0  nop
    ctx->pc = 0x3cdec0u;
    // NOP
label_3cdec4:
    // 0x3cdec4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cdec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cdec8:
    // 0x3cdec8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3cdec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cdecc:
    // 0x3cdecc: 0xc6200188  lwc1        $f0, 0x188($s1)
    ctx->pc = 0x3cdeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cded0:
    // 0x3cded0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3cded0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3cded4:
    // 0x3cded4: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3cded4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3cded8:
    // 0x3cded8: 0xc621018c  lwc1        $f1, 0x18C($s1)
    ctx->pc = 0x3cded8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cdedc:
    // 0x3cdedc: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3cdedcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3cdee0:
    // 0x3cdee0: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3cdee0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3cdee4:
    // 0x3cdee4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cdee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cdee8:
    // 0x3cdee8: 0xc0bc284  jal         func_2F0A10
label_3cdeec:
    if (ctx->pc == 0x3CDEECu) {
        ctx->pc = 0x3CDEECu;
            // 0x3cdeec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3CDEF0u;
        goto label_3cdef0;
    }
    ctx->pc = 0x3CDEE8u;
    SET_GPR_U32(ctx, 31, 0x3CDEF0u);
    ctx->pc = 0x3CDEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CDEE8u;
            // 0x3cdeec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDEF0u; }
        if (ctx->pc != 0x3CDEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDEF0u; }
        if (ctx->pc != 0x3CDEF0u) { return; }
    }
    ctx->pc = 0x3CDEF0u;
label_3cdef0:
    // 0x3cdef0: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x3cdef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_3cdef4:
    // 0x3cdef4: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3cdef4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cdef8:
    // 0x3cdef8: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x3cdef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_3cdefc:
    // 0x3cdefc: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x3cdefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_3cdf00:
    // 0x3cdf00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cdf00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdf04:
    // 0x3cdf04: 0x347c2  srl         $t0, $v1, 31
    ctx->pc = 0x3cdf04u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_3cdf08:
    // 0x3cdf08: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3cdf08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3cdf0c:
    // 0x3cdf0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cdf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cdf10:
    // 0x3cdf10: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cdf10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cdf14:
    // 0x3cdf14: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3cdf14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cdf18:
    // 0x3cdf18: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3cdf18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdf1c:
    // 0x3cdf1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cdf1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cdf20:
    // 0x3cdf20: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cdf20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cdf24:
    // 0x3cdf24: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cdf24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cdf28:
    // 0x3cdf28: 0x2810  mfhi        $a1
    ctx->pc = 0x3cdf28u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3cdf2c:
    // 0x3cdf2c: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x3cdf2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_3cdf30:
    // 0x3cdf30: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cdf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cdf34:
    // 0x3cdf34: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x3cdf34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_3cdf38:
    // 0x3cdf38: 0x2525000d  addiu       $a1, $t1, 0xD
    ctx->pc = 0x3cdf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 13));
label_3cdf3c:
    // 0x3cdf3c: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x3cdf3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_3cdf40:
    // 0x3cdf40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cdf40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdf44:
    // 0x3cdf44: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3cdf44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3cdf48:
    // 0x3cdf48: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x3cdf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cdf4c:
    // 0x3cdf4c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3cdf4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3cdf50:
    // 0x3cdf50: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x3cdf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cdf54:
    // 0x3cdf54: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cdf54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cdf58:
    // 0x3cdf58: 0x2259821  addu        $s3, $s1, $a1
    ctx->pc = 0x3cdf58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3cdf5c:
    // 0x3cdf5c: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x3cdf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3cdf60:
    // 0x3cdf60: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x3cdf60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_3cdf64:
    // 0x3cdf64: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x3cdf64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3cdf68:
    // 0x3cdf68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3cdf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cdf6c:
    // 0x3cdf6c: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x3cdf6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_3cdf70:
    // 0x3cdf70: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x3cdf70u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3cdf74:
    // 0x3cdf74: 0x2c84023  subu        $t0, $s6, $t0
    ctx->pc = 0x3cdf74u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
label_3cdf78:
    // 0x3cdf78: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x3cdf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cdf7c:
    // 0x3cdf7c: 0x3115ffff  andi        $s5, $t0, 0xFFFF
    ctx->pc = 0x3cdf7cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_3cdf80:
    // 0x3cdf80: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x3cdf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cdf84:
    // 0x3cdf84: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3cdf84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3cdf88:
    // 0x3cdf88: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x3cdf88u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_3cdf8c:
    // 0x3cdf8c: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3cdf8cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3cdf90:
    // 0x3cdf90: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cdf90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cdf94:
    // 0x3cdf94: 0xc0bc284  jal         func_2F0A10
label_3cdf98:
    if (ctx->pc == 0x3CDF98u) {
        ctx->pc = 0x3CDF98u;
            // 0x3cdf98: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3CDF9Cu;
        goto label_3cdf9c;
    }
    ctx->pc = 0x3CDF94u;
    SET_GPR_U32(ctx, 31, 0x3CDF9Cu);
    ctx->pc = 0x3CDF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CDF94u;
            // 0x3cdf98: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDF9Cu; }
        if (ctx->pc != 0x3CDF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CDF9Cu; }
        if (ctx->pc != 0x3CDF9Cu) { return; }
    }
    ctx->pc = 0x3CDF9Cu;
label_3cdf9c:
    // 0x3cdf9c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3cdf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_3cdfa0:
    // 0x3cdfa0: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3cdfa0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3cdfa4:
    // 0x3cdfa4: 0x32a3ffff  andi        $v1, $s5, 0xFFFF
    ctx->pc = 0x3cdfa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
label_3cdfa8:
    // 0x3cdfa8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3cdfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_3cdfac:
    // 0x3cdfac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cdfacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdfb0:
    // 0x3cdfb0: 0x347c2  srl         $t0, $v1, 31
    ctx->pc = 0x3cdfb0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_3cdfb4:
    // 0x3cdfb4: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3cdfb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3cdfb8:
    // 0x3cdfb8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3cdfb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cdfbc:
    // 0x3cdfbc: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3cdfbcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cdfc0:
    // 0x3cdfc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cdfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cdfc4:
    // 0x3cdfc4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3cdfc4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdfc8:
    // 0x3cdfc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cdfc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cdfcc:
    // 0x3cdfcc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3cdfccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3cdfd0:
    // 0x3cdfd0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3cdfd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3cdfd4:
    // 0x3cdfd4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cdfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cdfd8:
    // 0x3cdfd8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3cdfd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3cdfdc:
    // 0x3cdfdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cdfdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cdfe0:
    // 0x3cdfe0: 0x1010  mfhi        $v0
    ctx->pc = 0x3cdfe0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3cdfe4:
    // 0x3cdfe4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3cdfe4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_3cdfe8:
    // 0x3cdfe8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3cdfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_3cdfec:
    // 0x3cdfec: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x3cdfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_3cdff0:
    // 0x3cdff0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3cdff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3cdff4:
    // 0x3cdff4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3cdff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3cdff8:
    // 0x3cdff8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3cdff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3cdffc:
    // 0x3cdffc: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x3cdffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ce000:
    // 0x3ce000: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3ce000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ce004:
    // 0x3ce004: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3ce004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce008:
    // 0x3ce008: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3ce008u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3ce00c:
    // 0x3ce00c: 0x4601131c  madd.s      $f12, $f2, $f1
    ctx->pc = 0x3ce00cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3ce010:
    // 0x3ce010: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x3ce010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ce014:
    // 0x3ce014: 0x46006380  add.s       $f14, $f12, $f0
    ctx->pc = 0x3ce014u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_3ce018:
    // 0x3ce018: 0xc0bc284  jal         func_2F0A10
label_3ce01c:
    if (ctx->pc == 0x3CE01Cu) {
        ctx->pc = 0x3CE01Cu;
            // 0x3ce01c: 0x4601a341  sub.s       $f13, $f20, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
        ctx->pc = 0x3CE020u;
        goto label_3ce020;
    }
    ctx->pc = 0x3CE018u;
    SET_GPR_U32(ctx, 31, 0x3CE020u);
    ctx->pc = 0x3CE01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE018u;
            // 0x3ce01c: 0x4601a341  sub.s       $f13, $f20, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE020u; }
        if (ctx->pc != 0x3CE020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE020u; }
        if (ctx->pc != 0x3CE020u) { return; }
    }
    ctx->pc = 0x3CE020u;
label_3ce020:
    // 0x3ce020: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x3ce020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3ce024:
    // 0x3ce024: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ce024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ce028:
    // 0x3ce028: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3ce028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ce02c:
    // 0x3ce02c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ce02cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ce030:
    // 0x3ce030: 0x320f809  jalr        $t9
label_3ce034:
    if (ctx->pc == 0x3CE034u) {
        ctx->pc = 0x3CE038u;
        goto label_3ce038;
    }
    ctx->pc = 0x3CE030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CE038u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CE038u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CE038u; }
            if (ctx->pc != 0x3CE038u) { return; }
        }
        }
    }
    ctx->pc = 0x3CE038u;
label_3ce038:
    // 0x3ce038: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3ce038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3ce03c:
    // 0x3ce03c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3ce03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ce040:
    // 0x3ce040: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3ce040u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ce044:
    // 0x3ce044: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ce044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ce048:
    // 0x3ce048: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3ce048u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ce04c:
    // 0x3ce04c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3ce04cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ce050:
    // 0x3ce050: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3ce050u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ce054:
    // 0x3ce054: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ce054u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ce058:
    // 0x3ce058: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ce058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ce05c:
    // 0x3ce05c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ce05cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ce060:
    // 0x3ce060: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ce060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ce064:
    // 0x3ce064: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ce064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ce068:
    // 0x3ce068: 0x3e00008  jr          $ra
label_3ce06c:
    if (ctx->pc == 0x3CE06Cu) {
        ctx->pc = 0x3CE06Cu;
            // 0x3ce06c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3CE070u;
        goto label_fallthrough_0x3ce068;
    }
    ctx->pc = 0x3CE068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CE06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE068u;
            // 0x3ce06c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3ce068:
    ctx->pc = 0x3CE070u;
}
