#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00165E20
// Address: 0x165e20 - 0x166628
void sub_00165E20_0x165e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165E20_0x165e20");
#endif

    switch (ctx->pc) {
        case 0x165e20u: goto label_165e20;
        case 0x165e24u: goto label_165e24;
        case 0x165e28u: goto label_165e28;
        case 0x165e2cu: goto label_165e2c;
        case 0x165e30u: goto label_165e30;
        case 0x165e34u: goto label_165e34;
        case 0x165e38u: goto label_165e38;
        case 0x165e3cu: goto label_165e3c;
        case 0x165e40u: goto label_165e40;
        case 0x165e44u: goto label_165e44;
        case 0x165e48u: goto label_165e48;
        case 0x165e4cu: goto label_165e4c;
        case 0x165e50u: goto label_165e50;
        case 0x165e54u: goto label_165e54;
        case 0x165e58u: goto label_165e58;
        case 0x165e5cu: goto label_165e5c;
        case 0x165e60u: goto label_165e60;
        case 0x165e64u: goto label_165e64;
        case 0x165e68u: goto label_165e68;
        case 0x165e6cu: goto label_165e6c;
        case 0x165e70u: goto label_165e70;
        case 0x165e74u: goto label_165e74;
        case 0x165e78u: goto label_165e78;
        case 0x165e7cu: goto label_165e7c;
        case 0x165e80u: goto label_165e80;
        case 0x165e84u: goto label_165e84;
        case 0x165e88u: goto label_165e88;
        case 0x165e8cu: goto label_165e8c;
        case 0x165e90u: goto label_165e90;
        case 0x165e94u: goto label_165e94;
        case 0x165e98u: goto label_165e98;
        case 0x165e9cu: goto label_165e9c;
        case 0x165ea0u: goto label_165ea0;
        case 0x165ea4u: goto label_165ea4;
        case 0x165ea8u: goto label_165ea8;
        case 0x165eacu: goto label_165eac;
        case 0x165eb0u: goto label_165eb0;
        case 0x165eb4u: goto label_165eb4;
        case 0x165eb8u: goto label_165eb8;
        case 0x165ebcu: goto label_165ebc;
        case 0x165ec0u: goto label_165ec0;
        case 0x165ec4u: goto label_165ec4;
        case 0x165ec8u: goto label_165ec8;
        case 0x165eccu: goto label_165ecc;
        case 0x165ed0u: goto label_165ed0;
        case 0x165ed4u: goto label_165ed4;
        case 0x165ed8u: goto label_165ed8;
        case 0x165edcu: goto label_165edc;
        case 0x165ee0u: goto label_165ee0;
        case 0x165ee4u: goto label_165ee4;
        case 0x165ee8u: goto label_165ee8;
        case 0x165eecu: goto label_165eec;
        case 0x165ef0u: goto label_165ef0;
        case 0x165ef4u: goto label_165ef4;
        case 0x165ef8u: goto label_165ef8;
        case 0x165efcu: goto label_165efc;
        case 0x165f00u: goto label_165f00;
        case 0x165f04u: goto label_165f04;
        case 0x165f08u: goto label_165f08;
        case 0x165f0cu: goto label_165f0c;
        case 0x165f10u: goto label_165f10;
        case 0x165f14u: goto label_165f14;
        case 0x165f18u: goto label_165f18;
        case 0x165f1cu: goto label_165f1c;
        case 0x165f20u: goto label_165f20;
        case 0x165f24u: goto label_165f24;
        case 0x165f28u: goto label_165f28;
        case 0x165f2cu: goto label_165f2c;
        case 0x165f30u: goto label_165f30;
        case 0x165f34u: goto label_165f34;
        case 0x165f38u: goto label_165f38;
        case 0x165f3cu: goto label_165f3c;
        case 0x165f40u: goto label_165f40;
        case 0x165f44u: goto label_165f44;
        case 0x165f48u: goto label_165f48;
        case 0x165f4cu: goto label_165f4c;
        case 0x165f50u: goto label_165f50;
        case 0x165f54u: goto label_165f54;
        case 0x165f58u: goto label_165f58;
        case 0x165f5cu: goto label_165f5c;
        case 0x165f60u: goto label_165f60;
        case 0x165f64u: goto label_165f64;
        case 0x165f68u: goto label_165f68;
        case 0x165f6cu: goto label_165f6c;
        case 0x165f70u: goto label_165f70;
        case 0x165f74u: goto label_165f74;
        case 0x165f78u: goto label_165f78;
        case 0x165f7cu: goto label_165f7c;
        case 0x165f80u: goto label_165f80;
        case 0x165f84u: goto label_165f84;
        case 0x165f88u: goto label_165f88;
        case 0x165f8cu: goto label_165f8c;
        case 0x165f90u: goto label_165f90;
        case 0x165f94u: goto label_165f94;
        case 0x165f98u: goto label_165f98;
        case 0x165f9cu: goto label_165f9c;
        case 0x165fa0u: goto label_165fa0;
        case 0x165fa4u: goto label_165fa4;
        case 0x165fa8u: goto label_165fa8;
        case 0x165facu: goto label_165fac;
        case 0x165fb0u: goto label_165fb0;
        case 0x165fb4u: goto label_165fb4;
        case 0x165fb8u: goto label_165fb8;
        case 0x165fbcu: goto label_165fbc;
        case 0x165fc0u: goto label_165fc0;
        case 0x165fc4u: goto label_165fc4;
        case 0x165fc8u: goto label_165fc8;
        case 0x165fccu: goto label_165fcc;
        case 0x165fd0u: goto label_165fd0;
        case 0x165fd4u: goto label_165fd4;
        case 0x165fd8u: goto label_165fd8;
        case 0x165fdcu: goto label_165fdc;
        case 0x165fe0u: goto label_165fe0;
        case 0x165fe4u: goto label_165fe4;
        case 0x165fe8u: goto label_165fe8;
        case 0x165fecu: goto label_165fec;
        case 0x165ff0u: goto label_165ff0;
        case 0x165ff4u: goto label_165ff4;
        case 0x165ff8u: goto label_165ff8;
        case 0x165ffcu: goto label_165ffc;
        case 0x166000u: goto label_166000;
        case 0x166004u: goto label_166004;
        case 0x166008u: goto label_166008;
        case 0x16600cu: goto label_16600c;
        case 0x166010u: goto label_166010;
        case 0x166014u: goto label_166014;
        case 0x166018u: goto label_166018;
        case 0x16601cu: goto label_16601c;
        case 0x166020u: goto label_166020;
        case 0x166024u: goto label_166024;
        case 0x166028u: goto label_166028;
        case 0x16602cu: goto label_16602c;
        case 0x166030u: goto label_166030;
        case 0x166034u: goto label_166034;
        case 0x166038u: goto label_166038;
        case 0x16603cu: goto label_16603c;
        case 0x166040u: goto label_166040;
        case 0x166044u: goto label_166044;
        case 0x166048u: goto label_166048;
        case 0x16604cu: goto label_16604c;
        case 0x166050u: goto label_166050;
        case 0x166054u: goto label_166054;
        case 0x166058u: goto label_166058;
        case 0x16605cu: goto label_16605c;
        case 0x166060u: goto label_166060;
        case 0x166064u: goto label_166064;
        case 0x166068u: goto label_166068;
        case 0x16606cu: goto label_16606c;
        case 0x166070u: goto label_166070;
        case 0x166074u: goto label_166074;
        case 0x166078u: goto label_166078;
        case 0x16607cu: goto label_16607c;
        case 0x166080u: goto label_166080;
        case 0x166084u: goto label_166084;
        case 0x166088u: goto label_166088;
        case 0x16608cu: goto label_16608c;
        case 0x166090u: goto label_166090;
        case 0x166094u: goto label_166094;
        case 0x166098u: goto label_166098;
        case 0x16609cu: goto label_16609c;
        case 0x1660a0u: goto label_1660a0;
        case 0x1660a4u: goto label_1660a4;
        case 0x1660a8u: goto label_1660a8;
        case 0x1660acu: goto label_1660ac;
        case 0x1660b0u: goto label_1660b0;
        case 0x1660b4u: goto label_1660b4;
        case 0x1660b8u: goto label_1660b8;
        case 0x1660bcu: goto label_1660bc;
        case 0x1660c0u: goto label_1660c0;
        case 0x1660c4u: goto label_1660c4;
        case 0x1660c8u: goto label_1660c8;
        case 0x1660ccu: goto label_1660cc;
        case 0x1660d0u: goto label_1660d0;
        case 0x1660d4u: goto label_1660d4;
        case 0x1660d8u: goto label_1660d8;
        case 0x1660dcu: goto label_1660dc;
        case 0x1660e0u: goto label_1660e0;
        case 0x1660e4u: goto label_1660e4;
        case 0x1660e8u: goto label_1660e8;
        case 0x1660ecu: goto label_1660ec;
        case 0x1660f0u: goto label_1660f0;
        case 0x1660f4u: goto label_1660f4;
        case 0x1660f8u: goto label_1660f8;
        case 0x1660fcu: goto label_1660fc;
        case 0x166100u: goto label_166100;
        case 0x166104u: goto label_166104;
        case 0x166108u: goto label_166108;
        case 0x16610cu: goto label_16610c;
        case 0x166110u: goto label_166110;
        case 0x166114u: goto label_166114;
        case 0x166118u: goto label_166118;
        case 0x16611cu: goto label_16611c;
        case 0x166120u: goto label_166120;
        case 0x166124u: goto label_166124;
        case 0x166128u: goto label_166128;
        case 0x16612cu: goto label_16612c;
        case 0x166130u: goto label_166130;
        case 0x166134u: goto label_166134;
        case 0x166138u: goto label_166138;
        case 0x16613cu: goto label_16613c;
        case 0x166140u: goto label_166140;
        case 0x166144u: goto label_166144;
        case 0x166148u: goto label_166148;
        case 0x16614cu: goto label_16614c;
        case 0x166150u: goto label_166150;
        case 0x166154u: goto label_166154;
        case 0x166158u: goto label_166158;
        case 0x16615cu: goto label_16615c;
        case 0x166160u: goto label_166160;
        case 0x166164u: goto label_166164;
        case 0x166168u: goto label_166168;
        case 0x16616cu: goto label_16616c;
        case 0x166170u: goto label_166170;
        case 0x166174u: goto label_166174;
        case 0x166178u: goto label_166178;
        case 0x16617cu: goto label_16617c;
        case 0x166180u: goto label_166180;
        case 0x166184u: goto label_166184;
        case 0x166188u: goto label_166188;
        case 0x16618cu: goto label_16618c;
        case 0x166190u: goto label_166190;
        case 0x166194u: goto label_166194;
        case 0x166198u: goto label_166198;
        case 0x16619cu: goto label_16619c;
        case 0x1661a0u: goto label_1661a0;
        case 0x1661a4u: goto label_1661a4;
        case 0x1661a8u: goto label_1661a8;
        case 0x1661acu: goto label_1661ac;
        case 0x1661b0u: goto label_1661b0;
        case 0x1661b4u: goto label_1661b4;
        case 0x1661b8u: goto label_1661b8;
        case 0x1661bcu: goto label_1661bc;
        case 0x1661c0u: goto label_1661c0;
        case 0x1661c4u: goto label_1661c4;
        case 0x1661c8u: goto label_1661c8;
        case 0x1661ccu: goto label_1661cc;
        case 0x1661d0u: goto label_1661d0;
        case 0x1661d4u: goto label_1661d4;
        case 0x1661d8u: goto label_1661d8;
        case 0x1661dcu: goto label_1661dc;
        case 0x1661e0u: goto label_1661e0;
        case 0x1661e4u: goto label_1661e4;
        case 0x1661e8u: goto label_1661e8;
        case 0x1661ecu: goto label_1661ec;
        case 0x1661f0u: goto label_1661f0;
        case 0x1661f4u: goto label_1661f4;
        case 0x1661f8u: goto label_1661f8;
        case 0x1661fcu: goto label_1661fc;
        case 0x166200u: goto label_166200;
        case 0x166204u: goto label_166204;
        case 0x166208u: goto label_166208;
        case 0x16620cu: goto label_16620c;
        case 0x166210u: goto label_166210;
        case 0x166214u: goto label_166214;
        case 0x166218u: goto label_166218;
        case 0x16621cu: goto label_16621c;
        case 0x166220u: goto label_166220;
        case 0x166224u: goto label_166224;
        case 0x166228u: goto label_166228;
        case 0x16622cu: goto label_16622c;
        case 0x166230u: goto label_166230;
        case 0x166234u: goto label_166234;
        case 0x166238u: goto label_166238;
        case 0x16623cu: goto label_16623c;
        case 0x166240u: goto label_166240;
        case 0x166244u: goto label_166244;
        case 0x166248u: goto label_166248;
        case 0x16624cu: goto label_16624c;
        case 0x166250u: goto label_166250;
        case 0x166254u: goto label_166254;
        case 0x166258u: goto label_166258;
        case 0x16625cu: goto label_16625c;
        case 0x166260u: goto label_166260;
        case 0x166264u: goto label_166264;
        case 0x166268u: goto label_166268;
        case 0x16626cu: goto label_16626c;
        case 0x166270u: goto label_166270;
        case 0x166274u: goto label_166274;
        case 0x166278u: goto label_166278;
        case 0x16627cu: goto label_16627c;
        case 0x166280u: goto label_166280;
        case 0x166284u: goto label_166284;
        case 0x166288u: goto label_166288;
        case 0x16628cu: goto label_16628c;
        case 0x166290u: goto label_166290;
        case 0x166294u: goto label_166294;
        case 0x166298u: goto label_166298;
        case 0x16629cu: goto label_16629c;
        case 0x1662a0u: goto label_1662a0;
        case 0x1662a4u: goto label_1662a4;
        case 0x1662a8u: goto label_1662a8;
        case 0x1662acu: goto label_1662ac;
        case 0x1662b0u: goto label_1662b0;
        case 0x1662b4u: goto label_1662b4;
        case 0x1662b8u: goto label_1662b8;
        case 0x1662bcu: goto label_1662bc;
        case 0x1662c0u: goto label_1662c0;
        case 0x1662c4u: goto label_1662c4;
        case 0x1662c8u: goto label_1662c8;
        case 0x1662ccu: goto label_1662cc;
        case 0x1662d0u: goto label_1662d0;
        case 0x1662d4u: goto label_1662d4;
        case 0x1662d8u: goto label_1662d8;
        case 0x1662dcu: goto label_1662dc;
        case 0x1662e0u: goto label_1662e0;
        case 0x1662e4u: goto label_1662e4;
        case 0x1662e8u: goto label_1662e8;
        case 0x1662ecu: goto label_1662ec;
        case 0x1662f0u: goto label_1662f0;
        case 0x1662f4u: goto label_1662f4;
        case 0x1662f8u: goto label_1662f8;
        case 0x1662fcu: goto label_1662fc;
        case 0x166300u: goto label_166300;
        case 0x166304u: goto label_166304;
        case 0x166308u: goto label_166308;
        case 0x16630cu: goto label_16630c;
        case 0x166310u: goto label_166310;
        case 0x166314u: goto label_166314;
        case 0x166318u: goto label_166318;
        case 0x16631cu: goto label_16631c;
        case 0x166320u: goto label_166320;
        case 0x166324u: goto label_166324;
        case 0x166328u: goto label_166328;
        case 0x16632cu: goto label_16632c;
        case 0x166330u: goto label_166330;
        case 0x166334u: goto label_166334;
        case 0x166338u: goto label_166338;
        case 0x16633cu: goto label_16633c;
        case 0x166340u: goto label_166340;
        case 0x166344u: goto label_166344;
        case 0x166348u: goto label_166348;
        case 0x16634cu: goto label_16634c;
        case 0x166350u: goto label_166350;
        case 0x166354u: goto label_166354;
        case 0x166358u: goto label_166358;
        case 0x16635cu: goto label_16635c;
        case 0x166360u: goto label_166360;
        case 0x166364u: goto label_166364;
        case 0x166368u: goto label_166368;
        case 0x16636cu: goto label_16636c;
        case 0x166370u: goto label_166370;
        case 0x166374u: goto label_166374;
        case 0x166378u: goto label_166378;
        case 0x16637cu: goto label_16637c;
        case 0x166380u: goto label_166380;
        case 0x166384u: goto label_166384;
        case 0x166388u: goto label_166388;
        case 0x16638cu: goto label_16638c;
        case 0x166390u: goto label_166390;
        case 0x166394u: goto label_166394;
        case 0x166398u: goto label_166398;
        case 0x16639cu: goto label_16639c;
        case 0x1663a0u: goto label_1663a0;
        case 0x1663a4u: goto label_1663a4;
        case 0x1663a8u: goto label_1663a8;
        case 0x1663acu: goto label_1663ac;
        case 0x1663b0u: goto label_1663b0;
        case 0x1663b4u: goto label_1663b4;
        case 0x1663b8u: goto label_1663b8;
        case 0x1663bcu: goto label_1663bc;
        case 0x1663c0u: goto label_1663c0;
        case 0x1663c4u: goto label_1663c4;
        case 0x1663c8u: goto label_1663c8;
        case 0x1663ccu: goto label_1663cc;
        case 0x1663d0u: goto label_1663d0;
        case 0x1663d4u: goto label_1663d4;
        case 0x1663d8u: goto label_1663d8;
        case 0x1663dcu: goto label_1663dc;
        case 0x1663e0u: goto label_1663e0;
        case 0x1663e4u: goto label_1663e4;
        case 0x1663e8u: goto label_1663e8;
        case 0x1663ecu: goto label_1663ec;
        case 0x1663f0u: goto label_1663f0;
        case 0x1663f4u: goto label_1663f4;
        case 0x1663f8u: goto label_1663f8;
        case 0x1663fcu: goto label_1663fc;
        case 0x166400u: goto label_166400;
        case 0x166404u: goto label_166404;
        case 0x166408u: goto label_166408;
        case 0x16640cu: goto label_16640c;
        case 0x166410u: goto label_166410;
        case 0x166414u: goto label_166414;
        case 0x166418u: goto label_166418;
        case 0x16641cu: goto label_16641c;
        case 0x166420u: goto label_166420;
        case 0x166424u: goto label_166424;
        case 0x166428u: goto label_166428;
        case 0x16642cu: goto label_16642c;
        case 0x166430u: goto label_166430;
        case 0x166434u: goto label_166434;
        case 0x166438u: goto label_166438;
        case 0x16643cu: goto label_16643c;
        case 0x166440u: goto label_166440;
        case 0x166444u: goto label_166444;
        case 0x166448u: goto label_166448;
        case 0x16644cu: goto label_16644c;
        case 0x166450u: goto label_166450;
        case 0x166454u: goto label_166454;
        case 0x166458u: goto label_166458;
        case 0x16645cu: goto label_16645c;
        case 0x166460u: goto label_166460;
        case 0x166464u: goto label_166464;
        case 0x166468u: goto label_166468;
        case 0x16646cu: goto label_16646c;
        case 0x166470u: goto label_166470;
        case 0x166474u: goto label_166474;
        case 0x166478u: goto label_166478;
        case 0x16647cu: goto label_16647c;
        case 0x166480u: goto label_166480;
        case 0x166484u: goto label_166484;
        case 0x166488u: goto label_166488;
        case 0x16648cu: goto label_16648c;
        case 0x166490u: goto label_166490;
        case 0x166494u: goto label_166494;
        case 0x166498u: goto label_166498;
        case 0x16649cu: goto label_16649c;
        case 0x1664a0u: goto label_1664a0;
        case 0x1664a4u: goto label_1664a4;
        case 0x1664a8u: goto label_1664a8;
        case 0x1664acu: goto label_1664ac;
        case 0x1664b0u: goto label_1664b0;
        case 0x1664b4u: goto label_1664b4;
        case 0x1664b8u: goto label_1664b8;
        case 0x1664bcu: goto label_1664bc;
        case 0x1664c0u: goto label_1664c0;
        case 0x1664c4u: goto label_1664c4;
        case 0x1664c8u: goto label_1664c8;
        case 0x1664ccu: goto label_1664cc;
        case 0x1664d0u: goto label_1664d0;
        case 0x1664d4u: goto label_1664d4;
        case 0x1664d8u: goto label_1664d8;
        case 0x1664dcu: goto label_1664dc;
        case 0x1664e0u: goto label_1664e0;
        case 0x1664e4u: goto label_1664e4;
        case 0x1664e8u: goto label_1664e8;
        case 0x1664ecu: goto label_1664ec;
        case 0x1664f0u: goto label_1664f0;
        case 0x1664f4u: goto label_1664f4;
        case 0x1664f8u: goto label_1664f8;
        case 0x1664fcu: goto label_1664fc;
        case 0x166500u: goto label_166500;
        case 0x166504u: goto label_166504;
        case 0x166508u: goto label_166508;
        case 0x16650cu: goto label_16650c;
        case 0x166510u: goto label_166510;
        case 0x166514u: goto label_166514;
        case 0x166518u: goto label_166518;
        case 0x16651cu: goto label_16651c;
        case 0x166520u: goto label_166520;
        case 0x166524u: goto label_166524;
        case 0x166528u: goto label_166528;
        case 0x16652cu: goto label_16652c;
        case 0x166530u: goto label_166530;
        case 0x166534u: goto label_166534;
        case 0x166538u: goto label_166538;
        case 0x16653cu: goto label_16653c;
        case 0x166540u: goto label_166540;
        case 0x166544u: goto label_166544;
        case 0x166548u: goto label_166548;
        case 0x16654cu: goto label_16654c;
        case 0x166550u: goto label_166550;
        case 0x166554u: goto label_166554;
        case 0x166558u: goto label_166558;
        case 0x16655cu: goto label_16655c;
        case 0x166560u: goto label_166560;
        case 0x166564u: goto label_166564;
        case 0x166568u: goto label_166568;
        case 0x16656cu: goto label_16656c;
        case 0x166570u: goto label_166570;
        case 0x166574u: goto label_166574;
        case 0x166578u: goto label_166578;
        case 0x16657cu: goto label_16657c;
        case 0x166580u: goto label_166580;
        case 0x166584u: goto label_166584;
        case 0x166588u: goto label_166588;
        case 0x16658cu: goto label_16658c;
        case 0x166590u: goto label_166590;
        case 0x166594u: goto label_166594;
        case 0x166598u: goto label_166598;
        case 0x16659cu: goto label_16659c;
        case 0x1665a0u: goto label_1665a0;
        case 0x1665a4u: goto label_1665a4;
        case 0x1665a8u: goto label_1665a8;
        case 0x1665acu: goto label_1665ac;
        case 0x1665b0u: goto label_1665b0;
        case 0x1665b4u: goto label_1665b4;
        case 0x1665b8u: goto label_1665b8;
        case 0x1665bcu: goto label_1665bc;
        case 0x1665c0u: goto label_1665c0;
        case 0x1665c4u: goto label_1665c4;
        case 0x1665c8u: goto label_1665c8;
        case 0x1665ccu: goto label_1665cc;
        case 0x1665d0u: goto label_1665d0;
        case 0x1665d4u: goto label_1665d4;
        case 0x1665d8u: goto label_1665d8;
        case 0x1665dcu: goto label_1665dc;
        case 0x1665e0u: goto label_1665e0;
        case 0x1665e4u: goto label_1665e4;
        case 0x1665e8u: goto label_1665e8;
        case 0x1665ecu: goto label_1665ec;
        case 0x1665f0u: goto label_1665f0;
        case 0x1665f4u: goto label_1665f4;
        case 0x1665f8u: goto label_1665f8;
        case 0x1665fcu: goto label_1665fc;
        case 0x166600u: goto label_166600;
        case 0x166604u: goto label_166604;
        case 0x166608u: goto label_166608;
        case 0x16660cu: goto label_16660c;
        case 0x166610u: goto label_166610;
        case 0x166614u: goto label_166614;
        case 0x166618u: goto label_166618;
        case 0x16661cu: goto label_16661c;
        case 0x166620u: goto label_166620;
        case 0x166624u: goto label_166624;
        default: break;
    }

    ctx->pc = 0x165e20u;

label_165e20:
    // 0x165e20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x165e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_165e24:
    // 0x165e24: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x165e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_165e28:
    // 0x165e28: 0x8fbe0070  lw          $fp, 0x70($sp)
    ctx->pc = 0x165e28u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_165e2c:
    // 0x165e2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x165e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_165e30:
    // 0x165e30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x165e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165e34:
    // 0x165e34: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x165e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_165e38:
    // 0x165e38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x165e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_165e3c:
    // 0x165e3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x165e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_165e40:
    // 0x165e40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x165e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165e44:
    // 0x165e44: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x165e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_165e48:
    // 0x165e48: 0x3c13005d  lui         $s3, 0x5D
    ctx->pc = 0x165e48u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
label_165e4c:
    // 0x165e4c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x165e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_165e50:
    // 0x165e50: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x165e50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_165e54:
    // 0x165e54: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x165e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_165e58:
    // 0x165e58: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x165e58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_165e5c:
    // 0x165e5c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x165e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_165e60:
    // 0x165e60: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x165e60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_165e64:
    // 0x165e64: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x165e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_165e68:
    // 0x165e68: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x165e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_165e6c:
    // 0x165e6c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x165e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_165e70:
    // 0x165e70: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x165e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_165e74:
    // 0x165e74: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x165e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
label_165e78:
    // 0x165e78: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x165e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_165e7c:
    // 0x165e7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_165e80:
    if (ctx->pc == 0x165E80u) {
        ctx->pc = 0x165E80u;
            // 0x165e80: 0x8e657240  lw          $a1, 0x7240($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29248)));
        ctx->pc = 0x165E84u;
        goto label_165e84;
    }
    ctx->pc = 0x165E7Cu;
    {
        const bool branch_taken_0x165e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165E7Cu;
            // 0x165e80: 0x8e657240  lw          $a1, 0x7240($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e7c) {
            ctx->pc = 0x165E98u;
            goto label_165e98;
        }
    }
    ctx->pc = 0x165E84u;
label_165e84:
    // 0x165e84: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x165e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_165e88:
    // 0x165e88: 0xc04a4e2  jal         func_129388
label_165e8c:
    if (ctx->pc == 0x165E8Cu) {
        ctx->pc = 0x165E8Cu;
            // 0x165e8c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x165E90u;
        goto label_165e90;
    }
    ctx->pc = 0x165E88u;
    SET_GPR_U32(ctx, 31, 0x165E90u);
    ctx->pc = 0x165E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165E88u;
            // 0x165e8c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E90u; }
        if (ctx->pc != 0x165E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E90u; }
        if (ctx->pc != 0x165E90u) { return; }
    }
    ctx->pc = 0x165E90u;
label_165e90:
    // 0x165e90: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_165e94:
    if (ctx->pc == 0x165E94u) {
        ctx->pc = 0x165E94u;
            // 0x165e94: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x165E98u;
        goto label_165e98;
    }
    ctx->pc = 0x165E90u;
    {
        const bool branch_taken_0x165e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165e90) {
            ctx->pc = 0x165E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165E90u;
            // 0x165e94: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165E78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165e78;
        }
    }
    ctx->pc = 0x165E98u;
label_165e98:
    // 0x165e98: 0x1211006b  beq         $s0, $s1, . + 4 + (0x6B << 2)
label_165e9c:
    if (ctx->pc == 0x165E9Cu) {
        ctx->pc = 0x165E9Cu;
            // 0x165e9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x165EA0u;
        goto label_165ea0;
    }
    ctx->pc = 0x165E98u;
    {
        const bool branch_taken_0x165e98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x165E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165E98u;
            // 0x165e9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165e98) {
            ctx->pc = 0x166048u;
            goto label_166048;
        }
    }
    ctx->pc = 0x165EA0u;
label_165ea0:
    // 0x165ea0: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x165ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_165ea4:
    // 0x165ea4: 0x54600069  bnel        $v1, $zero, . + 4 + (0x69 << 2)
label_165ea8:
    if (ctx->pc == 0x165EA8u) {
        ctx->pc = 0x165EA8u;
            // 0x165ea8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x165EACu;
        goto label_165eac;
    }
    ctx->pc = 0x165EA4u;
    {
        const bool branch_taken_0x165ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165ea4) {
            ctx->pc = 0x165EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165EA4u;
            // 0x165ea8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16604Cu;
            goto label_16604c;
        }
    }
    ctx->pc = 0x165EACu;
label_165eac:
    // 0x165eac: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x165eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_165eb0:
    // 0x165eb0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x165eb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_165eb4:
    // 0x165eb4: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x165eb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_165eb8:
    // 0x165eb8: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x165eb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_165ebc:
    // 0x165ebc: 0x50600063  beql        $v1, $zero, . + 4 + (0x63 << 2)
label_165ec0:
    if (ctx->pc == 0x165EC0u) {
        ctx->pc = 0x165EC0u;
            // 0x165ec0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x165EC4u;
        goto label_165ec4;
    }
    ctx->pc = 0x165EBCu;
    {
        const bool branch_taken_0x165ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ebc) {
            ctx->pc = 0x165EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165EBCu;
            // 0x165ec0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16604Cu;
            goto label_16604c;
        }
    }
    ctx->pc = 0x165EC4u;
label_165ec4:
    // 0x165ec4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x165ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165ec8:
    // 0x165ec8: 0x3c15005d  lui         $s5, 0x5D
    ctx->pc = 0x165ec8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)93 << 16));
label_165ecc:
    // 0x165ecc: 0x0  nop
    ctx->pc = 0x165eccu;
    // NOP
label_165ed0:
    // 0x165ed0: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x165ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_165ed4:
    // 0x165ed4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_165ed8:
    if (ctx->pc == 0x165ED8u) {
        ctx->pc = 0x165ED8u;
            // 0x165ed8: 0x8ea57244  lw          $a1, 0x7244($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29252)));
        ctx->pc = 0x165EDCu;
        goto label_165edc;
    }
    ctx->pc = 0x165ED4u;
    {
        const bool branch_taken_0x165ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165ED4u;
            // 0x165ed8: 0x8ea57244  lw          $a1, 0x7244($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ed4) {
            ctx->pc = 0x165EF0u;
            goto label_165ef0;
        }
    }
    ctx->pc = 0x165EDCu;
label_165edc:
    // 0x165edc: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x165edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_165ee0:
    // 0x165ee0: 0xc04a4e2  jal         func_129388
label_165ee4:
    if (ctx->pc == 0x165EE4u) {
        ctx->pc = 0x165EE4u;
            // 0x165ee4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x165EE8u;
        goto label_165ee8;
    }
    ctx->pc = 0x165EE0u;
    SET_GPR_U32(ctx, 31, 0x165EE8u);
    ctx->pc = 0x165EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165EE0u;
            // 0x165ee4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EE8u; }
        if (ctx->pc != 0x165EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EE8u; }
        if (ctx->pc != 0x165EE8u) { return; }
    }
    ctx->pc = 0x165EE8u;
label_165ee8:
    // 0x165ee8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_165eec:
    if (ctx->pc == 0x165EECu) {
        ctx->pc = 0x165EECu;
            // 0x165eec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x165EF0u;
        goto label_165ef0;
    }
    ctx->pc = 0x165EE8u;
    {
        const bool branch_taken_0x165ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165ee8) {
            ctx->pc = 0x165EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165EE8u;
            // 0x165eec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165ed0;
        }
    }
    ctx->pc = 0x165EF0u;
label_165ef0:
    // 0x165ef0: 0x12110055  beq         $s0, $s1, . + 4 + (0x55 << 2)
label_165ef4:
    if (ctx->pc == 0x165EF4u) {
        ctx->pc = 0x165EF4u;
            // 0x165ef4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x165EF8u;
        goto label_165ef8;
    }
    ctx->pc = 0x165EF0u;
    {
        const bool branch_taken_0x165ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x165EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165EF0u;
            // 0x165ef4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ef0) {
            ctx->pc = 0x166048u;
            goto label_166048;
        }
    }
    ctx->pc = 0x165EF8u;
label_165ef8:
    // 0x165ef8: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x165ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_165efc:
    // 0x165efc: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x165efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_165f00:
    // 0x165f00: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x165f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_165f04:
    // 0x165f04: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x165f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_165f08:
    // 0x165f08: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x165f08u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_165f0c:
    // 0x165f0c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x165f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165f10:
    // 0x165f10: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x165f10u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_165f14:
    // 0x165f14: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x165f14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_165f18:
    // 0x165f18: 0x90640003  lbu         $a0, 0x3($v1)
    ctx->pc = 0x165f18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_165f1c:
    // 0x165f1c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x165f1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_165f20:
    // 0x165f20: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x165f20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_165f24:
    // 0x165f24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x165f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_165f28:
    // 0x165f28: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x165f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_165f2c:
    // 0x165f2c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x165f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_165f30:
    // 0x165f30: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x165f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_165f34:
    // 0x165f34: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x165f34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_165f38:
    // 0x165f38: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x165f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_165f3c:
    // 0x165f3c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x165f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_165f40:
    // 0x165f40: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x165f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_165f44:
    // 0x165f44: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x165f44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
label_165f48:
    // 0x165f48: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x165f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_165f4c:
    // 0x165f4c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x165f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_165f50:
    // 0x165f50: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x165f50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_165f54:
    // 0x165f54: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x165f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_165f58:
    // 0x165f58: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x165f58u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
label_165f5c:
    // 0x165f5c: 0x9262000e  lbu         $v0, 0xE($s3)
    ctx->pc = 0x165f5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 14)));
label_165f60:
    // 0x165f60: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x165f60u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_165f64:
    // 0x165f64: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x165f64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
label_165f68:
    // 0x165f68: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x165f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_165f6c:
    // 0x165f6c: 0xa2e30000  sb          $v1, 0x0($s7)
    ctx->pc = 0x165f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
label_165f70:
    // 0x165f70: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x165f70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_165f74:
    // 0x165f74: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x165f74u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_165f78:
    // 0x165f78: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_165f7c:
    if (ctx->pc == 0x165F7Cu) {
        ctx->pc = 0x165F7Cu;
            // 0x165f7c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x165F80u;
        goto label_165f80;
    }
    ctx->pc = 0x165F78u;
    {
        const bool branch_taken_0x165f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165f78) {
            ctx->pc = 0x165F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165F78u;
            // 0x165f7c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x165F80u;
            goto label_165f80;
        }
    }
    ctx->pc = 0x165F80u;
label_165f80:
    // 0x165f80: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x165f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_165f84:
    // 0x165f84: 0x1812  mflo        $v1
    ctx->pc = 0x165f84u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_165f88:
    // 0x165f88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_165f8c:
    // 0x165f8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x165f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_165f90:
    // 0x165f90: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x165f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_165f94:
    // 0x165f94: 0x82850000  lb          $a1, 0x0($s4)
    ctx->pc = 0x165f94u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_165f98:
    // 0x165f98: 0x14aa0003  bne         $a1, $t2, . + 4 + (0x3 << 2)
label_165f9c:
    if (ctx->pc == 0x165F9Cu) {
        ctx->pc = 0x165F9Cu;
            // 0x165f9c: 0x92830000  lbu         $v1, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x165FA0u;
        goto label_165fa0;
    }
    ctx->pc = 0x165F98u;
    {
        const bool branch_taken_0x165f98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 10));
        ctx->pc = 0x165F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165F98u;
            // 0x165f9c: 0x92830000  lbu         $v1, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f98) {
            ctx->pc = 0x165FA8u;
            goto label_165fa8;
        }
    }
    ctx->pc = 0x165FA0u;
label_165fa0:
    // 0x165fa0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_165fa4:
    if (ctx->pc == 0x165FA4u) {
        ctx->pc = 0x165FA4u;
            // 0x165fa4: 0xa7c00000  sh          $zero, 0x0($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x165FA8u;
        goto label_165fa8;
    }
    ctx->pc = 0x165FA0u;
    {
        const bool branch_taken_0x165fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165FA0u;
            // 0x165fa4: 0xa7c00000  sh          $zero, 0x0($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fa0) {
            ctx->pc = 0x16600Cu;
            goto label_16600c;
        }
    }
    ctx->pc = 0x165FA8u;
label_165fa8:
    // 0x165fa8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x165fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_165fac:
    // 0x165fac: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_165fb0:
    if (ctx->pc == 0x165FB0u) {
        ctx->pc = 0x165FB0u;
            // 0x165fb0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x165FB4u;
        goto label_165fb4;
    }
    ctx->pc = 0x165FACu;
    {
        const bool branch_taken_0x165fac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x165FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165FACu;
            // 0x165fb0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fac) {
            ctx->pc = 0x165FC0u;
            goto label_165fc0;
        }
    }
    ctx->pc = 0x165FB4u;
label_165fb4:
    // 0x165fb4: 0x10000015  b           . + 4 + (0x15 << 2)
label_165fb8:
    if (ctx->pc == 0x165FB8u) {
        ctx->pc = 0x165FB8u;
            // 0x165fb8: 0xa7c90000  sh          $t1, 0x0($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 9));
        ctx->pc = 0x165FBCu;
        goto label_165fbc;
    }
    ctx->pc = 0x165FB4u;
    {
        const bool branch_taken_0x165fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165FB4u;
            // 0x165fb8: 0xa7c90000  sh          $t1, 0x0($fp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fb4) {
            ctx->pc = 0x16600Cu;
            goto label_16600c;
        }
    }
    ctx->pc = 0x165FBCu;
label_165fbc:
    // 0x165fbc: 0x0  nop
    ctx->pc = 0x165fbcu;
    // NOP
label_165fc0:
    // 0x165fc0: 0x14a20013  bne         $a1, $v0, . + 4 + (0x13 << 2)
label_165fc4:
    if (ctx->pc == 0x165FC4u) {
        ctx->pc = 0x165FC4u;
            // 0x165fc4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x165FC8u;
        goto label_165fc8;
    }
    ctx->pc = 0x165FC0u;
    {
        const bool branch_taken_0x165fc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x165FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165FC0u;
            // 0x165fc4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fc0) {
            ctx->pc = 0x166010u;
            goto label_166010;
        }
    }
    ctx->pc = 0x165FC8u;
label_165fc8:
    // 0x165fc8: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x165fc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_165fcc:
    // 0x165fcc: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x165fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_165fd0:
    // 0x165fd0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x165fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_165fd4:
    // 0x165fd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x165fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_165fd8:
    // 0x165fd8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x165fd8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_165fdc:
    // 0x165fdc: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x165fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
label_165fe0:
    // 0x165fe0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x165fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_165fe4:
    // 0x165fe4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x165fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_165fe8:
    // 0x165fe8: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x165fe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_165fec:
    // 0x165fec: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x165fecu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_165ff0:
    // 0x165ff0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_165ff4:
    if (ctx->pc == 0x165FF4u) {
        ctx->pc = 0x165FF4u;
            // 0x165ff4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x165FF8u;
        goto label_165ff8;
    }
    ctx->pc = 0x165FF0u;
    {
        const bool branch_taken_0x165ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ff0) {
            ctx->pc = 0x165FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165FF0u;
            // 0x165ff4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x165FF8u;
            goto label_165ff8;
        }
    }
    ctx->pc = 0x165FF8u;
label_165ff8:
    // 0x165ff8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x165ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_165ffc:
    // 0x165ffc: 0x1812  mflo        $v1
    ctx->pc = 0x165ffcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_166000:
    // 0x166000: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x166000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_166004:
    // 0x166004: 0xa28a0000  sb          $t2, 0x0($s4)
    ctx->pc = 0x166004u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 10));
label_166008:
    // 0x166008: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x166008u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 4));
label_16600c:
    // 0x16600c: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x16600cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_166010:
    // 0x166010: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_166014:
    if (ctx->pc == 0x166014u) {
        ctx->pc = 0x166014u;
            // 0x166014: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x166018u;
        goto label_166018;
    }
    ctx->pc = 0x166010u;
    {
        const bool branch_taken_0x166010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166010u;
            // 0x166014: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166010) {
            ctx->pc = 0x166048u;
            goto label_166048;
        }
    }
    ctx->pc = 0x166018u;
label_166018:
    // 0x166018: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x166018u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_16601c:
    // 0x16601c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_166020:
    if (ctx->pc == 0x166020u) {
        ctx->pc = 0x166020u;
            // 0x166020: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x166024u;
        goto label_166024;
    }
    ctx->pc = 0x16601Cu;
    {
        const bool branch_taken_0x16601c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16601Cu;
            // 0x166020: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16601c) {
            ctx->pc = 0x16604Cu;
            goto label_16604c;
        }
    }
    ctx->pc = 0x166024u;
label_166024:
    // 0x166024: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x166024u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_166028:
    // 0x166028: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x166028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_16602c:
    // 0x16602c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x16602cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_166030:
    // 0x166030: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_166034:
    if (ctx->pc == 0x166034u) {
        ctx->pc = 0x166034u;
            // 0x166034: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x166038u;
        goto label_166038;
    }
    ctx->pc = 0x166030u;
    {
        const bool branch_taken_0x166030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166030u;
            // 0x166034: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166030) {
            ctx->pc = 0x166050u;
            goto label_166050;
        }
    }
    ctx->pc = 0x166038u;
label_166038:
    // 0x166038: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x166038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_16603c:
    // 0x16603c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16603cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_166040:
    // 0x166040: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x166040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_166044:
    // 0x166044: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x166044u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_166048:
    // 0x166048: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x166048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16604c:
    // 0x16604c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16604cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_166050:
    // 0x166050: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x166050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_166054:
    // 0x166054: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x166054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_166058:
    // 0x166058: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x166058u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16605c:
    // 0x16605c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x16605cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_166060:
    // 0x166060: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x166060u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_166064:
    // 0x166064: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x166064u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_166068:
    // 0x166068: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x166068u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16606c:
    // 0x16606c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x16606cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_166070:
    // 0x166070: 0x3e00008  jr          $ra
label_166074:
    if (ctx->pc == 0x166074u) {
        ctx->pc = 0x166074u;
            // 0x166074: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x166078u;
        goto label_166078;
    }
    ctx->pc = 0x166070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166070u;
            // 0x166074: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166078u;
label_166078:
    // 0x166078: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x166078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16607c:
    // 0x16607c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16607cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_166080:
    // 0x166080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166084:
    // 0x166084: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x166084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_166088:
    // 0x166088: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x166088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16608c:
    // 0x16608c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x16608cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_166090:
    // 0x166090: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x166090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_166094:
    // 0x166094: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x166094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_166098:
    // 0x166098: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x166098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_16609c:
    // 0x16609c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x16609cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_1660a0:
    // 0x1660a0: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x1660a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_1660a4:
    // 0x1660a4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1660a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1660a8:
    // 0x1660a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1660a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1660ac:
    // 0x1660ac: 0xa6140002  sh          $s4, 0x2($s0)
    ctx->pc = 0x1660acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 20));
label_1660b0:
    // 0x1660b0: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x1660b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1660b4:
    // 0x1660b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1660b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1660b8:
    // 0x1660b8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1660b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1660bc:
    // 0x1660bc: 0x2603009c  addiu       $v1, $s0, 0x9C
    ctx->pc = 0x1660bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
label_1660c0:
    // 0x1660c0: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x1660c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1660c4:
    // 0x1660c4: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x1660c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_1660c8:
    // 0x1660c8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1660c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1660cc:
    // 0x1660cc: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1660ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1660d0:
    // 0x1660d0: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x1660d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1660d4:
    // 0x1660d4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1660d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1660d8:
    // 0x1660d8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1660d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1660dc:
    // 0x1660dc: 0xc059788  jal         func_165E20
label_1660e0:
    if (ctx->pc == 0x1660E0u) {
        ctx->pc = 0x1660E0u;
            // 0x1660e0: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->pc = 0x1660E4u;
        goto label_1660e4;
    }
    ctx->pc = 0x1660DCu;
    SET_GPR_U32(ctx, 31, 0x1660E4u);
    ctx->pc = 0x1660E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1660DCu;
            // 0x1660e0: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165E20u;
    goto label_165e20;
    ctx->pc = 0x1660E4u;
label_1660e4:
    // 0x1660e4: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_1660e8:
    if (ctx->pc == 0x1660E8u) {
        ctx->pc = 0x1660E8u;
            // 0x1660e8: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x1660ECu;
        goto label_1660ec;
    }
    ctx->pc = 0x1660E4u;
    {
        const bool branch_taken_0x1660e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1660e4) {
            ctx->pc = 0x1660E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1660E4u;
            // 0x1660e8: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1660F8u;
            goto label_1660f8;
        }
    }
    ctx->pc = 0x1660ECu;
label_1660ec:
    // 0x1660ec: 0x10000019  b           . + 4 + (0x19 << 2)
label_1660f0:
    if (ctx->pc == 0x1660F0u) {
        ctx->pc = 0x1660F0u;
            // 0x1660f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1660F4u;
        goto label_1660f4;
    }
    ctx->pc = 0x1660ECu;
    {
        const bool branch_taken_0x1660ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1660ECu;
            // 0x1660f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660ec) {
            ctx->pc = 0x166154u;
            goto label_166154;
        }
    }
    ctx->pc = 0x1660F4u;
label_1660f4:
    // 0x1660f4: 0x0  nop
    ctx->pc = 0x1660f4u;
    // NOP
label_1660f8:
    // 0x1660f8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1660f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1660fc:
    // 0x1660fc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1660fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_166100:
    // 0x166100: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x166100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_166104:
    // 0x166104: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x166104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_166108:
    // 0x166108: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x166108u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_16610c:
    // 0x16610c: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x16610cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_166110:
    // 0x166110: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x166110u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_166114:
    // 0x166114: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x166114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_166118:
    // 0x166118: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x166118u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_16611c:
    // 0x16611c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x16611cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_166120:
    // 0x166120: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x166120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_166124:
    // 0x166124: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x166124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_166128:
    // 0x166128: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x166128u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_16612c:
    // 0x16612c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x16612cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_166130:
    // 0x166130: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x166130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_166134:
    // 0x166134: 0xa6140098  sh          $s4, 0x98($s0)
    ctx->pc = 0x166134u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 20));
label_166138:
    // 0x166138: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x166138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16613c:
    // 0x16613c: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x16613cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_166140:
    // 0x166140: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x166140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_166144:
    // 0x166144: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x166144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_166148:
    // 0x166148: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x166148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_16614c:
    // 0x16614c: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x16614cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_166150:
    // 0x166150: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x166150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_166154:
    // 0x166154: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x166154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_166158:
    // 0x166158: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x166158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16615c:
    // 0x16615c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x16615cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_166160:
    // 0x166160: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x166160u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_166164:
    // 0x166164: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x166164u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_166168:
    // 0x166168: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x166168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_16616c:
    // 0x16616c: 0x3e00008  jr          $ra
label_166170:
    if (ctx->pc == 0x166170u) {
        ctx->pc = 0x166170u;
            // 0x166170: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x166174u;
        goto label_166174;
    }
    ctx->pc = 0x16616Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16616Cu;
            // 0x166170: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166174u;
label_166174:
    // 0x166174: 0x0  nop
    ctx->pc = 0x166174u;
    // NOP
label_166178:
    // 0x166178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16617c:
    // 0x16617c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166180:
    // 0x166180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x166180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_166184:
    // 0x166184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166188:
    // 0x166188: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x166188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16618c:
    // 0x16618c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x16618cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_166190:
    // 0x166190: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x166190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_166194:
    // 0x166194: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x166194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_166198:
    // 0x166198: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x166198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16619c:
    // 0x16619c: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_1661a0:
    if (ctx->pc == 0x1661A0u) {
        ctx->pc = 0x1661A0u;
            // 0x1661a0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1661A4u;
        goto label_1661a4;
    }
    ctx->pc = 0x16619Cu;
    {
        const bool branch_taken_0x16619c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1661A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16619Cu;
            // 0x1661a0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16619c) {
            ctx->pc = 0x1662ACu;
            goto label_1662ac;
        }
    }
    ctx->pc = 0x1661A4u;
label_1661a4:
    // 0x1661a4: 0xc05df6e  jal         func_177DB8
label_1661a8:
    if (ctx->pc == 0x1661A8u) {
        ctx->pc = 0x1661A8u;
            // 0x1661a8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1661ACu;
        goto label_1661ac;
    }
    ctx->pc = 0x1661A4u;
    SET_GPR_U32(ctx, 31, 0x1661ACu);
    ctx->pc = 0x1661A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1661A4u;
            // 0x1661a8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177DB8u;
    if (runtime->hasFunction(0x177DB8u)) {
        auto targetFn = runtime->lookupFunction(0x177DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661ACu; }
        if (ctx->pc != 0x1661ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DB8_0x177db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661ACu; }
        if (ctx->pc != 0x1661ACu) { return; }
    }
    ctx->pc = 0x1661ACu;
label_1661ac:
    // 0x1661ac: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_1661b0:
    if (ctx->pc == 0x1661B0u) {
        ctx->pc = 0x1661B0u;
            // 0x1661b0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1661B4u;
        goto label_1661b4;
    }
    ctx->pc = 0x1661ACu;
    {
        const bool branch_taken_0x1661ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1661ac) {
            ctx->pc = 0x1661B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1661ACu;
            // 0x1661b0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1662ACu;
            goto label_1662ac;
        }
    }
    ctx->pc = 0x1661B4u;
label_1661b4:
    // 0x1661b4: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1661b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1661b8:
    // 0x1661b8: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1661b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1661bc:
    // 0x1661bc: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1661bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1661c0:
    // 0x1661c0: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1661c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1661c4:
    // 0x1661c4: 0x40f809  jalr        $v0
label_1661c8:
    if (ctx->pc == 0x1661C8u) {
        ctx->pc = 0x1661C8u;
            // 0x1661c8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1661CCu;
        goto label_1661cc;
    }
    ctx->pc = 0x1661C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1661CCu);
        ctx->pc = 0x1661C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1661C4u;
            // 0x1661c8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1661CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1661CCu; }
            if (ctx->pc != 0x1661CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1661CCu;
label_1661cc:
    // 0x1661cc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1661ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1661d0:
    // 0x1661d0: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x1661d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1661d4:
    // 0x1661d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1661d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1661d8:
    // 0x1661d8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1661d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1661dc:
    // 0x1661dc: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x1661dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1661e0:
    // 0x1661e0: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x1661e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1661e4:
    // 0x1661e4: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x1661e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1661e8:
    // 0x1661e8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1661e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1661ec:
    // 0x1661ec: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x1661ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_1661f0:
    // 0x1661f0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1661f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1661f4:
    // 0x1661f4: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x1661f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1661f8:
    // 0x1661f8: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x1661f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1661fc:
    // 0x1661fc: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x1661fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_166200:
    // 0x166200: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x166200u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_166204:
    // 0x166204: 0x14860016  bne         $a0, $a2, . + 4 + (0x16 << 2)
label_166208:
    if (ctx->pc == 0x166208u) {
        ctx->pc = 0x166208u;
            // 0x166208: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x16620Cu;
        goto label_16620c;
    }
    ctx->pc = 0x166204u;
    {
        const bool branch_taken_0x166204 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x166208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166204u;
            // 0x166208: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166204) {
            ctx->pc = 0x166260u;
            goto label_166260;
        }
    }
    ctx->pc = 0x16620Cu;
label_16620c:
    // 0x16620c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x16620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_166210:
    // 0x166210: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x166210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166214:
    // 0x166214: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x166214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_166218:
    // 0x166218: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x166218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_16621c:
    // 0x16621c: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
label_166220:
    if (ctx->pc == 0x166220u) {
        ctx->pc = 0x166220u;
            // 0x166220: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x166224u;
        goto label_166224;
    }
    ctx->pc = 0x16621Cu;
    {
        const bool branch_taken_0x16621c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x166220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16621Cu;
            // 0x166220: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16621c) {
            ctx->pc = 0x16628Cu;
            goto label_16628c;
        }
    }
    ctx->pc = 0x166224u;
label_166224:
    // 0x166224: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x166224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_166228:
    // 0x166228: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x166228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_16622c:
    // 0x16622c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x16622cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_166230:
    // 0x166230: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x166230u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_166234:
    // 0x166234: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x166234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_166238:
    // 0x166238: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x166238u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_16623c:
    // 0x16623c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x16623cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_166240:
    // 0x166240: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x166240u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_166244:
    // 0x166244: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x166244u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_166248:
    // 0x166248: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x166248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_16624c:
    // 0x16624c: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
label_166250:
    if (ctx->pc == 0x166250u) {
        ctx->pc = 0x166250u;
            // 0x166250: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x166254u;
        goto label_166254;
    }
    ctx->pc = 0x16624Cu;
    {
        const bool branch_taken_0x16624c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x166250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16624Cu;
            // 0x166250: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16624c) {
            ctx->pc = 0x166228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166228;
        }
    }
    ctx->pc = 0x166254u;
label_166254:
    // 0x166254: 0x1000000d  b           . + 4 + (0xD << 2)
label_166258:
    if (ctx->pc == 0x166258u) {
        ctx->pc = 0x166258u;
            // 0x166258: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x16625Cu;
        goto label_16625c;
    }
    ctx->pc = 0x166254u;
    {
        const bool branch_taken_0x166254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166254u;
            // 0x166258: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166254) {
            ctx->pc = 0x16628Cu;
            goto label_16628c;
        }
    }
    ctx->pc = 0x16625Cu;
label_16625c:
    // 0x16625c: 0x0  nop
    ctx->pc = 0x16625cu;
    // NOP
label_166260:
    // 0x166260: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_166264:
    if (ctx->pc == 0x166264u) {
        ctx->pc = 0x166264u;
            // 0x166264: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166268u;
        goto label_166268;
    }
    ctx->pc = 0x166260u;
    {
        const bool branch_taken_0x166260 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x166264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166260u;
            // 0x166264: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166260) {
            ctx->pc = 0x16628Cu;
            goto label_16628c;
        }
    }
    ctx->pc = 0x166268u;
label_166268:
    // 0x166268: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x166268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_16626c:
    // 0x16626c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x16626cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_166270:
    // 0x166270: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x166270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_166274:
    // 0x166274: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x166274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_166278:
    // 0x166278: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x166278u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_16627c:
    // 0x16627c: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x16627cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_166280:
    // 0x166280: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_166284:
    if (ctx->pc == 0x166284u) {
        ctx->pc = 0x166284u;
            // 0x166284: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x166288u;
        goto label_166288;
    }
    ctx->pc = 0x166280u;
    {
        const bool branch_taken_0x166280 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x166284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166280u;
            // 0x166284: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166280) {
            ctx->pc = 0x166268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166268;
        }
    }
    ctx->pc = 0x166288u;
label_166288:
    // 0x166288: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x166288u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_16628c:
    // 0x16628c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x16628cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_166290:
    // 0x166290: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x166290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_166294:
    // 0x166294: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x166294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_166298:
    // 0x166298: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x166298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_16629c:
    // 0x16629c: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x16629cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1662a0:
    // 0x1662a0: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x1662a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_1662a4:
    // 0x1662a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1662a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1662a8:
    // 0x1662a8: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1662a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1662ac:
    // 0x1662ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1662acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1662b0:
    // 0x1662b0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1662b4:
    if (ctx->pc == 0x1662B4u) {
        ctx->pc = 0x1662B4u;
            // 0x1662b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1662B8u;
        goto label_1662b8;
    }
    ctx->pc = 0x1662B0u;
    {
        const bool branch_taken_0x1662b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1662b0) {
            ctx->pc = 0x1662B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1662B0u;
            // 0x1662b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1662D8u;
            goto label_1662d8;
        }
    }
    ctx->pc = 0x1662B8u;
label_1662b8:
    // 0x1662b8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1662b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1662bc:
    // 0x1662bc: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1662bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1662c0:
    // 0x1662c0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1662c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1662c4:
    // 0x1662c4: 0x60f809  jalr        $v1
label_1662c8:
    if (ctx->pc == 0x1662C8u) {
        ctx->pc = 0x1662C8u;
            // 0x1662c8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x1662CCu;
        goto label_1662cc;
    }
    ctx->pc = 0x1662C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1662CCu);
        ctx->pc = 0x1662C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1662C4u;
            // 0x1662c8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1662CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1662CCu; }
            if (ctx->pc != 0x1662CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1662CCu;
label_1662cc:
    // 0x1662cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1662ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1662d0:
    // 0x1662d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1662d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1662d4:
    // 0x1662d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1662d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1662d8:
    // 0x1662d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1662d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1662dc:
    // 0x1662dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1662dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1662e0:
    // 0x1662e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1662e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1662e4:
    // 0x1662e4: 0x3e00008  jr          $ra
label_1662e8:
    if (ctx->pc == 0x1662E8u) {
        ctx->pc = 0x1662E8u;
            // 0x1662e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1662ECu;
        goto label_1662ec;
    }
    ctx->pc = 0x1662E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1662E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1662E4u;
            // 0x1662e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1662ECu;
label_1662ec:
    // 0x1662ec: 0x0  nop
    ctx->pc = 0x1662ecu;
    // NOP
label_1662f0:
    // 0x1662f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1662f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1662f4:
    // 0x1662f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1662f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1662f8:
    // 0x1662f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1662f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1662fc:
    // 0x1662fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1662fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166300:
    // 0x166300: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x166300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_166304:
    // 0x166304: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x166304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_166308:
    // 0x166308: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x166308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16630c:
    // 0x16630c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16630cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_166310:
    // 0x166310: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x166310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_166314:
    // 0x166314: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
label_166318:
    if (ctx->pc == 0x166318u) {
        ctx->pc = 0x166318u;
            // 0x166318: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x16631Cu;
        goto label_16631c;
    }
    ctx->pc = 0x166314u;
    {
        const bool branch_taken_0x166314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x166318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166314u;
            // 0x166318: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166314) {
            ctx->pc = 0x166444u;
            goto label_166444;
        }
    }
    ctx->pc = 0x16631Cu;
label_16631c:
    // 0x16631c: 0xc05df6e  jal         func_177DB8
label_166320:
    if (ctx->pc == 0x166320u) {
        ctx->pc = 0x166320u;
            // 0x166320: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x166324u;
        goto label_166324;
    }
    ctx->pc = 0x16631Cu;
    SET_GPR_U32(ctx, 31, 0x166324u);
    ctx->pc = 0x166320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16631Cu;
            // 0x166320: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177DB8u;
    if (runtime->hasFunction(0x177DB8u)) {
        auto targetFn = runtime->lookupFunction(0x177DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166324u; }
        if (ctx->pc != 0x166324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DB8_0x177db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166324u; }
        if (ctx->pc != 0x166324u) { return; }
    }
    ctx->pc = 0x166324u;
label_166324:
    // 0x166324: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
label_166328:
    if (ctx->pc == 0x166328u) {
        ctx->pc = 0x166328u;
            // 0x166328: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x16632Cu;
        goto label_16632c;
    }
    ctx->pc = 0x166324u;
    {
        const bool branch_taken_0x166324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166324) {
            ctx->pc = 0x166328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166324u;
            // 0x166328: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166444u;
            goto label_166444;
        }
    }
    ctx->pc = 0x16632Cu;
label_16632c:
    // 0x16632c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x16632cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_166330:
    // 0x166330: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x166330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_166334:
    // 0x166334: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x166334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_166338:
    // 0x166338: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x166338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_16633c:
    // 0x16633c: 0x40f809  jalr        $v0
label_166340:
    if (ctx->pc == 0x166340u) {
        ctx->pc = 0x166340u;
            // 0x166340: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x166344u;
        goto label_166344;
    }
    ctx->pc = 0x16633Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166344u);
        ctx->pc = 0x166340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16633Cu;
            // 0x166340: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x166344u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166344u; }
            if (ctx->pc != 0x166344u) { return; }
        }
        }
    }
    ctx->pc = 0x166344u;
label_166344:
    // 0x166344: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x166344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_166348:
    // 0x166348: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x166348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_16634c:
    // 0x16634c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16634cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_166350:
    // 0x166350: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x166350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_166354:
    // 0x166354: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x166354u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_166358:
    // 0x166358: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x166358u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_16635c:
    // 0x16635c: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x16635cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_166360:
    // 0x166360: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x166360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_166364:
    // 0x166364: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x166364u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_166368:
    // 0x166368: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x166368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_16636c:
    // 0x16636c: 0x8e2a0014  lw          $t2, 0x14($s1)
    ctx->pc = 0x16636cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_166370:
    // 0x166370: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x166370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_166374:
    // 0x166374: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x166374u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_166378:
    // 0x166378: 0x1435821  addu        $t3, $t2, $v1
    ctx->pc = 0x166378u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_16637c:
    // 0x16637c: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_166380:
    if (ctx->pc == 0x166380u) {
        ctx->pc = 0x166380u;
            // 0x166380: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x166384u;
        goto label_166384;
    }
    ctx->pc = 0x16637Cu;
    {
        const bool branch_taken_0x16637c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x166380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16637Cu;
            // 0x166380: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16637c) {
            ctx->pc = 0x1663F0u;
            goto label_1663f0;
        }
    }
    ctx->pc = 0x166384u;
label_166384:
    // 0x166384: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x166384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_166388:
    // 0x166388: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x166388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16638c:
    // 0x16638c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x16638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_166390:
    // 0x166390: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x166390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_166394:
    // 0x166394: 0x19200024  blez        $t1, . + 4 + (0x24 << 2)
label_166398:
    if (ctx->pc == 0x166398u) {
        ctx->pc = 0x166398u;
            // 0x166398: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->pc = 0x16639Cu;
        goto label_16639c;
    }
    ctx->pc = 0x166394u;
    {
        const bool branch_taken_0x166394 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x166398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166394u;
            // 0x166398: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166394) {
            ctx->pc = 0x166428u;
            goto label_166428;
        }
    }
    ctx->pc = 0x16639Cu;
label_16639c:
    // 0x16639c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x16639cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1663a0:
    // 0x1663a0: 0x340aff80  ori         $t2, $zero, 0xFF80
    ctx->pc = 0x1663a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_1663a4:
    // 0x1663a4: 0x0  nop
    ctx->pc = 0x1663a4u;
    // NOP
label_1663a8:
    // 0x1663a8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1663a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1663ac:
    // 0x1663ac: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x1663acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1663b0:
    // 0x1663b0: 0x8b2821  addu        $a1, $a0, $t3
    ctx->pc = 0x1663b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1663b4:
    // 0x1663b4: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x1663b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1663b8:
    // 0x1663b8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1663b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1663bc:
    // 0x1663bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1663bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1663c0:
    // 0x1663c0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1663c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1663c4:
    // 0x1663c4: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x1663c4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1663c8:
    // 0x1663c8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1663c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1663cc:
    // 0x1663cc: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x1663ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_1663d0:
    // 0x1663d0: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1663d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_1663d4:
    // 0x1663d4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1663d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1663d8:
    // 0x1663d8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1663d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1663dc:
    // 0x1663dc: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
label_1663e0:
    if (ctx->pc == 0x1663E0u) {
        ctx->pc = 0x1663E0u;
            // 0x1663e0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1663E4u;
        goto label_1663e4;
    }
    ctx->pc = 0x1663DCu;
    {
        const bool branch_taken_0x1663dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1663E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1663DCu;
            // 0x1663e0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663dc) {
            ctx->pc = 0x1663A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1663a8;
        }
    }
    ctx->pc = 0x1663E4u;
label_1663e4:
    // 0x1663e4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1663e8:
    if (ctx->pc == 0x1663E8u) {
        ctx->pc = 0x1663E8u;
            // 0x1663e8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1663ECu;
        goto label_1663ec;
    }
    ctx->pc = 0x1663E4u;
    {
        const bool branch_taken_0x1663e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1663E4u;
            // 0x1663e8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663e4) {
            ctx->pc = 0x166428u;
            goto label_166428;
        }
    }
    ctx->pc = 0x1663ECu;
label_1663ec:
    // 0x1663ec: 0x0  nop
    ctx->pc = 0x1663ecu;
    // NOP
label_1663f0:
    // 0x1663f0: 0x1920000d  blez        $t1, . + 4 + (0xD << 2)
label_1663f4:
    if (ctx->pc == 0x1663F4u) {
        ctx->pc = 0x1663F4u;
            // 0x1663f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1663F8u;
        goto label_1663f8;
    }
    ctx->pc = 0x1663F0u;
    {
        const bool branch_taken_0x1663f0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1663F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1663F0u;
            // 0x1663f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663f0) {
            ctx->pc = 0x166428u;
            goto label_166428;
        }
    }
    ctx->pc = 0x1663F8u;
label_1663f8:
    // 0x1663f8: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1663f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1663fc:
    // 0x1663fc: 0x3406ff80  ori         $a2, $zero, 0xFF80
    ctx->pc = 0x1663fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_166400:
    // 0x166400: 0x2481021  addu        $v0, $s2, $t0
    ctx->pc = 0x166400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_166404:
    // 0x166404: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x166404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_166408:
    // 0x166408: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x166408u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_16640c:
    // 0x16640c: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x16640cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_166410:
    // 0x166410: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x166410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_166414:
    // 0x166414: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x166414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_166418:
    // 0x166418: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x166418u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_16641c:
    // 0x16641c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_166420:
    if (ctx->pc == 0x166420u) {
        ctx->pc = 0x166420u;
            // 0x166420: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x166424u;
        goto label_166424;
    }
    ctx->pc = 0x16641Cu;
    {
        const bool branch_taken_0x16641c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x166420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16641Cu;
            // 0x166420: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16641c) {
            ctx->pc = 0x166400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166400;
        }
    }
    ctx->pc = 0x166424u;
label_166424:
    // 0x166424: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x166424u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_166428:
    // 0x166428: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x166428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_16642c:
    // 0x16642c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16642cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_166430:
    // 0x166430: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x166430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_166434:
    // 0x166434: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x166434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_166438:
    // 0x166438: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x166438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_16643c:
    // 0x16643c: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x16643cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_166440:
    // 0x166440: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x166440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_166444:
    // 0x166444: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x166444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_166448:
    // 0x166448: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_16644c:
    if (ctx->pc == 0x16644Cu) {
        ctx->pc = 0x16644Cu;
            // 0x16644c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x166450u;
        goto label_166450;
    }
    ctx->pc = 0x166448u;
    {
        const bool branch_taken_0x166448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x166448) {
            ctx->pc = 0x16644Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166448u;
            // 0x16644c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166470u;
            goto label_166470;
        }
    }
    ctx->pc = 0x166450u;
label_166450:
    // 0x166450: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x166450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_166454:
    // 0x166454: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x166454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_166458:
    // 0x166458: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x166458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_16645c:
    // 0x16645c: 0x60f809  jalr        $v1
label_166460:
    if (ctx->pc == 0x166460u) {
        ctx->pc = 0x166460u;
            // 0x166460: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x166464u;
        goto label_166464;
    }
    ctx->pc = 0x16645Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166464u);
        ctx->pc = 0x166460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16645Cu;
            // 0x166460: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x166464u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166464u; }
            if (ctx->pc != 0x166464u) { return; }
        }
        }
    }
    ctx->pc = 0x166464u;
label_166464:
    // 0x166464: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x166464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_166468:
    // 0x166468: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x166468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_16646c:
    // 0x16646c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16646cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166470:
    // 0x166470: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x166470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166474:
    // 0x166474: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x166474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_166478:
    // 0x166478: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x166478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16647c:
    // 0x16647c: 0x3e00008  jr          $ra
label_166480:
    if (ctx->pc == 0x166480u) {
        ctx->pc = 0x166480u;
            // 0x166480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x166484u;
        goto label_166484;
    }
    ctx->pc = 0x16647Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16647Cu;
            // 0x166480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166484u;
label_166484:
    // 0x166484: 0x0  nop
    ctx->pc = 0x166484u;
    // NOP
label_166488:
    // 0x166488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16648c:
    // 0x16648c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166490:
    // 0x166490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x166490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_166494:
    // 0x166494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166498:
    // 0x166498: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x166498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16649c:
    // 0x16649c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x16649cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1664a0:
    // 0x1664a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1664a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1664a4:
    // 0x1664a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1664a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1664a8:
    // 0x1664a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1664a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1664ac:
    // 0x1664ac: 0x1462004d  bne         $v1, $v0, . + 4 + (0x4D << 2)
label_1664b0:
    if (ctx->pc == 0x1664B0u) {
        ctx->pc = 0x1664B0u;
            // 0x1664b0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1664B4u;
        goto label_1664b4;
    }
    ctx->pc = 0x1664ACu;
    {
        const bool branch_taken_0x1664ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1664B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1664ACu;
            // 0x1664b0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1664ac) {
            ctx->pc = 0x1665E4u;
            goto label_1665e4;
        }
    }
    ctx->pc = 0x1664B4u;
label_1664b4:
    // 0x1664b4: 0xc05df6e  jal         func_177DB8
label_1664b8:
    if (ctx->pc == 0x1664B8u) {
        ctx->pc = 0x1664B8u;
            // 0x1664b8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1664BCu;
        goto label_1664bc;
    }
    ctx->pc = 0x1664B4u;
    SET_GPR_U32(ctx, 31, 0x1664BCu);
    ctx->pc = 0x1664B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1664B4u;
            // 0x1664b8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177DB8u;
    if (runtime->hasFunction(0x177DB8u)) {
        auto targetFn = runtime->lookupFunction(0x177DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1664BCu; }
        if (ctx->pc != 0x1664BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DB8_0x177db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1664BCu; }
        if (ctx->pc != 0x1664BCu) { return; }
    }
    ctx->pc = 0x1664BCu;
label_1664bc:
    // 0x1664bc: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
label_1664c0:
    if (ctx->pc == 0x1664C0u) {
        ctx->pc = 0x1664C0u;
            // 0x1664c0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1664C4u;
        goto label_1664c4;
    }
    ctx->pc = 0x1664BCu;
    {
        const bool branch_taken_0x1664bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1664bc) {
            ctx->pc = 0x1664C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1664BCu;
            // 0x1664c0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1665E4u;
            goto label_1665e4;
        }
    }
    ctx->pc = 0x1664C4u;
label_1664c4:
    // 0x1664c4: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1664c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1664c8:
    // 0x1664c8: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1664c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1664cc:
    // 0x1664cc: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1664ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1664d0:
    // 0x1664d0: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1664d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1664d4:
    // 0x1664d4: 0x40f809  jalr        $v0
label_1664d8:
    if (ctx->pc == 0x1664D8u) {
        ctx->pc = 0x1664D8u;
            // 0x1664d8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1664DCu;
        goto label_1664dc;
    }
    ctx->pc = 0x1664D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1664DCu);
        ctx->pc = 0x1664D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1664D4u;
            // 0x1664d8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1664DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1664DCu; }
            if (ctx->pc != 0x1664DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1664DCu;
label_1664dc:
    // 0x1664dc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1664dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1664e0:
    // 0x1664e0: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x1664e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1664e4:
    // 0x1664e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1664e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1664e8:
    // 0x1664e8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1664e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1664ec:
    // 0x1664ec: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x1664ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1664f0:
    // 0x1664f0: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x1664f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1664f4:
    // 0x1664f4: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x1664f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1664f8:
    // 0x1664f8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1664f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1664fc:
    // 0x1664fc: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x1664fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_166500:
    // 0x166500: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x166500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_166504:
    // 0x166504: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x166504u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_166508:
    // 0x166508: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x166508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_16650c:
    // 0x16650c: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x16650cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_166510:
    // 0x166510: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x166510u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_166514:
    // 0x166514: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_166518:
    if (ctx->pc == 0x166518u) {
        ctx->pc = 0x166518u;
            // 0x166518: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x16651Cu;
        goto label_16651c;
    }
    ctx->pc = 0x166514u;
    {
        const bool branch_taken_0x166514 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x166518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166514u;
            // 0x166518: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166514) {
            ctx->pc = 0x166588u;
            goto label_166588;
        }
    }
    ctx->pc = 0x16651Cu;
label_16651c:
    // 0x16651c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x16651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_166520:
    // 0x166520: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x166520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166524:
    // 0x166524: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x166524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_166528:
    // 0x166528: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x166528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_16652c:
    // 0x16652c: 0x19200025  blez        $t1, . + 4 + (0x25 << 2)
label_166530:
    if (ctx->pc == 0x166530u) {
        ctx->pc = 0x166530u;
            // 0x166530: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x166534u;
        goto label_166534;
    }
    ctx->pc = 0x16652Cu;
    {
        const bool branch_taken_0x16652c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x166530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16652Cu;
            // 0x166530: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16652c) {
            ctx->pc = 0x1665C4u;
            goto label_1665c4;
        }
    }
    ctx->pc = 0x166534u;
label_166534:
    // 0x166534: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x166534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_166538:
    // 0x166538: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x166538u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_16653c:
    // 0x16653c: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x16653cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_166540:
    // 0x166540: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x166540u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_166544:
    // 0x166544: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x166544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_166548:
    // 0x166548: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x166548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_16654c:
    // 0x16654c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x16654cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_166550:
    // 0x166550: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x166550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_166554:
    // 0x166554: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x166554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_166558:
    // 0x166558: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x166558u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_16655c:
    // 0x16655c: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x16655cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_166560:
    // 0x166560: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x166560u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_166564:
    // 0x166564: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x166564u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_166568:
    // 0x166568: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x166568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_16656c:
    // 0x16656c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x16656cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_166570:
    // 0x166570: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x166570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_166574:
    // 0x166574: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_166578:
    if (ctx->pc == 0x166578u) {
        ctx->pc = 0x166578u;
            // 0x166578: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x16657Cu;
        goto label_16657c;
    }
    ctx->pc = 0x166574u;
    {
        const bool branch_taken_0x166574 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x166578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166574u;
            // 0x166578: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166574) {
            ctx->pc = 0x166538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166538;
        }
    }
    ctx->pc = 0x16657Cu;
label_16657c:
    // 0x16657c: 0x10000011  b           . + 4 + (0x11 << 2)
label_166580:
    if (ctx->pc == 0x166580u) {
        ctx->pc = 0x166580u;
            // 0x166580: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x166584u;
        goto label_166584;
    }
    ctx->pc = 0x16657Cu;
    {
        const bool branch_taken_0x16657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16657Cu;
            // 0x166580: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16657c) {
            ctx->pc = 0x1665C4u;
            goto label_1665c4;
        }
    }
    ctx->pc = 0x166584u;
label_166584:
    // 0x166584: 0x0  nop
    ctx->pc = 0x166584u;
    // NOP
label_166588:
    // 0x166588: 0x1920000e  blez        $t1, . + 4 + (0xE << 2)
label_16658c:
    if (ctx->pc == 0x16658Cu) {
        ctx->pc = 0x16658Cu;
            // 0x16658c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166590u;
        goto label_166590;
    }
    ctx->pc = 0x166588u;
    {
        const bool branch_taken_0x166588 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x16658Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166588u;
            // 0x16658c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166588) {
            ctx->pc = 0x1665C4u;
            goto label_1665c4;
        }
    }
    ctx->pc = 0x166590u;
label_166590:
    // 0x166590: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x166590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_166594:
    // 0x166594: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x166594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_166598:
    // 0x166598: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x166598u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_16659c:
    // 0x16659c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x16659cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1665a0:
    // 0x1665a0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1665a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1665a4:
    // 0x1665a4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1665a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1665a8:
    // 0x1665a8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1665a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1665ac:
    // 0x1665ac: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x1665acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1665b0:
    // 0x1665b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1665b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1665b4:
    // 0x1665b4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1665b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_1665b8:
    // 0x1665b8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_1665bc:
    if (ctx->pc == 0x1665BCu) {
        ctx->pc = 0x1665BCu;
            // 0x1665bc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x1665C0u;
        goto label_1665c0;
    }
    ctx->pc = 0x1665B8u;
    {
        const bool branch_taken_0x1665b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1665BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1665B8u;
            // 0x1665bc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665b8) {
            ctx->pc = 0x166598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166598;
        }
    }
    ctx->pc = 0x1665C0u;
label_1665c0:
    // 0x1665c0: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x1665c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1665c4:
    // 0x1665c4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1665c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1665c8:
    // 0x1665c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1665c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1665cc:
    // 0x1665cc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1665ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1665d0:
    // 0x1665d0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1665d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1665d4:
    // 0x1665d4: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x1665d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1665d8:
    // 0x1665d8: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x1665d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_1665dc:
    // 0x1665dc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1665dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1665e0:
    // 0x1665e0: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1665e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1665e4:
    // 0x1665e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1665e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1665e8:
    // 0x1665e8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1665ec:
    if (ctx->pc == 0x1665ECu) {
        ctx->pc = 0x1665ECu;
            // 0x1665ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1665F0u;
        goto label_1665f0;
    }
    ctx->pc = 0x1665E8u;
    {
        const bool branch_taken_0x1665e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1665e8) {
            ctx->pc = 0x1665ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1665E8u;
            // 0x1665ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166610u;
            goto label_166610;
        }
    }
    ctx->pc = 0x1665F0u;
label_1665f0:
    // 0x1665f0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1665f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1665f4:
    // 0x1665f4: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1665f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1665f8:
    // 0x1665f8: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1665f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1665fc:
    // 0x1665fc: 0x60f809  jalr        $v1
label_166600:
    if (ctx->pc == 0x166600u) {
        ctx->pc = 0x166600u;
            // 0x166600: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x166604u;
        goto label_166604;
    }
    ctx->pc = 0x1665FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166604u);
        ctx->pc = 0x166600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1665FCu;
            // 0x166600: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x166604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166604u; }
            if (ctx->pc != 0x166604u) { return; }
        }
        }
    }
    ctx->pc = 0x166604u;
label_166604:
    // 0x166604: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x166604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_166608:
    // 0x166608: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x166608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_16660c:
    // 0x16660c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16660cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166610:
    // 0x166610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x166610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166614:
    // 0x166614: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x166614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_166618:
    // 0x166618: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x166618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16661c:
    // 0x16661c: 0x3e00008  jr          $ra
label_166620:
    if (ctx->pc == 0x166620u) {
        ctx->pc = 0x166620u;
            // 0x166620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x166624u;
        goto label_166624;
    }
    ctx->pc = 0x16661Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16661Cu;
            // 0x166620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166624u;
label_166624:
    // 0x166624: 0x0  nop
    ctx->pc = 0x166624u;
    // NOP
}
