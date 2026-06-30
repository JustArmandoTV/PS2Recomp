#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00205470
// Address: 0x205470 - 0x2065d0
void sub_00205470_0x205470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205470_0x205470");
#endif

    switch (ctx->pc) {
        case 0x205470u: goto label_205470;
        case 0x205474u: goto label_205474;
        case 0x205478u: goto label_205478;
        case 0x20547cu: goto label_20547c;
        case 0x205480u: goto label_205480;
        case 0x205484u: goto label_205484;
        case 0x205488u: goto label_205488;
        case 0x20548cu: goto label_20548c;
        case 0x205490u: goto label_205490;
        case 0x205494u: goto label_205494;
        case 0x205498u: goto label_205498;
        case 0x20549cu: goto label_20549c;
        case 0x2054a0u: goto label_2054a0;
        case 0x2054a4u: goto label_2054a4;
        case 0x2054a8u: goto label_2054a8;
        case 0x2054acu: goto label_2054ac;
        case 0x2054b0u: goto label_2054b0;
        case 0x2054b4u: goto label_2054b4;
        case 0x2054b8u: goto label_2054b8;
        case 0x2054bcu: goto label_2054bc;
        case 0x2054c0u: goto label_2054c0;
        case 0x2054c4u: goto label_2054c4;
        case 0x2054c8u: goto label_2054c8;
        case 0x2054ccu: goto label_2054cc;
        case 0x2054d0u: goto label_2054d0;
        case 0x2054d4u: goto label_2054d4;
        case 0x2054d8u: goto label_2054d8;
        case 0x2054dcu: goto label_2054dc;
        case 0x2054e0u: goto label_2054e0;
        case 0x2054e4u: goto label_2054e4;
        case 0x2054e8u: goto label_2054e8;
        case 0x2054ecu: goto label_2054ec;
        case 0x2054f0u: goto label_2054f0;
        case 0x2054f4u: goto label_2054f4;
        case 0x2054f8u: goto label_2054f8;
        case 0x2054fcu: goto label_2054fc;
        case 0x205500u: goto label_205500;
        case 0x205504u: goto label_205504;
        case 0x205508u: goto label_205508;
        case 0x20550cu: goto label_20550c;
        case 0x205510u: goto label_205510;
        case 0x205514u: goto label_205514;
        case 0x205518u: goto label_205518;
        case 0x20551cu: goto label_20551c;
        case 0x205520u: goto label_205520;
        case 0x205524u: goto label_205524;
        case 0x205528u: goto label_205528;
        case 0x20552cu: goto label_20552c;
        case 0x205530u: goto label_205530;
        case 0x205534u: goto label_205534;
        case 0x205538u: goto label_205538;
        case 0x20553cu: goto label_20553c;
        case 0x205540u: goto label_205540;
        case 0x205544u: goto label_205544;
        case 0x205548u: goto label_205548;
        case 0x20554cu: goto label_20554c;
        case 0x205550u: goto label_205550;
        case 0x205554u: goto label_205554;
        case 0x205558u: goto label_205558;
        case 0x20555cu: goto label_20555c;
        case 0x205560u: goto label_205560;
        case 0x205564u: goto label_205564;
        case 0x205568u: goto label_205568;
        case 0x20556cu: goto label_20556c;
        case 0x205570u: goto label_205570;
        case 0x205574u: goto label_205574;
        case 0x205578u: goto label_205578;
        case 0x20557cu: goto label_20557c;
        case 0x205580u: goto label_205580;
        case 0x205584u: goto label_205584;
        case 0x205588u: goto label_205588;
        case 0x20558cu: goto label_20558c;
        case 0x205590u: goto label_205590;
        case 0x205594u: goto label_205594;
        case 0x205598u: goto label_205598;
        case 0x20559cu: goto label_20559c;
        case 0x2055a0u: goto label_2055a0;
        case 0x2055a4u: goto label_2055a4;
        case 0x2055a8u: goto label_2055a8;
        case 0x2055acu: goto label_2055ac;
        case 0x2055b0u: goto label_2055b0;
        case 0x2055b4u: goto label_2055b4;
        case 0x2055b8u: goto label_2055b8;
        case 0x2055bcu: goto label_2055bc;
        case 0x2055c0u: goto label_2055c0;
        case 0x2055c4u: goto label_2055c4;
        case 0x2055c8u: goto label_2055c8;
        case 0x2055ccu: goto label_2055cc;
        case 0x2055d0u: goto label_2055d0;
        case 0x2055d4u: goto label_2055d4;
        case 0x2055d8u: goto label_2055d8;
        case 0x2055dcu: goto label_2055dc;
        case 0x2055e0u: goto label_2055e0;
        case 0x2055e4u: goto label_2055e4;
        case 0x2055e8u: goto label_2055e8;
        case 0x2055ecu: goto label_2055ec;
        case 0x2055f0u: goto label_2055f0;
        case 0x2055f4u: goto label_2055f4;
        case 0x2055f8u: goto label_2055f8;
        case 0x2055fcu: goto label_2055fc;
        case 0x205600u: goto label_205600;
        case 0x205604u: goto label_205604;
        case 0x205608u: goto label_205608;
        case 0x20560cu: goto label_20560c;
        case 0x205610u: goto label_205610;
        case 0x205614u: goto label_205614;
        case 0x205618u: goto label_205618;
        case 0x20561cu: goto label_20561c;
        case 0x205620u: goto label_205620;
        case 0x205624u: goto label_205624;
        case 0x205628u: goto label_205628;
        case 0x20562cu: goto label_20562c;
        case 0x205630u: goto label_205630;
        case 0x205634u: goto label_205634;
        case 0x205638u: goto label_205638;
        case 0x20563cu: goto label_20563c;
        case 0x205640u: goto label_205640;
        case 0x205644u: goto label_205644;
        case 0x205648u: goto label_205648;
        case 0x20564cu: goto label_20564c;
        case 0x205650u: goto label_205650;
        case 0x205654u: goto label_205654;
        case 0x205658u: goto label_205658;
        case 0x20565cu: goto label_20565c;
        case 0x205660u: goto label_205660;
        case 0x205664u: goto label_205664;
        case 0x205668u: goto label_205668;
        case 0x20566cu: goto label_20566c;
        case 0x205670u: goto label_205670;
        case 0x205674u: goto label_205674;
        case 0x205678u: goto label_205678;
        case 0x20567cu: goto label_20567c;
        case 0x205680u: goto label_205680;
        case 0x205684u: goto label_205684;
        case 0x205688u: goto label_205688;
        case 0x20568cu: goto label_20568c;
        case 0x205690u: goto label_205690;
        case 0x205694u: goto label_205694;
        case 0x205698u: goto label_205698;
        case 0x20569cu: goto label_20569c;
        case 0x2056a0u: goto label_2056a0;
        case 0x2056a4u: goto label_2056a4;
        case 0x2056a8u: goto label_2056a8;
        case 0x2056acu: goto label_2056ac;
        case 0x2056b0u: goto label_2056b0;
        case 0x2056b4u: goto label_2056b4;
        case 0x2056b8u: goto label_2056b8;
        case 0x2056bcu: goto label_2056bc;
        case 0x2056c0u: goto label_2056c0;
        case 0x2056c4u: goto label_2056c4;
        case 0x2056c8u: goto label_2056c8;
        case 0x2056ccu: goto label_2056cc;
        case 0x2056d0u: goto label_2056d0;
        case 0x2056d4u: goto label_2056d4;
        case 0x2056d8u: goto label_2056d8;
        case 0x2056dcu: goto label_2056dc;
        case 0x2056e0u: goto label_2056e0;
        case 0x2056e4u: goto label_2056e4;
        case 0x2056e8u: goto label_2056e8;
        case 0x2056ecu: goto label_2056ec;
        case 0x2056f0u: goto label_2056f0;
        case 0x2056f4u: goto label_2056f4;
        case 0x2056f8u: goto label_2056f8;
        case 0x2056fcu: goto label_2056fc;
        case 0x205700u: goto label_205700;
        case 0x205704u: goto label_205704;
        case 0x205708u: goto label_205708;
        case 0x20570cu: goto label_20570c;
        case 0x205710u: goto label_205710;
        case 0x205714u: goto label_205714;
        case 0x205718u: goto label_205718;
        case 0x20571cu: goto label_20571c;
        case 0x205720u: goto label_205720;
        case 0x205724u: goto label_205724;
        case 0x205728u: goto label_205728;
        case 0x20572cu: goto label_20572c;
        case 0x205730u: goto label_205730;
        case 0x205734u: goto label_205734;
        case 0x205738u: goto label_205738;
        case 0x20573cu: goto label_20573c;
        case 0x205740u: goto label_205740;
        case 0x205744u: goto label_205744;
        case 0x205748u: goto label_205748;
        case 0x20574cu: goto label_20574c;
        case 0x205750u: goto label_205750;
        case 0x205754u: goto label_205754;
        case 0x205758u: goto label_205758;
        case 0x20575cu: goto label_20575c;
        case 0x205760u: goto label_205760;
        case 0x205764u: goto label_205764;
        case 0x205768u: goto label_205768;
        case 0x20576cu: goto label_20576c;
        case 0x205770u: goto label_205770;
        case 0x205774u: goto label_205774;
        case 0x205778u: goto label_205778;
        case 0x20577cu: goto label_20577c;
        case 0x205780u: goto label_205780;
        case 0x205784u: goto label_205784;
        case 0x205788u: goto label_205788;
        case 0x20578cu: goto label_20578c;
        case 0x205790u: goto label_205790;
        case 0x205794u: goto label_205794;
        case 0x205798u: goto label_205798;
        case 0x20579cu: goto label_20579c;
        case 0x2057a0u: goto label_2057a0;
        case 0x2057a4u: goto label_2057a4;
        case 0x2057a8u: goto label_2057a8;
        case 0x2057acu: goto label_2057ac;
        case 0x2057b0u: goto label_2057b0;
        case 0x2057b4u: goto label_2057b4;
        case 0x2057b8u: goto label_2057b8;
        case 0x2057bcu: goto label_2057bc;
        case 0x2057c0u: goto label_2057c0;
        case 0x2057c4u: goto label_2057c4;
        case 0x2057c8u: goto label_2057c8;
        case 0x2057ccu: goto label_2057cc;
        case 0x2057d0u: goto label_2057d0;
        case 0x2057d4u: goto label_2057d4;
        case 0x2057d8u: goto label_2057d8;
        case 0x2057dcu: goto label_2057dc;
        case 0x2057e0u: goto label_2057e0;
        case 0x2057e4u: goto label_2057e4;
        case 0x2057e8u: goto label_2057e8;
        case 0x2057ecu: goto label_2057ec;
        case 0x2057f0u: goto label_2057f0;
        case 0x2057f4u: goto label_2057f4;
        case 0x2057f8u: goto label_2057f8;
        case 0x2057fcu: goto label_2057fc;
        case 0x205800u: goto label_205800;
        case 0x205804u: goto label_205804;
        case 0x205808u: goto label_205808;
        case 0x20580cu: goto label_20580c;
        case 0x205810u: goto label_205810;
        case 0x205814u: goto label_205814;
        case 0x205818u: goto label_205818;
        case 0x20581cu: goto label_20581c;
        case 0x205820u: goto label_205820;
        case 0x205824u: goto label_205824;
        case 0x205828u: goto label_205828;
        case 0x20582cu: goto label_20582c;
        case 0x205830u: goto label_205830;
        case 0x205834u: goto label_205834;
        case 0x205838u: goto label_205838;
        case 0x20583cu: goto label_20583c;
        case 0x205840u: goto label_205840;
        case 0x205844u: goto label_205844;
        case 0x205848u: goto label_205848;
        case 0x20584cu: goto label_20584c;
        case 0x205850u: goto label_205850;
        case 0x205854u: goto label_205854;
        case 0x205858u: goto label_205858;
        case 0x20585cu: goto label_20585c;
        case 0x205860u: goto label_205860;
        case 0x205864u: goto label_205864;
        case 0x205868u: goto label_205868;
        case 0x20586cu: goto label_20586c;
        case 0x205870u: goto label_205870;
        case 0x205874u: goto label_205874;
        case 0x205878u: goto label_205878;
        case 0x20587cu: goto label_20587c;
        case 0x205880u: goto label_205880;
        case 0x205884u: goto label_205884;
        case 0x205888u: goto label_205888;
        case 0x20588cu: goto label_20588c;
        case 0x205890u: goto label_205890;
        case 0x205894u: goto label_205894;
        case 0x205898u: goto label_205898;
        case 0x20589cu: goto label_20589c;
        case 0x2058a0u: goto label_2058a0;
        case 0x2058a4u: goto label_2058a4;
        case 0x2058a8u: goto label_2058a8;
        case 0x2058acu: goto label_2058ac;
        case 0x2058b0u: goto label_2058b0;
        case 0x2058b4u: goto label_2058b4;
        case 0x2058b8u: goto label_2058b8;
        case 0x2058bcu: goto label_2058bc;
        case 0x2058c0u: goto label_2058c0;
        case 0x2058c4u: goto label_2058c4;
        case 0x2058c8u: goto label_2058c8;
        case 0x2058ccu: goto label_2058cc;
        case 0x2058d0u: goto label_2058d0;
        case 0x2058d4u: goto label_2058d4;
        case 0x2058d8u: goto label_2058d8;
        case 0x2058dcu: goto label_2058dc;
        case 0x2058e0u: goto label_2058e0;
        case 0x2058e4u: goto label_2058e4;
        case 0x2058e8u: goto label_2058e8;
        case 0x2058ecu: goto label_2058ec;
        case 0x2058f0u: goto label_2058f0;
        case 0x2058f4u: goto label_2058f4;
        case 0x2058f8u: goto label_2058f8;
        case 0x2058fcu: goto label_2058fc;
        case 0x205900u: goto label_205900;
        case 0x205904u: goto label_205904;
        case 0x205908u: goto label_205908;
        case 0x20590cu: goto label_20590c;
        case 0x205910u: goto label_205910;
        case 0x205914u: goto label_205914;
        case 0x205918u: goto label_205918;
        case 0x20591cu: goto label_20591c;
        case 0x205920u: goto label_205920;
        case 0x205924u: goto label_205924;
        case 0x205928u: goto label_205928;
        case 0x20592cu: goto label_20592c;
        case 0x205930u: goto label_205930;
        case 0x205934u: goto label_205934;
        case 0x205938u: goto label_205938;
        case 0x20593cu: goto label_20593c;
        case 0x205940u: goto label_205940;
        case 0x205944u: goto label_205944;
        case 0x205948u: goto label_205948;
        case 0x20594cu: goto label_20594c;
        case 0x205950u: goto label_205950;
        case 0x205954u: goto label_205954;
        case 0x205958u: goto label_205958;
        case 0x20595cu: goto label_20595c;
        case 0x205960u: goto label_205960;
        case 0x205964u: goto label_205964;
        case 0x205968u: goto label_205968;
        case 0x20596cu: goto label_20596c;
        case 0x205970u: goto label_205970;
        case 0x205974u: goto label_205974;
        case 0x205978u: goto label_205978;
        case 0x20597cu: goto label_20597c;
        case 0x205980u: goto label_205980;
        case 0x205984u: goto label_205984;
        case 0x205988u: goto label_205988;
        case 0x20598cu: goto label_20598c;
        case 0x205990u: goto label_205990;
        case 0x205994u: goto label_205994;
        case 0x205998u: goto label_205998;
        case 0x20599cu: goto label_20599c;
        case 0x2059a0u: goto label_2059a0;
        case 0x2059a4u: goto label_2059a4;
        case 0x2059a8u: goto label_2059a8;
        case 0x2059acu: goto label_2059ac;
        case 0x2059b0u: goto label_2059b0;
        case 0x2059b4u: goto label_2059b4;
        case 0x2059b8u: goto label_2059b8;
        case 0x2059bcu: goto label_2059bc;
        case 0x2059c0u: goto label_2059c0;
        case 0x2059c4u: goto label_2059c4;
        case 0x2059c8u: goto label_2059c8;
        case 0x2059ccu: goto label_2059cc;
        case 0x2059d0u: goto label_2059d0;
        case 0x2059d4u: goto label_2059d4;
        case 0x2059d8u: goto label_2059d8;
        case 0x2059dcu: goto label_2059dc;
        case 0x2059e0u: goto label_2059e0;
        case 0x2059e4u: goto label_2059e4;
        case 0x2059e8u: goto label_2059e8;
        case 0x2059ecu: goto label_2059ec;
        case 0x2059f0u: goto label_2059f0;
        case 0x2059f4u: goto label_2059f4;
        case 0x2059f8u: goto label_2059f8;
        case 0x2059fcu: goto label_2059fc;
        case 0x205a00u: goto label_205a00;
        case 0x205a04u: goto label_205a04;
        case 0x205a08u: goto label_205a08;
        case 0x205a0cu: goto label_205a0c;
        case 0x205a10u: goto label_205a10;
        case 0x205a14u: goto label_205a14;
        case 0x205a18u: goto label_205a18;
        case 0x205a1cu: goto label_205a1c;
        case 0x205a20u: goto label_205a20;
        case 0x205a24u: goto label_205a24;
        case 0x205a28u: goto label_205a28;
        case 0x205a2cu: goto label_205a2c;
        case 0x205a30u: goto label_205a30;
        case 0x205a34u: goto label_205a34;
        case 0x205a38u: goto label_205a38;
        case 0x205a3cu: goto label_205a3c;
        case 0x205a40u: goto label_205a40;
        case 0x205a44u: goto label_205a44;
        case 0x205a48u: goto label_205a48;
        case 0x205a4cu: goto label_205a4c;
        case 0x205a50u: goto label_205a50;
        case 0x205a54u: goto label_205a54;
        case 0x205a58u: goto label_205a58;
        case 0x205a5cu: goto label_205a5c;
        case 0x205a60u: goto label_205a60;
        case 0x205a64u: goto label_205a64;
        case 0x205a68u: goto label_205a68;
        case 0x205a6cu: goto label_205a6c;
        case 0x205a70u: goto label_205a70;
        case 0x205a74u: goto label_205a74;
        case 0x205a78u: goto label_205a78;
        case 0x205a7cu: goto label_205a7c;
        case 0x205a80u: goto label_205a80;
        case 0x205a84u: goto label_205a84;
        case 0x205a88u: goto label_205a88;
        case 0x205a8cu: goto label_205a8c;
        case 0x205a90u: goto label_205a90;
        case 0x205a94u: goto label_205a94;
        case 0x205a98u: goto label_205a98;
        case 0x205a9cu: goto label_205a9c;
        case 0x205aa0u: goto label_205aa0;
        case 0x205aa4u: goto label_205aa4;
        case 0x205aa8u: goto label_205aa8;
        case 0x205aacu: goto label_205aac;
        case 0x205ab0u: goto label_205ab0;
        case 0x205ab4u: goto label_205ab4;
        case 0x205ab8u: goto label_205ab8;
        case 0x205abcu: goto label_205abc;
        case 0x205ac0u: goto label_205ac0;
        case 0x205ac4u: goto label_205ac4;
        case 0x205ac8u: goto label_205ac8;
        case 0x205accu: goto label_205acc;
        case 0x205ad0u: goto label_205ad0;
        case 0x205ad4u: goto label_205ad4;
        case 0x205ad8u: goto label_205ad8;
        case 0x205adcu: goto label_205adc;
        case 0x205ae0u: goto label_205ae0;
        case 0x205ae4u: goto label_205ae4;
        case 0x205ae8u: goto label_205ae8;
        case 0x205aecu: goto label_205aec;
        case 0x205af0u: goto label_205af0;
        case 0x205af4u: goto label_205af4;
        case 0x205af8u: goto label_205af8;
        case 0x205afcu: goto label_205afc;
        case 0x205b00u: goto label_205b00;
        case 0x205b04u: goto label_205b04;
        case 0x205b08u: goto label_205b08;
        case 0x205b0cu: goto label_205b0c;
        case 0x205b10u: goto label_205b10;
        case 0x205b14u: goto label_205b14;
        case 0x205b18u: goto label_205b18;
        case 0x205b1cu: goto label_205b1c;
        case 0x205b20u: goto label_205b20;
        case 0x205b24u: goto label_205b24;
        case 0x205b28u: goto label_205b28;
        case 0x205b2cu: goto label_205b2c;
        case 0x205b30u: goto label_205b30;
        case 0x205b34u: goto label_205b34;
        case 0x205b38u: goto label_205b38;
        case 0x205b3cu: goto label_205b3c;
        case 0x205b40u: goto label_205b40;
        case 0x205b44u: goto label_205b44;
        case 0x205b48u: goto label_205b48;
        case 0x205b4cu: goto label_205b4c;
        case 0x205b50u: goto label_205b50;
        case 0x205b54u: goto label_205b54;
        case 0x205b58u: goto label_205b58;
        case 0x205b5cu: goto label_205b5c;
        case 0x205b60u: goto label_205b60;
        case 0x205b64u: goto label_205b64;
        case 0x205b68u: goto label_205b68;
        case 0x205b6cu: goto label_205b6c;
        case 0x205b70u: goto label_205b70;
        case 0x205b74u: goto label_205b74;
        case 0x205b78u: goto label_205b78;
        case 0x205b7cu: goto label_205b7c;
        case 0x205b80u: goto label_205b80;
        case 0x205b84u: goto label_205b84;
        case 0x205b88u: goto label_205b88;
        case 0x205b8cu: goto label_205b8c;
        case 0x205b90u: goto label_205b90;
        case 0x205b94u: goto label_205b94;
        case 0x205b98u: goto label_205b98;
        case 0x205b9cu: goto label_205b9c;
        case 0x205ba0u: goto label_205ba0;
        case 0x205ba4u: goto label_205ba4;
        case 0x205ba8u: goto label_205ba8;
        case 0x205bacu: goto label_205bac;
        case 0x205bb0u: goto label_205bb0;
        case 0x205bb4u: goto label_205bb4;
        case 0x205bb8u: goto label_205bb8;
        case 0x205bbcu: goto label_205bbc;
        case 0x205bc0u: goto label_205bc0;
        case 0x205bc4u: goto label_205bc4;
        case 0x205bc8u: goto label_205bc8;
        case 0x205bccu: goto label_205bcc;
        case 0x205bd0u: goto label_205bd0;
        case 0x205bd4u: goto label_205bd4;
        case 0x205bd8u: goto label_205bd8;
        case 0x205bdcu: goto label_205bdc;
        case 0x205be0u: goto label_205be0;
        case 0x205be4u: goto label_205be4;
        case 0x205be8u: goto label_205be8;
        case 0x205becu: goto label_205bec;
        case 0x205bf0u: goto label_205bf0;
        case 0x205bf4u: goto label_205bf4;
        case 0x205bf8u: goto label_205bf8;
        case 0x205bfcu: goto label_205bfc;
        case 0x205c00u: goto label_205c00;
        case 0x205c04u: goto label_205c04;
        case 0x205c08u: goto label_205c08;
        case 0x205c0cu: goto label_205c0c;
        case 0x205c10u: goto label_205c10;
        case 0x205c14u: goto label_205c14;
        case 0x205c18u: goto label_205c18;
        case 0x205c1cu: goto label_205c1c;
        case 0x205c20u: goto label_205c20;
        case 0x205c24u: goto label_205c24;
        case 0x205c28u: goto label_205c28;
        case 0x205c2cu: goto label_205c2c;
        case 0x205c30u: goto label_205c30;
        case 0x205c34u: goto label_205c34;
        case 0x205c38u: goto label_205c38;
        case 0x205c3cu: goto label_205c3c;
        case 0x205c40u: goto label_205c40;
        case 0x205c44u: goto label_205c44;
        case 0x205c48u: goto label_205c48;
        case 0x205c4cu: goto label_205c4c;
        case 0x205c50u: goto label_205c50;
        case 0x205c54u: goto label_205c54;
        case 0x205c58u: goto label_205c58;
        case 0x205c5cu: goto label_205c5c;
        case 0x205c60u: goto label_205c60;
        case 0x205c64u: goto label_205c64;
        case 0x205c68u: goto label_205c68;
        case 0x205c6cu: goto label_205c6c;
        case 0x205c70u: goto label_205c70;
        case 0x205c74u: goto label_205c74;
        case 0x205c78u: goto label_205c78;
        case 0x205c7cu: goto label_205c7c;
        case 0x205c80u: goto label_205c80;
        case 0x205c84u: goto label_205c84;
        case 0x205c88u: goto label_205c88;
        case 0x205c8cu: goto label_205c8c;
        case 0x205c90u: goto label_205c90;
        case 0x205c94u: goto label_205c94;
        case 0x205c98u: goto label_205c98;
        case 0x205c9cu: goto label_205c9c;
        case 0x205ca0u: goto label_205ca0;
        case 0x205ca4u: goto label_205ca4;
        case 0x205ca8u: goto label_205ca8;
        case 0x205cacu: goto label_205cac;
        case 0x205cb0u: goto label_205cb0;
        case 0x205cb4u: goto label_205cb4;
        case 0x205cb8u: goto label_205cb8;
        case 0x205cbcu: goto label_205cbc;
        case 0x205cc0u: goto label_205cc0;
        case 0x205cc4u: goto label_205cc4;
        case 0x205cc8u: goto label_205cc8;
        case 0x205cccu: goto label_205ccc;
        case 0x205cd0u: goto label_205cd0;
        case 0x205cd4u: goto label_205cd4;
        case 0x205cd8u: goto label_205cd8;
        case 0x205cdcu: goto label_205cdc;
        case 0x205ce0u: goto label_205ce0;
        case 0x205ce4u: goto label_205ce4;
        case 0x205ce8u: goto label_205ce8;
        case 0x205cecu: goto label_205cec;
        case 0x205cf0u: goto label_205cf0;
        case 0x205cf4u: goto label_205cf4;
        case 0x205cf8u: goto label_205cf8;
        case 0x205cfcu: goto label_205cfc;
        case 0x205d00u: goto label_205d00;
        case 0x205d04u: goto label_205d04;
        case 0x205d08u: goto label_205d08;
        case 0x205d0cu: goto label_205d0c;
        case 0x205d10u: goto label_205d10;
        case 0x205d14u: goto label_205d14;
        case 0x205d18u: goto label_205d18;
        case 0x205d1cu: goto label_205d1c;
        case 0x205d20u: goto label_205d20;
        case 0x205d24u: goto label_205d24;
        case 0x205d28u: goto label_205d28;
        case 0x205d2cu: goto label_205d2c;
        case 0x205d30u: goto label_205d30;
        case 0x205d34u: goto label_205d34;
        case 0x205d38u: goto label_205d38;
        case 0x205d3cu: goto label_205d3c;
        case 0x205d40u: goto label_205d40;
        case 0x205d44u: goto label_205d44;
        case 0x205d48u: goto label_205d48;
        case 0x205d4cu: goto label_205d4c;
        case 0x205d50u: goto label_205d50;
        case 0x205d54u: goto label_205d54;
        case 0x205d58u: goto label_205d58;
        case 0x205d5cu: goto label_205d5c;
        case 0x205d60u: goto label_205d60;
        case 0x205d64u: goto label_205d64;
        case 0x205d68u: goto label_205d68;
        case 0x205d6cu: goto label_205d6c;
        case 0x205d70u: goto label_205d70;
        case 0x205d74u: goto label_205d74;
        case 0x205d78u: goto label_205d78;
        case 0x205d7cu: goto label_205d7c;
        case 0x205d80u: goto label_205d80;
        case 0x205d84u: goto label_205d84;
        case 0x205d88u: goto label_205d88;
        case 0x205d8cu: goto label_205d8c;
        case 0x205d90u: goto label_205d90;
        case 0x205d94u: goto label_205d94;
        case 0x205d98u: goto label_205d98;
        case 0x205d9cu: goto label_205d9c;
        case 0x205da0u: goto label_205da0;
        case 0x205da4u: goto label_205da4;
        case 0x205da8u: goto label_205da8;
        case 0x205dacu: goto label_205dac;
        case 0x205db0u: goto label_205db0;
        case 0x205db4u: goto label_205db4;
        case 0x205db8u: goto label_205db8;
        case 0x205dbcu: goto label_205dbc;
        case 0x205dc0u: goto label_205dc0;
        case 0x205dc4u: goto label_205dc4;
        case 0x205dc8u: goto label_205dc8;
        case 0x205dccu: goto label_205dcc;
        case 0x205dd0u: goto label_205dd0;
        case 0x205dd4u: goto label_205dd4;
        case 0x205dd8u: goto label_205dd8;
        case 0x205ddcu: goto label_205ddc;
        case 0x205de0u: goto label_205de0;
        case 0x205de4u: goto label_205de4;
        case 0x205de8u: goto label_205de8;
        case 0x205decu: goto label_205dec;
        case 0x205df0u: goto label_205df0;
        case 0x205df4u: goto label_205df4;
        case 0x205df8u: goto label_205df8;
        case 0x205dfcu: goto label_205dfc;
        case 0x205e00u: goto label_205e00;
        case 0x205e04u: goto label_205e04;
        case 0x205e08u: goto label_205e08;
        case 0x205e0cu: goto label_205e0c;
        case 0x205e10u: goto label_205e10;
        case 0x205e14u: goto label_205e14;
        case 0x205e18u: goto label_205e18;
        case 0x205e1cu: goto label_205e1c;
        case 0x205e20u: goto label_205e20;
        case 0x205e24u: goto label_205e24;
        case 0x205e28u: goto label_205e28;
        case 0x205e2cu: goto label_205e2c;
        case 0x205e30u: goto label_205e30;
        case 0x205e34u: goto label_205e34;
        case 0x205e38u: goto label_205e38;
        case 0x205e3cu: goto label_205e3c;
        case 0x205e40u: goto label_205e40;
        case 0x205e44u: goto label_205e44;
        case 0x205e48u: goto label_205e48;
        case 0x205e4cu: goto label_205e4c;
        case 0x205e50u: goto label_205e50;
        case 0x205e54u: goto label_205e54;
        case 0x205e58u: goto label_205e58;
        case 0x205e5cu: goto label_205e5c;
        case 0x205e60u: goto label_205e60;
        case 0x205e64u: goto label_205e64;
        case 0x205e68u: goto label_205e68;
        case 0x205e6cu: goto label_205e6c;
        case 0x205e70u: goto label_205e70;
        case 0x205e74u: goto label_205e74;
        case 0x205e78u: goto label_205e78;
        case 0x205e7cu: goto label_205e7c;
        case 0x205e80u: goto label_205e80;
        case 0x205e84u: goto label_205e84;
        case 0x205e88u: goto label_205e88;
        case 0x205e8cu: goto label_205e8c;
        case 0x205e90u: goto label_205e90;
        case 0x205e94u: goto label_205e94;
        case 0x205e98u: goto label_205e98;
        case 0x205e9cu: goto label_205e9c;
        case 0x205ea0u: goto label_205ea0;
        case 0x205ea4u: goto label_205ea4;
        case 0x205ea8u: goto label_205ea8;
        case 0x205eacu: goto label_205eac;
        case 0x205eb0u: goto label_205eb0;
        case 0x205eb4u: goto label_205eb4;
        case 0x205eb8u: goto label_205eb8;
        case 0x205ebcu: goto label_205ebc;
        case 0x205ec0u: goto label_205ec0;
        case 0x205ec4u: goto label_205ec4;
        case 0x205ec8u: goto label_205ec8;
        case 0x205eccu: goto label_205ecc;
        case 0x205ed0u: goto label_205ed0;
        case 0x205ed4u: goto label_205ed4;
        case 0x205ed8u: goto label_205ed8;
        case 0x205edcu: goto label_205edc;
        case 0x205ee0u: goto label_205ee0;
        case 0x205ee4u: goto label_205ee4;
        case 0x205ee8u: goto label_205ee8;
        case 0x205eecu: goto label_205eec;
        case 0x205ef0u: goto label_205ef0;
        case 0x205ef4u: goto label_205ef4;
        case 0x205ef8u: goto label_205ef8;
        case 0x205efcu: goto label_205efc;
        case 0x205f00u: goto label_205f00;
        case 0x205f04u: goto label_205f04;
        case 0x205f08u: goto label_205f08;
        case 0x205f0cu: goto label_205f0c;
        case 0x205f10u: goto label_205f10;
        case 0x205f14u: goto label_205f14;
        case 0x205f18u: goto label_205f18;
        case 0x205f1cu: goto label_205f1c;
        case 0x205f20u: goto label_205f20;
        case 0x205f24u: goto label_205f24;
        case 0x205f28u: goto label_205f28;
        case 0x205f2cu: goto label_205f2c;
        case 0x205f30u: goto label_205f30;
        case 0x205f34u: goto label_205f34;
        case 0x205f38u: goto label_205f38;
        case 0x205f3cu: goto label_205f3c;
        case 0x205f40u: goto label_205f40;
        case 0x205f44u: goto label_205f44;
        case 0x205f48u: goto label_205f48;
        case 0x205f4cu: goto label_205f4c;
        case 0x205f50u: goto label_205f50;
        case 0x205f54u: goto label_205f54;
        case 0x205f58u: goto label_205f58;
        case 0x205f5cu: goto label_205f5c;
        case 0x205f60u: goto label_205f60;
        case 0x205f64u: goto label_205f64;
        case 0x205f68u: goto label_205f68;
        case 0x205f6cu: goto label_205f6c;
        case 0x205f70u: goto label_205f70;
        case 0x205f74u: goto label_205f74;
        case 0x205f78u: goto label_205f78;
        case 0x205f7cu: goto label_205f7c;
        case 0x205f80u: goto label_205f80;
        case 0x205f84u: goto label_205f84;
        case 0x205f88u: goto label_205f88;
        case 0x205f8cu: goto label_205f8c;
        case 0x205f90u: goto label_205f90;
        case 0x205f94u: goto label_205f94;
        case 0x205f98u: goto label_205f98;
        case 0x205f9cu: goto label_205f9c;
        case 0x205fa0u: goto label_205fa0;
        case 0x205fa4u: goto label_205fa4;
        case 0x205fa8u: goto label_205fa8;
        case 0x205facu: goto label_205fac;
        case 0x205fb0u: goto label_205fb0;
        case 0x205fb4u: goto label_205fb4;
        case 0x205fb8u: goto label_205fb8;
        case 0x205fbcu: goto label_205fbc;
        case 0x205fc0u: goto label_205fc0;
        case 0x205fc4u: goto label_205fc4;
        case 0x205fc8u: goto label_205fc8;
        case 0x205fccu: goto label_205fcc;
        case 0x205fd0u: goto label_205fd0;
        case 0x205fd4u: goto label_205fd4;
        case 0x205fd8u: goto label_205fd8;
        case 0x205fdcu: goto label_205fdc;
        case 0x205fe0u: goto label_205fe0;
        case 0x205fe4u: goto label_205fe4;
        case 0x205fe8u: goto label_205fe8;
        case 0x205fecu: goto label_205fec;
        case 0x205ff0u: goto label_205ff0;
        case 0x205ff4u: goto label_205ff4;
        case 0x205ff8u: goto label_205ff8;
        case 0x205ffcu: goto label_205ffc;
        case 0x206000u: goto label_206000;
        case 0x206004u: goto label_206004;
        case 0x206008u: goto label_206008;
        case 0x20600cu: goto label_20600c;
        case 0x206010u: goto label_206010;
        case 0x206014u: goto label_206014;
        case 0x206018u: goto label_206018;
        case 0x20601cu: goto label_20601c;
        case 0x206020u: goto label_206020;
        case 0x206024u: goto label_206024;
        case 0x206028u: goto label_206028;
        case 0x20602cu: goto label_20602c;
        case 0x206030u: goto label_206030;
        case 0x206034u: goto label_206034;
        case 0x206038u: goto label_206038;
        case 0x20603cu: goto label_20603c;
        case 0x206040u: goto label_206040;
        case 0x206044u: goto label_206044;
        case 0x206048u: goto label_206048;
        case 0x20604cu: goto label_20604c;
        case 0x206050u: goto label_206050;
        case 0x206054u: goto label_206054;
        case 0x206058u: goto label_206058;
        case 0x20605cu: goto label_20605c;
        case 0x206060u: goto label_206060;
        case 0x206064u: goto label_206064;
        case 0x206068u: goto label_206068;
        case 0x20606cu: goto label_20606c;
        case 0x206070u: goto label_206070;
        case 0x206074u: goto label_206074;
        case 0x206078u: goto label_206078;
        case 0x20607cu: goto label_20607c;
        case 0x206080u: goto label_206080;
        case 0x206084u: goto label_206084;
        case 0x206088u: goto label_206088;
        case 0x20608cu: goto label_20608c;
        case 0x206090u: goto label_206090;
        case 0x206094u: goto label_206094;
        case 0x206098u: goto label_206098;
        case 0x20609cu: goto label_20609c;
        case 0x2060a0u: goto label_2060a0;
        case 0x2060a4u: goto label_2060a4;
        case 0x2060a8u: goto label_2060a8;
        case 0x2060acu: goto label_2060ac;
        case 0x2060b0u: goto label_2060b0;
        case 0x2060b4u: goto label_2060b4;
        case 0x2060b8u: goto label_2060b8;
        case 0x2060bcu: goto label_2060bc;
        case 0x2060c0u: goto label_2060c0;
        case 0x2060c4u: goto label_2060c4;
        case 0x2060c8u: goto label_2060c8;
        case 0x2060ccu: goto label_2060cc;
        case 0x2060d0u: goto label_2060d0;
        case 0x2060d4u: goto label_2060d4;
        case 0x2060d8u: goto label_2060d8;
        case 0x2060dcu: goto label_2060dc;
        case 0x2060e0u: goto label_2060e0;
        case 0x2060e4u: goto label_2060e4;
        case 0x2060e8u: goto label_2060e8;
        case 0x2060ecu: goto label_2060ec;
        case 0x2060f0u: goto label_2060f0;
        case 0x2060f4u: goto label_2060f4;
        case 0x2060f8u: goto label_2060f8;
        case 0x2060fcu: goto label_2060fc;
        case 0x206100u: goto label_206100;
        case 0x206104u: goto label_206104;
        case 0x206108u: goto label_206108;
        case 0x20610cu: goto label_20610c;
        case 0x206110u: goto label_206110;
        case 0x206114u: goto label_206114;
        case 0x206118u: goto label_206118;
        case 0x20611cu: goto label_20611c;
        case 0x206120u: goto label_206120;
        case 0x206124u: goto label_206124;
        case 0x206128u: goto label_206128;
        case 0x20612cu: goto label_20612c;
        case 0x206130u: goto label_206130;
        case 0x206134u: goto label_206134;
        case 0x206138u: goto label_206138;
        case 0x20613cu: goto label_20613c;
        case 0x206140u: goto label_206140;
        case 0x206144u: goto label_206144;
        case 0x206148u: goto label_206148;
        case 0x20614cu: goto label_20614c;
        case 0x206150u: goto label_206150;
        case 0x206154u: goto label_206154;
        case 0x206158u: goto label_206158;
        case 0x20615cu: goto label_20615c;
        case 0x206160u: goto label_206160;
        case 0x206164u: goto label_206164;
        case 0x206168u: goto label_206168;
        case 0x20616cu: goto label_20616c;
        case 0x206170u: goto label_206170;
        case 0x206174u: goto label_206174;
        case 0x206178u: goto label_206178;
        case 0x20617cu: goto label_20617c;
        case 0x206180u: goto label_206180;
        case 0x206184u: goto label_206184;
        case 0x206188u: goto label_206188;
        case 0x20618cu: goto label_20618c;
        case 0x206190u: goto label_206190;
        case 0x206194u: goto label_206194;
        case 0x206198u: goto label_206198;
        case 0x20619cu: goto label_20619c;
        case 0x2061a0u: goto label_2061a0;
        case 0x2061a4u: goto label_2061a4;
        case 0x2061a8u: goto label_2061a8;
        case 0x2061acu: goto label_2061ac;
        case 0x2061b0u: goto label_2061b0;
        case 0x2061b4u: goto label_2061b4;
        case 0x2061b8u: goto label_2061b8;
        case 0x2061bcu: goto label_2061bc;
        case 0x2061c0u: goto label_2061c0;
        case 0x2061c4u: goto label_2061c4;
        case 0x2061c8u: goto label_2061c8;
        case 0x2061ccu: goto label_2061cc;
        case 0x2061d0u: goto label_2061d0;
        case 0x2061d4u: goto label_2061d4;
        case 0x2061d8u: goto label_2061d8;
        case 0x2061dcu: goto label_2061dc;
        case 0x2061e0u: goto label_2061e0;
        case 0x2061e4u: goto label_2061e4;
        case 0x2061e8u: goto label_2061e8;
        case 0x2061ecu: goto label_2061ec;
        case 0x2061f0u: goto label_2061f0;
        case 0x2061f4u: goto label_2061f4;
        case 0x2061f8u: goto label_2061f8;
        case 0x2061fcu: goto label_2061fc;
        case 0x206200u: goto label_206200;
        case 0x206204u: goto label_206204;
        case 0x206208u: goto label_206208;
        case 0x20620cu: goto label_20620c;
        case 0x206210u: goto label_206210;
        case 0x206214u: goto label_206214;
        case 0x206218u: goto label_206218;
        case 0x20621cu: goto label_20621c;
        case 0x206220u: goto label_206220;
        case 0x206224u: goto label_206224;
        case 0x206228u: goto label_206228;
        case 0x20622cu: goto label_20622c;
        case 0x206230u: goto label_206230;
        case 0x206234u: goto label_206234;
        case 0x206238u: goto label_206238;
        case 0x20623cu: goto label_20623c;
        case 0x206240u: goto label_206240;
        case 0x206244u: goto label_206244;
        case 0x206248u: goto label_206248;
        case 0x20624cu: goto label_20624c;
        case 0x206250u: goto label_206250;
        case 0x206254u: goto label_206254;
        case 0x206258u: goto label_206258;
        case 0x20625cu: goto label_20625c;
        case 0x206260u: goto label_206260;
        case 0x206264u: goto label_206264;
        case 0x206268u: goto label_206268;
        case 0x20626cu: goto label_20626c;
        case 0x206270u: goto label_206270;
        case 0x206274u: goto label_206274;
        case 0x206278u: goto label_206278;
        case 0x20627cu: goto label_20627c;
        case 0x206280u: goto label_206280;
        case 0x206284u: goto label_206284;
        case 0x206288u: goto label_206288;
        case 0x20628cu: goto label_20628c;
        case 0x206290u: goto label_206290;
        case 0x206294u: goto label_206294;
        case 0x206298u: goto label_206298;
        case 0x20629cu: goto label_20629c;
        case 0x2062a0u: goto label_2062a0;
        case 0x2062a4u: goto label_2062a4;
        case 0x2062a8u: goto label_2062a8;
        case 0x2062acu: goto label_2062ac;
        case 0x2062b0u: goto label_2062b0;
        case 0x2062b4u: goto label_2062b4;
        case 0x2062b8u: goto label_2062b8;
        case 0x2062bcu: goto label_2062bc;
        case 0x2062c0u: goto label_2062c0;
        case 0x2062c4u: goto label_2062c4;
        case 0x2062c8u: goto label_2062c8;
        case 0x2062ccu: goto label_2062cc;
        case 0x2062d0u: goto label_2062d0;
        case 0x2062d4u: goto label_2062d4;
        case 0x2062d8u: goto label_2062d8;
        case 0x2062dcu: goto label_2062dc;
        case 0x2062e0u: goto label_2062e0;
        case 0x2062e4u: goto label_2062e4;
        case 0x2062e8u: goto label_2062e8;
        case 0x2062ecu: goto label_2062ec;
        case 0x2062f0u: goto label_2062f0;
        case 0x2062f4u: goto label_2062f4;
        case 0x2062f8u: goto label_2062f8;
        case 0x2062fcu: goto label_2062fc;
        case 0x206300u: goto label_206300;
        case 0x206304u: goto label_206304;
        case 0x206308u: goto label_206308;
        case 0x20630cu: goto label_20630c;
        case 0x206310u: goto label_206310;
        case 0x206314u: goto label_206314;
        case 0x206318u: goto label_206318;
        case 0x20631cu: goto label_20631c;
        case 0x206320u: goto label_206320;
        case 0x206324u: goto label_206324;
        case 0x206328u: goto label_206328;
        case 0x20632cu: goto label_20632c;
        case 0x206330u: goto label_206330;
        case 0x206334u: goto label_206334;
        case 0x206338u: goto label_206338;
        case 0x20633cu: goto label_20633c;
        case 0x206340u: goto label_206340;
        case 0x206344u: goto label_206344;
        case 0x206348u: goto label_206348;
        case 0x20634cu: goto label_20634c;
        case 0x206350u: goto label_206350;
        case 0x206354u: goto label_206354;
        case 0x206358u: goto label_206358;
        case 0x20635cu: goto label_20635c;
        case 0x206360u: goto label_206360;
        case 0x206364u: goto label_206364;
        case 0x206368u: goto label_206368;
        case 0x20636cu: goto label_20636c;
        case 0x206370u: goto label_206370;
        case 0x206374u: goto label_206374;
        case 0x206378u: goto label_206378;
        case 0x20637cu: goto label_20637c;
        case 0x206380u: goto label_206380;
        case 0x206384u: goto label_206384;
        case 0x206388u: goto label_206388;
        case 0x20638cu: goto label_20638c;
        case 0x206390u: goto label_206390;
        case 0x206394u: goto label_206394;
        case 0x206398u: goto label_206398;
        case 0x20639cu: goto label_20639c;
        case 0x2063a0u: goto label_2063a0;
        case 0x2063a4u: goto label_2063a4;
        case 0x2063a8u: goto label_2063a8;
        case 0x2063acu: goto label_2063ac;
        case 0x2063b0u: goto label_2063b0;
        case 0x2063b4u: goto label_2063b4;
        case 0x2063b8u: goto label_2063b8;
        case 0x2063bcu: goto label_2063bc;
        case 0x2063c0u: goto label_2063c0;
        case 0x2063c4u: goto label_2063c4;
        case 0x2063c8u: goto label_2063c8;
        case 0x2063ccu: goto label_2063cc;
        case 0x2063d0u: goto label_2063d0;
        case 0x2063d4u: goto label_2063d4;
        case 0x2063d8u: goto label_2063d8;
        case 0x2063dcu: goto label_2063dc;
        case 0x2063e0u: goto label_2063e0;
        case 0x2063e4u: goto label_2063e4;
        case 0x2063e8u: goto label_2063e8;
        case 0x2063ecu: goto label_2063ec;
        case 0x2063f0u: goto label_2063f0;
        case 0x2063f4u: goto label_2063f4;
        case 0x2063f8u: goto label_2063f8;
        case 0x2063fcu: goto label_2063fc;
        case 0x206400u: goto label_206400;
        case 0x206404u: goto label_206404;
        case 0x206408u: goto label_206408;
        case 0x20640cu: goto label_20640c;
        case 0x206410u: goto label_206410;
        case 0x206414u: goto label_206414;
        case 0x206418u: goto label_206418;
        case 0x20641cu: goto label_20641c;
        case 0x206420u: goto label_206420;
        case 0x206424u: goto label_206424;
        case 0x206428u: goto label_206428;
        case 0x20642cu: goto label_20642c;
        case 0x206430u: goto label_206430;
        case 0x206434u: goto label_206434;
        case 0x206438u: goto label_206438;
        case 0x20643cu: goto label_20643c;
        case 0x206440u: goto label_206440;
        case 0x206444u: goto label_206444;
        case 0x206448u: goto label_206448;
        case 0x20644cu: goto label_20644c;
        case 0x206450u: goto label_206450;
        case 0x206454u: goto label_206454;
        case 0x206458u: goto label_206458;
        case 0x20645cu: goto label_20645c;
        case 0x206460u: goto label_206460;
        case 0x206464u: goto label_206464;
        case 0x206468u: goto label_206468;
        case 0x20646cu: goto label_20646c;
        case 0x206470u: goto label_206470;
        case 0x206474u: goto label_206474;
        case 0x206478u: goto label_206478;
        case 0x20647cu: goto label_20647c;
        case 0x206480u: goto label_206480;
        case 0x206484u: goto label_206484;
        case 0x206488u: goto label_206488;
        case 0x20648cu: goto label_20648c;
        case 0x206490u: goto label_206490;
        case 0x206494u: goto label_206494;
        case 0x206498u: goto label_206498;
        case 0x20649cu: goto label_20649c;
        case 0x2064a0u: goto label_2064a0;
        case 0x2064a4u: goto label_2064a4;
        case 0x2064a8u: goto label_2064a8;
        case 0x2064acu: goto label_2064ac;
        case 0x2064b0u: goto label_2064b0;
        case 0x2064b4u: goto label_2064b4;
        case 0x2064b8u: goto label_2064b8;
        case 0x2064bcu: goto label_2064bc;
        case 0x2064c0u: goto label_2064c0;
        case 0x2064c4u: goto label_2064c4;
        case 0x2064c8u: goto label_2064c8;
        case 0x2064ccu: goto label_2064cc;
        case 0x2064d0u: goto label_2064d0;
        case 0x2064d4u: goto label_2064d4;
        case 0x2064d8u: goto label_2064d8;
        case 0x2064dcu: goto label_2064dc;
        case 0x2064e0u: goto label_2064e0;
        case 0x2064e4u: goto label_2064e4;
        case 0x2064e8u: goto label_2064e8;
        case 0x2064ecu: goto label_2064ec;
        case 0x2064f0u: goto label_2064f0;
        case 0x2064f4u: goto label_2064f4;
        case 0x2064f8u: goto label_2064f8;
        case 0x2064fcu: goto label_2064fc;
        case 0x206500u: goto label_206500;
        case 0x206504u: goto label_206504;
        case 0x206508u: goto label_206508;
        case 0x20650cu: goto label_20650c;
        case 0x206510u: goto label_206510;
        case 0x206514u: goto label_206514;
        case 0x206518u: goto label_206518;
        case 0x20651cu: goto label_20651c;
        case 0x206520u: goto label_206520;
        case 0x206524u: goto label_206524;
        case 0x206528u: goto label_206528;
        case 0x20652cu: goto label_20652c;
        case 0x206530u: goto label_206530;
        case 0x206534u: goto label_206534;
        case 0x206538u: goto label_206538;
        case 0x20653cu: goto label_20653c;
        case 0x206540u: goto label_206540;
        case 0x206544u: goto label_206544;
        case 0x206548u: goto label_206548;
        case 0x20654cu: goto label_20654c;
        case 0x206550u: goto label_206550;
        case 0x206554u: goto label_206554;
        case 0x206558u: goto label_206558;
        case 0x20655cu: goto label_20655c;
        case 0x206560u: goto label_206560;
        case 0x206564u: goto label_206564;
        case 0x206568u: goto label_206568;
        case 0x20656cu: goto label_20656c;
        case 0x206570u: goto label_206570;
        case 0x206574u: goto label_206574;
        case 0x206578u: goto label_206578;
        case 0x20657cu: goto label_20657c;
        case 0x206580u: goto label_206580;
        case 0x206584u: goto label_206584;
        case 0x206588u: goto label_206588;
        case 0x20658cu: goto label_20658c;
        case 0x206590u: goto label_206590;
        case 0x206594u: goto label_206594;
        case 0x206598u: goto label_206598;
        case 0x20659cu: goto label_20659c;
        case 0x2065a0u: goto label_2065a0;
        case 0x2065a4u: goto label_2065a4;
        case 0x2065a8u: goto label_2065a8;
        case 0x2065acu: goto label_2065ac;
        case 0x2065b0u: goto label_2065b0;
        case 0x2065b4u: goto label_2065b4;
        case 0x2065b8u: goto label_2065b8;
        case 0x2065bcu: goto label_2065bc;
        case 0x2065c0u: goto label_2065c0;
        case 0x2065c4u: goto label_2065c4;
        case 0x2065c8u: goto label_2065c8;
        case 0x2065ccu: goto label_2065cc;
        default: break;
    }

    ctx->pc = 0x205470u;

label_205470:
    // 0x205470: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x205470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_205474:
    // 0x205474: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x205474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_205478:
    // 0x205478: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x205478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_20547c:
    // 0x20547c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20547cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_205480:
    // 0x205480: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x205480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_205484:
    // 0x205484: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x205484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_205488:
    // 0x205488: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x205488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20548c:
    // 0x20548c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20548cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205490:
    // 0x205490: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x205490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_205494:
    // 0x205494: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x205494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_205498:
    // 0x205498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x205498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20549c:
    // 0x20549c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20549cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2054a0:
    // 0x2054a0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2054a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2054a4:
    // 0x2054a4: 0xac90004c  sw          $s0, 0x4C($a0)
    ctx->pc = 0x2054a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 16));
label_2054a8:
    // 0x2054a8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2054a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2054ac:
    // 0x2054ac: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x2054acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_2054b0:
    // 0x2054b0: 0x83a024  and         $s4, $a0, $v1
    ctx->pc = 0x2054b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2054b4:
    // 0x2054b4: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x2054b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_2054b8:
    // 0x2054b8: 0x14a883  sra         $s5, $s4, 2
    ctx->pc = 0x2054b8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 20), 2));
label_2054bc:
    // 0x2054bc: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_2054c0:
    if (ctx->pc == 0x2054C0u) {
        ctx->pc = 0x2054C0u;
            // 0x2054c0: 0x318be  dsrl32      $v1, $v1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
        ctx->pc = 0x2054C4u;
        goto label_2054c4;
    }
    ctx->pc = 0x2054BCu;
    {
        const bool branch_taken_0x2054bc = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2054C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2054BCu;
            // 0x2054c0: 0x318be  dsrl32      $v1, $v1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054bc) {
            ctx->pc = 0x2054CCu;
            goto label_2054cc;
        }
    }
    ctx->pc = 0x2054C4u;
label_2054c4:
    // 0x2054c4: 0x26820003  addiu       $v0, $s4, 0x3
    ctx->pc = 0x2054c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
label_2054c8:
    // 0x2054c8: 0x2a883  sra         $s5, $v0, 2
    ctx->pc = 0x2054c8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 2));
label_2054cc:
    // 0x2054cc: 0x75082a  slt         $at, $v1, $s5
    ctx->pc = 0x2054ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_2054d0:
    // 0x2054d0: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
label_2054d4:
    if (ctx->pc == 0x2054D4u) {
        ctx->pc = 0x2054D4u;
            // 0x2054d4: 0xae750044  sw          $s5, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 21));
        ctx->pc = 0x2054D8u;
        goto label_2054d8;
    }
    ctx->pc = 0x2054D0u;
    {
        const bool branch_taken_0x2054d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2054d0) {
            ctx->pc = 0x2054D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2054D0u;
            // 0x2054d4: 0xae750044  sw          $s5, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2054F8u;
            goto label_2054f8;
        }
    }
    ctx->pc = 0x2054D8u;
label_2054d8:
    // 0x2054d8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2054d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2054dc:
    // 0x2054dc: 0x2a5082a  slt         $at, $s5, $a1
    ctx->pc = 0x2054dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2054e0:
    // 0x2054e0: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_2054e4:
    if (ctx->pc == 0x2054E4u) {
        ctx->pc = 0x2054E4u;
            // 0x2054e4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2054E8u;
        goto label_2054e8;
    }
    ctx->pc = 0x2054E0u;
    {
        const bool branch_taken_0x2054e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2054e0) {
            ctx->pc = 0x2054E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2054E0u;
            // 0x2054e4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2054E8u;
            goto label_2054e8;
        }
    }
    ctx->pc = 0x2054E8u;
label_2054e8:
    // 0x2054e8: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x2054e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_2054ec:
    // 0x2054ec: 0xc0a725c  jal         func_29C970
label_2054f0:
    if (ctx->pc == 0x2054F0u) {
        ctx->pc = 0x2054F0u;
            // 0x2054f0: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2054F4u;
        goto label_2054f4;
    }
    ctx->pc = 0x2054ECu;
    SET_GPR_U32(ctx, 31, 0x2054F4u);
    ctx->pc = 0x2054F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2054ECu;
            // 0x2054f0: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2054F4u; }
        if (ctx->pc != 0x2054F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2054F4u; }
        if (ctx->pc != 0x2054F4u) { return; }
    }
    ctx->pc = 0x2054F4u;
label_2054f4:
    // 0x2054f4: 0xae750044  sw          $s5, 0x44($s3)
    ctx->pc = 0x2054f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 21));
label_2054f8:
    // 0x2054f8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2054f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2054fc:
    // 0x2054fc: 0x1a00001e  blez        $s0, . + 4 + (0x1E << 2)
label_205500:
    if (ctx->pc == 0x205500u) {
        ctx->pc = 0x205500u;
            // 0x205500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205504u;
        goto label_205504;
    }
    ctx->pc = 0x2054FCu;
    {
        const bool branch_taken_0x2054fc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x205500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2054FCu;
            // 0x205500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054fc) {
            ctx->pc = 0x205578u;
            goto label_205578;
        }
    }
    ctx->pc = 0x205504u;
label_205504:
    // 0x205504: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_205508:
    if (ctx->pc == 0x205508u) {
        ctx->pc = 0x205508u;
            // 0x205508: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->pc = 0x20550Cu;
        goto label_20550c;
    }
    ctx->pc = 0x205504u;
    {
        const bool branch_taken_0x205504 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x205508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205504u;
            // 0x205508: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205504) {
            ctx->pc = 0x205514u;
            goto label_205514;
        }
    }
    ctx->pc = 0x20550Cu;
label_20550c:
    // 0x20550c: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x20550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_205510:
    // 0x205510: 0x43083  sra         $a2, $a0, 2
    ctx->pc = 0x205510u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 2));
label_205514:
    // 0x205514: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x205514u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_205518:
    // 0x205518: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x205518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_20551c:
    // 0x20551c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x20551cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_205520:
    // 0x205520: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x205520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_205524:
    // 0x205524: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x205524u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_205528:
    // 0x205528: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x205528u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20552c:
    // 0x20552c: 0x8e650040  lw          $a1, 0x40($s3)
    ctx->pc = 0x20552cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_205530:
    // 0x205530: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x205530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205534:
    // 0x205534: 0x50202a  slt         $a0, $v0, $s0
    ctx->pc = 0x205534u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_205538:
    // 0x205538: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x205538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_20553c:
    // 0x20553c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x20553cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_205540:
    // 0x205540: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x205540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_205544:
    // 0x205544: 0x8e650040  lw          $a1, 0x40($s3)
    ctx->pc = 0x205544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_205548:
    // 0x205548: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x205548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20554c:
    // 0x20554c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x20554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_205550:
    // 0x205550: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x205550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_205554:
    // 0x205554: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x205554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_205558:
    // 0x205558: 0x8e650040  lw          $a1, 0x40($s3)
    ctx->pc = 0x205558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_20555c:
    // 0x20555c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x20555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205560:
    // 0x205560: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x205560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_205564:
    // 0x205564: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x205564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_205568:
    // 0x205568: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x205568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_20556c:
    // 0x20556c: 0x1480ffe5  bnez        $a0, . + 4 + (-0x1B << 2)
label_205570:
    if (ctx->pc == 0x205570u) {
        ctx->pc = 0x205570u;
            // 0x205570: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->pc = 0x205574u;
        goto label_205574;
    }
    ctx->pc = 0x20556Cu;
    {
        const bool branch_taken_0x20556c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x205570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20556Cu;
            // 0x205570: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20556c) {
            ctx->pc = 0x205504u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205504;
        }
    }
    ctx->pc = 0x205574u;
label_205574:
    // 0x205574: 0x0  nop
    ctx->pc = 0x205574u;
    // NOP
label_205578:
    // 0x205578: 0x112023  negu        $a0, $s1
    ctx->pc = 0x205578u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_20557c:
    // 0x20557c: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x20557cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_205580:
    // 0x205580: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_205584:
    if (ctx->pc == 0x205584u) {
        ctx->pc = 0x205584u;
            // 0x205584: 0x643821  addu        $a3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x205588u;
        goto label_205588;
    }
    ctx->pc = 0x205580u;
    {
        const bool branch_taken_0x205580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x205584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205580u;
            // 0x205584: 0x643821  addu        $a3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205580) {
            ctx->pc = 0x2055E8u;
            goto label_2055e8;
        }
    }
    ctx->pc = 0x205588u;
label_205588:
    // 0x205588: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x205588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_20558c:
    // 0x20558c: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x20558cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
label_205590:
    // 0x205590: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x205590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_205594:
    // 0x205594: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x205594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_205598:
    // 0x205598: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x205598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_20559c:
    // 0x20559c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20559cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2055a0:
    // 0x2055a0: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x2055a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2055a4:
    // 0x2055a4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2055a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2055a8:
    // 0x2055a8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2055a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2055ac:
    // 0x2055ac: 0x54182a  slt         $v1, $v0, $s4
    ctx->pc = 0x2055acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2055b0:
    // 0x2055b0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2055b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2055b4:
    // 0x2055b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2055b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2055b8:
    // 0x2055b8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2055b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2055bc:
    // 0x2055bc: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x2055bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2055c0:
    // 0x2055c0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2055c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2055c4:
    // 0x2055c4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2055c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2055c8:
    // 0x2055c8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2055c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2055cc:
    // 0x2055cc: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2055ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2055d0:
    // 0x2055d0: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x2055d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2055d4:
    // 0x2055d4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2055d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2055d8:
    // 0x2055d8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2055d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2055dc:
    // 0x2055dc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2055dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2055e0:
    // 0x2055e0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_2055e4:
    if (ctx->pc == 0x2055E4u) {
        ctx->pc = 0x2055E4u;
            // 0x2055e4: 0xe4800020  swc1        $f0, 0x20($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->pc = 0x2055E8u;
        goto label_2055e8;
    }
    ctx->pc = 0x2055E0u;
    {
        const bool branch_taken_0x2055e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2055E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2055E0u;
            // 0x2055e4: 0xe4800020  swc1        $f0, 0x20($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055e0) {
            ctx->pc = 0x205588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205588;
        }
    }
    ctx->pc = 0x2055E8u;
label_2055e8:
    // 0x2055e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2055e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2055ec:
    // 0x2055ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2055ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2055f0:
    // 0x2055f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2055f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2055f4:
    // 0x2055f4: 0xc0830bc  jal         func_20C2F0
label_2055f8:
    if (ctx->pc == 0x2055F8u) {
        ctx->pc = 0x2055F8u;
            // 0x2055f8: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2055FCu;
        goto label_2055fc;
    }
    ctx->pc = 0x2055F4u;
    SET_GPR_U32(ctx, 31, 0x2055FCu);
    ctx->pc = 0x2055F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2055F4u;
            // 0x2055f8: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C2F0u;
    if (runtime->hasFunction(0x20C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x20C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2055FCu; }
        if (ctx->pc != 0x2055FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C2F0_0x20c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2055FCu; }
        if (ctx->pc != 0x2055FCu) { return; }
    }
    ctx->pc = 0x2055FCu;
label_2055fc:
    // 0x2055fc: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2055fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205600:
    // 0x205600: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x205600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_205604:
    // 0x205604: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x205604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205608:
    // 0x205608: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x205608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20560c:
    // 0x20560c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20560cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205610:
    // 0x205610: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x205610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
label_205614:
    // 0x205614: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x205614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205618:
    // 0x205618: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x205618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20561c:
    // 0x20561c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20561cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205620:
    // 0x205620: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x205620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_205624:
    // 0x205624: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x205624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205628:
    // 0x205628: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x205628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20562c:
    // 0x20562c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20562cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205630:
    // 0x205630: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x205630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_205634:
    // 0x205634: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x205634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205638:
    // 0x205638: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x205638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20563c:
    // 0x20563c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20563cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205640:
    // 0x205640: 0xe660003c  swc1        $f0, 0x3C($s3)
    ctx->pc = 0x205640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
label_205644:
    // 0x205644: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x205644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205648:
    // 0x205648: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x205648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_20564c:
    // 0x20564c: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x20564cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
label_205650:
    // 0x205650: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x205650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205654:
    // 0x205654: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x205654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_205658:
    // 0x205658: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x205658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_20565c:
    // 0x20565c: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x20565cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205660:
    // 0x205660: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x205660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_205664:
    // 0x205664: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x205664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_205668:
    // 0x205668: 0xc660003c  lwc1        $f0, 0x3C($s3)
    ctx->pc = 0x205668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20566c:
    // 0x20566c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20566cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_205670:
    // 0x205670: 0xe660003c  swc1        $f0, 0x3C($s3)
    ctx->pc = 0x205670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
label_205674:
    // 0x205674: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x205674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205678:
    // 0x205678: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x205678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20567c:
    // 0x20567c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20567cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_205680:
    // 0x205680: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x205680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_205684:
    // 0x205684: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x205684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205688:
    // 0x205688: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x205688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20568c:
    // 0x20568c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20568cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_205690:
    // 0x205690: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x205690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_205694:
    // 0x205694: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x205694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205698:
    // 0x205698: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x205698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20569c:
    // 0x20569c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20569cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2056a0:
    // 0x2056a0: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x2056a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
label_2056a4:
    // 0x2056a4: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x2056a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2056a8:
    // 0x2056a8: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2056a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2056ac:
    // 0x2056ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2056acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2056b0:
    // 0x2056b0: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x2056b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
label_2056b4:
    // 0x2056b4: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x2056b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2056b8:
    // 0x2056b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2056b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2056bc:
    // 0x2056bc: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x2056bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_2056c0:
    // 0x2056c0: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x2056c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2056c4:
    // 0x2056c4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2056c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2056c8:
    // 0x2056c8: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x2056c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_2056cc:
    // 0x2056cc: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x2056ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2056d0:
    // 0x2056d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2056d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2056d4:
    // 0x2056d4: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x2056d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
label_2056d8:
    // 0x2056d8: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x2056d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2056dc:
    // 0x2056dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2056dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2056e0:
    // 0x2056e0: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x2056e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
label_2056e4:
    // 0x2056e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2056e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2056e8:
    // 0x2056e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2056e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2056ec:
    // 0x2056ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2056ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2056f0:
    // 0x2056f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2056f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2056f4:
    // 0x2056f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2056f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2056f8:
    // 0x2056f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2056f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2056fc:
    // 0x2056fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2056fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_205700:
    // 0x205700: 0x3e00008  jr          $ra
label_205704:
    if (ctx->pc == 0x205704u) {
        ctx->pc = 0x205704u;
            // 0x205704: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x205708u;
        goto label_205708;
    }
    ctx->pc = 0x205700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205700u;
            // 0x205704: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x205708u;
label_205708:
    // 0x205708: 0x0  nop
    ctx->pc = 0x205708u;
    // NOP
label_20570c:
    // 0x20570c: 0x0  nop
    ctx->pc = 0x20570cu;
    // NOP
label_205710:
    // 0x205710: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x205710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_205714:
    // 0x205714: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x205714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205718:
    // 0x205718: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x205718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_20571c:
    // 0x20571c: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x20571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_205720:
    // 0x205720: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x205720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205724:
    // 0x205724: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x205724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_205728:
    // 0x205728: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x205728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_20572c:
    // 0x20572c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x20572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205730:
    // 0x205730: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x205730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_205734:
    // 0x205734: 0x3e00008  jr          $ra
label_205738:
    if (ctx->pc == 0x205738u) {
        ctx->pc = 0x205738u;
            // 0x205738: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x20573Cu;
        goto label_20573c;
    }
    ctx->pc = 0x205734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205734u;
            // 0x205738: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20573Cu;
label_20573c:
    // 0x20573c: 0x0  nop
    ctx->pc = 0x20573cu;
    // NOP
label_205740:
    // 0x205740: 0x3e00008  jr          $ra
label_205744:
    if (ctx->pc == 0x205744u) {
        ctx->pc = 0x205744u;
            // 0x205744: 0x8c82004c  lw          $v0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->pc = 0x205748u;
        goto label_205748;
    }
    ctx->pc = 0x205740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205740u;
            // 0x205744: 0x8c82004c  lw          $v0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x205748u;
label_205748:
    // 0x205748: 0x0  nop
    ctx->pc = 0x205748u;
    // NOP
label_20574c:
    // 0x20574c: 0x0  nop
    ctx->pc = 0x20574cu;
    // NOP
label_205750:
    // 0x205750: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x205750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_205754:
    // 0x205754: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x205754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_205758:
    // 0x205758: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x205758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20575c:
    // 0x20575c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x20575cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_205760:
    // 0x205760: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_205764:
    if (ctx->pc == 0x205764u) {
        ctx->pc = 0x205764u;
            // 0x205764: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205768u;
        goto label_205768;
    }
    ctx->pc = 0x205760u;
    {
        const bool branch_taken_0x205760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205760u;
            // 0x205764: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205760) {
            ctx->pc = 0x205800u;
            goto label_205800;
        }
    }
    ctx->pc = 0x205768u;
label_205768:
    // 0x205768: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x205768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20576c:
    // 0x20576c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x20576cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_205770:
    // 0x205770: 0xc4c20020  lwc1        $f2, 0x20($a2)
    ctx->pc = 0x205770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205774:
    // 0x205774: 0x24e20030  addiu       $v0, $a3, 0x30
    ctx->pc = 0x205774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_205778:
    // 0x205778: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x205778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20577c:
    // 0x20577c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x20577cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_205780:
    // 0x205780: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x205780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205784:
    // 0x205784: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x205784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_205788:
    // 0x205788: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x205788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_20578c:
    // 0x20578c: 0xe4e20008  swc1        $f2, 0x8($a3)
    ctx->pc = 0x20578cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_205790:
    // 0x205790: 0xe4e3000c  swc1        $f3, 0xC($a3)
    ctx->pc = 0x205790u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_205794:
    // 0x205794: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x205794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_205798:
    // 0x205798: 0xc4c20024  lwc1        $f2, 0x24($a2)
    ctx->pc = 0x205798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20579c:
    // 0x20579c: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x20579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2057a0:
    // 0x2057a0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2057a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2057a4:
    // 0x2057a4: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x2057a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_2057a8:
    // 0x2057a8: 0xe4e10014  swc1        $f1, 0x14($a3)
    ctx->pc = 0x2057a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_2057ac:
    // 0x2057ac: 0xe4e20018  swc1        $f2, 0x18($a3)
    ctx->pc = 0x2057acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
label_2057b0:
    // 0x2057b0: 0xe4e3001c  swc1        $f3, 0x1C($a3)
    ctx->pc = 0x2057b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_2057b4:
    // 0x2057b4: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x2057b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2057b8:
    // 0x2057b8: 0xc4c20028  lwc1        $f2, 0x28($a2)
    ctx->pc = 0x2057b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2057bc:
    // 0x2057bc: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2057bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2057c0:
    // 0x2057c0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2057c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2057c4:
    // 0x2057c4: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x2057c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_2057c8:
    // 0x2057c8: 0xe4e10024  swc1        $f1, 0x24($a3)
    ctx->pc = 0x2057c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_2057cc:
    // 0x2057cc: 0xe4e20028  swc1        $f2, 0x28($a3)
    ctx->pc = 0x2057ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
label_2057d0:
    // 0x2057d0: 0xe4e3002c  swc1        $f3, 0x2C($a3)
    ctx->pc = 0x2057d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
label_2057d4:
    // 0x2057d4: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x2057d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2057d8:
    // 0x2057d8: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x2057d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_2057dc:
    // 0x2057dc: 0xc4c2002c  lwc1        $f2, 0x2C($a2)
    ctx->pc = 0x2057dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2057e0:
    // 0x2057e0: 0xc4c1001c  lwc1        $f1, 0x1C($a2)
    ctx->pc = 0x2057e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2057e4:
    // 0x2057e4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2057e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2057e8:
    // 0x2057e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2057e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2057ec:
    // 0x2057ec: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x2057ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_2057f0:
    // 0x2057f0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2057f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2057f4:
    // 0x2057f4: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2057f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2057f8:
    // 0x2057f8: 0x1020ffdb  beqz        $at, . + 4 + (-0x25 << 2)
label_2057fc:
    if (ctx->pc == 0x2057FCu) {
        ctx->pc = 0x2057FCu;
            // 0x2057fc: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->pc = 0x205800u;
        goto label_205800;
    }
    ctx->pc = 0x2057F8u;
    {
        const bool branch_taken_0x2057f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2057F8u;
            // 0x2057fc: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057f8) {
            ctx->pc = 0x205768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205768;
        }
    }
    ctx->pc = 0x205800u;
label_205800:
    // 0x205800: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
label_205804:
    if (ctx->pc == 0x205804u) {
        ctx->pc = 0x205808u;
        goto label_205808;
    }
    ctx->pc = 0x205800u;
    {
        const bool branch_taken_0x205800 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x205800) {
            ctx->pc = 0x205830u;
            goto label_205830;
        }
    }
    ctx->pc = 0x205808u;
label_205808:
    // 0x205808: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x205808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20580c:
    // 0x20580c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x20580cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_205810:
    // 0x205810: 0xc4c20020  lwc1        $f2, 0x20($a2)
    ctx->pc = 0x205810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205814:
    // 0x205814: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x205814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_205818:
    // 0x205818: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x205818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20581c:
    // 0x20581c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x20581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205820:
    // 0x205820: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x205820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_205824:
    // 0x205824: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x205824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_205828:
    // 0x205828: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x205828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_20582c:
    // 0x20582c: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x20582cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_205830:
    // 0x205830: 0x5860000c  blezl       $v1, . + 4 + (0xC << 2)
label_205834:
    if (ctx->pc == 0x205834u) {
        ctx->pc = 0x205834u;
            // 0x205834: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x205838u;
        goto label_205838;
    }
    ctx->pc = 0x205830u;
    {
        const bool branch_taken_0x205830 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x205830) {
            ctx->pc = 0x205834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205830u;
            // 0x205834: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x205864u;
            goto label_205864;
        }
    }
    ctx->pc = 0x205838u;
label_205838:
    // 0x205838: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x205838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20583c:
    // 0x20583c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x20583cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_205840:
    // 0x205840: 0xc4c20024  lwc1        $f2, 0x24($a2)
    ctx->pc = 0x205840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205844:
    // 0x205844: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x205844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_205848:
    // 0x205848: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x205848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20584c:
    // 0x20584c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x20584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205850:
    // 0x205850: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x205850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_205854:
    // 0x205854: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x205854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_205858:
    // 0x205858: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x205858u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_20585c:
    // 0x20585c: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x20585cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_205860:
    // 0x205860: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x205860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_205864:
    // 0x205864: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_205868:
    if (ctx->pc == 0x205868u) {
        ctx->pc = 0x205868u;
            // 0x205868: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20586Cu;
        goto label_20586c;
    }
    ctx->pc = 0x205864u;
    {
        const bool branch_taken_0x205864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205864) {
            ctx->pc = 0x205868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205864u;
            // 0x205868: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205890u;
            goto label_205890;
        }
    }
    ctx->pc = 0x20586Cu;
label_20586c:
    // 0x20586c: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x20586cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_205870:
    // 0x205870: 0xc4c20028  lwc1        $f2, 0x28($a2)
    ctx->pc = 0x205870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205874:
    // 0x205874: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x205874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205878:
    // 0x205878: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x205878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20587c:
    // 0x20587c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x20587cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_205880:
    // 0x205880: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x205880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_205884:
    // 0x205884: 0xe4e20008  swc1        $f2, 0x8($a3)
    ctx->pc = 0x205884u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_205888:
    // 0x205888: 0xe4e3000c  swc1        $f3, 0xC($a3)
    ctx->pc = 0x205888u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_20588c:
    // 0x20588c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20588cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_205890:
    // 0x205890: 0x3e00008  jr          $ra
label_205894:
    if (ctx->pc == 0x205894u) {
        ctx->pc = 0x205898u;
        goto label_205898;
    }
    ctx->pc = 0x205890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x205898u;
label_205898:
    // 0x205898: 0x0  nop
    ctx->pc = 0x205898u;
    // NOP
label_20589c:
    // 0x20589c: 0x0  nop
    ctx->pc = 0x20589cu;
    // NOP
label_2058a0:
    // 0x2058a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2058a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2058a4:
    // 0x2058a4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2058a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2058a8:
    // 0x2058a8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2058a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2058ac:
    // 0x2058ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2058acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2058b0:
    // 0x2058b0: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x2058b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2058b4:
    // 0x2058b4: 0xc4ad0000  lwc1        $f13, 0x0($a1)
    ctx->pc = 0x2058b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2058b8:
    // 0x2058b8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2058b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2058bc:
    // 0x2058bc: 0xc4860024  lwc1        $f6, 0x24($a0)
    ctx->pc = 0x2058bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2058c0:
    // 0x2058c0: 0x460d1042  mul.s       $f1, $f2, $f13
    ctx->pc = 0x2058c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
label_2058c4:
    // 0x2058c4: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2058c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2058c8:
    // 0x2058c8: 0xc4920028  lwc1        $f18, 0x28($a0)
    ctx->pc = 0x2058c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2058cc:
    // 0x2058cc: 0x46000c05  abs.s       $f16, $f1
    ctx->pc = 0x2058ccu;
    ctx->f[16] = FPU_ABS_S(ctx->f[1]);
label_2058d0:
    // 0x2058d0: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x2058d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2058d4:
    // 0x2058d4: 0x460c1042  mul.s       $f1, $f2, $f12
    ctx->pc = 0x2058d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_2058d8:
    // 0x2058d8: 0x46000bc5  abs.s       $f15, $f1
    ctx->pc = 0x2058d8u;
    ctx->f[15] = FPU_ABS_S(ctx->f[1]);
label_2058dc:
    // 0x2058dc: 0xc4ab0008  lwc1        $f11, 0x8($a1)
    ctx->pc = 0x2058dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_2058e0:
    // 0x2058e0: 0x460b1042  mul.s       $f1, $f2, $f11
    ctx->pc = 0x2058e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
label_2058e4:
    // 0x2058e4: 0x46000b85  abs.s       $f14, $f1
    ctx->pc = 0x2058e4u;
    ctx->f[14] = FPU_ABS_S(ctx->f[1]);
label_2058e8:
    // 0x2058e8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2058e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2058ec:
    // 0x2058ec: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2058ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2058f0:
    // 0x2058f0: 0x46000905  abs.s       $f4, $f1
    ctx->pc = 0x2058f0u;
    ctx->f[4] = FPU_ABS_S(ctx->f[1]);
label_2058f4:
    // 0x2058f4: 0xc4aa0010  lwc1        $f10, 0x10($a1)
    ctx->pc = 0x2058f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2058f8:
    // 0x2058f8: 0x460a3042  mul.s       $f1, $f6, $f10
    ctx->pc = 0x2058f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
label_2058fc:
    // 0x2058fc: 0x460008c5  abs.s       $f3, $f1
    ctx->pc = 0x2058fcu;
    ctx->f[3] = FPU_ABS_S(ctx->f[1]);
label_205900:
    // 0x205900: 0xc4a90014  lwc1        $f9, 0x14($a1)
    ctx->pc = 0x205900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_205904:
    // 0x205904: 0x46093042  mul.s       $f1, $f6, $f9
    ctx->pc = 0x205904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
label_205908:
    // 0x205908: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x205908u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
label_20590c:
    // 0x20590c: 0xc4a80018  lwc1        $f8, 0x18($a1)
    ctx->pc = 0x20590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_205910:
    // 0x205910: 0x46083042  mul.s       $f1, $f6, $f8
    ctx->pc = 0x205910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
label_205914:
    // 0x205914: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x205914u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_205918:
    // 0x205918: 0xc4a5001c  lwc1        $f5, 0x1C($a1)
    ctx->pc = 0x205918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20591c:
    // 0x20591c: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x20591cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_205920:
    // 0x205920: 0x46002d85  abs.s       $f22, $f5
    ctx->pc = 0x205920u;
    ctx->f[22] = FPU_ABS_S(ctx->f[5]);
label_205924:
    // 0x205924: 0xc4a70020  lwc1        $f7, 0x20($a1)
    ctx->pc = 0x205924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_205928:
    // 0x205928: 0x46079142  mul.s       $f5, $f18, $f7
    ctx->pc = 0x205928u;
    ctx->f[5] = FPU_MUL_S(ctx->f[18], ctx->f[7]);
label_20592c:
    // 0x20592c: 0x46002d45  abs.s       $f21, $f5
    ctx->pc = 0x20592cu;
    ctx->f[21] = FPU_ABS_S(ctx->f[5]);
label_205930:
    // 0x205930: 0xc4a60024  lwc1        $f6, 0x24($a1)
    ctx->pc = 0x205930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_205934:
    // 0x205934: 0x46069142  mul.s       $f5, $f18, $f6
    ctx->pc = 0x205934u;
    ctx->f[5] = FPU_MUL_S(ctx->f[18], ctx->f[6]);
label_205938:
    // 0x205938: 0x46002d05  abs.s       $f20, $f5
    ctx->pc = 0x205938u;
    ctx->f[20] = FPU_ABS_S(ctx->f[5]);
label_20593c:
    // 0x20593c: 0xc4a50028  lwc1        $f5, 0x28($a1)
    ctx->pc = 0x20593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_205940:
    // 0x205940: 0x46059442  mul.s       $f17, $f18, $f5
    ctx->pc = 0x205940u;
    ctx->f[17] = FPU_MUL_S(ctx->f[18], ctx->f[5]);
label_205944:
    // 0x205944: 0x46008cc5  abs.s       $f19, $f17
    ctx->pc = 0x205944u;
    ctx->f[19] = FPU_ABS_S(ctx->f[17]);
label_205948:
    // 0x205948: 0xc4b1002c  lwc1        $f17, 0x2C($a1)
    ctx->pc = 0x205948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_20594c:
    // 0x20594c: 0x46119442  mul.s       $f17, $f18, $f17
    ctx->pc = 0x20594cu;
    ctx->f[17] = FPU_MUL_S(ctx->f[18], ctx->f[17]);
label_205950:
    // 0x205950: 0x46008c45  abs.s       $f17, $f17
    ctx->pc = 0x205950u;
    ctx->f[17] = FPU_ABS_S(ctx->f[17]);
label_205954:
    // 0x205954: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x205954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_205958:
    // 0x205958: 0x46038400  add.s       $f16, $f16, $f3
    ctx->pc = 0x205958u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[3]);
label_20595c:
    // 0x20595c: 0x460278c0  add.s       $f3, $f15, $f2
    ctx->pc = 0x20595cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[15], ctx->f[2]);
label_205960:
    // 0x205960: 0x46017080  add.s       $f2, $f14, $f1
    ctx->pc = 0x205960u;
    ctx->f[2] = FPU_ADD_S(ctx->f[14], ctx->f[1]);
label_205964:
    // 0x205964: 0x4600a380  add.s       $f14, $f20, $f0
    ctx->pc = 0x205964u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_205968:
    // 0x205968: 0x46162040  add.s       $f1, $f4, $f22
    ctx->pc = 0x205968u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[22]);
label_20596c:
    // 0x20596c: 0x460e18c0  add.s       $f3, $f3, $f14
    ctx->pc = 0x20596cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[14]);
label_205970:
    // 0x205970: 0x4600a900  add.s       $f4, $f21, $f0
    ctx->pc = 0x205970u;
    ctx->f[4] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_205974:
    // 0x205974: 0x46009b80  add.s       $f14, $f19, $f0
    ctx->pc = 0x205974u;
    ctx->f[14] = FPU_ADD_S(ctx->f[19], ctx->f[0]);
label_205978:
    // 0x205978: 0x46048100  add.s       $f4, $f16, $f4
    ctx->pc = 0x205978u;
    ctx->f[4] = FPU_ADD_S(ctx->f[16], ctx->f[4]);
label_20597c:
    // 0x20597c: 0x46008800  add.s       $f0, $f17, $f0
    ctx->pc = 0x20597cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[17], ctx->f[0]);
label_205980:
    // 0x205980: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x205980u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205984:
    // 0x205984: 0x460e1080  add.s       $f2, $f2, $f14
    ctx->pc = 0x205984u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[14]);
label_205988:
    // 0x205988: 0xc4900034  lwc1        $f16, 0x34($a0)
    ctx->pc = 0x205988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_20598c:
    // 0x20598c: 0xc4910030  lwc1        $f17, 0x30($a0)
    ctx->pc = 0x20598cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_205990:
    // 0x205990: 0xc48f0038  lwc1        $f15, 0x38($a0)
    ctx->pc = 0x205990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_205994:
    // 0x205994: 0x460a801a  mula.s      $f16, $f10
    ctx->pc = 0x205994u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[10]);
label_205998:
    // 0x205998: 0x460d881e  madda.s     $f17, $f13
    ctx->pc = 0x205998u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[13]));
label_20599c:
    // 0x20599c: 0x46077b5c  madd.s      $f13, $f15, $f7
    ctx->pc = 0x20599cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[7]));
label_2059a0:
    // 0x2059a0: 0x4609801a  mula.s      $f16, $f9
    ctx->pc = 0x2059a0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[9]);
label_2059a4:
    // 0x2059a4: 0x460c881e  madda.s     $f17, $f12
    ctx->pc = 0x2059a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[12]));
label_2059a8:
    // 0x2059a8: 0x46067a9c  madd.s      $f10, $f15, $f6
    ctx->pc = 0x2059a8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[6]));
label_2059ac:
    // 0x2059ac: 0x4608801a  mula.s      $f16, $f8
    ctx->pc = 0x2059acu;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[8]);
label_2059b0:
    // 0x2059b0: 0x460b881e  madda.s     $f17, $f11
    ctx->pc = 0x2059b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[11]));
label_2059b4:
    // 0x2059b4: 0xc4ab0030  lwc1        $f11, 0x30($a1)
    ctx->pc = 0x2059b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_2059b8:
    // 0x2059b8: 0xc4a90034  lwc1        $f9, 0x34($a1)
    ctx->pc = 0x2059b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2059bc:
    // 0x2059bc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2059bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2059c0:
    // 0x2059c0: 0x460d5ac0  add.s       $f11, $f11, $f13
    ctx->pc = 0x2059c0u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[13]);
label_2059c4:
    // 0x2059c4: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->pc = 0x2059c4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
label_2059c8:
    // 0x2059c8: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x2059c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
label_2059cc:
    // 0x2059cc: 0xc4a70038  lwc1        $f7, 0x38($a1)
    ctx->pc = 0x2059ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2059d0:
    // 0x2059d0: 0x46057a1c  madd.s      $f8, $f15, $f5
    ctx->pc = 0x2059d0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[5]));
label_2059d4:
    // 0x2059d4: 0x4600a487  neg.s       $f18, $f20
    ctx->pc = 0x2059d4u;
    ctx->f[18] = FPU_NEG_S(ctx->f[20]);
label_2059d8:
    // 0x2059d8: 0x46083a00  add.s       $f8, $f7, $f8
    ctx->pc = 0x2059d8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
label_2059dc:
    // 0x2059dc: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2059dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_2059e0:
    // 0x2059e0: 0x460b21c0  add.s       $f7, $f4, $f11
    ctx->pc = 0x2059e0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
label_2059e4:
    // 0x2059e4: 0x460024c7  neg.s       $f19, $f4
    ctx->pc = 0x2059e4u;
    ctx->f[19] = FPU_NEG_S(ctx->f[4]);
label_2059e8:
    // 0x2059e8: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x2059e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
label_2059ec:
    // 0x2059ec: 0xe4c70010  swc1        $f7, 0x10($a2)
    ctx->pc = 0x2059ecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_2059f0:
    // 0x2059f0: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x2059f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
label_2059f4:
    // 0x2059f4: 0xe4c30014  swc1        $f3, 0x14($a2)
    ctx->pc = 0x2059f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_2059f8:
    // 0x2059f8: 0x460ea180  add.s       $f6, $f20, $f14
    ctx->pc = 0x2059f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[20], ctx->f[14]);
label_2059fc:
    // 0x2059fc: 0xe4c20018  swc1        $f2, 0x18($a2)
    ctx->pc = 0x2059fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_205a00:
    // 0x205a00: 0x460b9900  add.s       $f4, $f19, $f11
    ctx->pc = 0x205a00u;
    ctx->f[4] = FPU_ADD_S(ctx->f[19], ctx->f[11]);
label_205a04:
    // 0x205a04: 0xe4c6001c  swc1        $f6, 0x1C($a2)
    ctx->pc = 0x205a04u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_205a08:
    // 0x205a08: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x205a08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
label_205a0c:
    // 0x205a0c: 0xe4c40000  swc1        $f4, 0x0($a2)
    ctx->pc = 0x205a0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_205a10:
    // 0x205a10: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x205a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_205a14:
    // 0x205a14: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x205a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_205a18:
    // 0x205a18: 0x460e9140  add.s       $f5, $f18, $f14
    ctx->pc = 0x205a18u;
    ctx->f[5] = FPU_ADD_S(ctx->f[18], ctx->f[14]);
label_205a1c:
    // 0x205a1c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x205a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_205a20:
    // 0x205a20: 0xe4c5000c  swc1        $f5, 0xC($a2)
    ctx->pc = 0x205a20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_205a24:
    // 0x205a24: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x205a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_205a28:
    // 0x205a28: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x205a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_205a2c:
    // 0x205a2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x205a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_205a30:
    // 0x205a30: 0xe7ab0010  swc1        $f11, 0x10($sp)
    ctx->pc = 0x205a30u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_205a34:
    // 0x205a34: 0xe7a90014  swc1        $f9, 0x14($sp)
    ctx->pc = 0x205a34u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_205a38:
    // 0x205a38: 0xe7a80018  swc1        $f8, 0x18($sp)
    ctx->pc = 0x205a38u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_205a3c:
    // 0x205a3c: 0x3e00008  jr          $ra
label_205a40:
    if (ctx->pc == 0x205A40u) {
        ctx->pc = 0x205A40u;
            // 0x205a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x205A44u;
        goto label_205a44;
    }
    ctx->pc = 0x205A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205A3Cu;
            // 0x205a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x205A44u;
label_205a44:
    // 0x205a44: 0x0  nop
    ctx->pc = 0x205a44u;
    // NOP
label_205a48:
    // 0x205a48: 0x0  nop
    ctx->pc = 0x205a48u;
    // NOP
label_205a4c:
    // 0x205a4c: 0x0  nop
    ctx->pc = 0x205a4cu;
    // NOP
label_205a50:
    // 0x205a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_205a54:
    // 0x205a54: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x205a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_205a58:
    // 0x205a58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x205a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_205a5c:
    // 0x205a5c: 0x3469ffee  ori         $t1, $v1, 0xFFEE
    ctx->pc = 0x205a5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_205a60:
    // 0x205a60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x205a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_205a64:
    // 0x205a64: 0x44893000  mtc1        $t1, $f6
    ctx->pc = 0x205a64u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_205a68:
    // 0x205a68: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x205a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_205a6c:
    // 0x205a6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x205a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205a70:
    // 0x205a70: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x205a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_205a74:
    // 0x205a74: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x205a74u;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
label_205a78:
    // 0x205a78: 0x46003206  mov.s       $f8, $f6
    ctx->pc = 0x205a78u;
    ctx->f[8] = FPU_MOV_S(ctx->f[6]);
label_205a7c:
    // 0x205a7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x205a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_205a80:
    // 0x205a80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x205a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205a84:
    // 0x205a84: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x205a84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_205a88:
    // 0x205a88: 0x18600097  blez        $v1, . + 4 + (0x97 << 2)
label_205a8c:
    if (ctx->pc == 0x205A8Cu) {
        ctx->pc = 0x205A8Cu;
            // 0x205a8c: 0x46003246  mov.s       $f9, $f6 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[6]);
        ctx->pc = 0x205A90u;
        goto label_205a90;
    }
    ctx->pc = 0x205A88u;
    {
        const bool branch_taken_0x205a88 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x205A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205A88u;
            // 0x205a8c: 0x46003246  mov.s       $f9, $f6 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a88) {
            ctx->pc = 0x205CE8u;
            goto label_205ce8;
        }
    }
    ctx->pc = 0x205A90u;
label_205a90:
    // 0x205a90: 0xc4ab0004  lwc1        $f11, 0x4($a1)
    ctx->pc = 0x205a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_205a94:
    // 0x205a94: 0xc4aa0008  lwc1        $f10, 0x8($a1)
    ctx->pc = 0x205a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_205a98:
    // 0x205a98: 0x18600093  blez        $v1, . + 4 + (0x93 << 2)
label_205a9c:
    if (ctx->pc == 0x205A9Cu) {
        ctx->pc = 0x205A9Cu;
            // 0x205a9c: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x205AA0u;
        goto label_205aa0;
    }
    ctx->pc = 0x205A98u;
    {
        const bool branch_taken_0x205a98 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x205A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205A98u;
            // 0x205a9c: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a98) {
            ctx->pc = 0x205CE8u;
            goto label_205ce8;
        }
    }
    ctx->pc = 0x205AA0u;
label_205aa0:
    // 0x205aa0: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x205aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_205aa4:
    // 0x205aa4: 0x24190008  addiu       $t9, $zero, 0x8
    ctx->pc = 0x205aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_205aa8:
    // 0x205aa8: 0x24180002  addiu       $t8, $zero, 0x2
    ctx->pc = 0x205aa8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205aac:
    // 0x205aac: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x205aacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205ab0:
    // 0x205ab0: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x205ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_205ab4:
    // 0x205ab4: 0x240c000f  addiu       $t4, $zero, 0xF
    ctx->pc = 0x205ab4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_205ab8:
    // 0x205ab8: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x205ab8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_205abc:
    // 0x205abc: 0xc5200010  lwc1        $f0, 0x10($t1)
    ctx->pc = 0x205abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205ac0:
    // 0x205ac0: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x205ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_205ac4:
    // 0x205ac4: 0xc5240020  lwc1        $f4, 0x20($t1)
    ctx->pc = 0x205ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_205ac8:
    // 0x205ac8: 0x4600581a  mula.s      $f11, $f0
    ctx->pc = 0x205ac8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
label_205acc:
    // 0x205acc: 0xc5200014  lwc1        $f0, 0x14($t1)
    ctx->pc = 0x205accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205ad0:
    // 0x205ad0: 0x4603601e  madda.s     $f12, $f3
    ctx->pc = 0x205ad0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[3]));
label_205ad4:
    // 0x205ad4: 0x4604535c  madd.s      $f13, $f10, $f4
    ctx->pc = 0x205ad4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[4]));
label_205ad8:
    // 0x205ad8: 0x4600581a  mula.s      $f11, $f0
    ctx->pc = 0x205ad8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
label_205adc:
    // 0x205adc: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x205adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205ae0:
    // 0x205ae0: 0xc5220024  lwc1        $f2, 0x24($t1)
    ctx->pc = 0x205ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205ae4:
    // 0x205ae4: 0xc5200018  lwc1        $f0, 0x18($t1)
    ctx->pc = 0x205ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205ae8:
    // 0x205ae8: 0x4601601e  madda.s     $f12, $f1
    ctx->pc = 0x205ae8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
label_205aec:
    // 0x205aec: 0x4602515c  madd.s      $f5, $f10, $f2
    ctx->pc = 0x205aecu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[2]));
label_205af0:
    // 0x205af0: 0x4600581a  mula.s      $f11, $f0
    ctx->pc = 0x205af0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
label_205af4:
    // 0x205af4: 0xc5230008  lwc1        $f3, 0x8($t1)
    ctx->pc = 0x205af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_205af8:
    // 0x205af8: 0xc5240028  lwc1        $f4, 0x28($t1)
    ctx->pc = 0x205af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_205afc:
    // 0x205afc: 0xc520001c  lwc1        $f0, 0x1C($t1)
    ctx->pc = 0x205afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205b00:
    // 0x205b00: 0x4603601e  madda.s     $f12, $f3
    ctx->pc = 0x205b00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[3]));
label_205b04:
    // 0x205b04: 0x460450dc  madd.s      $f3, $f10, $f4
    ctx->pc = 0x205b04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[4]));
label_205b08:
    // 0x205b08: 0xc521000c  lwc1        $f1, 0xC($t1)
    ctx->pc = 0x205b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205b0c:
    // 0x205b0c: 0x4600581a  mula.s      $f11, $f0
    ctx->pc = 0x205b0cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
label_205b10:
    // 0x205b10: 0xc522002c  lwc1        $f2, 0x2C($t1)
    ctx->pc = 0x205b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205b14:
    // 0x205b14: 0x4601601e  madda.s     $f12, $f1
    ctx->pc = 0x205b14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
label_205b18:
    // 0x205b18: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x205b18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205b1c:
    // 0x205b1c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_205b20:
    if (ctx->pc == 0x205B20u) {
        ctx->pc = 0x205B20u;
            // 0x205b20: 0x4602501c  madd.s      $f0, $f10, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[2]));
        ctx->pc = 0x205B24u;
        goto label_205b24;
    }
    ctx->pc = 0x205B1Cu;
    {
        const bool branch_taken_0x205b1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x205B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205B1Cu;
            // 0x205b20: 0x4602501c  madd.s      $f0, $f10, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b1c) {
            ctx->pc = 0x205B2Cu;
            goto label_205b2c;
        }
    }
    ctx->pc = 0x205B24u;
label_205b24:
    // 0x205b24: 0x10000002  b           . + 4 + (0x2 << 2)
label_205b28:
    if (ctx->pc == 0x205B28u) {
        ctx->pc = 0x205B28u;
            // 0x205b28: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205B2Cu;
        goto label_205b2c;
    }
    ctx->pc = 0x205B24u;
    {
        const bool branch_taken_0x205b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205B24u;
            // 0x205b28: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b24) {
            ctx->pc = 0x205B30u;
            goto label_205b30;
        }
    }
    ctx->pc = 0x205B2Cu;
label_205b2c:
    // 0x205b2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x205b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205b30:
    // 0x205b30: 0x460d3034  c.lt.s      $f6, $f13
    ctx->pc = 0x205b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205b34:
    // 0x205b34: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_205b38:
    if (ctx->pc == 0x205B38u) {
        ctx->pc = 0x205B38u;
            // 0x205b38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205B3Cu;
        goto label_205b3c;
    }
    ctx->pc = 0x205B34u;
    {
        const bool branch_taken_0x205b34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205b34) {
            ctx->pc = 0x205B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205B34u;
            // 0x205b38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205B40u;
            goto label_205b40;
        }
    }
    ctx->pc = 0x205B3Cu;
label_205b3c:
    // 0x205b3c: 0x320282d  daddu       $a1, $t9, $zero
    ctx->pc = 0x205b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_205b40:
    // 0x205b40: 0x46034034  c.lt.s      $f8, $f3
    ctx->pc = 0x205b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205b44:
    // 0x205b44: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_205b48:
    if (ctx->pc == 0x205B48u) {
        ctx->pc = 0x205B48u;
            // 0x205b48: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205B4Cu;
        goto label_205b4c;
    }
    ctx->pc = 0x205B44u;
    {
        const bool branch_taken_0x205b44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205b44) {
            ctx->pc = 0x205B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205B44u;
            // 0x205b48: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205B50u;
            goto label_205b50;
        }
    }
    ctx->pc = 0x205B4Cu;
label_205b4c:
    // 0x205b4c: 0x300782d  daddu       $t7, $t8, $zero
    ctx->pc = 0x205b4cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_205b50:
    // 0x205b50: 0x46004834  c.lt.s      $f9, $f0
    ctx->pc = 0x205b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205b54:
    // 0x205b54: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_205b58:
    if (ctx->pc == 0x205B58u) {
        ctx->pc = 0x205B58u;
            // 0x205b58: 0x1c0682d  daddu       $t5, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205B5Cu;
        goto label_205b5c;
    }
    ctx->pc = 0x205B54u;
    {
        const bool branch_taken_0x205b54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x205B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205B54u;
            // 0x205b58: 0x1c0682d  daddu       $t5, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b54) {
            ctx->pc = 0x205B60u;
            goto label_205b60;
        }
    }
    ctx->pc = 0x205B5Cu;
label_205b5c:
    // 0x205b5c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x205b5cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205b60:
    // 0x205b60: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x205b60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
label_205b64:
    // 0x205b64: 0x31ad00ff  andi        $t5, $t5, 0xFF
    ctx->pc = 0x205b64u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
label_205b68:
    // 0x205b68: 0x1e52825  or          $a1, $t7, $a1
    ctx->pc = 0x205b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) | GPR_U64(ctx, 5));
label_205b6c:
    // 0x205b6c: 0x1a52825  or          $a1, $t5, $a1
    ctx->pc = 0x205b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) | GPR_U64(ctx, 5));
label_205b70:
    // 0x205b70: 0x10a00059  beqz        $a1, . + 4 + (0x59 << 2)
label_205b74:
    if (ctx->pc == 0x205B74u) {
        ctx->pc = 0x205B78u;
        goto label_205b78;
    }
    ctx->pc = 0x205B70u;
    {
        const bool branch_taken_0x205b70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x205b70) {
            ctx->pc = 0x205CD8u;
            goto label_205cd8;
        }
    }
    ctx->pc = 0x205B78u;
label_205b78:
    // 0x205b78: 0x10ac004d  beq         $a1, $t4, . + 4 + (0x4D << 2)
label_205b7c:
    if (ctx->pc == 0x205B7Cu) {
        ctx->pc = 0x205B80u;
        goto label_205b80;
    }
    ctx->pc = 0x205B78u;
    {
        const bool branch_taken_0x205b78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 12));
        if (branch_taken_0x205b78) {
            ctx->pc = 0x205CB0u;
            goto label_205cb0;
        }
    }
    ctx->pc = 0x205B80u;
label_205b80:
    // 0x205b80: 0x10ab0033  beq         $a1, $t3, . + 4 + (0x33 << 2)
label_205b84:
    if (ctx->pc == 0x205B84u) {
        ctx->pc = 0x205B88u;
        goto label_205b88;
    }
    ctx->pc = 0x205B80u;
    {
        const bool branch_taken_0x205b80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 11));
        if (branch_taken_0x205b80) {
            ctx->pc = 0x205C50u;
            goto label_205c50;
        }
    }
    ctx->pc = 0x205B88u;
label_205b88:
    // 0x205b88: 0x10aa001b  beq         $a1, $t2, . + 4 + (0x1B << 2)
label_205b8c:
    if (ctx->pc == 0x205B8Cu) {
        ctx->pc = 0x205B90u;
        goto label_205b90;
    }
    ctx->pc = 0x205B88u;
    {
        const bool branch_taken_0x205b88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        if (branch_taken_0x205b88) {
            ctx->pc = 0x205BF8u;
            goto label_205bf8;
        }
    }
    ctx->pc = 0x205B90u;
label_205b90:
    // 0x205b90: 0x10ae0015  beq         $a1, $t6, . + 4 + (0x15 << 2)
label_205b94:
    if (ctx->pc == 0x205B94u) {
        ctx->pc = 0x205B98u;
        goto label_205b98;
    }
    ctx->pc = 0x205B90u;
    {
        const bool branch_taken_0x205b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 14));
        if (branch_taken_0x205b90) {
            ctx->pc = 0x205BE8u;
            goto label_205be8;
        }
    }
    ctx->pc = 0x205B98u;
label_205b98:
    // 0x205b98: 0x10b8000f  beq         $a1, $t8, . + 4 + (0xF << 2)
label_205b9c:
    if (ctx->pc == 0x205B9Cu) {
        ctx->pc = 0x205BA0u;
        goto label_205ba0;
    }
    ctx->pc = 0x205B98u;
    {
        const bool branch_taken_0x205b98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 24));
        if (branch_taken_0x205b98) {
            ctx->pc = 0x205BD8u;
            goto label_205bd8;
        }
    }
    ctx->pc = 0x205BA0u;
label_205ba0:
    // 0x205ba0: 0x10b10009  beq         $a1, $s1, . + 4 + (0x9 << 2)
label_205ba4:
    if (ctx->pc == 0x205BA4u) {
        ctx->pc = 0x205BA8u;
        goto label_205ba8;
    }
    ctx->pc = 0x205BA0u;
    {
        const bool branch_taken_0x205ba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x205ba0) {
            ctx->pc = 0x205BC8u;
            goto label_205bc8;
        }
    }
    ctx->pc = 0x205BA8u;
label_205ba8:
    // 0x205ba8: 0x10b90005  beq         $a1, $t9, . + 4 + (0x5 << 2)
label_205bac:
    if (ctx->pc == 0x205BACu) {
        ctx->pc = 0x205BB0u;
        goto label_205bb0;
    }
    ctx->pc = 0x205BA8u;
    {
        const bool branch_taken_0x205ba8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 25));
        if (branch_taken_0x205ba8) {
            ctx->pc = 0x205BC0u;
            goto label_205bc0;
        }
    }
    ctx->pc = 0x205BB0u;
label_205bb0:
    // 0x205bb0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_205bb4:
    if (ctx->pc == 0x205BB4u) {
        ctx->pc = 0x205BB8u;
        goto label_205bb8;
    }
    ctx->pc = 0x205BB0u;
    {
        const bool branch_taken_0x205bb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x205bb0) {
            ctx->pc = 0x205BC0u;
            goto label_205bc0;
        }
    }
    ctx->pc = 0x205BB8u;
label_205bb8:
    // 0x205bb8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_205bbc:
    if (ctx->pc == 0x205BBCu) {
        ctx->pc = 0x205BC0u;
        goto label_205bc0;
    }
    ctx->pc = 0x205BB8u;
    {
        const bool branch_taken_0x205bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205bb8) {
            ctx->pc = 0x205CB0u;
            goto label_205cb0;
        }
    }
    ctx->pc = 0x205BC0u;
label_205bc0:
    // 0x205bc0: 0x10000041  b           . + 4 + (0x41 << 2)
label_205bc4:
    if (ctx->pc == 0x205BC4u) {
        ctx->pc = 0x205BC4u;
            // 0x205bc4: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205BC8u;
        goto label_205bc8;
    }
    ctx->pc = 0x205BC0u;
    {
        const bool branch_taken_0x205bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205BC0u;
            // 0x205bc4: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bc0) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205BC8u;
label_205bc8:
    // 0x205bc8: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x205bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_205bcc:
    // 0x205bcc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_205bd0:
    if (ctx->pc == 0x205BD0u) {
        ctx->pc = 0x205BD0u;
            // 0x205bd0: 0x46002b46  mov.s       $f13, $f5 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = 0x205BD4u;
        goto label_205bd4;
    }
    ctx->pc = 0x205BCCu;
    {
        const bool branch_taken_0x205bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205BCCu;
            // 0x205bd0: 0x46002b46  mov.s       $f13, $f5 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bcc) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205BD4u;
label_205bd4:
    // 0x205bd4: 0x0  nop
    ctx->pc = 0x205bd4u;
    // NOP
label_205bd8:
    // 0x205bd8: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x205bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_205bdc:
    // 0x205bdc: 0x1000003a  b           . + 4 + (0x3A << 2)
label_205be0:
    if (ctx->pc == 0x205BE0u) {
        ctx->pc = 0x205BE0u;
            // 0x205be0: 0x46001b46  mov.s       $f13, $f3 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x205BE4u;
        goto label_205be4;
    }
    ctx->pc = 0x205BDCu;
    {
        const bool branch_taken_0x205bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205BDCu;
            // 0x205be0: 0x46001b46  mov.s       $f13, $f3 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bdc) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205BE4u;
label_205be4:
    // 0x205be4: 0x0  nop
    ctx->pc = 0x205be4u;
    // NOP
label_205be8:
    // 0x205be8: 0x24880003  addiu       $t0, $a0, 0x3
    ctx->pc = 0x205be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_205bec:
    // 0x205bec: 0x10000036  b           . + 4 + (0x36 << 2)
label_205bf0:
    if (ctx->pc == 0x205BF0u) {
        ctx->pc = 0x205BF0u;
            // 0x205bf0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x205BF4u;
        goto label_205bf4;
    }
    ctx->pc = 0x205BECu;
    {
        const bool branch_taken_0x205bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205BECu;
            // 0x205bf0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bec) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205BF4u;
label_205bf4:
    // 0x205bf4: 0x0  nop
    ctx->pc = 0x205bf4u;
    // NOP
label_205bf8:
    // 0x205bf8: 0x46036836  c.le.s      $f13, $f3
    ctx->pc = 0x205bf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205bfc:
    // 0x205bfc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_205c00:
    if (ctx->pc == 0x205C00u) {
        ctx->pc = 0x205C04u;
        goto label_205c04;
    }
    ctx->pc = 0x205BFCu;
    {
        const bool branch_taken_0x205bfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205bfc) {
            ctx->pc = 0x205C28u;
            goto label_205c28;
        }
    }
    ctx->pc = 0x205C04u;
label_205c04:
    // 0x205c04: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x205c04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205c08:
    // 0x205c08: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_205c0c:
    if (ctx->pc == 0x205C0Cu) {
        ctx->pc = 0x205C10u;
        goto label_205c10;
    }
    ctx->pc = 0x205C08u;
    {
        const bool branch_taken_0x205c08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205c08) {
            ctx->pc = 0x205C18u;
            goto label_205c18;
        }
    }
    ctx->pc = 0x205C10u;
label_205c10:
    // 0x205c10: 0x1000002d  b           . + 4 + (0x2D << 2)
label_205c14:
    if (ctx->pc == 0x205C14u) {
        ctx->pc = 0x205C14u;
            // 0x205c14: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205C18u;
        goto label_205c18;
    }
    ctx->pc = 0x205C10u;
    {
        const bool branch_taken_0x205c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205C10u;
            // 0x205c14: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c10) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205C18u;
label_205c18:
    // 0x205c18: 0x24880003  addiu       $t0, $a0, 0x3
    ctx->pc = 0x205c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_205c1c:
    // 0x205c1c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_205c20:
    if (ctx->pc == 0x205C20u) {
        ctx->pc = 0x205C20u;
            // 0x205c20: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x205C24u;
        goto label_205c24;
    }
    ctx->pc = 0x205C1Cu;
    {
        const bool branch_taken_0x205c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205C1Cu;
            // 0x205c20: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c1c) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205C24u;
label_205c24:
    // 0x205c24: 0x0  nop
    ctx->pc = 0x205c24u;
    // NOP
label_205c28:
    // 0x205c28: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x205c28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205c2c:
    // 0x205c2c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_205c30:
    if (ctx->pc == 0x205C30u) {
        ctx->pc = 0x205C34u;
        goto label_205c34;
    }
    ctx->pc = 0x205C2Cu;
    {
        const bool branch_taken_0x205c2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205c2c) {
            ctx->pc = 0x205C40u;
            goto label_205c40;
        }
    }
    ctx->pc = 0x205C34u;
label_205c34:
    // 0x205c34: 0x46001b46  mov.s       $f13, $f3
    ctx->pc = 0x205c34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[3]);
label_205c38:
    // 0x205c38: 0x10000023  b           . + 4 + (0x23 << 2)
label_205c3c:
    if (ctx->pc == 0x205C3Cu) {
        ctx->pc = 0x205C3Cu;
            // 0x205c3c: 0x24880002  addiu       $t0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x205C40u;
        goto label_205c40;
    }
    ctx->pc = 0x205C38u;
    {
        const bool branch_taken_0x205c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205C38u;
            // 0x205c3c: 0x24880002  addiu       $t0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c38) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205C40u;
label_205c40:
    // 0x205c40: 0x24880003  addiu       $t0, $a0, 0x3
    ctx->pc = 0x205c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_205c44:
    // 0x205c44: 0x10000020  b           . + 4 + (0x20 << 2)
label_205c48:
    if (ctx->pc == 0x205C48u) {
        ctx->pc = 0x205C48u;
            // 0x205c48: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x205C4Cu;
        goto label_205c4c;
    }
    ctx->pc = 0x205C44u;
    {
        const bool branch_taken_0x205c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205C44u;
            // 0x205c48: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c44) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205C4Cu;
label_205c4c:
    // 0x205c4c: 0x0  nop
    ctx->pc = 0x205c4cu;
    // NOP
label_205c50:
    // 0x205c50: 0x46032836  c.le.s      $f5, $f3
    ctx->pc = 0x205c50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205c54:
    // 0x205c54: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_205c58:
    if (ctx->pc == 0x205C58u) {
        ctx->pc = 0x205C5Cu;
        goto label_205c5c;
    }
    ctx->pc = 0x205C54u;
    {
        const bool branch_taken_0x205c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205c54) {
            ctx->pc = 0x205C88u;
            goto label_205c88;
        }
    }
    ctx->pc = 0x205C5Cu;
label_205c5c:
    // 0x205c5c: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x205c5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205c60:
    // 0x205c60: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_205c64:
    if (ctx->pc == 0x205C64u) {
        ctx->pc = 0x205C68u;
        goto label_205c68;
    }
    ctx->pc = 0x205C60u;
    {
        const bool branch_taken_0x205c60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205c60) {
            ctx->pc = 0x205C78u;
            goto label_205c78;
        }
    }
    ctx->pc = 0x205C68u;
label_205c68:
    // 0x205c68: 0x46002b46  mov.s       $f13, $f5
    ctx->pc = 0x205c68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[5]);
label_205c6c:
    // 0x205c6c: 0x10000016  b           . + 4 + (0x16 << 2)
label_205c70:
    if (ctx->pc == 0x205C70u) {
        ctx->pc = 0x205C70u;
            // 0x205c70: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x205C74u;
        goto label_205c74;
    }
    ctx->pc = 0x205C6Cu;
    {
        const bool branch_taken_0x205c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205C6Cu;
            // 0x205c70: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c6c) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205C74u;
label_205c74:
    // 0x205c74: 0x0  nop
    ctx->pc = 0x205c74u;
    // NOP
label_205c78:
    // 0x205c78: 0x24880003  addiu       $t0, $a0, 0x3
    ctx->pc = 0x205c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_205c7c:
    // 0x205c7c: 0x10000012  b           . + 4 + (0x12 << 2)
label_205c80:
    if (ctx->pc == 0x205C80u) {
        ctx->pc = 0x205C80u;
            // 0x205c80: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x205C84u;
        goto label_205c84;
    }
    ctx->pc = 0x205C7Cu;
    {
        const bool branch_taken_0x205c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205C7Cu;
            // 0x205c80: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c7c) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205C84u;
label_205c84:
    // 0x205c84: 0x0  nop
    ctx->pc = 0x205c84u;
    // NOP
label_205c88:
    // 0x205c88: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x205c88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205c8c:
    // 0x205c8c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_205c90:
    if (ctx->pc == 0x205C90u) {
        ctx->pc = 0x205C94u;
        goto label_205c94;
    }
    ctx->pc = 0x205C8Cu;
    {
        const bool branch_taken_0x205c8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205c8c) {
            ctx->pc = 0x205CA0u;
            goto label_205ca0;
        }
    }
    ctx->pc = 0x205C94u;
label_205c94:
    // 0x205c94: 0x46001b46  mov.s       $f13, $f3
    ctx->pc = 0x205c94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[3]);
label_205c98:
    // 0x205c98: 0x1000000b  b           . + 4 + (0xB << 2)
label_205c9c:
    if (ctx->pc == 0x205C9Cu) {
        ctx->pc = 0x205C9Cu;
            // 0x205c9c: 0x24880002  addiu       $t0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x205CA0u;
        goto label_205ca0;
    }
    ctx->pc = 0x205C98u;
    {
        const bool branch_taken_0x205c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205C98u;
            // 0x205c9c: 0x24880002  addiu       $t0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c98) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205CA0u;
label_205ca0:
    // 0x205ca0: 0x24880003  addiu       $t0, $a0, 0x3
    ctx->pc = 0x205ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_205ca4:
    // 0x205ca4: 0x10000008  b           . + 4 + (0x8 << 2)
label_205ca8:
    if (ctx->pc == 0x205CA8u) {
        ctx->pc = 0x205CA8u;
            // 0x205ca8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x205CACu;
        goto label_205cac;
    }
    ctx->pc = 0x205CA4u;
    {
        const bool branch_taken_0x205ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205CA4u;
            // 0x205ca8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ca4) {
            ctx->pc = 0x205CC8u;
            goto label_205cc8;
        }
    }
    ctx->pc = 0x205CACu;
label_205cac:
    // 0x205cac: 0x0  nop
    ctx->pc = 0x205cacu;
    // NOP
label_205cb0:
    // 0x205cb0: 0x46056836  c.le.s      $f13, $f5
    ctx->pc = 0x205cb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205cb4:
    // 0x205cb4: 0x4501ffe6  bc1t        . + 4 + (-0x1A << 2)
label_205cb8:
    if (ctx->pc == 0x205CB8u) {
        ctx->pc = 0x205CBCu;
        goto label_205cbc;
    }
    ctx->pc = 0x205CB4u;
    {
        const bool branch_taken_0x205cb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205cb4) {
            ctx->pc = 0x205C50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205c50;
        }
    }
    ctx->pc = 0x205CBCu;
label_205cbc:
    // 0x205cbc: 0x1000ffce  b           . + 4 + (-0x32 << 2)
label_205cc0:
    if (ctx->pc == 0x205CC0u) {
        ctx->pc = 0x205CC4u;
        goto label_205cc4;
    }
    ctx->pc = 0x205CBCu;
    {
        const bool branch_taken_0x205cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205cbc) {
            ctx->pc = 0x205BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205bf8;
        }
    }
    ctx->pc = 0x205CC4u;
label_205cc4:
    // 0x205cc4: 0x0  nop
    ctx->pc = 0x205cc4u;
    // NOP
label_205cc8:
    // 0x205cc8: 0x46006986  mov.s       $f6, $f13
    ctx->pc = 0x205cc8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[13]);
label_205ccc:
    // 0x205ccc: 0x460069c6  mov.s       $f7, $f13
    ctx->pc = 0x205cccu;
    ctx->f[7] = FPU_MOV_S(ctx->f[13]);
label_205cd0:
    // 0x205cd0: 0x46006a06  mov.s       $f8, $f13
    ctx->pc = 0x205cd0u;
    ctx->f[8] = FPU_MOV_S(ctx->f[13]);
label_205cd4:
    // 0x205cd4: 0x46006a46  mov.s       $f9, $f13
    ctx->pc = 0x205cd4u;
    ctx->f[9] = FPU_MOV_S(ctx->f[13]);
label_205cd8:
    // 0x205cd8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x205cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_205cdc:
    // 0x205cdc: 0x83282a  slt         $a1, $a0, $v1
    ctx->pc = 0x205cdcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_205ce0:
    // 0x205ce0: 0x14a0ff76  bnez        $a1, . + 4 + (-0x8A << 2)
label_205ce4:
    if (ctx->pc == 0x205CE4u) {
        ctx->pc = 0x205CE4u;
            // 0x205ce4: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->pc = 0x205CE8u;
        goto label_205ce8;
    }
    ctx->pc = 0x205CE0u;
    {
        const bool branch_taken_0x205ce0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x205CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205CE0u;
            // 0x205ce4: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ce0) {
            ctx->pc = 0x205ABCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205abc;
        }
    }
    ctx->pc = 0x205CE8u;
label_205ce8:
    // 0x205ce8: 0x82882  srl         $a1, $t0, 2
    ctx->pc = 0x205ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 2));
label_205cec:
    // 0x205cec: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x205cecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_205cf0:
    // 0x205cf0: 0x31030003  andi        $v1, $t0, 0x3
    ctx->pc = 0x205cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_205cf4:
    // 0x205cf4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x205cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_205cf8:
    // 0x205cf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x205cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_205cfc:
    // 0x205cfc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x205cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_205d00:
    // 0x205d00: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x205d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_205d04:
    // 0x205d04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x205d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_205d08:
    // 0x205d08: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x205d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205d0c:
    // 0x205d0c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x205d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_205d10:
    // 0x205d10: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x205d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205d14:
    // 0x205d14: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x205d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_205d18:
    // 0x205d18: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x205d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205d1c:
    // 0x205d1c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x205d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_205d20:
    // 0x205d20: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x205d20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
label_205d24:
    // 0x205d24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x205d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_205d28:
    // 0x205d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x205d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_205d2c:
    // 0x205d2c: 0x3e00008  jr          $ra
label_205d30:
    if (ctx->pc == 0x205D30u) {
        ctx->pc = 0x205D30u;
            // 0x205d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x205D34u;
        goto label_205d34;
    }
    ctx->pc = 0x205D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205D2Cu;
            // 0x205d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x205D34u;
label_205d34:
    // 0x205d34: 0x0  nop
    ctx->pc = 0x205d34u;
    // NOP
label_205d38:
    // 0x205d38: 0x0  nop
    ctx->pc = 0x205d38u;
    // NOP
label_205d3c:
    // 0x205d3c: 0x0  nop
    ctx->pc = 0x205d3cu;
    // NOP
label_205d40:
    // 0x205d40: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x205d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_205d44:
    // 0x205d44: 0x46000c2  bltz        $v1, . + 4 + (0xC2 << 2)
label_205d48:
    if (ctx->pc == 0x205D48u) {
        ctx->pc = 0x205D4Cu;
        goto label_205d4c;
    }
    ctx->pc = 0x205D44u;
    {
        const bool branch_taken_0x205d44 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x205d44) {
            ctx->pc = 0x206050u;
            goto label_206050;
        }
    }
    ctx->pc = 0x205D4Cu;
label_205d4c:
    // 0x205d4c: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x205d4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
label_205d50:
    // 0x205d50: 0x142000a7  bnez        $at, . + 4 + (0xA7 << 2)
label_205d54:
    if (ctx->pc == 0x205D54u) {
        ctx->pc = 0x205D58u;
        goto label_205d58;
    }
    ctx->pc = 0x205D50u;
    {
        const bool branch_taken_0x205d50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x205d50) {
            ctx->pc = 0x205FF0u;
            goto label_205ff0;
        }
    }
    ctx->pc = 0x205D58u;
label_205d58:
    // 0x205d58: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x205d58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205d5c:
    // 0x205d5c: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
label_205d60:
    if (ctx->pc == 0x205D60u) {
        ctx->pc = 0x205D60u;
            // 0x205d60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205D64u;
        goto label_205d64;
    }
    ctx->pc = 0x205D5Cu;
    {
        const bool branch_taken_0x205d5c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x205D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205D5Cu;
            // 0x205d60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d5c) {
            ctx->pc = 0x205D7Cu;
            goto label_205d7c;
        }
    }
    ctx->pc = 0x205D64u;
label_205d64:
    // 0x205d64: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x205d64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_205d68:
    // 0x205d68: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x205d68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
label_205d6c:
    // 0x205d6c: 0x68402a  slt         $t0, $v1, $t0
    ctx->pc = 0x205d6cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_205d70:
    // 0x205d70: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
label_205d74:
    if (ctx->pc == 0x205D74u) {
        ctx->pc = 0x205D78u;
        goto label_205d78;
    }
    ctx->pc = 0x205D70u;
    {
        const bool branch_taken_0x205d70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x205d70) {
            ctx->pc = 0x205D7Cu;
            goto label_205d7c;
        }
    }
    ctx->pc = 0x205D78u;
label_205d78:
    // 0x205d78: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x205d78u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_205d7c:
    // 0x205d7c: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
label_205d80:
    if (ctx->pc == 0x205D80u) {
        ctx->pc = 0x205D84u;
        goto label_205d84;
    }
    ctx->pc = 0x205D7Cu;
    {
        const bool branch_taken_0x205d7c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x205d7c) {
            ctx->pc = 0x205DB4u;
            goto label_205db4;
        }
    }
    ctx->pc = 0x205D84u;
label_205d84:
    // 0x205d84: 0x24c8ffff  addiu       $t0, $a2, -0x1
    ctx->pc = 0x205d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_205d88:
    // 0x205d88: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x205d88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_205d8c:
    // 0x205d8c: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x205d8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_205d90:
    // 0x205d90: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
label_205d94:
    if (ctx->pc == 0x205D94u) {
        ctx->pc = 0x205D94u;
            // 0x205d94: 0x640a0001  daddiu      $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x205D98u;
        goto label_205d98;
    }
    ctx->pc = 0x205D90u;
    {
        const bool branch_taken_0x205d90 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x205D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205D90u;
            // 0x205d94: 0x640a0001  daddiu      $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d90) {
            ctx->pc = 0x205DA8u;
            goto label_205da8;
        }
    }
    ctx->pc = 0x205D98u;
label_205d98:
    // 0x205d98: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x205d98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
label_205d9c:
    // 0x205d9c: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
label_205da0:
    if (ctx->pc == 0x205DA0u) {
        ctx->pc = 0x205DA4u;
        goto label_205da4;
    }
    ctx->pc = 0x205D9Cu;
    {
        const bool branch_taken_0x205d9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x205d9c) {
            ctx->pc = 0x205DA8u;
            goto label_205da8;
        }
    }
    ctx->pc = 0x205DA4u;
label_205da4:
    // 0x205da4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x205da4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205da8:
    // 0x205da8: 0x11400002  beqz        $t2, . + 4 + (0x2 << 2)
label_205dac:
    if (ctx->pc == 0x205DACu) {
        ctx->pc = 0x205DB0u;
        goto label_205db0;
    }
    ctx->pc = 0x205DA8u;
    {
        const bool branch_taken_0x205da8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x205da8) {
            ctx->pc = 0x205DB4u;
            goto label_205db4;
        }
    }
    ctx->pc = 0x205DB0u;
label_205db0:
    // 0x205db0: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x205db0u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_205db4:
    // 0x205db4: 0x1160008e  beqz        $t3, . + 4 + (0x8E << 2)
label_205db8:
    if (ctx->pc == 0x205DB8u) {
        ctx->pc = 0x205DBCu;
        goto label_205dbc;
    }
    ctx->pc = 0x205DB4u;
    {
        const bool branch_taken_0x205db4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x205db4) {
            ctx->pc = 0x205FF0u;
            goto label_205ff0;
        }
    }
    ctx->pc = 0x205DBCu;
label_205dbc:
    // 0x205dbc: 0x94ab0000  lhu         $t3, 0x0($a1)
    ctx->pc = 0x205dbcu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_205dc0:
    // 0x205dc0: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x205dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_205dc4:
    // 0x205dc4: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x205dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_205dc8:
    // 0x205dc8: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x205dc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_205dcc:
    // 0x205dcc: 0xb5083  sra         $t2, $t3, 2
    ctx->pc = 0x205dccu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 2));
label_205dd0:
    // 0x205dd0: 0x31660003  andi        $a2, $t3, 0x3
    ctx->pc = 0x205dd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
label_205dd4:
    // 0x205dd4: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x205dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_205dd8:
    // 0x205dd8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x205dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_205ddc:
    // 0x205ddc: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x205ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_205de0:
    // 0x205de0: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x205de0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_205de4:
    // 0x205de4: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x205de4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_205de8:
    // 0x205de8: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x205de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_205dec:
    // 0x205dec: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x205decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205df0:
    // 0x205df0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x205df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_205df4:
    // 0x205df4: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x205df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205df8:
    // 0x205df8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x205df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_205dfc:
    // 0x205dfc: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x205dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205e00:
    // 0x205e00: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x205e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_205e04:
    // 0x205e04: 0xaceb000c  sw          $t3, 0xC($a3)
    ctx->pc = 0x205e04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 11));
label_205e08:
    // 0x205e08: 0x94ab0002  lhu         $t3, 0x2($a1)
    ctx->pc = 0x205e08u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_205e0c:
    // 0x205e0c: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x205e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_205e10:
    // 0x205e10: 0xb5083  sra         $t2, $t3, 2
    ctx->pc = 0x205e10u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 2));
label_205e14:
    // 0x205e14: 0x31660003  andi        $a2, $t3, 0x3
    ctx->pc = 0x205e14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
label_205e18:
    // 0x205e18: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x205e18u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_205e1c:
    // 0x205e1c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x205e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_205e20:
    // 0x205e20: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x205e20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_205e24:
    // 0x205e24: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x205e24u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_205e28:
    // 0x205e28: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x205e28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_205e2c:
    // 0x205e2c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x205e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_205e30:
    // 0x205e30: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x205e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205e34:
    // 0x205e34: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x205e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_205e38:
    // 0x205e38: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x205e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205e3c:
    // 0x205e3c: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x205e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_205e40:
    // 0x205e40: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x205e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205e44:
    // 0x205e44: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x205e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
label_205e48:
    // 0x205e48: 0xaceb001c  sw          $t3, 0x1C($a3)
    ctx->pc = 0x205e48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 11));
label_205e4c:
    // 0x205e4c: 0x94ab0004  lhu         $t3, 0x4($a1)
    ctx->pc = 0x205e4cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_205e50:
    // 0x205e50: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x205e50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_205e54:
    // 0x205e54: 0xb5083  sra         $t2, $t3, 2
    ctx->pc = 0x205e54u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 2));
label_205e58:
    // 0x205e58: 0x31660003  andi        $a2, $t3, 0x3
    ctx->pc = 0x205e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
label_205e5c:
    // 0x205e5c: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x205e5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_205e60:
    // 0x205e60: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x205e60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_205e64:
    // 0x205e64: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x205e64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_205e68:
    // 0x205e68: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x205e68u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_205e6c:
    // 0x205e6c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x205e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_205e70:
    // 0x205e70: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x205e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_205e74:
    // 0x205e74: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x205e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205e78:
    // 0x205e78: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x205e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_205e7c:
    // 0x205e7c: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x205e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205e80:
    // 0x205e80: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x205e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_205e84:
    // 0x205e84: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x205e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205e88:
    // 0x205e88: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x205e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
label_205e8c:
    // 0x205e8c: 0xaceb002c  sw          $t3, 0x2C($a3)
    ctx->pc = 0x205e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 11));
label_205e90:
    // 0x205e90: 0x94ab0006  lhu         $t3, 0x6($a1)
    ctx->pc = 0x205e90u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_205e94:
    // 0x205e94: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x205e94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_205e98:
    // 0x205e98: 0xb5083  sra         $t2, $t3, 2
    ctx->pc = 0x205e98u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 2));
label_205e9c:
    // 0x205e9c: 0x31660003  andi        $a2, $t3, 0x3
    ctx->pc = 0x205e9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
label_205ea0:
    // 0x205ea0: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x205ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_205ea4:
    // 0x205ea4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x205ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_205ea8:
    // 0x205ea8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x205ea8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_205eac:
    // 0x205eac: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x205eacu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_205eb0:
    // 0x205eb0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x205eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_205eb4:
    // 0x205eb4: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x205eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_205eb8:
    // 0x205eb8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x205eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205ebc:
    // 0x205ebc: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x205ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
label_205ec0:
    // 0x205ec0: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x205ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205ec4:
    // 0x205ec4: 0xe4e00034  swc1        $f0, 0x34($a3)
    ctx->pc = 0x205ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
label_205ec8:
    // 0x205ec8: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x205ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205ecc:
    // 0x205ecc: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x205eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
label_205ed0:
    // 0x205ed0: 0xaceb003c  sw          $t3, 0x3C($a3)
    ctx->pc = 0x205ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 11));
label_205ed4:
    // 0x205ed4: 0x94ab0008  lhu         $t3, 0x8($a1)
    ctx->pc = 0x205ed4u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_205ed8:
    // 0x205ed8: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x205ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_205edc:
    // 0x205edc: 0xb5083  sra         $t2, $t3, 2
    ctx->pc = 0x205edcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 2));
label_205ee0:
    // 0x205ee0: 0x31660003  andi        $a2, $t3, 0x3
    ctx->pc = 0x205ee0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
label_205ee4:
    // 0x205ee4: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x205ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_205ee8:
    // 0x205ee8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x205ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_205eec:
    // 0x205eec: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x205eecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_205ef0:
    // 0x205ef0: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x205ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_205ef4:
    // 0x205ef4: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x205ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_205ef8:
    // 0x205ef8: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x205ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_205efc:
    // 0x205efc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x205efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205f00:
    // 0x205f00: 0xe4e00040  swc1        $f0, 0x40($a3)
    ctx->pc = 0x205f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 64), bits); }
label_205f04:
    // 0x205f04: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x205f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205f08:
    // 0x205f08: 0xe4e00044  swc1        $f0, 0x44($a3)
    ctx->pc = 0x205f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 68), bits); }
label_205f0c:
    // 0x205f0c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x205f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205f10:
    // 0x205f10: 0xe4e00048  swc1        $f0, 0x48($a3)
    ctx->pc = 0x205f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 72), bits); }
label_205f14:
    // 0x205f14: 0xaceb004c  sw          $t3, 0x4C($a3)
    ctx->pc = 0x205f14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 11));
label_205f18:
    // 0x205f18: 0x94ab000a  lhu         $t3, 0xA($a1)
    ctx->pc = 0x205f18u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_205f1c:
    // 0x205f1c: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x205f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_205f20:
    // 0x205f20: 0xb5083  sra         $t2, $t3, 2
    ctx->pc = 0x205f20u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 2));
label_205f24:
    // 0x205f24: 0x31660003  andi        $a2, $t3, 0x3
    ctx->pc = 0x205f24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
label_205f28:
    // 0x205f28: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x205f28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_205f2c:
    // 0x205f2c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x205f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_205f30:
    // 0x205f30: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x205f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_205f34:
    // 0x205f34: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x205f34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_205f38:
    // 0x205f38: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x205f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_205f3c:
    // 0x205f3c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x205f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_205f40:
    // 0x205f40: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x205f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205f44:
    // 0x205f44: 0xe4e00050  swc1        $f0, 0x50($a3)
    ctx->pc = 0x205f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 80), bits); }
label_205f48:
    // 0x205f48: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x205f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205f4c:
    // 0x205f4c: 0xe4e00054  swc1        $f0, 0x54($a3)
    ctx->pc = 0x205f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 84), bits); }
label_205f50:
    // 0x205f50: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x205f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205f54:
    // 0x205f54: 0xe4e00058  swc1        $f0, 0x58($a3)
    ctx->pc = 0x205f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 88), bits); }
label_205f58:
    // 0x205f58: 0xaceb005c  sw          $t3, 0x5C($a3)
    ctx->pc = 0x205f58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 11));
label_205f5c:
    // 0x205f5c: 0x94ab000c  lhu         $t3, 0xC($a1)
    ctx->pc = 0x205f5cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_205f60:
    // 0x205f60: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x205f60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_205f64:
    // 0x205f64: 0xb5083  sra         $t2, $t3, 2
    ctx->pc = 0x205f64u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 2));
label_205f68:
    // 0x205f68: 0x31660003  andi        $a2, $t3, 0x3
    ctx->pc = 0x205f68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
label_205f6c:
    // 0x205f6c: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x205f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_205f70:
    // 0x205f70: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x205f70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_205f74:
    // 0x205f74: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x205f74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_205f78:
    // 0x205f78: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x205f78u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_205f7c:
    // 0x205f7c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x205f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_205f80:
    // 0x205f80: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x205f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_205f84:
    // 0x205f84: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x205f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205f88:
    // 0x205f88: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x205f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
label_205f8c:
    // 0x205f8c: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x205f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205f90:
    // 0x205f90: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x205f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
label_205f94:
    // 0x205f94: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x205f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205f98:
    // 0x205f98: 0xe4e00068  swc1        $f0, 0x68($a3)
    ctx->pc = 0x205f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
label_205f9c:
    // 0x205f9c: 0xaceb006c  sw          $t3, 0x6C($a3)
    ctx->pc = 0x205f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 11));
label_205fa0:
    // 0x205fa0: 0x94ab000e  lhu         $t3, 0xE($a1)
    ctx->pc = 0x205fa0u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
label_205fa4:
    // 0x205fa4: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x205fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_205fa8:
    // 0x205fa8: 0xb5083  sra         $t2, $t3, 2
    ctx->pc = 0x205fa8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 2));
label_205fac:
    // 0x205fac: 0x31660003  andi        $a2, $t3, 0x3
    ctx->pc = 0x205facu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
label_205fb0:
    // 0x205fb0: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x205fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_205fb4:
    // 0x205fb4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x205fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_205fb8:
    // 0x205fb8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x205fb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_205fbc:
    // 0x205fbc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x205fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_205fc0:
    // 0x205fc0: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x205fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_205fc4:
    // 0x205fc4: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x205fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_205fc8:
    // 0x205fc8: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x205fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_205fcc:
    // 0x205fcc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x205fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205fd0:
    // 0x205fd0: 0xe4e00070  swc1        $f0, 0x70($a3)
    ctx->pc = 0x205fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 112), bits); }
label_205fd4:
    // 0x205fd4: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x205fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205fd8:
    // 0x205fd8: 0xe4e00074  swc1        $f0, 0x74($a3)
    ctx->pc = 0x205fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 116), bits); }
label_205fdc:
    // 0x205fdc: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x205fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205fe0:
    // 0x205fe0: 0xe4e00078  swc1        $f0, 0x78($a3)
    ctx->pc = 0x205fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 120), bits); }
label_205fe4:
    // 0x205fe4: 0xaceb007c  sw          $t3, 0x7C($a3)
    ctx->pc = 0x205fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 11));
label_205fe8:
    // 0x205fe8: 0x1020ff74  beqz        $at, . + 4 + (-0x8C << 2)
label_205fec:
    if (ctx->pc == 0x205FECu) {
        ctx->pc = 0x205FECu;
            // 0x205fec: 0x24e70080  addiu       $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->pc = 0x205FF0u;
        goto label_205ff0;
    }
    ctx->pc = 0x205FE8u;
    {
        const bool branch_taken_0x205fe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205FE8u;
            // 0x205fec: 0x24e70080  addiu       $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fe8) {
            ctx->pc = 0x205DBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205dbc;
        }
    }
    ctx->pc = 0x205FF0u;
label_205ff0:
    // 0x205ff0: 0x4600017  bltz        $v1, . + 4 + (0x17 << 2)
label_205ff4:
    if (ctx->pc == 0x205FF4u) {
        ctx->pc = 0x205FF8u;
        goto label_205ff8;
    }
    ctx->pc = 0x205FF0u;
    {
        const bool branch_taken_0x205ff0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x205ff0) {
            ctx->pc = 0x206050u;
            goto label_206050;
        }
    }
    ctx->pc = 0x205FF8u;
label_205ff8:
    // 0x205ff8: 0x94ab0000  lhu         $t3, 0x0($a1)
    ctx->pc = 0x205ff8u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_205ffc:
    // 0x205ffc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x205ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_206000:
    // 0x206000: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x206000u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_206004:
    // 0x206004: 0xb5083  sra         $t2, $t3, 2
    ctx->pc = 0x206004u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 2));
label_206008:
    // 0x206008: 0x31660003  andi        $a2, $t3, 0x3
    ctx->pc = 0x206008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
label_20600c:
    // 0x20600c: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x20600cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_206010:
    // 0x206010: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x206010u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_206014:
    // 0x206014: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x206014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_206018:
    // 0x206018: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x206018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_20601c:
    // 0x20601c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x20601cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_206020:
    // 0x206020: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x206020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_206024:
    // 0x206024: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x206024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_206028:
    // 0x206028: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x206028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20602c:
    // 0x20602c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x20602cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_206030:
    // 0x206030: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x206030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_206034:
    // 0x206034: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x206034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_206038:
    // 0x206038: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x206038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20603c:
    // 0x20603c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x20603cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_206040:
    // 0x206040: 0xaceb000c  sw          $t3, 0xC($a3)
    ctx->pc = 0x206040u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 11));
label_206044:
    // 0x206044: 0x461ffec  bgez        $v1, . + 4 + (-0x14 << 2)
label_206048:
    if (ctx->pc == 0x206048u) {
        ctx->pc = 0x206048u;
            // 0x206048: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->pc = 0x20604Cu;
        goto label_20604c;
    }
    ctx->pc = 0x206044u;
    {
        const bool branch_taken_0x206044 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x206048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206044u;
            // 0x206048: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206044) {
            ctx->pc = 0x205FF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205ff8;
        }
    }
    ctx->pc = 0x20604Cu;
label_20604c:
    // 0x20604c: 0x0  nop
    ctx->pc = 0x20604cu;
    // NOP
label_206050:
    // 0x206050: 0x3e00008  jr          $ra
label_206054:
    if (ctx->pc == 0x206054u) {
        ctx->pc = 0x206058u;
        goto label_206058;
    }
    ctx->pc = 0x206050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206058u;
label_206058:
    // 0x206058: 0x0  nop
    ctx->pc = 0x206058u;
    // NOP
label_20605c:
    // 0x20605c: 0x0  nop
    ctx->pc = 0x20605cu;
    // NOP
label_206060:
    // 0x206060: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x206060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_206064:
    // 0x206064: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x206064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_206068:
    // 0x206068: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x206068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20606c:
    // 0x20606c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x20606cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_206070:
    // 0x206070: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x206070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_206074:
    // 0x206074: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x206074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_206078:
    // 0x206078: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x206078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20607c:
    // 0x20607c: 0x3e00008  jr          $ra
label_206080:
    if (ctx->pc == 0x206080u) {
        ctx->pc = 0x206080u;
            // 0x206080: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->pc = 0x206084u;
        goto label_206084;
    }
    ctx->pc = 0x20607Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20607Cu;
            // 0x206080: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206084u;
label_206084:
    // 0x206084: 0x0  nop
    ctx->pc = 0x206084u;
    // NOP
label_206088:
    // 0x206088: 0x0  nop
    ctx->pc = 0x206088u;
    // NOP
label_20608c:
    // 0x20608c: 0x0  nop
    ctx->pc = 0x20608cu;
    // NOP
label_206090:
    // 0x206090: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x206090u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_206094:
    // 0x206094: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x206094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_206098:
    // 0x206098: 0x8d08ea64  lw          $t0, -0x159C($t0)
    ctx->pc = 0x206098u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294961764)));
label_20609c:
    // 0x20609c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x20609cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_2060a0:
    // 0x2060a0: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x2060a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_2060a4:
    // 0x2060a4: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x2060a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2060a8:
    // 0x2060a8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2060ac:
    if (ctx->pc == 0x2060ACu) {
        ctx->pc = 0x2060ACu;
            // 0x2060ac: 0x2529ea60  addiu       $t1, $t1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
        ctx->pc = 0x2060B0u;
        goto label_2060b0;
    }
    ctx->pc = 0x2060A8u;
    {
        const bool branch_taken_0x2060a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2060A8u;
            // 0x2060ac: 0x2529ea60  addiu       $t1, $t1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060a8) {
            ctx->pc = 0x2060D8u;
            goto label_2060d8;
        }
    }
    ctx->pc = 0x2060B0u;
label_2060b0:
    // 0x2060b0: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x2060b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_2060b4:
    // 0x2060b4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2060b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2060b8:
    // 0x2060b8: 0x2463b768  addiu       $v1, $v1, -0x4898
    ctx->pc = 0x2060b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948712));
label_2060bc:
    // 0x2060bc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2060bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_2060c0:
    // 0x2060c0: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2060c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2060c4:
    // 0x2060c4: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x2060c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_2060c8:
    // 0x2060c8: 0x400ac803  .word       0x400AC803                   # mfc0        $t2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2060c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ctx->cop0_perf);
label_2060cc:
    // 0x2060cc: 0x2503000c  addiu       $v1, $t0, 0xC
    ctx->pc = 0x2060ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_2060d0:
    // 0x2060d0: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x2060d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
label_2060d4:
    // 0x2060d4: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x2060d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
label_2060d8:
    // 0x2060d8: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x2060d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_2060dc:
    // 0x2060dc: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2060dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_2060e0:
    // 0x2060e0: 0x3c08bf80  lui         $t0, 0xBF80
    ctx->pc = 0x2060e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49024 << 16));
label_2060e4:
    // 0x2060e4: 0xc4f10010  lwc1        $f17, 0x10($a3)
    ctx->pc = 0x2060e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_2060e8:
    // 0x2060e8: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x2060e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2060ec:
    // 0x2060ec: 0x44889000  mtc1        $t0, $f18
    ctx->pc = 0x2060ecu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2060f0:
    // 0x2060f0: 0x460083c6  mov.s       $f15, $f16
    ctx->pc = 0x2060f0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[16]);
label_2060f4:
    // 0x2060f4: 0x46008386  mov.s       $f14, $f16
    ctx->pc = 0x2060f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[16]);
label_2060f8:
    // 0x2060f8: 0x5200065  bltz        $t1, . + 4 + (0x65 << 2)
label_2060fc:
    if (ctx->pc == 0x2060FCu) {
        ctx->pc = 0x2060FCu;
            // 0x2060fc: 0x46008346  mov.s       $f13, $f16 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[16]);
        ctx->pc = 0x206100u;
        goto label_206100;
    }
    ctx->pc = 0x2060F8u;
    {
        const bool branch_taken_0x2060f8 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x2060FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2060F8u;
            // 0x2060fc: 0x46008346  mov.s       $f13, $f16 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060f8) {
            ctx->pc = 0x206290u;
            goto label_206290;
        }
    }
    ctx->pc = 0x206100u;
label_206100:
    // 0x206100: 0x8ca50050  lw          $a1, 0x50($a1)
    ctx->pc = 0x206100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_206104:
    // 0x206104: 0xc4cc0004  lwc1        $f12, 0x4($a2)
    ctx->pc = 0x206104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_206108:
    // 0x206108: 0xc4cb0000  lwc1        $f11, 0x0($a2)
    ctx->pc = 0x206108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_20610c:
    // 0x20610c: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x20610cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_206110:
    // 0x206110: 0xc4ca0008  lwc1        $f10, 0x8($a2)
    ctx->pc = 0x206110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_206114:
    // 0x206114: 0xc4c90014  lwc1        $f9, 0x14($a2)
    ctx->pc = 0x206114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_206118:
    // 0x206118: 0xc4c80010  lwc1        $f8, 0x10($a2)
    ctx->pc = 0x206118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_20611c:
    // 0x20611c: 0xc4c70018  lwc1        $f7, 0x18($a2)
    ctx->pc = 0x20611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_206120:
    // 0x206120: 0x46008086  mov.s       $f2, $f16
    ctx->pc = 0x206120u;
    ctx->f[2] = FPU_MOV_S(ctx->f[16]);
label_206124:
    // 0x206124: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x206124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_206128:
    // 0x206128: 0xc4660004  lwc1        $f6, 0x4($v1)
    ctx->pc = 0x206128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_20612c:
    // 0x20612c: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x20612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_206130:
    // 0x206130: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x206130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_206134:
    // 0x206134: 0x460c301a  mula.s      $f6, $f12
    ctx->pc = 0x206134u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
label_206138:
    // 0x206138: 0x460b281e  madda.s     $f5, $f11
    ctx->pc = 0x206138u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[11]));
label_20613c:
    // 0x20613c: 0x460a201c  madd.s      $f0, $f4, $f10
    ctx->pc = 0x20613cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[10]));
label_206140:
    // 0x206140: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x206140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_206144:
    // 0x206144: 0x4609301a  mula.s      $f6, $f9
    ctx->pc = 0x206144u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
label_206148:
    // 0x206148: 0x4608281e  madda.s     $f5, $f8
    ctx->pc = 0x206148u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[8]));
label_20614c:
    // 0x20614c: 0x46001840  add.s       $f1, $f3, $f0
    ctx->pc = 0x20614cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_206150:
    // 0x206150: 0x4607201c  madd.s      $f0, $f4, $f7
    ctx->pc = 0x206150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[7]));
label_206154:
    // 0x206154: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x206154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_206158:
    // 0x206158: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_20615c:
    if (ctx->pc == 0x20615Cu) {
        ctx->pc = 0x20615Cu;
            // 0x20615c: 0x46001800  add.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->pc = 0x206160u;
        goto label_206160;
    }
    ctx->pc = 0x206158u;
    {
        const bool branch_taken_0x206158 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20615Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206158u;
            // 0x20615c: 0x46001800  add.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206158) {
            ctx->pc = 0x2061F0u;
            goto label_2061f0;
        }
    }
    ctx->pc = 0x206160u;
label_206160:
    // 0x206160: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x206160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_206164:
    // 0x206164: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_206168:
    if (ctx->pc == 0x206168u) {
        ctx->pc = 0x206168u;
            // 0x206168: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x20616Cu;
        goto label_20616c;
    }
    ctx->pc = 0x206164u;
    {
        const bool branch_taken_0x206164 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x206164) {
            ctx->pc = 0x206168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206164u;
            // 0x206168: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2061BCu;
            goto label_2061bc;
        }
    }
    ctx->pc = 0x20616Cu;
label_20616c:
    // 0x20616c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20616cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_206170:
    // 0x206170: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x206170u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_206174:
    // 0x206174: 0x8c65ea64  lw          $a1, -0x159C($v1)
    ctx->pc = 0x206174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_206178:
    // 0x206178: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x206178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_20617c:
    // 0x20617c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x20617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_206180:
    // 0x206180: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x206180u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_206184:
    // 0x206184: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_206188:
    if (ctx->pc == 0x206188u) {
        ctx->pc = 0x206188u;
            // 0x206188: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x20618Cu;
        goto label_20618c;
    }
    ctx->pc = 0x206184u;
    {
        const bool branch_taken_0x206184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206184u;
            // 0x206188: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206184) {
            ctx->pc = 0x2061B4u;
            goto label_2061b4;
        }
    }
    ctx->pc = 0x20618Cu;
label_20618c:
    // 0x20618c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x20618cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_206190:
    // 0x206190: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x206190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_206194:
    // 0x206194: 0x2463b778  addiu       $v1, $v1, -0x4888
    ctx->pc = 0x206194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948728));
label_206198:
    // 0x206198: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x206198u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_20619c:
    // 0x20619c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2061a0:
    // 0x2061a0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2061a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2061a4:
    // 0x2061a4: 0x4007c803  .word       0x4007C803                   # mfc0        $a3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2061a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_perf);
label_2061a8:
    // 0x2061a8: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x2061a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_2061ac:
    // 0x2061ac: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x2061acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_2061b0:
    // 0x2061b0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2061b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_2061b4:
    // 0x2061b4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_2061b8:
    if (ctx->pc == 0x2061B8u) {
        ctx->pc = 0x2061B8u;
            // 0x2061b8: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2061BCu;
        goto label_2061bc;
    }
    ctx->pc = 0x2061B4u;
    {
        const bool branch_taken_0x2061b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2061B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2061B4u;
            // 0x2061b8: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061b4) {
            ctx->pc = 0x206368u;
            goto label_206368;
        }
    }
    ctx->pc = 0x2061BCu;
label_2061bc:
    // 0x2061bc: 0x0  nop
    ctx->pc = 0x2061bcu;
    // NOP
label_2061c0:
    // 0x2061c0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2061c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_2061c4:
    // 0x2061c4: 0x0  nop
    ctx->pc = 0x2061c4u;
    // NOP
label_2061c8:
    // 0x2061c8: 0x0  nop
    ctx->pc = 0x2061c8u;
    // NOP
label_2061cc:
    // 0x2061cc: 0x46009036  c.le.s      $f18, $f0
    ctx->pc = 0x2061ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[18], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2061d0:
    // 0x2061d0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_2061d4:
    if (ctx->pc == 0x2061D4u) {
        ctx->pc = 0x2061D8u;
        goto label_2061d8;
    }
    ctx->pc = 0x2061D0u;
    {
        const bool branch_taken_0x2061d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2061d0) {
            ctx->pc = 0x206228u;
            goto label_206228;
        }
    }
    ctx->pc = 0x2061D8u;
label_2061d8:
    // 0x2061d8: 0x46000486  mov.s       $f18, $f0
    ctx->pc = 0x2061d8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[0]);
label_2061dc:
    // 0x2061dc: 0x46002b46  mov.s       $f13, $f5
    ctx->pc = 0x2061dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[5]);
label_2061e0:
    // 0x2061e0: 0x46003386  mov.s       $f14, $f6
    ctx->pc = 0x2061e0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[6]);
label_2061e4:
    // 0x2061e4: 0x460023c6  mov.s       $f15, $f4
    ctx->pc = 0x2061e4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[4]);
label_2061e8:
    // 0x2061e8: 0x1000000f  b           . + 4 + (0xF << 2)
label_2061ec:
    if (ctx->pc == 0x2061ECu) {
        ctx->pc = 0x2061ECu;
            // 0x2061ec: 0x46001c06  mov.s       $f16, $f3 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x2061F0u;
        goto label_2061f0;
    }
    ctx->pc = 0x2061E8u;
    {
        const bool branch_taken_0x2061e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2061ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2061E8u;
            // 0x2061ec: 0x46001c06  mov.s       $f16, $f3 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061e8) {
            ctx->pc = 0x206228u;
            goto label_206228;
        }
    }
    ctx->pc = 0x2061F0u;
label_2061f0:
    // 0x2061f0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2061f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2061f4:
    // 0x2061f4: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
label_2061f8:
    if (ctx->pc == 0x2061F8u) {
        ctx->pc = 0x2061F8u;
            // 0x2061f8: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->pc = 0x2061FCu;
        goto label_2061fc;
    }
    ctx->pc = 0x2061F4u;
    {
        const bool branch_taken_0x2061f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2061f4) {
            ctx->pc = 0x2061F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2061F4u;
            // 0x2061f8: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206288u;
            goto label_206288;
        }
    }
    ctx->pc = 0x2061FCu;
label_2061fc:
    // 0x2061fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2061fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_206200:
    // 0x206200: 0x0  nop
    ctx->pc = 0x206200u;
    // NOP
label_206204:
    // 0x206204: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x206204u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_206208:
    // 0x206208: 0x0  nop
    ctx->pc = 0x206208u;
    // NOP
label_20620c:
    // 0x20620c: 0x0  nop
    ctx->pc = 0x20620cu;
    // NOP
label_206210:
    // 0x206210: 0x46008834  c.lt.s      $f17, $f0
    ctx->pc = 0x206210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_206214:
    // 0x206214: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_206218:
    if (ctx->pc == 0x206218u) {
        ctx->pc = 0x206218u;
            // 0x206218: 0x46000446  mov.s       $f17, $f0 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x20621Cu;
        goto label_20621c;
    }
    ctx->pc = 0x206214u;
    {
        const bool branch_taken_0x206214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x206214) {
            ctx->pc = 0x206218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206214u;
            // 0x206218: 0x46000446  mov.s       $f17, $f0 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x206224u;
            goto label_206224;
        }
    }
    ctx->pc = 0x20621Cu;
label_20621c:
    // 0x20621c: 0x10000001  b           . + 4 + (0x1 << 2)
label_206220:
    if (ctx->pc == 0x206220u) {
        ctx->pc = 0x206224u;
        goto label_206224;
    }
    ctx->pc = 0x20621Cu;
    {
        const bool branch_taken_0x20621c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20621c) {
            ctx->pc = 0x206224u;
            goto label_206224;
        }
    }
    ctx->pc = 0x206224u;
label_206224:
    // 0x206224: 0x0  nop
    ctx->pc = 0x206224u;
    // NOP
label_206228:
    // 0x206228: 0x46128834  c.lt.s      $f17, $f18
    ctx->pc = 0x206228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20622c:
    // 0x20622c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_206230:
    if (ctx->pc == 0x206230u) {
        ctx->pc = 0x206234u;
        goto label_206234;
    }
    ctx->pc = 0x20622Cu;
    {
        const bool branch_taken_0x20622c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20622c) {
            ctx->pc = 0x206284u;
            goto label_206284;
        }
    }
    ctx->pc = 0x206234u;
label_206234:
    // 0x206234: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x206234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_206238:
    // 0x206238: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x206238u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_20623c:
    // 0x20623c: 0x8c65ea64  lw          $a1, -0x159C($v1)
    ctx->pc = 0x20623cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_206240:
    // 0x206240: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x206240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_206244:
    // 0x206244: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x206244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_206248:
    // 0x206248: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x206248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20624c:
    // 0x20624c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_206250:
    if (ctx->pc == 0x206250u) {
        ctx->pc = 0x206250u;
            // 0x206250: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x206254u;
        goto label_206254;
    }
    ctx->pc = 0x20624Cu;
    {
        const bool branch_taken_0x20624c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20624Cu;
            // 0x206250: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20624c) {
            ctx->pc = 0x20627Cu;
            goto label_20627c;
        }
    }
    ctx->pc = 0x206254u;
label_206254:
    // 0x206254: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x206254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_206258:
    // 0x206258: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x206258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_20625c:
    // 0x20625c: 0x2463b778  addiu       $v1, $v1, -0x4888
    ctx->pc = 0x20625cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948728));
label_206260:
    // 0x206260: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x206260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_206264:
    // 0x206264: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x206264u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_206268:
    // 0x206268: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x206268u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_20626c:
    // 0x20626c: 0x4007c803  .word       0x4007C803                   # mfc0        $a3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20626cu;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_perf);
label_206270:
    // 0x206270: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x206270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_206274:
    // 0x206274: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x206274u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_206278:
    // 0x206278: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x206278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_20627c:
    // 0x20627c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_206280:
    if (ctx->pc == 0x206280u) {
        ctx->pc = 0x206280u;
            // 0x206280: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x206284u;
        goto label_206284;
    }
    ctx->pc = 0x20627Cu;
    {
        const bool branch_taken_0x20627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20627Cu;
            // 0x206280: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20627c) {
            ctx->pc = 0x206368u;
            goto label_206368;
        }
    }
    ctx->pc = 0x206284u;
label_206284:
    // 0x206284: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x206284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_206288:
    // 0x206288: 0x521ffa6  bgez        $t1, . + 4 + (-0x5A << 2)
label_20628c:
    if (ctx->pc == 0x20628Cu) {
        ctx->pc = 0x20628Cu;
            // 0x20628c: 0x2508fff0  addiu       $t0, $t0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
        ctx->pc = 0x206290u;
        goto label_206290;
    }
    ctx->pc = 0x206288u;
    {
        const bool branch_taken_0x206288 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x20628Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206288u;
            // 0x20628c: 0x2508fff0  addiu       $t0, $t0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206288) {
            ctx->pc = 0x206124u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_206124;
        }
    }
    ctx->pc = 0x206290u;
label_206290:
    // 0x206290: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_206294:
    // 0x206294: 0x0  nop
    ctx->pc = 0x206294u;
    // NOP
label_206298:
    // 0x206298: 0x46009034  c.lt.s      $f18, $f0
    ctx->pc = 0x206298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[18], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20629c:
    // 0x20629c: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_2062a0:
    if (ctx->pc == 0x2062A0u) {
        ctx->pc = 0x2062A0u;
            // 0x2062a0: 0xe4ed0000  swc1        $f13, 0x0($a3) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x2062A4u;
        goto label_2062a4;
    }
    ctx->pc = 0x20629Cu;
    {
        const bool branch_taken_0x20629c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20629c) {
            ctx->pc = 0x2062A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20629Cu;
            // 0x2062a0: 0xe4ed0000  swc1        $f13, 0x0($a3) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2062F4u;
            goto label_2062f4;
        }
    }
    ctx->pc = 0x2062A4u;
label_2062a4:
    // 0x2062a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2062a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2062a8:
    // 0x2062a8: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x2062a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_2062ac:
    // 0x2062ac: 0x8c65ea64  lw          $a1, -0x159C($v1)
    ctx->pc = 0x2062acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_2062b0:
    // 0x2062b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2062b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2062b4:
    // 0x2062b4: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x2062b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_2062b8:
    // 0x2062b8: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2062b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2062bc:
    // 0x2062bc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2062c0:
    if (ctx->pc == 0x2062C0u) {
        ctx->pc = 0x2062C0u;
            // 0x2062c0: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x2062C4u;
        goto label_2062c4;
    }
    ctx->pc = 0x2062BCu;
    {
        const bool branch_taken_0x2062bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2062C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2062BCu;
            // 0x2062c0: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062bc) {
            ctx->pc = 0x2062ECu;
            goto label_2062ec;
        }
    }
    ctx->pc = 0x2062C4u;
label_2062c4:
    // 0x2062c4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2062c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2062c8:
    // 0x2062c8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2062c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2062cc:
    // 0x2062cc: 0x2463b778  addiu       $v1, $v1, -0x4888
    ctx->pc = 0x2062ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948728));
label_2062d0:
    // 0x2062d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2062d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2062d4:
    // 0x2062d4: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2062d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2062d8:
    // 0x2062d8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2062d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2062dc:
    // 0x2062dc: 0x4007c803  .word       0x4007C803                   # mfc0        $a3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2062dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_perf);
label_2062e0:
    // 0x2062e0: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x2062e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_2062e4:
    // 0x2062e4: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x2062e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_2062e8:
    // 0x2062e8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2062e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_2062ec:
    // 0x2062ec: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2062f0:
    if (ctx->pc == 0x2062F0u) {
        ctx->pc = 0x2062F0u;
            // 0x2062f0: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2062F4u;
        goto label_2062f4;
    }
    ctx->pc = 0x2062ECu;
    {
        const bool branch_taken_0x2062ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2062F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2062ECu;
            // 0x2062f0: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062ec) {
            ctx->pc = 0x206368u;
            goto label_206368;
        }
    }
    ctx->pc = 0x2062F4u;
label_2062f4:
    // 0x2062f4: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x2062f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_2062f8:
    // 0x2062f8: 0xe4ee0004  swc1        $f14, 0x4($a3)
    ctx->pc = 0x2062f8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_2062fc:
    // 0x2062fc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2062fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_206300:
    // 0x206300: 0xe4ef0008  swc1        $f15, 0x8($a3)
    ctx->pc = 0x206300u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_206304:
    // 0x206304: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x206304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_206308:
    // 0x206308: 0xe4f0000c  swc1        $f16, 0xC($a3)
    ctx->pc = 0x206308u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_20630c:
    // 0x20630c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20630cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_206310:
    // 0x206310: 0xe4f20010  swc1        $f18, 0x10($a3)
    ctx->pc = 0x206310u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_206314:
    // 0x206314: 0x8ce80040  lw          $t0, 0x40($a3)
    ctx->pc = 0x206314u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
label_206318:
    // 0x206318: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x206318u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_20631c:
    // 0x20631c: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x20631cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_206320:
    // 0x206320: 0xace90020  sw          $t1, 0x20($a3)
    ctx->pc = 0x206320u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 9));
label_206324:
    // 0x206324: 0x8ca5ea64  lw          $a1, -0x159C($a1)
    ctx->pc = 0x206324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961764)));
label_206328:
    // 0x206328: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x206328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_20632c:
    // 0x20632c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x20632cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_206330:
    // 0x206330: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_206334:
    if (ctx->pc == 0x206334u) {
        ctx->pc = 0x206334u;
            // 0x206334: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x206338u;
        goto label_206338;
    }
    ctx->pc = 0x206330u;
    {
        const bool branch_taken_0x206330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206330u;
            // 0x206334: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206330) {
            ctx->pc = 0x206360u;
            goto label_206360;
        }
    }
    ctx->pc = 0x206338u;
label_206338:
    // 0x206338: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x206338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_20633c:
    // 0x20633c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20633cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_206340:
    // 0x206340: 0x2463b778  addiu       $v1, $v1, -0x4888
    ctx->pc = 0x206340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948728));
label_206344:
    // 0x206344: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x206344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_206348:
    // 0x206348: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x206348u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_20634c:
    // 0x20634c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x20634cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_206350:
    // 0x206350: 0x4007c803  .word       0x4007C803                   # mfc0        $a3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x206350u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_perf);
label_206354:
    // 0x206354: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x206354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_206358:
    // 0x206358: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x206358u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_20635c:
    // 0x20635c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x20635cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_206360:
    // 0x206360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206364:
    // 0x206364: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x206364u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_206368:
    // 0x206368: 0x3e00008  jr          $ra
label_20636c:
    if (ctx->pc == 0x20636Cu) {
        ctx->pc = 0x206370u;
        goto label_206370;
    }
    ctx->pc = 0x206368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206370u;
label_206370:
    // 0x206370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_206374:
    // 0x206374: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x206374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206378:
    // 0x206378: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x206378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20637c:
    // 0x20637c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_206380:
    // 0x206380: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x206380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_206384:
    // 0x206384: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x206384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206388:
    // 0x206388: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x206388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20638c:
    // 0x20638c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20638cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206390:
    // 0x206390: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x206390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_206394:
    // 0x206394: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x206394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_206398:
    // 0x206398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20639c:
    // 0x20639c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x20639cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2063a0:
    // 0x2063a0: 0x320f809  jalr        $t9
label_2063a4:
    if (ctx->pc == 0x2063A4u) {
        ctx->pc = 0x2063A4u;
            // 0x2063a4: 0x24a5b780  addiu       $a1, $a1, -0x4880 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948736));
        ctx->pc = 0x2063A8u;
        goto label_2063a8;
    }
    ctx->pc = 0x2063A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2063A8u);
        ctx->pc = 0x2063A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2063A0u;
            // 0x2063a4: 0x24a5b780  addiu       $a1, $a1, -0x4880 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948736));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2063A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2063A8u; }
            if (ctx->pc != 0x2063A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2063A8u;
label_2063a8:
    // 0x2063a8: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2063a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2063ac:
    // 0x2063ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2063acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2063b0:
    // 0x2063b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2063b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2063b4:
    // 0x2063b4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_2063b8:
    if (ctx->pc == 0x2063B8u) {
        ctx->pc = 0x2063B8u;
            // 0x2063b8: 0x8e230058  lw          $v1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x2063BCu;
        goto label_2063bc;
    }
    ctx->pc = 0x2063B4u;
    {
        const bool branch_taken_0x2063b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2063b4) {
            ctx->pc = 0x2063B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2063B4u;
            // 0x2063b8: 0x8e230058  lw          $v1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206404u;
            goto label_206404;
        }
    }
    ctx->pc = 0x2063BCu;
label_2063bc:
    // 0x2063bc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2063bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_2063c0:
    // 0x2063c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2063c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2063c4:
    // 0x2063c4: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2063c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_2063c8:
    // 0x2063c8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2063c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2063cc:
    // 0x2063cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2063ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2063d0:
    // 0x2063d0: 0x8e260044  lw          $a2, 0x44($s1)
    ctx->pc = 0x2063d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2063d4:
    // 0x2063d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2063d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2063d8:
    // 0x2063d8: 0x8e270040  lw          $a3, 0x40($s1)
    ctx->pc = 0x2063d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2063dc:
    // 0x2063dc: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x2063dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2063e0:
    // 0x2063e0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2063e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2063e4:
    // 0x2063e4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2063e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2063e8:
    // 0x2063e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2063e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2063ec:
    // 0x2063ec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2063ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2063f0:
    // 0x2063f0: 0x24a5b790  addiu       $a1, $a1, -0x4870
    ctx->pc = 0x2063f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948752));
label_2063f4:
    // 0x2063f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2063f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2063f8:
    // 0x2063f8: 0x320f809  jalr        $t9
label_2063fc:
    if (ctx->pc == 0x2063FCu) {
        ctx->pc = 0x2063FCu;
            // 0x2063fc: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x206400u;
        goto label_206400;
    }
    ctx->pc = 0x2063F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x206400u);
        ctx->pc = 0x2063FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2063F8u;
            // 0x2063fc: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x206400u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x206400u; }
            if (ctx->pc != 0x206400u) { return; }
        }
        }
    }
    ctx->pc = 0x206400u;
label_206400:
    // 0x206400: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x206400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_206404:
    // 0x206404: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x206404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_206408:
    // 0x206408: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x206408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_20640c:
    // 0x20640c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_206410:
    if (ctx->pc == 0x206410u) {
        ctx->pc = 0x206410u;
            // 0x206410: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x206414u;
        goto label_206414;
    }
    ctx->pc = 0x20640Cu;
    {
        const bool branch_taken_0x20640c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20640c) {
            ctx->pc = 0x206410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20640Cu;
            // 0x206410: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20644Cu;
            goto label_20644c;
        }
    }
    ctx->pc = 0x206414u;
label_206414:
    // 0x206414: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x206414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_206418:
    // 0x206418: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x206418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_20641c:
    // 0x20641c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x20641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_206420:
    // 0x206420: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x206420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_206424:
    // 0x206424: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x206424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_206428:
    // 0x206428: 0x8e270050  lw          $a3, 0x50($s1)
    ctx->pc = 0x206428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_20642c:
    // 0x20642c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x20642cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_206430:
    // 0x206430: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x206430u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_206434:
    // 0x206434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206438:
    // 0x206438: 0x24a5b790  addiu       $a1, $a1, -0x4870
    ctx->pc = 0x206438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948752));
label_20643c:
    // 0x20643c: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x20643cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_206440:
    // 0x206440: 0x320f809  jalr        $t9
label_206444:
    if (ctx->pc == 0x206444u) {
        ctx->pc = 0x206444u;
            // 0x206444: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x206448u;
        goto label_206448;
    }
    ctx->pc = 0x206440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x206448u);
        ctx->pc = 0x206444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206440u;
            // 0x206444: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x206448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x206448u; }
            if (ctx->pc != 0x206448u) { return; }
        }
        }
    }
    ctx->pc = 0x206448u;
label_206448:
    // 0x206448: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x206448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20644c:
    // 0x20644c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x20644cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_206450:
    // 0x206450: 0x320f809  jalr        $t9
label_206454:
    if (ctx->pc == 0x206454u) {
        ctx->pc = 0x206454u;
            // 0x206454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x206458u;
        goto label_206458;
    }
    ctx->pc = 0x206450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x206458u);
        ctx->pc = 0x206454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206450u;
            // 0x206454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x206458u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x206458u; }
            if (ctx->pc != 0x206458u) { return; }
        }
        }
    }
    ctx->pc = 0x206458u;
label_206458:
    // 0x206458: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x206458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20645c:
    // 0x20645c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20645cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_206460:
    // 0x206460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_206464:
    // 0x206464: 0x3e00008  jr          $ra
label_206468:
    if (ctx->pc == 0x206468u) {
        ctx->pc = 0x206468u;
            // 0x206468: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20646Cu;
        goto label_20646c;
    }
    ctx->pc = 0x206464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206464u;
            // 0x206468: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20646Cu;
label_20646c:
    // 0x20646c: 0x0  nop
    ctx->pc = 0x20646cu;
    // NOP
label_206470:
    // 0x206470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_206474:
    // 0x206474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x206474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_206478:
    // 0x206478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20647c:
    // 0x20647c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20647cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_206480:
    // 0x206480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x206480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206484:
    // 0x206484: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
label_206488:
    if (ctx->pc == 0x206488u) {
        ctx->pc = 0x206488u;
            // 0x206488: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20648Cu;
        goto label_20648c;
    }
    ctx->pc = 0x206484u;
    {
        const bool branch_taken_0x206484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x206488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206484u;
            // 0x206488: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206484) {
            ctx->pc = 0x2065A0u;
            goto label_2065a0;
        }
    }
    ctx->pc = 0x20648Cu;
label_20648c:
    // 0x20648c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x20648cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_206490:
    // 0x206490: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x206490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_206494:
    // 0x206494: 0x2463e2b0  addiu       $v1, $v1, -0x1D50
    ctx->pc = 0x206494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959792));
label_206498:
    // 0x206498: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_20649c:
    if (ctx->pc == 0x20649Cu) {
        ctx->pc = 0x20649Cu;
            // 0x20649c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2064A0u;
        goto label_2064a0;
    }
    ctx->pc = 0x206498u;
    {
        const bool branch_taken_0x206498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20649Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206498u;
            // 0x20649c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206498) {
            ctx->pc = 0x2064D8u;
            goto label_2064d8;
        }
    }
    ctx->pc = 0x2064A0u;
label_2064a0:
    // 0x2064a0: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x2064a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2064a4:
    // 0x2064a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2064a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2064a8:
    // 0x2064a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2064a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2064ac:
    // 0x2064ac: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2064b0:
    if (ctx->pc == 0x2064B0u) {
        ctx->pc = 0x2064B0u;
            // 0x2064b0: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x2064B4u;
        goto label_2064b4;
    }
    ctx->pc = 0x2064ACu;
    {
        const bool branch_taken_0x2064ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2064ac) {
            ctx->pc = 0x2064B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2064ACu;
            // 0x2064b0: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2064DCu;
            goto label_2064dc;
        }
    }
    ctx->pc = 0x2064B4u;
label_2064b4:
    // 0x2064b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2064b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2064b8:
    // 0x2064b8: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x2064b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2064bc:
    // 0x2064bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2064bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2064c0:
    // 0x2064c0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2064c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2064c4:
    // 0x2064c4: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2064c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2064c8:
    // 0x2064c8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2064c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2064cc:
    // 0x2064cc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2064ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2064d0:
    // 0x2064d0: 0xc0a7ab4  jal         func_29EAD0
label_2064d4:
    if (ctx->pc == 0x2064D4u) {
        ctx->pc = 0x2064D4u;
            // 0x2064d4: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2064D8u;
        goto label_2064d8;
    }
    ctx->pc = 0x2064D0u;
    SET_GPR_U32(ctx, 31, 0x2064D8u);
    ctx->pc = 0x2064D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2064D0u;
            // 0x2064d4: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2064D8u; }
        if (ctx->pc != 0x2064D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2064D8u; }
        if (ctx->pc != 0x2064D8u) { return; }
    }
    ctx->pc = 0x2064D8u;
label_2064d8:
    // 0x2064d8: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x2064d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_2064dc:
    // 0x2064dc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2064e0:
    if (ctx->pc == 0x2064E0u) {
        ctx->pc = 0x2064E4u;
        goto label_2064e4;
    }
    ctx->pc = 0x2064DCu;
    {
        const bool branch_taken_0x2064dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064dc) {
            ctx->pc = 0x206524u;
            goto label_206524;
        }
    }
    ctx->pc = 0x2064E4u;
label_2064e4:
    // 0x2064e4: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2064e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2064e8:
    // 0x2064e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2064e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2064ec:
    // 0x2064ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2064ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2064f0:
    // 0x2064f0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2064f4:
    if (ctx->pc == 0x2064F4u) {
        ctx->pc = 0x2064F8u;
        goto label_2064f8;
    }
    ctx->pc = 0x2064F0u;
    {
        const bool branch_taken_0x2064f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2064f0) {
            ctx->pc = 0x206524u;
            goto label_206524;
        }
    }
    ctx->pc = 0x2064F8u;
label_2064f8:
    // 0x2064f8: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2064f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2064fc:
    // 0x2064fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2064fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_206500:
    // 0x206500: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x206500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_206504:
    // 0x206504: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x206504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_206508:
    // 0x206508: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x206508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_20650c:
    // 0x20650c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x20650cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_206510:
    // 0x206510: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x206510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_206514:
    // 0x206514: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x206514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_206518:
    // 0x206518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20651c:
    // 0x20651c: 0xc0a7ab4  jal         func_29EAD0
label_206520:
    if (ctx->pc == 0x206520u) {
        ctx->pc = 0x206520u;
            // 0x206520: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x206524u;
        goto label_206524;
    }
    ctx->pc = 0x20651Cu;
    SET_GPR_U32(ctx, 31, 0x206524u);
    ctx->pc = 0x206520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20651Cu;
            // 0x206520: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206524u; }
        if (ctx->pc != 0x206524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206524u; }
        if (ctx->pc != 0x206524u) { return; }
    }
    ctx->pc = 0x206524u;
label_206524:
    // 0x206524: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
label_206528:
    if (ctx->pc == 0x206528u) {
        ctx->pc = 0x206528u;
            // 0x206528: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x20652Cu;
        goto label_20652c;
    }
    ctx->pc = 0x206524u;
    {
        const bool branch_taken_0x206524 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x206524) {
            ctx->pc = 0x206528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206524u;
            // 0x206528: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20657Cu;
            goto label_20657c;
        }
    }
    ctx->pc = 0x20652Cu;
label_20652c:
    // 0x20652c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_206530:
    // 0x206530: 0x2442e1e0  addiu       $v0, $v0, -0x1E20
    ctx->pc = 0x206530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959584));
label_206534:
    // 0x206534: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_206538:
    if (ctx->pc == 0x206538u) {
        ctx->pc = 0x206538u;
            // 0x206538: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20653Cu;
        goto label_20653c;
    }
    ctx->pc = 0x206534u;
    {
        const bool branch_taken_0x206534 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x206538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206534u;
            // 0x206538: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206534) {
            ctx->pc = 0x206578u;
            goto label_206578;
        }
    }
    ctx->pc = 0x20653Cu;
label_20653c:
    // 0x20653c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20653cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_206540:
    // 0x206540: 0x2442db60  addiu       $v0, $v0, -0x24A0
    ctx->pc = 0x206540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957920));
label_206544:
    // 0x206544: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_206548:
    if (ctx->pc == 0x206548u) {
        ctx->pc = 0x206548u;
            // 0x206548: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20654Cu;
        goto label_20654c;
    }
    ctx->pc = 0x206544u;
    {
        const bool branch_taken_0x206544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x206548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206544u;
            // 0x206548: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206544) {
            ctx->pc = 0x206578u;
            goto label_206578;
        }
    }
    ctx->pc = 0x20654Cu;
label_20654c:
    // 0x20654c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20654cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_206550:
    // 0x206550: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x206550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_206554:
    // 0x206554: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_206558:
    if (ctx->pc == 0x206558u) {
        ctx->pc = 0x206558u;
            // 0x206558: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20655Cu;
        goto label_20655c;
    }
    ctx->pc = 0x206554u;
    {
        const bool branch_taken_0x206554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x206558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206554u;
            // 0x206558: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206554) {
            ctx->pc = 0x206578u;
            goto label_206578;
        }
    }
    ctx->pc = 0x20655Cu;
label_20655c:
    // 0x20655c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20655cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_206560:
    // 0x206560: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x206560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_206564:
    // 0x206564: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_206568:
    if (ctx->pc == 0x206568u) {
        ctx->pc = 0x206568u;
            // 0x206568: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20656Cu;
        goto label_20656c;
    }
    ctx->pc = 0x206564u;
    {
        const bool branch_taken_0x206564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x206568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206564u;
            // 0x206568: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206564) {
            ctx->pc = 0x206578u;
            goto label_206578;
        }
    }
    ctx->pc = 0x20656Cu;
label_20656c:
    // 0x20656c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20656cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_206570:
    // 0x206570: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x206570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_206574:
    // 0x206574: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x206574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_206578:
    // 0x206578: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x206578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_20657c:
    // 0x20657c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20657cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_206580:
    // 0x206580: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_206584:
    if (ctx->pc == 0x206584u) {
        ctx->pc = 0x206584u;
            // 0x206584: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x206588u;
        goto label_206588;
    }
    ctx->pc = 0x206580u;
    {
        const bool branch_taken_0x206580 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x206580) {
            ctx->pc = 0x206584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206580u;
            // 0x206584: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2065A4u;
            goto label_2065a4;
        }
    }
    ctx->pc = 0x206588u;
label_206588:
    // 0x206588: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x206588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20658c:
    // 0x20658c: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x20658cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_206590:
    // 0x206590: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x206590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_206594:
    // 0x206594: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206598:
    // 0x206598: 0xc0a7ab4  jal         func_29EAD0
label_20659c:
    if (ctx->pc == 0x20659Cu) {
        ctx->pc = 0x20659Cu;
            // 0x20659c: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x2065A0u;
        goto label_2065a0;
    }
    ctx->pc = 0x206598u;
    SET_GPR_U32(ctx, 31, 0x2065A0u);
    ctx->pc = 0x20659Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206598u;
            // 0x20659c: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2065A0u; }
        if (ctx->pc != 0x2065A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2065A0u; }
        if (ctx->pc != 0x2065A0u) { return; }
    }
    ctx->pc = 0x2065A0u;
label_2065a0:
    // 0x2065a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2065a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2065a4:
    // 0x2065a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2065a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2065a8:
    // 0x2065a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2065a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2065ac:
    // 0x2065ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2065acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2065b0:
    // 0x2065b0: 0x3e00008  jr          $ra
label_2065b4:
    if (ctx->pc == 0x2065B4u) {
        ctx->pc = 0x2065B4u;
            // 0x2065b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2065B8u;
        goto label_2065b8;
    }
    ctx->pc = 0x2065B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2065B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2065B0u;
            // 0x2065b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2065B8u;
label_2065b8:
    // 0x2065b8: 0x0  nop
    ctx->pc = 0x2065b8u;
    // NOP
label_2065bc:
    // 0x2065bc: 0x0  nop
    ctx->pc = 0x2065bcu;
    // NOP
label_2065c0:
    // 0x2065c0: 0x3e00008  jr          $ra
label_2065c4:
    if (ctx->pc == 0x2065C4u) {
        ctx->pc = 0x2065C4u;
            // 0x2065c4: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x2065C8u;
        goto label_2065c8;
    }
    ctx->pc = 0x2065C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2065C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2065C0u;
            // 0x2065c4: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2065C8u;
label_2065c8:
    // 0x2065c8: 0x0  nop
    ctx->pc = 0x2065c8u;
    // NOP
label_2065cc:
    // 0x2065cc: 0x0  nop
    ctx->pc = 0x2065ccu;
    // NOP
}
