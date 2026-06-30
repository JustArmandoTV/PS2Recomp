#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00558430
// Address: 0x558430 - 0x559960
void sub_00558430_0x558430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00558430_0x558430");
#endif

    switch (ctx->pc) {
        case 0x558430u: goto label_558430;
        case 0x558434u: goto label_558434;
        case 0x558438u: goto label_558438;
        case 0x55843cu: goto label_55843c;
        case 0x558440u: goto label_558440;
        case 0x558444u: goto label_558444;
        case 0x558448u: goto label_558448;
        case 0x55844cu: goto label_55844c;
        case 0x558450u: goto label_558450;
        case 0x558454u: goto label_558454;
        case 0x558458u: goto label_558458;
        case 0x55845cu: goto label_55845c;
        case 0x558460u: goto label_558460;
        case 0x558464u: goto label_558464;
        case 0x558468u: goto label_558468;
        case 0x55846cu: goto label_55846c;
        case 0x558470u: goto label_558470;
        case 0x558474u: goto label_558474;
        case 0x558478u: goto label_558478;
        case 0x55847cu: goto label_55847c;
        case 0x558480u: goto label_558480;
        case 0x558484u: goto label_558484;
        case 0x558488u: goto label_558488;
        case 0x55848cu: goto label_55848c;
        case 0x558490u: goto label_558490;
        case 0x558494u: goto label_558494;
        case 0x558498u: goto label_558498;
        case 0x55849cu: goto label_55849c;
        case 0x5584a0u: goto label_5584a0;
        case 0x5584a4u: goto label_5584a4;
        case 0x5584a8u: goto label_5584a8;
        case 0x5584acu: goto label_5584ac;
        case 0x5584b0u: goto label_5584b0;
        case 0x5584b4u: goto label_5584b4;
        case 0x5584b8u: goto label_5584b8;
        case 0x5584bcu: goto label_5584bc;
        case 0x5584c0u: goto label_5584c0;
        case 0x5584c4u: goto label_5584c4;
        case 0x5584c8u: goto label_5584c8;
        case 0x5584ccu: goto label_5584cc;
        case 0x5584d0u: goto label_5584d0;
        case 0x5584d4u: goto label_5584d4;
        case 0x5584d8u: goto label_5584d8;
        case 0x5584dcu: goto label_5584dc;
        case 0x5584e0u: goto label_5584e0;
        case 0x5584e4u: goto label_5584e4;
        case 0x5584e8u: goto label_5584e8;
        case 0x5584ecu: goto label_5584ec;
        case 0x5584f0u: goto label_5584f0;
        case 0x5584f4u: goto label_5584f4;
        case 0x5584f8u: goto label_5584f8;
        case 0x5584fcu: goto label_5584fc;
        case 0x558500u: goto label_558500;
        case 0x558504u: goto label_558504;
        case 0x558508u: goto label_558508;
        case 0x55850cu: goto label_55850c;
        case 0x558510u: goto label_558510;
        case 0x558514u: goto label_558514;
        case 0x558518u: goto label_558518;
        case 0x55851cu: goto label_55851c;
        case 0x558520u: goto label_558520;
        case 0x558524u: goto label_558524;
        case 0x558528u: goto label_558528;
        case 0x55852cu: goto label_55852c;
        case 0x558530u: goto label_558530;
        case 0x558534u: goto label_558534;
        case 0x558538u: goto label_558538;
        case 0x55853cu: goto label_55853c;
        case 0x558540u: goto label_558540;
        case 0x558544u: goto label_558544;
        case 0x558548u: goto label_558548;
        case 0x55854cu: goto label_55854c;
        case 0x558550u: goto label_558550;
        case 0x558554u: goto label_558554;
        case 0x558558u: goto label_558558;
        case 0x55855cu: goto label_55855c;
        case 0x558560u: goto label_558560;
        case 0x558564u: goto label_558564;
        case 0x558568u: goto label_558568;
        case 0x55856cu: goto label_55856c;
        case 0x558570u: goto label_558570;
        case 0x558574u: goto label_558574;
        case 0x558578u: goto label_558578;
        case 0x55857cu: goto label_55857c;
        case 0x558580u: goto label_558580;
        case 0x558584u: goto label_558584;
        case 0x558588u: goto label_558588;
        case 0x55858cu: goto label_55858c;
        case 0x558590u: goto label_558590;
        case 0x558594u: goto label_558594;
        case 0x558598u: goto label_558598;
        case 0x55859cu: goto label_55859c;
        case 0x5585a0u: goto label_5585a0;
        case 0x5585a4u: goto label_5585a4;
        case 0x5585a8u: goto label_5585a8;
        case 0x5585acu: goto label_5585ac;
        case 0x5585b0u: goto label_5585b0;
        case 0x5585b4u: goto label_5585b4;
        case 0x5585b8u: goto label_5585b8;
        case 0x5585bcu: goto label_5585bc;
        case 0x5585c0u: goto label_5585c0;
        case 0x5585c4u: goto label_5585c4;
        case 0x5585c8u: goto label_5585c8;
        case 0x5585ccu: goto label_5585cc;
        case 0x5585d0u: goto label_5585d0;
        case 0x5585d4u: goto label_5585d4;
        case 0x5585d8u: goto label_5585d8;
        case 0x5585dcu: goto label_5585dc;
        case 0x5585e0u: goto label_5585e0;
        case 0x5585e4u: goto label_5585e4;
        case 0x5585e8u: goto label_5585e8;
        case 0x5585ecu: goto label_5585ec;
        case 0x5585f0u: goto label_5585f0;
        case 0x5585f4u: goto label_5585f4;
        case 0x5585f8u: goto label_5585f8;
        case 0x5585fcu: goto label_5585fc;
        case 0x558600u: goto label_558600;
        case 0x558604u: goto label_558604;
        case 0x558608u: goto label_558608;
        case 0x55860cu: goto label_55860c;
        case 0x558610u: goto label_558610;
        case 0x558614u: goto label_558614;
        case 0x558618u: goto label_558618;
        case 0x55861cu: goto label_55861c;
        case 0x558620u: goto label_558620;
        case 0x558624u: goto label_558624;
        case 0x558628u: goto label_558628;
        case 0x55862cu: goto label_55862c;
        case 0x558630u: goto label_558630;
        case 0x558634u: goto label_558634;
        case 0x558638u: goto label_558638;
        case 0x55863cu: goto label_55863c;
        case 0x558640u: goto label_558640;
        case 0x558644u: goto label_558644;
        case 0x558648u: goto label_558648;
        case 0x55864cu: goto label_55864c;
        case 0x558650u: goto label_558650;
        case 0x558654u: goto label_558654;
        case 0x558658u: goto label_558658;
        case 0x55865cu: goto label_55865c;
        case 0x558660u: goto label_558660;
        case 0x558664u: goto label_558664;
        case 0x558668u: goto label_558668;
        case 0x55866cu: goto label_55866c;
        case 0x558670u: goto label_558670;
        case 0x558674u: goto label_558674;
        case 0x558678u: goto label_558678;
        case 0x55867cu: goto label_55867c;
        case 0x558680u: goto label_558680;
        case 0x558684u: goto label_558684;
        case 0x558688u: goto label_558688;
        case 0x55868cu: goto label_55868c;
        case 0x558690u: goto label_558690;
        case 0x558694u: goto label_558694;
        case 0x558698u: goto label_558698;
        case 0x55869cu: goto label_55869c;
        case 0x5586a0u: goto label_5586a0;
        case 0x5586a4u: goto label_5586a4;
        case 0x5586a8u: goto label_5586a8;
        case 0x5586acu: goto label_5586ac;
        case 0x5586b0u: goto label_5586b0;
        case 0x5586b4u: goto label_5586b4;
        case 0x5586b8u: goto label_5586b8;
        case 0x5586bcu: goto label_5586bc;
        case 0x5586c0u: goto label_5586c0;
        case 0x5586c4u: goto label_5586c4;
        case 0x5586c8u: goto label_5586c8;
        case 0x5586ccu: goto label_5586cc;
        case 0x5586d0u: goto label_5586d0;
        case 0x5586d4u: goto label_5586d4;
        case 0x5586d8u: goto label_5586d8;
        case 0x5586dcu: goto label_5586dc;
        case 0x5586e0u: goto label_5586e0;
        case 0x5586e4u: goto label_5586e4;
        case 0x5586e8u: goto label_5586e8;
        case 0x5586ecu: goto label_5586ec;
        case 0x5586f0u: goto label_5586f0;
        case 0x5586f4u: goto label_5586f4;
        case 0x5586f8u: goto label_5586f8;
        case 0x5586fcu: goto label_5586fc;
        case 0x558700u: goto label_558700;
        case 0x558704u: goto label_558704;
        case 0x558708u: goto label_558708;
        case 0x55870cu: goto label_55870c;
        case 0x558710u: goto label_558710;
        case 0x558714u: goto label_558714;
        case 0x558718u: goto label_558718;
        case 0x55871cu: goto label_55871c;
        case 0x558720u: goto label_558720;
        case 0x558724u: goto label_558724;
        case 0x558728u: goto label_558728;
        case 0x55872cu: goto label_55872c;
        case 0x558730u: goto label_558730;
        case 0x558734u: goto label_558734;
        case 0x558738u: goto label_558738;
        case 0x55873cu: goto label_55873c;
        case 0x558740u: goto label_558740;
        case 0x558744u: goto label_558744;
        case 0x558748u: goto label_558748;
        case 0x55874cu: goto label_55874c;
        case 0x558750u: goto label_558750;
        case 0x558754u: goto label_558754;
        case 0x558758u: goto label_558758;
        case 0x55875cu: goto label_55875c;
        case 0x558760u: goto label_558760;
        case 0x558764u: goto label_558764;
        case 0x558768u: goto label_558768;
        case 0x55876cu: goto label_55876c;
        case 0x558770u: goto label_558770;
        case 0x558774u: goto label_558774;
        case 0x558778u: goto label_558778;
        case 0x55877cu: goto label_55877c;
        case 0x558780u: goto label_558780;
        case 0x558784u: goto label_558784;
        case 0x558788u: goto label_558788;
        case 0x55878cu: goto label_55878c;
        case 0x558790u: goto label_558790;
        case 0x558794u: goto label_558794;
        case 0x558798u: goto label_558798;
        case 0x55879cu: goto label_55879c;
        case 0x5587a0u: goto label_5587a0;
        case 0x5587a4u: goto label_5587a4;
        case 0x5587a8u: goto label_5587a8;
        case 0x5587acu: goto label_5587ac;
        case 0x5587b0u: goto label_5587b0;
        case 0x5587b4u: goto label_5587b4;
        case 0x5587b8u: goto label_5587b8;
        case 0x5587bcu: goto label_5587bc;
        case 0x5587c0u: goto label_5587c0;
        case 0x5587c4u: goto label_5587c4;
        case 0x5587c8u: goto label_5587c8;
        case 0x5587ccu: goto label_5587cc;
        case 0x5587d0u: goto label_5587d0;
        case 0x5587d4u: goto label_5587d4;
        case 0x5587d8u: goto label_5587d8;
        case 0x5587dcu: goto label_5587dc;
        case 0x5587e0u: goto label_5587e0;
        case 0x5587e4u: goto label_5587e4;
        case 0x5587e8u: goto label_5587e8;
        case 0x5587ecu: goto label_5587ec;
        case 0x5587f0u: goto label_5587f0;
        case 0x5587f4u: goto label_5587f4;
        case 0x5587f8u: goto label_5587f8;
        case 0x5587fcu: goto label_5587fc;
        case 0x558800u: goto label_558800;
        case 0x558804u: goto label_558804;
        case 0x558808u: goto label_558808;
        case 0x55880cu: goto label_55880c;
        case 0x558810u: goto label_558810;
        case 0x558814u: goto label_558814;
        case 0x558818u: goto label_558818;
        case 0x55881cu: goto label_55881c;
        case 0x558820u: goto label_558820;
        case 0x558824u: goto label_558824;
        case 0x558828u: goto label_558828;
        case 0x55882cu: goto label_55882c;
        case 0x558830u: goto label_558830;
        case 0x558834u: goto label_558834;
        case 0x558838u: goto label_558838;
        case 0x55883cu: goto label_55883c;
        case 0x558840u: goto label_558840;
        case 0x558844u: goto label_558844;
        case 0x558848u: goto label_558848;
        case 0x55884cu: goto label_55884c;
        case 0x558850u: goto label_558850;
        case 0x558854u: goto label_558854;
        case 0x558858u: goto label_558858;
        case 0x55885cu: goto label_55885c;
        case 0x558860u: goto label_558860;
        case 0x558864u: goto label_558864;
        case 0x558868u: goto label_558868;
        case 0x55886cu: goto label_55886c;
        case 0x558870u: goto label_558870;
        case 0x558874u: goto label_558874;
        case 0x558878u: goto label_558878;
        case 0x55887cu: goto label_55887c;
        case 0x558880u: goto label_558880;
        case 0x558884u: goto label_558884;
        case 0x558888u: goto label_558888;
        case 0x55888cu: goto label_55888c;
        case 0x558890u: goto label_558890;
        case 0x558894u: goto label_558894;
        case 0x558898u: goto label_558898;
        case 0x55889cu: goto label_55889c;
        case 0x5588a0u: goto label_5588a0;
        case 0x5588a4u: goto label_5588a4;
        case 0x5588a8u: goto label_5588a8;
        case 0x5588acu: goto label_5588ac;
        case 0x5588b0u: goto label_5588b0;
        case 0x5588b4u: goto label_5588b4;
        case 0x5588b8u: goto label_5588b8;
        case 0x5588bcu: goto label_5588bc;
        case 0x5588c0u: goto label_5588c0;
        case 0x5588c4u: goto label_5588c4;
        case 0x5588c8u: goto label_5588c8;
        case 0x5588ccu: goto label_5588cc;
        case 0x5588d0u: goto label_5588d0;
        case 0x5588d4u: goto label_5588d4;
        case 0x5588d8u: goto label_5588d8;
        case 0x5588dcu: goto label_5588dc;
        case 0x5588e0u: goto label_5588e0;
        case 0x5588e4u: goto label_5588e4;
        case 0x5588e8u: goto label_5588e8;
        case 0x5588ecu: goto label_5588ec;
        case 0x5588f0u: goto label_5588f0;
        case 0x5588f4u: goto label_5588f4;
        case 0x5588f8u: goto label_5588f8;
        case 0x5588fcu: goto label_5588fc;
        case 0x558900u: goto label_558900;
        case 0x558904u: goto label_558904;
        case 0x558908u: goto label_558908;
        case 0x55890cu: goto label_55890c;
        case 0x558910u: goto label_558910;
        case 0x558914u: goto label_558914;
        case 0x558918u: goto label_558918;
        case 0x55891cu: goto label_55891c;
        case 0x558920u: goto label_558920;
        case 0x558924u: goto label_558924;
        case 0x558928u: goto label_558928;
        case 0x55892cu: goto label_55892c;
        case 0x558930u: goto label_558930;
        case 0x558934u: goto label_558934;
        case 0x558938u: goto label_558938;
        case 0x55893cu: goto label_55893c;
        case 0x558940u: goto label_558940;
        case 0x558944u: goto label_558944;
        case 0x558948u: goto label_558948;
        case 0x55894cu: goto label_55894c;
        case 0x558950u: goto label_558950;
        case 0x558954u: goto label_558954;
        case 0x558958u: goto label_558958;
        case 0x55895cu: goto label_55895c;
        case 0x558960u: goto label_558960;
        case 0x558964u: goto label_558964;
        case 0x558968u: goto label_558968;
        case 0x55896cu: goto label_55896c;
        case 0x558970u: goto label_558970;
        case 0x558974u: goto label_558974;
        case 0x558978u: goto label_558978;
        case 0x55897cu: goto label_55897c;
        case 0x558980u: goto label_558980;
        case 0x558984u: goto label_558984;
        case 0x558988u: goto label_558988;
        case 0x55898cu: goto label_55898c;
        case 0x558990u: goto label_558990;
        case 0x558994u: goto label_558994;
        case 0x558998u: goto label_558998;
        case 0x55899cu: goto label_55899c;
        case 0x5589a0u: goto label_5589a0;
        case 0x5589a4u: goto label_5589a4;
        case 0x5589a8u: goto label_5589a8;
        case 0x5589acu: goto label_5589ac;
        case 0x5589b0u: goto label_5589b0;
        case 0x5589b4u: goto label_5589b4;
        case 0x5589b8u: goto label_5589b8;
        case 0x5589bcu: goto label_5589bc;
        case 0x5589c0u: goto label_5589c0;
        case 0x5589c4u: goto label_5589c4;
        case 0x5589c8u: goto label_5589c8;
        case 0x5589ccu: goto label_5589cc;
        case 0x5589d0u: goto label_5589d0;
        case 0x5589d4u: goto label_5589d4;
        case 0x5589d8u: goto label_5589d8;
        case 0x5589dcu: goto label_5589dc;
        case 0x5589e0u: goto label_5589e0;
        case 0x5589e4u: goto label_5589e4;
        case 0x5589e8u: goto label_5589e8;
        case 0x5589ecu: goto label_5589ec;
        case 0x5589f0u: goto label_5589f0;
        case 0x5589f4u: goto label_5589f4;
        case 0x5589f8u: goto label_5589f8;
        case 0x5589fcu: goto label_5589fc;
        case 0x558a00u: goto label_558a00;
        case 0x558a04u: goto label_558a04;
        case 0x558a08u: goto label_558a08;
        case 0x558a0cu: goto label_558a0c;
        case 0x558a10u: goto label_558a10;
        case 0x558a14u: goto label_558a14;
        case 0x558a18u: goto label_558a18;
        case 0x558a1cu: goto label_558a1c;
        case 0x558a20u: goto label_558a20;
        case 0x558a24u: goto label_558a24;
        case 0x558a28u: goto label_558a28;
        case 0x558a2cu: goto label_558a2c;
        case 0x558a30u: goto label_558a30;
        case 0x558a34u: goto label_558a34;
        case 0x558a38u: goto label_558a38;
        case 0x558a3cu: goto label_558a3c;
        case 0x558a40u: goto label_558a40;
        case 0x558a44u: goto label_558a44;
        case 0x558a48u: goto label_558a48;
        case 0x558a4cu: goto label_558a4c;
        case 0x558a50u: goto label_558a50;
        case 0x558a54u: goto label_558a54;
        case 0x558a58u: goto label_558a58;
        case 0x558a5cu: goto label_558a5c;
        case 0x558a60u: goto label_558a60;
        case 0x558a64u: goto label_558a64;
        case 0x558a68u: goto label_558a68;
        case 0x558a6cu: goto label_558a6c;
        case 0x558a70u: goto label_558a70;
        case 0x558a74u: goto label_558a74;
        case 0x558a78u: goto label_558a78;
        case 0x558a7cu: goto label_558a7c;
        case 0x558a80u: goto label_558a80;
        case 0x558a84u: goto label_558a84;
        case 0x558a88u: goto label_558a88;
        case 0x558a8cu: goto label_558a8c;
        case 0x558a90u: goto label_558a90;
        case 0x558a94u: goto label_558a94;
        case 0x558a98u: goto label_558a98;
        case 0x558a9cu: goto label_558a9c;
        case 0x558aa0u: goto label_558aa0;
        case 0x558aa4u: goto label_558aa4;
        case 0x558aa8u: goto label_558aa8;
        case 0x558aacu: goto label_558aac;
        case 0x558ab0u: goto label_558ab0;
        case 0x558ab4u: goto label_558ab4;
        case 0x558ab8u: goto label_558ab8;
        case 0x558abcu: goto label_558abc;
        case 0x558ac0u: goto label_558ac0;
        case 0x558ac4u: goto label_558ac4;
        case 0x558ac8u: goto label_558ac8;
        case 0x558accu: goto label_558acc;
        case 0x558ad0u: goto label_558ad0;
        case 0x558ad4u: goto label_558ad4;
        case 0x558ad8u: goto label_558ad8;
        case 0x558adcu: goto label_558adc;
        case 0x558ae0u: goto label_558ae0;
        case 0x558ae4u: goto label_558ae4;
        case 0x558ae8u: goto label_558ae8;
        case 0x558aecu: goto label_558aec;
        case 0x558af0u: goto label_558af0;
        case 0x558af4u: goto label_558af4;
        case 0x558af8u: goto label_558af8;
        case 0x558afcu: goto label_558afc;
        case 0x558b00u: goto label_558b00;
        case 0x558b04u: goto label_558b04;
        case 0x558b08u: goto label_558b08;
        case 0x558b0cu: goto label_558b0c;
        case 0x558b10u: goto label_558b10;
        case 0x558b14u: goto label_558b14;
        case 0x558b18u: goto label_558b18;
        case 0x558b1cu: goto label_558b1c;
        case 0x558b20u: goto label_558b20;
        case 0x558b24u: goto label_558b24;
        case 0x558b28u: goto label_558b28;
        case 0x558b2cu: goto label_558b2c;
        case 0x558b30u: goto label_558b30;
        case 0x558b34u: goto label_558b34;
        case 0x558b38u: goto label_558b38;
        case 0x558b3cu: goto label_558b3c;
        case 0x558b40u: goto label_558b40;
        case 0x558b44u: goto label_558b44;
        case 0x558b48u: goto label_558b48;
        case 0x558b4cu: goto label_558b4c;
        case 0x558b50u: goto label_558b50;
        case 0x558b54u: goto label_558b54;
        case 0x558b58u: goto label_558b58;
        case 0x558b5cu: goto label_558b5c;
        case 0x558b60u: goto label_558b60;
        case 0x558b64u: goto label_558b64;
        case 0x558b68u: goto label_558b68;
        case 0x558b6cu: goto label_558b6c;
        case 0x558b70u: goto label_558b70;
        case 0x558b74u: goto label_558b74;
        case 0x558b78u: goto label_558b78;
        case 0x558b7cu: goto label_558b7c;
        case 0x558b80u: goto label_558b80;
        case 0x558b84u: goto label_558b84;
        case 0x558b88u: goto label_558b88;
        case 0x558b8cu: goto label_558b8c;
        case 0x558b90u: goto label_558b90;
        case 0x558b94u: goto label_558b94;
        case 0x558b98u: goto label_558b98;
        case 0x558b9cu: goto label_558b9c;
        case 0x558ba0u: goto label_558ba0;
        case 0x558ba4u: goto label_558ba4;
        case 0x558ba8u: goto label_558ba8;
        case 0x558bacu: goto label_558bac;
        case 0x558bb0u: goto label_558bb0;
        case 0x558bb4u: goto label_558bb4;
        case 0x558bb8u: goto label_558bb8;
        case 0x558bbcu: goto label_558bbc;
        case 0x558bc0u: goto label_558bc0;
        case 0x558bc4u: goto label_558bc4;
        case 0x558bc8u: goto label_558bc8;
        case 0x558bccu: goto label_558bcc;
        case 0x558bd0u: goto label_558bd0;
        case 0x558bd4u: goto label_558bd4;
        case 0x558bd8u: goto label_558bd8;
        case 0x558bdcu: goto label_558bdc;
        case 0x558be0u: goto label_558be0;
        case 0x558be4u: goto label_558be4;
        case 0x558be8u: goto label_558be8;
        case 0x558becu: goto label_558bec;
        case 0x558bf0u: goto label_558bf0;
        case 0x558bf4u: goto label_558bf4;
        case 0x558bf8u: goto label_558bf8;
        case 0x558bfcu: goto label_558bfc;
        case 0x558c00u: goto label_558c00;
        case 0x558c04u: goto label_558c04;
        case 0x558c08u: goto label_558c08;
        case 0x558c0cu: goto label_558c0c;
        case 0x558c10u: goto label_558c10;
        case 0x558c14u: goto label_558c14;
        case 0x558c18u: goto label_558c18;
        case 0x558c1cu: goto label_558c1c;
        case 0x558c20u: goto label_558c20;
        case 0x558c24u: goto label_558c24;
        case 0x558c28u: goto label_558c28;
        case 0x558c2cu: goto label_558c2c;
        case 0x558c30u: goto label_558c30;
        case 0x558c34u: goto label_558c34;
        case 0x558c38u: goto label_558c38;
        case 0x558c3cu: goto label_558c3c;
        case 0x558c40u: goto label_558c40;
        case 0x558c44u: goto label_558c44;
        case 0x558c48u: goto label_558c48;
        case 0x558c4cu: goto label_558c4c;
        case 0x558c50u: goto label_558c50;
        case 0x558c54u: goto label_558c54;
        case 0x558c58u: goto label_558c58;
        case 0x558c5cu: goto label_558c5c;
        case 0x558c60u: goto label_558c60;
        case 0x558c64u: goto label_558c64;
        case 0x558c68u: goto label_558c68;
        case 0x558c6cu: goto label_558c6c;
        case 0x558c70u: goto label_558c70;
        case 0x558c74u: goto label_558c74;
        case 0x558c78u: goto label_558c78;
        case 0x558c7cu: goto label_558c7c;
        case 0x558c80u: goto label_558c80;
        case 0x558c84u: goto label_558c84;
        case 0x558c88u: goto label_558c88;
        case 0x558c8cu: goto label_558c8c;
        case 0x558c90u: goto label_558c90;
        case 0x558c94u: goto label_558c94;
        case 0x558c98u: goto label_558c98;
        case 0x558c9cu: goto label_558c9c;
        case 0x558ca0u: goto label_558ca0;
        case 0x558ca4u: goto label_558ca4;
        case 0x558ca8u: goto label_558ca8;
        case 0x558cacu: goto label_558cac;
        case 0x558cb0u: goto label_558cb0;
        case 0x558cb4u: goto label_558cb4;
        case 0x558cb8u: goto label_558cb8;
        case 0x558cbcu: goto label_558cbc;
        case 0x558cc0u: goto label_558cc0;
        case 0x558cc4u: goto label_558cc4;
        case 0x558cc8u: goto label_558cc8;
        case 0x558cccu: goto label_558ccc;
        case 0x558cd0u: goto label_558cd0;
        case 0x558cd4u: goto label_558cd4;
        case 0x558cd8u: goto label_558cd8;
        case 0x558cdcu: goto label_558cdc;
        case 0x558ce0u: goto label_558ce0;
        case 0x558ce4u: goto label_558ce4;
        case 0x558ce8u: goto label_558ce8;
        case 0x558cecu: goto label_558cec;
        case 0x558cf0u: goto label_558cf0;
        case 0x558cf4u: goto label_558cf4;
        case 0x558cf8u: goto label_558cf8;
        case 0x558cfcu: goto label_558cfc;
        case 0x558d00u: goto label_558d00;
        case 0x558d04u: goto label_558d04;
        case 0x558d08u: goto label_558d08;
        case 0x558d0cu: goto label_558d0c;
        case 0x558d10u: goto label_558d10;
        case 0x558d14u: goto label_558d14;
        case 0x558d18u: goto label_558d18;
        case 0x558d1cu: goto label_558d1c;
        case 0x558d20u: goto label_558d20;
        case 0x558d24u: goto label_558d24;
        case 0x558d28u: goto label_558d28;
        case 0x558d2cu: goto label_558d2c;
        case 0x558d30u: goto label_558d30;
        case 0x558d34u: goto label_558d34;
        case 0x558d38u: goto label_558d38;
        case 0x558d3cu: goto label_558d3c;
        case 0x558d40u: goto label_558d40;
        case 0x558d44u: goto label_558d44;
        case 0x558d48u: goto label_558d48;
        case 0x558d4cu: goto label_558d4c;
        case 0x558d50u: goto label_558d50;
        case 0x558d54u: goto label_558d54;
        case 0x558d58u: goto label_558d58;
        case 0x558d5cu: goto label_558d5c;
        case 0x558d60u: goto label_558d60;
        case 0x558d64u: goto label_558d64;
        case 0x558d68u: goto label_558d68;
        case 0x558d6cu: goto label_558d6c;
        case 0x558d70u: goto label_558d70;
        case 0x558d74u: goto label_558d74;
        case 0x558d78u: goto label_558d78;
        case 0x558d7cu: goto label_558d7c;
        case 0x558d80u: goto label_558d80;
        case 0x558d84u: goto label_558d84;
        case 0x558d88u: goto label_558d88;
        case 0x558d8cu: goto label_558d8c;
        case 0x558d90u: goto label_558d90;
        case 0x558d94u: goto label_558d94;
        case 0x558d98u: goto label_558d98;
        case 0x558d9cu: goto label_558d9c;
        case 0x558da0u: goto label_558da0;
        case 0x558da4u: goto label_558da4;
        case 0x558da8u: goto label_558da8;
        case 0x558dacu: goto label_558dac;
        case 0x558db0u: goto label_558db0;
        case 0x558db4u: goto label_558db4;
        case 0x558db8u: goto label_558db8;
        case 0x558dbcu: goto label_558dbc;
        case 0x558dc0u: goto label_558dc0;
        case 0x558dc4u: goto label_558dc4;
        case 0x558dc8u: goto label_558dc8;
        case 0x558dccu: goto label_558dcc;
        case 0x558dd0u: goto label_558dd0;
        case 0x558dd4u: goto label_558dd4;
        case 0x558dd8u: goto label_558dd8;
        case 0x558ddcu: goto label_558ddc;
        case 0x558de0u: goto label_558de0;
        case 0x558de4u: goto label_558de4;
        case 0x558de8u: goto label_558de8;
        case 0x558decu: goto label_558dec;
        case 0x558df0u: goto label_558df0;
        case 0x558df4u: goto label_558df4;
        case 0x558df8u: goto label_558df8;
        case 0x558dfcu: goto label_558dfc;
        case 0x558e00u: goto label_558e00;
        case 0x558e04u: goto label_558e04;
        case 0x558e08u: goto label_558e08;
        case 0x558e0cu: goto label_558e0c;
        case 0x558e10u: goto label_558e10;
        case 0x558e14u: goto label_558e14;
        case 0x558e18u: goto label_558e18;
        case 0x558e1cu: goto label_558e1c;
        case 0x558e20u: goto label_558e20;
        case 0x558e24u: goto label_558e24;
        case 0x558e28u: goto label_558e28;
        case 0x558e2cu: goto label_558e2c;
        case 0x558e30u: goto label_558e30;
        case 0x558e34u: goto label_558e34;
        case 0x558e38u: goto label_558e38;
        case 0x558e3cu: goto label_558e3c;
        case 0x558e40u: goto label_558e40;
        case 0x558e44u: goto label_558e44;
        case 0x558e48u: goto label_558e48;
        case 0x558e4cu: goto label_558e4c;
        case 0x558e50u: goto label_558e50;
        case 0x558e54u: goto label_558e54;
        case 0x558e58u: goto label_558e58;
        case 0x558e5cu: goto label_558e5c;
        case 0x558e60u: goto label_558e60;
        case 0x558e64u: goto label_558e64;
        case 0x558e68u: goto label_558e68;
        case 0x558e6cu: goto label_558e6c;
        case 0x558e70u: goto label_558e70;
        case 0x558e74u: goto label_558e74;
        case 0x558e78u: goto label_558e78;
        case 0x558e7cu: goto label_558e7c;
        case 0x558e80u: goto label_558e80;
        case 0x558e84u: goto label_558e84;
        case 0x558e88u: goto label_558e88;
        case 0x558e8cu: goto label_558e8c;
        case 0x558e90u: goto label_558e90;
        case 0x558e94u: goto label_558e94;
        case 0x558e98u: goto label_558e98;
        case 0x558e9cu: goto label_558e9c;
        case 0x558ea0u: goto label_558ea0;
        case 0x558ea4u: goto label_558ea4;
        case 0x558ea8u: goto label_558ea8;
        case 0x558eacu: goto label_558eac;
        case 0x558eb0u: goto label_558eb0;
        case 0x558eb4u: goto label_558eb4;
        case 0x558eb8u: goto label_558eb8;
        case 0x558ebcu: goto label_558ebc;
        case 0x558ec0u: goto label_558ec0;
        case 0x558ec4u: goto label_558ec4;
        case 0x558ec8u: goto label_558ec8;
        case 0x558eccu: goto label_558ecc;
        case 0x558ed0u: goto label_558ed0;
        case 0x558ed4u: goto label_558ed4;
        case 0x558ed8u: goto label_558ed8;
        case 0x558edcu: goto label_558edc;
        case 0x558ee0u: goto label_558ee0;
        case 0x558ee4u: goto label_558ee4;
        case 0x558ee8u: goto label_558ee8;
        case 0x558eecu: goto label_558eec;
        case 0x558ef0u: goto label_558ef0;
        case 0x558ef4u: goto label_558ef4;
        case 0x558ef8u: goto label_558ef8;
        case 0x558efcu: goto label_558efc;
        case 0x558f00u: goto label_558f00;
        case 0x558f04u: goto label_558f04;
        case 0x558f08u: goto label_558f08;
        case 0x558f0cu: goto label_558f0c;
        case 0x558f10u: goto label_558f10;
        case 0x558f14u: goto label_558f14;
        case 0x558f18u: goto label_558f18;
        case 0x558f1cu: goto label_558f1c;
        case 0x558f20u: goto label_558f20;
        case 0x558f24u: goto label_558f24;
        case 0x558f28u: goto label_558f28;
        case 0x558f2cu: goto label_558f2c;
        case 0x558f30u: goto label_558f30;
        case 0x558f34u: goto label_558f34;
        case 0x558f38u: goto label_558f38;
        case 0x558f3cu: goto label_558f3c;
        case 0x558f40u: goto label_558f40;
        case 0x558f44u: goto label_558f44;
        case 0x558f48u: goto label_558f48;
        case 0x558f4cu: goto label_558f4c;
        case 0x558f50u: goto label_558f50;
        case 0x558f54u: goto label_558f54;
        case 0x558f58u: goto label_558f58;
        case 0x558f5cu: goto label_558f5c;
        case 0x558f60u: goto label_558f60;
        case 0x558f64u: goto label_558f64;
        case 0x558f68u: goto label_558f68;
        case 0x558f6cu: goto label_558f6c;
        case 0x558f70u: goto label_558f70;
        case 0x558f74u: goto label_558f74;
        case 0x558f78u: goto label_558f78;
        case 0x558f7cu: goto label_558f7c;
        case 0x558f80u: goto label_558f80;
        case 0x558f84u: goto label_558f84;
        case 0x558f88u: goto label_558f88;
        case 0x558f8cu: goto label_558f8c;
        case 0x558f90u: goto label_558f90;
        case 0x558f94u: goto label_558f94;
        case 0x558f98u: goto label_558f98;
        case 0x558f9cu: goto label_558f9c;
        case 0x558fa0u: goto label_558fa0;
        case 0x558fa4u: goto label_558fa4;
        case 0x558fa8u: goto label_558fa8;
        case 0x558facu: goto label_558fac;
        case 0x558fb0u: goto label_558fb0;
        case 0x558fb4u: goto label_558fb4;
        case 0x558fb8u: goto label_558fb8;
        case 0x558fbcu: goto label_558fbc;
        case 0x558fc0u: goto label_558fc0;
        case 0x558fc4u: goto label_558fc4;
        case 0x558fc8u: goto label_558fc8;
        case 0x558fccu: goto label_558fcc;
        case 0x558fd0u: goto label_558fd0;
        case 0x558fd4u: goto label_558fd4;
        case 0x558fd8u: goto label_558fd8;
        case 0x558fdcu: goto label_558fdc;
        case 0x558fe0u: goto label_558fe0;
        case 0x558fe4u: goto label_558fe4;
        case 0x558fe8u: goto label_558fe8;
        case 0x558fecu: goto label_558fec;
        case 0x558ff0u: goto label_558ff0;
        case 0x558ff4u: goto label_558ff4;
        case 0x558ff8u: goto label_558ff8;
        case 0x558ffcu: goto label_558ffc;
        case 0x559000u: goto label_559000;
        case 0x559004u: goto label_559004;
        case 0x559008u: goto label_559008;
        case 0x55900cu: goto label_55900c;
        case 0x559010u: goto label_559010;
        case 0x559014u: goto label_559014;
        case 0x559018u: goto label_559018;
        case 0x55901cu: goto label_55901c;
        case 0x559020u: goto label_559020;
        case 0x559024u: goto label_559024;
        case 0x559028u: goto label_559028;
        case 0x55902cu: goto label_55902c;
        case 0x559030u: goto label_559030;
        case 0x559034u: goto label_559034;
        case 0x559038u: goto label_559038;
        case 0x55903cu: goto label_55903c;
        case 0x559040u: goto label_559040;
        case 0x559044u: goto label_559044;
        case 0x559048u: goto label_559048;
        case 0x55904cu: goto label_55904c;
        case 0x559050u: goto label_559050;
        case 0x559054u: goto label_559054;
        case 0x559058u: goto label_559058;
        case 0x55905cu: goto label_55905c;
        case 0x559060u: goto label_559060;
        case 0x559064u: goto label_559064;
        case 0x559068u: goto label_559068;
        case 0x55906cu: goto label_55906c;
        case 0x559070u: goto label_559070;
        case 0x559074u: goto label_559074;
        case 0x559078u: goto label_559078;
        case 0x55907cu: goto label_55907c;
        case 0x559080u: goto label_559080;
        case 0x559084u: goto label_559084;
        case 0x559088u: goto label_559088;
        case 0x55908cu: goto label_55908c;
        case 0x559090u: goto label_559090;
        case 0x559094u: goto label_559094;
        case 0x559098u: goto label_559098;
        case 0x55909cu: goto label_55909c;
        case 0x5590a0u: goto label_5590a0;
        case 0x5590a4u: goto label_5590a4;
        case 0x5590a8u: goto label_5590a8;
        case 0x5590acu: goto label_5590ac;
        case 0x5590b0u: goto label_5590b0;
        case 0x5590b4u: goto label_5590b4;
        case 0x5590b8u: goto label_5590b8;
        case 0x5590bcu: goto label_5590bc;
        case 0x5590c0u: goto label_5590c0;
        case 0x5590c4u: goto label_5590c4;
        case 0x5590c8u: goto label_5590c8;
        case 0x5590ccu: goto label_5590cc;
        case 0x5590d0u: goto label_5590d0;
        case 0x5590d4u: goto label_5590d4;
        case 0x5590d8u: goto label_5590d8;
        case 0x5590dcu: goto label_5590dc;
        case 0x5590e0u: goto label_5590e0;
        case 0x5590e4u: goto label_5590e4;
        case 0x5590e8u: goto label_5590e8;
        case 0x5590ecu: goto label_5590ec;
        case 0x5590f0u: goto label_5590f0;
        case 0x5590f4u: goto label_5590f4;
        case 0x5590f8u: goto label_5590f8;
        case 0x5590fcu: goto label_5590fc;
        case 0x559100u: goto label_559100;
        case 0x559104u: goto label_559104;
        case 0x559108u: goto label_559108;
        case 0x55910cu: goto label_55910c;
        case 0x559110u: goto label_559110;
        case 0x559114u: goto label_559114;
        case 0x559118u: goto label_559118;
        case 0x55911cu: goto label_55911c;
        case 0x559120u: goto label_559120;
        case 0x559124u: goto label_559124;
        case 0x559128u: goto label_559128;
        case 0x55912cu: goto label_55912c;
        case 0x559130u: goto label_559130;
        case 0x559134u: goto label_559134;
        case 0x559138u: goto label_559138;
        case 0x55913cu: goto label_55913c;
        case 0x559140u: goto label_559140;
        case 0x559144u: goto label_559144;
        case 0x559148u: goto label_559148;
        case 0x55914cu: goto label_55914c;
        case 0x559150u: goto label_559150;
        case 0x559154u: goto label_559154;
        case 0x559158u: goto label_559158;
        case 0x55915cu: goto label_55915c;
        case 0x559160u: goto label_559160;
        case 0x559164u: goto label_559164;
        case 0x559168u: goto label_559168;
        case 0x55916cu: goto label_55916c;
        case 0x559170u: goto label_559170;
        case 0x559174u: goto label_559174;
        case 0x559178u: goto label_559178;
        case 0x55917cu: goto label_55917c;
        case 0x559180u: goto label_559180;
        case 0x559184u: goto label_559184;
        case 0x559188u: goto label_559188;
        case 0x55918cu: goto label_55918c;
        case 0x559190u: goto label_559190;
        case 0x559194u: goto label_559194;
        case 0x559198u: goto label_559198;
        case 0x55919cu: goto label_55919c;
        case 0x5591a0u: goto label_5591a0;
        case 0x5591a4u: goto label_5591a4;
        case 0x5591a8u: goto label_5591a8;
        case 0x5591acu: goto label_5591ac;
        case 0x5591b0u: goto label_5591b0;
        case 0x5591b4u: goto label_5591b4;
        case 0x5591b8u: goto label_5591b8;
        case 0x5591bcu: goto label_5591bc;
        case 0x5591c0u: goto label_5591c0;
        case 0x5591c4u: goto label_5591c4;
        case 0x5591c8u: goto label_5591c8;
        case 0x5591ccu: goto label_5591cc;
        case 0x5591d0u: goto label_5591d0;
        case 0x5591d4u: goto label_5591d4;
        case 0x5591d8u: goto label_5591d8;
        case 0x5591dcu: goto label_5591dc;
        case 0x5591e0u: goto label_5591e0;
        case 0x5591e4u: goto label_5591e4;
        case 0x5591e8u: goto label_5591e8;
        case 0x5591ecu: goto label_5591ec;
        case 0x5591f0u: goto label_5591f0;
        case 0x5591f4u: goto label_5591f4;
        case 0x5591f8u: goto label_5591f8;
        case 0x5591fcu: goto label_5591fc;
        case 0x559200u: goto label_559200;
        case 0x559204u: goto label_559204;
        case 0x559208u: goto label_559208;
        case 0x55920cu: goto label_55920c;
        case 0x559210u: goto label_559210;
        case 0x559214u: goto label_559214;
        case 0x559218u: goto label_559218;
        case 0x55921cu: goto label_55921c;
        case 0x559220u: goto label_559220;
        case 0x559224u: goto label_559224;
        case 0x559228u: goto label_559228;
        case 0x55922cu: goto label_55922c;
        case 0x559230u: goto label_559230;
        case 0x559234u: goto label_559234;
        case 0x559238u: goto label_559238;
        case 0x55923cu: goto label_55923c;
        case 0x559240u: goto label_559240;
        case 0x559244u: goto label_559244;
        case 0x559248u: goto label_559248;
        case 0x55924cu: goto label_55924c;
        case 0x559250u: goto label_559250;
        case 0x559254u: goto label_559254;
        case 0x559258u: goto label_559258;
        case 0x55925cu: goto label_55925c;
        case 0x559260u: goto label_559260;
        case 0x559264u: goto label_559264;
        case 0x559268u: goto label_559268;
        case 0x55926cu: goto label_55926c;
        case 0x559270u: goto label_559270;
        case 0x559274u: goto label_559274;
        case 0x559278u: goto label_559278;
        case 0x55927cu: goto label_55927c;
        case 0x559280u: goto label_559280;
        case 0x559284u: goto label_559284;
        case 0x559288u: goto label_559288;
        case 0x55928cu: goto label_55928c;
        case 0x559290u: goto label_559290;
        case 0x559294u: goto label_559294;
        case 0x559298u: goto label_559298;
        case 0x55929cu: goto label_55929c;
        case 0x5592a0u: goto label_5592a0;
        case 0x5592a4u: goto label_5592a4;
        case 0x5592a8u: goto label_5592a8;
        case 0x5592acu: goto label_5592ac;
        case 0x5592b0u: goto label_5592b0;
        case 0x5592b4u: goto label_5592b4;
        case 0x5592b8u: goto label_5592b8;
        case 0x5592bcu: goto label_5592bc;
        case 0x5592c0u: goto label_5592c0;
        case 0x5592c4u: goto label_5592c4;
        case 0x5592c8u: goto label_5592c8;
        case 0x5592ccu: goto label_5592cc;
        case 0x5592d0u: goto label_5592d0;
        case 0x5592d4u: goto label_5592d4;
        case 0x5592d8u: goto label_5592d8;
        case 0x5592dcu: goto label_5592dc;
        case 0x5592e0u: goto label_5592e0;
        case 0x5592e4u: goto label_5592e4;
        case 0x5592e8u: goto label_5592e8;
        case 0x5592ecu: goto label_5592ec;
        case 0x5592f0u: goto label_5592f0;
        case 0x5592f4u: goto label_5592f4;
        case 0x5592f8u: goto label_5592f8;
        case 0x5592fcu: goto label_5592fc;
        case 0x559300u: goto label_559300;
        case 0x559304u: goto label_559304;
        case 0x559308u: goto label_559308;
        case 0x55930cu: goto label_55930c;
        case 0x559310u: goto label_559310;
        case 0x559314u: goto label_559314;
        case 0x559318u: goto label_559318;
        case 0x55931cu: goto label_55931c;
        case 0x559320u: goto label_559320;
        case 0x559324u: goto label_559324;
        case 0x559328u: goto label_559328;
        case 0x55932cu: goto label_55932c;
        case 0x559330u: goto label_559330;
        case 0x559334u: goto label_559334;
        case 0x559338u: goto label_559338;
        case 0x55933cu: goto label_55933c;
        case 0x559340u: goto label_559340;
        case 0x559344u: goto label_559344;
        case 0x559348u: goto label_559348;
        case 0x55934cu: goto label_55934c;
        case 0x559350u: goto label_559350;
        case 0x559354u: goto label_559354;
        case 0x559358u: goto label_559358;
        case 0x55935cu: goto label_55935c;
        case 0x559360u: goto label_559360;
        case 0x559364u: goto label_559364;
        case 0x559368u: goto label_559368;
        case 0x55936cu: goto label_55936c;
        case 0x559370u: goto label_559370;
        case 0x559374u: goto label_559374;
        case 0x559378u: goto label_559378;
        case 0x55937cu: goto label_55937c;
        case 0x559380u: goto label_559380;
        case 0x559384u: goto label_559384;
        case 0x559388u: goto label_559388;
        case 0x55938cu: goto label_55938c;
        case 0x559390u: goto label_559390;
        case 0x559394u: goto label_559394;
        case 0x559398u: goto label_559398;
        case 0x55939cu: goto label_55939c;
        case 0x5593a0u: goto label_5593a0;
        case 0x5593a4u: goto label_5593a4;
        case 0x5593a8u: goto label_5593a8;
        case 0x5593acu: goto label_5593ac;
        case 0x5593b0u: goto label_5593b0;
        case 0x5593b4u: goto label_5593b4;
        case 0x5593b8u: goto label_5593b8;
        case 0x5593bcu: goto label_5593bc;
        case 0x5593c0u: goto label_5593c0;
        case 0x5593c4u: goto label_5593c4;
        case 0x5593c8u: goto label_5593c8;
        case 0x5593ccu: goto label_5593cc;
        case 0x5593d0u: goto label_5593d0;
        case 0x5593d4u: goto label_5593d4;
        case 0x5593d8u: goto label_5593d8;
        case 0x5593dcu: goto label_5593dc;
        case 0x5593e0u: goto label_5593e0;
        case 0x5593e4u: goto label_5593e4;
        case 0x5593e8u: goto label_5593e8;
        case 0x5593ecu: goto label_5593ec;
        case 0x5593f0u: goto label_5593f0;
        case 0x5593f4u: goto label_5593f4;
        case 0x5593f8u: goto label_5593f8;
        case 0x5593fcu: goto label_5593fc;
        case 0x559400u: goto label_559400;
        case 0x559404u: goto label_559404;
        case 0x559408u: goto label_559408;
        case 0x55940cu: goto label_55940c;
        case 0x559410u: goto label_559410;
        case 0x559414u: goto label_559414;
        case 0x559418u: goto label_559418;
        case 0x55941cu: goto label_55941c;
        case 0x559420u: goto label_559420;
        case 0x559424u: goto label_559424;
        case 0x559428u: goto label_559428;
        case 0x55942cu: goto label_55942c;
        case 0x559430u: goto label_559430;
        case 0x559434u: goto label_559434;
        case 0x559438u: goto label_559438;
        case 0x55943cu: goto label_55943c;
        case 0x559440u: goto label_559440;
        case 0x559444u: goto label_559444;
        case 0x559448u: goto label_559448;
        case 0x55944cu: goto label_55944c;
        case 0x559450u: goto label_559450;
        case 0x559454u: goto label_559454;
        case 0x559458u: goto label_559458;
        case 0x55945cu: goto label_55945c;
        case 0x559460u: goto label_559460;
        case 0x559464u: goto label_559464;
        case 0x559468u: goto label_559468;
        case 0x55946cu: goto label_55946c;
        case 0x559470u: goto label_559470;
        case 0x559474u: goto label_559474;
        case 0x559478u: goto label_559478;
        case 0x55947cu: goto label_55947c;
        case 0x559480u: goto label_559480;
        case 0x559484u: goto label_559484;
        case 0x559488u: goto label_559488;
        case 0x55948cu: goto label_55948c;
        case 0x559490u: goto label_559490;
        case 0x559494u: goto label_559494;
        case 0x559498u: goto label_559498;
        case 0x55949cu: goto label_55949c;
        case 0x5594a0u: goto label_5594a0;
        case 0x5594a4u: goto label_5594a4;
        case 0x5594a8u: goto label_5594a8;
        case 0x5594acu: goto label_5594ac;
        case 0x5594b0u: goto label_5594b0;
        case 0x5594b4u: goto label_5594b4;
        case 0x5594b8u: goto label_5594b8;
        case 0x5594bcu: goto label_5594bc;
        case 0x5594c0u: goto label_5594c0;
        case 0x5594c4u: goto label_5594c4;
        case 0x5594c8u: goto label_5594c8;
        case 0x5594ccu: goto label_5594cc;
        case 0x5594d0u: goto label_5594d0;
        case 0x5594d4u: goto label_5594d4;
        case 0x5594d8u: goto label_5594d8;
        case 0x5594dcu: goto label_5594dc;
        case 0x5594e0u: goto label_5594e0;
        case 0x5594e4u: goto label_5594e4;
        case 0x5594e8u: goto label_5594e8;
        case 0x5594ecu: goto label_5594ec;
        case 0x5594f0u: goto label_5594f0;
        case 0x5594f4u: goto label_5594f4;
        case 0x5594f8u: goto label_5594f8;
        case 0x5594fcu: goto label_5594fc;
        case 0x559500u: goto label_559500;
        case 0x559504u: goto label_559504;
        case 0x559508u: goto label_559508;
        case 0x55950cu: goto label_55950c;
        case 0x559510u: goto label_559510;
        case 0x559514u: goto label_559514;
        case 0x559518u: goto label_559518;
        case 0x55951cu: goto label_55951c;
        case 0x559520u: goto label_559520;
        case 0x559524u: goto label_559524;
        case 0x559528u: goto label_559528;
        case 0x55952cu: goto label_55952c;
        case 0x559530u: goto label_559530;
        case 0x559534u: goto label_559534;
        case 0x559538u: goto label_559538;
        case 0x55953cu: goto label_55953c;
        case 0x559540u: goto label_559540;
        case 0x559544u: goto label_559544;
        case 0x559548u: goto label_559548;
        case 0x55954cu: goto label_55954c;
        case 0x559550u: goto label_559550;
        case 0x559554u: goto label_559554;
        case 0x559558u: goto label_559558;
        case 0x55955cu: goto label_55955c;
        case 0x559560u: goto label_559560;
        case 0x559564u: goto label_559564;
        case 0x559568u: goto label_559568;
        case 0x55956cu: goto label_55956c;
        case 0x559570u: goto label_559570;
        case 0x559574u: goto label_559574;
        case 0x559578u: goto label_559578;
        case 0x55957cu: goto label_55957c;
        case 0x559580u: goto label_559580;
        case 0x559584u: goto label_559584;
        case 0x559588u: goto label_559588;
        case 0x55958cu: goto label_55958c;
        case 0x559590u: goto label_559590;
        case 0x559594u: goto label_559594;
        case 0x559598u: goto label_559598;
        case 0x55959cu: goto label_55959c;
        case 0x5595a0u: goto label_5595a0;
        case 0x5595a4u: goto label_5595a4;
        case 0x5595a8u: goto label_5595a8;
        case 0x5595acu: goto label_5595ac;
        case 0x5595b0u: goto label_5595b0;
        case 0x5595b4u: goto label_5595b4;
        case 0x5595b8u: goto label_5595b8;
        case 0x5595bcu: goto label_5595bc;
        case 0x5595c0u: goto label_5595c0;
        case 0x5595c4u: goto label_5595c4;
        case 0x5595c8u: goto label_5595c8;
        case 0x5595ccu: goto label_5595cc;
        case 0x5595d0u: goto label_5595d0;
        case 0x5595d4u: goto label_5595d4;
        case 0x5595d8u: goto label_5595d8;
        case 0x5595dcu: goto label_5595dc;
        case 0x5595e0u: goto label_5595e0;
        case 0x5595e4u: goto label_5595e4;
        case 0x5595e8u: goto label_5595e8;
        case 0x5595ecu: goto label_5595ec;
        case 0x5595f0u: goto label_5595f0;
        case 0x5595f4u: goto label_5595f4;
        case 0x5595f8u: goto label_5595f8;
        case 0x5595fcu: goto label_5595fc;
        case 0x559600u: goto label_559600;
        case 0x559604u: goto label_559604;
        case 0x559608u: goto label_559608;
        case 0x55960cu: goto label_55960c;
        case 0x559610u: goto label_559610;
        case 0x559614u: goto label_559614;
        case 0x559618u: goto label_559618;
        case 0x55961cu: goto label_55961c;
        case 0x559620u: goto label_559620;
        case 0x559624u: goto label_559624;
        case 0x559628u: goto label_559628;
        case 0x55962cu: goto label_55962c;
        case 0x559630u: goto label_559630;
        case 0x559634u: goto label_559634;
        case 0x559638u: goto label_559638;
        case 0x55963cu: goto label_55963c;
        case 0x559640u: goto label_559640;
        case 0x559644u: goto label_559644;
        case 0x559648u: goto label_559648;
        case 0x55964cu: goto label_55964c;
        case 0x559650u: goto label_559650;
        case 0x559654u: goto label_559654;
        case 0x559658u: goto label_559658;
        case 0x55965cu: goto label_55965c;
        case 0x559660u: goto label_559660;
        case 0x559664u: goto label_559664;
        case 0x559668u: goto label_559668;
        case 0x55966cu: goto label_55966c;
        case 0x559670u: goto label_559670;
        case 0x559674u: goto label_559674;
        case 0x559678u: goto label_559678;
        case 0x55967cu: goto label_55967c;
        case 0x559680u: goto label_559680;
        case 0x559684u: goto label_559684;
        case 0x559688u: goto label_559688;
        case 0x55968cu: goto label_55968c;
        case 0x559690u: goto label_559690;
        case 0x559694u: goto label_559694;
        case 0x559698u: goto label_559698;
        case 0x55969cu: goto label_55969c;
        case 0x5596a0u: goto label_5596a0;
        case 0x5596a4u: goto label_5596a4;
        case 0x5596a8u: goto label_5596a8;
        case 0x5596acu: goto label_5596ac;
        case 0x5596b0u: goto label_5596b0;
        case 0x5596b4u: goto label_5596b4;
        case 0x5596b8u: goto label_5596b8;
        case 0x5596bcu: goto label_5596bc;
        case 0x5596c0u: goto label_5596c0;
        case 0x5596c4u: goto label_5596c4;
        case 0x5596c8u: goto label_5596c8;
        case 0x5596ccu: goto label_5596cc;
        case 0x5596d0u: goto label_5596d0;
        case 0x5596d4u: goto label_5596d4;
        case 0x5596d8u: goto label_5596d8;
        case 0x5596dcu: goto label_5596dc;
        case 0x5596e0u: goto label_5596e0;
        case 0x5596e4u: goto label_5596e4;
        case 0x5596e8u: goto label_5596e8;
        case 0x5596ecu: goto label_5596ec;
        case 0x5596f0u: goto label_5596f0;
        case 0x5596f4u: goto label_5596f4;
        case 0x5596f8u: goto label_5596f8;
        case 0x5596fcu: goto label_5596fc;
        case 0x559700u: goto label_559700;
        case 0x559704u: goto label_559704;
        case 0x559708u: goto label_559708;
        case 0x55970cu: goto label_55970c;
        case 0x559710u: goto label_559710;
        case 0x559714u: goto label_559714;
        case 0x559718u: goto label_559718;
        case 0x55971cu: goto label_55971c;
        case 0x559720u: goto label_559720;
        case 0x559724u: goto label_559724;
        case 0x559728u: goto label_559728;
        case 0x55972cu: goto label_55972c;
        case 0x559730u: goto label_559730;
        case 0x559734u: goto label_559734;
        case 0x559738u: goto label_559738;
        case 0x55973cu: goto label_55973c;
        case 0x559740u: goto label_559740;
        case 0x559744u: goto label_559744;
        case 0x559748u: goto label_559748;
        case 0x55974cu: goto label_55974c;
        case 0x559750u: goto label_559750;
        case 0x559754u: goto label_559754;
        case 0x559758u: goto label_559758;
        case 0x55975cu: goto label_55975c;
        case 0x559760u: goto label_559760;
        case 0x559764u: goto label_559764;
        case 0x559768u: goto label_559768;
        case 0x55976cu: goto label_55976c;
        case 0x559770u: goto label_559770;
        case 0x559774u: goto label_559774;
        case 0x559778u: goto label_559778;
        case 0x55977cu: goto label_55977c;
        case 0x559780u: goto label_559780;
        case 0x559784u: goto label_559784;
        case 0x559788u: goto label_559788;
        case 0x55978cu: goto label_55978c;
        case 0x559790u: goto label_559790;
        case 0x559794u: goto label_559794;
        case 0x559798u: goto label_559798;
        case 0x55979cu: goto label_55979c;
        case 0x5597a0u: goto label_5597a0;
        case 0x5597a4u: goto label_5597a4;
        case 0x5597a8u: goto label_5597a8;
        case 0x5597acu: goto label_5597ac;
        case 0x5597b0u: goto label_5597b0;
        case 0x5597b4u: goto label_5597b4;
        case 0x5597b8u: goto label_5597b8;
        case 0x5597bcu: goto label_5597bc;
        case 0x5597c0u: goto label_5597c0;
        case 0x5597c4u: goto label_5597c4;
        case 0x5597c8u: goto label_5597c8;
        case 0x5597ccu: goto label_5597cc;
        case 0x5597d0u: goto label_5597d0;
        case 0x5597d4u: goto label_5597d4;
        case 0x5597d8u: goto label_5597d8;
        case 0x5597dcu: goto label_5597dc;
        case 0x5597e0u: goto label_5597e0;
        case 0x5597e4u: goto label_5597e4;
        case 0x5597e8u: goto label_5597e8;
        case 0x5597ecu: goto label_5597ec;
        case 0x5597f0u: goto label_5597f0;
        case 0x5597f4u: goto label_5597f4;
        case 0x5597f8u: goto label_5597f8;
        case 0x5597fcu: goto label_5597fc;
        case 0x559800u: goto label_559800;
        case 0x559804u: goto label_559804;
        case 0x559808u: goto label_559808;
        case 0x55980cu: goto label_55980c;
        case 0x559810u: goto label_559810;
        case 0x559814u: goto label_559814;
        case 0x559818u: goto label_559818;
        case 0x55981cu: goto label_55981c;
        case 0x559820u: goto label_559820;
        case 0x559824u: goto label_559824;
        case 0x559828u: goto label_559828;
        case 0x55982cu: goto label_55982c;
        case 0x559830u: goto label_559830;
        case 0x559834u: goto label_559834;
        case 0x559838u: goto label_559838;
        case 0x55983cu: goto label_55983c;
        case 0x559840u: goto label_559840;
        case 0x559844u: goto label_559844;
        case 0x559848u: goto label_559848;
        case 0x55984cu: goto label_55984c;
        case 0x559850u: goto label_559850;
        case 0x559854u: goto label_559854;
        case 0x559858u: goto label_559858;
        case 0x55985cu: goto label_55985c;
        case 0x559860u: goto label_559860;
        case 0x559864u: goto label_559864;
        case 0x559868u: goto label_559868;
        case 0x55986cu: goto label_55986c;
        case 0x559870u: goto label_559870;
        case 0x559874u: goto label_559874;
        case 0x559878u: goto label_559878;
        case 0x55987cu: goto label_55987c;
        case 0x559880u: goto label_559880;
        case 0x559884u: goto label_559884;
        case 0x559888u: goto label_559888;
        case 0x55988cu: goto label_55988c;
        case 0x559890u: goto label_559890;
        case 0x559894u: goto label_559894;
        case 0x559898u: goto label_559898;
        case 0x55989cu: goto label_55989c;
        case 0x5598a0u: goto label_5598a0;
        case 0x5598a4u: goto label_5598a4;
        case 0x5598a8u: goto label_5598a8;
        case 0x5598acu: goto label_5598ac;
        case 0x5598b0u: goto label_5598b0;
        case 0x5598b4u: goto label_5598b4;
        case 0x5598b8u: goto label_5598b8;
        case 0x5598bcu: goto label_5598bc;
        case 0x5598c0u: goto label_5598c0;
        case 0x5598c4u: goto label_5598c4;
        case 0x5598c8u: goto label_5598c8;
        case 0x5598ccu: goto label_5598cc;
        case 0x5598d0u: goto label_5598d0;
        case 0x5598d4u: goto label_5598d4;
        case 0x5598d8u: goto label_5598d8;
        case 0x5598dcu: goto label_5598dc;
        case 0x5598e0u: goto label_5598e0;
        case 0x5598e4u: goto label_5598e4;
        case 0x5598e8u: goto label_5598e8;
        case 0x5598ecu: goto label_5598ec;
        case 0x5598f0u: goto label_5598f0;
        case 0x5598f4u: goto label_5598f4;
        case 0x5598f8u: goto label_5598f8;
        case 0x5598fcu: goto label_5598fc;
        case 0x559900u: goto label_559900;
        case 0x559904u: goto label_559904;
        case 0x559908u: goto label_559908;
        case 0x55990cu: goto label_55990c;
        case 0x559910u: goto label_559910;
        case 0x559914u: goto label_559914;
        case 0x559918u: goto label_559918;
        case 0x55991cu: goto label_55991c;
        case 0x559920u: goto label_559920;
        case 0x559924u: goto label_559924;
        case 0x559928u: goto label_559928;
        case 0x55992cu: goto label_55992c;
        case 0x559930u: goto label_559930;
        case 0x559934u: goto label_559934;
        case 0x559938u: goto label_559938;
        case 0x55993cu: goto label_55993c;
        case 0x559940u: goto label_559940;
        case 0x559944u: goto label_559944;
        case 0x559948u: goto label_559948;
        case 0x55994cu: goto label_55994c;
        case 0x559950u: goto label_559950;
        case 0x559954u: goto label_559954;
        case 0x559958u: goto label_559958;
        case 0x55995cu: goto label_55995c;
        default: break;
    }

    ctx->pc = 0x558430u;

label_558430:
    // 0x558430: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x558430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_558434:
    // 0x558434: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x558434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_558438:
    // 0x558438: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x558438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_55843c:
    // 0x55843c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x55843cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_558440:
    // 0x558440: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x558440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_558444:
    // 0x558444: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x558444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_558448:
    // 0x558448: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x558448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_55844c:
    // 0x55844c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x55844cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_558450:
    // 0x558450: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x558450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_558454:
    // 0x558454: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x558454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_558458:
    // 0x558458: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x558458u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55845c:
    // 0x55845c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x55845cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_558460:
    // 0x558460: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x558460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_558464:
    // 0x558464: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x558464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_558468:
    // 0x558468: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x558468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_55846c:
    // 0x55846c: 0xc440dc70  lwc1        $f0, -0x2390($v0)
    ctx->pc = 0x55846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558470:
    // 0x558470: 0x8c740e68  lw          $s4, 0xE68($v1)
    ctx->pc = 0x558470u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_558474:
    // 0x558474: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x558474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_558478:
    // 0x558478: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x558478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_55847c:
    // 0x55847c: 0xc441dc74  lwc1        $f1, -0x238C($v0)
    ctx->pc = 0x55847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_558480:
    // 0x558480: 0xc462dc78  lwc1        $f2, -0x2388($v1)
    ctx->pc = 0x558480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_558484:
    // 0x558484: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x558484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_558488:
    // 0x558488: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x558488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_55848c:
    // 0x55848c: 0xc440dc80  lwc1        $f0, -0x2380($v0)
    ctx->pc = 0x55848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558490:
    // 0x558490: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x558490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_558494:
    // 0x558494: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x558494u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_558498:
    // 0x558498: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x558498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_55849c:
    // 0x55849c: 0xc441dc84  lwc1        $f1, -0x237C($v0)
    ctx->pc = 0x55849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5584a0:
    // 0x5584a0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x5584a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_5584a4:
    // 0x5584a4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5584a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5584a8:
    // 0x5584a8: 0xc440dc88  lwc1        $f0, -0x2378($v0)
    ctx->pc = 0x5584a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5584ac:
    // 0x5584ac: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x5584acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_5584b0:
    // 0x5584b0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x5584b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_5584b4:
    // 0x5584b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5584b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5584b8:
    // 0x5584b8: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x5584b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5584bc:
    // 0x5584bc: 0x8c8600cc  lw          $a2, 0xCC($a0)
    ctx->pc = 0x5584bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_5584c0:
    // 0x5584c0: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x5584c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5584c4:
    // 0x5584c4: 0x8c5389e0  lw          $s3, -0x7620($v0)
    ctx->pc = 0x5584c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5584c8:
    // 0x5584c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x5584c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_5584cc:
    // 0x5584cc: 0x8cc30968  lw          $v1, 0x968($a2)
    ctx->pc = 0x5584ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
label_5584d0:
    // 0x5584d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x5584d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_5584d4:
    // 0x5584d4: 0x8cde0cc4  lw          $fp, 0xCC4($a2)
    ctx->pc = 0x5584d4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3268)));
label_5584d8:
    // 0x5584d8: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x5584d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_5584dc:
    // 0x5584dc: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x5584dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_5584e0:
    // 0x5584e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x5584e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_5584e4:
    // 0x5584e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5584e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5584e8:
    // 0x5584e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5584e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5584ec:
    // 0x5584ec: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x5584ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_5584f0:
    // 0x5584f0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x5584f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_5584f4:
    // 0x5584f4: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x5584f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_5584f8:
    // 0x5584f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x5584f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_5584fc:
    // 0x5584fc: 0x24c20071  addiu       $v0, $a2, 0x71
    ctx->pc = 0x5584fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 113));
label_558500:
    // 0x558500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x558500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_558504:
    // 0x558504: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x558504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_558508:
    // 0x558508: 0x24c200e1  addiu       $v0, $a2, 0xE1
    ctx->pc = 0x558508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 225));
label_55850c:
    // 0x55850c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55850cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_558510:
    // 0x558510: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x558510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_558514:
    // 0x558514: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x558514u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_558518:
    // 0x558518: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x558518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_55851c:
    // 0x55851c: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x55851cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_558520:
    // 0x558520: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x558520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_558524:
    // 0x558524: 0xc0506ac  jal         func_141AB0
label_558528:
    if (ctx->pc == 0x558528u) {
        ctx->pc = 0x558528u;
            // 0x558528: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x55852Cu;
        goto label_55852c;
    }
    ctx->pc = 0x558524u;
    SET_GPR_U32(ctx, 31, 0x55852Cu);
    ctx->pc = 0x558528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558524u;
            // 0x558528: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55852Cu; }
        if (ctx->pc != 0x55852Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55852Cu; }
        if (ctx->pc != 0x55852Cu) { return; }
    }
    ctx->pc = 0x55852Cu;
label_55852c:
    // 0x55852c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x55852cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_558530:
    // 0x558530: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x558530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_558534:
    // 0x558534: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x558534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_558538:
    // 0x558538: 0x320f809  jalr        $t9
label_55853c:
    if (ctx->pc == 0x55853Cu) {
        ctx->pc = 0x55853Cu;
            // 0x55853c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x558540u;
        goto label_558540;
    }
    ctx->pc = 0x558538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x558540u);
        ctx->pc = 0x55853Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x558538u;
            // 0x55853c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x558540u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x558540u; }
            if (ctx->pc != 0x558540u) { return; }
        }
        }
    }
    ctx->pc = 0x558540u;
label_558540:
    // 0x558540: 0x8ea600a8  lw          $a2, 0xA8($s5)
    ctx->pc = 0x558540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
label_558544:
    // 0x558544: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x558544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_558548:
    // 0x558548: 0x8444f150  lh          $a0, -0xEB0($v0)
    ctx->pc = 0x558548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963536)));
label_55854c:
    // 0x55854c: 0x8ea700a4  lw          $a3, 0xA4($s5)
    ctx->pc = 0x55854cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
label_558550:
    // 0x558550: 0xd02823  subu        $a1, $a2, $s0
    ctx->pc = 0x558550u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_558554:
    // 0x558554: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x558554u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_558558:
    // 0x558558: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x558558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55855c:
    // 0x55855c: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x55855cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_558560:
    // 0x558560: 0xf14021  addu        $t0, $a3, $s1
    ctx->pc = 0x558560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_558564:
    // 0x558564: 0x8443f152  lh          $v1, -0xEAE($v0)
    ctx->pc = 0x558564u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963538)));
label_558568:
    // 0x558568: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x558568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_55856c:
    // 0x55856c: 0x24a5f160  addiu       $a1, $a1, -0xEA0
    ctx->pc = 0x55856cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963552));
label_558570:
    // 0x558570: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x558570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_558574:
    // 0x558574: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x558574u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558578:
    // 0x558578: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x558578u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55857c:
    // 0x55857c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_558580:
    // 0x558580: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x558580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_558584:
    // 0x558584: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x558584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_558588:
    // 0x558588: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x558588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_55858c:
    // 0x55858c: 0xf13023  subu        $a2, $a3, $s1
    ctx->pc = 0x55858cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_558590:
    // 0x558590: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x558590u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_558594:
    // 0x558594: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x558594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558598:
    // 0x558598: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x558598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_55859c:
    // 0x55859c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x55859cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5585a0:
    // 0x5585a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5585a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5585a4:
    // 0x5585a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5585a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5585a8:
    // 0x5585a8: 0x46801320  cvt.s.w     $f12, $f2
    ctx->pc = 0x5585a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_5585ac:
    // 0x5585ac: 0x46800be0  cvt.s.w     $f15, $f1
    ctx->pc = 0x5585acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_5585b0:
    // 0x5585b0: 0xc0bc284  jal         func_2F0A10
label_5585b4:
    if (ctx->pc == 0x5585B4u) {
        ctx->pc = 0x5585B4u;
            // 0x5585b4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5585B8u;
        goto label_5585b8;
    }
    ctx->pc = 0x5585B0u;
    SET_GPR_U32(ctx, 31, 0x5585B8u);
    ctx->pc = 0x5585B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5585B0u;
            // 0x5585b4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5585B8u; }
        if (ctx->pc != 0x5585B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5585B8u; }
        if (ctx->pc != 0x5585B8u) { return; }
    }
    ctx->pc = 0x5585B8u;
label_5585b8:
    // 0x5585b8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x5585b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_5585bc:
    // 0x5585bc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5585bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5585c0:
    // 0x5585c0: 0x320f809  jalr        $t9
label_5585c4:
    if (ctx->pc == 0x5585C4u) {
        ctx->pc = 0x5585C4u;
            // 0x5585c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5585C8u;
        goto label_5585c8;
    }
    ctx->pc = 0x5585C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5585C8u);
        ctx->pc = 0x5585C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5585C0u;
            // 0x5585c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5585C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5585C8u; }
            if (ctx->pc != 0x5585C8u) { return; }
        }
        }
    }
    ctx->pc = 0x5585C8u;
label_5585c8:
    // 0x5585c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5585c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5585cc:
    // 0x5585cc: 0x8c4460b0  lw          $a0, 0x60B0($v0)
    ctx->pc = 0x5585ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24752)));
label_5585d0:
    // 0x5585d0: 0xc0506ac  jal         func_141AB0
label_5585d4:
    if (ctx->pc == 0x5585D4u) {
        ctx->pc = 0x5585D4u;
            // 0x5585d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5585D8u;
        goto label_5585d8;
    }
    ctx->pc = 0x5585D0u;
    SET_GPR_U32(ctx, 31, 0x5585D8u);
    ctx->pc = 0x5585D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5585D0u;
            // 0x5585d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5585D8u; }
        if (ctx->pc != 0x5585D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5585D8u; }
        if (ctx->pc != 0x5585D8u) { return; }
    }
    ctx->pc = 0x5585D8u;
label_5585d8:
    // 0x5585d8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x5585d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_5585dc:
    // 0x5585dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5585dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5585e0:
    // 0x5585e0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5585e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5585e4:
    // 0x5585e4: 0x320f809  jalr        $t9
label_5585e8:
    if (ctx->pc == 0x5585E8u) {
        ctx->pc = 0x5585E8u;
            // 0x5585e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5585ECu;
        goto label_5585ec;
    }
    ctx->pc = 0x5585E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5585ECu);
        ctx->pc = 0x5585E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5585E4u;
            // 0x5585e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5585ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5585ECu; }
            if (ctx->pc != 0x5585ECu) { return; }
        }
        }
    }
    ctx->pc = 0x5585ECu;
label_5585ec:
    // 0x5585ec: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5585ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5585f0:
    // 0x5585f0: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x5585f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_5585f4:
    // 0x5585f4: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x5585f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
label_5585f8:
    // 0x5585f8: 0x2652f154  addiu       $s2, $s2, -0xEAC
    ctx->pc = 0x5585f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963540));
label_5585fc:
    // 0x5585fc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x5585fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558600:
    // 0x558600: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x558600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_558604:
    // 0x558604: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x558604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_558608:
    // 0x558608: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x558608u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_55860c:
    // 0x55860c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x55860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_558610:
    // 0x558610: 0x8ea2008c  lw          $v0, 0x8C($s5)
    ctx->pc = 0x558610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_558614:
    // 0x558614: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x558614u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_558618:
    // 0x558618: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x558618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55861c:
    // 0x55861c: 0x8eaa0088  lw          $t2, 0x88($s5)
    ctx->pc = 0x55861cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_558620:
    // 0x558620: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x558620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_558624:
    // 0x558624: 0x2450ff6a  addiu       $s0, $v0, -0x96
    ctx->pc = 0x558624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
label_558628:
    // 0x558628: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x558628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_55862c:
    // 0x55862c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x55862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_558630:
    // 0x558630: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x558630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558634:
    // 0x558634: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x558634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_558638:
    // 0x558638: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x558638u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55863c:
    // 0x55863c: 0x0  nop
    ctx->pc = 0x55863cu;
    // NOP
label_558640:
    // 0x558640: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x558640u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_558644:
    // 0x558644: 0x2114023  subu        $t0, $s0, $s1
    ctx->pc = 0x558644u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_558648:
    // 0x558648: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x558648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55864c:
    // 0x55864c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55864cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_558650:
    // 0x558650: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x558650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_558654:
    // 0x558654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x558654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558658:
    // 0x558658: 0x149b823  subu        $s7, $t2, $t1
    ctx->pc = 0x558658u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_55865c:
    // 0x55865c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55865cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_558660:
    // 0x558660: 0x149b021  addu        $s6, $t2, $t1
    ctx->pc = 0x558660u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_558664:
    // 0x558664: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x558664u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558668:
    // 0x558668: 0x0  nop
    ctx->pc = 0x558668u;
    // NOP
label_55866c:
    // 0x55866c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x55866cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_558670:
    // 0x558670: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x558670u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558674:
    // 0x558674: 0x0  nop
    ctx->pc = 0x558674u;
    // NOP
label_558678:
    // 0x558678: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x558678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_55867c:
    // 0x55867c: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x55867cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_558680:
    // 0x558680: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x558680u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558684:
    // 0x558684: 0x0  nop
    ctx->pc = 0x558684u;
    // NOP
label_558688:
    // 0x558688: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x558688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_55868c:
    // 0x55868c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x55868cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_558690:
    // 0x558690: 0xc0bc284  jal         func_2F0A10
label_558694:
    if (ctx->pc == 0x558694u) {
        ctx->pc = 0x558694u;
            // 0x558694: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x558698u;
        goto label_558698;
    }
    ctx->pc = 0x558690u;
    SET_GPR_U32(ctx, 31, 0x558698u);
    ctx->pc = 0x558694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558690u;
            // 0x558694: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558698u; }
        if (ctx->pc != 0x558698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558698u; }
        if (ctx->pc != 0x558698u) { return; }
    }
    ctx->pc = 0x558698u;
label_558698:
    // 0x558698: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x558698u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55869c:
    // 0x55869c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x55869cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5586a0:
    // 0x5586a0: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x5586a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_5586a4:
    // 0x5586a4: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x5586a4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_5586a8:
    // 0x5586a8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5586a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5586ac:
    // 0x5586ac: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x5586acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_5586b0:
    // 0x5586b0: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x5586b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_5586b4:
    // 0x5586b4: 0x24a5f240  addiu       $a1, $a1, -0xDC0
    ctx->pc = 0x5586b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963776));
label_5586b8:
    // 0x5586b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5586b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5586bc:
    // 0x5586bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x5586bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5586c0:
    // 0x5586c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5586c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5586c4:
    // 0x5586c4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x5586c4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5586c8:
    // 0x5586c8: 0x0  nop
    ctx->pc = 0x5586c8u;
    // NOP
label_5586cc:
    // 0x5586cc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5586ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5586d0:
    // 0x5586d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5586d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5586d4:
    // 0x5586d4: 0x0  nop
    ctx->pc = 0x5586d4u;
    // NOP
label_5586d8:
    // 0x5586d8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5586d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5586dc:
    // 0x5586dc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x5586dcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5586e0:
    // 0x5586e0: 0x0  nop
    ctx->pc = 0x5586e0u;
    // NOP
label_5586e4:
    // 0x5586e4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x5586e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_5586e8:
    // 0x5586e8: 0xc6a10058  lwc1        $f1, 0x58($s5)
    ctx->pc = 0x5586e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5586ec:
    // 0x5586ec: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x5586ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5586f0:
    // 0x5586f0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5586f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5586f4:
    // 0x5586f4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x5586f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_5586f8:
    // 0x5586f8: 0xc0bc284  jal         func_2F0A10
label_5586fc:
    if (ctx->pc == 0x5586FCu) {
        ctx->pc = 0x5586FCu;
            // 0x5586fc: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x558700u;
        goto label_558700;
    }
    ctx->pc = 0x5586F8u;
    SET_GPR_U32(ctx, 31, 0x558700u);
    ctx->pc = 0x5586FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5586F8u;
            // 0x5586fc: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558700u; }
        if (ctx->pc != 0x558700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558700u; }
        if (ctx->pc != 0x558700u) { return; }
    }
    ctx->pc = 0x558700u;
label_558700:
    // 0x558700: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x558700u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558704:
    // 0x558704: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x558704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_558708:
    // 0x558708: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x558708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_55870c:
    // 0x55870c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x55870cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_558710:
    // 0x558710: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x558710u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_558714:
    // 0x558714: 0x24a5f260  addiu       $a1, $a1, -0xDA0
    ctx->pc = 0x558714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963808));
label_558718:
    // 0x558718: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x558718u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55871c:
    // 0x55871c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55871cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_558720:
    // 0x558720: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x558720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558724:
    // 0x558724: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x558724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558728:
    // 0x558728: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x558728u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55872c:
    // 0x55872c: 0x0  nop
    ctx->pc = 0x55872cu;
    // NOP
label_558730:
    // 0x558730: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x558730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_558734:
    // 0x558734: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x558734u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558738:
    // 0x558738: 0x0  nop
    ctx->pc = 0x558738u;
    // NOP
label_55873c:
    // 0x55873c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55873cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_558740:
    // 0x558740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x558740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558744:
    // 0x558744: 0x0  nop
    ctx->pc = 0x558744u;
    // NOP
label_558748:
    // 0x558748: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x558748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55874c:
    // 0x55874c: 0xc6a10060  lwc1        $f1, 0x60($s5)
    ctx->pc = 0x55874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_558750:
    // 0x558750: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x558750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558754:
    // 0x558754: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x558754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_558758:
    // 0x558758: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x558758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_55875c:
    // 0x55875c: 0xc0bc284  jal         func_2F0A10
label_558760:
    if (ctx->pc == 0x558760u) {
        ctx->pc = 0x558760u;
            // 0x558760: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x558764u;
        goto label_558764;
    }
    ctx->pc = 0x55875Cu;
    SET_GPR_U32(ctx, 31, 0x558764u);
    ctx->pc = 0x558760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55875Cu;
            // 0x558760: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558764u; }
        if (ctx->pc != 0x558764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558764u; }
        if (ctx->pc != 0x558764u) { return; }
    }
    ctx->pc = 0x558764u;
label_558764:
    // 0x558764: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x558764u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_558768:
    // 0x558768: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x558768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_55876c:
    // 0x55876c: 0x8ea4008c  lw          $a0, 0x8C($s5)
    ctx->pc = 0x55876cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_558770:
    // 0x558770: 0x24a5f220  addiu       $a1, $a1, -0xDE0
    ctx->pc = 0x558770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963744));
label_558774:
    // 0x558774: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x558774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
label_558778:
    // 0x558778: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x558778u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55877c:
    // 0x55877c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x55877cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558780:
    // 0x558780: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x558780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_558784:
    // 0x558784: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x558784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_558788:
    // 0x558788: 0x2484ff6a  addiu       $a0, $a0, -0x96
    ctx->pc = 0x558788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967146));
label_55878c:
    // 0x55878c: 0x913023  subu        $a2, $a0, $s1
    ctx->pc = 0x55878cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_558790:
    // 0x558790: 0x8ea80080  lw          $t0, 0x80($s5)
    ctx->pc = 0x558790u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_558794:
    // 0x558794: 0x24d1fffb  addiu       $s1, $a2, -0x5
    ctx->pc = 0x558794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967291));
label_558798:
    // 0x558798: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x558798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55879c:
    // 0x55879c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x55879cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5587a0:
    // 0x5587a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5587a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5587a4:
    // 0x5587a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5587a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5587a8:
    // 0x5587a8: 0x0  nop
    ctx->pc = 0x5587a8u;
    // NOP
label_5587ac:
    // 0x5587ac: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5587acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5587b0:
    // 0x5587b0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5587b0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5587b4:
    // 0x5587b4: 0x0  nop
    ctx->pc = 0x5587b4u;
    // NOP
label_5587b8:
    // 0x5587b8: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x5587b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_5587bc:
    // 0x5587bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x5587bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_5587c0:
    // 0x5587c0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x5587c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5587c4:
    // 0x5587c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5587c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5587c8:
    // 0x5587c8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5587c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5587cc:
    // 0x5587cc: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x5587ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_5587d0:
    // 0x5587d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5587d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5587d4:
    // 0x5587d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x5587d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_5587d8:
    // 0x5587d8: 0x0  nop
    ctx->pc = 0x5587d8u;
    // NOP
label_5587dc:
    // 0x5587dc: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x5587dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_5587e0:
    // 0x5587e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5587e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5587e4:
    // 0x5587e4: 0x0  nop
    ctx->pc = 0x5587e4u;
    // NOP
label_5587e8:
    // 0x5587e8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x5587e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_5587ec:
    // 0x5587ec: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x5587ecu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5587f0:
    // 0x5587f0: 0x0  nop
    ctx->pc = 0x5587f0u;
    // NOP
label_5587f4:
    // 0x5587f4: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x5587f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_5587f8:
    // 0x5587f8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x5587f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5587fc:
    // 0x5587fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x5587fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_558800:
    // 0x558800: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x558800u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_558804:
    // 0x558804: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x558804u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_558808:
    // 0x558808: 0x0  nop
    ctx->pc = 0x558808u;
    // NOP
label_55880c:
    // 0x55880c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x55880cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_558810:
    // 0x558810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x558810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558814:
    // 0x558814: 0xc0bc284  jal         func_2F0A10
label_558818:
    if (ctx->pc == 0x558818u) {
        ctx->pc = 0x558818u;
            // 0x558818: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55881Cu;
        goto label_55881c;
    }
    ctx->pc = 0x558814u;
    SET_GPR_U32(ctx, 31, 0x55881Cu);
    ctx->pc = 0x558818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558814u;
            // 0x558818: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55881Cu; }
        if (ctx->pc != 0x55881Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55881Cu; }
        if (ctx->pc != 0x55881Cu) { return; }
    }
    ctx->pc = 0x55881Cu;
label_55881c:
    // 0x55881c: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x55881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_558820:
    // 0x558820: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x558820u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_558824:
    // 0x558824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x558824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558828:
    // 0x558828: 0x2610f170  addiu       $s0, $s0, -0xE90
    ctx->pc = 0x558828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963568));
label_55882c:
    // 0x55882c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x55882cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_558830:
    // 0x558830: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x558830u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_558834:
    // 0x558834: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x558834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_558838:
    // 0x558838: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x558838u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55883c:
    // 0x55883c: 0x8eb60078  lw          $s6, 0x78($s5)
    ctx->pc = 0x55883cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_558840:
    // 0x558840: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x558840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_558844:
    // 0x558844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x558844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_558848:
    // 0x558848: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x558848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_55884c:
    // 0x55884c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55884cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558850:
    // 0x558850: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x558850u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558854:
    // 0x558854: 0x0  nop
    ctx->pc = 0x558854u;
    // NOP
label_558858:
    // 0x558858: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x558858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55885c:
    // 0x55885c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55885cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558860:
    // 0x558860: 0x0  nop
    ctx->pc = 0x558860u;
    // NOP
label_558864:
    // 0x558864: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x558864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_558868:
    // 0x558868: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x558868u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55886c:
    // 0x55886c: 0x0  nop
    ctx->pc = 0x55886cu;
    // NOP
label_558870:
    // 0x558870: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x558870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_558874:
    // 0x558874: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x558874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_558878:
    // 0x558878: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x558878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55887c:
    // 0x55887c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x55887cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_558880:
    // 0x558880: 0x46016380  add.s       $f14, $f12, $f1
    ctx->pc = 0x558880u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_558884:
    // 0x558884: 0xc0bc284  jal         func_2F0A10
label_558888:
    if (ctx->pc == 0x558888u) {
        ctx->pc = 0x558888u;
            // 0x558888: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x55888Cu;
        goto label_55888c;
    }
    ctx->pc = 0x558884u;
    SET_GPR_U32(ctx, 31, 0x55888Cu);
    ctx->pc = 0x558888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558884u;
            // 0x558888: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55888Cu; }
        if (ctx->pc != 0x55888Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55888Cu; }
        if (ctx->pc != 0x55888Cu) { return; }
    }
    ctx->pc = 0x55888Cu;
label_55888c:
    // 0x55888c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x55888cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558890:
    // 0x558890: 0x27c20002  addiu       $v0, $fp, 0x2
    ctx->pc = 0x558890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
label_558894:
    // 0x558894: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x558894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_558898:
    // 0x558898: 0x26290014  addiu       $t1, $s1, 0x14
    ctx->pc = 0x558898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_55889c:
    // 0x55889c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x55889cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_5588a0:
    // 0x5588a0: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x5588a0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_5588a4:
    // 0x5588a4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5588a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5588a8:
    // 0x5588a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5588a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5588ac:
    // 0x5588ac: 0x2442f160  addiu       $v0, $v0, -0xEA0
    ctx->pc = 0x5588acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963552));
label_5588b0:
    // 0x5588b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x5588b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5588b4:
    // 0x5588b4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x5588b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5588b8:
    // 0x5588b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5588b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5588bc:
    // 0x5588bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5588bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5588c0:
    // 0x5588c0: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x5588c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_5588c4:
    // 0x5588c4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x5588c4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5588c8:
    // 0x5588c8: 0x0  nop
    ctx->pc = 0x5588c8u;
    // NOP
label_5588cc:
    // 0x5588cc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x5588ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_5588d0:
    // 0x5588d0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x5588d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5588d4:
    // 0x5588d4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5588d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5588d8:
    // 0x5588d8: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x5588d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_5588dc:
    // 0x5588dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5588dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5588e0:
    // 0x5588e0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x5588e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_5588e4:
    // 0x5588e4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x5588e4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5588e8:
    // 0x5588e8: 0x0  nop
    ctx->pc = 0x5588e8u;
    // NOP
label_5588ec:
    // 0x5588ec: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5588ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5588f0:
    // 0x5588f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5588f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5588f4:
    // 0x5588f4: 0x0  nop
    ctx->pc = 0x5588f4u;
    // NOP
label_5588f8:
    // 0x5588f8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5588f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5588fc:
    // 0x5588fc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x5588fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_558900:
    // 0x558900: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x558900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558904:
    // 0x558904: 0x46016380  add.s       $f14, $f12, $f1
    ctx->pc = 0x558904u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_558908:
    // 0x558908: 0xc0bc284  jal         func_2F0A10
label_55890c:
    if (ctx->pc == 0x55890Cu) {
        ctx->pc = 0x55890Cu;
            // 0x55890c: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x558910u;
        goto label_558910;
    }
    ctx->pc = 0x558908u;
    SET_GPR_U32(ctx, 31, 0x558910u);
    ctx->pc = 0x55890Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558908u;
            // 0x55890c: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558910u; }
        if (ctx->pc != 0x558910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558910u; }
        if (ctx->pc != 0x558910u) { return; }
    }
    ctx->pc = 0x558910u;
label_558910:
    // 0x558910: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x558910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558914:
    // 0x558914: 0x8ea2008c  lw          $v0, 0x8C($s5)
    ctx->pc = 0x558914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_558918:
    // 0x558918: 0xc6a10058  lwc1        $f1, 0x58($s5)
    ctx->pc = 0x558918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55891c:
    // 0x55891c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x55891cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_558920:
    // 0x558920: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x558920u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_558924:
    // 0x558924: 0x24a5f240  addiu       $a1, $a1, -0xDC0
    ctx->pc = 0x558924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963776));
label_558928:
    // 0x558928: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x558928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_55892c:
    // 0x55892c: 0x24490096  addiu       $t1, $v0, 0x96
    ctx->pc = 0x55892cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 150));
label_558930:
    // 0x558930: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x558930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_558934:
    // 0x558934: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x558934u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_558938:
    // 0x558938: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x558938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55893c:
    // 0x55893c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x55893cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558940:
    // 0x558940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x558940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558944:
    // 0x558944: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x558944u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558948:
    // 0x558948: 0x0  nop
    ctx->pc = 0x558948u;
    // NOP
label_55894c:
    // 0x55894c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55894cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_558950:
    // 0x558950: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x558950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_558954:
    // 0x558954: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x558954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558958:
    // 0x558958: 0x0  nop
    ctx->pc = 0x558958u;
    // NOP
label_55895c:
    // 0x55895c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55895cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_558960:
    // 0x558960: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x558960u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_558964:
    // 0x558964: 0x0  nop
    ctx->pc = 0x558964u;
    // NOP
label_558968:
    // 0x558968: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x558968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_55896c:
    // 0x55896c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x55896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558970:
    // 0x558970: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x558970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_558974:
    // 0x558974: 0xc0bc284  jal         func_2F0A10
label_558978:
    if (ctx->pc == 0x558978u) {
        ctx->pc = 0x558978u;
            // 0x558978: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x55897Cu;
        goto label_55897c;
    }
    ctx->pc = 0x558974u;
    SET_GPR_U32(ctx, 31, 0x55897Cu);
    ctx->pc = 0x558978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558974u;
            // 0x558978: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55897Cu; }
        if (ctx->pc != 0x55897Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55897Cu; }
        if (ctx->pc != 0x55897Cu) { return; }
    }
    ctx->pc = 0x55897Cu;
label_55897c:
    // 0x55897c: 0x8eb60088  lw          $s6, 0x88($s5)
    ctx->pc = 0x55897cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_558980:
    // 0x558980: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x558980u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_558984:
    // 0x558984: 0x2610f2c0  addiu       $s0, $s0, -0xD40
    ctx->pc = 0x558984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963904));
label_558988:
    // 0x558988: 0x8ea2008c  lw          $v0, 0x8C($s5)
    ctx->pc = 0x558988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_55898c:
    // 0x55898c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x55898cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558990:
    // 0x558990: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x558990u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_558994:
    // 0x558994: 0x44961000  mtc1        $s6, $f2
    ctx->pc = 0x558994u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_558998:
    // 0x558998: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x558998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55899c:
    // 0x55899c: 0x46801320  cvt.s.w     $f12, $f2
    ctx->pc = 0x55899cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_5589a0:
    // 0x5589a0: 0x24510020  addiu       $s1, $v0, 0x20
    ctx->pc = 0x5589a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_5589a4:
    // 0x5589a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5589a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5589a8:
    // 0x5589a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5589a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5589ac:
    // 0x5589ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5589acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5589b0:
    // 0x5589b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x5589b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5589b4:
    // 0x5589b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5589b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5589b8:
    // 0x5589b8: 0x46006380  add.s       $f14, $f12, $f0
    ctx->pc = 0x5589b8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_5589bc:
    // 0x5589bc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x5589bcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5589c0:
    // 0x5589c0: 0x0  nop
    ctx->pc = 0x5589c0u;
    // NOP
label_5589c4:
    // 0x5589c4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5589c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5589c8:
    // 0x5589c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5589c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5589cc:
    // 0x5589cc: 0x0  nop
    ctx->pc = 0x5589ccu;
    // NOP
label_5589d0:
    // 0x5589d0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5589d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5589d4:
    // 0x5589d4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5589d4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5589d8:
    // 0x5589d8: 0x0  nop
    ctx->pc = 0x5589d8u;
    // NOP
label_5589dc:
    // 0x5589dc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x5589dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_5589e0:
    // 0x5589e0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x5589e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5589e4:
    // 0x5589e4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5589e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5589e8:
    // 0x5589e8: 0xc0bc284  jal         func_2F0A10
label_5589ec:
    if (ctx->pc == 0x5589ECu) {
        ctx->pc = 0x5589ECu;
            // 0x5589ec: 0x46016bc0  add.s       $f15, $f13, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
        ctx->pc = 0x5589F0u;
        goto label_5589f0;
    }
    ctx->pc = 0x5589E8u;
    SET_GPR_U32(ctx, 31, 0x5589F0u);
    ctx->pc = 0x5589ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5589E8u;
            // 0x5589ec: 0x46016bc0  add.s       $f15, $f13, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5589F0u; }
        if (ctx->pc != 0x5589F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5589F0u; }
        if (ctx->pc != 0x5589F0u) { return; }
    }
    ctx->pc = 0x5589F0u;
label_5589f0:
    // 0x5589f0: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x5589f0u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5589f4:
    // 0x5589f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5589f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5589f8:
    // 0x5589f8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x5589f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_5589fc:
    // 0x5589fc: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x5589fcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_558a00:
    // 0x558a00: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x558a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_558a04:
    // 0x558a04: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x558a04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_558a08:
    // 0x558a08: 0x24a5f2e0  addiu       $a1, $a1, -0xD20
    ctx->pc = 0x558a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963936));
label_558a0c:
    // 0x558a0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x558a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_558a10:
    // 0x558a10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x558a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558a14:
    // 0x558a14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x558a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558a18:
    // 0x558a18: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x558a18u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558a1c:
    // 0x558a1c: 0x0  nop
    ctx->pc = 0x558a1cu;
    // NOP
label_558a20:
    // 0x558a20: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x558a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_558a24:
    // 0x558a24: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x558a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_558a28:
    // 0x558a28: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x558a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_558a2c:
    // 0x558a2c: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x558a2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_558a30:
    // 0x558a30: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x558a30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_558a34:
    // 0x558a34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x558a34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558a38:
    // 0x558a38: 0x0  nop
    ctx->pc = 0x558a38u;
    // NOP
label_558a3c:
    // 0x558a3c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x558a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_558a40:
    // 0x558a40: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x558a40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_558a44:
    // 0x558a44: 0x0  nop
    ctx->pc = 0x558a44u;
    // NOP
label_558a48:
    // 0x558a48: 0x2602001e  addiu       $v0, $s0, 0x1E
    ctx->pc = 0x558a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 30));
label_558a4c:
    // 0x558a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x558a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558a50:
    // 0x558a50: 0x0  nop
    ctx->pc = 0x558a50u;
    // NOP
label_558a54:
    // 0x558a54: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x558a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_558a58:
    // 0x558a58: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x558a58u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558a5c:
    // 0x558a5c: 0x0  nop
    ctx->pc = 0x558a5cu;
    // NOP
label_558a60:
    // 0x558a60: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x558a60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_558a64:
    // 0x558a64: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x558a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558a68:
    // 0x558a68: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x558a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_558a6c:
    // 0x558a6c: 0xc0bc284  jal         func_2F0A10
label_558a70:
    if (ctx->pc == 0x558A70u) {
        ctx->pc = 0x558A70u;
            // 0x558a70: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x558A74u;
        goto label_558a74;
    }
    ctx->pc = 0x558A6Cu;
    SET_GPR_U32(ctx, 31, 0x558A74u);
    ctx->pc = 0x558A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558A6Cu;
            // 0x558a70: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558A74u; }
        if (ctx->pc != 0x558A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558A74u; }
        if (ctx->pc != 0x558A74u) { return; }
    }
    ctx->pc = 0x558A74u;
label_558a74:
    // 0x558a74: 0x2602001e  addiu       $v0, $s0, 0x1E
    ctx->pc = 0x558a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 30));
label_558a78:
    // 0x558a78: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x558a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_558a7c:
    // 0x558a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x558a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558a80:
    // 0x558a80: 0x24a5f2d0  addiu       $a1, $a1, -0xD30
    ctx->pc = 0x558a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963920));
label_558a84:
    // 0x558a84: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x558a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_558a88:
    // 0x558a88: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x558a88u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_558a8c:
    // 0x558a8c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x558a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_558a90:
    // 0x558a90: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x558a90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_558a94:
    // 0x558a94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x558a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_558a98:
    // 0x558a98: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x558a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558a9c:
    // 0x558a9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x558a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558aa0:
    // 0x558aa0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x558aa0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558aa4:
    // 0x558aa4: 0x0  nop
    ctx->pc = 0x558aa4u;
    // NOP
label_558aa8:
    // 0x558aa8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x558aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_558aac:
    // 0x558aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x558aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558ab0:
    // 0x558ab0: 0x0  nop
    ctx->pc = 0x558ab0u;
    // NOP
label_558ab4:
    // 0x558ab4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x558ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_558ab8:
    // 0x558ab8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x558ab8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558abc:
    // 0x558abc: 0x0  nop
    ctx->pc = 0x558abcu;
    // NOP
label_558ac0:
    // 0x558ac0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x558ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_558ac4:
    // 0x558ac4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x558ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_558ac8:
    // 0x558ac8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x558ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558acc:
    // 0x558acc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x558accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_558ad0:
    // 0x558ad0: 0x46016380  add.s       $f14, $f12, $f1
    ctx->pc = 0x558ad0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_558ad4:
    // 0x558ad4: 0xc0bc284  jal         func_2F0A10
label_558ad8:
    if (ctx->pc == 0x558AD8u) {
        ctx->pc = 0x558AD8u;
            // 0x558ad8: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x558ADCu;
        goto label_558adc;
    }
    ctx->pc = 0x558AD4u;
    SET_GPR_U32(ctx, 31, 0x558ADCu);
    ctx->pc = 0x558AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558AD4u;
            // 0x558ad8: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558ADCu; }
        if (ctx->pc != 0x558ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558ADCu; }
        if (ctx->pc != 0x558ADCu) { return; }
    }
    ctx->pc = 0x558ADCu;
label_558adc:
    // 0x558adc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x558adcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558ae0:
    // 0x558ae0: 0x8eb00088  lw          $s0, 0x88($s5)
    ctx->pc = 0x558ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_558ae4:
    // 0x558ae4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x558ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_558ae8:
    // 0x558ae8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x558ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_558aec:
    // 0x558aec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x558aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_558af0:
    // 0x558af0: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x558af0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_558af4:
    // 0x558af4: 0x2609ff06  addiu       $t1, $s0, -0xFA
    ctx->pc = 0x558af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967046));
label_558af8:
    // 0x558af8: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x558af8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_558afc:
    // 0x558afc: 0x24a5f2e0  addiu       $a1, $a1, -0xD20
    ctx->pc = 0x558afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963936));
label_558b00:
    // 0x558b00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x558b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_558b04:
    // 0x558b04: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x558b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558b08:
    // 0x558b08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x558b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558b0c:
    // 0x558b0c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x558b0cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558b10:
    // 0x558b10: 0x0  nop
    ctx->pc = 0x558b10u;
    // NOP
label_558b14:
    // 0x558b14: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x558b14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_558b18:
    // 0x558b18: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x558b18u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558b1c:
    // 0x558b1c: 0x0  nop
    ctx->pc = 0x558b1cu;
    // NOP
label_558b20:
    // 0x558b20: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x558b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_558b24:
    // 0x558b24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x558b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558b28:
    // 0x558b28: 0x0  nop
    ctx->pc = 0x558b28u;
    // NOP
label_558b2c:
    // 0x558b2c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x558b2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_558b30:
    // 0x558b30: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x558b30u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558b34:
    // 0x558b34: 0x0  nop
    ctx->pc = 0x558b34u;
    // NOP
label_558b38:
    // 0x558b38: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x558b38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_558b3c:
    // 0x558b3c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x558b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558b40:
    // 0x558b40: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x558b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_558b44:
    // 0x558b44: 0xc0bc284  jal         func_2F0A10
label_558b48:
    if (ctx->pc == 0x558B48u) {
        ctx->pc = 0x558B48u;
            // 0x558b48: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x558B4Cu;
        goto label_558b4c;
    }
    ctx->pc = 0x558B44u;
    SET_GPR_U32(ctx, 31, 0x558B4Cu);
    ctx->pc = 0x558B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558B44u;
            // 0x558b48: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558B4Cu; }
        if (ctx->pc != 0x558B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558B4Cu; }
        if (ctx->pc != 0x558B4Cu) { return; }
    }
    ctx->pc = 0x558B4Cu;
label_558b4c:
    // 0x558b4c: 0x2602ff06  addiu       $v0, $s0, -0xFA
    ctx->pc = 0x558b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967046));
label_558b50:
    // 0x558b50: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x558b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_558b54:
    // 0x558b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x558b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558b58:
    // 0x558b58: 0x24a5f2b0  addiu       $a1, $a1, -0xD50
    ctx->pc = 0x558b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963888));
label_558b5c:
    // 0x558b5c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x558b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_558b60:
    // 0x558b60: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x558b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_558b64:
    // 0x558b64: 0x86480000  lh          $t0, 0x0($s2)
    ctx->pc = 0x558b64u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_558b68:
    // 0x558b68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x558b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_558b6c:
    // 0x558b6c: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x558b6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_558b70:
    // 0x558b70: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x558b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558b74:
    // 0x558b74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x558b74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558b78:
    // 0x558b78: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x558b78u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558b7c:
    // 0x558b7c: 0x0  nop
    ctx->pc = 0x558b7cu;
    // NOP
label_558b80:
    // 0x558b80: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x558b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_558b84:
    // 0x558b84: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x558b84u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558b88:
    // 0x558b88: 0x0  nop
    ctx->pc = 0x558b88u;
    // NOP
label_558b8c:
    // 0x558b8c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x558b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_558b90:
    // 0x558b90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x558b90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558b94:
    // 0x558b94: 0x0  nop
    ctx->pc = 0x558b94u;
    // NOP
label_558b98:
    // 0x558b98: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x558b98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_558b9c:
    // 0x558b9c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x558b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_558ba0:
    // 0x558ba0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x558ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558ba4:
    // 0x558ba4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x558ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_558ba8:
    // 0x558ba8: 0x46017301  sub.s       $f12, $f14, $f1
    ctx->pc = 0x558ba8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[14], ctx->f[1]);
label_558bac:
    // 0x558bac: 0xc0bc284  jal         func_2F0A10
label_558bb0:
    if (ctx->pc == 0x558BB0u) {
        ctx->pc = 0x558BB0u;
            // 0x558bb0: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x558BB4u;
        goto label_558bb4;
    }
    ctx->pc = 0x558BACu;
    SET_GPR_U32(ctx, 31, 0x558BB4u);
    ctx->pc = 0x558BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558BACu;
            // 0x558bb0: 0x46006bc0  add.s       $f15, $f13, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558BB4u; }
        if (ctx->pc != 0x558BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558BB4u; }
        if (ctx->pc != 0x558BB4u) { return; }
    }
    ctx->pc = 0x558BB4u;
label_558bb4:
    // 0x558bb4: 0x8ea60060  lw          $a2, 0x60($s5)
    ctx->pc = 0x558bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_558bb8:
    // 0x558bb8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x558bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_558bbc:
    // 0x558bbc: 0x8ea50064  lw          $a1, 0x64($s5)
    ctx->pc = 0x558bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_558bc0:
    // 0x558bc0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x558bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_558bc4:
    // 0x558bc4: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x558bc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_558bc8:
    // 0x558bc8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x558bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_558bcc:
    // 0x558bcc: 0x24c6ff06  addiu       $a2, $a2, -0xFA
    ctx->pc = 0x558bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967046));
label_558bd0:
    // 0x558bd0: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x558bd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_558bd4:
    // 0x558bd4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x558bd4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558bd8:
    // 0x558bd8: 0x24aaff30  addiu       $t2, $a1, -0xD0
    ctx->pc = 0x558bd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967088));
label_558bdc:
    // 0x558bdc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x558bdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_558be0:
    // 0x558be0: 0x24c900fa  addiu       $t1, $a2, 0xFA
    ctx->pc = 0x558be0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 250));
label_558be4:
    // 0x558be4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x558be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_558be8:
    // 0x558be8: 0x254800d0  addiu       $t0, $t2, 0xD0
    ctx->pc = 0x558be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 208));
label_558bec:
    // 0x558bec: 0x24a5f230  addiu       $a1, $a1, -0xDD0
    ctx->pc = 0x558becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
label_558bf0:
    // 0x558bf0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x558bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558bf4:
    // 0x558bf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x558bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558bf8:
    // 0x558bf8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x558bf8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558bfc:
    // 0x558bfc: 0x0  nop
    ctx->pc = 0x558bfcu;
    // NOP
label_558c00:
    // 0x558c00: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x558c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_558c04:
    // 0x558c04: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x558c04u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558c08:
    // 0x558c08: 0x0  nop
    ctx->pc = 0x558c08u;
    // NOP
label_558c0c:
    // 0x558c0c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x558c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_558c10:
    // 0x558c10: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x558c10u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558c14:
    // 0x558c14: 0x0  nop
    ctx->pc = 0x558c14u;
    // NOP
label_558c18:
    // 0x558c18: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x558c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_558c1c:
    // 0x558c1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x558c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558c20:
    // 0x558c20: 0x0  nop
    ctx->pc = 0x558c20u;
    // NOP
label_558c24:
    // 0x558c24: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x558c24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_558c28:
    // 0x558c28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x558c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558c2c:
    // 0x558c2c: 0xc0bc284  jal         func_2F0A10
label_558c30:
    if (ctx->pc == 0x558C30u) {
        ctx->pc = 0x558C30u;
            // 0x558c30: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x558C34u;
        goto label_558c34;
    }
    ctx->pc = 0x558C2Cu;
    SET_GPR_U32(ctx, 31, 0x558C34u);
    ctx->pc = 0x558C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558C2Cu;
            // 0x558c30: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558C34u; }
        if (ctx->pc != 0x558C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558C34u; }
        if (ctx->pc != 0x558C34u) { return; }
    }
    ctx->pc = 0x558C34u;
label_558c34:
    // 0x558c34: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x558c34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_558c38:
    // 0x558c38: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x558c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_558c3c:
    // 0x558c3c: 0x320f809  jalr        $t9
label_558c40:
    if (ctx->pc == 0x558C40u) {
        ctx->pc = 0x558C40u;
            // 0x558c40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x558C44u;
        goto label_558c44;
    }
    ctx->pc = 0x558C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x558C44u);
        ctx->pc = 0x558C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x558C3Cu;
            // 0x558c40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x558C44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x558C44u; }
            if (ctx->pc != 0x558C44u) { return; }
        }
        }
    }
    ctx->pc = 0x558C44u;
label_558c44:
    // 0x558c44: 0x8ea70088  lw          $a3, 0x88($s5)
    ctx->pc = 0x558c44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_558c48:
    // 0x558c48: 0x3c024409  lui         $v0, 0x4409
    ctx->pc = 0x558c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17417 << 16));
label_558c4c:
    // 0x558c4c: 0x344d8000  ori         $t5, $v0, 0x8000
    ctx->pc = 0x558c4cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_558c50:
    // 0x558c50: 0x8ea6008c  lw          $a2, 0x8C($s5)
    ctx->pc = 0x558c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_558c54:
    // 0x558c54: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x558c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_558c58:
    // 0x558c58: 0x3c0c4302  lui         $t4, 0x4302
    ctx->pc = 0x558c58u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17154 << 16));
label_558c5c:
    // 0x558c5c: 0x24e7feed  addiu       $a3, $a3, -0x113
    ctx->pc = 0x558c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967021));
label_558c60:
    // 0x558c60: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x558c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_558c64:
    // 0x558c64: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x558c64u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558c68:
    // 0x558c68: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x558c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_558c6c:
    // 0x558c6c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x558c6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_558c70:
    // 0x558c70: 0x24c9ff8d  addiu       $t1, $a2, -0x73
    ctx->pc = 0x558c70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967181));
label_558c74:
    // 0x558c74: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x558c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
label_558c78:
    // 0x558c78: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x558c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_558c7c:
    // 0x558c7c: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x558c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_558c80:
    // 0x558c80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x558c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_558c84:
    // 0x558c84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x558c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_558c88:
    // 0x558c88: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x558c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_558c8c:
    // 0x558c8c: 0x8c4760b0  lw          $a3, 0x60B0($v0)
    ctx->pc = 0x558c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24752)));
label_558c90:
    // 0x558c90: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x558c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558c94:
    // 0x558c94: 0x24a5f160  addiu       $a1, $a1, -0xEA0
    ctx->pc = 0x558c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963552));
label_558c98:
    // 0x558c98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x558c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_558c9c:
    // 0x558c9c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x558c9cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558ca0:
    // 0x558ca0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x558ca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558ca4:
    // 0x558ca4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x558ca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_558ca8:
    // 0x558ca8: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x558ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_558cac:
    // 0x558cac: 0x240a0012  addiu       $t2, $zero, 0x12
    ctx->pc = 0x558cacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_558cb0:
    // 0x558cb0: 0x448d7000  mtc1        $t5, $f14
    ctx->pc = 0x558cb0u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_558cb4:
    // 0x558cb4: 0x448c7800  mtc1        $t4, $f15
    ctx->pc = 0x558cb4u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_558cb8:
    // 0x558cb8: 0x44838000  mtc1        $v1, $f16
    ctx->pc = 0x558cb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_558cbc:
    // 0x558cbc: 0xc129cfc  jal         func_4A73F0
label_558cc0:
    if (ctx->pc == 0x558CC0u) {
        ctx->pc = 0x558CC0u;
            // 0x558cc0: 0x240b0013  addiu       $t3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x558CC4u;
        goto label_558cc4;
    }
    ctx->pc = 0x558CBCu;
    SET_GPR_U32(ctx, 31, 0x558CC4u);
    ctx->pc = 0x558CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558CBCu;
            // 0x558cc0: 0x240b0013  addiu       $t3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A73F0u;
    if (runtime->hasFunction(0x4A73F0u)) {
        auto targetFn = runtime->lookupFunction(0x4A73F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558CC4u; }
        if (ctx->pc != 0x558CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A73F0_0x4a73f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558CC4u; }
        if (ctx->pc != 0x558CC4u) { return; }
    }
    ctx->pc = 0x558CC4u;
label_558cc4:
    // 0x558cc4: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x558cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_558cc8:
    // 0x558cc8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x558cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_558ccc:
    // 0x558ccc: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x558cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_558cd0:
    // 0x558cd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x558cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_558cd4:
    // 0x558cd4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x558cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_558cd8:
    // 0x558cd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x558cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558cdc:
    // 0x558cdc: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x558cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_558ce0:
    // 0x558ce0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x558ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558ce4:
    // 0x558ce4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x558ce4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558ce8:
    // 0x558ce8: 0xc0ee398  jal         func_3B8E60
label_558cec:
    if (ctx->pc == 0x558CECu) {
        ctx->pc = 0x558CECu;
            // 0x558cec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x558CF0u;
        goto label_558cf0;
    }
    ctx->pc = 0x558CE8u;
    SET_GPR_U32(ctx, 31, 0x558CF0u);
    ctx->pc = 0x558CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558CE8u;
            // 0x558cec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E60u;
    if (runtime->hasFunction(0x3B8E60u)) {
        auto targetFn = runtime->lookupFunction(0x3B8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558CF0u; }
        if (ctx->pc != 0x558CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8E60_0x3b8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558CF0u; }
        if (ctx->pc != 0x558CF0u) { return; }
    }
    ctx->pc = 0x558CF0u;
label_558cf0:
    // 0x558cf0: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x558cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_558cf4:
    // 0x558cf4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x558cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_558cf8:
    // 0x558cf8: 0xc6a00088  lwc1        $f0, 0x88($s5)
    ctx->pc = 0x558cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_558cfc:
    // 0x558cfc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x558cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_558d00:
    // 0x558d00: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x558d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_558d04:
    // 0x558d04: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x558d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_558d08:
    // 0x558d08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x558d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_558d0c:
    // 0x558d0c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x558d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558d10:
    // 0x558d10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x558d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_558d14:
    // 0x558d14: 0x8c510e68  lw          $s1, 0xE68($v0)
    ctx->pc = 0x558d14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_558d18:
    // 0x558d18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x558d18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558d1c:
    // 0x558d1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x558d1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558d20:
    // 0x558d20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x558d20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558d24:
    // 0x558d24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x558d24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558d28:
    // 0x558d28: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x558d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_558d2c:
    // 0x558d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x558d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_558d30:
    // 0x558d30: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x558d30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_558d34:
    // 0x558d34: 0xc7a300e8  lwc1        $f3, 0xE8($sp)
    ctx->pc = 0x558d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_558d38:
    // 0x558d38: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x558d38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_558d3c:
    // 0x558d3c: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x558d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_558d40:
    // 0x558d40: 0x4603201d  msub.s      $f0, $f4, $f3
    ctx->pc = 0x558d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_558d44:
    // 0x558d44: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x558d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_558d48:
    // 0x558d48: 0x8ea3008c  lw          $v1, 0x8C($s5)
    ctx->pc = 0x558d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_558d4c:
    // 0x558d4c: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x558d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
label_558d50:
    // 0x558d50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x558d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558d54:
    // 0x558d54: 0x0  nop
    ctx->pc = 0x558d54u;
    // NOP
label_558d58:
    // 0x558d58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x558d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_558d5c:
    // 0x558d5c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x558d5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_558d60:
    // 0x558d60: 0x4601201d  msub.s      $f0, $f4, $f1
    ctx->pc = 0x558d60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_558d64:
    // 0x558d64: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x558d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_558d68:
    // 0x558d68: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x558d68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_558d6c:
    // 0x558d6c: 0xc0ee334  jal         func_3B8CD0
label_558d70:
    if (ctx->pc == 0x558D70u) {
        ctx->pc = 0x558D70u;
            // 0x558d70: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x558D74u;
        goto label_558d74;
    }
    ctx->pc = 0x558D6Cu;
    SET_GPR_U32(ctx, 31, 0x558D74u);
    ctx->pc = 0x558D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558D6Cu;
            // 0x558d70: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558D74u; }
        if (ctx->pc != 0x558D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558D74u; }
        if (ctx->pc != 0x558D74u) { return; }
    }
    ctx->pc = 0x558D74u;
label_558d74:
    // 0x558d74: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x558d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_558d78:
    // 0x558d78: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x558d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_558d7c:
    // 0x558d7c: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x558d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_558d80:
    // 0x558d80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x558d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_558d84:
    // 0x558d84: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x558d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_558d88:
    // 0x558d88: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x558d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_558d8c:
    // 0x558d8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x558d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558d90:
    // 0x558d90: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x558d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558d94:
    // 0x558d94: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x558d94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_558d98:
    // 0x558d98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x558d98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558d9c:
    // 0x558d9c: 0xc0ee398  jal         func_3B8E60
label_558da0:
    if (ctx->pc == 0x558DA0u) {
        ctx->pc = 0x558DA0u;
            // 0x558da0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x558DA4u;
        goto label_558da4;
    }
    ctx->pc = 0x558D9Cu;
    SET_GPR_U32(ctx, 31, 0x558DA4u);
    ctx->pc = 0x558DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558D9Cu;
            // 0x558da0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E60u;
    if (runtime->hasFunction(0x3B8E60u)) {
        auto targetFn = runtime->lookupFunction(0x3B8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558DA4u; }
        if (ctx->pc != 0x558DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8E60_0x3b8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558DA4u; }
        if (ctx->pc != 0x558DA4u) { return; }
    }
    ctx->pc = 0x558DA4u;
label_558da4:
    // 0x558da4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x558da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_558da8:
    // 0x558da8: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x558da8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_558dac:
    // 0x558dac: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x558dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_558db0:
    // 0x558db0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x558db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_558db4:
    // 0x558db4: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x558db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
label_558db8:
    // 0x558db8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x558db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_558dbc:
    // 0x558dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x558dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558dc0:
    // 0x558dc0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x558dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_558dc4:
    // 0x558dc4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x558dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_558dc8:
    // 0x558dc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x558dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_558dcc:
    // 0x558dcc: 0xc7a300e8  lwc1        $f3, 0xE8($sp)
    ctx->pc = 0x558dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_558dd0:
    // 0x558dd0: 0x8c510e68  lw          $s1, 0xE68($v0)
    ctx->pc = 0x558dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_558dd4:
    // 0x558dd4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x558dd4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_558dd8:
    // 0x558dd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x558dd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558ddc:
    // 0x558ddc: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x558ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_558de0:
    // 0x558de0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x558de0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558de4:
    // 0x558de4: 0x4603201d  msub.s      $f0, $f4, $f3
    ctx->pc = 0x558de4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_558de8:
    // 0x558de8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x558de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_558dec:
    // 0x558dec: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x558decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_558df0:
    // 0x558df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x558df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_558df4:
    // 0x558df4: 0x8ea3008c  lw          $v1, 0x8C($s5)
    ctx->pc = 0x558df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_558df8:
    // 0x558df8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x558df8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558dfc:
    // 0x558dfc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x558dfcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558e00:
    // 0x558e00: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x558e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_558e04:
    // 0x558e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x558e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558e08:
    // 0x558e08: 0x0  nop
    ctx->pc = 0x558e08u;
    // NOP
label_558e0c:
    // 0x558e0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x558e0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_558e10:
    // 0x558e10: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x558e10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_558e14:
    // 0x558e14: 0x4601201d  msub.s      $f0, $f4, $f1
    ctx->pc = 0x558e14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_558e18:
    // 0x558e18: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x558e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_558e1c:
    // 0x558e1c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x558e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_558e20:
    // 0x558e20: 0xc0ee334  jal         func_3B8CD0
label_558e24:
    if (ctx->pc == 0x558E24u) {
        ctx->pc = 0x558E24u;
            // 0x558e24: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x558E28u;
        goto label_558e28;
    }
    ctx->pc = 0x558E20u;
    SET_GPR_U32(ctx, 31, 0x558E28u);
    ctx->pc = 0x558E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558E20u;
            // 0x558e24: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558E28u; }
        if (ctx->pc != 0x558E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558E28u; }
        if (ctx->pc != 0x558E28u) { return; }
    }
    ctx->pc = 0x558E28u;
label_558e28:
    // 0x558e28: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x558e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_558e2c:
    // 0x558e2c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x558e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_558e30:
    // 0x558e30: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x558e30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_558e34:
    // 0x558e34: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x558e34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_558e38:
    // 0x558e38: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x558e38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_558e3c:
    // 0x558e3c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x558e3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_558e40:
    // 0x558e40: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x558e40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_558e44:
    // 0x558e44: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x558e44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_558e48:
    // 0x558e48: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x558e48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_558e4c:
    // 0x558e4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x558e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_558e50:
    // 0x558e50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x558e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_558e54:
    // 0x558e54: 0x3e00008  jr          $ra
label_558e58:
    if (ctx->pc == 0x558E58u) {
        ctx->pc = 0x558E58u;
            // 0x558e58: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x558E5Cu;
        goto label_558e5c;
    }
    ctx->pc = 0x558E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x558E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x558E54u;
            // 0x558e58: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x558E5Cu;
label_558e5c:
    // 0x558e5c: 0x0  nop
    ctx->pc = 0x558e5cu;
    // NOP
label_558e60:
    // 0x558e60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x558e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_558e64:
    // 0x558e64: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x558e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_558e68:
    // 0x558e68: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x558e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_558e6c:
    // 0x558e6c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x558e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_558e70:
    // 0x558e70: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x558e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_558e74:
    // 0x558e74: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x558e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_558e78:
    // 0x558e78: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x558e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_558e7c:
    // 0x558e7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x558e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_558e80:
    // 0x558e80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x558e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_558e84:
    // 0x558e84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x558e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_558e88:
    // 0x558e88: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x558e88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_558e8c:
    // 0x558e8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x558e8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_558e90:
    // 0x558e90: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x558e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_558e94:
    // 0x558e94: 0x9063007d  lbu         $v1, 0x7D($v1)
    ctx->pc = 0x558e94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 125)));
label_558e98:
    // 0x558e98: 0x146001d6  bnez        $v1, . + 4 + (0x1D6 << 2)
label_558e9c:
    if (ctx->pc == 0x558E9Cu) {
        ctx->pc = 0x558E9Cu;
            // 0x558e9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x558EA0u;
        goto label_558ea0;
    }
    ctx->pc = 0x558E98u;
    {
        const bool branch_taken_0x558e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x558E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x558E98u;
            // 0x558e9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x558e98) {
            ctx->pc = 0x5595F4u;
            goto label_5595f4;
        }
    }
    ctx->pc = 0x558EA0u;
label_558ea0:
    // 0x558ea0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x558ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_558ea4:
    // 0x558ea4: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x558ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_558ea8:
    // 0x558ea8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x558ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_558eac:
    // 0x558eac: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x558eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_558eb0:
    // 0x558eb0: 0x320f809  jalr        $t9
label_558eb4:
    if (ctx->pc == 0x558EB4u) {
        ctx->pc = 0x558EB8u;
        goto label_558eb8;
    }
    ctx->pc = 0x558EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x558EB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x558EB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x558EB8u; }
            if (ctx->pc != 0x558EB8u) { return; }
        }
        }
    }
    ctx->pc = 0x558EB8u;
label_558eb8:
    // 0x558eb8: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x558eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_558ebc:
    // 0x558ebc: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x558ebcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_558ec0:
    // 0x558ec0: 0x502001cd  beql        $at, $zero, . + 4 + (0x1CD << 2)
label_558ec4:
    if (ctx->pc == 0x558EC4u) {
        ctx->pc = 0x558EC4u;
            // 0x558ec4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x558EC8u;
        goto label_558ec8;
    }
    ctx->pc = 0x558EC0u;
    {
        const bool branch_taken_0x558ec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x558ec0) {
            ctx->pc = 0x558EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x558EC0u;
            // 0x558ec4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5595F8u;
            goto label_5595f8;
        }
    }
    ctx->pc = 0x558EC8u;
label_558ec8:
    // 0x558ec8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x558ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_558ecc:
    // 0x558ecc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x558eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_558ed0:
    // 0x558ed0: 0x2484f310  addiu       $a0, $a0, -0xCF0
    ctx->pc = 0x558ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963984));
label_558ed4:
    // 0x558ed4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x558ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_558ed8:
    // 0x558ed8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x558ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_558edc:
    // 0x558edc: 0x600008  jr          $v1
label_558ee0:
    if (ctx->pc == 0x558EE0u) {
        ctx->pc = 0x558EE4u;
        goto label_558ee4;
    }
    ctx->pc = 0x558EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x558EE4u: goto label_558ee4;
            case 0x559188u: goto label_559188;
            case 0x5592E4u: goto label_5592e4;
            case 0x559438u: goto label_559438;
            case 0x55958Cu: goto label_55958c;
            case 0x5595ACu: goto label_5595ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x558EE4u;
label_558ee4:
    // 0x558ee4: 0xc60400a4  lwc1        $f4, 0xA4($s0)
    ctx->pc = 0x558ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_558ee8:
    // 0x558ee8: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x558ee8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
label_558eec:
    // 0x558eec: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x558eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_558ef0:
    // 0x558ef0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x558ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_558ef4:
    // 0x558ef4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x558ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_558ef8:
    // 0x558ef8: 0x26b5f0f0  addiu       $s5, $s5, -0xF10
    ctx->pc = 0x558ef8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963440));
label_558efc:
    // 0x558efc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x558efcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_558f00:
    // 0x558f00: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x558f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_558f04:
    // 0x558f04: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x558f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_558f08:
    // 0x558f08: 0x46800960  cvt.s.w     $f5, $f1
    ctx->pc = 0x558f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_558f0c:
    // 0x558f0c: 0x46022540  add.s       $f21, $f4, $f2
    ctx->pc = 0x558f0cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_558f10:
    // 0x558f10: 0xc60200bc  lwc1        $f2, 0xBC($s0)
    ctx->pc = 0x558f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_558f14:
    // 0x558f14: 0xc60400c0  lwc1        $f4, 0xC0($s0)
    ctx->pc = 0x558f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_558f18:
    // 0x558f18: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x558f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_558f1c:
    // 0x558f1c: 0x46022d00  add.s       $f20, $f5, $f2
    ctx->pc = 0x558f1cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_558f20:
    // 0x558f20: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x558f20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_558f24:
    // 0x558f24: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x558f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_558f28:
    // 0x558f28: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x558f28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_558f2c:
    // 0x558f2c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x558f2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_558f30:
    // 0x558f30: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x558f30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_558f34:
    // 0x558f34: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x558f34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_558f38:
    // 0x558f38: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x558f38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_558f3c:
    // 0x558f3c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x558f3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_558f40:
    // 0x558f40: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x558f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_558f44:
    // 0x558f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x558f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558f48:
    // 0x558f48: 0x44131000  mfc1        $s3, $f2
    ctx->pc = 0x558f48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_558f4c:
    // 0x558f4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x558f4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_558f50:
    // 0x558f50: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_558f54:
    if (ctx->pc == 0x558F54u) {
        ctx->pc = 0x558F54u;
            // 0x558f54: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x558F58u;
        goto label_558f58;
    }
    ctx->pc = 0x558F50u;
    {
        const bool branch_taken_0x558f50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x558f50) {
            ctx->pc = 0x558F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x558F50u;
            // 0x558f54: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x558F68u;
            goto label_558f68;
        }
    }
    ctx->pc = 0x558F58u;
label_558f58:
    // 0x558f58: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x558f58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_558f5c:
    // 0x558f5c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x558f5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_558f60:
    // 0x558f60: 0x10000007  b           . + 4 + (0x7 << 2)
label_558f64:
    if (ctx->pc == 0x558F64u) {
        ctx->pc = 0x558F64u;
            // 0x558f64: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x558F68u;
        goto label_558f68;
    }
    ctx->pc = 0x558F60u;
    {
        const bool branch_taken_0x558f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x558F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x558F60u;
            // 0x558f64: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x558f60) {
            ctx->pc = 0x558F80u;
            goto label_558f80;
        }
    }
    ctx->pc = 0x558F68u;
label_558f68:
    // 0x558f68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x558f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_558f6c:
    // 0x558f6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x558f6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_558f70:
    // 0x558f70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x558f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_558f74:
    // 0x558f74: 0x0  nop
    ctx->pc = 0x558f74u;
    // NOP
label_558f78:
    // 0x558f78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x558f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_558f7c:
    // 0x558f7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x558f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_558f80:
    // 0x558f80: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x558f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_558f84:
    // 0x558f84: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x558f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_558f88:
    // 0x558f88: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x558f88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_558f8c:
    // 0x558f8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x558f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_558f90:
    // 0x558f90: 0x8c5489e0  lw          $s4, -0x7620($v0)
    ctx->pc = 0x558f90u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_558f94:
    // 0x558f94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x558f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_558f98:
    // 0x558f98: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x558f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_558f9c:
    // 0x558f9c: 0xc0506ac  jal         func_141AB0
label_558fa0:
    if (ctx->pc == 0x558FA0u) {
        ctx->pc = 0x558FA0u;
            // 0x558fa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x558FA4u;
        goto label_558fa4;
    }
    ctx->pc = 0x558F9Cu;
    SET_GPR_U32(ctx, 31, 0x558FA4u);
    ctx->pc = 0x558FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x558F9Cu;
            // 0x558fa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558FA4u; }
        if (ctx->pc != 0x558FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x558FA4u; }
        if (ctx->pc != 0x558FA4u) { return; }
    }
    ctx->pc = 0x558FA4u;
label_558fa4:
    // 0x558fa4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x558fa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_558fa8:
    // 0x558fa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x558fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_558fac:
    // 0x558fac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x558facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_558fb0:
    // 0x558fb0: 0x320f809  jalr        $t9
label_558fb4:
    if (ctx->pc == 0x558FB4u) {
        ctx->pc = 0x558FB4u;
            // 0x558fb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x558FB8u;
        goto label_558fb8;
    }
    ctx->pc = 0x558FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x558FB8u);
        ctx->pc = 0x558FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x558FB0u;
            // 0x558fb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x558FB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x558FB8u; }
            if (ctx->pc != 0x558FB8u) { return; }
        }
        }
    }
    ctx->pc = 0x558FB8u;
label_558fb8:
    // 0x558fb8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x558fb8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558fbc:
    // 0x558fbc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x558fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_558fc0:
    // 0x558fc0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x558fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_558fc4:
    // 0x558fc4: 0x8471f0b0  lh          $s1, -0xF50($v1)
    ctx->pc = 0x558fc4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963376)));
label_558fc8:
    // 0x558fc8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x558fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_558fcc:
    // 0x558fcc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x558fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_558fd0:
    // 0x558fd0: 0x8452f0b2  lh          $s2, -0xF4E($v0)
    ctx->pc = 0x558fd0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963378)));
label_558fd4:
    // 0x558fd4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x558fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_558fd8:
    // 0x558fd8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x558fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_558fdc:
    // 0x558fdc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x558fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_558fe0:
    // 0x558fe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x558fe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_558fe4:
    // 0x558fe4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x558fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_558fe8:
    // 0x558fe8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x558fe8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558fec:
    // 0x558fec: 0x8442f0b0  lh          $v0, -0xF50($v0)
    ctx->pc = 0x558fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963376)));
label_558ff0:
    // 0x558ff0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x558ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_558ff4:
    // 0x558ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x558ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_558ff8:
    // 0x558ff8: 0x0  nop
    ctx->pc = 0x558ff8u;
    // NOP
label_558ffc:
    // 0x558ffc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x558ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_559000:
    // 0x559000: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x559000u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559004:
    // 0x559004: 0x0  nop
    ctx->pc = 0x559004u;
    // NOP
label_559008:
    // 0x559008: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x559008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55900c:
    // 0x55900c: 0x4602ab01  sub.s       $f12, $f21, $f2
    ctx->pc = 0x55900cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_559010:
    // 0x559010: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x559010u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_559014:
    // 0x559014: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x559014u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_559018:
    // 0x559018: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x559018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_55901c:
    // 0x55901c: 0xc0bc284  jal         func_2F0A10
label_559020:
    if (ctx->pc == 0x559020u) {
        ctx->pc = 0x559020u;
            // 0x559020: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->pc = 0x559024u;
        goto label_559024;
    }
    ctx->pc = 0x55901Cu;
    SET_GPR_U32(ctx, 31, 0x559024u);
    ctx->pc = 0x559020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55901Cu;
            // 0x559020: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559024u; }
        if (ctx->pc != 0x559024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559024u; }
        if (ctx->pc != 0x559024u) { return; }
    }
    ctx->pc = 0x559024u;
label_559024:
    // 0x559024: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x559024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_559028:
    // 0x559028: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x559028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55902c:
    // 0x55902c: 0x320f809  jalr        $t9
label_559030:
    if (ctx->pc == 0x559030u) {
        ctx->pc = 0x559030u;
            // 0x559030: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559034u;
        goto label_559034;
    }
    ctx->pc = 0x55902Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x559034u);
        ctx->pc = 0x559030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55902Cu;
            // 0x559030: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x559034u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x559034u; }
            if (ctx->pc != 0x559034u) { return; }
        }
        }
    }
    ctx->pc = 0x559034u;
label_559034:
    // 0x559034: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x559034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_559038:
    // 0x559038: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x559038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_55903c:
    // 0x55903c: 0x1483016d  bne         $a0, $v1, . + 4 + (0x16D << 2)
label_559040:
    if (ctx->pc == 0x559040u) {
        ctx->pc = 0x559044u;
        goto label_559044;
    }
    ctx->pc = 0x55903Cu;
    {
        const bool branch_taken_0x55903c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x55903c) {
            ctx->pc = 0x5595F4u;
            goto label_5595f4;
        }
    }
    ctx->pc = 0x559044u;
label_559044:
    // 0x559044: 0xc60300a4  lwc1        $f3, 0xA4($s0)
    ctx->pc = 0x559044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_559048:
    // 0x559048: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x559048u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
label_55904c:
    // 0x55904c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x55904cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_559050:
    // 0x559050: 0x26b5f0f0  addiu       $s5, $s5, -0xF10
    ctx->pc = 0x559050u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963440));
label_559054:
    // 0x559054: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x559054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_559058:
    // 0x559058: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x559058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_55905c:
    // 0x55905c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x55905cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_559060:
    // 0x559060: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x559060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_559064:
    // 0x559064: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x559064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559068:
    // 0x559068: 0xc60500c0  lwc1        $f5, 0xC0($s0)
    ctx->pc = 0x559068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_55906c:
    // 0x55906c: 0x46021d41  sub.s       $f21, $f3, $f2
    ctx->pc = 0x55906cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_559070:
    // 0x559070: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x559070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_559074:
    // 0x559074: 0xc60200bc  lwc1        $f2, 0xBC($s0)
    ctx->pc = 0x559074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_559078:
    // 0x559078: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x559078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55907c:
    // 0x55907c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55907cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559080:
    // 0x559080: 0x46021d00  add.s       $f20, $f3, $f2
    ctx->pc = 0x559080u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_559084:
    // 0x559084: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x559084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_559088:
    // 0x559088: 0xc6a2000c  lwc1        $f2, 0xC($s5)
    ctx->pc = 0x559088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55908c:
    // 0x55908c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x55908cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_559090:
    // 0x559090: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x559090u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_559094:
    // 0x559094: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x559094u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_559098:
    // 0x559098: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x559098u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_55909c:
    // 0x55909c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x55909cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_5590a0:
    // 0x5590a0: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5590a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_5590a4:
    // 0x5590a4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5590a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_5590a8:
    // 0x5590a8: 0x44101800  mfc1        $s0, $f3
    ctx->pc = 0x5590a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_5590ac:
    // 0x5590ac: 0x44161000  mfc1        $s6, $f2
    ctx->pc = 0x5590acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_5590b0:
    // 0x5590b0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_5590b4:
    if (ctx->pc == 0x5590B4u) {
        ctx->pc = 0x5590B4u;
            // 0x5590b4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x5590B8u;
        goto label_5590b8;
    }
    ctx->pc = 0x5590B0u;
    {
        const bool branch_taken_0x5590b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5590b0) {
            ctx->pc = 0x5590B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5590B0u;
            // 0x5590b4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5590C8u;
            goto label_5590c8;
        }
    }
    ctx->pc = 0x5590B8u;
label_5590b8:
    // 0x5590b8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5590b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5590bc:
    // 0x5590bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x5590bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_5590c0:
    // 0x5590c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_5590c4:
    if (ctx->pc == 0x5590C4u) {
        ctx->pc = 0x5590C4u;
            // 0x5590c4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x5590C8u;
        goto label_5590c8;
    }
    ctx->pc = 0x5590C0u;
    {
        const bool branch_taken_0x5590c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5590C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5590C0u;
            // 0x5590c4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5590c0) {
            ctx->pc = 0x5590E0u;
            goto label_5590e0;
        }
    }
    ctx->pc = 0x5590C8u;
label_5590c8:
    // 0x5590c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x5590c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_5590cc:
    // 0x5590cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5590ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5590d0:
    // 0x5590d0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x5590d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_5590d4:
    // 0x5590d4: 0x0  nop
    ctx->pc = 0x5590d4u;
    // NOP
label_5590d8:
    // 0x5590d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5590d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5590dc:
    // 0x5590dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x5590dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_5590e0:
    // 0x5590e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x5590e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_5590e4:
    // 0x5590e4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x5590e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_5590e8:
    // 0x5590e8: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x5590e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5590ec:
    // 0x5590ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5590ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5590f0:
    // 0x5590f0: 0x8c5389e0  lw          $s3, -0x7620($v0)
    ctx->pc = 0x5590f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5590f4:
    // 0x5590f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5590f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5590f8:
    // 0x5590f8: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x5590f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_5590fc:
    // 0x5590fc: 0xc0506ac  jal         func_141AB0
label_559100:
    if (ctx->pc == 0x559100u) {
        ctx->pc = 0x559100u;
            // 0x559100: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559104u;
        goto label_559104;
    }
    ctx->pc = 0x5590FCu;
    SET_GPR_U32(ctx, 31, 0x559104u);
    ctx->pc = 0x559100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5590FCu;
            // 0x559100: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559104u; }
        if (ctx->pc != 0x559104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559104u; }
        if (ctx->pc != 0x559104u) { return; }
    }
    ctx->pc = 0x559104u;
label_559104:
    // 0x559104: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x559104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_559108:
    // 0x559108: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x559108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55910c:
    // 0x55910c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55910cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_559110:
    // 0x559110: 0x320f809  jalr        $t9
label_559114:
    if (ctx->pc == 0x559114u) {
        ctx->pc = 0x559114u;
            // 0x559114: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x559118u;
        goto label_559118;
    }
    ctx->pc = 0x559110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x559118u);
        ctx->pc = 0x559114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559110u;
            // 0x559114: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x559118u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x559118u; }
            if (ctx->pc != 0x559118u) { return; }
        }
        }
    }
    ctx->pc = 0x559118u;
label_559118:
    // 0x559118: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x559118u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55911c:
    // 0x55911c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x55911cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_559120:
    // 0x559120: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x559120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_559124:
    // 0x559124: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x559124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_559128:
    // 0x559128: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x559128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55912c:
    // 0x55912c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55912cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_559130:
    // 0x559130: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x559130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_559134:
    // 0x559134: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x559134u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559138:
    // 0x559138: 0x0  nop
    ctx->pc = 0x559138u;
    // NOP
label_55913c:
    // 0x55913c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x55913cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_559140:
    // 0x559140: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x559140u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559144:
    // 0x559144: 0x0  nop
    ctx->pc = 0x559144u;
    // NOP
label_559148:
    // 0x559148: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x559148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55914c:
    // 0x55914c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x55914cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559150:
    // 0x559150: 0x0  nop
    ctx->pc = 0x559150u;
    // NOP
label_559154:
    // 0x559154: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x559154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_559158:
    // 0x559158: 0x4602ab01  sub.s       $f12, $f21, $f2
    ctx->pc = 0x559158u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_55915c:
    // 0x55915c: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x55915cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_559160:
    // 0x559160: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x559160u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_559164:
    // 0x559164: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x559164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_559168:
    // 0x559168: 0xc0bc284  jal         func_2F0A10
label_55916c:
    if (ctx->pc == 0x55916Cu) {
        ctx->pc = 0x55916Cu;
            // 0x55916c: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->pc = 0x559170u;
        goto label_559170;
    }
    ctx->pc = 0x559168u;
    SET_GPR_U32(ctx, 31, 0x559170u);
    ctx->pc = 0x55916Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x559168u;
            // 0x55916c: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559170u; }
        if (ctx->pc != 0x559170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559170u; }
        if (ctx->pc != 0x559170u) { return; }
    }
    ctx->pc = 0x559170u;
label_559170:
    // 0x559170: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x559170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_559174:
    // 0x559174: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x559174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_559178:
    // 0x559178: 0x320f809  jalr        $t9
label_55917c:
    if (ctx->pc == 0x55917Cu) {
        ctx->pc = 0x55917Cu;
            // 0x55917c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559180u;
        goto label_559180;
    }
    ctx->pc = 0x559178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x559180u);
        ctx->pc = 0x55917Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559178u;
            // 0x55917c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x559180u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x559180u; }
            if (ctx->pc != 0x559180u) { return; }
        }
        }
    }
    ctx->pc = 0x559180u;
label_559180:
    // 0x559180: 0x1000011c  b           . + 4 + (0x11C << 2)
label_559184:
    if (ctx->pc == 0x559184u) {
        ctx->pc = 0x559188u;
        goto label_559188;
    }
    ctx->pc = 0x559180u;
    {
        const bool branch_taken_0x559180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x559180) {
            ctx->pc = 0x5595F4u;
            goto label_5595f4;
        }
    }
    ctx->pc = 0x559188u;
label_559188:
    // 0x559188: 0xc60500a8  lwc1        $f5, 0xA8($s0)
    ctx->pc = 0x559188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_55918c:
    // 0x55918c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55918cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_559190:
    // 0x559190: 0xc443f0c8  lwc1        $f3, -0xF38($v0)
    ctx->pc = 0x559190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_559194:
    // 0x559194: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x559194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_559198:
    // 0x559198: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x559198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55919c:
    // 0x55919c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x55919cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_5591a0:
    // 0x5591a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x5591a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_5591a4:
    // 0x5591a4: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x5591a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5591a8:
    // 0x5591a8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x5591a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_5591ac:
    // 0x5591ac: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5591acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5591b0:
    // 0x5591b0: 0x46012d00  add.s       $f20, $f5, $f1
    ctx->pc = 0x5591b0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_5591b4:
    // 0x5591b4: 0xc60500c0  lwc1        $f5, 0xC0($s0)
    ctx->pc = 0x5591b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_5591b8:
    // 0x5591b8: 0xc442f0cc  lwc1        $f2, -0xF34($v0)
    ctx->pc = 0x5591b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5591bc:
    // 0x5591bc: 0x468001e0  cvt.s.w     $f7, $f0
    ctx->pc = 0x5591bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
label_5591c0:
    // 0x5591c0: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x5591c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_5591c4:
    // 0x5591c4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x5591c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_5591c8:
    // 0x5591c8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x5591c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_5591cc:
    // 0x5591cc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x5591ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_5591d0:
    // 0x5591d0: 0xc60600b8  lwc1        $f6, 0xB8($s0)
    ctx->pc = 0x5591d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_5591d4:
    // 0x5591d4: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5591d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_5591d8:
    // 0x5591d8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5591d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_5591dc:
    // 0x5591dc: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x5591dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5591e0:
    // 0x5591e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5591e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5591e4:
    // 0x5591e4: 0x0  nop
    ctx->pc = 0x5591e4u;
    // NOP
label_5591e8:
    // 0x5591e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x5591e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5591ec:
    // 0x5591ec: 0x44111800  mfc1        $s1, $f3
    ctx->pc = 0x5591ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_5591f0:
    // 0x5591f0: 0x44101000  mfc1        $s0, $f2
    ctx->pc = 0x5591f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_5591f4:
    // 0x5591f4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_5591f8:
    if (ctx->pc == 0x5591F8u) {
        ctx->pc = 0x5591F8u;
            // 0x5591f8: 0x46063d40  add.s       $f21, $f7, $f6 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->pc = 0x5591FCu;
        goto label_5591fc;
    }
    ctx->pc = 0x5591F4u;
    {
        const bool branch_taken_0x5591f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5591F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5591F4u;
            // 0x5591f8: 0x46063d40  add.s       $f21, $f7, $f6 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5591f4) {
            ctx->pc = 0x55920Cu;
            goto label_55920c;
        }
    }
    ctx->pc = 0x5591FCu;
label_5591fc:
    // 0x5591fc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5591fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_559200:
    // 0x559200: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x559200u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_559204:
    // 0x559204: 0x10000008  b           . + 4 + (0x8 << 2)
label_559208:
    if (ctx->pc == 0x559208u) {
        ctx->pc = 0x559208u;
            // 0x559208: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x55920Cu;
        goto label_55920c;
    }
    ctx->pc = 0x559204u;
    {
        const bool branch_taken_0x559204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x559208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559204u;
            // 0x559208: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x559204) {
            ctx->pc = 0x559228u;
            goto label_559228;
        }
    }
    ctx->pc = 0x55920Cu;
label_55920c:
    // 0x55920c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x55920cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_559210:
    // 0x559210: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x559210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_559214:
    // 0x559214: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x559214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_559218:
    // 0x559218: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x559218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_55921c:
    // 0x55921c: 0x0  nop
    ctx->pc = 0x55921cu;
    // NOP
label_559220:
    // 0x559220: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x559220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_559224:
    // 0x559224: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x559224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_559228:
    // 0x559228: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x559228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_55922c:
    // 0x55922c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x55922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_559230:
    // 0x559230: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x559230u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_559234:
    // 0x559234: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x559234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_559238:
    // 0x559238: 0x8c5289e0  lw          $s2, -0x7620($v0)
    ctx->pc = 0x559238u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_55923c:
    // 0x55923c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x55923cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_559240:
    // 0x559240: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x559240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_559244:
    // 0x559244: 0xc0506ac  jal         func_141AB0
label_559248:
    if (ctx->pc == 0x559248u) {
        ctx->pc = 0x559248u;
            // 0x559248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55924Cu;
        goto label_55924c;
    }
    ctx->pc = 0x559244u;
    SET_GPR_U32(ctx, 31, 0x55924Cu);
    ctx->pc = 0x559248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x559244u;
            // 0x559248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55924Cu; }
        if (ctx->pc != 0x55924Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55924Cu; }
        if (ctx->pc != 0x55924Cu) { return; }
    }
    ctx->pc = 0x55924Cu;
label_55924c:
    // 0x55924c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x55924cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_559250:
    // 0x559250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x559250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_559254:
    // 0x559254: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x559254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_559258:
    // 0x559258: 0x320f809  jalr        $t9
label_55925c:
    if (ctx->pc == 0x55925Cu) {
        ctx->pc = 0x55925Cu;
            // 0x55925c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x559260u;
        goto label_559260;
    }
    ctx->pc = 0x559258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x559260u);
        ctx->pc = 0x55925Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559258u;
            // 0x55925c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x559260u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x559260u; }
            if (ctx->pc != 0x559260u) { return; }
        }
        }
    }
    ctx->pc = 0x559260u;
label_559260:
    // 0x559260: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x559260u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559264:
    // 0x559264: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x559264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_559268:
    // 0x559268: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x559268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_55926c:
    // 0x55926c: 0x8448f0b0  lh          $t0, -0xF50($v0)
    ctx->pc = 0x55926cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963376)));
label_559270:
    // 0x559270: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x559270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_559274:
    // 0x559274: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x559274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_559278:
    // 0x559278: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x559278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55927c:
    // 0x55927c: 0x24a5f0c0  addiu       $a1, $a1, -0xF40
    ctx->pc = 0x55927cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963392));
label_559280:
    // 0x559280: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x559280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_559284:
    // 0x559284: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x559284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_559288:
    // 0x559288: 0x8443f0b2  lh          $v1, -0xF4E($v0)
    ctx->pc = 0x559288u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963378)));
label_55928c:
    // 0x55928c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x55928cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559290:
    // 0x559290: 0x0  nop
    ctx->pc = 0x559290u;
    // NOP
label_559294:
    // 0x559294: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x559294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_559298:
    // 0x559298: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x559298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_55929c:
    // 0x55929c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x55929cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5592a0:
    // 0x5592a0: 0x0  nop
    ctx->pc = 0x5592a0u;
    // NOP
label_5592a4:
    // 0x5592a4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5592a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5592a8:
    // 0x5592a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5592a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5592ac:
    // 0x5592ac: 0x0  nop
    ctx->pc = 0x5592acu;
    // NOP
label_5592b0:
    // 0x5592b0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5592b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5592b4:
    // 0x5592b4: 0x4602ab01  sub.s       $f12, $f21, $f2
    ctx->pc = 0x5592b4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_5592b8:
    // 0x5592b8: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x5592b8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_5592bc:
    // 0x5592bc: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x5592bcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_5592c0:
    // 0x5592c0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5592c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5592c4:
    // 0x5592c4: 0xc0bc284  jal         func_2F0A10
label_5592c8:
    if (ctx->pc == 0x5592C8u) {
        ctx->pc = 0x5592C8u;
            // 0x5592c8: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->pc = 0x5592CCu;
        goto label_5592cc;
    }
    ctx->pc = 0x5592C4u;
    SET_GPR_U32(ctx, 31, 0x5592CCu);
    ctx->pc = 0x5592C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5592C4u;
            // 0x5592c8: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5592CCu; }
        if (ctx->pc != 0x5592CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5592CCu; }
        if (ctx->pc != 0x5592CCu) { return; }
    }
    ctx->pc = 0x5592CCu;
label_5592cc:
    // 0x5592cc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x5592ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5592d0:
    // 0x5592d0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5592d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5592d4:
    // 0x5592d4: 0x320f809  jalr        $t9
label_5592d8:
    if (ctx->pc == 0x5592D8u) {
        ctx->pc = 0x5592D8u;
            // 0x5592d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5592DCu;
        goto label_5592dc;
    }
    ctx->pc = 0x5592D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5592DCu);
        ctx->pc = 0x5592D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5592D4u;
            // 0x5592d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5592DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5592DCu; }
            if (ctx->pc != 0x5592DCu) { return; }
        }
        }
    }
    ctx->pc = 0x5592DCu;
label_5592dc:
    // 0x5592dc: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_5592e0:
    if (ctx->pc == 0x5592E0u) {
        ctx->pc = 0x5592E4u;
        goto label_5592e4;
    }
    ctx->pc = 0x5592DCu;
    {
        const bool branch_taken_0x5592dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5592dc) {
            ctx->pc = 0x5595F4u;
            goto label_5595f4;
        }
    }
    ctx->pc = 0x5592E4u;
label_5592e4:
    // 0x5592e4: 0xc60300a4  lwc1        $f3, 0xA4($s0)
    ctx->pc = 0x5592e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5592e8:
    // 0x5592e8: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x5592e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_5592ec:
    // 0x5592ec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x5592ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_5592f0:
    // 0x5592f0: 0x2694f0d0  addiu       $s4, $s4, -0xF30
    ctx->pc = 0x5592f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963408));
label_5592f4:
    // 0x5592f4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x5592f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_5592f8:
    // 0x5592f8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x5592f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_5592fc:
    // 0x5592fc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x5592fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_559300:
    // 0x559300: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x559300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_559304:
    // 0x559304: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x559304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559308:
    // 0x559308: 0xc60500c0  lwc1        $f5, 0xC0($s0)
    ctx->pc = 0x559308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_55930c:
    // 0x55930c: 0x46021d40  add.s       $f21, $f3, $f2
    ctx->pc = 0x55930cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_559310:
    // 0x559310: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x559310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_559314:
    // 0x559314: 0xc60200bc  lwc1        $f2, 0xBC($s0)
    ctx->pc = 0x559314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_559318:
    // 0x559318: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x559318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55931c:
    // 0x55931c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55931cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559320:
    // 0x559320: 0x46021d00  add.s       $f20, $f3, $f2
    ctx->pc = 0x559320u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_559324:
    // 0x559324: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x559324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_559328:
    // 0x559328: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x559328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55932c:
    // 0x55932c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x55932cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_559330:
    // 0x559330: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x559330u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_559334:
    // 0x559334: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x559334u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_559338:
    // 0x559338: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x559338u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_55933c:
    // 0x55933c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x55933cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_559340:
    // 0x559340: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x559340u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_559344:
    // 0x559344: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x559344u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_559348:
    // 0x559348: 0x44111800  mfc1        $s1, $f3
    ctx->pc = 0x559348u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_55934c:
    // 0x55934c: 0x44101000  mfc1        $s0, $f2
    ctx->pc = 0x55934cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_559350:
    // 0x559350: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_559354:
    if (ctx->pc == 0x559354u) {
        ctx->pc = 0x559354u;
            // 0x559354: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x559358u;
        goto label_559358;
    }
    ctx->pc = 0x559350u;
    {
        const bool branch_taken_0x559350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x559350) {
            ctx->pc = 0x559354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x559350u;
            // 0x559354: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x559368u;
            goto label_559368;
        }
    }
    ctx->pc = 0x559358u;
label_559358:
    // 0x559358: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x559358u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_55935c:
    // 0x55935c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x55935cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_559360:
    // 0x559360: 0x10000007  b           . + 4 + (0x7 << 2)
label_559364:
    if (ctx->pc == 0x559364u) {
        ctx->pc = 0x559364u;
            // 0x559364: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x559368u;
        goto label_559368;
    }
    ctx->pc = 0x559360u;
    {
        const bool branch_taken_0x559360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x559364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559360u;
            // 0x559364: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x559360) {
            ctx->pc = 0x559380u;
            goto label_559380;
        }
    }
    ctx->pc = 0x559368u;
label_559368:
    // 0x559368: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x559368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_55936c:
    // 0x55936c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55936cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_559370:
    // 0x559370: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x559370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_559374:
    // 0x559374: 0x0  nop
    ctx->pc = 0x559374u;
    // NOP
label_559378:
    // 0x559378: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x559378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55937c:
    // 0x55937c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x55937cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_559380:
    // 0x559380: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x559380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_559384:
    // 0x559384: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x559384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_559388:
    // 0x559388: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x559388u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55938c:
    // 0x55938c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55938cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_559390:
    // 0x559390: 0x8c5289e0  lw          $s2, -0x7620($v0)
    ctx->pc = 0x559390u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_559394:
    // 0x559394: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x559394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_559398:
    // 0x559398: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x559398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_55939c:
    // 0x55939c: 0xc0506ac  jal         func_141AB0
label_5593a0:
    if (ctx->pc == 0x5593A0u) {
        ctx->pc = 0x5593A0u;
            // 0x5593a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5593A4u;
        goto label_5593a4;
    }
    ctx->pc = 0x55939Cu;
    SET_GPR_U32(ctx, 31, 0x5593A4u);
    ctx->pc = 0x5593A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55939Cu;
            // 0x5593a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5593A4u; }
        if (ctx->pc != 0x5593A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5593A4u; }
        if (ctx->pc != 0x5593A4u) { return; }
    }
    ctx->pc = 0x5593A4u;
label_5593a4:
    // 0x5593a4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x5593a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5593a8:
    // 0x5593a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5593a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5593ac:
    // 0x5593ac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5593acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5593b0:
    // 0x5593b0: 0x320f809  jalr        $t9
label_5593b4:
    if (ctx->pc == 0x5593B4u) {
        ctx->pc = 0x5593B4u;
            // 0x5593b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5593B8u;
        goto label_5593b8;
    }
    ctx->pc = 0x5593B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5593B8u);
        ctx->pc = 0x5593B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5593B0u;
            // 0x5593b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5593B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5593B8u; }
            if (ctx->pc != 0x5593B8u) { return; }
        }
        }
    }
    ctx->pc = 0x5593B8u;
label_5593b8:
    // 0x5593b8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5593b8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5593bc:
    // 0x5593bc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x5593bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_5593c0:
    // 0x5593c0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x5593c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_5593c4:
    // 0x5593c4: 0x8468f0b0  lh          $t0, -0xF50($v1)
    ctx->pc = 0x5593c4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963376)));
label_5593c8:
    // 0x5593c8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5593c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5593cc:
    // 0x5593cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x5593ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5593d0:
    // 0x5593d0: 0x8442f0b2  lh          $v0, -0xF4E($v0)
    ctx->pc = 0x5593d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963378)));
label_5593d4:
    // 0x5593d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5593d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5593d8:
    // 0x5593d8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x5593d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_5593dc:
    // 0x5593dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5593dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5593e0:
    // 0x5593e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5593e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5593e4:
    // 0x5593e4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x5593e4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5593e8:
    // 0x5593e8: 0x0  nop
    ctx->pc = 0x5593e8u;
    // NOP
label_5593ec:
    // 0x5593ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x5593ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_5593f0:
    // 0x5593f0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x5593f0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5593f4:
    // 0x5593f4: 0x0  nop
    ctx->pc = 0x5593f4u;
    // NOP
label_5593f8:
    // 0x5593f8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5593f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5593fc:
    // 0x5593fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5593fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559400:
    // 0x559400: 0x0  nop
    ctx->pc = 0x559400u;
    // NOP
label_559404:
    // 0x559404: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x559404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_559408:
    // 0x559408: 0x4602ab01  sub.s       $f12, $f21, $f2
    ctx->pc = 0x559408u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_55940c:
    // 0x55940c: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x55940cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_559410:
    // 0x559410: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x559410u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_559414:
    // 0x559414: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x559414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_559418:
    // 0x559418: 0xc0bc284  jal         func_2F0A10
label_55941c:
    if (ctx->pc == 0x55941Cu) {
        ctx->pc = 0x55941Cu;
            // 0x55941c: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->pc = 0x559420u;
        goto label_559420;
    }
    ctx->pc = 0x559418u;
    SET_GPR_U32(ctx, 31, 0x559420u);
    ctx->pc = 0x55941Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x559418u;
            // 0x55941c: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559420u; }
        if (ctx->pc != 0x559420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559420u; }
        if (ctx->pc != 0x559420u) { return; }
    }
    ctx->pc = 0x559420u;
label_559420:
    // 0x559420: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x559420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_559424:
    // 0x559424: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x559424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_559428:
    // 0x559428: 0x320f809  jalr        $t9
label_55942c:
    if (ctx->pc == 0x55942Cu) {
        ctx->pc = 0x55942Cu;
            // 0x55942c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559430u;
        goto label_559430;
    }
    ctx->pc = 0x559428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x559430u);
        ctx->pc = 0x55942Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559428u;
            // 0x55942c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x559430u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x559430u; }
            if (ctx->pc != 0x559430u) { return; }
        }
        }
    }
    ctx->pc = 0x559430u;
label_559430:
    // 0x559430: 0x10000070  b           . + 4 + (0x70 << 2)
label_559434:
    if (ctx->pc == 0x559434u) {
        ctx->pc = 0x559438u;
        goto label_559438;
    }
    ctx->pc = 0x559430u;
    {
        const bool branch_taken_0x559430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x559430) {
            ctx->pc = 0x5595F4u;
            goto label_5595f4;
        }
    }
    ctx->pc = 0x559438u;
label_559438:
    // 0x559438: 0xc60300a4  lwc1        $f3, 0xA4($s0)
    ctx->pc = 0x559438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_55943c:
    // 0x55943c: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x55943cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_559440:
    // 0x559440: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x559440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_559444:
    // 0x559444: 0x2694f0e0  addiu       $s4, $s4, -0xF20
    ctx->pc = 0x559444u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963424));
label_559448:
    // 0x559448: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x559448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_55944c:
    // 0x55944c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x55944cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_559450:
    // 0x559450: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x559450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_559454:
    // 0x559454: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x559454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_559458:
    // 0x559458: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x559458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55945c:
    // 0x55945c: 0xc60500c0  lwc1        $f5, 0xC0($s0)
    ctx->pc = 0x55945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_559460:
    // 0x559460: 0x46021d40  add.s       $f21, $f3, $f2
    ctx->pc = 0x559460u;
    ctx->f[21] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_559464:
    // 0x559464: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x559464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_559468:
    // 0x559468: 0xc60200bc  lwc1        $f2, 0xBC($s0)
    ctx->pc = 0x559468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55946c:
    // 0x55946c: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x55946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_559470:
    // 0x559470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x559470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559474:
    // 0x559474: 0x46021d00  add.s       $f20, $f3, $f2
    ctx->pc = 0x559474u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_559478:
    // 0x559478: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x559478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_55947c:
    // 0x55947c: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x55947cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_559480:
    // 0x559480: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x559480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_559484:
    // 0x559484: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x559484u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_559488:
    // 0x559488: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x559488u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_55948c:
    // 0x55948c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x55948cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_559490:
    // 0x559490: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x559490u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_559494:
    // 0x559494: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x559494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_559498:
    // 0x559498: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x559498u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_55949c:
    // 0x55949c: 0x44111800  mfc1        $s1, $f3
    ctx->pc = 0x55949cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_5594a0:
    // 0x5594a0: 0x44101000  mfc1        $s0, $f2
    ctx->pc = 0x5594a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_5594a4:
    // 0x5594a4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_5594a8:
    if (ctx->pc == 0x5594A8u) {
        ctx->pc = 0x5594A8u;
            // 0x5594a8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x5594ACu;
        goto label_5594ac;
    }
    ctx->pc = 0x5594A4u;
    {
        const bool branch_taken_0x5594a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5594a4) {
            ctx->pc = 0x5594A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5594A4u;
            // 0x5594a8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5594BCu;
            goto label_5594bc;
        }
    }
    ctx->pc = 0x5594ACu;
label_5594ac:
    // 0x5594ac: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5594acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5594b0:
    // 0x5594b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x5594b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_5594b4:
    // 0x5594b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_5594b8:
    if (ctx->pc == 0x5594B8u) {
        ctx->pc = 0x5594B8u;
            // 0x5594b8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x5594BCu;
        goto label_5594bc;
    }
    ctx->pc = 0x5594B4u;
    {
        const bool branch_taken_0x5594b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5594B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5594B4u;
            // 0x5594b8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5594b4) {
            ctx->pc = 0x5594D4u;
            goto label_5594d4;
        }
    }
    ctx->pc = 0x5594BCu;
label_5594bc:
    // 0x5594bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x5594bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_5594c0:
    // 0x5594c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5594c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5594c4:
    // 0x5594c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x5594c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_5594c8:
    // 0x5594c8: 0x0  nop
    ctx->pc = 0x5594c8u;
    // NOP
label_5594cc:
    // 0x5594cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5594ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5594d0:
    // 0x5594d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x5594d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_5594d4:
    // 0x5594d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x5594d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_5594d8:
    // 0x5594d8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x5594d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_5594dc:
    // 0x5594dc: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x5594dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5594e0:
    // 0x5594e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5594e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5594e4:
    // 0x5594e4: 0x8c5289e0  lw          $s2, -0x7620($v0)
    ctx->pc = 0x5594e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5594e8:
    // 0x5594e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5594e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5594ec:
    // 0x5594ec: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x5594ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_5594f0:
    // 0x5594f0: 0xc0506ac  jal         func_141AB0
label_5594f4:
    if (ctx->pc == 0x5594F4u) {
        ctx->pc = 0x5594F4u;
            // 0x5594f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5594F8u;
        goto label_5594f8;
    }
    ctx->pc = 0x5594F0u;
    SET_GPR_U32(ctx, 31, 0x5594F8u);
    ctx->pc = 0x5594F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5594F0u;
            // 0x5594f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5594F8u; }
        if (ctx->pc != 0x5594F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5594F8u; }
        if (ctx->pc != 0x5594F8u) { return; }
    }
    ctx->pc = 0x5594F8u;
label_5594f8:
    // 0x5594f8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x5594f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5594fc:
    // 0x5594fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5594fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_559500:
    // 0x559500: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x559500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_559504:
    // 0x559504: 0x320f809  jalr        $t9
label_559508:
    if (ctx->pc == 0x559508u) {
        ctx->pc = 0x559508u;
            // 0x559508: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x55950Cu;
        goto label_55950c;
    }
    ctx->pc = 0x559504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55950Cu);
        ctx->pc = 0x559508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559504u;
            // 0x559508: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55950Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55950Cu; }
            if (ctx->pc != 0x55950Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55950Cu;
label_55950c:
    // 0x55950c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x55950cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559510:
    // 0x559510: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x559510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_559514:
    // 0x559514: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x559514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_559518:
    // 0x559518: 0x8468f0b0  lh          $t0, -0xF50($v1)
    ctx->pc = 0x559518u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963376)));
label_55951c:
    // 0x55951c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_559520:
    // 0x559520: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x559520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_559524:
    // 0x559524: 0x8442f0b2  lh          $v0, -0xF4E($v0)
    ctx->pc = 0x559524u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963378)));
label_559528:
    // 0x559528: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x559528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55952c:
    // 0x55952c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x55952cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_559530:
    // 0x559530: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x559530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_559534:
    // 0x559534: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x559534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_559538:
    // 0x559538: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x559538u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55953c:
    // 0x55953c: 0x0  nop
    ctx->pc = 0x55953cu;
    // NOP
label_559540:
    // 0x559540: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x559540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_559544:
    // 0x559544: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x559544u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559548:
    // 0x559548: 0x0  nop
    ctx->pc = 0x559548u;
    // NOP
label_55954c:
    // 0x55954c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55954cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_559550:
    // 0x559550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x559550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_559554:
    // 0x559554: 0x0  nop
    ctx->pc = 0x559554u;
    // NOP
label_559558:
    // 0x559558: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x559558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55955c:
    // 0x55955c: 0x4602ab01  sub.s       $f12, $f21, $f2
    ctx->pc = 0x55955cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_559560:
    // 0x559560: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x559560u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_559564:
    // 0x559564: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x559564u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_559568:
    // 0x559568: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x559568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_55956c:
    // 0x55956c: 0xc0bc284  jal         func_2F0A10
label_559570:
    if (ctx->pc == 0x559570u) {
        ctx->pc = 0x559570u;
            // 0x559570: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->pc = 0x559574u;
        goto label_559574;
    }
    ctx->pc = 0x55956Cu;
    SET_GPR_U32(ctx, 31, 0x559574u);
    ctx->pc = 0x559570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55956Cu;
            // 0x559570: 0x4601a3c0  add.s       $f15, $f20, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559574u; }
        if (ctx->pc != 0x559574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559574u; }
        if (ctx->pc != 0x559574u) { return; }
    }
    ctx->pc = 0x559574u;
label_559574:
    // 0x559574: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x559574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_559578:
    // 0x559578: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x559578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55957c:
    // 0x55957c: 0x320f809  jalr        $t9
label_559580:
    if (ctx->pc == 0x559580u) {
        ctx->pc = 0x559580u;
            // 0x559580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559584u;
        goto label_559584;
    }
    ctx->pc = 0x55957Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x559584u);
        ctx->pc = 0x559580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55957Cu;
            // 0x559580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x559584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x559584u; }
            if (ctx->pc != 0x559584u) { return; }
        }
        }
    }
    ctx->pc = 0x559584u;
label_559584:
    // 0x559584: 0x1000001b  b           . + 4 + (0x1B << 2)
label_559588:
    if (ctx->pc == 0x559588u) {
        ctx->pc = 0x55958Cu;
        goto label_55958c;
    }
    ctx->pc = 0x559584u;
    {
        const bool branch_taken_0x559584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x559584) {
            ctx->pc = 0x5595F4u;
            goto label_5595f4;
        }
    }
    ctx->pc = 0x55958Cu;
label_55958c:
    // 0x55958c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x55958cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_559590:
    // 0x559590: 0x8c6360a8  lw          $v1, 0x60A8($v1)
    ctx->pc = 0x559590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24744)));
label_559594:
    // 0x559594: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_559598:
    if (ctx->pc == 0x559598u) {
        ctx->pc = 0x55959Cu;
        goto label_55959c;
    }
    ctx->pc = 0x559594u;
    {
        const bool branch_taken_0x559594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x559594) {
            ctx->pc = 0x5595F4u;
            goto label_5595f4;
        }
    }
    ctx->pc = 0x55959Cu;
label_55959c:
    // 0x55959c: 0xc15610c  jal         func_558430
label_5595a0:
    if (ctx->pc == 0x5595A0u) {
        ctx->pc = 0x5595A0u;
            // 0x5595a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5595A4u;
        goto label_5595a4;
    }
    ctx->pc = 0x55959Cu;
    SET_GPR_U32(ctx, 31, 0x5595A4u);
    ctx->pc = 0x5595A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55959Cu;
            // 0x5595a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x558430u;
    goto label_558430;
    ctx->pc = 0x5595A4u;
label_5595a4:
    // 0x5595a4: 0x10000013  b           . + 4 + (0x13 << 2)
label_5595a8:
    if (ctx->pc == 0x5595A8u) {
        ctx->pc = 0x5595ACu;
        goto label_5595ac;
    }
    ctx->pc = 0x5595A4u;
    {
        const bool branch_taken_0x5595a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5595a4) {
            ctx->pc = 0x5595F4u;
            goto label_5595f4;
        }
    }
    ctx->pc = 0x5595ACu;
label_5595ac:
    // 0x5595ac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5595acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5595b0:
    // 0x5595b0: 0x8c6360a8  lw          $v1, 0x60A8($v1)
    ctx->pc = 0x5595b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24744)));
label_5595b4:
    // 0x5595b4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_5595b8:
    if (ctx->pc == 0x5595B8u) {
        ctx->pc = 0x5595BCu;
        goto label_5595bc;
    }
    ctx->pc = 0x5595B4u;
    {
        const bool branch_taken_0x5595b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5595b4) {
            ctx->pc = 0x5595F4u;
            goto label_5595f4;
        }
    }
    ctx->pc = 0x5595BCu;
label_5595bc:
    // 0x5595bc: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x5595bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_5595c0:
    // 0x5595c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5595c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5595c4:
    // 0x5595c4: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_5595c8:
    if (ctx->pc == 0x5595C8u) {
        ctx->pc = 0x5595C8u;
            // 0x5595c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5595CCu;
        goto label_5595cc;
    }
    ctx->pc = 0x5595C4u;
    {
        const bool branch_taken_0x5595c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5595c4) {
            ctx->pc = 0x5595C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5595C4u;
            // 0x5595c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5595ECu;
            goto label_5595ec;
        }
    }
    ctx->pc = 0x5595CCu;
label_5595cc:
    // 0x5595cc: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_5595d0:
    if (ctx->pc == 0x5595D0u) {
        ctx->pc = 0x5595D0u;
            // 0x5595d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5595D4u;
        goto label_5595d4;
    }
    ctx->pc = 0x5595CCu;
    {
        const bool branch_taken_0x5595cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5595cc) {
            ctx->pc = 0x5595D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5595CCu;
            // 0x5595d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5595DCu;
            goto label_5595dc;
        }
    }
    ctx->pc = 0x5595D4u;
label_5595d4:
    // 0x5595d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_5595d8:
    if (ctx->pc == 0x5595D8u) {
        ctx->pc = 0x5595DCu;
        goto label_5595dc;
    }
    ctx->pc = 0x5595D4u;
    {
        const bool branch_taken_0x5595d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5595d4) {
            ctx->pc = 0x5595F4u;
            goto label_5595f4;
        }
    }
    ctx->pc = 0x5595DCu;
label_5595dc:
    // 0x5595dc: 0xc156040  jal         func_558100
label_5595e0:
    if (ctx->pc == 0x5595E0u) {
        ctx->pc = 0x5595E4u;
        goto label_5595e4;
    }
    ctx->pc = 0x5595DCu;
    SET_GPR_U32(ctx, 31, 0x5595E4u);
    ctx->pc = 0x558100u;
    if (runtime->hasFunction(0x558100u)) {
        auto targetFn = runtime->lookupFunction(0x558100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5595E4u; }
        if (ctx->pc != 0x5595E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00558100_0x558100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5595E4u; }
        if (ctx->pc != 0x5595E4u) { return; }
    }
    ctx->pc = 0x5595E4u;
label_5595e4:
    // 0x5595e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_5595e8:
    if (ctx->pc == 0x5595E8u) {
        ctx->pc = 0x5595ECu;
        goto label_5595ec;
    }
    ctx->pc = 0x5595E4u;
    {
        const bool branch_taken_0x5595e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5595e4) {
            ctx->pc = 0x5595F4u;
            goto label_5595f4;
        }
    }
    ctx->pc = 0x5595ECu;
label_5595ec:
    // 0x5595ec: 0xc15610c  jal         func_558430
label_5595f0:
    if (ctx->pc == 0x5595F0u) {
        ctx->pc = 0x5595F4u;
        goto label_5595f4;
    }
    ctx->pc = 0x5595ECu;
    SET_GPR_U32(ctx, 31, 0x5595F4u);
    ctx->pc = 0x558430u;
    goto label_558430;
    ctx->pc = 0x5595F4u;
label_5595f4:
    // 0x5595f4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x5595f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_5595f8:
    // 0x5595f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x5595f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_5595fc:
    // 0x5595fc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x5595fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_559600:
    // 0x559600: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x559600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_559604:
    // 0x559604: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x559604u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_559608:
    // 0x559608: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x559608u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55960c:
    // 0x55960c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x55960cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_559610:
    // 0x559610: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x559610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_559614:
    // 0x559614: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x559614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_559618:
    // 0x559618: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x559618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55961c:
    // 0x55961c: 0x3e00008  jr          $ra
label_559620:
    if (ctx->pc == 0x559620u) {
        ctx->pc = 0x559620u;
            // 0x559620: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x559624u;
        goto label_559624;
    }
    ctx->pc = 0x55961Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x559620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55961Cu;
            // 0x559620: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x559624u;
label_559624:
    // 0x559624: 0x0  nop
    ctx->pc = 0x559624u;
    // NOP
label_559628:
    // 0x559628: 0x0  nop
    ctx->pc = 0x559628u;
    // NOP
label_55962c:
    // 0x55962c: 0x0  nop
    ctx->pc = 0x55962cu;
    // NOP
label_559630:
    // 0x559630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x559630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_559634:
    // 0x559634: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x559634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_559638:
    // 0x559638: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x559638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_55963c:
    // 0x55963c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x55963cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_559640:
    // 0x559640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x559640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_559644:
    // 0x559644: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x559644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_559648:
    // 0x559648: 0x8c70a348  lw          $s0, -0x5CB8($v1)
    ctx->pc = 0x559648u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_55964c:
    // 0x55964c: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x55964cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_559650:
    // 0x559650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x559650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_559654:
    // 0x559654: 0x10c300b7  beq         $a2, $v1, . + 4 + (0xB7 << 2)
label_559658:
    if (ctx->pc == 0x559658u) {
        ctx->pc = 0x559658u;
            // 0x559658: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55965Cu;
        goto label_55965c;
    }
    ctx->pc = 0x559654u;
    {
        const bool branch_taken_0x559654 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x559658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559654u;
            // 0x559658: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559654) {
            ctx->pc = 0x559934u;
            goto label_559934;
        }
    }
    ctx->pc = 0x55965Cu;
label_55965c:
    // 0x55965c: 0x50c000b0  beql        $a2, $zero, . + 4 + (0xB0 << 2)
label_559660:
    if (ctx->pc == 0x559660u) {
        ctx->pc = 0x559660u;
            // 0x559660: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x559664u;
        goto label_559664;
    }
    ctx->pc = 0x55965Cu;
    {
        const bool branch_taken_0x55965c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x55965c) {
            ctx->pc = 0x559660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55965Cu;
            // 0x559660: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x559920u;
            goto label_559920;
        }
    }
    ctx->pc = 0x559664u;
label_559664:
    // 0x559664: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x559664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_559668:
    // 0x559668: 0x50c5001f  beql        $a2, $a1, . + 4 + (0x1F << 2)
label_55966c:
    if (ctx->pc == 0x55966Cu) {
        ctx->pc = 0x55966Cu;
            // 0x55966c: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->pc = 0x559670u;
        goto label_559670;
    }
    ctx->pc = 0x559668u;
    {
        const bool branch_taken_0x559668 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x559668) {
            ctx->pc = 0x55966Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x559668u;
            // 0x55966c: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5596E8u;
            goto label_5596e8;
        }
    }
    ctx->pc = 0x559670u;
label_559670:
    // 0x559670: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x559670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_559674:
    // 0x559674: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_559678:
    if (ctx->pc == 0x559678u) {
        ctx->pc = 0x559678u;
            // 0x559678: 0x8e46009c  lw          $a2, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->pc = 0x55967Cu;
        goto label_55967c;
    }
    ctx->pc = 0x559674u;
    {
        const bool branch_taken_0x559674 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x559674) {
            ctx->pc = 0x559678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x559674u;
            // 0x559678: 0x8e46009c  lw          $a2, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x559684u;
            goto label_559684;
        }
    }
    ctx->pc = 0x55967Cu;
label_55967c:
    // 0x55967c: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_559680:
    if (ctx->pc == 0x559680u) {
        ctx->pc = 0x559680u;
            // 0x559680: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x559684u;
        goto label_559684;
    }
    ctx->pc = 0x55967Cu;
    {
        const bool branch_taken_0x55967c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x559680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55967Cu;
            // 0x559680: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55967c) {
            ctx->pc = 0x55994Cu;
            goto label_55994c;
        }
    }
    ctx->pc = 0x559684u;
label_559684:
    // 0x559684: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x559684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_559688:
    // 0x559688: 0x50c30007  beql        $a2, $v1, . + 4 + (0x7 << 2)
label_55968c:
    if (ctx->pc == 0x55968Cu) {
        ctx->pc = 0x55968Cu;
            // 0x55968c: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x559690u;
        goto label_559690;
    }
    ctx->pc = 0x559688u;
    {
        const bool branch_taken_0x559688 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x559688) {
            ctx->pc = 0x55968Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x559688u;
            // 0x55968c: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5596A8u;
            goto label_5596a8;
        }
    }
    ctx->pc = 0x559690u;
label_559690:
    // 0x559690: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x559690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_559694:
    // 0x559694: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
label_559698:
    if (ctx->pc == 0x559698u) {
        ctx->pc = 0x55969Cu;
        goto label_55969c;
    }
    ctx->pc = 0x559694u;
    {
        const bool branch_taken_0x559694 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x559694) {
            ctx->pc = 0x5596A4u;
            goto label_5596a4;
        }
    }
    ctx->pc = 0x55969Cu;
label_55969c:
    // 0x55969c: 0x10000008  b           . + 4 + (0x8 << 2)
label_5596a0:
    if (ctx->pc == 0x5596A0u) {
        ctx->pc = 0x5596A0u;
            // 0x5596a0: 0x8e4300cc  lw          $v1, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->pc = 0x5596A4u;
        goto label_5596a4;
    }
    ctx->pc = 0x55969Cu;
    {
        const bool branch_taken_0x55969c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5596A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55969Cu;
            // 0x5596a0: 0x8e4300cc  lw          $v1, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55969c) {
            ctx->pc = 0x5596C0u;
            goto label_5596c0;
        }
    }
    ctx->pc = 0x5596A4u;
label_5596a4:
    // 0x5596a4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x5596a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5596a8:
    // 0x5596a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5596a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5596ac:
    // 0x5596ac: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5596acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5596b0:
    // 0x5596b0: 0x320f809  jalr        $t9
label_5596b4:
    if (ctx->pc == 0x5596B4u) {
        ctx->pc = 0x5596B4u;
            // 0x5596b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5596B8u;
        goto label_5596b8;
    }
    ctx->pc = 0x5596B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5596B8u);
        ctx->pc = 0x5596B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5596B0u;
            // 0x5596b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5596B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5596B8u; }
            if (ctx->pc != 0x5596B8u) { return; }
        }
        }
    }
    ctx->pc = 0x5596B8u;
label_5596b8:
    // 0x5596b8: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_5596bc:
    if (ctx->pc == 0x5596BCu) {
        ctx->pc = 0x5596C0u;
        goto label_5596c0;
    }
    ctx->pc = 0x5596B8u;
    {
        const bool branch_taken_0x5596b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5596b8) {
            ctx->pc = 0x559948u;
            goto label_559948;
        }
    }
    ctx->pc = 0x5596C0u;
label_5596c0:
    // 0x5596c0: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x5596c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_5596c4:
    // 0x5596c4: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x5596c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_5596c8:
    // 0x5596c8: 0x1460009f  bnez        $v1, . + 4 + (0x9F << 2)
label_5596cc:
    if (ctx->pc == 0x5596CCu) {
        ctx->pc = 0x5596D0u;
        goto label_5596d0;
    }
    ctx->pc = 0x5596C8u;
    {
        const bool branch_taken_0x5596c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5596c8) {
            ctx->pc = 0x559948u;
            goto label_559948;
        }
    }
    ctx->pc = 0x5596D0u;
label_5596d0:
    // 0x5596d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5596d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5596d4:
    // 0x5596d4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5596d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5596d8:
    // 0x5596d8: 0x320f809  jalr        $t9
label_5596dc:
    if (ctx->pc == 0x5596DCu) {
        ctx->pc = 0x5596E0u;
        goto label_5596e0;
    }
    ctx->pc = 0x5596D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5596E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5596E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5596E0u; }
            if (ctx->pc != 0x5596E0u) { return; }
        }
        }
    }
    ctx->pc = 0x5596E0u;
label_5596e0:
    // 0x5596e0: 0x10000099  b           . + 4 + (0x99 << 2)
label_5596e4:
    if (ctx->pc == 0x5596E4u) {
        ctx->pc = 0x5596E8u;
        goto label_5596e8;
    }
    ctx->pc = 0x5596E0u;
    {
        const bool branch_taken_0x5596e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5596e0) {
            ctx->pc = 0x559948u;
            goto label_559948;
        }
    }
    ctx->pc = 0x5596E8u;
label_5596e8:
    // 0x5596e8: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_5596ec:
    if (ctx->pc == 0x5596ECu) {
        ctx->pc = 0x5596ECu;
            // 0x5596ec: 0x8e43009c  lw          $v1, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->pc = 0x5596F0u;
        goto label_5596f0;
    }
    ctx->pc = 0x5596E8u;
    {
        const bool branch_taken_0x5596e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5596e8) {
            ctx->pc = 0x5596ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5596E8u;
            // 0x5596ec: 0x8e43009c  lw          $v1, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x559710u;
            goto label_559710;
        }
    }
    ctx->pc = 0x5596F0u;
label_5596f0:
    // 0x5596f0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x5596f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_5596f4:
    // 0x5596f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_5596f8:
    if (ctx->pc == 0x5596F8u) {
        ctx->pc = 0x5596FCu;
        goto label_5596fc;
    }
    ctx->pc = 0x5596F4u;
    {
        const bool branch_taken_0x5596f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5596f4) {
            ctx->pc = 0x55970Cu;
            goto label_55970c;
        }
    }
    ctx->pc = 0x5596FCu;
label_5596fc:
    // 0x5596fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5596fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_559700:
    // 0x559700: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x559700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_559704:
    // 0x559704: 0x320f809  jalr        $t9
label_559708:
    if (ctx->pc == 0x559708u) {
        ctx->pc = 0x559708u;
            // 0x559708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55970Cu;
        goto label_55970c;
    }
    ctx->pc = 0x559704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55970Cu);
        ctx->pc = 0x559708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559704u;
            // 0x559708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55970Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55970Cu; }
            if (ctx->pc != 0x55970Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55970Cu;
label_55970c:
    // 0x55970c: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x55970cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_559710:
    // 0x559710: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x559710u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_559714:
    // 0x559714: 0x1020008c  beqz        $at, . + 4 + (0x8C << 2)
label_559718:
    if (ctx->pc == 0x559718u) {
        ctx->pc = 0x55971Cu;
        goto label_55971c;
    }
    ctx->pc = 0x559714u;
    {
        const bool branch_taken_0x559714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x559714) {
            ctx->pc = 0x559948u;
            goto label_559948;
        }
    }
    ctx->pc = 0x55971Cu;
label_55971c:
    // 0x55971c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x55971cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_559720:
    // 0x559720: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x559720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_559724:
    // 0x559724: 0x2484f330  addiu       $a0, $a0, -0xCD0
    ctx->pc = 0x559724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964016));
label_559728:
    // 0x559728: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x559728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_55972c:
    // 0x55972c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x55972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_559730:
    // 0x559730: 0x600008  jr          $v1
label_559734:
    if (ctx->pc == 0x559734u) {
        ctx->pc = 0x559738u;
        goto label_559738;
    }
    ctx->pc = 0x559730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x559738u: goto label_559738;
            case 0x559748u: goto label_559748;
            case 0x5598F0u: goto label_5598f0;
            case 0x559900u: goto label_559900;
            case 0x559910u: goto label_559910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x559738u;
label_559738:
    // 0x559738: 0xc156658  jal         func_559960
label_55973c:
    if (ctx->pc == 0x55973Cu) {
        ctx->pc = 0x55973Cu;
            // 0x55973c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559740u;
        goto label_559740;
    }
    ctx->pc = 0x559738u;
    SET_GPR_U32(ctx, 31, 0x559740u);
    ctx->pc = 0x55973Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x559738u;
            // 0x55973c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x559960u;
    if (runtime->hasFunction(0x559960u)) {
        auto targetFn = runtime->lookupFunction(0x559960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559740u; }
        if (ctx->pc != 0x559740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00559960_0x559960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559740u; }
        if (ctx->pc != 0x559740u) { return; }
    }
    ctx->pc = 0x559740u;
label_559740:
    // 0x559740: 0x10000081  b           . + 4 + (0x81 << 2)
label_559744:
    if (ctx->pc == 0x559744u) {
        ctx->pc = 0x559748u;
        goto label_559748;
    }
    ctx->pc = 0x559740u;
    {
        const bool branch_taken_0x559740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x559740) {
            ctx->pc = 0x559948u;
            goto label_559948;
        }
    }
    ctx->pc = 0x559748u;
label_559748:
    // 0x559748: 0x8e4300c8  lw          $v1, 0xC8($s2)
    ctx->pc = 0x559748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_55974c:
    // 0x55974c: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
label_559750:
    if (ctx->pc == 0x559750u) {
        ctx->pc = 0x559750u;
            // 0x559750: 0x8e4300cc  lw          $v1, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->pc = 0x559754u;
        goto label_559754;
    }
    ctx->pc = 0x55974Cu;
    {
        const bool branch_taken_0x55974c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x55974c) {
            ctx->pc = 0x559750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55974Cu;
            // 0x559750: 0x8e4300cc  lw          $v1, 0xCC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x559780u;
            goto label_559780;
        }
    }
    ctx->pc = 0x559754u;
label_559754:
    // 0x559754: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x559754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_559758:
    // 0x559758: 0x8c639764  lw          $v1, -0x689C($v1)
    ctx->pc = 0x559758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940516)));
label_55975c:
    // 0x55975c: 0x30630402  andi        $v1, $v1, 0x402
    ctx->pc = 0x55975cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1026);
label_559760:
    // 0x559760: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_559764:
    if (ctx->pc == 0x559764u) {
        ctx->pc = 0x559768u;
        goto label_559768;
    }
    ctx->pc = 0x559760u;
    {
        const bool branch_taken_0x559760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x559760) {
            ctx->pc = 0x55977Cu;
            goto label_55977c;
        }
    }
    ctx->pc = 0x559768u;
label_559768:
    // 0x559768: 0xc073234  jal         func_1CC8D0
label_55976c:
    if (ctx->pc == 0x55976Cu) {
        ctx->pc = 0x55976Cu;
            // 0x55976c: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x559770u;
        goto label_559770;
    }
    ctx->pc = 0x559768u;
    SET_GPR_U32(ctx, 31, 0x559770u);
    ctx->pc = 0x55976Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x559768u;
            // 0x55976c: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559770u; }
        if (ctx->pc != 0x559770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559770u; }
        if (ctx->pc != 0x559770u) { return; }
    }
    ctx->pc = 0x559770u;
label_559770:
    // 0x559770: 0x8e4300c8  lw          $v1, 0xC8($s2)
    ctx->pc = 0x559770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_559774:
    // 0x559774: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x559774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_559778:
    // 0x559778: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x559778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
label_55977c:
    // 0x55977c: 0x8e4300cc  lw          $v1, 0xCC($s2)
    ctx->pc = 0x55977cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_559780:
    // 0x559780: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x559780u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_559784:
    // 0x559784: 0x2c63000b  sltiu       $v1, $v1, 0xB
    ctx->pc = 0x559784u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_559788:
    // 0x559788: 0x1460006f  bnez        $v1, . + 4 + (0x6F << 2)
label_55978c:
    if (ctx->pc == 0x55978Cu) {
        ctx->pc = 0x559790u;
        goto label_559790;
    }
    ctx->pc = 0x559788u;
    {
        const bool branch_taken_0x559788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x559788) {
            ctx->pc = 0x559948u;
            goto label_559948;
        }
    }
    ctx->pc = 0x559790u;
label_559790:
    // 0x559790: 0x8e4300c8  lw          $v1, 0xC8($s2)
    ctx->pc = 0x559790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_559794:
    // 0x559794: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_559798:
    if (ctx->pc == 0x559798u) {
        ctx->pc = 0x559798u;
            // 0x559798: 0x8e4300d0  lw          $v1, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->pc = 0x55979Cu;
        goto label_55979c;
    }
    ctx->pc = 0x559794u;
    {
        const bool branch_taken_0x559794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x559794) {
            ctx->pc = 0x559798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x559794u;
            // 0x559798: 0x8e4300d0  lw          $v1, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5597E4u;
            goto label_5597e4;
        }
    }
    ctx->pc = 0x55979Cu;
label_55979c:
    // 0x55979c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x55979cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5597a0:
    // 0x5597a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5597a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5597a4:
    // 0x5597a4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5597a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5597a8:
    // 0x5597a8: 0x320f809  jalr        $t9
label_5597ac:
    if (ctx->pc == 0x5597ACu) {
        ctx->pc = 0x5597ACu;
            // 0x5597ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5597B0u;
        goto label_5597b0;
    }
    ctx->pc = 0x5597A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5597B0u);
        ctx->pc = 0x5597ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5597A8u;
            // 0x5597ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5597B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5597B0u; }
            if (ctx->pc != 0x5597B0u) { return; }
        }
        }
    }
    ctx->pc = 0x5597B0u;
label_5597b0:
    // 0x5597b0: 0x8e4500d0  lw          $a1, 0xD0($s2)
    ctx->pc = 0x5597b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_5597b4:
    // 0x5597b4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_5597b8:
    if (ctx->pc == 0x5597B8u) {
        ctx->pc = 0x5597B8u;
            // 0x5597b8: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->pc = 0x5597BCu;
        goto label_5597bc;
    }
    ctx->pc = 0x5597B4u;
    {
        const bool branch_taken_0x5597b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x5597b4) {
            ctx->pc = 0x5597B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5597B4u;
            // 0x5597b8: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5597D0u;
            goto label_5597d0;
        }
    }
    ctx->pc = 0x5597BCu;
label_5597bc:
    // 0x5597bc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5597bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_5597c0:
    // 0x5597c0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x5597c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_5597c4:
    // 0x5597c4: 0xc057b7c  jal         func_15EDF0
label_5597c8:
    if (ctx->pc == 0x5597C8u) {
        ctx->pc = 0x5597C8u;
            // 0x5597c8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x5597CCu;
        goto label_5597cc;
    }
    ctx->pc = 0x5597C4u;
    SET_GPR_U32(ctx, 31, 0x5597CCu);
    ctx->pc = 0x5597C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5597C4u;
            // 0x5597c8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5597CCu; }
        if (ctx->pc != 0x5597CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5597CCu; }
        if (ctx->pc != 0x5597CCu) { return; }
    }
    ctx->pc = 0x5597CCu;
label_5597cc:
    // 0x5597cc: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x5597ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_5597d0:
    // 0x5597d0: 0x1080005d  beqz        $a0, . + 4 + (0x5D << 2)
label_5597d4:
    if (ctx->pc == 0x5597D4u) {
        ctx->pc = 0x5597D8u;
        goto label_5597d8;
    }
    ctx->pc = 0x5597D0u;
    {
        const bool branch_taken_0x5597d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5597d0) {
            ctx->pc = 0x559948u;
            goto label_559948;
        }
    }
    ctx->pc = 0x5597D8u;
label_5597d8:
    // 0x5597d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5597d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5597dc:
    // 0x5597dc: 0x1000005a  b           . + 4 + (0x5A << 2)
label_5597e0:
    if (ctx->pc == 0x5597E0u) {
        ctx->pc = 0x5597E0u;
            // 0x5597e0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x5597E4u;
        goto label_5597e4;
    }
    ctx->pc = 0x5597DCu;
    {
        const bool branch_taken_0x5597dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5597E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5597DCu;
            // 0x5597e0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5597dc) {
            ctx->pc = 0x559948u;
            goto label_559948;
        }
    }
    ctx->pc = 0x5597E4u;
label_5597e4:
    // 0x5597e4: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
label_5597e8:
    if (ctx->pc == 0x5597E8u) {
        ctx->pc = 0x5597ECu;
        goto label_5597ec;
    }
    ctx->pc = 0x5597E4u;
    {
        const bool branch_taken_0x5597e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5597e4) {
            ctx->pc = 0x559948u;
            goto label_559948;
        }
    }
    ctx->pc = 0x5597ECu;
label_5597ec:
    // 0x5597ec: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x5597ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_5597f0:
    // 0x5597f0: 0xc073234  jal         func_1CC8D0
label_5597f4:
    if (ctx->pc == 0x5597F4u) {
        ctx->pc = 0x5597F4u;
            // 0x5597f4: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x5597F8u;
        goto label_5597f8;
    }
    ctx->pc = 0x5597F0u;
    SET_GPR_U32(ctx, 31, 0x5597F8u);
    ctx->pc = 0x5597F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5597F0u;
            // 0x5597f4: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5597F8u; }
        if (ctx->pc != 0x5597F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5597F8u; }
        if (ctx->pc != 0x5597F8u) { return; }
    }
    ctx->pc = 0x5597F8u;
label_5597f8:
    // 0x5597f8: 0xc040180  jal         func_100600
label_5597fc:
    if (ctx->pc == 0x5597FCu) {
        ctx->pc = 0x5597FCu;
            // 0x5597fc: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x559800u;
        goto label_559800;
    }
    ctx->pc = 0x5597F8u;
    SET_GPR_U32(ctx, 31, 0x559800u);
    ctx->pc = 0x5597FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5597F8u;
            // 0x5597fc: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559800u; }
        if (ctx->pc != 0x559800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559800u; }
        if (ctx->pc != 0x559800u) { return; }
    }
    ctx->pc = 0x559800u;
label_559800:
    // 0x559800: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_559804:
    if (ctx->pc == 0x559804u) {
        ctx->pc = 0x559804u;
            // 0x559804: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559808u;
        goto label_559808;
    }
    ctx->pc = 0x559800u;
    {
        const bool branch_taken_0x559800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x559804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559800u;
            // 0x559804: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559800) {
            ctx->pc = 0x5598E4u;
            goto label_5598e4;
        }
    }
    ctx->pc = 0x559808u;
label_559808:
    // 0x559808: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x559808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_55980c:
    // 0x55980c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x55980cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_559810:
    // 0x559810: 0x3445423f  ori         $a1, $v0, 0x423F
    ctx->pc = 0x559810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
label_559814:
    // 0x559814: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x559814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_559818:
    // 0x559818: 0xc10ca68  jal         func_4329A0
label_55981c:
    if (ctx->pc == 0x55981Cu) {
        ctx->pc = 0x55981Cu;
            // 0x55981c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559820u;
        goto label_559820;
    }
    ctx->pc = 0x559818u;
    SET_GPR_U32(ctx, 31, 0x559820u);
    ctx->pc = 0x55981Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x559818u;
            // 0x55981c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559820u; }
        if (ctx->pc != 0x559820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559820u; }
        if (ctx->pc != 0x559820u) { return; }
    }
    ctx->pc = 0x559820u;
label_559820:
    // 0x559820: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x559820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_559824:
    // 0x559824: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x559824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_559828:
    // 0x559828: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x559828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_55982c:
    // 0x55982c: 0x244210c0  addiu       $v0, $v0, 0x10C0
    ctx->pc = 0x55982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4288));
label_559830:
    // 0x559830: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x559830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_559834:
    // 0x559834: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x559834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_559838:
    // 0x559838: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x559838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_55983c:
    // 0x55983c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55983cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_559840:
    // 0x559840: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x559840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_559844:
    // 0x559844: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x559844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_559848:
    // 0x559848: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x559848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55984c:
    // 0x55984c: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x55984cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_559850:
    // 0x559850: 0x320f809  jalr        $t9
label_559854:
    if (ctx->pc == 0x559854u) {
        ctx->pc = 0x559858u;
        goto label_559858;
    }
    ctx->pc = 0x559850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x559858u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x559858u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x559858u; }
            if (ctx->pc != 0x559858u) { return; }
        }
        }
    }
    ctx->pc = 0x559858u;
label_559858:
    // 0x559858: 0x3c0243b9  lui         $v0, 0x43B9
    ctx->pc = 0x559858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17337 << 16));
label_55985c:
    // 0x55985c: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x55985cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_559860:
    // 0x559860: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x559860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_559864:
    // 0x559864: 0x0  nop
    ctx->pc = 0x559864u;
    // NOP
label_559868:
    // 0x559868: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x559868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_55986c:
    // 0x55986c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55986cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_559870:
    // 0x559870: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x559870u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_559874:
    // 0x559874: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x559874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_559878:
    // 0x559878: 0x0  nop
    ctx->pc = 0x559878u;
    // NOP
label_55987c:
    // 0x55987c: 0xae240058  sw          $a0, 0x58($s1)
    ctx->pc = 0x55987cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 4));
label_559880:
    // 0x559880: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x559880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
label_559884:
    // 0x559884: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x559884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_559888:
    // 0x559888: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x559888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55988c:
    // 0x55988c: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x55988cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_559890:
    // 0x559890: 0x320f809  jalr        $t9
label_559894:
    if (ctx->pc == 0x559894u) {
        ctx->pc = 0x559898u;
        goto label_559898;
    }
    ctx->pc = 0x559890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x559898u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x559898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x559898u; }
            if (ctx->pc != 0x559898u) { return; }
        }
        }
    }
    ctx->pc = 0x559898u;
label_559898:
    // 0x559898: 0x3c04422c  lui         $a0, 0x422C
    ctx->pc = 0x559898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16940 << 16));
label_55989c:
    // 0x55989c: 0x3c034c0a  lui         $v1, 0x4C0A
    ctx->pc = 0x55989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19466 << 16));
label_5598a0:
    // 0x5598a0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x5598a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5598a4:
    // 0x5598a4: 0x34666d80  ori         $a2, $v1, 0x6D80
    ctx->pc = 0x5598a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28032);
label_5598a8:
    // 0x5598a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x5598a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_5598ac:
    // 0x5598ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x5598acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5598b0:
    // 0x5598b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5598b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5598b4:
    // 0x5598b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5598b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5598b8:
    // 0x5598b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5598b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5598bc:
    // 0x5598bc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x5598bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_5598c0:
    // 0x5598c0: 0x0  nop
    ctx->pc = 0x5598c0u;
    // NOP
label_5598c4:
    // 0x5598c4: 0xae270060  sw          $a3, 0x60($s1)
    ctx->pc = 0x5598c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 7));
label_5598c8:
    // 0x5598c8: 0xae260064  sw          $a2, 0x64($s1)
    ctx->pc = 0x5598c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 6));
label_5598cc:
    // 0x5598cc: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x5598ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_5598d0:
    // 0x5598d0: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x5598d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_5598d4:
    // 0x5598d4: 0xa2250080  sb          $a1, 0x80($s1)
    ctx->pc = 0x5598d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 5));
label_5598d8:
    // 0x5598d8: 0xa2200081  sb          $zero, 0x81($s1)
    ctx->pc = 0x5598d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 129), (uint8_t)GPR_U32(ctx, 0));
label_5598dc:
    // 0x5598dc: 0xae240084  sw          $a0, 0x84($s1)
    ctx->pc = 0x5598dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 4));
label_5598e0:
    // 0x5598e0: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x5598e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_5598e4:
    // 0x5598e4: 0xae5100d0  sw          $s1, 0xD0($s2)
    ctx->pc = 0x5598e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 17));
label_5598e8:
    // 0x5598e8: 0x10000017  b           . + 4 + (0x17 << 2)
label_5598ec:
    if (ctx->pc == 0x5598ECu) {
        ctx->pc = 0x5598ECu;
            // 0x5598ec: 0xa2000038  sb          $zero, 0x38($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x5598F0u;
        goto label_5598f0;
    }
    ctx->pc = 0x5598E8u;
    {
        const bool branch_taken_0x5598e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5598ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5598E8u;
            // 0x5598ec: 0xa2000038  sb          $zero, 0x38($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5598e8) {
            ctx->pc = 0x559948u;
            goto label_559948;
        }
    }
    ctx->pc = 0x5598F0u;
label_5598f0:
    // 0x5598f0: 0xc1567c0  jal         func_559F00
label_5598f4:
    if (ctx->pc == 0x5598F4u) {
        ctx->pc = 0x5598F4u;
            // 0x5598f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5598F8u;
        goto label_5598f8;
    }
    ctx->pc = 0x5598F0u;
    SET_GPR_U32(ctx, 31, 0x5598F8u);
    ctx->pc = 0x5598F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5598F0u;
            // 0x5598f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x559F00u;
    if (runtime->hasFunction(0x559F00u)) {
        auto targetFn = runtime->lookupFunction(0x559F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5598F8u; }
        if (ctx->pc != 0x5598F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00559F00_0x559f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5598F8u; }
        if (ctx->pc != 0x5598F8u) { return; }
    }
    ctx->pc = 0x5598F8u;
label_5598f8:
    // 0x5598f8: 0x10000013  b           . + 4 + (0x13 << 2)
label_5598fc:
    if (ctx->pc == 0x5598FCu) {
        ctx->pc = 0x559900u;
        goto label_559900;
    }
    ctx->pc = 0x5598F8u;
    {
        const bool branch_taken_0x5598f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5598f8) {
            ctx->pc = 0x559948u;
            goto label_559948;
        }
    }
    ctx->pc = 0x559900u;
label_559900:
    // 0x559900: 0xc156754  jal         func_559D50
label_559904:
    if (ctx->pc == 0x559904u) {
        ctx->pc = 0x559904u;
            // 0x559904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559908u;
        goto label_559908;
    }
    ctx->pc = 0x559900u;
    SET_GPR_U32(ctx, 31, 0x559908u);
    ctx->pc = 0x559904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x559900u;
            // 0x559904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x559D50u;
    if (runtime->hasFunction(0x559D50u)) {
        auto targetFn = runtime->lookupFunction(0x559D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559908u; }
        if (ctx->pc != 0x559908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00559D50_0x559d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559908u; }
        if (ctx->pc != 0x559908u) { return; }
    }
    ctx->pc = 0x559908u;
label_559908:
    // 0x559908: 0x1000000f  b           . + 4 + (0xF << 2)
label_55990c:
    if (ctx->pc == 0x55990Cu) {
        ctx->pc = 0x559910u;
        goto label_559910;
    }
    ctx->pc = 0x559908u;
    {
        const bool branch_taken_0x559908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x559908) {
            ctx->pc = 0x559948u;
            goto label_559948;
        }
    }
    ctx->pc = 0x559910u;
label_559910:
    // 0x559910: 0xc1566e8  jal         func_559BA0
label_559914:
    if (ctx->pc == 0x559914u) {
        ctx->pc = 0x559914u;
            // 0x559914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559918u;
        goto label_559918;
    }
    ctx->pc = 0x559910u;
    SET_GPR_U32(ctx, 31, 0x559918u);
    ctx->pc = 0x559914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x559910u;
            // 0x559914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x559BA0u;
    if (runtime->hasFunction(0x559BA0u)) {
        auto targetFn = runtime->lookupFunction(0x559BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559918u; }
        if (ctx->pc != 0x559918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00559BA0_0x559ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559918u; }
        if (ctx->pc != 0x559918u) { return; }
    }
    ctx->pc = 0x559918u;
label_559918:
    // 0x559918: 0x1000000b  b           . + 4 + (0xB << 2)
label_55991c:
    if (ctx->pc == 0x55991Cu) {
        ctx->pc = 0x559920u;
        goto label_559920;
    }
    ctx->pc = 0x559918u;
    {
        const bool branch_taken_0x559918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x559918) {
            ctx->pc = 0x559948u;
            goto label_559948;
        }
    }
    ctx->pc = 0x559920u;
label_559920:
    // 0x559920: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x559920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_559924:
    // 0x559924: 0x320f809  jalr        $t9
label_559928:
    if (ctx->pc == 0x559928u) {
        ctx->pc = 0x55992Cu;
        goto label_55992c;
    }
    ctx->pc = 0x559924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55992Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55992Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55992Cu; }
            if (ctx->pc != 0x55992Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55992Cu;
label_55992c:
    // 0x55992c: 0x10000006  b           . + 4 + (0x6 << 2)
label_559930:
    if (ctx->pc == 0x559930u) {
        ctx->pc = 0x559934u;
        goto label_559934;
    }
    ctx->pc = 0x55992Cu;
    {
        const bool branch_taken_0x55992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55992c) {
            ctx->pc = 0x559948u;
            goto label_559948;
        }
    }
    ctx->pc = 0x559934u;
label_559934:
    // 0x559934: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x559934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_559938:
    // 0x559938: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x559938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55993c:
    // 0x55993c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x55993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_559940:
    // 0x559940: 0xc057b7c  jal         func_15EDF0
label_559944:
    if (ctx->pc == 0x559944u) {
        ctx->pc = 0x559944u;
            // 0x559944: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x559948u;
        goto label_559948;
    }
    ctx->pc = 0x559940u;
    SET_GPR_U32(ctx, 31, 0x559948u);
    ctx->pc = 0x559944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x559940u;
            // 0x559944: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559948u; }
        if (ctx->pc != 0x559948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559948u; }
        if (ctx->pc != 0x559948u) { return; }
    }
    ctx->pc = 0x559948u;
label_559948:
    // 0x559948: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x559948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_55994c:
    // 0x55994c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55994cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_559950:
    // 0x559950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x559950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_559954:
    // 0x559954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x559954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_559958:
    // 0x559958: 0x3e00008  jr          $ra
label_55995c:
    if (ctx->pc == 0x55995Cu) {
        ctx->pc = 0x55995Cu;
            // 0x55995c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x559960u;
        goto label_fallthrough_0x559958;
    }
    ctx->pc = 0x559958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55995Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559958u;
            // 0x55995c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x559958:
    ctx->pc = 0x559960u;
}
