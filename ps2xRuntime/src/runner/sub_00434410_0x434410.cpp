#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00434410
// Address: 0x434410 - 0x435400
void sub_00434410_0x434410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00434410_0x434410");
#endif

    switch (ctx->pc) {
        case 0x434410u: goto label_434410;
        case 0x434414u: goto label_434414;
        case 0x434418u: goto label_434418;
        case 0x43441cu: goto label_43441c;
        case 0x434420u: goto label_434420;
        case 0x434424u: goto label_434424;
        case 0x434428u: goto label_434428;
        case 0x43442cu: goto label_43442c;
        case 0x434430u: goto label_434430;
        case 0x434434u: goto label_434434;
        case 0x434438u: goto label_434438;
        case 0x43443cu: goto label_43443c;
        case 0x434440u: goto label_434440;
        case 0x434444u: goto label_434444;
        case 0x434448u: goto label_434448;
        case 0x43444cu: goto label_43444c;
        case 0x434450u: goto label_434450;
        case 0x434454u: goto label_434454;
        case 0x434458u: goto label_434458;
        case 0x43445cu: goto label_43445c;
        case 0x434460u: goto label_434460;
        case 0x434464u: goto label_434464;
        case 0x434468u: goto label_434468;
        case 0x43446cu: goto label_43446c;
        case 0x434470u: goto label_434470;
        case 0x434474u: goto label_434474;
        case 0x434478u: goto label_434478;
        case 0x43447cu: goto label_43447c;
        case 0x434480u: goto label_434480;
        case 0x434484u: goto label_434484;
        case 0x434488u: goto label_434488;
        case 0x43448cu: goto label_43448c;
        case 0x434490u: goto label_434490;
        case 0x434494u: goto label_434494;
        case 0x434498u: goto label_434498;
        case 0x43449cu: goto label_43449c;
        case 0x4344a0u: goto label_4344a0;
        case 0x4344a4u: goto label_4344a4;
        case 0x4344a8u: goto label_4344a8;
        case 0x4344acu: goto label_4344ac;
        case 0x4344b0u: goto label_4344b0;
        case 0x4344b4u: goto label_4344b4;
        case 0x4344b8u: goto label_4344b8;
        case 0x4344bcu: goto label_4344bc;
        case 0x4344c0u: goto label_4344c0;
        case 0x4344c4u: goto label_4344c4;
        case 0x4344c8u: goto label_4344c8;
        case 0x4344ccu: goto label_4344cc;
        case 0x4344d0u: goto label_4344d0;
        case 0x4344d4u: goto label_4344d4;
        case 0x4344d8u: goto label_4344d8;
        case 0x4344dcu: goto label_4344dc;
        case 0x4344e0u: goto label_4344e0;
        case 0x4344e4u: goto label_4344e4;
        case 0x4344e8u: goto label_4344e8;
        case 0x4344ecu: goto label_4344ec;
        case 0x4344f0u: goto label_4344f0;
        case 0x4344f4u: goto label_4344f4;
        case 0x4344f8u: goto label_4344f8;
        case 0x4344fcu: goto label_4344fc;
        case 0x434500u: goto label_434500;
        case 0x434504u: goto label_434504;
        case 0x434508u: goto label_434508;
        case 0x43450cu: goto label_43450c;
        case 0x434510u: goto label_434510;
        case 0x434514u: goto label_434514;
        case 0x434518u: goto label_434518;
        case 0x43451cu: goto label_43451c;
        case 0x434520u: goto label_434520;
        case 0x434524u: goto label_434524;
        case 0x434528u: goto label_434528;
        case 0x43452cu: goto label_43452c;
        case 0x434530u: goto label_434530;
        case 0x434534u: goto label_434534;
        case 0x434538u: goto label_434538;
        case 0x43453cu: goto label_43453c;
        case 0x434540u: goto label_434540;
        case 0x434544u: goto label_434544;
        case 0x434548u: goto label_434548;
        case 0x43454cu: goto label_43454c;
        case 0x434550u: goto label_434550;
        case 0x434554u: goto label_434554;
        case 0x434558u: goto label_434558;
        case 0x43455cu: goto label_43455c;
        case 0x434560u: goto label_434560;
        case 0x434564u: goto label_434564;
        case 0x434568u: goto label_434568;
        case 0x43456cu: goto label_43456c;
        case 0x434570u: goto label_434570;
        case 0x434574u: goto label_434574;
        case 0x434578u: goto label_434578;
        case 0x43457cu: goto label_43457c;
        case 0x434580u: goto label_434580;
        case 0x434584u: goto label_434584;
        case 0x434588u: goto label_434588;
        case 0x43458cu: goto label_43458c;
        case 0x434590u: goto label_434590;
        case 0x434594u: goto label_434594;
        case 0x434598u: goto label_434598;
        case 0x43459cu: goto label_43459c;
        case 0x4345a0u: goto label_4345a0;
        case 0x4345a4u: goto label_4345a4;
        case 0x4345a8u: goto label_4345a8;
        case 0x4345acu: goto label_4345ac;
        case 0x4345b0u: goto label_4345b0;
        case 0x4345b4u: goto label_4345b4;
        case 0x4345b8u: goto label_4345b8;
        case 0x4345bcu: goto label_4345bc;
        case 0x4345c0u: goto label_4345c0;
        case 0x4345c4u: goto label_4345c4;
        case 0x4345c8u: goto label_4345c8;
        case 0x4345ccu: goto label_4345cc;
        case 0x4345d0u: goto label_4345d0;
        case 0x4345d4u: goto label_4345d4;
        case 0x4345d8u: goto label_4345d8;
        case 0x4345dcu: goto label_4345dc;
        case 0x4345e0u: goto label_4345e0;
        case 0x4345e4u: goto label_4345e4;
        case 0x4345e8u: goto label_4345e8;
        case 0x4345ecu: goto label_4345ec;
        case 0x4345f0u: goto label_4345f0;
        case 0x4345f4u: goto label_4345f4;
        case 0x4345f8u: goto label_4345f8;
        case 0x4345fcu: goto label_4345fc;
        case 0x434600u: goto label_434600;
        case 0x434604u: goto label_434604;
        case 0x434608u: goto label_434608;
        case 0x43460cu: goto label_43460c;
        case 0x434610u: goto label_434610;
        case 0x434614u: goto label_434614;
        case 0x434618u: goto label_434618;
        case 0x43461cu: goto label_43461c;
        case 0x434620u: goto label_434620;
        case 0x434624u: goto label_434624;
        case 0x434628u: goto label_434628;
        case 0x43462cu: goto label_43462c;
        case 0x434630u: goto label_434630;
        case 0x434634u: goto label_434634;
        case 0x434638u: goto label_434638;
        case 0x43463cu: goto label_43463c;
        case 0x434640u: goto label_434640;
        case 0x434644u: goto label_434644;
        case 0x434648u: goto label_434648;
        case 0x43464cu: goto label_43464c;
        case 0x434650u: goto label_434650;
        case 0x434654u: goto label_434654;
        case 0x434658u: goto label_434658;
        case 0x43465cu: goto label_43465c;
        case 0x434660u: goto label_434660;
        case 0x434664u: goto label_434664;
        case 0x434668u: goto label_434668;
        case 0x43466cu: goto label_43466c;
        case 0x434670u: goto label_434670;
        case 0x434674u: goto label_434674;
        case 0x434678u: goto label_434678;
        case 0x43467cu: goto label_43467c;
        case 0x434680u: goto label_434680;
        case 0x434684u: goto label_434684;
        case 0x434688u: goto label_434688;
        case 0x43468cu: goto label_43468c;
        case 0x434690u: goto label_434690;
        case 0x434694u: goto label_434694;
        case 0x434698u: goto label_434698;
        case 0x43469cu: goto label_43469c;
        case 0x4346a0u: goto label_4346a0;
        case 0x4346a4u: goto label_4346a4;
        case 0x4346a8u: goto label_4346a8;
        case 0x4346acu: goto label_4346ac;
        case 0x4346b0u: goto label_4346b0;
        case 0x4346b4u: goto label_4346b4;
        case 0x4346b8u: goto label_4346b8;
        case 0x4346bcu: goto label_4346bc;
        case 0x4346c0u: goto label_4346c0;
        case 0x4346c4u: goto label_4346c4;
        case 0x4346c8u: goto label_4346c8;
        case 0x4346ccu: goto label_4346cc;
        case 0x4346d0u: goto label_4346d0;
        case 0x4346d4u: goto label_4346d4;
        case 0x4346d8u: goto label_4346d8;
        case 0x4346dcu: goto label_4346dc;
        case 0x4346e0u: goto label_4346e0;
        case 0x4346e4u: goto label_4346e4;
        case 0x4346e8u: goto label_4346e8;
        case 0x4346ecu: goto label_4346ec;
        case 0x4346f0u: goto label_4346f0;
        case 0x4346f4u: goto label_4346f4;
        case 0x4346f8u: goto label_4346f8;
        case 0x4346fcu: goto label_4346fc;
        case 0x434700u: goto label_434700;
        case 0x434704u: goto label_434704;
        case 0x434708u: goto label_434708;
        case 0x43470cu: goto label_43470c;
        case 0x434710u: goto label_434710;
        case 0x434714u: goto label_434714;
        case 0x434718u: goto label_434718;
        case 0x43471cu: goto label_43471c;
        case 0x434720u: goto label_434720;
        case 0x434724u: goto label_434724;
        case 0x434728u: goto label_434728;
        case 0x43472cu: goto label_43472c;
        case 0x434730u: goto label_434730;
        case 0x434734u: goto label_434734;
        case 0x434738u: goto label_434738;
        case 0x43473cu: goto label_43473c;
        case 0x434740u: goto label_434740;
        case 0x434744u: goto label_434744;
        case 0x434748u: goto label_434748;
        case 0x43474cu: goto label_43474c;
        case 0x434750u: goto label_434750;
        case 0x434754u: goto label_434754;
        case 0x434758u: goto label_434758;
        case 0x43475cu: goto label_43475c;
        case 0x434760u: goto label_434760;
        case 0x434764u: goto label_434764;
        case 0x434768u: goto label_434768;
        case 0x43476cu: goto label_43476c;
        case 0x434770u: goto label_434770;
        case 0x434774u: goto label_434774;
        case 0x434778u: goto label_434778;
        case 0x43477cu: goto label_43477c;
        case 0x434780u: goto label_434780;
        case 0x434784u: goto label_434784;
        case 0x434788u: goto label_434788;
        case 0x43478cu: goto label_43478c;
        case 0x434790u: goto label_434790;
        case 0x434794u: goto label_434794;
        case 0x434798u: goto label_434798;
        case 0x43479cu: goto label_43479c;
        case 0x4347a0u: goto label_4347a0;
        case 0x4347a4u: goto label_4347a4;
        case 0x4347a8u: goto label_4347a8;
        case 0x4347acu: goto label_4347ac;
        case 0x4347b0u: goto label_4347b0;
        case 0x4347b4u: goto label_4347b4;
        case 0x4347b8u: goto label_4347b8;
        case 0x4347bcu: goto label_4347bc;
        case 0x4347c0u: goto label_4347c0;
        case 0x4347c4u: goto label_4347c4;
        case 0x4347c8u: goto label_4347c8;
        case 0x4347ccu: goto label_4347cc;
        case 0x4347d0u: goto label_4347d0;
        case 0x4347d4u: goto label_4347d4;
        case 0x4347d8u: goto label_4347d8;
        case 0x4347dcu: goto label_4347dc;
        case 0x4347e0u: goto label_4347e0;
        case 0x4347e4u: goto label_4347e4;
        case 0x4347e8u: goto label_4347e8;
        case 0x4347ecu: goto label_4347ec;
        case 0x4347f0u: goto label_4347f0;
        case 0x4347f4u: goto label_4347f4;
        case 0x4347f8u: goto label_4347f8;
        case 0x4347fcu: goto label_4347fc;
        case 0x434800u: goto label_434800;
        case 0x434804u: goto label_434804;
        case 0x434808u: goto label_434808;
        case 0x43480cu: goto label_43480c;
        case 0x434810u: goto label_434810;
        case 0x434814u: goto label_434814;
        case 0x434818u: goto label_434818;
        case 0x43481cu: goto label_43481c;
        case 0x434820u: goto label_434820;
        case 0x434824u: goto label_434824;
        case 0x434828u: goto label_434828;
        case 0x43482cu: goto label_43482c;
        case 0x434830u: goto label_434830;
        case 0x434834u: goto label_434834;
        case 0x434838u: goto label_434838;
        case 0x43483cu: goto label_43483c;
        case 0x434840u: goto label_434840;
        case 0x434844u: goto label_434844;
        case 0x434848u: goto label_434848;
        case 0x43484cu: goto label_43484c;
        case 0x434850u: goto label_434850;
        case 0x434854u: goto label_434854;
        case 0x434858u: goto label_434858;
        case 0x43485cu: goto label_43485c;
        case 0x434860u: goto label_434860;
        case 0x434864u: goto label_434864;
        case 0x434868u: goto label_434868;
        case 0x43486cu: goto label_43486c;
        case 0x434870u: goto label_434870;
        case 0x434874u: goto label_434874;
        case 0x434878u: goto label_434878;
        case 0x43487cu: goto label_43487c;
        case 0x434880u: goto label_434880;
        case 0x434884u: goto label_434884;
        case 0x434888u: goto label_434888;
        case 0x43488cu: goto label_43488c;
        case 0x434890u: goto label_434890;
        case 0x434894u: goto label_434894;
        case 0x434898u: goto label_434898;
        case 0x43489cu: goto label_43489c;
        case 0x4348a0u: goto label_4348a0;
        case 0x4348a4u: goto label_4348a4;
        case 0x4348a8u: goto label_4348a8;
        case 0x4348acu: goto label_4348ac;
        case 0x4348b0u: goto label_4348b0;
        case 0x4348b4u: goto label_4348b4;
        case 0x4348b8u: goto label_4348b8;
        case 0x4348bcu: goto label_4348bc;
        case 0x4348c0u: goto label_4348c0;
        case 0x4348c4u: goto label_4348c4;
        case 0x4348c8u: goto label_4348c8;
        case 0x4348ccu: goto label_4348cc;
        case 0x4348d0u: goto label_4348d0;
        case 0x4348d4u: goto label_4348d4;
        case 0x4348d8u: goto label_4348d8;
        case 0x4348dcu: goto label_4348dc;
        case 0x4348e0u: goto label_4348e0;
        case 0x4348e4u: goto label_4348e4;
        case 0x4348e8u: goto label_4348e8;
        case 0x4348ecu: goto label_4348ec;
        case 0x4348f0u: goto label_4348f0;
        case 0x4348f4u: goto label_4348f4;
        case 0x4348f8u: goto label_4348f8;
        case 0x4348fcu: goto label_4348fc;
        case 0x434900u: goto label_434900;
        case 0x434904u: goto label_434904;
        case 0x434908u: goto label_434908;
        case 0x43490cu: goto label_43490c;
        case 0x434910u: goto label_434910;
        case 0x434914u: goto label_434914;
        case 0x434918u: goto label_434918;
        case 0x43491cu: goto label_43491c;
        case 0x434920u: goto label_434920;
        case 0x434924u: goto label_434924;
        case 0x434928u: goto label_434928;
        case 0x43492cu: goto label_43492c;
        case 0x434930u: goto label_434930;
        case 0x434934u: goto label_434934;
        case 0x434938u: goto label_434938;
        case 0x43493cu: goto label_43493c;
        case 0x434940u: goto label_434940;
        case 0x434944u: goto label_434944;
        case 0x434948u: goto label_434948;
        case 0x43494cu: goto label_43494c;
        case 0x434950u: goto label_434950;
        case 0x434954u: goto label_434954;
        case 0x434958u: goto label_434958;
        case 0x43495cu: goto label_43495c;
        case 0x434960u: goto label_434960;
        case 0x434964u: goto label_434964;
        case 0x434968u: goto label_434968;
        case 0x43496cu: goto label_43496c;
        case 0x434970u: goto label_434970;
        case 0x434974u: goto label_434974;
        case 0x434978u: goto label_434978;
        case 0x43497cu: goto label_43497c;
        case 0x434980u: goto label_434980;
        case 0x434984u: goto label_434984;
        case 0x434988u: goto label_434988;
        case 0x43498cu: goto label_43498c;
        case 0x434990u: goto label_434990;
        case 0x434994u: goto label_434994;
        case 0x434998u: goto label_434998;
        case 0x43499cu: goto label_43499c;
        case 0x4349a0u: goto label_4349a0;
        case 0x4349a4u: goto label_4349a4;
        case 0x4349a8u: goto label_4349a8;
        case 0x4349acu: goto label_4349ac;
        case 0x4349b0u: goto label_4349b0;
        case 0x4349b4u: goto label_4349b4;
        case 0x4349b8u: goto label_4349b8;
        case 0x4349bcu: goto label_4349bc;
        case 0x4349c0u: goto label_4349c0;
        case 0x4349c4u: goto label_4349c4;
        case 0x4349c8u: goto label_4349c8;
        case 0x4349ccu: goto label_4349cc;
        case 0x4349d0u: goto label_4349d0;
        case 0x4349d4u: goto label_4349d4;
        case 0x4349d8u: goto label_4349d8;
        case 0x4349dcu: goto label_4349dc;
        case 0x4349e0u: goto label_4349e0;
        case 0x4349e4u: goto label_4349e4;
        case 0x4349e8u: goto label_4349e8;
        case 0x4349ecu: goto label_4349ec;
        case 0x4349f0u: goto label_4349f0;
        case 0x4349f4u: goto label_4349f4;
        case 0x4349f8u: goto label_4349f8;
        case 0x4349fcu: goto label_4349fc;
        case 0x434a00u: goto label_434a00;
        case 0x434a04u: goto label_434a04;
        case 0x434a08u: goto label_434a08;
        case 0x434a0cu: goto label_434a0c;
        case 0x434a10u: goto label_434a10;
        case 0x434a14u: goto label_434a14;
        case 0x434a18u: goto label_434a18;
        case 0x434a1cu: goto label_434a1c;
        case 0x434a20u: goto label_434a20;
        case 0x434a24u: goto label_434a24;
        case 0x434a28u: goto label_434a28;
        case 0x434a2cu: goto label_434a2c;
        case 0x434a30u: goto label_434a30;
        case 0x434a34u: goto label_434a34;
        case 0x434a38u: goto label_434a38;
        case 0x434a3cu: goto label_434a3c;
        case 0x434a40u: goto label_434a40;
        case 0x434a44u: goto label_434a44;
        case 0x434a48u: goto label_434a48;
        case 0x434a4cu: goto label_434a4c;
        case 0x434a50u: goto label_434a50;
        case 0x434a54u: goto label_434a54;
        case 0x434a58u: goto label_434a58;
        case 0x434a5cu: goto label_434a5c;
        case 0x434a60u: goto label_434a60;
        case 0x434a64u: goto label_434a64;
        case 0x434a68u: goto label_434a68;
        case 0x434a6cu: goto label_434a6c;
        case 0x434a70u: goto label_434a70;
        case 0x434a74u: goto label_434a74;
        case 0x434a78u: goto label_434a78;
        case 0x434a7cu: goto label_434a7c;
        case 0x434a80u: goto label_434a80;
        case 0x434a84u: goto label_434a84;
        case 0x434a88u: goto label_434a88;
        case 0x434a8cu: goto label_434a8c;
        case 0x434a90u: goto label_434a90;
        case 0x434a94u: goto label_434a94;
        case 0x434a98u: goto label_434a98;
        case 0x434a9cu: goto label_434a9c;
        case 0x434aa0u: goto label_434aa0;
        case 0x434aa4u: goto label_434aa4;
        case 0x434aa8u: goto label_434aa8;
        case 0x434aacu: goto label_434aac;
        case 0x434ab0u: goto label_434ab0;
        case 0x434ab4u: goto label_434ab4;
        case 0x434ab8u: goto label_434ab8;
        case 0x434abcu: goto label_434abc;
        case 0x434ac0u: goto label_434ac0;
        case 0x434ac4u: goto label_434ac4;
        case 0x434ac8u: goto label_434ac8;
        case 0x434accu: goto label_434acc;
        case 0x434ad0u: goto label_434ad0;
        case 0x434ad4u: goto label_434ad4;
        case 0x434ad8u: goto label_434ad8;
        case 0x434adcu: goto label_434adc;
        case 0x434ae0u: goto label_434ae0;
        case 0x434ae4u: goto label_434ae4;
        case 0x434ae8u: goto label_434ae8;
        case 0x434aecu: goto label_434aec;
        case 0x434af0u: goto label_434af0;
        case 0x434af4u: goto label_434af4;
        case 0x434af8u: goto label_434af8;
        case 0x434afcu: goto label_434afc;
        case 0x434b00u: goto label_434b00;
        case 0x434b04u: goto label_434b04;
        case 0x434b08u: goto label_434b08;
        case 0x434b0cu: goto label_434b0c;
        case 0x434b10u: goto label_434b10;
        case 0x434b14u: goto label_434b14;
        case 0x434b18u: goto label_434b18;
        case 0x434b1cu: goto label_434b1c;
        case 0x434b20u: goto label_434b20;
        case 0x434b24u: goto label_434b24;
        case 0x434b28u: goto label_434b28;
        case 0x434b2cu: goto label_434b2c;
        case 0x434b30u: goto label_434b30;
        case 0x434b34u: goto label_434b34;
        case 0x434b38u: goto label_434b38;
        case 0x434b3cu: goto label_434b3c;
        case 0x434b40u: goto label_434b40;
        case 0x434b44u: goto label_434b44;
        case 0x434b48u: goto label_434b48;
        case 0x434b4cu: goto label_434b4c;
        case 0x434b50u: goto label_434b50;
        case 0x434b54u: goto label_434b54;
        case 0x434b58u: goto label_434b58;
        case 0x434b5cu: goto label_434b5c;
        case 0x434b60u: goto label_434b60;
        case 0x434b64u: goto label_434b64;
        case 0x434b68u: goto label_434b68;
        case 0x434b6cu: goto label_434b6c;
        case 0x434b70u: goto label_434b70;
        case 0x434b74u: goto label_434b74;
        case 0x434b78u: goto label_434b78;
        case 0x434b7cu: goto label_434b7c;
        case 0x434b80u: goto label_434b80;
        case 0x434b84u: goto label_434b84;
        case 0x434b88u: goto label_434b88;
        case 0x434b8cu: goto label_434b8c;
        case 0x434b90u: goto label_434b90;
        case 0x434b94u: goto label_434b94;
        case 0x434b98u: goto label_434b98;
        case 0x434b9cu: goto label_434b9c;
        case 0x434ba0u: goto label_434ba0;
        case 0x434ba4u: goto label_434ba4;
        case 0x434ba8u: goto label_434ba8;
        case 0x434bacu: goto label_434bac;
        case 0x434bb0u: goto label_434bb0;
        case 0x434bb4u: goto label_434bb4;
        case 0x434bb8u: goto label_434bb8;
        case 0x434bbcu: goto label_434bbc;
        case 0x434bc0u: goto label_434bc0;
        case 0x434bc4u: goto label_434bc4;
        case 0x434bc8u: goto label_434bc8;
        case 0x434bccu: goto label_434bcc;
        case 0x434bd0u: goto label_434bd0;
        case 0x434bd4u: goto label_434bd4;
        case 0x434bd8u: goto label_434bd8;
        case 0x434bdcu: goto label_434bdc;
        case 0x434be0u: goto label_434be0;
        case 0x434be4u: goto label_434be4;
        case 0x434be8u: goto label_434be8;
        case 0x434becu: goto label_434bec;
        case 0x434bf0u: goto label_434bf0;
        case 0x434bf4u: goto label_434bf4;
        case 0x434bf8u: goto label_434bf8;
        case 0x434bfcu: goto label_434bfc;
        case 0x434c00u: goto label_434c00;
        case 0x434c04u: goto label_434c04;
        case 0x434c08u: goto label_434c08;
        case 0x434c0cu: goto label_434c0c;
        case 0x434c10u: goto label_434c10;
        case 0x434c14u: goto label_434c14;
        case 0x434c18u: goto label_434c18;
        case 0x434c1cu: goto label_434c1c;
        case 0x434c20u: goto label_434c20;
        case 0x434c24u: goto label_434c24;
        case 0x434c28u: goto label_434c28;
        case 0x434c2cu: goto label_434c2c;
        case 0x434c30u: goto label_434c30;
        case 0x434c34u: goto label_434c34;
        case 0x434c38u: goto label_434c38;
        case 0x434c3cu: goto label_434c3c;
        case 0x434c40u: goto label_434c40;
        case 0x434c44u: goto label_434c44;
        case 0x434c48u: goto label_434c48;
        case 0x434c4cu: goto label_434c4c;
        case 0x434c50u: goto label_434c50;
        case 0x434c54u: goto label_434c54;
        case 0x434c58u: goto label_434c58;
        case 0x434c5cu: goto label_434c5c;
        case 0x434c60u: goto label_434c60;
        case 0x434c64u: goto label_434c64;
        case 0x434c68u: goto label_434c68;
        case 0x434c6cu: goto label_434c6c;
        case 0x434c70u: goto label_434c70;
        case 0x434c74u: goto label_434c74;
        case 0x434c78u: goto label_434c78;
        case 0x434c7cu: goto label_434c7c;
        case 0x434c80u: goto label_434c80;
        case 0x434c84u: goto label_434c84;
        case 0x434c88u: goto label_434c88;
        case 0x434c8cu: goto label_434c8c;
        case 0x434c90u: goto label_434c90;
        case 0x434c94u: goto label_434c94;
        case 0x434c98u: goto label_434c98;
        case 0x434c9cu: goto label_434c9c;
        case 0x434ca0u: goto label_434ca0;
        case 0x434ca4u: goto label_434ca4;
        case 0x434ca8u: goto label_434ca8;
        case 0x434cacu: goto label_434cac;
        case 0x434cb0u: goto label_434cb0;
        case 0x434cb4u: goto label_434cb4;
        case 0x434cb8u: goto label_434cb8;
        case 0x434cbcu: goto label_434cbc;
        case 0x434cc0u: goto label_434cc0;
        case 0x434cc4u: goto label_434cc4;
        case 0x434cc8u: goto label_434cc8;
        case 0x434cccu: goto label_434ccc;
        case 0x434cd0u: goto label_434cd0;
        case 0x434cd4u: goto label_434cd4;
        case 0x434cd8u: goto label_434cd8;
        case 0x434cdcu: goto label_434cdc;
        case 0x434ce0u: goto label_434ce0;
        case 0x434ce4u: goto label_434ce4;
        case 0x434ce8u: goto label_434ce8;
        case 0x434cecu: goto label_434cec;
        case 0x434cf0u: goto label_434cf0;
        case 0x434cf4u: goto label_434cf4;
        case 0x434cf8u: goto label_434cf8;
        case 0x434cfcu: goto label_434cfc;
        case 0x434d00u: goto label_434d00;
        case 0x434d04u: goto label_434d04;
        case 0x434d08u: goto label_434d08;
        case 0x434d0cu: goto label_434d0c;
        case 0x434d10u: goto label_434d10;
        case 0x434d14u: goto label_434d14;
        case 0x434d18u: goto label_434d18;
        case 0x434d1cu: goto label_434d1c;
        case 0x434d20u: goto label_434d20;
        case 0x434d24u: goto label_434d24;
        case 0x434d28u: goto label_434d28;
        case 0x434d2cu: goto label_434d2c;
        case 0x434d30u: goto label_434d30;
        case 0x434d34u: goto label_434d34;
        case 0x434d38u: goto label_434d38;
        case 0x434d3cu: goto label_434d3c;
        case 0x434d40u: goto label_434d40;
        case 0x434d44u: goto label_434d44;
        case 0x434d48u: goto label_434d48;
        case 0x434d4cu: goto label_434d4c;
        case 0x434d50u: goto label_434d50;
        case 0x434d54u: goto label_434d54;
        case 0x434d58u: goto label_434d58;
        case 0x434d5cu: goto label_434d5c;
        case 0x434d60u: goto label_434d60;
        case 0x434d64u: goto label_434d64;
        case 0x434d68u: goto label_434d68;
        case 0x434d6cu: goto label_434d6c;
        case 0x434d70u: goto label_434d70;
        case 0x434d74u: goto label_434d74;
        case 0x434d78u: goto label_434d78;
        case 0x434d7cu: goto label_434d7c;
        case 0x434d80u: goto label_434d80;
        case 0x434d84u: goto label_434d84;
        case 0x434d88u: goto label_434d88;
        case 0x434d8cu: goto label_434d8c;
        case 0x434d90u: goto label_434d90;
        case 0x434d94u: goto label_434d94;
        case 0x434d98u: goto label_434d98;
        case 0x434d9cu: goto label_434d9c;
        case 0x434da0u: goto label_434da0;
        case 0x434da4u: goto label_434da4;
        case 0x434da8u: goto label_434da8;
        case 0x434dacu: goto label_434dac;
        case 0x434db0u: goto label_434db0;
        case 0x434db4u: goto label_434db4;
        case 0x434db8u: goto label_434db8;
        case 0x434dbcu: goto label_434dbc;
        case 0x434dc0u: goto label_434dc0;
        case 0x434dc4u: goto label_434dc4;
        case 0x434dc8u: goto label_434dc8;
        case 0x434dccu: goto label_434dcc;
        case 0x434dd0u: goto label_434dd0;
        case 0x434dd4u: goto label_434dd4;
        case 0x434dd8u: goto label_434dd8;
        case 0x434ddcu: goto label_434ddc;
        case 0x434de0u: goto label_434de0;
        case 0x434de4u: goto label_434de4;
        case 0x434de8u: goto label_434de8;
        case 0x434decu: goto label_434dec;
        case 0x434df0u: goto label_434df0;
        case 0x434df4u: goto label_434df4;
        case 0x434df8u: goto label_434df8;
        case 0x434dfcu: goto label_434dfc;
        case 0x434e00u: goto label_434e00;
        case 0x434e04u: goto label_434e04;
        case 0x434e08u: goto label_434e08;
        case 0x434e0cu: goto label_434e0c;
        case 0x434e10u: goto label_434e10;
        case 0x434e14u: goto label_434e14;
        case 0x434e18u: goto label_434e18;
        case 0x434e1cu: goto label_434e1c;
        case 0x434e20u: goto label_434e20;
        case 0x434e24u: goto label_434e24;
        case 0x434e28u: goto label_434e28;
        case 0x434e2cu: goto label_434e2c;
        case 0x434e30u: goto label_434e30;
        case 0x434e34u: goto label_434e34;
        case 0x434e38u: goto label_434e38;
        case 0x434e3cu: goto label_434e3c;
        case 0x434e40u: goto label_434e40;
        case 0x434e44u: goto label_434e44;
        case 0x434e48u: goto label_434e48;
        case 0x434e4cu: goto label_434e4c;
        case 0x434e50u: goto label_434e50;
        case 0x434e54u: goto label_434e54;
        case 0x434e58u: goto label_434e58;
        case 0x434e5cu: goto label_434e5c;
        case 0x434e60u: goto label_434e60;
        case 0x434e64u: goto label_434e64;
        case 0x434e68u: goto label_434e68;
        case 0x434e6cu: goto label_434e6c;
        case 0x434e70u: goto label_434e70;
        case 0x434e74u: goto label_434e74;
        case 0x434e78u: goto label_434e78;
        case 0x434e7cu: goto label_434e7c;
        case 0x434e80u: goto label_434e80;
        case 0x434e84u: goto label_434e84;
        case 0x434e88u: goto label_434e88;
        case 0x434e8cu: goto label_434e8c;
        case 0x434e90u: goto label_434e90;
        case 0x434e94u: goto label_434e94;
        case 0x434e98u: goto label_434e98;
        case 0x434e9cu: goto label_434e9c;
        case 0x434ea0u: goto label_434ea0;
        case 0x434ea4u: goto label_434ea4;
        case 0x434ea8u: goto label_434ea8;
        case 0x434eacu: goto label_434eac;
        case 0x434eb0u: goto label_434eb0;
        case 0x434eb4u: goto label_434eb4;
        case 0x434eb8u: goto label_434eb8;
        case 0x434ebcu: goto label_434ebc;
        case 0x434ec0u: goto label_434ec0;
        case 0x434ec4u: goto label_434ec4;
        case 0x434ec8u: goto label_434ec8;
        case 0x434eccu: goto label_434ecc;
        case 0x434ed0u: goto label_434ed0;
        case 0x434ed4u: goto label_434ed4;
        case 0x434ed8u: goto label_434ed8;
        case 0x434edcu: goto label_434edc;
        case 0x434ee0u: goto label_434ee0;
        case 0x434ee4u: goto label_434ee4;
        case 0x434ee8u: goto label_434ee8;
        case 0x434eecu: goto label_434eec;
        case 0x434ef0u: goto label_434ef0;
        case 0x434ef4u: goto label_434ef4;
        case 0x434ef8u: goto label_434ef8;
        case 0x434efcu: goto label_434efc;
        case 0x434f00u: goto label_434f00;
        case 0x434f04u: goto label_434f04;
        case 0x434f08u: goto label_434f08;
        case 0x434f0cu: goto label_434f0c;
        case 0x434f10u: goto label_434f10;
        case 0x434f14u: goto label_434f14;
        case 0x434f18u: goto label_434f18;
        case 0x434f1cu: goto label_434f1c;
        case 0x434f20u: goto label_434f20;
        case 0x434f24u: goto label_434f24;
        case 0x434f28u: goto label_434f28;
        case 0x434f2cu: goto label_434f2c;
        case 0x434f30u: goto label_434f30;
        case 0x434f34u: goto label_434f34;
        case 0x434f38u: goto label_434f38;
        case 0x434f3cu: goto label_434f3c;
        case 0x434f40u: goto label_434f40;
        case 0x434f44u: goto label_434f44;
        case 0x434f48u: goto label_434f48;
        case 0x434f4cu: goto label_434f4c;
        case 0x434f50u: goto label_434f50;
        case 0x434f54u: goto label_434f54;
        case 0x434f58u: goto label_434f58;
        case 0x434f5cu: goto label_434f5c;
        case 0x434f60u: goto label_434f60;
        case 0x434f64u: goto label_434f64;
        case 0x434f68u: goto label_434f68;
        case 0x434f6cu: goto label_434f6c;
        case 0x434f70u: goto label_434f70;
        case 0x434f74u: goto label_434f74;
        case 0x434f78u: goto label_434f78;
        case 0x434f7cu: goto label_434f7c;
        case 0x434f80u: goto label_434f80;
        case 0x434f84u: goto label_434f84;
        case 0x434f88u: goto label_434f88;
        case 0x434f8cu: goto label_434f8c;
        case 0x434f90u: goto label_434f90;
        case 0x434f94u: goto label_434f94;
        case 0x434f98u: goto label_434f98;
        case 0x434f9cu: goto label_434f9c;
        case 0x434fa0u: goto label_434fa0;
        case 0x434fa4u: goto label_434fa4;
        case 0x434fa8u: goto label_434fa8;
        case 0x434facu: goto label_434fac;
        case 0x434fb0u: goto label_434fb0;
        case 0x434fb4u: goto label_434fb4;
        case 0x434fb8u: goto label_434fb8;
        case 0x434fbcu: goto label_434fbc;
        case 0x434fc0u: goto label_434fc0;
        case 0x434fc4u: goto label_434fc4;
        case 0x434fc8u: goto label_434fc8;
        case 0x434fccu: goto label_434fcc;
        case 0x434fd0u: goto label_434fd0;
        case 0x434fd4u: goto label_434fd4;
        case 0x434fd8u: goto label_434fd8;
        case 0x434fdcu: goto label_434fdc;
        case 0x434fe0u: goto label_434fe0;
        case 0x434fe4u: goto label_434fe4;
        case 0x434fe8u: goto label_434fe8;
        case 0x434fecu: goto label_434fec;
        case 0x434ff0u: goto label_434ff0;
        case 0x434ff4u: goto label_434ff4;
        case 0x434ff8u: goto label_434ff8;
        case 0x434ffcu: goto label_434ffc;
        case 0x435000u: goto label_435000;
        case 0x435004u: goto label_435004;
        case 0x435008u: goto label_435008;
        case 0x43500cu: goto label_43500c;
        case 0x435010u: goto label_435010;
        case 0x435014u: goto label_435014;
        case 0x435018u: goto label_435018;
        case 0x43501cu: goto label_43501c;
        case 0x435020u: goto label_435020;
        case 0x435024u: goto label_435024;
        case 0x435028u: goto label_435028;
        case 0x43502cu: goto label_43502c;
        case 0x435030u: goto label_435030;
        case 0x435034u: goto label_435034;
        case 0x435038u: goto label_435038;
        case 0x43503cu: goto label_43503c;
        case 0x435040u: goto label_435040;
        case 0x435044u: goto label_435044;
        case 0x435048u: goto label_435048;
        case 0x43504cu: goto label_43504c;
        case 0x435050u: goto label_435050;
        case 0x435054u: goto label_435054;
        case 0x435058u: goto label_435058;
        case 0x43505cu: goto label_43505c;
        case 0x435060u: goto label_435060;
        case 0x435064u: goto label_435064;
        case 0x435068u: goto label_435068;
        case 0x43506cu: goto label_43506c;
        case 0x435070u: goto label_435070;
        case 0x435074u: goto label_435074;
        case 0x435078u: goto label_435078;
        case 0x43507cu: goto label_43507c;
        case 0x435080u: goto label_435080;
        case 0x435084u: goto label_435084;
        case 0x435088u: goto label_435088;
        case 0x43508cu: goto label_43508c;
        case 0x435090u: goto label_435090;
        case 0x435094u: goto label_435094;
        case 0x435098u: goto label_435098;
        case 0x43509cu: goto label_43509c;
        case 0x4350a0u: goto label_4350a0;
        case 0x4350a4u: goto label_4350a4;
        case 0x4350a8u: goto label_4350a8;
        case 0x4350acu: goto label_4350ac;
        case 0x4350b0u: goto label_4350b0;
        case 0x4350b4u: goto label_4350b4;
        case 0x4350b8u: goto label_4350b8;
        case 0x4350bcu: goto label_4350bc;
        case 0x4350c0u: goto label_4350c0;
        case 0x4350c4u: goto label_4350c4;
        case 0x4350c8u: goto label_4350c8;
        case 0x4350ccu: goto label_4350cc;
        case 0x4350d0u: goto label_4350d0;
        case 0x4350d4u: goto label_4350d4;
        case 0x4350d8u: goto label_4350d8;
        case 0x4350dcu: goto label_4350dc;
        case 0x4350e0u: goto label_4350e0;
        case 0x4350e4u: goto label_4350e4;
        case 0x4350e8u: goto label_4350e8;
        case 0x4350ecu: goto label_4350ec;
        case 0x4350f0u: goto label_4350f0;
        case 0x4350f4u: goto label_4350f4;
        case 0x4350f8u: goto label_4350f8;
        case 0x4350fcu: goto label_4350fc;
        case 0x435100u: goto label_435100;
        case 0x435104u: goto label_435104;
        case 0x435108u: goto label_435108;
        case 0x43510cu: goto label_43510c;
        case 0x435110u: goto label_435110;
        case 0x435114u: goto label_435114;
        case 0x435118u: goto label_435118;
        case 0x43511cu: goto label_43511c;
        case 0x435120u: goto label_435120;
        case 0x435124u: goto label_435124;
        case 0x435128u: goto label_435128;
        case 0x43512cu: goto label_43512c;
        case 0x435130u: goto label_435130;
        case 0x435134u: goto label_435134;
        case 0x435138u: goto label_435138;
        case 0x43513cu: goto label_43513c;
        case 0x435140u: goto label_435140;
        case 0x435144u: goto label_435144;
        case 0x435148u: goto label_435148;
        case 0x43514cu: goto label_43514c;
        case 0x435150u: goto label_435150;
        case 0x435154u: goto label_435154;
        case 0x435158u: goto label_435158;
        case 0x43515cu: goto label_43515c;
        case 0x435160u: goto label_435160;
        case 0x435164u: goto label_435164;
        case 0x435168u: goto label_435168;
        case 0x43516cu: goto label_43516c;
        case 0x435170u: goto label_435170;
        case 0x435174u: goto label_435174;
        case 0x435178u: goto label_435178;
        case 0x43517cu: goto label_43517c;
        case 0x435180u: goto label_435180;
        case 0x435184u: goto label_435184;
        case 0x435188u: goto label_435188;
        case 0x43518cu: goto label_43518c;
        case 0x435190u: goto label_435190;
        case 0x435194u: goto label_435194;
        case 0x435198u: goto label_435198;
        case 0x43519cu: goto label_43519c;
        case 0x4351a0u: goto label_4351a0;
        case 0x4351a4u: goto label_4351a4;
        case 0x4351a8u: goto label_4351a8;
        case 0x4351acu: goto label_4351ac;
        case 0x4351b0u: goto label_4351b0;
        case 0x4351b4u: goto label_4351b4;
        case 0x4351b8u: goto label_4351b8;
        case 0x4351bcu: goto label_4351bc;
        case 0x4351c0u: goto label_4351c0;
        case 0x4351c4u: goto label_4351c4;
        case 0x4351c8u: goto label_4351c8;
        case 0x4351ccu: goto label_4351cc;
        case 0x4351d0u: goto label_4351d0;
        case 0x4351d4u: goto label_4351d4;
        case 0x4351d8u: goto label_4351d8;
        case 0x4351dcu: goto label_4351dc;
        case 0x4351e0u: goto label_4351e0;
        case 0x4351e4u: goto label_4351e4;
        case 0x4351e8u: goto label_4351e8;
        case 0x4351ecu: goto label_4351ec;
        case 0x4351f0u: goto label_4351f0;
        case 0x4351f4u: goto label_4351f4;
        case 0x4351f8u: goto label_4351f8;
        case 0x4351fcu: goto label_4351fc;
        case 0x435200u: goto label_435200;
        case 0x435204u: goto label_435204;
        case 0x435208u: goto label_435208;
        case 0x43520cu: goto label_43520c;
        case 0x435210u: goto label_435210;
        case 0x435214u: goto label_435214;
        case 0x435218u: goto label_435218;
        case 0x43521cu: goto label_43521c;
        case 0x435220u: goto label_435220;
        case 0x435224u: goto label_435224;
        case 0x435228u: goto label_435228;
        case 0x43522cu: goto label_43522c;
        case 0x435230u: goto label_435230;
        case 0x435234u: goto label_435234;
        case 0x435238u: goto label_435238;
        case 0x43523cu: goto label_43523c;
        case 0x435240u: goto label_435240;
        case 0x435244u: goto label_435244;
        case 0x435248u: goto label_435248;
        case 0x43524cu: goto label_43524c;
        case 0x435250u: goto label_435250;
        case 0x435254u: goto label_435254;
        case 0x435258u: goto label_435258;
        case 0x43525cu: goto label_43525c;
        case 0x435260u: goto label_435260;
        case 0x435264u: goto label_435264;
        case 0x435268u: goto label_435268;
        case 0x43526cu: goto label_43526c;
        case 0x435270u: goto label_435270;
        case 0x435274u: goto label_435274;
        case 0x435278u: goto label_435278;
        case 0x43527cu: goto label_43527c;
        case 0x435280u: goto label_435280;
        case 0x435284u: goto label_435284;
        case 0x435288u: goto label_435288;
        case 0x43528cu: goto label_43528c;
        case 0x435290u: goto label_435290;
        case 0x435294u: goto label_435294;
        case 0x435298u: goto label_435298;
        case 0x43529cu: goto label_43529c;
        case 0x4352a0u: goto label_4352a0;
        case 0x4352a4u: goto label_4352a4;
        case 0x4352a8u: goto label_4352a8;
        case 0x4352acu: goto label_4352ac;
        case 0x4352b0u: goto label_4352b0;
        case 0x4352b4u: goto label_4352b4;
        case 0x4352b8u: goto label_4352b8;
        case 0x4352bcu: goto label_4352bc;
        case 0x4352c0u: goto label_4352c0;
        case 0x4352c4u: goto label_4352c4;
        case 0x4352c8u: goto label_4352c8;
        case 0x4352ccu: goto label_4352cc;
        case 0x4352d0u: goto label_4352d0;
        case 0x4352d4u: goto label_4352d4;
        case 0x4352d8u: goto label_4352d8;
        case 0x4352dcu: goto label_4352dc;
        case 0x4352e0u: goto label_4352e0;
        case 0x4352e4u: goto label_4352e4;
        case 0x4352e8u: goto label_4352e8;
        case 0x4352ecu: goto label_4352ec;
        case 0x4352f0u: goto label_4352f0;
        case 0x4352f4u: goto label_4352f4;
        case 0x4352f8u: goto label_4352f8;
        case 0x4352fcu: goto label_4352fc;
        case 0x435300u: goto label_435300;
        case 0x435304u: goto label_435304;
        case 0x435308u: goto label_435308;
        case 0x43530cu: goto label_43530c;
        case 0x435310u: goto label_435310;
        case 0x435314u: goto label_435314;
        case 0x435318u: goto label_435318;
        case 0x43531cu: goto label_43531c;
        case 0x435320u: goto label_435320;
        case 0x435324u: goto label_435324;
        case 0x435328u: goto label_435328;
        case 0x43532cu: goto label_43532c;
        case 0x435330u: goto label_435330;
        case 0x435334u: goto label_435334;
        case 0x435338u: goto label_435338;
        case 0x43533cu: goto label_43533c;
        case 0x435340u: goto label_435340;
        case 0x435344u: goto label_435344;
        case 0x435348u: goto label_435348;
        case 0x43534cu: goto label_43534c;
        case 0x435350u: goto label_435350;
        case 0x435354u: goto label_435354;
        case 0x435358u: goto label_435358;
        case 0x43535cu: goto label_43535c;
        case 0x435360u: goto label_435360;
        case 0x435364u: goto label_435364;
        case 0x435368u: goto label_435368;
        case 0x43536cu: goto label_43536c;
        case 0x435370u: goto label_435370;
        case 0x435374u: goto label_435374;
        case 0x435378u: goto label_435378;
        case 0x43537cu: goto label_43537c;
        case 0x435380u: goto label_435380;
        case 0x435384u: goto label_435384;
        case 0x435388u: goto label_435388;
        case 0x43538cu: goto label_43538c;
        case 0x435390u: goto label_435390;
        case 0x435394u: goto label_435394;
        case 0x435398u: goto label_435398;
        case 0x43539cu: goto label_43539c;
        case 0x4353a0u: goto label_4353a0;
        case 0x4353a4u: goto label_4353a4;
        case 0x4353a8u: goto label_4353a8;
        case 0x4353acu: goto label_4353ac;
        case 0x4353b0u: goto label_4353b0;
        case 0x4353b4u: goto label_4353b4;
        case 0x4353b8u: goto label_4353b8;
        case 0x4353bcu: goto label_4353bc;
        case 0x4353c0u: goto label_4353c0;
        case 0x4353c4u: goto label_4353c4;
        case 0x4353c8u: goto label_4353c8;
        case 0x4353ccu: goto label_4353cc;
        case 0x4353d0u: goto label_4353d0;
        case 0x4353d4u: goto label_4353d4;
        case 0x4353d8u: goto label_4353d8;
        case 0x4353dcu: goto label_4353dc;
        case 0x4353e0u: goto label_4353e0;
        case 0x4353e4u: goto label_4353e4;
        case 0x4353e8u: goto label_4353e8;
        case 0x4353ecu: goto label_4353ec;
        case 0x4353f0u: goto label_4353f0;
        case 0x4353f4u: goto label_4353f4;
        case 0x4353f8u: goto label_4353f8;
        case 0x4353fcu: goto label_4353fc;
        default: break;
    }

    ctx->pc = 0x434410u;

label_434410:
    // 0x434410: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x434410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_434414:
    // 0x434414: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x434414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_434418:
    // 0x434418: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x434418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_43441c:
    // 0x43441c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x43441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_434420:
    // 0x434420: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x434420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_434424:
    // 0x434424: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x434424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_434428:
    // 0x434428: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x434428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_43442c:
    // 0x43442c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x43442cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_434430:
    // 0x434430: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x434430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_434434:
    // 0x434434: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x434434u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_434438:
    // 0x434438: 0xac8200f0  sw          $v0, 0xF0($a0)
    ctx->pc = 0x434438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
label_43443c:
    // 0x43443c: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x43443cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_434440:
    // 0x434440: 0xc08914c  jal         func_224530
label_434444:
    if (ctx->pc == 0x434444u) {
        ctx->pc = 0x434444u;
            // 0x434444: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434448u;
        goto label_434448;
    }
    ctx->pc = 0x434440u;
    SET_GPR_U32(ctx, 31, 0x434448u);
    ctx->pc = 0x434444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434440u;
            // 0x434444: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434448u; }
        if (ctx->pc != 0x434448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434448u; }
        if (ctx->pc != 0x434448u) { return; }
    }
    ctx->pc = 0x434448u;
label_434448:
    // 0x434448: 0x8e490050  lw          $t1, 0x50($s2)
    ctx->pc = 0x434448u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_43444c:
    // 0x43444c: 0x3c02fffa  lui         $v0, 0xFFFA
    ctx->pc = 0x43444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65530 << 16));
label_434450:
    // 0x434450: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x434450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_434454:
    // 0x434454: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x434454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_434458:
    // 0x434458: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x434458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_43445c:
    // 0x43445c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43445cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_434460:
    // 0x434460: 0x8d280214  lw          $t0, 0x214($t1)
    ctx->pc = 0x434460u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 532)));
label_434464:
    // 0x434464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x434464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_434468:
    // 0x434468: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x434468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
label_43446c:
    // 0x43446c: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x43446cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_434470:
    // 0x434470: 0xad250214  sw          $a1, 0x214($t1)
    ctx->pc = 0x434470u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 532), GPR_U32(ctx, 5));
label_434474:
    // 0x434474: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x434474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_434478:
    // 0x434478: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x434478u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_43447c:
    // 0x43447c: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x43447cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_434480:
    // 0x434480: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x434480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_434484:
    // 0x434484: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x434484u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_434488:
    // 0x434488: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x434488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43448c:
    // 0x43448c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43448cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_434490:
    // 0x434490: 0xc08bff0  jal         func_22FFC0
label_434494:
    if (ctx->pc == 0x434494u) {
        ctx->pc = 0x434494u;
            // 0x434494: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434498u;
        goto label_434498;
    }
    ctx->pc = 0x434490u;
    SET_GPR_U32(ctx, 31, 0x434498u);
    ctx->pc = 0x434494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434490u;
            // 0x434494: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434498u; }
        if (ctx->pc != 0x434498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434498u; }
        if (ctx->pc != 0x434498u) { return; }
    }
    ctx->pc = 0x434498u;
label_434498:
    // 0x434498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x434498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43449c:
    // 0x43449c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4344a0:
    // 0x4344a0: 0xae430084  sw          $v1, 0x84($s2)
    ctx->pc = 0x4344a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 3));
label_4344a4:
    // 0x4344a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4344a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4344a8:
    // 0x4344a8: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x4344a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4344ac:
    // 0x4344ac: 0x3c03c316  lui         $v1, 0xC316
    ctx->pc = 0x4344acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49942 << 16));
label_4344b0:
    // 0x4344b0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4344b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4344b4:
    // 0x4344b4: 0xe6400074  swc1        $f0, 0x74($s2)
    ctx->pc = 0x4344b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
label_4344b8:
    // 0x4344b8: 0x8c426ed8  lw          $v0, 0x6ED8($v0)
    ctx->pc = 0x4344b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28376)));
label_4344bc:
    // 0x4344bc: 0x8e430114  lw          $v1, 0x114($s2)
    ctx->pc = 0x4344bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_4344c0:
    // 0x4344c0: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4344c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4344c4:
    // 0x4344c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4344c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4344c8:
    // 0x4344c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4344c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4344cc:
    // 0x4344cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4344ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4344d0:
    // 0x4344d0: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x4344d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4344d4:
    // 0x4344d4: 0xc04cc7c  jal         func_1331F0
label_4344d8:
    if (ctx->pc == 0x4344D8u) {
        ctx->pc = 0x4344D8u;
            // 0x4344d8: 0x244600e0  addiu       $a2, $v0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
        ctx->pc = 0x4344DCu;
        goto label_4344dc;
    }
    ctx->pc = 0x4344D4u;
    SET_GPR_U32(ctx, 31, 0x4344DCu);
    ctx->pc = 0x4344D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4344D4u;
            // 0x4344d8: 0x244600e0  addiu       $a2, $v0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4344DCu; }
        if (ctx->pc != 0x4344DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4344DCu; }
        if (ctx->pc != 0x4344DCu) { return; }
    }
    ctx->pc = 0x4344DCu;
label_4344dc:
    // 0x4344dc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4344dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4344e0:
    // 0x4344e0: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x4344e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4344e4:
    // 0x4344e4: 0xc04cc90  jal         func_133240
label_4344e8:
    if (ctx->pc == 0x4344E8u) {
        ctx->pc = 0x4344E8u;
            // 0x4344e8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4344ECu;
        goto label_4344ec;
    }
    ctx->pc = 0x4344E4u;
    SET_GPR_U32(ctx, 31, 0x4344ECu);
    ctx->pc = 0x4344E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4344E4u;
            // 0x4344e8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4344ECu; }
        if (ctx->pc != 0x4344ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4344ECu; }
        if (ctx->pc != 0x4344ECu) { return; }
    }
    ctx->pc = 0x4344ECu;
label_4344ec:
    // 0x4344ec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4344ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4344f0:
    // 0x4344f0: 0xc04cc44  jal         func_133110
label_4344f4:
    if (ctx->pc == 0x4344F4u) {
        ctx->pc = 0x4344F4u;
            // 0x4344f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4344F8u;
        goto label_4344f8;
    }
    ctx->pc = 0x4344F0u;
    SET_GPR_U32(ctx, 31, 0x4344F8u);
    ctx->pc = 0x4344F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4344F0u;
            // 0x4344f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4344F8u; }
        if (ctx->pc != 0x4344F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4344F8u; }
        if (ctx->pc != 0x4344F8u) { return; }
    }
    ctx->pc = 0x4344F8u;
label_4344f8:
    // 0x4344f8: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x4344f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4344fc:
    // 0x4344fc: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x4344fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_434500:
    // 0x434500: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x434500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_434504:
    // 0x434504: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x434504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_434508:
    // 0x434508: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x434508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43450c:
    // 0x43450c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x43450cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_434510:
    // 0x434510: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x434510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_434514:
    // 0x434514: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x434514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_434518:
    // 0x434518: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x434518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_43451c:
    // 0x43451c: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x43451cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_434520:
    // 0x434520: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x434520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_434524:
    // 0x434524: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x434524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_434528:
    // 0x434528: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x434528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43452c:
    // 0x43452c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x43452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_434530:
    // 0x434530: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x434530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_434534:
    // 0x434534: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x434534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_434538:
    // 0x434538: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x434538u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_43453c:
    // 0x43453c: 0xc0892b0  jal         func_224AC0
label_434540:
    if (ctx->pc == 0x434540u) {
        ctx->pc = 0x434540u;
            // 0x434540: 0xe7a3007c  swc1        $f3, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->pc = 0x434544u;
        goto label_434544;
    }
    ctx->pc = 0x43453Cu;
    SET_GPR_U32(ctx, 31, 0x434544u);
    ctx->pc = 0x434540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43453Cu;
            // 0x434540: 0xe7a3007c  swc1        $f3, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434544u; }
        if (ctx->pc != 0x434544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434544u; }
        if (ctx->pc != 0x434544u) { return; }
    }
    ctx->pc = 0x434544u;
label_434544:
    // 0x434544: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x434544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_434548:
    // 0x434548: 0x8e430114  lw          $v1, 0x114($s2)
    ctx->pc = 0x434548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_43454c:
    // 0x43454c: 0x8c456ed8  lw          $a1, 0x6ED8($v0)
    ctx->pc = 0x43454cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28376)));
label_434550:
    // 0x434550: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x434550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_434554:
    // 0x434554: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x434554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_434558:
    // 0x434558: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x434558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_43455c:
    // 0x43455c: 0x8ca20074  lw          $v0, 0x74($a1)
    ctx->pc = 0x43455cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
label_434560:
    // 0x434560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x434560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_434564:
    // 0x434564: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x434564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_434568:
    // 0x434568: 0xc074740  jal         func_1D1D00
label_43456c:
    if (ctx->pc == 0x43456Cu) {
        ctx->pc = 0x43456Cu;
            // 0x43456c: 0xc45400f4  lwc1        $f20, 0xF4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x434570u;
        goto label_434570;
    }
    ctx->pc = 0x434568u;
    SET_GPR_U32(ctx, 31, 0x434570u);
    ctx->pc = 0x43456Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434568u;
            // 0x43456c: 0xc45400f4  lwc1        $f20, 0xF4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434570u; }
        if (ctx->pc != 0x434570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434570u; }
        if (ctx->pc != 0x434570u) { return; }
    }
    ctx->pc = 0x434570u;
label_434570:
    // 0x434570: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x434570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_434574:
    // 0x434574: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x434574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_434578:
    // 0x434578: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x434578u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_43457c:
    // 0x43457c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x43457cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_434580:
    // 0x434580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x434580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_434584:
    // 0x434584: 0x2484cd98  addiu       $a0, $a0, -0x3268
    ctx->pc = 0x434584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954392));
label_434588:
    // 0x434588: 0x1810  mfhi        $v1
    ctx->pc = 0x434588u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_43458c:
    // 0x43458c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x43458cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_434590:
    // 0x434590: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x434590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_434594:
    // 0x434594: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x434594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_434598:
    // 0x434598: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_43459c:
    if (ctx->pc == 0x43459Cu) {
        ctx->pc = 0x4345A0u;
        goto label_4345a0;
    }
    ctx->pc = 0x434598u;
    {
        const bool branch_taken_0x434598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x434598) {
            ctx->pc = 0x4345B0u;
            goto label_4345b0;
        }
    }
    ctx->pc = 0x4345A0u;
label_4345a0:
    // 0x4345a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4345a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4345a4:
    // 0x4345a4: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x4345a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4345a8:
    // 0x4345a8: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_4345ac:
    if (ctx->pc == 0x4345ACu) {
        ctx->pc = 0x4345ACu;
            // 0x4345ac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4345B0u;
        goto label_4345b0;
    }
    ctx->pc = 0x4345A8u;
    {
        const bool branch_taken_0x4345a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4345ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4345A8u;
            // 0x4345ac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4345a8) {
            ctx->pc = 0x43458Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43458c;
        }
    }
    ctx->pc = 0x4345B0u;
label_4345b0:
    // 0x4345b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4345b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4345b4:
    // 0x4345b4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x4345b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4345b8:
    // 0x4345b8: 0xc04cc70  jal         func_1331C0
label_4345bc:
    if (ctx->pc == 0x4345BCu) {
        ctx->pc = 0x4345BCu;
            // 0x4345bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4345C0u;
        goto label_4345c0;
    }
    ctx->pc = 0x4345B8u;
    SET_GPR_U32(ctx, 31, 0x4345C0u);
    ctx->pc = 0x4345BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4345B8u;
            // 0x4345bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4345C0u; }
        if (ctx->pc != 0x4345C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4345C0u; }
        if (ctx->pc != 0x4345C0u) { return; }
    }
    ctx->pc = 0x4345C0u;
label_4345c0:
    // 0x4345c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4345c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4345c4:
    // 0x4345c4: 0x8e500050  lw          $s0, 0x50($s2)
    ctx->pc = 0x4345c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4345c8:
    // 0x4345c8: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x4345c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4345cc:
    // 0x4345cc: 0xc7a600b0  lwc1        $f6, 0xB0($sp)
    ctx->pc = 0x4345ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4345d0:
    // 0x4345d0: 0xc7a500b4  lwc1        $f5, 0xB4($sp)
    ctx->pc = 0x4345d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4345d4:
    // 0x4345d4: 0xc7a400b8  lwc1        $f4, 0xB8($sp)
    ctx->pc = 0x4345d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4345d8:
    // 0x4345d8: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x4345d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_4345dc:
    // 0x4345dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4345dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4345e0:
    // 0x4345e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4345e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4345e4:
    // 0x4345e4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4345e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4345e8:
    // 0x4345e8: 0xe7a60060  swc1        $f6, 0x60($sp)
    ctx->pc = 0x4345e8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4345ec:
    // 0x4345ec: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x4345ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4345f0:
    // 0x4345f0: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x4345f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_4345f4:
    // 0x4345f4: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x4345f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4345f8:
    // 0x4345f8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4345f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4345fc:
    // 0x4345fc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4345fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_434600:
    // 0x434600: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x434600u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_434604:
    // 0x434604: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x434604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_434608:
    // 0x434608: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x434608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_43460c:
    // 0x43460c: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x43460cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_434610:
    // 0x434610: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x434610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_434614:
    // 0x434614: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x434614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_434618:
    // 0x434618: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x434618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_43461c:
    // 0x43461c: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x43461cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_434620:
    // 0x434620: 0xc088b74  jal         func_222DD0
label_434624:
    if (ctx->pc == 0x434624u) {
        ctx->pc = 0x434624u;
            // 0x434624: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x434628u;
        goto label_434628;
    }
    ctx->pc = 0x434620u;
    SET_GPR_U32(ctx, 31, 0x434628u);
    ctx->pc = 0x434624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434620u;
            // 0x434624: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434628u; }
        if (ctx->pc != 0x434628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434628u; }
        if (ctx->pc != 0x434628u) { return; }
    }
    ctx->pc = 0x434628u;
label_434628:
    // 0x434628: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x434628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_43462c:
    // 0x43462c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x43462cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_434630:
    // 0x434630: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x434630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_434634:
    // 0x434634: 0x320f809  jalr        $t9
label_434638:
    if (ctx->pc == 0x434638u) {
        ctx->pc = 0x434638u;
            // 0x434638: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x43463Cu;
        goto label_43463c;
    }
    ctx->pc = 0x434634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43463Cu);
        ctx->pc = 0x434638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x434634u;
            // 0x434638: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43463Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43463Cu; }
            if (ctx->pc != 0x43463Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43463Cu;
label_43463c:
    // 0x43463c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43463cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_434640:
    // 0x434640: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x434640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_434644:
    // 0x434644: 0x2442cda0  addiu       $v0, $v0, -0x3260
    ctx->pc = 0x434644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954400));
label_434648:
    // 0x434648: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x434648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_43464c:
    // 0x43464c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x43464cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_434650:
    // 0x434650: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x434650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_434654:
    // 0x434654: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x434654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_434658:
    // 0x434658: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x434658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_43465c:
    // 0x43465c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x43465cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_434660:
    // 0x434660: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x434660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_434664:
    // 0x434664: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x434664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_434668:
    // 0x434668: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x434668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_43466c:
    // 0x43466c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43466cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434670:
    // 0x434670: 0x0  nop
    ctx->pc = 0x434670u;
    // NOP
label_434674:
    // 0x434674: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x434674u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_434678:
    // 0x434678: 0x0  nop
    ctx->pc = 0x434678u;
    // NOP
label_43467c:
    // 0x43467c: 0x0  nop
    ctx->pc = 0x43467cu;
    // NOP
label_434680:
    // 0x434680: 0xc04cc70  jal         func_1331C0
label_434684:
    if (ctx->pc == 0x434684u) {
        ctx->pc = 0x434684u;
            // 0x434684: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x434688u;
        goto label_434688;
    }
    ctx->pc = 0x434680u;
    SET_GPR_U32(ctx, 31, 0x434688u);
    ctx->pc = 0x434684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434680u;
            // 0x434684: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434688u; }
        if (ctx->pc != 0x434688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434688u; }
        if (ctx->pc != 0x434688u) { return; }
    }
    ctx->pc = 0x434688u;
label_434688:
    // 0x434688: 0x8e510050  lw          $s1, 0x50($s2)
    ctx->pc = 0x434688u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_43468c:
    // 0x43468c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x43468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_434690:
    // 0x434690: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x434690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_434694:
    // 0x434694: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x434694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_434698:
    // 0x434698: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x434698u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43469c:
    // 0x43469c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x43469cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4346a0:
    // 0x4346a0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4346a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4346a4:
    // 0x4346a4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x4346a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4346a8:
    // 0x4346a8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4346a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4346ac:
    // 0x4346ac: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x4346acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4346b0:
    // 0x4346b0: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x4346b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4346b4:
    // 0x4346b4: 0xc089638  jal         func_2258E0
label_4346b8:
    if (ctx->pc == 0x4346B8u) {
        ctx->pc = 0x4346B8u;
            // 0x4346b8: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x4346BCu;
        goto label_4346bc;
    }
    ctx->pc = 0x4346B4u;
    SET_GPR_U32(ctx, 31, 0x4346BCu);
    ctx->pc = 0x4346B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4346B4u;
            // 0x4346b8: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4346BCu; }
        if (ctx->pc != 0x4346BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4346BCu; }
        if (ctx->pc != 0x4346BCu) { return; }
    }
    ctx->pc = 0x4346BCu;
label_4346bc:
    // 0x4346bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4346bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4346c0:
    // 0x4346c0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4346c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4346c4:
    // 0x4346c4: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x4346c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4346c8:
    // 0x4346c8: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x4346c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4346cc:
    // 0x4346cc: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x4346ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4346d0:
    // 0x4346d0: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x4346d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4346d4:
    // 0x4346d4: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x4346d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_4346d8:
    // 0x4346d8: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x4346d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4346dc:
    // 0x4346dc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x4346dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4346e0:
    // 0x4346e0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x4346e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_4346e4:
    // 0x4346e4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x4346e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_4346e8:
    // 0x4346e8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4346e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_4346ec:
    // 0x4346ec: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4346ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_4346f0:
    // 0x4346f0: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x4346f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4346f4:
    // 0x4346f4: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x4346f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4346f8:
    // 0x4346f8: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x4346f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4346fc:
    // 0x4346fc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x4346fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_434700:
    // 0x434700: 0xc6140018  lwc1        $f20, 0x18($s0)
    ctx->pc = 0x434700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_434704:
    // 0x434704: 0xc088b74  jal         func_222DD0
label_434708:
    if (ctx->pc == 0x434708u) {
        ctx->pc = 0x434708u;
            // 0x434708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43470Cu;
        goto label_43470c;
    }
    ctx->pc = 0x434704u;
    SET_GPR_U32(ctx, 31, 0x43470Cu);
    ctx->pc = 0x434708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434704u;
            // 0x434708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43470Cu; }
        if (ctx->pc != 0x43470Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43470Cu; }
        if (ctx->pc != 0x43470Cu) { return; }
    }
    ctx->pc = 0x43470Cu;
label_43470c:
    // 0x43470c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x43470cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_434710:
    // 0x434710: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x434710u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_434714:
    // 0x434714: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x434714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_434718:
    // 0x434718: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x434718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_43471c:
    // 0x43471c: 0x320f809  jalr        $t9
label_434720:
    if (ctx->pc == 0x434720u) {
        ctx->pc = 0x434720u;
            // 0x434720: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x434724u;
        goto label_434724;
    }
    ctx->pc = 0x43471Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x434724u);
        ctx->pc = 0x434720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43471Cu;
            // 0x434720: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x434724u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x434724u; }
            if (ctx->pc != 0x434724u) { return; }
        }
        }
    }
    ctx->pc = 0x434724u;
label_434724:
    // 0x434724: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x434724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_434728:
    // 0x434728: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x434728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_43472c:
    // 0x43472c: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x43472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_434730:
    // 0x434730: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x434730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_434734:
    // 0x434734: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x434734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_434738:
    // 0x434738: 0xc04cc44  jal         func_133110
label_43473c:
    if (ctx->pc == 0x43473Cu) {
        ctx->pc = 0x43473Cu;
            // 0x43473c: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->pc = 0x434740u;
        goto label_434740;
    }
    ctx->pc = 0x434738u;
    SET_GPR_U32(ctx, 31, 0x434740u);
    ctx->pc = 0x43473Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434738u;
            // 0x43473c: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434740u; }
        if (ctx->pc != 0x434740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434740u; }
        if (ctx->pc != 0x434740u) { return; }
    }
    ctx->pc = 0x434740u;
label_434740:
    // 0x434740: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x434740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_434744:
    // 0x434744: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x434744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_434748:
    // 0x434748: 0xc04cbf0  jal         func_132FC0
label_43474c:
    if (ctx->pc == 0x43474Cu) {
        ctx->pc = 0x43474Cu;
            // 0x43474c: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x434750u;
        goto label_434750;
    }
    ctx->pc = 0x434748u;
    SET_GPR_U32(ctx, 31, 0x434750u);
    ctx->pc = 0x43474Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434748u;
            // 0x43474c: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434750u; }
        if (ctx->pc != 0x434750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434750u; }
        if (ctx->pc != 0x434750u) { return; }
    }
    ctx->pc = 0x434750u;
label_434750:
    // 0x434750: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x434750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_434754:
    // 0x434754: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x434754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_434758:
    // 0x434758: 0xc463ce50  lwc1        $f3, -0x31B0($v1)
    ctx->pc = 0x434758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_43475c:
    // 0x43475c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x43475cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_434760:
    // 0x434760: 0xc481ce58  lwc1        $f1, -0x31A8($a0)
    ctx->pc = 0x434760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294954584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_434764:
    // 0x434764: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x434764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
label_434768:
    // 0x434768: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x434768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_43476c:
    // 0x43476c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x43476cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_434770:
    // 0x434770: 0xc462ce54  lwc1        $f2, -0x31AC($v1)
    ctx->pc = 0x434770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_434774:
    // 0x434774: 0xe6440124  swc1        $f4, 0x124($s2)
    ctx->pc = 0x434774u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
label_434778:
    // 0x434778: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x434778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_43477c:
    // 0x43477c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x43477cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_434780:
    // 0x434780: 0xc460ce5c  lwc1        $f0, -0x31A4($v1)
    ctx->pc = 0x434780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_434784:
    // 0x434784: 0xe6440128  swc1        $f4, 0x128($s2)
    ctx->pc = 0x434784u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
label_434788:
    // 0x434788: 0xc7a400ac  lwc1        $f4, 0xAC($sp)
    ctx->pc = 0x434788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_43478c:
    // 0x43478c: 0xe644012c  swc1        $f4, 0x12C($s2)
    ctx->pc = 0x43478cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
label_434790:
    // 0x434790: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x434790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_434794:
    // 0x434794: 0xe6440130  swc1        $f4, 0x130($s2)
    ctx->pc = 0x434794u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
label_434798:
    // 0x434798: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x434798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_43479c:
    // 0x43479c: 0xe6440134  swc1        $f4, 0x134($s2)
    ctx->pc = 0x43479cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 308), bits); }
label_4347a0:
    // 0x4347a0: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x4347a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4347a4:
    // 0x4347a4: 0xe6440138  swc1        $f4, 0x138($s2)
    ctx->pc = 0x4347a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 312), bits); }
label_4347a8:
    // 0x4347a8: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x4347a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4347ac:
    // 0x4347ac: 0xe644013c  swc1        $f4, 0x13C($s2)
    ctx->pc = 0x4347acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 316), bits); }
label_4347b0:
    // 0x4347b0: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x4347b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4347b4:
    // 0x4347b4: 0xe6440140  swc1        $f4, 0x140($s2)
    ctx->pc = 0x4347b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 320), bits); }
label_4347b8:
    // 0x4347b8: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x4347b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4347bc:
    // 0x4347bc: 0xe6440144  swc1        $f4, 0x144($s2)
    ctx->pc = 0x4347bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 324), bits); }
label_4347c0:
    // 0x4347c0: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x4347c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4347c4:
    // 0x4347c4: 0xe6440148  swc1        $f4, 0x148($s2)
    ctx->pc = 0x4347c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 328), bits); }
label_4347c8:
    // 0x4347c8: 0xc7a400cc  lwc1        $f4, 0xCC($sp)
    ctx->pc = 0x4347c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4347cc:
    // 0x4347cc: 0xe644014c  swc1        $f4, 0x14C($s2)
    ctx->pc = 0x4347ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 332), bits); }
label_4347d0:
    // 0x4347d0: 0xe6430150  swc1        $f3, 0x150($s2)
    ctx->pc = 0x4347d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 336), bits); }
label_4347d4:
    // 0x4347d4: 0xe6420154  swc1        $f2, 0x154($s2)
    ctx->pc = 0x4347d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 340), bits); }
label_4347d8:
    // 0x4347d8: 0xe6410158  swc1        $f1, 0x158($s2)
    ctx->pc = 0x4347d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 344), bits); }
label_4347dc:
    // 0x4347dc: 0xe640015c  swc1        $f0, 0x15C($s2)
    ctx->pc = 0x4347dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 348), bits); }
label_4347e0:
    // 0x4347e0: 0xae40014c  sw          $zero, 0x14C($s2)
    ctx->pc = 0x4347e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 0));
label_4347e4:
    // 0x4347e4: 0xae40013c  sw          $zero, 0x13C($s2)
    ctx->pc = 0x4347e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 0));
label_4347e8:
    // 0x4347e8: 0xae40012c  sw          $zero, 0x12C($s2)
    ctx->pc = 0x4347e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 0));
label_4347ec:
    // 0x4347ec: 0x8e4301a0  lw          $v1, 0x1A0($s2)
    ctx->pc = 0x4347ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_4347f0:
    // 0x4347f0: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_4347f4:
    if (ctx->pc == 0x4347F4u) {
        ctx->pc = 0x4347F4u;
            // 0x4347f4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4347F8u;
        goto label_4347f8;
    }
    ctx->pc = 0x4347F0u;
    {
        const bool branch_taken_0x4347f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4347f0) {
            ctx->pc = 0x4347F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4347F0u;
            // 0x4347f4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x434820u;
            goto label_434820;
        }
    }
    ctx->pc = 0x4347F8u;
label_4347f8:
    // 0x4347f8: 0xc040180  jal         func_100600
label_4347fc:
    if (ctx->pc == 0x4347FCu) {
        ctx->pc = 0x4347FCu;
            // 0x4347fc: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x434800u;
        goto label_434800;
    }
    ctx->pc = 0x4347F8u;
    SET_GPR_U32(ctx, 31, 0x434800u);
    ctx->pc = 0x4347FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4347F8u;
            // 0x4347fc: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434800u; }
        if (ctx->pc != 0x434800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434800u; }
        if (ctx->pc != 0x434800u) { return; }
    }
    ctx->pc = 0x434800u;
label_434800:
    // 0x434800: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434804:
    // 0x434804: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_434808:
    if (ctx->pc == 0x434808u) {
        ctx->pc = 0x434808u;
            // 0x434808: 0xae4401a0  sw          $a0, 0x1A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 4));
        ctx->pc = 0x43480Cu;
        goto label_43480c;
    }
    ctx->pc = 0x434804u;
    {
        const bool branch_taken_0x434804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x434804) {
            ctx->pc = 0x434808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x434804u;
            // 0x434808: 0xae4401a0  sw          $a0, 0x1A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43481Cu;
            goto label_43481c;
        }
    }
    ctx->pc = 0x43480Cu;
label_43480c:
    // 0x43480c: 0xc12d0c0  jal         func_4B4300
label_434810:
    if (ctx->pc == 0x434810u) {
        ctx->pc = 0x434810u;
            // 0x434810: 0x26450160  addiu       $a1, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->pc = 0x434814u;
        goto label_434814;
    }
    ctx->pc = 0x43480Cu;
    SET_GPR_U32(ctx, 31, 0x434814u);
    ctx->pc = 0x434810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43480Cu;
            // 0x434810: 0x26450160  addiu       $a1, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B4300u;
    if (runtime->hasFunction(0x4B4300u)) {
        auto targetFn = runtime->lookupFunction(0x4B4300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434814u; }
        if (ctx->pc != 0x434814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B4300_0x4b4300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434814u; }
        if (ctx->pc != 0x434814u) { return; }
    }
    ctx->pc = 0x434814u;
label_434814:
    // 0x434814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434818:
    // 0x434818: 0xae4401a0  sw          $a0, 0x1A0($s2)
    ctx->pc = 0x434818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 4));
label_43481c:
    // 0x43481c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43481cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_434820:
    // 0x434820: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x434820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_434824:
    // 0x434824: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x434824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_434828:
    // 0x434828: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x434828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43482c:
    // 0x43482c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x43482cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_434830:
    // 0x434830: 0x3e00008  jr          $ra
label_434834:
    if (ctx->pc == 0x434834u) {
        ctx->pc = 0x434834u;
            // 0x434834: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x434838u;
        goto label_434838;
    }
    ctx->pc = 0x434830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x434834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x434830u;
            // 0x434834: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x434838u;
label_434838:
    // 0x434838: 0x0  nop
    ctx->pc = 0x434838u;
    // NOP
label_43483c:
    // 0x43483c: 0x0  nop
    ctx->pc = 0x43483cu;
    // NOP
label_434840:
    // 0x434840: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x434840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_434844:
    // 0x434844: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x434844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_434848:
    // 0x434848: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x434848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43484c:
    // 0x43484c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x43484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_434850:
    // 0x434850: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x434850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_434854:
    // 0x434854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x434854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_434858:
    // 0x434858: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x434858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_43485c:
    // 0x43485c: 0x8c8400f0  lw          $a0, 0xF0($a0)
    ctx->pc = 0x43485cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_434860:
    // 0x434860: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x434860u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_434864:
    // 0x434864: 0x10200232  beqz        $at, . + 4 + (0x232 << 2)
label_434868:
    if (ctx->pc == 0x434868u) {
        ctx->pc = 0x434868u;
            // 0x434868: 0xc4740018  lwc1        $f20, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x43486Cu;
        goto label_43486c;
    }
    ctx->pc = 0x434864u;
    {
        const bool branch_taken_0x434864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x434868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x434864u;
            // 0x434868: 0xc4740018  lwc1        $f20, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x434864) {
            ctx->pc = 0x435130u;
            goto label_435130;
        }
    }
    ctx->pc = 0x43486Cu;
label_43486c:
    // 0x43486c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x43486cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_434870:
    // 0x434870: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x434870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_434874:
    // 0x434874: 0x2484cdb0  addiu       $a0, $a0, -0x3250
    ctx->pc = 0x434874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954416));
label_434878:
    // 0x434878: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x434878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_43487c:
    // 0x43487c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x43487cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_434880:
    // 0x434880: 0x600008  jr          $v1
label_434884:
    if (ctx->pc == 0x434884u) {
        ctx->pc = 0x434888u;
        goto label_434888;
    }
    ctx->pc = 0x434880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x434888u: goto label_434888;
            case 0x4348B8u: goto label_4348b8;
            case 0x4348E0u: goto label_4348e0;
            case 0x434A94u: goto label_434a94;
            case 0x434DECu: goto label_434dec;
            case 0x4350ECu: goto label_4350ec;
            case 0x435130u: goto label_435130;
            default: break;
        }
        return;
    }
    ctx->pc = 0x434888u;
label_434888:
    // 0x434888: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x434888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43488c:
    // 0x43488c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43488cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_434890:
    // 0x434890: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x434890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_434894:
    // 0x434894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x434894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_434898:
    // 0x434898: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x434898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43489c:
    // 0x43489c: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x43489cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_4348a0:
    // 0x4348a0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4348a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4348a4:
    // 0x4348a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4348a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4348a8:
    // 0x4348a8: 0xc08bff0  jal         func_22FFC0
label_4348ac:
    if (ctx->pc == 0x4348ACu) {
        ctx->pc = 0x4348ACu;
            // 0x4348ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4348B0u;
        goto label_4348b0;
    }
    ctx->pc = 0x4348A8u;
    SET_GPR_U32(ctx, 31, 0x4348B0u);
    ctx->pc = 0x4348ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4348A8u;
            // 0x4348ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4348B0u; }
        if (ctx->pc != 0x4348B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4348B0u; }
        if (ctx->pc != 0x4348B0u) { return; }
    }
    ctx->pc = 0x4348B0u;
label_4348b0:
    // 0x4348b0: 0x10000220  b           . + 4 + (0x220 << 2)
label_4348b4:
    if (ctx->pc == 0x4348B4u) {
        ctx->pc = 0x4348B4u;
            // 0x4348b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4348B8u;
        goto label_4348b8;
    }
    ctx->pc = 0x4348B0u;
    {
        const bool branch_taken_0x4348b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4348B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4348B0u;
            // 0x4348b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4348b0) {
            ctx->pc = 0x435134u;
            goto label_435134;
        }
    }
    ctx->pc = 0x4348B8u;
label_4348b8:
    // 0x4348b8: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x4348b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4348bc:
    // 0x4348bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4348bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4348c0:
    // 0x4348c0: 0x0  nop
    ctx->pc = 0x4348c0u;
    // NOP
label_4348c4:
    // 0x4348c4: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x4348c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_4348c8:
    // 0x4348c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4348c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4348cc:
    // 0x4348cc: 0x45000218  bc1f        . + 4 + (0x218 << 2)
label_4348d0:
    if (ctx->pc == 0x4348D0u) {
        ctx->pc = 0x4348D0u;
            // 0x4348d0: 0xe6010100  swc1        $f1, 0x100($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
        ctx->pc = 0x4348D4u;
        goto label_4348d4;
    }
    ctx->pc = 0x4348CCu;
    {
        const bool branch_taken_0x4348cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4348D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4348CCu;
            // 0x4348d0: 0xe6010100  swc1        $f1, 0x100($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4348cc) {
            ctx->pc = 0x435130u;
            goto label_435130;
        }
    }
    ctx->pc = 0x4348D4u;
label_4348d4:
    // 0x4348d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4348d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4348d8:
    // 0x4348d8: 0x10000215  b           . + 4 + (0x215 << 2)
label_4348dc:
    if (ctx->pc == 0x4348DCu) {
        ctx->pc = 0x4348DCu;
            // 0x4348dc: 0xae0300f0  sw          $v1, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
        ctx->pc = 0x4348E0u;
        goto label_4348e0;
    }
    ctx->pc = 0x4348D8u;
    {
        const bool branch_taken_0x4348d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4348DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4348D8u;
            // 0x4348dc: 0xae0300f0  sw          $v1, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4348d8) {
            ctx->pc = 0x435130u;
            goto label_435130;
        }
    }
    ctx->pc = 0x4348E0u;
label_4348e0:
    // 0x4348e0: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x4348e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4348e4:
    // 0x4348e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4348e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4348e8:
    // 0x4348e8: 0x0  nop
    ctx->pc = 0x4348e8u;
    // NOP
label_4348ec:
    // 0x4348ec: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x4348ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_4348f0:
    // 0x4348f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4348f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4348f4:
    // 0x4348f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_4348f8:
    if (ctx->pc == 0x4348F8u) {
        ctx->pc = 0x4348F8u;
            // 0x4348f8: 0xe6010104  swc1        $f1, 0x104($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
        ctx->pc = 0x4348FCu;
        goto label_4348fc;
    }
    ctx->pc = 0x4348F4u;
    {
        const bool branch_taken_0x4348f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4348F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4348F4u;
            // 0x4348f8: 0xe6010104  swc1        $f1, 0x104($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4348f4) {
            ctx->pc = 0x43490Cu;
            goto label_43490c;
        }
    }
    ctx->pc = 0x4348FCu;
label_4348fc:
    // 0x4348fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4348fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_434900:
    // 0x434900: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x434900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_434904:
    // 0x434904: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x434904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_434908:
    // 0x434908: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x434908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_43490c:
    // 0x43490c: 0xc10d100  jal         func_434400
label_434910:
    if (ctx->pc == 0x434910u) {
        ctx->pc = 0x434914u;
        goto label_434914;
    }
    ctx->pc = 0x43490Cu;
    SET_GPR_U32(ctx, 31, 0x434914u);
    ctx->pc = 0x434400u;
    if (runtime->hasFunction(0x434400u)) {
        auto targetFn = runtime->lookupFunction(0x434400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434914u; }
        if (ctx->pc != 0x434914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434400_0x434400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434914u; }
        if (ctx->pc != 0x434914u) { return; }
    }
    ctx->pc = 0x434914u;
label_434914:
    // 0x434914: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434918:
    // 0x434918: 0xc0f8178  jal         func_3E05E0
label_43491c:
    if (ctx->pc == 0x43491Cu) {
        ctx->pc = 0x43491Cu;
            // 0x43491c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434920u;
        goto label_434920;
    }
    ctx->pc = 0x434918u;
    SET_GPR_U32(ctx, 31, 0x434920u);
    ctx->pc = 0x43491Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434918u;
            // 0x43491c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434920u; }
        if (ctx->pc != 0x434920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434920u; }
        if (ctx->pc != 0x434920u) { return; }
    }
    ctx->pc = 0x434920u;
label_434920:
    // 0x434920: 0xc0d1c14  jal         func_347050
label_434924:
    if (ctx->pc == 0x434924u) {
        ctx->pc = 0x434924u;
            // 0x434924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434928u;
        goto label_434928;
    }
    ctx->pc = 0x434920u;
    SET_GPR_U32(ctx, 31, 0x434928u);
    ctx->pc = 0x434924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434920u;
            // 0x434924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434928u; }
        if (ctx->pc != 0x434928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434928u; }
        if (ctx->pc != 0x434928u) { return; }
    }
    ctx->pc = 0x434928u;
label_434928:
    // 0x434928: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x434928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43492c:
    // 0x43492c: 0xc04f278  jal         func_13C9E0
label_434930:
    if (ctx->pc == 0x434930u) {
        ctx->pc = 0x434930u;
            // 0x434930: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x434934u;
        goto label_434934;
    }
    ctx->pc = 0x43492Cu;
    SET_GPR_U32(ctx, 31, 0x434934u);
    ctx->pc = 0x434930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43492Cu;
            // 0x434930: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434934u; }
        if (ctx->pc != 0x434934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434934u; }
        if (ctx->pc != 0x434934u) { return; }
    }
    ctx->pc = 0x434934u;
label_434934:
    // 0x434934: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x434934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_434938:
    // 0x434938: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x434938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_43493c:
    // 0x43493c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43493cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434940:
    // 0x434940: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x434940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_434944:
    // 0x434944: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x434944u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_434948:
    // 0x434948: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x434948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_43494c:
    // 0x43494c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43494cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434950:
    // 0x434950: 0x0  nop
    ctx->pc = 0x434950u;
    // NOP
label_434954:
    // 0x434954: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x434954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_434958:
    // 0x434958: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x434958u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_43495c:
    // 0x43495c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x43495cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_434960:
    // 0x434960: 0xc04f2b8  jal         func_13CAE0
label_434964:
    if (ctx->pc == 0x434964u) {
        ctx->pc = 0x434964u;
            // 0x434964: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x434968u;
        goto label_434968;
    }
    ctx->pc = 0x434960u;
    SET_GPR_U32(ctx, 31, 0x434968u);
    ctx->pc = 0x434964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434960u;
            // 0x434964: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434968u; }
        if (ctx->pc != 0x434968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434968u; }
        if (ctx->pc != 0x434968u) { return; }
    }
    ctx->pc = 0x434968u;
label_434968:
    // 0x434968: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x434968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_43496c:
    // 0x43496c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x43496cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_434970:
    // 0x434970: 0xc04cd60  jal         func_133580
label_434974:
    if (ctx->pc == 0x434974u) {
        ctx->pc = 0x434974u;
            // 0x434974: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434978u;
        goto label_434978;
    }
    ctx->pc = 0x434970u;
    SET_GPR_U32(ctx, 31, 0x434978u);
    ctx->pc = 0x434974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434970u;
            // 0x434974: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434978u; }
        if (ctx->pc != 0x434978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434978u; }
        if (ctx->pc != 0x434978u) { return; }
    }
    ctx->pc = 0x434978u;
label_434978:
    // 0x434978: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x434978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_43497c:
    // 0x43497c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x43497cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_434980:
    // 0x434980: 0xc04cca0  jal         func_133280
label_434984:
    if (ctx->pc == 0x434984u) {
        ctx->pc = 0x434984u;
            // 0x434984: 0x260600e0  addiu       $a2, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x434988u;
        goto label_434988;
    }
    ctx->pc = 0x434980u;
    SET_GPR_U32(ctx, 31, 0x434988u);
    ctx->pc = 0x434984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434980u;
            // 0x434984: 0x260600e0  addiu       $a2, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434988u; }
        if (ctx->pc != 0x434988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434988u; }
        if (ctx->pc != 0x434988u) { return; }
    }
    ctx->pc = 0x434988u;
label_434988:
    // 0x434988: 0xc10d0fc  jal         func_4343F0
label_43498c:
    if (ctx->pc == 0x43498Cu) {
        ctx->pc = 0x434990u;
        goto label_434990;
    }
    ctx->pc = 0x434988u;
    SET_GPR_U32(ctx, 31, 0x434990u);
    ctx->pc = 0x4343F0u;
    if (runtime->hasFunction(0x4343F0u)) {
        auto targetFn = runtime->lookupFunction(0x4343F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434990u; }
        if (ctx->pc != 0x434990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343F0_0x4343f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434990u; }
        if (ctx->pc != 0x434990u) { return; }
    }
    ctx->pc = 0x434990u;
label_434990:
    // 0x434990: 0x8e050114  lw          $a1, 0x114($s0)
    ctx->pc = 0x434990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_434994:
    // 0x434994: 0xc10d0f4  jal         func_4343D0
label_434998:
    if (ctx->pc == 0x434998u) {
        ctx->pc = 0x434998u;
            // 0x434998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43499Cu;
        goto label_43499c;
    }
    ctx->pc = 0x434994u;
    SET_GPR_U32(ctx, 31, 0x43499Cu);
    ctx->pc = 0x434998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434994u;
            // 0x434998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4343D0u;
    if (runtime->hasFunction(0x4343D0u)) {
        auto targetFn = runtime->lookupFunction(0x4343D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43499Cu; }
        if (ctx->pc != 0x43499Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343D0_0x4343d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43499Cu; }
        if (ctx->pc != 0x43499Cu) { return; }
    }
    ctx->pc = 0x43499Cu;
label_43499c:
    // 0x43499c: 0xc0d1c10  jal         func_347040
label_4349a0:
    if (ctx->pc == 0x4349A0u) {
        ctx->pc = 0x4349A0u;
            // 0x4349a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4349A4u;
        goto label_4349a4;
    }
    ctx->pc = 0x43499Cu;
    SET_GPR_U32(ctx, 31, 0x4349A4u);
    ctx->pc = 0x4349A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43499Cu;
            // 0x4349a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4349A4u; }
        if (ctx->pc != 0x4349A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4349A4u; }
        if (ctx->pc != 0x4349A4u) { return; }
    }
    ctx->pc = 0x4349A4u;
label_4349a4:
    // 0x4349a4: 0xc60c00f4  lwc1        $f12, 0xF4($s0)
    ctx->pc = 0x4349a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4349a8:
    // 0x4349a8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x4349a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_4349ac:
    // 0x4349ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4349acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4349b0:
    // 0x4349b0: 0xc04cc7c  jal         func_1331F0
label_4349b4:
    if (ctx->pc == 0x4349B4u) {
        ctx->pc = 0x4349B4u;
            // 0x4349b4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4349B8u;
        goto label_4349b8;
    }
    ctx->pc = 0x4349B0u;
    SET_GPR_U32(ctx, 31, 0x4349B8u);
    ctx->pc = 0x4349B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4349B0u;
            // 0x4349b4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4349B8u; }
        if (ctx->pc != 0x4349B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4349B8u; }
        if (ctx->pc != 0x4349B8u) { return; }
    }
    ctx->pc = 0x4349B8u;
label_4349b8:
    // 0x4349b8: 0xc10d100  jal         func_434400
label_4349bc:
    if (ctx->pc == 0x4349BCu) {
        ctx->pc = 0x4349C0u;
        goto label_4349c0;
    }
    ctx->pc = 0x4349B8u;
    SET_GPR_U32(ctx, 31, 0x4349C0u);
    ctx->pc = 0x434400u;
    if (runtime->hasFunction(0x434400u)) {
        auto targetFn = runtime->lookupFunction(0x434400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4349C0u; }
        if (ctx->pc != 0x4349C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434400_0x434400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4349C0u; }
        if (ctx->pc != 0x4349C0u) { return; }
    }
    ctx->pc = 0x4349C0u;
label_4349c0:
    // 0x4349c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4349c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4349c4:
    // 0x4349c4: 0xc0f8178  jal         func_3E05E0
label_4349c8:
    if (ctx->pc == 0x4349C8u) {
        ctx->pc = 0x4349C8u;
            // 0x4349c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4349CCu;
        goto label_4349cc;
    }
    ctx->pc = 0x4349C4u;
    SET_GPR_U32(ctx, 31, 0x4349CCu);
    ctx->pc = 0x4349C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4349C4u;
            // 0x4349c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4349CCu; }
        if (ctx->pc != 0x4349CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4349CCu; }
        if (ctx->pc != 0x4349CCu) { return; }
    }
    ctx->pc = 0x4349CCu;
label_4349cc:
    // 0x4349cc: 0xc10d0f0  jal         func_4343C0
label_4349d0:
    if (ctx->pc == 0x4349D0u) {
        ctx->pc = 0x4349D0u;
            // 0x4349d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4349D4u;
        goto label_4349d4;
    }
    ctx->pc = 0x4349CCu;
    SET_GPR_U32(ctx, 31, 0x4349D4u);
    ctx->pc = 0x4349D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4349CCu;
            // 0x4349d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4343C0u;
    if (runtime->hasFunction(0x4343C0u)) {
        auto targetFn = runtime->lookupFunction(0x4343C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4349D4u; }
        if (ctx->pc != 0x4349D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343C0_0x4343c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4349D4u; }
        if (ctx->pc != 0x4349D4u) { return; }
    }
    ctx->pc = 0x4349D4u;
label_4349d4:
    // 0x4349d4: 0xc0efc48  jal         func_3BF120
label_4349d8:
    if (ctx->pc == 0x4349D8u) {
        ctx->pc = 0x4349D8u;
            // 0x4349d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4349DCu;
        goto label_4349dc;
    }
    ctx->pc = 0x4349D4u;
    SET_GPR_U32(ctx, 31, 0x4349DCu);
    ctx->pc = 0x4349D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4349D4u;
            // 0x4349d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4349DCu; }
        if (ctx->pc != 0x4349DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4349DCu; }
        if (ctx->pc != 0x4349DCu) { return; }
    }
    ctx->pc = 0x4349DCu;
label_4349dc:
    // 0x4349dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4349dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4349e0:
    // 0x4349e0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x4349e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_4349e4:
    // 0x4349e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4349e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4349e8:
    // 0x4349e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4349e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4349ec:
    // 0x4349ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4349ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4349f0:
    // 0x4349f0: 0xc60200f4  lwc1        $f2, 0xF4($s0)
    ctx->pc = 0x4349f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4349f4:
    // 0x4349f4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x4349f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_4349f8:
    // 0x4349f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4349f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4349fc:
    // 0x4349fc: 0x0  nop
    ctx->pc = 0x4349fcu;
    // NOP
label_434a00:
    // 0x434a00: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x434a00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_434a04:
    // 0x434a04: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x434a04u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_434a08:
    // 0x434a08: 0xc04cc7c  jal         func_1331F0
label_434a0c:
    if (ctx->pc == 0x434A0Cu) {
        ctx->pc = 0x434A0Cu;
            // 0x434a0c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x434A10u;
        goto label_434a10;
    }
    ctx->pc = 0x434A08u;
    SET_GPR_U32(ctx, 31, 0x434A10u);
    ctx->pc = 0x434A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434A08u;
            // 0x434a0c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A10u; }
        if (ctx->pc != 0x434A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A10u; }
        if (ctx->pc != 0x434A10u) { return; }
    }
    ctx->pc = 0x434A10u;
label_434a10:
    // 0x434a10: 0xc10d100  jal         func_434400
label_434a14:
    if (ctx->pc == 0x434A14u) {
        ctx->pc = 0x434A18u;
        goto label_434a18;
    }
    ctx->pc = 0x434A10u;
    SET_GPR_U32(ctx, 31, 0x434A18u);
    ctx->pc = 0x434400u;
    if (runtime->hasFunction(0x434400u)) {
        auto targetFn = runtime->lookupFunction(0x434400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A18u; }
        if (ctx->pc != 0x434A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434400_0x434400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A18u; }
        if (ctx->pc != 0x434A18u) { return; }
    }
    ctx->pc = 0x434A18u;
label_434a18:
    // 0x434a18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434a1c:
    // 0x434a1c: 0xc0f8178  jal         func_3E05E0
label_434a20:
    if (ctx->pc == 0x434A20u) {
        ctx->pc = 0x434A20u;
            // 0x434a20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434A24u;
        goto label_434a24;
    }
    ctx->pc = 0x434A1Cu;
    SET_GPR_U32(ctx, 31, 0x434A24u);
    ctx->pc = 0x434A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434A1Cu;
            // 0x434a20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A24u; }
        if (ctx->pc != 0x434A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A24u; }
        if (ctx->pc != 0x434A24u) { return; }
    }
    ctx->pc = 0x434A24u;
label_434a24:
    // 0x434a24: 0xc10d0f0  jal         func_4343C0
label_434a28:
    if (ctx->pc == 0x434A28u) {
        ctx->pc = 0x434A28u;
            // 0x434a28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434A2Cu;
        goto label_434a2c;
    }
    ctx->pc = 0x434A24u;
    SET_GPR_U32(ctx, 31, 0x434A2Cu);
    ctx->pc = 0x434A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434A24u;
            // 0x434a28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4343C0u;
    if (runtime->hasFunction(0x4343C0u)) {
        auto targetFn = runtime->lookupFunction(0x4343C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A2Cu; }
        if (ctx->pc != 0x434A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343C0_0x4343c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A2Cu; }
        if (ctx->pc != 0x434A2Cu) { return; }
    }
    ctx->pc = 0x434A2Cu;
label_434a2c:
    // 0x434a2c: 0xc0cefec  jal         func_33BFB0
label_434a30:
    if (ctx->pc == 0x434A30u) {
        ctx->pc = 0x434A30u;
            // 0x434a30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434A34u;
        goto label_434a34;
    }
    ctx->pc = 0x434A2Cu;
    SET_GPR_U32(ctx, 31, 0x434A34u);
    ctx->pc = 0x434A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434A2Cu;
            // 0x434a30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A34u; }
        if (ctx->pc != 0x434A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A34u; }
        if (ctx->pc != 0x434A34u) { return; }
    }
    ctx->pc = 0x434A34u;
label_434a34:
    // 0x434a34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x434a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434a38:
    // 0x434a38: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x434a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_434a3c:
    // 0x434a3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x434a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_434a40:
    // 0x434a40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x434a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_434a44:
    // 0x434a44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x434a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_434a48:
    // 0x434a48: 0xc60200f4  lwc1        $f2, 0xF4($s0)
    ctx->pc = 0x434a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_434a4c:
    // 0x434a4c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x434a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_434a50:
    // 0x434a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434a54:
    // 0x434a54: 0x0  nop
    ctx->pc = 0x434a54u;
    // NOP
label_434a58:
    // 0x434a58: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x434a58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_434a5c:
    // 0x434a5c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x434a5cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_434a60:
    // 0x434a60: 0xc04cc7c  jal         func_1331F0
label_434a64:
    if (ctx->pc == 0x434A64u) {
        ctx->pc = 0x434A64u;
            // 0x434a64: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x434A68u;
        goto label_434a68;
    }
    ctx->pc = 0x434A60u;
    SET_GPR_U32(ctx, 31, 0x434A68u);
    ctx->pc = 0x434A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434A60u;
            // 0x434a64: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A68u; }
        if (ctx->pc != 0x434A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A68u; }
        if (ctx->pc != 0x434A68u) { return; }
    }
    ctx->pc = 0x434A68u;
label_434a68:
    // 0x434a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x434a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_434a6c:
    // 0x434a6c: 0xc0f8e34  jal         func_3E38D0
label_434a70:
    if (ctx->pc == 0x434A70u) {
        ctx->pc = 0x434A70u;
            // 0x434a70: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x434A74u;
        goto label_434a74;
    }
    ctx->pc = 0x434A6Cu;
    SET_GPR_U32(ctx, 31, 0x434A74u);
    ctx->pc = 0x434A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434A6Cu;
            // 0x434a70: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A74u; }
        if (ctx->pc != 0x434A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A74u; }
        if (ctx->pc != 0x434A74u) { return; }
    }
    ctx->pc = 0x434A74u;
label_434a74:
    // 0x434a74: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x434a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_434a78:
    // 0x434a78: 0xc04c994  jal         func_132650
label_434a7c:
    if (ctx->pc == 0x434A7Cu) {
        ctx->pc = 0x434A7Cu;
            // 0x434a7c: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x434A80u;
        goto label_434a80;
    }
    ctx->pc = 0x434A78u;
    SET_GPR_U32(ctx, 31, 0x434A80u);
    ctx->pc = 0x434A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434A78u;
            // 0x434a7c: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A80u; }
        if (ctx->pc != 0x434A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A80u; }
        if (ctx->pc != 0x434A80u) { return; }
    }
    ctx->pc = 0x434A80u;
label_434a80:
    // 0x434a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x434a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_434a84:
    // 0x434a84: 0xc0e1b28  jal         func_386CA0
label_434a88:
    if (ctx->pc == 0x434A88u) {
        ctx->pc = 0x434A88u;
            // 0x434a88: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x434A8Cu;
        goto label_434a8c;
    }
    ctx->pc = 0x434A84u;
    SET_GPR_U32(ctx, 31, 0x434A8Cu);
    ctx->pc = 0x434A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434A84u;
            // 0x434a88: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A8Cu; }
        if (ctx->pc != 0x434A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434A8Cu; }
        if (ctx->pc != 0x434A8Cu) { return; }
    }
    ctx->pc = 0x434A8Cu;
label_434a8c:
    // 0x434a8c: 0x100001a8  b           . + 4 + (0x1A8 << 2)
label_434a90:
    if (ctx->pc == 0x434A90u) {
        ctx->pc = 0x434A94u;
        goto label_434a94;
    }
    ctx->pc = 0x434A8Cu;
    {
        const bool branch_taken_0x434a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x434a8c) {
            ctx->pc = 0x435130u;
            goto label_435130;
        }
    }
    ctx->pc = 0x434A94u;
label_434a94:
    // 0x434a94: 0xc60200f4  lwc1        $f2, 0xF4($s0)
    ctx->pc = 0x434a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_434a98:
    // 0x434a98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x434a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_434a9c:
    // 0x434a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434aa0:
    // 0x434aa0: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x434aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_434aa4:
    // 0x434aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x434aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_434aa8:
    // 0x434aa8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x434aa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_434aac:
    // 0x434aac: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x434aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_434ab0:
    // 0x434ab0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_434ab4:
    if (ctx->pc == 0x434AB4u) {
        ctx->pc = 0x434AB4u;
            // 0x434ab4: 0x4600a0c2  mul.s       $f3, $f20, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x434AB8u;
        goto label_434ab8;
    }
    ctx->pc = 0x434AB0u;
    {
        const bool branch_taken_0x434ab0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x434AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x434AB0u;
            // 0x434ab4: 0x4600a0c2  mul.s       $f3, $f20, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x434ab0) {
            ctx->pc = 0x434ABCu;
            goto label_434abc;
        }
    }
    ctx->pc = 0x434AB8u;
label_434ab8:
    // 0x434ab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x434ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_434abc:
    // 0x434abc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_434ac0:
    if (ctx->pc == 0x434AC0u) {
        ctx->pc = 0x434AC0u;
            // 0x434ac0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x434AC4u;
        goto label_434ac4;
    }
    ctx->pc = 0x434ABCu;
    {
        const bool branch_taken_0x434abc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x434abc) {
            ctx->pc = 0x434AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x434ABCu;
            // 0x434ac0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x434AD0u;
            goto label_434ad0;
        }
    }
    ctx->pc = 0x434AC4u;
label_434ac4:
    // 0x434ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434ac8:
    // 0x434ac8: 0x10000007  b           . + 4 + (0x7 << 2)
label_434acc:
    if (ctx->pc == 0x434ACCu) {
        ctx->pc = 0x434ACCu;
            // 0x434acc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x434AD0u;
        goto label_434ad0;
    }
    ctx->pc = 0x434AC8u;
    {
        const bool branch_taken_0x434ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x434AC8u;
            // 0x434acc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x434ac8) {
            ctx->pc = 0x434AE8u;
            goto label_434ae8;
        }
    }
    ctx->pc = 0x434AD0u;
label_434ad0:
    // 0x434ad0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x434ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_434ad4:
    // 0x434ad4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x434ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_434ad8:
    // 0x434ad8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x434ad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434adc:
    // 0x434adc: 0x0  nop
    ctx->pc = 0x434adcu;
    // NOP
label_434ae0:
    // 0x434ae0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x434ae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_434ae4:
    // 0x434ae4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x434ae4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_434ae8:
    // 0x434ae8: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x434ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_434aec:
    // 0x434aec: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x434aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_434af0:
    // 0x434af0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x434af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_434af4:
    // 0x434af4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x434af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_434af8:
    // 0x434af8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x434af8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_434afc:
    // 0x434afc: 0x4603081d  msub.s      $f0, $f1, $f3
    ctx->pc = 0x434afcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_434b00:
    // 0x434b00: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x434b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_434b04:
    // 0x434b04: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x434b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_434b08:
    // 0x434b08: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x434b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_434b0c:
    // 0x434b0c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x434b0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_434b10:
    // 0x434b10: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x434b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_434b14:
    // 0x434b14: 0xc04cc04  jal         func_133010
label_434b18:
    if (ctx->pc == 0x434B18u) {
        ctx->pc = 0x434B18u;
            // 0x434b18: 0xe600010c  swc1        $f0, 0x10C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
        ctx->pc = 0x434B1Cu;
        goto label_434b1c;
    }
    ctx->pc = 0x434B14u;
    SET_GPR_U32(ctx, 31, 0x434B1Cu);
    ctx->pc = 0x434B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434B14u;
            // 0x434b18: 0xe600010c  swc1        $f0, 0x10C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B1Cu; }
        if (ctx->pc != 0x434B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B1Cu; }
        if (ctx->pc != 0x434B1Cu) { return; }
    }
    ctx->pc = 0x434B1Cu;
label_434b1c:
    // 0x434b1c: 0xc10d100  jal         func_434400
label_434b20:
    if (ctx->pc == 0x434B20u) {
        ctx->pc = 0x434B24u;
        goto label_434b24;
    }
    ctx->pc = 0x434B1Cu;
    SET_GPR_U32(ctx, 31, 0x434B24u);
    ctx->pc = 0x434400u;
    if (runtime->hasFunction(0x434400u)) {
        auto targetFn = runtime->lookupFunction(0x434400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B24u; }
        if (ctx->pc != 0x434B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434400_0x434400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B24u; }
        if (ctx->pc != 0x434B24u) { return; }
    }
    ctx->pc = 0x434B24u;
label_434b24:
    // 0x434b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434b28:
    // 0x434b28: 0xc0f8178  jal         func_3E05E0
label_434b2c:
    if (ctx->pc == 0x434B2Cu) {
        ctx->pc = 0x434B2Cu;
            // 0x434b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434B30u;
        goto label_434b30;
    }
    ctx->pc = 0x434B28u;
    SET_GPR_U32(ctx, 31, 0x434B30u);
    ctx->pc = 0x434B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434B28u;
            // 0x434b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B30u; }
        if (ctx->pc != 0x434B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B30u; }
        if (ctx->pc != 0x434B30u) { return; }
    }
    ctx->pc = 0x434B30u;
label_434b30:
    // 0x434b30: 0xc0d1c14  jal         func_347050
label_434b34:
    if (ctx->pc == 0x434B34u) {
        ctx->pc = 0x434B34u;
            // 0x434b34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434B38u;
        goto label_434b38;
    }
    ctx->pc = 0x434B30u;
    SET_GPR_U32(ctx, 31, 0x434B38u);
    ctx->pc = 0x434B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434B30u;
            // 0x434b34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B38u; }
        if (ctx->pc != 0x434B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B38u; }
        if (ctx->pc != 0x434B38u) { return; }
    }
    ctx->pc = 0x434B38u;
label_434b38:
    // 0x434b38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x434b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434b3c:
    // 0x434b3c: 0xc04f278  jal         func_13C9E0
label_434b40:
    if (ctx->pc == 0x434B40u) {
        ctx->pc = 0x434B40u;
            // 0x434b40: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x434B44u;
        goto label_434b44;
    }
    ctx->pc = 0x434B3Cu;
    SET_GPR_U32(ctx, 31, 0x434B44u);
    ctx->pc = 0x434B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434B3Cu;
            // 0x434b40: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B44u; }
        if (ctx->pc != 0x434B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B44u; }
        if (ctx->pc != 0x434B44u) { return; }
    }
    ctx->pc = 0x434B44u;
label_434b44:
    // 0x434b44: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x434b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_434b48:
    // 0x434b48: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x434b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_434b4c:
    // 0x434b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434b50:
    // 0x434b50: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x434b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_434b54:
    // 0x434b54: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x434b54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_434b58:
    // 0x434b58: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x434b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_434b5c:
    // 0x434b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434b60:
    // 0x434b60: 0x0  nop
    ctx->pc = 0x434b60u;
    // NOP
label_434b64:
    // 0x434b64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x434b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_434b68:
    // 0x434b68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x434b68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_434b6c:
    // 0x434b6c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x434b6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_434b70:
    // 0x434b70: 0xc04f2b8  jal         func_13CAE0
label_434b74:
    if (ctx->pc == 0x434B74u) {
        ctx->pc = 0x434B74u;
            // 0x434b74: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x434B78u;
        goto label_434b78;
    }
    ctx->pc = 0x434B70u;
    SET_GPR_U32(ctx, 31, 0x434B78u);
    ctx->pc = 0x434B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434B70u;
            // 0x434b74: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B78u; }
        if (ctx->pc != 0x434B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B78u; }
        if (ctx->pc != 0x434B78u) { return; }
    }
    ctx->pc = 0x434B78u;
label_434b78:
    // 0x434b78: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x434b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_434b7c:
    // 0x434b7c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x434b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_434b80:
    // 0x434b80: 0xc04cd60  jal         func_133580
label_434b84:
    if (ctx->pc == 0x434B84u) {
        ctx->pc = 0x434B84u;
            // 0x434b84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434B88u;
        goto label_434b88;
    }
    ctx->pc = 0x434B80u;
    SET_GPR_U32(ctx, 31, 0x434B88u);
    ctx->pc = 0x434B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434B80u;
            // 0x434b84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B88u; }
        if (ctx->pc != 0x434B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B88u; }
        if (ctx->pc != 0x434B88u) { return; }
    }
    ctx->pc = 0x434B88u;
label_434b88:
    // 0x434b88: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x434b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_434b8c:
    // 0x434b8c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x434b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_434b90:
    // 0x434b90: 0xc04cca0  jal         func_133280
label_434b94:
    if (ctx->pc == 0x434B94u) {
        ctx->pc = 0x434B94u;
            // 0x434b94: 0x260600e0  addiu       $a2, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x434B98u;
        goto label_434b98;
    }
    ctx->pc = 0x434B90u;
    SET_GPR_U32(ctx, 31, 0x434B98u);
    ctx->pc = 0x434B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434B90u;
            // 0x434b94: 0x260600e0  addiu       $a2, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B98u; }
        if (ctx->pc != 0x434B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434B98u; }
        if (ctx->pc != 0x434B98u) { return; }
    }
    ctx->pc = 0x434B98u;
label_434b98:
    // 0x434b98: 0xc10d0fc  jal         func_4343F0
label_434b9c:
    if (ctx->pc == 0x434B9Cu) {
        ctx->pc = 0x434BA0u;
        goto label_434ba0;
    }
    ctx->pc = 0x434B98u;
    SET_GPR_U32(ctx, 31, 0x434BA0u);
    ctx->pc = 0x4343F0u;
    if (runtime->hasFunction(0x4343F0u)) {
        auto targetFn = runtime->lookupFunction(0x4343F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BA0u; }
        if (ctx->pc != 0x434BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343F0_0x4343f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BA0u; }
        if (ctx->pc != 0x434BA0u) { return; }
    }
    ctx->pc = 0x434BA0u;
label_434ba0:
    // 0x434ba0: 0x8e050114  lw          $a1, 0x114($s0)
    ctx->pc = 0x434ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_434ba4:
    // 0x434ba4: 0xc10d0f4  jal         func_4343D0
label_434ba8:
    if (ctx->pc == 0x434BA8u) {
        ctx->pc = 0x434BA8u;
            // 0x434ba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434BACu;
        goto label_434bac;
    }
    ctx->pc = 0x434BA4u;
    SET_GPR_U32(ctx, 31, 0x434BACu);
    ctx->pc = 0x434BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434BA4u;
            // 0x434ba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4343D0u;
    if (runtime->hasFunction(0x4343D0u)) {
        auto targetFn = runtime->lookupFunction(0x4343D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BACu; }
        if (ctx->pc != 0x434BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343D0_0x4343d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BACu; }
        if (ctx->pc != 0x434BACu) { return; }
    }
    ctx->pc = 0x434BACu;
label_434bac:
    // 0x434bac: 0xc0d1c10  jal         func_347040
label_434bb0:
    if (ctx->pc == 0x434BB0u) {
        ctx->pc = 0x434BB0u;
            // 0x434bb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434BB4u;
        goto label_434bb4;
    }
    ctx->pc = 0x434BACu;
    SET_GPR_U32(ctx, 31, 0x434BB4u);
    ctx->pc = 0x434BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434BACu;
            // 0x434bb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BB4u; }
        if (ctx->pc != 0x434BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BB4u; }
        if (ctx->pc != 0x434BB4u) { return; }
    }
    ctx->pc = 0x434BB4u;
label_434bb4:
    // 0x434bb4: 0xc60c00f4  lwc1        $f12, 0xF4($s0)
    ctx->pc = 0x434bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_434bb8:
    // 0x434bb8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x434bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_434bbc:
    // 0x434bbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x434bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434bc0:
    // 0x434bc0: 0xc04cc7c  jal         func_1331F0
label_434bc4:
    if (ctx->pc == 0x434BC4u) {
        ctx->pc = 0x434BC4u;
            // 0x434bc4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434BC8u;
        goto label_434bc8;
    }
    ctx->pc = 0x434BC0u;
    SET_GPR_U32(ctx, 31, 0x434BC8u);
    ctx->pc = 0x434BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434BC0u;
            // 0x434bc4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BC8u; }
        if (ctx->pc != 0x434BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BC8u; }
        if (ctx->pc != 0x434BC8u) { return; }
    }
    ctx->pc = 0x434BC8u;
label_434bc8:
    // 0x434bc8: 0xc10d100  jal         func_434400
label_434bcc:
    if (ctx->pc == 0x434BCCu) {
        ctx->pc = 0x434BD0u;
        goto label_434bd0;
    }
    ctx->pc = 0x434BC8u;
    SET_GPR_U32(ctx, 31, 0x434BD0u);
    ctx->pc = 0x434400u;
    if (runtime->hasFunction(0x434400u)) {
        auto targetFn = runtime->lookupFunction(0x434400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BD0u; }
        if (ctx->pc != 0x434BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434400_0x434400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BD0u; }
        if (ctx->pc != 0x434BD0u) { return; }
    }
    ctx->pc = 0x434BD0u;
label_434bd0:
    // 0x434bd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434bd4:
    // 0x434bd4: 0xc0f8178  jal         func_3E05E0
label_434bd8:
    if (ctx->pc == 0x434BD8u) {
        ctx->pc = 0x434BD8u;
            // 0x434bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434BDCu;
        goto label_434bdc;
    }
    ctx->pc = 0x434BD4u;
    SET_GPR_U32(ctx, 31, 0x434BDCu);
    ctx->pc = 0x434BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434BD4u;
            // 0x434bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BDCu; }
        if (ctx->pc != 0x434BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BDCu; }
        if (ctx->pc != 0x434BDCu) { return; }
    }
    ctx->pc = 0x434BDCu;
label_434bdc:
    // 0x434bdc: 0xc10d0f0  jal         func_4343C0
label_434be0:
    if (ctx->pc == 0x434BE0u) {
        ctx->pc = 0x434BE0u;
            // 0x434be0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434BE4u;
        goto label_434be4;
    }
    ctx->pc = 0x434BDCu;
    SET_GPR_U32(ctx, 31, 0x434BE4u);
    ctx->pc = 0x434BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434BDCu;
            // 0x434be0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4343C0u;
    if (runtime->hasFunction(0x4343C0u)) {
        auto targetFn = runtime->lookupFunction(0x4343C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BE4u; }
        if (ctx->pc != 0x434BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343C0_0x4343c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BE4u; }
        if (ctx->pc != 0x434BE4u) { return; }
    }
    ctx->pc = 0x434BE4u;
label_434be4:
    // 0x434be4: 0xc0efc48  jal         func_3BF120
label_434be8:
    if (ctx->pc == 0x434BE8u) {
        ctx->pc = 0x434BE8u;
            // 0x434be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434BECu;
        goto label_434bec;
    }
    ctx->pc = 0x434BE4u;
    SET_GPR_U32(ctx, 31, 0x434BECu);
    ctx->pc = 0x434BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434BE4u;
            // 0x434be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BECu; }
        if (ctx->pc != 0x434BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434BECu; }
        if (ctx->pc != 0x434BECu) { return; }
    }
    ctx->pc = 0x434BECu;
label_434bec:
    // 0x434bec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x434becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434bf0:
    // 0x434bf0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x434bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_434bf4:
    // 0x434bf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x434bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_434bf8:
    // 0x434bf8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x434bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_434bfc:
    // 0x434bfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x434bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_434c00:
    // 0x434c00: 0xc60200f4  lwc1        $f2, 0xF4($s0)
    ctx->pc = 0x434c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_434c04:
    // 0x434c04: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x434c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_434c08:
    // 0x434c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434c0c:
    // 0x434c0c: 0x0  nop
    ctx->pc = 0x434c0cu;
    // NOP
label_434c10:
    // 0x434c10: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x434c10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_434c14:
    // 0x434c14: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x434c14u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_434c18:
    // 0x434c18: 0xc04cc7c  jal         func_1331F0
label_434c1c:
    if (ctx->pc == 0x434C1Cu) {
        ctx->pc = 0x434C1Cu;
            // 0x434c1c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x434C20u;
        goto label_434c20;
    }
    ctx->pc = 0x434C18u;
    SET_GPR_U32(ctx, 31, 0x434C20u);
    ctx->pc = 0x434C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434C18u;
            // 0x434c1c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C20u; }
        if (ctx->pc != 0x434C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C20u; }
        if (ctx->pc != 0x434C20u) { return; }
    }
    ctx->pc = 0x434C20u;
label_434c20:
    // 0x434c20: 0xc10d100  jal         func_434400
label_434c24:
    if (ctx->pc == 0x434C24u) {
        ctx->pc = 0x434C28u;
        goto label_434c28;
    }
    ctx->pc = 0x434C20u;
    SET_GPR_U32(ctx, 31, 0x434C28u);
    ctx->pc = 0x434400u;
    if (runtime->hasFunction(0x434400u)) {
        auto targetFn = runtime->lookupFunction(0x434400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C28u; }
        if (ctx->pc != 0x434C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434400_0x434400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C28u; }
        if (ctx->pc != 0x434C28u) { return; }
    }
    ctx->pc = 0x434C28u;
label_434c28:
    // 0x434c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434c2c:
    // 0x434c2c: 0xc0f8178  jal         func_3E05E0
label_434c30:
    if (ctx->pc == 0x434C30u) {
        ctx->pc = 0x434C30u;
            // 0x434c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434C34u;
        goto label_434c34;
    }
    ctx->pc = 0x434C2Cu;
    SET_GPR_U32(ctx, 31, 0x434C34u);
    ctx->pc = 0x434C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434C2Cu;
            // 0x434c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C34u; }
        if (ctx->pc != 0x434C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C34u; }
        if (ctx->pc != 0x434C34u) { return; }
    }
    ctx->pc = 0x434C34u;
label_434c34:
    // 0x434c34: 0xc10d0f0  jal         func_4343C0
label_434c38:
    if (ctx->pc == 0x434C38u) {
        ctx->pc = 0x434C38u;
            // 0x434c38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434C3Cu;
        goto label_434c3c;
    }
    ctx->pc = 0x434C34u;
    SET_GPR_U32(ctx, 31, 0x434C3Cu);
    ctx->pc = 0x434C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434C34u;
            // 0x434c38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4343C0u;
    if (runtime->hasFunction(0x4343C0u)) {
        auto targetFn = runtime->lookupFunction(0x4343C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C3Cu; }
        if (ctx->pc != 0x434C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343C0_0x4343c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C3Cu; }
        if (ctx->pc != 0x434C3Cu) { return; }
    }
    ctx->pc = 0x434C3Cu;
label_434c3c:
    // 0x434c3c: 0xc0cefec  jal         func_33BFB0
label_434c40:
    if (ctx->pc == 0x434C40u) {
        ctx->pc = 0x434C40u;
            // 0x434c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434C44u;
        goto label_434c44;
    }
    ctx->pc = 0x434C3Cu;
    SET_GPR_U32(ctx, 31, 0x434C44u);
    ctx->pc = 0x434C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434C3Cu;
            // 0x434c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C44u; }
        if (ctx->pc != 0x434C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C44u; }
        if (ctx->pc != 0x434C44u) { return; }
    }
    ctx->pc = 0x434C44u;
label_434c44:
    // 0x434c44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x434c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434c48:
    // 0x434c48: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x434c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_434c4c:
    // 0x434c4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x434c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_434c50:
    // 0x434c50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x434c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_434c54:
    // 0x434c54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x434c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_434c58:
    // 0x434c58: 0xc60200f4  lwc1        $f2, 0xF4($s0)
    ctx->pc = 0x434c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_434c5c:
    // 0x434c5c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x434c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_434c60:
    // 0x434c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434c64:
    // 0x434c64: 0x0  nop
    ctx->pc = 0x434c64u;
    // NOP
label_434c68:
    // 0x434c68: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x434c68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_434c6c:
    // 0x434c6c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x434c6cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_434c70:
    // 0x434c70: 0xc04cc7c  jal         func_1331F0
label_434c74:
    if (ctx->pc == 0x434C74u) {
        ctx->pc = 0x434C74u;
            // 0x434c74: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x434C78u;
        goto label_434c78;
    }
    ctx->pc = 0x434C70u;
    SET_GPR_U32(ctx, 31, 0x434C78u);
    ctx->pc = 0x434C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434C70u;
            // 0x434c74: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C78u; }
        if (ctx->pc != 0x434C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C78u; }
        if (ctx->pc != 0x434C78u) { return; }
    }
    ctx->pc = 0x434C78u;
label_434c78:
    // 0x434c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x434c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_434c7c:
    // 0x434c7c: 0xc0f8e34  jal         func_3E38D0
label_434c80:
    if (ctx->pc == 0x434C80u) {
        ctx->pc = 0x434C80u;
            // 0x434c80: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x434C84u;
        goto label_434c84;
    }
    ctx->pc = 0x434C7Cu;
    SET_GPR_U32(ctx, 31, 0x434C84u);
    ctx->pc = 0x434C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434C7Cu;
            // 0x434c80: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C84u; }
        if (ctx->pc != 0x434C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C84u; }
        if (ctx->pc != 0x434C84u) { return; }
    }
    ctx->pc = 0x434C84u;
label_434c84:
    // 0x434c84: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x434c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_434c88:
    // 0x434c88: 0xc04c994  jal         func_132650
label_434c8c:
    if (ctx->pc == 0x434C8Cu) {
        ctx->pc = 0x434C8Cu;
            // 0x434c8c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x434C90u;
        goto label_434c90;
    }
    ctx->pc = 0x434C88u;
    SET_GPR_U32(ctx, 31, 0x434C90u);
    ctx->pc = 0x434C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434C88u;
            // 0x434c8c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C90u; }
        if (ctx->pc != 0x434C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C90u; }
        if (ctx->pc != 0x434C90u) { return; }
    }
    ctx->pc = 0x434C90u;
label_434c90:
    // 0x434c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x434c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_434c94:
    // 0x434c94: 0xc0e1b28  jal         func_386CA0
label_434c98:
    if (ctx->pc == 0x434C98u) {
        ctx->pc = 0x434C98u;
            // 0x434c98: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x434C9Cu;
        goto label_434c9c;
    }
    ctx->pc = 0x434C94u;
    SET_GPR_U32(ctx, 31, 0x434C9Cu);
    ctx->pc = 0x434C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434C94u;
            // 0x434c98: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C9Cu; }
        if (ctx->pc != 0x434C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434C9Cu; }
        if (ctx->pc != 0x434C9Cu) { return; }
    }
    ctx->pc = 0x434C9Cu;
label_434c9c:
    // 0x434c9c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x434c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_434ca0:
    // 0x434ca0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x434ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_434ca4:
    // 0x434ca4: 0xc04cc90  jal         func_133240
label_434ca8:
    if (ctx->pc == 0x434CA8u) {
        ctx->pc = 0x434CA8u;
            // 0x434ca8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434CACu;
        goto label_434cac;
    }
    ctx->pc = 0x434CA4u;
    SET_GPR_U32(ctx, 31, 0x434CACu);
    ctx->pc = 0x434CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434CA4u;
            // 0x434ca8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434CACu; }
        if (ctx->pc != 0x434CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434CACu; }
        if (ctx->pc != 0x434CACu) { return; }
    }
    ctx->pc = 0x434CACu;
label_434cac:
    // 0x434cac: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x434cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_434cb0:
    // 0x434cb0: 0xc04cc44  jal         func_133110
label_434cb4:
    if (ctx->pc == 0x434CB4u) {
        ctx->pc = 0x434CB4u;
            // 0x434cb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434CB8u;
        goto label_434cb8;
    }
    ctx->pc = 0x434CB0u;
    SET_GPR_U32(ctx, 31, 0x434CB8u);
    ctx->pc = 0x434CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434CB0u;
            // 0x434cb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434CB8u; }
        if (ctx->pc != 0x434CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434CB8u; }
        if (ctx->pc != 0x434CB8u) { return; }
    }
    ctx->pc = 0x434CB8u;
label_434cb8:
    // 0x434cb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x434cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_434cbc:
    // 0x434cbc: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x434cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_434cc0:
    // 0x434cc0: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x434cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_434cc4:
    // 0x434cc4: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x434cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_434cc8:
    // 0x434cc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x434cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_434ccc:
    // 0x434ccc: 0xc04cc44  jal         func_133110
label_434cd0:
    if (ctx->pc == 0x434CD0u) {
        ctx->pc = 0x434CD0u;
            // 0x434cd0: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->pc = 0x434CD4u;
        goto label_434cd4;
    }
    ctx->pc = 0x434CCCu;
    SET_GPR_U32(ctx, 31, 0x434CD4u);
    ctx->pc = 0x434CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434CCCu;
            // 0x434cd0: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434CD4u; }
        if (ctx->pc != 0x434CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434CD4u; }
        if (ctx->pc != 0x434CD4u) { return; }
    }
    ctx->pc = 0x434CD4u;
label_434cd4:
    // 0x434cd4: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x434cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_434cd8:
    // 0x434cd8: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x434cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_434cdc:
    // 0x434cdc: 0xc04cbf0  jal         func_132FC0
label_434ce0:
    if (ctx->pc == 0x434CE0u) {
        ctx->pc = 0x434CE0u;
            // 0x434ce0: 0x27a60290  addiu       $a2, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x434CE4u;
        goto label_434ce4;
    }
    ctx->pc = 0x434CDCu;
    SET_GPR_U32(ctx, 31, 0x434CE4u);
    ctx->pc = 0x434CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434CDCu;
            // 0x434ce0: 0x27a60290  addiu       $a2, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434CE4u; }
        if (ctx->pc != 0x434CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434CE4u; }
        if (ctx->pc != 0x434CE4u) { return; }
    }
    ctx->pc = 0x434CE4u;
label_434ce4:
    // 0x434ce4: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x434ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_434ce8:
    // 0x434ce8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x434ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_434cec:
    // 0x434cec: 0xc464ce50  lwc1        $f4, -0x31B0($v1)
    ctx->pc = 0x434cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_434cf0:
    // 0x434cf0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x434cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_434cf4:
    // 0x434cf4: 0xc482ce58  lwc1        $f2, -0x31A8($a0)
    ctx->pc = 0x434cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294954584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_434cf8:
    // 0x434cf8: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x434cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_434cfc:
    // 0x434cfc: 0xc7a502a4  lwc1        $f5, 0x2A4($sp)
    ctx->pc = 0x434cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_434d00:
    // 0x434d00: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x434d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_434d04:
    // 0x434d04: 0xc463ce54  lwc1        $f3, -0x31AC($v1)
    ctx->pc = 0x434d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_434d08:
    // 0x434d08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x434d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_434d0c:
    // 0x434d0c: 0xe6050124  swc1        $f5, 0x124($s0)
    ctx->pc = 0x434d0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_434d10:
    // 0x434d10: 0xc7a502a8  lwc1        $f5, 0x2A8($sp)
    ctx->pc = 0x434d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_434d14:
    // 0x434d14: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x434d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_434d18:
    // 0x434d18: 0xc460ce5c  lwc1        $f0, -0x31A4($v1)
    ctx->pc = 0x434d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_434d1c:
    // 0x434d1c: 0xe6050128  swc1        $f5, 0x128($s0)
    ctx->pc = 0x434d1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_434d20:
    // 0x434d20: 0xc7a502ac  lwc1        $f5, 0x2AC($sp)
    ctx->pc = 0x434d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_434d24:
    // 0x434d24: 0xe605012c  swc1        $f5, 0x12C($s0)
    ctx->pc = 0x434d24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_434d28:
    // 0x434d28: 0xc7a50290  lwc1        $f5, 0x290($sp)
    ctx->pc = 0x434d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_434d2c:
    // 0x434d2c: 0xe6050130  swc1        $f5, 0x130($s0)
    ctx->pc = 0x434d2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_434d30:
    // 0x434d30: 0xc7a50294  lwc1        $f5, 0x294($sp)
    ctx->pc = 0x434d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_434d34:
    // 0x434d34: 0xe6050134  swc1        $f5, 0x134($s0)
    ctx->pc = 0x434d34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
label_434d38:
    // 0x434d38: 0xc7a50298  lwc1        $f5, 0x298($sp)
    ctx->pc = 0x434d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_434d3c:
    // 0x434d3c: 0xe6050138  swc1        $f5, 0x138($s0)
    ctx->pc = 0x434d3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
label_434d40:
    // 0x434d40: 0xc7a5029c  lwc1        $f5, 0x29C($sp)
    ctx->pc = 0x434d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_434d44:
    // 0x434d44: 0xe605013c  swc1        $f5, 0x13C($s0)
    ctx->pc = 0x434d44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
label_434d48:
    // 0x434d48: 0xc7a502b0  lwc1        $f5, 0x2B0($sp)
    ctx->pc = 0x434d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_434d4c:
    // 0x434d4c: 0xe6050140  swc1        $f5, 0x140($s0)
    ctx->pc = 0x434d4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
label_434d50:
    // 0x434d50: 0xc7a502b4  lwc1        $f5, 0x2B4($sp)
    ctx->pc = 0x434d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_434d54:
    // 0x434d54: 0xe6050144  swc1        $f5, 0x144($s0)
    ctx->pc = 0x434d54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
label_434d58:
    // 0x434d58: 0xc7a502b8  lwc1        $f5, 0x2B8($sp)
    ctx->pc = 0x434d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_434d5c:
    // 0x434d5c: 0xe6050148  swc1        $f5, 0x148($s0)
    ctx->pc = 0x434d5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
label_434d60:
    // 0x434d60: 0xc7a502bc  lwc1        $f5, 0x2BC($sp)
    ctx->pc = 0x434d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_434d64:
    // 0x434d64: 0xe605014c  swc1        $f5, 0x14C($s0)
    ctx->pc = 0x434d64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 332), bits); }
label_434d68:
    // 0x434d68: 0xe6040150  swc1        $f4, 0x150($s0)
    ctx->pc = 0x434d68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
label_434d6c:
    // 0x434d6c: 0xe6030154  swc1        $f3, 0x154($s0)
    ctx->pc = 0x434d6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
label_434d70:
    // 0x434d70: 0xe6020158  swc1        $f2, 0x158($s0)
    ctx->pc = 0x434d70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
label_434d74:
    // 0x434d74: 0xe600015c  swc1        $f0, 0x15C($s0)
    ctx->pc = 0x434d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
label_434d78:
    // 0x434d78: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x434d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
label_434d7c:
    // 0x434d7c: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x434d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
label_434d80:
    // 0x434d80: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x434d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_434d84:
    // 0x434d84: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x434d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_434d88:
    // 0x434d88: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x434d88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_434d8c:
    // 0x434d8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x434d8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_434d90:
    // 0x434d90: 0x450000e7  bc1f        . + 4 + (0xE7 << 2)
label_434d94:
    if (ctx->pc == 0x434D94u) {
        ctx->pc = 0x434D94u;
            // 0x434d94: 0xe6000108  swc1        $f0, 0x108($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
        ctx->pc = 0x434D98u;
        goto label_434d98;
    }
    ctx->pc = 0x434D90u;
    {
        const bool branch_taken_0x434d90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x434D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x434D90u;
            // 0x434d94: 0xe6000108  swc1        $f0, 0x108($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x434d90) {
            ctx->pc = 0x435130u;
            goto label_435130;
        }
    }
    ctx->pc = 0x434D98u;
label_434d98:
    // 0x434d98: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x434d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_434d9c:
    // 0x434d9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x434d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_434da0:
    // 0x434da0: 0xae030108  sw          $v1, 0x108($s0)
    ctx->pc = 0x434da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 3));
label_434da4:
    // 0x434da4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x434da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_434da8:
    // 0x434da8: 0x8c420788  lw          $v0, 0x788($v0)
    ctx->pc = 0x434da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_434dac:
    // 0x434dac: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x434dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_434db0:
    // 0x434db0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_434db4:
    if (ctx->pc == 0x434DB4u) {
        ctx->pc = 0x434DB8u;
        goto label_434db8;
    }
    ctx->pc = 0x434DB0u;
    {
        const bool branch_taken_0x434db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x434db0) {
            ctx->pc = 0x434DC0u;
            goto label_434dc0;
        }
    }
    ctx->pc = 0x434DB8u;
label_434db8:
    // 0x434db8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x434db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_434dbc:
    // 0x434dbc: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x434dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_434dc0:
    // 0x434dc0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x434dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_434dc4:
    // 0x434dc4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x434dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_434dc8:
    // 0x434dc8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x434dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_434dcc:
    // 0x434dcc: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x434dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_434dd0:
    // 0x434dd0: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x434dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_434dd4:
    // 0x434dd4: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x434dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_434dd8:
    // 0x434dd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x434dd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_434ddc:
    // 0x434ddc: 0xc0bb404  jal         func_2ED010
label_434de0:
    if (ctx->pc == 0x434DE0u) {
        ctx->pc = 0x434DE0u;
            // 0x434de0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x434DE4u;
        goto label_434de4;
    }
    ctx->pc = 0x434DDCu;
    SET_GPR_U32(ctx, 31, 0x434DE4u);
    ctx->pc = 0x434DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434DDCu;
            // 0x434de0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434DE4u; }
        if (ctx->pc != 0x434DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434DE4u; }
        if (ctx->pc != 0x434DE4u) { return; }
    }
    ctx->pc = 0x434DE4u;
label_434de4:
    // 0x434de4: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_434de8:
    if (ctx->pc == 0x434DE8u) {
        ctx->pc = 0x434DECu;
        goto label_434dec;
    }
    ctx->pc = 0x434DE4u;
    {
        const bool branch_taken_0x434de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x434de4) {
            ctx->pc = 0x435130u;
            goto label_435130;
        }
    }
    ctx->pc = 0x434DECu;
label_434dec:
    // 0x434dec: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x434decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_434df0:
    // 0x434df0: 0xc04cc04  jal         func_133010
label_434df4:
    if (ctx->pc == 0x434DF4u) {
        ctx->pc = 0x434DF4u;
            // 0x434df4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x434DF8u;
        goto label_434df8;
    }
    ctx->pc = 0x434DF0u;
    SET_GPR_U32(ctx, 31, 0x434DF8u);
    ctx->pc = 0x434DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434DF0u;
            // 0x434df4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434DF8u; }
        if (ctx->pc != 0x434DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434DF8u; }
        if (ctx->pc != 0x434DF8u) { return; }
    }
    ctx->pc = 0x434DF8u;
label_434df8:
    // 0x434df8: 0xc60200f4  lwc1        $f2, 0xF4($s0)
    ctx->pc = 0x434df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_434dfc:
    // 0x434dfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x434dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_434e00:
    // 0x434e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434e04:
    // 0x434e04: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x434e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_434e08:
    // 0x434e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x434e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_434e0c:
    // 0x434e0c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x434e0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_434e10:
    // 0x434e10: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x434e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_434e14:
    // 0x434e14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_434e18:
    if (ctx->pc == 0x434E18u) {
        ctx->pc = 0x434E18u;
            // 0x434e18: 0x4600a0c2  mul.s       $f3, $f20, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x434E1Cu;
        goto label_434e1c;
    }
    ctx->pc = 0x434E14u;
    {
        const bool branch_taken_0x434e14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x434E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x434E14u;
            // 0x434e18: 0x4600a0c2  mul.s       $f3, $f20, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x434e14) {
            ctx->pc = 0x434E20u;
            goto label_434e20;
        }
    }
    ctx->pc = 0x434E1Cu;
label_434e1c:
    // 0x434e1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x434e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_434e20:
    // 0x434e20: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_434e24:
    if (ctx->pc == 0x434E24u) {
        ctx->pc = 0x434E24u;
            // 0x434e24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x434E28u;
        goto label_434e28;
    }
    ctx->pc = 0x434E20u;
    {
        const bool branch_taken_0x434e20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x434e20) {
            ctx->pc = 0x434E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x434E20u;
            // 0x434e24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x434E34u;
            goto label_434e34;
        }
    }
    ctx->pc = 0x434E28u;
label_434e28:
    // 0x434e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434e2c:
    // 0x434e2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_434e30:
    if (ctx->pc == 0x434E30u) {
        ctx->pc = 0x434E30u;
            // 0x434e30: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x434E34u;
        goto label_434e34;
    }
    ctx->pc = 0x434E2Cu;
    {
        const bool branch_taken_0x434e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x434E2Cu;
            // 0x434e30: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x434e2c) {
            ctx->pc = 0x434E4Cu;
            goto label_434e4c;
        }
    }
    ctx->pc = 0x434E34u;
label_434e34:
    // 0x434e34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x434e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_434e38:
    // 0x434e38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x434e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_434e3c:
    // 0x434e3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x434e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434e40:
    // 0x434e40: 0x0  nop
    ctx->pc = 0x434e40u;
    // NOP
label_434e44:
    // 0x434e44: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x434e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_434e48:
    // 0x434e48: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x434e48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_434e4c:
    // 0x434e4c: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x434e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_434e50:
    // 0x434e50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x434e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434e54:
    // 0x434e54: 0x0  nop
    ctx->pc = 0x434e54u;
    // NOP
label_434e58:
    // 0x434e58: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x434e58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_434e5c:
    // 0x434e5c: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x434e5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_434e60:
    // 0x434e60: 0xc10d100  jal         func_434400
label_434e64:
    if (ctx->pc == 0x434E64u) {
        ctx->pc = 0x434E64u;
            // 0x434e64: 0xe60000f4  swc1        $f0, 0xF4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
        ctx->pc = 0x434E68u;
        goto label_434e68;
    }
    ctx->pc = 0x434E60u;
    SET_GPR_U32(ctx, 31, 0x434E68u);
    ctx->pc = 0x434E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434E60u;
            // 0x434e64: 0xe60000f4  swc1        $f0, 0xF4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x434400u;
    if (runtime->hasFunction(0x434400u)) {
        auto targetFn = runtime->lookupFunction(0x434400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434E68u; }
        if (ctx->pc != 0x434E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434400_0x434400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434E68u; }
        if (ctx->pc != 0x434E68u) { return; }
    }
    ctx->pc = 0x434E68u;
label_434e68:
    // 0x434e68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434e6c:
    // 0x434e6c: 0xc0f8178  jal         func_3E05E0
label_434e70:
    if (ctx->pc == 0x434E70u) {
        ctx->pc = 0x434E70u;
            // 0x434e70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434E74u;
        goto label_434e74;
    }
    ctx->pc = 0x434E6Cu;
    SET_GPR_U32(ctx, 31, 0x434E74u);
    ctx->pc = 0x434E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434E6Cu;
            // 0x434e70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434E74u; }
        if (ctx->pc != 0x434E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434E74u; }
        if (ctx->pc != 0x434E74u) { return; }
    }
    ctx->pc = 0x434E74u;
label_434e74:
    // 0x434e74: 0xc0d1c14  jal         func_347050
label_434e78:
    if (ctx->pc == 0x434E78u) {
        ctx->pc = 0x434E78u;
            // 0x434e78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434E7Cu;
        goto label_434e7c;
    }
    ctx->pc = 0x434E74u;
    SET_GPR_U32(ctx, 31, 0x434E7Cu);
    ctx->pc = 0x434E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434E74u;
            // 0x434e78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434E7Cu; }
        if (ctx->pc != 0x434E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434E7Cu; }
        if (ctx->pc != 0x434E7Cu) { return; }
    }
    ctx->pc = 0x434E7Cu;
label_434e7c:
    // 0x434e7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x434e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434e80:
    // 0x434e80: 0xc04f278  jal         func_13C9E0
label_434e84:
    if (ctx->pc == 0x434E84u) {
        ctx->pc = 0x434E84u;
            // 0x434e84: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x434E88u;
        goto label_434e88;
    }
    ctx->pc = 0x434E80u;
    SET_GPR_U32(ctx, 31, 0x434E88u);
    ctx->pc = 0x434E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434E80u;
            // 0x434e84: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434E88u; }
        if (ctx->pc != 0x434E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434E88u; }
        if (ctx->pc != 0x434E88u) { return; }
    }
    ctx->pc = 0x434E88u;
label_434e88:
    // 0x434e88: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x434e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_434e8c:
    // 0x434e8c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x434e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_434e90:
    // 0x434e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434e94:
    // 0x434e94: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x434e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_434e98:
    // 0x434e98: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x434e98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_434e9c:
    // 0x434e9c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x434e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_434ea0:
    // 0x434ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434ea4:
    // 0x434ea4: 0x0  nop
    ctx->pc = 0x434ea4u;
    // NOP
label_434ea8:
    // 0x434ea8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x434ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_434eac:
    // 0x434eac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x434eacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_434eb0:
    // 0x434eb0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x434eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_434eb4:
    // 0x434eb4: 0xc04f2b8  jal         func_13CAE0
label_434eb8:
    if (ctx->pc == 0x434EB8u) {
        ctx->pc = 0x434EB8u;
            // 0x434eb8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x434EBCu;
        goto label_434ebc;
    }
    ctx->pc = 0x434EB4u;
    SET_GPR_U32(ctx, 31, 0x434EBCu);
    ctx->pc = 0x434EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434EB4u;
            // 0x434eb8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434EBCu; }
        if (ctx->pc != 0x434EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434EBCu; }
        if (ctx->pc != 0x434EBCu) { return; }
    }
    ctx->pc = 0x434EBCu;
label_434ebc:
    // 0x434ebc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x434ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_434ec0:
    // 0x434ec0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x434ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_434ec4:
    // 0x434ec4: 0xc04cd60  jal         func_133580
label_434ec8:
    if (ctx->pc == 0x434EC8u) {
        ctx->pc = 0x434EC8u;
            // 0x434ec8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434ECCu;
        goto label_434ecc;
    }
    ctx->pc = 0x434EC4u;
    SET_GPR_U32(ctx, 31, 0x434ECCu);
    ctx->pc = 0x434EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434EC4u;
            // 0x434ec8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434ECCu; }
        if (ctx->pc != 0x434ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434ECCu; }
        if (ctx->pc != 0x434ECCu) { return; }
    }
    ctx->pc = 0x434ECCu;
label_434ecc:
    // 0x434ecc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x434eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_434ed0:
    // 0x434ed0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x434ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_434ed4:
    // 0x434ed4: 0xc04cca0  jal         func_133280
label_434ed8:
    if (ctx->pc == 0x434ED8u) {
        ctx->pc = 0x434ED8u;
            // 0x434ed8: 0x260600e0  addiu       $a2, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x434EDCu;
        goto label_434edc;
    }
    ctx->pc = 0x434ED4u;
    SET_GPR_U32(ctx, 31, 0x434EDCu);
    ctx->pc = 0x434ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434ED4u;
            // 0x434ed8: 0x260600e0  addiu       $a2, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434EDCu; }
        if (ctx->pc != 0x434EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434EDCu; }
        if (ctx->pc != 0x434EDCu) { return; }
    }
    ctx->pc = 0x434EDCu;
label_434edc:
    // 0x434edc: 0xc10d0fc  jal         func_4343F0
label_434ee0:
    if (ctx->pc == 0x434EE0u) {
        ctx->pc = 0x434EE4u;
        goto label_434ee4;
    }
    ctx->pc = 0x434EDCu;
    SET_GPR_U32(ctx, 31, 0x434EE4u);
    ctx->pc = 0x4343F0u;
    if (runtime->hasFunction(0x4343F0u)) {
        auto targetFn = runtime->lookupFunction(0x4343F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434EE4u; }
        if (ctx->pc != 0x434EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343F0_0x4343f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434EE4u; }
        if (ctx->pc != 0x434EE4u) { return; }
    }
    ctx->pc = 0x434EE4u;
label_434ee4:
    // 0x434ee4: 0x8e050114  lw          $a1, 0x114($s0)
    ctx->pc = 0x434ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_434ee8:
    // 0x434ee8: 0xc10d0f4  jal         func_4343D0
label_434eec:
    if (ctx->pc == 0x434EECu) {
        ctx->pc = 0x434EECu;
            // 0x434eec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434EF0u;
        goto label_434ef0;
    }
    ctx->pc = 0x434EE8u;
    SET_GPR_U32(ctx, 31, 0x434EF0u);
    ctx->pc = 0x434EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434EE8u;
            // 0x434eec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4343D0u;
    if (runtime->hasFunction(0x4343D0u)) {
        auto targetFn = runtime->lookupFunction(0x4343D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434EF0u; }
        if (ctx->pc != 0x434EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343D0_0x4343d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434EF0u; }
        if (ctx->pc != 0x434EF0u) { return; }
    }
    ctx->pc = 0x434EF0u;
label_434ef0:
    // 0x434ef0: 0xc0d1c10  jal         func_347040
label_434ef4:
    if (ctx->pc == 0x434EF4u) {
        ctx->pc = 0x434EF4u;
            // 0x434ef4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434EF8u;
        goto label_434ef8;
    }
    ctx->pc = 0x434EF0u;
    SET_GPR_U32(ctx, 31, 0x434EF8u);
    ctx->pc = 0x434EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434EF0u;
            // 0x434ef4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434EF8u; }
        if (ctx->pc != 0x434EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434EF8u; }
        if (ctx->pc != 0x434EF8u) { return; }
    }
    ctx->pc = 0x434EF8u;
label_434ef8:
    // 0x434ef8: 0xc60c00f4  lwc1        $f12, 0xF4($s0)
    ctx->pc = 0x434ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_434efc:
    // 0x434efc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x434efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_434f00:
    // 0x434f00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x434f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434f04:
    // 0x434f04: 0xc04cc7c  jal         func_1331F0
label_434f08:
    if (ctx->pc == 0x434F08u) {
        ctx->pc = 0x434F08u;
            // 0x434f08: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434F0Cu;
        goto label_434f0c;
    }
    ctx->pc = 0x434F04u;
    SET_GPR_U32(ctx, 31, 0x434F0Cu);
    ctx->pc = 0x434F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434F04u;
            // 0x434f08: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F0Cu; }
        if (ctx->pc != 0x434F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F0Cu; }
        if (ctx->pc != 0x434F0Cu) { return; }
    }
    ctx->pc = 0x434F0Cu;
label_434f0c:
    // 0x434f0c: 0xc10d100  jal         func_434400
label_434f10:
    if (ctx->pc == 0x434F10u) {
        ctx->pc = 0x434F14u;
        goto label_434f14;
    }
    ctx->pc = 0x434F0Cu;
    SET_GPR_U32(ctx, 31, 0x434F14u);
    ctx->pc = 0x434400u;
    if (runtime->hasFunction(0x434400u)) {
        auto targetFn = runtime->lookupFunction(0x434400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F14u; }
        if (ctx->pc != 0x434F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434400_0x434400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F14u; }
        if (ctx->pc != 0x434F14u) { return; }
    }
    ctx->pc = 0x434F14u;
label_434f14:
    // 0x434f14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434f18:
    // 0x434f18: 0xc0f8178  jal         func_3E05E0
label_434f1c:
    if (ctx->pc == 0x434F1Cu) {
        ctx->pc = 0x434F1Cu;
            // 0x434f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434F20u;
        goto label_434f20;
    }
    ctx->pc = 0x434F18u;
    SET_GPR_U32(ctx, 31, 0x434F20u);
    ctx->pc = 0x434F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434F18u;
            // 0x434f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F20u; }
        if (ctx->pc != 0x434F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F20u; }
        if (ctx->pc != 0x434F20u) { return; }
    }
    ctx->pc = 0x434F20u;
label_434f20:
    // 0x434f20: 0xc10d0f0  jal         func_4343C0
label_434f24:
    if (ctx->pc == 0x434F24u) {
        ctx->pc = 0x434F24u;
            // 0x434f24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434F28u;
        goto label_434f28;
    }
    ctx->pc = 0x434F20u;
    SET_GPR_U32(ctx, 31, 0x434F28u);
    ctx->pc = 0x434F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434F20u;
            // 0x434f24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4343C0u;
    if (runtime->hasFunction(0x4343C0u)) {
        auto targetFn = runtime->lookupFunction(0x4343C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F28u; }
        if (ctx->pc != 0x434F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343C0_0x4343c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F28u; }
        if (ctx->pc != 0x434F28u) { return; }
    }
    ctx->pc = 0x434F28u;
label_434f28:
    // 0x434f28: 0xc0efc48  jal         func_3BF120
label_434f2c:
    if (ctx->pc == 0x434F2Cu) {
        ctx->pc = 0x434F2Cu;
            // 0x434f2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434F30u;
        goto label_434f30;
    }
    ctx->pc = 0x434F28u;
    SET_GPR_U32(ctx, 31, 0x434F30u);
    ctx->pc = 0x434F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434F28u;
            // 0x434f2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F30u; }
        if (ctx->pc != 0x434F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F30u; }
        if (ctx->pc != 0x434F30u) { return; }
    }
    ctx->pc = 0x434F30u;
label_434f30:
    // 0x434f30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x434f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434f34:
    // 0x434f34: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x434f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_434f38:
    // 0x434f38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x434f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_434f3c:
    // 0x434f3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x434f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_434f40:
    // 0x434f40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x434f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_434f44:
    // 0x434f44: 0xc60200f4  lwc1        $f2, 0xF4($s0)
    ctx->pc = 0x434f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_434f48:
    // 0x434f48: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x434f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_434f4c:
    // 0x434f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434f50:
    // 0x434f50: 0x0  nop
    ctx->pc = 0x434f50u;
    // NOP
label_434f54:
    // 0x434f54: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x434f54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_434f58:
    // 0x434f58: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x434f58u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_434f5c:
    // 0x434f5c: 0xc04cc7c  jal         func_1331F0
label_434f60:
    if (ctx->pc == 0x434F60u) {
        ctx->pc = 0x434F60u;
            // 0x434f60: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x434F64u;
        goto label_434f64;
    }
    ctx->pc = 0x434F5Cu;
    SET_GPR_U32(ctx, 31, 0x434F64u);
    ctx->pc = 0x434F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434F5Cu;
            // 0x434f60: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F64u; }
        if (ctx->pc != 0x434F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F64u; }
        if (ctx->pc != 0x434F64u) { return; }
    }
    ctx->pc = 0x434F64u;
label_434f64:
    // 0x434f64: 0xc10d100  jal         func_434400
label_434f68:
    if (ctx->pc == 0x434F68u) {
        ctx->pc = 0x434F6Cu;
        goto label_434f6c;
    }
    ctx->pc = 0x434F64u;
    SET_GPR_U32(ctx, 31, 0x434F6Cu);
    ctx->pc = 0x434400u;
    if (runtime->hasFunction(0x434400u)) {
        auto targetFn = runtime->lookupFunction(0x434400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F6Cu; }
        if (ctx->pc != 0x434F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00434400_0x434400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F6Cu; }
        if (ctx->pc != 0x434F6Cu) { return; }
    }
    ctx->pc = 0x434F6Cu;
label_434f6c:
    // 0x434f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434f70:
    // 0x434f70: 0xc0f8178  jal         func_3E05E0
label_434f74:
    if (ctx->pc == 0x434F74u) {
        ctx->pc = 0x434F74u;
            // 0x434f74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434F78u;
        goto label_434f78;
    }
    ctx->pc = 0x434F70u;
    SET_GPR_U32(ctx, 31, 0x434F78u);
    ctx->pc = 0x434F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434F70u;
            // 0x434f74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F78u; }
        if (ctx->pc != 0x434F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F78u; }
        if (ctx->pc != 0x434F78u) { return; }
    }
    ctx->pc = 0x434F78u;
label_434f78:
    // 0x434f78: 0xc10d0f0  jal         func_4343C0
label_434f7c:
    if (ctx->pc == 0x434F7Cu) {
        ctx->pc = 0x434F7Cu;
            // 0x434f7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434F80u;
        goto label_434f80;
    }
    ctx->pc = 0x434F78u;
    SET_GPR_U32(ctx, 31, 0x434F80u);
    ctx->pc = 0x434F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434F78u;
            // 0x434f7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4343C0u;
    if (runtime->hasFunction(0x4343C0u)) {
        auto targetFn = runtime->lookupFunction(0x4343C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F80u; }
        if (ctx->pc != 0x434F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004343C0_0x4343c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F80u; }
        if (ctx->pc != 0x434F80u) { return; }
    }
    ctx->pc = 0x434F80u;
label_434f80:
    // 0x434f80: 0xc0cefec  jal         func_33BFB0
label_434f84:
    if (ctx->pc == 0x434F84u) {
        ctx->pc = 0x434F84u;
            // 0x434f84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434F88u;
        goto label_434f88;
    }
    ctx->pc = 0x434F80u;
    SET_GPR_U32(ctx, 31, 0x434F88u);
    ctx->pc = 0x434F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434F80u;
            // 0x434f84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F88u; }
        if (ctx->pc != 0x434F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434F88u; }
        if (ctx->pc != 0x434F88u) { return; }
    }
    ctx->pc = 0x434F88u;
label_434f88:
    // 0x434f88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x434f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434f8c:
    // 0x434f8c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x434f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_434f90:
    // 0x434f90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x434f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_434f94:
    // 0x434f94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x434f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_434f98:
    // 0x434f98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x434f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_434f9c:
    // 0x434f9c: 0xc60200f4  lwc1        $f2, 0xF4($s0)
    ctx->pc = 0x434f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_434fa0:
    // 0x434fa0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x434fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_434fa4:
    // 0x434fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x434fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434fa8:
    // 0x434fa8: 0x0  nop
    ctx->pc = 0x434fa8u;
    // NOP
label_434fac:
    // 0x434fac: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x434facu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_434fb0:
    // 0x434fb0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x434fb0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_434fb4:
    // 0x434fb4: 0xc04cc7c  jal         func_1331F0
label_434fb8:
    if (ctx->pc == 0x434FB8u) {
        ctx->pc = 0x434FB8u;
            // 0x434fb8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x434FBCu;
        goto label_434fbc;
    }
    ctx->pc = 0x434FB4u;
    SET_GPR_U32(ctx, 31, 0x434FBCu);
    ctx->pc = 0x434FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434FB4u;
            // 0x434fb8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434FBCu; }
        if (ctx->pc != 0x434FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434FBCu; }
        if (ctx->pc != 0x434FBCu) { return; }
    }
    ctx->pc = 0x434FBCu;
label_434fbc:
    // 0x434fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x434fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_434fc0:
    // 0x434fc0: 0xc0f8e34  jal         func_3E38D0
label_434fc4:
    if (ctx->pc == 0x434FC4u) {
        ctx->pc = 0x434FC4u;
            // 0x434fc4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x434FC8u;
        goto label_434fc8;
    }
    ctx->pc = 0x434FC0u;
    SET_GPR_U32(ctx, 31, 0x434FC8u);
    ctx->pc = 0x434FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434FC0u;
            // 0x434fc4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434FC8u; }
        if (ctx->pc != 0x434FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434FC8u; }
        if (ctx->pc != 0x434FC8u) { return; }
    }
    ctx->pc = 0x434FC8u;
label_434fc8:
    // 0x434fc8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x434fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_434fcc:
    // 0x434fcc: 0xc04c994  jal         func_132650
label_434fd0:
    if (ctx->pc == 0x434FD0u) {
        ctx->pc = 0x434FD0u;
            // 0x434fd0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x434FD4u;
        goto label_434fd4;
    }
    ctx->pc = 0x434FCCu;
    SET_GPR_U32(ctx, 31, 0x434FD4u);
    ctx->pc = 0x434FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434FCCu;
            // 0x434fd0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434FD4u; }
        if (ctx->pc != 0x434FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434FD4u; }
        if (ctx->pc != 0x434FD4u) { return; }
    }
    ctx->pc = 0x434FD4u;
label_434fd4:
    // 0x434fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x434fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_434fd8:
    // 0x434fd8: 0xc0e1b28  jal         func_386CA0
label_434fdc:
    if (ctx->pc == 0x434FDCu) {
        ctx->pc = 0x434FDCu;
            // 0x434fdc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x434FE0u;
        goto label_434fe0;
    }
    ctx->pc = 0x434FD8u;
    SET_GPR_U32(ctx, 31, 0x434FE0u);
    ctx->pc = 0x434FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434FD8u;
            // 0x434fdc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434FE0u; }
        if (ctx->pc != 0x434FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434FE0u; }
        if (ctx->pc != 0x434FE0u) { return; }
    }
    ctx->pc = 0x434FE0u;
label_434fe0:
    // 0x434fe0: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x434fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_434fe4:
    // 0x434fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x434fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_434fe8:
    // 0x434fe8: 0x0  nop
    ctx->pc = 0x434fe8u;
    // NOP
label_434fec:
    // 0x434fec: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x434fecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_434ff0:
    // 0x434ff0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x434ff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_434ff4:
    // 0x434ff4: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
label_434ff8:
    if (ctx->pc == 0x434FF8u) {
        ctx->pc = 0x434FF8u;
            // 0x434ff8: 0xe60100fc  swc1        $f1, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->pc = 0x434FFCu;
        goto label_434ffc;
    }
    ctx->pc = 0x434FF4u;
    {
        const bool branch_taken_0x434ff4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x434FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x434FF4u;
            // 0x434ff8: 0xe60100fc  swc1        $f1, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x434ff4) {
            ctx->pc = 0x435130u;
            goto label_435130;
        }
    }
    ctx->pc = 0x434FFCu;
label_434ffc:
    // 0x434ffc: 0xc10d104  jal         func_434410
label_435000:
    if (ctx->pc == 0x435000u) {
        ctx->pc = 0x435000u;
            // 0x435000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435004u;
        goto label_435004;
    }
    ctx->pc = 0x434FFCu;
    SET_GPR_U32(ctx, 31, 0x435004u);
    ctx->pc = 0x435000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x434FFCu;
            // 0x435000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x434410u;
    goto label_434410;
    ctx->pc = 0x435004u;
label_435004:
    // 0x435004: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x435004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_435008:
    // 0x435008: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x435008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_43500c:
    // 0x43500c: 0xc04cc90  jal         func_133240
label_435010:
    if (ctx->pc == 0x435010u) {
        ctx->pc = 0x435010u;
            // 0x435010: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435014u;
        goto label_435014;
    }
    ctx->pc = 0x43500Cu;
    SET_GPR_U32(ctx, 31, 0x435014u);
    ctx->pc = 0x435010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43500Cu;
            // 0x435010: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435014u; }
        if (ctx->pc != 0x435014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435014u; }
        if (ctx->pc != 0x435014u) { return; }
    }
    ctx->pc = 0x435014u;
label_435014:
    // 0x435014: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x435014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_435018:
    // 0x435018: 0xc04cc44  jal         func_133110
label_43501c:
    if (ctx->pc == 0x43501Cu) {
        ctx->pc = 0x43501Cu;
            // 0x43501c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435020u;
        goto label_435020;
    }
    ctx->pc = 0x435018u;
    SET_GPR_U32(ctx, 31, 0x435020u);
    ctx->pc = 0x43501Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435018u;
            // 0x43501c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435020u; }
        if (ctx->pc != 0x435020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435020u; }
        if (ctx->pc != 0x435020u) { return; }
    }
    ctx->pc = 0x435020u;
label_435020:
    // 0x435020: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x435020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_435024:
    // 0x435024: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x435024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_435028:
    // 0x435028: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x435028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_43502c:
    // 0x43502c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x43502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_435030:
    // 0x435030: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x435030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_435034:
    // 0x435034: 0xc04cc44  jal         func_133110
label_435038:
    if (ctx->pc == 0x435038u) {
        ctx->pc = 0x435038u;
            // 0x435038: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->pc = 0x43503Cu;
        goto label_43503c;
    }
    ctx->pc = 0x435034u;
    SET_GPR_U32(ctx, 31, 0x43503Cu);
    ctx->pc = 0x435038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435034u;
            // 0x435038: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43503Cu; }
        if (ctx->pc != 0x43503Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43503Cu; }
        if (ctx->pc != 0x43503Cu) { return; }
    }
    ctx->pc = 0x43503Cu;
label_43503c:
    // 0x43503c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x43503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_435040:
    // 0x435040: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x435040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_435044:
    // 0x435044: 0xc04cbf0  jal         func_132FC0
label_435048:
    if (ctx->pc == 0x435048u) {
        ctx->pc = 0x435048u;
            // 0x435048: 0x27a60260  addiu       $a2, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x43504Cu;
        goto label_43504c;
    }
    ctx->pc = 0x435044u;
    SET_GPR_U32(ctx, 31, 0x43504Cu);
    ctx->pc = 0x435048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435044u;
            // 0x435048: 0x27a60260  addiu       $a2, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43504Cu; }
        if (ctx->pc != 0x43504Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43504Cu; }
        if (ctx->pc != 0x43504Cu) { return; }
    }
    ctx->pc = 0x43504Cu;
label_43504c:
    // 0x43504c: 0xc7a00270  lwc1        $f0, 0x270($sp)
    ctx->pc = 0x43504cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_435050:
    // 0x435050: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x435050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_435054:
    // 0x435054: 0xc463ce50  lwc1        $f3, -0x31B0($v1)
    ctx->pc = 0x435054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_435058:
    // 0x435058: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x435058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_43505c:
    // 0x43505c: 0xc481ce58  lwc1        $f1, -0x31A8($a0)
    ctx->pc = 0x43505cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294954584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_435060:
    // 0x435060: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x435060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_435064:
    // 0x435064: 0xc7a40274  lwc1        $f4, 0x274($sp)
    ctx->pc = 0x435064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_435068:
    // 0x435068: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x435068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_43506c:
    // 0x43506c: 0xc462ce54  lwc1        $f2, -0x31AC($v1)
    ctx->pc = 0x43506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_435070:
    // 0x435070: 0xe6040124  swc1        $f4, 0x124($s0)
    ctx->pc = 0x435070u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_435074:
    // 0x435074: 0xc7a40278  lwc1        $f4, 0x278($sp)
    ctx->pc = 0x435074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_435078:
    // 0x435078: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x435078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_43507c:
    // 0x43507c: 0xc460ce5c  lwc1        $f0, -0x31A4($v1)
    ctx->pc = 0x43507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_435080:
    // 0x435080: 0xe6040128  swc1        $f4, 0x128($s0)
    ctx->pc = 0x435080u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_435084:
    // 0x435084: 0xc7a4027c  lwc1        $f4, 0x27C($sp)
    ctx->pc = 0x435084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_435088:
    // 0x435088: 0xe604012c  swc1        $f4, 0x12C($s0)
    ctx->pc = 0x435088u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_43508c:
    // 0x43508c: 0xc7a40260  lwc1        $f4, 0x260($sp)
    ctx->pc = 0x43508cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_435090:
    // 0x435090: 0xe6040130  swc1        $f4, 0x130($s0)
    ctx->pc = 0x435090u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_435094:
    // 0x435094: 0xc7a40264  lwc1        $f4, 0x264($sp)
    ctx->pc = 0x435094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_435098:
    // 0x435098: 0xe6040134  swc1        $f4, 0x134($s0)
    ctx->pc = 0x435098u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
label_43509c:
    // 0x43509c: 0xc7a40268  lwc1        $f4, 0x268($sp)
    ctx->pc = 0x43509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4350a0:
    // 0x4350a0: 0xe6040138  swc1        $f4, 0x138($s0)
    ctx->pc = 0x4350a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
label_4350a4:
    // 0x4350a4: 0xc7a4026c  lwc1        $f4, 0x26C($sp)
    ctx->pc = 0x4350a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4350a8:
    // 0x4350a8: 0xe604013c  swc1        $f4, 0x13C($s0)
    ctx->pc = 0x4350a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
label_4350ac:
    // 0x4350ac: 0xc7a40280  lwc1        $f4, 0x280($sp)
    ctx->pc = 0x4350acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4350b0:
    // 0x4350b0: 0xe6040140  swc1        $f4, 0x140($s0)
    ctx->pc = 0x4350b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
label_4350b4:
    // 0x4350b4: 0xc7a40284  lwc1        $f4, 0x284($sp)
    ctx->pc = 0x4350b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4350b8:
    // 0x4350b8: 0xe6040144  swc1        $f4, 0x144($s0)
    ctx->pc = 0x4350b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
label_4350bc:
    // 0x4350bc: 0xc7a40288  lwc1        $f4, 0x288($sp)
    ctx->pc = 0x4350bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4350c0:
    // 0x4350c0: 0xe6040148  swc1        $f4, 0x148($s0)
    ctx->pc = 0x4350c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
label_4350c4:
    // 0x4350c4: 0xc7a4028c  lwc1        $f4, 0x28C($sp)
    ctx->pc = 0x4350c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4350c8:
    // 0x4350c8: 0xe604014c  swc1        $f4, 0x14C($s0)
    ctx->pc = 0x4350c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 332), bits); }
label_4350cc:
    // 0x4350cc: 0xe6030150  swc1        $f3, 0x150($s0)
    ctx->pc = 0x4350ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
label_4350d0:
    // 0x4350d0: 0xe6020154  swc1        $f2, 0x154($s0)
    ctx->pc = 0x4350d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
label_4350d4:
    // 0x4350d4: 0xe6010158  swc1        $f1, 0x158($s0)
    ctx->pc = 0x4350d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
label_4350d8:
    // 0x4350d8: 0xe600015c  swc1        $f0, 0x15C($s0)
    ctx->pc = 0x4350d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
label_4350dc:
    // 0x4350dc: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x4350dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
label_4350e0:
    // 0x4350e0: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x4350e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
label_4350e4:
    // 0x4350e4: 0x10000012  b           . + 4 + (0x12 << 2)
label_4350e8:
    if (ctx->pc == 0x4350E8u) {
        ctx->pc = 0x4350E8u;
            // 0x4350e8: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
        ctx->pc = 0x4350ECu;
        goto label_4350ec;
    }
    ctx->pc = 0x4350E4u;
    {
        const bool branch_taken_0x4350e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4350E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4350E4u;
            // 0x4350e8: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4350e4) {
            ctx->pc = 0x435130u;
            goto label_435130;
        }
    }
    ctx->pc = 0x4350ECu;
label_4350ec:
    // 0x4350ec: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4350ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4350f0:
    // 0x4350f0: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x4350f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_4350f4:
    // 0x4350f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4350f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4350f8:
    // 0x4350f8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4350f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4350fc:
    // 0x4350fc: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x4350fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_435100:
    // 0x435100: 0xc089688  jal         func_225A20
label_435104:
    if (ctx->pc == 0x435104u) {
        ctx->pc = 0x435104u;
            // 0x435104: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x435108u;
        goto label_435108;
    }
    ctx->pc = 0x435100u;
    SET_GPR_U32(ctx, 31, 0x435108u);
    ctx->pc = 0x435104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435100u;
            // 0x435104: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435108u; }
        if (ctx->pc != 0x435108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435108u; }
        if (ctx->pc != 0x435108u) { return; }
    }
    ctx->pc = 0x435108u;
label_435108:
    // 0x435108: 0xc7ac0240  lwc1        $f12, 0x240($sp)
    ctx->pc = 0x435108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_43510c:
    // 0x43510c: 0xc7ad0244  lwc1        $f13, 0x244($sp)
    ctx->pc = 0x43510cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_435110:
    // 0x435110: 0xc7ae0248  lwc1        $f14, 0x248($sp)
    ctx->pc = 0x435110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_435114:
    // 0x435114: 0xc04cbd8  jal         func_132F60
label_435118:
    if (ctx->pc == 0x435118u) {
        ctx->pc = 0x435118u;
            // 0x435118: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x43511Cu;
        goto label_43511c;
    }
    ctx->pc = 0x435114u;
    SET_GPR_U32(ctx, 31, 0x43511Cu);
    ctx->pc = 0x435118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435114u;
            // 0x435118: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43511Cu; }
        if (ctx->pc != 0x43511Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43511Cu; }
        if (ctx->pc != 0x43511Cu) { return; }
    }
    ctx->pc = 0x43511Cu;
label_43511c:
    // 0x43511c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x43511cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_435120:
    // 0x435120: 0xc04cc04  jal         func_133010
label_435124:
    if (ctx->pc == 0x435124u) {
        ctx->pc = 0x435124u;
            // 0x435124: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x435128u;
        goto label_435128;
    }
    ctx->pc = 0x435120u;
    SET_GPR_U32(ctx, 31, 0x435128u);
    ctx->pc = 0x435124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435120u;
            // 0x435124: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435128u; }
        if (ctx->pc != 0x435128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435128u; }
        if (ctx->pc != 0x435128u) { return; }
    }
    ctx->pc = 0x435128u;
label_435128:
    // 0x435128: 0xc088b74  jal         func_222DD0
label_43512c:
    if (ctx->pc == 0x43512Cu) {
        ctx->pc = 0x43512Cu;
            // 0x43512c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x435130u;
        goto label_435130;
    }
    ctx->pc = 0x435128u;
    SET_GPR_U32(ctx, 31, 0x435130u);
    ctx->pc = 0x43512Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435128u;
            // 0x43512c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435130u; }
        if (ctx->pc != 0x435130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435130u; }
        if (ctx->pc != 0x435130u) { return; }
    }
    ctx->pc = 0x435130u;
label_435130:
    // 0x435130: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x435130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_435134:
    // 0x435134: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x435134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_435138:
    // 0x435138: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x435138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43513c:
    // 0x43513c: 0x3e00008  jr          $ra
label_435140:
    if (ctx->pc == 0x435140u) {
        ctx->pc = 0x435140u;
            // 0x435140: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x435144u;
        goto label_435144;
    }
    ctx->pc = 0x43513Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43513Cu;
            // 0x435140: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x435144u;
label_435144:
    // 0x435144: 0x0  nop
    ctx->pc = 0x435144u;
    // NOP
label_435148:
    // 0x435148: 0x0  nop
    ctx->pc = 0x435148u;
    // NOP
label_43514c:
    // 0x43514c: 0x0  nop
    ctx->pc = 0x43514cu;
    // NOP
label_435150:
    // 0x435150: 0x3e00008  jr          $ra
label_435154:
    if (ctx->pc == 0x435154u) {
        ctx->pc = 0x435154u;
            // 0x435154: 0x240261d0  addiu       $v0, $zero, 0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25040));
        ctx->pc = 0x435158u;
        goto label_435158;
    }
    ctx->pc = 0x435150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435150u;
            // 0x435154: 0x240261d0  addiu       $v0, $zero, 0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x435158u;
label_435158:
    // 0x435158: 0x0  nop
    ctx->pc = 0x435158u;
    // NOP
label_43515c:
    // 0x43515c: 0x0  nop
    ctx->pc = 0x43515cu;
    // NOP
label_435160:
    // 0x435160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x435160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_435164:
    // 0x435164: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x435164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_435168:
    // 0x435168: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x435168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_43516c:
    // 0x43516c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_435170:
    // 0x435170: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x435170u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_435174:
    // 0x435174: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x435174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_435178:
    // 0x435178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x435178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43517c:
    // 0x43517c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43517cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_435180:
    // 0x435180: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x435180u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_435184:
    // 0x435184: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_435188:
    if (ctx->pc == 0x435188u) {
        ctx->pc = 0x435188u;
            // 0x435188: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43518Cu;
        goto label_43518c;
    }
    ctx->pc = 0x435184u;
    {
        const bool branch_taken_0x435184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x435188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435184u;
            // 0x435188: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435184) {
            ctx->pc = 0x4351C8u;
            goto label_4351c8;
        }
    }
    ctx->pc = 0x43518Cu;
label_43518c:
    // 0x43518c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43518cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_435190:
    // 0x435190: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x435190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_435194:
    // 0x435194: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x435194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_435198:
    // 0x435198: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x435198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_43519c:
    // 0x43519c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x43519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4351a0:
    // 0x4351a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4351a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4351a4:
    // 0x4351a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4351a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4351a8:
    // 0x4351a8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4351a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4351ac:
    // 0x4351ac: 0x320f809  jalr        $t9
label_4351b0:
    if (ctx->pc == 0x4351B0u) {
        ctx->pc = 0x4351B4u;
        goto label_4351b4;
    }
    ctx->pc = 0x4351ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4351B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4351B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4351B4u; }
            if (ctx->pc != 0x4351B4u) { return; }
        }
        }
    }
    ctx->pc = 0x4351B4u;
label_4351b4:
    // 0x4351b4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4351b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4351b8:
    // 0x4351b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4351b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4351bc:
    // 0x4351bc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4351bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4351c0:
    // 0x4351c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4351c4:
    if (ctx->pc == 0x4351C4u) {
        ctx->pc = 0x4351C4u;
            // 0x4351c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4351C8u;
        goto label_4351c8;
    }
    ctx->pc = 0x4351C0u;
    {
        const bool branch_taken_0x4351c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4351C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4351C0u;
            // 0x4351c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4351c0) {
            ctx->pc = 0x435198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_435198;
        }
    }
    ctx->pc = 0x4351C8u;
label_4351c8:
    // 0x4351c8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4351c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4351cc:
    // 0x4351cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4351ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4351d0:
    // 0x4351d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4351d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4351d4:
    // 0x4351d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4351d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4351d8:
    // 0x4351d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4351d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4351dc:
    // 0x4351dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4351dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4351e0:
    // 0x4351e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4351e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4351e4:
    // 0x4351e4: 0x3e00008  jr          $ra
label_4351e8:
    if (ctx->pc == 0x4351E8u) {
        ctx->pc = 0x4351E8u;
            // 0x4351e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4351ECu;
        goto label_4351ec;
    }
    ctx->pc = 0x4351E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4351E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4351E4u;
            // 0x4351e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4351ECu;
label_4351ec:
    // 0x4351ec: 0x0  nop
    ctx->pc = 0x4351ecu;
    // NOP
label_4351f0:
    // 0x4351f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4351f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4351f4:
    // 0x4351f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4351f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4351f8:
    // 0x4351f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4351f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4351fc:
    // 0x4351fc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4351fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_435200:
    // 0x435200: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_435204:
    if (ctx->pc == 0x435204u) {
        ctx->pc = 0x435204u;
            // 0x435204: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435208u;
        goto label_435208;
    }
    ctx->pc = 0x435200u;
    {
        const bool branch_taken_0x435200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x435204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435200u;
            // 0x435204: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435200) {
            ctx->pc = 0x435320u;
            goto label_435320;
        }
    }
    ctx->pc = 0x435208u;
label_435208:
    // 0x435208: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x435208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_43520c:
    // 0x43520c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x43520cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_435210:
    // 0x435210: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x435210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_435214:
    // 0x435214: 0xc075128  jal         func_1D44A0
label_435218:
    if (ctx->pc == 0x435218u) {
        ctx->pc = 0x435218u;
            // 0x435218: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x43521Cu;
        goto label_43521c;
    }
    ctx->pc = 0x435214u;
    SET_GPR_U32(ctx, 31, 0x43521Cu);
    ctx->pc = 0x435218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435214u;
            // 0x435218: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43521Cu; }
        if (ctx->pc != 0x43521Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43521Cu; }
        if (ctx->pc != 0x43521Cu) { return; }
    }
    ctx->pc = 0x43521Cu;
label_43521c:
    // 0x43521c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x43521cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_435220:
    // 0x435220: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x435220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_435224:
    // 0x435224: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x435224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_435228:
    // 0x435228: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x435228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_43522c:
    // 0x43522c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x43522cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_435230:
    // 0x435230: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_435234:
    if (ctx->pc == 0x435234u) {
        ctx->pc = 0x435234u;
            // 0x435234: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x435238u;
        goto label_435238;
    }
    ctx->pc = 0x435230u;
    {
        const bool branch_taken_0x435230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x435234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435230u;
            // 0x435234: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435230) {
            ctx->pc = 0x435240u;
            goto label_435240;
        }
    }
    ctx->pc = 0x435238u;
label_435238:
    // 0x435238: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x435238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43523c:
    // 0x43523c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x43523cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_435240:
    // 0x435240: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x435240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_435244:
    // 0x435244: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x435244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_435248:
    // 0x435248: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x435248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_43524c:
    // 0x43524c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x43524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_435250:
    // 0x435250: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x435250u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_435254:
    // 0x435254: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_435258:
    if (ctx->pc == 0x435258u) {
        ctx->pc = 0x435258u;
            // 0x435258: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x43525Cu;
        goto label_43525c;
    }
    ctx->pc = 0x435254u;
    {
        const bool branch_taken_0x435254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x435254) {
            ctx->pc = 0x435258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x435254u;
            // 0x435258: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x435268u;
            goto label_435268;
        }
    }
    ctx->pc = 0x43525Cu;
label_43525c:
    // 0x43525c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43525cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_435260:
    // 0x435260: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x435260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_435264:
    // 0x435264: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x435264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_435268:
    // 0x435268: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x435268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43526c:
    // 0x43526c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x43526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_435270:
    // 0x435270: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x435270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_435274:
    // 0x435274: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x435274u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_435278:
    // 0x435278: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43527c:
    if (ctx->pc == 0x43527Cu) {
        ctx->pc = 0x43527Cu;
            // 0x43527c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x435280u;
        goto label_435280;
    }
    ctx->pc = 0x435278u;
    {
        const bool branch_taken_0x435278 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x435278) {
            ctx->pc = 0x43527Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x435278u;
            // 0x43527c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43528Cu;
            goto label_43528c;
        }
    }
    ctx->pc = 0x435280u;
label_435280:
    // 0x435280: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x435280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_435284:
    // 0x435284: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x435284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_435288:
    // 0x435288: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x435288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_43528c:
    // 0x43528c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x43528cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_435290:
    // 0x435290: 0x320f809  jalr        $t9
label_435294:
    if (ctx->pc == 0x435294u) {
        ctx->pc = 0x435294u;
            // 0x435294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435298u;
        goto label_435298;
    }
    ctx->pc = 0x435290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x435298u);
        ctx->pc = 0x435294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435290u;
            // 0x435294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x435298u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x435298u; }
            if (ctx->pc != 0x435298u) { return; }
        }
        }
    }
    ctx->pc = 0x435298u;
label_435298:
    // 0x435298: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x435298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_43529c:
    // 0x43529c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43529cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4352a0:
    // 0x4352a0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4352a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4352a4:
    // 0x4352a4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4352a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4352a8:
    // 0x4352a8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4352a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4352ac:
    // 0x4352ac: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4352acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4352b0:
    // 0x4352b0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4352b4:
    if (ctx->pc == 0x4352B4u) {
        ctx->pc = 0x4352B4u;
            // 0x4352b4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4352B8u;
        goto label_4352b8;
    }
    ctx->pc = 0x4352B0u;
    {
        const bool branch_taken_0x4352b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4352b0) {
            ctx->pc = 0x4352B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4352B0u;
            // 0x4352b4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4352C4u;
            goto label_4352c4;
        }
    }
    ctx->pc = 0x4352B8u;
label_4352b8:
    // 0x4352b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4352b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4352bc:
    // 0x4352bc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4352bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4352c0:
    // 0x4352c0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4352c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4352c4:
    // 0x4352c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4352c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4352c8:
    // 0x4352c8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4352c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4352cc:
    // 0x4352cc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4352ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4352d0:
    // 0x4352d0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4352d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4352d4:
    // 0x4352d4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4352d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4352d8:
    // 0x4352d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4352dc:
    if (ctx->pc == 0x4352DCu) {
        ctx->pc = 0x4352E0u;
        goto label_4352e0;
    }
    ctx->pc = 0x4352D8u;
    {
        const bool branch_taken_0x4352d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4352d8) {
            ctx->pc = 0x4352E8u;
            goto label_4352e8;
        }
    }
    ctx->pc = 0x4352E0u;
label_4352e0:
    // 0x4352e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4352e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4352e4:
    // 0x4352e4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4352e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4352e8:
    // 0x4352e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4352e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4352ec:
    // 0x4352ec: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4352ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4352f0:
    // 0x4352f0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4352f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4352f4:
    // 0x4352f4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4352f8:
    if (ctx->pc == 0x4352F8u) {
        ctx->pc = 0x4352FCu;
        goto label_4352fc;
    }
    ctx->pc = 0x4352F4u;
    {
        const bool branch_taken_0x4352f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4352f4) {
            ctx->pc = 0x435304u;
            goto label_435304;
        }
    }
    ctx->pc = 0x4352FCu;
label_4352fc:
    // 0x4352fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4352fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_435300:
    // 0x435300: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x435300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_435304:
    // 0x435304: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x435304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_435308:
    // 0x435308: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x435308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_43530c:
    // 0x43530c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x43530cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_435310:
    // 0x435310: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_435314:
    if (ctx->pc == 0x435314u) {
        ctx->pc = 0x435314u;
            // 0x435314: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x435318u;
        goto label_435318;
    }
    ctx->pc = 0x435310u;
    {
        const bool branch_taken_0x435310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x435310) {
            ctx->pc = 0x435314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x435310u;
            // 0x435314: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x435324u;
            goto label_435324;
        }
    }
    ctx->pc = 0x435318u;
label_435318:
    // 0x435318: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x435318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43531c:
    // 0x43531c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x43531cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_435320:
    // 0x435320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x435320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_435324:
    // 0x435324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x435324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_435328:
    // 0x435328: 0x3e00008  jr          $ra
label_43532c:
    if (ctx->pc == 0x43532Cu) {
        ctx->pc = 0x43532Cu;
            // 0x43532c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x435330u;
        goto label_435330;
    }
    ctx->pc = 0x435328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43532Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435328u;
            // 0x43532c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x435330u;
label_435330:
    // 0x435330: 0x810cdb4  j           func_4336D0
label_435334:
    if (ctx->pc == 0x435334u) {
        ctx->pc = 0x435334u;
            // 0x435334: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x435338u;
        goto label_435338;
    }
    ctx->pc = 0x435330u;
    ctx->pc = 0x435334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435330u;
            // 0x435334: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4336D0u;
    {
        auto targetFn = runtime->lookupFunction(0x4336D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x435338u;
label_435338:
    // 0x435338: 0x0  nop
    ctx->pc = 0x435338u;
    // NOP
label_43533c:
    // 0x43533c: 0x0  nop
    ctx->pc = 0x43533cu;
    // NOP
label_435340:
    // 0x435340: 0x810cae4  j           func_432B90
label_435344:
    if (ctx->pc == 0x435344u) {
        ctx->pc = 0x435344u;
            // 0x435344: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x435348u;
        goto label_435348;
    }
    ctx->pc = 0x435340u;
    ctx->pc = 0x435344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435340u;
            // 0x435344: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432B90u;
    if (runtime->hasFunction(0x432B90u)) {
        auto targetFn = runtime->lookupFunction(0x432B90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00432B90_0x432b90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x435348u;
label_435348:
    // 0x435348: 0x0  nop
    ctx->pc = 0x435348u;
    // NOP
label_43534c:
    // 0x43534c: 0x0  nop
    ctx->pc = 0x43534cu;
    // NOP
label_435350:
    // 0x435350: 0x810cb3c  j           func_432CF0
label_435354:
    if (ctx->pc == 0x435354u) {
        ctx->pc = 0x435354u;
            // 0x435354: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x435358u;
        goto label_435358;
    }
    ctx->pc = 0x435350u;
    ctx->pc = 0x435354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435350u;
            // 0x435354: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432CF0u;
    {
        auto targetFn = runtime->lookupFunction(0x432CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x435358u;
label_435358:
    // 0x435358: 0x0  nop
    ctx->pc = 0x435358u;
    // NOP
label_43535c:
    // 0x43535c: 0x0  nop
    ctx->pc = 0x43535cu;
    // NOP
label_435360:
    // 0x435360: 0x810cac0  j           func_432B00
label_435364:
    if (ctx->pc == 0x435364u) {
        ctx->pc = 0x435364u;
            // 0x435364: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x435368u;
        goto label_435368;
    }
    ctx->pc = 0x435360u;
    ctx->pc = 0x435364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435360u;
            // 0x435364: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432B00u;
    {
        auto targetFn = runtime->lookupFunction(0x432B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x435368u;
label_435368:
    // 0x435368: 0x0  nop
    ctx->pc = 0x435368u;
    // NOP
label_43536c:
    // 0x43536c: 0x0  nop
    ctx->pc = 0x43536cu;
    // NOP
label_435370:
    // 0x435370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x435370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_435374:
    // 0x435374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x435374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_435378:
    // 0x435378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x435378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43537c:
    // 0x43537c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_435380:
    // 0x435380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x435380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_435384:
    // 0x435384: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_435388:
    if (ctx->pc == 0x435388u) {
        ctx->pc = 0x435388u;
            // 0x435388: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43538Cu;
        goto label_43538c;
    }
    ctx->pc = 0x435384u;
    {
        const bool branch_taken_0x435384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x435388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435384u;
            // 0x435388: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435384) {
            ctx->pc = 0x4353E0u;
            goto label_4353e0;
        }
    }
    ctx->pc = 0x43538Cu;
label_43538c:
    // 0x43538c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43538cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_435390:
    // 0x435390: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x435390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_435394:
    // 0x435394: 0x2463cb50  addiu       $v1, $v1, -0x34B0
    ctx->pc = 0x435394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953808));
label_435398:
    // 0x435398: 0x2442cb88  addiu       $v0, $v0, -0x3478
    ctx->pc = 0x435398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953864));
label_43539c:
    // 0x43539c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43539cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4353a0:
    // 0x4353a0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4353a4:
    if (ctx->pc == 0x4353A4u) {
        ctx->pc = 0x4353A4u;
            // 0x4353a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4353A8u;
        goto label_4353a8;
    }
    ctx->pc = 0x4353A0u;
    {
        const bool branch_taken_0x4353a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4353A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4353A0u;
            // 0x4353a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4353a0) {
            ctx->pc = 0x4353C8u;
            goto label_4353c8;
        }
    }
    ctx->pc = 0x4353A8u;
label_4353a8:
    // 0x4353a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4353a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4353ac:
    // 0x4353ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4353acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4353b0:
    // 0x4353b0: 0x2463cc00  addiu       $v1, $v1, -0x3400
    ctx->pc = 0x4353b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953984));
label_4353b4:
    // 0x4353b4: 0x2442cc38  addiu       $v0, $v0, -0x33C8
    ctx->pc = 0x4353b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954040));
label_4353b8:
    // 0x4353b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4353b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4353bc:
    // 0x4353bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4353bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4353c0:
    // 0x4353c0: 0xc10d500  jal         func_435400
label_4353c4:
    if (ctx->pc == 0x4353C4u) {
        ctx->pc = 0x4353C4u;
            // 0x4353c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4353C8u;
        goto label_4353c8;
    }
    ctx->pc = 0x4353C0u;
    SET_GPR_U32(ctx, 31, 0x4353C8u);
    ctx->pc = 0x4353C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4353C0u;
            // 0x4353c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x435400u;
    if (runtime->hasFunction(0x435400u)) {
        auto targetFn = runtime->lookupFunction(0x435400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4353C8u; }
        if (ctx->pc != 0x4353C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00435400_0x435400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4353C8u; }
        if (ctx->pc != 0x4353C8u) { return; }
    }
    ctx->pc = 0x4353C8u;
label_4353c8:
    // 0x4353c8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4353c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4353cc:
    // 0x4353cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4353ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4353d0:
    // 0x4353d0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4353d4:
    if (ctx->pc == 0x4353D4u) {
        ctx->pc = 0x4353D4u;
            // 0x4353d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4353D8u;
        goto label_4353d8;
    }
    ctx->pc = 0x4353D0u;
    {
        const bool branch_taken_0x4353d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4353d0) {
            ctx->pc = 0x4353D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4353D0u;
            // 0x4353d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4353E4u;
            goto label_4353e4;
        }
    }
    ctx->pc = 0x4353D8u;
label_4353d8:
    // 0x4353d8: 0xc0400a8  jal         func_1002A0
label_4353dc:
    if (ctx->pc == 0x4353DCu) {
        ctx->pc = 0x4353DCu;
            // 0x4353dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4353E0u;
        goto label_4353e0;
    }
    ctx->pc = 0x4353D8u;
    SET_GPR_U32(ctx, 31, 0x4353E0u);
    ctx->pc = 0x4353DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4353D8u;
            // 0x4353dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4353E0u; }
        if (ctx->pc != 0x4353E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4353E0u; }
        if (ctx->pc != 0x4353E0u) { return; }
    }
    ctx->pc = 0x4353E0u;
label_4353e0:
    // 0x4353e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4353e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4353e4:
    // 0x4353e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4353e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4353e8:
    // 0x4353e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4353e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4353ec:
    // 0x4353ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4353ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4353f0:
    // 0x4353f0: 0x3e00008  jr          $ra
label_4353f4:
    if (ctx->pc == 0x4353F4u) {
        ctx->pc = 0x4353F4u;
            // 0x4353f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4353F8u;
        goto label_4353f8;
    }
    ctx->pc = 0x4353F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4353F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4353F0u;
            // 0x4353f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4353F8u;
label_4353f8:
    // 0x4353f8: 0x0  nop
    ctx->pc = 0x4353f8u;
    // NOP
label_4353fc:
    // 0x4353fc: 0x0  nop
    ctx->pc = 0x4353fcu;
    // NOP
}
