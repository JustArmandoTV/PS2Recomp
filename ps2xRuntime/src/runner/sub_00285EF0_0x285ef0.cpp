#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285EF0
// Address: 0x285ef0 - 0x286cb0
void sub_00285EF0_0x285ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285EF0_0x285ef0");
#endif

    switch (ctx->pc) {
        case 0x285ef0u: goto label_285ef0;
        case 0x285ef4u: goto label_285ef4;
        case 0x285ef8u: goto label_285ef8;
        case 0x285efcu: goto label_285efc;
        case 0x285f00u: goto label_285f00;
        case 0x285f04u: goto label_285f04;
        case 0x285f08u: goto label_285f08;
        case 0x285f0cu: goto label_285f0c;
        case 0x285f10u: goto label_285f10;
        case 0x285f14u: goto label_285f14;
        case 0x285f18u: goto label_285f18;
        case 0x285f1cu: goto label_285f1c;
        case 0x285f20u: goto label_285f20;
        case 0x285f24u: goto label_285f24;
        case 0x285f28u: goto label_285f28;
        case 0x285f2cu: goto label_285f2c;
        case 0x285f30u: goto label_285f30;
        case 0x285f34u: goto label_285f34;
        case 0x285f38u: goto label_285f38;
        case 0x285f3cu: goto label_285f3c;
        case 0x285f40u: goto label_285f40;
        case 0x285f44u: goto label_285f44;
        case 0x285f48u: goto label_285f48;
        case 0x285f4cu: goto label_285f4c;
        case 0x285f50u: goto label_285f50;
        case 0x285f54u: goto label_285f54;
        case 0x285f58u: goto label_285f58;
        case 0x285f5cu: goto label_285f5c;
        case 0x285f60u: goto label_285f60;
        case 0x285f64u: goto label_285f64;
        case 0x285f68u: goto label_285f68;
        case 0x285f6cu: goto label_285f6c;
        case 0x285f70u: goto label_285f70;
        case 0x285f74u: goto label_285f74;
        case 0x285f78u: goto label_285f78;
        case 0x285f7cu: goto label_285f7c;
        case 0x285f80u: goto label_285f80;
        case 0x285f84u: goto label_285f84;
        case 0x285f88u: goto label_285f88;
        case 0x285f8cu: goto label_285f8c;
        case 0x285f90u: goto label_285f90;
        case 0x285f94u: goto label_285f94;
        case 0x285f98u: goto label_285f98;
        case 0x285f9cu: goto label_285f9c;
        case 0x285fa0u: goto label_285fa0;
        case 0x285fa4u: goto label_285fa4;
        case 0x285fa8u: goto label_285fa8;
        case 0x285facu: goto label_285fac;
        case 0x285fb0u: goto label_285fb0;
        case 0x285fb4u: goto label_285fb4;
        case 0x285fb8u: goto label_285fb8;
        case 0x285fbcu: goto label_285fbc;
        case 0x285fc0u: goto label_285fc0;
        case 0x285fc4u: goto label_285fc4;
        case 0x285fc8u: goto label_285fc8;
        case 0x285fccu: goto label_285fcc;
        case 0x285fd0u: goto label_285fd0;
        case 0x285fd4u: goto label_285fd4;
        case 0x285fd8u: goto label_285fd8;
        case 0x285fdcu: goto label_285fdc;
        case 0x285fe0u: goto label_285fe0;
        case 0x285fe4u: goto label_285fe4;
        case 0x285fe8u: goto label_285fe8;
        case 0x285fecu: goto label_285fec;
        case 0x285ff0u: goto label_285ff0;
        case 0x285ff4u: goto label_285ff4;
        case 0x285ff8u: goto label_285ff8;
        case 0x285ffcu: goto label_285ffc;
        case 0x286000u: goto label_286000;
        case 0x286004u: goto label_286004;
        case 0x286008u: goto label_286008;
        case 0x28600cu: goto label_28600c;
        case 0x286010u: goto label_286010;
        case 0x286014u: goto label_286014;
        case 0x286018u: goto label_286018;
        case 0x28601cu: goto label_28601c;
        case 0x286020u: goto label_286020;
        case 0x286024u: goto label_286024;
        case 0x286028u: goto label_286028;
        case 0x28602cu: goto label_28602c;
        case 0x286030u: goto label_286030;
        case 0x286034u: goto label_286034;
        case 0x286038u: goto label_286038;
        case 0x28603cu: goto label_28603c;
        case 0x286040u: goto label_286040;
        case 0x286044u: goto label_286044;
        case 0x286048u: goto label_286048;
        case 0x28604cu: goto label_28604c;
        case 0x286050u: goto label_286050;
        case 0x286054u: goto label_286054;
        case 0x286058u: goto label_286058;
        case 0x28605cu: goto label_28605c;
        case 0x286060u: goto label_286060;
        case 0x286064u: goto label_286064;
        case 0x286068u: goto label_286068;
        case 0x28606cu: goto label_28606c;
        case 0x286070u: goto label_286070;
        case 0x286074u: goto label_286074;
        case 0x286078u: goto label_286078;
        case 0x28607cu: goto label_28607c;
        case 0x286080u: goto label_286080;
        case 0x286084u: goto label_286084;
        case 0x286088u: goto label_286088;
        case 0x28608cu: goto label_28608c;
        case 0x286090u: goto label_286090;
        case 0x286094u: goto label_286094;
        case 0x286098u: goto label_286098;
        case 0x28609cu: goto label_28609c;
        case 0x2860a0u: goto label_2860a0;
        case 0x2860a4u: goto label_2860a4;
        case 0x2860a8u: goto label_2860a8;
        case 0x2860acu: goto label_2860ac;
        case 0x2860b0u: goto label_2860b0;
        case 0x2860b4u: goto label_2860b4;
        case 0x2860b8u: goto label_2860b8;
        case 0x2860bcu: goto label_2860bc;
        case 0x2860c0u: goto label_2860c0;
        case 0x2860c4u: goto label_2860c4;
        case 0x2860c8u: goto label_2860c8;
        case 0x2860ccu: goto label_2860cc;
        case 0x2860d0u: goto label_2860d0;
        case 0x2860d4u: goto label_2860d4;
        case 0x2860d8u: goto label_2860d8;
        case 0x2860dcu: goto label_2860dc;
        case 0x2860e0u: goto label_2860e0;
        case 0x2860e4u: goto label_2860e4;
        case 0x2860e8u: goto label_2860e8;
        case 0x2860ecu: goto label_2860ec;
        case 0x2860f0u: goto label_2860f0;
        case 0x2860f4u: goto label_2860f4;
        case 0x2860f8u: goto label_2860f8;
        case 0x2860fcu: goto label_2860fc;
        case 0x286100u: goto label_286100;
        case 0x286104u: goto label_286104;
        case 0x286108u: goto label_286108;
        case 0x28610cu: goto label_28610c;
        case 0x286110u: goto label_286110;
        case 0x286114u: goto label_286114;
        case 0x286118u: goto label_286118;
        case 0x28611cu: goto label_28611c;
        case 0x286120u: goto label_286120;
        case 0x286124u: goto label_286124;
        case 0x286128u: goto label_286128;
        case 0x28612cu: goto label_28612c;
        case 0x286130u: goto label_286130;
        case 0x286134u: goto label_286134;
        case 0x286138u: goto label_286138;
        case 0x28613cu: goto label_28613c;
        case 0x286140u: goto label_286140;
        case 0x286144u: goto label_286144;
        case 0x286148u: goto label_286148;
        case 0x28614cu: goto label_28614c;
        case 0x286150u: goto label_286150;
        case 0x286154u: goto label_286154;
        case 0x286158u: goto label_286158;
        case 0x28615cu: goto label_28615c;
        case 0x286160u: goto label_286160;
        case 0x286164u: goto label_286164;
        case 0x286168u: goto label_286168;
        case 0x28616cu: goto label_28616c;
        case 0x286170u: goto label_286170;
        case 0x286174u: goto label_286174;
        case 0x286178u: goto label_286178;
        case 0x28617cu: goto label_28617c;
        case 0x286180u: goto label_286180;
        case 0x286184u: goto label_286184;
        case 0x286188u: goto label_286188;
        case 0x28618cu: goto label_28618c;
        case 0x286190u: goto label_286190;
        case 0x286194u: goto label_286194;
        case 0x286198u: goto label_286198;
        case 0x28619cu: goto label_28619c;
        case 0x2861a0u: goto label_2861a0;
        case 0x2861a4u: goto label_2861a4;
        case 0x2861a8u: goto label_2861a8;
        case 0x2861acu: goto label_2861ac;
        case 0x2861b0u: goto label_2861b0;
        case 0x2861b4u: goto label_2861b4;
        case 0x2861b8u: goto label_2861b8;
        case 0x2861bcu: goto label_2861bc;
        case 0x2861c0u: goto label_2861c0;
        case 0x2861c4u: goto label_2861c4;
        case 0x2861c8u: goto label_2861c8;
        case 0x2861ccu: goto label_2861cc;
        case 0x2861d0u: goto label_2861d0;
        case 0x2861d4u: goto label_2861d4;
        case 0x2861d8u: goto label_2861d8;
        case 0x2861dcu: goto label_2861dc;
        case 0x2861e0u: goto label_2861e0;
        case 0x2861e4u: goto label_2861e4;
        case 0x2861e8u: goto label_2861e8;
        case 0x2861ecu: goto label_2861ec;
        case 0x2861f0u: goto label_2861f0;
        case 0x2861f4u: goto label_2861f4;
        case 0x2861f8u: goto label_2861f8;
        case 0x2861fcu: goto label_2861fc;
        case 0x286200u: goto label_286200;
        case 0x286204u: goto label_286204;
        case 0x286208u: goto label_286208;
        case 0x28620cu: goto label_28620c;
        case 0x286210u: goto label_286210;
        case 0x286214u: goto label_286214;
        case 0x286218u: goto label_286218;
        case 0x28621cu: goto label_28621c;
        case 0x286220u: goto label_286220;
        case 0x286224u: goto label_286224;
        case 0x286228u: goto label_286228;
        case 0x28622cu: goto label_28622c;
        case 0x286230u: goto label_286230;
        case 0x286234u: goto label_286234;
        case 0x286238u: goto label_286238;
        case 0x28623cu: goto label_28623c;
        case 0x286240u: goto label_286240;
        case 0x286244u: goto label_286244;
        case 0x286248u: goto label_286248;
        case 0x28624cu: goto label_28624c;
        case 0x286250u: goto label_286250;
        case 0x286254u: goto label_286254;
        case 0x286258u: goto label_286258;
        case 0x28625cu: goto label_28625c;
        case 0x286260u: goto label_286260;
        case 0x286264u: goto label_286264;
        case 0x286268u: goto label_286268;
        case 0x28626cu: goto label_28626c;
        case 0x286270u: goto label_286270;
        case 0x286274u: goto label_286274;
        case 0x286278u: goto label_286278;
        case 0x28627cu: goto label_28627c;
        case 0x286280u: goto label_286280;
        case 0x286284u: goto label_286284;
        case 0x286288u: goto label_286288;
        case 0x28628cu: goto label_28628c;
        case 0x286290u: goto label_286290;
        case 0x286294u: goto label_286294;
        case 0x286298u: goto label_286298;
        case 0x28629cu: goto label_28629c;
        case 0x2862a0u: goto label_2862a0;
        case 0x2862a4u: goto label_2862a4;
        case 0x2862a8u: goto label_2862a8;
        case 0x2862acu: goto label_2862ac;
        case 0x2862b0u: goto label_2862b0;
        case 0x2862b4u: goto label_2862b4;
        case 0x2862b8u: goto label_2862b8;
        case 0x2862bcu: goto label_2862bc;
        case 0x2862c0u: goto label_2862c0;
        case 0x2862c4u: goto label_2862c4;
        case 0x2862c8u: goto label_2862c8;
        case 0x2862ccu: goto label_2862cc;
        case 0x2862d0u: goto label_2862d0;
        case 0x2862d4u: goto label_2862d4;
        case 0x2862d8u: goto label_2862d8;
        case 0x2862dcu: goto label_2862dc;
        case 0x2862e0u: goto label_2862e0;
        case 0x2862e4u: goto label_2862e4;
        case 0x2862e8u: goto label_2862e8;
        case 0x2862ecu: goto label_2862ec;
        case 0x2862f0u: goto label_2862f0;
        case 0x2862f4u: goto label_2862f4;
        case 0x2862f8u: goto label_2862f8;
        case 0x2862fcu: goto label_2862fc;
        case 0x286300u: goto label_286300;
        case 0x286304u: goto label_286304;
        case 0x286308u: goto label_286308;
        case 0x28630cu: goto label_28630c;
        case 0x286310u: goto label_286310;
        case 0x286314u: goto label_286314;
        case 0x286318u: goto label_286318;
        case 0x28631cu: goto label_28631c;
        case 0x286320u: goto label_286320;
        case 0x286324u: goto label_286324;
        case 0x286328u: goto label_286328;
        case 0x28632cu: goto label_28632c;
        case 0x286330u: goto label_286330;
        case 0x286334u: goto label_286334;
        case 0x286338u: goto label_286338;
        case 0x28633cu: goto label_28633c;
        case 0x286340u: goto label_286340;
        case 0x286344u: goto label_286344;
        case 0x286348u: goto label_286348;
        case 0x28634cu: goto label_28634c;
        case 0x286350u: goto label_286350;
        case 0x286354u: goto label_286354;
        case 0x286358u: goto label_286358;
        case 0x28635cu: goto label_28635c;
        case 0x286360u: goto label_286360;
        case 0x286364u: goto label_286364;
        case 0x286368u: goto label_286368;
        case 0x28636cu: goto label_28636c;
        case 0x286370u: goto label_286370;
        case 0x286374u: goto label_286374;
        case 0x286378u: goto label_286378;
        case 0x28637cu: goto label_28637c;
        case 0x286380u: goto label_286380;
        case 0x286384u: goto label_286384;
        case 0x286388u: goto label_286388;
        case 0x28638cu: goto label_28638c;
        case 0x286390u: goto label_286390;
        case 0x286394u: goto label_286394;
        case 0x286398u: goto label_286398;
        case 0x28639cu: goto label_28639c;
        case 0x2863a0u: goto label_2863a0;
        case 0x2863a4u: goto label_2863a4;
        case 0x2863a8u: goto label_2863a8;
        case 0x2863acu: goto label_2863ac;
        case 0x2863b0u: goto label_2863b0;
        case 0x2863b4u: goto label_2863b4;
        case 0x2863b8u: goto label_2863b8;
        case 0x2863bcu: goto label_2863bc;
        case 0x2863c0u: goto label_2863c0;
        case 0x2863c4u: goto label_2863c4;
        case 0x2863c8u: goto label_2863c8;
        case 0x2863ccu: goto label_2863cc;
        case 0x2863d0u: goto label_2863d0;
        case 0x2863d4u: goto label_2863d4;
        case 0x2863d8u: goto label_2863d8;
        case 0x2863dcu: goto label_2863dc;
        case 0x2863e0u: goto label_2863e0;
        case 0x2863e4u: goto label_2863e4;
        case 0x2863e8u: goto label_2863e8;
        case 0x2863ecu: goto label_2863ec;
        case 0x2863f0u: goto label_2863f0;
        case 0x2863f4u: goto label_2863f4;
        case 0x2863f8u: goto label_2863f8;
        case 0x2863fcu: goto label_2863fc;
        case 0x286400u: goto label_286400;
        case 0x286404u: goto label_286404;
        case 0x286408u: goto label_286408;
        case 0x28640cu: goto label_28640c;
        case 0x286410u: goto label_286410;
        case 0x286414u: goto label_286414;
        case 0x286418u: goto label_286418;
        case 0x28641cu: goto label_28641c;
        case 0x286420u: goto label_286420;
        case 0x286424u: goto label_286424;
        case 0x286428u: goto label_286428;
        case 0x28642cu: goto label_28642c;
        case 0x286430u: goto label_286430;
        case 0x286434u: goto label_286434;
        case 0x286438u: goto label_286438;
        case 0x28643cu: goto label_28643c;
        case 0x286440u: goto label_286440;
        case 0x286444u: goto label_286444;
        case 0x286448u: goto label_286448;
        case 0x28644cu: goto label_28644c;
        case 0x286450u: goto label_286450;
        case 0x286454u: goto label_286454;
        case 0x286458u: goto label_286458;
        case 0x28645cu: goto label_28645c;
        case 0x286460u: goto label_286460;
        case 0x286464u: goto label_286464;
        case 0x286468u: goto label_286468;
        case 0x28646cu: goto label_28646c;
        case 0x286470u: goto label_286470;
        case 0x286474u: goto label_286474;
        case 0x286478u: goto label_286478;
        case 0x28647cu: goto label_28647c;
        case 0x286480u: goto label_286480;
        case 0x286484u: goto label_286484;
        case 0x286488u: goto label_286488;
        case 0x28648cu: goto label_28648c;
        case 0x286490u: goto label_286490;
        case 0x286494u: goto label_286494;
        case 0x286498u: goto label_286498;
        case 0x28649cu: goto label_28649c;
        case 0x2864a0u: goto label_2864a0;
        case 0x2864a4u: goto label_2864a4;
        case 0x2864a8u: goto label_2864a8;
        case 0x2864acu: goto label_2864ac;
        case 0x2864b0u: goto label_2864b0;
        case 0x2864b4u: goto label_2864b4;
        case 0x2864b8u: goto label_2864b8;
        case 0x2864bcu: goto label_2864bc;
        case 0x2864c0u: goto label_2864c0;
        case 0x2864c4u: goto label_2864c4;
        case 0x2864c8u: goto label_2864c8;
        case 0x2864ccu: goto label_2864cc;
        case 0x2864d0u: goto label_2864d0;
        case 0x2864d4u: goto label_2864d4;
        case 0x2864d8u: goto label_2864d8;
        case 0x2864dcu: goto label_2864dc;
        case 0x2864e0u: goto label_2864e0;
        case 0x2864e4u: goto label_2864e4;
        case 0x2864e8u: goto label_2864e8;
        case 0x2864ecu: goto label_2864ec;
        case 0x2864f0u: goto label_2864f0;
        case 0x2864f4u: goto label_2864f4;
        case 0x2864f8u: goto label_2864f8;
        case 0x2864fcu: goto label_2864fc;
        case 0x286500u: goto label_286500;
        case 0x286504u: goto label_286504;
        case 0x286508u: goto label_286508;
        case 0x28650cu: goto label_28650c;
        case 0x286510u: goto label_286510;
        case 0x286514u: goto label_286514;
        case 0x286518u: goto label_286518;
        case 0x28651cu: goto label_28651c;
        case 0x286520u: goto label_286520;
        case 0x286524u: goto label_286524;
        case 0x286528u: goto label_286528;
        case 0x28652cu: goto label_28652c;
        case 0x286530u: goto label_286530;
        case 0x286534u: goto label_286534;
        case 0x286538u: goto label_286538;
        case 0x28653cu: goto label_28653c;
        case 0x286540u: goto label_286540;
        case 0x286544u: goto label_286544;
        case 0x286548u: goto label_286548;
        case 0x28654cu: goto label_28654c;
        case 0x286550u: goto label_286550;
        case 0x286554u: goto label_286554;
        case 0x286558u: goto label_286558;
        case 0x28655cu: goto label_28655c;
        case 0x286560u: goto label_286560;
        case 0x286564u: goto label_286564;
        case 0x286568u: goto label_286568;
        case 0x28656cu: goto label_28656c;
        case 0x286570u: goto label_286570;
        case 0x286574u: goto label_286574;
        case 0x286578u: goto label_286578;
        case 0x28657cu: goto label_28657c;
        case 0x286580u: goto label_286580;
        case 0x286584u: goto label_286584;
        case 0x286588u: goto label_286588;
        case 0x28658cu: goto label_28658c;
        case 0x286590u: goto label_286590;
        case 0x286594u: goto label_286594;
        case 0x286598u: goto label_286598;
        case 0x28659cu: goto label_28659c;
        case 0x2865a0u: goto label_2865a0;
        case 0x2865a4u: goto label_2865a4;
        case 0x2865a8u: goto label_2865a8;
        case 0x2865acu: goto label_2865ac;
        case 0x2865b0u: goto label_2865b0;
        case 0x2865b4u: goto label_2865b4;
        case 0x2865b8u: goto label_2865b8;
        case 0x2865bcu: goto label_2865bc;
        case 0x2865c0u: goto label_2865c0;
        case 0x2865c4u: goto label_2865c4;
        case 0x2865c8u: goto label_2865c8;
        case 0x2865ccu: goto label_2865cc;
        case 0x2865d0u: goto label_2865d0;
        case 0x2865d4u: goto label_2865d4;
        case 0x2865d8u: goto label_2865d8;
        case 0x2865dcu: goto label_2865dc;
        case 0x2865e0u: goto label_2865e0;
        case 0x2865e4u: goto label_2865e4;
        case 0x2865e8u: goto label_2865e8;
        case 0x2865ecu: goto label_2865ec;
        case 0x2865f0u: goto label_2865f0;
        case 0x2865f4u: goto label_2865f4;
        case 0x2865f8u: goto label_2865f8;
        case 0x2865fcu: goto label_2865fc;
        case 0x286600u: goto label_286600;
        case 0x286604u: goto label_286604;
        case 0x286608u: goto label_286608;
        case 0x28660cu: goto label_28660c;
        case 0x286610u: goto label_286610;
        case 0x286614u: goto label_286614;
        case 0x286618u: goto label_286618;
        case 0x28661cu: goto label_28661c;
        case 0x286620u: goto label_286620;
        case 0x286624u: goto label_286624;
        case 0x286628u: goto label_286628;
        case 0x28662cu: goto label_28662c;
        case 0x286630u: goto label_286630;
        case 0x286634u: goto label_286634;
        case 0x286638u: goto label_286638;
        case 0x28663cu: goto label_28663c;
        case 0x286640u: goto label_286640;
        case 0x286644u: goto label_286644;
        case 0x286648u: goto label_286648;
        case 0x28664cu: goto label_28664c;
        case 0x286650u: goto label_286650;
        case 0x286654u: goto label_286654;
        case 0x286658u: goto label_286658;
        case 0x28665cu: goto label_28665c;
        case 0x286660u: goto label_286660;
        case 0x286664u: goto label_286664;
        case 0x286668u: goto label_286668;
        case 0x28666cu: goto label_28666c;
        case 0x286670u: goto label_286670;
        case 0x286674u: goto label_286674;
        case 0x286678u: goto label_286678;
        case 0x28667cu: goto label_28667c;
        case 0x286680u: goto label_286680;
        case 0x286684u: goto label_286684;
        case 0x286688u: goto label_286688;
        case 0x28668cu: goto label_28668c;
        case 0x286690u: goto label_286690;
        case 0x286694u: goto label_286694;
        case 0x286698u: goto label_286698;
        case 0x28669cu: goto label_28669c;
        case 0x2866a0u: goto label_2866a0;
        case 0x2866a4u: goto label_2866a4;
        case 0x2866a8u: goto label_2866a8;
        case 0x2866acu: goto label_2866ac;
        case 0x2866b0u: goto label_2866b0;
        case 0x2866b4u: goto label_2866b4;
        case 0x2866b8u: goto label_2866b8;
        case 0x2866bcu: goto label_2866bc;
        case 0x2866c0u: goto label_2866c0;
        case 0x2866c4u: goto label_2866c4;
        case 0x2866c8u: goto label_2866c8;
        case 0x2866ccu: goto label_2866cc;
        case 0x2866d0u: goto label_2866d0;
        case 0x2866d4u: goto label_2866d4;
        case 0x2866d8u: goto label_2866d8;
        case 0x2866dcu: goto label_2866dc;
        case 0x2866e0u: goto label_2866e0;
        case 0x2866e4u: goto label_2866e4;
        case 0x2866e8u: goto label_2866e8;
        case 0x2866ecu: goto label_2866ec;
        case 0x2866f0u: goto label_2866f0;
        case 0x2866f4u: goto label_2866f4;
        case 0x2866f8u: goto label_2866f8;
        case 0x2866fcu: goto label_2866fc;
        case 0x286700u: goto label_286700;
        case 0x286704u: goto label_286704;
        case 0x286708u: goto label_286708;
        case 0x28670cu: goto label_28670c;
        case 0x286710u: goto label_286710;
        case 0x286714u: goto label_286714;
        case 0x286718u: goto label_286718;
        case 0x28671cu: goto label_28671c;
        case 0x286720u: goto label_286720;
        case 0x286724u: goto label_286724;
        case 0x286728u: goto label_286728;
        case 0x28672cu: goto label_28672c;
        case 0x286730u: goto label_286730;
        case 0x286734u: goto label_286734;
        case 0x286738u: goto label_286738;
        case 0x28673cu: goto label_28673c;
        case 0x286740u: goto label_286740;
        case 0x286744u: goto label_286744;
        case 0x286748u: goto label_286748;
        case 0x28674cu: goto label_28674c;
        case 0x286750u: goto label_286750;
        case 0x286754u: goto label_286754;
        case 0x286758u: goto label_286758;
        case 0x28675cu: goto label_28675c;
        case 0x286760u: goto label_286760;
        case 0x286764u: goto label_286764;
        case 0x286768u: goto label_286768;
        case 0x28676cu: goto label_28676c;
        case 0x286770u: goto label_286770;
        case 0x286774u: goto label_286774;
        case 0x286778u: goto label_286778;
        case 0x28677cu: goto label_28677c;
        case 0x286780u: goto label_286780;
        case 0x286784u: goto label_286784;
        case 0x286788u: goto label_286788;
        case 0x28678cu: goto label_28678c;
        case 0x286790u: goto label_286790;
        case 0x286794u: goto label_286794;
        case 0x286798u: goto label_286798;
        case 0x28679cu: goto label_28679c;
        case 0x2867a0u: goto label_2867a0;
        case 0x2867a4u: goto label_2867a4;
        case 0x2867a8u: goto label_2867a8;
        case 0x2867acu: goto label_2867ac;
        case 0x2867b0u: goto label_2867b0;
        case 0x2867b4u: goto label_2867b4;
        case 0x2867b8u: goto label_2867b8;
        case 0x2867bcu: goto label_2867bc;
        case 0x2867c0u: goto label_2867c0;
        case 0x2867c4u: goto label_2867c4;
        case 0x2867c8u: goto label_2867c8;
        case 0x2867ccu: goto label_2867cc;
        case 0x2867d0u: goto label_2867d0;
        case 0x2867d4u: goto label_2867d4;
        case 0x2867d8u: goto label_2867d8;
        case 0x2867dcu: goto label_2867dc;
        case 0x2867e0u: goto label_2867e0;
        case 0x2867e4u: goto label_2867e4;
        case 0x2867e8u: goto label_2867e8;
        case 0x2867ecu: goto label_2867ec;
        case 0x2867f0u: goto label_2867f0;
        case 0x2867f4u: goto label_2867f4;
        case 0x2867f8u: goto label_2867f8;
        case 0x2867fcu: goto label_2867fc;
        case 0x286800u: goto label_286800;
        case 0x286804u: goto label_286804;
        case 0x286808u: goto label_286808;
        case 0x28680cu: goto label_28680c;
        case 0x286810u: goto label_286810;
        case 0x286814u: goto label_286814;
        case 0x286818u: goto label_286818;
        case 0x28681cu: goto label_28681c;
        case 0x286820u: goto label_286820;
        case 0x286824u: goto label_286824;
        case 0x286828u: goto label_286828;
        case 0x28682cu: goto label_28682c;
        case 0x286830u: goto label_286830;
        case 0x286834u: goto label_286834;
        case 0x286838u: goto label_286838;
        case 0x28683cu: goto label_28683c;
        case 0x286840u: goto label_286840;
        case 0x286844u: goto label_286844;
        case 0x286848u: goto label_286848;
        case 0x28684cu: goto label_28684c;
        case 0x286850u: goto label_286850;
        case 0x286854u: goto label_286854;
        case 0x286858u: goto label_286858;
        case 0x28685cu: goto label_28685c;
        case 0x286860u: goto label_286860;
        case 0x286864u: goto label_286864;
        case 0x286868u: goto label_286868;
        case 0x28686cu: goto label_28686c;
        case 0x286870u: goto label_286870;
        case 0x286874u: goto label_286874;
        case 0x286878u: goto label_286878;
        case 0x28687cu: goto label_28687c;
        case 0x286880u: goto label_286880;
        case 0x286884u: goto label_286884;
        case 0x286888u: goto label_286888;
        case 0x28688cu: goto label_28688c;
        case 0x286890u: goto label_286890;
        case 0x286894u: goto label_286894;
        case 0x286898u: goto label_286898;
        case 0x28689cu: goto label_28689c;
        case 0x2868a0u: goto label_2868a0;
        case 0x2868a4u: goto label_2868a4;
        case 0x2868a8u: goto label_2868a8;
        case 0x2868acu: goto label_2868ac;
        case 0x2868b0u: goto label_2868b0;
        case 0x2868b4u: goto label_2868b4;
        case 0x2868b8u: goto label_2868b8;
        case 0x2868bcu: goto label_2868bc;
        case 0x2868c0u: goto label_2868c0;
        case 0x2868c4u: goto label_2868c4;
        case 0x2868c8u: goto label_2868c8;
        case 0x2868ccu: goto label_2868cc;
        case 0x2868d0u: goto label_2868d0;
        case 0x2868d4u: goto label_2868d4;
        case 0x2868d8u: goto label_2868d8;
        case 0x2868dcu: goto label_2868dc;
        case 0x2868e0u: goto label_2868e0;
        case 0x2868e4u: goto label_2868e4;
        case 0x2868e8u: goto label_2868e8;
        case 0x2868ecu: goto label_2868ec;
        case 0x2868f0u: goto label_2868f0;
        case 0x2868f4u: goto label_2868f4;
        case 0x2868f8u: goto label_2868f8;
        case 0x2868fcu: goto label_2868fc;
        case 0x286900u: goto label_286900;
        case 0x286904u: goto label_286904;
        case 0x286908u: goto label_286908;
        case 0x28690cu: goto label_28690c;
        case 0x286910u: goto label_286910;
        case 0x286914u: goto label_286914;
        case 0x286918u: goto label_286918;
        case 0x28691cu: goto label_28691c;
        case 0x286920u: goto label_286920;
        case 0x286924u: goto label_286924;
        case 0x286928u: goto label_286928;
        case 0x28692cu: goto label_28692c;
        case 0x286930u: goto label_286930;
        case 0x286934u: goto label_286934;
        case 0x286938u: goto label_286938;
        case 0x28693cu: goto label_28693c;
        case 0x286940u: goto label_286940;
        case 0x286944u: goto label_286944;
        case 0x286948u: goto label_286948;
        case 0x28694cu: goto label_28694c;
        case 0x286950u: goto label_286950;
        case 0x286954u: goto label_286954;
        case 0x286958u: goto label_286958;
        case 0x28695cu: goto label_28695c;
        case 0x286960u: goto label_286960;
        case 0x286964u: goto label_286964;
        case 0x286968u: goto label_286968;
        case 0x28696cu: goto label_28696c;
        case 0x286970u: goto label_286970;
        case 0x286974u: goto label_286974;
        case 0x286978u: goto label_286978;
        case 0x28697cu: goto label_28697c;
        case 0x286980u: goto label_286980;
        case 0x286984u: goto label_286984;
        case 0x286988u: goto label_286988;
        case 0x28698cu: goto label_28698c;
        case 0x286990u: goto label_286990;
        case 0x286994u: goto label_286994;
        case 0x286998u: goto label_286998;
        case 0x28699cu: goto label_28699c;
        case 0x2869a0u: goto label_2869a0;
        case 0x2869a4u: goto label_2869a4;
        case 0x2869a8u: goto label_2869a8;
        case 0x2869acu: goto label_2869ac;
        case 0x2869b0u: goto label_2869b0;
        case 0x2869b4u: goto label_2869b4;
        case 0x2869b8u: goto label_2869b8;
        case 0x2869bcu: goto label_2869bc;
        case 0x2869c0u: goto label_2869c0;
        case 0x2869c4u: goto label_2869c4;
        case 0x2869c8u: goto label_2869c8;
        case 0x2869ccu: goto label_2869cc;
        case 0x2869d0u: goto label_2869d0;
        case 0x2869d4u: goto label_2869d4;
        case 0x2869d8u: goto label_2869d8;
        case 0x2869dcu: goto label_2869dc;
        case 0x2869e0u: goto label_2869e0;
        case 0x2869e4u: goto label_2869e4;
        case 0x2869e8u: goto label_2869e8;
        case 0x2869ecu: goto label_2869ec;
        case 0x2869f0u: goto label_2869f0;
        case 0x2869f4u: goto label_2869f4;
        case 0x2869f8u: goto label_2869f8;
        case 0x2869fcu: goto label_2869fc;
        case 0x286a00u: goto label_286a00;
        case 0x286a04u: goto label_286a04;
        case 0x286a08u: goto label_286a08;
        case 0x286a0cu: goto label_286a0c;
        case 0x286a10u: goto label_286a10;
        case 0x286a14u: goto label_286a14;
        case 0x286a18u: goto label_286a18;
        case 0x286a1cu: goto label_286a1c;
        case 0x286a20u: goto label_286a20;
        case 0x286a24u: goto label_286a24;
        case 0x286a28u: goto label_286a28;
        case 0x286a2cu: goto label_286a2c;
        case 0x286a30u: goto label_286a30;
        case 0x286a34u: goto label_286a34;
        case 0x286a38u: goto label_286a38;
        case 0x286a3cu: goto label_286a3c;
        case 0x286a40u: goto label_286a40;
        case 0x286a44u: goto label_286a44;
        case 0x286a48u: goto label_286a48;
        case 0x286a4cu: goto label_286a4c;
        case 0x286a50u: goto label_286a50;
        case 0x286a54u: goto label_286a54;
        case 0x286a58u: goto label_286a58;
        case 0x286a5cu: goto label_286a5c;
        case 0x286a60u: goto label_286a60;
        case 0x286a64u: goto label_286a64;
        case 0x286a68u: goto label_286a68;
        case 0x286a6cu: goto label_286a6c;
        case 0x286a70u: goto label_286a70;
        case 0x286a74u: goto label_286a74;
        case 0x286a78u: goto label_286a78;
        case 0x286a7cu: goto label_286a7c;
        case 0x286a80u: goto label_286a80;
        case 0x286a84u: goto label_286a84;
        case 0x286a88u: goto label_286a88;
        case 0x286a8cu: goto label_286a8c;
        case 0x286a90u: goto label_286a90;
        case 0x286a94u: goto label_286a94;
        case 0x286a98u: goto label_286a98;
        case 0x286a9cu: goto label_286a9c;
        case 0x286aa0u: goto label_286aa0;
        case 0x286aa4u: goto label_286aa4;
        case 0x286aa8u: goto label_286aa8;
        case 0x286aacu: goto label_286aac;
        case 0x286ab0u: goto label_286ab0;
        case 0x286ab4u: goto label_286ab4;
        case 0x286ab8u: goto label_286ab8;
        case 0x286abcu: goto label_286abc;
        case 0x286ac0u: goto label_286ac0;
        case 0x286ac4u: goto label_286ac4;
        case 0x286ac8u: goto label_286ac8;
        case 0x286accu: goto label_286acc;
        case 0x286ad0u: goto label_286ad0;
        case 0x286ad4u: goto label_286ad4;
        case 0x286ad8u: goto label_286ad8;
        case 0x286adcu: goto label_286adc;
        case 0x286ae0u: goto label_286ae0;
        case 0x286ae4u: goto label_286ae4;
        case 0x286ae8u: goto label_286ae8;
        case 0x286aecu: goto label_286aec;
        case 0x286af0u: goto label_286af0;
        case 0x286af4u: goto label_286af4;
        case 0x286af8u: goto label_286af8;
        case 0x286afcu: goto label_286afc;
        case 0x286b00u: goto label_286b00;
        case 0x286b04u: goto label_286b04;
        case 0x286b08u: goto label_286b08;
        case 0x286b0cu: goto label_286b0c;
        case 0x286b10u: goto label_286b10;
        case 0x286b14u: goto label_286b14;
        case 0x286b18u: goto label_286b18;
        case 0x286b1cu: goto label_286b1c;
        case 0x286b20u: goto label_286b20;
        case 0x286b24u: goto label_286b24;
        case 0x286b28u: goto label_286b28;
        case 0x286b2cu: goto label_286b2c;
        case 0x286b30u: goto label_286b30;
        case 0x286b34u: goto label_286b34;
        case 0x286b38u: goto label_286b38;
        case 0x286b3cu: goto label_286b3c;
        case 0x286b40u: goto label_286b40;
        case 0x286b44u: goto label_286b44;
        case 0x286b48u: goto label_286b48;
        case 0x286b4cu: goto label_286b4c;
        case 0x286b50u: goto label_286b50;
        case 0x286b54u: goto label_286b54;
        case 0x286b58u: goto label_286b58;
        case 0x286b5cu: goto label_286b5c;
        case 0x286b60u: goto label_286b60;
        case 0x286b64u: goto label_286b64;
        case 0x286b68u: goto label_286b68;
        case 0x286b6cu: goto label_286b6c;
        case 0x286b70u: goto label_286b70;
        case 0x286b74u: goto label_286b74;
        case 0x286b78u: goto label_286b78;
        case 0x286b7cu: goto label_286b7c;
        case 0x286b80u: goto label_286b80;
        case 0x286b84u: goto label_286b84;
        case 0x286b88u: goto label_286b88;
        case 0x286b8cu: goto label_286b8c;
        case 0x286b90u: goto label_286b90;
        case 0x286b94u: goto label_286b94;
        case 0x286b98u: goto label_286b98;
        case 0x286b9cu: goto label_286b9c;
        case 0x286ba0u: goto label_286ba0;
        case 0x286ba4u: goto label_286ba4;
        case 0x286ba8u: goto label_286ba8;
        case 0x286bacu: goto label_286bac;
        case 0x286bb0u: goto label_286bb0;
        case 0x286bb4u: goto label_286bb4;
        case 0x286bb8u: goto label_286bb8;
        case 0x286bbcu: goto label_286bbc;
        case 0x286bc0u: goto label_286bc0;
        case 0x286bc4u: goto label_286bc4;
        case 0x286bc8u: goto label_286bc8;
        case 0x286bccu: goto label_286bcc;
        case 0x286bd0u: goto label_286bd0;
        case 0x286bd4u: goto label_286bd4;
        case 0x286bd8u: goto label_286bd8;
        case 0x286bdcu: goto label_286bdc;
        case 0x286be0u: goto label_286be0;
        case 0x286be4u: goto label_286be4;
        case 0x286be8u: goto label_286be8;
        case 0x286becu: goto label_286bec;
        case 0x286bf0u: goto label_286bf0;
        case 0x286bf4u: goto label_286bf4;
        case 0x286bf8u: goto label_286bf8;
        case 0x286bfcu: goto label_286bfc;
        case 0x286c00u: goto label_286c00;
        case 0x286c04u: goto label_286c04;
        case 0x286c08u: goto label_286c08;
        case 0x286c0cu: goto label_286c0c;
        case 0x286c10u: goto label_286c10;
        case 0x286c14u: goto label_286c14;
        case 0x286c18u: goto label_286c18;
        case 0x286c1cu: goto label_286c1c;
        case 0x286c20u: goto label_286c20;
        case 0x286c24u: goto label_286c24;
        case 0x286c28u: goto label_286c28;
        case 0x286c2cu: goto label_286c2c;
        case 0x286c30u: goto label_286c30;
        case 0x286c34u: goto label_286c34;
        case 0x286c38u: goto label_286c38;
        case 0x286c3cu: goto label_286c3c;
        case 0x286c40u: goto label_286c40;
        case 0x286c44u: goto label_286c44;
        case 0x286c48u: goto label_286c48;
        case 0x286c4cu: goto label_286c4c;
        case 0x286c50u: goto label_286c50;
        case 0x286c54u: goto label_286c54;
        case 0x286c58u: goto label_286c58;
        case 0x286c5cu: goto label_286c5c;
        case 0x286c60u: goto label_286c60;
        case 0x286c64u: goto label_286c64;
        case 0x286c68u: goto label_286c68;
        case 0x286c6cu: goto label_286c6c;
        case 0x286c70u: goto label_286c70;
        case 0x286c74u: goto label_286c74;
        case 0x286c78u: goto label_286c78;
        case 0x286c7cu: goto label_286c7c;
        case 0x286c80u: goto label_286c80;
        case 0x286c84u: goto label_286c84;
        case 0x286c88u: goto label_286c88;
        case 0x286c8cu: goto label_286c8c;
        case 0x286c90u: goto label_286c90;
        case 0x286c94u: goto label_286c94;
        case 0x286c98u: goto label_286c98;
        case 0x286c9cu: goto label_286c9c;
        case 0x286ca0u: goto label_286ca0;
        case 0x286ca4u: goto label_286ca4;
        case 0x286ca8u: goto label_286ca8;
        case 0x286cacu: goto label_286cac;
        default: break;
    }

    ctx->pc = 0x285ef0u;

label_285ef0:
    // 0x285ef0: 0x27bdf0c0  addiu       $sp, $sp, -0xF40
    ctx->pc = 0x285ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963392));
label_285ef4:
    // 0x285ef4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x285ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_285ef8:
    // 0x285ef8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x285ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_285efc:
    // 0x285efc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x285efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_285f00:
    // 0x285f00: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x285f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_285f04:
    // 0x285f04: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x285f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_285f08:
    // 0x285f08: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x285f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_285f0c:
    // 0x285f0c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x285f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_285f10:
    // 0x285f10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x285f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_285f14:
    // 0x285f14: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x285f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_285f18:
    // 0x285f18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x285f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_285f1c:
    // 0x285f1c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x285f1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_285f20:
    // 0x285f20: 0xafa4015c  sw          $a0, 0x15C($sp)
    ctx->pc = 0x285f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
label_285f24:
    // 0x285f24: 0xafa50158  sw          $a1, 0x158($sp)
    ctx->pc = 0x285f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 5));
label_285f28:
    // 0x285f28: 0xafa60154  sw          $a2, 0x154($sp)
    ctx->pc = 0x285f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 6));
label_285f2c:
    // 0x285f2c: 0xafa70150  sw          $a3, 0x150($sp)
    ctx->pc = 0x285f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 7));
label_285f30:
    // 0x285f30: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x285f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_285f34:
    // 0x285f34: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x285f34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_285f38:
    // 0x285f38: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x285f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_285f3c:
    // 0x285f3c: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x285f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_285f40:
    // 0x285f40: 0xc0a1b2c  jal         func_286CB0
label_285f44:
    if (ctx->pc == 0x285F44u) {
        ctx->pc = 0x285F44u;
            // 0x285f44: 0x27a40f3c  addiu       $a0, $sp, 0xF3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3900));
        ctx->pc = 0x285F48u;
        goto label_285f48;
    }
    ctx->pc = 0x285F40u;
    SET_GPR_U32(ctx, 31, 0x285F48u);
    ctx->pc = 0x285F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285F40u;
            // 0x285f44: 0x27a40f3c  addiu       $a0, $sp, 0xF3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3900));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286CB0u;
    if (runtime->hasFunction(0x286CB0u)) {
        auto targetFn = runtime->lookupFunction(0x286CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F48u; }
        if (ctx->pc != 0x285F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286CB0_0x286cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F48u; }
        if (ctx->pc != 0x285F48u) { return; }
    }
    ctx->pc = 0x285F48u;
label_285f48:
    // 0x285f48: 0x27a20f3c  addiu       $v0, $sp, 0xF3C
    ctx->pc = 0x285f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3900));
label_285f4c:
    // 0x285f4c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x285f4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_285f50:
    // 0x285f50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_285f54:
    if (ctx->pc == 0x285F54u) {
        ctx->pc = 0x285F54u;
            // 0x285f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285F58u;
        goto label_285f58;
    }
    ctx->pc = 0x285F50u;
    {
        const bool branch_taken_0x285f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285F50u;
            // 0x285f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f50) {
            ctx->pc = 0x285F60u;
            goto label_285f60;
        }
    }
    ctx->pc = 0x285F58u;
label_285f58:
    // 0x285f58: 0x10000345  b           . + 4 + (0x345 << 2)
label_285f5c:
    if (ctx->pc == 0x285F5Cu) {
        ctx->pc = 0x285F60u;
        goto label_285f60;
    }
    ctx->pc = 0x285F58u;
    {
        const bool branch_taken_0x285f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285f58) {
            ctx->pc = 0x286C70u;
            goto label_286c70;
        }
    }
    ctx->pc = 0x285F60u;
label_285f60:
    // 0x285f60: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x285f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_285f64:
    // 0x285f64: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x285f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_285f68:
    // 0x285f68: 0x27a60f0c  addiu       $a2, $sp, 0xF0C
    ctx->pc = 0x285f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3852));
label_285f6c:
    // 0x285f6c: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x285f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_285f70:
    // 0x285f70: 0x27a80f04  addiu       $t0, $sp, 0xF04
    ctx->pc = 0x285f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3844));
label_285f74:
    // 0x285f74: 0x27a70f20  addiu       $a3, $sp, 0xF20
    ctx->pc = 0x285f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 3872));
label_285f78:
    // 0x285f78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x285f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_285f7c:
    // 0x285f7c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x285f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_285f80:
    // 0x285f80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x285f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_285f84:
    // 0x285f84: 0xafa60f00  sw          $a2, 0xF00($sp)
    ctx->pc = 0x285f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3840), GPR_U32(ctx, 6));
label_285f88:
    // 0x285f88: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x285f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_285f8c:
    // 0x285f8c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x285f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_285f90:
    // 0x285f90: 0x27a20f08  addiu       $v0, $sp, 0xF08
    ctx->pc = 0x285f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3848));
label_285f94:
    // 0x285f94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x285f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_285f98:
    // 0x285f98: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x285f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_285f9c:
    // 0x285f9c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x285f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_285fa0:
    // 0x285fa0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x285fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_285fa4:
    // 0x285fa4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x285fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_285fa8:
    // 0x285fa8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x285fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_285fac:
    // 0x285fac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x285facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_285fb0:
    // 0x285fb0: 0x8fa20f00  lw          $v0, 0xF00($sp)
    ctx->pc = 0x285fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3840)));
label_285fb4:
    // 0x285fb4: 0xc0a2050  jal         func_288140
label_285fb8:
    if (ctx->pc == 0x285FB8u) {
        ctx->pc = 0x285FB8u;
            // 0x285fb8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x285FBCu;
        goto label_285fbc;
    }
    ctx->pc = 0x285FB4u;
    SET_GPR_U32(ctx, 31, 0x285FBCu);
    ctx->pc = 0x285FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285FB4u;
            // 0x285fb8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288140u;
    if (runtime->hasFunction(0x288140u)) {
        auto targetFn = runtime->lookupFunction(0x288140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285FBCu; }
        if (ctx->pc != 0x285FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288140_0x288140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285FBCu; }
        if (ctx->pc != 0x285FBCu) { return; }
    }
    ctx->pc = 0x285FBCu;
label_285fbc:
    // 0x285fbc: 0x27a20f20  addiu       $v0, $sp, 0xF20
    ctx->pc = 0x285fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3872));
label_285fc0:
    // 0x285fc0: 0x27a80ef0  addiu       $t0, $sp, 0xEF0
    ctx->pc = 0x285fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3824));
label_285fc4:
    // 0x285fc4: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x285fc4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_285fc8:
    // 0x285fc8: 0x27a60dec  addiu       $a2, $sp, 0xDEC
    ctx->pc = 0x285fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3564));
label_285fcc:
    // 0x285fcc: 0x27a405dc  addiu       $a0, $sp, 0x5DC
    ctx->pc = 0x285fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1500));
label_285fd0:
    // 0x285fd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x285fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_285fd4:
    // 0x285fd4: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x285fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_285fd8:
    // 0x285fd8: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x285fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_285fdc:
    // 0x285fdc: 0x27a20f00  addiu       $v0, $sp, 0xF00
    ctx->pc = 0x285fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
label_285fe0:
    // 0x285fe0: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x285fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_285fe4:
    // 0x285fe4: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x285fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_285fe8:
    // 0x285fe8: 0x27a20de4  addiu       $v0, $sp, 0xDE4
    ctx->pc = 0x285fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3556));
label_285fec:
    // 0x285fec: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x285fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_285ff0:
    // 0x285ff0: 0xafa60de0  sw          $a2, 0xDE0($sp)
    ctx->pc = 0x285ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3552), GPR_U32(ctx, 6));
label_285ff4:
    // 0x285ff4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x285ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_285ff8:
    // 0x285ff8: 0x27a20de8  addiu       $v0, $sp, 0xDE8
    ctx->pc = 0x285ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3560));
label_285ffc:
    // 0x285ffc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x285ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_286000:
    // 0x286000: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x286000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_286004:
    // 0x286004: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x286004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_286008:
    // 0x286008: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x286008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_28600c:
    // 0x28600c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x28600cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_286010:
    // 0x286010: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x286010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_286014:
    // 0x286014: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x286014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286018:
    // 0x286018: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x286018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_28601c:
    // 0x28601c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x28601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_286020:
    // 0x286020: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x286020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_286024:
    // 0x286024: 0xe7a00f30  swc1        $f0, 0xF30($sp)
    ctx->pc = 0x286024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3888), bits); }
label_286028:
    // 0x286028: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x286028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_28602c:
    // 0x28602c: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x28602cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_286030:
    // 0x286030: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x286030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_286034:
    // 0x286034: 0x27a20f38  addiu       $v0, $sp, 0xF38
    ctx->pc = 0x286034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3896));
label_286038:
    // 0x286038: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x286038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_28603c:
    // 0x28603c: 0xafa405d0  sw          $a0, 0x5D0($sp)
    ctx->pc = 0x28603cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1488), GPR_U32(ctx, 4));
label_286040:
    // 0x286040: 0x27a205d4  addiu       $v0, $sp, 0x5D4
    ctx->pc = 0x286040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1492));
label_286044:
    // 0x286044: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x286044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_286048:
    // 0x286048: 0x27a205d8  addiu       $v0, $sp, 0x5D8
    ctx->pc = 0x286048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1496));
label_28604c:
    // 0x28604c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28604cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_286050:
    // 0x286050: 0x27a20f38  addiu       $v0, $sp, 0xF38
    ctx->pc = 0x286050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3896));
label_286054:
    // 0x286054: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x286054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286058:
    // 0x286058: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x286058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28605c:
    // 0x28605c: 0x10200264  beqz        $at, . + 4 + (0x264 << 2)
label_286060:
    if (ctx->pc == 0x286060u) {
        ctx->pc = 0x286060u;
            // 0x286060: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x286064u;
        goto label_286064;
    }
    ctx->pc = 0x28605Cu;
    {
        const bool branch_taken_0x28605c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x286060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28605Cu;
            // 0x286060: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28605c) {
            ctx->pc = 0x2869F0u;
            goto label_2869f0;
        }
    }
    ctx->pc = 0x286064u;
label_286064:
    // 0x286064: 0x27b20184  addiu       $s2, $sp, 0x184
    ctx->pc = 0x286064u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_286068:
    // 0x286068: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x286068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_28606c:
    // 0x28606c: 0x27b60188  addiu       $s6, $sp, 0x188
    ctx->pc = 0x28606cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_286070:
    // 0x286070: 0x27b101a4  addiu       $s1, $sp, 0x1A4
    ctx->pc = 0x286070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_286074:
    // 0x286074: 0x27b001a8  addiu       $s0, $sp, 0x1A8
    ctx->pc = 0x286074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_286078:
    // 0x286078: 0x27be01ac  addiu       $fp, $sp, 0x1AC
    ctx->pc = 0x286078u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_28607c:
    // 0x28607c: 0x0  nop
    ctx->pc = 0x28607cu;
    // NOP
label_286080:
    // 0x286080: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x286080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_286084:
    // 0x286084: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x286084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_286088:
    // 0x286088: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x286088u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28608c:
    // 0x28608c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_286090:
    if (ctx->pc == 0x286090u) {
        ctx->pc = 0x286094u;
        goto label_286094;
    }
    ctx->pc = 0x28608Cu;
    {
        const bool branch_taken_0x28608c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28608c) {
            ctx->pc = 0x2860D0u;
            goto label_2860d0;
        }
    }
    ctx->pc = 0x286094u;
label_286094:
    // 0x286094: 0xc7a10f30  lwc1        $f1, 0xF30($sp)
    ctx->pc = 0x286094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286098:
    // 0x286098: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x286098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
label_28609c:
    // 0x28609c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x28609cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2860a0:
    // 0x2860a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2860a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2860a4:
    // 0x2860a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2860a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2860a8:
    // 0x2860a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2860a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2860ac:
    // 0x2860ac: 0x0  nop
    ctx->pc = 0x2860acu;
    // NOP
label_2860b0:
    // 0x2860b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2860b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2860b4:
    // 0x2860b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2860b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2860b8:
    // 0x2860b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2860bc:
    if (ctx->pc == 0x2860BCu) {
        ctx->pc = 0x2860BCu;
            // 0x2860bc: 0xe7a10f30  swc1        $f1, 0xF30($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3888), bits); }
        ctx->pc = 0x2860C0u;
        goto label_2860c0;
    }
    ctx->pc = 0x2860B8u;
    {
        const bool branch_taken_0x2860b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2860BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2860B8u;
            // 0x2860bc: 0xe7a10f30  swc1        $f1, 0xF30($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3888), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860b8) {
            ctx->pc = 0x2860D0u;
            goto label_2860d0;
        }
    }
    ctx->pc = 0x2860C0u;
label_2860c0:
    // 0x2860c0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2860c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2860c4:
    // 0x2860c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2860c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2860c8:
    // 0x2860c8: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x2860c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_2860cc:
    // 0x2860cc: 0x0  nop
    ctx->pc = 0x2860ccu;
    // NOP
label_2860d0:
    // 0x2860d0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2860d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2860d4:
    // 0x2860d4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2860d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2860d8:
    // 0x2860d8: 0x8c95000c  lw          $s5, 0xC($a0)
    ctx->pc = 0x2860d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2860dc:
    // 0x2860dc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2860dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2860e0:
    // 0x2860e0: 0x26a30150  addiu       $v1, $s5, 0x150
    ctx->pc = 0x2860e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
label_2860e4:
    // 0x2860e4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2860e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2860e8:
    // 0x2860e8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2860ec:
    if (ctx->pc == 0x2860ECu) {
        ctx->pc = 0x2860F0u;
        goto label_2860f0;
    }
    ctx->pc = 0x2860E8u;
    {
        const bool branch_taken_0x2860e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2860e8) {
            ctx->pc = 0x2860F8u;
            goto label_2860f8;
        }
    }
    ctx->pc = 0x2860F0u;
label_2860f0:
    // 0x2860f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2860f4:
    if (ctx->pc == 0x2860F4u) {
        ctx->pc = 0x2860F4u;
            // 0x2860f4: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x2860F8u;
        goto label_2860f8;
    }
    ctx->pc = 0x2860F0u;
    {
        const bool branch_taken_0x2860f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2860F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2860F0u;
            // 0x2860f4: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860f0) {
            ctx->pc = 0x286110u;
            goto label_286110;
        }
    }
    ctx->pc = 0x2860F8u;
label_2860f8:
    // 0x2860f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2860f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2860fc:
    // 0x2860fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2860fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_286100:
    // 0x286100: 0x320f809  jalr        $t9
label_286104:
    if (ctx->pc == 0x286104u) {
        ctx->pc = 0x286104u;
            // 0x286104: 0x24050150  addiu       $a1, $zero, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
        ctx->pc = 0x286108u;
        goto label_286108;
    }
    ctx->pc = 0x286100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x286108u);
        ctx->pc = 0x286104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286100u;
            // 0x286104: 0x24050150  addiu       $a1, $zero, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x286108u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x286108u; }
            if (ctx->pc != 0x286108u) { return; }
        }
        }
    }
    ctx->pc = 0x286108u;
label_286108:
    // 0x286108: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x286108u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28610c:
    // 0x28610c: 0x0  nop
    ctx->pc = 0x28610cu;
    // NOP
label_286110:
    // 0x286110: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_286114:
    if (ctx->pc == 0x286114u) {
        ctx->pc = 0x286114u;
            // 0x286114: 0x26a3000c  addiu       $v1, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->pc = 0x286118u;
        goto label_286118;
    }
    ctx->pc = 0x286110u;
    {
        const bool branch_taken_0x286110 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x286114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286110u;
            // 0x286114: 0x26a3000c  addiu       $v1, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286110) {
            ctx->pc = 0x286130u;
            goto label_286130;
        }
    }
    ctx->pc = 0x286118u;
label_286118:
    // 0x286118: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x286118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_28611c:
    // 0x28611c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x28611cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_286120:
    // 0x286120: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x286120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_286124:
    // 0x286124: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x286124u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_286128:
    // 0x286128: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x286128u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
label_28612c:
    // 0x28612c: 0x0  nop
    ctx->pc = 0x28612cu;
    // NOP
label_286130:
    // 0x286130: 0x27a20de4  addiu       $v0, $sp, 0xDE4
    ctx->pc = 0x286130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3556));
label_286134:
    // 0x286134: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286138:
    // 0x286138: 0x27a20de8  addiu       $v0, $sp, 0xDE8
    ctx->pc = 0x286138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3560));
label_28613c:
    // 0x28613c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286140:
    // 0x286140: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x286140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_286144:
    // 0x286144: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x286144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_286148:
    // 0x286148: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_28614c:
    if (ctx->pc == 0x28614Cu) {
        ctx->pc = 0x28614Cu;
            // 0x28614c: 0x27a40de0  addiu       $a0, $sp, 0xDE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3552));
        ctx->pc = 0x286150u;
        goto label_286150;
    }
    ctx->pc = 0x286148u;
    {
        const bool branch_taken_0x286148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28614Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286148u;
            // 0x28614c: 0x27a40de0  addiu       $a0, $sp, 0xDE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286148) {
            ctx->pc = 0x286158u;
            goto label_286158;
        }
    }
    ctx->pc = 0x286150u;
label_286150:
    // 0x286150: 0xc0a728c  jal         func_29CA30
label_286154:
    if (ctx->pc == 0x286154u) {
        ctx->pc = 0x286154u;
            // 0x286154: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x286158u;
        goto label_286158;
    }
    ctx->pc = 0x286150u;
    SET_GPR_U32(ctx, 31, 0x286158u);
    ctx->pc = 0x286154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286150u;
            // 0x286154: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286158u; }
        if (ctx->pc != 0x286158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286158u; }
        if (ctx->pc != 0x286158u) { return; }
    }
    ctx->pc = 0x286158u;
label_286158:
    // 0x286158: 0x27a20de4  addiu       $v0, $sp, 0xDE4
    ctx->pc = 0x286158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3556));
label_28615c:
    // 0x28615c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286160:
    // 0x286160: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x286160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_286164:
    // 0x286164: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x286164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_286168:
    // 0x286168: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x286168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_28616c:
    // 0x28616c: 0x27a20de4  addiu       $v0, $sp, 0xDE4
    ctx->pc = 0x28616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3556));
label_286170:
    // 0x286170: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x286170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_286174:
    // 0x286174: 0x8fa20de0  lw          $v0, 0xDE0($sp)
    ctx->pc = 0x286174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3552)));
label_286178:
    // 0x286178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x286178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28617c:
    // 0x28617c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x28617cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_286180:
    // 0x286180: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x286180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_286184:
    // 0x286184: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x286184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_286188:
    // 0x286188: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x286188u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28618c:
    // 0x28618c: 0x10200200  beqz        $at, . + 4 + (0x200 << 2)
label_286190:
    if (ctx->pc == 0x286190u) {
        ctx->pc = 0x286194u;
        goto label_286194;
    }
    ctx->pc = 0x28618Cu;
    {
        const bool branch_taken_0x28618c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28618c) {
            ctx->pc = 0x286990u;
            goto label_286990;
        }
    }
    ctx->pc = 0x286194u;
label_286194:
    // 0x286194: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x286194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_286198:
    // 0x286198: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x286198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_28619c:
    // 0x28619c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28619cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2861a0:
    // 0x2861a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2861a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2861a4:
    // 0x2861a4: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x2861a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_2861a8:
    // 0x2861a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2861a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2861ac:
    // 0x2861ac: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x2861acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2861b0:
    // 0x2861b0: 0x27a203cc  addiu       $v0, $sp, 0x3CC
    ctx->pc = 0x2861b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 972));
label_2861b4:
    // 0x2861b4: 0xafa203c0  sw          $v0, 0x3C0($sp)
    ctx->pc = 0x2861b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 2));
label_2861b8:
    // 0x2861b8: 0x27a203c4  addiu       $v0, $sp, 0x3C4
    ctx->pc = 0x2861b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 964));
label_2861bc:
    // 0x2861bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2861bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2861c0:
    // 0x2861c0: 0x27a203c8  addiu       $v0, $sp, 0x3C8
    ctx->pc = 0x2861c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 968));
label_2861c4:
    // 0x2861c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2861c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2861c8:
    // 0x2861c8: 0x27a201bc  addiu       $v0, $sp, 0x1BC
    ctx->pc = 0x2861c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
label_2861cc:
    // 0x2861cc: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x2861ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_2861d0:
    // 0x2861d0: 0x27a201b4  addiu       $v0, $sp, 0x1B4
    ctx->pc = 0x2861d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_2861d4:
    // 0x2861d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2861d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2861d8:
    // 0x2861d8: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x2861d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_2861dc:
    // 0x2861dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2861dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2861e0:
    // 0x2861e0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2861e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2861e4:
    // 0x2861e4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2861e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2861e8:
    // 0x2861e8: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2861e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2861ec:
    // 0x2861ec: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x2861ecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2861f0:
    // 0x2861f0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2861f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2861f4:
    // 0x2861f4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2861f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2861f8:
    // 0x2861f8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2861f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2861fc:
    // 0x2861fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2861fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_286200:
    // 0x286200: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x286200u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_286204:
    // 0x286204: 0x10a0017c  beqz        $a1, . + 4 + (0x17C << 2)
label_286208:
    if (ctx->pc == 0x286208u) {
        ctx->pc = 0x286208u;
            // 0x286208: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x28620Cu;
        goto label_28620c;
    }
    ctx->pc = 0x286204u;
    {
        const bool branch_taken_0x286204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x286208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286204u;
            // 0x286208: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286204) {
            ctx->pc = 0x2867F8u;
            goto label_2867f8;
        }
    }
    ctx->pc = 0x28620Cu;
label_28620c:
    // 0x28620c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28620cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_286210:
    // 0x286210: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x286210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_286214:
    // 0x286214: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x286214u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_286218:
    // 0x286218: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x286218u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_28621c:
    // 0x28621c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x28621cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_286220:
    // 0x286220: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x286220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_286224:
    // 0x286224: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x286224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_286228:
    // 0x286228: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x286228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28622c:
    // 0x28622c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x28622cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_286230:
    // 0x286230: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x286230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_286234:
    // 0x286234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x286234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_286238:
    // 0x286238: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x286238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_28623c:
    // 0x28623c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x28623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_286240:
    // 0x286240: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
label_286244:
    if (ctx->pc == 0x286244u) {
        ctx->pc = 0x286248u;
        goto label_286248;
    }
    ctx->pc = 0x286240u;
    {
        const bool branch_taken_0x286240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x286240) {
            ctx->pc = 0x286250u;
            goto label_286250;
        }
    }
    ctx->pc = 0x286248u;
label_286248:
    // 0x286248: 0x10000002  b           . + 4 + (0x2 << 2)
label_28624c:
    if (ctx->pc == 0x28624Cu) {
        ctx->pc = 0x28624Cu;
            // 0x28624c: 0xafb700d0  sw          $s7, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 23));
        ctx->pc = 0x286250u;
        goto label_286250;
    }
    ctx->pc = 0x286248u;
    {
        const bool branch_taken_0x286248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28624Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286248u;
            // 0x28624c: 0xafb700d0  sw          $s7, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286248) {
            ctx->pc = 0x286254u;
            goto label_286254;
        }
    }
    ctx->pc = 0x286250u;
label_286250:
    // 0x286250: 0xafb300d0  sw          $s3, 0xD0($sp)
    ctx->pc = 0x286250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 19));
label_286254:
    // 0x286254: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x286254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_286258:
    // 0x286258: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x286258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_28625c:
    // 0x28625c: 0xc0a2984  jal         func_28A610
label_286260:
    if (ctx->pc == 0x286260u) {
        ctx->pc = 0x286260u;
            // 0x286260: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x286264u;
        goto label_286264;
    }
    ctx->pc = 0x28625Cu;
    SET_GPR_U32(ctx, 31, 0x286264u);
    ctx->pc = 0x286260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28625Cu;
            // 0x286260: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286264u; }
        if (ctx->pc != 0x286264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286264u; }
        if (ctx->pc != 0x286264u) { return; }
    }
    ctx->pc = 0x286264u;
label_286264:
    // 0x286264: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x286264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_286268:
    // 0x286268: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28626c:
    // 0x28626c: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x28626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286270:
    // 0x286270: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x286270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_286274:
    // 0x286274: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x286274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_286278:
    // 0x286278: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x286278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28627c:
    // 0x28627c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28627cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_286280:
    // 0x286280: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x286280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_286284:
    // 0x286284: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x286284u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_286288:
    // 0x286288: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x286288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_28628c:
    // 0x28628c: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x28628cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_286290:
    // 0x286290: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_286294:
    if (ctx->pc == 0x286294u) {
        ctx->pc = 0x286298u;
        goto label_286298;
    }
    ctx->pc = 0x286290u;
    {
        const bool branch_taken_0x286290 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x286290) {
            ctx->pc = 0x2862B8u;
            goto label_2862b8;
        }
    }
    ctx->pc = 0x286298u;
label_286298:
    // 0x286298: 0x0  nop
    ctx->pc = 0x286298u;
    // NOP
label_28629c:
    // 0x28629c: 0x0  nop
    ctx->pc = 0x28629cu;
    // NOP
label_2862a0:
    // 0x2862a0: 0x4600a0d6  rsqrt.s     $f3, $f20, $f0
    ctx->pc = 0x2862a0u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[20]);
label_2862a4:
    // 0x2862a4: 0x0  nop
    ctx->pc = 0x2862a4u;
    // NOP
label_2862a8:
    // 0x2862a8: 0x0  nop
    ctx->pc = 0x2862a8u;
    // NOP
label_2862ac:
    // 0x2862ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_2862b0:
    if (ctx->pc == 0x2862B0u) {
        ctx->pc = 0x2862B4u;
        goto label_2862b4;
    }
    ctx->pc = 0x2862ACu;
    {
        const bool branch_taken_0x2862ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2862ac) {
            ctx->pc = 0x2862B8u;
            goto label_2862b8;
        }
    }
    ctx->pc = 0x2862B4u;
label_2862b4:
    // 0x2862b4: 0x0  nop
    ctx->pc = 0x2862b4u;
    // NOP
label_2862b8:
    // 0x2862b8: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x2862b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_2862bc:
    // 0x2862bc: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2862bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2862c0:
    // 0x2862c0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2862c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2862c4:
    // 0x2862c4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2862c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2862c8:
    // 0x2862c8: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2862c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2862cc:
    // 0x2862cc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2862ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2862d0:
    // 0x2862d0: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x2862d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_2862d4:
    // 0x2862d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2862d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2862d8:
    // 0x2862d8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2862d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2862dc:
    // 0x2862dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2862dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2862e0:
    // 0x2862e0: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x2862e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_2862e4:
    // 0x2862e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2862e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2862e8:
    // 0x2862e8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2862e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2862ec:
    // 0x2862ec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2862ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2862f0:
    // 0x2862f0: 0x27a2019c  addiu       $v0, $sp, 0x19C
    ctx->pc = 0x2862f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_2862f4:
    // 0x2862f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2862f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2862f8:
    // 0x2862f8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2862f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2862fc:
    // 0x2862fc: 0xc0a2984  jal         func_28A610
label_286300:
    if (ctx->pc == 0x286300u) {
        ctx->pc = 0x286300u;
            // 0x286300: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x286304u;
        goto label_286304;
    }
    ctx->pc = 0x2862FCu;
    SET_GPR_U32(ctx, 31, 0x286304u);
    ctx->pc = 0x286300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2862FCu;
            // 0x286300: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286304u; }
        if (ctx->pc != 0x286304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286304u; }
        if (ctx->pc != 0x286304u) { return; }
    }
    ctx->pc = 0x286304u;
label_286304:
    // 0x286304: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x286304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286308:
    // 0x286308: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x286308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28630c:
    // 0x28630c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x28630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_286310:
    // 0x286310: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x286310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_286314:
    // 0x286314: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x286314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_286318:
    // 0x286318: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x286318u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_28631c:
    // 0x28631c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x28631cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_286320:
    // 0x286320: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x286320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_286324:
    // 0x286324: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x286324u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_286328:
    // 0x286328: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_28632c:
    if (ctx->pc == 0x28632Cu) {
        ctx->pc = 0x286330u;
        goto label_286330;
    }
    ctx->pc = 0x286328u;
    {
        const bool branch_taken_0x286328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x286328) {
            ctx->pc = 0x286350u;
            goto label_286350;
        }
    }
    ctx->pc = 0x286330u;
label_286330:
    // 0x286330: 0x0  nop
    ctx->pc = 0x286330u;
    // NOP
label_286334:
    // 0x286334: 0x0  nop
    ctx->pc = 0x286334u;
    // NOP
label_286338:
    // 0x286338: 0x4600a0d6  rsqrt.s     $f3, $f20, $f0
    ctx->pc = 0x286338u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[20]);
label_28633c:
    // 0x28633c: 0x0  nop
    ctx->pc = 0x28633cu;
    // NOP
label_286340:
    // 0x286340: 0x0  nop
    ctx->pc = 0x286340u;
    // NOP
label_286344:
    // 0x286344: 0x10000002  b           . + 4 + (0x2 << 2)
label_286348:
    if (ctx->pc == 0x286348u) {
        ctx->pc = 0x28634Cu;
        goto label_28634c;
    }
    ctx->pc = 0x286344u;
    {
        const bool branch_taken_0x286344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286344) {
            ctx->pc = 0x286350u;
            goto label_286350;
        }
    }
    ctx->pc = 0x28634Cu;
label_28634c:
    // 0x28634c: 0x0  nop
    ctx->pc = 0x28634cu;
    // NOP
label_286350:
    // 0x286350: 0x3c023586  lui         $v0, 0x3586
    ctx->pc = 0x286350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13702 << 16));
label_286354:
    // 0x286354: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x286354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286358:
    // 0x286358: 0x344237bd  ori         $v0, $v0, 0x37BD
    ctx->pc = 0x286358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
label_28635c:
    // 0x28635c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28635cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_286360:
    // 0x286360: 0x27a2018c  addiu       $v0, $sp, 0x18C
    ctx->pc = 0x286360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_286364:
    // 0x286364: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x286364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_286368:
    // 0x286368: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x286368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_28636c:
    // 0x28636c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x28636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286370:
    // 0x286370: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x286370u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_286374:
    // 0x286374: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x286374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_286378:
    // 0x286378: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x286378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28637c:
    // 0x28637c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28637cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_286380:
    // 0x286380: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x286380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_286384:
    // 0x286384: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x286384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286388:
    // 0x286388: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x286388u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_28638c:
    // 0x28638c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x28638cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_286390:
    // 0x286390: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x286390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_286394:
    // 0x286394: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x286394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_286398:
    // 0x286398: 0xc6c50000  lwc1        $f5, 0x0($s6)
    ctx->pc = 0x286398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28639c:
    // 0x28639c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x28639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2863a0:
    // 0x2863a0: 0xc7a30180  lwc1        $f3, 0x180($sp)
    ctx->pc = 0x2863a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2863a4:
    // 0x2863a4: 0xc7a20190  lwc1        $f2, 0x190($sp)
    ctx->pc = 0x2863a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2863a8:
    // 0x2863a8: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x2863a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_2863ac:
    // 0x2863ac: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2863acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2863b0:
    // 0x2863b0: 0x4605301a  mula.s      $f6, $f5
    ctx->pc = 0x2863b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_2863b4:
    // 0x2863b4: 0x4601205d  msub.s      $f1, $f4, $f1
    ctx->pc = 0x2863b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_2863b8:
    // 0x2863b8: 0xe7a101a0  swc1        $f1, 0x1A0($sp)
    ctx->pc = 0x2863b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_2863bc:
    // 0x2863bc: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2863bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2863c0:
    // 0x2863c0: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x2863c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2863c4:
    // 0x2863c4: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x2863c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2863c8:
    // 0x2863c8: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x2863c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_2863cc:
    // 0x2863cc: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x2863ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_2863d0:
    // 0x2863d0: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2863d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2863d4:
    // 0x2863d4: 0xc7a40190  lwc1        $f4, 0x190($sp)
    ctx->pc = 0x2863d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2863d8:
    // 0x2863d8: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x2863d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2863dc:
    // 0x2863dc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2863dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2863e0:
    // 0x2863e0: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x2863e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2863e4:
    // 0x2863e4: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x2863e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2863e8:
    // 0x2863e8: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x2863e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_2863ec:
    // 0x2863ec: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2863ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2863f0:
    // 0x2863f0: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x2863f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_2863f4:
    // 0x2863f4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2863f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2863f8:
    // 0x2863f8: 0xc7a201a0  lwc1        $f2, 0x1A0($sp)
    ctx->pc = 0x2863f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2863fc:
    // 0x2863fc: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2863fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_286400:
    // 0x286400: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x286400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_286404:
    // 0x286404: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x286404u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_286408:
    // 0x286408: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x286408u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_28640c:
    // 0x28640c: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x28640cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_286410:
    // 0x286410: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x286410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_286414:
    // 0x286414: 0x450000d8  bc1f        . + 4 + (0xD8 << 2)
label_286418:
    if (ctx->pc == 0x286418u) {
        ctx->pc = 0x28641Cu;
        goto label_28641c;
    }
    ctx->pc = 0x286414u;
    {
        const bool branch_taken_0x286414 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x286414) {
            ctx->pc = 0x286778u;
            goto label_286778;
        }
    }
    ctx->pc = 0x28641Cu;
label_28641c:
    // 0x28641c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x28641cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_286420:
    // 0x286420: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x286420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_286424:
    // 0x286424: 0xc0a2984  jal         func_28A610
label_286428:
    if (ctx->pc == 0x286428u) {
        ctx->pc = 0x286428u;
            // 0x286428: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x28642Cu;
        goto label_28642c;
    }
    ctx->pc = 0x286424u;
    SET_GPR_U32(ctx, 31, 0x28642Cu);
    ctx->pc = 0x286428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286424u;
            // 0x286428: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28642Cu; }
        if (ctx->pc != 0x28642Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28642Cu; }
        if (ctx->pc != 0x28642Cu) { return; }
    }
    ctx->pc = 0x28642Cu;
label_28642c:
    // 0x28642c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x28642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286430:
    // 0x286430: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x286430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286434:
    // 0x286434: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x286434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_286438:
    // 0x286438: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x286438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_28643c:
    // 0x28643c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28643cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_286440:
    // 0x286440: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x286440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_286444:
    // 0x286444: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x286444u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_286448:
    // 0x286448: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x286448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_28644c:
    // 0x28644c: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x28644cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_286450:
    // 0x286450: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_286454:
    if (ctx->pc == 0x286454u) {
        ctx->pc = 0x286458u;
        goto label_286458;
    }
    ctx->pc = 0x286450u;
    {
        const bool branch_taken_0x286450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x286450) {
            ctx->pc = 0x286478u;
            goto label_286478;
        }
    }
    ctx->pc = 0x286458u;
label_286458:
    // 0x286458: 0x0  nop
    ctx->pc = 0x286458u;
    // NOP
label_28645c:
    // 0x28645c: 0x0  nop
    ctx->pc = 0x28645cu;
    // NOP
label_286460:
    // 0x286460: 0x4600a0d6  rsqrt.s     $f3, $f20, $f0
    ctx->pc = 0x286460u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[20]);
label_286464:
    // 0x286464: 0x0  nop
    ctx->pc = 0x286464u;
    // NOP
label_286468:
    // 0x286468: 0x0  nop
    ctx->pc = 0x286468u;
    // NOP
label_28646c:
    // 0x28646c: 0x10000002  b           . + 4 + (0x2 << 2)
label_286470:
    if (ctx->pc == 0x286470u) {
        ctx->pc = 0x286474u;
        goto label_286474;
    }
    ctx->pc = 0x28646Cu;
    {
        const bool branch_taken_0x28646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28646c) {
            ctx->pc = 0x286478u;
            goto label_286478;
        }
    }
    ctx->pc = 0x286474u;
label_286474:
    // 0x286474: 0x0  nop
    ctx->pc = 0x286474u;
    // NOP
label_286478:
    // 0x286478: 0x3c023586  lui         $v0, 0x3586
    ctx->pc = 0x286478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13702 << 16));
label_28647c:
    // 0x28647c: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x28647cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286480:
    // 0x286480: 0x344237bd  ori         $v0, $v0, 0x37BD
    ctx->pc = 0x286480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
label_286484:
    // 0x286484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_286488:
    // 0x286488: 0x27a2018c  addiu       $v0, $sp, 0x18C
    ctx->pc = 0x286488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_28648c:
    // 0x28648c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x28648cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_286490:
    // 0x286490: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x286490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_286494:
    // 0x286494: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x286494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286498:
    // 0x286498: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x286498u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_28649c:
    // 0x28649c: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x28649cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2864a0:
    // 0x2864a0: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x2864a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2864a4:
    // 0x2864a4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2864a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2864a8:
    // 0x2864a8: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x2864a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_2864ac:
    // 0x2864ac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2864acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2864b0:
    // 0x2864b0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2864b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2864b4:
    // 0x2864b4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2864b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2864b8:
    // 0x2864b8: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x2864b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_2864bc:
    // 0x2864bc: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x2864bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2864c0:
    // 0x2864c0: 0xc6c50000  lwc1        $f5, 0x0($s6)
    ctx->pc = 0x2864c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2864c4:
    // 0x2864c4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2864c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2864c8:
    // 0x2864c8: 0xc7a30180  lwc1        $f3, 0x180($sp)
    ctx->pc = 0x2864c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2864cc:
    // 0x2864cc: 0xc7a20190  lwc1        $f2, 0x190($sp)
    ctx->pc = 0x2864ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2864d0:
    // 0x2864d0: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x2864d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_2864d4:
    // 0x2864d4: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2864d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2864d8:
    // 0x2864d8: 0x4605301a  mula.s      $f6, $f5
    ctx->pc = 0x2864d8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_2864dc:
    // 0x2864dc: 0x4601205d  msub.s      $f1, $f4, $f1
    ctx->pc = 0x2864dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_2864e0:
    // 0x2864e0: 0xe7a101a0  swc1        $f1, 0x1A0($sp)
    ctx->pc = 0x2864e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_2864e4:
    // 0x2864e4: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2864e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2864e8:
    // 0x2864e8: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x2864e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2864ec:
    // 0x2864ec: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x2864ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2864f0:
    // 0x2864f0: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x2864f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_2864f4:
    // 0x2864f4: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x2864f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_2864f8:
    // 0x2864f8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2864f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2864fc:
    // 0x2864fc: 0xc7a40190  lwc1        $f4, 0x190($sp)
    ctx->pc = 0x2864fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_286500:
    // 0x286500: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x286500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_286504:
    // 0x286504: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x286504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_286508:
    // 0x286508: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x286508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28650c:
    // 0x28650c: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x28650cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_286510:
    // 0x286510: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x286510u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_286514:
    // 0x286514: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x286514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_286518:
    // 0x286518: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x286518u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_28651c:
    // 0x28651c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x28651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286520:
    // 0x286520: 0xc7a201a0  lwc1        $f2, 0x1A0($sp)
    ctx->pc = 0x286520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_286524:
    // 0x286524: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x286524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_286528:
    // 0x286528: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x286528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_28652c:
    // 0x28652c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x28652cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_286530:
    // 0x286530: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x286530u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_286534:
    // 0x286534: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x286534u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_286538:
    // 0x286538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x286538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28653c:
    // 0x28653c: 0x4500008e  bc1f        . + 4 + (0x8E << 2)
label_286540:
    if (ctx->pc == 0x286540u) {
        ctx->pc = 0x286540u;
            // 0x286540: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x286544u;
        goto label_286544;
    }
    ctx->pc = 0x28653Cu;
    {
        const bool branch_taken_0x28653c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28653Cu;
            // 0x286540: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28653c) {
            ctx->pc = 0x286778u;
            goto label_286778;
        }
    }
    ctx->pc = 0x286544u;
label_286544:
    // 0x286544: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x286544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_286548:
    // 0x286548: 0xc0a2970  jal         func_28A5C0
label_28654c:
    if (ctx->pc == 0x28654Cu) {
        ctx->pc = 0x28654Cu;
            // 0x28654c: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x286550u;
        goto label_286550;
    }
    ctx->pc = 0x286548u;
    SET_GPR_U32(ctx, 31, 0x286550u);
    ctx->pc = 0x28654Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286548u;
            // 0x28654c: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A5C0u;
    if (runtime->hasFunction(0x28A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x28A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286550u; }
        if (ctx->pc != 0x286550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A5C0_0x28a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286550u; }
        if (ctx->pc != 0x286550u) { return; }
    }
    ctx->pc = 0x286550u;
label_286550:
    // 0x286550: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x286550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_286554:
    // 0x286554: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x286554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_286558:
    // 0x286558: 0xc0a2984  jal         func_28A610
label_28655c:
    if (ctx->pc == 0x28655Cu) {
        ctx->pc = 0x28655Cu;
            // 0x28655c: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x286560u;
        goto label_286560;
    }
    ctx->pc = 0x286558u;
    SET_GPR_U32(ctx, 31, 0x286560u);
    ctx->pc = 0x28655Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286558u;
            // 0x28655c: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286560u; }
        if (ctx->pc != 0x286560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286560u; }
        if (ctx->pc != 0x286560u) { return; }
    }
    ctx->pc = 0x286560u;
label_286560:
    // 0x286560: 0x27a20164  addiu       $v0, $sp, 0x164
    ctx->pc = 0x286560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_286564:
    // 0x286564: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286568:
    // 0x286568: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x286568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28656c:
    // 0x28656c: 0x3c023586  lui         $v0, 0x3586
    ctx->pc = 0x28656cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13702 << 16));
label_286570:
    // 0x286570: 0x344337bd  ori         $v1, $v0, 0x37BD
    ctx->pc = 0x286570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
label_286574:
    // 0x286574: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x286574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_286578:
    // 0x286578: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x286578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28657c:
    // 0x28657c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x28657cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_286580:
    // 0x286580: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x286580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_286584:
    // 0x286584: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x286584u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_286588:
    // 0x286588: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x286588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28658c:
    // 0x28658c: 0x0  nop
    ctx->pc = 0x28658cu;
    // NOP
label_286590:
    // 0x286590: 0x4603181c  madd.s      $f0, $f3, $f3
    ctx->pc = 0x286590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_286594:
    // 0x286594: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x286594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_286598:
    // 0x286598: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_28659c:
    if (ctx->pc == 0x28659Cu) {
        ctx->pc = 0x28659Cu;
            // 0x28659c: 0x27a20174  addiu       $v0, $sp, 0x174 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
        ctx->pc = 0x2865A0u;
        goto label_2865a0;
    }
    ctx->pc = 0x286598u;
    {
        const bool branch_taken_0x286598 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28659Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286598u;
            // 0x28659c: 0x27a20174  addiu       $v0, $sp, 0x174 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286598) {
            ctx->pc = 0x2865D0u;
            goto label_2865d0;
        }
    }
    ctx->pc = 0x2865A0u;
label_2865a0:
    // 0x2865a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2865a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2865a4:
    // 0x2865a4: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x2865a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2865a8:
    // 0x2865a8: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x2865a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_2865ac:
    // 0x2865ac: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2865acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2865b0:
    // 0x2865b0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2865b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2865b4:
    // 0x2865b4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2865b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2865b8:
    // 0x2865b8: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x2865b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2865bc:
    // 0x2865bc: 0x4603181c  madd.s      $f0, $f3, $f3
    ctx->pc = 0x2865bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_2865c0:
    // 0x2865c0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2865c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2865c4:
    // 0x2865c4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2865c8:
    if (ctx->pc == 0x2865C8u) {
        ctx->pc = 0x2865CCu;
        goto label_2865cc;
    }
    ctx->pc = 0x2865C4u;
    {
        const bool branch_taken_0x2865c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2865c4) {
            ctx->pc = 0x286600u;
            goto label_286600;
        }
    }
    ctx->pc = 0x2865CCu;
label_2865cc:
    // 0x2865cc: 0x0  nop
    ctx->pc = 0x2865ccu;
    // NOP
label_2865d0:
    // 0x2865d0: 0x27a20ef4  addiu       $v0, $sp, 0xEF4
    ctx->pc = 0x2865d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3828));
label_2865d4:
    // 0x2865d4: 0xc7a00ef0  lwc1        $f0, 0xEF0($sp)
    ctx->pc = 0x2865d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2865d8:
    // 0x2865d8: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2865d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_2865dc:
    // 0x2865dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2865dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2865e0:
    // 0x2865e0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2865e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2865e4:
    // 0x2865e4: 0x27a20ef8  addiu       $v0, $sp, 0xEF8
    ctx->pc = 0x2865e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3832));
label_2865e8:
    // 0x2865e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2865e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2865ec:
    // 0x2865ec: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2865ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2865f0:
    // 0x2865f0: 0x27a20efc  addiu       $v0, $sp, 0xEFC
    ctx->pc = 0x2865f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3836));
label_2865f4:
    // 0x2865f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2865f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2865f8:
    // 0x2865f8: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2865fc:
    if (ctx->pc == 0x2865FCu) {
        ctx->pc = 0x2865FCu;
            // 0x2865fc: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->pc = 0x286600u;
        goto label_286600;
    }
    ctx->pc = 0x2865F8u;
    {
        const bool branch_taken_0x2865f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2865FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2865F8u;
            // 0x2865fc: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865f8) {
            ctx->pc = 0x286778u;
            goto label_286778;
        }
    }
    ctx->pc = 0x286600u;
label_286600:
    // 0x286600: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x286600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_286604:
    // 0x286604: 0x0  nop
    ctx->pc = 0x286604u;
    // NOP
label_286608:
    // 0x286608: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x286608u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28660c:
    // 0x28660c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_286610:
    if (ctx->pc == 0x286610u) {
        ctx->pc = 0x286614u;
        goto label_286614;
    }
    ctx->pc = 0x28660Cu;
    {
        const bool branch_taken_0x28660c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28660c) {
            ctx->pc = 0x286630u;
            goto label_286630;
        }
    }
    ctx->pc = 0x286614u;
label_286614:
    // 0x286614: 0x0  nop
    ctx->pc = 0x286614u;
    // NOP
label_286618:
    // 0x286618: 0x0  nop
    ctx->pc = 0x286618u;
    // NOP
label_28661c:
    // 0x28661c: 0x4600a056  rsqrt.s     $f1, $f20, $f0
    ctx->pc = 0x28661cu;
    ctx->f[1] = 1.0f / sqrtf(ctx->f[20]);
label_286620:
    // 0x286620: 0x0  nop
    ctx->pc = 0x286620u;
    // NOP
label_286624:
    // 0x286624: 0x0  nop
    ctx->pc = 0x286624u;
    // NOP
label_286628:
    // 0x286628: 0x10000001  b           . + 4 + (0x1 << 2)
label_28662c:
    if (ctx->pc == 0x28662Cu) {
        ctx->pc = 0x286630u;
        goto label_286630;
    }
    ctx->pc = 0x286628u;
    {
        const bool branch_taken_0x286628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286628) {
            ctx->pc = 0x286630u;
            goto label_286630;
        }
    }
    ctx->pc = 0x286630u;
label_286630:
    // 0x286630: 0x27a20174  addiu       $v0, $sp, 0x174
    ctx->pc = 0x286630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_286634:
    // 0x286634: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x286634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286638:
    // 0x286638: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x286638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_28663c:
    // 0x28663c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28663cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_286640:
    // 0x286640: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x286640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_286644:
    // 0x286644: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286648:
    // 0x286648: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28664c:
    // 0x28664c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28664cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_286650:
    // 0x286650: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x286650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_286654:
    // 0x286654: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286658:
    // 0x286658: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28665c:
    // 0x28665c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28665cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_286660:
    // 0x286660: 0x27a2017c  addiu       $v0, $sp, 0x17C
    ctx->pc = 0x286660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_286664:
    // 0x286664: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286668:
    // 0x286668: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28666c:
    // 0x28666c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28666cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_286670:
    // 0x286670: 0x27a20164  addiu       $v0, $sp, 0x164
    ctx->pc = 0x286670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_286674:
    // 0x286674: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286678:
    // 0x286678: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x286678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28667c:
    // 0x28667c: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x28667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_286680:
    // 0x286680: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x286680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_286684:
    // 0x286684: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x286684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_286688:
    // 0x286688: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x286688u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_28668c:
    // 0x28668c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x28668cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_286690:
    // 0x286690: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x286690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_286694:
    // 0x286694: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x286694u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_286698:
    // 0x286698: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_28669c:
    if (ctx->pc == 0x28669Cu) {
        ctx->pc = 0x2866A0u;
        goto label_2866a0;
    }
    ctx->pc = 0x286698u;
    {
        const bool branch_taken_0x286698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x286698) {
            ctx->pc = 0x2866C0u;
            goto label_2866c0;
        }
    }
    ctx->pc = 0x2866A0u;
label_2866a0:
    // 0x2866a0: 0x0  nop
    ctx->pc = 0x2866a0u;
    // NOP
label_2866a4:
    // 0x2866a4: 0x0  nop
    ctx->pc = 0x2866a4u;
    // NOP
label_2866a8:
    // 0x2866a8: 0x4600a0d6  rsqrt.s     $f3, $f20, $f0
    ctx->pc = 0x2866a8u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[20]);
label_2866ac:
    // 0x2866ac: 0x0  nop
    ctx->pc = 0x2866acu;
    // NOP
label_2866b0:
    // 0x2866b0: 0x0  nop
    ctx->pc = 0x2866b0u;
    // NOP
label_2866b4:
    // 0x2866b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2866b8:
    if (ctx->pc == 0x2866B8u) {
        ctx->pc = 0x2866BCu;
        goto label_2866bc;
    }
    ctx->pc = 0x2866B4u;
    {
        const bool branch_taken_0x2866b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2866b4) {
            ctx->pc = 0x2866C0u;
            goto label_2866c0;
        }
    }
    ctx->pc = 0x2866BCu;
label_2866bc:
    // 0x2866bc: 0x0  nop
    ctx->pc = 0x2866bcu;
    // NOP
label_2866c0:
    // 0x2866c0: 0x27a20164  addiu       $v0, $sp, 0x164
    ctx->pc = 0x2866c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_2866c4:
    // 0x2866c4: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x2866c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2866c8:
    // 0x2866c8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2866c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2866cc:
    // 0x2866cc: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x2866ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2866d0:
    // 0x2866d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2866d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2866d4:
    // 0x2866d4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2866d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2866d8:
    // 0x2866d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2866d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2866dc:
    // 0x2866dc: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x2866dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_2866e0:
    // 0x2866e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2866e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2866e4:
    // 0x2866e4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2866e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2866e8:
    // 0x2866e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2866e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2866ec:
    // 0x2866ec: 0x27a2016c  addiu       $v0, $sp, 0x16C
    ctx->pc = 0x2866ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_2866f0:
    // 0x2866f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2866f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2866f4:
    // 0x2866f4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2866f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2866f8:
    // 0x2866f8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2866f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2866fc:
    // 0x2866fc: 0x27a20164  addiu       $v0, $sp, 0x164
    ctx->pc = 0x2866fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_286700:
    // 0x286700: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x286700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_286704:
    // 0x286704: 0xc7a20170  lwc1        $f2, 0x170($sp)
    ctx->pc = 0x286704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_286708:
    // 0x286708: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x286708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28670c:
    // 0x28670c: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x28670cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_286710:
    // 0x286710: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x286710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_286714:
    // 0x286714: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x286714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_286718:
    // 0x286718: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x286718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28671c:
    // 0x28671c: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x28671cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_286720:
    // 0x286720: 0x27a20174  addiu       $v0, $sp, 0x174
    ctx->pc = 0x286720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_286724:
    // 0x286724: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286728:
    // 0x286728: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x286728u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_28672c:
    // 0x28672c: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x28672cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_286730:
    // 0x286730: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x286730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_286734:
    // 0x286734: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x286734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_286738:
    // 0x286738: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x286738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_28673c:
    // 0x28673c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286740:
    // 0x286740: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x286740u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_286744:
    // 0x286744: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x286744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_286748:
    // 0x286748: 0x27a20174  addiu       $v0, $sp, 0x174
    ctx->pc = 0x286748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_28674c:
    // 0x28674c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x28674cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_286750:
    // 0x286750: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x286750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_286754:
    // 0x286754: 0xc7a30160  lwc1        $f3, 0x160($sp)
    ctx->pc = 0x286754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_286758:
    // 0x286758: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x286758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28675c:
    // 0x28675c: 0x27a20164  addiu       $v0, $sp, 0x164
    ctx->pc = 0x28675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_286760:
    // 0x286760: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x286760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286764:
    // 0x286764: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x286764u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_286768:
    // 0x286768: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x286768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_28676c:
    // 0x28676c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x28676cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_286770:
    // 0x286770: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x286770u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_286774:
    // 0x286774: 0x0  nop
    ctx->pc = 0x286774u;
    // NOP
label_286778:
    // 0x286778: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x286778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28677c:
    // 0x28677c: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x28677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_286780:
    // 0x286780: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x286780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_286784:
    // 0x286784: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x286784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_286788:
    // 0x286788: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x286788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_28678c:
    // 0x28678c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28678cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_286790:
    // 0x286790: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x286790u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_286794:
    // 0x286794: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x286794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_286798:
    // 0x286798: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x286798u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28679c:
    // 0x28679c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_2867a0:
    if (ctx->pc == 0x2867A0u) {
        ctx->pc = 0x2867A4u;
        goto label_2867a4;
    }
    ctx->pc = 0x28679Cu;
    {
        const bool branch_taken_0x28679c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28679c) {
            ctx->pc = 0x2867C0u;
            goto label_2867c0;
        }
    }
    ctx->pc = 0x2867A4u;
label_2867a4:
    // 0x2867a4: 0x0  nop
    ctx->pc = 0x2867a4u;
    // NOP
label_2867a8:
    // 0x2867a8: 0x0  nop
    ctx->pc = 0x2867a8u;
    // NOP
label_2867ac:
    // 0x2867ac: 0x4600a0d6  rsqrt.s     $f3, $f20, $f0
    ctx->pc = 0x2867acu;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[20]);
label_2867b0:
    // 0x2867b0: 0x0  nop
    ctx->pc = 0x2867b0u;
    // NOP
label_2867b4:
    // 0x2867b4: 0x0  nop
    ctx->pc = 0x2867b4u;
    // NOP
label_2867b8:
    // 0x2867b8: 0x10000001  b           . + 4 + (0x1 << 2)
label_2867bc:
    if (ctx->pc == 0x2867BCu) {
        ctx->pc = 0x2867C0u;
        goto label_2867c0;
    }
    ctx->pc = 0x2867B8u;
    {
        const bool branch_taken_0x2867b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2867b8) {
            ctx->pc = 0x2867C0u;
            goto label_2867c0;
        }
    }
    ctx->pc = 0x2867C0u;
label_2867c0:
    // 0x2867c0: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2867c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2867c4:
    // 0x2867c4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2867c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2867c8:
    // 0x2867c8: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2867c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_2867cc:
    // 0x2867cc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2867ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2867d0:
    // 0x2867d0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2867d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2867d4:
    // 0x2867d4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2867d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2867d8:
    // 0x2867d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2867d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2867dc:
    // 0x2867dc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2867dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2867e0:
    // 0x2867e0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2867e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2867e4:
    // 0x2867e4: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x2867e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2867e8:
    // 0x2867e8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2867e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2867ec:
    // 0x2867ec: 0x1000000e  b           . + 4 + (0xE << 2)
label_2867f0:
    if (ctx->pc == 0x2867F0u) {
        ctx->pc = 0x2867F0u;
            // 0x2867f0: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->pc = 0x2867F4u;
        goto label_2867f4;
    }
    ctx->pc = 0x2867ECu;
    {
        const bool branch_taken_0x2867ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2867ECu;
            // 0x2867f0: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867ec) {
            ctx->pc = 0x286828u;
            goto label_286828;
        }
    }
    ctx->pc = 0x2867F4u;
label_2867f4:
    // 0x2867f4: 0x0  nop
    ctx->pc = 0x2867f4u;
    // NOP
label_2867f8:
    // 0x2867f8: 0x27a20f24  addiu       $v0, $sp, 0xF24
    ctx->pc = 0x2867f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3876));
label_2867fc:
    // 0x2867fc: 0xc7a00f20  lwc1        $f0, 0xF20($sp)
    ctx->pc = 0x2867fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286800:
    // 0x286800: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x286800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_286804:
    // 0x286804: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286808:
    // 0x286808: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x286808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_28680c:
    // 0x28680c: 0x27a20f28  addiu       $v0, $sp, 0xF28
    ctx->pc = 0x28680cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3880));
label_286810:
    // 0x286810: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286814:
    // 0x286814: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x286814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_286818:
    // 0x286818: 0x27a20f2c  addiu       $v0, $sp, 0xF2C
    ctx->pc = 0x286818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3884));
label_28681c:
    // 0x28681c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286820:
    // 0x286820: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x286820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_286824:
    // 0x286824: 0x0  nop
    ctx->pc = 0x286824u;
    // NOP
label_286828:
    // 0x286828: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x286828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_28682c:
    // 0x28682c: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x28682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286830:
    // 0x286830: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x286830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_286834:
    // 0x286834: 0x27a20ef4  addiu       $v0, $sp, 0xEF4
    ctx->pc = 0x286834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3828));
label_286838:
    // 0x286838: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x286838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_28683c:
    // 0x28683c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x28683cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286840:
    // 0x286840: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x286840u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_286844:
    // 0x286844: 0xe7a00ef0  swc1        $f0, 0xEF0($sp)
    ctx->pc = 0x286844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3824), bits); }
label_286848:
    // 0x286848: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x286848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28684c:
    // 0x28684c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28684cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_286850:
    // 0x286850: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x286850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286854:
    // 0x286854: 0x27a20ef8  addiu       $v0, $sp, 0xEF8
    ctx->pc = 0x286854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3832));
label_286858:
    // 0x286858: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x286858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28685c:
    // 0x28685c: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x28685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_286860:
    // 0x286860: 0x27a20efc  addiu       $v0, $sp, 0xEFC
    ctx->pc = 0x286860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3836));
label_286864:
    // 0x286864: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x286864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_286868:
    // 0x286868: 0x9687000c  lhu         $a3, 0xC($s4)
    ctx->pc = 0x286868u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_28686c:
    // 0x28686c: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x28686cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_286870:
    // 0x286870: 0xc0a20fc  jal         func_2883F0
label_286874:
    if (ctx->pc == 0x286874u) {
        ctx->pc = 0x286874u;
            // 0x286874: 0x27ab03c0  addiu       $t3, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->pc = 0x286878u;
        goto label_286878;
    }
    ctx->pc = 0x286870u;
    SET_GPR_U32(ctx, 31, 0x286878u);
    ctx->pc = 0x286874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286870u;
            // 0x286874: 0x27ab03c0  addiu       $t3, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2883F0u;
    if (runtime->hasFunction(0x2883F0u)) {
        auto targetFn = runtime->lookupFunction(0x2883F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286878u; }
        if (ctx->pc != 0x286878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002883F0_0x2883f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286878u; }
        if (ctx->pc != 0x286878u) { return; }
    }
    ctx->pc = 0x286878u;
label_286878:
    // 0x286878: 0x9687000c  lhu         $a3, 0xC($s4)
    ctx->pc = 0x286878u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_28687c:
    // 0x28687c: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x28687cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_286880:
    // 0x286880: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x286880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_286884:
    // 0x286884: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x286884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286888:
    // 0x286888: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x286888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_28688c:
    // 0x28688c: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x28688cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_286890:
    // 0x286890: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x286890u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_286894:
    // 0x286894: 0xc0a20fc  jal         func_2883F0
label_286898:
    if (ctx->pc == 0x286898u) {
        ctx->pc = 0x286898u;
            // 0x286898: 0x27ab01b0  addiu       $t3, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x28689Cu;
        goto label_28689c;
    }
    ctx->pc = 0x286894u;
    SET_GPR_U32(ctx, 31, 0x28689Cu);
    ctx->pc = 0x286898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286894u;
            // 0x286898: 0x27ab01b0  addiu       $t3, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2883F0u;
    if (runtime->hasFunction(0x2883F0u)) {
        auto targetFn = runtime->lookupFunction(0x2883F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28689Cu; }
        if (ctx->pc != 0x28689Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002883F0_0x2883f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28689Cu; }
        if (ctx->pc != 0x28689Cu) { return; }
    }
    ctx->pc = 0x28689Cu;
label_28689c:
    // 0x28689c: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x28689cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2868a0:
    // 0x2868a0: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x2868a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2868a4:
    // 0x2868a4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2868a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2868a8:
    // 0x2868a8: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2868a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2868ac:
    // 0x2868ac: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2868acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2868b0:
    // 0x2868b0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2868b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2868b4:
    // 0x2868b4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2868b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2868b8:
    // 0x2868b8: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x2868b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_2868bc:
    // 0x2868bc: 0x9687000c  lhu         $a3, 0xC($s4)
    ctx->pc = 0x2868bcu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_2868c0:
    // 0x2868c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2868c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2868c4:
    // 0x2868c4: 0xc0a22fc  jal         func_288BF0
label_2868c8:
    if (ctx->pc == 0x2868C8u) {
        ctx->pc = 0x2868C8u;
            // 0x2868c8: 0x27ab03c0  addiu       $t3, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->pc = 0x2868CCu;
        goto label_2868cc;
    }
    ctx->pc = 0x2868C4u;
    SET_GPR_U32(ctx, 31, 0x2868CCu);
    ctx->pc = 0x2868C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2868C4u;
            // 0x2868c8: 0x27ab03c0  addiu       $t3, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288BF0u;
    if (runtime->hasFunction(0x288BF0u)) {
        auto targetFn = runtime->lookupFunction(0x288BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2868CCu; }
        if (ctx->pc != 0x2868CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288BF0_0x288bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2868CCu; }
        if (ctx->pc != 0x2868CCu) { return; }
    }
    ctx->pc = 0x2868CCu;
label_2868cc:
    // 0x2868cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2868ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2868d0:
    // 0x2868d0: 0x27a40f30  addiu       $a0, $sp, 0xF30
    ctx->pc = 0x2868d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3888));
label_2868d4:
    // 0x2868d4: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x2868d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_2868d8:
    // 0x2868d8: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x2868d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2868dc:
    // 0x2868dc: 0xc0a2398  jal         func_288E60
label_2868e0:
    if (ctx->pc == 0x2868E0u) {
        ctx->pc = 0x2868E0u;
            // 0x2868e0: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2868E4u;
        goto label_2868e4;
    }
    ctx->pc = 0x2868DCu;
    SET_GPR_U32(ctx, 31, 0x2868E4u);
    ctx->pc = 0x2868E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2868DCu;
            // 0x2868e0: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288E60u;
    if (runtime->hasFunction(0x288E60u)) {
        auto targetFn = runtime->lookupFunction(0x288E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2868E4u; }
        if (ctx->pc != 0x2868E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288E60_0x288e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2868E4u; }
        if (ctx->pc != 0x2868E4u) { return; }
    }
    ctx->pc = 0x2868E4u;
label_2868e4:
    // 0x2868e4: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x2868e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_2868e8:
    // 0x2868e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2868e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2868ec:
    // 0x2868ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2868ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2868f0:
    // 0x2868f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2868f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2868f4:
    // 0x2868f4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2868f8:
    if (ctx->pc == 0x2868F8u) {
        ctx->pc = 0x2868F8u;
            // 0x2868f8: 0x27a201b8  addiu       $v0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->pc = 0x2868FCu;
        goto label_2868fc;
    }
    ctx->pc = 0x2868F4u;
    {
        const bool branch_taken_0x2868f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2868F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2868F4u;
            // 0x2868f8: 0x27a201b8  addiu       $v0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868f4) {
            ctx->pc = 0x286920u;
            goto label_286920;
        }
    }
    ctx->pc = 0x2868FCu;
label_2868fc:
    // 0x2868fc: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2868fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_286900:
    // 0x286900: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x286900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286904:
    // 0x286904: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x286904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_286908:
    // 0x286908: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x286908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_28690c:
    // 0x28690c: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x28690cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_286910:
    // 0x286910: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x286910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_286914:
    // 0x286914: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x286914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_286918:
    // 0x286918: 0xc0a7ab4  jal         func_29EAD0
label_28691c:
    if (ctx->pc == 0x28691Cu) {
        ctx->pc = 0x28691Cu;
            // 0x28691c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x286920u;
        goto label_286920;
    }
    ctx->pc = 0x286918u;
    SET_GPR_U32(ctx, 31, 0x286920u);
    ctx->pc = 0x28691Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286918u;
            // 0x28691c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286920u; }
        if (ctx->pc != 0x286920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286920u; }
        if (ctx->pc != 0x286920u) { return; }
    }
    ctx->pc = 0x286920u;
label_286920:
    // 0x286920: 0x27a203c8  addiu       $v0, $sp, 0x3C8
    ctx->pc = 0x286920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 968));
label_286924:
    // 0x286924: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286928:
    // 0x286928: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x286928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_28692c:
    // 0x28692c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_286930:
    // 0x286930: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_286934:
    if (ctx->pc == 0x286934u) {
        ctx->pc = 0x286934u;
            // 0x286934: 0x27a203c8  addiu       $v0, $sp, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 968));
        ctx->pc = 0x286938u;
        goto label_286938;
    }
    ctx->pc = 0x286930u;
    {
        const bool branch_taken_0x286930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286930u;
            // 0x286934: 0x27a203c8  addiu       $v0, $sp, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286930) {
            ctx->pc = 0x286960u;
            goto label_286960;
        }
    }
    ctx->pc = 0x286938u;
label_286938:
    // 0x286938: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x286938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_28693c:
    // 0x28693c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286940:
    // 0x286940: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x286940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_286944:
    // 0x286944: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x286944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_286948:
    // 0x286948: 0x8fa503c0  lw          $a1, 0x3C0($sp)
    ctx->pc = 0x286948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_28694c:
    // 0x28694c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x28694cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_286950:
    // 0x286950: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x286950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_286954:
    // 0x286954: 0xc0a7ab4  jal         func_29EAD0
label_286958:
    if (ctx->pc == 0x286958u) {
        ctx->pc = 0x286958u;
            // 0x286958: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x28695Cu;
        goto label_28695c;
    }
    ctx->pc = 0x286954u;
    SET_GPR_U32(ctx, 31, 0x28695Cu);
    ctx->pc = 0x286958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286954u;
            // 0x286958: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28695Cu; }
        if (ctx->pc != 0x28695Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28695Cu; }
        if (ctx->pc != 0x28695Cu) { return; }
    }
    ctx->pc = 0x28695Cu;
label_28695c:
    // 0x28695c: 0x0  nop
    ctx->pc = 0x28695cu;
    // NOP
label_286960:
    // 0x286960: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x286960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_286964:
    // 0x286964: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x286964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_286968:
    // 0x286968: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x286968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_28696c:
    // 0x28696c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x28696cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_286970:
    // 0x286970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_286974:
    // 0x286974: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x286974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_286978:
    // 0x286978: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x286978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_28697c:
    // 0x28697c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28697cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_286980:
    // 0x286980: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x286980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_286984:
    // 0x286984: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x286984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_286988:
    // 0x286988: 0x1440fe03  bnez        $v0, . + 4 + (-0x1FD << 2)
label_28698c:
    if (ctx->pc == 0x28698Cu) {
        ctx->pc = 0x286990u;
        goto label_286990;
    }
    ctx->pc = 0x286988u;
    {
        const bool branch_taken_0x286988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286988) {
            ctx->pc = 0x286198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_286198;
        }
    }
    ctx->pc = 0x286990u;
label_286990:
    // 0x286990: 0xafb50120  sw          $s5, 0x120($sp)
    ctx->pc = 0x286990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 21));
label_286994:
    // 0x286994: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x286994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_286998:
    // 0x286998: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x286998u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_28699c:
    // 0x28699c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x28699cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2869a0:
    // 0x2869a0: 0xc0a29e4  jal         func_28A790
label_2869a4:
    if (ctx->pc == 0x2869A4u) {
        ctx->pc = 0x2869A4u;
            // 0x2869a4: 0x24c6a680  addiu       $a2, $a2, -0x5980 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944384));
        ctx->pc = 0x2869A8u;
        goto label_2869a8;
    }
    ctx->pc = 0x2869A0u;
    SET_GPR_U32(ctx, 31, 0x2869A8u);
    ctx->pc = 0x2869A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2869A0u;
            // 0x2869a4: 0x24c6a680  addiu       $a2, $a2, -0x5980 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A790u;
    if (runtime->hasFunction(0x28A790u)) {
        auto targetFn = runtime->lookupFunction(0x28A790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2869A8u; }
        if (ctx->pc != 0x2869A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A790_0x28a790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2869A8u; }
        if (ctx->pc != 0x2869A8u) { return; }
    }
    ctx->pc = 0x2869A8u;
label_2869a8:
    // 0x2869a8: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x2869a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_2869ac:
    // 0x2869ac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2869acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2869b0:
    // 0x2869b0: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x2869b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_2869b4:
    // 0x2869b4: 0xc0a2498  jal         func_289260
label_2869b8:
    if (ctx->pc == 0x2869B8u) {
        ctx->pc = 0x2869B8u;
            // 0x2869b8: 0x27a705d0  addiu       $a3, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->pc = 0x2869BCu;
        goto label_2869bc;
    }
    ctx->pc = 0x2869B4u;
    SET_GPR_U32(ctx, 31, 0x2869BCu);
    ctx->pc = 0x2869B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2869B4u;
            // 0x2869b8: 0x27a705d0  addiu       $a3, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289260u;
    if (runtime->hasFunction(0x289260u)) {
        auto targetFn = runtime->lookupFunction(0x289260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2869BCu; }
        if (ctx->pc != 0x2869BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00289260_0x289260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2869BCu; }
        if (ctx->pc != 0x2869BCu) { return; }
    }
    ctx->pc = 0x2869BCu;
label_2869bc:
    // 0x2869bc: 0x27a205d4  addiu       $v0, $sp, 0x5D4
    ctx->pc = 0x2869bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1492));
label_2869c0:
    // 0x2869c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2869c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2869c4:
    // 0x2869c4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2869c8:
    if (ctx->pc == 0x2869C8u) {
        ctx->pc = 0x2869CCu;
        goto label_2869cc;
    }
    ctx->pc = 0x2869C4u;
    {
        const bool branch_taken_0x2869c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2869c4) {
            ctx->pc = 0x2869F0u;
            goto label_2869f0;
        }
    }
    ctx->pc = 0x2869CCu;
label_2869cc:
    // 0x2869cc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2869ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2869d0:
    // 0x2869d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2869d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2869d4:
    // 0x2869d4: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x2869d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_2869d8:
    // 0x2869d8: 0x27a20f38  addiu       $v0, $sp, 0xF38
    ctx->pc = 0x2869d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3896));
label_2869dc:
    // 0x2869dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2869dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2869e0:
    // 0x2869e0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2869e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2869e4:
    // 0x2869e4: 0x1440fda6  bnez        $v0, . + 4 + (-0x25A << 2)
label_2869e8:
    if (ctx->pc == 0x2869E8u) {
        ctx->pc = 0x2869ECu;
        goto label_2869ec;
    }
    ctx->pc = 0x2869E4u;
    {
        const bool branch_taken_0x2869e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2869e4) {
            ctx->pc = 0x286080u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_286080;
        }
    }
    ctx->pc = 0x2869ECu;
label_2869ec:
    // 0x2869ec: 0x0  nop
    ctx->pc = 0x2869ecu;
    // NOP
label_2869f0:
    // 0x2869f0: 0x8fa20de4  lw          $v0, 0xDE4($sp)
    ctx->pc = 0x2869f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3556)));
label_2869f4:
    // 0x2869f4: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x2869f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2869f8:
    // 0x2869f8: 0x620002b  bltz        $s1, . + 4 + (0x2B << 2)
label_2869fc:
    if (ctx->pc == 0x2869FCu) {
        ctx->pc = 0x2869FCu;
            // 0x2869fc: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x286A00u;
        goto label_286a00;
    }
    ctx->pc = 0x2869F8u;
    {
        const bool branch_taken_0x2869f8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2869FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2869F8u;
            // 0x2869fc: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869f8) {
            ctx->pc = 0x286AA8u;
            goto label_286aa8;
        }
    }
    ctx->pc = 0x286A00u;
label_286a00:
    // 0x286a00: 0x8fa20de0  lw          $v0, 0xDE0($sp)
    ctx->pc = 0x286a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3552)));
label_286a04:
    // 0x286a04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x286a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_286a08:
    // 0x286a08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x286a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286a0c:
    // 0x286a0c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_286a10:
    if (ctx->pc == 0x286A10u) {
        ctx->pc = 0x286A14u;
        goto label_286a14;
    }
    ctx->pc = 0x286A0Cu;
    {
        const bool branch_taken_0x286a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x286a0c) {
            ctx->pc = 0x286A60u;
            goto label_286a60;
        }
    }
    ctx->pc = 0x286A14u;
label_286a14:
    // 0x286a14: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_286a18:
    if (ctx->pc == 0x286A18u) {
        ctx->pc = 0x286A1Cu;
        goto label_286a1c;
    }
    ctx->pc = 0x286A14u;
    {
        const bool branch_taken_0x286a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x286a14) {
            ctx->pc = 0x286A60u;
            goto label_286a60;
        }
    }
    ctx->pc = 0x286A1Cu;
label_286a1c:
    // 0x286a1c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x286a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_286a20:
    // 0x286a20: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x286a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_286a24:
    // 0x286a24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x286a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_286a28:
    // 0x286a28: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_286a2c:
    if (ctx->pc == 0x286A2Cu) {
        ctx->pc = 0x286A30u;
        goto label_286a30;
    }
    ctx->pc = 0x286A28u;
    {
        const bool branch_taken_0x286a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286a28) {
            ctx->pc = 0x286A60u;
            goto label_286a60;
        }
    }
    ctx->pc = 0x286A30u;
label_286a30:
    // 0x286a30: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x286a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_286a34:
    // 0x286a34: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x286a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_286a38:
    // 0x286a38: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x286a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286a3c:
    // 0x286a3c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x286a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_286a40:
    // 0x286a40: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x286a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_286a44:
    // 0x286a44: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x286a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_286a48:
    // 0x286a48: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x286a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_286a4c:
    // 0x286a4c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x286a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_286a50:
    // 0x286a50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x286a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_286a54:
    // 0x286a54: 0xc0a7ab4  jal         func_29EAD0
label_286a58:
    if (ctx->pc == 0x286A58u) {
        ctx->pc = 0x286A58u;
            // 0x286a58: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x286A5Cu;
        goto label_286a5c;
    }
    ctx->pc = 0x286A54u;
    SET_GPR_U32(ctx, 31, 0x286A5Cu);
    ctx->pc = 0x286A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286A54u;
            // 0x286a58: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286A5Cu; }
        if (ctx->pc != 0x286A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286A5Cu; }
        if (ctx->pc != 0x286A5Cu) { return; }
    }
    ctx->pc = 0x286A5Cu;
label_286a5c:
    // 0x286a5c: 0x0  nop
    ctx->pc = 0x286a5cu;
    // NOP
label_286a60:
    // 0x286a60: 0x8fa20de0  lw          $v0, 0xDE0($sp)
    ctx->pc = 0x286a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3552)));
label_286a64:
    // 0x286a64: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x286a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_286a68:
    // 0x286a68: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x286a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_286a6c:
    // 0x286a6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x286a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_286a70:
    // 0x286a70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x286a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286a74:
    // 0x286a74: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x286a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_286a78:
    // 0x286a78: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x286a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_286a7c:
    // 0x286a7c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_286a80:
    if (ctx->pc == 0x286A80u) {
        ctx->pc = 0x286A84u;
        goto label_286a84;
    }
    ctx->pc = 0x286A7Cu;
    {
        const bool branch_taken_0x286a7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x286a7c) {
            ctx->pc = 0x286A98u;
            goto label_286a98;
        }
    }
    ctx->pc = 0x286A84u;
label_286a84:
    // 0x286a84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x286a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286a88:
    // 0x286a88: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x286a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_286a8c:
    // 0x286a8c: 0x320f809  jalr        $t9
label_286a90:
    if (ctx->pc == 0x286A90u) {
        ctx->pc = 0x286A94u;
        goto label_286a94;
    }
    ctx->pc = 0x286A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x286A94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x286A94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x286A94u; }
            if (ctx->pc != 0x286A94u) { return; }
        }
        }
    }
    ctx->pc = 0x286A94u;
label_286a94:
    // 0x286a94: 0x0  nop
    ctx->pc = 0x286a94u;
    // NOP
label_286a98:
    // 0x286a98: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x286a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_286a9c:
    // 0x286a9c: 0x621ffd8  bgez        $s1, . + 4 + (-0x28 << 2)
label_286aa0:
    if (ctx->pc == 0x286AA0u) {
        ctx->pc = 0x286AA0u;
            // 0x286aa0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x286AA4u;
        goto label_286aa4;
    }
    ctx->pc = 0x286A9Cu;
    {
        const bool branch_taken_0x286a9c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x286AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286A9Cu;
            // 0x286aa0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a9c) {
            ctx->pc = 0x286A00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_286a00;
        }
    }
    ctx->pc = 0x286AA4u;
label_286aa4:
    // 0x286aa4: 0x0  nop
    ctx->pc = 0x286aa4u;
    // NOP
label_286aa8:
    // 0x286aa8: 0x27a20de4  addiu       $v0, $sp, 0xDE4
    ctx->pc = 0x286aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3556));
label_286aac:
    // 0x286aac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x286aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_286ab0:
    // 0x286ab0: 0x8fa205d4  lw          $v0, 0x5D4($sp)
    ctx->pc = 0x286ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1492)));
label_286ab4:
    // 0x286ab4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_286ab8:
    if (ctx->pc == 0x286AB8u) {
        ctx->pc = 0x286ABCu;
        goto label_286abc;
    }
    ctx->pc = 0x286AB4u;
    {
        const bool branch_taken_0x286ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286ab4) {
            ctx->pc = 0x286BA0u;
            goto label_286ba0;
        }
    }
    ctx->pc = 0x286ABCu;
label_286abc:
    // 0x286abc: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x286abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_286ac0:
    // 0x286ac0: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x286ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_286ac4:
    // 0x286ac4: 0x8fa70150  lw          $a3, 0x150($sp)
    ctx->pc = 0x286ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_286ac8:
    // 0x286ac8: 0xc0a1e24  jal         func_287890
label_286acc:
    if (ctx->pc == 0x286ACCu) {
        ctx->pc = 0x286ACCu;
            // 0x286acc: 0x27a605d0  addiu       $a2, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->pc = 0x286AD0u;
        goto label_286ad0;
    }
    ctx->pc = 0x286AC8u;
    SET_GPR_U32(ctx, 31, 0x286AD0u);
    ctx->pc = 0x286ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286AC8u;
            // 0x286acc: 0x27a605d0  addiu       $a2, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287890u;
    if (runtime->hasFunction(0x287890u)) {
        auto targetFn = runtime->lookupFunction(0x287890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286AD0u; }
        if (ctx->pc != 0x286AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287890_0x287890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286AD0u; }
        if (ctx->pc != 0x286AD0u) { return; }
    }
    ctx->pc = 0x286AD0u;
label_286ad0:
    // 0x286ad0: 0x27a205d8  addiu       $v0, $sp, 0x5D8
    ctx->pc = 0x286ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1496));
label_286ad4:
    // 0x286ad4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286ad8:
    // 0x286ad8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x286ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_286adc:
    // 0x286adc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x286adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_286ae0:
    // 0x286ae0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_286ae4:
    if (ctx->pc == 0x286AE4u) {
        ctx->pc = 0x286AE8u;
        goto label_286ae8;
    }
    ctx->pc = 0x286AE0u;
    {
        const bool branch_taken_0x286ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286ae0) {
            ctx->pc = 0x286B10u;
            goto label_286b10;
        }
    }
    ctx->pc = 0x286AE8u;
label_286ae8:
    // 0x286ae8: 0x8fa205d8  lw          $v0, 0x5D8($sp)
    ctx->pc = 0x286ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1496)));
label_286aec:
    // 0x286aec: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x286aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_286af0:
    // 0x286af0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x286af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_286af4:
    // 0x286af4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x286af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_286af8:
    // 0x286af8: 0x8fa505d0  lw          $a1, 0x5D0($sp)
    ctx->pc = 0x286af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1488)));
label_286afc:
    // 0x286afc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x286afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_286b00:
    // 0x286b00: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x286b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_286b04:
    // 0x286b04: 0xc0a7ab4  jal         func_29EAD0
label_286b08:
    if (ctx->pc == 0x286B08u) {
        ctx->pc = 0x286B08u;
            // 0x286b08: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x286B0Cu;
        goto label_286b0c;
    }
    ctx->pc = 0x286B04u;
    SET_GPR_U32(ctx, 31, 0x286B0Cu);
    ctx->pc = 0x286B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286B04u;
            // 0x286b08: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B0Cu; }
        if (ctx->pc != 0x286B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B0Cu; }
        if (ctx->pc != 0x286B0Cu) { return; }
    }
    ctx->pc = 0x286B0Cu;
label_286b0c:
    // 0x286b0c: 0x0  nop
    ctx->pc = 0x286b0cu;
    // NOP
label_286b10:
    // 0x286b10: 0x27a20de8  addiu       $v0, $sp, 0xDE8
    ctx->pc = 0x286b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3560));
label_286b14:
    // 0x286b14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286b18:
    // 0x286b18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x286b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_286b1c:
    // 0x286b1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x286b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_286b20:
    // 0x286b20: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_286b24:
    if (ctx->pc == 0x286B24u) {
        ctx->pc = 0x286B28u;
        goto label_286b28;
    }
    ctx->pc = 0x286B20u;
    {
        const bool branch_taken_0x286b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286b20) {
            ctx->pc = 0x286B50u;
            goto label_286b50;
        }
    }
    ctx->pc = 0x286B28u;
label_286b28:
    // 0x286b28: 0x8fa20de8  lw          $v0, 0xDE8($sp)
    ctx->pc = 0x286b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3560)));
label_286b2c:
    // 0x286b2c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x286b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_286b30:
    // 0x286b30: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x286b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_286b34:
    // 0x286b34: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x286b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_286b38:
    // 0x286b38: 0x8fa50de0  lw          $a1, 0xDE0($sp)
    ctx->pc = 0x286b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3552)));
label_286b3c:
    // 0x286b3c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x286b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_286b40:
    // 0x286b40: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x286b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_286b44:
    // 0x286b44: 0xc0a7ab4  jal         func_29EAD0
label_286b48:
    if (ctx->pc == 0x286B48u) {
        ctx->pc = 0x286B48u;
            // 0x286b48: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x286B4Cu;
        goto label_286b4c;
    }
    ctx->pc = 0x286B44u;
    SET_GPR_U32(ctx, 31, 0x286B4Cu);
    ctx->pc = 0x286B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286B44u;
            // 0x286b48: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B4Cu; }
        if (ctx->pc != 0x286B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B4Cu; }
        if (ctx->pc != 0x286B4Cu) { return; }
    }
    ctx->pc = 0x286B4Cu;
label_286b4c:
    // 0x286b4c: 0x0  nop
    ctx->pc = 0x286b4cu;
    // NOP
label_286b50:
    // 0x286b50: 0x27a20f08  addiu       $v0, $sp, 0xF08
    ctx->pc = 0x286b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3848));
label_286b54:
    // 0x286b54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286b58:
    // 0x286b58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x286b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_286b5c:
    // 0x286b5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x286b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_286b60:
    // 0x286b60: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_286b64:
    if (ctx->pc == 0x286B64u) {
        ctx->pc = 0x286B68u;
        goto label_286b68;
    }
    ctx->pc = 0x286B60u;
    {
        const bool branch_taken_0x286b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286b60) {
            ctx->pc = 0x286B98u;
            goto label_286b98;
        }
    }
    ctx->pc = 0x286B68u;
label_286b68:
    // 0x286b68: 0x8fa20f08  lw          $v0, 0xF08($sp)
    ctx->pc = 0x286b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3848)));
label_286b6c:
    // 0x286b6c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x286b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_286b70:
    // 0x286b70: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x286b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_286b74:
    // 0x286b74: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x286b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_286b78:
    // 0x286b78: 0x8fa50f00  lw          $a1, 0xF00($sp)
    ctx->pc = 0x286b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3840)));
label_286b7c:
    // 0x286b7c: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x286b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_286b80:
    // 0x286b80: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x286b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_286b84:
    // 0x286b84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x286b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_286b88:
    // 0x286b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x286b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_286b8c:
    // 0x286b8c: 0xc0a7ab4  jal         func_29EAD0
label_286b90:
    if (ctx->pc == 0x286B90u) {
        ctx->pc = 0x286B90u;
            // 0x286b90: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x286B94u;
        goto label_286b94;
    }
    ctx->pc = 0x286B8Cu;
    SET_GPR_U32(ctx, 31, 0x286B94u);
    ctx->pc = 0x286B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286B8Cu;
            // 0x286b90: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B94u; }
        if (ctx->pc != 0x286B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286B94u; }
        if (ctx->pc != 0x286B94u) { return; }
    }
    ctx->pc = 0x286B94u;
label_286b94:
    // 0x286b94: 0x0  nop
    ctx->pc = 0x286b94u;
    // NOP
label_286b98:
    // 0x286b98: 0x10000035  b           . + 4 + (0x35 << 2)
label_286b9c:
    if (ctx->pc == 0x286B9Cu) {
        ctx->pc = 0x286B9Cu;
            // 0x286b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286BA0u;
        goto label_286ba0;
    }
    ctx->pc = 0x286B98u;
    {
        const bool branch_taken_0x286b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286B98u;
            // 0x286b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b98) {
            ctx->pc = 0x286C70u;
            goto label_286c70;
        }
    }
    ctx->pc = 0x286BA0u;
label_286ba0:
    // 0x286ba0: 0x27a205d8  addiu       $v0, $sp, 0x5D8
    ctx->pc = 0x286ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1496));
label_286ba4:
    // 0x286ba4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286ba8:
    // 0x286ba8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x286ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_286bac:
    // 0x286bac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x286bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_286bb0:
    // 0x286bb0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_286bb4:
    if (ctx->pc == 0x286BB4u) {
        ctx->pc = 0x286BB8u;
        goto label_286bb8;
    }
    ctx->pc = 0x286BB0u;
    {
        const bool branch_taken_0x286bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286bb0) {
            ctx->pc = 0x286BE0u;
            goto label_286be0;
        }
    }
    ctx->pc = 0x286BB8u;
label_286bb8:
    // 0x286bb8: 0x8fa205d8  lw          $v0, 0x5D8($sp)
    ctx->pc = 0x286bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1496)));
label_286bbc:
    // 0x286bbc: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x286bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_286bc0:
    // 0x286bc0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x286bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_286bc4:
    // 0x286bc4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x286bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_286bc8:
    // 0x286bc8: 0x8fa505d0  lw          $a1, 0x5D0($sp)
    ctx->pc = 0x286bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1488)));
label_286bcc:
    // 0x286bcc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x286bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_286bd0:
    // 0x286bd0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x286bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_286bd4:
    // 0x286bd4: 0xc0a7ab4  jal         func_29EAD0
label_286bd8:
    if (ctx->pc == 0x286BD8u) {
        ctx->pc = 0x286BD8u;
            // 0x286bd8: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x286BDCu;
        goto label_286bdc;
    }
    ctx->pc = 0x286BD4u;
    SET_GPR_U32(ctx, 31, 0x286BDCu);
    ctx->pc = 0x286BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286BD4u;
            // 0x286bd8: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286BDCu; }
        if (ctx->pc != 0x286BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286BDCu; }
        if (ctx->pc != 0x286BDCu) { return; }
    }
    ctx->pc = 0x286BDCu;
label_286bdc:
    // 0x286bdc: 0x0  nop
    ctx->pc = 0x286bdcu;
    // NOP
label_286be0:
    // 0x286be0: 0x27a20de8  addiu       $v0, $sp, 0xDE8
    ctx->pc = 0x286be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3560));
label_286be4:
    // 0x286be4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286be8:
    // 0x286be8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x286be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_286bec:
    // 0x286bec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x286becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_286bf0:
    // 0x286bf0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_286bf4:
    if (ctx->pc == 0x286BF4u) {
        ctx->pc = 0x286BF8u;
        goto label_286bf8;
    }
    ctx->pc = 0x286BF0u;
    {
        const bool branch_taken_0x286bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286bf0) {
            ctx->pc = 0x286C20u;
            goto label_286c20;
        }
    }
    ctx->pc = 0x286BF8u;
label_286bf8:
    // 0x286bf8: 0x8fa20de8  lw          $v0, 0xDE8($sp)
    ctx->pc = 0x286bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3560)));
label_286bfc:
    // 0x286bfc: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x286bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_286c00:
    // 0x286c00: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x286c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_286c04:
    // 0x286c04: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x286c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_286c08:
    // 0x286c08: 0x8fa50de0  lw          $a1, 0xDE0($sp)
    ctx->pc = 0x286c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3552)));
label_286c0c:
    // 0x286c0c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x286c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_286c10:
    // 0x286c10: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x286c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_286c14:
    // 0x286c14: 0xc0a7ab4  jal         func_29EAD0
label_286c18:
    if (ctx->pc == 0x286C18u) {
        ctx->pc = 0x286C18u;
            // 0x286c18: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x286C1Cu;
        goto label_286c1c;
    }
    ctx->pc = 0x286C14u;
    SET_GPR_U32(ctx, 31, 0x286C1Cu);
    ctx->pc = 0x286C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286C14u;
            // 0x286c18: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C1Cu; }
        if (ctx->pc != 0x286C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C1Cu; }
        if (ctx->pc != 0x286C1Cu) { return; }
    }
    ctx->pc = 0x286C1Cu;
label_286c1c:
    // 0x286c1c: 0x0  nop
    ctx->pc = 0x286c1cu;
    // NOP
label_286c20:
    // 0x286c20: 0x27a20f08  addiu       $v0, $sp, 0xF08
    ctx->pc = 0x286c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3848));
label_286c24:
    // 0x286c24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286c28:
    // 0x286c28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x286c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_286c2c:
    // 0x286c2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x286c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_286c30:
    // 0x286c30: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_286c34:
    if (ctx->pc == 0x286C34u) {
        ctx->pc = 0x286C38u;
        goto label_286c38;
    }
    ctx->pc = 0x286C30u;
    {
        const bool branch_taken_0x286c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286c30) {
            ctx->pc = 0x286C68u;
            goto label_286c68;
        }
    }
    ctx->pc = 0x286C38u;
label_286c38:
    // 0x286c38: 0x8fa20f08  lw          $v0, 0xF08($sp)
    ctx->pc = 0x286c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3848)));
label_286c3c:
    // 0x286c3c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x286c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_286c40:
    // 0x286c40: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x286c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_286c44:
    // 0x286c44: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x286c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_286c48:
    // 0x286c48: 0x8fa50f00  lw          $a1, 0xF00($sp)
    ctx->pc = 0x286c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3840)));
label_286c4c:
    // 0x286c4c: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x286c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_286c50:
    // 0x286c50: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x286c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_286c54:
    // 0x286c54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x286c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_286c58:
    // 0x286c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x286c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_286c5c:
    // 0x286c5c: 0xc0a7ab4  jal         func_29EAD0
label_286c60:
    if (ctx->pc == 0x286C60u) {
        ctx->pc = 0x286C60u;
            // 0x286c60: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x286C64u;
        goto label_286c64;
    }
    ctx->pc = 0x286C5Cu;
    SET_GPR_U32(ctx, 31, 0x286C64u);
    ctx->pc = 0x286C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286C5Cu;
            // 0x286c60: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C64u; }
        if (ctx->pc != 0x286C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286C64u; }
        if (ctx->pc != 0x286C64u) { return; }
    }
    ctx->pc = 0x286C64u;
label_286c64:
    // 0x286c64: 0x0  nop
    ctx->pc = 0x286c64u;
    // NOP
label_286c68:
    // 0x286c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_286c6c:
    // 0x286c6c: 0x0  nop
    ctx->pc = 0x286c6cu;
    // NOP
label_286c70:
    // 0x286c70: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x286c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_286c74:
    // 0x286c74: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x286c74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_286c78:
    // 0x286c78: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x286c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_286c7c:
    // 0x286c7c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x286c7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_286c80:
    // 0x286c80: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x286c80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_286c84:
    // 0x286c84: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x286c84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_286c88:
    // 0x286c88: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x286c88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_286c8c:
    // 0x286c8c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x286c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_286c90:
    // 0x286c90: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x286c90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_286c94:
    // 0x286c94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x286c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_286c98:
    // 0x286c98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x286c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_286c9c:
    // 0x286c9c: 0x3e00008  jr          $ra
label_286ca0:
    if (ctx->pc == 0x286CA0u) {
        ctx->pc = 0x286CA0u;
            // 0x286ca0: 0x27bd0f40  addiu       $sp, $sp, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3904));
        ctx->pc = 0x286CA4u;
        goto label_286ca4;
    }
    ctx->pc = 0x286C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286C9Cu;
            // 0x286ca0: 0x27bd0f40  addiu       $sp, $sp, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3904));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x286CA4u;
label_286ca4:
    // 0x286ca4: 0x0  nop
    ctx->pc = 0x286ca4u;
    // NOP
label_286ca8:
    // 0x286ca8: 0x0  nop
    ctx->pc = 0x286ca8u;
    // NOP
label_286cac:
    // 0x286cac: 0x0  nop
    ctx->pc = 0x286cacu;
    // NOP
}
